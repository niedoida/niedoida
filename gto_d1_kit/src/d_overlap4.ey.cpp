/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_10(double ae,
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
    const double C736 = ae + be;
    const double C742 = Pi / C736;
    const double C743 = std::sqrt(C742);
    const double C721 = std::sqrt(Pi / (ae + be));
    const double C722 = -(C743 * be * xAB) / C736;
    const double C725 = -(C743 * be * yAB) / C736;
    const double C726 = -(C743 * be * zAB) / C736;
    const double C727 = ae + be;
    const double C752 = be * C743;
    const double C751 = ae * C726;
    const double C750 = ae * C725;
    const double C749 = ae * C722;
    const double C748 = 2. * C727;
    const double C755 = 2 * C752;
    const double C754 = 2 * C751;
    const double C753 = 2 * C750;
    const double C756 = -C755;
    const double C757 = C756 / C748;
    const double gx100000 =
        ((-2 * be * C721) / C748 - (2 * C749 * be * xAB) / C727) *
        std::pow(C743, 2);
    const double gx010000 = 2 * C749 * C725 * C743;
    const double gx001000 = 2 * C749 * C743 * C726;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx100000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * gx010000;
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * gx001000;
    const double gy100000 = C722 * C753 * C743;
    const double gy010000 = C721 * (C757 - (2 * C750 * be * yAB) / C727) * C743;
    const double gy001000 = C721 * C753 * C726;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy100000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * gy010000;
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * gy001000;
    const double gz100000 = C722 * C743 * C754;
    const double gz010000 = C721 * C725 * C754;
    const double gz001000 = C721 * C743 * (C757 - (2 * C751 * be * zAB) / C727);
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz100000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * gz010000;
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * gz001000;
}

// Automatically generated, do not edit
