/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "misc_kit/special_functions.hpp"

#include <cassert>
#include <cmath>

namespace niedoida {
    namespace misc {
        double lambert_W(double x)
        {
            using boost::math::factorial;
            using boost::math::double_constants::e;

            using std::log;
            using std::pow;
            using std::sqrt;

            assert(x >= -1 / e);

            double w;

            if (x < -1.0 / 3.0) {
                const double p = -sqrt(2 * (e * x + 1));
                w = -1 + p - 1.0 / 3.0 * pow(p, 2) + 11.0 / 72.0 * pow(p, 3) -
                    43.0 / 540.0 * pow(p, 4) + 769.0 / 17280.0 * pow(p, 5) -
                    221.0 / 8505.0 * pow(p, 6);
            } else if (x <= -1.0 / 30.0) {
                w = (-8.0960 + 391.0025 * x - 47.4252 * pow(x, 2) -
                     4877.6330 * pow(x, 3) - 5532.7760 * pow(x, 4)) /
                    (1 - 82.9423 * x + 433.8688 * pow(x, 2) +
                     1515.3060 * pow(x, 3));
            } else if (x < 0) {
                const double L1 = log(-x);
                const double L2 = log(-L1);
                w = L1 - L2 + L2 / L1 + ((-2 + L2) * L2) / (2 * pow(L1, 2)) +
                    ((6 - 9 * L2 + 2 * pow(L2, 2)) * L2) / (6 * pow(L1, 3)) +
                    ((-12 + 36 * L2 - 22 * pow(L2, 2) + 3 * pow(L2, 3)) * L2) /
                        (12 * pow(L1, 4)) +
                    ((60 - 300 * L2 + 350 * pow(L2, 2) - 125 * pow(L2, 3) +
                      12 * pow(L2, 4)) *
                     L2) /
                        (60 * pow(L1, 5));
            } else if (x < 3) {
                // FIXME: this approximation only works reasonably for x in
                // (0.0;0.4)

                // http://mathworld.wolfram.com/LambertW-Function.html, Eq. (11)
                w = 0;

                for (int n = 1; n < 10; ++n)
                    w += pow(static_cast<double>(-n), n - 1) /
                         factorial<int>(n) * pow(x, n);
            } else {
                // http://mathworld.wolfram.com/LambertW-Function.html, Eq. (13)
                const double L1 = log(x);
                const double L2 = log(L1);
                w = L1 - L2 + L2 / L1 + ((-2 + L2) * L2) / (2 * pow(L1, 2)) +
                    ((6 - 9 * L2 + 2 * pow(L2, 2)) * L2) / (6 * pow(L1, 3)) +
                    ((-12 + 36 * L2 - 22 * pow(L2, 2) + 3 * pow(L2, 3)) * L2) /
                        (12 * pow(L1, 4)) +
                    ((60 - 300 * L2 + 350 * pow(L2, 2) - 125 * pow(L2, 3) +
                      12 * pow(L2, 4)) *
                     L2) /
                        (60 * pow(L1, 5));
            }

            return w;
        }
    }
}
