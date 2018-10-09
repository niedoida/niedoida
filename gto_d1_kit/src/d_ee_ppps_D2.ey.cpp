/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_4_et(const double ae,
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
                            const double* const g,
                            const double* const vrx,
                            const double* const vry,
                            const double* const vrz,
                            double* const etx,
                            double* const ety,
                            double* const etz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double C871 = g[0];
    const double C888 = g[1];
    const double C964 = g[2];
    const double C1010 = g[3];
    const double C1055 = g[4];
    const double C1099 = g[5];
    const double C1144 = g[6];
    const double C1188 = g[7];
    const double C1231 = g[8];
    const double C875 = vrx[0];
    const double C876 = vrx[1];
    const double C877 = vrx[2];
    const double C892 = vrx[3];
    const double C907 = vrx[4];
    const double C922 = vrx[5];
    const double C937 = vrx[6];
    const double C952 = vrx[7];
    const double C968 = vrx[8];
    const double C983 = vrx[9];
    const double C998 = vrx[10];
    const double C1014 = vrx[11];
    const double C1043 = vrx[12];
    const double C1072 = vrx[13];
    const double C1087 = vrx[14];
    const double C1117 = vrx[15];
    const double C1132 = vrx[16];
    const double C1176 = vrx[17];
    const double C1219 = vrx[18];
    const double C1263 = vrx[19];
    const double C1279 = vry[0];
    const double C1280 = vry[1];
    const double C1281 = vry[2];
    const double C1295 = vry[3];
    const double C1310 = vry[4];
    const double C1325 = vry[5];
    const double C1340 = vry[6];
    const double C1355 = vry[7];
    const double C1370 = vry[8];
    const double C1385 = vry[9];
    const double C1400 = vry[10];
    const double C1415 = vry[11];
    const double C1444 = vry[12];
    const double C1472 = vry[13];
    const double C1487 = vry[14];
    const double C1516 = vry[15];
    const double C1531 = vry[16];
    const double C1574 = vry[17];
    const double C1616 = vry[18];
    const double C1659 = vry[19];
    const double C1675 = vrz[0];
    const double C1676 = vrz[1];
    const double C1677 = vrz[2];
    const double C1691 = vrz[3];
    const double C1706 = vrz[4];
    const double C1721 = vrz[5];
    const double C1736 = vrz[6];
    const double C1751 = vrz[7];
    const double C1766 = vrz[8];
    const double C1781 = vrz[9];
    const double C1796 = vrz[10];
    const double C1811 = vrz[11];
    const double C1840 = vrz[12];
    const double C1868 = vrz[13];
    const double C1883 = vrz[14];
    const double C1912 = vrz[15];
    const double C1927 = vrz[16];
    const double C1970 = vrz[17];
    const double C2012 = vrz[18];
    const double C2055 = vrz[19];
    const double C2074 = C1176 * p;
    const double C2073 = C1132 * p;
    const double C2072 = C1087 * p;
    const double C2071 = C1043 * p;
    const double C2070 = C998 * p;
    const double C2069 = C983 * p;
    const double C2068 = C952 * p;
    const double C2067 = C937 * p;
    const double C2066 = de * zCD;
    const double C2065 = be * zAB;
    const double C2064 = C922 * p;
    const double C2063 = C907 * p;
    const double C2062 = de * yCD;
    const double C2061 = be * yAB;
    const double C2060 = 2 * q;
    const double C2059 = de * xCD;
    const double C2058 = be * xAB;
    const double C2101 = C1574 * p;
    const double C2100 = C1531 * p;
    const double C2099 = C1487 * p;
    const double C2098 = C1444 * p;
    const double C2096 = C1400 * p;
    const double C2095 = C1385 * p;
    const double C2092 = C1355 * p;
    const double C2091 = C1340 * p;
    const double C2090 = C1325 * p;
    const double C2089 = C1310 * p;
    const double C2121 = C1970 * p;
    const double C2120 = C1927 * p;
    const double C2119 = C1883 * p;
    const double C2118 = C1840 * p;
    const double C2116 = C1796 * p;
    const double C2115 = C1781 * p;
    const double C2112 = C1751 * p;
    const double C2111 = C1736 * p;
    const double C2110 = C1721 * p;
    const double C2109 = C1706 * p;
    const double C2083 = C2071 / q;
    const double C2081 = C2069 / q;
    const double C2078 = C2065 + C2066;
    const double C2077 = C2061 + C2062;
    const double C2082 = C1014 / C2060;
    const double C2080 = C876 / C2060;
    const double C2079 = C968 / C2060;
    const double C2076 = C892 / C2060;
    const double C2097 = C1415 / C2060;
    const double C2094 = C1279 / C2060;
    const double C2093 = C1370 / C2060;
    const double C2088 = C1295 / C2060;
    const double C2117 = C1811 / C2060;
    const double C2114 = C1675 / C2060;
    const double C2113 = C1766 / C2060;
    const double C2108 = C1691 / C2060;
    const double C2075 = C2058 + C2059;
    const double C2103 = C2101 / q;
    const double C2102 = C2089 / q;
    const double C2123 = C2120 / q;
    const double C2122 = C2111 / q;
    const double C252 = -(C875 * C2078 + C2067) / q;
    const double C253 = -(C876 * C2078 + C2068) / q;
    const double C277 = -(C922 * C2078 + C2070) / q;
    const double C325 = -(C968 * C2078 + C2072) / q;
    const double C346 = -(C1072 * C2078 + C2073) / q;
    const double C436 = C1014 / q - (C1219 * C2078) / q - (C1263 * p) / q;
    const double C459 = -(C1280 * C2078 + C2091) / q;
    const double C460 = -(C1279 * C2078 + C2092) / q;
    const double C484 = -(C1325 * C2078 + C2096) / q;
    const double C532 = -(C1370 * C2078 + C2099) / q;
    const double C553 = -(C1472 * C2078 + C2100) / q;
    const double C643 = C1415 / q - (C1616 * C2078) / q - (C1659 * p) / q;
    const double C667 = (C888 * de) / q - (C1675 * C2078) / q - C2112 / q;
    const double C691 = (C964 * de) / q - (C1721 * C2078) / q - C2116 / q;
    const double C739 = (C1055 * de) / q - (C1766 * C2078) / q - C2119 / q;
    const double C850 =
        (C1231 * de) / q - (C2012 * C2078) / q + C1811 / q - (C2055 * p) / q;
    const double C244 = -(C875 * C2077 + C2063) / q;
    const double C245 = -(C876 * C2077 + C2064) / q;
    const double C293 = -(C952 * C2077 + C2070) / q;
    const double C339 = C968 / q - (C1072 * C2077) / q - (C1117 * p) / q;
    const double C386 = -(C1014 * C2077 + C2072) / q;
    const double C429 = -(C1219 * C2077 + C2074) / q;
    const double C452 = (C888 * de) / q - (C1279 * C2077) / q - C2090 / q;
    const double C500 = (C1010 * de) / q - (C1355 * C2077) / q - C2096 / q;
    const double C546 =
        (C1099 * de) / q - (C1472 * C2077) / q + C1370 / q - (C1516 * p) / q;
    const double C593 = (C1188 * de) / q - (C1415 * C2077) / q - C2099 / q;
    const double C658 = -(C1676 * C2077 + C2109) / q;
    const double C659 = -(C1675 * C2077 + C2110) / q;
    const double C707 = -(C1751 * C2077 + C2116) / q;
    const double C753 = C1766 / q - (C1868 * C2077) / q - (C1912 * p) / q;
    const double C800 = -(C1811 * C2077 + C2119) / q;
    const double C843 = -(C2012 * C2077 + C2121) / q;
    const double C362 = C2082 - (C1087 * C2077) / q - C2073 / q;
    const double C269 = C2080 - (C922 * C2077) / q - C2081;
    const double C301 = C2080 - (C952 * C2078) / q - C2083;
    const double C370 = C2079 - (C1087 * C2078) / q - C2074 / q;
    const double C317 = C2076 - (C968 * C2077) / q - (C1072 * p) / q;
    const double C394 = C2076 - (C1014 * C2078) / q - (C1219 * p) / q;
    const double C569 =
        (C1144 * de) / q - (C1487 * C2077) / q + C2097 - C2100 / q;
    const double C476 =
        (C964 * de) / q - (C1325 * C2077) / q + C2094 - C2095 / q;
    const double C508 = C2094 - (C1355 * C2078) / q - C2098 / q;
    const double C524 =
        (C1055 * de) / q - (C1370 * C2077) / q + C2088 - (C1472 * p) / q;
    const double C601 = C2088 - (C1415 * C2078) / q - (C1616 * p) / q;
    const double C683 = C2114 - (C1721 * C2077) / q - C2115 / q;
    const double C715 =
        (C1010 * de) / q - (C1751 * C2078) / q + C2114 - C2118 / q;
    const double C784 =
        (C1144 * de) / q - (C1883 * C2078) / q + C2113 - C2121 / q;
    const double C731 = C2108 - (C1766 * C2077) / q - (C1868 * p) / q;
    const double C808 =
        (C1188 * de) / q - (C1811 * C2078) / q + C2108 - (C2012 * p) / q;
    const double C236 =
        (C871 * de) / q - (C875 * C2075) / q + C876 / q - (C877 * p) / q;
    const double C237 =
        (C888 * de) / q - (C876 * C2075) / q + C2076 - (C875 * p) / q;
    const double C261 =
        (C964 * de) / q - (C922 * C2075) / q + C2079 - C2063 / q;
    const double C285 =
        (C1010 * de) / q - (C952 * C2075) / q + C2082 - C2067 / q;
    const double C309 = (C1055 * de) / q - (C968 * C2075) / q - C2064 / q;
    const double C332 = (C1099 * de) / q - (C1072 * C2075) / q - C2081;
    const double C354 = (C1144 * de) / q - (C1087 * C2075) / q - C2070 / q;
    const double C378 = (C1188 * de) / q - (C1014 * C2075) / q - C2068 / q;
    const double C422 = (C1231 * de) / q - (C1219 * C2075) / q - C2083;
    const double C443 = C1279 / q - (C1280 * C2075) / q - (C1281 * p) / q;
    const double C444 = C2088 - (C1279 * C2075) / q - (C1280 * p) / q;
    const double C492 = C2097 - (C1355 * C2075) / q - C2091 / q;
    const double C516 = -(C1370 * C2075 + C2090) / q;
    const double C539 = -(C1472 * C2075 + C2095) / q;
    const double C561 = -(C1487 * C2075 + C2096) / q;
    const double C585 = -(C1415 * C2075 + C2092) / q;
    const double C629 = -(C1616 * C2075 + C2098) / q;
    const double C650 = C1675 / q - (C1676 * C2075) / q - (C1677 * p) / q;
    const double C651 = C2108 - (C1675 * C2075) / q - (C1676 * p) / q;
    const double C675 = C2113 - (C1721 * C2075) / q - C2109 / q;
    const double C723 = -(C1766 * C2075 + C2110) / q;
    const double C746 = -(C1868 * C2075 + C2115) / q;
    const double C768 = -(C1883 * C2075 + C2116) / q;
    const double C792 = -(C1811 * C2075 + C2112) / q;
    const double C836 = -(C2012 * C2075 + C2118) / q;
    const double C577 = C2093 - (C1487 * C2078) / q - C2103;
    const double C636 = (C1231 * de) / q - (C1616 * C2077) / q - C2103;
    const double C451 = (C871 * de) / q - (C1280 * C2077) / q - C2102;
    const double C468 = C2093 - (C1325 * C2075) / q - C2102;
    const double C760 = (C1099 * de) / q - (C1868 * C2078) / q - C2123;
    const double C776 = C2117 - (C1883 * C2077) / q - C2123;
    const double C666 = (C871 * de) / q - (C1676 * C2078) / q - C2122;
    const double C699 = C2117 - (C1751 * C2075) / q - C2122;
    etx[0] = C236;
    etx[1] = C237;
    etx[2] = C244;
    etx[3] = C245;
    etx[4] = C252;
    etx[5] = C253;
    etx[6] = C261;
    etx[7] = C269;
    etx[8] = C277;
    etx[9] = C285;
    etx[10] = C293;
    etx[11] = C301;
    etx[12] = C309;
    etx[13] = C317;
    etx[14] = C325;
    etx[15] = C332;
    etx[16] = C339;
    etx[17] = C346;
    etx[18] = C354;
    etx[19] = C362;
    etx[20] = C370;
    etx[21] = C378;
    etx[22] = C386;
    etx[23] = C394;
    etx[24] = C422;
    etx[25] = C429;
    etx[26] = C436;
    ety[0] = C443;
    ety[1] = C444;
    ety[2] = C451;
    ety[3] = C452;
    ety[4] = C459;
    ety[5] = C460;
    ety[6] = C468;
    ety[7] = C476;
    ety[8] = C484;
    ety[9] = C492;
    ety[10] = C500;
    ety[11] = C508;
    ety[12] = C516;
    ety[13] = C524;
    ety[14] = C532;
    ety[15] = C539;
    ety[16] = C546;
    ety[17] = C553;
    ety[18] = C561;
    ety[19] = C569;
    ety[20] = C577;
    ety[21] = C585;
    ety[22] = C593;
    ety[23] = C601;
    ety[24] = C629;
    ety[25] = C636;
    ety[26] = C643;
    etz[0] = C650;
    etz[1] = C651;
    etz[2] = C658;
    etz[3] = C659;
    etz[4] = C666;
    etz[5] = C667;
    etz[6] = C675;
    etz[7] = C683;
    etz[8] = C691;
    etz[9] = C699;
    etz[10] = C707;
    etz[11] = C715;
    etz[12] = C723;
    etz[13] = C731;
    etz[14] = C739;
    etz[15] = C746;
    etz[16] = C753;
    etz[17] = C760;
    etz[18] = C768;
    etz[19] = C776;
    etz[20] = C784;
    etz[21] = C792;
    etz[22] = C800;
    etz[23] = C808;
    etz[24] = C836;
    etz[25] = C843;
    etz[26] = C850;
}
