/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/quadratures.hpp"

#include <boost/math/constants/constants.hpp>
#include <cmath>

namespace niedoida {
    namespace misc {
        Quadrature
        gauss_legendre_quadrature(double x1, double x2, std::size_t n)
        {
            std::vector<std::pair<double, double>> grid(n);

            const std::size_t m = (n + 1) / 2;

            const double xm = 0.5 * (x2 + x1);
            const double xl = 0.5 * (x2 - x1);

            for (std::size_t i = 0; i < m; ++i) {
                double z = std::cos(boost::math::double_constants::pi *
                                    (i + 0.75) / (n + 0.5));
                double z1;
                double pp;

                do {
                    double p1 = 1;
                    double p2 = 0;

                    for (std::size_t j = 0; j < n; ++j) {
                        const double p3 = p2;
                        p2 = p1;
                        p1 = ((2 * j + 1) * z * p2 - j * p3) / (j + 1);
                    }
                    pp = n * (z * p1 - p2) / (z * z - 1);
                    z1 = z;
                    z = z1 - p1 / pp;
                } while (std::abs(z - z1) > 1e-12);

                grid[i].first = xm - xl * z;
                grid[n - i - 1].first = xm + xl * z;
                grid[i].second = 2 * xl / ((1 - z * z) * pp * pp);
                grid[n - i - 1].second = grid[i].second;
            }

            return grid;
        }
    }
}
