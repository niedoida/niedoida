/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_4_ints(const double ae,
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
    const double C2437 = p + q;
    const double C2566 = p * q;
    const double C2565 = std::pow(Pi, 2.5);
    const double C2564 = zP - zQ;
    const double C2563 = be * zAB;
    const double C2562 = yP - yQ;
    const double C2561 = be * yAB;
    const double C2560 = xP - xQ;
    const double C2559 = be * xAB;
    const double C2558 = 2 * p;
    const double C2567 = std::sqrt(C2437);
    const double C2573 = C2565 * kab;
    const double C2572 = C2564 * q;
    const double C2571 = C2562 * q;
    const double C2570 = C2560 * q;
    const double C2574 = C2566 * C2567;
    const double C2577 = C2573 * kcd;
    const double C1082 = (2. * C2577 * bs[1]) / C2574;
    const double C1329 = (2. * C2577 * bs[2]) / C2574;
    const double C1447 = (2. * C2577 * bs[3]) / C2574;
    const double C2434 = (2. * C2577 * bs[0]) / C2574;
    const double C2557 = C1082 * q;
    const double C2568 = C1329 * q;
    const double C1062 = -((C1082 * C2559) / p + (C1329 * C2570) / C2437);
    const double C1273 = -((C1082 * C2561) / p + (C1329 * C2571) / C2437);
    const double C1302 = -((C1082 * C2563) / p + (C1329 * C2572) / C2437);
    const double C1358 = -((C1329 * C2559) / p + (C1447 * C2570) / C2437);
    const double C1806 = -((C1329 * C2561) / p + (C1447 * C2571) / C2437);
    const double C1848 = -((C1329 * C2563) / p + (C1447 * C2572) / C2437);
    const double C2435 = -((C2434 * C2559) / p + (C1082 * C2570) / C2437);
    const double C2443 = -((C2434 * C2561) / p + (C1082 * C2571) / C2437);
    const double C2450 = -((C2434 * C2563) / p + (C1082 * C2572) / C2437);
    const double C2569 = C2557 / C2437;
    const double C2575 = C2568 / C2437;
    const double C1287 = -((C1302 * C2561) / p + (C1848 * C2571) / C2437);
    const double C328 = -((C2443 * C2559) / p + (C1273 * C2570) / C2437);
    const double C373 = -((C2450 * C2559) / p + (C1302 * C2570) / C2437);
    const double C417 = -((C2450 * C2561) / p + (C1302 * C2571) / C2437);
    const double C2576 = C2434 - C2569;
    const double C2578 = C1082 - C2575;
    const double C2579 = C2576 / C2558;
    const double C2580 = C2578 / C2558;
    const double C184 = C2579 - ((C2435 * C2559) / p + (C1062 * C2570) / C2437);
    const double C232 = C2579 - ((C2443 * C2561) / p + (C1273 * C2571) / C2437);
    const double C280 = C2579 - ((C2450 * C2563) / p + (C1302 * C2572) / C2437);
    const double C1096 =
        C2580 - ((C1062 * C2559) / p + (C1358 * C2570) / C2437);
    const double C1151 =
        C2580 - ((C1273 * C2561) / p + (C1806 * C2571) / C2437);
    const double C1219 =
        C2580 - ((C1302 * C2563) / p + (C1848 * C2572) / C2437);
    g[0] = C184;
    g[1] = C232;
    g[2] = C280;
    g[3] = C328;
    g[4] = C373;
    g[5] = C417;
    g[6] = C1062;
    g[7] = C1082;
    g[8] = C1096;
    g[9] = C1151;
    g[10] = C1219;
    g[11] = C1273;
    g[12] = C1287;
    g[13] = C1302;
    g[14] = C1329;
    g[15] = C1358;
    g[16] = C1447;
    g[17] = C1806;
    g[18] = C1848;
}
