/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_3_ints(const double ae,
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
    const double C2431 = p + q;
    const double C2560 = p * q;
    const double C2559 = std::pow(Pi, 2.5);
    const double C2558 = zP - zQ;
    const double C2557 = be * zAB;
    const double C2556 = yP - yQ;
    const double C2555 = be * yAB;
    const double C2554 = xP - xQ;
    const double C2553 = be * xAB;
    const double C2552 = 2 * p;
    const double C2561 = std::sqrt(C2431);
    const double C2567 = C2559 * kab;
    const double C2566 = C2558 * q;
    const double C2565 = C2556 * q;
    const double C2564 = C2554 * q;
    const double C2568 = C2560 * C2561;
    const double C2571 = C2567 * kcd;
    const double C1056 = (2. * C2571 * bs[1]) / C2568;
    const double C1337 = (2. * C2571 * bs[2]) / C2568;
    const double C1441 = (2. * C2571 * bs[3]) / C2568;
    const double C2428 = (2. * C2571 * bs[0]) / C2568;
    const double C2551 = C1056 * q;
    const double C2562 = C1337 * q;
    const double C1074 = -((C1056 * C2553) / p + (C1337 * C2564) / C2431);
    const double C1267 = -((C1056 * C2555) / p + (C1337 * C2565) / C2431);
    const double C1296 = -((C1056 * C2557) / p + (C1337 * C2566) / C2431);
    const double C1352 = -((C1337 * C2553) / p + (C1441 * C2564) / C2431);
    const double C1800 = -((C1337 * C2555) / p + (C1441 * C2565) / C2431);
    const double C1842 = -((C1337 * C2557) / p + (C1441 * C2566) / C2431);
    const double C2429 = -((C2428 * C2553) / p + (C1056 * C2564) / C2431);
    const double C2437 = -((C2428 * C2555) / p + (C1056 * C2565) / C2431);
    const double C2444 = -((C2428 * C2557) / p + (C1056 * C2566) / C2431);
    const double C2563 = C2551 / C2431;
    const double C2569 = C2562 / C2431;
    const double C1281 = -((C1296 * C2555) / p + (C1842 * C2565) / C2431);
    const double C328 = -((C2437 * C2553) / p + (C1267 * C2564) / C2431);
    const double C373 = -((C2444 * C2553) / p + (C1296 * C2564) / C2431);
    const double C417 = -((C2444 * C2555) / p + (C1296 * C2565) / C2431);
    const double C2570 = C2428 - C2563;
    const double C2572 = C1056 - C2569;
    const double C2573 = C2570 / C2552;
    const double C2574 = C2572 / C2552;
    const double C184 = C2573 - ((C2429 * C2553) / p + (C1074 * C2564) / C2431);
    const double C232 = C2573 - ((C2437 * C2555) / p + (C1267 * C2565) / C2431);
    const double C280 = C2573 - ((C2444 * C2557) / p + (C1296 * C2566) / C2431);
    const double C1090 =
        C2574 - ((C1074 * C2553) / p + (C1352 * C2564) / C2431);
    const double C1145 =
        C2574 - ((C1267 * C2555) / p + (C1800 * C2565) / C2431);
    const double C1213 =
        C2574 - ((C1296 * C2557) / p + (C1842 * C2566) / C2431);
    g[0] = C184;
    g[1] = C232;
    g[2] = C280;
    g[3] = C328;
    g[4] = C373;
    g[5] = C417;
    g[6] = C1056;
    g[7] = C1074;
    g[8] = C1090;
    g[9] = C1145;
    g[10] = C1213;
    g[11] = C1267;
    g[12] = C1281;
    g[13] = C1296;
    g[14] = C1337;
    g[15] = C1352;
    g[16] = C1441;
    g[17] = C1800;
    g[18] = C1842;
}
