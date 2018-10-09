/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef DFOCK_HPP
#define DFOCK_HPP

#include "core_kit/system.hpp"

namespace niedoida {
    namespace core {

        void calc_dS_dFock(
            std::shared_ptr<const System> system,
            std::shared_ptr<const FockMatrixGeneratorFactory> fm_gen,
            const arma::mat &C,
            std::vector<unsigned>& atoms,
            std::vector< arma::mat > & dS_x_occ_occ,
            std::vector< arma::mat > & dS_y_occ_occ,
            std::vector< arma::mat > & dS_z_occ_occ,
            std::vector< arma::mat > & dFock_x_occ_occ,
            std::vector< arma::mat > & dFock_y_occ_occ,
            std::vector< arma::mat > & dFock_z_occ_occ,
            std::vector< arma::mat > & dS_x_occ_virt,
            std::vector< arma::mat > & dS_y_occ_virt,
            std::vector< arma::mat > & dS_z_occ_virt,
            std::vector< arma::mat > & dFock_x_occ_virt,
            std::vector< arma::mat > & dFock_y_occ_virt,
            std::vector< arma::mat > & dFock_z_occ_virt );

        void calc_all_dS_dFock(
            std::shared_ptr<const core::System> system,
            const arma::mat &C_mol,
            const arma::vec &eps,
            const std::vector<unsigned>& atoms,
            std::vector< arma::mat > & dS_x_occ_occ,
            std::vector< arma::mat > & dS_y_occ_occ,
            std::vector< arma::mat > & dS_z_occ_occ,
            std::vector< arma::mat > & dFock_x_occ_occ,
            std::vector< arma::mat > & dFock_y_occ_occ,
            std::vector< arma::mat > & dFock_z_occ_occ,
            std::vector< arma::mat > & dS_x_occ_virt,
            std::vector< arma::mat > & dS_y_occ_virt,
            std::vector< arma::mat > & dS_z_occ_virt,
            std::vector< arma::mat > & dFock_x_occ_virt,
            std::vector< arma::mat > & dFock_y_occ_virt,
            std::vector< arma::mat > & dFock_z_occ_virt,
            std::vector< arma::mat > & dS_x_virt_virt,
            std::vector< arma::mat > & dS_y_virt_virt,
            std::vector< arma::mat > & dS_z_virt_virt,
            std::vector< arma::mat > & dFock_x_virt_virt,
            std::vector< arma::mat > & dFock_y_virt_virt,
            std::vector< arma::mat > & dFock_z_virt_virt );

        void dF_matrix_generator(
            std::shared_ptr<const core::System> system,
            const arma::mat &C_mol,
            const arma::vec eps,
            arma::mat  & P,
            arma::mat  & dKx,
            arma::mat  & dKy,
            arma::mat  & dKz,
            arma::mat  & dJx,
            arma::mat  & dJy,
            arma::mat  & dJz,
            std::size_t atom_ind );

    }
}
#endif

