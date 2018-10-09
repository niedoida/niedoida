/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_1_hr(const double ae,
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
    const double C1130 = etx[0];
    const double C1355 = etx[1];
    const double C1581 = etx[2];
    const double C1807 = etx[3];
    const double C2033 = etx[4];
    const double C2259 = etx[5];
    const double C2485 = etx[6];
    const double C2711 = etx[7];
    const double C2937 = etx[8];
    const double C1204 = ety[0];
    const double C1430 = ety[1];
    const double C1656 = ety[2];
    const double C1882 = ety[3];
    const double C2108 = ety[4];
    const double C2334 = ety[5];
    const double C2560 = ety[6];
    const double C2786 = ety[7];
    const double C3012 = ety[8];
    const double C1279 = etz[0];
    const double C1505 = etz[1];
    const double C1731 = etz[2];
    const double C1957 = etz[3];
    const double C2183 = etz[4];
    const double C2409 = etz[5];
    const double C2635 = etz[6];
    const double C2861 = etz[7];
    const double C3087 = etz[8];
    hrx[0] = C1130;
    hrx[1] = C1355;
    hrx[2] = C1581;
    hrx[3] = C1807;
    hrx[4] = C2033;
    hrx[5] = C2259;
    hrx[6] = C2485;
    hrx[7] = C2711;
    hrx[8] = C2937;
    hry[0] = C1204;
    hry[1] = C1430;
    hry[2] = C1656;
    hry[3] = C1882;
    hry[4] = C2108;
    hry[5] = C2334;
    hry[6] = C2560;
    hry[7] = C2786;
    hry[8] = C3012;
    hrz[0] = C1279;
    hrz[1] = C1505;
    hrz[2] = C1731;
    hrz[3] = C1957;
    hrz[4] = C2183;
    hrz[5] = C2409;
    hrz[6] = C2635;
    hrz[7] = C2861;
    hrz[8] = C3087;
}
