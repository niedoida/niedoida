/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"
#include <boost/lexical_cast.hpp>

namespace {
    std::vector<arma::mat> _generators()
    {
        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_i_rep());
        g.push_back(niedoida::symmetry::make_cn_rep(3));
        g.push_back(
            niedoida::symmetry::make_axis_rep(3, 2. / 3, 2. / 3, -1. / 3));
        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        ThSymmetryGroup::ThSymmetryGroup() : TSymmetryGroup(_generators())
        {
            // FIXME: where are the sigma planes?? There must be 3 of'em.
            ///*
            // 0.          0.          1.         -6. //Z
            //-0.24401694  0.9106836  -0.33333333 -6.
            // 0.9106836  -0.24401694 -0.33333333 -6.
            //-0.66666667 -0.66666667 -0.33333333 -6.
            //*/
            //
        }

        std::string ThSymmetryGroup::name() const { return std::string("Th"); }
    }
}
