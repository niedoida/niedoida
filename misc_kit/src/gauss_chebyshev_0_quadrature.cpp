/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/quadratures.hpp"

#include <boost/math/constants/constants.hpp>
#include <cmath>

namespace niedoida {
    namespace misc {
        Quadrature
        gauss_chebyshev_0_quadrature(double x1, double x2, std::size_t n)
        {
            if (x2 < x1)
                std::swap(x1, x2);

            std::vector<std::pair<double, double>> grid(n);

            const double t = boost::math::double_constants::pi / (n + 1);
            const double d = (x2 - x1) / 2;

            for (std::size_t i = 0; i < n; ++i) {
                grid[i].first = x1 + d * (1 + std::cos((i + 1) * t));
                grid[i].second = d * t * sin((i + 1) * t);
            }

            return grid;
        }
    }
}
