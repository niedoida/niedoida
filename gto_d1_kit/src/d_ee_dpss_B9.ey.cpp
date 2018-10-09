/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_2(const double ae,
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
    eri_gradient_2100_2_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[16];
    double vry[16];
    double vrz[16];
    eri_gradient_2100_2_vr(ae,
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
    eri_gradient_2100_2_et(ae,
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
    eri_gradient_2100_2_hr(ae,
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
    const double C2735 = hrx[0];
    const double C3056 = hrx[1];
    const double C3378 = hrx[2];
    const double C3700 = hrx[3];
    const double C4022 = hrx[4];
    const double C4344 = hrx[5];
    const double C4666 = hrx[6];
    const double C4988 = hrx[7];
    const double C5310 = hrx[8];
    const double C5632 = hrx[9];
    const double C5954 = hrx[10];
    const double C6276 = hrx[11];
    const double C6598 = hrx[12];
    const double C6920 = hrx[13];
    const double C7242 = hrx[14];
    const double C7564 = hrx[15];
    const double C7886 = hrx[16];
    const double C8208 = hrx[17];
    const double C2841 = hry[0];
    const double C3163 = hry[1];
    const double C3485 = hry[2];
    const double C3807 = hry[3];
    const double C4129 = hry[4];
    const double C4451 = hry[5];
    const double C4773 = hry[6];
    const double C5095 = hry[7];
    const double C5417 = hry[8];
    const double C5739 = hry[9];
    const double C6061 = hry[10];
    const double C6383 = hry[11];
    const double C6705 = hry[12];
    const double C7027 = hry[13];
    const double C7349 = hry[14];
    const double C7671 = hry[15];
    const double C7993 = hry[16];
    const double C8315 = hry[17];
    const double C2948 = hrz[0];
    const double C3270 = hrz[1];
    const double C3592 = hrz[2];
    const double C3914 = hrz[3];
    const double C4236 = hrz[4];
    const double C4558 = hrz[5];
    const double C4880 = hrz[6];
    const double C5202 = hrz[7];
    const double C5524 = hrz[8];
    const double C5846 = hrz[9];
    const double C6168 = hrz[10];
    const double C6490 = hrz[11];
    const double C6812 = hrz[12];
    const double C7134 = hrz[13];
    const double C7456 = hrz[14];
    const double C7778 = hrz[15];
    const double C8100 = hrz[16];
    const double C8422 = hrz[17];
    gx[0] += std::sqrt(3.0) * C5632;
    gy[0] += std::sqrt(3.0) * C5739;
    gz[0] += std::sqrt(3.0) * C5846;
    gx[1] += std::sqrt(3.0) * C5954;
    gy[1] += std::sqrt(3.0) * C6061;
    gz[1] += std::sqrt(3.0) * C6168;
    gx[2] += std::sqrt(3.0) * C6276;
    gy[2] += std::sqrt(3.0) * C6383;
    gz[2] += std::sqrt(3.0) * C6490;
    gx[3] += std::sqrt(3.0) * C7564;
    gy[3] += std::sqrt(3.0) * C7671;
    gz[3] += std::sqrt(3.0) * C7778;
    gx[4] += std::sqrt(3.0) * C7886;
    gy[4] += std::sqrt(3.0) * C7993;
    gz[4] += std::sqrt(3.0) * C8100;
    gx[5] += std::sqrt(3.0) * C8208;
    gy[5] += std::sqrt(3.0) * C8315;
    gz[5] += std::sqrt(3.0) * C8422;
    gx[6] += -0.5 * C2735 - 0.5 * C3700 + C4666;
    gy[6] += -0.5 * C2841 - 0.5 * C3807 + C4773;
    gz[6] += -0.5 * C2948 - 0.5 * C3914 + C4880;
    gx[7] += -0.5 * C3056 - 0.5 * C4022 + C4988;
    gy[7] += -0.5 * C3163 - 0.5 * C4129 + C5095;
    gz[7] += -0.5 * C3270 - 0.5 * C4236 + C5202;
    gx[8] += -0.5 * C3378 - 0.5 * C4344 + C5310;
    gy[8] += -0.5 * C3485 - 0.5 * C4451 + C5417;
    gz[8] += -0.5 * C3592 - 0.5 * C4558 + C5524;
    gx[9] += std::sqrt(3.0) * C6598;
    gy[9] += std::sqrt(3.0) * C6705;
    gz[9] += std::sqrt(3.0) * C6812;
    gx[10] += std::sqrt(3.0) * C6920;
    gy[10] += std::sqrt(3.0) * C7027;
    gz[10] += std::sqrt(3.0) * C7134;
    gx[11] += std::sqrt(3.0) * C7242;
    gy[11] += std::sqrt(3.0) * C7349;
    gz[11] += std::sqrt(3.0) * C7456;
    gx[12] += std::sqrt(0.75) * C2735 - std::sqrt(0.75) * C3700;
    gy[12] += std::sqrt(0.75) * C2841 - std::sqrt(0.75) * C3807;
    gz[12] += std::sqrt(0.75) * C2948 - std::sqrt(0.75) * C3914;
    gx[13] += std::sqrt(0.75) * C3056 - std::sqrt(0.75) * C4022;
    gy[13] += std::sqrt(0.75) * C3163 - std::sqrt(0.75) * C4129;
    gz[13] += std::sqrt(0.75) * C3270 - std::sqrt(0.75) * C4236;
    gx[14] += std::sqrt(0.75) * C3378 - std::sqrt(0.75) * C4344;
    gy[14] += std::sqrt(0.75) * C3485 - std::sqrt(0.75) * C4451;
    gz[14] += std::sqrt(0.75) * C3592 - std::sqrt(0.75) * C4558;
}
