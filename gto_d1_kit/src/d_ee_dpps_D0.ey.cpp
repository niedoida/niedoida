/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_4_ints(const double ae,
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
    const double C6623 = p + q;
    const double C6900 = p * q;
    const double C6899 = std::pow(Pi, 2.5);
    const double C6897 = zP - zQ;
    const double C6896 = be * zAB;
    const double C6895 = yP - yQ;
    const double C6894 = be * yAB;
    const double C6893 = 2 * p;
    const double C6891 = xP - xQ;
    const double C6890 = be * xAB;
    const double C6901 = std::sqrt(C6623);
    const double C6908 = C6899 * kab;
    const double C6906 = C6897 * q;
    const double C6905 = C6895 * q;
    const double C6903 = C6891 * q;
    const double C6909 = C6900 * C6901;
    const double C6913 = C6908 * kcd;
    const double C4035 = (2. * C6913 * bs[1]) / C6909;
    const double C4478 = (2. * C6913 * bs[2]) / C6909;
    const double C4683 = (2. * C6913 * bs[3]) / C6909;
    const double C4781 = (2. * C6913 * bs[4]) / C6909;
    const double C6629 = (2. * C6913 * bs[0]) / C6909;
    const double C6892 = C4035 * q;
    const double C6898 = C4478 * q;
    const double C4004 = -((C4035 * C6890) / p + (C4478 * C6903) / C6623);
    const double C4101 = -((C4035 * C6894) / p + (C4478 * C6905) / C6623);
    const double C4146 = -((C4035 * C6896) / p + (C4478 * C6906) / C6623);
    const double C6902 = C4683 * q;
    const double C4462 = -((C4478 * C6890) / p + (C4683 * C6903) / C6623);
    const double C5358 = -((C4478 * C6894) / p + (C4683 * C6905) / C6623);
    const double C5493 = -((C4478 * C6896) / p + (C4683 * C6906) / C6623);
    const double C4705 = -((C4683 * C6890) / p + (C4781 * C6903) / C6623);
    const double C5555 = -((C4683 * C6894) / p + (C4781 * C6905) / C6623);
    const double C6401 = -((C4683 * C6896) / p + (C4781 * C6906) / C6623);
    const double C6621 = -((C6629 * C6890) / p + (C4035 * C6903) / C6623);
    const double C6654 = -((C6629 * C6894) / p + (C4035 * C6905) / C6623);
    const double C6679 = -((C6629 * C6896) / p + (C4035 * C6906) / C6623);
    const double C6904 = C6892 / C6623;
    const double C6907 = C6898 / C6623;
    const double C6910 = C6902 / C6623;
    const double C4447 = -((C4146 * C6894) / p + (C5493 * C6905) / C6623);
    const double C2266 = -((C6654 * C6890) / p + (C4101 * C6903) / C6623);
    const double C2353 = -((C6679 * C6890) / p + (C4146 * C6903) / C6623);
    const double C2396 = -((C6679 * C6894) / p + (C4146 * C6905) / C6623);
    const double C6911 = C6629 - C6904;
    const double C6912 = C4035 - C6907;
    const double C6914 = C4478 - C6910;
    const double C2310 = -((C2396 * C6890) / p + (C4447 * C6903) / C6623);
    const double C6915 = C6911 / C6893;
    const double C6916 = C6912 / C6893;
    const double C6917 = C6914 / C6893;
    const double C1735 =
        C6915 - ((C6621 * C6890) / p + (C4004 * C6903) / C6623);
    const double C1919 =
        C6915 - ((C6654 * C6894) / p + (C4101 * C6905) / C6623);
    const double C2102 =
        C6915 - ((C6679 * C6896) / p + (C4146 * C6906) / C6623);
    const double C3985 =
        C6916 - ((C4004 * C6890) / p + (C4462 * C6903) / C6623);
    const double C4177 =
        C6916 - ((C4101 * C6894) / p + (C5358 * C6905) / C6623);
    const double C4326 =
        C6916 - ((C4146 * C6896) / p + (C5493 * C6906) / C6623);
    const double C4506 =
        C6917 - ((C4462 * C6890) / p + (C4705 * C6903) / C6623);
    const double C4534 =
        C6917 - ((C5358 * C6894) / p + (C5555 * C6905) / C6623);
    const double C4589 =
        C6917 - ((C5493 * C6896) / p + (C6401 * C6906) / C6623);
    const double C1717 = (C6621 - (C4004 * q) / C6623) / p -
                         ((C1735 * C6890) / p + (C3985 * C6903) / C6623);
    const double C1811 = -((C1735 * C6894) / p + (C3985 * C6905) / C6623);
    const double C1857 = -((C1735 * C6896) / p + (C3985 * C6906) / C6623);
    const double C1902 = -((C1919 * C6890) / p + (C4177 * C6903) / C6623);
    const double C1995 = (C6654 - (C4101 * q) / C6623) / p -
                         ((C1919 * C6894) / p + (C4177 * C6905) / C6623);
    const double C2040 = -((C1919 * C6896) / p + (C4177 * C6906) / C6623);
    const double C2085 = -((C2102 * C6890) / p + (C4326 * C6903) / C6623);
    const double C2178 = -((C2102 * C6894) / p + (C4326 * C6905) / C6623);
    const double C2222 = (C6679 - (C4146 * q) / C6623) / p -
                         ((C2102 * C6896) / p + (C4326 * C6906) / C6623);
    const double C4020 = (C4004 - (C4462 * q) / C6623) / p -
                         ((C3985 * C6890) / p + (C4506 * C6903) / C6623);
    const double C4967 = -((C3985 * C6896) / p + (C4506 * C6906) / C6623);
    const double C4116 = -((C4177 * C6890) / p + (C4534 * C6903) / C6623);
    const double C4204 = (C4101 - (C5358 * q) / C6623) / p -
                         ((C4177 * C6894) / p + (C4534 * C6905) / C6623);
    const double C4245 = -((C4177 * C6896) / p + (C4534 * C6906) / C6623);
    const double C4161 = -((C4326 * C6890) / p + (C4589 * C6903) / C6623);
    const double C4353 = -((C4326 * C6894) / p + (C4589 * C6905) / C6623);
    const double C4380 = (C4146 - (C5493 * q) / C6623) / p -
                         ((C4326 * C6896) / p + (C4589 * C6906) / C6623);
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
    g[16] = C3985;
    g[17] = C4004;
    g[18] = C4020;
    g[19] = C4035;
    g[20] = C4101;
    g[21] = C4116;
    g[22] = C4146;
    g[23] = C4161;
    g[24] = C4177;
    g[25] = C4204;
    g[26] = C4245;
    g[27] = C4326;
    g[28] = C4353;
    g[29] = C4380;
    g[30] = C4447;
    g[31] = C4462;
    g[32] = C4478;
    g[33] = C4506;
    g[34] = C4534;
    g[35] = C4589;
    g[36] = C4683;
    g[37] = C4705;
    g[38] = C4781;
    g[39] = C4967;
    g[40] = C5358;
    g[41] = C5493;
    g[42] = C5555;
    g[43] = C6401;
}
