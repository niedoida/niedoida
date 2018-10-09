/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_3(const double ae,
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
    double g[5];
    eri_gradient_2000_3_ints(
        ae, xA, yA, zA, be, xB, yB, zB, ce, xC, yC, zC, de, xD, yD, zD, bs, g);
    double vrx[6];
    double vry[6];
    double vrz[6];
    eri_gradient_2000_3_vr(ae,
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
    double etx[6];
    double ety[6];
    double etz[6];
    eri_gradient_2000_3_et(ae,
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
    double hrx[6];
    double hry[6];
    double hrz[6];
    eri_gradient_2000_3_hr(ae,
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
    const double C44 = hry[0];
    const double C51 = hry[1];
    const double C58 = hry[2];
    const double C65 = hry[3];
    const double C72 = hry[4];
    const double C79 = hry[5];
    const double C46 = hrz[0];
    const double C53 = hrz[1];
    const double C60 = hrz[2];
    const double C67 = hrz[3];
    const double C74 = hrz[4];
    const double C81 = hrz[5];
    gx[0] += std::sqrt(3.0) * C63;
    gy[0] += std::sqrt(3.0) * C65;
    gz[0] += std::sqrt(3.0) * C67;
    gx[1] += std::sqrt(3.0) * C77;
    gy[1] += std::sqrt(3.0) * C79;
    gz[1] += std::sqrt(3.0) * C81;
    gx[2] += -0.5 * C40 - 0.5 * C49 + C56;
    gy[2] += -0.5 * C44 - 0.5 * C51 + C58;
    gz[2] += -0.5 * C46 - 0.5 * C53 + C60;
    gx[3] += std::sqrt(3.0) * C70;
    gy[3] += std::sqrt(3.0) * C72;
    gz[3] += std::sqrt(3.0) * C74;
    gx[4] += std::sqrt(0.75) * C40 - std::sqrt(0.75) * C49;
    gy[4] += std::sqrt(0.75) * C44 - std::sqrt(0.75) * C51;
    gz[4] += std::sqrt(0.75) * C46 - std::sqrt(0.75) * C53;
}
