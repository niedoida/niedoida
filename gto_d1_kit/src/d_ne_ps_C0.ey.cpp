/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_10_3(double ae,
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
    const double C155 = ae + be;
    const double C61 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C155) *
         2. * Pi) /
        C155;
    const double C74 = be * zB;
    const double C73 = ae * zA;
    const double C72 = be * yB;
    const double C71 = ae * yA;
    const double C70 = bs[2];
    const double C69 = ae * be;
    const double C68 = zA - zB;
    const double C67 = yA - yB;
    const double C66 = xA - xB;
    const double C65 = bs[1];
    const double C64 = ae + be;
    const double C63 = be * xB;
    const double C62 = ae * xA;
    const double C80 = C73 + C74;
    const double C79 = C71 + C72;
    const double C78 = std::pow(C68, 2);
    const double C77 = std::pow(C67, 2);
    const double C76 = std::pow(C66, 2);
    const double C75 = C62 + C63;
    const double C84 = C80 / C64;
    const double C83 = C79 / C64;
    const double C82 = C76 + C77;
    const double C81 = C75 / C64;
    const double C89 = C84 - zC;
    const double C88 = C83 - yC;
    const double C87 = C81 - xC;
    const double C86 = C82 + C78;
    const double C85 = C81 - xB;
    const double C90 = C86 * C69;
    const double C91 = C90 / C64;
    const double C92 = -C91;
    const double C93 = std::exp(C92);
    const double C94 = Pi * C93;
    const double C97 = C94 * C89;
    const double C96 = C94 * C88;
    const double C95 = C94 * C87;
    const double C100 = 4 * C97;
    const double C99 = 4 * C96;
    const double C98 = 4 * C95;
    const double C103 = C65 * C100;
    const double C102 = C65 * C99;
    const double C101 = C65 * C98;
    const double C127 = C83 - yB;
    const double C151 = C84 - zB;
    const double C162 = C70 * C100;
    const double C161 = C70 * C99;
    const double C160 = C70 * C98;
    const double gx100000 = C85 * C101 + C61 - C87 * C160 - C66 * C101;
    const double gx010000 = C127 * C101 - C88 * C160 - C67 * C101;
    const double gx001000 = C151 * C101 - C89 * C160 - C68 * C101;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx010000;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001000;
    const double gy100000 = C85 * C102 - C87 * C161 - C66 * C102;
    const double gy010000 = C127 * C102 + C61 - C88 * C161 - C67 * C102;
    const double gy001000 = C151 * C102 - C89 * C161 - C68 * C102;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy100000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy010000;
    gy[(Ai + 2) * matrix_size + Bi + 0] += gy001000;
    const double gz100000 = C85 * C103 - C87 * C162 - C66 * C103;
    const double gz010000 = C127 * C103 - C88 * C162 - C67 * C103;
    const double gz001000 = C151 * C103 + C61 - C89 * C162 - C68 * C103;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz100000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz010000;
    gz[(Ai + 2) * matrix_size + Bi + 0] += gz001000;
}
