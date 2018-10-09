/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_cn_rep(1)); // E
        g.push_back(
            niedoida::symmetry::make_axis_rep(4, niedoida::symmetry::X_AXIS));
        g.push_back(
            niedoida::symmetry::make_axis_rep(4, niedoida::symmetry::Y_AXIS));
        g.push_back(
            niedoida::symmetry::make_axis_rep(4, niedoida::symmetry::Z_AXIS));
        // normalised
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, std::sqrt(3.0) / 3, std::sqrt(3.0) / 3, std::sqrt(3.0) / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, -std::sqrt(3.0) / 3, std::sqrt(3.0) / 3, std::sqrt(3.0) / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, -std::sqrt(3.0) / 3, -std::sqrt(3.0) / 3, std::sqrt(3.0) / 3));
        g.push_back(niedoida::symmetry::make_axis_rep(
            3, std::sqrt(3.0) / 3, -std::sqrt(3.0) / 3, std::sqrt(3.0) / 3));
        g.push_back(
            niedoida::symmetry::make_axis_rep(2, niedoida::symmetry::X_AXIS));
        g.push_back(
            niedoida::symmetry::make_axis_rep(2, niedoida::symmetry::Y_AXIS));
        g.push_back(
            niedoida::symmetry::make_axis_rep(2, niedoida::symmetry::Z_AXIS));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, std::sqrt(2.0) / 2, std::sqrt(2.0) / 2, 0));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, -std::sqrt(2.0) / 2, std::sqrt(2.0) / 2, 0));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, 0, std::sqrt(2.0) / 2, std::sqrt(2.0) / 2));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, 0, -std::sqrt(2.0) / 2, std::sqrt(2.0) / 2));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, std::sqrt(2.0) / 2, 0, std::sqrt(2.0) / 2));
        g.push_back(niedoida::symmetry::make_axis_rep(
            2, -std::sqrt(2.0) / 2, 0, std::sqrt(2.0) / 2));

        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        OSymmetryGroup::OSymmetryGroup() : FiniteSymmetryGroup(_generators()) {}

        OSymmetryGroup::OSymmetryGroup(
            const std::vector<arma::mat>& super_generators) :
            FiniteSymmetryGroup(super_generators)
        {
        }

        std::string OSymmetryGroup::name() const { return std::string("O"); }
    }
}
