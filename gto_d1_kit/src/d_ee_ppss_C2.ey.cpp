/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_3_et(const double ae,
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
    const double C110 = vrx[0];
    const double C111 = vrx[1];
    const double C119 = vrx[2];
    const double C127 = vrx[3];
    const double C135 = vrx[4];
    const double C142 = vrx[5];
    const double C150 = vrx[6];
    const double C158 = vrx[7];
    const double C172 = vrx[8];
    const double C179 = vry[0];
    const double C180 = vry[1];
    const double C188 = vry[2];
    const double C196 = vry[3];
    const double C204 = vry[4];
    const double C211 = vry[5];
    const double C219 = vry[6];
    const double C227 = vry[7];
    const double C241 = vry[8];
    const double C248 = vrz[0];
    const double C249 = vrz[1];
    const double C257 = vrz[2];
    const double C265 = vrz[3];
    const double C273 = vrz[4];
    const double C280 = vrz[5];
    const double C288 = vrz[6];
    const double C296 = vrz[7];
    const double C310 = vrz[8];
    etx[0] = C110;
    etx[1] = C111;
    etx[2] = C119;
    etx[3] = C127;
    etx[4] = C135;
    etx[5] = C142;
    etx[6] = C150;
    etx[7] = C158;
    etx[8] = C172;
    ety[0] = C179;
    ety[1] = C180;
    ety[2] = C188;
    ety[3] = C196;
    ety[4] = C204;
    ety[5] = C211;
    ety[6] = C219;
    ety[7] = C227;
    ety[8] = C241;
    etz[0] = C248;
    etz[1] = C249;
    etz[2] = C257;
    etz[3] = C265;
    etz[4] = C273;
    etz[5] = C280;
    etz[6] = C288;
    etz[7] = C296;
    etz[8] = C310;
}
