/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_3_hr(const double ae,
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
    const double C8424 = etx[0];
    const double C8425 = etx[1];
    const double C8433 = etx[2];
    const double C8441 = etx[3];
    const double C8449 = etx[4];
    const double C8450 = etx[5];
    const double C8458 = etx[6];
    const double C8466 = etx[7];
    const double C8474 = etx[8];
    const double C8475 = etx[9];
    const double C8483 = etx[10];
    const double C8491 = etx[11];
    const double C8499 = etx[12];
    const double C8514 = etx[13];
    const double C8522 = etx[14];
    const double C8544 = etx[15];
    const double C8566 = ety[0];
    const double C8567 = ety[1];
    const double C8575 = ety[2];
    const double C8583 = ety[3];
    const double C8591 = ety[4];
    const double C8592 = ety[5];
    const double C8600 = ety[6];
    const double C8608 = ety[7];
    const double C8616 = ety[8];
    const double C8617 = ety[9];
    const double C8625 = ety[10];
    const double C8633 = ety[11];
    const double C8641 = ety[12];
    const double C8656 = ety[13];
    const double C8664 = ety[14];
    const double C8686 = ety[15];
    const double C8708 = etz[0];
    const double C8709 = etz[1];
    const double C8717 = etz[2];
    const double C8725 = etz[3];
    const double C8733 = etz[4];
    const double C8734 = etz[5];
    const double C8742 = etz[6];
    const double C8750 = etz[7];
    const double C8758 = etz[8];
    const double C8759 = etz[9];
    const double C8767 = etz[10];
    const double C8775 = etz[11];
    const double C8783 = etz[12];
    const double C8798 = etz[13];
    const double C8806 = etz[14];
    const double C8828 = etz[15];
    const double C2623 = C8424 + xAB * C8425;
    const double C2944 = C8433 + yAB * C8425;
    const double C3266 = C8441 + zAB * C8425;
    const double C3588 = C8449 + xAB * C8450;
    const double C3910 = C8458 + yAB * C8450;
    const double C4232 = C8466 + zAB * C8450;
    const double C4554 = C8474 + xAB * C8475;
    const double C4876 = C8483 + yAB * C8475;
    const double C5198 = C8491 + zAB * C8475;
    const double C5520 = C8433 + xAB * C8499;
    const double C5842 = C8449 + yAB * C8499;
    const double C6164 = C8514 + zAB * C8499;
    const double C6486 = C8441 + xAB * C8522;
    const double C6808 = C8514 + yAB * C8522;
    const double C7130 = C8474 + zAB * C8522;
    const double C7452 = C8514 + xAB * C8544;
    const double C7774 = C8466 + yAB * C8544;
    const double C8096 = C8483 + zAB * C8544;
    const double C2729 = C8566 + xAB * C8567;
    const double C3051 = C8575 + yAB * C8567;
    const double C3373 = C8583 + zAB * C8567;
    const double C3695 = C8591 + xAB * C8592;
    const double C4017 = C8600 + yAB * C8592;
    const double C4339 = C8608 + zAB * C8592;
    const double C4661 = C8616 + xAB * C8617;
    const double C4983 = C8625 + yAB * C8617;
    const double C5305 = C8633 + zAB * C8617;
    const double C5627 = C8575 + xAB * C8641;
    const double C5949 = C8591 + yAB * C8641;
    const double C6271 = C8656 + zAB * C8641;
    const double C6593 = C8583 + xAB * C8664;
    const double C6915 = C8656 + yAB * C8664;
    const double C7237 = C8616 + zAB * C8664;
    const double C7559 = C8656 + xAB * C8686;
    const double C7881 = C8608 + yAB * C8686;
    const double C8203 = C8625 + zAB * C8686;
    const double C2836 = C8708 + xAB * C8709;
    const double C3158 = C8717 + yAB * C8709;
    const double C3480 = C8725 + zAB * C8709;
    const double C3802 = C8733 + xAB * C8734;
    const double C4124 = C8742 + yAB * C8734;
    const double C4446 = C8750 + zAB * C8734;
    const double C4768 = C8758 + xAB * C8759;
    const double C5090 = C8767 + yAB * C8759;
    const double C5412 = C8775 + zAB * C8759;
    const double C5734 = C8717 + xAB * C8783;
    const double C6056 = C8733 + yAB * C8783;
    const double C6378 = C8798 + zAB * C8783;
    const double C6700 = C8725 + xAB * C8806;
    const double C7022 = C8798 + yAB * C8806;
    const double C7344 = C8758 + zAB * C8806;
    const double C7666 = C8798 + xAB * C8828;
    const double C7988 = C8750 + yAB * C8828;
    const double C8310 = C8767 + zAB * C8828;
    hrx[0] = C2623;
    hrx[1] = C2944;
    hrx[2] = C3266;
    hrx[3] = C3588;
    hrx[4] = C3910;
    hrx[5] = C4232;
    hrx[6] = C4554;
    hrx[7] = C4876;
    hrx[8] = C5198;
    hrx[9] = C5520;
    hrx[10] = C5842;
    hrx[11] = C6164;
    hrx[12] = C6486;
    hrx[13] = C6808;
    hrx[14] = C7130;
    hrx[15] = C7452;
    hrx[16] = C7774;
    hrx[17] = C8096;
    hry[0] = C2729;
    hry[1] = C3051;
    hry[2] = C3373;
    hry[3] = C3695;
    hry[4] = C4017;
    hry[5] = C4339;
    hry[6] = C4661;
    hry[7] = C4983;
    hry[8] = C5305;
    hry[9] = C5627;
    hry[10] = C5949;
    hry[11] = C6271;
    hry[12] = C6593;
    hry[13] = C6915;
    hry[14] = C7237;
    hry[15] = C7559;
    hry[16] = C7881;
    hry[17] = C8203;
    hrz[0] = C2836;
    hrz[1] = C3158;
    hrz[2] = C3480;
    hrz[3] = C3802;
    hrz[4] = C4124;
    hrz[5] = C4446;
    hrz[6] = C4768;
    hrz[7] = C5090;
    hrz[8] = C5412;
    hrz[9] = C5734;
    hrz[10] = C6056;
    hrz[11] = C6378;
    hrz[12] = C6700;
    hrz[13] = C7022;
    hrz[14] = C7344;
    hrz[15] = C7666;
    hrz[16] = C7988;
    hrz[17] = C8310;
}
