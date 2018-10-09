/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_1(const double ae,
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
    double g[23];
    eri_gradient_2100_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[16];
    double vry[16];
    double vrz[16];
    eri_gradient_2100_1_vr(ae,
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
    eri_gradient_2100_1_et(ae,
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
    eri_gradient_2100_1_hr(ae,
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
    const double C2725 = hrx[0];
    const double C3046 = hrx[1];
    const double C3368 = hrx[2];
    const double C3690 = hrx[3];
    const double C4012 = hrx[4];
    const double C4334 = hrx[5];
    const double C4656 = hrx[6];
    const double C4978 = hrx[7];
    const double C5300 = hrx[8];
    const double C5622 = hrx[9];
    const double C5944 = hrx[10];
    const double C6266 = hrx[11];
    const double C6588 = hrx[12];
    const double C6910 = hrx[13];
    const double C7232 = hrx[14];
    const double C7554 = hrx[15];
    const double C7876 = hrx[16];
    const double C8198 = hrx[17];
    const double C2831 = hry[0];
    const double C3153 = hry[1];
    const double C3475 = hry[2];
    const double C3797 = hry[3];
    const double C4119 = hry[4];
    const double C4441 = hry[5];
    const double C4763 = hry[6];
    const double C5085 = hry[7];
    const double C5407 = hry[8];
    const double C5729 = hry[9];
    const double C6051 = hry[10];
    const double C6373 = hry[11];
    const double C6695 = hry[12];
    const double C7017 = hry[13];
    const double C7339 = hry[14];
    const double C7661 = hry[15];
    const double C7983 = hry[16];
    const double C8305 = hry[17];
    const double C2938 = hrz[0];
    const double C3260 = hrz[1];
    const double C3582 = hrz[2];
    const double C3904 = hrz[3];
    const double C4226 = hrz[4];
    const double C4548 = hrz[5];
    const double C4870 = hrz[6];
    const double C5192 = hrz[7];
    const double C5514 = hrz[8];
    const double C5836 = hrz[9];
    const double C6158 = hrz[10];
    const double C6480 = hrz[11];
    const double C6802 = hrz[12];
    const double C7124 = hrz[13];
    const double C7446 = hrz[14];
    const double C7768 = hrz[15];
    const double C8090 = hrz[16];
    const double C8412 = hrz[17];
    gx[0] += std::sqrt(3.0) * C5622;
    gy[0] += std::sqrt(3.0) * C5729;
    gz[0] += std::sqrt(3.0) * C5836;
    gx[1] += std::sqrt(3.0) * C5944;
    gy[1] += std::sqrt(3.0) * C6051;
    gz[1] += std::sqrt(3.0) * C6158;
    gx[2] += std::sqrt(3.0) * C6266;
    gy[2] += std::sqrt(3.0) * C6373;
    gz[2] += std::sqrt(3.0) * C6480;
    gx[3] += std::sqrt(3.0) * C7554;
    gy[3] += std::sqrt(3.0) * C7661;
    gz[3] += std::sqrt(3.0) * C7768;
    gx[4] += std::sqrt(3.0) * C7876;
    gy[4] += std::sqrt(3.0) * C7983;
    gz[4] += std::sqrt(3.0) * C8090;
    gx[5] += std::sqrt(3.0) * C8198;
    gy[5] += std::sqrt(3.0) * C8305;
    gz[5] += std::sqrt(3.0) * C8412;
    gx[6] += -0.5 * C2725 - 0.5 * C3690 + C4656;
    gy[6] += -0.5 * C2831 - 0.5 * C3797 + C4763;
    gz[6] += -0.5 * C2938 - 0.5 * C3904 + C4870;
    gx[7] += -0.5 * C3046 - 0.5 * C4012 + C4978;
    gy[7] += -0.5 * C3153 - 0.5 * C4119 + C5085;
    gz[7] += -0.5 * C3260 - 0.5 * C4226 + C5192;
    gx[8] += -0.5 * C3368 - 0.5 * C4334 + C5300;
    gy[8] += -0.5 * C3475 - 0.5 * C4441 + C5407;
    gz[8] += -0.5 * C3582 - 0.5 * C4548 + C5514;
    gx[9] += std::sqrt(3.0) * C6588;
    gy[9] += std::sqrt(3.0) * C6695;
    gz[9] += std::sqrt(3.0) * C6802;
    gx[10] += std::sqrt(3.0) * C6910;
    gy[10] += std::sqrt(3.0) * C7017;
    gz[10] += std::sqrt(3.0) * C7124;
    gx[11] += std::sqrt(3.0) * C7232;
    gy[11] += std::sqrt(3.0) * C7339;
    gz[11] += std::sqrt(3.0) * C7446;
    gx[12] += std::sqrt(0.75) * C2725 - std::sqrt(0.75) * C3690;
    gy[12] += std::sqrt(0.75) * C2831 - std::sqrt(0.75) * C3797;
    gz[12] += std::sqrt(0.75) * C2938 - std::sqrt(0.75) * C3904;
    gx[13] += std::sqrt(0.75) * C3046 - std::sqrt(0.75) * C4012;
    gy[13] += std::sqrt(0.75) * C3153 - std::sqrt(0.75) * C4119;
    gz[13] += std::sqrt(0.75) * C3260 - std::sqrt(0.75) * C4226;
    gx[14] += std::sqrt(0.75) * C3368 - std::sqrt(0.75) * C4334;
    gy[14] += std::sqrt(0.75) * C3475 - std::sqrt(0.75) * C4441;
    gz[14] += std::sqrt(0.75) * C3582 - std::sqrt(0.75) * C4548;
}
