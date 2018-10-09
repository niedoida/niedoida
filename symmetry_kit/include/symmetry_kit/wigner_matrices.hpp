/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef NIEDOIDA_SYMMETRY_KIT_WIGNER_MATRICES
#define NIEDOIDA_SYMMETRY_KIT_WIGNER_MATRICES

#include <armadillo>
#include <vector>

namespace niedoida {
    namespace symmetry {
        std::vector<arma::mat> wigner_matrices(unsigned max_l,
                                               const arma::mat& R);
    }
}

#endif
