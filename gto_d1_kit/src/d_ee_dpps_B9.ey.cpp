/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_2(const double ae,
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
    double g[66];
    eri_gradient_2011_2_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_2011_2_vr(ae,
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
    double etx[54];
    double ety[54];
    double etz[54];
    eri_gradient_2011_2_et(ae,
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
    double hrx[54];
    double hry[54];
    double hrz[54];
    eri_gradient_2011_2_hr(ae,
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
    const double C7568 = hrx[0];
    const double C7901 = hrx[1];
    const double C8235 = hrx[2];
    const double C8569 = hrx[3];
    const double C8903 = hrx[4];
    const double C9237 = hrx[5];
    const double C9571 = hrx[6];
    const double C9905 = hrx[7];
    const double C10239 = hrx[8];
    const double C10573 = hrx[9];
    const double C10907 = hrx[10];
    const double C11241 = hrx[11];
    const double C11575 = hrx[12];
    const double C11909 = hrx[13];
    const double C12243 = hrx[14];
    const double C12577 = hrx[15];
    const double C12911 = hrx[16];
    const double C13245 = hrx[17];
    const double C13579 = hrx[18];
    const double C13913 = hrx[19];
    const double C14247 = hrx[20];
    const double C14581 = hrx[21];
    const double C14915 = hrx[22];
    const double C15249 = hrx[23];
    const double C15583 = hrx[24];
    const double C15917 = hrx[25];
    const double C16251 = hrx[26];
    const double C16585 = hrx[27];
    const double C16919 = hrx[28];
    const double C17253 = hrx[29];
    const double C17587 = hrx[30];
    const double C17921 = hrx[31];
    const double C18255 = hrx[32];
    const double C18589 = hrx[33];
    const double C18923 = hrx[34];
    const double C19257 = hrx[35];
    const double C19591 = hrx[36];
    const double C19925 = hrx[37];
    const double C20259 = hrx[38];
    const double C20593 = hrx[39];
    const double C20927 = hrx[40];
    const double C21261 = hrx[41];
    const double C21595 = hrx[42];
    const double C21929 = hrx[43];
    const double C22263 = hrx[44];
    const double C22597 = hrx[45];
    const double C22931 = hrx[46];
    const double C23265 = hrx[47];
    const double C23599 = hrx[48];
    const double C23933 = hrx[49];
    const double C24267 = hrx[50];
    const double C24601 = hrx[51];
    const double C24935 = hrx[52];
    const double C25269 = hrx[53];
    const double C7678 = hry[0];
    const double C8012 = hry[1];
    const double C8346 = hry[2];
    const double C8680 = hry[3];
    const double C9014 = hry[4];
    const double C9348 = hry[5];
    const double C9682 = hry[6];
    const double C10016 = hry[7];
    const double C10350 = hry[8];
    const double C10684 = hry[9];
    const double C11018 = hry[10];
    const double C11352 = hry[11];
    const double C11686 = hry[12];
    const double C12020 = hry[13];
    const double C12354 = hry[14];
    const double C12688 = hry[15];
    const double C13022 = hry[16];
    const double C13356 = hry[17];
    const double C13690 = hry[18];
    const double C14024 = hry[19];
    const double C14358 = hry[20];
    const double C14692 = hry[21];
    const double C15026 = hry[22];
    const double C15360 = hry[23];
    const double C15694 = hry[24];
    const double C16028 = hry[25];
    const double C16362 = hry[26];
    const double C16696 = hry[27];
    const double C17030 = hry[28];
    const double C17364 = hry[29];
    const double C17698 = hry[30];
    const double C18032 = hry[31];
    const double C18366 = hry[32];
    const double C18700 = hry[33];
    const double C19034 = hry[34];
    const double C19368 = hry[35];
    const double C19702 = hry[36];
    const double C20036 = hry[37];
    const double C20370 = hry[38];
    const double C20704 = hry[39];
    const double C21038 = hry[40];
    const double C21372 = hry[41];
    const double C21706 = hry[42];
    const double C22040 = hry[43];
    const double C22374 = hry[44];
    const double C22708 = hry[45];
    const double C23042 = hry[46];
    const double C23376 = hry[47];
    const double C23710 = hry[48];
    const double C24044 = hry[49];
    const double C24378 = hry[50];
    const double C24712 = hry[51];
    const double C25046 = hry[52];
    const double C25380 = hry[53];
    const double C7789 = hrz[0];
    const double C8123 = hrz[1];
    const double C8457 = hrz[2];
    const double C8791 = hrz[3];
    const double C9125 = hrz[4];
    const double C9459 = hrz[5];
    const double C9793 = hrz[6];
    const double C10127 = hrz[7];
    const double C10461 = hrz[8];
    const double C10795 = hrz[9];
    const double C11129 = hrz[10];
    const double C11463 = hrz[11];
    const double C11797 = hrz[12];
    const double C12131 = hrz[13];
    const double C12465 = hrz[14];
    const double C12799 = hrz[15];
    const double C13133 = hrz[16];
    const double C13467 = hrz[17];
    const double C13801 = hrz[18];
    const double C14135 = hrz[19];
    const double C14469 = hrz[20];
    const double C14803 = hrz[21];
    const double C15137 = hrz[22];
    const double C15471 = hrz[23];
    const double C15805 = hrz[24];
    const double C16139 = hrz[25];
    const double C16473 = hrz[26];
    const double C16807 = hrz[27];
    const double C17141 = hrz[28];
    const double C17475 = hrz[29];
    const double C17809 = hrz[30];
    const double C18143 = hrz[31];
    const double C18477 = hrz[32];
    const double C18811 = hrz[33];
    const double C19145 = hrz[34];
    const double C19479 = hrz[35];
    const double C19813 = hrz[36];
    const double C20147 = hrz[37];
    const double C20481 = hrz[38];
    const double C20815 = hrz[39];
    const double C21149 = hrz[40];
    const double C21483 = hrz[41];
    const double C21817 = hrz[42];
    const double C22151 = hrz[43];
    const double C22485 = hrz[44];
    const double C22819 = hrz[45];
    const double C23153 = hrz[46];
    const double C23487 = hrz[47];
    const double C23821 = hrz[48];
    const double C24155 = hrz[49];
    const double C24489 = hrz[50];
    const double C24823 = hrz[51];
    const double C25157 = hrz[52];
    const double C25491 = hrz[53];
    gx[0] += std::sqrt(3.0) * C16585;
    gy[0] += std::sqrt(3.0) * C16696;
    gz[0] += std::sqrt(3.0) * C16807;
    gx[1] += std::sqrt(3.0) * C16919;
    gy[1] += std::sqrt(3.0) * C17030;
    gz[1] += std::sqrt(3.0) * C17141;
    gx[2] += std::sqrt(3.0) * C17253;
    gy[2] += std::sqrt(3.0) * C17364;
    gz[2] += std::sqrt(3.0) * C17475;
    gx[3] += std::sqrt(3.0) * C17587;
    gy[3] += std::sqrt(3.0) * C17698;
    gz[3] += std::sqrt(3.0) * C17809;
    gx[4] += std::sqrt(3.0) * C17921;
    gy[4] += std::sqrt(3.0) * C18032;
    gz[4] += std::sqrt(3.0) * C18143;
    gx[5] += std::sqrt(3.0) * C18255;
    gy[5] += std::sqrt(3.0) * C18366;
    gz[5] += std::sqrt(3.0) * C18477;
    gx[6] += std::sqrt(3.0) * C18589;
    gy[6] += std::sqrt(3.0) * C18700;
    gz[6] += std::sqrt(3.0) * C18811;
    gx[7] += std::sqrt(3.0) * C18923;
    gy[7] += std::sqrt(3.0) * C19034;
    gz[7] += std::sqrt(3.0) * C19145;
    gx[8] += std::sqrt(3.0) * C19257;
    gy[8] += std::sqrt(3.0) * C19368;
    gz[8] += std::sqrt(3.0) * C19479;
    gx[9] += std::sqrt(3.0) * C22597;
    gy[9] += std::sqrt(3.0) * C22708;
    gz[9] += std::sqrt(3.0) * C22819;
    gx[10] += std::sqrt(3.0) * C22931;
    gy[10] += std::sqrt(3.0) * C23042;
    gz[10] += std::sqrt(3.0) * C23153;
    gx[11] += std::sqrt(3.0) * C23265;
    gy[11] += std::sqrt(3.0) * C23376;
    gz[11] += std::sqrt(3.0) * C23487;
    gx[12] += std::sqrt(3.0) * C23599;
    gy[12] += std::sqrt(3.0) * C23710;
    gz[12] += std::sqrt(3.0) * C23821;
    gx[13] += std::sqrt(3.0) * C23933;
    gy[13] += std::sqrt(3.0) * C24044;
    gz[13] += std::sqrt(3.0) * C24155;
    gx[14] += std::sqrt(3.0) * C24267;
    gy[14] += std::sqrt(3.0) * C24378;
    gz[14] += std::sqrt(3.0) * C24489;
    gx[15] += std::sqrt(3.0) * C24601;
    gy[15] += std::sqrt(3.0) * C24712;
    gz[15] += std::sqrt(3.0) * C24823;
    gx[16] += std::sqrt(3.0) * C24935;
    gy[16] += std::sqrt(3.0) * C25046;
    gz[16] += std::sqrt(3.0) * C25157;
    gx[17] += std::sqrt(3.0) * C25269;
    gy[17] += std::sqrt(3.0) * C25380;
    gz[17] += std::sqrt(3.0) * C25491;
    gx[18] += -0.5 * C7568 - 0.5 * C10573 + C13579;
    gy[18] += -0.5 * C7678 - 0.5 * C10684 + C13690;
    gz[18] += -0.5 * C7789 - 0.5 * C10795 + C13801;
    gx[19] += -0.5 * C7901 - 0.5 * C10907 + C13913;
    gy[19] += -0.5 * C8012 - 0.5 * C11018 + C14024;
    gz[19] += -0.5 * C8123 - 0.5 * C11129 + C14135;
    gx[20] += -0.5 * C8235 - 0.5 * C11241 + C14247;
    gy[20] += -0.5 * C8346 - 0.5 * C11352 + C14358;
    gz[20] += -0.5 * C8457 - 0.5 * C11463 + C14469;
    gx[21] += -0.5 * C8569 - 0.5 * C11575 + C14581;
    gy[21] += -0.5 * C8680 - 0.5 * C11686 + C14692;
    gz[21] += -0.5 * C8791 - 0.5 * C11797 + C14803;
    gx[22] += -0.5 * C8903 - 0.5 * C11909 + C14915;
    gy[22] += -0.5 * C9014 - 0.5 * C12020 + C15026;
    gz[22] += -0.5 * C9125 - 0.5 * C12131 + C15137;
    gx[23] += -0.5 * C9237 - 0.5 * C12243 + C15249;
    gy[23] += -0.5 * C9348 - 0.5 * C12354 + C15360;
    gz[23] += -0.5 * C9459 - 0.5 * C12465 + C15471;
    gx[24] += -0.5 * C9571 - 0.5 * C12577 + C15583;
    gy[24] += -0.5 * C9682 - 0.5 * C12688 + C15694;
    gz[24] += -0.5 * C9793 - 0.5 * C12799 + C15805;
    gx[25] += -0.5 * C9905 - 0.5 * C12911 + C15917;
    gy[25] += -0.5 * C10016 - 0.5 * C13022 + C16028;
    gz[25] += -0.5 * C10127 - 0.5 * C13133 + C16139;
    gx[26] += -0.5 * C10239 - 0.5 * C13245 + C16251;
    gy[26] += -0.5 * C10350 - 0.5 * C13356 + C16362;
    gz[26] += -0.5 * C10461 - 0.5 * C13467 + C16473;
    gx[27] += std::sqrt(3.0) * C19591;
    gy[27] += std::sqrt(3.0) * C19702;
    gz[27] += std::sqrt(3.0) * C19813;
    gx[28] += std::sqrt(3.0) * C19925;
    gy[28] += std::sqrt(3.0) * C20036;
    gz[28] += std::sqrt(3.0) * C20147;
    gx[29] += std::sqrt(3.0) * C20259;
    gy[29] += std::sqrt(3.0) * C20370;
    gz[29] += std::sqrt(3.0) * C20481;
    gx[30] += std::sqrt(3.0) * C20593;
    gy[30] += std::sqrt(3.0) * C20704;
    gz[30] += std::sqrt(3.0) * C20815;
    gx[31] += std::sqrt(3.0) * C20927;
    gy[31] += std::sqrt(3.0) * C21038;
    gz[31] += std::sqrt(3.0) * C21149;
    gx[32] += std::sqrt(3.0) * C21261;
    gy[32] += std::sqrt(3.0) * C21372;
    gz[32] += std::sqrt(3.0) * C21483;
    gx[33] += std::sqrt(3.0) * C21595;
    gy[33] += std::sqrt(3.0) * C21706;
    gz[33] += std::sqrt(3.0) * C21817;
    gx[34] += std::sqrt(3.0) * C21929;
    gy[34] += std::sqrt(3.0) * C22040;
    gz[34] += std::sqrt(3.0) * C22151;
    gx[35] += std::sqrt(3.0) * C22263;
    gy[35] += std::sqrt(3.0) * C22374;
    gz[35] += std::sqrt(3.0) * C22485;
    gx[36] += std::sqrt(0.75) * C7568 - std::sqrt(0.75) * C10573;
    gy[36] += std::sqrt(0.75) * C7678 - std::sqrt(0.75) * C10684;
    gz[36] += std::sqrt(0.75) * C7789 - std::sqrt(0.75) * C10795;
    gx[37] += std::sqrt(0.75) * C7901 - std::sqrt(0.75) * C10907;
    gy[37] += std::sqrt(0.75) * C8012 - std::sqrt(0.75) * C11018;
    gz[37] += std::sqrt(0.75) * C8123 - std::sqrt(0.75) * C11129;
    gx[38] += std::sqrt(0.75) * C8235 - std::sqrt(0.75) * C11241;
    gy[38] += std::sqrt(0.75) * C8346 - std::sqrt(0.75) * C11352;
    gz[38] += std::sqrt(0.75) * C8457 - std::sqrt(0.75) * C11463;
    gx[39] += std::sqrt(0.75) * C8569 - std::sqrt(0.75) * C11575;
    gy[39] += std::sqrt(0.75) * C8680 - std::sqrt(0.75) * C11686;
    gz[39] += std::sqrt(0.75) * C8791 - std::sqrt(0.75) * C11797;
    gx[40] += std::sqrt(0.75) * C8903 - std::sqrt(0.75) * C11909;
    gy[40] += std::sqrt(0.75) * C9014 - std::sqrt(0.75) * C12020;
    gz[40] += std::sqrt(0.75) * C9125 - std::sqrt(0.75) * C12131;
    gx[41] += std::sqrt(0.75) * C9237 - std::sqrt(0.75) * C12243;
    gy[41] += std::sqrt(0.75) * C9348 - std::sqrt(0.75) * C12354;
    gz[41] += std::sqrt(0.75) * C9459 - std::sqrt(0.75) * C12465;
    gx[42] += std::sqrt(0.75) * C9571 - std::sqrt(0.75) * C12577;
    gy[42] += std::sqrt(0.75) * C9682 - std::sqrt(0.75) * C12688;
    gz[42] += std::sqrt(0.75) * C9793 - std::sqrt(0.75) * C12799;
    gx[43] += std::sqrt(0.75) * C9905 - std::sqrt(0.75) * C12911;
    gy[43] += std::sqrt(0.75) * C10016 - std::sqrt(0.75) * C13022;
    gz[43] += std::sqrt(0.75) * C10127 - std::sqrt(0.75) * C13133;
    gx[44] += std::sqrt(0.75) * C10239 - std::sqrt(0.75) * C13245;
    gy[44] += std::sqrt(0.75) * C10350 - std::sqrt(0.75) * C13356;
    gz[44] += std::sqrt(0.75) * C10461 - std::sqrt(0.75) * C13467;
}
