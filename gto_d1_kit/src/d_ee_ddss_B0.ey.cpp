/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2020_2_ints(const double ae,
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
    const double C7486 = 2 * q;
    const double C7480 = de * zCD;
    const double C7479 = be * zAB;
    const double C7477 = de * yCD;
    const double C7476 = be * yAB;
    const double C7475 = de * xCD;
    const double C7474 = be * xAB;
    const double C7505 = p + q;
    const double C7775 = p * q;
    const double C7774 = std::pow(Pi, 2.5);
    const double C7773 = zP - zQ;
    const double C7772 = yP - yQ;
    const double C7771 = xP - xQ;
    const double C7770 = 2 * p;
    const double C7490 = C7479 + C7480;
    const double C7489 = C7476 + C7477;
    const double C7488 = C7474 + C7475;
    const double C7776 = std::sqrt(C7505);
    const double C7783 = C7774 * kab;
    const double C7782 = C7773 * q;
    const double C7781 = C7772 * q;
    const double C7780 = C7771 * q;
    const double C7784 = C7775 * C7776;
    const double C7788 = C7783 * kcd;
    const double C4590 = (2. * C7788 * bs[0]) / C7784;
    const double C4591 = (2. * C7788 * bs[1]) / C7784;
    const double C5014 = (2. * C7788 * bs[2]) / C7784;
    const double C5250 = (2. * C7788 * bs[3]) / C7784;
    const double C5347 = (2. * C7788 * bs[4]) / C7784;
    const double C7769 = C4591 * q;
    const double C907 = -((C4590 * C7474) / p + (C4591 * C7780) / C7505);
    const double C1400 = -((C4590 * C7476) / p + (C4591 * C7781) / C7505);
    const double C1488 = -((C4590 * C7479) / p + (C4591 * C7782) / C7505);
    const double C7777 = C5014 * q;
    const double C4496 = -((C4591 * C7474) / p + (C5014 * C7780) / C7505);
    const double C4546 = -((C4591 * C7476) / p + (C5014 * C7781) / C7505);
    const double C4561 = -((C4591 * C7479) / p + (C5014 * C7782) / C7505);
    const double C7778 = C5250 * q;
    const double C5065 = -((C5014 * C7474) / p + (C5250 * C7780) / C7505);
    const double C5978 = -((C5014 * C7476) / p + (C5250 * C7781) / C7505);
    const double C6109 = -((C5014 * C7479) / p + (C5250 * C7782) / C7505);
    const double C5266 = -((C5250 * C7474) / p + (C5347 * C7780) / C7505);
    const double C6175 = -((C5250 * C7476) / p + (C5347 * C7781) / C7505);
    const double C7080 = -((C5250 * C7479) / p + (C5347 * C7782) / C7505);
    const double C7779 = C7769 / C7505;
    const double C7492 = C907 / C7486;
    const double C7491 = C1400 / C7486;
    const double C7493 = C1488 / C7486;
    const double C7785 = C7777 / C7505;
    const double C1385 = -((C1400 * C7474) / p + (C4546 * C7780) / C7505);
    const double C1473 = -((C1488 * C7474) / p + (C4561 * C7780) / C7505);
    const double C1588 = -((C1488 * C7476) / p + (C4561 * C7781) / C7505);
    const double C7786 = C7778 / C7505;
    const double C4998 = -((C4561 * C7476) / p + (C6109 * C7781) / C7505);
    const double C7787 = C4590 - C7779;
    const double C7789 = C4591 - C7785;
    const double C7790 = C5014 - C7786;
    const double C1603 = -((C1588 * C7474) / p + (C4998 * C7780) / C7505);
    const double C7791 = C7787 / C7770;
    const double C7792 = C7789 / C7770;
    const double C7793 = C7790 / C7770;
    const double C7487 = C1603 * p;
    const double C891 = C7791 - ((C907 * C7474) / p + (C4496 * C7780) / C7505);
    const double C1072 =
        C7791 - ((C1400 * C7476) / p + (C4546 * C7781) / C7505);
    const double C1236 =
        C7791 - ((C1488 * C7479) / p + (C4561 * C7782) / C7505);
    const double C4606 =
        C7792 - ((C4496 * C7474) / p + (C5065 * C7780) / C7505);
    const double C4750 =
        C7792 - ((C4546 * C7476) / p + (C5978 * C7781) / C7505);
    const double C4882 =
        C7792 - ((C4561 * C7479) / p + (C6109 * C7782) / C7505);
    const double C5081 =
        C7793 - ((C5065 * C7474) / p + (C5266 * C7780) / C7505);
    const double C5097 =
        C7793 - ((C5978 * C7476) / p + (C6175 * C7781) / C7505);
    const double C5128 =
        C7793 - ((C6109 * C7479) / p + (C7080 * C7782) / C7505);
    const double C673 = -(C1385 * C7490 + C7487) / q;
    const double C752 = -(C1473 * C7489 + C7487) / q;
    const double C798 = -(C1588 * C7488 + C7487) / q;
    const double C923 = (C907 - (C4496 * q) / C7505) / p -
                        ((C891 * C7474) / p + (C4606 * C7780) / C7505);
    const double C1415 = -((C891 * C7476) / p + (C4606 * C7781) / C7505);
    const double C1503 = -((C891 * C7479) / p + (C4606 * C7782) / C7505);
    const double C1088 = -((C1072 * C7474) / p + (C4750 * C7780) / C7505);
    const double C2458 = (C1400 - (C4546 * q) / C7505) / p -
                         ((C1072 * C7476) / p + (C4750 * C7781) / C7505);
    const double C2950 = -((C1072 * C7479) / p + (C4750 * C7782) / C7505);
    const double C1252 = -((C1236 * C7474) / p + (C4882 * C7780) / C7505);
    const double C2607 = -((C1236 * C7476) / p + (C4882 * C7781) / C7505);
    const double C3968 = (C1488 - (C4561 * q) / C7505) / p -
                         ((C1236 * C7479) / p + (C4882 * C7782) / C7505);
    const double C4629 = (C4496 - (C5065 * q) / C7505) / p -
                         ((C4606 * C7474) / p + (C5081 * C7780) / C7505);
    const double C5625 = -((C4606 * C7479) / p + (C5081 * C7782) / C7505);
    const double C4659 = -((C4750 * C7474) / p + (C5097 * C7780) / C7505);
    const double C4837 = (C4546 - (C5978 * q) / C7505) / p -
                         ((C4750 * C7476) / p + (C5097 * C7781) / C7505);
    const double C4852 = -((C4750 * C7479) / p + (C5097 * C7782) / C7505);
    const double C4690 = -((C4882 * C7474) / p + (C5128 * C7780) / C7505);
    const double C4954 = -((C4882 * C7476) / p + (C5128 * C7781) / C7505);
    const double C4969 = (C4561 - (C6109 * q) / C7505) / p -
                         ((C4882 * C7479) / p + (C5128 * C7782) / C7505);
    const double C310 = C907 / q - (C891 * C7488) / q - (C923 * p) / q;
    const double C7478 = C1415 * p;
    const double C7481 = C1503 * p;
    const double C7482 = C1088 * p;
    const double C461 = C1400 / q - (C1072 * C7489) / q - (C2458 * p) / q;
    const double C7483 = C2950 * p;
    const double C7484 = C1252 * p;
    const double C7485 = C2607 * p;
    const double C576 = C1488 / q - (C1236 * C7490) / q - (C3968 * p) / q;
    const double C361 = -(C891 * C7489 + C7478) / q;
    const double C607 = C7491 - (C1385 * C7488) / q - C7478 / q;
    const double C378 = -(C891 * C7490 + C7481) / q;
    const double C702 = C7493 - (C1473 * C7488) / q - C7481 / q;
    const double C410 = -(C1072 * C7488 + C7482) / q;
    const double C658 = C7492 - (C1385 * C7489) / q - C7482 / q;
    const double C477 = -(C1072 * C7490 + C7483) / q;
    const double C847 = C7493 - (C1588 * C7489) / q - C7483 / q;
    const double C509 = -(C1236 * C7488 + C7484) / q;
    const double C769 = C7492 - (C1473 * C7490) / q - C7484 / q;
    const double C560 = -(C1236 * C7489 + C7485) / q;
    const double C862 = C7491 - (C1588 * C7490) / q - C7485 / q;
    g[0] = C310;
    g[1] = C361;
    g[2] = C378;
    g[3] = C410;
    g[4] = C461;
    g[5] = C477;
    g[6] = C509;
    g[7] = C560;
    g[8] = C576;
    g[9] = C607;
    g[10] = C658;
    g[11] = C673;
    g[12] = C702;
    g[13] = C752;
    g[14] = C769;
    g[15] = C798;
    g[16] = C847;
    g[17] = C862;
    g[18] = C891;
    g[19] = C907;
    g[20] = C923;
    g[21] = C1072;
    g[22] = C1088;
    g[23] = C1236;
    g[24] = C1252;
    g[25] = C1385;
    g[26] = C1400;
    g[27] = C1415;
    g[28] = C1473;
    g[29] = C1488;
    g[30] = C1503;
    g[31] = C1588;
    g[32] = C1603;
    g[33] = C2458;
    g[34] = C2607;
    g[35] = C2950;
    g[36] = C3968;
    g[37] = C4496;
    g[38] = C4546;
    g[39] = C4561;
    g[40] = C4590;
    g[41] = C4591;
    g[42] = C4606;
    g[43] = C4629;
    g[44] = C4659;
    g[45] = C4690;
    g[46] = C4750;
    g[47] = C4837;
    g[48] = C4852;
    g[49] = C4882;
    g[50] = C4954;
    g[51] = C4969;
    g[52] = C4998;
    g[53] = C5014;
    g[54] = C5065;
    g[55] = C5081;
    g[56] = C5097;
    g[57] = C5128;
    g[58] = C5250;
    g[59] = C5266;
    g[60] = C5347;
    g[61] = C5625;
    g[62] = C5978;
    g[63] = C6109;
    g[64] = C6175;
    g[65] = C7080;
}
