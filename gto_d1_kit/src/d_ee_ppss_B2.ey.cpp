/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_2_et(const double ae,
                            const double xA,
                            const double yA,
                            const double zA,
                            const double be,
                            const double xB,
                            const double yB,
                            const double zB,
                            const double ce,
                            const double xC,
                            const double yC,
                            const double zC,
                            const double de,
                            const double xD,
                            const double yD,
                            const double zD,
                            const double* const bs,
                            const double* const g,
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C120 = g[0];
    const double C168 = g[1];
    const double C213 = g[2];
    const double C124 = vrx[0];
    const double C125 = vrx[1];
    const double C126 = vrx[2];
    const double C141 = vrx[3];
    const double C156 = vrx[4];
    const double C172 = vrx[5];
    const double C186 = vrx[6];
    const double C201 = vrx[7];
    const double C217 = vrx[8];
    const double C245 = vrx[9];
    const double C260 = vry[0];
    const double C261 = vry[1];
    const double C262 = vry[2];
    const double C277 = vry[3];
    const double C292 = vry[4];
    const double C307 = vry[5];
    const double C321 = vry[6];
    const double C336 = vry[7];
    const double C351 = vry[8];
    const double C379 = vry[9];
    const double C394 = vrz[0];
    const double C395 = vrz[1];
    const double C396 = vrz[2];
    const double C411 = vrz[3];
    const double C426 = vrz[4];
    const double C441 = vrz[5];
    const double C455 = vrz[6];
    const double C470 = vrz[7];
    const double C485 = vrz[8];
    const double C513 = vrz[9];
    const double C525 = C201 * p;
    const double C524 = C156 * p;
    const double C523 = de * zCD;
    const double C522 = be * zAB;
    const double C521 = C141 * p;
    const double C520 = de * yCD;
    const double C519 = be * yAB;
    const double C518 = 2 * q;
    const double C517 = de * xCD;
    const double C516 = be * xAB;
    const double C537 = C336 * p;
    const double C536 = C292 * p;
    const double C535 = C277 * p;
    const double C545 = C470 * p;
    const double C544 = C426 * p;
    const double C543 = C411 * p;
    const double C529 = C522 + C523;
    const double C528 = C519 + C520;
    const double C527 = C125 / C518;
    const double C534 = C260 / C518;
    const double C542 = C394 / C518;
    const double C526 = C516 + C517;
    const double C56 = -(C124 * C529 + C524) / q;
    const double C77 = -(C172 * C529 + C525) / q;
    const double C58 = -(C261 * C529 + C536) / q;
    const double C79 = -(C307 * C529 + C537) / q;
    const double C60 = (C120 * be) / q - (C395 * C529) / q - C544 / q;
    const double C81 = (C168 * be) / q - (C441 * C529) / q - C545 / q;
    const double C49 = -(C124 * C528 + C521) / q;
    const double C91 = -(C217 * C528 + C525) / q;
    const double C51 = (C120 * be) / q - (C261 * C528) / q - C535 / q;
    const double C93 = (C213 * be) / q - (C351 * C528) / q - C537 / q;
    const double C53 = -(C395 * C528 + C543) / q;
    const double C95 = -(C485 * C528 + C545) / q;
    const double C70 = C527 - (C172 * C528) / q - (C186 * p) / q;
    const double C98 = C527 - (C217 * C529) / q - (C245 * p) / q;
    const double C72 =
        (C168 * be) / q - (C307 * C528) / q + C534 - (C321 * p) / q;
    const double C100 = C534 - (C351 * C529) / q - (C379 * p) / q;
    const double C74 = C542 - (C441 * C528) / q - (C455 * p) / q;
    const double C102 =
        (C213 * be) / q - (C485 * C529) / q + C542 - (C513 * p) / q;
    const double C40 =
        (C120 * be) / q - (C124 * C526) / q + C527 - (C126 * p) / q;
    const double C63 = (C168 * be) / q - (C172 * C526) / q - C521 / q;
    const double C84 = (C213 * be) / q - (C217 * C526) / q - C524 / q;
    const double C44 = C534 - (C261 * C526) / q - (C262 * p) / q;
    const double C65 = -(C307 * C526 + C535) / q;
    const double C86 = -(C351 * C526 + C536) / q;
    const double C46 = C542 - (C395 * C526) / q - (C396 * p) / q;
    const double C67 = -(C441 * C526 + C543) / q;
    const double C88 = -(C485 * C526 + C544) / q;
    etx[0] = C40;
    etx[1] = C49;
    etx[2] = C56;
    etx[3] = C63;
    etx[4] = C70;
    etx[5] = C77;
    etx[6] = C84;
    etx[7] = C91;
    etx[8] = C98;
    ety[0] = C44;
    ety[1] = C51;
    ety[2] = C58;
    ety[3] = C65;
    ety[4] = C72;
    ety[5] = C79;
    ety[6] = C86;
    ety[7] = C93;
    ety[8] = C100;
    etz[0] = C46;
    etz[1] = C53;
    etz[2] = C60;
    etz[3] = C67;
    etz[4] = C74;
    etz[5] = C81;
    etz[6] = C88;
    etz[7] = C95;
    etz[8] = C102;
}
