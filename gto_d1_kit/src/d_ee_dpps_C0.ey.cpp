/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_3_ints(const double ae,
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
    const double C6605 = p + q;
    const double C6882 = p * q;
    const double C6881 = std::pow(Pi, 2.5);
    const double C6879 = zP - zQ;
    const double C6878 = be * zAB;
    const double C6877 = yP - yQ;
    const double C6876 = be * yAB;
    const double C6875 = 2 * p;
    const double C6873 = xP - xQ;
    const double C6872 = be * xAB;
    const double C6883 = std::sqrt(C6605);
    const double C6890 = C6881 * kab;
    const double C6888 = C6879 * q;
    const double C6887 = C6877 * q;
    const double C6885 = C6873 * q;
    const double C6891 = C6882 * C6883;
    const double C6895 = C6890 * kcd;
    const double C4017 = (2. * C6895 * bs[1]) / C6891;
    const double C4444 = (2. * C6895 * bs[2]) / C6891;
    const double C4672 = (2. * C6895 * bs[3]) / C6891;
    const double C4763 = (2. * C6895 * bs[4]) / C6891;
    const double C6611 = (2. * C6895 * bs[0]) / C6891;
    const double C6874 = C4017 * q;
    const double C6880 = C4444 * q;
    const double C3967 = -((C4017 * C6872) / p + (C4444 * C6885) / C6605);
    const double C4083 = -((C4017 * C6876) / p + (C4444 * C6887) / C6605);
    const double C4128 = -((C4017 * C6878) / p + (C4444 * C6888) / C6605);
    const double C6884 = C4672 * q;
    const double C4473 = -((C4444 * C6872) / p + (C4672 * C6885) / C6605);
    const double C5340 = -((C4444 * C6876) / p + (C4672 * C6887) / C6605);
    const double C5475 = -((C4444 * C6878) / p + (C4672 * C6888) / C6605);
    const double C4687 = -((C4672 * C6872) / p + (C4763 * C6885) / C6605);
    const double C5537 = -((C4672 * C6876) / p + (C4763 * C6887) / C6605);
    const double C6383 = -((C4672 * C6878) / p + (C4763 * C6888) / C6605);
    const double C6603 = -((C6611 * C6872) / p + (C4017 * C6885) / C6605);
    const double C6636 = -((C6611 * C6876) / p + (C4017 * C6887) / C6605);
    const double C6661 = -((C6611 * C6878) / p + (C4017 * C6888) / C6605);
    const double C6886 = C6874 / C6605;
    const double C6889 = C6880 / C6605;
    const double C6892 = C6884 / C6605;
    const double C4429 = -((C4128 * C6876) / p + (C5475 * C6887) / C6605);
    const double C2266 = -((C6636 * C6872) / p + (C4083 * C6885) / C6605);
    const double C2353 = -((C6661 * C6872) / p + (C4128 * C6885) / C6605);
    const double C2396 = -((C6661 * C6876) / p + (C4128 * C6887) / C6605);
    const double C6893 = C6611 - C6886;
    const double C6894 = C4017 - C6889;
    const double C6896 = C4444 - C6892;
    const double C2310 = -((C2396 * C6872) / p + (C4429 * C6885) / C6605);
    const double C6897 = C6893 / C6875;
    const double C6898 = C6894 / C6875;
    const double C6899 = C6896 / C6875;
    const double C1735 =
        C6897 - ((C6603 * C6872) / p + (C3967 * C6885) / C6605);
    const double C1919 =
        C6897 - ((C6636 * C6876) / p + (C4083 * C6887) / C6605);
    const double C2102 =
        C6897 - ((C6661 * C6878) / p + (C4128 * C6888) / C6605);
    const double C3987 =
        C6898 - ((C3967 * C6872) / p + (C4473 * C6885) / C6605);
    const double C4172 =
        C6898 - ((C4083 * C6876) / p + (C5340 * C6887) / C6605);
    const double C4321 =
        C6898 - ((C4128 * C6878) / p + (C5475 * C6888) / C6605);
    const double C4488 =
        C6899 - ((C4473 * C6872) / p + (C4687 * C6885) / C6605);
    const double C4516 =
        C6899 - ((C5340 * C6876) / p + (C5537 * C6887) / C6605);
    const double C4571 =
        C6899 - ((C5475 * C6878) / p + (C6383 * C6888) / C6605);
    const double C1717 = (C6603 - (C3967 * q) / C6605) / p -
                         ((C1735 * C6872) / p + (C3987 * C6885) / C6605);
    const double C1811 = -((C1735 * C6876) / p + (C3987 * C6887) / C6605);
    const double C1857 = -((C1735 * C6878) / p + (C3987 * C6888) / C6605);
    const double C1902 = -((C1919 * C6872) / p + (C4172 * C6885) / C6605);
    const double C1995 = (C6636 - (C4083 * q) / C6605) / p -
                         ((C1919 * C6876) / p + (C4172 * C6887) / C6605);
    const double C2040 = -((C1919 * C6878) / p + (C4172 * C6888) / C6605);
    const double C2085 = -((C2102 * C6872) / p + (C4321 * C6885) / C6605);
    const double C2178 = -((C2102 * C6876) / p + (C4321 * C6887) / C6605);
    const double C2222 = (C6661 - (C4128 * q) / C6605) / p -
                         ((C2102 * C6878) / p + (C4321 * C6888) / C6605);
    const double C4002 = (C3967 - (C4473 * q) / C6605) / p -
                         ((C3987 * C6872) / p + (C4488 * C6885) / C6605);
    const double C4949 = -((C3987 * C6878) / p + (C4488 * C6888) / C6605);
    const double C4098 = -((C4172 * C6872) / p + (C4516 * C6885) / C6605);
    const double C4186 = (C4083 - (C5340 * q) / C6605) / p -
                         ((C4172 * C6876) / p + (C4516 * C6887) / C6605);
    const double C4227 = -((C4172 * C6878) / p + (C4516 * C6888) / C6605);
    const double C4143 = -((C4321 * C6872) / p + (C4571 * C6885) / C6605);
    const double C4335 = -((C4321 * C6876) / p + (C4571 * C6887) / C6605);
    const double C4362 = (C4128 - (C5475 * q) / C6605) / p -
                         ((C4321 * C6878) / p + (C4571 * C6888) / C6605);
    g[0] = C1717;
    g[1] = C1735;
    g[2] = C1811;
    g[3] = C1857;
    g[4] = C1902;
    g[5] = C1919;
    g[6] = C1995;
    g[7] = C2040;
    g[8] = C2085;
    g[9] = C2102;
    g[10] = C2178;
    g[11] = C2222;
    g[12] = C2266;
    g[13] = C2310;
    g[14] = C2353;
    g[15] = C2396;
    g[16] = C3967;
    g[17] = C3987;
    g[18] = C4002;
    g[19] = C4017;
    g[20] = C4083;
    g[21] = C4098;
    g[22] = C4128;
    g[23] = C4143;
    g[24] = C4172;
    g[25] = C4186;
    g[26] = C4227;
    g[27] = C4321;
    g[28] = C4335;
    g[29] = C4362;
    g[30] = C4429;
    g[31] = C4444;
    g[32] = C4473;
    g[33] = C4488;
    g[34] = C4516;
    g[35] = C4571;
    g[36] = C4672;
    g[37] = C4687;
    g[38] = C4763;
    g[39] = C4949;
    g[40] = C5340;
    g[41] = C5475;
    g[42] = C5537;
    g[43] = C6383;
}
