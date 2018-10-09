/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_2_ints(const double ae,
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
    const double C10534 = p + q;
    const double C10662 = p * q;
    const double C10661 = std::pow(Pi, 2.5);
    const double C10659 = zP - zQ;
    const double C10658 = be * zAB;
    const double C10657 = yP - yQ;
    const double C10656 = be * yAB;
    const double C10655 = xP - xQ;
    const double C10654 = be * xAB;
    const double C10653 = 2 * p;
    const double C10663 = std::sqrt(C10534);
    const double C10669 = C10661 * kab;
    const double C10667 = C10659 * q;
    const double C10666 = C10657 * q;
    const double C10665 = C10655 * q;
    const double C10670 = C10662 * C10663;
    const double C10673 = C10669 * kcd;
    const double C9309 = (2. * C10673 * bs[0]) / C10670;
    const double C9310 = (2. * C10673 * bs[1]) / C10670;
    const double C9325 = (2. * C10673 * bs[2]) / C10670;
    const double C9454 = (2. * C10673 * bs[3]) / C10670;
    const double C10652 = C9310 * q;
    const double C9064 = -((C9309 * C10654) / p + (C9310 * C10665) / C10534);
    const double C9230 = -((C9309 * C10656) / p + (C9310 * C10666) / C10534);
    const double C9262 = -((C9309 * C10658) / p + (C9310 * C10667) / C10534);
    const double C10660 = C9325 * q;
    const double C9065 = -((C9310 * C10654) / p + (C9325 * C10665) / C10534);
    const double C9231 = -((C9310 * C10656) / p + (C9325 * C10666) / C10534);
    const double C9263 = -((C9310 * C10658) / p + (C9325 * C10667) / C10534);
    const double C9292 = -((C9325 * C10654) / p + (C9454 * C10665) / C10534);
    const double C9806 = -((C9325 * C10656) / p + (C9454 * C10666) / C10534);
    const double C9893 = -((C9325 * C10658) / p + (C9454 * C10667) / C10534);
    const double C10664 = C10652 / C10534;
    const double C10668 = C10660 / C10534;
    const double C8622 = -((C9230 * C10654) / p + (C9231 * C10665) / C10534);
    const double C8649 = -((C9262 * C10654) / p + (C9263 * C10665) / C10534);
    const double C8675 = -((C9262 * C10656) / p + (C9263 * C10666) / C10534);
    const double C9246 = -((C9263 * C10656) / p + (C9893 * C10666) / C10534);
    const double C10671 = C9309 - C10664;
    const double C10672 = C9310 - C10668;
    const double C10674 = C10671 / C10653;
    const double C10675 = C10672 / C10653;
    const double C8535 =
        C10674 - ((C9064 * C10654) / p + (C9065 * C10665) / C10534);
    const double C8564 =
        C10674 - ((C9230 * C10656) / p + (C9231 * C10666) / C10534);
    const double C8593 =
        C10674 - ((C9262 * C10658) / p + (C9263 * C10667) / C10534);
    const double C9043 =
        C10675 - ((C9065 * C10654) / p + (C9292 * C10665) / C10534);
    const double C9110 =
        C10675 - ((C9231 * C10656) / p + (C9806 * C10666) / C10534);
    const double C9170 =
        C10675 - ((C9263 * C10658) / p + (C9893 * C10667) / C10534);
    g[0] = C8535;
    g[1] = C8564;
    g[2] = C8593;
    g[3] = C8622;
    g[4] = C8649;
    g[5] = C8675;
    g[6] = C9043;
    g[7] = C9064;
    g[8] = C9065;
    g[9] = C9110;
    g[10] = C9170;
    g[11] = C9230;
    g[12] = C9231;
    g[13] = C9246;
    g[14] = C9262;
    g[15] = C9263;
    g[16] = C9292;
    g[17] = C9309;
    g[18] = C9310;
    g[19] = C9325;
    g[20] = C9454;
    g[21] = C9806;
    g[22] = C9893;
}
