/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_4(const double ae,
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
    double g[19];
    eri_gradient_2010_4_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[19];
    double vry[19];
    double vrz[19];
    eri_gradient_2010_4_vr(ae,
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
    double etx[18];
    double ety[18];
    double etz[18];
    eri_gradient_2010_4_et(ae,
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
    eri_gradient_2010_4_hr(ae,
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
    const double C40 = hrx[0];
    const double C49 = hrx[1];
    const double C56 = hrx[2];
    const double C63 = hrx[3];
    const double C70 = hrx[4];
    const double C77 = hrx[5];
    const double C84 = hrx[6];
    const double C91 = hrx[7];
    const double C98 = hrx[8];
    const double C105 = hrx[9];
    const double C112 = hrx[10];
    const double C119 = hrx[11];
    const double C126 = hrx[12];
    const double C133 = hrx[13];
    const double C140 = hrx[14];
    const double C147 = hrx[15];
    const double C154 = hrx[16];
    const double C161 = hrx[17];
    const double C44 = hry[0];
    const double C51 = hry[1];
    const double C58 = hry[2];
    const double C65 = hry[3];
    const double C72 = hry[4];
    const double C79 = hry[5];
    const double C86 = hry[6];
    const double C93 = hry[7];
    const double C100 = hry[8];
    const double C107 = hry[9];
    const double C114 = hry[10];
    const double C121 = hry[11];
    const double C128 = hry[12];
    const double C135 = hry[13];
    const double C142 = hry[14];
    const double C149 = hry[15];
    const double C156 = hry[16];
    const double C163 = hry[17];
    const double C46 = hrz[0];
    const double C53 = hrz[1];
    const double C60 = hrz[2];
    const double C67 = hrz[3];
    const double C74 = hrz[4];
    const double C81 = hrz[5];
    const double C88 = hrz[6];
    const double C95 = hrz[7];
    const double C102 = hrz[8];
    const double C109 = hrz[9];
    const double C116 = hrz[10];
    const double C123 = hrz[11];
    const double C130 = hrz[12];
    const double C137 = hrz[13];
    const double C144 = hrz[14];
    const double C151 = hrz[15];
    const double C158 = hrz[16];
    const double C165 = hrz[17];
    gx[0] += std::sqrt(3.0) * C105;
    gy[0] += std::sqrt(3.0) * C107;
    gz[0] += std::sqrt(3.0) * C109;
    gx[1] += std::sqrt(3.0) * C112;
    gy[1] += std::sqrt(3.0) * C114;
    gz[1] += std::sqrt(3.0) * C116;
    gx[2] += std::sqrt(3.0) * C119;
    gy[2] += std::sqrt(3.0) * C121;
    gz[2] += std::sqrt(3.0) * C123;
    gx[3] += std::sqrt(3.0) * C147;
    gy[3] += std::sqrt(3.0) * C149;
    gz[3] += std::sqrt(3.0) * C151;
    gx[4] += std::sqrt(3.0) * C154;
    gy[4] += std::sqrt(3.0) * C156;
    gz[4] += std::sqrt(3.0) * C158;
    gx[5] += std::sqrt(3.0) * C161;
    gy[5] += std::sqrt(3.0) * C163;
    gz[5] += std::sqrt(3.0) * C165;
    gx[6] += -0.5 * C40 - 0.5 * C63 + C84;
    gy[6] += -0.5 * C44 - 0.5 * C65 + C86;
    gz[6] += -0.5 * C46 - 0.5 * C67 + C88;
    gx[7] += -0.5 * C49 - 0.5 * C70 + C91;
    gy[7] += -0.5 * C51 - 0.5 * C72 + C93;
    gz[7] += -0.5 * C53 - 0.5 * C74 + C95;
    gx[8] += -0.5 * C56 - 0.5 * C77 + C98;
    gy[8] += -0.5 * C58 - 0.5 * C79 + C100;
    gz[8] += -0.5 * C60 - 0.5 * C81 + C102;
    gx[9] += std::sqrt(3.0) * C126;
    gy[9] += std::sqrt(3.0) * C128;
    gz[9] += std::sqrt(3.0) * C130;
    gx[10] += std::sqrt(3.0) * C133;
    gy[10] += std::sqrt(3.0) * C135;
    gz[10] += std::sqrt(3.0) * C137;
    gx[11] += std::sqrt(3.0) * C140;
    gy[11] += std::sqrt(3.0) * C142;
    gz[11] += std::sqrt(3.0) * C144;
    gx[12] += std::sqrt(0.75) * C40 - std::sqrt(0.75) * C63;
    gy[12] += std::sqrt(0.75) * C44 - std::sqrt(0.75) * C65;
    gz[12] += std::sqrt(0.75) * C46 - std::sqrt(0.75) * C67;
    gx[13] += std::sqrt(0.75) * C49 - std::sqrt(0.75) * C70;
    gy[13] += std::sqrt(0.75) * C51 - std::sqrt(0.75) * C72;
    gz[13] += std::sqrt(0.75) * C53 - std::sqrt(0.75) * C74;
    gx[14] += std::sqrt(0.75) * C56 - std::sqrt(0.75) * C77;
    gy[14] += std::sqrt(0.75) * C58 - std::sqrt(0.75) * C79;
    gz[14] += std::sqrt(0.75) * C60 - std::sqrt(0.75) * C81;
}
