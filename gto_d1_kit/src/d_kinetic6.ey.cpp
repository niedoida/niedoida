/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void kinetic_gradient_12(double ae,
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
    const double C2656 = ae + be;
    const double C2658 = Pi / C2656;
    const double C2659 = std::sqrt(C2658);
    const double C2666 = be * xAB;
    const double C2665 = ae * xAB;
    const double C2664 = 2. * C2656;
    const double C2667 = C2659 * C2666;
    const double C2677 = be * yAB;
    const double C2676 = ae * yAB;
    const double C2678 = C2659 * C2677;
    const double C2682 = be * zAB;
    const double C2681 = ae * zAB;
    const double C2683 = C2659 * C2682;
    const double C2693 = C2681 * C2683;
    const double C2692 = C2676 * C2678;
    const double C2691 = ae * zAB;
    const double C2690 = ae * yAB;
    const double C2689 = C2659 * C2665;
    const double C2688 = C2659 / C2664;
    const double C2687 = std::pow(C2656, 2);
    const double C2686 = be * xAB;
    const double C2696 = C2693 / C2687;
    const double C2695 = C2692 / C2687;
    const double C2694 = C2689 / C2656;
    const double C2698 = C2688 - C2696;
    const double C2697 = C2688 - C2695;
    const double C2214 = std::sqrt(Pi / (ae + be));
    const double C2215 = -(std::sqrt(Pi / C2656) * C2686) / C2656;
    const double C2216 =
        C2659 / (2. * C2656) - (ae * xAB * C2659 * C2686) / C2687;
    const double C2219 = -(C2659 * be * yAB) / C2656;
    const double C2220 = ((C2688 - (C2665 * C2667) / C2687) * C2665) / C2656 +
                         (C2694 - C2667 / C2656) / C2664;
    const double C2221 = -(C2659 * be * zAB) / C2656;
    const double C2357 = (C2659 * std::pow(C2690, 2)) / C2687 + C2688;
    const double C2358 = (C2659 * C2690) / C2656;
    const double C2417 = (C2659 * std::pow(C2691, 2)) / C2687 + C2688;
    const double C2418 = (C2659 * C2691) / C2656;
    const double C2484 = (C2659 * std::pow(C2665, 2)) / C2687 + C2688;
    const double C2516 = (C2697 * C2676) / C2656 +
                         ((C2659 * C2676) / C2656 - C2678 / C2656) / C2664;
    const double C2593 = (C2698 * C2681) / C2656 +
                         ((C2659 * C2681) / C2656 - C2683 / C2656) / C2664;
    const double C2233 = ae * C2221;
    const double C2232 = ae * C2219;
    const double C2231 = be * zAB;
    const double C2230 = be * yAB;
    const double C2229 = std::pow(ae, 2);
    const double C2228 = ae * C2216;
    const double C2227 = ae * C2214;
    const double C2226 = ae * xAB;
    const double C2225 = be * xAB;
    const double C2224 = ae * C2215;
    const double C2223 = ae + be;
    const double C2222 = be * C2214;
    const double C2248 = 2 * C2233;
    const double C2247 = 2 * C2232;
    const double C2246 = C2225 / C2223;
    const double C2245 = std::pow(C2223, 2);
    const double C2244 = C2231 / C2223;
    const double C2243 = 2 * C2224;
    const double C2242 = Pi / C2223;
    const double C2241 = C2230 / C2223;
    const double C2240 = 2 * C2228;
    const double C2239 = 2. * C2227;
    const double C2238 = C2224 * C2226;
    const double C2237 = 4. * C2224;
    const double C2236 = C2224 * C2225;
    const double C2235 = 2. * C2223;
    const double C2234 = 2 * C2222;
    const double C2259 = std::pow(C2246, 2);
    const double C2258 = std::pow(C2244, 2);
    const double C2257 = be * C2243;
    const double C2256 = std::sqrt(C2242);
    const double C2255 = 1 / C2235;
    const double C2254 = std::pow(C2241, 2);
    const double C2253 = C2239 / C2235;
    const double C2252 = 2 * C2238;
    const double C2251 = C2237 / C2235;
    const double C2250 = 2 * C2236;
    const double C2249 = -C2234;
    const double C2269 = C2256 * C2226;
    const double C2268 = C2256 / C2235;
    const double C2267 = C2259 + C2255;
    const double C2266 = C2256 * C2225;
    const double C2265 = C2258 + C2255;
    const double C2264 = 4 * C2257;
    const double C2263 = C2254 + C2255;
    const double C2262 = C2252 / C2223;
    const double C2261 = C2250 / C2223;
    const double C2260 = C2249 / C2235;
    const double C2280 = C2266 / C2223;
    const double C2279 = C2269 / C2223;
    const double C2278 = be * C2269;
    const double C2277 = C2226 * C2266;
    const double C2276 = C2229 * C2267;
    const double C2275 = ae * C2266;
    const double C2274 = C2229 * C2265;
    const double C2273 = -C2264;
    const double C2272 = C2229 * C2263;
    const double C2271 = C2262 + C2253;
    const double C2270 = C2260 - C2261;
    const double C2291 = C2279 - C2280;
    const double C2290 = 2 * C2278;
    const double C2289 = C2277 / C2245;
    const double C2288 = 2 * C2276;
    const double C2287 = -2 * C2275;
    const double C2286 = 2 * C2274;
    const double C2285 = C2273 / C2235;
    const double C2284 = ae * C2270;
    const double C2283 = 2 * C2272;
    const double C2282 = C2271 + C2270;
    const double C2281 = C2270 * C2226;
    const double C2302 = C2291 / C2235;
    const double C2301 = ae * C2290;
    const double C2300 = C2268 - C2289;
    const double C2299 = ae - C2288;
    const double C2298 = be * C2287;
    const double C2297 = ae - C2286;
    const double C2296 = C2284 * C2225;
    const double C2295 = 2 * C2284;
    const double C2294 = ae - C2283;
    const double C2293 = C2282 + C2240;
    const double C2292 = C2281 / C2223;
    const double C2313 = C2300 * C2226;
    const double C2312 = C2301 / C2245;
    const double C2311 = be * C2300;
    const double C2310 = C2299 * C2256;
    const double C2309 = C2298 / C2245;
    const double C2308 = C2297 * C2256;
    const double C2307 = 2 * C2296;
    const double C2306 = be * C2295;
    const double C2305 = C2294 * C2256;
    const double C2304 = C2293 / C2235;
    const double C2303 = C2292 + C2251;
    const double C2321 = C2313 / C2223;
    const double C2320 = C2310 * C2226;
    const double C2319 = C2311 * ae;
    const double C2318 = C2310 / C2235;
    const double C2317 = C2310 * C2225;
    const double C2316 = C2307 / C2223;
    const double C2315 = 6 * C2306;
    const double C2314 = C2303 * C2226;
    const double C2328 = C2321 + C2302;
    const double C2327 = C2320 / C2223;
    const double C2326 = 2 * C2319;
    const double C2325 = C2317 / C2223;
    const double C2324 = C2285 - C2316;
    const double C2323 = -C2315;
    const double C2322 = C2314 / C2223;
    const double C2335 = be * C2328;
    const double C2334 = C2327 + C2312;
    const double C2333 = C2326 / C2223;
    const double C2332 = C2309 - C2325;
    const double C2331 = ae * C2324;
    const double C2330 = C2323 / C2235;
    const double C2329 = C2322 + C2304;
    const double C2339 = 2 * C2335;
    const double C2338 = C2334 + C2332;
    const double C2337 = C2332 * C2226;
    const double C2336 = C2331 * C2225;
    const double C2343 = C2339 + C2280;
    const double C2342 = C2338 / C2235;
    const double C2341 = C2337 / C2223;
    const double C2340 = 2 * C2336;
    const double C2346 = C2343 * ae;
    const double C2345 = C2341 + C2318;
    const double C2344 = C2340 / C2223;
    const double C2349 = C2346 / C2223;
    const double C2348 = C2345 + C2333;
    const double C2347 = C2330 - C2344;
    const double C2350 = C2348 * C2226;
    const double C2351 = C2350 / C2223;
    const double C2352 = C2351 + C2342;
    const double C2353 = C2352 + C2349;
    const double C2365 = C2232 * C2230;
    const double C2364 = be * C2659;
    const double C2363 = be * C2247;
    const double C2362 = ae * C2358;
    const double C2361 = ae * C2659;
    const double C2360 = C2305 / C2235;
    const double C2359 = ae * yAB;
    const double C2374 = 2 * C2365;
    const double C2373 = 2 * C2364;
    const double C2372 = 4 * C2363;
    const double C2371 = 2 * C2362;
    const double C2370 = 2. * C2361;
    const double C2369 = C2232 * C2359;
    const double C2368 = std::pow(C2359, 2);
    const double C2367 = C2256 * C2359;
    const double C2366 = C2305 * C2359;
    const double C2383 = C2374 / C2223;
    const double C2382 = -C2373;
    const double C2381 = -C2372;
    const double C2380 = C2247 + C2371;
    const double C2379 = C2370 / C2235;
    const double C2378 = 2 * C2369;
    const double C2377 = C2256 * C2368;
    const double C2376 = be * C2367;
    const double C2375 = C2366 / C2223;
    const double C2389 = C2382 / C2235;
    const double C2388 = C2381 / C2235;
    const double C2387 = C2380 / C2235;
    const double C2386 = C2378 / C2223;
    const double C2385 = C2377 / C2245;
    const double C2384 = 2 * C2376;
    const double C2393 = C2389 - C2383;
    const double C2392 = C2386 + C2379;
    const double C2391 = C2385 + C2268;
    const double C2390 = ae * C2384;
    const double C2397 = ae * C2393;
    const double C2396 = C2392 * C2359;
    const double C2395 = be * C2391;
    const double C2394 = C2390 / C2245;
    const double C2401 = C2397 * C2230;
    const double C2400 = C2396 / C2223;
    const double C2399 = 2 * C2395;
    const double C2398 = C2375 + C2394;
    const double C2405 = 2 * C2401;
    const double C2404 = C2400 + C2387;
    const double C2403 = C2399 - C2256;
    const double C2402 = C2398 * C2359;
    const double C2408 = C2405 / C2223;
    const double C2407 = C2403 * ae;
    const double C2406 = C2402 / C2223;
    const double C2411 = C2388 - C2408;
    const double C2410 = C2407 / C2223;
    const double C2409 = C2406 + C2360;
    const double C2413 = ae * C2411;
    const double C2412 = C2409 + C2410;
    const double C2425 = C2233 * C2231;
    const double C2424 = be * C2659;
    const double C2423 = be * C2248;
    const double C2422 = ae * C2418;
    const double C2421 = ae * C2659;
    const double C2420 = C2308 / C2235;
    const double C2419 = ae * zAB;
    const double C2434 = 2 * C2425;
    const double C2433 = 2 * C2424;
    const double C2432 = 4 * C2423;
    const double C2431 = 2 * C2422;
    const double C2430 = 2. * C2421;
    const double C2429 = C2233 * C2419;
    const double C2428 = std::pow(C2419, 2);
    const double C2427 = C2256 * C2419;
    const double C2426 = C2308 * C2419;
    const double C2443 = C2434 / C2223;
    const double C2442 = -C2433;
    const double C2441 = -C2432;
    const double C2440 = C2248 + C2431;
    const double C2439 = C2430 / C2235;
    const double C2438 = 2 * C2429;
    const double C2437 = C2256 * C2428;
    const double C2436 = be * C2427;
    const double C2435 = C2426 / C2223;
    const double C2449 = C2442 / C2235;
    const double C2448 = C2441 / C2235;
    const double C2447 = C2440 / C2235;
    const double C2446 = C2438 / C2223;
    const double C2445 = C2437 / C2245;
    const double C2444 = 2 * C2436;
    const double C2453 = C2449 - C2443;
    const double C2452 = C2446 + C2439;
    const double C2451 = C2445 + C2268;
    const double C2450 = ae * C2444;
    const double C2457 = ae * C2453;
    const double C2456 = C2452 * C2419;
    const double C2455 = be * C2451;
    const double C2454 = C2450 / C2245;
    const double C2461 = C2457 * C2231;
    const double C2460 = C2456 / C2223;
    const double C2459 = 2 * C2455;
    const double C2458 = C2435 + C2454;
    const double C2465 = 2 * C2461;
    const double C2464 = C2460 + C2447;
    const double C2463 = C2459 - C2256;
    const double C2462 = C2458 * C2419;
    const double C2468 = C2465 / C2223;
    const double C2467 = C2463 * ae;
    const double C2466 = C2462 / C2223;
    const double C2471 = C2448 - C2468;
    const double C2470 = C2467 / C2223;
    const double C2469 = C2466 + C2420;
    const double C2473 = ae * C2471;
    const double C2472 = C2469 + C2470;
    const double C2490 = std::pow(C2226, 2);
    const double C2489 = C2334 * C2226;
    const double C2488 = C2305 * C2230;
    const double C2487 = C2256 * C2230;
    const double C2486 = ae * C2694;
    const double C2485 = C2271 * C2226;
    const double C2496 = C2256 * C2490;
    const double C2495 = C2489 / C2223;
    const double C2494 = C2488 / C2223;
    const double C2493 = ae * C2487;
    const double C2492 = 2 * C2486;
    const double C2491 = C2485 / C2223;
    const double C2500 = C2496 / C2245;
    const double C2499 = C2495 + C2318;
    const double C2498 = -2 * C2493;
    const double C2497 = C2243 + C2492;
    const double C2503 = C2500 + C2268;
    const double C2502 = be * C2498;
    const double C2501 = C2497 / C2235;
    const double C2506 = be * C2503;
    const double C2505 = C2502 / C2245;
    const double C2504 = C2491 + C2501;
    const double C2508 = 2 * C2506;
    const double C2507 = C2505 - C2494;
    const double C2509 = C2508 - C2256;
    const double C2510 = C2509 * ae;
    const double C2511 = C2510 / C2223;
    const double C2512 = C2499 + C2511;
    const double C2528 = C2413 * C2230;
    const double C2527 = 2 * C2397;
    const double C2526 = ae * C2697;
    const double C2525 = C2392 + C2393;
    const double C2524 = 4. * C2232;
    const double C2523 = C2393 * C2359;
    const double C2522 = C2487 / C2223;
    const double C2521 = C2367 / C2223;
    const double C2520 = C2398 + C2507;
    const double C2519 = C2359 * C2487;
    const double C2518 = C2507 * C2359;
    const double C2537 = 2 * C2528;
    const double C2536 = be * C2527;
    const double C2535 = 2 * C2526;
    const double C2534 = C2524 / C2235;
    const double C2533 = C2523 / C2223;
    const double C2532 = C2521 - C2522;
    const double C2531 = C2520 / C2235;
    const double C2530 = C2519 / C2245;
    const double C2529 = C2518 / C2223;
    const double C2544 = C2537 / C2223;
    const double C2543 = 6 * C2536;
    const double C2542 = C2525 + C2535;
    const double C2541 = C2533 + C2534;
    const double C2540 = C2532 / C2235;
    const double C2539 = C2268 - C2530;
    const double C2538 = C2529 + C2360;
    const double C2549 = -C2543;
    const double C2548 = C2542 / C2235;
    const double C2547 = C2541 * C2359;
    const double C2546 = C2539 * C2359;
    const double C2545 = be * C2539;
    const double C2553 = C2549 / C2235;
    const double C2552 = C2547 / C2223;
    const double C2551 = C2546 / C2223;
    const double C2550 = C2545 * ae;
    const double C2557 = C2553 - C2544;
    const double C2556 = C2552 + C2548;
    const double C2555 = C2551 + C2540;
    const double C2554 = 2 * C2550;
    const double C2559 = be * C2555;
    const double C2558 = C2554 / C2223;
    const double C2561 = 2 * C2559;
    const double C2560 = C2538 + C2558;
    const double C2563 = C2561 + C2522;
    const double C2562 = C2560 * C2359;
    const double C2565 = C2563 * ae;
    const double C2564 = C2562 / C2223;
    const double C2567 = C2565 / C2223;
    const double C2566 = C2564 + C2531;
    const double C2568 = C2566 + C2567;
    const double C2581 = C2308 * C2231;
    const double C2580 = C2256 * C2231;
    const double C2583 = C2581 / C2223;
    const double C2582 = ae * C2580;
    const double C2584 = -2 * C2582;
    const double C2585 = be * C2584;
    const double C2586 = C2585 / C2245;
    const double C2587 = C2586 - C2583;
    const double C2605 = C2473 * C2231;
    const double C2604 = 2 * C2457;
    const double C2603 = ae * C2698;
    const double C2602 = C2452 + C2453;
    const double C2601 = 4. * C2233;
    const double C2600 = C2453 * C2419;
    const double C2599 = C2580 / C2223;
    const double C2598 = C2427 / C2223;
    const double C2597 = C2458 + C2587;
    const double C2596 = C2419 * C2580;
    const double C2595 = C2587 * C2419;
    const double C2614 = 2 * C2605;
    const double C2613 = be * C2604;
    const double C2612 = 2 * C2603;
    const double C2611 = C2601 / C2235;
    const double C2610 = C2600 / C2223;
    const double C2609 = C2598 - C2599;
    const double C2608 = C2597 / C2235;
    const double C2607 = C2596 / C2245;
    const double C2606 = C2595 / C2223;
    const double C2621 = C2614 / C2223;
    const double C2620 = 6 * C2613;
    const double C2619 = C2602 + C2612;
    const double C2618 = C2610 + C2611;
    const double C2617 = C2609 / C2235;
    const double C2616 = C2268 - C2607;
    const double C2615 = C2606 + C2420;
    const double C2626 = -C2620;
    const double C2625 = C2619 / C2235;
    const double C2624 = C2618 * C2419;
    const double C2623 = C2616 * C2419;
    const double C2622 = be * C2616;
    const double C2630 = C2626 / C2235;
    const double C2629 = C2624 / C2223;
    const double C2628 = C2623 / C2223;
    const double C2627 = C2622 * ae;
    const double C2634 = C2630 - C2621;
    const double C2633 = C2629 + C2625;
    const double C2632 = C2628 + C2617;
    const double C2631 = 2 * C2627;
    const double C2636 = be * C2632;
    const double C2635 = C2631 / C2223;
    const double C2638 = 2 * C2636;
    const double C2637 = C2615 + C2635;
    const double C2640 = C2638 + C2599;
    const double C2639 = C2637 * C2419;
    const double C2642 = C2640 * ae;
    const double C2641 = C2639 / C2223;
    const double C2644 = C2642 / C2223;
    const double C2643 = C2641 + C2608;
    const double C2645 = C2643 + C2644;
    const double C2730 = 6 * C2473;
    const double C2729 = C2634 * C2419;
    const double C2728 = C2621 - C2630;
    const double C2727 = 6 * C2413;
    const double C2726 = C2557 * C2359;
    const double C2725 = -2 * C2331;
    const double C2724 = C2544 - C2553;
    const double C2723 = ae * C2243;
    const double C2722 = C2284 * C2226;
    const double C2721 = -2 * C2473;
    const double C2720 = ae * C2248;
    const double C2719 = C2457 * C2419;
    const double C2718 = 2 * C2473;
    const double C2717 = ae * C2604;
    const double C2716 = C2473 * C2419;
    const double C2715 = ae * C2247;
    const double C2714 = C2397 * C2359;
    const double C2713 = 2 * C2413;
    const double C2712 = ae * C2527;
    const double C2711 = C2413 * C2359;
    const double C2710 = C2344 - C2330;
    const double C2709 = C2389 - C2443;
    const double C2708 = -2 * C2413;
    const double C2707 = ae * C2295;
    const double C2706 = C2331 * C2226;
    const double C2705 = 6 * C2331;
    const double C2704 = 2 * C2331;
    const double C2703 = C2347 * C2226;
    const double C2749 = C2718 + C2730;
    const double C2748 = C2729 / C2223;
    const double C2747 = C2713 + C2727;
    const double C2746 = C2726 / C2223;
    const double C2745 = 4. * C2723;
    const double C2744 = 2 * C2722;
    const double C2743 = 4. * C2720;
    const double C2742 = 2 * C2719;
    const double C2741 = 6. * C2717;
    const double C2740 = 2 * C2716;
    const double C2739 = 4. * C2715;
    const double C2738 = 2 * C2714;
    const double C2737 = 6. * C2712;
    const double C2736 = 2 * C2711;
    const double C2735 = ae * C2709;
    const double C2734 = 6. * C2707;
    const double C2733 = 2 * C2706;
    const double C2732 = C2704 + C2705;
    const double C2731 = C2703 / C2223;
    const double C2765 = C2749 / C2235;
    const double C2764 = C2747 / C2235;
    const double C2763 = C2745 / C2235;
    const double C2762 = C2744 / C2223;
    const double C2761 = C2743 / C2235;
    const double C2760 = C2742 / C2223;
    const double C2759 = C2741 / C2235;
    const double C2758 = C2740 / C2223;
    const double C2757 = C2739 / C2235;
    const double C2756 = C2738 / C2223;
    const double C2755 = C2737 / C2235;
    const double C2754 = C2736 / C2223;
    const double C2753 = C2735 * C2231;
    const double C2752 = C2734 / C2235;
    const double C2751 = C2733 / C2223;
    const double C2750 = C2732 / C2235;
    const double C2775 = C2748 + C2765;
    const double C2774 = C2746 + C2764;
    const double C2773 = C2762 + C2763;
    const double C2772 = C2760 + C2761;
    const double C2771 = C2758 + C2759;
    const double C2770 = C2756 + C2757;
    const double C2769 = C2754 + C2755;
    const double C2768 = 2 * C2753;
    const double C2767 = C2751 + C2752;
    const double C2766 = C2731 + C2750;
    const double C2782 = ae * C2773;
    const double C2781 = C2767 * C2226;
    const double C2780 = ae * C2772;
    const double C2779 = C2771 * C2419;
    const double C2778 = ae * C2770;
    const double C2777 = C2769 * C2359;
    const double C2776 = C2768 / C2223;
    const double C2789 = 6 * C2782;
    const double C2788 = C2781 / C2223;
    const double C2787 = 6 * C2780;
    const double C2786 = C2779 / C2223;
    const double C2785 = 6 * C2778;
    const double C2784 = C2777 / C2223;
    const double C2783 = C2448 - C2776;
    const double C2793 = C2704 + C2789;
    const double C2792 = C2718 + C2787;
    const double C2791 = C2713 + C2785;
    const double C2790 = ae * C2783;
    const double C2797 = C2793 / C2235;
    const double C2796 = C2792 / C2235;
    const double C2795 = C2791 / C2235;
    const double C2794 = -2 * C2790;
    const double C2800 = C2788 + C2797;
    const double C2799 = C2786 + C2796;
    const double C2798 = C2784 + C2795;
    const double gx100200 =
        C2329 * C2305 * C2659 -
        (((C2766 * C2226) / C2223 +
          (C2767 + C2347 +
           6 * ae * ((C2324 * C2226) / C2223 + (C2295 + 4 * C2284) / C2235)) /
              C2235) *
         std::pow(C2659, 2)) /
            2.0 +
        C2329 * C2659 * C2308;
    const double gx100020 = (C2659 * C2357 * C2710) / 2.0 +
                            C2270 * C2412 * C2659 + C2270 * C2357 * C2308;
    const double gx100002 = (C2417 * C2659 * C2710) / 2.0 +
                            C2270 * C2305 * C2417 + C2270 * C2659 * C2472;
    const double gx100110 = C2303 * C2398 * C2659 -
                            (C2659 * C2358 * C2766) / 2.0 +
                            C2303 * C2358 * C2308;
    const double gx100101 = C2303 * C2305 * C2418 -
                            (C2418 * C2659 * C2766) / 2.0 +
                            C2303 * C2659 * C2458;
    const double gx100011 = (C2418 * C2358 * C2710) / 2.0 +
                            C2270 * C2398 * C2418 + C2270 * C2358 * C2458;
    const double gx010200 = C2504 * C2507 * C2659 -
                            (C2659 * C2219 * C2800) / 2.0 +
                            C2504 * C2219 * C2308;
    const double gx010020 = (C2659 * C2516 * C2725) / 2.0 +
                            2 * C2224 * C2568 * C2659 +
                            2 * C2224 * C2516 * C2308;
    const double gx010002 = (C2417 * C2219 * C2725) / 2.0 +
                            2 * C2224 * C2507 * C2417 +
                            2 * C2224 * C2219 * C2472;
    const double gx010110 = C2271 * C2560 * C2659 -
                            (C2659 * C2697 * C2767) / 2.0 +
                            C2271 * C2697 * C2308;
    const double gx010101 = C2271 * C2507 * C2418 -
                            (C2418 * C2219 * C2767) / 2.0 +
                            C2271 * C2219 * C2458;
    const double gx010011 = (C2418 * C2697 * C2725) / 2.0 +
                            2 * C2224 * C2560 * C2418 +
                            2 * C2224 * C2697 * C2458;
    const double gx001200 = C2504 * C2305 * C2221 -
                            (C2221 * C2659 * C2800) / 2.0 +
                            C2504 * C2659 * C2587;
    const double gx001020 = (C2221 * C2357 * C2725) / 2.0 +
                            2 * C2224 * C2412 * C2221 +
                            2 * C2224 * C2357 * C2587;
    const double gx001002 = (C2593 * C2659 * C2725) / 2.0 +
                            2 * C2224 * C2305 * C2593 +
                            2 * C2224 * C2659 * C2645;
    const double gx001110 = C2271 * C2398 * C2221 -
                            (C2221 * C2358 * C2767) / 2.0 +
                            C2271 * C2358 * C2587;
    const double gx001101 = C2271 * C2305 * C2698 -
                            (C2698 * C2659 * C2767) / 2.0 +
                            C2271 * C2659 * C2637;
    const double gx001011 = (C2698 * C2358 * C2725) / 2.0 +
                            2 * C2224 * C2398 * C2698 +
                            2 * C2224 * C2358 * C2637;
    gx[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx100110;
    gx[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx100011;
    gx[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx100200 - 0.5 * gx100020 + gx100002);
    gx[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx100101;
    gx[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx100200 - std::sqrt(0.75) * gx100020);
    gx[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx010110;
    gx[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx010011;
    gx[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx010200 - 0.5 * gx010020 + gx010002);
    gx[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx010101;
    gx[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx010200 - std::sqrt(0.75) * gx010020);
    gx[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gx001110;
    gx[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gx001011;
    gx[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gx001200 - 0.5 * gx001020 + gx001002);
    gx[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gx001101;
    gx[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gx001200 - std::sqrt(0.75) * gx001020);
    const double gy100200 = C2353 * C2247 * C2659 +
                            (C2659 * C2220 * C2708) / 2.0 +
                            C2220 * C2247 * C2308;
    const double gy100020 = C2332 * C2404 * C2659 -
                            (C2659 * C2215 * C2798) / 2.0 +
                            C2215 * C2404 * C2308;
    const double gy100002 = C2332 * C2247 * C2417 +
                            (C2417 * C2215 * C2708) / 2.0 +
                            C2215 * C2247 * C2472;
    const double gy100110 = C2348 * C2392 * C2659 -
                            (C2659 * C2216 * C2769) / 2.0 +
                            C2216 * C2392 * C2308;
    const double gy100101 = C2348 * C2247 * C2418 +
                            (C2418 * C2216 * C2708) / 2.0 +
                            C2216 * C2247 * C2458;
    const double gy100011 = C2332 * C2392 * C2418 -
                            (C2418 * C2215 * C2769) / 2.0 +
                            C2215 * C2392 * C2458;
    const double gy010200 = C2512 * C2393 * C2659 +
                            (C2659 * C2484 * C2724) / 2.0 +
                            C2484 * C2393 * C2308;
    const double gy010020 =
        C2310 * C2556 * C2659 -
        (C2659 * C2214 *
         ((C2774 * C2359) / C2223 +
          (C2769 + C2557 +
           6 * ae * ((C2411 * C2359) / C2223 + (C2527 + 4 * C2397) / C2235)) /
              C2235)) /
            2.0 +
        C2214 * C2556 * C2308;
    const double gy010002 = C2310 * C2393 * C2417 +
                            (C2417 * C2214 * C2724) / 2.0 +
                            C2214 * C2393 * C2472;
    const double gy010110 = C2334 * C2541 * C2659 -
                            (C2659 * C2694 * C2774) / 2.0 +
                            C2694 * C2541 * C2308;
    const double gy010101 = C2334 * C2393 * C2418 +
                            (C2418 * C2694 * C2724) / 2.0 +
                            C2694 * C2393 * C2458;
    const double gy010011 = C2310 * C2541 * C2418 -
                            (C2418 * C2214 * C2774) / 2.0 +
                            C2214 * C2541 * C2458;
    const double gy001200 = C2512 * C2247 * C2221 +
                            (C2221 * C2484 * C2708) / 2.0 +
                            C2484 * C2247 * C2587;
    const double gy001020 = C2310 * C2404 * C2221 -
                            (C2221 * C2214 * C2798) / 2.0 +
                            C2214 * C2404 * C2587;
    const double gy001002 = C2310 * C2247 * C2593 +
                            (C2593 * C2214 * C2708) / 2.0 +
                            C2214 * C2247 * C2645;
    const double gy001110 = C2334 * C2392 * C2221 -
                            (C2221 * C2694 * C2769) / 2.0 +
                            C2694 * C2392 * C2587;
    const double gy001101 = C2334 * C2247 * C2698 +
                            (C2698 * C2694 * C2708) / 2.0 +
                            C2694 * C2247 * C2637;
    const double gy001011 = C2310 * C2392 * C2698 -
                            (C2698 * C2214 * C2769) / 2.0 +
                            C2214 * C2392 * C2637;
    gy[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy100110;
    gy[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy100011;
    gy[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy100200 - 0.5 * gy100020 + gy100002);
    gy[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy100101;
    gy[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy100200 - std::sqrt(0.75) * gy100020);
    gy[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy010110;
    gy[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy010011;
    gy[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy010200 - 0.5 * gy010020 + gy010002);
    gy[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy010101;
    gy[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy010200 - std::sqrt(0.75) * gy010020);
    gy[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gy001110;
    gy[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gy001011;
    gy[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gy001200 - 0.5 * gy001020 + gy001002);
    gy[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gy001101;
    gy[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gy001200 - std::sqrt(0.75) * gy001020);
    const double gz100200 = C2353 * C2659 * C2248 + C2220 * C2305 * C2248 +
                            (C2220 * C2659 * C2794) / 2.0;
    const double gz100020 = C2332 * C2357 * C2248 + C2215 * C2412 * C2248 +
                            (C2215 * C2357 * C2794) / 2.0;
    const double gz100002 = C2332 * C2659 * C2464 + C2215 * C2305 * C2464 -
                            (C2215 * C2659 * C2799) / 2.0;
    const double gz100110 = C2348 * C2358 * C2248 + C2216 * C2398 * C2248 +
                            (C2216 * C2358 * C2721) / 2.0;
    const double gz100101 = C2348 * C2659 * C2452 + C2216 * C2305 * C2452 -
                            (C2216 * C2659 * C2771) / 2.0;
    const double gz100011 = C2332 * C2358 * C2452 + C2215 * C2398 * C2452 -
                            (C2215 * C2358 * C2771) / 2.0;
    const double gz010200 = C2512 * C2219 * C2248 + C2484 * C2507 * C2248 +
                            (C2484 * C2219 * C2721) / 2.0;
    const double gz010020 = C2310 * C2516 * C2248 + C2214 * C2568 * C2248 +
                            (C2214 * C2516 * C2721) / 2.0;
    const double gz010002 = C2310 * C2219 * C2464 + C2214 * C2507 * C2464 -
                            (C2214 * C2219 * C2799) / 2.0;
    const double gz010110 = C2334 * C2697 * C2248 + C2694 * C2560 * C2248 +
                            (C2694 * C2697 * C2721) / 2.0;
    const double gz010101 = C2334 * C2219 * C2452 + C2694 * C2507 * C2452 -
                            (C2694 * C2219 * C2771) / 2.0;
    const double gz010011 = C2310 * C2697 * C2452 + C2214 * C2560 * C2452 -
                            (C2214 * C2697 * C2771) / 2.0;
    const double gz001200 = C2512 * C2659 * C2453 + C2484 * C2305 * C2453 +
                            (C2484 * C2659 * C2728) / 2.0;
    const double gz001020 = C2310 * C2357 * C2453 + C2214 * C2412 * C2453 +
                            (C2214 * C2357 * C2728) / 2.0;
    const double gz001002 =
        C2310 * C2659 * C2633 + C2214 * C2305 * C2633 -
        (C2214 * C2659 *
         ((C2775 * C2419) / C2223 +
          (C2771 + C2634 +
           6 * ae * ((C2471 * C2419) / C2223 + (C2604 + 4 * C2457) / C2235)) /
              C2235)) /
            2.0;
    const double gz001110 = C2334 * C2358 * C2453 + C2694 * C2398 * C2453 +
                            (C2694 * C2358 * C2728) / 2.0;
    const double gz001101 = C2334 * C2659 * C2618 + C2694 * C2305 * C2618 -
                            (C2694 * C2659 * C2775) / 2.0;
    const double gz001011 = C2310 * C2358 * C2618 + C2214 * C2398 * C2618 -
                            (C2214 * C2358 * C2775) / 2.0;
    gz[(Ai + 0) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz100110;
    gz[(Ai + 0) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz100011;
    gz[(Ai + 0) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz100200 - 0.5 * gz100020 + gz100002);
    gz[(Ai + 0) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz100101;
    gz[(Ai + 0) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz100200 - std::sqrt(0.75) * gz100020);
    gz[(Ai + 1) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz010110;
    gz[(Ai + 1) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz010011;
    gz[(Ai + 1) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz010200 - 0.5 * gz010020 + gz010002);
    gz[(Ai + 1) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz010101;
    gz[(Ai + 1) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz010200 - std::sqrt(0.75) * gz010020);
    gz[(Ai + 2) * matrix_size + Bi + 0] += cc * std::sqrt(3.0) * gz001110;
    gz[(Ai + 2) * matrix_size + Bi + 1] += cc * std::sqrt(3.0) * gz001011;
    gz[(Ai + 2) * matrix_size + Bi + 2] +=
        cc * (-0.5 * gz001200 - 0.5 * gz001020 + gz001002);
    gz[(Ai + 2) * matrix_size + Bi + 3] += cc * std::sqrt(3.0) * gz001101;
    gz[(Ai + 2) * matrix_size + Bi + 4] +=
        cc * (std::sqrt(0.75) * gz001200 - std::sqrt(0.75) * gz001020);
}

// Automatically generated, do not edit
