/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_2_hr(const double ae,
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
    const double C168 = etx[18];
    const double C175 = etx[19];
    const double C182 = etx[20];
    const double C189 = etx[21];
    const double C196 = etx[22];
    const double C203 = etx[23];
    const double C210 = etx[24];
    const double C217 = etx[25];
    const double C224 = etx[26];
    const double C231 = etx[27];
    const double C238 = etx[28];
    const double C245 = etx[29];
    const double C252 = etx[30];
    const double C259 = etx[31];
    const double C266 = etx[32];
    const double C273 = etx[33];
    const double C280 = etx[34];
    const double C287 = etx[35];
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
    const double C170 = ety[18];
    const double C177 = ety[19];
    const double C184 = ety[20];
    const double C191 = ety[21];
    const double C198 = ety[22];
    const double C205 = ety[23];
    const double C212 = ety[24];
    const double C219 = ety[25];
    const double C226 = ety[26];
    const double C233 = ety[27];
    const double C240 = ety[28];
    const double C247 = ety[29];
    const double C254 = ety[30];
    const double C261 = ety[31];
    const double C268 = ety[32];
    const double C275 = ety[33];
    const double C282 = ety[34];
    const double C289 = ety[35];
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
    const double C172 = etz[18];
    const double C179 = etz[19];
    const double C186 = etz[20];
    const double C193 = etz[21];
    const double C200 = etz[22];
    const double C207 = etz[23];
    const double C214 = etz[24];
    const double C221 = etz[25];
    const double C228 = etz[26];
    const double C235 = etz[27];
    const double C242 = etz[28];
    const double C249 = etz[29];
    const double C256 = etz[30];
    const double C263 = etz[31];
    const double C270 = etz[32];
    const double C277 = etz[33];
    const double C284 = etz[34];
    const double C291 = etz[35];
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
    hrx[18] = C168;
    hrx[19] = C175;
    hrx[20] = C182;
    hrx[21] = C189;
    hrx[22] = C196;
    hrx[23] = C203;
    hrx[24] = C210;
    hrx[25] = C217;
    hrx[26] = C224;
    hrx[27] = C231;
    hrx[28] = C238;
    hrx[29] = C245;
    hrx[30] = C252;
    hrx[31] = C259;
    hrx[32] = C266;
    hrx[33] = C273;
    hrx[34] = C280;
    hrx[35] = C287;
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
    hry[18] = C170;
    hry[19] = C177;
    hry[20] = C184;
    hry[21] = C191;
    hry[22] = C198;
    hry[23] = C205;
    hry[24] = C212;
    hry[25] = C219;
    hry[26] = C226;
    hry[27] = C233;
    hry[28] = C240;
    hry[29] = C247;
    hry[30] = C254;
    hry[31] = C261;
    hry[32] = C268;
    hry[33] = C275;
    hry[34] = C282;
    hry[35] = C289;
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
    hrz[18] = C172;
    hrz[19] = C179;
    hrz[20] = C186;
    hrz[21] = C193;
    hrz[22] = C200;
    hrz[23] = C207;
    hrz[24] = C214;
    hrz[25] = C221;
    hrz[26] = C228;
    hrz[27] = C235;
    hrz[28] = C242;
    hrz[29] = C249;
    hrz[30] = C256;
    hrz[31] = C263;
    hrz[32] = C270;
    hrz[33] = C277;
    hrz[34] = C284;
    hrz[35] = C291;
}
