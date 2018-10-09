/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_3(const double ae,
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
    double g[65];
    eri_gradient_2011_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_2011_3_vr(ae,
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
    eri_gradient_2011_3_et(ae,
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
    eri_gradient_2011_3_hr(ae,
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
    const double C6998 = hrx[0];
    const double C7367 = hrx[1];
    const double C7737 = hrx[2];
    const double C8107 = hrx[3];
    const double C8477 = hrx[4];
    const double C8847 = hrx[5];
    const double C9217 = hrx[6];
    const double C9587 = hrx[7];
    const double C9957 = hrx[8];
    const double C10327 = hrx[9];
    const double C10697 = hrx[10];
    const double C11067 = hrx[11];
    const double C11437 = hrx[12];
    const double C11807 = hrx[13];
    const double C12177 = hrx[14];
    const double C12547 = hrx[15];
    const double C12917 = hrx[16];
    const double C13287 = hrx[17];
    const double C13657 = hrx[18];
    const double C14027 = hrx[19];
    const double C14397 = hrx[20];
    const double C14767 = hrx[21];
    const double C15137 = hrx[22];
    const double C15507 = hrx[23];
    const double C15877 = hrx[24];
    const double C16247 = hrx[25];
    const double C16617 = hrx[26];
    const double C16987 = hrx[27];
    const double C17357 = hrx[28];
    const double C17727 = hrx[29];
    const double C18097 = hrx[30];
    const double C18467 = hrx[31];
    const double C18837 = hrx[32];
    const double C19207 = hrx[33];
    const double C19577 = hrx[34];
    const double C19947 = hrx[35];
    const double C20317 = hrx[36];
    const double C20687 = hrx[37];
    const double C21057 = hrx[38];
    const double C21427 = hrx[39];
    const double C21797 = hrx[40];
    const double C22167 = hrx[41];
    const double C22537 = hrx[42];
    const double C22907 = hrx[43];
    const double C23277 = hrx[44];
    const double C23647 = hrx[45];
    const double C24017 = hrx[46];
    const double C24387 = hrx[47];
    const double C24757 = hrx[48];
    const double C25127 = hrx[49];
    const double C25497 = hrx[50];
    const double C25867 = hrx[51];
    const double C26237 = hrx[52];
    const double C26607 = hrx[53];
    const double C7120 = hry[0];
    const double C7490 = hry[1];
    const double C7860 = hry[2];
    const double C8230 = hry[3];
    const double C8600 = hry[4];
    const double C8970 = hry[5];
    const double C9340 = hry[6];
    const double C9710 = hry[7];
    const double C10080 = hry[8];
    const double C10450 = hry[9];
    const double C10820 = hry[10];
    const double C11190 = hry[11];
    const double C11560 = hry[12];
    const double C11930 = hry[13];
    const double C12300 = hry[14];
    const double C12670 = hry[15];
    const double C13040 = hry[16];
    const double C13410 = hry[17];
    const double C13780 = hry[18];
    const double C14150 = hry[19];
    const double C14520 = hry[20];
    const double C14890 = hry[21];
    const double C15260 = hry[22];
    const double C15630 = hry[23];
    const double C16000 = hry[24];
    const double C16370 = hry[25];
    const double C16740 = hry[26];
    const double C17110 = hry[27];
    const double C17480 = hry[28];
    const double C17850 = hry[29];
    const double C18220 = hry[30];
    const double C18590 = hry[31];
    const double C18960 = hry[32];
    const double C19330 = hry[33];
    const double C19700 = hry[34];
    const double C20070 = hry[35];
    const double C20440 = hry[36];
    const double C20810 = hry[37];
    const double C21180 = hry[38];
    const double C21550 = hry[39];
    const double C21920 = hry[40];
    const double C22290 = hry[41];
    const double C22660 = hry[42];
    const double C23030 = hry[43];
    const double C23400 = hry[44];
    const double C23770 = hry[45];
    const double C24140 = hry[46];
    const double C24510 = hry[47];
    const double C24880 = hry[48];
    const double C25250 = hry[49];
    const double C25620 = hry[50];
    const double C25990 = hry[51];
    const double C26360 = hry[52];
    const double C26730 = hry[53];
    const double C7243 = hrz[0];
    const double C7613 = hrz[1];
    const double C7983 = hrz[2];
    const double C8353 = hrz[3];
    const double C8723 = hrz[4];
    const double C9093 = hrz[5];
    const double C9463 = hrz[6];
    const double C9833 = hrz[7];
    const double C10203 = hrz[8];
    const double C10573 = hrz[9];
    const double C10943 = hrz[10];
    const double C11313 = hrz[11];
    const double C11683 = hrz[12];
    const double C12053 = hrz[13];
    const double C12423 = hrz[14];
    const double C12793 = hrz[15];
    const double C13163 = hrz[16];
    const double C13533 = hrz[17];
    const double C13903 = hrz[18];
    const double C14273 = hrz[19];
    const double C14643 = hrz[20];
    const double C15013 = hrz[21];
    const double C15383 = hrz[22];
    const double C15753 = hrz[23];
    const double C16123 = hrz[24];
    const double C16493 = hrz[25];
    const double C16863 = hrz[26];
    const double C17233 = hrz[27];
    const double C17603 = hrz[28];
    const double C17973 = hrz[29];
    const double C18343 = hrz[30];
    const double C18713 = hrz[31];
    const double C19083 = hrz[32];
    const double C19453 = hrz[33];
    const double C19823 = hrz[34];
    const double C20193 = hrz[35];
    const double C20563 = hrz[36];
    const double C20933 = hrz[37];
    const double C21303 = hrz[38];
    const double C21673 = hrz[39];
    const double C22043 = hrz[40];
    const double C22413 = hrz[41];
    const double C22783 = hrz[42];
    const double C23153 = hrz[43];
    const double C23523 = hrz[44];
    const double C23893 = hrz[45];
    const double C24263 = hrz[46];
    const double C24633 = hrz[47];
    const double C25003 = hrz[48];
    const double C25373 = hrz[49];
    const double C25743 = hrz[50];
    const double C26113 = hrz[51];
    const double C26483 = hrz[52];
    const double C26853 = hrz[53];
    gx[0] += std::sqrt(3.0) * C16987;
    gy[0] += std::sqrt(3.0) * C17110;
    gz[0] += std::sqrt(3.0) * C17233;
    gx[1] += std::sqrt(3.0) * C17357;
    gy[1] += std::sqrt(3.0) * C17480;
    gz[1] += std::sqrt(3.0) * C17603;
    gx[2] += std::sqrt(3.0) * C17727;
    gy[2] += std::sqrt(3.0) * C17850;
    gz[2] += std::sqrt(3.0) * C17973;
    gx[3] += std::sqrt(3.0) * C18097;
    gy[3] += std::sqrt(3.0) * C18220;
    gz[3] += std::sqrt(3.0) * C18343;
    gx[4] += std::sqrt(3.0) * C18467;
    gy[4] += std::sqrt(3.0) * C18590;
    gz[4] += std::sqrt(3.0) * C18713;
    gx[5] += std::sqrt(3.0) * C18837;
    gy[5] += std::sqrt(3.0) * C18960;
    gz[5] += std::sqrt(3.0) * C19083;
    gx[6] += std::sqrt(3.0) * C19207;
    gy[6] += std::sqrt(3.0) * C19330;
    gz[6] += std::sqrt(3.0) * C19453;
    gx[7] += std::sqrt(3.0) * C19577;
    gy[7] += std::sqrt(3.0) * C19700;
    gz[7] += std::sqrt(3.0) * C19823;
    gx[8] += std::sqrt(3.0) * C19947;
    gy[8] += std::sqrt(3.0) * C20070;
    gz[8] += std::sqrt(3.0) * C20193;
    gx[9] += std::sqrt(3.0) * C23647;
    gy[9] += std::sqrt(3.0) * C23770;
    gz[9] += std::sqrt(3.0) * C23893;
    gx[10] += std::sqrt(3.0) * C24017;
    gy[10] += std::sqrt(3.0) * C24140;
    gz[10] += std::sqrt(3.0) * C24263;
    gx[11] += std::sqrt(3.0) * C24387;
    gy[11] += std::sqrt(3.0) * C24510;
    gz[11] += std::sqrt(3.0) * C24633;
    gx[12] += std::sqrt(3.0) * C24757;
    gy[12] += std::sqrt(3.0) * C24880;
    gz[12] += std::sqrt(3.0) * C25003;
    gx[13] += std::sqrt(3.0) * C25127;
    gy[13] += std::sqrt(3.0) * C25250;
    gz[13] += std::sqrt(3.0) * C25373;
    gx[14] += std::sqrt(3.0) * C25497;
    gy[14] += std::sqrt(3.0) * C25620;
    gz[14] += std::sqrt(3.0) * C25743;
    gx[15] += std::sqrt(3.0) * C25867;
    gy[15] += std::sqrt(3.0) * C25990;
    gz[15] += std::sqrt(3.0) * C26113;
    gx[16] += std::sqrt(3.0) * C26237;
    gy[16] += std::sqrt(3.0) * C26360;
    gz[16] += std::sqrt(3.0) * C26483;
    gx[17] += std::sqrt(3.0) * C26607;
    gy[17] += std::sqrt(3.0) * C26730;
    gz[17] += std::sqrt(3.0) * C26853;
    gx[18] += -0.5 * C6998 - 0.5 * C10327 + C13657;
    gy[18] += -0.5 * C7120 - 0.5 * C10450 + C13780;
    gz[18] += -0.5 * C7243 - 0.5 * C10573 + C13903;
    gx[19] += -0.5 * C7367 - 0.5 * C10697 + C14027;
    gy[19] += -0.5 * C7490 - 0.5 * C10820 + C14150;
    gz[19] += -0.5 * C7613 - 0.5 * C10943 + C14273;
    gx[20] += -0.5 * C7737 - 0.5 * C11067 + C14397;
    gy[20] += -0.5 * C7860 - 0.5 * C11190 + C14520;
    gz[20] += -0.5 * C7983 - 0.5 * C11313 + C14643;
    gx[21] += -0.5 * C8107 - 0.5 * C11437 + C14767;
    gy[21] += -0.5 * C8230 - 0.5 * C11560 + C14890;
    gz[21] += -0.5 * C8353 - 0.5 * C11683 + C15013;
    gx[22] += -0.5 * C8477 - 0.5 * C11807 + C15137;
    gy[22] += -0.5 * C8600 - 0.5 * C11930 + C15260;
    gz[22] += -0.5 * C8723 - 0.5 * C12053 + C15383;
    gx[23] += -0.5 * C8847 - 0.5 * C12177 + C15507;
    gy[23] += -0.5 * C8970 - 0.5 * C12300 + C15630;
    gz[23] += -0.5 * C9093 - 0.5 * C12423 + C15753;
    gx[24] += -0.5 * C9217 - 0.5 * C12547 + C15877;
    gy[24] += -0.5 * C9340 - 0.5 * C12670 + C16000;
    gz[24] += -0.5 * C9463 - 0.5 * C12793 + C16123;
    gx[25] += -0.5 * C9587 - 0.5 * C12917 + C16247;
    gy[25] += -0.5 * C9710 - 0.5 * C13040 + C16370;
    gz[25] += -0.5 * C9833 - 0.5 * C13163 + C16493;
    gx[26] += -0.5 * C9957 - 0.5 * C13287 + C16617;
    gy[26] += -0.5 * C10080 - 0.5 * C13410 + C16740;
    gz[26] += -0.5 * C10203 - 0.5 * C13533 + C16863;
    gx[27] += std::sqrt(3.0) * C20317;
    gy[27] += std::sqrt(3.0) * C20440;
    gz[27] += std::sqrt(3.0) * C20563;
    gx[28] += std::sqrt(3.0) * C20687;
    gy[28] += std::sqrt(3.0) * C20810;
    gz[28] += std::sqrt(3.0) * C20933;
    gx[29] += std::sqrt(3.0) * C21057;
    gy[29] += std::sqrt(3.0) * C21180;
    gz[29] += std::sqrt(3.0) * C21303;
    gx[30] += std::sqrt(3.0) * C21427;
    gy[30] += std::sqrt(3.0) * C21550;
    gz[30] += std::sqrt(3.0) * C21673;
    gx[31] += std::sqrt(3.0) * C21797;
    gy[31] += std::sqrt(3.0) * C21920;
    gz[31] += std::sqrt(3.0) * C22043;
    gx[32] += std::sqrt(3.0) * C22167;
    gy[32] += std::sqrt(3.0) * C22290;
    gz[32] += std::sqrt(3.0) * C22413;
    gx[33] += std::sqrt(3.0) * C22537;
    gy[33] += std::sqrt(3.0) * C22660;
    gz[33] += std::sqrt(3.0) * C22783;
    gx[34] += std::sqrt(3.0) * C22907;
    gy[34] += std::sqrt(3.0) * C23030;
    gz[34] += std::sqrt(3.0) * C23153;
    gx[35] += std::sqrt(3.0) * C23277;
    gy[35] += std::sqrt(3.0) * C23400;
    gz[35] += std::sqrt(3.0) * C23523;
    gx[36] += std::sqrt(0.75) * C6998 - std::sqrt(0.75) * C10327;
    gy[36] += std::sqrt(0.75) * C7120 - std::sqrt(0.75) * C10450;
    gz[36] += std::sqrt(0.75) * C7243 - std::sqrt(0.75) * C10573;
    gx[37] += std::sqrt(0.75) * C7367 - std::sqrt(0.75) * C10697;
    gy[37] += std::sqrt(0.75) * C7490 - std::sqrt(0.75) * C10820;
    gz[37] += std::sqrt(0.75) * C7613 - std::sqrt(0.75) * C10943;
    gx[38] += std::sqrt(0.75) * C7737 - std::sqrt(0.75) * C11067;
    gy[38] += std::sqrt(0.75) * C7860 - std::sqrt(0.75) * C11190;
    gz[38] += std::sqrt(0.75) * C7983 - std::sqrt(0.75) * C11313;
    gx[39] += std::sqrt(0.75) * C8107 - std::sqrt(0.75) * C11437;
    gy[39] += std::sqrt(0.75) * C8230 - std::sqrt(0.75) * C11560;
    gz[39] += std::sqrt(0.75) * C8353 - std::sqrt(0.75) * C11683;
    gx[40] += std::sqrt(0.75) * C8477 - std::sqrt(0.75) * C11807;
    gy[40] += std::sqrt(0.75) * C8600 - std::sqrt(0.75) * C11930;
    gz[40] += std::sqrt(0.75) * C8723 - std::sqrt(0.75) * C12053;
    gx[41] += std::sqrt(0.75) * C8847 - std::sqrt(0.75) * C12177;
    gy[41] += std::sqrt(0.75) * C8970 - std::sqrt(0.75) * C12300;
    gz[41] += std::sqrt(0.75) * C9093 - std::sqrt(0.75) * C12423;
    gx[42] += std::sqrt(0.75) * C9217 - std::sqrt(0.75) * C12547;
    gy[42] += std::sqrt(0.75) * C9340 - std::sqrt(0.75) * C12670;
    gz[42] += std::sqrt(0.75) * C9463 - std::sqrt(0.75) * C12793;
    gx[43] += std::sqrt(0.75) * C9587 - std::sqrt(0.75) * C12917;
    gy[43] += std::sqrt(0.75) * C9710 - std::sqrt(0.75) * C13040;
    gz[43] += std::sqrt(0.75) * C9833 - std::sqrt(0.75) * C13163;
    gx[44] += std::sqrt(0.75) * C9957 - std::sqrt(0.75) * C13287;
    gy[44] += std::sqrt(0.75) * C10080 - std::sqrt(0.75) * C13410;
    gz[44] += std::sqrt(0.75) * C10203 - std::sqrt(0.75) * C13533;
}
