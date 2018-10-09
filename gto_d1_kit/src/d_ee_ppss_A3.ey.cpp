/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_1_hr(const double ae,
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
    const double C109 = g[0];
    const double C138 = g[1];
    const double C165 = g[2];
    const double C112 = etx[0];
    const double C113 = etx[1];
    const double C122 = etx[2];
    const double C131 = etx[3];
    const double C141 = etx[4];
    const double C149 = etx[5];
    const double C158 = etx[6];
    const double C168 = etx[7];
    const double C184 = etx[8];
    const double C192 = ety[0];
    const double C193 = ety[1];
    const double C202 = ety[2];
    const double C211 = ety[3];
    const double C220 = ety[4];
    const double C228 = ety[5];
    const double C237 = ety[6];
    const double C246 = ety[7];
    const double C262 = ety[8];
    const double C270 = etz[0];
    const double C271 = etz[1];
    const double C280 = etz[2];
    const double C289 = etz[3];
    const double C298 = etz[4];
    const double C306 = etz[5];
    const double C315 = etz[6];
    const double C324 = etz[7];
    const double C340 = etz[8];
    const double C40 = C112 + C109 + xAB * C113;
    const double C49 = C122 + yAB * C113;
    const double C56 = C131 + zAB * C113;
    const double C63 = C122 + C138 + xAB * C141;
    const double C70 = C149 + yAB * C141;
    const double C77 = C158 + zAB * C141;
    const double C84 = C131 + C165 + xAB * C168;
    const double C91 = C158 + yAB * C168;
    const double C98 = C184 + zAB * C168;
    const double C44 = C192 + xAB * C193;
    const double C51 = C202 + C109 + yAB * C193;
    const double C58 = C211 + zAB * C193;
    const double C65 = C202 + xAB * C220;
    const double C72 = C228 + C138 + yAB * C220;
    const double C79 = C237 + zAB * C220;
    const double C86 = C211 + xAB * C246;
    const double C93 = C237 + C165 + yAB * C246;
    const double C100 = C262 + zAB * C246;
    const double C46 = C270 + xAB * C271;
    const double C53 = C280 + yAB * C271;
    const double C60 = C289 + C109 + zAB * C271;
    const double C67 = C280 + xAB * C298;
    const double C74 = C306 + yAB * C298;
    const double C81 = C315 + C138 + zAB * C298;
    const double C88 = C289 + xAB * C324;
    const double C95 = C315 + yAB * C324;
    const double C102 = C340 + C165 + zAB * C324;
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
