/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_3_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C3501 = p + q;
    const double C3628 = p * q;
    const double C3627 = std::pow(Pi, 2.5);
    const double C3626 = zP - zQ;
    const double C3625 = be * zAB;
    const double C3624 = yP - yQ;
    const double C3623 = be * yAB;
    const double C3622 = xP - xQ;
    const double C3621 = be * xAB;
    const double C3620 = 2 * p;
    const double C3629 = std::sqrt(C3501);
    const double C3635 = C3627 * kab;
    const double C3634 = C3626 * q;
    const double C3633 = C3624 * q;
    const double C3632 = C3622 * q;
    const double C3636 = C3628 * C3629;
    const double C3639 = C3635 * kcd;
    const double C2130 = (2. * C3639 * bs[1]) / C3636;
    const double C2410 = (2. * C3639 * bs[2]) / C3636;
    const double C2514 = (2. * C3639 * bs[3]) / C3636;
    const double C3499 = (2. * C3639 * bs[0]) / C3636;
    const double C3619 = C2130 * q;
    const double C3630 = C2410 * q;
    const double C2147 = -((C2130 * C3621) / p + (C2410 * C3632) / C3501);
    const double C2198 = -((C2130 * C3623) / p + (C2410 * C3633) / C3501);
    const double C2226 = -((C2130 * C3625) / p + (C2410 * C3634) / C3501);
    const double C2425 = -((C2410 * C3621) / p + (C2514 * C3632) / C3501);
    const double C2885 = -((C2410 * C3623) / p + (C2514 * C3633) / C3501);
    const double C2900 = -((C2410 * C3625) / p + (C2514 * C3634) / C3501);
    const double C888 = -((C3499 * C3621) / p + (C2130 * C3632) / C3501);
    const double C1055 = -((C3499 * C3623) / p + (C2130 * C3633) / C3501);
    const double C1188 = -((C3499 * C3625) / p + (C2130 * C3634) / C3501);
    const double C3631 = C3619 / C3501;
    const double C3637 = C3630 / C3501;
    const double C2269 = -((C2226 * C3623) / p + (C2900 * C3633) / C3501);
    const double C964 = -((C1055 * C3621) / p + (C2198 * C3632) / C3501);
    const double C1010 = -((C1188 * C3621) / p + (C2226 * C3632) / C3501);
    const double C1144 = -((C1188 * C3623) / p + (C2226 * C3633) / C3501);
    const double C3638 = C3499 - C3631;
    const double C3640 = C2130 - C3637;
    const double C3641 = C3638 / C3620;
    const double C3642 = C3640 / C3620;
    const double C871 = C3641 - ((C888 * C3621) / p + (C2147 * C3632) / C3501);
    const double C1099 =
        C3641 - ((C1055 * C3623) / p + (C2198 * C3633) / C3501);
    const double C1231 =
        C3641 - ((C1188 * C3625) / p + (C2226 * C3634) / C3501);
    const double C2163 =
        C3642 - ((C2147 * C3621) / p + (C2425 * C3632) / C3501);
    const double C2254 =
        C3642 - ((C2198 * C3623) / p + (C2885 * C3633) / C3501);
    const double C2297 =
        C3642 - ((C2226 * C3625) / p + (C2900 * C3634) / C3501);
    g[0] = C871;
    g[1] = C888;
    g[2] = C964;
    g[3] = C1010;
    g[4] = C1055;
    g[5] = C1099;
    g[6] = C1144;
    g[7] = C1188;
    g[8] = C1231;
    g[9] = C2130;
    g[10] = C2147;
    g[11] = C2163;
    g[12] = C2198;
    g[13] = C2226;
    g[14] = C2254;
    g[15] = C2269;
    g[16] = C2297;
    g[17] = C2410;
    g[18] = C2425;
    g[19] = C2514;
    g[20] = C2885;
    g[21] = C2900;
}
