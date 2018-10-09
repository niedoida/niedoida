/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_1_ints(const double ae,
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
    const double C2535 = p + q;
    const double C2662 = p * q;
    const double C2661 = std::pow(Pi, 2.5);
    const double C2660 = zP - zQ;
    const double C2659 = be * zAB;
    const double C2658 = yP - yQ;
    const double C2657 = be * yAB;
    const double C2656 = xP - xQ;
    const double C2655 = be * xAB;
    const double C2654 = 2 * p;
    const double C2663 = std::sqrt(C2535);
    const double C2669 = C2661 * kab;
    const double C2668 = C2660 * q;
    const double C2667 = C2658 * q;
    const double C2666 = C2656 * q;
    const double C2670 = C2662 * C2663;
    const double C2673 = C2669 * kcd;
    const double C1057 = (2. * C2673 * bs[0]) / C2670;
    const double C1058 = (2. * C2673 * bs[1]) / C2670;
    const double C1361 = (2. * C2673 * bs[2]) / C2670;
    const double C1472 = (2. * C2673 * bs[3]) / C2670;
    const double C2653 = C1058 * q;
    const double C1077 = -((C1057 * C2655) / p + (C1058 * C2666) / C2535);
    const double C1285 = -((C1057 * C2657) / p + (C1058 * C2667) / C2535);
    const double C1317 = -((C1057 * C2659) / p + (C1058 * C2668) / C2535);
    const double C2664 = C1361 * q;
    const double C1078 = -((C1058 * C2655) / p + (C1361 * C2666) / C2535);
    const double C1286 = -((C1058 * C2657) / p + (C1361 * C2667) / C2535);
    const double C1318 = -((C1058 * C2659) / p + (C1361 * C2668) / C2535);
    const double C1377 = -((C1361 * C2655) / p + (C1472 * C2666) / C2535);
    const double C1856 = -((C1361 * C2657) / p + (C1472 * C2667) / C2535);
    const double C1901 = -((C1361 * C2659) / p + (C1472 * C2668) / C2535);
    const double C2665 = C2653 / C2535;
    const double C2671 = C2664 / C2535;
    const double C328 = -((C1285 * C2655) / p + (C1286 * C2666) / C2535);
    const double C373 = -((C1317 * C2655) / p + (C1318 * C2666) / C2535);
    const double C417 = -((C1317 * C2657) / p + (C1318 * C2667) / C2535);
    const double C1301 = -((C1318 * C2657) / p + (C1901 * C2667) / C2535);
    const double C2672 = C1057 - C2665;
    const double C2674 = C1058 - C2671;
    const double C2675 = C2672 / C2654;
    const double C2676 = C2674 / C2654;
    const double C184 = C2675 - ((C1077 * C2655) / p + (C1078 * C2666) / C2535);
    const double C232 = C2675 - ((C1285 * C2657) / p + (C1286 * C2667) / C2535);
    const double C280 = C2675 - ((C1317 * C2659) / p + (C1318 * C2668) / C2535);
    const double C1095 =
        C2676 - ((C1078 * C2655) / p + (C1377 * C2666) / C2535);
    const double C1154 =
        C2676 - ((C1286 * C2657) / p + (C1856 * C2667) / C2535);
    const double C1227 =
        C2676 - ((C1318 * C2659) / p + (C1901 * C2668) / C2535);
    g[0] = C184;
    g[1] = C232;
    g[2] = C280;
    g[3] = C328;
    g[4] = C373;
    g[5] = C417;
    g[6] = C1057;
    g[7] = C1058;
    g[8] = C1077;
    g[9] = C1078;
    g[10] = C1095;
    g[11] = C1154;
    g[12] = C1227;
    g[13] = C1285;
    g[14] = C1286;
    g[15] = C1301;
    g[16] = C1317;
    g[17] = C1318;
    g[18] = C1361;
    g[19] = C1377;
    g[20] = C1472;
    g[21] = C1856;
    g[22] = C1901;
}
