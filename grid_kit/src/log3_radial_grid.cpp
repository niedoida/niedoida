/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/radial_grids.hpp"

#include "misc_kit/quadratures.hpp"

#include <cmath>

namespace niedoida {
    namespace grid {
        misc::Quadrature log3_radial_grid(std::size_t n, double alpha)
        {
            const double m = 3;

            std::vector<std::pair<double, double>> glg =
                misc::gauss_legendre_quadrature(0, 1, n);

            std::vector<std::pair<double, double>> g;
            g.reserve(n);

            for (std::size_t i = 0; i < n; ++i) {
                const double x = glg[i].first;

                const double r = -alpha * std::log(1 - std::pow(x, m));
                const double w =
                    glg[i].second *
                    (m * alpha * std::pow(x, m - 1) / (1 - std::pow(x, m)));
                g.push_back(std::make_pair(r, w));
            }

            return g;
        }
    }
}
