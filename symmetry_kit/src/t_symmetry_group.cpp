/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_cn_rep(
            3)); // first C3 axis like in C3 group
        // remaining 3 C3 axes, first one from C3:
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, 2 * std::sqrt(2.0) / 3, 0, -1. / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, -std::sqrt(2.0) / 3, std::sqrt(6.0) / 3, -1. / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, -std::sqrt(2.0) / 3, -std::sqrt(6.0) / 3, -1. / 3));
        // remaining 3 C2 axes:
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, std::sqrt(6.0) / 3, 0, std::sqrt(3.0) / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, std::sqrt(6.0) / 6, std::sqrt(2.0) / 2, -std::sqrt(3.0) / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, std::sqrt(6.0) / 6, -std::sqrt(2.0) / 2, -std::sqrt(3.0) / 3));

        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        TSymmetryGroup::TSymmetryGroup() : FiniteSymmetryGroup(_generators()) {}

        TSymmetryGroup::TSymmetryGroup(
            const std::vector<arma::mat>& super_generators) :
            FiniteSymmetryGroup(super_generators)
        {
        }

        std::string TSymmetryGroup::name() const { return std::string("T"); }
    }
}
