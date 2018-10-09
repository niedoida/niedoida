/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_4(const double ae,
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
                         double* const gx,
                         double* const gy,
                         double* const gz)
{
    double g[22];
    eri_gradient_1110_4_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[20];
    double vry[20];
    double vrz[20];
    eri_gradient_1110_4_vr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz);
    double etx[27];
    double ety[27];
    double etz[27];
    eri_gradient_1110_4_et(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           vrx,
                           vry,
                           vrz,
                           etx,
                           ety,
                           etz);
    double hrx[27];
    double hry[27];
    double hrz[27];
    eri_gradient_1110_4_hr(ae,
                           xA,
                           yA,
                           zA,
                           be,
                           xB,
                           yB,
                           zB,
                           ce,
                           xC,
                           yC,
                           zC,
                           de,
                           xD,
                           yD,
                           zD,
                           bs,
                           g,
                           etx,
                           ety,
                           etz,
                           hrx,
                           hry,
                           hrz);
    const double C40 = hrx[0];
    const double C49 = hrx[1];
    const double C56 = hrx[2];
    const double C63 = hrx[3];
    const double C70 = hrx[4];
    const double C77 = hrx[5];
    const double C84 = hrx[6];
    const double C91 = hrx[7];
    const double C98 = hrx[8];
    const double C105 = hrx[9];
    const double C112 = hrx[10];
    const double C119 = hrx[11];
    const double C126 = hrx[12];
    const double C133 = hrx[13];
    const double C140 = hrx[14];
    const double C147 = hrx[15];
    const double C154 = hrx[16];
    const double C161 = hrx[17];
    const double C168 = hrx[18];
    const double C175 = hrx[19];
    const double C182 = hrx[20];
    const double C189 = hrx[21];
    const double C196 = hrx[22];
    const double C203 = hrx[23];
    const double C210 = hrx[24];
    const double C217 = hrx[25];
    const double C224 = hrx[26];
    const double C44 = hry[0];
    const double C51 = hry[1];
    const double C58 = hry[2];
    const double C65 = hry[3];
    const double C72 = hry[4];
    const double C79 = hry[5];
    const double C86 = hry[6];
    const double C93 = hry[7];
    const double C100 = hry[8];
    const double C107 = hry[9];
    const double C114 = hry[10];
    const double C121 = hry[11];
    const double C128 = hry[12];
    const double C135 = hry[13];
    const double C142 = hry[14];
    const double C149 = hry[15];
    const double C156 = hry[16];
    const double C163 = hry[17];
    const double C170 = hry[18];
    const double C177 = hry[19];
    const double C184 = hry[20];
    const double C191 = hry[21];
    const double C198 = hry[22];
    const double C205 = hry[23];
    const double C212 = hry[24];
    const double C219 = hry[25];
    const double C226 = hry[26];
    const double C46 = hrz[0];
    const double C53 = hrz[1];
    const double C60 = hrz[2];
    const double C67 = hrz[3];
    const double C74 = hrz[4];
    const double C81 = hrz[5];
    const double C88 = hrz[6];
    const double C95 = hrz[7];
    const double C102 = hrz[8];
    const double C109 = hrz[9];
    const double C116 = hrz[10];
    const double C123 = hrz[11];
    const double C130 = hrz[12];
    const double C137 = hrz[13];
    const double C144 = hrz[14];
    const double C151 = hrz[15];
    const double C158 = hrz[16];
    const double C165 = hrz[17];
    const double C172 = hrz[18];
    const double C179 = hrz[19];
    const double C186 = hrz[20];
    const double C193 = hrz[21];
    const double C200 = hrz[22];
    const double C207 = hrz[23];
    const double C214 = hrz[24];
    const double C221 = hrz[25];
    const double C228 = hrz[26];
    gx[0] += C40;
    gy[0] += C44;
    gz[0] += C46;
    gx[1] += C49;
    gy[1] += C51;
    gz[1] += C53;
    gx[2] += C56;
    gy[2] += C58;
    gz[2] += C60;
    gx[3] += C63;
    gy[3] += C65;
    gz[3] += C67;
    gx[4] += C70;
    gy[4] += C72;
    gz[4] += C74;
    gx[5] += C77;
    gy[5] += C79;
    gz[5] += C81;
    gx[6] += C84;
    gy[6] += C86;
    gz[6] += C88;
    gx[7] += C91;
    gy[7] += C93;
    gz[7] += C95;
    gx[8] += C98;
    gy[8] += C100;
    gz[8] += C102;
    gx[9] += C105;
    gy[9] += C107;
    gz[9] += C109;
    gx[10] += C112;
    gy[10] += C114;
    gz[10] += C116;
    gx[11] += C119;
    gy[11] += C121;
    gz[11] += C123;
    gx[12] += C126;
    gy[12] += C128;
    gz[12] += C130;
    gx[13] += C133;
    gy[13] += C135;
    gz[13] += C137;
    gx[14] += C140;
    gy[14] += C142;
    gz[14] += C144;
    gx[15] += C147;
    gy[15] += C149;
    gz[15] += C151;
    gx[16] += C154;
    gy[16] += C156;
    gz[16] += C158;
    gx[17] += C161;
    gy[17] += C163;
    gz[17] += C165;
    gx[18] += C168;
    gy[18] += C170;
    gz[18] += C172;
    gx[19] += C175;
    gy[19] += C177;
    gz[19] += C179;
    gx[20] += C182;
    gy[20] += C184;
    gz[20] += C186;
    gx[21] += C189;
    gy[21] += C191;
    gz[21] += C193;
    gx[22] += C196;
    gy[22] += C198;
    gz[22] += C200;
    gx[23] += C203;
    gy[23] += C205;
    gz[23] += C207;
    gx[24] += C210;
    gy[24] += C212;
    gz[24] += C214;
    gx[25] += C217;
    gy[25] += C219;
    gz[25] += C221;
    gx[26] += C224;
    gy[26] += C226;
    gz[26] += C228;
}
