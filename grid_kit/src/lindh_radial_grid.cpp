/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "grid_kit/radial_grids.hpp"

#include "misc_kit/quadratures.hpp"
#include "misc_kit/special_functions.hpp"

#include <cmath>

namespace {

    using boost::math::double_constants::pi;
    using namespace niedoida;

    double _h(double R, int m)
    {
        assert(m > -3);
        assert(m < 3);

        switch (m) {
        case -2:
            return -std::pow(pi, 2) / (2 * std::log(R / (2 * std::sqrt(2.0))));

        case -1:
            return -std::pow(pi, 2) / misc::lambert_W(-std::pow(R, 2) / 8);

        case 0:
            return -std::pow(pi, 2) /
                   (2 * misc::lambert_W(-(pi * R) / (8 * std::sqrt(2.0))));

        case 1:
            return -std::pow(pi, 2) /
                   (3 * misc::lambert_W(-std::pow(pi * R, 2.0 / 3.0) / 6));

        case 2:
            return -std::pow(pi, 2) /
                   (4 * misc::lambert_W(-(pi * std::sqrt(3 * R)) /
                                        (8 * std::pow(2.0, 3.0 / 4.0))));
        }

        throw std::domain_error("_h");
    }

    double _r1(double R, double alpha_H, int m)
    {
        assert(m > -3);

        const double D_m =
            9.1 + (2 + m) * (-3.6 + (0.5375 - 0.05625 * (-2 + m)) * m);
        return std::sqrt(std::exp(2 * (D_m - std::log(1 / R)) / (3 + m))) /
               std::sqrt(alpha_H);
    }

    double _rkH(double R, double alpha_L, int m)
    {
        assert(m > -3);
        assert(m < 2);

        switch (m) {
        case -2:
            return std::sqrt(misc::lambert_W((2 * pi) / std::pow(R, 2))) /
                   std::sqrt(2 * alpha_L);
        case -1:
            return std::sqrt(-std::log(R) / alpha_L);
        case 0:
            return std::sqrt(-misc::lambert_W(-(8 * std::pow(R, 2)) / pi) /
                             (2 * alpha_L));
        case 1:
            return std::sqrt(-misc::lambert_W(-R) / alpha_L);
        }

        throw std::domain_error("_rkH");
    }
}

namespace niedoida {
    namespace grid {
        misc::Quadrature lindh_radial_grid(
            boost::function<misc::Quadrature(double, double, std::size_t)> q,
            const core::AtomicBasisSet& abs,
            double R)
        {
            std::vector<double> specific_h;
            std::vector<double> specific_r1;
            std::vector<double> specific_rkH;

            for (std::size_t s = 0; s < abs.valence_shells().size(); ++s) {
                const core::Shell& shell = *abs.valence_shells()[s];

                const double alpha_H =
                    *std::max_element(shell.primitive_exps().begin(),
                                      shell.primitive_exps().end());

                const double alpha_L =
                    *std::min_element(shell.primitive_exps().begin(),
                                      shell.primitive_exps().end());

                for (std::size_t i = 0; i < shell.l().size(); ++i) {
                    const int m = shell.l()[i] - 2;

                    specific_h.push_back(_h(R, m));
                    specific_r1.push_back(_r1(R, alpha_H, m));
                    specific_rkH.push_back(_rkH(R, alpha_L, m));
                }
            }

            const double h =
                *std::min_element(specific_h.begin(), specific_h.end());
            const double r1 =
                *std::min_element(specific_r1.begin(), specific_r1.end());
            const double rkH =
                *std::max_element(specific_rkH.begin(), specific_rkH.end());

            double c = r1 / (std::exp(h) - 1);
            const unsigned kH =
                static_cast<unsigned>(std::log(1 + rkH / c) / h) + 1;

            misc::Quadrature glg = q(0, std::log(rkH / c + 1), kH);

            misc::Quadrature g;
            g.reserve(kH);

            for (std::size_t k = 0; k < kH; ++k) {
                const double r = c * (std::exp(glg[k].first) - 1);
                const double w = glg[k].second * c * std::exp(glg[k].first);

                g.push_back(std::make_pair(r, w));
            }

            return g;
        }

        misc::Quadrature LindhRadialGrid::
        operator()(const core::AtomicBasisSet& abs) const
        {
            return lindh_radial_grid(_q, abs, _r);
        }
    }
}
