/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_MISC_KIT_BLACKBOX_HPP
#define NIEDOIDA_MISC_KIT_BLACKBOX_HPP

#include <functional>

#include <armadillo>

namespace niedoida {
    namespace misc {
        /*
         * @brief Diagonalize a symmetric, positive definite matrix.
         *
         */
        unsigned davidson_liu_diagonalize(
            std::function<
                arma::vec(
                    const arma::vec&)> ax,
            const arma::vec& a_diagonal,
            const arma::mat& v_0,
            unsigned k_min,
            unsigned k_max,
            arma::vec& lambda,
            arma::mat& X,
            unsigned iter_max = 10,
            double eps = 1e-10);

        /*
         * @brief Diagonalize a symmetric, positive definite matrix.
         *
         */
        unsigned davidson_liu_diagonalize(
            std::function<
                arma::mat(
                    const arma::mat&)> ax,
            const arma::vec& a_diagonal,
            const arma::mat& v_0,
            unsigned k_min,
            unsigned k_max,
            arma::vec& lambda,
            arma::mat& X,
            unsigned iter_max = 10,
            double eps = 1e-10);
    }
}
#endif
