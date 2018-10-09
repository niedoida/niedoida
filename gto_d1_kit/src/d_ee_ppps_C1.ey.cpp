/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_3_vr(const double ae,
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
    const double C2130 = g[9];
    const double C2147 = g[10];
    const double C2163 = g[11];
    const double C2198 = g[12];
    const double C2226 = g[13];
    const double C2254 = g[14];
    const double C2269 = g[15];
    const double C2297 = g[16];
    const double C2410 = g[17];
    const double C2425 = g[18];
    const double C2514 = g[19];
    const double C2885 = g[20];
    const double C2900 = g[21];
    const double C2133 = p + q;
    const double C2132 = p * q;
    const double C3414 = bs[4];
    const double C3413 = bs[3];
    const double C3411 = bs[2];
    const double C3410 = zP - zQ;
    const double C3409 = be * zAB;
    const double C3408 = yP - yQ;
    const double C3407 = be * yAB;
    const double C3405 = std::pow(Pi, 2.5);
    const double C3404 = ce * de;
    const double C3403 = bs[0];
    const double C3400 = bs[1];
    const double C3399 = 2 * p;
    const double C3397 = xP - xQ;
    const double C3396 = be * xAB;
    const double C2149 = C2133 * p;
    const double C3406 = std::sqrt(C2133);
    const double C3402 = q * C2133;
    const double C3401 = C2132 * ce;
    const double C3395 = C2133 * C2132;
    const double C3394 = ce * C2132;
    const double C3429 = C3410 * C2132;
    const double C3427 = C3408 * C2132;
    const double C3425 = 4 * C3405;
    const double C3424 = kab * C3404;
    const double C3420 = C3397 * C2132;
    const double C3426 = C2132 * C3406;
    const double C3423 = kab * C3401;
    const double C3438 = C2900 * C3394;
    const double C3435 = C2514 * C3394;
    const double C3433 = C2410 * C3394;
    const double C3432 = C2297 * C3394;
    const double C3431 = C2254 * C3394;
    const double C3430 = C2226 * C3394;
    const double C3428 = C2198 * C3394;
    const double C3422 = C2163 * C3394;
    const double C3419 = C2130 * C3394;
    const double C3445 = kcd * C3424;
    const double C3444 = kcd * C3423;
    const double C3455 = C3438 / C3395;
    const double C3452 = C3435 / C3395;
    const double C3450 = C3433 / C3395;
    const double C3449 = C3432 / C3395;
    const double C3448 = C3431 / C3395;
    const double C3447 = C3430 / C3395;
    const double C3446 = C3428 / C3395;
    const double C3443 = C3422 / C3395;
    const double C3441 = C3419 / C3395;
    const double C3467 = C3413 * C3445;
    const double C3465 = C3411 * C3445;
    const double C3462 = C3400 * C3445;
    const double C3460 = C3403 * C3445;
    const double C3466 = C3414 * C3444;
    const double C3464 = C3413 * C3444;
    const double C3461 = C3411 * C3444;
    const double C3459 = C3400 * C3444;
    const double C2518 =
        (((C3397 * C3466) / C3402 - (xCD * C3467) / q) * C3425) / C3426;
    const double C2939 =
        (((C3408 * C3466) / C3402 - (yCD * C3467) / q) * C3425) / C3426;
    const double C3358 =
        (((C3410 * C3466) / C3402 - (zCD * C3467) / q) * C3425) / C3426;
    const double C2414 =
        (((C3397 * C3464) / C3402 - (xCD * C3465) / q) * C3425) / C3426;
    const double C2835 =
        (((C3408 * C3464) / C3402 - (yCD * C3465) / q) * C3425) / C3426;
    const double C3256 =
        (((C3410 * C3464) / C3402 - (zCD * C3465) / q) * C3425) / C3426;
    const double C2136 =
        (((C3397 * C3461) / C3402 - (xCD * C3462) / q) * C3425) / C3426;
    const double C2566 =
        (((C3408 * C3461) / C3402 - (yCD * C3462) / q) * C3425) / C3426;
    const double C2987 =
        (((C3410 * C3461) / C3402 - (zCD * C3462) / q) * C3425) / C3426;
    const double C892 =
        (((C3397 * C3459) / C3402 - (xCD * C3460) / q) * C3425) / C3426;
    const double C1295 =
        (((C3408 * C3459) / C3402 - (yCD * C3460) / q) * C3425) / C3426;
    const double C1691 =
        (((C3410 * C3459) / C3402 - (zCD * C3460) / q) * C3425) / C3426;
    const double C3412 = C2414 * C2132;
    const double C2429 = C3452 - (C2414 * C3396) / p - (C2518 * C3420) / C2149;
    const double C2469 = -((C2414 * C3407) / p + (C2518 * C3427) / C2149);
    const double C2483 = -((C2414 * C3409) / p + (C2518 * C3429) / C2149);
    const double C3416 = C2835 * C2132;
    const double C2849 = -((C2835 * C3396) / p + (C2939 * C3420) / C2149);
    const double C2890 = C3452 - (C2835 * C3407) / p - (C2939 * C3427) / C2149;
    const double C2905 = -((C2835 * C3409) / p + (C2939 * C3429) / C2149);
    const double C3418 = C3256 * C2132;
    const double C3270 = -((C3256 * C3396) / p + (C3358 * C3420) / C2149);
    const double C3310 = -((C3256 * C3407) / p + (C3358 * C3427) / C2149);
    const double C3324 = C3452 - (C3256 * C3409) / p - (C3358 * C3429) / C2149;
    const double C3398 = C2136 * C2132;
    const double C2152 = C3450 - (C2136 * C3396) / p - (C2414 * C3420) / C2149;
    const double C2202 = -((C2136 * C3407) / p + (C2414 * C3427) / C2149);
    const double C2230 = -((C2136 * C3409) / p + (C2414 * C3429) / C2149);
    const double C3415 = C2566 * C2132;
    const double C2580 = -((C2566 * C3396) / p + (C2835 * C3420) / C2149);
    const double C2628 = C3450 - (C2566 * C3407) / p - (C2835 * C3427) / C2149;
    const double C2655 = -((C2566 * C3409) / p + (C2835 * C3429) / C2149);
    const double C3417 = C2987 * C2132;
    const double C3001 = -((C2987 * C3396) / p + (C3256 * C3420) / C2149);
    const double C3049 = -((C2987 * C3407) / p + (C3256 * C3427) / C2149);
    const double C3076 = C3450 - (C2987 * C3409) / p - (C3256 * C3429) / C2149;
    const double C875 = C3441 - (C892 * C3396) / p - (C2136 * C3420) / C2149;
    const double C968 = -((C892 * C3407) / p + (C2136 * C3427) / C2149);
    const double C1014 = -((C892 * C3409) / p + (C2136 * C3429) / C2149);
    const double C1279 = -((C1295 * C3396) / p + (C2566 * C3420) / C2149);
    const double C1370 = C3441 - (C1295 * C3407) / p - (C2566 * C3427) / C2149;
    const double C1415 = -((C1295 * C3409) / p + (C2566 * C3429) / C2149);
    const double C1675 = -((C1691 * C3396) / p + (C2987 * C3420) / C2149);
    const double C1766 = -((C1691 * C3407) / p + (C2987 * C3427) / C2149);
    const double C1811 = C3441 - (C1691 * C3409) / p - (C2987 * C3429) / C2149;
    const double C3434 = C3412 / C2149;
    const double C3437 = C3416 / C2149;
    const double C3440 = C3418 / C2149;
    const double C3421 = C3398 / C2149;
    const double C2273 = -((C2230 * C3407) / p + (C2483 * C3427) / C2149);
    const double C3436 = C3415 / C2149;
    const double C2696 = C3455 - (C2655 * C3407) / p - (C2905 * C3427) / C2149;
    const double C3439 = C3417 / C2149;
    const double C3117 = -((C3076 * C3407) / p + (C3324 * C3427) / C2149);
    const double C922 = C3446 - (C968 * C3396) / p - (C2202 * C3420) / C2149;
    const double C952 = C3447 - (C1014 * C3396) / p - (C2230 * C3420) / C2149;
    const double C1087 = -((C1014 * C3407) / p + (C2230 * C3427) / C2149);
    const double C1325 = -((C1370 * C3396) / p + (C2628 * C3420) / C2149);
    const double C1355 = -((C1415 * C3396) / p + (C2655 * C3420) / C2149);
    const double C1487 = C3447 - (C1415 * C3407) / p - (C2655 * C3427) / C2149;
    const double C1721 = -((C1766 * C3396) / p + (C3049 * C3420) / C2149);
    const double C1751 = -((C1811 * C3396) / p + (C3076 * C3420) / C2149);
    const double C1883 = -((C1811 * C3407) / p + (C3076 * C3427) / C2149);
    const double C3451 = C2136 - C3434;
    const double C3454 = C2566 - C3437;
    const double C3457 = C2987 - C3440;
    const double C3442 = C892 - C3421;
    const double C3453 = C1295 - C3436;
    const double C3456 = C1691 - C3439;
    const double C998 =
        (C2269 * C3394) / C3395 - (C1087 * C3396) / p - (C2273 * C3420) / C2149;
    const double C1400 = -((C1487 * C3396) / p + (C2696 * C3420) / C2149);
    const double C1796 = -((C1883 * C3396) / p + (C3117 * C3420) / C2149);
    const double C3463 = C3451 / C3399;
    const double C3469 = C3454 / C3399;
    const double C3471 = C3457 / C3399;
    const double C3458 = C3442 / C3399;
    const double C3468 = C3453 / C3399;
    const double C3470 = C3456 / C3399;
    const double C2167 = (C2425 * C3394) / C3395 - (C2152 * C3396) / p -
                         (C2429 * C3420) / C2149 + C3463;
    const double C2258 =
        C3463 - ((C2202 * C3407) / p + (C2469 * C3427) / C2149);
    const double C2301 =
        C3463 - ((C2230 * C3409) / p + (C2483 * C3429) / C2149);
    const double C2594 =
        C3469 - ((C2580 * C3396) / p + (C2849 * C3420) / C2149);
    const double C2682 = (C2885 * C3394) / C3395 - (C2628 * C3407) / p -
                         (C2890 * C3427) / C2149 + C3469;
    const double C2723 =
        C3469 - ((C2655 * C3409) / p + (C2905 * C3429) / C2149);
    const double C3015 =
        C3471 - ((C3001 * C3396) / p + (C3270 * C3420) / C2149);
    const double C3103 =
        C3471 - ((C3049 * C3407) / p + (C3310 * C3427) / C2149);
    const double C3144 =
        C3455 - (C3076 * C3409) / p - (C3324 * C3429) / C2149 + C3471;
    const double C876 = (C2147 * C3394) / C3395 - (C875 * C3396) / p -
                        (C2152 * C3420) / C2149 + C3458;
    const double C1072 = C3458 - ((C968 * C3407) / p + (C2202 * C3427) / C2149);
    const double C1219 =
        C3458 - ((C1014 * C3409) / p + (C2230 * C3429) / C2149);
    const double C1280 =
        C3468 - ((C1279 * C3396) / p + (C2580 * C3420) / C2149);
    const double C1472 =
        C3446 - (C1370 * C3407) / p - (C2628 * C3427) / C2149 + C3468;
    const double C1616 =
        C3468 - ((C1415 * C3409) / p + (C2655 * C3429) / C2149);
    const double C1676 =
        C3470 - ((C1675 * C3396) / p + (C3001 * C3420) / C2149);
    const double C1868 =
        C3470 - ((C1766 * C3407) / p + (C3049 * C3427) / C2149);
    const double C2012 =
        C3447 - (C1811 * C3409) / p - (C3076 * C3429) / C2149 + C3470;
    const double C877 = C3443 - (C876 * C3396) / p - (C2167 * C3420) / C2149 +
                        (C875 - (C2152 * C2132) / C2149) / p;
    const double C907 = -((C876 * C3407) / p + (C2167 * C3427) / C2149);
    const double C937 = -((C876 * C3409) / p + (C2167 * C3429) / C2149);
    const double C983 = C3448 - (C1072 * C3396) / p - (C2258 * C3420) / C2149;
    const double C1117 = (C968 - (C2202 * C2132) / C2149) / p -
                         ((C1072 * C3407) / p + (C2258 * C3427) / C2149);
    const double C1132 = -((C1072 * C3409) / p + (C2258 * C3429) / C2149);
    const double C1043 = C3449 - (C1219 * C3396) / p - (C2301 * C3420) / C2149;
    const double C1176 = -((C1219 * C3407) / p + (C2301 * C3427) / C2149);
    const double C1263 = (C1014 - (C2230 * C2132) / C2149) / p -
                         ((C1219 * C3409) / p + (C2301 * C3429) / C2149);
    const double C1281 = (C1279 - (C2580 * C2132) / C2149) / p -
                         ((C1280 * C3396) / p + (C2594 * C3420) / C2149);
    const double C1310 = C3443 - (C1280 * C3407) / p - (C2594 * C3427) / C2149;
    const double C1340 = -((C1280 * C3409) / p + (C2594 * C3429) / C2149);
    const double C1385 = -((C1472 * C3396) / p + (C2682 * C3420) / C2149);
    const double C1516 = C3448 - (C1472 * C3407) / p - (C2682 * C3427) / C2149 +
                         (C1370 - (C2628 * C2132) / C2149) / p;
    const double C1531 = -((C1472 * C3409) / p + (C2682 * C3429) / C2149);
    const double C1444 = -((C1616 * C3396) / p + (C2723 * C3420) / C2149);
    const double C1574 = C3449 - (C1616 * C3407) / p - (C2723 * C3427) / C2149;
    const double C1659 = (C1415 - (C2655 * C2132) / C2149) / p -
                         ((C1616 * C3409) / p + (C2723 * C3429) / C2149);
    const double C1677 = (C1675 - (C3001 * C2132) / C2149) / p -
                         ((C1676 * C3396) / p + (C3015 * C3420) / C2149);
    const double C1706 = -((C1676 * C3407) / p + (C3015 * C3427) / C2149);
    const double C1736 = C3443 - (C1676 * C3409) / p - (C3015 * C3429) / C2149;
    const double C1781 = -((C1868 * C3396) / p + (C3103 * C3420) / C2149);
    const double C1912 = (C1766 - (C3049 * C2132) / C2149) / p -
                         ((C1868 * C3407) / p + (C3103 * C3427) / C2149);
    const double C1927 = C3448 - (C1868 * C3409) / p - (C3103 * C3429) / C2149;
    const double C1840 = -((C2012 * C3396) / p + (C3144 * C3420) / C2149);
    const double C1970 = -((C2012 * C3407) / p + (C3144 * C3427) / C2149);
    const double C2055 = C3449 - (C2012 * C3409) / p - (C3144 * C3429) / C2149 +
                         (C1811 - (C3076 * C2132) / C2149) / p;
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
