/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

namespace {
    const std::vector<arma::mat> _generators = {
        {
            { 1.0,  0.0,  0.0},
            { 0.0, -1.0,  0.0},
            { 0.0,  0.0, -1.0}
        },
        {
            {0.0, 0.0, 1.0},
            {1.0, 0.0, 0.0},
            {0.0, 1.0, 0.0}
        }
    };
}

namespace niedoida {
    namespace symmetry {
        TSymmetryGroup::TSymmetryGroup() : FiniteSymmetryGroup(_generators) {}

        TSymmetryGroup::TSymmetryGroup(
            const std::vector<arma::mat>& super_generators) :
            FiniteSymmetryGroup(_merge(_generators, super_generators))
        {
        }

        std::string TSymmetryGroup::name() const { return std::string("T"); }
    }
}
