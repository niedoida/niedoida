/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/promolecule.hpp"
#include "core_kit/pseudo_fock_matrix_generator.hpp"
#include "core_kit/system.hpp"
#include "td_kit/cis_gradient.hpp"
#include <armadillo>

namespace {
    arma::mat
    pseudo_fock_u(const arma::mat& u_virt_occ,
                  const arma::mat& C_occ_t,
                  const arma::mat& C_virt,
                  const arma::mat& C_t,
                  const arma::mat& C,
                  std::unique_ptr<niedoida::core::FockMatrixGenerator>&
                      m_fock_matrix_generator)
    {
        arma::mat P = u_virt_occ * C_occ_t;
        P = C_virt * P;
        P = P + trans(P);
        m_fock_matrix_generator->set_density_matrix(P, P);
        arma::mat F_temp = m_fock_matrix_generator->coulomb_matrix() +
                           m_fock_matrix_generator->exchange_matrix(
                               niedoida::core::SPIN_ALPHA);
        F_temp = C_t * F_temp;
        return F_temp * C;
    }
}

namespace niedoida {
    namespace td {

        void CIS_gradient::calc_d_Fock_oo_vv(
            const std::vector<arma::mat>& u_x_virt_occ,
            const std::vector<arma::mat>& u_y_virt_occ,
            const std::vector<arma::mat>& u_z_virt_occ,
            std::unique_ptr<core::FockMatrixGenerator>& m_fock_matrix_generator,
            const std::vector<arma::mat>& dFock_x_occ_occ,
            const std::vector<arma::mat>& dFock_y_occ_occ,
            const std::vector<arma::mat>& dFock_z_occ_occ,
            const std::vector<arma::mat>& dS_x_occ_occ,
            const std::vector<arma::mat>& dS_y_occ_occ,
            const std::vector<arma::mat>& dS_z_occ_occ,
            const std::vector<arma::mat>& dFock_x_virt_virt,
            const std::vector<arma::mat>& dFock_y_virt_virt,
            const std::vector<arma::mat>& dFock_z_virt_virt,
            const std::vector<arma::mat>& dS_x_virt_virt,
            const std::vector<arma::mat>& dS_y_virt_virt,
            const std::vector<arma::mat>& dS_z_virt_virt,
            const std::vector<arma::mat>& psFx,
            const std::vector<arma::mat>& psFy,
            const std::vector<arma::mat>& psFz,
            const arma::vec& eps,
            const arma::vec& eps_virt,
            const arma::mat& ci_coeffs)
        {
            _d_delta_eps_accu_dx.resize(_unique_atoms.size());
            _d_delta_eps_accu_dy.resize(_unique_atoms.size());
            _d_delta_eps_accu_dz.resize(_unique_atoms.size());

            arma::rowvec eps_occ = trans(eps.subvec(0, _no_occ - 1));

            arma::mat C_t = trans(_C);
            for (std::size_t n = 0; n < _unique_atoms.size(); n++) {

                arma::mat dF_all_occ_occ_dx, dF_all_occ_occ_dy,
                    dF_all_occ_occ_dz;
                arma::mat dF_all_virt_virt_dx, dF_all_virt_virt_dy,
                    dF_all_virt_virt_dz;

                arma::mat psF_ux = pseudo_fock_u(u_x_virt_occ[n],
                                                 trans(_C_occ),
                                                 _C_virt,
                                                 C_t,
                                                 _C,
                                                 m_fock_matrix_generator);
                arma::mat psF_uy = pseudo_fock_u(u_y_virt_occ[n],
                                                 trans(_C_occ),
                                                 _C_virt,
                                                 C_t,
                                                 _C,
                                                 m_fock_matrix_generator);
                arma::mat psF_uz = pseudo_fock_u(u_z_virt_occ[n],
                                                 trans(_C_occ),
                                                 _C_virt,
                                                 C_t,
                                                 _C,
                                                 m_fock_matrix_generator);

                dF_all_occ_occ_dx =
                    dFock_x_occ_occ[n] - dS_x_occ_occ[n].each_row() % eps_occ +
                    -psFx[n].submat(arma::span(0, _no_occ - 1),
                                    arma::span(0, _no_occ - 1)) +
                    psF_ux.submat(arma::span(0, _no_occ - 1),
                                  arma::span(0, _no_occ - 1));

                dF_all_occ_occ_dy = dFock_y_occ_occ[n] -
                                    dS_y_occ_occ[n].each_row() % eps_occ -
                                    psFy[n].submat(arma::span(0, _no_occ - 1),
                                                   arma::span(0, _no_occ - 1)) +
                                    psF_uy.submat(arma::span(0, _no_occ - 1),
                                                  arma::span(0, _no_occ - 1));

                dF_all_occ_occ_dz =
                    dFock_z_occ_occ[n] -
                    dS_z_occ_occ[n].each_col() % trans(eps_occ) -
                    psFz[n].submat(arma::span(0, _no_occ - 1),
                                   arma::span(0, _no_occ - 1)) +
                    psF_uz.submat(arma::span(0, _no_occ - 1),
                                  arma::span(0, _no_occ - 1));

                dF_all_virt_virt_dx =
                    dFock_x_virt_virt[n] -
                    dS_x_virt_virt[n].each_row() % trans(eps_virt) -
                    psFx[n].submat(arma::span(_no_occ, _no_orbitals - 1),
                                   arma::span(_no_occ, _no_orbitals - 1)) +
                    psF_ux.submat(arma::span(_no_occ, _no_orbitals - 1),
                                  arma::span(_no_occ, _no_orbitals - 1));

                dF_all_virt_virt_dy =
                    dFock_y_virt_virt[n] -
                    dS_y_virt_virt[n].each_row() % trans(eps_virt) -
                    psFy[n].submat(arma::span(_no_occ, _no_orbitals - 1),
                                   arma::span(_no_occ, _no_orbitals - 1)) +
                    psF_uy.submat(arma::span(_no_occ, _no_orbitals - 1),
                                  arma::span(_no_occ, _no_orbitals - 1));

                dF_all_virt_virt_dz =
                    dFock_z_virt_virt[n] -
                    dS_z_virt_virt[n].each_col() % eps_virt -
                    psFz[n].submat(arma::span(_no_occ, _no_orbitals - 1),
                                   arma::span(_no_occ, _no_orbitals - 1)) +
                    psF_uz.submat(arma::span(_no_occ, _no_orbitals - 1),
                                  arma::span(_no_occ, _no_orbitals - 1));

                _d_delta_eps_accu_dx[n] =
                    arma::trace(ci_coeffs * dF_all_virt_virt_dx *
                                trans(ci_coeffs)) -
                    arma::trace(trans(ci_coeffs) * dF_all_occ_occ_dx *
                                ci_coeffs);
                _d_delta_eps_accu_dy[n] =
                    arma::trace(ci_coeffs * dF_all_virt_virt_dy *
                                trans(ci_coeffs)) -
                    arma::trace(trans(ci_coeffs) * dF_all_occ_occ_dy *
                                ci_coeffs);
                _d_delta_eps_accu_dz[n] =
                    arma::trace(ci_coeffs * dF_all_virt_virt_dz *
                                trans(ci_coeffs)) -
                    arma::trace(trans(ci_coeffs) * dF_all_occ_occ_dz *
                                ci_coeffs);
            }
        }
    }
}
