/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "armadillo"
#include "core_kit/dFock.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "cphf_kit/cphf_hessian.hpp"
#include "cphf_kit/cphf_linear_response.hpp"
#include "td_kit/cis_gradient.hpp"
#include <boost/numeric/ublas/matrix_proxy.hpp>

namespace niedoida {
    namespace td {

        void CIS_gradient::calc_pseudo_fock(
            const std::vector<arma::mat>& ci_coeffs,
            core::PseudoFockMultiMatrixGenerator& m_fock_matrix_generator,
            arma::mat& F_mo_ov,
            arma::mat& F_mo_oo,
            arma::mat& F_mo_vv)
        {

            std::vector<arma::cube> P(2);

            P[core::SPIN_ALPHA].set_size(_C.n_rows, _C.n_rows, 1);
            P[core::SPIN_BETA].set_size(_C.n_rows, _C.n_rows, 1);

            P[core::SPIN_ALPHA].slice(0) =
                core::pseudo_density_matrix(_C, ci_coeffs[_state_ind]);

            P[core::SPIN_BETA] = P[core::SPIN_ALPHA];

            m_fock_matrix_generator.set_density_matrix(P);

            const arma::mat J = m_fock_matrix_generator.coulomb_matrix(0);

            const arma::mat K =
                m_fock_matrix_generator.exchange_matrix(0, core::SPIN_ALPHA);

            const arma::mat F_ao = (_mult == SINGLET) ? J + K : K;

            // transform the pseudo-fock matrix to the MO basis
            const arma::mat F_temp_o = trans(_C_occ) * F_ao;
            const arma::mat F_temp_v = trans(_C_virt) * F_ao;
            F_mo_ov = F_temp_o * _C_virt;
            F_mo_oo = F_temp_o * _C_occ;
            F_mo_vv = F_temp_v * _C_virt;
        }

        arma::mat
        CIS_gradient::calc_sigma_gradient(const arma::mat& ci_coeffs,
                                          const arma::mat& u_virt_occ,
                                          const arma::mat& dS_occ_occ,
                                          const arma::mat& dS_virt_virt,
                                          const arma::mat& F_mo_ov,
                                          const arma::mat& F_mo_oo,
                                          const arma::mat& F_mo_vv)
        {
            arma::mat sigma = F_mo_ov * dS_virt_virt;
            sigma += trans(trans(F_mo_ov) * dS_occ_occ) +
                     trans(trans(F_mo_vv) * u_virt_occ);
            sigma *= 2;
            return sigma;
        }

        std::vector<arma::mat> CIS_gradient::calc_Z_vector(
            const arma::mat& F_mo_oo,
            const arma::mat& F_mo_vv,
            const arma::mat& ci_coeffs,
            std::shared_ptr<const core::System> system,
            const arma::mat& C,
            const arma::vec& eps,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen)
        {
            arma::mat X_oo = 2 * trans(F_mo_oo) * ci_coeffs;
            arma::mat X_vv = 2 * trans(F_mo_vv * trans(ci_coeffs));

            arma::mat P =
                _C_virt * trans(ci_coeffs) * ci_coeffs * trans(_C_virt) -
                _C_occ * ci_coeffs * trans(ci_coeffs) * trans(_C_occ);
            std::unique_ptr<core::FockMatrixGenerator> m_fock_matrix_generator =
                fm_gen->make(system);
            m_fock_matrix_generator->set_density_matrix(P, P);
            arma::mat F_temp =
                m_fock_matrix_generator->coulomb_matrix() +
                m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
            F_temp = 2 * trans(trans(_C_virt) * F_temp * _C_occ);

            cphf::CPHF_linearResponse_RHF cphf_lr_rhf(
                system, ie_factory, C, eps);

            cphf::CPHF_Hessian cphf_hess(cphf_lr_rhf);
            std::vector<std::pair<arma::mat, arma::mat>> cphf_input;

            cphf_input.push_back(std::pair<arma::mat, arma::mat>(X_oo, X_oo));
            cphf_input.push_back(std::pair<arma::mat, arma::mat>(X_vv, X_vv));
            cphf_input.push_back(
                std::pair<arma::mat, arma::mat>(F_temp, F_temp));
            arma::mat result =
                cphf_hess.calculate_CPHF_Hessian_given_DDE(cphf_input);
            return cphf_hess.get_U();
        }

