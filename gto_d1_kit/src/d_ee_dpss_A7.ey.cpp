/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_1_et(const double ae,
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
    const double C8528 = vrx[0];
    const double C8529 = vrx[1];
    const double C8538 = vrx[2];
    const double C8547 = vrx[3];
    const double C8557 = vrx[4];
    const double C8558 = vrx[5];
    const double C8567 = vrx[6];
    const double C8576 = vrx[7];
    const double C8586 = vrx[8];
    const double C8587 = vrx[9];
    const double C8596 = vrx[10];
    const double C8605 = vrx[11];
    const double C8615 = vrx[12];
    const double C8632 = vrx[13];
    const double C8642 = vrx[14];
    const double C8668 = vrx[15];
    const double C8693 = vry[0];
    const double C8694 = vry[1];
    const double C8703 = vry[2];
    const double C8712 = vry[3];
    const double C8721 = vry[4];
    const double C8722 = vry[5];
    const double C8731 = vry[6];
    const double C8740 = vry[7];
    const double C8749 = vry[8];
    const double C8750 = vry[9];
    const double C8759 = vry[10];
    const double C8768 = vry[11];
    const double C8777 = vry[12];
    const double C8794 = vry[13];
    const double C8803 = vry[14];
    const double C8828 = vry[15];
    const double C8853 = vrz[0];
    const double C8854 = vrz[1];
    const double C8863 = vrz[2];
    const double C8872 = vrz[3];
    const double C8881 = vrz[4];
    const double C8882 = vrz[5];
    const double C8891 = vrz[6];
    const double C8900 = vrz[7];
    const double C8909 = vrz[8];
    const double C8910 = vrz[9];
    const double C8919 = vrz[10];
    const double C8928 = vrz[11];
    const double C8937 = vrz[12];
    const double C8954 = vrz[13];
    const double C8963 = vrz[14];
    const double C8988 = vrz[15];
    etx[0] = C8528;
    etx[1] = C8529;
    etx[2] = C8538;
    etx[3] = C8547;
    etx[4] = C8557;
    etx[5] = C8558;
    etx[6] = C8567;
    etx[7] = C8576;
    etx[8] = C8586;
    etx[9] = C8587;
    etx[10] = C8596;
    etx[11] = C8605;
    etx[12] = C8615;
    etx[13] = C8632;
    etx[14] = C8642;
    etx[15] = C8668;
    ety[0] = C8693;
    ety[1] = C8694;
    ety[2] = C8703;
    ety[3] = C8712;
    ety[4] = C8721;
    ety[5] = C8722;
    ety[6] = C8731;
    ety[7] = C8740;
    ety[8] = C8749;
    ety[9] = C8750;
    ety[10] = C8759;
    ety[11] = C8768;
    ety[12] = C8777;
    ety[13] = C8794;
    ety[14] = C8803;
    ety[15] = C8828;
    etz[0] = C8853;
    etz[1] = C8854;
    etz[2] = C8863;
    etz[3] = C8872;
    etz[4] = C8881;
    etz[5] = C8882;
    etz[6] = C8891;
    etz[7] = C8900;
    etz[8] = C8909;
    etz[9] = C8910;
    etz[10] = C8919;
    etz[11] = C8928;
    etz[12] = C8937;
    etz[13] = C8954;
    etz[14] = C8963;
    etz[15] = C8988;
}
