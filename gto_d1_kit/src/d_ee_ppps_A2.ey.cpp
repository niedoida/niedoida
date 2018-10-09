/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_1_et(const double ae,
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
    const double C961 = g[9];
    const double C978 = g[10];
    const double C1054 = g[11];
    const double C1100 = g[12];
    const double C1145 = g[13];
    const double C1189 = g[14];
    const double C1234 = g[15];
    const double C1278 = g[16];
    const double C1321 = g[17];
    const double C965 = vrx[0];
    const double C966 = vrx[1];
    const double C967 = vrx[2];
    const double C982 = vrx[3];
    const double C997 = vrx[4];
    const double C1012 = vrx[5];
    const double C1027 = vrx[6];
    const double C1042 = vrx[7];
    const double C1058 = vrx[8];
    const double C1073 = vrx[9];
    const double C1088 = vrx[10];
    const double C1104 = vrx[11];
    const double C1133 = vrx[12];
    const double C1162 = vrx[13];
    const double C1177 = vrx[14];
    const double C1207 = vrx[15];
    const double C1222 = vrx[16];
    const double C1266 = vrx[17];
    const double C1309 = vrx[18];
    const double C1353 = vrx[19];
    const double C1369 = vry[0];
    const double C1370 = vry[1];
    const double C1371 = vry[2];
    const double C1385 = vry[3];
    const double C1400 = vry[4];
    const double C1415 = vry[5];
    const double C1430 = vry[6];
    const double C1445 = vry[7];
    const double C1460 = vry[8];
    const double C1475 = vry[9];
    const double C1490 = vry[10];
    const double C1505 = vry[11];
    const double C1534 = vry[12];
    const double C1562 = vry[13];
    const double C1577 = vry[14];
    const double C1606 = vry[15];
    const double C1621 = vry[16];
    const double C1664 = vry[17];
    const double C1706 = vry[18];
    const double C1749 = vry[19];
    const double C1765 = vrz[0];
    const double C1766 = vrz[1];
    const double C1767 = vrz[2];
    const double C1781 = vrz[3];
    const double C1796 = vrz[4];
    const double C1811 = vrz[5];
    const double C1826 = vrz[6];
    const double C1841 = vrz[7];
    const double C1856 = vrz[8];
    const double C1871 = vrz[9];
    const double C1886 = vrz[10];
    const double C1901 = vrz[11];
    const double C1930 = vrz[12];
    const double C1958 = vrz[13];
    const double C1973 = vrz[14];
    const double C2002 = vrz[15];
    const double C2017 = vrz[16];
    const double C2060 = vrz[17];
    const double C2102 = vrz[18];
    const double C2145 = vrz[19];
    const double C2164 = C1266 * p;
    const double C2163 = C1222 * p;
    const double C2162 = C1177 * p;
    const double C2161 = C1133 * p;
    const double C2160 = C1088 * p;
    const double C2159 = C1073 * p;
    const double C2158 = C1042 * p;
    const double C2157 = C1027 * p;
    const double C2156 = de * zCD;
    const double C2155 = be * zAB;
    const double C2154 = C1012 * p;
    const double C2153 = C997 * p;
    const double C2152 = de * yCD;
    const double C2151 = be * yAB;
    const double C2150 = 2 * q;
    const double C2149 = de * xCD;
    const double C2148 = be * xAB;
    const double C2189 = C1664 * p;
    const double C2188 = C1621 * p;
    const double C2187 = C1577 * p;
    const double C2186 = C1534 * p;
    const double C2184 = C1490 * p;
    const double C2183 = C1475 * p;
    const double C2180 = C1445 * p;
    const double C2179 = C1430 * p;
    const double C2178 = C1415 * p;
    const double C2177 = C1400 * p;
    const double C2207 = C2060 * p;
    const double C2206 = C2017 * p;
    const double C2205 = C1973 * p;
    const double C2204 = C1930 * p;
    const double C2202 = C1886 * p;
    const double C2201 = C1871 * p;
    const double C2198 = C1841 * p;
    const double C2197 = C1826 * p;
    const double C2196 = C1811 * p;
    const double C2195 = C1796 * p;
    const double C2168 = C2155 + C2156;
    const double C2167 = C2151 + C2152;
    const double C2171 = C1104 / C2150;
    const double C2170 = C965 / C2150;
    const double C2169 = C1058 / C2150;
    const double C2166 = C982 / C2150;
    const double C2185 = C1505 / C2150;
    const double C2182 = C1369 / C2150;
    const double C2181 = C1460 / C2150;
    const double C2176 = C1385 / C2150;
    const double C2203 = C1901 / C2150;
    const double C2200 = C1765 / C2150;
    const double C2199 = C1856 / C2150;
    const double C2194 = C1781 / C2150;
    const double C2165 = C2148 + C2149;
    const double C258 = -(C966 * C2168 + C2157) / q;
    const double C259 = -(C965 * C2168 + C2158) / q;
    const double C286 = -(C1012 * C2168 + C2160) / q;
    const double C343 = -(C1058 * C2168 + C2162) / q;
    const double C367 = -(C1162 * C2168 + C2163) / q;
    const double C472 = C1104 / q - (C1309 * C2168) / q - (C1353 * p) / q;
    const double C498 = -(C1370 * C2168 + C2179) / q;
    const double C499 = -(C1369 * C2168 + C2180) / q;
    const double C526 = -(C1415 * C2168 + C2184) / q;
    const double C580 = -(C1460 * C2168 + C2187) / q;
    const double C604 = -(C1562 * C2168 + C2188) / q;
    const double C706 = C1505 / q - (C1706 * C2168) / q - (C1749 * p) / q;
    const double C732 = -(C961 * be + C1766 * C2168 + C2197) / q;
    const double C733 = -(C978 * be + C1765 * C2168 + C2198) / q;
    const double C760 = -(C1054 * be + C1811 * C2168 + C2202) / q;
    const double C814 = -(C1145 * be + C1856 * C2168 + C2205) / q;
    const double C838 = -(C1189 * be + C1958 * C2168 + C2206) / q;
    const double C940 =
        C1901 / q - (C1321 * be + C2102 * C2168) / q - (C2145 * p) / q;
    const double C248 = -(C966 * C2167 + C2153) / q;
    const double C249 = -(C965 * C2167 + C2154) / q;
    const double C304 = -(C1042 * C2167 + C2160) / q;
    const double C359 = C1058 / q - (C1162 * C2167) / q - (C1207 * p) / q;
    const double C414 = -(C1104 * C2167 + C2162) / q;
    const double C464 = -(C1309 * C2167 + C2164) / q;
    const double C489 = -(C961 * be + C1370 * C2167 + C2177) / q;
    const double C490 = -(C978 * be + C1369 * C2167 + C2178) / q;
    const double C544 = -(C1100 * be + C1445 * C2167 + C2184) / q;
    const double C596 =
        C1460 / q - (C1189 * be + C1562 * C2167) / q - (C1606 * p) / q;
    const double C649 = -(C1278 * be + C1505 * C2167 + C2187) / q;
    const double C698 = -(C1321 * be + C1706 * C2167 + C2189) / q;
    const double C723 = -(C1766 * C2167 + C2195) / q;
    const double C724 = -(C1765 * C2167 + C2196) / q;
    const double C778 = -(C1841 * C2167 + C2202) / q;
    const double C830 = C1856 / q - (C1958 * C2167) / q - (C2002 * p) / q;
    const double C883 = -(C1901 * C2167 + C2205) / q;
    const double C932 = -(C2102 * C2167 + C2207) / q;
    const double C385 = C2171 - (C1177 * C2167) / q - C2163 / q;
    const double C277 = C2170 - (C1012 * C2167) / q - C2159 / q;
    const double C313 = C2170 - (C1042 * C2168) / q - C2161 / q;
    const double C394 = C2169 - (C1177 * C2168) / q - C2164 / q;
    const double C333 = C2166 - (C1058 * C2167) / q - (C1162 * p) / q;
    const double C424 = C2166 - (C1104 * C2168) / q - (C1309 * p) / q;
    const double C622 = C2185 - (C1234 * be + C1577 * C2167) / q - C2188 / q;
    const double C517 = C2182 - (C1054 * be + C1415 * C2167) / q - C2183 / q;
    const double C553 = C2182 - (C1445 * C2168) / q - C2186 / q;
    const double C631 = C2181 - (C1577 * C2168) / q - C2189 / q;
    const double C571 =
        C2176 - (C1145 * be + C1460 * C2167) / q - (C1562 * p) / q;
    const double C658 = C2176 - (C1505 * C2168) / q - (C1706 * p) / q;
    const double C856 = C2203 - (C1973 * C2167) / q - C2206 / q;
    const double C751 = C2200 - (C1811 * C2167) / q - C2201 / q;
    const double C787 = C2200 - (C1100 * be + C1841 * C2168) / q - C2204 / q;
    const double C865 = C2199 - (C1234 * be + C1973 * C2168) / q - C2207 / q;
    const double C805 = C2194 - (C1856 * C2167) / q - (C1958 * p) / q;
    const double C892 =
        C2194 - (C1278 * be + C1901 * C2168) / q - (C2102 * p) / q;
    const double C238 =
        C965 / q - (C961 * be + C966 * C2165) / q - (C967 * p) / q;
    const double C239 = C2166 - (C978 * be + C965 * C2165) / q - (C966 * p) / q;
    const double C268 = C2169 - (C1054 * be + C1012 * C2165) / q - C2153 / q;
    const double C295 = C2171 - (C1100 * be + C1042 * C2165) / q - C2157 / q;
    const double C323 = -(C1145 * be + C1058 * C2165 + C2154) / q;
    const double C351 = -(C1189 * be + C1162 * C2165 + C2159) / q;
    const double C376 = -(C1234 * be + C1177 * C2165 + C2160) / q;
    const double C404 = -(C1278 * be + C1104 * C2165 + C2158) / q;
    const double C456 = -(C1321 * be + C1309 * C2165 + C2161) / q;
    const double C480 = C1369 / q - (C1370 * C2165) / q - (C1371 * p) / q;
    const double C481 = C2176 - (C1369 * C2165) / q - (C1370 * p) / q;
    const double C508 = C2181 - (C1415 * C2165) / q - C2177 / q;
    const double C535 = C2185 - (C1445 * C2165) / q - C2179 / q;
    const double C562 = -(C1460 * C2165 + C2178) / q;
    const double C588 = -(C1562 * C2165 + C2183) / q;
    const double C613 = -(C1577 * C2165 + C2184) / q;
    const double C640 = -(C1505 * C2165 + C2180) / q;
    const double C690 = -(C1706 * C2165 + C2186) / q;
    const double C714 = C1765 / q - (C1766 * C2165) / q - (C1767 * p) / q;
    const double C715 = C2194 - (C1765 * C2165) / q - (C1766 * p) / q;
    const double C742 = C2199 - (C1811 * C2165) / q - C2195 / q;
    const double C769 = C2203 - (C1841 * C2165) / q - C2197 / q;
    const double C796 = -(C1856 * C2165 + C2196) / q;
    const double C822 = -(C1958 * C2165 + C2201) / q;
    const double C847 = -(C1973 * C2165 + C2202) / q;
    const double C874 = -(C1901 * C2165 + C2198) / q;
    const double C924 = -(C2102 * C2165 + C2204) / q;
    etx[0] = C238;
    etx[1] = C239;
    etx[2] = C248;
    etx[3] = C249;
    etx[4] = C258;
    etx[5] = C259;
    etx[6] = C268;
    etx[7] = C277;
    etx[8] = C286;
    etx[9] = C295;
    etx[10] = C304;
    etx[11] = C313;
    etx[12] = C323;
    etx[13] = C333;
    etx[14] = C343;
    etx[15] = C351;
    etx[16] = C359;
    etx[17] = C367;
    etx[18] = C376;
    etx[19] = C385;
    etx[20] = C394;
    etx[21] = C404;
    etx[22] = C414;
    etx[23] = C424;
    etx[24] = C456;
    etx[25] = C464;
    etx[26] = C472;
    ety[0] = C480;
    ety[1] = C481;
    ety[2] = C489;
    ety[3] = C490;
    ety[4] = C498;
    ety[5] = C499;
    ety[6] = C508;
    ety[7] = C517;
    ety[8] = C526;
    ety[9] = C535;
    ety[10] = C544;
    ety[11] = C553;
    ety[12] = C562;
    ety[13] = C571;
    ety[14] = C580;
    ety[15] = C588;
    ety[16] = C596;
    ety[17] = C604;
    ety[18] = C613;
    ety[19] = C622;
    ety[20] = C631;
    ety[21] = C640;
    ety[22] = C649;
    ety[23] = C658;
    ety[24] = C690;
    ety[25] = C698;
    ety[26] = C706;
    etz[0] = C714;
    etz[1] = C715;
    etz[2] = C723;
    etz[3] = C724;
    etz[4] = C732;
    etz[5] = C733;
    etz[6] = C742;
    etz[7] = C751;
    etz[8] = C760;
    etz[9] = C769;
    etz[10] = C778;
    etz[11] = C787;
    etz[12] = C796;
    etz[13] = C805;
    etz[14] = C814;
    etz[15] = C822;
    etz[16] = C830;
    etz[17] = C838;
    etz[18] = C847;
    etz[19] = C856;
    etz[20] = C865;
    etz[21] = C874;
    etz[22] = C883;
    etz[23] = C892;
    etz[24] = C924;
    etz[25] = C932;
    etz[26] = C940;
}