        void CIS_gradient::calc_sigma_gradient_core(
            const std::vector<arma::mat>& ci_coeffs,
            core::PseudoFockMultiMatrixGenerator& m_fock_matrix_generator,
            const arma::vec& eps,
            std::shared_ptr<const core::System> system,
            std::size_t atom_ind,
            arma::mat& core_grad_dx,
            arma::mat& core_grad_dy,
            arma::mat& core_grad_dz)
        {
            arma::mat dJx, dJy, dJz, dKx, dKy, dKz;

            core_grad_dx.clear();
            core_grad_dy.clear();
            core_grad_dz.clear();

            // const std::size_t no_vectors = ci_coeffs.size();

            boost::multi_array<arma::mat, 2> P(boost::extents[1][2]);

            P[0][0] = core::pseudo_density_matrix(_C, ci_coeffs[_state_ind]);
            P[0][1] = P[0][0];

            core::dF_matrix_generator(system,
                                      _C,
                                      eps,
                                      P[0][0],
                                      dKx,
                                      dKy,
                                      dKz,
                                      dJx,
                                      dJy,
                                      dJz,
                                      atom_ind);
            core_grad_dx = trans(_C_occ) *
                           ((_mult == SINGLET) ? dJx + dKx : dKx) * _C_virt;
            core_grad_dy = trans(_C_occ) *
                           ((_mult == SINGLET) ? dJy + dKy : dKy) * _C_virt;
            core_grad_dz = trans(_C_occ) *
                           ((_mult == SINGLET) ? dJz + dKz : dKz) * _C_virt;
        }
    }
}

namespace {

    arma::mat multiply_by_vector(const arma::mat& mat, const arma::vec& vec)
    {
        arma::mat mat_out(mat.n_rows, mat.n_cols);
        for (unsigned row = 0; row < mat.n_rows; row++) {
            for (unsigned col = 0; col < mat.n_cols; col++) {
                mat_out(row, col) = mat(row, col) * vec(col);
            }
        }
        return mat_out;
    }
}

namespace niedoida {
    namespace td {

