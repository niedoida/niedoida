/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_1_hr(const double ae,
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
    const double C8525 = g[0];
    const double C8554 = g[1];
    const double C8583 = g[2];
    const double C8612 = g[3];
    const double C8639 = g[4];
    const double C8665 = g[5];
    const double C8528 = etx[0];
    const double C8529 = etx[1];
    const double C8538 = etx[2];
    const double C8547 = etx[3];
    const double C8557 = etx[4];
    const double C8558 = etx[5];
    const double C8567 = etx[6];
    const double C8576 = etx[7];
    const double C8586 = etx[8];
    const double C8587 = etx[9];
    const double C8596 = etx[10];
    const double C8605 = etx[11];
    const double C8615 = etx[12];
    const double C8632 = etx[13];
    const double C8642 = etx[14];
    const double C8668 = etx[15];
    const double C8693 = ety[0];
    const double C8694 = ety[1];
    const double C8703 = ety[2];
    const double C8712 = ety[3];
    const double C8721 = ety[4];
    const double C8722 = ety[5];
    const double C8731 = ety[6];
    const double C8740 = ety[7];
    const double C8749 = ety[8];
    const double C8750 = ety[9];
    const double C8759 = ety[10];
    const double C8768 = ety[11];
    const double C8777 = ety[12];
    const double C8794 = ety[13];
    const double C8803 = ety[14];
    const double C8828 = ety[15];
    const double C8853 = etz[0];
    const double C8854 = etz[1];
    const double C8863 = etz[2];
    const double C8872 = etz[3];
    const double C8881 = etz[4];
    const double C8882 = etz[5];
    const double C8891 = etz[6];
    const double C8900 = etz[7];
    const double C8909 = etz[8];
    const double C8910 = etz[9];
    const double C8919 = etz[10];
    const double C8928 = etz[11];
    const double C8937 = etz[12];
    const double C8954 = etz[13];
    const double C8963 = etz[14];
    const double C8988 = etz[15];
    const double C2725 = C8528 + C8525 + xAB * C8529;
    const double C3046 = C8538 + yAB * C8529;
    const double C3368 = C8547 + zAB * C8529;
    const double C3690 = C8557 + C8554 + xAB * C8558;
    const double C4012 = C8567 + yAB * C8558;
    const double C4334 = C8576 + zAB * C8558;
    const double C4656 = C8586 + C8583 + xAB * C8587;
    const double C4978 = C8596 + yAB * C8587;
    const double C5300 = C8605 + zAB * C8587;
    const double C5622 = C8538 + C8612 + xAB * C8615;
    const double C5944 = C8557 + yAB * C8615;
    const double C6266 = C8632 + zAB * C8615;
    const double C6588 = C8547 + C8639 + xAB * C8642;
    const double C6910 = C8632 + yAB * C8642;
    const double C7232 = C8586 + zAB * C8642;
    const double C7554 = C8632 + C8665 + xAB * C8668;
    const double C7876 = C8576 + yAB * C8668;
    const double C8198 = C8596 + zAB * C8668;
    const double C2831 = C8693 + xAB * C8694;
    const double C3153 = C8703 + C8525 + yAB * C8694;
    const double C3475 = C8712 + zAB * C8694;
    const double C3797 = C8721 + xAB * C8722;
    const double C4119 = C8731 + C8554 + yAB * C8722;
    const double C4441 = C8740 + zAB * C8722;
    const double C4763 = C8749 + xAB * C8750;
    const double C5085 = C8759 + C8583 + yAB * C8750;
    const double C5407 = C8768 + zAB * C8750;
    const double C5729 = C8703 + xAB * C8777;
    const double C6051 = C8721 + C8612 + yAB * C8777;
    const double C6373 = C8794 + zAB * C8777;
    const double C6695 = C8712 + xAB * C8803;
    const double C7017 = C8794 + C8639 + yAB * C8803;
    const double C7339 = C8749 + zAB * C8803;
    const double C7661 = C8794 + xAB * C8828;
    const double C7983 = C8740 + C8665 + yAB * C8828;
    const double C8305 = C8759 + zAB * C8828;
    const double C2938 = C8853 + xAB * C8854;
    const double C3260 = C8863 + yAB * C8854;
    const double C3582 = C8872 + C8525 + zAB * C8854;
    const double C3904 = C8881 + xAB * C8882;
    const double C4226 = C8891 + yAB * C8882;
    const double C4548 = C8900 + C8554 + zAB * C8882;
    const double C4870 = C8909 + xAB * C8910;
    const double C5192 = C8919 + yAB * C8910;
    const double C5514 = C8928 + C8583 + zAB * C8910;
    const double C5836 = C8863 + xAB * C8937;
    const double C6158 = C8881 + yAB * C8937;
    const double C6480 = C8954 + C8612 + zAB * C8937;
    const double C6802 = C8872 + xAB * C8963;
    const double C7124 = C8954 + yAB * C8963;
    const double C7446 = C8909 + C8639 + zAB * C8963;
    const double C7768 = C8954 + xAB * C8988;
    const double C8090 = C8900 + yAB * C8988;
    const double C8412 = C8919 + C8665 + zAB * C8988;
    hrx[0] = C2725;
    hrx[1] = C3046;
    hrx[2] = C3368;
    hrx[3] = C3690;
    hrx[4] = C4012;
    hrx[5] = C4334;
    hrx[6] = C4656;
    hrx[7] = C4978;
    hrx[8] = C5300;
    hrx[9] = C5622;
    hrx[10] = C5944;
    hrx[11] = C6266;
    hrx[12] = C6588;
    hrx[13] = C6910;
    hrx[14] = C7232;
    hrx[15] = C7554;
    hrx[16] = C7876;
    hrx[17] = C8198;
    hry[0] = C2831;
    hry[1] = C3153;
    hry[2] = C3475;
    hry[3] = C3797;
    hry[4] = C4119;
    hry[5] = C4441;
    hry[6] = C4763;
    hry[7] = C5085;
    hry[8] = C5407;
    hry[9] = C5729;
    hry[10] = C6051;
    hry[11] = C6373;
    hry[12] = C6695;
    hry[13] = C7017;
    hry[14] = C7339;
    hry[15] = C7661;
    hry[16] = C7983;
    hry[17] = C8305;
    hrz[0] = C2938;
    hrz[1] = C3260;
    hrz[2] = C3582;
    hrz[3] = C3904;
    hrz[4] = C4226;
    hrz[5] = C4548;
    hrz[6] = C4870;
    hrz[7] = C5192;
    hrz[8] = C5514;
    hrz[9] = C5836;
    hrz[10] = C6158;
    hrz[11] = C6480;
    hrz[12] = C6802;
    hrz[13] = C7124;
    hrz[14] = C7446;
    hrz[15] = C7768;
    hrz[16] = C8090;
    hrz[17] = C8412;
}
