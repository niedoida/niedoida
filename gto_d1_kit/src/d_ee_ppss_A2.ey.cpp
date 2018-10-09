/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_1_et(const double ae,
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
    const double C112 = vrx[0];
    const double C113 = vrx[1];
    const double C122 = vrx[2];
    const double C131 = vrx[3];
    const double C141 = vrx[4];
    const double C149 = vrx[5];
    const double C158 = vrx[6];
    const double C168 = vrx[7];
    const double C184 = vrx[8];
    const double C192 = vry[0];
    const double C193 = vry[1];
    const double C202 = vry[2];
    const double C211 = vry[3];
    const double C220 = vry[4];
    const double C228 = vry[5];
    const double C237 = vry[6];
    const double C246 = vry[7];
    const double C262 = vry[8];
    const double C270 = vrz[0];
    const double C271 = vrz[1];
    const double C280 = vrz[2];
    const double C289 = vrz[3];
    const double C298 = vrz[4];
    const double C306 = vrz[5];
    const double C315 = vrz[6];
    const double C324 = vrz[7];
    const double C340 = vrz[8];
    etx[0] = C112;
    etx[1] = C113;
    etx[2] = C122;
    etx[3] = C131;
    etx[4] = C141;
    etx[5] = C149;
    etx[6] = C158;
    etx[7] = C168;
    etx[8] = C184;
    ety[0] = C192;
    ety[1] = C193;
    ety[2] = C202;
    ety[3] = C211;
    ety[4] = C220;
    ety[5] = C228;
    ety[6] = C237;
    ety[7] = C246;
    ety[8] = C262;
    etz[0] = C270;
    etz[1] = C271;
    etz[2] = C280;
    etz[3] = C289;
    etz[4] = C298;
    etz[5] = C306;
    etz[6] = C315;
    etz[7] = C324;
    etz[8] = C340;
}
