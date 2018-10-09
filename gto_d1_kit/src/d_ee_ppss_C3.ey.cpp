/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_3_hr(const double ae,
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
                            const double* const etx,
                            const double* const ety,
                            const double* const etz,
                            double* const hrx,
                            double* const hry,
                            double* const hrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double C110 = etx[0];
    const double C111 = etx[1];
    const double C119 = etx[2];
    const double C127 = etx[3];
    const double C135 = etx[4];
    const double C142 = etx[5];
    const double C150 = etx[6];
    const double C158 = etx[7];
    const double C172 = etx[8];
    const double C179 = ety[0];
    const double C180 = ety[1];
    const double C188 = ety[2];
    const double C196 = ety[3];
    const double C204 = ety[4];
    const double C211 = ety[5];
    const double C219 = ety[6];
    const double C227 = ety[7];
    const double C241 = ety[8];
    const double C248 = etz[0];
    const double C249 = etz[1];
    const double C257 = etz[2];
    const double C265 = etz[3];
    const double C273 = etz[4];
    const double C280 = etz[5];
    const double C288 = etz[6];
    const double C296 = etz[7];
    const double C310 = etz[8];
    const double C40 = C110 + xAB * C111;
    const double C49 = C119 + yAB * C111;
    const double C56 = C127 + zAB * C111;
    const double C63 = C119 + xAB * C135;
    const double C70 = C142 + yAB * C135;
    const double C77 = C150 + zAB * C135;
    const double C84 = C127 + xAB * C158;
    const double C91 = C150 + yAB * C158;
    const double C98 = C172 + zAB * C158;
    const double C44 = C179 + xAB * C180;
    const double C51 = C188 + yAB * C180;
    const double C58 = C196 + zAB * C180;
    const double C65 = C188 + xAB * C204;
    const double C72 = C211 + yAB * C204;
    const double C79 = C219 + zAB * C204;
    const double C86 = C196 + xAB * C227;
    const double C93 = C219 + yAB * C227;
    const double C100 = C241 + zAB * C227;
    const double C46 = C248 + xAB * C249;
    const double C53 = C257 + yAB * C249;
    const double C60 = C265 + zAB * C249;
    const double C67 = C257 + xAB * C273;
    const double C74 = C280 + yAB * C273;
    const double C81 = C288 + zAB * C273;
    const double C88 = C265 + xAB * C296;
    const double C95 = C288 + yAB * C296;
    const double C102 = C310 + zAB * C296;
    hrx[0] = C40;
    hrx[1] = C49;
    hrx[2] = C56;
    hrx[3] = C63;
    hrx[4] = C70;
    hrx[5] = C77;
    hrx[6] = C84;
    hrx[7] = C91;
    hrx[8] = C98;
    hry[0] = C44;
    hry[1] = C51;
    hry[2] = C58;
    hry[3] = C65;
    hry[4] = C72;
    hry[5] = C79;
    hry[6] = C86;
    hry[7] = C93;
    hry[8] = C100;
    hrz[0] = C46;
    hrz[1] = C53;
    hrz[2] = C60;
    hrz[3] = C67;
    hrz[4] = C74;
    hrz[5] = C81;
    hrz[6] = C88;
    hrz[7] = C95;
    hrz[8] = C102;
}
