/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1010_1_ints(const double ae,
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
    const double C4336 = p * q;
    const double C4335 = std::pow(Pi, 2.5);
    const double C4334 = zP - zQ;
    const double C4333 = be * zAB;
    const double C4332 = yP - yQ;
    const double C4331 = be * yAB;
    const double C4330 = p + q;
    const double C4329 = xP - xQ;
    const double C4328 = be * xAB;
    const double C4340 = C4335 * kab;
    const double C4339 = C4334 * q;
    const double C4338 = C4332 * q;
    const double C4341 = std::sqrt(C4330);
    const double C4337 = C4329 * q;
    const double C4342 = C4340 * kcd;
    const double C4343 = C4336 * C4341;
    const double C3626 = (2. * C4342 * bs[0]) / C4343;
    const double C3627 = (2. * C4342 * bs[1]) / C4343;
    const double C3769 = (2. * C4342 * bs[2]) / C4343;
    const double C3178 = -((C3626 * C4328) / p + (C3627 * C4337) / C4330);
    const double C3226 = -((C3626 * C4331) / p + (C3627 * C4338) / C4330);
    const double C3271 = -((C3626 * C4333) / p + (C3627 * C4339) / C4330);
    const double C3643 = -((C3627 * C4328) / p + (C3769 * C4337) / C4330);
    const double C3660 = -((C3627 * C4331) / p + (C3769 * C4338) / C4330);
    const double C3676 = -((C3627 * C4333) / p + (C3769 * C4339) / C4330);
    g[0] = C3178;
    g[1] = C3226;
    g[2] = C3271;
    g[3] = C3626;
    g[4] = C3627;
    g[5] = C3643;
    g[6] = C3660;
    g[7] = C3676;
    g[8] = C3769;
}
