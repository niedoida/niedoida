/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_0000_1_vr(const double ae,
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
                            const double* const g,
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C68 = p + q;
    const double C67 = p * q;
    const double C94 = std::pow(Pi, 2.5);
    const double C91 = bs[1];
    const double C90 = ae * be;
    const double C89 = bs[0];
    const double C95 = std::sqrt(C68);
    const double C93 = p * C68;
    const double C92 = kab * C67;
    const double C98 = 4 * C94;
    const double C96 = kab * C90;
    const double C99 = C67 * C95;
    const double C97 = kcd * C92;
    const double C100 = kcd * C96;
    const double C101 = C91 * C97;
    const double C102 = C89 * C100;
    const double C103 = C101 * ae;
    const double C40 =
        -(((xAB * C102) / p + ((xP - xQ) * C103) / C93) * C98) / C99;
    const double C44 =
        -(((yAB * C102) / p + ((yP - yQ) * C103) / C93) * C98) / C99;
    const double C46 =
        -(((zAB * C102) / p + ((zP - zQ) * C103) / C93) * C98) / C99;
    vrx[0] = C40;
    vry[0] = C44;
    vrz[0] = C46;
}
