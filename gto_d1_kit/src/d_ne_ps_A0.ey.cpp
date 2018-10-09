/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_10_1(double ae,
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
    const double C176 = ae + be;
    const double C183 = 2. * Pi;
    const double C182 = ae * be;
    const double C181 = zA - zB;
    const double C180 = yA - yB;
    const double C179 = xA - xB;
    const double C186 = std::pow(C181, 2);
    const double C185 = std::pow(C180, 2);
    const double C184 = std::pow(C179, 2);
    const double C187 = C184 + C185;
    const double C188 = C187 + C186;
    const double C189 = C188 * C182;
    const double C190 = C189 / C176;
    const double C191 = -C190;
    const double C192 = std::exp(C191);
    const double C193 = C192 * C183;
    const double C63 = (bs[0] * C193) / C176;
    const double C64 = (bs[1] * C193) / C176;
    const double C79 = be * zB;
    const double C78 = ae * zA;
    const double C77 = be * yB;
    const double C76 = ae * yA;
    const double C75 = bs[2];
    const double C74 = 4 * Pi;
    const double C73 = zA - zB;
    const double C72 = yA - yB;
    const double C71 = bs[1];
    const double C70 = ae * be;
    const double C69 = xA - xB;
    const double C68 = bs[0];
    const double C67 = be * xB;
    const double C66 = ae * xA;
    const double C65 = ae + be;
    const double C88 = C78 + C79;
    const double C87 = C73 * C70;
    const double C86 = C76 + C77;
    const double C85 = C72 * C70;
    const double C84 = std::pow(C73, 2);
    const double C83 = std::pow(C72, 2);
    const double C82 = std::pow(C69, 2);
    const double C81 = C69 * C70;
    const double C80 = C66 + C67;
    const double C95 = C68 * C87;
    const double C94 = C88 / C65;
    const double C93 = C68 * C85;
    const double C92 = C86 / C65;
    const double C91 = C82 + C83;
    const double C90 = C68 * C81;
    const double C89 = C80 / C65;
    const double C103 = C95 / C65;
    const double C102 = C94 - zC;
    const double C101 = C93 / C65;
    const double C100 = C92 - yC;
    const double C99 = C91 + C84;
    const double C98 = C89 - xC;
    const double C97 = C90 / C65;
    const double C96 = C89 - xB;
    const double C107 = ae * C102;
    const double C106 = ae * C100;
    const double C105 = C99 * C70;
    const double C104 = ae * C98;
    const double C111 = C71 * C107;
    const double C110 = C71 * C106;
    const double C109 = C105 / C65;
    const double C108 = C71 * C104;
    const double C115 = C103 + C111;
    const double C114 = C101 + C110;
    const double C113 = -C109;
    const double C112 = C97 + C108;
    const double C116 = std::exp(C113);
    const double C117 = C116 * C74;
    const double C120 = C115 * C117;
    const double C119 = C114 * C117;
    const double C118 = C112 * C117;
    const double C146 = C92 - yB;
    const double C172 = C94 - zB;
    const double C205 = C75 * C107;
    const double C204 = C71 * C87;
    const double C203 = C75 * C106;
    const double C202 = C71 * C85;
    const double C201 = C75 * C104;
    const double C200 = C71 * C81;
    const double C199 = C64 * ae;
    const double C198 = C63 * ae;
    const double C210 = C204 / C65;
    const double C209 = C202 / C65;
    const double C208 = C200 / C65;
    const double C207 = C199 / C65;
    const double C206 = C198 / C65;
    const double C213 = C210 + C205;
    const double C212 = C209 + C203;
    const double C211 = C208 + C201;
    const double C216 = C213 * C117;
    const double C215 = C212 * C117;
    const double C214 = C211 * C117;
    const double gx100000 = C206 - (C96 * C118) / C65 - C207 +
                            (C98 * C214) / C65 - C63 + (C69 * C118) / C65;
    const double gx010000 =
        (C100 * C214) / C65 - (C146 * C118) / C65 + (C72 * C118) / C65;
    const double gx001000 =
        (C102 * C214) / C65 - (C172 * C118) / C65 + (C73 * C118) / C65;
    gx[(Ai + 0) * matrix_size + Bi + 0] += gx100000;
    gx[(Ai + 1) * matrix_size + Bi + 0] += gx010000;
    gx[(Ai + 2) * matrix_size + Bi + 0] += gx001000;
    const double gy100000 =
        (C98 * C215) / C65 - (C96 * C119) / C65 + (C69 * C119) / C65;
    const double gy010000 = C206 - (C146 * C119) / C65 - C207 +
                            (C100 * C215) / C65 - C63 + (C72 * C119) / C65;
    const double gy001000 =
        (C102 * C215) / C65 - (C172 * C119) / C65 + (C73 * C119) / C65;
    gy[(Ai + 0) * matrix_size + Bi + 0] += gy100000;
    gy[(Ai + 1) * matrix_size + Bi + 0] += gy010000;
    gy[(Ai + 2) * matrix_size + Bi + 0] += gy001000;
    const double gz100000 =
        (C98 * C216) / C65 - (C96 * C120) / C65 + (C69 * C120) / C65;
    const double gz010000 =
        (C100 * C216) / C65 - (C146 * C120) / C65 + (C72 * C120) / C65;
    const double gz001000 = C206 - (C172 * C120) / C65 - C207 +
                            (C102 * C216) / C65 - C63 + (C73 * C120) / C65;
    gz[(Ai + 0) * matrix_size + Bi + 0] += gz100000;
    gz[(Ai + 1) * matrix_size + Bi + 0] += gz010000;
    gz[(Ai + 2) * matrix_size + Bi + 0] += gz001000;
}