        arma::mat gradient_from_z_vector(
            std::shared_ptr<const core::System> system,
            const arma::mat& C,
            const arma::vec& eps,
            const std::vector<unsigned>& atoms,
            std::vector<arma::mat>& dS_x_occ_occ,
            std::vector<arma::mat>& dS_y_occ_occ,
            std::vector<arma::mat>& dS_z_occ_occ,
            std::vector<arma::mat>& dS_x_occ_virt,
            std::vector<arma::mat>& dS_y_occ_virt,
            std::vector<arma::mat>& dS_z_occ_virt,
            std::vector<arma::mat>& dFock_x_occ_virt,
            std::vector<arma::mat>& dFock_y_occ_virt,
            std::vector<arma::mat>& dFock_z_occ_virt,
            const std::vector<arma::mat>& z_vec,
            std::vector<arma::mat>& psFx,
            std::vector<arma::mat>& psFy,
            std::vector<arma::mat>& psFz,
            std::shared_ptr<const core::TwoElectronIntegralEngineFactory>
                ie_factory,
            std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen)
        {

            std::size_t n_occ_alpha = system->no_electrons(core::SPIN_ALPHA);
            // std::size_t n_occ_beta = system->no_electrons(core::SPIN_BETA);

            std::size_t n_orbitals = eps.size();
            // std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

            // const std::size_t no_atoms = system->atoms.size();
            const std::size_t no_un = atoms.size();

            arma::mat gradient(no_un, 3);

            arma::mat C_all_occ = C.submat(arma::span(0, n_orbitals - 1),
                                           arma::span(0, n_occ_alpha - 1));
            arma::mat C_all_occ_t = trans(C_all_occ);
            arma::mat C_virt =
                C.submat(arma::span(0, n_orbitals - 1),
                         arma::span(n_occ_alpha, n_orbitals - 1));
            arma::mat C_virt_t = trans(C_virt);
            arma::mat C_t = trans(C);

            std::vector<std::pair<arma::mat, arma::mat>> dde_dkappa_dr;

            arma::vec eps_virt_vec = eps.subvec(n_occ_alpha, n_orbitals - 1);

            std::unique_ptr<core::FockMatrixGenerator> m_fock_matrix_generator =
                fm_gen->make(system);

            for (std::size_t un_it = 0; un_it < no_un; un_it++) {
                std::size_t n = atoms[un_it];
                arma::mat dde_dkappa_dx =
                    dFock_x_occ_virt[n] -
                    multiply_by_vector(dS_x_occ_virt[n], eps_virt_vec);
                arma::mat dde_dkappa_dy =
                    dFock_y_occ_virt[n] -
                    multiply_by_vector(dS_y_occ_virt[n], eps_virt_vec);
                arma::mat dde_dkappa_dz =
                    dFock_z_occ_virt[n] -
                    multiply_by_vector(dS_z_occ_virt[n], eps_virt_vec);

                arma::mat Px = dS_x_occ_occ[n] * C_all_occ_t;
                Px = C_all_occ * Px;

                arma::mat Py = dS_y_occ_occ[n] * C_all_occ_t;
                Py = C_all_occ * Py;

                arma::mat Pz = dS_z_occ_occ[n] * C_all_occ_t;
                Pz = C_all_occ * Pz;

                m_fock_matrix_generator->set_density_matrix(Px, Px);
                arma::mat fock_m_x =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                fock_m_x = C_all_occ_t * fock_m_x;
                fock_m_x = fock_m_x * C_virt;

                m_fock_matrix_generator->set_density_matrix(Py, Py);
                arma::mat fock_m_y =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                fock_m_y = C_all_occ_t * fock_m_y;
                fock_m_y = fock_m_y * C_virt;

                m_fock_matrix_generator->set_density_matrix(Pz, Pz);
                arma::mat fock_m_z =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                fock_m_z = C_all_occ_t * fock_m_z;
                fock_m_z = fock_m_z * C_virt;

                dde_dkappa_dx -= fock_m_x;
                dde_dkappa_dy -= fock_m_y;
                dde_dkappa_dz -= fock_m_z;

                // TU JEST B KTOREGO SZUKAM
                arma::mat PxA = dS_x_occ_virt[n] * C_virt_t;
                PxA = C_all_occ * PxA;
                PxA = PxA + trans(PxA);

                arma::mat PyA = dS_y_occ_virt[n] * C_virt_t;
                PyA = C_all_occ * PyA;
                PyA = PyA + trans(PyA);

                arma::mat PzA = dS_z_occ_virt[n] * C_virt_t;
                PzA = C_all_occ * PzA;
                PzA = PzA + trans(PzA);

                m_fock_matrix_generator->set_density_matrix(PxA, PxA);
                fock_m_x =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);

                m_fock_matrix_generator->set_density_matrix(PyA, PyA);
                fock_m_y =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);

                m_fock_matrix_generator->set_density_matrix(PzA, PzA);
                fock_m_z =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);

                fock_m_x = C_all_occ_t * fock_m_x;
                fock_m_x = fock_m_x * C_virt;

                fock_m_y = C_all_occ_t * fock_m_y;
                fock_m_y = fock_m_y * C_virt;

