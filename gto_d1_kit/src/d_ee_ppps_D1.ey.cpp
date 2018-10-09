/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_4_vr(const double ae,
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
    const double C2136 = g[9];
    const double C2155 = g[10];
    const double C2169 = g[11];
    const double C2204 = g[12];
    const double C2232 = g[13];
    const double C2260 = g[14];
    const double C2275 = g[15];
    const double C2303 = g[16];
    const double C2409 = g[17];
    const double C2431 = g[18];
    const double C2520 = g[19];
    const double C2891 = g[20];
    const double C2906 = g[21];
    const double C2139 = p + q;
    const double C2138 = p * q;
    const double C3420 = bs[4];
    const double C3419 = bs[3];
    const double C3417 = bs[2];
    const double C3416 = zP - zQ;
    const double C3415 = be * zAB;
    const double C3414 = yP - yQ;
    const double C3413 = be * yAB;
    const double C3411 = std::pow(Pi, 2.5);
    const double C3408 = bs[1];
    const double C3407 = ce * de;
    const double C3406 = bs[0];
    const double C3405 = 2 * p;
    const double C3403 = xP - xQ;
    const double C3402 = be * xAB;
    const double C2140 = C2139 * p;
    const double C3412 = std::sqrt(C2139);
    const double C3410 = q * C2139;
    const double C3409 = C2138 * de;
    const double C3401 = C2139 * C2138;
    const double C3400 = de * C2138;
    const double C3435 = C3416 * C2138;
    const double C3433 = C3414 * C2138;
    const double C3431 = 4 * C3411;
    const double C3429 = kab * C3407;
    const double C3425 = C3403 * C2138;
    const double C3432 = C2138 * C3412;
    const double C3430 = kab * C3409;
    const double C3444 = C2906 * C3400;
    const double C3441 = C2520 * C3400;
    const double C3439 = C2409 * C3400;
    const double C3438 = C2303 * C3400;
    const double C3437 = C2260 * C3400;
    const double C3436 = C2232 * C3400;
    const double C3434 = C2204 * C3400;
    const double C3428 = C2169 * C3400;
    const double C3427 = C2155 * C3400;
    const double C3450 = kcd * C3429;
    const double C3451 = kcd * C3430;
    const double C3461 = C3444 / C3401;
    const double C3458 = C3441 / C3401;
    const double C3456 = C3439 / C3401;
    const double C3455 = C3438 / C3401;
    const double C3454 = C3437 / C3401;
    const double C3453 = C3436 / C3401;
    const double C3452 = C3434 / C3401;
    const double C3449 = C3428 / C3401;
    const double C3448 = C3427 / C3401;
    const double C3472 = C3419 * C3450;
    const double C3470 = C3417 * C3450;
    const double C3467 = C3408 * C3450;
    const double C3465 = C3406 * C3450;
    const double C3473 = C3420 * C3451;
    const double C3471 = C3419 * C3451;
    const double C3468 = C3417 * C3451;
    const double C3466 = C3408 * C3451;
    const double C2524 =
        (((xCD * C3472) / q + (C3403 * C3473) / C3410) * C3431) / C3432;
    const double C2945 =
        (((yCD * C3472) / q + (C3414 * C3473) / C3410) * C3431) / C3432;
    const double C3364 =
        (((zCD * C3472) / q + (C3416 * C3473) / C3410) * C3431) / C3432;
    const double C2413 =
        (((xCD * C3470) / q + (C3403 * C3471) / C3410) * C3431) / C3432;
    const double C2841 =
        (((yCD * C3470) / q + (C3414 * C3471) / C3410) * C3431) / C3432;
    const double C3262 =
        (((zCD * C3470) / q + (C3416 * C3471) / C3410) * C3431) / C3432;
    const double C2144 =
        (((xCD * C3467) / q + (C3403 * C3468) / C3410) * C3431) / C3432;
    const double C2572 =
        (((yCD * C3467) / q + (C3414 * C3468) / C3410) * C3431) / C3432;
    const double C2993 =
        (((zCD * C3467) / q + (C3416 * C3468) / C3410) * C3431) / C3432;
    const double C892 =
        (((xCD * C3465) / q + (C3403 * C3466) / C3410) * C3431) / C3432;
    const double C1295 =
        (((yCD * C3465) / q + (C3414 * C3466) / C3410) * C3431) / C3432;
    const double C1691 =
        (((zCD * C3465) / q + (C3416 * C3466) / C3410) * C3431) / C3432;
    const double C3418 = C2413 * C2138;
    const double C2435 = C3458 - (C2413 * C3402) / p - (C2524 * C3425) / C2140;
    const double C2475 = -((C2413 * C3413) / p + (C2524 * C3433) / C2140);
    const double C2489 = -((C2413 * C3415) / p + (C2524 * C3435) / C2140);
    const double C3422 = C2841 * C2138;
    const double C2855 = -((C2841 * C3402) / p + (C2945 * C3425) / C2140);
    const double C2896 = C3458 - (C2841 * C3413) / p - (C2945 * C3433) / C2140;
    const double C2911 = -((C2841 * C3415) / p + (C2945 * C3435) / C2140);
    const double C3424 = C3262 * C2138;
    const double C3276 = -((C3262 * C3402) / p + (C3364 * C3425) / C2140);
    const double C3316 = -((C3262 * C3413) / p + (C3364 * C3433) / C2140);
    const double C3330 = C3458 - (C3262 * C3415) / p - (C3364 * C3435) / C2140;
    const double C3404 = C2144 * C2138;
    const double C2143 = C3456 - (C2144 * C3402) / p - (C2413 * C3425) / C2140;
    const double C2208 = -((C2144 * C3413) / p + (C2413 * C3433) / C2140);
    const double C2236 = -((C2144 * C3415) / p + (C2413 * C3435) / C2140);
    const double C3421 = C2572 * C2138;
    const double C2586 = -((C2572 * C3402) / p + (C2841 * C3425) / C2140);
    const double C2634 = C3456 - (C2572 * C3413) / p - (C2841 * C3433) / C2140;
    const double C2661 = -((C2572 * C3415) / p + (C2841 * C3435) / C2140);
    const double C3423 = C2993 * C2138;
    const double C3007 = -((C2993 * C3402) / p + (C3262 * C3425) / C2140);
    const double C3055 = -((C2993 * C3413) / p + (C3262 * C3433) / C2140);
    const double C3082 = C3456 - (C2993 * C3415) / p - (C3262 * C3435) / C2140;
    const double C876 = C3448 - (C892 * C3402) / p - (C2144 * C3425) / C2140;
    const double C968 = -((C892 * C3413) / p + (C2144 * C3433) / C2140);
    const double C1014 = -((C892 * C3415) / p + (C2144 * C3435) / C2140);
    const double C1279 = -((C1295 * C3402) / p + (C2572 * C3425) / C2140);
    const double C1370 = C3448 - (C1295 * C3413) / p - (C2572 * C3433) / C2140;
    const double C1415 = -((C1295 * C3415) / p + (C2572 * C3435) / C2140);
    const double C1675 = -((C1691 * C3402) / p + (C2993 * C3425) / C2140);
    const double C1766 = -((C1691 * C3413) / p + (C2993 * C3433) / C2140);
    const double C1811 = C3448 - (C1691 * C3415) / p - (C2993 * C3435) / C2140;
    const double C3440 = C3418 / C2140;
    const double C3443 = C3422 / C2140;
    const double C3446 = C3424 / C2140;
    const double C3426 = C3404 / C2140;
    const double C2279 = -((C2236 * C3413) / p + (C2489 * C3433) / C2140);
    const double C3442 = C3421 / C2140;
    const double C2702 = C3461 - (C2661 * C3413) / p - (C2911 * C3433) / C2140;
    const double C3445 = C3423 / C2140;
    const double C3123 = -((C3082 * C3413) / p + (C3330 * C3433) / C2140);
    const double C922 = C3452 - (C968 * C3402) / p - (C2208 * C3425) / C2140;
    const double C952 = C3453 - (C1014 * C3402) / p - (C2236 * C3425) / C2140;
    const double C1087 = -((C1014 * C3413) / p + (C2236 * C3433) / C2140);
    const double C1325 = -((C1370 * C3402) / p + (C2634 * C3425) / C2140);
    const double C1355 = -((C1415 * C3402) / p + (C2661 * C3425) / C2140);
    const double C1487 = C3453 - (C1415 * C3413) / p - (C2661 * C3433) / C2140;
    const double C1721 = -((C1766 * C3402) / p + (C3055 * C3425) / C2140);
    const double C1751 = -((C1811 * C3402) / p + (C3082 * C3425) / C2140);
    const double C1883 = -((C1811 * C3413) / p + (C3082 * C3433) / C2140);
    const double C3457 = C2144 - C3440;
    const double C3460 = C2572 - C3443;
    const double C3463 = C2993 - C3446;
    const double C3447 = C892 - C3426;
    const double C3459 = C1295 - C3442;
    const double C3462 = C1691 - C3445;
    const double C998 =
        (C2275 * C3400) / C3401 - (C1087 * C3402) / p - (C2279 * C3425) / C2140;
    const double C1400 = -((C1487 * C3402) / p + (C2702 * C3425) / C2140);
    const double C1796 = -((C1883 * C3402) / p + (C3123 * C3425) / C2140);
    const double C3469 = C3457 / C3405;
    const double C3475 = C3460 / C3405;
    const double C3477 = C3463 / C3405;
    const double C3464 = C3447 / C3405;
    const double C3474 = C3459 / C3405;
    const double C3476 = C3462 / C3405;
    const double C2173 = (C2431 * C3400) / C3401 - (C2143 * C3402) / p -
                         (C2435 * C3425) / C2140 + C3469;
    const double C2264 =
        C3469 - ((C2208 * C3413) / p + (C2475 * C3433) / C2140);
    const double C2307 =
        C3469 - ((C2236 * C3415) / p + (C2489 * C3435) / C2140);
    const double C2600 =
        C3475 - ((C2586 * C3402) / p + (C2855 * C3425) / C2140);
    const double C2688 = (C2891 * C3400) / C3401 - (C2634 * C3413) / p -
                         (C2896 * C3433) / C2140 + C3475;
    const double C2729 =
        C3475 - ((C2661 * C3415) / p + (C2911 * C3435) / C2140);
    const double C3021 =
        C3477 - ((C3007 * C3402) / p + (C3276 * C3425) / C2140);
    const double C3109 =
        C3477 - ((C3055 * C3413) / p + (C3316 * C3433) / C2140);
    const double C3150 =
        C3461 - (C3082 * C3415) / p - (C3330 * C3435) / C2140 + C3477;
    const double C875 = (C2136 * C3400) / C3401 - (C876 * C3402) / p -
                        (C2143 * C3425) / C2140 + C3464;
    const double C1072 = C3464 - ((C968 * C3413) / p + (C2208 * C3433) / C2140);
    const double C1219 =
        C3464 - ((C1014 * C3415) / p + (C2236 * C3435) / C2140);
    const double C1280 =
        C3474 - ((C1279 * C3402) / p + (C2586 * C3425) / C2140);
    const double C1472 =
        C3452 - (C1370 * C3413) / p - (C2634 * C3433) / C2140 + C3474;
    const double C1616 =
        C3474 - ((C1415 * C3415) / p + (C2661 * C3435) / C2140);
    const double C1676 =
        C3476 - ((C1675 * C3402) / p + (C3007 * C3425) / C2140);
    const double C1868 =
        C3476 - ((C1766 * C3413) / p + (C3055 * C3433) / C2140);
    const double C2012 =
        C3453 - (C1811 * C3415) / p - (C3082 * C3435) / C2140 + C3476;
    const double C877 = C3449 - (C875 * C3402) / p - (C2173 * C3425) / C2140 +
                        (C876 - (C2143 * C2138) / C2140) / p;
    const double C907 = -((C875 * C3413) / p + (C2173 * C3433) / C2140);
    const double C937 = -((C875 * C3415) / p + (C2173 * C3435) / C2140);
    const double C983 = C3454 - (C1072 * C3402) / p - (C2264 * C3425) / C2140;
    const double C1117 = (C968 - (C2208 * C2138) / C2140) / p -
                         ((C1072 * C3413) / p + (C2264 * C3433) / C2140);
    const double C1132 = -((C1072 * C3415) / p + (C2264 * C3435) / C2140);
    const double C1043 = C3455 - (C1219 * C3402) / p - (C2307 * C3425) / C2140;
    const double C1176 = -((C1219 * C3413) / p + (C2307 * C3433) / C2140);
    const double C1263 = (C1014 - (C2236 * C2138) / C2140) / p -
                         ((C1219 * C3415) / p + (C2307 * C3435) / C2140);
    const double C1281 = (C1279 - (C2586 * C2138) / C2140) / p -
                         ((C1280 * C3402) / p + (C2600 * C3425) / C2140);
    const double C1310 = C3449 - (C1280 * C3413) / p - (C2600 * C3433) / C2140;
    const double C1340 = -((C1280 * C3415) / p + (C2600 * C3435) / C2140);
    const double C1385 = -((C1472 * C3402) / p + (C2688 * C3425) / C2140);
    const double C1516 = C3454 - (C1472 * C3413) / p - (C2688 * C3433) / C2140 +
                         (C1370 - (C2634 * C2138) / C2140) / p;
    const double C1531 = -((C1472 * C3415) / p + (C2688 * C3435) / C2140);
    const double C1444 = -((C1616 * C3402) / p + (C2729 * C3425) / C2140);
    const double C1574 = C3455 - (C1616 * C3413) / p - (C2729 * C3433) / C2140;
    const double C1659 = (C1415 - (C2661 * C2138) / C2140) / p -
                         ((C1616 * C3415) / p + (C2729 * C3435) / C2140);
    const double C1677 = (C1675 - (C3007 * C2138) / C2140) / p -
                         ((C1676 * C3402) / p + (C3021 * C3425) / C2140);
    const double C1706 = -((C1676 * C3413) / p + (C3021 * C3433) / C2140);
    const double C1736 = C3449 - (C1676 * C3415) / p - (C3021 * C3435) / C2140;
    const double C1781 = -((C1868 * C3402) / p + (C3109 * C3425) / C2140);
    const double C1912 = (C1766 - (C3055 * C2138) / C2140) / p -
                         ((C1868 * C3413) / p + (C3109 * C3433) / C2140);
    const double C1927 = C3454 - (C1868 * C3415) / p - (C3109 * C3435) / C2140;
    const double C1840 = -((C2012 * C3402) / p + (C3150 * C3425) / C2140);
    const double C1970 = -((C2012 * C3413) / p + (C3150 * C3433) / C2140);
    const double C2055 = C3455 - (C2012 * C3415) / p - (C3150 * C3435) / C2140 +
                         (C1811 - (C3082 * C2138) / C2140) / p;
    vrx[0] = C875;
    vrx[1] = C876;
    vrx[2] = C877;
    vrx[3] = C892;
    vrx[4] = C907;
    vrx[5] = C922;
    vrx[6] = C937;
    vrx[7] = C952;
    vrx[8] = C968;
    vrx[9] = C983;
    vrx[10] = C998;
    vrx[11] = C1014;
    vrx[12] = C1043;
    vrx[13] = C1072;
    vrx[14] = C1087;
    vrx[15] = C1117;
    vrx[16] = C1132;
    vrx[17] = C1176;
    vrx[18] = C1219;
    vrx[19] = C1263;
    vry[0] = C1279;
    vry[1] = C1280;
    vry[2] = C1281;
    vry[3] = C1295;
    vry[4] = C1310;
    vry[5] = C1325;
    vry[6] = C1340;
    vry[7] = C1355;
    vry[8] = C1370;
    vry[9] = C1385;
    vry[10] = C1400;
    vry[11] = C1415;
    vry[12] = C1444;
    vry[13] = C1472;
    vry[14] = C1487;
    vry[15] = C1516;
    vry[16] = C1531;
    vry[17] = C1574;
    vry[18] = C1616;
    vry[19] = C1659;
    vrz[0] = C1675;
    vrz[1] = C1676;
    vrz[2] = C1677;
    vrz[3] = C1691;
    vrz[4] = C1706;
    vrz[5] = C1721;
    vrz[6] = C1736;
    vrz[7] = C1751;
    vrz[8] = C1766;
    vrz[9] = C1781;
    vrz[10] = C1796;
    vrz[11] = C1811;
    vrz[12] = C1840;
    vrz[13] = C1868;
    vrz[14] = C1883;
    vrz[15] = C1912;
    vrz[16] = C1927;
    vrz[17] = C1970;
    vrz[18] = C2012;
    vrz[19] = C2055;
}
