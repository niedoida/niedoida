/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1100_1_ints(const double ae,
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
    const double C1091 = p * q;
    const double C1090 = std::pow(Pi, 2.5);
    const double C1089 = zP - zQ;
    const double C1088 = be * zAB;
    const double C1087 = yP - yQ;
    const double C1086 = be * yAB;
    const double C1085 = p + q;
    const double C1084 = xP - xQ;
    const double C1083 = be * xAB;
    const double C1095 = C1090 * kab;
    const double C1094 = C1089 * q;
    const double C1093 = C1087 * q;
    const double C1096 = std::sqrt(C1085);
    const double C1092 = C1084 * q;
    const double C1097 = C1095 * kcd;
    const double C1098 = C1091 * C1096;
    const double C390 = (2. * C1097 * bs[0]) / C1098;
    const double C391 = (2. * C1097 * bs[1]) / C1098;
    const double C508 = (2. * C1097 * bs[2]) / C1098;
    const double C109 = -((C390 * C1083) / p + (C391 * C1092) / C1085);
    const double C138 = -((C390 * C1086) / p + (C391 * C1093) / C1085);
    const double C165 = -((C390 * C1088) / p + (C391 * C1094) / C1085);
    const double C369 = -((C391 * C1083) / p + (C508 * C1092) / C1085);
    const double C406 = -((C391 * C1086) / p + (C508 * C1093) / C1085);
    const double C422 = -((C391 * C1088) / p + (C508 * C1094) / C1085);
    g[0] = C109;
    g[1] = C138;
    g[2] = C165;
    g[3] = C369;
    g[4] = C390;
    g[5] = C391;
    g[6] = C406;
    g[7] = C422;
    g[8] = C508;
}
