/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_cn_rep(5));
        // FIXME: improve precision
        g.push_back(niedoida::symmetry::make_axis_rep(
            5, -0.894389, 0.00951793, 0.447188));
        g.push_back(niedoida::symmetry::make_axis_rep(
            5, 0.285377, 0.847633, -0.447301));
        g.push_back(niedoida::symmetry::make_axis_rep(
            5, -0.267359, 0.853537, 0.447206));
        g.push_back(niedoida::symmetry::make_axis_rep(
            5, 0.717956, -0.533354, 0.447295));
        g.push_back(
            niedoida::symmetry::make_axis_rep(5, 0.729081, 0.518035, 0.447304));
        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        ISymmetryGroup::ISymmetryGroup() : FiniteSymmetryGroup(_generators()) {}

        ISymmetryGroup::ISymmetryGroup(
            const std::vector<arma::mat>& super_generators) :
            FiniteSymmetryGroup(super_generators)
        {
        }

        std::string ISymmetryGroup::name() const { return std::string("I"); }
    }
}
