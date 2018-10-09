/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_4_hr(const double ae,
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
    const double C236 = etx[0];
    const double C237 = etx[1];
    const double C244 = etx[2];
    const double C245 = etx[3];
    const double C252 = etx[4];
    const double C253 = etx[5];
    const double C261 = etx[6];
    const double C269 = etx[7];
    const double C277 = etx[8];
    const double C285 = etx[9];
    const double C293 = etx[10];
    const double C301 = etx[11];
    const double C309 = etx[12];
    const double C317 = etx[13];
    const double C325 = etx[14];
    const double C332 = etx[15];
    const double C339 = etx[16];
    const double C346 = etx[17];
    const double C354 = etx[18];
    const double C362 = etx[19];
    const double C370 = etx[20];
    const double C378 = etx[21];
    const double C386 = etx[22];
    const double C394 = etx[23];
    const double C422 = etx[24];
    const double C429 = etx[25];
    const double C436 = etx[26];
    const double C443 = ety[0];
    const double C444 = ety[1];
    const double C451 = ety[2];
    const double C452 = ety[3];
    const double C459 = ety[4];
    const double C460 = ety[5];
    const double C468 = ety[6];
    const double C476 = ety[7];
    const double C484 = ety[8];
    const double C492 = ety[9];
    const double C500 = ety[10];
    const double C508 = ety[11];
    const double C516 = ety[12];
    const double C524 = ety[13];
    const double C532 = ety[14];
    const double C539 = ety[15];
    const double C546 = ety[16];
    const double C553 = ety[17];
    const double C561 = ety[18];
    const double C569 = ety[19];
    const double C577 = ety[20];
    const double C585 = ety[21];
    const double C593 = ety[22];
    const double C601 = ety[23];
    const double C629 = ety[24];
    const double C636 = ety[25];
    const double C643 = ety[26];
    const double C650 = etz[0];
    const double C651 = etz[1];
    const double C658 = etz[2];
    const double C659 = etz[3];
    const double C666 = etz[4];
    const double C667 = etz[5];
    const double C675 = etz[6];
    const double C683 = etz[7];
    const double C691 = etz[8];
    const double C699 = etz[9];
    const double C707 = etz[10];
    const double C715 = etz[11];
    const double C723 = etz[12];
    const double C731 = etz[13];
    const double C739 = etz[14];
    const double C746 = etz[15];
    const double C753 = etz[16];
    const double C760 = etz[17];
    const double C768 = etz[18];
    const double C776 = etz[19];
    const double C784 = etz[20];
    const double C792 = etz[21];
    const double C800 = etz[22];
    const double C808 = etz[23];
    const double C836 = etz[24];
    const double C843 = etz[25];
    const double C850 = etz[26];
    const double C40 = C236 + xAB * C237;
    const double C49 = C244 + xAB * C245;
    const double C56 = C252 + xAB * C253;
    const double C63 = C261 + yAB * C237;
    const double C70 = C269 + yAB * C245;
    const double C77 = C277 + yAB * C253;
    const double C84 = C285 + zAB * C237;
    const double C91 = C293 + zAB * C245;
    const double C98 = C301 + zAB * C253;
    const double C105 = C261 + xAB * C309;
    const double C112 = C269 + xAB * C317;
    const double C119 = C277 + xAB * C325;
    const double C126 = C332 + yAB * C309;
    const double C133 = C339 + yAB * C317;
    const double C140 = C346 + yAB * C325;
    const double C147 = C354 + zAB * C309;
    const double C154 = C362 + zAB * C317;
    const double C161 = C370 + zAB * C325;
    const double C168 = C285 + xAB * C378;
    const double C175 = C293 + xAB * C386;
    const double C182 = C301 + xAB * C394;
    const double C189 = C354 + yAB * C378;
    const double C196 = C362 + yAB * C386;
    const double C203 = C370 + yAB * C394;
    const double C210 = C422 + zAB * C378;
    const double C217 = C429 + zAB * C386;
    const double C224 = C436 + zAB * C394;
    const double C44 = C443 + xAB * C444;
    const double C51 = C451 + xAB * C452;
    const double C58 = C459 + xAB * C460;
    const double C65 = C468 + yAB * C444;
    const double C72 = C476 + yAB * C452;
    const double C79 = C484 + yAB * C460;
    const double C86 = C492 + zAB * C444;
    const double C93 = C500 + zAB * C452;
    const double C100 = C508 + zAB * C460;
    const double C107 = C468 + xAB * C516;
    const double C114 = C476 + xAB * C524;
    const double C121 = C484 + xAB * C532;
    const double C128 = C539 + yAB * C516;
    const double C135 = C546 + yAB * C524;
    const double C142 = C553 + yAB * C532;
    const double C149 = C561 + zAB * C516;
    const double C156 = C569 + zAB * C524;
    const double C163 = C577 + zAB * C532;
    const double C170 = C492 + xAB * C585;
    const double C177 = C500 + xAB * C593;
    const double C184 = C508 + xAB * C601;
    const double C191 = C561 + yAB * C585;
    const double C198 = C569 + yAB * C593;
    const double C205 = C577 + yAB * C601;
    const double C212 = C629 + zAB * C585;
    const double C219 = C636 + zAB * C593;
    const double C226 = C643 + zAB * C601;
    const double C46 = C650 + xAB * C651;
    const double C53 = C658 + xAB * C659;
    const double C60 = C666 + xAB * C667;
    const double C67 = C675 + yAB * C651;
    const double C74 = C683 + yAB * C659;
    const double C81 = C691 + yAB * C667;
    const double C88 = C699 + zAB * C651;
    const double C95 = C707 + zAB * C659;
    const double C102 = C715 + zAB * C667;
    const double C109 = C675 + xAB * C723;
    const double C116 = C683 + xAB * C731;
    const double C123 = C691 + xAB * C739;
    const double C130 = C746 + yAB * C723;
    const double C137 = C753 + yAB * C731;
    const double C144 = C760 + yAB * C739;
    const double C151 = C768 + zAB * C723;
    const double C158 = C776 + zAB * C731;
    const double C165 = C784 + zAB * C739;
    const double C172 = C699 + xAB * C792;
    const double C179 = C707 + xAB * C800;
    const double C186 = C715 + xAB * C808;
    const double C193 = C768 + yAB * C792;
    const double C200 = C776 + yAB * C800;
    const double C207 = C784 + yAB * C808;
    const double C214 = C836 + zAB * C792;
    const double C221 = C843 + zAB * C800;
    const double C228 = C850 + zAB * C808;
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
}
