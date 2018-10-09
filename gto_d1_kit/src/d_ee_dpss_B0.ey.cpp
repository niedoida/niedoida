/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_2_ints(const double ae,
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
    const double C2545 = p + q;
    const double C2672 = p * q;
    const double C2671 = std::pow(Pi, 2.5);
    const double C2670 = zP - zQ;
    const double C2669 = be * zAB;
    const double C2668 = yP - yQ;
    const double C2667 = be * yAB;
    const double C2666 = xP - xQ;
    const double C2665 = be * xAB;
    const double C2664 = 2 * p;
    const double C2673 = std::sqrt(C2545);
    const double C2679 = C2671 * kab;
    const double C2678 = C2670 * q;
    const double C2677 = C2668 * q;
    const double C2676 = C2666 * q;
    const double C2680 = C2672 * C2673;
    const double C2683 = C2679 * kcd;
    const double C1085 = (2. * C2683 * bs[0]) / C2680;
    const double C1086 = (2. * C2683 * bs[1]) / C2680;
    const double C1353 = (2. * C2683 * bs[2]) / C2680;
    const double C1478 = (2. * C2683 * bs[3]) / C2680;
    const double C2663 = C1086 * q;
    const double C1063 = -((C1085 * C2665) / p + (C1086 * C2676) / C2545);
    const double C1291 = -((C1085 * C2667) / p + (C1086 * C2677) / C2545);
    const double C1323 = -((C1085 * C2669) / p + (C1086 * C2678) / C2545);
    const double C2674 = C1353 * q;
    const double C1064 = -((C1086 * C2665) / p + (C1353 * C2676) / C2545);
    const double C1292 = -((C1086 * C2667) / p + (C1353 * C2677) / C2545);
    const double C1324 = -((C1086 * C2669) / p + (C1353 * C2678) / C2545);
    const double C1383 = -((C1353 * C2665) / p + (C1478 * C2676) / C2545);
    const double C1862 = -((C1353 * C2667) / p + (C1478 * C2677) / C2545);
    const double C1907 = -((C1353 * C2669) / p + (C1478 * C2678) / C2545);
    const double C2675 = C2663 / C2545;
    const double C2681 = C2674 / C2545;
    const double C328 = -((C1291 * C2665) / p + (C1292 * C2676) / C2545);
    const double C373 = -((C1323 * C2665) / p + (C1324 * C2676) / C2545);
    const double C417 = -((C1323 * C2667) / p + (C1324 * C2677) / C2545);
    const double C1307 = -((C1324 * C2667) / p + (C1907 * C2677) / C2545);
    const double C2682 = C1085 - C2675;
    const double C2684 = C1086 - C2681;
    const double C2685 = C2682 / C2664;
    const double C2686 = C2684 / C2664;
    const double C184 = C2685 - ((C1063 * C2665) / p + (C1064 * C2676) / C2545);
    const double C232 = C2685 - ((C1291 * C2667) / p + (C1292 * C2677) / C2545);
    const double C280 = C2685 - ((C1323 * C2669) / p + (C1324 * C2678) / C2545);
    const double C1101 =
        C2686 - ((C1064 * C2665) / p + (C1383 * C2676) / C2545);
    const double C1160 =
        C2686 - ((C1292 * C2667) / p + (C1862 * C2677) / C2545);
    const double C1233 =
        C2686 - ((C1324 * C2669) / p + (C1907 * C2678) / C2545);
    g[0] = C184;
    g[1] = C232;
    g[2] = C280;
    g[3] = C328;
    g[4] = C373;
    g[5] = C417;
    g[6] = C1063;
    g[7] = C1064;
    g[8] = C1085;
    g[9] = C1086;
    g[10] = C1101;
    g[11] = C1160;
    g[12] = C1233;
    g[13] = C1291;
    g[14] = C1292;
    g[15] = C1307;
    g[16] = C1323;
    g[17] = C1324;
    g[18] = C1353;
    g[19] = C1383;
    g[20] = C1478;
    g[21] = C1862;
    g[22] = C1907;
}
