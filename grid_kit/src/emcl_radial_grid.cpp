/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/radial_grids.hpp"

namespace niedoida {
    namespace grid {
        misc::Quadrature emcl_radial_grid(const core::AtomicBasisSet& abs,
                                          std::size_t no_points,
                                          int m)
        {
            assert(m > 0);

            const double alpha =
                abs.atom().isotope->element->bragg_slater_radius;
            const std::size_t n = no_points + 1;

            misc::Quadrature g(no_points);

            for (std::size_t i = 1; i < n; ++i) {
                const double qi =
                    static_cast<double>(i) / static_cast<double>(n);
                g[i - 1].first = alpha * std::pow(qi, m) * std::pow(1 - qi, -m);
                g[i - 1].second = 1.0 / n * alpha * m * std::pow(qi, m - 1) *
                                  std::pow(1 - qi, -m - 1);
            }

            return g;
        }

        misc::Quadrature EulerMacLaurinRadialGrid::
        operator()(const core::AtomicBasisSet& abs) const
        {
            return emcl_radial_grid(abs, _no_points, _m);
        }
    }
}
