/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/quadratures.hpp"

namespace niedoida {
    namespace misc {
        Quadrature simple_quadrature(double x1, double x2, std::size_t n)
        {
            if (x2 < x1)
                std::swap(x1, x2);

            Quadrature grid(n);

            const double step = (x2 - x1) / n;

            for (std::size_t i = 0; i < n; ++i) {
                grid[i].first = x1 + i * step;
                grid[i].second = step;
            }

            return grid;
        }
    }
}
