/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace {
    const arma::mat c2_x = {
        {1.0,  0.0,  0.0},
        {0.0, -1.0,  0.0},
        {0.0,  0.0, -1.0}
    };
}

namespace niedoida {
    namespace symmetry {
        DnSymmetryGroup::DnSymmetryGroup(unsigned n) :
            CnSymmetryGroup(n, {c2_x})
        {
        }

        std::string DnSymmetryGroup::name() const
        {
            return std::string("D") + std::to_string(m_n);
        }

        DnSymmetryGroup::DnSymmetryGroup(
            unsigned n, const std::vector<arma::mat>& super_generators) :
            CnSymmetryGroup(n, _merge({c2_x}, super_generators))
        {
        }
    }
}
