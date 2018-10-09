/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_1_hr(const double ae,
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
    const double C235 = g[0];
    const double C245 = g[1];
    const double C255 = g[2];
    const double C320 = g[3];
    const double C330 = g[4];
    const double C340 = g[5];
    const double C401 = g[6];
    const double C411 = g[7];
    const double C421 = g[8];
    const double C238 = etx[0];
    const double C239 = etx[1];
    const double C248 = etx[2];
    const double C249 = etx[3];
    const double C258 = etx[4];
    const double C259 = etx[5];
    const double C268 = etx[6];
    const double C277 = etx[7];
    const double C286 = etx[8];
    const double C295 = etx[9];
    const double C304 = etx[10];
    const double C313 = etx[11];
    const double C323 = etx[12];
    const double C333 = etx[13];
    const double C343 = etx[14];
    const double C351 = etx[15];
    const double C359 = etx[16];
    const double C367 = etx[17];
    const double C376 = etx[18];
    const double C385 = etx[19];
    const double C394 = etx[20];
    const double C404 = etx[21];
    const double C414 = etx[22];
    const double C424 = etx[23];
    const double C456 = etx[24];
    const double C464 = etx[25];
    const double C472 = etx[26];
    const double C480 = ety[0];
    const double C481 = ety[1];
    const double C489 = ety[2];
    const double C490 = ety[3];
    const double C498 = ety[4];
    const double C499 = ety[5];
    const double C508 = ety[6];
    const double C517 = ety[7];
    const double C526 = ety[8];
    const double C535 = ety[9];
    const double C544 = ety[10];
    const double C553 = ety[11];
    const double C562 = ety[12];
    const double C571 = ety[13];
    const double C580 = ety[14];
    const double C588 = ety[15];
    const double C596 = ety[16];
    const double C604 = ety[17];
    const double C613 = ety[18];
    const double C622 = ety[19];
    const double C631 = ety[20];
    const double C640 = ety[21];
    const double C649 = ety[22];
    const double C658 = ety[23];
    const double C690 = ety[24];
    const double C698 = ety[25];
    const double C706 = ety[26];
    const double C714 = etz[0];
    const double C715 = etz[1];
    const double C723 = etz[2];
    const double C724 = etz[3];
    const double C732 = etz[4];
    const double C733 = etz[5];
    const double C742 = etz[6];
    const double C751 = etz[7];
    const double C760 = etz[8];
    const double C769 = etz[9];
    const double C778 = etz[10];
    const double C787 = etz[11];
    const double C796 = etz[12];
    const double C805 = etz[13];
    const double C814 = etz[14];
    const double C822 = etz[15];
    const double C830 = etz[16];
    const double C838 = etz[17];
    const double C847 = etz[18];
    const double C856 = etz[19];
    const double C865 = etz[20];
    const double C874 = etz[21];
    const double C883 = etz[22];
    const double C892 = etz[23];
    const double C924 = etz[24];
    const double C932 = etz[25];
    const double C940 = etz[26];
    const double C40 = C238 + C235 + xAB * C239;
    const double C49 = C248 + C245 + xAB * C249;
    const double C56 = C258 + C255 + xAB * C259;
    const double C63 = C268 + yAB * C239;
    const double C70 = C277 + yAB * C249;
    const double C77 = C286 + yAB * C259;
    const double C84 = C295 + zAB * C239;
    const double C91 = C304 + zAB * C249;
    const double C98 = C313 + zAB * C259;
    const double C105 = C268 + C320 + xAB * C323;
    const double C112 = C277 + C330 + xAB * C333;
    const double C119 = C286 + C340 + xAB * C343;
    const double C126 = C351 + yAB * C323;
    const double C133 = C359 + yAB * C333;
    const double C140 = C367 + yAB * C343;
    const double C147 = C376 + zAB * C323;
    const double C154 = C385 + zAB * C333;
    const double C161 = C394 + zAB * C343;
    const double C168 = C295 + C401 + xAB * C404;
    const double C175 = C304 + C411 + xAB * C414;
    const double C182 = C313 + C421 + xAB * C424;
    const double C189 = C376 + yAB * C404;
    const double C196 = C385 + yAB * C414;
    const double C203 = C394 + yAB * C424;
    const double C210 = C456 + zAB * C404;
    const double C217 = C464 + zAB * C414;
    const double C224 = C472 + zAB * C424;
    const double C44 = C480 + xAB * C481;
    const double C51 = C489 + xAB * C490;
    const double C58 = C498 + xAB * C499;
    const double C65 = C508 + C235 + yAB * C481;
    const double C72 = C517 + C245 + yAB * C490;
    const double C79 = C526 + C255 + yAB * C499;
    const double C86 = C535 + zAB * C481;
    const double C93 = C544 + zAB * C490;
    const double C100 = C553 + zAB * C499;
    const double C107 = C508 + xAB * C562;
    const double C114 = C517 + xAB * C571;
    const double C121 = C526 + xAB * C580;
    const double C128 = C588 + C320 + yAB * C562;
    const double C135 = C596 + C330 + yAB * C571;
    const double C142 = C604 + C340 + yAB * C580;
    const double C149 = C613 + zAB * C562;
    const double C156 = C622 + zAB * C571;
    const double C163 = C631 + zAB * C580;
    const double C170 = C535 + xAB * C640;
    const double C177 = C544 + xAB * C649;
    const double C184 = C553 + xAB * C658;
    const double C191 = C613 + C401 + yAB * C640;
    const double C198 = C622 + C411 + yAB * C649;
    const double C205 = C631 + C421 + yAB * C658;
    const double C212 = C690 + zAB * C640;
    const double C219 = C698 + zAB * C649;
    const double C226 = C706 + zAB * C658;
    const double C46 = C714 + xAB * C715;
    const double C53 = C723 + xAB * C724;
    const double C60 = C732 + xAB * C733;
    const double C67 = C742 + yAB * C715;
    const double C74 = C751 + yAB * C724;
    const double C81 = C760 + yAB * C733;
    const double C88 = C769 + C235 + zAB * C715;
    const double C95 = C778 + C245 + zAB * C724;
    const double C102 = C787 + C255 + zAB * C733;
    const double C109 = C742 + xAB * C796;
    const double C116 = C751 + xAB * C805;
    const double C123 = C760 + xAB * C814;
    const double C130 = C822 + yAB * C796;
    const double C137 = C830 + yAB * C805;
    const double C144 = C838 + yAB * C814;
    const double C151 = C847 + C320 + zAB * C796;
    const double C158 = C856 + C330 + zAB * C805;
    const double C165 = C865 + C340 + zAB * C814;
    const double C172 = C769 + xAB * C874;
    const double C179 = C778 + xAB * C883;
    const double C186 = C787 + xAB * C892;
    const double C193 = C847 + yAB * C874;
    const double C200 = C856 + yAB * C883;
    const double C207 = C865 + yAB * C892;
    const double C214 = C924 + C401 + zAB * C874;
    const double C221 = C932 + C411 + zAB * C883;
    const double C228 = C940 + C421 + zAB * C892;
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
