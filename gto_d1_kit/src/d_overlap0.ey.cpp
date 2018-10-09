/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_00(double ae,
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
    const double C49 = ae + be;
    const double C56 = Pi / C49;
    const double C57 = std::sqrt(C56);
    const double C39 = -(C57 * be * xAB) / C49;
    const double C43 = -(C57 * be * yAB) / C49;
    const double C44 = -(C57 * be * zAB) / C49;
    const double gx000000 = 2 * ae * C39 * std::pow(C57, 2);
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx000000;
    const double gy000000 = 2 * ae * C43 * std::pow(C57, 2);
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy000000;
    const double gz000000 = std::pow(C57, 2) * 2 * ae * C44;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz000000;
}

// Automatically generated, do not edit
