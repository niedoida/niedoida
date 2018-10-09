/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void overlap_gradient_13(double ae,
                         double be,
                         double cc,
                         double xAB,
                         double yAB,
                         double zAB,
                         double* const gx,
                         double* const gy,
                         double* const gz,
                         std::size_t matrix_size,
                         std::size_t Ai,
                         std::size_t Bi)
{
    const double C2414 = ae + be;
    const double C2416 = Pi / C2414;
    const double C2417 = std::sqrt(C2416);
    const double C2422 = be * xAB;
    const double C2421 = ae * xAB;
    const double C2420 = 2. * C2414;
    const double C2423 = C2417 * C2422;
    const double C2429 = std::pow(C2414, 2);
    const double C2428 = C2421 * C2423;
    const double C2427 = C2417 / C2420;
    const double C2430 = C2428 / C2429;
    const double C2431 = C2427 - C2430;
    const double C2435 = ae * yAB;
    const double C2439 = ae * zAB;
    const double C2445 = be * yAB;
    const double C2446 = C2417 * C2445;
    const double C2447 = C2435 * C2446;
    const double C2448 = C2447 / C2429;
    const double C2449 = C2427 - C2448;
    const double C2453 = be * zAB;
    const double C2454 = C2417 * C2453;
    const double C2455 = C2439 * C2454;
    const double C2456 = C2455 / C2429;
    const double C2457 = C2427 - C2456;
    const double C2475 = C2454 / C2414;
    const double C2474 = C2457 * C2439;
    const double C2473 = C2446 / C2414;
    const double C2472 = C2449 * C2435;
    const double C2471 = C2417 * C2439;
    const double C2470 = std::pow(C2439, 2);
    const double C2469 = 2. * C2429;
    const double C2468 = C2417 * C2435;
    const double C2467 = std::pow(C2435, 2);
    const double C2466 = std::pow(C2421, 2);
    const double C2465 = C2423 / C2414;
    const double C2464 = C2417 * C2421;
    const double C2463 = std::pow(C2414, 2);
    const double C2462 = ae * xAB;
    const double C2461 = be * xAB;
    const double C2483 = C2474 / C2414;
    const double C2482 = C2472 / C2414;
    const double C2481 = C2471 / C2414;
    const double C2480 = C2417 * C2470;
    const double C2479 = C2468 / C2414;
    const double C2478 = C2417 * C2467;
    const double C2477 = C2417 * C2466;
    const double C2476 = C2464 / C2414;
    const double C2489 = C2481 - C2475;
    const double C2488 = C2479 - C2473;
    const double C2487 = C2480 / C2429;
    const double C2486 = C2478 / C2429;
    const double C2485 = C2477 / C2429;
    const double C2484 = C2476 - C2465;
    const double C2495 = C2489 / C2420;
    const double C2494 = C2488 / C2420;
    const double C2493 = C2487 + C2427;
    const double C2492 = C2486 + C2427;
    const double C2491 = C2485 + C2427;
    const double C2490 = C2484 / C2420;
    const double C2497 = C2483 + C2495;
    const double C2496 = C2482 + C2494;
    const double C2253 = std::sqrt(Pi / (ae + be));
    const double C2254 = -(std::sqrt(Pi / C2414) * C2461) / C2414;
    const double C2255 = C2417 / (2. * C2414) - (C2462 * C2417 * C2461) / C2463;
    const double C2256 = (C2417 * C2462) / C2414;
    const double C2257 =
        ((C2417 / C2420 - (C2421 * C2423) / C2463) * C2421) / C2414 + C2490;
    const double C2260 = (((C2431 * C2421) / C2414 + C2490) * C2421) / C2414 +
                         (C2491 + 2 * C2431) / C2420;
    const double C2261 = -(C2417 * be * yAB) / C2414;
    const double C2262 = -(C2417 * be * zAB) / C2414;
    const double C2291 = (C2492 * C2435) / C2414 + (2. * C2468) / C2469;
    const double C2306 = (C2493 * C2439) / C2414 + (2. * C2471) / C2469;
    const double C2336 = (C2491 * C2421) / C2414 + (2. * C2464) / C2469;
    const double C2339 = (C2496 * C2435) / C2414 + (C2492 + 2 * C2449) / C2420;
    const double C2379 = (C2497 * C2439) / C2414 + (C2493 + 2 * C2457) / C2420;
    const double C2268 = ae * C2253;
    const double C2267 = ae * xAB;
    const double C2266 = be * xAB;
    const double C2265 = ae * C2254;
    const double C2264 = ae + be;
    const double C2263 = be * C2253;
    const double C2274 = 2. * C2268;
    const double C2273 = C2265 * C2267;
    const double C2272 = 4. * C2265;
    const double C2271 = C2265 * C2266;
    const double C2270 = 2. * C2264;
    const double C2269 = 2 * C2263;
    const double C2279 = C2274 / C2270;
    const double C2278 = 2 * C2273;
    const double C2277 = C2272 / C2270;
    const double C2276 = 2 * C2271;
    const double C2275 = -C2269;
    const double C2282 = C2278 / C2264;
    const double C2281 = C2276 / C2264;
    const double C2280 = C2275 / C2270;
    const double C2284 = C2282 + C2279;
    const double C2283 = C2280 - C2281;
    const double C2285 = C2283 * C2267;
    const double C2286 = C2285 / C2264;
    const double C2287 = C2286 + C2277;
    const double C2296 = ae * C2417;
    const double C2295 = ae * yAB;
    const double C2294 = ae * C2261;
    const double C2298 = 2. * C2296;
    const double C2297 = C2294 * C2295;
    const double C2300 = C2298 / C2270;
    const double C2299 = 2 * C2297;
    const double C2301 = C2299 / C2264;
    const double C2302 = C2301 + C2300;
    const double C2311 = ae * C2417;
    const double C2310 = ae * zAB;
    const double C2309 = ae * C2262;
    const double C2313 = 2. * C2311;
    const double C2312 = C2309 * C2310;
    const double C2315 = C2313 / C2270;
    const double C2314 = 2 * C2312;
    const double C2316 = C2314 / C2264;
    const double C2317 = C2316 + C2315;
    const double C2344 = 4. * C2294;
    const double C2343 = be * yAB;
    const double C2342 = be * C2417;
    const double C2347 = C2344 / C2270;
    const double C2346 = C2294 * C2343;
    const double C2345 = 2 * C2342;
    const double C2349 = 2 * C2346;
    const double C2348 = -C2345;
    const double C2351 = C2349 / C2264;
    const double C2350 = C2348 / C2270;
    const double C2352 = C2350 - C2351;
    const double C2353 = C2352 * C2295;
    const double C2354 = C2353 / C2264;
    const double C2355 = C2354 + C2347;
    const double C2384 = 4. * C2309;
    const double C2383 = be * zAB;
    const double C2382 = be * C2417;
    const double C2387 = C2384 / C2270;
    const double C2386 = C2309 * C2383;
    const double C2385 = 2 * C2382;
    const double C2389 = 2 * C2386;
    const double C2388 = -C2385;
    const double C2391 = C2389 / C2264;
    const double C2390 = C2388 / C2270;
    const double C2392 = C2390 - C2391;
    const double C2393 = C2392 * C2310;
    const double C2394 = C2393 / C2264;
    const double C2395 = C2394 + C2387;
    const double C2526 = ae * C2457;
    const double C2525 = C2317 + C2392;
    const double C2524 = C2395 * C2310;
    const double C2523 = C2309 * C2453;
    const double C2522 = ae * C2449;
    const double C2521 = C2302 + C2352;
    const double C2520 = C2355 * C2295;
    const double C2519 = ae * C2491;
    const double C2518 = 2 * C2284;
    const double C2517 = ae * C2493;
    const double C2516 = 2 * C2317;
    const double C2515 = ae * C2481;
    const double C2514 = C2317 * C2310;
    const double C2513 = ae * C2492;
    const double C2512 = 2 * C2302;
    const double C2511 = ae * C2479;
    const double C2510 = C2302 * C2295;
    const double C2509 = 2 * C2309;
    const double C2508 = 2 * C2294;
    const double C2507 = ae * C2256;
    const double C2506 = 2 * C2265;
    const double C2505 = C2284 * C2267;
    const double C2504 = ae * C2255;
    const double C2503 = C2284 + C2283;
    const double C2502 = C2287 * C2267;
    const double C2542 = 2 * C2526;
    const double C2541 = C2524 / C2264;
    const double C2540 = 2 * C2523;
    const double C2539 = 2 * C2522;
    const double C2538 = C2520 / C2264;
    const double C2537 = 2 * C2519;
    const double C2536 = 2 * C2517;
    const double C2535 = 2 * C2515;
    const double C2534 = C2514 / C2264;
    const double C2533 = 2 * C2513;
    const double C2532 = 2 * C2511;
    const double C2531 = C2510 / C2264;
    const double C2530 = 2 * C2507;
    const double C2529 = C2505 / C2264;
    const double C2528 = 2 * C2504;
    const double C2527 = C2502 / C2264;
    const double C2552 = C2525 + C2542;
    const double C2551 = C2540 / C2264;
    const double C2550 = C2521 + C2539;
    const double C2549 = C2518 + C2537;
    const double C2548 = C2516 + C2536;
    const double C2547 = C2509 + C2535;
    const double C2546 = C2512 + C2533;
    const double C2545 = C2508 + C2532;
    const double C2544 = C2506 + C2530;
    const double C2543 = C2503 + C2528;
    const double C2562 = C2552 / C2270;
    const double C2561 = C2350 - C2551;
    const double C2560 = C2550 / C2270;
    const double C2559 = C2549 / C2270;
    const double C2558 = C2548 / C2270;
    const double C2557 = C2547 / C2270;
    const double C2556 = C2546 / C2270;
    const double C2555 = C2545 / C2270;
    const double C2554 = C2544 / C2270;
    const double C2553 = C2543 / C2270;
    const double C2568 = C2541 + C2562;
    const double C2567 = C2538 + C2560;
    const double C2566 = C2534 + C2557;
    const double C2565 = C2531 + C2555;
    const double C2564 = C2529 + C2554;
    const double C2563 = C2527 + C2553;
    const double C2571 = C2564 * C2267;
    const double C2570 = C2566 * C2310;
    const double C2569 = C2565 * C2295;
    const double C2574 = C2571 / C2264;
    const double C2573 = C2570 / C2264;
    const double C2572 = C2569 / C2264;
    const double C2577 = C2574 + C2559;
    const double C2576 = C2573 + C2558;
    const double C2575 = C2572 + C2556;
    const double gx100300 = ((C2563 * C2267) / C2264 +
                             (C2564 + 2 * C2287 + 2 * ae * C2257) / C2270) *
                            std::pow(C2417, 2);
    const double gx100030 = C2283 * C2291 * C2417;
    const double gx100003 = C2283 * C2417 * C2306;
    const double gx100210 = C2563 * C2479 * C2417;
    const double gx100201 = C2563 * C2417 * C2481;
    const double gx100021 = C2283 * C2492 * C2481;
    const double gx100120 = C2287 * C2492 * C2417;
    const double gx100102 = C2287 * C2417 * C2493;
    const double gx100012 = C2283 * C2479 * C2493;
    const double gx100111 = C2287 * C2479 * C2481;
    const double gx010300 = C2577 * C2261 * C2417;
    const double gx010030 = 2 * C2265 * C2339 * C2417;
    const double gx010003 = 2 * C2265 * C2261 * C2306;
    const double gx010210 = C2564 * C2449 * C2417;
    const double gx010201 = C2564 * C2261 * C2481;
    const double gx010021 = 2 * C2265 * C2496 * C2481;
    const double gx010120 = C2284 * C2496 * C2417;
    const double gx010102 = C2284 * C2261 * C2493;
    const double gx010012 = 2 * C2265 * C2449 * C2493;
    const double gx010111 = C2284 * C2449 * C2481;
    const double gx001300 = C2577 * C2417 * C2262;
    const double gx001030 = 2 * C2265 * C2291 * C2262;
    const double gx001003 = 2 * C2265 * C2417 * C2379;
    const double gx001210 = C2564 * C2479 * C2262;
    const double gx001201 = C2564 * C2417 * C2457;
    const double gx001021 = 2 * C2265 * C2492 * C2457;
    const double gx001120 = C2284 * C2492 * C2262;
    const double gx001102 = C2284 * C2417 * C2497;
    const double gx001012 = 2 * C2265 * C2479 * C2497;
    const double gx001111 = C2284 * C2479 * C2457;
    gx[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx100210 - std::sqrt(5.0 / 8.0) * gx100030);
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx100111;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx100012 + std::sqrt(3.0 / 8.0) * gx100210 +
               std::sqrt(3.0 / 8.0) * gx100030);
    gx[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gx100003 - 1.5 * gx100201 - 1.5 * gx100021);
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx100102 - (std::sqrt(3.0 / 8.0) * gx100120 +
                                           std::sqrt(3.0 / 8.0) * gx100300));
    gx[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx100201 - std::sqrt(7.5) * gx100021);
    gx[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx100300 + std::sqrt(45.0 / 8.0) * gx100120);
    gx[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx010210 - std::sqrt(5.0 / 8.0) * gx010030);
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx010111;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx010012 + std::sqrt(3.0 / 8.0) * gx010210 +
               std::sqrt(3.0 / 8.0) * gx010030);
    gx[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gx010003 - 1.5 * gx010201 - 1.5 * gx010021);
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx010102 - (std::sqrt(3.0 / 8.0) * gx010120 +
                                           std::sqrt(3.0 / 8.0) * gx010300));
    gx[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx010201 - std::sqrt(7.5) * gx010021);
    gx[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx010300 + std::sqrt(45.0 / 8.0) * gx010120);
    gx[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gx001210 - std::sqrt(5.0 / 8.0) * gx001030);
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gx001111;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gx001012 + std::sqrt(3.0 / 8.0) * gx001210 +
               std::sqrt(3.0 / 8.0) * gx001030);
    gx[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gx001003 - 1.5 * gx001201 - 1.5 * gx001021);
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gx001102 - (std::sqrt(3.0 / 8.0) * gx001120 +
                                           std::sqrt(3.0 / 8.0) * gx001300));
    gx[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gx001201 - std::sqrt(7.5) * gx001021);
    gx[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gx001300 + std::sqrt(45.0 / 8.0) * gx001120);
    const double gy100300 = C2260 * C2508 * C2417;
    const double gy100030 = C2254 * C2575 * C2417;
    const double gy100003 = C2254 * C2508 * C2306;
    const double gy100210 = C2257 * C2302 * C2417;
    const double gy100201 = C2257 * C2508 * C2481;
    const double gy100021 = C2254 * C2565 * C2481;
    const double gy100120 = C2255 * C2565 * C2417;
    const double gy100102 = C2255 * C2508 * C2493;
    const double gy100012 = C2254 * C2302 * C2493;
    const double gy100111 = C2255 * C2302 * C2481;
    const double gy010300 =
        C2336 * (C2350 - (2 * C2294 * C2445) / C2264) * C2417;
    const double gy010030 = C2253 *
                            ((C2567 * C2295) / C2264 +
                             (C2565 + 2 * C2355 + 2 * ae * C2496) / C2270) *
                            C2417;
    const double gy010003 = C2253 * C2352 * C2306;
    const double gy010210 = C2491 * C2355 * C2417;
    const double gy010201 = C2491 * C2352 * C2481;
    const double gy010021 = C2253 * C2567 * C2481;
    const double gy010120 = C2256 * C2567 * C2417;
    const double gy010102 = C2256 * C2352 * C2493;
    const double gy010012 = C2253 * C2355 * C2493;
    const double gy010111 = C2256 * C2355 * C2481;
    const double gy001300 = C2336 * C2508 * C2262;
    const double gy001030 = C2253 * C2575 * C2262;
    const double gy001003 = C2253 * C2508 * C2379;
    const double gy001210 = C2491 * C2302 * C2262;
    const double gy001201 = C2491 * C2508 * C2457;
    const double gy001021 = C2253 * C2565 * C2457;
    const double gy001120 = C2256 * C2565 * C2262;
    const double gy001102 = C2256 * C2508 * C2497;
    const double gy001012 = C2253 * C2302 * C2497;
    const double gy001111 = C2256 * C2302 * C2457;
    gy[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy100210 - std::sqrt(5.0 / 8.0) * gy100030);
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy100111;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy100012 + std::sqrt(3.0 / 8.0) * gy100210 +
               std::sqrt(3.0 / 8.0) * gy100030);
    gy[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gy100003 - 1.5 * gy100201 - 1.5 * gy100021);
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy100102 - (std::sqrt(3.0 / 8.0) * gy100120 +
                                           std::sqrt(3.0 / 8.0) * gy100300));
    gy[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy100201 - std::sqrt(7.5) * gy100021);
    gy[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy100300 + std::sqrt(45.0 / 8.0) * gy100120);
    gy[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy010210 - std::sqrt(5.0 / 8.0) * gy010030);
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy010111;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy010012 + std::sqrt(3.0 / 8.0) * gy010210 +
               std::sqrt(3.0 / 8.0) * gy010030);
    gy[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gy010003 - 1.5 * gy010201 - 1.5 * gy010021);
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy010102 - (std::sqrt(3.0 / 8.0) * gy010120 +
                                           std::sqrt(3.0 / 8.0) * gy010300));
    gy[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy010201 - std::sqrt(7.5) * gy010021);
    gy[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy010300 + std::sqrt(45.0 / 8.0) * gy010120);
    gy[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gy001210 - std::sqrt(5.0 / 8.0) * gy001030);
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gy001111;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gy001012 + std::sqrt(3.0 / 8.0) * gy001210 +
               std::sqrt(3.0 / 8.0) * gy001030);
    gy[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gy001003 - 1.5 * gy001201 - 1.5 * gy001021);
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gy001102 - (std::sqrt(3.0 / 8.0) * gy001120 +
                                           std::sqrt(3.0 / 8.0) * gy001300));
    gy[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gy001201 - std::sqrt(7.5) * gy001021);
    gy[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gy001300 + std::sqrt(45.0 / 8.0) * gy001120);
    const double gz100300 = C2260 * C2417 * C2509;
    const double gz100030 = C2254 * C2291 * C2509;
    const double gz100003 = C2254 * C2417 * C2576;
    const double gz100210 = C2257 * C2479 * C2509;
    const double gz100201 = C2257 * C2417 * C2317;
    const double gz100021 = C2254 * C2492 * C2317;
    const double gz100120 = C2255 * C2492 * C2509;
    const double gz100102 = C2255 * C2417 * C2566;
    const double gz100012 = C2254 * C2479 * C2566;
    const double gz100111 = C2255 * C2479 * C2317;
    const double gz010300 = C2336 * C2261 * C2509;
    const double gz010030 = C2253 * C2339 * C2509;
    const double gz010003 = C2253 * C2261 * C2576;
    const double gz010210 = C2491 * C2449 * C2509;
    const double gz010201 = C2491 * C2261 * C2317;
    const double gz010021 = C2253 * C2496 * C2317;
    const double gz010120 = C2256 * C2496 * C2509;
    const double gz010102 = C2256 * C2261 * C2566;
    const double gz010012 = C2253 * C2449 * C2566;
    const double gz010111 = C2256 * C2449 * C2317;
    const double gz001300 = C2336 * C2417 * C2561;
    const double gz001030 = C2253 * C2291 * C2561;
    const double gz001003 = C2253 * C2417 *
                            ((C2568 * C2310) / C2264 +
                             (C2566 + 2 * C2395 + 2 * ae * C2497) / C2270);
    const double gz001210 = C2491 * C2479 * C2392;
    const double gz001201 = C2491 * C2417 * C2395;
    const double gz001021 = C2253 * C2492 * C2395;
    const double gz001120 = C2256 * C2492 * C2392;
    const double gz001102 = C2256 * C2417 * C2568;
    const double gz001012 = C2253 * C2479 * C2568;
    const double gz001111 = C2256 * C2479 * C2395;
    gz[(Ai + 0) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz100210 - std::sqrt(5.0 / 8.0) * gz100030);
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz100111;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz100012 + std::sqrt(3.0 / 8.0) * gz100210 +
               std::sqrt(3.0 / 8.0) * gz100030);
    gz[(Ai + 0) * matrix_size + Bi + 3] +=
        cc * (gz100003 - 1.5 * gz100201 - 1.5 * gz100021);
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz100102 - (std::sqrt(3.0 / 8.0) * gz100120 +
                                           std::sqrt(3.0 / 8.0) * gz100300));
    gz[(Ai + 0) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz100201 - std::sqrt(7.5) * gz100021);
    gz[(Ai + 0) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz100300 + std::sqrt(45.0 / 8.0) * gz100120);
    gz[(Ai + 1) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz010210 - std::sqrt(5.0 / 8.0) * gz010030);
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz010111;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz010012 + std::sqrt(3.0 / 8.0) * gz010210 +
               std::sqrt(3.0 / 8.0) * gz010030);
    gz[(Ai + 1) * matrix_size + Bi + 3] +=
        cc * (gz010003 - 1.5 * gz010201 - 1.5 * gz010021);
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz010102 - (std::sqrt(3.0 / 8.0) * gz010120 +
                                           std::sqrt(3.0 / 8.0) * gz010300));
    gz[(Ai + 1) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz010201 - std::sqrt(7.5) * gz010021);
    gz[(Ai + 1) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz010300 + std::sqrt(45.0 / 8.0) * gz010120);
    gz[(Ai + 2) * matrix_size + Bi + 0] +=
        cc *
        (std::sqrt(45. / 8.0) * gz001210 - std::sqrt(5.0 / 8.0) * gz001030);
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(15.0) * gz001111;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        -cc * (std::sqrt(6.0) * gz001012 + std::sqrt(3.0 / 8.0) * gz001210 +
               std::sqrt(3.0 / 8.0) * gz001030);
    gz[(Ai + 2) * matrix_size + Bi + 3] +=
        cc * (gz001003 - 1.5 * gz001201 - 1.5 * gz001021);
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(6.0) * gz001102 - (std::sqrt(3.0 / 8.0) * gz001120 +
                                           std::sqrt(3.0 / 8.0) * gz001300));
    gz[(Ai + 2) * matrix_size + Bi + 5] +=
        cc * (std::sqrt(7.5) * gz001201 - std::sqrt(7.5) * gz001021);
    gz[(Ai + 2) * matrix_size + Bi + 6] +=
        cc *
        (std::sqrt(5.0 / 8.0) * gz001300 + std::sqrt(45.0 / 8.0) * gz001120);
}

// Automatically generated, do not edit
