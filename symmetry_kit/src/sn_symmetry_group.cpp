/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

#include <cassert>

namespace {
    std::vector<arma::mat> _generators(unsigned n)
    {
        std::vector<arma::mat> g(1);
        g[0] = niedoida::symmetry::make_sn_rep(n);
        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        SnSymmetryGroup::SnSymmetryGroup(unsigned n) :
            FiniteSymmetryGroup(_generators(n)),
            m_n(n)
        {
            assert(n % 2 == 0);
        }

        std::string SnSymmetryGroup::name() const
        {
            return std::string("S") + std::to_string(m_n);
        }
    }
}
