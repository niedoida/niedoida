/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_utils.hpp"

#include <cassert>
namespace niedoida {
    namespace symmetry {
        arma::mat inertia(const arma::mat& r, const std::vector<unsigned>& m)
        {
            assert(r.n_cols == m.size());

            arma::mat I = arma::zeros<arma::mat>(3, 3);

            for (unsigned i = 0; i < r.n_cols; ++i) {
                const double x = r(0, i);
                const double y = r(1, i);
                const double z = r(2, i);

                I(0, 0) += m[i] * (y * y + z * z);
                I(1, 1) += m[i] * (x * x + z * z);
                I(2, 2) += m[i] * (x * x + y * y);
                I(0, 1) -= m[i] * x * y;
                I(0, 2) -= m[i] * x * z;
                I(1, 2) -= m[i] * y * z;
            }
            I(1, 0) = I(0, 1);
            I(2, 0) = I(0, 2);
            I(2, 1) = I(1, 2);
            return I;
        }
    }
}
