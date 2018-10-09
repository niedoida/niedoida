/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_1_ints(const double ae,
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
    const double C10520 = p + q;
    const double C10648 = p * q;
    const double C10647 = std::pow(Pi, 2.5);
    const double C10645 = zP - zQ;
    const double C10644 = be * zAB;
    const double C10643 = yP - yQ;
    const double C10642 = be * yAB;
    const double C10641 = xP - xQ;
    const double C10640 = be * xAB;
    const double C10639 = 2 * p;
    const double C10649 = std::sqrt(C10520);
    const double C10655 = C10647 * kab;
    const double C10653 = C10645 * q;
    const double C10652 = C10643 * q;
    const double C10651 = C10641 * q;
    const double C10656 = C10648 * C10649;
    const double C10659 = C10655 * kcd;
    const double C9299 = (2. * C10659 * bs[0]) / C10656;
    const double C9300 = (2. * C10659 * bs[1]) / C10656;
    const double C9315 = (2. * C10659 * bs[2]) / C10656;
    const double C9444 = (2. * C10659 * bs[3]) / C10656;
    const double C10638 = C9300 * q;
    const double C9054 = -((C9299 * C10640) / p + (C9300 * C10651) / C10520);
    const double C9220 = -((C9299 * C10642) / p + (C9300 * C10652) / C10520);
    const double C9252 = -((C9299 * C10644) / p + (C9300 * C10653) / C10520);
    const double C10646 = C9315 * q;
    const double C9055 = -((C9300 * C10640) / p + (C9315 * C10651) / C10520);
    const double C9221 = -((C9300 * C10642) / p + (C9315 * C10652) / C10520);
    const double C9253 = -((C9300 * C10644) / p + (C9315 * C10653) / C10520);
    const double C9282 = -((C9315 * C10640) / p + (C9444 * C10651) / C10520);
    const double C9796 = -((C9315 * C10642) / p + (C9444 * C10652) / C10520);
    const double C9883 = -((C9315 * C10644) / p + (C9444 * C10653) / C10520);
    const double C10650 = C10638 / C10520;
    const double C10654 = C10646 / C10520;
    const double C8612 = -((C9220 * C10640) / p + (C9221 * C10651) / C10520);
    const double C8639 = -((C9252 * C10640) / p + (C9253 * C10651) / C10520);
    const double C8665 = -((C9252 * C10642) / p + (C9253 * C10652) / C10520);
    const double C9236 = -((C9253 * C10642) / p + (C9883 * C10652) / C10520);
    const double C10657 = C9299 - C10650;
    const double C10658 = C9300 - C10654;
    const double C10660 = C10657 / C10639;
    const double C10661 = C10658 / C10639;
    const double C8525 =
        C10660 - ((C9054 * C10640) / p + (C9055 * C10651) / C10520);
    const double C8554 =
        C10660 - ((C9220 * C10642) / p + (C9221 * C10652) / C10520);
    const double C8583 =
        C10660 - ((C9252 * C10644) / p + (C9253 * C10653) / C10520);
    const double C9033 =
        C10661 - ((C9055 * C10640) / p + (C9282 * C10651) / C10520);
    const double C9100 =
        C10661 - ((C9221 * C10642) / p + (C9796 * C10652) / C10520);
    const double C9160 =
        C10661 - ((C9253 * C10644) / p + (C9883 * C10653) / C10520);
    g[0] = C8525;
    g[1] = C8554;
    g[2] = C8583;
    g[3] = C8612;
    g[4] = C8639;
    g[5] = C8665;
    g[6] = C9033;
    g[7] = C9054;
    g[8] = C9055;
    g[9] = C9100;
    g[10] = C9160;
    g[11] = C9220;
    g[12] = C9221;
    g[13] = C9236;
    g[14] = C9252;
    g[15] = C9253;
    g[16] = C9282;
    g[17] = C9299;
    g[18] = C9300;
    g[19] = C9315;
    g[20] = C9444;
    g[21] = C9796;
    g[22] = C9883;
}
