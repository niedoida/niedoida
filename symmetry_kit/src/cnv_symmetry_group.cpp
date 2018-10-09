/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

namespace {
    std::vector<arma::mat> _generators()
    {
        arma::vec vec(3);
        vec(0) = 0;
        vec(1) = 1;
        vec(2) = 0;

        std::vector<arma::mat> g(1);
        g[0] = niedoida::symmetry::make_sigma_rep(vec);

        return g;
    }
}

namespace niedoida {
    namespace symmetry {

        CnvSymmetryGroup::CnvSymmetryGroup(unsigned n) :
            CnSymmetryGroup(n, _generators())
        {
        }

        std::string CnvSymmetryGroup::name() const
        {
            return std::string("C") + std::to_string(m_n) + std::string("v");
        }
    }
}
