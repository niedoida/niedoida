/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "niedoida/niedoida.hpp"

#include <cmath>

namespace niedoida {
    arma::mat orthonormalize_basis(const arma::mat& S, double threshold)
    {
        const std::size_t n = S.n_rows;
        arma::vec lambda;
        arma::mat beta;
        arma::eig_sym(lambda, beta, S);

        std::size_t m = 0;
        while (lambda(m) < threshold && m < n - 1)
            m++;

        beta = beta.cols(m, n - 1);

        for (std::size_t i = 0; i < n - m; ++i)
            beta.col(i) /= std::sqrt(lambda(i + m));

        return beta;
    }
}
