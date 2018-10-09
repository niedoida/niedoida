/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void vne_gradient_12_3(double ae,
                       double be,
                       double xA,
                       double yA,
                       double zA,
                       double xB,
                       double yB,
                       double zB,
                       double xC,
                       double yC,
                       double zC,
                       const double* bs,
                       double* const gx,
                       double* const gy,
                       double* const gz,
                       std::size_t matrix_size,
                       std::size_t Ai,
                       std::size_t Bi)
{
    const double C1987 = ae + be;
    const double C1994 = 2. * Pi;
    const double C1993 = ae * be;
    const double C1992 = zA - zB;
    const double C1991 = yA - yB;
    const double C1990 = xA - xB;
    const double C1989 = bs[1];
    const double C1997 = std::pow(C1992, 2);
    const double C1996 = std::pow(C1991, 2);
    const double C1995 = std::pow(C1990, 2);
    const double C1998 = C1995 + C1996;
    const double C1999 = C1998 + C1997;
    const double C2000 = C1999 * C1993;
    const double C2001 = C2000 / C1987;
    const double C2002 = -C2001;
    const double C2003 = std::exp(C2002);
    const double C2004 = C2003 * C1994;
    const double C2005 = C1989 * C2004;
    const double C2011 = be * xB;
    const double C2010 = ae * xA;
    const double C2009 = be * C1990;
    const double C2008 = bs[2];
    const double C2014 = C2010 + C2011;
    const double C2013 = C2005 * C2009;
    const double C2012 = C2008 * C2004;
    const double C2016 = C2014 / C1987;
    const double C2015 = C2013 / C1987;
    const double C2018 = C2016 - xC;
    const double C2017 = -C2015;
    const double C2020 = C2018 * C2012;
    const double C2019 = C2017 / C1987;
    const double C2021 = C2020 / C1987;
    const double C2022 = C2019 - C2021;
    const double C2028 = be * yB;
    const double C2027 = ae * yA;
    const double C2026 = be * C1991;
    const double C2030 = C2027 + C2028;
    const double C2029 = C2005 * C2026;
    const double C2032 = C2030 / C1987;
    const double C2031 = C2029 / C1987;
    const double C2034 = C2032 - yC;
    const double C2033 = -C2031;
    const double C2036 = C2034 * C2012;
    const double C2035 = C2033 / C1987;
    const double C2037 = C2036 / C1987;
    const double C2038 = C2035 - C2037;
    const double C2044 = be * zB;
    const double C2043 = ae * zA;
    const double C2042 = be * C1992;
    const double C2046 = C2043 + C2044;
    const double C2045 = C2005 * C2042;
    const double C2048 = C2046 / C1987;
    const double C2047 = C2045 / C1987;
    const double C2050 = C2048 - zC;
    const double C2049 = -C2047;
    const double C2052 = C2050 * C2012;
    const double C2051 = C2049 / C1987;
    const double C2053 = C2052 / C1987;
    const double C2054 = C2051 - C2053;
    const double C2058 = C1990 * C2005;
    const double C2059 = C2058 / C1987;
    const double C2060 = C2022 + C2059;
    const double C2063 = C1991 * C2005;
    const double C2064 = C2063 / C1987;
    const double C2065 = C2038 + C2064;
    const double C2079 = C1992 * C2005;
    const double C2078 = C2012 * C2042;
    const double C2077 = C1991 * C2012;
    const double C2076 = C1991 * C2005;
    const double C2075 = C2012 * C2026;
    const double C2074 = C1990 * C2012;
    const double C2073 = bs[3];
    const double C2072 = C2012 * C2009;
    const double C2071 = 2. * C1987;
    const double C2070 = C2012 / C1987;
    const double C2069 = C2005 / C1987;
    const double C2068 = C1990 * C2005;
    const double C2067 = bs[2];
    const double C2090 = C2079 / C1987;
    const double C2089 = C2078 / C1987;
    const double C2088 = C2077 / C1987;
    const double C2087 = C2076 / C1987;
    const double C2086 = C2075 / C1987;
    const double C2085 = C2074 / C1987;
    const double C2084 = C2073 * C2004;
    const double C2083 = C2072 / C1987;
    const double C2082 = C2069 - C2070;
    const double C2081 = C2068 / C1987;
    const double C2080 = C2067 * C2004;
    const double C2099 = C2054 + C2090;
    const double C2098 = C2050 * C2084;
    const double C2097 = -C2089;
    const double C2096 = C2038 + C2087;
    const double C2095 = C2034 * C2084;
    const double C2094 = -C2086;
    const double C2093 = C2018 * C2084;
    const double C2092 = -C2083;
    const double C2091 = C2082 / C2071;
    const double C2105 = C2098 / C1987;
    const double C2104 = C2097 / C1987;
    const double C2103 = C2095 / C1987;
    const double C2102 = C2094 / C1987;
    const double C2101 = C2093 / C1987;
    const double C2100 = C2092 / C1987;
    const double C2108 = C2104 - C2105;
    const double C2107 = C2102 - C2103;
    const double C2106 = C2100 - C2101;
    const double C2110 = C2107 + C2088;
    const double C2109 = C2106 + C2085;
    const double C146 =
        (bs[1] *
         std::exp(-((std::pow(xA - xB, 2) + std::pow(yA - yB, 2) +
                     std::pow(zA - zB, 2)) *
                    ae * be) /
                  C1987) *
         2. * Pi) /
        C1987;
    const double C147 = (-(C2005 * be * C1990) / C1987) / C1987 -
                        (((ae * xA + be * xB) / C1987 - xC) * C2080) / C1987 +
                        C2081;
    const double C148 = C2080 / C1987;
    const double C149 = C2091 - ((C2022 * C2009) / C1987 + C2018 * C2106) +
                        C1990 * C2022 + C1990 * (C2022 + C2081);
    const double C151 = C2084 / C1987;
    const double C337 = C2091 - ((C2038 * C2026) / C1987 + C2034 * C2107) +
                        C1991 * C2038 + C1991 * C2096;
    const double C469 = C2091 - ((C2054 * C2042) / C1987 + C2050 * C2108) +
                        C1992 * C2054 + C1992 * C2099;
    const double C471 = C2108 + (C1992 * C2012) / C1987;
    const double C611 =
        C1991 * C2060 - ((C2060 * C2026) / C1987 + C2034 * C2109);
    const double C724 =
        C1992 * C2060 - ((C2060 * C2042) / C1987 + C2050 * C2109);
    const double C821 =
        C1992 * C2065 - ((C2065 * C2042) / C1987 + C2050 * C2110);
    const double C166 = be * zB;
    const double C165 = ae * zA;
    const double C164 = be * yB;
    const double C163 = ae * yA;
    const double C162 = bs[4];
    const double C161 = bs[3];
    const double C160 = bs[2];
    const double C159 = ae * be;
    const double C158 = zA - zB;
    const double C157 = yA - yB;
    const double C156 = xA - xB;
    const double C155 = bs[1];
    const double C154 = ae + be;
    const double C153 = be * xB;
    const double C152 = ae * xA;
    const double C173 = C165 + C166;
    const double C172 = C163 + C164;
    const double C171 = 2 * C154;
    const double C170 = std::pow(C158, 2);
    const double C169 = std::pow(C157, 2);
    const double C168 = std::pow(C156, 2);
    const double C167 = C152 + C153;
    const double C177 = C173 / C154;
    const double C176 = C172 / C154;
    const double C175 = C168 + C169;
    const double C174 = C167 / C154;
    const double C182 = C177 - zC;
    const double C181 = C176 - yC;
    const double C180 = C174 - xC;
    const double C179 = C175 + C170;
    const double C178 = C174 - xB;
    const double C183 = C179 * C159;
    const double C184 = C183 / C154;
    const double C185 = -C184;
    const double C186 = std::exp(C185);
    const double C187 = Pi * C186;
    const double C190 = C187 * C182;
    const double C189 = C187 * C181;
    const double C188 = C187 * C180;
    const double C193 = 4 * C190;
    const double C192 = 4 * C189;
    const double C191 = 4 * C188;
    const double C202 = C161 * C193;
    const double C201 = C160 * C193;
    const double C200 = C155 * C193;
    const double C199 = C161 * C192;
    const double C198 = C160 * C192;
    const double C197 = C155 * C192;
    const double C196 = C161 * C191;
    const double C195 = C160 * C191;
    const double C194 = C155 * C191;
    const double C220 = C201 / C171;
    const double C219 = C180 * C202;
    const double C218 = C178 * C201;
    const double C217 = C200 / C171;
    const double C216 = C180 * C201;
    const double C215 = C178 * C200;
    const double C214 = C198 / C171;
    const double C213 = C180 * C199;
    const double C212 = C178 * C198;
    const double C211 = C197 / C171;
    const double C210 = C180 * C198;
    const double C209 = C178 * C197;
    const double C208 = C195 / C171;
    const double C207 = C180 * C196;
    const double C206 = C178 * C195;
    const double C205 = C194 / C171;
    const double C204 = C180 * C195;
    const double C203 = C178 * C194;
    const double C226 = C218 - C219;
    const double C225 = C215 - C216;
    const double C224 = C212 - C213;
    const double C223 = C209 - C210;
    const double C222 = C206 + C148;
    const double C221 = C203 + C146;
    const double C232 = C180 * C226;
    const double C231 = C178 * C225;
    const double C230 = C180 * C224;
    const double C229 = C178 * C223;
    const double C228 = C222 - C207;
    const double C227 = C221 - C204;
    const double C236 = C231 + C217;
    const double C235 = C229 + C211;
    const double C234 = C180 * C228;
    const double C233 = C178 * C227;
    const double C239 = C236 - C232;
    const double C238 = C235 - C230;
    const double C237 = C233 + C205;
    const double C242 = C239 - C220;
    const double C241 = C238 - C214;
    const double C240 = C237 + C147;
    const double C243 = C240 - C234;
    const double C244 = C243 - C208;
    const double C346 = C181 * C202;
    const double C345 = C181 * C201;
    const double C344 = C181 * C199;
    const double C343 = C181 * C198;
    const double C342 = C181 * C196;
    const double C341 = C181 * C195;
    const double C340 = C176 - yB;
    const double C352 = C340 * C201;
    const double C351 = C340 * C200;
    const double C350 = C340 * C198;
    const double C349 = C340 * C197;
    const double C348 = C340 * C195;
    const double C347 = C340 * C194;
    const double C358 = C352 - C346;
    const double C357 = C351 - C345;
    const double C356 = C350 + C148;
    const double C355 = C349 + C146;
    const double C354 = C348 - C342;
    const double C353 = C347 - C341;
    const double C364 = C181 * C358;
    const double C363 = C340 * C357;
    const double C362 = C356 - C344;
    const double C361 = C355 - C343;
    const double C360 = C181 * C354;
    const double C359 = C340 * C353;
    const double C368 = C363 + C217;
    const double C367 = C181 * C362;
    const double C366 = C340 * C361;
    const double C365 = C359 + C205;
    const double C371 = C368 - C364;
    const double C370 = C366 + C211;
    const double C369 = C365 - C360;
    const double C374 = C371 - C220;
    const double C373 = C370 + C2096;
    const double C372 = C369 - C208;
    const double C375 = C373 - C367;
    const double C376 = C375 - C214;
    const double C478 = C182 * C202;
    const double C477 = C182 * C201;
    const double C476 = C182 * C199;
    const double C475 = C182 * C198;
    const double C474 = C182 * C196;
    const double C473 = C182 * C195;
    const double C472 = C177 - zB;
    const double C484 = C472 * C201;
    const double C483 = C472 * C200;
    const double C482 = C472 * C198;
    const double C481 = C472 * C197;
    const double C480 = C472 * C195;
    const double C479 = C472 * C194;
    const double C490 = C484 + C148;
    const double C489 = C483 + C146;
    const double C488 = C482 - C476;
    const double C487 = C481 - C475;
    const double C486 = C480 - C474;
    const double C485 = C479 - C473;
    const double C496 = C490 - C478;
    const double C495 = C489 - C477;
    const double C494 = C182 * C488;
    const double C493 = C472 * C487;
    const double C492 = C182 * C486;
    const double C491 = C472 * C485;
    const double C500 = C182 * C496;
    const double C499 = C472 * C495;
    const double C498 = C493 + C211;
    const double C497 = C491 + C205;
    const double C503 = C499 + C217;
    const double C502 = C498 - C494;
    const double C501 = C497 - C492;
    const double C506 = C503 + C2099;
    const double C505 = C502 - C214;
    const double C504 = C501 - C208;
    const double C507 = C506 - C500;
    const double C508 = C507 - C220;
    const double C617 = C180 * C358;
    const double C616 = C178 * C357;
    const double C615 = C180 * C362;
    const double C614 = C178 * C361;
    const double C613 = C180 * C354;
    const double C612 = C178 * C353;
    const double C620 = C616 - C617;
    const double C619 = C614 - C615;
    const double C618 = C612 + C2096;
    const double C621 = C618 - C613;
    const double C730 = C180 * C496;
    const double C729 = C178 * C495;
    const double C728 = C180 * C488;
    const double C727 = C178 * C487;
    const double C726 = C180 * C486;
    const double C725 = C178 * C485;
    const double C733 = C729 - C730;
    const double C732 = C727 - C728;
    const double C731 = C725 + C2099;
    const double C734 = C731 - C726;
    const double C827 = C181 * C496;
    const double C826 = C340 * C495;
    const double C825 = C181 * C488;
    const double C824 = C340 * C487;
    const double C823 = C181 * C486;
    const double C822 = C340 * C485;
    const double C830 = C826 - C827;
    const double C829 = C824 + C2099;
    const double C828 = C822 - C823;
    const double C831 = C829 - C825;
    const double C2174 = C340 * C830;
    const double C2173 = C340 * C831;
    const double C2172 = C340 * C828;
    const double C2171 = C340 * C508;
    const double C2170 = C340 * C505;
    const double C2169 = C340 * C504;
    const double C2168 = C340 * C496;
    const double C2167 = C178 * C830;
    const double C2166 = C340 * C488;
    const double C2165 = C178 * C831;
    const double C2164 = C340 * C486;
    const double C2163 = C178 * C828;
    const double C2162 = C496 / C171;
    const double C2161 = C178 * C496;
    const double C2160 = C495 / C171;
    const double C2159 = C178 * C733;
    const double C2158 = C488 / C171;
    const double C2157 = C178 * C488;
    const double C2156 = C487 / C171;
    const double C2155 = C178 * C732;
    const double C2154 = C486 / C171;
    const double C2153 = C178 * C486;
    const double C2152 = C485 / C171;
    const double C2151 = C178 * C734;
    const double C2150 = C358 / C171;
    const double C2149 = C178 * C358;
    const double C2148 = C357 / C171;
    const double C2147 = C178 * C620;
    const double C2146 = C362 / C171;
    const double C2145 = C178 * C362;
    const double C2144 = C361 / C171;
    const double C2143 = C178 * C619;
    const double C2142 = C354 / C171;
    const double C2141 = C178 * C354;
    const double C2140 = C353 / C171;
    const double C2139 = C178 * C621;
    const double C2138 = C472 * C202;
    const double C2137 = C472 * C496;
    const double C2136 = C178 * C508;
    const double C2135 = C472 * C199;
    const double C2134 = C472 * C488;
    const double C2133 = C178 * C505;
    const double C2132 = C472 * C196;
    const double C2131 = C472 * C486;
    const double C2130 = C178 * C504;
    const double C2129 = C340 * C202;
    const double C2128 = C340 * C358;
    const double C2127 = C178 * C374;
    const double C2126 = C340 * C199;
    const double C2125 = C340 * C362;
    const double C2124 = C178 * C376;
    const double C2123 = C340 * C196;
    const double C2122 = C340 * C354;
    const double C2121 = C178 * C372;
    const double C2120 = C202 / C171;
    const double C2119 = C162 * C193;
    const double C2118 = C199 / C171;
    const double C2117 = C162 * C192;
    const double C2116 = C196 / C171;
    const double C2115 = C162 * C191;
    const double C2204 = C2174 + C2160;
    const double C2203 = C2173 + C2156;
    const double C2202 = C2172 + C2152;
    const double C2201 = C2170 + C469;
    const double C2200 = C2166 + C471;
    const double C2199 = C2163 + C821;
    const double C2198 = C2159 + C2160;
    const double C2197 = C2155 + C2156;
    const double C2196 = C2153 + C471;
    const double C2195 = C2151 + C2152;
    const double C2194 = C2147 + C2148;
    const double C2193 = C2143 + C2144;
    const double C2192 = C2141 + C2110;
    const double C2191 = C2139 + C2140;
    const double C2190 = C182 * C2119;
    const double C2189 = C2138 + C151;
    const double C2188 = C2137 + C220;
    const double C2187 = C182 * C2117;
    const double C2186 = C2134 + C214;
    const double C2185 = C182 * C2115;
    const double C2184 = C2131 + C208;
    const double C2183 = C2130 + C469;
    const double C2182 = C181 * C2119;
    const double C2181 = C2128 + C220;
    const double C2180 = C181 * C2117;
    const double C2179 = C2126 + C151;
    const double C2178 = C2125 + C214;
    const double C2177 = C181 * C2115;
    const double C2176 = C2122 + C208;
    const double C2175 = C2121 + C337;
    const double C2215 = C2203 + C821;
    const double C2214 = C2195 + C724;
    const double C2213 = C2191 + C611;
    const double C2212 = C2189 - C2190;
    const double C2211 = C2188 + C471;
    const double C2210 = C2135 - C2187;
    const double C2209 = C2132 - C2185;
    const double C2208 = C2129 - C2182;
    const double C2207 = C2179 - C2180;
    const double C2206 = C2178 + C2110;
    const double C2205 = C2123 - C2177;
    const double C2230 = C181 * C2212;
    const double C2229 = C181 * C2210;
    const double C2228 = C181 * C2209;
    const double C2227 = C180 * C2212;
    const double C2226 = C180 * C2210;
    const double C2225 = C180 * C2209;
    const double C2224 = C180 * C2208;
    const double C2223 = C180 * C2207;
    const double C2222 = C180 * C2205;
    const double C2221 = C182 * C2212;
    const double C2220 = C182 * C2210;
    const double C2219 = C182 * C2209;
    const double C2218 = C181 * C2208;
    const double C2217 = C181 * C2207;
    const double C2216 = C181 * C2205;
    const double C2245 = C2168 - C2230;
    const double C2244 = C2200 - C2229;
    const double C2243 = C2164 - C2228;
    const double C2242 = C2161 - C2227;
    const double C2241 = C2157 - C2226;
    const double C2240 = C2196 - C2225;
    const double C2239 = C2149 - C2224;
    const double C2238 = C2145 - C2223;
    const double C2237 = C2192 - C2222;
    const double C2236 = C2211 - C2221;
    const double C2235 = C2186 - C2220;
    const double C2234 = C2184 - C2219;
    const double C2233 = C2181 - C2218;
    const double C2232 = C2206 - C2217;
    const double C2231 = C2176 - C2216;
    const double C2263 = C181 * C2245;
    const double C2262 = C181 * C2244;
    const double C2261 = C181 * C2243;
    const double C2260 = C180 * C2245;
    const double C2259 = C180 * C2244;
    const double C2258 = C180 * C2243;
    const double C2257 = C180 * C2242;
    const double C2256 = C180 * C2241;
    const double C2255 = C180 * C2240;
    const double C2254 = C180 * C2239;
    const double C2253 = C180 * C2238;
    const double C2252 = C180 * C2237;
    const double C2251 = C2236 - C2120;
    const double C2250 = C2235 - C2118;
    const double C2249 = C2234 - C2116;
    const double C2248 = C2233 - C2120;
    const double C2247 = C2232 - C2118;
    const double C2246 = C2231 - C2116;
    const double C2284 = C2204 - C2263;
    const double C2283 = C2215 - C2262;
    const double C2282 = C2202 - C2261;
    const double C2281 = C181 * C2251;
    const double C2280 = C181 * C2250;
    const double C2279 = C181 * C2249;
    const double C2278 = C2167 - C2260;
    const double C2277 = C2165 - C2259;
    const double C2276 = C2199 - C2258;
    const double C2275 = C2198 - C2257;
    const double C2274 = C2197 - C2256;
    const double C2273 = C2214 - C2255;
    const double C2272 = C2194 - C2254;
    const double C2271 = C2193 - C2253;
    const double C2270 = C2213 - C2252;
    const double C2269 = C180 * C2251;
    const double C2268 = C180 * C2250;
    const double C2267 = C180 * C2249;
    const double C2266 = C180 * C2248;
    const double C2265 = C180 * C2247;
    const double C2264 = C180 * C2246;
    const double C2302 = C2284 - C2162;
    const double C2301 = C2283 - C2158;
    const double C2300 = C2282 - C2154;
    const double C2299 = C2171 - C2281;
    const double C2298 = C2201 - C2280;
    const double C2297 = C2169 - C2279;
    const double C2296 = C2275 - C2162;
    const double C2295 = C2274 - C2158;
    const double C2294 = C2273 - C2154;
    const double C2293 = C2272 - C2150;
    const double C2292 = C2271 - C2146;
    const double C2291 = C2270 - C2142;
    const double C2290 = C2136 - C2269;
    const double C2289 = C2133 - C2268;
    const double C2288 = C2183 - C2267;
    const double C2287 = C2127 - C2266;
    const double C2286 = C2124 - C2265;
    const double C2285 = C2175 - C2264;
    const double gx100200 =
        C178 * C244 + C227 / C154 + C149 -
        C180 * (C178 * C228 + C208 + C2109 -
                C180 * (C178 * C196 + C151 - C180 * C2115) - C2116) -
        C228 / C154 - C156 * C244;
    const double gx100020 = C2285 - C156 * C372;
    const double gx100002 = C2288 - C156 * C504;
    const double gx100110 = C2291 - C156 * C621;
    const double gx100101 = C2294 - C156 * C734;
    const double gx100011 = C2276 - C156 * C828;
    const double gx010200 = C2291 - C157 * C244;
    const double gx010020 =
        C340 * C372 + C353 / C154 - C181 * C2246 - C354 / C154 - C157 * C372;
    const double gx010002 = C2297 - C157 * C504;
    const double gx010110 = C2285 - C157 * C621;
    const double gx010101 = C2276 - C157 * C734;
    const double gx010011 = C2300 - C157 * C828;
    const double gx001200 = C2294 - C158 * C244;
    const double gx001020 = C2300 - C158 * C372;
    const double gx001002 =
        C472 * C504 + C485 / C154 - C182 * C2249 - C486 / C154 - C158 * C504;
    const double gx001110 = C2276 - C158 * C621;
    const double gx001101 = C2288 - C158 * C734;
    const double gx001011 = C2297 - C158 * C828;
    gx[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx100110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx100011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gx100200 - 0.5 * gx100020 + gx100002;
    gx[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gx100101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gx100200 - std::sqrt(0.75) * gx100020;
    gx[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx010110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx010011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * gx010200 - 0.5 * gx010020 + gx010002;
    gx[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * gx010101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gx010200 - std::sqrt(0.75) * gx010020;
    gx[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * gx001110;
    gx[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * gx001011;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gx001200 - 0.5 * gx001020 + gx001002;
    gx[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * gx001101;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gx001200 - std::sqrt(0.75) * gx001020;
    const double gy100200 =
        C178 * C241 + C223 / C154 -
        C180 *
            (C178 * C224 + C214 - C180 * (C178 * C199 - C180 * C2117) - C2118) -
        C224 / C154 - C156 * C241;
    const double gy100020 = C2286 - C156 * C376;
    const double gy100002 = C2289 - C156 * C505;
    const double gy100110 = C2292 - C156 * C619;
    const double gy100101 = C2295 - C156 * C732;
    const double gy100011 = C2277 - C156 * C831;
    const double gy010200 = C2292 - C157 * C241;
    const double gy010020 = C340 * C376 + C361 / C154 + C337 - C181 * C2247 -
                            C362 / C154 - C157 * C376;
    const double gy010002 = C2298 - C157 * C505;
    const double gy010110 = C2286 - C157 * C619;
    const double gy010101 = C2277 - C157 * C732;
    const double gy010011 = C2301 - C157 * C831;
    const double gy001200 = C2295 - C158 * C241;
    const double gy001020 = C2301 - C158 * C376;
    const double gy001002 =
        C472 * C505 + C487 / C154 - C182 * C2250 - C488 / C154 - C158 * C505;
    const double gy001110 = C2277 - C158 * C619;
    const double gy001101 = C2289 - C158 * C732;
    const double gy001011 = C2298 - C158 * C831;
    gy[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy100110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy100011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gy100200 - 0.5 * gy100020 + gy100002;
    gy[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gy100101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gy100200 - std::sqrt(0.75) * gy100020;
    gy[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy010110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy010011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * gy010200 - 0.5 * gy010020 + gy010002;
    gy[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * gy010101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gy010200 - std::sqrt(0.75) * gy010020;
    gy[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * gy001110;
    gy[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * gy001011;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gy001200 - 0.5 * gy001020 + gy001002;
    gy[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * gy001101;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gy001200 - std::sqrt(0.75) * gy001020;
    const double gz100200 =
        C178 * C242 + C225 / C154 -
        C180 *
            (C178 * C226 + C220 - C180 * (C178 * C202 - C180 * C2119) - C2120) -
        C226 / C154 - C156 * C242;
    const double gz100020 = C2287 - C156 * C374;
    const double gz100002 = C2290 - C156 * C508;
    const double gz100110 = C2293 - C156 * C620;
    const double gz100101 = C2296 - C156 * C733;
    const double gz100011 = C2278 - C156 * C830;
    const double gz010200 = C2293 - C157 * C242;
    const double gz010020 =
        C340 * C374 + C357 / C154 - C181 * C2248 - C358 / C154 - C157 * C374;
    const double gz010002 = C2299 - C157 * C508;
    const double gz010110 = C2287 - C157 * C620;
    const double gz010101 = C2278 - C157 * C733;
    const double gz010011 = C2302 - C157 * C830;
    const double gz001200 = C2296 - C158 * C242;
    const double gz001020 = C2302 - C158 * C374;
    const double gz001002 = C472 * C508 + C495 / C154 + C469 - C182 * C2251 -
                            C496 / C154 - C158 * C508;
    const double gz001110 = C2278 - C158 * C620;
    const double gz001101 = C2290 - C158 * C733;
    const double gz001011 = C2299 - C158 * C830;
    gz[(Ai + 0) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz100110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz100011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -0.5 * gz100200 - 0.5 * gz100020 + gz100002;
    gz[(Ai + 0) * matrix_size + Bi + 3] += std::sqrt(3.0) * gz100101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gz100200 - std::sqrt(0.75) * gz100020;
    gz[(Ai + 1) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz010110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz010011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -0.5 * gz010200 - 0.5 * gz010020 + gz010002;
    gz[(Ai + 1) * matrix_size + Bi + 3] += std::sqrt(3.0) * gz010101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gz010200 - std::sqrt(0.75) * gz010020;
    gz[(Ai + 2) * matrix_size + Bi + 0] += std::sqrt(3.0) * gz001110;
    gz[(Ai + 2) * matrix_size + Bi + 1] += std::sqrt(3.0) * gz001011;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -0.5 * gz001200 - 0.5 * gz001020 + gz001002;
    gz[(Ai + 2) * matrix_size + Bi + 3] += std::sqrt(3.0) * gz001101;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        std::sqrt(0.75) * gz001200 - std::sqrt(0.75) * gz001020;
}
