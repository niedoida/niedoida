/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_3(const double ae,
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
    double g[13];
    eri_gradient_2100_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[16];
    double vry[16];
    double vrz[16];
    eri_gradient_2100_3_vr(ae,
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
    double etx[16];
    double ety[16];
    double etz[16];
    eri_gradient_2100_3_et(ae,
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
    double hrx[18];
    double hry[18];
    double hrz[18];
    eri_gradient_2100_3_hr(ae,
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
    const double C2623 = hrx[0];
    const double C2944 = hrx[1];
    const double C3266 = hrx[2];
    const double C3588 = hrx[3];
    const double C3910 = hrx[4];
    const double C4232 = hrx[5];
    const double C4554 = hrx[6];
    const double C4876 = hrx[7];
    const double C5198 = hrx[8];
    const double C5520 = hrx[9];
    const double C5842 = hrx[10];
    const double C6164 = hrx[11];
    const double C6486 = hrx[12];
    const double C6808 = hrx[13];
    const double C7130 = hrx[14];
    const double C7452 = hrx[15];
    const double C7774 = hrx[16];
    const double C8096 = hrx[17];
    const double C2729 = hry[0];
    const double C3051 = hry[1];
    const double C3373 = hry[2];
    const double C3695 = hry[3];
    const double C4017 = hry[4];
    const double C4339 = hry[5];
    const double C4661 = hry[6];
    const double C4983 = hry[7];
    const double C5305 = hry[8];
    const double C5627 = hry[9];
    const double C5949 = hry[10];
    const double C6271 = hry[11];
    const double C6593 = hry[12];
    const double C6915 = hry[13];
    const double C7237 = hry[14];
    const double C7559 = hry[15];
    const double C7881 = hry[16];
    const double C8203 = hry[17];
    const double C2836 = hrz[0];
    const double C3158 = hrz[1];
    const double C3480 = hrz[2];
    const double C3802 = hrz[3];
    const double C4124 = hrz[4];
    const double C4446 = hrz[5];
    const double C4768 = hrz[6];
    const double C5090 = hrz[7];
    const double C5412 = hrz[8];
    const double C5734 = hrz[9];
    const double C6056 = hrz[10];
    const double C6378 = hrz[11];
    const double C6700 = hrz[12];
    const double C7022 = hrz[13];
    const double C7344 = hrz[14];
    const double C7666 = hrz[15];
    const double C7988 = hrz[16];
    const double C8310 = hrz[17];
    gx[0] += std::sqrt(3.0) * C5520;
    gy[0] += std::sqrt(3.0) * C5627;
    gz[0] += std::sqrt(3.0) * C5734;
    gx[1] += std::sqrt(3.0) * C5842;
    gy[1] += std::sqrt(3.0) * C5949;
    gz[1] += std::sqrt(3.0) * C6056;
    gx[2] += std::sqrt(3.0) * C6164;
    gy[2] += std::sqrt(3.0) * C6271;
    gz[2] += std::sqrt(3.0) * C6378;
    gx[3] += std::sqrt(3.0) * C7452;
    gy[3] += std::sqrt(3.0) * C7559;
    gz[3] += std::sqrt(3.0) * C7666;
    gx[4] += std::sqrt(3.0) * C7774;
    gy[4] += std::sqrt(3.0) * C7881;
    gz[4] += std::sqrt(3.0) * C7988;
    gx[5] += std::sqrt(3.0) * C8096;
    gy[5] += std::sqrt(3.0) * C8203;
    gz[5] += std::sqrt(3.0) * C8310;
    gx[6] += -0.5 * C2623 - 0.5 * C3588 + C4554;
    gy[6] += -0.5 * C2729 - 0.5 * C3695 + C4661;
    gz[6] += -0.5 * C2836 - 0.5 * C3802 + C4768;
    gx[7] += -0.5 * C2944 - 0.5 * C3910 + C4876;
    gy[7] += -0.5 * C3051 - 0.5 * C4017 + C4983;
    gz[7] += -0.5 * C3158 - 0.5 * C4124 + C5090;
    gx[8] += -0.5 * C3266 - 0.5 * C4232 + C5198;
    gy[8] += -0.5 * C3373 - 0.5 * C4339 + C5305;
    gz[8] += -0.5 * C3480 - 0.5 * C4446 + C5412;
    gx[9] += std::sqrt(3.0) * C6486;
    gy[9] += std::sqrt(3.0) * C6593;
    gz[9] += std::sqrt(3.0) * C6700;
    gx[10] += std::sqrt(3.0) * C6808;
    gy[10] += std::sqrt(3.0) * C6915;
    gz[10] += std::sqrt(3.0) * C7022;
    gx[11] += std::sqrt(3.0) * C7130;
    gy[11] += std::sqrt(3.0) * C7237;
    gz[11] += std::sqrt(3.0) * C7344;
    gx[12] += std::sqrt(0.75) * C2623 - std::sqrt(0.75) * C3588;
    gy[12] += std::sqrt(0.75) * C2729 - std::sqrt(0.75) * C3695;
    gz[12] += std::sqrt(0.75) * C2836 - std::sqrt(0.75) * C3802;
    gx[13] += std::sqrt(0.75) * C2944 - std::sqrt(0.75) * C3910;
    gy[13] += std::sqrt(0.75) * C3051 - std::sqrt(0.75) * C4017;
    gz[13] += std::sqrt(0.75) * C3158 - std::sqrt(0.75) * C4124;
    gx[14] += std::sqrt(0.75) * C3266 - std::sqrt(0.75) * C4232;
    gy[14] += std::sqrt(0.75) * C3373 - std::sqrt(0.75) * C4339;
    gz[14] += std::sqrt(0.75) * C3480 - std::sqrt(0.75) * C4446;
}
