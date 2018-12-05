/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_KIT_SYMMETRY_UTILS_HPP
#define NIEDOIDA_KIT_SYMMETRY_UTILS_HPP

#include <armadillo>
#include <vector>

namespace niedoida {
    namespace symmetry {
        std::vector<unsigned> create_perm_rep(
            const arma::mat& /*cart_rep*/,
            const arma::mat& /*passed_coords*/,
            double /*tol_dist*/);
    }
}

#endif
