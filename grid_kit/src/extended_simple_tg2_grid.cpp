/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/radial_grids.hpp"
#include "io_kit/log.hpp"
#include "misc_kit/quadratures.hpp"
#include "misc_kit/special_functions.hpp"

#include <boost/math/constants/constants.hpp>
#include <cmath>

namespace {
    using namespace niedoida;

    misc::Quadrature generate_test_grid(const double upper_limit,
                                        std::size_t no_points,
                                        const double alpha)
    {
        misc::Quadrature g;
        g.reserve(no_points - 1);

        const misc::Quadrature glg =
            misc::simple_quadrature(0, upper_limit, no_points);
        for (std::size_t k = 1; k < no_points; ++k) {
            const double r0 = glg[k].first;
            const double w0 = glg[k].second;

            const double r = alpha * std::sin(r0) * std::pow(std::tan(r0), 2.0);
            const double w =
                w0 * alpha *
                (2 * std::sin(r0) * std::tan(r0) / (cos(r0) * cos(r0)) +
                 std::cos(r0) * std::pow(std::tan(r0), 2.0));

            g.push_back(std::make_pair(r, w));
        }

        return g;
    }

    double check_gauss(const misc::Quadrature& g, const double alpha)
    {
        double sum = 0;
        for (std::size_t j = 0; j < g.size(); ++j) {
            const double ab = g[j].first;
            const double wg = g[j].second;
            sum += wg * std::exp(-alpha * ab * ab) * ab * ab;
        }
        sum *= 4.0 * std::pow(alpha, 1.5) /
               std::sqrt(boost::math::double_constants::pi);
        return std::abs(sum - 1.0);
    }
}

namespace niedoida {
    namespace grid {
        misc::Quadrature
        extended_simple_tg2_grid(const core::AtomicBasisSet& abs,
                                 std::size_t no_points)
        {
            /* transformation is r = alpha * sin(x) * tg^2(x)
               it maps (0, inf) on (0, pi/2)
               upper limit is truncated so that the most diffuse function
               is integrated with defined diffuse_accuracy or at least
               highest possible accuracy
               alpha in principle can be varied from atom to atom
               this form of transformation is chosen to produce
               sth that smoothly changes behaviour from tg^3(x)
               to tg^2(x)
            */

            const double diffuse_accuracy = 1e-7;
            const double alpha =
                2.5; // this might be optimized for each atom seperately

            std::vector<double> specific_alpha_L;
            std::vector<double> specific_alpha_H;

            for (std::size_t s = 0; s < abs.valence_shells().size(); ++s) {
                const core::Shell& shell = *abs.valence_shells()[s];

                const double alpha_L =
                    *std::min_element(shell.primitive_exps().begin(),
                                      shell.primitive_exps().end());
                const double alpha_H =
                    *std::max_element(shell.primitive_exps().begin(),
                                      shell.primitive_exps().end());

                specific_alpha_L.push_back(alpha_L);
                specific_alpha_H.push_back(alpha_H);
            }

            // most diffuse
            const double alpha_L = *std::min_element(specific_alpha_L.begin(),
                                                     specific_alpha_L.end());
            // tightest
            const double alpha_H = *std::max_element(specific_alpha_H.begin(),
                                                     specific_alpha_H.end());

            // initial guess for upper limit
            const double rkH = std::sqrt(-std::log(diffuse_accuracy) / alpha_L);
            double upper_limit = std::atan(std::sqrt(rkH / alpha));

            misc::Quadrature g =
                generate_test_grid(upper_limit, no_points + 1, alpha);
            double current_error = check_gauss(g, alpha_L);

            const double step =
                (0.5 * boost::math::double_constants::pi - upper_limit) /
                20; // maximum 20 steps
            while (current_error > diffuse_accuracy &&
                   upper_limit + step <
                       0.5 * boost::math::double_constants::pi) {
                upper_limit += step;
                g = generate_test_grid(upper_limit, no_points + 1, alpha);
                current_error = check_gauss(g, alpha_L);
            }

            io::Log::instance().write(io::Logger::VERBOSE,
                                      "tightest function error",
                                      check_gauss(g, alpha_H));
            io::Log::instance().write(io::Logger::VERBOSE,
                                      "most diffuse function error",
                                      check_gauss(g, alpha_L));

            return g;
        }
    }
}
