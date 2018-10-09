/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "td_kit/cis_gradient.hpp"
#include "armadillo"
#include "core_kit/dFock.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "cphf_kit/cphf_linear_response.hpp"
#include <boost/numeric/ublas/matrix_proxy.hpp>

namespace niedoida {
    namespace td {

        CIS_gradient::CIS_gradient(
            CIS_gradient::Multiplicity multiplicity,
            std::shared_ptr<const core::System> system,
            const arma::mat C,
            const arma::vec eps,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>,
            unsigned no_frozen,
            unsigned no_deleted,
            unsigned no_states,
            unsigned no_roots,
            std::size_t state_ind,
            const std::vector<unsigned>& unique_atoms)
        {
            _no_frozen = no_frozen;
            _no_deleted = no_deleted;
            _no_states = no_states;
            _no_roots = no_roots;
            _no_occ = system->no_electrons(core::SPIN_ALPHA);
            _no_orbitals = eps.size();
            _no_virt = _no_orbitals - _no_occ;
            _C_virt = C.submat(arma::span(0, _no_orbitals - 1),
                               arma::span(_no_occ, _no_orbitals - 1));
            _C_occ = C.submat(arma::span(0, _no_orbitals - 1),
                              arma::span(0, _no_occ - 1));
            _C = C;
            _mult = multiplicity;
            _no_atoms = system->atoms.size();
            _unique_atoms = unique_atoms;
            _state_ind = state_ind;
        }

        std::vector<arma::mat> transform_ci_coeffs(arma::mat ci_coeffs_v,
                                                   unsigned m_no_occ,
                                                   unsigned m_no_virt,
                                                   unsigned m_no_frozen,
                                                   unsigned m_no_deleted)
        {
            const std::size_t no_rows = ci_coeffs_v.n_rows;
            const std::size_t no_cols = ci_coeffs_v.n_cols;

            const std::size_t eno = m_no_occ - m_no_frozen;
            const std::size_t env = m_no_virt - m_no_deleted;

            assert(no_rows == eno * env);

            std::vector<arma::mat> ci_coeffs(no_cols);

            // all the operations we gonna do are easier to express using
            // matrices, so transform the vectors we've got to matrices
            for (std::size_t n = 0; n < no_cols; ++n) {
                ci_coeffs[n].set_size(eno, env);

                // double* p = &(ci_coeffs[n](0, 0));
                for (std::size_t i = 0; i < no_rows; ++i)
                    ci_coeffs[n](i / env, i % env) = ci_coeffs_v(i, n);
            }

            return ci_coeffs;
        }

