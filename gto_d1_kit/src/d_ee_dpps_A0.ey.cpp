/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2110_1_ints(const double ae,
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
    const double C7133 = 2 * q;
    const double C7127 = de * zCD;
    const double C7126 = be * zAB;
    const double C7124 = de * yCD;
    const double C7123 = be * yAB;
    const double C7122 = de * xCD;
    const double C7121 = be * xAB;
    const double C7152 = p + q;
    const double C7423 = p * q;
    const double C7422 = std::pow(Pi, 2.5);
    const double C7420 = zP - zQ;
    const double C7419 = yP - yQ;
    const double C7418 = 2 * p;
    const double C7416 = xP - xQ;
    const double C7137 = C7126 + C7127;
    const double C7136 = C7123 + C7124;
    const double C7135 = C7121 + C7122;
    const double C7424 = std::sqrt(C7152);
    const double C7431 = C7422 * kab;
    const double C7429 = C7420 * q;
    const double C7428 = C7419 * q;
    const double C7426 = C7416 * q;
    const double C7432 = C7423 * C7424;
    const double C7436 = C7431 * kcd;
    const double C4202 = (2. * C7436 * bs[0]) / C7432;
    const double C4203 = (2. * C7436 * bs[1]) / C7432;
    const double C4663 = (2. * C7436 * bs[2]) / C7432;
    const double C4906 = (2. * C7436 * bs[3]) / C7432;
    const double C5003 = (2. * C7436 * bs[4]) / C7432;
    const double C7417 = C4203 * q;
    const double C4148 = -((C4202 * C7121) / p + (C4203 * C7426) / C7152);
    const double C4274 = -((C4202 * C7123) / p + (C4203 * C7428) / C7152);
    const double C4323 = -((C4202 * C7126) / p + (C4203 * C7429) / C7152);
    const double C7421 = C4663 * q;
    const double C4149 = -((C4203 * C7121) / p + (C4663 * C7426) / C7152);
    const double C4275 = -((C4203 * C7123) / p + (C4663 * C7428) / C7152);
    const double C4324 = -((C4203 * C7126) / p + (C4663 * C7429) / C7152);
    const double C7425 = C4906 * q;
    const double C4693 = -((C4663 * C7121) / p + (C4906 * C7426) / C7152);
    const double C5621 = -((C4663 * C7123) / p + (C4906 * C7428) / C7152);
    const double C5766 = -((C4663 * C7126) / p + (C4906 * C7429) / C7152);
    const double C4922 = -((C4906 * C7121) / p + (C5003 * C7426) / C7152);
    const double C5832 = -((C4906 * C7123) / p + (C5003 * C7428) / C7152);
    const double C6738 = -((C4906 * C7126) / p + (C5003 * C7429) / C7152);
    const double C7427 = C7417 / C7152;
    const double C7139 = C4148 / C7133;
    const double C7138 = C4274 / C7133;
    const double C7140 = C4323 / C7133;
    const double C7430 = C7421 / C7152;
    const double C2446 = -((C4274 * C7121) / p + (C4275 * C7426) / C7152);
    const double C2533 = -((C4323 * C7121) / p + (C4324 * C7426) / C7152);
    const double C2576 = -((C4323 * C7123) / p + (C4324 * C7428) / C7152);
    const double C7433 = C7425 / C7152;
    const double C4647 = -((C4324 * C7123) / p + (C5766 * C7428) / C7152);
    const double C7434 = C4202 - C7427;
    const double C7435 = C4203 - C7430;
    const double C7437 = C4663 - C7433;
    const double C2490 = -((C2576 * C7121) / p + (C4647 * C7426) / C7152);
    const double C7438 = C7434 / C7418;
    const double C7439 = C7435 / C7418;
    const double C7440 = C7437 / C7418;
    const double C7134 = C2490 * p;
    const double C1915 =
        C7438 - ((C4148 * C7121) / p + (C4149 * C7426) / C7152);
    const double C2099 =
        C7438 - ((C4274 * C7123) / p + (C4275 * C7428) / C7152);
    const double C2282 =
        C7438 - ((C4323 * C7126) / p + (C4324 * C7429) / C7152);
    const double C4170 =
        C7439 - ((C4149 * C7121) / p + (C4693 * C7426) / C7152);
    const double C4371 =
        C7439 - ((C4275 * C7123) / p + (C5621 * C7428) / C7152);
    const double C4531 =
        C7439 - ((C4324 * C7126) / p + (C5766 * C7429) / C7152);
    const double C4709 =
        C7440 - ((C4693 * C7121) / p + (C4922 * C7426) / C7152);
    const double C4739 =
        C7440 - ((C5621 * C7123) / p + (C5832 * C7428) / C7152);
    const double C4798 =
        C7440 - ((C5766 * C7126) / p + (C6738 * C7429) / C7152);
    const double C706 = -(C2446 * C7137 + C7134) / q;
    const double C777 = -(C2533 * C7136 + C7134) / q;
    const double C845 = -(C2576 * C7135 + C7134) / q;
    const double C1897 = (C4148 - (C4149 * q) / C7152) / p -
                         ((C1915 * C7121) / p + (C4170 * C7426) / C7152);
    const double C1991 = -((C1915 * C7123) / p + (C4170 * C7428) / C7152);
    const double C2037 = -((C1915 * C7126) / p + (C4170 * C7429) / C7152);
    const double C2082 = -((C2099 * C7121) / p + (C4371 * C7426) / C7152);
    const double C2175 = (C4274 - (C4275 * q) / C7152) / p -
                         ((C2099 * C7123) / p + (C4371 * C7428) / C7152);
    const double C2220 = -((C2099 * C7126) / p + (C4371 * C7429) / C7152);
    const double C2265 = -((C2282 * C7121) / p + (C4531 * C7426) / C7152);
    const double C2358 = -((C2282 * C7123) / p + (C4531 * C7428) / C7152);
    const double C2402 = (C4323 - (C4324 * q) / C7152) / p -
                         ((C2282 * C7126) / p + (C4531 * C7429) / C7152);
    const double C4186 = (C4149 - (C4693 * q) / C7152) / p -
                         ((C4170 * C7121) / p + (C4709 * C7426) / C7152);
    const double C5202 = -((C4170 * C7126) / p + (C4709 * C7429) / C7152);
    const double C4291 = -((C4371 * C7121) / p + (C4739 * C7426) / C7152);
    const double C4386 = (C4275 - (C5621 * q) / C7152) / p -
                         ((C4371 * C7123) / p + (C4739 * C7428) / C7152);
    const double C4430 = -((C4371 * C7126) / p + (C4739 * C7429) / C7152);
    const double C4340 = -((C4531 * C7121) / p + (C4798 * C7426) / C7152);
    const double C4546 = -((C4531 * C7123) / p + (C4798 * C7428) / C7152);
    const double C4575 = (C4324 - (C5766 * q) / C7152) / p -
                         ((C4531 * C7126) / p + (C4798 * C7429) / C7152);
    const double C425 = C4148 / q - (C1915 * C7135) / q - (C1897 * p) / q;
    const double C7125 = C1991 * p;
    const double C7128 = C2037 * p;
    const double C7129 = C2082 * p;
    const double C523 = C4274 / q - (C2099 * C7136) / q - (C2175 * p) / q;
    const double C7130 = C2220 * p;
    const double C7131 = C2265 * p;
    const double C7132 = C2358 * p;
    const double C621 = C4323 / q - (C2282 * C7137) / q - (C2402 * p) / q;
    const double C436 = -(C1915 * C7136 + C7125) / q;
    const double C686 = C7138 - (C2446 * C7135) / q - C7125 / q;
    const double C447 = -(C1915 * C7137 + C7128) / q;
    const double C767 = C7140 - (C2533 * C7135) / q - C7128 / q;
    const double C512 = -(C2099 * C7135 + C7129) / q;
    const double C696 = C7139 - (C2446 * C7136) / q - C7129 / q;
    const double C534 = -(C2099 * C7137 + C7130) / q;
    const double C855 = C7140 - (C2576 * C7136) / q - C7130 / q;
    const double C599 = -(C2282 * C7135 + C7131) / q;
    const double C787 = C7139 - (C2533 * C7137) / q - C7131 / q;
    const double C610 = -(C2282 * C7136 + C7132) / q;
    const double C865 = C7138 - (C2576 * C7137) / q - C7132 / q;
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
    g[34] = C4148;
    g[35] = C4149;
    g[36] = C4170;
    g[37] = C4186;
    g[38] = C4202;
    g[39] = C4203;
    g[40] = C4274;
    g[41] = C4275;
    g[42] = C4291;
    g[43] = C4323;
    g[44] = C4324;
    g[45] = C4340;
    g[46] = C4371;
    g[47] = C4386;
    g[48] = C4430;
    g[49] = C4531;
    g[50] = C4546;
    g[51] = C4575;
    g[52] = C4647;
    g[53] = C4663;
    g[54] = C4693;
    g[55] = C4709;
    g[56] = C4739;
    g[57] = C4798;
    g[58] = C4906;
    g[59] = C4922;
    g[60] = C5003;
    g[61] = C5202;
    g[62] = C5621;
    g[63] = C5766;
    g[64] = C5832;
    g[65] = C6738;
}
