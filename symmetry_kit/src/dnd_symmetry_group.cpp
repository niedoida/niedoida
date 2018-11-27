/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "symmetry_kit/symmetry_group.hpp"

#include <boost/math/constants/constants.hpp>

#include <cmath>

namespace {
    using namespace boost::math::double_constants;

    std::vector<arma::mat> _generators(unsigned n)
    {
        return {
            {
                { std::cos(pi / n), -std::sin(pi / n),  0.0 },
                { std::sin(pi / n),  std::cos(pi / n),  0.0 },
                {              0.0,               0.0, -1.0 }
            }
        };
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
