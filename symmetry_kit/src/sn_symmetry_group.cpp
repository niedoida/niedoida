/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include <cassert>

#include <boost/math/constants/constants.hpp>

namespace {
    using namespace boost::math::double_constants;

    std::vector<arma::mat> _generators(unsigned n)
    {
        return {
            {
                { std::cos(2 * pi / n), -std::sin(2 * pi / n),  0.0 },
                { std::sin(2 * pi / n),  std::cos(2 * pi / n),  0.0 },
                {                  0.0,                   0.0, -1.0}
            }
        };
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
