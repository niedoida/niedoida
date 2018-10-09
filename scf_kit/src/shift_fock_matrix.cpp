/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "scf_kit/scf_utils.hpp"

#include <cassert>

namespace niedoida {
    namespace scf {
        void shift_fock_matrix(arma::mat& F,
                               const arma::mat& S,
                               const arma::mat& C,
                               double shift,
                               unsigned no_electrons)
        {
            const std::size_t n = F.n_rows;

            assert(F.n_cols == n);
            assert(S.n_rows == n);
            assert(S.n_cols == n);

            const arma::mat A = S * C;

            arma::mat B = shift * arma::eye<arma::mat>(n, n);

            for (std::size_t i = 0; i < no_electrons; ++i)
                B(i, i) = 0;

            F += A * B * A.t();
        }
    }
}
