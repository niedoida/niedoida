/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace niedoida {
    namespace symmetry {
        OhSymmetryGroup::OhSymmetryGroup() :
            OSymmetryGroup({-1 * arma::eye<arma::mat>(3, 3)})
        {
        }

        std::string OhSymmetryGroup::name() const { return std::string("Oh"); }
    }
}
