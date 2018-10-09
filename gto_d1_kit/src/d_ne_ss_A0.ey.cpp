/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_00_1(double ae,
                       double be,
                       double xA,
                       double yA,
                       double zA,
                       double xB,
                       double yB,
                       double zB,
                       double xC,
                       double yC,
                       double zC,
                       const double* bs,
                       double* const gx,
                       double* const gy,
                       double* const gz,
                       std::size_t matrix_size,
                       std::size_t Ai,
                       std::size_t Bi)
{
    const double C53 = 4 * Pi;
    const double C52 = zA - zB;
    const double C51 = yA - yB;
    const double C50 = bs[1];
    const double C49 = ae + be;
    const double C48 = ae * be;
    const double C47 = xA - xB;
    const double C46 = bs[0];
    const double C56 = std::pow(C52, 2);
    const double C55 = std::pow(C51, 2);
    const double C54 = std::pow(C47, 2);
    const double C57 = C54 + C55;
    const double C58 = C57 + C56;
    const double C59 = C58 * C48;
    const double C60 = C59 / C49;
    const double C61 = -C60;
    const double C62 = std::exp(C61);
    const double C63 = C62 * C53;
    const double gx000000 = -(((C46 * C47 * C48) / C49 +
                               C50 * ae * ((ae * xA + be * xB) / C49 - xC)) *
                              C63) /
                            C49;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx000000;
    const double gy000000 = -(((C46 * C51 * C48) / C49 +
                               C50 * ae * ((ae * yA + be * yB) / C49 - yC)) *
                              C63) /
                            C49;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy000000;
    const double gz000000 = -(((C46 * C52 * C48) / C49 +
                               C50 * ae * ((ae * zA + be * zB) / C49 - zC)) *
                              C63) /
                            C49;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz000000;
}
