/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_2_ints(const double ae,
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
    const double C7162 = 2 * q;
    const double C7156 = de * zCD;
    const double C7155 = be * zAB;
    const double C7153 = de * yCD;
    const double C7152 = be * yAB;
    const double C7151 = de * xCD;
    const double C7150 = be * xAB;
    const double C7181 = p + q;
    const double C7452 = p * q;
    const double C7451 = std::pow(Pi, 2.5);
    const double C7449 = zP - zQ;
    const double C7448 = yP - yQ;
    const double C7447 = 2 * p;
    const double C7445 = xP - xQ;
    const double C7166 = C7155 + C7156;
    const double C7165 = C7152 + C7153;
    const double C7164 = C7150 + C7151;
    const double C7453 = std::sqrt(C7181);
    const double C7460 = C7451 * kab;
    const double C7458 = C7449 * q;
    const double C7457 = C7448 * q;
    const double C7455 = C7445 * q;
    const double C7461 = C7452 * C7453;
    const double C7465 = C7460 * kcd;
    const double C4220 = (2. * C7465 * bs[0]) / C7461;
    const double C4221 = (2. * C7465 * bs[1]) / C7461;
    const double C4698 = (2. * C7465 * bs[2]) / C7461;
    const double C4917 = (2. * C7465 * bs[3]) / C7461;
    const double C5021 = (2. * C7465 * bs[4]) / C7461;
    const double C7446 = C4221 * q;
    const double C4186 = -((C4220 * C7150) / p + (C4221 * C7455) / C7181);
    const double C4292 = -((C4220 * C7152) / p + (C4221 * C7457) / C7181);
    const double C4341 = -((C4220 * C7155) / p + (C4221 * C7458) / C7181);
    const double C7450 = C4698 * q;
    const double C4187 = -((C4221 * C7150) / p + (C4698 * C7455) / C7181);
    const double C4293 = -((C4221 * C7152) / p + (C4698 * C7457) / C7181);
    const double C4342 = -((C4221 * C7155) / p + (C4698 * C7458) / C7181);
    const double C7454 = C4917 * q;
    const double C4681 = -((C4698 * C7150) / p + (C4917 * C7455) / C7181);
    const double C5639 = -((C4698 * C7152) / p + (C4917 * C7457) / C7181);
    const double C5784 = -((C4698 * C7155) / p + (C4917 * C7458) / C7181);
    const double C4940 = -((C4917 * C7150) / p + (C5021 * C7455) / C7181);
    const double C5850 = -((C4917 * C7152) / p + (C5021 * C7457) / C7181);
    const double C6756 = -((C4917 * C7155) / p + (C5021 * C7458) / C7181);
    const double C7456 = C7446 / C7181;
    const double C7168 = C4186 / C7162;
    const double C7167 = C4292 / C7162;
    const double C7169 = C4341 / C7162;
    const double C7459 = C7450 / C7181;
    const double C2446 = -((C4292 * C7150) / p + (C4293 * C7455) / C7181);
    const double C2533 = -((C4341 * C7150) / p + (C4342 * C7455) / C7181);
    const double C2576 = -((C4341 * C7152) / p + (C4342 * C7457) / C7181);
    const double C7462 = C7454 / C7181;
    const double C4665 = -((C4342 * C7152) / p + (C5784 * C7457) / C7181);
    const double C7463 = C4220 - C7456;
    const double C7464 = C4221 - C7459;
    const double C7466 = C4698 - C7462;
    const double C2490 = -((C2576 * C7150) / p + (C4665 * C7455) / C7181);
    const double C7467 = C7463 / C7447;
    const double C7468 = C7464 / C7447;
    const double C7469 = C7466 / C7447;
    const double C7163 = C2490 * p;
    const double C1915 =
        C7467 - ((C4186 * C7150) / p + (C4187 * C7455) / C7181);
    const double C2099 =
        C7467 - ((C4292 * C7152) / p + (C4293 * C7457) / C7181);
    const double C2282 =
        C7467 - ((C4341 * C7155) / p + (C4342 * C7458) / C7181);
    const double C4166 =
        C7468 - ((C4187 * C7150) / p + (C4681 * C7455) / C7181);
    const double C4375 =
        C7468 - ((C4293 * C7152) / p + (C5639 * C7457) / C7181);
    const double C4535 =
        C7468 - ((C4342 * C7155) / p + (C5784 * C7458) / C7181);
    const double C4727 =
        C7469 - ((C4681 * C7150) / p + (C4940 * C7455) / C7181);
    const double C4757 =
        C7469 - ((C5639 * C7152) / p + (C5850 * C7457) / C7181);
    const double C4816 =
        C7469 - ((C5784 * C7155) / p + (C6756 * C7458) / C7181);
    const double C706 = -(C2446 * C7166 + C7163) / q;
    const double C777 = -(C2533 * C7165 + C7163) / q;
    const double C845 = -(C2576 * C7164 + C7163) / q;
    const double C1897 = (C4186 - (C4187 * q) / C7181) / p -
                         ((C1915 * C7150) / p + (C4166 * C7455) / C7181);
    const double C1991 = -((C1915 * C7152) / p + (C4166 * C7457) / C7181);
    const double C2037 = -((C1915 * C7155) / p + (C4166 * C7458) / C7181);
    const double C2082 = -((C2099 * C7150) / p + (C4375 * C7455) / C7181);
    const double C2175 = (C4292 - (C4293 * q) / C7181) / p -
                         ((C2099 * C7152) / p + (C4375 * C7457) / C7181);
    const double C2220 = -((C2099 * C7155) / p + (C4375 * C7458) / C7181);
    const double C2265 = -((C2282 * C7150) / p + (C4535 * C7455) / C7181);
    const double C2358 = -((C2282 * C7152) / p + (C4535 * C7457) / C7181);
    const double C2402 = (C4341 - (C4342 * q) / C7181) / p -
                         ((C2282 * C7155) / p + (C4535 * C7458) / C7181);
    const double C4204 = (C4187 - (C4681 * q) / C7181) / p -
                         ((C4166 * C7150) / p + (C4727 * C7455) / C7181);
    const double C5220 = -((C4166 * C7155) / p + (C4727 * C7458) / C7181);
    const double C4309 = -((C4375 * C7150) / p + (C4757 * C7455) / C7181);
    const double C4404 = (C4293 - (C5639 * q) / C7181) / p -
                         ((C4375 * C7152) / p + (C4757 * C7457) / C7181);
    const double C4448 = -((C4375 * C7155) / p + (C4757 * C7458) / C7181);
    const double C4358 = -((C4535 * C7150) / p + (C4816 * C7455) / C7181);
    const double C4564 = -((C4535 * C7152) / p + (C4816 * C7457) / C7181);
    const double C4593 = (C4342 - (C5784 * q) / C7181) / p -
                         ((C4535 * C7155) / p + (C4816 * C7458) / C7181);
    const double C425 = C4186 / q - (C1915 * C7164) / q - (C1897 * p) / q;
    const double C7154 = C1991 * p;
    const double C7157 = C2037 * p;
    const double C7158 = C2082 * p;
    const double C523 = C4292 / q - (C2099 * C7165) / q - (C2175 * p) / q;
    const double C7159 = C2220 * p;
    const double C7160 = C2265 * p;
    const double C7161 = C2358 * p;
    const double C621 = C4341 / q - (C2282 * C7166) / q - (C2402 * p) / q;
    const double C436 = -(C1915 * C7165 + C7154) / q;
    const double C686 = C7167 - (C2446 * C7164) / q - C7154 / q;
    const double C447 = -(C1915 * C7166 + C7157) / q;
    const double C767 = C7169 - (C2533 * C7164) / q - C7157 / q;
    const double C512 = -(C2099 * C7164 + C7158) / q;
    const double C696 = C7168 - (C2446 * C7165) / q - C7158 / q;
    const double C534 = -(C2099 * C7166 + C7159) / q;
    const double C855 = C7169 - (C2576 * C7165) / q - C7159 / q;
    const double C599 = -(C2282 * C7164 + C7160) / q;
    const double C787 = C7168 - (C2533 * C7166) / q - C7160 / q;
    const double C610 = -(C2282 * C7165 + C7161) / q;
    const double C865 = C7167 - (C2576 * C7166) / q - C7161 / q;
    g[0] = C425;
    g[1] = C436;
    g[2] = C447;
    g[3] = C512;
    g[4] = C523;
    g[5] = C534;
    g[6] = C599;
    g[7] = C610;
    g[8] = C621;
    g[9] = C686;
    g[10] = C696;
    g[11] = C706;
    g[12] = C767;
    g[13] = C777;
    g[14] = C787;
    g[15] = C845;
    g[16] = C855;
    g[17] = C865;
    g[18] = C1897;
    g[19] = C1915;
    g[20] = C1991;
    g[21] = C2037;
    g[22] = C2082;
    g[23] = C2099;
    g[24] = C2175;
    g[25] = C2220;
    g[26] = C2265;
    g[27] = C2282;
    g[28] = C2358;
    g[29] = C2402;
    g[30] = C2446;
    g[31] = C2490;
    g[32] = C2533;
    g[33] = C2576;
    g[34] = C4166;
    g[35] = C4186;
    g[36] = C4187;
    g[37] = C4204;
    g[38] = C4220;
    g[39] = C4221;
    g[40] = C4292;
    g[41] = C4293;
    g[42] = C4309;
    g[43] = C4341;
    g[44] = C4342;
    g[45] = C4358;
    g[46] = C4375;
    g[47] = C4404;
    g[48] = C4448;
    g[49] = C4535;
    g[50] = C4564;
    g[51] = C4593;
    g[52] = C4665;
    g[53] = C4681;
    g[54] = C4698;
    g[55] = C4727;
    g[56] = C4757;
    g[57] = C4816;
    g[58] = C4917;
    g[59] = C4940;
    g[60] = C5021;
    g[61] = C5220;
    g[62] = C5639;
    g[63] = C5784;
    g[64] = C5850;
    g[65] = C6756;
}
