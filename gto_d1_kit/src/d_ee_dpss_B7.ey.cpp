/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_2_et(const double ae,
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
    const double C8538 = vrx[0];
    const double C8539 = vrx[1];
    const double C8548 = vrx[2];
    const double C8557 = vrx[3];
    const double C8567 = vrx[4];
    const double C8568 = vrx[5];
    const double C8577 = vrx[6];
    const double C8586 = vrx[7];
    const double C8596 = vrx[8];
    const double C8597 = vrx[9];
    const double C8606 = vrx[10];
    const double C8615 = vrx[11];
    const double C8625 = vrx[12];
    const double C8642 = vrx[13];
    const double C8652 = vrx[14];
    const double C8678 = vrx[15];
    const double C8703 = vry[0];
    const double C8704 = vry[1];
    const double C8713 = vry[2];
    const double C8722 = vry[3];
    const double C8731 = vry[4];
    const double C8732 = vry[5];
    const double C8741 = vry[6];
    const double C8750 = vry[7];
    const double C8759 = vry[8];
    const double C8760 = vry[9];
    const double C8769 = vry[10];
    const double C8778 = vry[11];
    const double C8787 = vry[12];
    const double C8804 = vry[13];
    const double C8813 = vry[14];
    const double C8838 = vry[15];
    const double C8863 = vrz[0];
    const double C8864 = vrz[1];
    const double C8873 = vrz[2];
    const double C8882 = vrz[3];
    const double C8891 = vrz[4];
    const double C8892 = vrz[5];
    const double C8901 = vrz[6];
    const double C8910 = vrz[7];
    const double C8919 = vrz[8];
    const double C8920 = vrz[9];
    const double C8929 = vrz[10];
    const double C8938 = vrz[11];
    const double C8947 = vrz[12];
    const double C8964 = vrz[13];
    const double C8973 = vrz[14];
    const double C8998 = vrz[15];
    etx[0] = C8538;
    etx[1] = C8539;
    etx[2] = C8548;
    etx[3] = C8557;
    etx[4] = C8567;
    etx[5] = C8568;
    etx[6] = C8577;
    etx[7] = C8586;
    etx[8] = C8596;
    etx[9] = C8597;
    etx[10] = C8606;
    etx[11] = C8615;
    etx[12] = C8625;
    etx[13] = C8642;
    etx[14] = C8652;
    etx[15] = C8678;
    ety[0] = C8703;
    ety[1] = C8704;
    ety[2] = C8713;
    ety[3] = C8722;
    ety[4] = C8731;
    ety[5] = C8732;
    ety[6] = C8741;
    ety[7] = C8750;
    ety[8] = C8759;
    ety[9] = C8760;
    ety[10] = C8769;
    ety[11] = C8778;
    ety[12] = C8787;
    ety[13] = C8804;
    ety[14] = C8813;
    ety[15] = C8838;
    etz[0] = C8863;
    etz[1] = C8864;
    etz[2] = C8873;
    etz[3] = C8882;
    etz[4] = C8891;
    etz[5] = C8892;
    etz[6] = C8901;
    etz[7] = C8910;
    etz[8] = C8919;
    etz[9] = C8920;
    etz[10] = C8929;
    etz[11] = C8938;
    etz[12] = C8947;
    etz[13] = C8964;
    etz[14] = C8973;
    etz[15] = C8998;
}
