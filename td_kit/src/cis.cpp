/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/cis.hpp"

#include "core_kit/dFock.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "gto_kit/os1_integral_engine.hpp"
#include "io_kit/log.hpp"
#include "misc_kit/blackbox.hpp"
#include "misc_kit/dispatcher.hpp"

#include <boost/ref.hpp>
#include <functional>

#include <cmath>

namespace niedoida {
    namespace td {

        RCIS::MultiSigma::MultiSigma(
            std::shared_ptr<const core::System> system,
            const arma::mat& mo_coeffs,
            const arma::vec& eps,
            std::size_t no_frozen,
            std::size_t no_deleted,
            Multiplicity mult,
            core::PseudoFockMultiMatrixGenerator& fm_gen) :
            Base::MultiSigma(
                system, mo_coeffs, eps, no_frozen, no_deleted, mult, 1.0),
            m_fock_matrix_generator(&fm_gen)
        {
        }

        std::vector<arma::mat>
        RCIS::MultiSigma::calc(const std::vector<arma::mat>& ci_coeffs) const
        {
            const std::size_t no_vectors = ci_coeffs.size();

            std::vector<arma::cube> P(2);

            P[core::SPIN_ALPHA].set_size(
                m_mo_coeffs.n_rows, m_mo_coeffs.n_rows, no_vectors);
            P[core::SPIN_BETA].set_size(
                m_mo_coeffs.n_rows, m_mo_coeffs.n_rows, no_vectors);

            for (std::size_t n = 0; n < no_vectors; ++n) {
                P[core::SPIN_ALPHA].slice(n) =
                    core::pseudo_density_matrix(m_mo_coeffs, ci_coeffs[n]);
            }

            P[core::SPIN_BETA] = P[core::SPIN_ALPHA];

            m_fock_matrix_generator->set_density_matrix(P);

            std::vector<arma::mat> multi_sigma;

            for (std::size_t n = 0; n < no_vectors; ++n) {
                const arma::mat J = m_fock_matrix_generator->coulomb_matrix(n);

                const arma::mat K = m_fock_matrix_generator->exchange_matrix(
                    n, core::SPIN_ALPHA);

                const arma::mat F_ao = (m_mult == SINGLET) ? J + K : K;

                // transform the pseudo-fock matrix to the MO basis
                const arma::mat A = F_ao * m_mo_coeffs_virt;
                const arma::mat F_mo_ov = trans(m_mo_coeffs_occ) * A;

                // form the final result, including both diagonal and
                // nondiagonal terms
                const arma::mat sigma = ci_coeffs[n] % m_delta_eps + F_mo_ov;

                multi_sigma.push_back(sigma);
            }

            return multi_sigma;
        }

