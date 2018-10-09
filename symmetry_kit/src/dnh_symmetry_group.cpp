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

        // \sigma_v
        arma::vec vec(3);
        vec(0) = 0;
        vec(1) = 0;
        vec(2) = 1;

        std::vector<arma::mat> g;
        g.push_back(niedoida::symmetry::make_sigma_rep(vec));

        if (n % 2) {
            // S_n
            g.push_back(niedoida::symmetry::make_sn_rep(n));

            // \sigma_h
            vec(0) = 0;
            vec(1) = 0;
            vec(2) = 1;

            g.push_back(niedoida::symmetry::make_sigma_rep(vec));

        } else {
            // i
            g.push_back(niedoida::symmetry::make_i_rep());

            // \sigma_d
            const double phi = pi / n;
            vec(0) = std::cos(phi);
            vec(1) = std::sin(phi);
            vec(2) = 0;
        }

        return g;
    }
}

namespace niedoida {
    namespace symmetry {
        DnhSymmetryGroup::DnhSymmetryGroup(unsigned n) :
            DnSymmetryGroup(n, _generators(n))
        {
        }

        std::string DnhSymmetryGroup::name() const
        {
            return std::string("D") + std::to_string(m_n) + std::string("h");
        }
    }
}
