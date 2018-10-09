/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_3_et(const double ae,
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
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double C8424 = vrx[0];
    const double C8425 = vrx[1];
    const double C8433 = vrx[2];
    const double C8441 = vrx[3];
    const double C8449 = vrx[4];
    const double C8450 = vrx[5];
    const double C8458 = vrx[6];
    const double C8466 = vrx[7];
    const double C8474 = vrx[8];
    const double C8475 = vrx[9];
    const double C8483 = vrx[10];
    const double C8491 = vrx[11];
    const double C8499 = vrx[12];
    const double C8514 = vrx[13];
    const double C8522 = vrx[14];
    const double C8544 = vrx[15];
    const double C8566 = vry[0];
    const double C8567 = vry[1];
    const double C8575 = vry[2];
    const double C8583 = vry[3];
    const double C8591 = vry[4];
    const double C8592 = vry[5];
    const double C8600 = vry[6];
    const double C8608 = vry[7];
    const double C8616 = vry[8];
    const double C8617 = vry[9];
    const double C8625 = vry[10];
    const double C8633 = vry[11];
    const double C8641 = vry[12];
    const double C8656 = vry[13];
    const double C8664 = vry[14];
    const double C8686 = vry[15];
    const double C8708 = vrz[0];
    const double C8709 = vrz[1];
    const double C8717 = vrz[2];
    const double C8725 = vrz[3];
    const double C8733 = vrz[4];
    const double C8734 = vrz[5];
    const double C8742 = vrz[6];
    const double C8750 = vrz[7];
    const double C8758 = vrz[8];
    const double C8759 = vrz[9];
    const double C8767 = vrz[10];
    const double C8775 = vrz[11];
    const double C8783 = vrz[12];
    const double C8798 = vrz[13];
    const double C8806 = vrz[14];
    const double C8828 = vrz[15];
    etx[0] = C8424;
    etx[1] = C8425;
    etx[2] = C8433;
    etx[3] = C8441;
    etx[4] = C8449;
    etx[5] = C8450;
    etx[6] = C8458;
    etx[7] = C8466;
    etx[8] = C8474;
    etx[9] = C8475;
    etx[10] = C8483;
    etx[11] = C8491;
    etx[12] = C8499;
    etx[13] = C8514;
    etx[14] = C8522;
    etx[15] = C8544;
    ety[0] = C8566;
    ety[1] = C8567;
    ety[2] = C8575;
    ety[3] = C8583;
    ety[4] = C8591;
    ety[5] = C8592;
    ety[6] = C8600;
    ety[7] = C8608;
    ety[8] = C8616;
    ety[9] = C8617;
    ety[10] = C8625;
    ety[11] = C8633;
    ety[12] = C8641;
    ety[13] = C8656;
    ety[14] = C8664;
    ety[15] = C8686;
    etz[0] = C8708;
    etz[1] = C8709;
    etz[2] = C8717;
    etz[3] = C8725;
    etz[4] = C8733;
    etz[5] = C8734;
    etz[6] = C8742;
    etz[7] = C8750;
    etz[8] = C8758;
    etz[9] = C8759;
    etz[10] = C8767;
    etz[11] = C8775;
    etz[12] = C8783;
    etz[13] = C8798;
    etz[14] = C8806;
    etz[15] = C8828;
}
