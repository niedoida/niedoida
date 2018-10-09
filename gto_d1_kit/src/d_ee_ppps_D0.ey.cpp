/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_4_ints(const double ae,
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
    const double C3507 = p + q;
    const double C3634 = p * q;
    const double C3633 = std::pow(Pi, 2.5);
    const double C3632 = zP - zQ;
    const double C3631 = be * zAB;
    const double C3630 = yP - yQ;
    const double C3629 = be * yAB;
    const double C3628 = xP - xQ;
    const double C3627 = be * xAB;
    const double C3626 = 2 * p;
    const double C3635 = std::sqrt(C3507);
    const double C3641 = C3633 * kab;
    const double C3640 = C3632 * q;
    const double C3639 = C3630 * q;
    const double C3638 = C3628 * q;
    const double C3642 = C3634 * C3635;
    const double C3645 = C3641 * kcd;
    const double C2155 = (2. * C3645 * bs[1]) / C3642;
    const double C2409 = (2. * C3645 * bs[2]) / C3642;
    const double C2520 = (2. * C3645 * bs[3]) / C3642;
    const double C3505 = (2. * C3645 * bs[0]) / C3642;
    const double C3625 = C2155 * q;
    const double C3636 = C2409 * q;
    const double C2136 = -((C2155 * C3627) / p + (C2409 * C3638) / C3507);
    const double C2204 = -((C2155 * C3629) / p + (C2409 * C3639) / C3507);
    const double C2232 = -((C2155 * C3631) / p + (C2409 * C3640) / C3507);
    const double C2431 = -((C2409 * C3627) / p + (C2520 * C3638) / C3507);
    const double C2891 = -((C2409 * C3629) / p + (C2520 * C3639) / C3507);
    const double C2906 = -((C2409 * C3631) / p + (C2520 * C3640) / C3507);
    const double C888 = -((C3505 * C3627) / p + (C2155 * C3638) / C3507);
    const double C1055 = -((C3505 * C3629) / p + (C2155 * C3639) / C3507);
    const double C1188 = -((C3505 * C3631) / p + (C2155 * C3640) / C3507);
    const double C3637 = C3625 / C3507;
    const double C3643 = C3636 / C3507;
    const double C2275 = -((C2232 * C3629) / p + (C2906 * C3639) / C3507);
    const double C964 = -((C1055 * C3627) / p + (C2204 * C3638) / C3507);
    const double C1010 = -((C1188 * C3627) / p + (C2232 * C3638) / C3507);
    const double C1144 = -((C1188 * C3629) / p + (C2232 * C3639) / C3507);
    const double C3644 = C3505 - C3637;
    const double C3646 = C2155 - C3643;
    const double C3647 = C3644 / C3626;
    const double C3648 = C3646 / C3626;
    const double C871 = C3647 - ((C888 * C3627) / p + (C2136 * C3638) / C3507);
    const double C1099 =
        C3647 - ((C1055 * C3629) / p + (C2204 * C3639) / C3507);
    const double C1231 =
        C3647 - ((C1188 * C3631) / p + (C2232 * C3640) / C3507);
    const double C2169 =
        C3648 - ((C2136 * C3627) / p + (C2431 * C3638) / C3507);
    const double C2260 =
        C3648 - ((C2204 * C3629) / p + (C2891 * C3639) / C3507);
    const double C2303 =
        C3648 - ((C2232 * C3631) / p + (C2906 * C3640) / C3507);
    g[0] = C871;
    g[1] = C888;
    g[2] = C964;
    g[3] = C1010;
    g[4] = C1055;
    g[5] = C1099;
    g[6] = C1144;
    g[7] = C1188;
    g[8] = C1231;
    g[9] = C2136;
    g[10] = C2155;
    g[11] = C2169;
    g[12] = C2204;
    g[13] = C2232;
    g[14] = C2260;
    g[15] = C2275;
    g[16] = C2303;
    g[17] = C2409;
    g[18] = C2431;
    g[19] = C2520;
    g[20] = C2891;
    g[21] = C2906;
}
