/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"

namespace niedoida {
    namespace symmetry {
        arma::vec canonic(const arma::vec& vec, double tol)
        {
            arma::vec tmp_vec = vec; // chop(vec, tol);
            for (int i = vec.size() - 1; i >= 0; --i) {
                if (std::abs(vec(i)) < tol)
                    continue;

                if (tmp_vec(i) < 0)
                    return -tmp_vec;
                else
                    return tmp_vec;
            }
            return tmp_vec;
        }
    }
}
