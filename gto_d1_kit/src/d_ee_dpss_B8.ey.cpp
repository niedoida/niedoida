/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_2_hr(const double ae,
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
    const double C8535 = g[0];
    const double C8564 = g[1];
    const double C8593 = g[2];
    const double C8622 = g[3];
    const double C8649 = g[4];
    const double C8675 = g[5];
    const double C8538 = etx[0];
    const double C8539 = etx[1];
    const double C8548 = etx[2];
    const double C8557 = etx[3];
    const double C8567 = etx[4];
    const double C8568 = etx[5];
    const double C8577 = etx[6];
    const double C8586 = etx[7];
    const double C8596 = etx[8];
    const double C8597 = etx[9];
    const double C8606 = etx[10];
    const double C8615 = etx[11];
    const double C8625 = etx[12];
    const double C8642 = etx[13];
    const double C8652 = etx[14];
    const double C8678 = etx[15];
    const double C8703 = ety[0];
    const double C8704 = ety[1];
    const double C8713 = ety[2];
    const double C8722 = ety[3];
    const double C8731 = ety[4];
    const double C8732 = ety[5];
    const double C8741 = ety[6];
    const double C8750 = ety[7];
    const double C8759 = ety[8];
    const double C8760 = ety[9];
    const double C8769 = ety[10];
    const double C8778 = ety[11];
    const double C8787 = ety[12];
    const double C8804 = ety[13];
    const double C8813 = ety[14];
    const double C8838 = ety[15];
    const double C8863 = etz[0];
    const double C8864 = etz[1];
    const double C8873 = etz[2];
    const double C8882 = etz[3];
    const double C8891 = etz[4];
    const double C8892 = etz[5];
    const double C8901 = etz[6];
    const double C8910 = etz[7];
    const double C8919 = etz[8];
    const double C8920 = etz[9];
    const double C8929 = etz[10];
    const double C8938 = etz[11];
    const double C8947 = etz[12];
    const double C8964 = etz[13];
    const double C8973 = etz[14];
    const double C8998 = etz[15];
    const double C2735 = C8538 - C8535 + xAB * C8539;
    const double C3056 = C8548 + yAB * C8539;
    const double C3378 = C8557 + zAB * C8539;
    const double C3700 = C8567 - C8564 + xAB * C8568;
    const double C4022 = C8577 + yAB * C8568;
    const double C4344 = C8586 + zAB * C8568;
    const double C4666 = C8596 - C8593 + xAB * C8597;
    const double C4988 = C8606 + yAB * C8597;
    const double C5310 = C8615 + zAB * C8597;
    const double C5632 = C8548 - C8622 + xAB * C8625;
    const double C5954 = C8567 + yAB * C8625;
    const double C6276 = C8642 + zAB * C8625;
    const double C6598 = C8557 - C8649 + xAB * C8652;
    const double C6920 = C8642 + yAB * C8652;
    const double C7242 = C8596 + zAB * C8652;
    const double C7564 = C8642 - C8675 + xAB * C8678;
    const double C7886 = C8586 + yAB * C8678;
    const double C8208 = C8606 + zAB * C8678;
    const double C2841 = C8703 + xAB * C8704;
    const double C3163 = C8713 - C8535 + yAB * C8704;
    const double C3485 = C8722 + zAB * C8704;
    const double C3807 = C8731 + xAB * C8732;
    const double C4129 = C8741 - C8564 + yAB * C8732;
    const double C4451 = C8750 + zAB * C8732;
    const double C4773 = C8759 + xAB * C8760;
    const double C5095 = C8769 - C8593 + yAB * C8760;
    const double C5417 = C8778 + zAB * C8760;
    const double C5739 = C8713 + xAB * C8787;
    const double C6061 = C8731 - C8622 + yAB * C8787;
    const double C6383 = C8804 + zAB * C8787;
    const double C6705 = C8722 + xAB * C8813;
    const double C7027 = C8804 - C8649 + yAB * C8813;
    const double C7349 = C8759 + zAB * C8813;
    const double C7671 = C8804 + xAB * C8838;
    const double C7993 = C8750 - C8675 + yAB * C8838;
    const double C8315 = C8769 + zAB * C8838;
    const double C2948 = C8863 + xAB * C8864;
    const double C3270 = C8873 + yAB * C8864;
    const double C3592 = C8882 - C8535 + zAB * C8864;
    const double C3914 = C8891 + xAB * C8892;
    const double C4236 = C8901 + yAB * C8892;
    const double C4558 = C8910 - C8564 + zAB * C8892;
    const double C4880 = C8919 + xAB * C8920;
    const double C5202 = C8929 + yAB * C8920;
    const double C5524 = C8938 - C8593 + zAB * C8920;
    const double C5846 = C8873 + xAB * C8947;
    const double C6168 = C8891 + yAB * C8947;
    const double C6490 = C8964 - C8622 + zAB * C8947;
    const double C6812 = C8882 + xAB * C8973;
    const double C7134 = C8964 + yAB * C8973;
    const double C7456 = C8919 - C8649 + zAB * C8973;
    const double C7778 = C8964 + xAB * C8998;
    const double C8100 = C8910 + yAB * C8998;
    const double C8422 = C8929 - C8675 + zAB * C8998;
    hrx[0] = C2735;
    hrx[1] = C3056;
    hrx[2] = C3378;
    hrx[3] = C3700;
    hrx[4] = C4022;
    hrx[5] = C4344;
    hrx[6] = C4666;
    hrx[7] = C4988;
    hrx[8] = C5310;
    hrx[9] = C5632;
    hrx[10] = C5954;
    hrx[11] = C6276;
    hrx[12] = C6598;
    hrx[13] = C6920;
    hrx[14] = C7242;
    hrx[15] = C7564;
    hrx[16] = C7886;
    hrx[17] = C8208;
    hry[0] = C2841;
    hry[1] = C3163;
    hry[2] = C3485;
    hry[3] = C3807;
    hry[4] = C4129;
    hry[5] = C4451;
    hry[6] = C4773;
    hry[7] = C5095;
    hry[8] = C5417;
    hry[9] = C5739;
    hry[10] = C6061;
    hry[11] = C6383;
    hry[12] = C6705;
    hry[13] = C7027;
    hry[14] = C7349;
    hry[15] = C7671;
    hry[16] = C7993;
    hry[17] = C8315;
    hrz[0] = C2948;
    hrz[1] = C3270;
    hrz[2] = C3592;
    hrz[3] = C3914;
    hrz[4] = C4236;
    hrz[5] = C4558;
    hrz[6] = C4880;
    hrz[7] = C5202;
    hrz[8] = C5524;
    hrz[9] = C5846;
    hrz[10] = C6168;
    hrz[11] = C6490;
    hrz[12] = C6812;
    hrz[13] = C7134;
    hrz[14] = C7456;
    hrz[15] = C7778;
    hrz[16] = C8100;
    hrz[17] = C8422;
}
