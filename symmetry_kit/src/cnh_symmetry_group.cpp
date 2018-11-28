/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace {
    const arma::mat sigma_xy = {
        {1.0, 0.0,  0.0},
        {0.0, 1.0,  0.0},
        {0.0, 0.0, -1.0}};
}

namespace niedoida {
    namespace symmetry {
        CnhSymmetryGroup::CnhSymmetryGroup(unsigned n) :
            CnSymmetryGroup(n, {sigma_xy})
        {
        }

        std::string CnhSymmetryGroup::name() const
        {
            return std::string("C") + std::to_string(m_n) + std::string("h");
        }
    }
}
