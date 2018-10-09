/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_01(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C88 = ae + be;
    const double C98 = Pi / C88;
    const double C99 = std::sqrt(C98);
    const double C71 = -(C99 * be * xAB) / C88;
    const double C75 = (C99 * ae * xAB) / C88;
    const double C76 = -(C99 * be * yAB) / C88;
    const double C77 = -(C99 * be * zAB) / C88;
    const double C82 = (C99 * ae * yAB) / C88;
    const double C85 = (C99 * ae * zAB) / C88;
    const double C78 = ae + be;
    const double C108 = ae * C77;
    const double C107 = ae * C76;
    const double C106 = 2. * C78;
    const double C105 = ae * C99;
    const double C104 = ae * C71;
    const double C111 = 2 * C108;
    const double C110 = 2 * C107;
    const double C109 = 2. * C105;
    const double C112 = C109 / C106;
    const double gx000100 =
        ((2 * C104 * ae * xAB) / C78 + C112) * std::pow(C99, 2);
    const double gx000010 = 2 * C104 * C82 * C99;
    const double gx000001 = 2 * C104 * C99 * C85;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx000100;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * gx000010;
    gx[(Ai + 0) * matrix_size + Bi + 2] += cc * gx000001;
    const double gy000100 = C75 * C110 * C99;
    const double gy000010 =
        ((2 * C107 * ae * yAB) / C78 + C112) * std::pow(C99, 2);
    const double gy000001 = C99 * C110 * C85;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy000100;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * gy000010;
    gy[(Ai + 0) * matrix_size + Bi + 2] += cc * gy000001;
    const double gz000100 = C75 * C99 * C111;
    const double gz000010 = C99 * C82 * C111;
    const double gz000001 =
        std::pow(C99, 2) * ((2 * C108 * ae * zAB) / C78 + C112);
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz000100;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * gz000010;
    gz[(Ai + 0) * matrix_size + Bi + 2] += cc * gz000001;
}

// Automatically generated, do not edit
