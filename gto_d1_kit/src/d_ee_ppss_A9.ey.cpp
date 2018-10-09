/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_1(const double ae,
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
    double g[9];
    eri_gradient_1010_1_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[10];
    double vry[10];
    double vrz[10];
    eri_gradient_1010_1_vr(ae,
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
    double etx[9];
    double ety[9];
    double etz[9];
    eri_gradient_1010_1_et(ae,
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
    double hrx[9];
    double hry[9];
    double hrz[9];
    eri_gradient_1010_1_hr(ae,
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
    const double C1130 = hrx[0];
    const double C1355 = hrx[1];
    const double C1581 = hrx[2];
    const double C1807 = hrx[3];
    const double C2033 = hrx[4];
    const double C2259 = hrx[5];
    const double C2485 = hrx[6];
    const double C2711 = hrx[7];
    const double C2937 = hrx[8];
    const double C1204 = hry[0];
    const double C1430 = hry[1];
    const double C1656 = hry[2];
    const double C1882 = hry[3];
    const double C2108 = hry[4];
    const double C2334 = hry[5];
    const double C2560 = hry[6];
    const double C2786 = hry[7];
    const double C3012 = hry[8];
    const double C1279 = hrz[0];
    const double C1505 = hrz[1];
    const double C1731 = hrz[2];
    const double C1957 = hrz[3];
    const double C2183 = hrz[4];
    const double C2409 = hrz[5];
    const double C2635 = hrz[6];
    const double C2861 = hrz[7];
    const double C3087 = hrz[8];
    gx[0] += C1130;
    gy[0] += C1204;
    gz[0] += C1279;
    gx[1] += C1355;
    gy[1] += C1430;
    gz[1] += C1505;
    gx[2] += C1581;
    gy[2] += C1656;
    gz[2] += C1731;
    gx[3] += C1807;
    gy[3] += C1882;
    gz[3] += C1957;
    gx[4] += C2033;
    gy[4] += C2108;
    gz[4] += C2183;
    gx[5] += C2259;
    gy[5] += C2334;
    gz[5] += C2409;
    gx[6] += C2485;
    gy[6] += C2560;
    gz[6] += C2635;
    gx[7] += C2711;
    gy[7] += C2786;
    gz[7] += C2861;
    gx[8] += C2937;
    gy[8] += C3012;
    gz[8] += C3087;
}
