/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/special_functions.hpp"

#include <boost/math/special_functions/gamma.hpp>

namespace niedoida {
    namespace misc {
        /* Boost-based reference Boys */
        double boys(int n, double x)
        {
            // FIXME:
            if (x < 1e-20)
                x = 1e-20;
            const double n5 = n + 0.5;

            return 0.5 * std::pow(x, -n5) * boost::math::tgamma(n5) *
                   boost::math::gamma_p(n5, x);
        }

        FastBoys::FastBoys(unsigned maxn, double step, double limit)
        {
            _limit = limit;
            _inverse_step = 1 / step;
            const unsigned nx =
                static_cast<unsigned>(limit * _inverse_step) + 1;
            _b.reset(new boost::multi_array<double, 3>(
                boost::extents[maxn + 1][nx + 1][5]));
            _c.reset(
                new boost::multi_array<double, 2>(boost::extents[nx + 1][6]));
            _b_size_3 = 5;
            _b_size_23 = _b_size_3 * (nx + 1);
            _b_data = (*_b).origin();
            _c_size_2 = 6;
            _c_data = (*_c).origin();

            for (unsigned i = 0; i < maxn + 1; ++i) {
                (*_b)[i][0][0] = 1.0 / (2 * i + 1);
                (*_b)[i][0][1] = -1.0 / (2 * i + 3);
                (*_b)[i][0][2] = 1.0 / (4 * i + 10);
                (*_b)[i][0][3] = -1.0 / (12 * i + 42);
                (*_b)[i][0][4] = 1.0 / (48 * i + 216);
            }

            for (unsigned i = 0; i < maxn + 1; ++i)
                for (unsigned j = 1; j < nx + 1; ++j) {
                    const double z = j * step;
                    const double z_2 = z * z / 2;
                    const double z_3 = z_2 * z / 3;
                    const double z_4 = z_3 * z / 4;
                    const double b0 = boys(i, z);
                    const double b1 = boys(i + 1, z);
                    const double b2 = boys(i + 2, z);
                    const double b3 = boys(i + 3, z);
                    const double b4 = boys(i + 4, z);
                    (*_b)[i][j][0] =
                        b0 + z * b1 + z_2 * b2 + z_3 * b3 + z_4 * b4;
                    (*_b)[i][j][1] = -b1 - z * b2 - z_2 * b3 - z_3 * b4;
                    (*_b)[i][j][2] = (b2 + z * b3 + z_2 * b4) / 2;
                    (*_b)[i][j][3] = (-b3 - z * b4) / 6;
                    (*_b)[i][j][4] = b4 / 24;
                }

            for (unsigned i = 0; i < nx + 1; ++i) {
                const double z = -(i * step);
                const double z_2 = z * z / 2;
                const double z_3 = z_2 * z / 3;
                const double z_4 = z_3 * z / 4;
                const double z_5 = z_4 * z / 5;
                const double exp_z = std::exp(z);
                (*_c)[i][0] = exp_z * (1 - z + z_2 - z_3 + z_4 - z_5);
                (*_c)[i][1] = exp_z * (1 - z + z_2 - z_3 + z_4);
                (*_c)[i][2] = exp_z * (1 - z + z_2 - z_3) / 2;
                (*_c)[i][3] = exp_z * (1 - z + z_2) / 6;
                (*_c)[i][4] = exp_z * (1 - z) / 24;
                (*_c)[i][5] = exp_z / 120;
            }
        }

        FastBoys fast_boys;
    }
}
