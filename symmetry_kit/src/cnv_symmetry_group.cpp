/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace {
    const arma::mat sigma_xz = {
        {1.0,  0.0, 0.0},
        {0.0, -1.0, 0.0},
        {0.0,  0.0, 1.0}
    };
}

namespace niedoida {
    namespace symmetry {

        CnvSymmetryGroup::CnvSymmetryGroup(unsigned n) :
            CnSymmetryGroup(n, {sigma_xz})
        {
        }

        std::string CnvSymmetryGroup::name() const
        {
            return std::string("C") + std::to_string(m_n) + std::string("v");
        }
    }
}