                fock_m_z = C_all_occ_t * fock_m_z;
                fock_m_z = fock_m_z * C_virt;

                dde_dkappa_dx -= fock_m_x;
                dde_dkappa_dy -= fock_m_y;
                dde_dkappa_dz -= fock_m_z;

                dde_dkappa_dx *= 2;
                dde_dkappa_dy *= 2;
                dde_dkappa_dz *= 2;

                gradient(un_it, 0) = arma::accu(
                    dde_dkappa_dx % (z_vec[1] - z_vec[0] + z_vec[2]));
                gradient(un_it, 1) = arma::accu(
                    dde_dkappa_dy % (z_vec[1] - z_vec[0] + z_vec[2]));
                gradient(un_it, 2) = arma::accu(
                    dde_dkappa_dz % (z_vec[1] - z_vec[0] + z_vec[2]));
            }
            return gradient;
        }

        void
        calc_psF(std::shared_ptr<const core::System> system,
                 std::vector<arma::mat>& psFx,
                 std::vector<arma::mat>& psFy,
                 std::vector<arma::mat>& psFz,
                 const arma::mat& C,
                 const arma::vec& eps,
                 const std::vector<unsigned>& atoms,
                 std::vector<arma::mat>& dS_x_occ_occ,
                 std::vector<arma::mat>& dS_y_occ_occ,
                 std::vector<arma::mat>& dS_z_occ_occ,
                 std::shared_ptr<const core::FockMatrixGeneratorFactory> fm_gen)
        {
            psFx.clear();
            psFy.clear();
            psFz.clear();

            std::size_t n_occ_alpha = system->no_electrons(core::SPIN_ALPHA);
            // std::size_t n_occ_beta = system->no_electrons(core::SPIN_BETA);

            std::size_t n_orbitals = eps.size();
            // std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

            // const std::size_t no_atoms = system->atoms.size();
            const std::size_t no_un = atoms.size();

            arma::mat C_all_occ = C.submat(arma::span(0, n_orbitals - 1),
                                           arma::span(0, n_occ_alpha - 1));
            arma::mat C_all_occ_t = trans(C_all_occ);
            arma::mat C_virt =
                C.submat(arma::span(0, n_orbitals - 1),
                         arma::span(n_occ_alpha, n_orbitals - 1));
            arma::mat C_virt_t = trans(C_virt);
            arma::mat C_t = trans(C);

            std::unique_ptr<core::FockMatrixGenerator> m_fock_matrix_generator =
                fm_gen->make(system);

            for (std::size_t un_it = 0; un_it < no_un; un_it++) {
                std::size_t n = atoms[un_it];

                arma::mat Px = dS_x_occ_occ[n] * C_all_occ_t;
                Px = C_all_occ * Px;

                arma::mat Py = dS_y_occ_occ[n] * C_all_occ_t;
                Py = C_all_occ * Py;

                arma::mat Pz = dS_z_occ_occ[n] * C_all_occ_t;
                Pz = C_all_occ * Pz;

                m_fock_matrix_generator->set_density_matrix(Px, Px);
                arma::mat fock_m_x =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                arma::mat fock_m_x_full = C_t * fock_m_x;
                fock_m_x_full = fock_m_x_full * C;

                m_fock_matrix_generator->set_density_matrix(Py, Py);
                arma::mat fock_m_y =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                arma::mat fock_m_y_full = C_t * fock_m_y;
                fock_m_y_full = fock_m_y_full * C;

                m_fock_matrix_generator->set_density_matrix(Pz, Pz);
                arma::mat fock_m_z =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix(core::SPIN_ALPHA);
                arma::mat fock_m_z_full = C_t * fock_m_z;
                fock_m_z_full = fock_m_z_full * C;

                psFx.push_back(fock_m_x_full);
                psFy.push_back(fock_m_y_full);
                psFz.push_back(fock_m_z_full);
            }
        }
    }
}
