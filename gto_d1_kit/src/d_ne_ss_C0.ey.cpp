/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_00_3(double ae,
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
    const double C50 = ae + be;
    const double C49 = ae * be;
    const double C48 = zA - zB;
    const double C47 = yA - yB;
    const double C46 = xA - xB;
    const double C45 = bs[1];
    const double C53 = std::pow(C48, 2);
    const double C52 = std::pow(C47, 2);
    const double C51 = std::pow(C46, 2);
    const double C54 = C51 + C52;
    const double C55 = C54 + C53;
    const double C56 = C55 * C49;
    const double C57 = C56 / C50;
    const double C58 = -C57;
    const double C59 = std::exp(C58);
    const double C60 = Pi * C59;
    const double gx000000 = C45 * 4 * C60 * ((ae * xA + be * xB) / C50 - xC);
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx000000;
    const double gy000000 = C45 * 4 * C60 * ((ae * yA + be * yB) / C50 - yC);
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy000000;
    const double gz000000 = C45 * 4 * C60 * ((ae * zA + be * zB) / C50 - zC);
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz000000;
}
