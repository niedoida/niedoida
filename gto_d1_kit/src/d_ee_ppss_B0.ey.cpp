/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_2_ints(const double ae,
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
    const double C1278 = p * q;
    const double C1277 = std::pow(Pi, 2.5);
    const double C1276 = zP - zQ;
    const double C1275 = be * zAB;
    const double C1274 = yP - yQ;
    const double C1273 = be * yAB;
    const double C1272 = p + q;
    const double C1271 = xP - xQ;
    const double C1270 = be * xAB;
    const double C1282 = C1277 * kab;
    const double C1281 = C1276 * q;
    const double C1280 = C1274 * q;
    const double C1283 = std::sqrt(C1272);
    const double C1279 = C1271 * q;
    const double C1284 = C1282 * kcd;
    const double C1285 = C1278 * C1283;
    const double C559 = (2. * C1284 * bs[0]) / C1285;
    const double C560 = (2. * C1284 * bs[1]) / C1285;
    const double C711 = (2. * C1284 * bs[2]) / C1285;
    const double C120 = -((C559 * C1270) / p + (C560 * C1279) / C1272);
    const double C168 = -((C559 * C1273) / p + (C560 * C1280) / C1272);
    const double C213 = -((C559 * C1275) / p + (C560 * C1281) / C1272);
    const double C585 = -((C560 * C1270) / p + (C711 * C1279) / C1272);
    const double C602 = -((C560 * C1273) / p + (C711 * C1280) / C1272);
    const double C618 = -((C560 * C1275) / p + (C711 * C1281) / C1272);
    g[0] = C120;
    g[1] = C168;
    g[2] = C213;
    g[3] = C559;
    g[4] = C560;
    g[5] = C585;
    g[6] = C602;
    g[7] = C618;
    g[8] = C711;
}
