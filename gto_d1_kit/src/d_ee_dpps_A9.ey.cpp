/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2011_1(const double ae,
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
    eri_gradient_2011_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[35];
    double vry[35];
    double vrz[35];
    eri_gradient_2011_1_vr(ae,
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
    eri_gradient_2011_1_et(ae,
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
    eri_gradient_2011_1_hr(ae,
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
    const double C7539 = hrx[0];
    const double C7872 = hrx[1];
    const double C8206 = hrx[2];
    const double C8540 = hrx[3];
    const double C8874 = hrx[4];
    const double C9208 = hrx[5];
    const double C9542 = hrx[6];
    const double C9876 = hrx[7];
    const double C10210 = hrx[8];
    const double C10544 = hrx[9];
    const double C10878 = hrx[10];
    const double C11212 = hrx[11];
    const double C11546 = hrx[12];
    const double C11880 = hrx[13];
    const double C12214 = hrx[14];
    const double C12548 = hrx[15];
    const double C12882 = hrx[16];
    const double C13216 = hrx[17];
    const double C13550 = hrx[18];
    const double C13884 = hrx[19];
    const double C14218 = hrx[20];
    const double C14552 = hrx[21];
    const double C14886 = hrx[22];
    const double C15220 = hrx[23];
    const double C15554 = hrx[24];
    const double C15888 = hrx[25];
    const double C16222 = hrx[26];
    const double C16556 = hrx[27];
    const double C16890 = hrx[28];
    const double C17224 = hrx[29];
    const double C17558 = hrx[30];
    const double C17892 = hrx[31];
    const double C18226 = hrx[32];
    const double C18560 = hrx[33];
    const double C18894 = hrx[34];
    const double C19228 = hrx[35];
    const double C19562 = hrx[36];
    const double C19896 = hrx[37];
    const double C20230 = hrx[38];
    const double C20564 = hrx[39];
    const double C20898 = hrx[40];
    const double C21232 = hrx[41];
    const double C21566 = hrx[42];
    const double C21900 = hrx[43];
    const double C22234 = hrx[44];
    const double C22568 = hrx[45];
    const double C22902 = hrx[46];
    const double C23236 = hrx[47];
    const double C23570 = hrx[48];
    const double C23904 = hrx[49];
    const double C24238 = hrx[50];
    const double C24572 = hrx[51];
    const double C24906 = hrx[52];
    const double C25240 = hrx[53];
    const double C7649 = hry[0];
    const double C7983 = hry[1];
    const double C8317 = hry[2];
    const double C8651 = hry[3];
    const double C8985 = hry[4];
    const double C9319 = hry[5];
    const double C9653 = hry[6];
    const double C9987 = hry[7];
    const double C10321 = hry[8];
    const double C10655 = hry[9];
    const double C10989 = hry[10];
    const double C11323 = hry[11];
    const double C11657 = hry[12];
    const double C11991 = hry[13];
    const double C12325 = hry[14];
    const double C12659 = hry[15];
    const double C12993 = hry[16];
    const double C13327 = hry[17];
    const double C13661 = hry[18];
    const double C13995 = hry[19];
    const double C14329 = hry[20];
    const double C14663 = hry[21];
    const double C14997 = hry[22];
    const double C15331 = hry[23];
    const double C15665 = hry[24];
    const double C15999 = hry[25];
    const double C16333 = hry[26];
    const double C16667 = hry[27];
    const double C17001 = hry[28];
    const double C17335 = hry[29];
    const double C17669 = hry[30];
    const double C18003 = hry[31];
    const double C18337 = hry[32];
    const double C18671 = hry[33];
    const double C19005 = hry[34];
    const double C19339 = hry[35];
    const double C19673 = hry[36];
    const double C20007 = hry[37];
    const double C20341 = hry[38];
    const double C20675 = hry[39];
    const double C21009 = hry[40];
    const double C21343 = hry[41];
    const double C21677 = hry[42];
    const double C22011 = hry[43];
    const double C22345 = hry[44];
    const double C22679 = hry[45];
    const double C23013 = hry[46];
    const double C23347 = hry[47];
    const double C23681 = hry[48];
    const double C24015 = hry[49];
    const double C24349 = hry[50];
    const double C24683 = hry[51];
    const double C25017 = hry[52];
    const double C25351 = hry[53];
    const double C7760 = hrz[0];
    const double C8094 = hrz[1];
    const double C8428 = hrz[2];
    const double C8762 = hrz[3];
    const double C9096 = hrz[4];
    const double C9430 = hrz[5];
    const double C9764 = hrz[6];
    const double C10098 = hrz[7];
    const double C10432 = hrz[8];
    const double C10766 = hrz[9];
    const double C11100 = hrz[10];
    const double C11434 = hrz[11];
    const double C11768 = hrz[12];
    const double C12102 = hrz[13];
    const double C12436 = hrz[14];
    const double C12770 = hrz[15];
    const double C13104 = hrz[16];
    const double C13438 = hrz[17];
    const double C13772 = hrz[18];
    const double C14106 = hrz[19];
    const double C14440 = hrz[20];
    const double C14774 = hrz[21];
    const double C15108 = hrz[22];
    const double C15442 = hrz[23];
    const double C15776 = hrz[24];
    const double C16110 = hrz[25];
    const double C16444 = hrz[26];
    const double C16778 = hrz[27];
    const double C17112 = hrz[28];
    const double C17446 = hrz[29];
    const double C17780 = hrz[30];
    const double C18114 = hrz[31];
    const double C18448 = hrz[32];
    const double C18782 = hrz[33];
    const double C19116 = hrz[34];
    const double C19450 = hrz[35];
    const double C19784 = hrz[36];
    const double C20118 = hrz[37];
    const double C20452 = hrz[38];
    const double C20786 = hrz[39];
    const double C21120 = hrz[40];
    const double C21454 = hrz[41];
    const double C21788 = hrz[42];
    const double C22122 = hrz[43];
    const double C22456 = hrz[44];
    const double C22790 = hrz[45];
    const double C23124 = hrz[46];
    const double C23458 = hrz[47];
    const double C23792 = hrz[48];
    const double C24126 = hrz[49];
    const double C24460 = hrz[50];
    const double C24794 = hrz[51];
    const double C25128 = hrz[52];
    const double C25462 = hrz[53];
    gx[0] += std::sqrt(3.0) * C16556;
    gy[0] += std::sqrt(3.0) * C16667;
    gz[0] += std::sqrt(3.0) * C16778;
    gx[1] += std::sqrt(3.0) * C16890;
    gy[1] += std::sqrt(3.0) * C17001;
    gz[1] += std::sqrt(3.0) * C17112;
    gx[2] += std::sqrt(3.0) * C17224;
    gy[2] += std::sqrt(3.0) * C17335;
    gz[2] += std::sqrt(3.0) * C17446;
    gx[3] += std::sqrt(3.0) * C17558;
    gy[3] += std::sqrt(3.0) * C17669;
    gz[3] += std::sqrt(3.0) * C17780;
    gx[4] += std::sqrt(3.0) * C17892;
    gy[4] += std::sqrt(3.0) * C18003;
    gz[4] += std::sqrt(3.0) * C18114;
    gx[5] += std::sqrt(3.0) * C18226;
    gy[5] += std::sqrt(3.0) * C18337;
    gz[5] += std::sqrt(3.0) * C18448;
    gx[6] += std::sqrt(3.0) * C18560;
    gy[6] += std::sqrt(3.0) * C18671;
    gz[6] += std::sqrt(3.0) * C18782;
    gx[7] += std::sqrt(3.0) * C18894;
    gy[7] += std::sqrt(3.0) * C19005;
    gz[7] += std::sqrt(3.0) * C19116;
    gx[8] += std::sqrt(3.0) * C19228;
    gy[8] += std::sqrt(3.0) * C19339;
    gz[8] += std::sqrt(3.0) * C19450;
    gx[9] += std::sqrt(3.0) * C22568;
    gy[9] += std::sqrt(3.0) * C22679;
    gz[9] += std::sqrt(3.0) * C22790;
    gx[10] += std::sqrt(3.0) * C22902;
    gy[10] += std::sqrt(3.0) * C23013;
    gz[10] += std::sqrt(3.0) * C23124;
    gx[11] += std::sqrt(3.0) * C23236;
    gy[11] += std::sqrt(3.0) * C23347;
    gz[11] += std::sqrt(3.0) * C23458;
    gx[12] += std::sqrt(3.0) * C23570;
    gy[12] += std::sqrt(3.0) * C23681;
    gz[12] += std::sqrt(3.0) * C23792;
    gx[13] += std::sqrt(3.0) * C23904;
    gy[13] += std::sqrt(3.0) * C24015;
    gz[13] += std::sqrt(3.0) * C24126;
    gx[14] += std::sqrt(3.0) * C24238;
    gy[14] += std::sqrt(3.0) * C24349;
    gz[14] += std::sqrt(3.0) * C24460;
    gx[15] += std::sqrt(3.0) * C24572;
    gy[15] += std::sqrt(3.0) * C24683;
    gz[15] += std::sqrt(3.0) * C24794;
    gx[16] += std::sqrt(3.0) * C24906;
    gy[16] += std::sqrt(3.0) * C25017;
    gz[16] += std::sqrt(3.0) * C25128;
    gx[17] += std::sqrt(3.0) * C25240;
    gy[17] += std::sqrt(3.0) * C25351;
    gz[17] += std::sqrt(3.0) * C25462;
    gx[18] += -0.5 * C7539 - 0.5 * C10544 + C13550;
    gy[18] += -0.5 * C7649 - 0.5 * C10655 + C13661;
    gz[18] += -0.5 * C7760 - 0.5 * C10766 + C13772;
    gx[19] += -0.5 * C7872 - 0.5 * C10878 + C13884;
    gy[19] += -0.5 * C7983 - 0.5 * C10989 + C13995;
    gz[19] += -0.5 * C8094 - 0.5 * C11100 + C14106;
    gx[20] += -0.5 * C8206 - 0.5 * C11212 + C14218;
    gy[20] += -0.5 * C8317 - 0.5 * C11323 + C14329;
    gz[20] += -0.5 * C8428 - 0.5 * C11434 + C14440;
    gx[21] += -0.5 * C8540 - 0.5 * C11546 + C14552;
    gy[21] += -0.5 * C8651 - 0.5 * C11657 + C14663;
    gz[21] += -0.5 * C8762 - 0.5 * C11768 + C14774;
    gx[22] += -0.5 * C8874 - 0.5 * C11880 + C14886;
    gy[22] += -0.5 * C8985 - 0.5 * C11991 + C14997;
    gz[22] += -0.5 * C9096 - 0.5 * C12102 + C15108;
    gx[23] += -0.5 * C9208 - 0.5 * C12214 + C15220;
    gy[23] += -0.5 * C9319 - 0.5 * C12325 + C15331;
    gz[23] += -0.5 * C9430 - 0.5 * C12436 + C15442;
    gx[24] += -0.5 * C9542 - 0.5 * C12548 + C15554;
    gy[24] += -0.5 * C9653 - 0.5 * C12659 + C15665;
    gz[24] += -0.5 * C9764 - 0.5 * C12770 + C15776;
    gx[25] += -0.5 * C9876 - 0.5 * C12882 + C15888;
    gy[25] += -0.5 * C9987 - 0.5 * C12993 + C15999;
    gz[25] += -0.5 * C10098 - 0.5 * C13104 + C16110;
    gx[26] += -0.5 * C10210 - 0.5 * C13216 + C16222;
    gy[26] += -0.5 * C10321 - 0.5 * C13327 + C16333;
    gz[26] += -0.5 * C10432 - 0.5 * C13438 + C16444;
    gx[27] += std::sqrt(3.0) * C19562;
    gy[27] += std::sqrt(3.0) * C19673;
    gz[27] += std::sqrt(3.0) * C19784;
    gx[28] += std::sqrt(3.0) * C19896;
    gy[28] += std::sqrt(3.0) * C20007;
    gz[28] += std::sqrt(3.0) * C20118;
    gx[29] += std::sqrt(3.0) * C20230;
    gy[29] += std::sqrt(3.0) * C20341;
    gz[29] += std::sqrt(3.0) * C20452;
    gx[30] += std::sqrt(3.0) * C20564;
    gy[30] += std::sqrt(3.0) * C20675;
    gz[30] += std::sqrt(3.0) * C20786;
    gx[31] += std::sqrt(3.0) * C20898;
    gy[31] += std::sqrt(3.0) * C21009;
    gz[31] += std::sqrt(3.0) * C21120;
    gx[32] += std::sqrt(3.0) * C21232;
    gy[32] += std::sqrt(3.0) * C21343;
    gz[32] += std::sqrt(3.0) * C21454;
    gx[33] += std::sqrt(3.0) * C21566;
    gy[33] += std::sqrt(3.0) * C21677;
    gz[33] += std::sqrt(3.0) * C21788;
    gx[34] += std::sqrt(3.0) * C21900;
    gy[34] += std::sqrt(3.0) * C22011;
    gz[34] += std::sqrt(3.0) * C22122;
    gx[35] += std::sqrt(3.0) * C22234;
    gy[35] += std::sqrt(3.0) * C22345;
    gz[35] += std::sqrt(3.0) * C22456;
    gx[36] += std::sqrt(0.75) * C7539 - std::sqrt(0.75) * C10544;
    gy[36] += std::sqrt(0.75) * C7649 - std::sqrt(0.75) * C10655;
    gz[36] += std::sqrt(0.75) * C7760 - std::sqrt(0.75) * C10766;
    gx[37] += std::sqrt(0.75) * C7872 - std::sqrt(0.75) * C10878;
    gy[37] += std::sqrt(0.75) * C7983 - std::sqrt(0.75) * C10989;
    gz[37] += std::sqrt(0.75) * C8094 - std::sqrt(0.75) * C11100;
    gx[38] += std::sqrt(0.75) * C8206 - std::sqrt(0.75) * C11212;
    gy[38] += std::sqrt(0.75) * C8317 - std::sqrt(0.75) * C11323;
    gz[38] += std::sqrt(0.75) * C8428 - std::sqrt(0.75) * C11434;
    gx[39] += std::sqrt(0.75) * C8540 - std::sqrt(0.75) * C11546;
    gy[39] += std::sqrt(0.75) * C8651 - std::sqrt(0.75) * C11657;
    gz[39] += std::sqrt(0.75) * C8762 - std::sqrt(0.75) * C11768;
    gx[40] += std::sqrt(0.75) * C8874 - std::sqrt(0.75) * C11880;
    gy[40] += std::sqrt(0.75) * C8985 - std::sqrt(0.75) * C11991;
    gz[40] += std::sqrt(0.75) * C9096 - std::sqrt(0.75) * C12102;
    gx[41] += std::sqrt(0.75) * C9208 - std::sqrt(0.75) * C12214;
    gy[41] += std::sqrt(0.75) * C9319 - std::sqrt(0.75) * C12325;
    gz[41] += std::sqrt(0.75) * C9430 - std::sqrt(0.75) * C12436;
    gx[42] += std::sqrt(0.75) * C9542 - std::sqrt(0.75) * C12548;
    gy[42] += std::sqrt(0.75) * C9653 - std::sqrt(0.75) * C12659;
    gz[42] += std::sqrt(0.75) * C9764 - std::sqrt(0.75) * C12770;
    gx[43] += std::sqrt(0.75) * C9876 - std::sqrt(0.75) * C12882;
    gy[43] += std::sqrt(0.75) * C9987 - std::sqrt(0.75) * C12993;
    gz[43] += std::sqrt(0.75) * C10098 - std::sqrt(0.75) * C13104;
    gx[44] += std::sqrt(0.75) * C10210 - std::sqrt(0.75) * C13216;
    gy[44] += std::sqrt(0.75) * C10321 - std::sqrt(0.75) * C13327;
    gz[44] += std::sqrt(0.75) * C10432 - std::sqrt(0.75) * C13438;
}
