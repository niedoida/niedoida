/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        return {
            {
                {0.0, -1.0,  0.0},
                {1.0,  0.0,  0.0},
                {0.0,  0.0, -1.0}
            }
        };
    }
}

namespace niedoida {
    namespace symmetry {
        TdSymmetryGroup::TdSymmetryGroup() : TSymmetryGroup(_generators()) {}

        std::string TdSymmetryGroup::name() const { return std::string("Td"); }
    }
}