        RCIS::RCIS(Multiplicity multiplicity,
                   std::shared_ptr<const core::System> system,
                   const arma::mat mo_coeffs,
                   const arma::vec eps,
                   std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                       ie_factory,
                   unsigned no_frozen,
                   unsigned no_deleted,
                   unsigned no_states,
                   unsigned no_roots,
                   unsigned no_iterations,
                   double diagonalization_threshold,
                   double integral_threshold) :
            RestrictedTD(system, eps, no_frozen, no_deleted, no_roots),
            m_fm_gen(system, ie_factory, integral_threshold)
        {
            assert(no_iterations >= 1);
            assert(system->no_electrons(core::SPIN_ALPHA) ==
                   system->no_electrons(core::SPIN_BETA));
            io::Log::Section cis_section("restricted cis");

            // starting vectors for true CIS problem
            arma::mat v_0(m_n, no_roots, arma::fill::zeros);

            if (no_roots > m_n)
                no_roots = m_n;

            MultiSigma ig_sigma(system,
                                mo_coeffs,
                                eps,
                                m_ig_no_frozen,
                                m_ig_no_deleted,
                                multiplicity,
                                m_fm_gen);

            std::function<arma::mat(const arma::mat&)> igs =
                std::function<arma::mat(const arma::mat&)>(std::ref(ig_sigma));

            misc::davidson_liu_diagonalize(igs,
                                           m_ig_delta_eps,
                                           m_ig_v_0,
                                           no_roots,
                                           no_roots,
                                           m_energies,
                                           m_coefficients,
                                           1,
                                           1000);

            // fill in starting vectors
            for (unsigned i = 0; i < m_small_part_occ; ++i)
                for (unsigned a = 0; a < m_small_part_virt; ++a)
                    for (unsigned k = 0; k < no_roots; ++k)
                        v_0((i + m_ig_no_frozen - no_frozen) *
                                    (m_no_virt - no_deleted) +
                                a,
                            k) = m_coefficients(i * m_small_part_virt + a, k);

            io::Log::instance().write(io::Logger::DEBUG, "v_0", v_0);

            io::Log::Section main_section("full hamiltonian diagonalization");

            // solve true CIS problem
            core::PseudoFockMultiMatrixGenerator fmm_gen(
                system, ie_factory, integral_threshold);

            MultiSigma multi_sigma(system,
                                   mo_coeffs,
                                   eps,
                                   no_frozen,
                                   no_deleted,
                                   multiplicity,
                                   fmm_gen);

            arma::vec delta_eps(m_n);
            for (unsigned i = 0; i < m_no_occ - no_frozen; ++i)
                for (unsigned a = m_no_occ;
                     a < m_no_occ + m_no_virt - no_deleted;
                     ++a)
                    delta_eps(i * (m_no_virt - no_deleted) + a - m_no_occ) =
                        eps(a) - eps(i + no_frozen);

            std::function<arma::mat(const arma::mat&)> ms =
                std::function<arma::mat(const arma::mat&)>(
                    std::ref(multi_sigma));

            m_no_states_converged =
                misc::davidson_liu_diagonalize(ms,
                                               delta_eps,
                                               v_0,
                                               no_states,
                                               no_roots,
                                               m_energies,
                                               m_coefficients,
                                               no_iterations,
                                               diagonalization_threshold);

            m_transition_dipoles = arma::zeros<arma::mat>(no_states, 3);

            if (multiplicity == SINGLET) {
                arma::mat C_occ = mo_coeffs.cols(no_frozen, m_no_occ - 1);

                arma::mat C_virt = mo_coeffs.cols(
                    m_no_occ, m_no_occ + m_no_virt - no_deleted - 1);

                gto::OS1MultipoleIntegralEngine mie(*system);

                arma::mat d[3];
                d[0] = mie.dipole_matrices()[0];
                d[1] = mie.dipole_matrices()[1];
                d[2] = mie.dipole_matrices()[2];

                for (unsigned k = 0; k < no_states; ++k) {

                    arma::mat k_coeffs = m_coefficients.col(k);
                    k_coeffs.reshape(m_no_virt - no_deleted,
                                     m_no_occ - no_frozen);

                    arma::mat T_matrix = std::sqrt(2.0) * C_occ *
                                         trans(k_coeffs) * trans(C_virt);

                    for (unsigned l = 0; l < 3; ++l) {
                        for (unsigned p = 0; p < mo_coeffs.n_rows; ++p)
                            for (unsigned q = 0; q < mo_coeffs.n_rows; ++q)
                                m_transition_dipoles(k, l) +=
                                    T_matrix(p, q) * d[l](p, q);
                    }
                }
            }
        }

