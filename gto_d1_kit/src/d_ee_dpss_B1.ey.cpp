/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_2_vr(const double ae,
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
    const double C1063 = g[6];
    const double C1064 = g[7];
    const double C1085 = g[8];
    const double C1086 = g[9];
    const double C1101 = g[10];
    const double C1160 = g[11];
    const double C1233 = g[12];
    const double C1291 = g[13];
    const double C1292 = g[14];
    const double C1307 = g[15];
    const double C1323 = g[16];
    const double C1324 = g[17];
    const double C1353 = g[18];
    const double C1383 = g[19];
    const double C1478 = g[20];
    const double C1862 = g[21];
    const double C1907 = g[22];
    const double C1067 = p + q;
    const double C1066 = p * q;
    const double C2451 = C1324 * be;
    const double C2448 = bs[4];
    const double C2447 = C1353 * be;
    const double C2446 = bs[3];
    const double C2444 = bs[2];
    const double C2442 = std::pow(Pi, 2.5);
    const double C2441 = ae * be;
    const double C2440 = bs[0];
    const double C2437 = bs[1];
    const double C2436 = C1086 * be;
    const double C2435 = C1323 * be;
    const double C2434 = C1291 * be;
    const double C2433 = C280 * be;
    const double C2432 = C232 * be;
    const double C2431 = zP - zQ;
    const double C2430 = be * zAB;
    const double C2429 = yP - yQ;
    const double C2428 = be * yAB;
    const double C2427 = C184 * be;
    const double C2426 = C1085 * be;
    const double C2425 = 2 * p;
    const double C2423 = xP - xQ;
    const double C2422 = std::pow(p, 2);
    const double C2420 = be * xAB;
    const double C1068 = C1067 * p;
    const double C2443 = std::sqrt(C1067);
    const double C2439 = p * C1067;
    const double C2438 = C1066 * be;
    const double C2421 = be * C1066;
    const double C2482 = C2451 / p;
    const double C2478 = C2447 / p;
    const double C2475 = 4 * C2442;
    const double C2474 = kab * C2441;
    const double C2471 = C2436 / p;
    const double C2469 = C2435 / p;
    const double C2467 = C2434 / p;
    const double C2465 = C2433 / p;
    const double C2463 = C2432 / p;
    const double C2462 = C2431 * C1066;
    const double C2461 = C2429 * C1066;
    const double C2459 = C2427 / p;
    const double C2457 = C2426 / p;
    const double C2455 = C2423 * C1066;
    const double C2454 = C1067 * C2422;
    const double C2476 = C1066 * C2443;
    const double C2473 = kab * C2438;
    const double C2483 = C1907 * C2421;
    const double C2479 = C1478 * C2421;
    const double C2472 = C1353 * C2421;
    const double C2470 = C1324 * C2421;
    const double C2468 = C1292 * C2421;
    const double C2466 = C1233 * C2421;
    const double C2464 = C1160 * C2421;
    const double C2460 = C1101 * C2421;
    const double C2458 = C1086 * C2421;
    const double C2495 = kcd * C2474;
    const double C2494 = kcd * C2473;
    const double C2500 = C2483 / C2454;
    const double C2497 = C2479 / C2454;
    const double C2493 = C2472 / C2454;
    const double C2492 = C2470 / C2454;
    const double C2491 = C2468 / C2454;
    const double C2490 = C2466 / C2454;
    const double C2489 = C2464 / C2454;
    const double C2488 = C2460 / C2454;
    const double C2487 = C2458 / C2454;
    const double C2512 = C2446 * C2495;
    const double C2510 = C2444 * C2495;
    const double C2507 = C2437 * C2495;
    const double C2505 = C2440 * C2495;
    const double C2511 = C2448 * C2494;
    const double C2509 = C2446 * C2494;
    const double C2506 = C2444 * C2494;
    const double C2504 = C2437 * C2494;
    const double C1482 =
        -(((C2423 * C2511) / C2439 - (xAB * C2512) / p) * C2475) / C2476;
    const double C1933 =
        -(((C2429 * C2511) / C2439 - (yAB * C2512) / p) * C2475) / C2476;
    const double C2382 =
        -(((C2431 * C2511) / C2439 - (zAB * C2512) / p) * C2475) / C2476;
    const double C1357 =
        -(((C2423 * C2509) / C2439 - (xAB * C2510) / p) * C2475) / C2476;
    const double C1822 =
        -(((C2429 * C2509) / C2439 - (yAB * C2510) / p) * C2475) / C2476;
    const double C2273 =
        -(((C2431 * C2509) / C2439 - (zAB * C2510) / p) * C2475) / C2476;
    const double C1073 =
        -(((C2423 * C2506) / C2439 - (xAB * C2507) / p) * C2475) / C2476;
    const double C1534 =
        -(((C2429 * C2506) / C2439 - (yAB * C2507) / p) * C2475) / C2476;
    const double C1985 =
        -(((C2431 * C2506) / C2439 - (zAB * C2507) / p) * C2475) / C2476;
    const double C1072 =
        -(((C2423 * C2504) / C2439 - (xAB * C2505) / p) * C2475) / C2476;
    const double C1533 =
        -(((C2429 * C2504) / C2439 - (yAB * C2505) / p) * C2475) / C2476;
    const double C1984 =
        -(((C2431 * C2504) / C2439 - (zAB * C2505) / p) * C2475) / C2476;
    const double C2445 = C1357 * C1066;
    const double C1387 =
        C2478 - (C1357 * C2420) / p - C2497 - (C1482 * C2455) / C1068;
    const double C1416 = -((C1357 * C2428) / p + (C1482 * C2461) / C1068);
    const double C1445 = -((C1357 * C2430) / p + (C1482 * C2462) / C1068);
    const double C2450 = C1822 * C1066;
    const double C1837 = -((C1822 * C2420) / p + (C1933 * C2455) / C1068);
    const double C1867 =
        C2478 - (C1822 * C2428) / p - C2497 - (C1933 * C2461) / C1068;
    const double C1896 = -((C1822 * C2430) / p + (C1933 * C2462) / C1068);
    const double C2453 = C2273 * C1066;
    const double C2288 = -((C2273 * C2420) / p + (C2382 * C2455) / C1068);
    const double C2317 = -((C2273 * C2428) / p + (C2382 * C2461) / C1068);
    const double C2346 =
        C2478 - (C2273 * C2430) / p - C2497 - (C2382 * C2462) / C1068;
    const double C2424 = C1073 * C1066;
    const double C1071 =
        C2471 - (C1073 * C2420) / p - C2493 - (C1357 * C2455) / C1068;
    const double C1148 = -((C1073 * C2428) / p + (C1357 * C2461) / C1068);
    const double C1221 = -((C1073 * C2430) / p + (C1357 * C2462) / C1068);
    const double C2449 = C1534 * C1066;
    const double C1549 = -((C1534 * C2420) / p + (C1822 * C2455) / C1068);
    const double C1607 =
        C2471 - (C1534 * C2428) / p - C2493 - (C1822 * C2461) / C1068;
    const double C1679 = -((C1534 * C2430) / p + (C1822 * C2462) / C1068);
    const double C2452 = C1985 * C1066;
    const double C2000 = -((C1985 * C2420) / p + (C2273 * C2455) / C1068);
    const double C2058 = -((C1985 * C2428) / p + (C2273 * C2461) / C1068);
    const double C2130 =
        C2471 - (C1985 * C2430) / p - C2493 - (C2273 * C2462) / C1068;
    const double C189 =
        C2457 - (C1072 * C2420) / p - C2487 - (C1073 * C2455) / C1068;
    const double C252 = -((C1072 * C2428) / p + (C1073 * C2461) / C1068);
    const double C315 = -((C1072 * C2430) / p + (C1073 * C2462) / C1068);
    const double C465 = -((C1533 * C2420) / p + (C1534 * C2455) / C1068);
    const double C528 =
        C2457 - (C1533 * C2428) / p - C2487 - (C1534 * C2461) / C1068;
    const double C590 = -((C1533 * C2430) / p + (C1534 * C2462) / C1068);
    const double C737 = -((C1984 * C2420) / p + (C1985 * C2455) / C1068);
    const double C800 = -((C1984 * C2428) / p + (C1985 * C2461) / C1068);
    const double C862 =
        C2457 - (C1984 * C2430) / p - C2487 - (C1985 * C2462) / C1068;
    const double C2477 = C2445 / C1068;
    const double C2481 = C2450 / C1068;
    const double C2485 = C2453 / C1068;
    const double C2456 = C2424 / C1068;
    const double C1311 = -((C1221 * C2428) / p + (C1445 * C2461) / C1068);
    const double C2480 = C2449 / C1068;
    const double C1765 =
        C2482 - (C1679 * C2428) / p - C2500 - (C1896 * C2461) / C1068;
    const double C2484 = C2452 / C1068;
    const double C2216 = -((C2130 * C2428) / p + (C2346 * C2461) / C1068);
    const double C332 =
        C2467 - (C252 * C2420) / p - C2491 - (C1148 * C2455) / C1068;
    const double C377 =
        C2469 - (C315 * C2420) / p - C2492 - (C1221 * C2455) / C1068;
    const double C421 = -((C315 * C2428) / p + (C1221 * C2461) / C1068);
    const double C606 = -((C528 * C2420) / p + (C1607 * C2455) / C1068);
    const double C650 = -((C590 * C2420) / p + (C1679 * C2455) / C1068);
    const double C693 =
        C2469 - (C590 * C2428) / p - C2492 - (C1679 * C2461) / C1068;
    const double C878 = -((C800 * C2420) / p + (C2058 * C2455) / C1068);
    const double C922 = -((C862 * C2420) / p + (C2130 * C2455) / C1068);
    const double C965 = -((C862 * C2428) / p + (C2130 * C2461) / C1068);
    const double C2496 = C1073 - C2477;
    const double C2499 = C1534 - C2481;
    const double C2502 = C1985 - C2485;
    const double C2486 = C1072 - C2456;
    const double C2498 = C1533 - C2480;
    const double C2501 = C1984 - C2484;
    const double C361 = (C417 * be) / p - (C421 * C2420) / p -
                        (C1307 * C2421) / C2454 - (C1311 * C2455) / C1068;
    const double C635 = -((C693 * C2420) / p + (C1765 * C2455) / C1068);
    const double C907 = -((C965 * C2420) / p + (C2216 * C2455) / C1068);
    const double C2508 = C2496 / C2425;
    const double C2514 = C2499 / C2425;
    const double C2516 = C2502 / C2425;
    const double C2503 = C2486 / C2425;
    const double C2513 = C2498 / C2425;
    const double C2515 = C2501 / C2425;
    const double C1105 = (C1064 * be) / p - (C1071 * C2420) / p -
                         (C1383 * C2421) / C2454 - (C1387 * C2455) / C1068 +
                         C2508;
    const double C1164 =
        C2508 - ((C1148 * C2428) / p + (C1416 * C2461) / C1068);
    const double C1237 =
        C2508 - ((C1221 * C2430) / p + (C1445 * C2462) / C1068);
    const double C1564 =
        C2514 - ((C1549 * C2420) / p + (C1837 * C2455) / C1068);
    const double C1622 = (C1292 * be) / p - (C1607 * C2428) / p -
                         (C1862 * C2421) / C2454 - (C1867 * C2461) / C1068 +
                         C2514;
    const double C1694 =
        C2514 - ((C1679 * C2430) / p + (C1896 * C2462) / C1068);
    const double C2015 =
        C2516 - ((C2000 * C2420) / p + (C2288 * C2455) / C1068);
    const double C2073 =
        C2516 - ((C2058 * C2428) / p + (C2317 * C2461) / C1068);
    const double C2145 =
        C2482 - (C2130 * C2430) / p - C2500 - (C2346 * C2462) / C1068 + C2516;
    const double C188 = (C1063 * be) / p - (C189 * C2420) / p -
                        (C1064 * C2421) / C2454 - (C1071 * C2455) / C1068 +
                        C2503;
    const double C236 = C2503 - ((C252 * C2428) / p + (C1148 * C2461) / C1068);
    const double C284 = C2503 - ((C315 * C2430) / p + (C1221 * C2462) / C1068);
    const double C466 = C2513 - ((C465 * C2420) / p + (C1549 * C2455) / C1068);
    const double C512 =
        C2467 - (C528 * C2428) / p - C2491 - (C1607 * C2461) / C1068 + C2513;
    const double C559 = C2513 - ((C590 * C2430) / p + (C1679 * C2462) / C1068);
    const double C738 = C2515 - ((C737 * C2420) / p + (C2000 * C2455) / C1068);
    const double C784 = C2515 - ((C800 * C2428) / p + (C2058 * C2461) / C1068);
    const double C831 =
        C2469 - (C862 * C2430) / p - C2492 - (C2130 * C2462) / C1068 + C2515;
    const double C190 = C2459 - (C188 * C2420) / p - C2488 -
                        (C1105 * C2455) / C1068 +
                        (C189 - (C1071 * C1066) / C1068) / p;
    const double C205 = -((C188 * C2428) / p + (C1105 * C2461) / C1068);
    const double C220 = -((C188 * C2430) / p + (C1105 * C2462) / C1068);
    const double C237 =
        C2463 - (C236 * C2420) / p - C2489 - (C1164 * C2455) / C1068;
    const double C253 = (C252 - (C1148 * C1066) / C1068) / p -
                        ((C236 * C2428) / p + (C1164 * C2461) / C1068);
    const double C268 = -((C236 * C2430) / p + (C1164 * C2462) / C1068);
    const double C285 =
        C2465 - (C284 * C2420) / p - C2490 - (C1237 * C2455) / C1068;
    const double C300 = -((C284 * C2428) / p + (C1237 * C2461) / C1068);
    const double C316 = (C315 - (C1221 * C1066) / C1068) / p -
                        ((C284 * C2430) / p + (C1237 * C2462) / C1068);
    const double C467 = (C465 - (C1549 * C1066) / C1068) / p -
                        ((C466 * C2420) / p + (C1564 * C2455) / C1068);
    const double C482 =
        C2459 - (C466 * C2428) / p - C2488 - (C1564 * C2461) / C1068;
    const double C497 = -((C466 * C2430) / p + (C1564 * C2462) / C1068);
    const double C513 = -((C512 * C2420) / p + (C1622 * C2455) / C1068);
    const double C529 = C2463 - (C512 * C2428) / p - C2489 -
                        (C1622 * C2461) / C1068 +
                        (C528 - (C1607 * C1066) / C1068) / p;
    const double C544 = -((C512 * C2430) / p + (C1622 * C2462) / C1068);
    const double C560 = -((C559 * C2420) / p + (C1694 * C2455) / C1068);
    const double C575 =
        C2465 - (C559 * C2428) / p - C2490 - (C1694 * C2461) / C1068;
    const double C591 = (C590 - (C1679 * C1066) / C1068) / p -
                        ((C559 * C2430) / p + (C1694 * C2462) / C1068);
    const double C739 = (C737 - (C2000 * C1066) / C1068) / p -
                        ((C738 * C2420) / p + (C2015 * C2455) / C1068);
    const double C754 = -((C738 * C2428) / p + (C2015 * C2461) / C1068);
    const double C769 =
        C2459 - (C738 * C2430) / p - C2488 - (C2015 * C2462) / C1068;
    const double C785 = -((C784 * C2420) / p + (C2073 * C2455) / C1068);
    const double C801 = (C800 - (C2058 * C1066) / C1068) / p -
                        ((C784 * C2428) / p + (C2073 * C2461) / C1068);
    const double C816 =
        C2463 - (C784 * C2430) / p - C2489 - (C2073 * C2462) / C1068;
    const double C832 = -((C831 * C2420) / p + (C2145 * C2455) / C1068);
    const double C847 = -((C831 * C2428) / p + (C2145 * C2461) / C1068);
    const double C863 = C2465 - (C831 * C2430) / p - C2490 -
                        (C2145 * C2462) / C1068 +
                        (C862 - (C2130 * C1066) / C1068) / p;
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
