/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "core_kit/fock_matrix_generator.hpp"

namespace niedoida {

    namespace core {

        HFFockMatrixGenerator::HFFockMatrixGenerator(
            std::shared_ptr<const System> system,
            std::unique_ptr<JKMatrixGenerator> JK_matrix_generator) :
            m_system(system),
            m_JK_matrix_generator(std::move(JK_matrix_generator))
        {

            m_JK_matrix_core_gradient_generator =
                std::unique_ptr<JKMatrixCoreGradientGenerator>(
                    new CombinedJKMatrixCoreGradientGenerator(
                        m_system, 1e-10, 64));
        }

        void HFFockMatrixGenerator::set_density_matrix(const arma::mat& P_alpha,
                                                       const arma::mat& P_beta,
                                                       bool incremental)
        {
            m_P[SPIN_ALPHA] = P_alpha;
            m_P[SPIN_BETA] = P_beta;

            m_JK_matrix_generator->set_density_matrix(
                P_alpha, P_beta, incremental);
        }

        void HFFockMatrixGenerator::set_density_matrix_for_CPHF(
            const arma::mat& P_alpha,
            const arma::mat& P_beta,
            const arma::mat& dP_alpha,
            const arma::mat& dP_beta)
        {
            set_density_matrix(dP_alpha, dP_beta, false);
        }

        void HFFockMatrixGenerator::calc_matrix_core_gradient(
            std::vector<unsigned>& atoms, const arma::mat& P)
        {
            m_JK_matrix_core_gradient_generator->calc_matrix_core_gradient(
                atoms, P);
        }
    }
}