        arma::mat CIS_gradient::calc_cis_gradient(
            std::shared_ptr<const core::System> system,
            const arma::mat C,
            const arma::vec eps,
            const arma::mat coeffs,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen)
        {

            // const std::size_t no_atoms = system->atoms.size();

            arma::vec eps_virt(_no_virt);

            for (unsigned virt_ind = 0; virt_ind < _no_virt; virt_ind++) {
                eps_virt(virt_ind) = eps(virt_ind + _no_occ);
            }

            std::unique_ptr<core::FockMatrixGenerator> m_fock_matrix_generator =
                std::move(fm_gen->make(system));

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
                system,
                ie_factory,
                /*integral_threshold*/ 1e-10);
            core::calc_all_dS_dFock(system,
                                    _C,
                                    eps,
                                    _unique_atoms,
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

            unsigned u_size = _unique_atoms.size();
            if (_no_virt > 0) {
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
            std::vector<arma::mat> ci_coeffs_vec_mat = transform_ci_coeffs(
                coeffs, _no_occ, _no_virt, _no_frozen, _no_deleted);
            arma::mat pF_ov, pF_oo, pF_vv;
            calc_pseudo_fock(ci_coeffs_vec_mat, pfm_gen, pF_ov, pF_oo, pF_vv);
            calc_psF(system,
                     psFx,
                     psFy,
                     psFz,
                     _C,
                     eps,
                     _unique_atoms,
                     dS_x_occ_occ,
                     dS_y_occ_occ,
                     dS_z_occ_occ,
                     fm_gen);
            std::vector<arma::mat> Z_vec =
                calc_Z_vector(pF_oo,
                              pF_vv,
                              ci_coeffs_vec_mat[_state_ind],
                              system,
                              _C,
                              eps,
                              ie_factory,
                              fm_gen);
            arma::mat z_vec_grad = gradient_from_z_vector(system,
                                                          _C,
                                                          eps,
                                                          _unique_atoms,
                                                          dS_x_occ_occ,
                                                          dS_y_occ_occ,
                                                          dS_z_occ_occ,
                                                          dS_x_occ_virt,
                                                          dS_y_occ_virt,
                                                          dS_z_occ_virt,
                                                          dFock_x_occ_virt,
                                                          dFock_y_occ_virt,
                                                          dFock_z_occ_virt,
                                                          Z_vec,
                                                          psFx,
                                                          psFy,
                                                          psFz,
                                                          ie_factory,
                                                          fm_gen);
            calc_d_Fock_oo_vv(u_x_virt_occ,
                              u_y_virt_occ,
                              u_z_virt_occ,
                              m_fock_matrix_generator,
                              dFock_x_occ_occ,
                              dFock_y_occ_occ,
                              dFock_z_occ_occ,
                              dS_x_occ_occ,
                              dS_y_occ_occ,
                              dS_z_occ_occ,
                              dFock_x_virt_virt,
                              dFock_y_virt_virt,
                              dFock_z_virt_virt,
                              dS_x_virt_virt,
                              dS_y_virt_virt,
                              dS_z_virt_virt,
                              psFx,
                              psFy,
                              psFz,
                              eps,
                              eps_virt,
                              ci_coeffs_vec_mat[_state_ind]);

            arma::mat cis_gradient = m_fock_matrix_generator->energy_gradient(
                system, _C, eps, _unique_atoms);
            cis_gradient += z_vec_grad;
            for (std::size_t n = 0; n < _unique_atoms.size(); n++) {
                arma::mat multi_sigma_core_dx;
                arma::mat multi_sigma_core_dy;
                arma::mat multi_sigma_core_dz;

                calc_sigma_gradient_core(ci_coeffs_vec_mat,
                                         pfm_gen,
                                         eps,
                                         system,
                                         _unique_atoms[n],
                                         multi_sigma_core_dx,
                                         multi_sigma_core_dy,
                                         multi_sigma_core_dz);

                arma::mat multi_sigma_x =
                    calc_sigma_gradient(ci_coeffs_vec_mat[_state_ind],
                                        -trans(dS_x_occ_virt[n]),
                                        -0.5 * dS_x_occ_occ[n],
                                        -0.5 * dS_x_virt_virt[n],
                                        pF_ov,
                                        pF_oo,
                                        pF_vv);
                arma::mat multi_sigma_y =
                    calc_sigma_gradient(ci_coeffs_vec_mat[_state_ind],
                                        -trans(dS_y_occ_virt[n]),
                                        -0.5 * dS_y_occ_occ[n],
                                        -0.5 * dS_y_virt_virt[n],
                                        pF_ov,
                                        pF_oo,
                                        pF_vv);
                arma::mat multi_sigma_z =
                    calc_sigma_gradient(ci_coeffs_vec_mat[_state_ind],
                                        -trans(dS_z_occ_virt[n]),
                                        -0.5 * dS_z_occ_occ[n],
                                        -0.5 * dS_z_virt_virt[n],
                                        pF_ov,
                                        pF_oo,
                                        pF_vv);

                cis_gradient(n, 0) +=
                    arma::accu(ci_coeffs_vec_mat[_state_ind] %
                               (+multi_sigma_core_dx + multi_sigma_x)) +
                    _d_delta_eps_accu_dx[n];

                cis_gradient(n, 1) +=
                    arma::accu(ci_coeffs_vec_mat[_state_ind] %
                               (+multi_sigma_core_dy + multi_sigma_y)) +
                    _d_delta_eps_accu_dy[n];

                cis_gradient(n, 2) +=
                    arma::accu(ci_coeffs_vec_mat[_state_ind] %
                               (+multi_sigma_core_dz + multi_sigma_z)) +
                    _d_delta_eps_accu_dz[n];
            }
            return cis_gradient;
        }

        arma::mat energy_gradient_cis(
            std::shared_ptr<const core::System> system,
            const arma::mat C,
            const arma::vec eps,
            const arma::mat coefs,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen,
            unsigned no_frozen,
            unsigned no_deleted,
            unsigned no_states,
            unsigned no_roots,
            const std::vector<unsigned>& unique_atoms,
            std::size_t state_ind,
            bool singlet = true)
        {

            CIS_gradient cis_grad(singlet ? CIS_gradient::SINGLET
                                          : CIS_gradient::TRIPLET,
                                  system,
                                  C,
                                  eps,
                                  ie_factory,
                                  no_frozen,
                                  no_deleted,
                                  no_states,
                                  no_roots,
                                  state_ind,
                                  unique_atoms);

            return cis_grad.calc_cis_gradient(
                system, C, eps, coefs, ie_factory, fm_gen);
        }
    }
}
