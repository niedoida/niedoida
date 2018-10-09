/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/hessian_engine.hpp"
#include "core_kit/os1_integral_gradient_engine.hpp"
#include "cphf_kit/cphf_hessian.hpp"
#include "cphf_kit/cphf_linear_response.hpp"

#include "scf_kit/scf_utils.hpp"

#include <cstdio>

#include "scf_kit/scf_utils.hpp"

#include <cmath>
#include <string>
#include <utility>
#include <vector>

#include <boost/math/special_functions/gamma.hpp>
#include <boost/numeric/ublas/io.hpp>

#include "misc_kit/special_functions.hpp"

#include "core_kit/basis_set_info.hpp"
#include "core_kit/shell_quartet.hpp"
#include "core_kit/significant_shell_pairs_generator.hpp"
#include "core_kit/significant_shell_quartet_index_generator.hpp"

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
    namespace core {
        void energy_hessian_from_cphf(
            std::shared_ptr<const System> system,
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
            std::vector<arma::mat>& u_x,
            std::vector<arma::mat>& u_y,
            std::vector<arma::mat>& u_z,
            std::shared_ptr<const TwoElectronIntegralEngineFactory> ie_factory,
            std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen)
        {

            std::size_t n_occ_alpha = system->no_electrons(SPIN_ALPHA);

            std::size_t n_orbitals = eps.size();
            std::size_t n_virt_alpha = n_orbitals - n_occ_alpha;

            const std::size_t no_atoms = system->atoms.size();

            arma::mat C_all_occ = C.submat(arma::span(0, n_orbitals - 1),
                                           arma::span(0, n_occ_alpha - 1));
            arma::mat C_all_occ_t = trans(C_all_occ);
            arma::mat C_virt =
                C.submat(arma::span(0, n_orbitals - 1),
                         arma::span(n_occ_alpha, n_orbitals - 1));

            arma::mat C_virt_t = trans(C_virt);

            cphf::CPHF_linearResponse_RHF cphf_lr_rhf(
                system, ie_factory, fm_gen, C, eps);

            cphf::CPHF_Hessian cphf_hess(cphf_lr_rhf);

            std::vector<std::pair<arma::mat, arma::mat>> dde_dkappa_dr;

            arma::vec eps_virt_vec = eps.subvec(n_occ_alpha, n_orbitals - 1);

            std::unique_ptr<FockMatrixGenerator> m_fock_matrix_generator =
                std::move(fm_gen->make(system));

            const std::size_t lumo_idx = system->no_electrons(core::SPIN_ALPHA);
            arma::mat not_fake_P = scf::density_matrix(C, lumo_idx);

            for (std::size_t n = 0; n < no_atoms; n++) {
                arma::mat dde_dkappa_dx =
                    dFock_x_occ_virt[n] -
                    multiply_by_vector(dS_x_occ_virt[n], eps_virt_vec);
                arma::mat dde_dkappa_dy =
                    dFock_y_occ_virt[n] -
                    multiply_by_vector(dS_y_occ_virt[n], eps_virt_vec);
                arma::mat dde_dkappa_dz =
                    dFock_z_occ_virt[n] -
                    multiply_by_vector(dS_z_occ_virt[n], eps_virt_vec);

                arma::mat Px = C_all_occ * dS_x_occ_occ[n] * C_all_occ_t;

                arma::mat Py = C_all_occ * dS_y_occ_occ[n] * C_all_occ_t;

                arma::mat Pz = C_all_occ * dS_z_occ_occ[n] * C_all_occ_t;

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, Px, Px);
                arma::mat fock_m_x =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix_deriv_C(
                        SPIN_ALPHA);
                fock_m_x = C_all_occ_t * fock_m_x * C_virt;

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, Py, Py);
                arma::mat fock_m_y =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix_deriv_C(
                        SPIN_ALPHA);
                fock_m_y = C_all_occ_t * fock_m_y * C_virt;

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, Pz, Pz);
                arma::mat fock_m_z =
                    m_fock_matrix_generator->coulomb_matrix() +
                    m_fock_matrix_generator->exchange_matrix_deriv_C(
                        SPIN_ALPHA);
                fock_m_z = C_all_occ_t * fock_m_z * C_virt;

                dde_dkappa_dx -= fock_m_x;
                dde_dkappa_dy -= fock_m_y;
                dde_dkappa_dz -= fock_m_z;

                arma::mat PxA = dS_x_occ_virt[n] * C_virt_t;
                PxA = C_all_occ * PxA;
                PxA = PxA + trans(PxA);

                arma::mat PyA = dS_y_occ_virt[n] * C_virt_t;
                PyA = C_all_occ * PyA;
                PyA = PyA + trans(PyA);

                arma::mat PzA = dS_z_occ_virt[n] * C_virt_t;
                PzA = C_all_occ * PzA;
                PzA = PzA + trans(PzA);

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, PxA, PxA);
                fock_m_x = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix_deriv_C(
                               SPIN_ALPHA);

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, PyA, PyA);
                fock_m_y = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix_deriv_C(
                               SPIN_ALPHA);

                m_fock_matrix_generator->set_density_matrix_for_CPHF(
                    not_fake_P, not_fake_P, PzA, PzA);
                fock_m_z = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix_deriv_C(
                               SPIN_ALPHA);

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

                dde_dkappa_dr.push_back(std::pair<arma::mat, arma::mat>(
                    dde_dkappa_dx, dde_dkappa_dx));
                dde_dkappa_dr.push_back(std::pair<arma::mat, arma::mat>(
                    dde_dkappa_dy, dde_dkappa_dy));
                dde_dkappa_dr.push_back(std::pair<arma::mat, arma::mat>(
                    dde_dkappa_dz, dde_dkappa_dz));
            }

            std::vector<arma::mat> u;
            if (n_virt_alpha > 0) {
                cphf_hess.calc_u_matrices(dde_dkappa_dr);
                u = cphf_hess.get_U();
                unsigned u_size = u.size() / 3;
                u_x.resize(u_size);
                u_y.resize(u_size);
                u_z.resize(u_size);

                for (unsigned i = 0; i < u_size; i++) {
                    u_x[i] = u[3 * i];
                    u_y[i] = u[3 * i + 1];
                    u_z[i] = u[3 * i + 2];
                }
            } else {
                for (unsigned i = 0; i < no_atoms; i++) {
                    u_x.push_back(
                        arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
                    u_y.push_back(
                        arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
                    u_z.push_back(
                        arma::zeros<arma::mat>(n_occ_alpha, n_virt_alpha));
                }
            }
        }
    }
}
