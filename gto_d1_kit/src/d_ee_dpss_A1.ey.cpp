/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_1_vr(const double ae,
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
    const double C184 = g[0];
    const double C232 = g[1];
    const double C280 = g[2];
    const double C417 = g[5];
    const double C1057 = g[6];
    const double C1058 = g[7];
    const double C1077 = g[8];
    const double C1078 = g[9];
    const double C1095 = g[10];
    const double C1154 = g[11];
    const double C1227 = g[12];
    const double C1285 = g[13];
    const double C1286 = g[14];
    const double C1301 = g[15];
    const double C1317 = g[16];
    const double C1318 = g[17];
    const double C1361 = g[18];
    const double C1377 = g[19];
    const double C1472 = g[20];
    const double C1856 = g[21];
    const double C1901 = g[22];
    const double C1061 = p + q;
    const double C1060 = p * q;
    const double C2435 = bs[4];
    const double C2434 = bs[3];
    const double C2432 = bs[2];
    const double C2430 = std::pow(Pi, 2.5);
    const double C2427 = bs[1];
    const double C2426 = ae * be;
    const double C2425 = bs[0];
    const double C2424 = zP - zQ;
    const double C2423 = be * zAB;
    const double C2422 = yP - yQ;
    const double C2421 = be * yAB;
    const double C2420 = 2 * p;
    const double C2418 = xP - xQ;
    const double C2417 = std::pow(p, 2);
    const double C2415 = be * xAB;
    const double C2414 = ae / p;
    const double C1080 = C1061 * p;
    const double C2431 = std::sqrt(C1061);
    const double C2429 = p * C1061;
    const double C2428 = kab * C1060;
    const double C2416 = ae * C1060;
    const double C2454 = 4 * C2430;
    const double C2452 = kab * C2426;
    const double C2447 = C2424 * C1060;
    const double C2446 = C2422 * C1060;
    const double C2443 = C2418 * C1060;
    const double C2442 = C1061 * C2417;
    const double C2440 = C2414 - 1;
    const double C2455 = C1060 * C2431;
    const double C2453 = kcd * C2428;
    const double C2461 = C1901 * C2416;
    const double C2458 = C1472 * C2416;
    const double C2456 = C1361 * C2416;
    const double C2451 = C1318 * C2416;
    const double C2450 = C1286 * C2416;
    const double C2449 = C1227 * C2416;
    const double C2448 = C1154 * C2416;
    const double C2445 = C1095 * C2416;
    const double C2441 = C1058 * C2416;
    const double C2477 = kcd * C2452;
    const double C2489 = C2440 * C1318;
    const double C2484 = C2440 * C1361;
    const double C2480 = C2440 * C1058;
    const double C2475 = C2440 * C1317;
    const double C2473 = C2440 * C1285;
    const double C2471 = C2440 * C280;
    const double C2469 = C2440 * C232;
    const double C2467 = C2440 * C184;
    const double C2464 = C2440 * C1057;
    const double C2486 = C2435 * C2453;
    const double C2483 = C2434 * C2453;
    const double C2479 = C2432 * C2453;
    const double C2478 = C2427 * C2453;
    const double C2490 = C2461 / C2442;
    const double C2485 = C2458 / C2442;
    const double C2481 = C2456 / C2442;
    const double C2476 = C2451 / C2442;
    const double C2474 = C2450 / C2442;
    const double C2472 = C2449 / C2442;
    const double C2470 = C2448 / C2442;
    const double C2468 = C2445 / C2442;
    const double C2465 = C2441 / C2442;
    const double C2501 = C2434 * C2477;
    const double C2499 = C2432 * C2477;
    const double C2496 = C2427 * C2477;
    const double C2494 = C2425 * C2477;
    const double C2502 = C2486 * ae;
    const double C2500 = C2483 * ae;
    const double C2497 = C2479 * ae;
    const double C2495 = C2478 * ae;
    const double C1476 =
        -(((xAB * C2501) / p + (C2418 * C2502) / C2429) * C2454) / C2455;
    const double C1927 =
        -(((yAB * C2501) / p + (C2422 * C2502) / C2429) * C2454) / C2455;
    const double C2376 =
        -(((zAB * C2501) / p + (C2424 * C2502) / C2429) * C2454) / C2455;
    const double C1365 =
        -(((xAB * C2499) / p + (C2418 * C2500) / C2429) * C2454) / C2455;
    const double C1816 =
        -(((yAB * C2499) / p + (C2422 * C2500) / C2429) * C2454) / C2455;
    const double C2267 =
        -(((zAB * C2499) / p + (C2424 * C2500) / C2429) * C2454) / C2455;
    const double C1065 =
        -(((xAB * C2496) / p + (C2418 * C2497) / C2429) * C2454) / C2455;
    const double C1528 =
        -(((yAB * C2496) / p + (C2422 * C2497) / C2429) * C2454) / C2455;
    const double C1979 =
        -(((zAB * C2496) / p + (C2424 * C2497) / C2429) * C2454) / C2455;
    const double C1064 =
        -(((xAB * C2494) / p + (C2418 * C2495) / C2429) * C2454) / C2455;
    const double C1527 =
        -(((yAB * C2494) / p + (C2422 * C2495) / C2429) * C2454) / C2455;
    const double C1978 =
        -(((zAB * C2494) / p + (C2424 * C2495) / C2429) * C2454) / C2455;
    const double C2433 = C1365 * C1060;
    const double C1381 =
        C2484 - (C1365 * C2415) / p - C2485 - (C1476 * C2443) / C1080;
    const double C1410 = -((C1365 * C2421) / p + (C1476 * C2446) / C1080);
    const double C1439 = -((C1365 * C2423) / p + (C1476 * C2447) / C1080);
    const double C2437 = C1816 * C1060;
    const double C1831 = -((C1816 * C2415) / p + (C1927 * C2443) / C1080);
    const double C1861 =
        C2484 - (C1816 * C2421) / p - C2485 - (C1927 * C2446) / C1080;
    const double C1890 = -((C1816 * C2423) / p + (C1927 * C2447) / C1080);
    const double C2439 = C2267 * C1060;
    const double C2282 = -((C2267 * C2415) / p + (C2376 * C2443) / C1080);
    const double C2311 = -((C2267 * C2421) / p + (C2376 * C2446) / C1080);
    const double C2340 =
        C2484 - (C2267 * C2423) / p - C2485 - (C2376 * C2447) / C1080;
    const double C2419 = C1065 * C1060;
    const double C1083 =
        C2480 - (C1065 * C2415) / p - C2481 - (C1365 * C2443) / C1080;
    const double C1142 = -((C1065 * C2421) / p + (C1365 * C2446) / C1080);
    const double C1215 = -((C1065 * C2423) / p + (C1365 * C2447) / C1080);
    const double C2436 = C1528 * C1060;
    const double C1543 = -((C1528 * C2415) / p + (C1816 * C2443) / C1080);
    const double C1601 =
        C2480 - (C1528 * C2421) / p - C2481 - (C1816 * C2446) / C1080;
    const double C1673 = -((C1528 * C2423) / p + (C1816 * C2447) / C1080);
    const double C2438 = C1979 * C1060;
    const double C1994 = -((C1979 * C2415) / p + (C2267 * C2443) / C1080);
    const double C2052 = -((C1979 * C2421) / p + (C2267 * C2446) / C1080);
    const double C2124 =
        C2480 - (C1979 * C2423) / p - C2481 - (C2267 * C2447) / C1080;
    const double C188 =
        C2464 - (C1064 * C2415) / p - C2465 - (C1065 * C2443) / C1080;
    const double C252 = -((C1064 * C2421) / p + (C1065 * C2446) / C1080);
    const double C315 = -((C1064 * C2423) / p + (C1065 * C2447) / C1080);
    const double C465 = -((C1527 * C2415) / p + (C1528 * C2443) / C1080);
    const double C528 =
        C2464 - (C1527 * C2421) / p - C2465 - (C1528 * C2446) / C1080;
    const double C590 = -((C1527 * C2423) / p + (C1528 * C2447) / C1080);
    const double C737 = -((C1978 * C2415) / p + (C1979 * C2443) / C1080);
    const double C800 = -((C1978 * C2421) / p + (C1979 * C2446) / C1080);
    const double C862 =
        C2464 - (C1978 * C2423) / p - C2465 - (C1979 * C2447) / C1080;
    const double C2457 = C2433 / C1080;
    const double C2460 = C2437 / C1080;
    const double C2463 = C2439 / C1080;
    const double C2444 = C2419 / C1080;
    const double C1305 = -((C1215 * C2421) / p + (C1439 * C2446) / C1080);
    const double C2459 = C2436 / C1080;
    const double C1759 =
        C2489 - (C1673 * C2421) / p - C2490 - (C1890 * C2446) / C1080;
    const double C2462 = C2438 / C1080;
    const double C2210 = -((C2124 * C2421) / p + (C2340 * C2446) / C1080);
    const double C332 =
        C2473 - (C252 * C2415) / p - C2474 - (C1142 * C2443) / C1080;
    const double C377 =
        C2475 - (C315 * C2415) / p - C2476 - (C1215 * C2443) / C1080;
    const double C421 = -((C315 * C2421) / p + (C1215 * C2446) / C1080);
    const double C606 = -((C528 * C2415) / p + (C1601 * C2443) / C1080);
    const double C650 = -((C590 * C2415) / p + (C1673 * C2443) / C1080);
    const double C693 =
        C2475 - (C590 * C2421) / p - C2476 - (C1673 * C2446) / C1080;
    const double C878 = -((C800 * C2415) / p + (C2052 * C2443) / C1080);
    const double C922 = -((C862 * C2415) / p + (C2124 * C2443) / C1080);
    const double C965 = -((C862 * C2421) / p + (C2124 * C2446) / C1080);
    const double C2482 = C1065 - C2457;
    const double C2488 = C1528 - C2460;
    const double C2492 = C1979 - C2463;
    const double C2466 = C1064 - C2444;
    const double C2487 = C1527 - C2459;
    const double C2491 = C1978 - C2462;
    const double C361 = C2440 * C417 - (C421 * C2415) / p -
                        (C1301 * C2416) / C2442 - (C1305 * C2443) / C1080;
    const double C635 = -((C693 * C2415) / p + (C1759 * C2443) / C1080);
    const double C907 = -((C965 * C2415) / p + (C2210 * C2443) / C1080);
    const double C2498 = C2482 / C2420;
    const double C2504 = C2488 / C2420;
    const double C2506 = C2492 / C2420;
    const double C2493 = C2466 / C2420;
    const double C2503 = C2487 / C2420;
    const double C2505 = C2491 / C2420;
    const double C1099 = C2440 * C1078 - (C1083 * C2415) / p -
                         (C1377 * C2416) / C2442 - (C1381 * C2443) / C1080 +
                         C2498;
    const double C1158 =
        C2498 - ((C1142 * C2421) / p + (C1410 * C2446) / C1080);
    const double C1231 =
        C2498 - ((C1215 * C2423) / p + (C1439 * C2447) / C1080);
    const double C1558 =
        C2504 - ((C1543 * C2415) / p + (C1831 * C2443) / C1080);
    const double C1616 = C2440 * C1286 - (C1601 * C2421) / p -
                         (C1856 * C2416) / C2442 - (C1861 * C2446) / C1080 +
                         C2504;
    const double C1688 =
        C2504 - ((C1673 * C2423) / p + (C1890 * C2447) / C1080);
    const double C2009 =
        C2506 - ((C1994 * C2415) / p + (C2282 * C2443) / C1080);
    const double C2067 =
        C2506 - ((C2052 * C2421) / p + (C2311 * C2446) / C1080);
    const double C2139 =
        C2489 - (C2124 * C2423) / p - C2490 - (C2340 * C2447) / C1080 + C2506;
    const double C189 = C2440 * C1077 - (C188 * C2415) / p -
                        (C1078 * C2416) / C2442 - (C1083 * C2443) / C1080 +
                        C2493;
    const double C236 = C2493 - ((C252 * C2421) / p + (C1142 * C2446) / C1080);
    const double C284 = C2493 - ((C315 * C2423) / p + (C1215 * C2447) / C1080);
    const double C466 = C2503 - ((C465 * C2415) / p + (C1543 * C2443) / C1080);
    const double C512 =
        C2473 - (C528 * C2421) / p - C2474 - (C1601 * C2446) / C1080 + C2503;
    const double C559 = C2503 - ((C590 * C2423) / p + (C1673 * C2447) / C1080);
    const double C738 = C2505 - ((C737 * C2415) / p + (C1994 * C2443) / C1080);
    const double C784 = C2505 - ((C800 * C2421) / p + (C2052 * C2446) / C1080);
    const double C831 =
        C2475 - (C862 * C2423) / p - C2476 - (C2124 * C2447) / C1080 + C2505;
    const double C190 = C2467 - (C189 * C2415) / p - C2468 -
                        (C1099 * C2443) / C1080 +
                        (C188 - (C1083 * C1060) / C1080) / p;
    const double C205 = -((C189 * C2421) / p + (C1099 * C2446) / C1080);
    const double C220 = -((C189 * C2423) / p + (C1099 * C2447) / C1080);
    const double C237 =
        C2469 - (C236 * C2415) / p - C2470 - (C1158 * C2443) / C1080;
    const double C253 = (C252 - (C1142 * C1060) / C1080) / p -
                        ((C236 * C2421) / p + (C1158 * C2446) / C1080);
    const double C268 = -((C236 * C2423) / p + (C1158 * C2447) / C1080);
    const double C285 =
        C2471 - (C284 * C2415) / p - C2472 - (C1231 * C2443) / C1080;
    const double C300 = -((C284 * C2421) / p + (C1231 * C2446) / C1080);
    const double C316 = (C315 - (C1215 * C1060) / C1080) / p -
                        ((C284 * C2423) / p + (C1231 * C2447) / C1080);
    const double C467 = (C465 - (C1543 * C1060) / C1080) / p -
                        ((C466 * C2415) / p + (C1558 * C2443) / C1080);
    const double C482 =
        C2467 - (C466 * C2421) / p - C2468 - (C1558 * C2446) / C1080;
    const double C497 = -((C466 * C2423) / p + (C1558 * C2447) / C1080);
    const double C513 = -((C512 * C2415) / p + (C1616 * C2443) / C1080);
    const double C529 = C2469 - (C512 * C2421) / p - C2470 -
                        (C1616 * C2446) / C1080 +
                        (C528 - (C1601 * C1060) / C1080) / p;
    const double C544 = -((C512 * C2423) / p + (C1616 * C2447) / C1080);
    const double C560 = -((C559 * C2415) / p + (C1688 * C2443) / C1080);
    const double C575 =
        C2471 - (C559 * C2421) / p - C2472 - (C1688 * C2446) / C1080;
    const double C591 = (C590 - (C1673 * C1060) / C1080) / p -
                        ((C559 * C2423) / p + (C1688 * C2447) / C1080);
    const double C739 = (C737 - (C1994 * C1060) / C1080) / p -
                        ((C738 * C2415) / p + (C2009 * C2443) / C1080);
    const double C754 = -((C738 * C2421) / p + (C2009 * C2446) / C1080);
    const double C769 =
        C2467 - (C738 * C2423) / p - C2468 - (C2009 * C2447) / C1080;
    const double C785 = -((C784 * C2415) / p + (C2067 * C2443) / C1080);
    const double C801 = (C800 - (C2052 * C1060) / C1080) / p -
                        ((C784 * C2421) / p + (C2067 * C2446) / C1080);
    const double C816 =
        C2469 - (C784 * C2423) / p - C2470 - (C2067 * C2447) / C1080;
    const double C832 = -((C831 * C2415) / p + (C2139 * C2443) / C1080);
    const double C847 = -((C831 * C2421) / p + (C2139 * C2446) / C1080);
    const double C863 = C2471 - (C831 * C2423) / p - C2472 -
                        (C2139 * C2447) / C1080 +
                        (C862 - (C2124 * C1060) / C1080) / p;
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
