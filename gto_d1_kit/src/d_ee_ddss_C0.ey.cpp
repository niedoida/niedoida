/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_3_ints(const double ae,
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
    const double C4847 = p + q;
    const double C5005 = p * q;
    const double C5004 = std::pow(Pi, 2.5);
    const double C5002 = zP - zQ;
    const double C5001 = be * zAB;
    const double C5000 = yP - yQ;
    const double C4999 = be * yAB;
    const double C4998 = 2 * p;
    const double C4996 = xP - xQ;
    const double C4995 = be * xAB;
    const double C5006 = std::sqrt(C4847);
    const double C5012 = C5004 * kab;
    const double C5010 = C5002 * q;
    const double C5009 = C5000 * q;
    const double C5007 = C4996 * q;
    const double C5013 = C5005 * C5006;
    const double C5016 = C5012 * kcd;
    const double C2672 = (2. * C5016 * bs[1]) / C5013;
    const double C2686 = (2. * C5016 * bs[2]) / C5013;
    const double C2918 = (2. * C5016 * bs[3]) / C5013;
    const double C2993 = (2. * C5016 * bs[4]) / C5013;
    const double C4997 = C2686 * q;
    const double C2236 = -((C2672 * C4995) / p + (C2686 * C5007) / C4847);
    const double C2585 = -((C2672 * C4999) / p + (C2686 * C5009) / C4847);
    const double C2614 = -((C2672 * C5001) / p + (C2686 * C5010) / C4847);
    const double C5003 = C2918 * q;
    const double C2657 = -((C2686 * C4995) / p + (C2918 * C5007) / C4847);
    const double C3541 = -((C2686 * C4999) / p + (C2918 * C5009) / C4847);
    const double C3715 = -((C2686 * C5001) / p + (C2918 * C5010) / C4847);
    const double C2902 = -((C2918 * C4995) / p + (C2993 * C5007) / C4847);
    const double C3777 = -((C2918 * C4999) / p + (C2993 * C5009) / C4847);
    const double C4626 = -((C2918 * C5001) / p + (C2993 * C5010) / C4847);
    const double C5008 = C4997 / C4847;
    const double C5011 = C5003 / C4847;
    const double C2599 = -((C2614 * C4999) / p + (C3715 * C5009) / C4847);
    const double C5014 = C2672 - C5008;
    const double C5015 = C2686 - C5011;
    const double C5017 = C5014 / C4998;
    const double C5018 = C5015 / C4998;
    const double C2220 =
        C5017 - ((C2236 * C4995) / p + (C2657 * C5007) / C4847);
    const double C2350 =
        C5017 - ((C2585 * C4999) / p + (C3541 * C5009) / C4847);
    const double C2475 =
        C5017 - ((C2614 * C5001) / p + (C3715 * C5010) / C4847);
    const double C2641 =
        C5018 - ((C2657 * C4995) / p + (C2902 * C5007) / C4847);
    const double C2714 =
        C5018 - ((C3541 * C4999) / p + (C3777 * C5009) / C4847);
    const double C2743 =
        C5018 - ((C3715 * C5001) / p + (C4626 * C5010) / C4847);
    const double C2201 = (C2236 - (C2657 * q) / C4847) / p -
                         ((C2220 * C4995) / p + (C2641 * C5007) / C4847);
    const double C3175 = -((C2220 * C5001) / p + (C2641 * C5010) / C4847);
    const double C2252 = -((C2350 * C4995) / p + (C2714 * C5007) / C4847);
    const double C2433 = (C2585 - (C3541 * q) / C4847) / p -
                         ((C2350 * C4999) / p + (C2714 * C5009) / C4847);
    const double C2447 = -((C2350 * C5001) / p + (C2714 * C5010) / C4847);
    const double C2281 = -((C2475 * C4995) / p + (C2743 * C5007) / C4847);
    const double C2544 = -((C2475 * C4999) / p + (C2743 * C5009) / C4847);
    const double C2558 = (C2614 - (C3715 * q) / C4847) / p -
                         ((C2475 * C5001) / p + (C2743 * C5010) / C4847);
    g[0] = C2201;
    g[1] = C2220;
    g[2] = C2236;
    g[3] = C2252;
    g[4] = C2281;
    g[5] = C2350;
    g[6] = C2433;
    g[7] = C2447;
    g[8] = C2475;
    g[9] = C2544;
    g[10] = C2558;
    g[11] = C2585;
    g[12] = C2599;
    g[13] = C2614;
    g[14] = C2641;
    g[15] = C2657;
    g[16] = C2672;
    g[17] = C2686;
    g[18] = C2714;
    g[19] = C2743;
    g[20] = C2902;
    g[21] = C2918;
    g[22] = C2993;
    g[23] = C3175;
    g[24] = C3541;
    g[25] = C3715;
    g[26] = C3777;
    g[27] = C4626;
}
