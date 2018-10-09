/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_1_ints(const double ae,
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
    const double C3760 = de * zCD;
    const double C3759 = be * zAB;
    const double C3757 = de * yCD;
    const double C3756 = be * yAB;
    const double C3755 = de * xCD;
    const double C3754 = be * xAB;
    const double C3753 = 2 * q;
    const double C3778 = p + q;
    const double C3902 = p * q;
    const double C3901 = std::pow(Pi, 2.5);
    const double C3900 = zP - zQ;
    const double C3899 = yP - yQ;
    const double C3898 = xP - xQ;
    const double C3897 = 2 * p;
    const double C3766 = C3759 + C3760;
    const double C3765 = C3756 + C3757;
    const double C3764 = C3754 + C3755;
    const double C3903 = std::sqrt(C3778);
    const double C3909 = C3901 * kab;
    const double C3908 = C3900 * q;
    const double C3907 = C3899 * q;
    const double C3906 = C3898 * q;
    const double C3910 = C3902 * C3903;
    const double C3913 = C3909 * kcd;
    const double C2221 = (2. * C3913 * bs[0]) / C3910;
    const double C2222 = (2. * C3913 * bs[1]) / C3910;
    const double C2521 = (2. * C3913 * bs[2]) / C3910;
    const double C2632 = (2. * C3913 * bs[3]) / C3910;
    const double C3763 = C2221 / C3753;
    const double C3896 = C2222 * q;
    const double C978 = -((C2221 * C3754) / p + (C2222 * C3906) / C3778);
    const double C1145 = -((C2221 * C3756) / p + (C2222 * C3907) / C3778);
    const double C1278 = -((C2221 * C3759) / p + (C2222 * C3908) / C3778);
    const double C3904 = C2521 * q;
    const double C2240 = -((C2222 * C3754) / p + (C2521 * C3906) / C3778);
    const double C2294 = -((C2222 * C3756) / p + (C2521 * C3907) / C3778);
    const double C2324 = -((C2222 * C3759) / p + (C2521 * C3908) / C3778);
    const double C2537 = -((C2521 * C3754) / p + (C2632 * C3906) / C3778);
    const double C3029 = -((C2521 * C3756) / p + (C2632 * C3907) / C3778);
    const double C3045 = -((C2521 * C3759) / p + (C2632 * C3908) / C3778);
    const double C3905 = C3896 / C3778;
    const double C3911 = C3904 / C3778;
    const double C1054 = -((C1145 * C3754) / p + (C2294 * C3906) / C3778);
    const double C1100 = -((C1278 * C3754) / p + (C2324 * C3906) / C3778);
    const double C1234 = -((C1278 * C3756) / p + (C2324 * C3907) / C3778);
    const double C2370 = -((C2324 * C3756) / p + (C3045 * C3907) / C3778);
    const double C3912 = C2221 - C3905;
    const double C3914 = C2222 - C3911;
    const double C3758 = C1054 * p;
    const double C3761 = C1100 * p;
    const double C3762 = C1234 * p;
    const double C3915 = C3912 / C3897;
    const double C3916 = C3914 / C3897;
    const double C245 = -(C978 * C3765 + C3758) / q;
    const double C320 = -(C1145 * C3764 + C3758) / q;
    const double C255 = -(C978 * C3766 + C3761) / q;
    const double C401 = -(C1278 * C3764 + C3761) / q;
    const double C340 = -(C1145 * C3766 + C3762) / q;
    const double C411 = -(C1278 * C3765 + C3762) / q;
    const double C961 = C3915 - ((C978 * C3754) / p + (C2240 * C3906) / C3778);
    const double C1189 =
        C3915 - ((C1145 * C3756) / p + (C2294 * C3907) / C3778);
    const double C1321 =
        C3915 - ((C1278 * C3759) / p + (C2324 * C3908) / C3778);
    const double C2257 =
        C3916 - ((C2240 * C3754) / p + (C2537 * C3906) / C3778);
    const double C2354 =
        C3916 - ((C2294 * C3756) / p + (C3029 * C3907) / C3778);
    const double C2400 =
        C3916 - ((C2324 * C3759) / p + (C3045 * C3908) / C3778);
    const double C235 = C3763 - (C978 * C3764) / q - (C961 * p) / q;
    const double C330 = C3763 - (C1145 * C3765) / q - (C1189 * p) / q;
    const double C421 = C3763 - (C1278 * C3766) / q - (C1321 * p) / q;
    g[0] = C235;
    g[1] = C245;
    g[2] = C255;
    g[3] = C320;
    g[4] = C330;
    g[5] = C340;
    g[6] = C401;
    g[7] = C411;
    g[8] = C421;
    g[9] = C961;
    g[10] = C978;
    g[11] = C1054;
    g[12] = C1100;
    g[13] = C1145;
    g[14] = C1189;
    g[15] = C1234;
    g[16] = C1278;
    g[17] = C1321;
    g[18] = C2221;
    g[19] = C2222;
    g[20] = C2240;
    g[21] = C2257;
    g[22] = C2294;
    g[23] = C2324;
    g[24] = C2354;
    g[25] = C2370;
    g[26] = C2400;
    g[27] = C2521;
    g[28] = C2537;
    g[29] = C2632;
    g[30] = C3029;
    g[31] = C3045;
}
