/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_4_vr(const double ae,
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
                            double* const vrx,
                            double* const vry,
                            double* const vrz)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C1062 = g[6];
    const double C1082 = g[7];
    const double C1096 = g[8];
    const double C1151 = g[9];
    const double C1219 = g[10];
    const double C1273 = g[11];
    const double C1287 = g[12];
    const double C1302 = g[13];
    const double C1329 = g[14];
    const double C1358 = g[15];
    const double C1447 = g[16];
    const double C1806 = g[17];
    const double C1848 = g[18];
    const double C1065 = p + q;
    const double C1064 = p * q;
    const double C2349 = bs[4];
    const double C2348 = bs[3];
    const double C2346 = bs[2];
    const double C2344 = std::pow(Pi, 2.5);
    const double C2341 = bs[1];
    const double C2340 = ce * de;
    const double C2339 = bs[0];
    const double C2338 = zP - zQ;
    const double C2337 = be * zAB;
    const double C2336 = yP - yQ;
    const double C2335 = be * yAB;
    const double C2334 = 2 * p;
    const double C2332 = xP - xQ;
    const double C2331 = be * xAB;
    const double C1066 = C1065 * p;
    const double C2345 = std::sqrt(C1065);
    const double C2343 = q * C1065;
    const double C2342 = C1064 * de;
    const double C2330 = C1065 * C1064;
    const double C2329 = de * C1064;
    const double C2367 = 4 * C2344;
    const double C2365 = kab * C2340;
    const double C2359 = C2338 * C1064;
    const double C2358 = C2336 * C1064;
    const double C2354 = C2332 * C1064;
    const double C2368 = C1064 * C2345;
    const double C2366 = kab * C2342;
    const double C2373 = C1848 * C2329;
    const double C2370 = C1447 * C2329;
    const double C2364 = C1329 * C2329;
    const double C2363 = C1302 * C2329;
    const double C2362 = C1273 * C2329;
    const double C2361 = C1219 * C2329;
    const double C2360 = C1151 * C2329;
    const double C2357 = C1096 * C2329;
    const double C2356 = C1082 * C2329;
    const double C2384 = kcd * C2365;
    const double C2385 = kcd * C2366;
    const double C2390 = C2373 / C2330;
    const double C2387 = C2370 / C2330;
    const double C2383 = C2364 / C2330;
    const double C2382 = C2363 / C2330;
    const double C2381 = C2362 / C2330;
    const double C2380 = C2361 / C2330;
    const double C2379 = C2360 / C2330;
    const double C2378 = C2357 / C2330;
    const double C2377 = C2356 / C2330;
    const double C2401 = C2348 * C2384;
    const double C2399 = C2346 * C2384;
    const double C2396 = C2341 * C2384;
    const double C2394 = C2339 * C2384;
    const double C2402 = C2349 * C2385;
    const double C2400 = C2348 * C2385;
    const double C2397 = C2346 * C2385;
    const double C2395 = C2341 * C2385;
    const double C1451 =
        (((xCD * C2401) / q + (C2332 * C2402) / C2343) * C2367) / C2368;
    const double C1873 =
        (((yCD * C2401) / q + (C2336 * C2402) / C2343) * C2367) / C2368;
    const double C2293 =
        (((zCD * C2401) / q + (C2338 * C2402) / C2343) * C2367) / C2368;
    const double C1333 =
        (((xCD * C2399) / q + (C2332 * C2400) / C2343) * C2367) / C2368;
    const double C1769 =
        (((yCD * C2399) / q + (C2336 * C2400) / C2343) * C2367) / C2368;
    const double C2191 =
        (((zCD * C2399) / q + (C2338 * C2400) / C2343) * C2367) / C2368;
    const double C1071 =
        (((xCD * C2396) / q + (C2332 * C2397) / C2343) * C2367) / C2368;
    const double C1500 =
        (((yCD * C2396) / q + (C2336 * C2397) / C2343) * C2367) / C2368;
    const double C1922 =
        (((zCD * C2396) / q + (C2338 * C2397) / C2343) * C2367) / C2368;
    const double C1070 =
        (((xCD * C2394) / q + (C2332 * C2395) / C2343) * C2367) / C2368;
    const double C1499 =
        (((yCD * C2394) / q + (C2336 * C2395) / C2343) * C2367) / C2368;
    const double C1921 =
        (((zCD * C2394) / q + (C2338 * C2395) / C2343) * C2367) / C2368;
    const double C2347 = C1333 * C1064;
    const double C1362 = C2387 - (C1333 * C2331) / p - (C1451 * C2354) / C1066;
    const double C1389 = -((C1333 * C2335) / p + (C1451 * C2358) / C1066);
    const double C1416 = -((C1333 * C2337) / p + (C1451 * C2359) / C1066);
    const double C2351 = C1769 * C1064;
    const double C1783 = -((C1769 * C2331) / p + (C1873 * C2354) / C1066);
    const double C1811 = C2387 - (C1769 * C2335) / p - (C1873 * C2358) / C1066;
    const double C1838 = -((C1769 * C2337) / p + (C1873 * C2359) / C1066);
    const double C2353 = C2191 * C1064;
    const double C2205 = -((C2191 * C2331) / p + (C2293 * C2354) / C1066);
    const double C2232 = -((C2191 * C2335) / p + (C2293 * C2358) / C1066);
    const double C2259 = C2387 - (C2191 * C2337) / p - (C2293 * C2359) / C1066;
    const double C2333 = C1071 * C1064;
    const double C1069 = C2383 - (C1071 * C2331) / p - (C1333 * C2354) / C1066;
    const double C1140 = -((C1071 * C2335) / p + (C1333 * C2358) / C1066);
    const double C1208 = -((C1071 * C2337) / p + (C1333 * C2359) / C1066);
    const double C2350 = C1500 * C1064;
    const double C1514 = -((C1500 * C2331) / p + (C1769 * C2354) / C1066);
    const double C1568 = C2383 - (C1500 * C2335) / p - (C1769 * C2358) / C1066;
    const double C1635 = -((C1500 * C2337) / p + (C1769 * C2359) / C1066);
    const double C2352 = C1922 * C1064;
    const double C1936 = -((C1922 * C2331) / p + (C2191 * C2354) / C1066);
    const double C1990 = -((C1922 * C2335) / p + (C2191 * C2358) / C1066);
    const double C2057 = C2383 - (C1922 * C2337) / p - (C2191 * C2359) / C1066;
    const double C189 = C2377 - (C1070 * C2331) / p - (C1071 * C2354) / C1066;
    const double C252 = -((C1070 * C2335) / p + (C1071 * C2358) / C1066);
    const double C315 = -((C1070 * C2337) / p + (C1071 * C2359) / C1066);
    const double C465 = -((C1499 * C2331) / p + (C1500 * C2354) / C1066);
    const double C528 = C2377 - (C1499 * C2335) / p - (C1500 * C2358) / C1066;
    const double C590 = -((C1499 * C2337) / p + (C1500 * C2359) / C1066);
    const double C737 = -((C1921 * C2331) / p + (C1922 * C2354) / C1066);
    const double C800 = -((C1921 * C2335) / p + (C1922 * C2358) / C1066);
    const double C862 = C2377 - (C1921 * C2337) / p - (C1922 * C2359) / C1066;
    const double C2369 = C2347 / C1066;
    const double C2372 = C2351 / C1066;
    const double C2375 = C2353 / C1066;
    const double C2355 = C2333 / C1066;
    const double C1291 = -((C1208 * C2335) / p + (C1416 * C2358) / C1066);
    const double C2371 = C2350 / C1066;
    const double C1715 = C2390 - (C1635 * C2335) / p - (C1838 * C2358) / C1066;
    const double C2374 = C2352 / C1066;
    const double C2137 = -((C2057 * C2335) / p + (C2259 * C2358) / C1066);
    const double C332 = C2381 - (C252 * C2331) / p - (C1140 * C2354) / C1066;
    const double C377 = C2382 - (C315 * C2331) / p - (C1208 * C2354) / C1066;
    const double C421 = -((C315 * C2335) / p + (C1208 * C2358) / C1066);
    const double C606 = -((C528 * C2331) / p + (C1568 * C2354) / C1066);
    const double C650 = -((C590 * C2331) / p + (C1635 * C2354) / C1066);
    const double C693 = C2382 - (C590 * C2335) / p - (C1635 * C2358) / C1066;
    const double C878 = -((C800 * C2331) / p + (C1990 * C2354) / C1066);
    const double C922 = -((C862 * C2331) / p + (C2057 * C2354) / C1066);
    const double C965 = -((C862 * C2335) / p + (C2057 * C2358) / C1066);
    const double C2386 = C1071 - C2369;
    const double C2389 = C1500 - C2372;
    const double C2392 = C1922 - C2375;
    const double C2376 = C1070 - C2355;
    const double C2388 = C1499 - C2371;
    const double C2391 = C1921 - C2374;
    const double C361 =
        (C1287 * C2329) / C2330 - (C421 * C2331) / p - (C1291 * C2354) / C1066;
    const double C635 = -((C693 * C2331) / p + (C1715 * C2354) / C1066);
    const double C907 = -((C965 * C2331) / p + (C2137 * C2354) / C1066);
    const double C2398 = C2386 / C2334;
    const double C2404 = C2389 / C2334;
    const double C2406 = C2392 / C2334;
    const double C2393 = C2376 / C2334;
    const double C2403 = C2388 / C2334;
    const double C2405 = C2391 / C2334;
    const double C1100 = (C1358 * C2329) / C2330 - (C1069 * C2331) / p -
                         (C1362 * C2354) / C1066 + C2398;
    const double C1155 =
        C2398 - ((C1140 * C2335) / p + (C1389 * C2358) / C1066);
    const double C1223 =
        C2398 - ((C1208 * C2337) / p + (C1416 * C2359) / C1066);
    const double C1528 =
        C2404 - ((C1514 * C2331) / p + (C1783 * C2354) / C1066);
    const double C1582 = (C1806 * C2329) / C2330 - (C1568 * C2335) / p -
                         (C1811 * C2358) / C1066 + C2404;
    const double C1649 =
        C2404 - ((C1635 * C2337) / p + (C1838 * C2359) / C1066);
    const double C1950 =
        C2406 - ((C1936 * C2331) / p + (C2205 * C2354) / C1066);
    const double C2004 =
        C2406 - ((C1990 * C2335) / p + (C2232 * C2358) / C1066);
    const double C2071 =
        C2390 - (C2057 * C2337) / p - (C2259 * C2359) / C1066 + C2406;
    const double C188 = (C1062 * C2329) / C2330 - (C189 * C2331) / p -
                        (C1069 * C2354) / C1066 + C2393;
    const double C236 = C2393 - ((C252 * C2335) / p + (C1140 * C2358) / C1066);
    const double C284 = C2393 - ((C315 * C2337) / p + (C1208 * C2359) / C1066);
    const double C466 = C2403 - ((C465 * C2331) / p + (C1514 * C2354) / C1066);
    const double C512 =
        C2381 - (C528 * C2335) / p - (C1568 * C2358) / C1066 + C2403;
    const double C559 = C2403 - ((C590 * C2337) / p + (C1635 * C2359) / C1066);
    const double C738 = C2405 - ((C737 * C2331) / p + (C1936 * C2354) / C1066);
    const double C784 = C2405 - ((C800 * C2335) / p + (C1990 * C2358) / C1066);
    const double C831 =
        C2382 - (C862 * C2337) / p - (C2057 * C2359) / C1066 + C2405;
    const double C190 = C2378 - (C188 * C2331) / p - (C1100 * C2354) / C1066 +
                        (C189 - (C1069 * C1064) / C1066) / p;
    const double C205 = -((C188 * C2335) / p + (C1100 * C2358) / C1066);
    const double C220 = -((C188 * C2337) / p + (C1100 * C2359) / C1066);
    const double C237 = C2379 - (C236 * C2331) / p - (C1155 * C2354) / C1066;
    const double C253 = (C252 - (C1140 * C1064) / C1066) / p -
                        ((C236 * C2335) / p + (C1155 * C2358) / C1066);
    const double C268 = -((C236 * C2337) / p + (C1155 * C2359) / C1066);
    const double C285 = C2380 - (C284 * C2331) / p - (C1223 * C2354) / C1066;
    const double C300 = -((C284 * C2335) / p + (C1223 * C2358) / C1066);
    const double C316 = (C315 - (C1208 * C1064) / C1066) / p -
                        ((C284 * C2337) / p + (C1223 * C2359) / C1066);
    const double C467 = (C465 - (C1514 * C1064) / C1066) / p -
                        ((C466 * C2331) / p + (C1528 * C2354) / C1066);
    const double C482 = C2378 - (C466 * C2335) / p - (C1528 * C2358) / C1066;
    const double C497 = -((C466 * C2337) / p + (C1528 * C2359) / C1066);
    const double C513 = -((C512 * C2331) / p + (C1582 * C2354) / C1066);
    const double C529 = C2379 - (C512 * C2335) / p - (C1582 * C2358) / C1066 +
                        (C528 - (C1568 * C1064) / C1066) / p;
    const double C544 = -((C512 * C2337) / p + (C1582 * C2359) / C1066);
    const double C560 = -((C559 * C2331) / p + (C1649 * C2354) / C1066);
    const double C575 = C2380 - (C559 * C2335) / p - (C1649 * C2358) / C1066;
    const double C591 = (C590 - (C1635 * C1064) / C1066) / p -
                        ((C559 * C2337) / p + (C1649 * C2359) / C1066);
    const double C739 = (C737 - (C1936 * C1064) / C1066) / p -
                        ((C738 * C2331) / p + (C1950 * C2354) / C1066);
    const double C754 = -((C738 * C2335) / p + (C1950 * C2358) / C1066);
    const double C769 = C2378 - (C738 * C2337) / p - (C1950 * C2359) / C1066;
    const double C785 = -((C784 * C2331) / p + (C2004 * C2354) / C1066);
    const double C801 = (C800 - (C1990 * C1064) / C1066) / p -
                        ((C784 * C2335) / p + (C2004 * C2358) / C1066);
    const double C816 = C2379 - (C784 * C2337) / p - (C2004 * C2359) / C1066;
    const double C832 = -((C831 * C2331) / p + (C2071 * C2354) / C1066);
    const double C847 = -((C831 * C2335) / p + (C2071 * C2358) / C1066);
    const double C863 = C2380 - (C831 * C2337) / p - (C2071 * C2359) / C1066 +
                        (C862 - (C2057 * C1064) / C1066) / p;
    vrx[0] = C188;
    vrx[1] = C189;
    vrx[2] = C190;
    vrx[3] = C205;
    vrx[4] = C220;
    vrx[5] = C236;
    vrx[6] = C237;
    vrx[7] = C252;
    vrx[8] = C253;
    vrx[9] = C268;
    vrx[10] = C284;
    vrx[11] = C285;
    vrx[12] = C300;
    vrx[13] = C315;
    vrx[14] = C316;
    vrx[15] = C332;
    vrx[16] = C361;
    vrx[17] = C377;
    vrx[18] = C421;
    vry[0] = C465;
    vry[1] = C466;
    vry[2] = C467;
    vry[3] = C482;
    vry[4] = C497;
    vry[5] = C512;
    vry[6] = C513;
    vry[7] = C528;
    vry[8] = C529;
    vry[9] = C544;
    vry[10] = C559;
    vry[11] = C560;
    vry[12] = C575;
    vry[13] = C590;
    vry[14] = C591;
    vry[15] = C606;
    vry[16] = C635;
    vry[17] = C650;
    vry[18] = C693;
    vrz[0] = C737;
    vrz[1] = C738;
    vrz[2] = C739;
    vrz[3] = C754;
    vrz[4] = C769;
    vrz[5] = C784;
    vrz[6] = C785;
    vrz[7] = C800;
    vrz[8] = C801;
    vrz[9] = C816;
    vrz[10] = C831;
    vrz[11] = C832;
    vrz[12] = C847;
    vrz[13] = C862;
    vrz[14] = C863;
    vrz[15] = C878;
    vrz[16] = C907;
    vrz[17] = C922;
    vrz[18] = C965;
}
