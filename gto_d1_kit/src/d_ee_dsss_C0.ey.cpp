/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_3_ints(const double ae,
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
    const double C767 = p * q;
    const double C766 = std::pow(Pi, 2.5);
    const double C765 = p + q;
    const double C768 = C766 * kab;
    const double C769 = std::sqrt(C765);
    const double C770 = C768 * kcd;
    const double C771 = C767 * C769;
    const double C199 = (2. * C770 * bs[1]) / C771;
    const double C213 = (2. * C770 * bs[2]) / C771;
    const double C107 =
        -((C199 * be * xAB) / p + (C213 * (xP - xQ) * q) / C765);
    const double C158 =
        -((C199 * be * yAB) / p + (C213 * (yP - yQ) * q) / C765);
    const double C172 =
        -((C199 * be * zAB) / p + (C213 * (zP - zQ) * q) / C765);
    g[0] = C107;
    g[1] = C158;
    g[2] = C172;
    g[3] = C199;
    g[4] = C213;
}
