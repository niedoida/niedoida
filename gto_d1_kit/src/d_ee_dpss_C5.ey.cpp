/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_3_ints(const double ae,
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
    const double C10252 = p + q;
    const double C10323 = p * q;
    const double C10322 = std::pow(Pi, 2.5);
    const double C10321 = zP - zQ;
    const double C10320 = be * zAB;
    const double C10319 = yP - yQ;
    const double C10318 = be * yAB;
    const double C10317 = xP - xQ;
    const double C10316 = be * xAB;
    const double C10315 = 2 * p;
    const double C10324 = std::sqrt(C10252);
    const double C10329 = C10322 * kab;
    const double C10328 = C10321 * q;
    const double C10327 = C10319 * q;
    const double C10326 = C10317 * q;
    const double C10330 = C10323 * C10324;
    const double C10332 = C10329 * kcd;
    const double C9116 = (2. * C10332 * bs[1]) / C10330;
    const double C9130 = (2. * C10332 * bs[2]) / C10330;
    const double C9251 = (2. * C10332 * bs[3]) / C10330;
    const double C10314 = C9130 * q;
    const double C8890 = -((C9116 * C10316) / p + (C9130 * C10326) / C10252);
    const double C9044 = -((C9116 * C10318) / p + (C9130 * C10327) / C10252);
    const double C9073 = -((C9116 * C10320) / p + (C9130 * C10328) / C10252);
    const double C9100 = -((C9130 * C10316) / p + (C9251 * C10326) / C10252);
    const double C9581 = -((C9130 * C10318) / p + (C9251 * C10327) / C10252);
    const double C9662 = -((C9130 * C10320) / p + (C9251 * C10328) / C10252);
    const double C10325 = C10314 / C10252;
    const double C9058 = -((C9073 * C10318) / p + (C9662 * C10327) / C10252);
    const double C10331 = C9116 - C10325;
    const double C10333 = C10331 / C10315;
    const double C8870 =
        C10333 - ((C8890 * C10316) / p + (C9100 * C10326) / C10252);
    const double C8932 =
        C10333 - ((C9044 * C10318) / p + (C9581 * C10327) / C10252);
    const double C8988 =
        C10333 - ((C9073 * C10320) / p + (C9662 * C10328) / C10252);
    g[0] = C8870;
    g[1] = C8890;
    g[2] = C8932;
    g[3] = C8988;
    g[4] = C9044;
    g[5] = C9058;
    g[6] = C9073;
    g[7] = C9100;
    g[8] = C9116;
    g[9] = C9130;
    g[10] = C9251;
    g[11] = C9581;
    g[12] = C9662;
}
