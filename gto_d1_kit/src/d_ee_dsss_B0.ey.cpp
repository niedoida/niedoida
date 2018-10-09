/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2000_2_ints(const double ae,
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
    const double C842 = p * q;
    const double C841 = std::pow(Pi, 2.5);
    const double C840 = zP - zQ;
    const double C839 = be * zAB;
    const double C838 = yP - yQ;
    const double C837 = be * yAB;
    const double C836 = p + q;
    const double C835 = xP - xQ;
    const double C834 = be * xAB;
    const double C846 = C841 * kab;
    const double C845 = C840 * q;
    const double C844 = C838 * q;
    const double C847 = std::sqrt(C836);
    const double C843 = C835 * q;
    const double C848 = C846 * kcd;
    const double C849 = C842 * C847;
    const double C209 = (2. * C848 * bs[0]) / C849;
    const double C210 = (2. * C848 * bs[1]) / C849;
    const double C225 = (2. * C848 * bs[2]) / C849;
    const double C108 = -((C209 * C834) / p + (C210 * C843) / C836);
    const double C163 = -((C209 * C837) / p + (C210 * C844) / C836);
    const double C179 = -((C209 * C839) / p + (C210 * C845) / C836);
    const double C109 = -((C210 * C834) / p + (C225 * C843) / C836);
    const double C164 = -((C210 * C837) / p + (C225 * C844) / C836);
    const double C180 = -((C210 * C839) / p + (C225 * C845) / C836);
    g[0] = C108;
    g[1] = C109;
    g[2] = C163;
    g[3] = C164;
    g[4] = C179;
    g[5] = C180;
    g[6] = C209;
    g[7] = C210;
    g[8] = C225;
}
