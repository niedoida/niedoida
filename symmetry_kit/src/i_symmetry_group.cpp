/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include <cmath>

namespace {
    const double phi = (1 + std::sqrt(5)) / 2;

    const std::vector<arma::mat> _generators = {
        {
            {
                {-1.0,  0.0,  0.0},
                { 0.0, -1.0,  0.0},
                { 0.0,  0.0,  1.0}
            },
            {
                {(phi-1) / 2,    -phi / 2,           0.5},
                {    phi / 2,         0.5,   (phi-1) / 2},
                {       -0.5, (phi-1) / 2,       phi / 2}
            }
        }
    };
}

namespace niedoida {
    namespace symmetry {
        ISymmetryGroup::ISymmetryGroup() : FiniteSymmetryGroup(_generators) {}

        ISymmetryGroup::ISymmetryGroup(
            const std::vector<arma::mat>& super_generators) :
            FiniteSymmetryGroup(_merge(_generators, super_generators))
        {
        }

        std::string ISymmetryGroup::name() const { return std::string("I"); }
    }
}
