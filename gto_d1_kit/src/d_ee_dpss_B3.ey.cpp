/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_2_hr(const double ae,
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
    const double C40 = etx[0];
    const double C49 = etx[1];
    const double C56 = etx[2];
    const double C63 = etx[3];
    const double C70 = etx[4];
    const double C77 = etx[5];
    const double C84 = etx[6];
    const double C91 = etx[7];
    const double C98 = etx[8];
    const double C105 = etx[9];
    const double C112 = etx[10];
    const double C119 = etx[11];
    const double C126 = etx[12];
    const double C133 = etx[13];
    const double C140 = etx[14];
    const double C147 = etx[15];
    const double C154 = etx[16];
    const double C161 = etx[17];
    const double C44 = ety[0];
    const double C51 = ety[1];
    const double C58 = ety[2];
    const double C65 = ety[3];
    const double C72 = ety[4];
    const double C79 = ety[5];
    const double C86 = ety[6];
    const double C93 = ety[7];
    const double C100 = ety[8];
    const double C107 = ety[9];
    const double C114 = ety[10];
    const double C121 = ety[11];
    const double C128 = ety[12];
    const double C135 = ety[13];
    const double C142 = ety[14];
    const double C149 = ety[15];
    const double C156 = ety[16];
    const double C163 = ety[17];
    const double C46 = etz[0];
    const double C53 = etz[1];
    const double C60 = etz[2];
    const double C67 = etz[3];
    const double C74 = etz[4];
    const double C81 = etz[5];
    const double C88 = etz[6];
    const double C95 = etz[7];
    const double C102 = etz[8];
    const double C109 = etz[9];
    const double C116 = etz[10];
    const double C123 = etz[11];
    const double C130 = etz[12];
    const double C137 = etz[13];
    const double C144 = etz[14];
    const double C151 = etz[15];
    const double C158 = etz[16];
    const double C165 = etz[17];
    hrx[0] = C40;
    hrx[1] = C49;
    hrx[2] = C56;
    hrx[3] = C63;
    hrx[4] = C70;
    hrx[5] = C77;
    hrx[6] = C84;
    hrx[7] = C91;
    hrx[8] = C98;
    hrx[9] = C105;
    hrx[10] = C112;
    hrx[11] = C119;
    hrx[12] = C126;
    hrx[13] = C133;
    hrx[14] = C140;
    hrx[15] = C147;
    hrx[16] = C154;
    hrx[17] = C161;
    hry[0] = C44;
    hry[1] = C51;
    hry[2] = C58;
    hry[3] = C65;
    hry[4] = C72;
    hry[5] = C79;
    hry[6] = C86;
    hry[7] = C93;
    hry[8] = C100;
    hry[9] = C107;
    hry[10] = C114;
    hry[11] = C121;
    hry[12] = C128;
    hry[13] = C135;
    hry[14] = C142;
    hry[15] = C149;
    hry[16] = C156;
    hry[17] = C163;
    hrz[0] = C46;
    hrz[1] = C53;
    hrz[2] = C60;
    hrz[3] = C67;
    hrz[4] = C74;
    hrz[5] = C81;
    hrz[6] = C88;
    hrz[7] = C95;
    hrz[8] = C102;
    hrz[9] = C109;
    hrz[10] = C116;
    hrz[11] = C123;
    hrz[12] = C130;
    hrz[13] = C137;
    hrz[14] = C144;
    hrz[15] = C151;
    hrz[16] = C158;
    hrz[17] = C165;
}
