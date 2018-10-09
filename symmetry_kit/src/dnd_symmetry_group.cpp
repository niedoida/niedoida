/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/misc.hpp"
#include "symmetry_kit/symmetry_group.hpp"

#include <boost/math/constants/constants.hpp>

namespace {
    std::vector<arma::mat> _generators(unsigned n)
    {
        using namespace boost::math::double_constants;

        std::vector<arma::mat> g;

        if (n % 2) {
            // for odd n: D_{nd} = D_n \otimes C_i
            g.push_back(niedoida::symmetry::make_i_rep());
        } else {
            // for even n we add diagonal plane
            const double phi = pi / (2 * n);
            arma::vec vec(3);
            vec(0) = std::cos(phi);
            vec(1) = std::sin(phi);
            vec(2) = 0;

            g.push_back(niedoida::symmetry::make_sigma_rep(vec));

            // S_n (isn't this redundant?)
            g.push_back(
                niedoida::symmetry::make_cn_rep(-static_cast<int>(2 * n)));
        }

        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        DndSymmetryGroup::DndSymmetryGroup(unsigned n) :
            DnSymmetryGroup(n, _generators(n))
        {
        }

        std::string DndSymmetryGroup::name() const
        {
            return std::string("D") + std::to_string(m_n) + std::string("d");
        }
    }
}
