/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2010_3_vr(const double ae,
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
    const double C1056 = g[6];
    const double C1074 = g[7];
    const double C1090 = g[8];
    const double C1145 = g[9];
    const double C1213 = g[10];
    const double C1267 = g[11];
    const double C1281 = g[12];
    const double C1296 = g[13];
    const double C1337 = g[14];
    const double C1352 = g[15];
    const double C1441 = g[16];
    const double C1800 = g[17];
    const double C1842 = g[18];
    const double C1059 = p + q;
    const double C1058 = p * q;
    const double C2343 = bs[4];
    const double C2342 = bs[3];
    const double C2340 = bs[2];
    const double C2338 = std::pow(Pi, 2.5);
    const double C2337 = ce * de;
    const double C2336 = bs[0];
    const double C2333 = bs[1];
    const double C2332 = zP - zQ;
    const double C2331 = be * zAB;
    const double C2330 = yP - yQ;
    const double C2329 = be * yAB;
    const double C2328 = 2 * p;
    const double C2326 = xP - xQ;
    const double C2325 = be * xAB;
    const double C1076 = C1059 * p;
    const double C2339 = std::sqrt(C1059);
    const double C2335 = q * C1059;
    const double C2334 = C1058 * ce;
    const double C2324 = C1059 * C1058;
    const double C2323 = ce * C1058;
    const double C2360 = 4 * C2338;
    const double C2359 = kab * C2337;
    const double C2353 = C2332 * C1058;
    const double C2352 = C2330 * C1058;
    const double C2349 = C2326 * C1058;
    const double C2361 = C1058 * C2339;
    const double C2358 = kab * C2334;
    const double C2367 = C1842 * C2323;
    const double C2364 = C1441 * C2323;
    const double C2362 = C1337 * C2323;
    const double C2357 = C1296 * C2323;
    const double C2356 = C1267 * C2323;
    const double C2355 = C1213 * C2323;
    const double C2354 = C1145 * C2323;
    const double C2351 = C1090 * C2323;
    const double C2348 = C1056 * C2323;
    const double C2378 = kcd * C2359;
    const double C2377 = kcd * C2358;
    const double C2384 = C2367 / C2324;
    const double C2381 = C2364 / C2324;
    const double C2379 = C2362 / C2324;
    const double C2376 = C2357 / C2324;
    const double C2375 = C2356 / C2324;
    const double C2374 = C2355 / C2324;
    const double C2373 = C2354 / C2324;
    const double C2372 = C2351 / C2324;
    const double C2370 = C2348 / C2324;
    const double C2396 = C2342 * C2378;
    const double C2394 = C2340 * C2378;
    const double C2391 = C2333 * C2378;
    const double C2389 = C2336 * C2378;
    const double C2395 = C2343 * C2377;
    const double C2393 = C2342 * C2377;
    const double C2390 = C2340 * C2377;
    const double C2388 = C2333 * C2377;
    const double C1445 =
        (((C2326 * C2395) / C2335 - (xCD * C2396) / q) * C2360) / C2361;
    const double C1867 =
        (((C2330 * C2395) / C2335 - (yCD * C2396) / q) * C2360) / C2361;
    const double C2287 =
        (((C2332 * C2395) / C2335 - (zCD * C2396) / q) * C2360) / C2361;
    const double C1341 =
        (((C2326 * C2393) / C2335 - (xCD * C2394) / q) * C2360) / C2361;
    const double C1763 =
        (((C2330 * C2393) / C2335 - (yCD * C2394) / q) * C2360) / C2361;
    const double C2185 =
        (((C2332 * C2393) / C2335 - (zCD * C2394) / q) * C2360) / C2361;
    const double C1063 =
        (((C2326 * C2390) / C2335 - (xCD * C2391) / q) * C2360) / C2361;
    const double C1494 =
        (((C2330 * C2390) / C2335 - (yCD * C2391) / q) * C2360) / C2361;
    const double C1916 =
        (((C2332 * C2390) / C2335 - (zCD * C2391) / q) * C2360) / C2361;
    const double C1062 =
        (((C2326 * C2388) / C2335 - (xCD * C2389) / q) * C2360) / C2361;
    const double C1493 =
        (((C2330 * C2388) / C2335 - (yCD * C2389) / q) * C2360) / C2361;
    const double C1915 =
        (((C2332 * C2388) / C2335 - (zCD * C2389) / q) * C2360) / C2361;
    const double C2341 = C1341 * C1058;
    const double C1356 = C2381 - (C1341 * C2325) / p - (C1445 * C2349) / C1076;
    const double C1383 = -((C1341 * C2329) / p + (C1445 * C2352) / C1076);
    const double C1410 = -((C1341 * C2331) / p + (C1445 * C2353) / C1076);
    const double C2345 = C1763 * C1058;
    const double C1777 = -((C1763 * C2325) / p + (C1867 * C2349) / C1076);
    const double C1805 = C2381 - (C1763 * C2329) / p - (C1867 * C2352) / C1076;
    const double C1832 = -((C1763 * C2331) / p + (C1867 * C2353) / C1076);
    const double C2347 = C2185 * C1058;
    const double C2199 = -((C2185 * C2325) / p + (C2287 * C2349) / C1076);
    const double C2226 = -((C2185 * C2329) / p + (C2287 * C2352) / C1076);
    const double C2253 = C2381 - (C2185 * C2331) / p - (C2287 * C2353) / C1076;
    const double C2327 = C1063 * C1058;
    const double C1079 = C2379 - (C1063 * C2325) / p - (C1341 * C2349) / C1076;
    const double C1134 = -((C1063 * C2329) / p + (C1341 * C2352) / C1076);
    const double C1202 = -((C1063 * C2331) / p + (C1341 * C2353) / C1076);
    const double C2344 = C1494 * C1058;
    const double C1508 = -((C1494 * C2325) / p + (C1763 * C2349) / C1076);
    const double C1562 = C2379 - (C1494 * C2329) / p - (C1763 * C2352) / C1076;
    const double C1629 = -((C1494 * C2331) / p + (C1763 * C2353) / C1076);
    const double C2346 = C1916 * C1058;
    const double C1930 = -((C1916 * C2325) / p + (C2185 * C2349) / C1076);
    const double C1984 = -((C1916 * C2329) / p + (C2185 * C2352) / C1076);
    const double C2051 = C2379 - (C1916 * C2331) / p - (C2185 * C2353) / C1076;
    const double C188 = C2370 - (C1062 * C2325) / p - (C1063 * C2349) / C1076;
    const double C252 = -((C1062 * C2329) / p + (C1063 * C2352) / C1076);
    const double C315 = -((C1062 * C2331) / p + (C1063 * C2353) / C1076);
    const double C465 = -((C1493 * C2325) / p + (C1494 * C2349) / C1076);
    const double C528 = C2370 - (C1493 * C2329) / p - (C1494 * C2352) / C1076;
    const double C590 = -((C1493 * C2331) / p + (C1494 * C2353) / C1076);
    const double C737 = -((C1915 * C2325) / p + (C1916 * C2349) / C1076);
    const double C800 = -((C1915 * C2329) / p + (C1916 * C2352) / C1076);
    const double C862 = C2370 - (C1915 * C2331) / p - (C1916 * C2353) / C1076;
    const double C2363 = C2341 / C1076;
    const double C2366 = C2345 / C1076;
    const double C2369 = C2347 / C1076;
    const double C2350 = C2327 / C1076;
    const double C1285 = -((C1202 * C2329) / p + (C1410 * C2352) / C1076);
    const double C2365 = C2344 / C1076;
    const double C1709 = C2384 - (C1629 * C2329) / p - (C1832 * C2352) / C1076;
    const double C2368 = C2346 / C1076;
    const double C2131 = -((C2051 * C2329) / p + (C2253 * C2352) / C1076);
    const double C332 = C2375 - (C252 * C2325) / p - (C1134 * C2349) / C1076;
    const double C377 = C2376 - (C315 * C2325) / p - (C1202 * C2349) / C1076;
    const double C421 = -((C315 * C2329) / p + (C1202 * C2352) / C1076);
    const double C606 = -((C528 * C2325) / p + (C1562 * C2349) / C1076);
    const double C650 = -((C590 * C2325) / p + (C1629 * C2349) / C1076);
    const double C693 = C2376 - (C590 * C2329) / p - (C1629 * C2352) / C1076;
    const double C878 = -((C800 * C2325) / p + (C1984 * C2349) / C1076);
    const double C922 = -((C862 * C2325) / p + (C2051 * C2349) / C1076);
    const double C965 = -((C862 * C2329) / p + (C2051 * C2352) / C1076);
    const double C2380 = C1063 - C2363;
    const double C2383 = C1494 - C2366;
    const double C2386 = C1916 - C2369;
    const double C2371 = C1062 - C2350;
    const double C2382 = C1493 - C2365;
    const double C2385 = C1915 - C2368;
    const double C361 =
        (C1281 * C2323) / C2324 - (C421 * C2325) / p - (C1285 * C2349) / C1076;
    const double C635 = -((C693 * C2325) / p + (C1709 * C2349) / C1076);
    const double C907 = -((C965 * C2325) / p + (C2131 * C2349) / C1076);
    const double C2392 = C2380 / C2328;
    const double C2398 = C2383 / C2328;
    const double C2400 = C2386 / C2328;
    const double C2387 = C2371 / C2328;
    const double C2397 = C2382 / C2328;
    const double C2399 = C2385 / C2328;
    const double C1094 = (C1352 * C2323) / C2324 - (C1079 * C2325) / p -
                         (C1356 * C2349) / C1076 + C2392;
    const double C1149 =
        C2392 - ((C1134 * C2329) / p + (C1383 * C2352) / C1076);
    const double C1217 =
        C2392 - ((C1202 * C2331) / p + (C1410 * C2353) / C1076);
    const double C1522 =
        C2398 - ((C1508 * C2325) / p + (C1777 * C2349) / C1076);
    const double C1576 = (C1800 * C2323) / C2324 - (C1562 * C2329) / p -
                         (C1805 * C2352) / C1076 + C2398;
    const double C1643 =
        C2398 - ((C1629 * C2331) / p + (C1832 * C2353) / C1076);
    const double C1944 =
        C2400 - ((C1930 * C2325) / p + (C2199 * C2349) / C1076);
    const double C1998 =
        C2400 - ((C1984 * C2329) / p + (C2226 * C2352) / C1076);
    const double C2065 =
        C2384 - (C2051 * C2331) / p - (C2253 * C2353) / C1076 + C2400;
    const double C189 = (C1074 * C2323) / C2324 - (C188 * C2325) / p -
                        (C1079 * C2349) / C1076 + C2387;
    const double C236 = C2387 - ((C252 * C2329) / p + (C1134 * C2352) / C1076);
    const double C284 = C2387 - ((C315 * C2331) / p + (C1202 * C2353) / C1076);
    const double C466 = C2397 - ((C465 * C2325) / p + (C1508 * C2349) / C1076);
    const double C512 =
        C2375 - (C528 * C2329) / p - (C1562 * C2352) / C1076 + C2397;
    const double C559 = C2397 - ((C590 * C2331) / p + (C1629 * C2353) / C1076);
    const double C738 = C2399 - ((C737 * C2325) / p + (C1930 * C2349) / C1076);
    const double C784 = C2399 - ((C800 * C2329) / p + (C1984 * C2352) / C1076);
    const double C831 =
        C2376 - (C862 * C2331) / p - (C2051 * C2353) / C1076 + C2399;
    const double C190 = C2372 - (C189 * C2325) / p - (C1094 * C2349) / C1076 +
                        (C188 - (C1079 * C1058) / C1076) / p;
    const double C205 = -((C189 * C2329) / p + (C1094 * C2352) / C1076);
    const double C220 = -((C189 * C2331) / p + (C1094 * C2353) / C1076);
    const double C237 = C2373 - (C236 * C2325) / p - (C1149 * C2349) / C1076;
    const double C253 = (C252 - (C1134 * C1058) / C1076) / p -
                        ((C236 * C2329) / p + (C1149 * C2352) / C1076);
    const double C268 = -((C236 * C2331) / p + (C1149 * C2353) / C1076);
    const double C285 = C2374 - (C284 * C2325) / p - (C1217 * C2349) / C1076;
    const double C300 = -((C284 * C2329) / p + (C1217 * C2352) / C1076);
    const double C316 = (C315 - (C1202 * C1058) / C1076) / p -
                        ((C284 * C2331) / p + (C1217 * C2353) / C1076);
    const double C467 = (C465 - (C1508 * C1058) / C1076) / p -
                        ((C466 * C2325) / p + (C1522 * C2349) / C1076);
    const double C482 = C2372 - (C466 * C2329) / p - (C1522 * C2352) / C1076;
    const double C497 = -((C466 * C2331) / p + (C1522 * C2353) / C1076);
    const double C513 = -((C512 * C2325) / p + (C1576 * C2349) / C1076);
    const double C529 = C2373 - (C512 * C2329) / p - (C1576 * C2352) / C1076 +
                        (C528 - (C1562 * C1058) / C1076) / p;
    const double C544 = -((C512 * C2331) / p + (C1576 * C2353) / C1076);
    const double C560 = -((C559 * C2325) / p + (C1643 * C2349) / C1076);
    const double C575 = C2374 - (C559 * C2329) / p - (C1643 * C2352) / C1076;
    const double C591 = (C590 - (C1629 * C1058) / C1076) / p -
                        ((C559 * C2331) / p + (C1643 * C2353) / C1076);
    const double C739 = (C737 - (C1930 * C1058) / C1076) / p -
                        ((C738 * C2325) / p + (C1944 * C2349) / C1076);
    const double C754 = -((C738 * C2329) / p + (C1944 * C2352) / C1076);
    const double C769 = C2372 - (C738 * C2331) / p - (C1944 * C2353) / C1076;
    const double C785 = -((C784 * C2325) / p + (C1998 * C2349) / C1076);
    const double C801 = (C800 - (C1984 * C1058) / C1076) / p -
                        ((C784 * C2329) / p + (C1998 * C2352) / C1076);
    const double C816 = C2373 - (C784 * C2331) / p - (C1998 * C2353) / C1076;
    const double C832 = -((C831 * C2325) / p + (C2065 * C2349) / C1076);
    const double C847 = -((C831 * C2329) / p + (C2065 * C2352) / C1076);
    const double C863 = C2374 - (C831 * C2331) / p - (C2065 * C2353) / C1076 +
                        (C862 - (C2051 * C1058) / C1076) / p;
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
