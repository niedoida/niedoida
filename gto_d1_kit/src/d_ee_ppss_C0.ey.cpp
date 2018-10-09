/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_3_ints(const double ae,
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
    const double C989 = p * q;
    const double C988 = std::pow(Pi, 2.5);
    const double C987 = p + q;
    const double C990 = C988 * kab;
    const double C991 = std::sqrt(C987);
    const double C992 = C990 * kcd;
    const double C993 = C989 * C991;
    const double C358 = (2. * C992 * bs[1]) / C993;
    const double C467 = (2. * C992 * bs[2]) / C993;
    const double C338 =
        -((C358 * be * xAB) / p + (C467 * (xP - xQ) * q) / C987);
    const double C372 =
        -((C358 * be * yAB) / p + (C467 * (yP - yQ) * q) / C987);
    const double C387 =
        -((C358 * be * zAB) / p + (C467 * (zP - zQ) * q) / C987);
    g[0] = C338;
    g[1] = C358;
    g[2] = C372;
    g[3] = C387;
    g[4] = C467;
}
