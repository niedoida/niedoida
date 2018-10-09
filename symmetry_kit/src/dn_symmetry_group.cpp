/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        arma::vec vec(3);
        vec(0) = 1;
        vec(1) = 0;
        vec(2) = 0;

        std::vector<arma::mat> g(1);
        g[0] = niedoida::symmetry::make_axis_rep(2, vec);

        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        DnSymmetryGroup::DnSymmetryGroup(unsigned n) :
            CnSymmetryGroup(n, _generators())
        {
        }

        std::string DnSymmetryGroup::name() const
        {
            return std::string("D") + std::to_string(m_n);
        }

        DnSymmetryGroup::DnSymmetryGroup(
            unsigned n, const std::vector<arma::mat>& super_generators) :
            CnSymmetryGroup(n, merge(_generators(), super_generators))
        {
        }
    }
}