        arma::mat RCIS::gradient(const std::vector<unsigned>& atoms,
                                 unsigned state)
        {
            arma::vec eps_virt(m_no_virt);

            for (unsigned i = 0; i < m_no_virt; i++) {
                // eps_virt(i) = eps(m_no_occ + i);
            }

            std::unique_ptr<core::FockMatrixGenerator>
                m_fock_matrix_generator; // = std::move(fm_gen->make(system));

            std::vector<arma::mat> dS_x_occ_occ;
            std::vector<arma::mat> dS_y_occ_occ;
            std::vector<arma::mat> dS_z_occ_occ;

            std::vector<arma::mat> dFock_x_occ_occ;
            std::vector<arma::mat> dFock_y_occ_occ;
            std::vector<arma::mat> dFock_z_occ_occ;

            std::vector<arma::mat> dS_x_occ_virt;
            std::vector<arma::mat> dS_y_occ_virt;
            std::vector<arma::mat> dS_z_occ_virt;

            std::vector<arma::mat> dFock_x_occ_virt;
            std::vector<arma::mat> dFock_y_occ_virt;
            std::vector<arma::mat> dFock_z_occ_virt;

            std::vector<arma::mat> dS_x_virt_virt;
            std::vector<arma::mat> dS_y_virt_virt;
            std::vector<arma::mat> dS_z_virt_virt;

            std::vector<arma::mat> dFock_x_virt_virt;
            std::vector<arma::mat> dFock_y_virt_virt;
            std::vector<arma::mat> dFock_z_virt_virt;

            std::vector<arma::mat> u_x_occ_virt;
            std::vector<arma::mat> u_y_occ_virt;
            std::vector<arma::mat> u_z_occ_virt;

            std::vector<arma::mat> u_x_virt_occ;
            std::vector<arma::mat> u_y_virt_occ;
            std::vector<arma::mat> u_z_virt_occ;

            std::vector<arma::mat> psFx;
            std::vector<arma::mat> psFy;
            std::vector<arma::mat> psFz;

            core::PseudoFockMultiMatrixGenerator pfm_gen(
                m_system,
                m_2eie_factory,
                /*integral_threshold*/ 1e-10);
            core::calc_all_dS_dFock(m_system,
                                    m_C,
                                    m_eps,
                                    atoms,
                                    dS_x_occ_occ,
                                    dS_y_occ_occ,
                                    dS_z_occ_occ,
                                    dFock_x_occ_occ,
                                    dFock_y_occ_occ,
                                    dFock_z_occ_occ,
                                    dS_x_occ_virt,
                                    dS_y_occ_virt,
                                    dS_z_occ_virt,
                                    dFock_x_occ_virt,
                                    dFock_y_occ_virt,
                                    dFock_z_occ_virt,
                                    dS_x_virt_virt,
                                    dS_y_virt_virt,
                                    dS_z_virt_virt,
                                    dFock_x_virt_virt,
                                    dFock_y_virt_virt,
                                    dFock_z_virt_virt);

            unsigned u_size = atoms.size();
            if (m_no_virt > 0) {
                for (unsigned u_ind = 0; u_ind < u_size; u_ind++) {
                    u_x_virt_occ.push_back(-trans(dS_x_occ_virt[u_ind]));
                    u_y_virt_occ.push_back(-trans(dS_y_occ_virt[u_ind]));
                    u_z_virt_occ.push_back(-trans(dS_z_occ_virt[u_ind]));
                }
            } else {
                for (unsigned u_ind = 0; u_ind < u_size; u_ind++) {
                    u_z_virt_occ.push_back(arma::zeros<arma::mat>(0, 0));
                    u_z_virt_occ.push_back(arma::zeros<arma::mat>(0, 0));
                    u_z_virt_occ.push_back(arma::zeros<arma::mat>(0, 0));
                }
            }
            std::vector<arma::mat>
                ci_coeffs_vec_mat; // = transform_ci_coeffs(m_coefficients,
                                   // m_no_occ, m_no_virt, m_no_frozen,
                                   // m_no_deleted);
            arma::mat pF_ov, pF_oo, pF_vv;
            // calc_pseudo_fock(ci_coeffs_vec_mat, pfm_gen, pF_ov, pF_oo,
            // pF_vv); calc_psF(system, psFx, psFy, psFz, m_C, m_eps, atoms,
            // dS_x_occ_occ, dS_y_occ_occ, dS_z_occ_occ, fm_gen);
            std::vector<arma::mat>
                Z_vec; // = calc_Z_vector(pF_oo, pF_vv, ci_coeffs_vec_mat[
                       // _state_ind], system, _C, eps, ie_factory, fm_gen);
            arma::mat z_vec_grad; // = gradient_from_z_vector(system, m_C,
                                  // m_eps, atoms,
            //                    dS_x_occ_occ, dS_y_occ_occ, dS_z_occ_occ,
            //                    dS_x_occ_virt, dS_y_occ_virt, dS_z_occ_virt,
            //                    dFock_x_occ_virt, dFock_y_occ_virt,
            //                    dFock_z_occ_virt, Z_vec, psFx, psFy, psFz,
            //                    m_2eie_factory, m_fm_gen);
            //            calc_d_Fock_oo_vv(u_x_virt_occ, u_y_virt_occ,
            //            u_z_virt_occ,
            //                    m_fock_matrix_generator,
            //                    dFock_x_occ_occ, dFock_y_occ_occ,
            //                    dFock_z_occ_occ, dS_x_occ_occ, dS_y_occ_occ,
            //                    dS_z_occ_occ, dFock_x_virt_virt,
            //                    dFock_y_virt_virt, dFock_z_virt_virt,
            //                    dS_x_virt_virt, dS_y_virt_virt,
            //                    dS_z_virt_virt, psFx, psFy, psFz, m_eps,
            //                    eps_virt, ci_coeffs_vec_mat[_state_ind ]);

            arma::mat cis_gradient = m_fock_matrix_generator->energy_gradient(
                m_system, m_C, m_eps, atoms);
            cis_gradient += z_vec_grad;
            for (std::size_t n = 0; n < atoms.size(); n++) {
                arma::mat multi_sigma_core_dx;
                arma::mat multi_sigma_core_dy;
                arma::mat multi_sigma_core_dz;

                // calc_sigma_gradient_core(ci_coeffs_vec_mat, pfm_gen, m_eps,
                // system, atoms[n], multi_sigma_core_dx, multi_sigma_core_dy,
                // multi_sigma_core_dz);

                arma::mat
                    multi_sigma_x; // = calc_sigma_gradient(ci_coeffs_vec_mat[
                                   // _state_ind],
                                   //-trans(dS_x_occ_virt[n]), -0.5 *
                                   //dS_x_occ_occ[n], -0.5 * dS_x_virt_virt[n],
                                   //pF_ov, pF_oo, pF_vv);
                arma::mat
                    multi_sigma_y; // = calc_sigma_gradient(ci_coeffs_vec_mat[
                                   // _state_ind],
                                   //-trans(dS_y_occ_virt[n]), -0.5 *
                                   //dS_y_occ_occ[n], -0.5 * dS_y_virt_virt[n],
                                   //pF_ov, pF_oo, pF_vv);
                arma::mat
                    multi_sigma_z; // = calc_sigma_gradient(ci_coeffs_vec_mat[
                                   // _state_ind],
                                   //-trans(dS_z_occ_virt[n]), -0.5 *
                                   //dS_z_occ_occ[n], -0.5 * dS_z_virt_virt[n],
                                   //pF_ov, pF_oo, pF_vv);

                // cis_gradient(n, 0) += arma::accu(ci_coeffs_vec_mat[state] %
                // (multi_sigma_core_dx + multi_sigma_x)) + _d_delta_eps_accu_dx[
                // n ];

                // cis_gradient(n, 1) += arma::accu(ci_coeffs_vec_mat[state] %
                // (multi_sigma_core_dy + multi_sigma_y)) + _d_delta_eps_accu_dy[
                // n ];

                // cis_gradient(n, 2) += arma::accu(ci_coeffs_vec_mat[state] %
                // (multi_sigma_core_dz + multi_sigma_z)) + _d_delta_eps_accu_dz[
                // n ];
            }
            return cis_gradient;
        }
    }
}
