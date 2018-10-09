/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_utils.hpp"

#include "io_kit/log.hpp"

namespace niedoida {
    namespace symmetry {
        std::vector<unsigned> create_perm_rep(const arma::mat& cart_rep,
                                              const arma::mat& coords,
                                              double tol_dist)
        {
            std::vector<unsigned> perm_rep(coords.n_cols);

            for (unsigned a = 0; a < coords.n_cols; ++a) {
                const arma::vec tmp = cart_rep * coords.col(a);
                bool found = false;
                for (unsigned b = 0; b < coords.n_cols; ++b) {
                    if (arma::norm(tmp - coords.col(b), 2) < tol_dist) {
                        perm_rep[a] = b;
                        found = true;
                        break;
                    }
                }
                if (!found)
                    return create_perm_rep(cart_rep, coords, 2 * tol_dist);
            }

            return perm_rep;
        }
    }
}
