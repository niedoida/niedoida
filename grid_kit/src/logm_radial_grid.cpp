/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/radial_grids.hpp"

#include <boost/math/special_functions/atanh.hpp>
#include <cmath>

namespace niedoida {
    namespace grid {
        misc::Quadrature logm_radial_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            std::size_t n,
            unsigned no_electrons)
        {
            /* equidistant grid for x: (0,1) +
               transformation r = alpha * (-log(x))^m
               or r = alpha * atanh^m(x)

               alpha and m optimized for first and second period
               for set of moieties like neutral, cationic, anionic atom,
               and homonuclear molecules

               In optimization SVWN and aug-cc-pVDZ were used,
               minimizing error in energy and
               integrated number of electrons (using converged density)
            */

            double alpha, power;
            bool hyperbolic = false;

            switch (no_electrons) {
            case 1:                                    // H
                n = static_cast<std::size_t>(0.8 * n); // less points
                alpha = 5.0;
                power = 1.7;
                hyperbolic = true;
                break;
            case 2:                                    // He
                n = static_cast<std::size_t>(0.8 * n); // less points
                alpha = 3.0;
                power = 1.9;
                break;
            case 3: // Li
                alpha = 3.1;
                power = 2.0;
                break;
            case 4: // Be
                alpha = 3.0;
                power = 2.2;
                break;
            case 5: // B
                alpha = 5.0;
                power = 2.4;
                hyperbolic = true;
                break;
            case 6: // C
                alpha = 6.0;
                power = 2.4;
                hyperbolic = true;
                break;
            case 7: // N
                alpha = 4.0;
                power = 2.6;
                hyperbolic = true;
                break;
            case 8: // O
                alpha = 5.0;
                power = 2.7;
                hyperbolic = true;
                break;
            case 9:                                    // F
                n = static_cast<std::size_t>(1.1 * n); // more points
                alpha = 6.0;
                power = 2.8;
                hyperbolic = true;
                break;
            case 10:                                   // Ne
                n = static_cast<std::size_t>(1.1 * n); // more points
                alpha = 5.0;
                power = 2.9;
                hyperbolic = true;
                break;
            default:                                   // others - unoptimized
                n = static_cast<std::size_t>(1.1 * n); // more points
                alpha = 5.0;
                power = 2.9;
                hyperbolic = true;
            }

            std::vector<std::pair<double, double>> glg = q(0, 1, n + 1);
            // gauss_chebyshev_0_quadrature(0, 1, n + 1);
            // gauss_legendre_quadrature(0, 1, n + 1);
            // simple_quadrature(0, 1, n + 1);

            misc::Quadrature g;
            g.reserve(n);

            if (hyperbolic) {
                for (std::size_t i = 1; i < n + 1; ++i) {
                    const double x = glg[i].first;
                    const double r = alpha * std::pow(atanh(x), power);
                    const double w = glg[i].second * alpha * power *
                                     std::pow(atanh(x), power - 1.0) /
                                     (1 - x * x);
                    g.push_back(std::make_pair(r, w));
                }
            } else {
                for (std::size_t i = 1; i < n + 1; ++i) {
                    const double x = glg[i].first;
                    const double r = alpha * std::pow((-std::log(x)), power);
                    const double w = glg[i].second * alpha * power *
                                     std::pow((-std::log(x)), power - 1.0) / x;
                    g.push_back(std::make_pair(r, w));
                }
            }
            return g;
        }

        misc::Quadrature LogmRadialGrid::
        operator()(const core::AtomicBasisSet& abs) const
        {
            return logm_radial_grid(
                _q, _no_points, abs.atom().isotope->element->atomic_number);
        }
    }
}
