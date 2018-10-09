/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1111_1_ints(const double ae,
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
    const double C12429 = 2 * q;
    const double C12813 = de * zCD;
    const double C12812 = be * zAB;
    const double C12808 = de * yCD;
    const double C12807 = be * yAB;
    const double C12802 = de * xCD;
    const double C12801 = be * xAB;
    const double C12841 = p + q;
    const double C13111 = p * q;
    const double C13110 = std::pow(Pi, 2.5);
    const double C13109 = zP - zQ;
    const double C13108 = yP - yQ;
    const double C13107 = xP - xQ;
    const double C13106 = 2 * p;
    const double C12829 = C12812 + C12813;
    const double C12828 = C12807 + C12808;
    const double C12827 = C12801 + C12802;
    const double C13112 = std::sqrt(C12841);
    const double C13119 = C13110 * kab;
    const double C13118 = C13109 * q;
    const double C13117 = C13108 * q;
    const double C13116 = C13107 * q;
    const double C13120 = C13111 * C13112;
    const double C13124 = C13119 * kcd;
    const double C5841 = (2. * C13124 * bs[0]) / C13120;
    const double C9620 = (2. * C13124 * bs[1]) / C13120;
    const double C10117 = (2. * C13124 * bs[2]) / C13120;
    const double C10353 = (2. * C13124 * bs[3]) / C13120;
    const double C10450 = (2. * C13124 * bs[4]) / C13120;
    const double C12804 = C5841 / C12429;
    const double C13105 = C9620 * q;
    const double C4672 = -((C5841 * C12801) / p + (C9620 * C13116) / C12841);
    const double C5182 = -((C5841 * C12807) / p + (C9620 * C13117) / C12841);
    const double C5578 = -((C5841 * C12812) / p + (C9620 * C13118) / C12841);
    const double C13113 = C10117 * q;
    const double C9600 = -((C9620 * C12801) / p + (C10117 * C13116) / C12841);
    const double C9672 = -((C9620 * C12807) / p + (C10117 * C13117) / C12841);
    const double C9702 = -((C9620 * C12812) / p + (C10117 * C13118) / C12841);
    const double C13114 = C10353 * q;
    const double C10140 = -((C10117 * C12801) / p + (C10353 * C13116) / C12841);
    const double C11066 = -((C10117 * C12807) / p + (C10353 * C13117) / C12841);
    const double C11082 = -((C10117 * C12812) / p + (C10353 * C13118) / C12841);
    const double C10397 = -((C10353 * C12801) / p + (C10450 * C13116) / C12841);
    const double C11292 = -((C10353 * C12807) / p + (C10450 * C13117) / C12841);
    const double C12183 = -((C10353 * C12812) / p + (C10450 * C13118) / C12841);
    const double C13115 = C13105 / C12841;
    const double C12803 = C4672 / C12429;
    const double C12427 = -(C5841 * C12827 + C4672 * p) / q;
    const double C12816 = C5182 / C12429;
    const double C12443 = -(C5841 * C12828 + C5182 * p) / q;
    const double C12819 = C5578 / C12429;
    const double C12451 = -(C5841 * C12829 + C5578 * p) / q;
    const double C13121 = C13113 / C12841;
    const double C4911 = -((C5182 * C12801) / p + (C9672 * C13116) / C12841);
    const double C5048 = -((C5578 * C12801) / p + (C9702 * C13116) / C12841);
    const double C5446 = -((C5578 * C12807) / p + (C9702 * C13117) / C12841);
    const double C13122 = C13114 / C12841;
    const double C9748 = -((C9702 * C12807) / p + (C11082 * C13117) / C12841);
    const double C13123 = C5841 - C13115;
    const double C12805 = C12443 / C12429;
    const double C12806 = C12451 / C12429;
    const double C13125 = C9620 - C13121;
    const double C12809 = C4911 * p;
    const double C12814 = C5048 * p;
    const double C12817 = C5446 * p;
    const double C13126 = C10117 - C13122;
    const double C6137 = -((C5446 * C12801) / p + (C9748 * C13116) / C12841);
    const double C13127 = C13123 / C13106;
    const double C13128 = C13125 / C13106;
    const double C1274 = -(C4672 * C12828 + C12809) / q;
    const double C1497 = -(C5182 * C12827 + C12809) / q;
    const double C1304 = -(C4672 * C12829 + C12814) / q;
    const double C1740 = -(C5578 * C12827 + C12814) / q;
    const double C1557 = -(C5182 * C12829 + C12817) / q;
    const double C1770 = -(C5578 * C12828 + C12817) / q;
    const double C13129 = C13126 / C13106;
    const double C12823 = C6137 * p;
    const double C4657 =
        C13127 - ((C4672 * C12801) / p + (C9600 * C13116) / C12841);
    const double C5310 =
        C13127 - ((C5182 * C12807) / p + (C9672 * C13117) / C12841);
    const double C5706 =
        C13127 - ((C5578 * C12812) / p + (C9702 * C13118) / C12841);
    const double C9635 =
        C13128 - ((C9600 * C12801) / p + (C10140 * C13116) / C12841);
    const double C9732 =
        C13128 - ((C9672 * C12807) / p + (C11066 * C13117) / C12841);
    const double C9778 =
        C13128 - ((C9702 * C12812) / p + (C11082 * C13118) / C12841);
    const double C10228 =
        C13129 - ((C10140 * C12801) / p + (C10397 * C13116) / C12841);
    const double C10244 =
        C13129 - ((C11066 * C12807) / p + (C11292 * C13117) / C12841);
    const double C10274 =
        C13129 - ((C11082 * C12812) / p + (C12183 * C13118) / C12841);
    const double C4942 = -(C4911 * C12829 + C12823) / q;
    const double C5064 = -(C5048 * C12828 + C12823) / q;
    const double C5430 = -(C5446 * C12827 + C12823) / q;
    const double C1244 = C12804 - (C4672 * C12827) / q - (C4657 * p) / q;
    const double C1527 = C12804 - (C5182 * C12828) / q - (C5310 * p) / q;
    const double C1800 = C12804 - (C5578 * C12829) / q - (C5706 * p) / q;
    const double C5825 = (C4672 - (C9600 * q) / C12841) / p -
                         ((C4657 * C12801) / p + (C9635 * C13116) / C12841);
    const double C5959 = -((C4657 * C12807) / p + (C9635 * C13117) / C12841);
    const double C6019 = -((C4657 * C12812) / p + (C9635 * C13118) / C12841);
    const double C6077 = -((C5310 * C12801) / p + (C9732 * C13116) / C12841);
    const double C7674 = (C5182 - (C9672 * q) / C12841) / p -
                         ((C5310 * C12807) / p + (C9732 * C13117) / C12841);
    const double C7734 = -((C5310 * C12812) / p + (C9732 * C13118) / C12841);
    const double C6181 = -((C5706 * C12801) / p + (C9778 * C13116) / C12841);
    const double C7792 = -((C5706 * C12807) / p + (C9778 * C13117) / C12841);
    const double C9387 = (C5578 - (C9702 * q) / C12841) / p -
                         ((C5706 * C12812) / p + (C9778 * C13118) / C12841);
    const double C9892 = (C9600 - (C10140 * q) / C12841) / p -
                         ((C9635 * C12801) / p + (C10228 * C13116) / C12841);
    const double C10840 = -((C9635 * C12812) / p + (C10228 * C13118) / C12841);
    const double C9936 = -((C9732 * C12801) / p + (C10244 * C13116) / C12841);
    const double C9983 = (C9672 - (C11066 * q) / C12841) / p -
                         ((C9732 * C12807) / p + (C10244 * C13117) / C12841);
    const double C9999 = -((C9732 * C12812) / p + (C10244 * C13118) / C12841);
    const double C9967 = -((C9778 * C12801) / p + (C10274 * C13116) / C12841);
    const double C10015 = -((C9778 * C12807) / p + (C10274 * C13117) / C12841);
    const double C10031 = (C9702 - (C11082 * q) / C12841) / p -
                          ((C9778 * C12812) / p + (C10274 * C13118) / C12841);
    const double C12811 = C4942 * p;
    const double C1750 = -(C1770 * C12827 + C5064 * p) / q;
    const double C4624 = C4672 / q - (C4657 * C12827) / q - (C5825 * p) / q;
    const double C12820 = C5959 * p;
    const double C12821 = C6019 * p;
    const double C12822 = C6077 * p;
    const double C5325 = C5182 / q - (C5310 * C12828) / q - (C7674 * p) / q;
    const double C12825 = C7734 * p;
    const double C12824 = C6181 * p;
    const double C12826 = C7792 * p;
    const double C5737 = C5578 / q - (C5706 * C12829) / q - (C9387 * p) / q;
    const double C1294 = -(C1304 * C12828 + C12811) / q;
    const double C1517 = -(C1557 * C12827 + C12811) / q;
    const double C1234 =
        C12427 / C12429 - (C1244 * C12827) / q + C12803 - (C4624 * p) / q;
    const double C4688 = -(C4657 * C12828 + C12820) / q;
    const double C4895 = C12816 - (C4911 * C12827) / q - C12820 / q;
    const double C4718 = -(C4657 * C12829 + C12821) / q;
    const double C5032 = C12819 - (C5048 * C12827) / q - C12821 / q;
    const double C4927 = C12803 - (C4911 * C12828) / q - C12822 / q;
    const double C5294 = -(C5310 * C12827 + C12822) / q;
    const double C1537 =
        C12805 - (C1527 * C12828) / q + C12816 - (C5325 * p) / q;
    const double C5340 = -(C5310 * C12829 + C12825) / q;
    const double C5461 = C12819 - (C5446 * C12828) / q - C12825 / q;
    const double C5080 = C12803 - (C5048 * C12829) / q - C12824 / q;
    const double C5690 = -(C5706 * C12827 + C12824) / q;
    const double C5476 = C12816 - (C5446 * C12829) / q - C12826 / q;
    const double C5721 = -(C5706 * C12828 + C12826) / q;
    const double C1810 =
        C12806 - (C1800 * C12829) / q + C12819 - (C5737 * p) / q;
    const double C1254 = C12805 - (C1274 * C12827) / q - (C4688 * p) / q;
    const double C1487 = C12816 - (C1497 * C12827) / q - (C4895 * p) / q;
    const double C1264 = C12806 - (C1304 * C12827) / q - (C4718 * p) / q;
    const double C1730 = C12819 - (C1740 * C12827) / q - (C5032 * p) / q;
    const double C12810 = C4927 * p;
    const double C1547 = C12806 - (C1557 * C12828) / q - (C5340 * p) / q;
    const double C1780 = C12819 - (C1770 * C12828) / q - (C5461 * p) / q;
    const double C12815 = C5080 * p;
    const double C12818 = C5476 * p;
    const double C1284 = C12803 - (C1274 * C12828) / q - C12810 / q;
    const double C1507 = -(C1527 * C12827 + C12810) / q;
    const double C1314 = C12803 - (C1304 * C12829) / q - C12815 / q;
    const double C1760 = -(C1800 * C12827 + C12815) / q;
    const double C1567 = C12816 - (C1557 * C12829) / q - C12818 / q;
    const double C1790 = -(C1800 * C12828 + C12818) / q;
    g[0] = C1234;
    g[1] = C1244;
    g[2] = C1254;
    g[3] = C1264;
    g[4] = C1274;
    g[5] = C1284;
    g[6] = C1294;
    g[7] = C1304;
    g[8] = C1314;
    g[9] = C1487;
    g[10] = C1497;
    g[11] = C1507;
    g[12] = C1517;
    g[13] = C1527;
    g[14] = C1537;
    g[15] = C1547;
    g[16] = C1557;
    g[17] = C1567;
    g[18] = C1730;
    g[19] = C1740;
    g[20] = C1750;
    g[21] = C1760;
    g[22] = C1770;
    g[23] = C1780;
    g[24] = C1790;
    g[25] = C1800;
    g[26] = C1810;
    g[27] = C4624;
    g[28] = C4657;
    g[29] = C4672;
    g[30] = C4688;
    g[31] = C4718;
    g[32] = C4895;
    g[33] = C4911;
    g[34] = C4927;
    g[35] = C4942;
    g[36] = C5032;
    g[37] = C5048;
    g[38] = C5064;
    g[39] = C5080;
    g[40] = C5182;
    g[41] = C5294;
    g[42] = C5310;
    g[43] = C5325;
    g[44] = C5340;
    g[45] = C5430;
    g[46] = C5446;
    g[47] = C5461;
    g[48] = C5476;
    g[49] = C5578;
    g[50] = C5690;
    g[51] = C5706;
    g[52] = C5721;
    g[53] = C5737;
    g[54] = C5825;
    g[55] = C5841;
    g[56] = C5959;
    g[57] = C6019;
    g[58] = C6077;
    g[59] = C6137;
    g[60] = C6181;
    g[61] = C7674;
    g[62] = C7734;
    g[63] = C7792;
    g[64] = C9387;
    g[65] = C9600;
    g[66] = C9620;
    g[67] = C9635;
    g[68] = C9672;
    g[69] = C9702;
    g[70] = C9732;
    g[71] = C9748;
    g[72] = C9778;
    g[73] = C9892;
    g[74] = C9936;
    g[75] = C9967;
    g[76] = C9983;
    g[77] = C9999;
    g[78] = C10015;
    g[79] = C10031;
    g[80] = C10117;
    g[81] = C10140;
    g[82] = C10228;
    g[83] = C10244;
    g[84] = C10274;
    g[85] = C10353;
    g[86] = C10397;
    g[87] = C10450;
    g[88] = C10840;
    g[89] = C11066;
    g[90] = C11082;
    g[91] = C11292;
    g[92] = C12183;
}
