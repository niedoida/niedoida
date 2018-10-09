/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_00(double ae,
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
    const double C87 = ae + be;
    const double C93 = Pi / C87;
    const double C92 = ae + be;
    const double C95 = std::sqrt(C93);
    const double C94 = Pi / C92;
    const double C96 = std::sqrt(C94);
    const double C41 = -(C95 * be * xAB) / C87;
    const double C43 = -(C95 * be * yAB) / C87;
    const double C44 = -(C95 * be * zAB) / C87;
    const double C52 = ae * C44;
    const double C51 = ae * C43;
    const double C50 = be * zAB;
    const double C49 = be * yAB;
    const double C48 = std::pow(ae, 2);
    const double C47 = be * xAB;
    const double C46 = ae + be;
    const double C45 = ae * C41;
    const double C59 = 2 * C52;
    const double C58 = 2 * C51;
    const double C57 = C47 / C46;
    const double C56 = C50 / C46;
    const double C55 = Pi / C46;
    const double C54 = C49 / C46;
    const double C53 = 2. * C46;
    const double C64 = std::pow(C57, 2);
    const double C63 = std::pow(C56, 2);
    const double C62 = std::sqrt(C55);
    const double C61 = 1 / C53;
    const double C60 = std::pow(C54, 2);
    const double C67 = C64 + C61;
    const double C66 = C63 + C61;
    const double C65 = C60 + C61;
    const double C70 = C48 * C67;
    const double C69 = C48 * C66;
    const double C68 = C48 * C65;
    const double C73 = 2 * C70;
    const double C72 = 2 * C69;
    const double C71 = 2 * C68;
    const double C76 = ae - C73;
    const double C75 = ae - C72;
    const double C74 = ae - C71;
    const double C79 = C76 * C62;
    const double C78 = C75 * C62;
    const double C77 = C74 * C62;
    const double C101 = be * C96;
    const double C102 = 2 * C101;
    const double C103 = -C102;
    const double C104 = C103 / C53;
    const double gx000000 =
        (-2 * ae *
         ((-4 * be * 2 * C45) / C53 -
          (2 * ae * ((-2 * be * C95) / C53 - (2 * C45 * C47) / C46) * C47) /
              C46) *
         std::pow(C96, 2)) /
            2.0 +
        2 * C45 * C77 * C96 + 2 * C45 * C96 * C78;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * gx000000;
    const double gy000000 =
        C79 * C58 * C96 +
        (C96 * C95 * -2 * ae *
         ((-4 * be * C58) / C53 -
          (2 * ae * (C104 - (2 * C51 * C49) / C46) * C49) / C46)) /
            2.0 +
        C95 * C58 * C78;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * gy000000;
    const double gz000000 =
        C79 * C96 * C59 + C95 * C77 * C59 +
        (C95 * C96 * -2 * ae *
         ((-4 * be * C59) / C53 -
          (2 * ae * (C104 - (2 * C52 * C50) / C46) * C50) / C46)) /
            2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * gz000000;
}

// Automatically generated, do not edit
