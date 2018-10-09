/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_1110_1_vr(const double ae,
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
    const double C961 = g[9];
    const double C978 = g[10];
    const double C1145 = g[13];
    const double C1189 = g[14];
    const double C1234 = g[15];
    const double C1278 = g[16];
    const double C1321 = g[17];
    const double C2221 = g[18];
    const double C2222 = g[19];
    const double C2240 = g[20];
    const double C2257 = g[21];
    const double C2294 = g[22];
    const double C2324 = g[23];
    const double C2354 = g[24];
    const double C2370 = g[25];
    const double C2400 = g[26];
    const double C2521 = g[27];
    const double C2537 = g[28];
    const double C2632 = g[29];
    const double C3029 = g[30];
    const double C3045 = g[31];
    const double C2225 = p + q;
    const double C2224 = p * q;
    const double C3593 = bs[4];
    const double C3592 = bs[3];
    const double C3590 = bs[2];
    const double C3589 = zP - zQ;
    const double C3588 = be * zAB;
    const double C3587 = yP - yQ;
    const double C3586 = be * yAB;
    const double C3584 = std::pow(Pi, 2.5);
    const double C3581 = bs[1];
    const double C3580 = ae * be;
    const double C3579 = bs[0];
    const double C3578 = 2 * p;
    const double C3576 = xP - xQ;
    const double C3575 = std::pow(p, 2);
    const double C3573 = be * xAB;
    const double C3572 = ae / p;
    const double C2242 = C2225 * p;
    const double C3585 = std::sqrt(C2225);
    const double C3583 = p * C2225;
    const double C3582 = kab * C2224;
    const double C3574 = ae * C2224;
    const double C3610 = C3589 * C2224;
    const double C3608 = C3587 * C2224;
    const double C3606 = 4 * C3584;
    const double C3604 = kab * C3580;
    const double C3601 = C3576 * C2224;
    const double C3600 = C2225 * C3575;
    const double C3598 = C3572 - 1;
    const double C3607 = C2224 * C3585;
    const double C3605 = kcd * C3582;
    const double C3619 = C3045 * C3574;
    const double C3616 = C2632 * C3574;
    const double C3614 = C2521 * C3574;
    const double C3613 = C2400 * C3574;
    const double C3612 = C2354 * C3574;
    const double C3611 = C2324 * C3574;
    const double C3609 = C2294 * C3574;
    const double C3603 = C2257 * C3574;
    const double C3599 = C2222 * C3574;
    const double C3627 = kcd * C3604;
    const double C3647 = C3598 * C2324;
    const double C3642 = C3598 * C2521;
    const double C3638 = C3598 * C2222;
    const double C3635 = C3598 * C1321;
    const double C3633 = C3598 * C1189;
    const double C3631 = C3598 * C1278;
    const double C3629 = C3598 * C1145;
    const double C3625 = C3598 * C961;
    const double C3622 = C3598 * C2221;
    const double C3644 = C3593 * C3605;
    const double C3641 = C3592 * C3605;
    const double C3637 = C3590 * C3605;
    const double C3628 = C3581 * C3605;
    const double C3648 = C3619 / C3600;
    const double C3643 = C3616 / C3600;
    const double C3639 = C3614 / C3600;
    const double C3636 = C3613 / C3600;
    const double C3634 = C3612 / C3600;
    const double C3632 = C3611 / C3600;
    const double C3630 = C3609 / C3600;
    const double C3626 = C3603 / C3600;
    const double C3623 = C3599 / C3600;
    const double C3659 = C3592 * C3627;
    const double C3657 = C3590 * C3627;
    const double C3654 = C3581 * C3627;
    const double C3652 = C3579 * C3627;
    const double C3660 = C3644 * ae;
    const double C3658 = C3641 * ae;
    const double C3655 = C3637 * ae;
    const double C3653 = C3628 * ae;
    const double C2636 =
        -(((xAB * C3659) / p + (C3576 * C3660) / C3583) * C3606) / C3607;
    const double C3086 =
        -(((yAB * C3659) / p + (C3587 * C3660) / C3583) * C3606) / C3607;
    const double C3534 =
        -(((zAB * C3659) / p + (C3589 * C3660) / C3583) * C3606) / C3607;
    const double C2525 =
        -(((xAB * C3657) / p + (C3576 * C3658) / C3583) * C3606) / C3607;
    const double C2975 =
        -(((yAB * C3657) / p + (C3587 * C3658) / C3583) * C3606) / C3607;
    const double C3425 =
        -(((zAB * C3657) / p + (C3589 * C3658) / C3583) * C3606) / C3607;
    const double C2228 =
        -(((xAB * C3654) / p + (C3576 * C3655) / C3583) * C3606) / C3607;
    const double C2687 =
        -(((yAB * C3654) / p + (C3587 * C3655) / C3583) * C3606) / C3607;
    const double C3137 =
        -(((zAB * C3654) / p + (C3589 * C3655) / C3583) * C3606) / C3607;
    const double C982 =
        -(((xAB * C3652) / p + (C3576 * C3653) / C3583) * C3606) / C3607;
    const double C1385 =
        -(((yAB * C3652) / p + (C3587 * C3653) / C3583) * C3606) / C3607;
    const double C1781 =
        -(((zAB * C3652) / p + (C3589 * C3653) / C3583) * C3606) / C3607;
    const double C3591 = C2525 * C2224;
    const double C2541 =
        C3642 - (C2525 * C3573) / p - C3643 - (C2636 * C3601) / C2242;
    const double C2584 = -((C2525 * C3586) / p + (C2636 * C3608) / C2242);
    const double C2599 = -((C2525 * C3588) / p + (C2636 * C3610) / C2242);
    const double C3595 = C2975 * C2224;
    const double C2990 = -((C2975 * C3573) / p + (C3086 * C3601) / C2242);
    const double C3034 =
        C3642 - (C2975 * C3586) / p - C3643 - (C3086 * C3608) / C2242;
    const double C3050 = -((C2975 * C3588) / p + (C3086 * C3610) / C2242);
    const double C3597 = C3425 * C2224;
    const double C3440 = -((C3425 * C3573) / p + (C3534 * C3601) / C2242);
    const double C3483 = -((C3425 * C3586) / p + (C3534 * C3608) / C2242);
    const double C3498 =
        C3642 - (C3425 * C3588) / p - C3643 - (C3534 * C3610) / C2242;
    const double C3577 = C2228 * C2224;
    const double C2245 =
        C3638 - (C2228 * C3573) / p - C3639 - (C2525 * C3601) / C2242;
    const double C2298 = -((C2228 * C3586) / p + (C2525 * C3608) / C2242);
    const double C2328 = -((C2228 * C3588) / p + (C2525 * C3610) / C2242);
    const double C3594 = C2687 * C2224;
    const double C2702 = -((C2687 * C3573) / p + (C2975 * C3601) / C2242);
    const double C2753 =
        C3638 - (C2687 * C3586) / p - C3639 - (C2975 * C3608) / C2242;
    const double C2782 = -((C2687 * C3588) / p + (C2975 * C3610) / C2242);
    const double C3596 = C3137 * C2224;
    const double C3152 = -((C3137 * C3573) / p + (C3425 * C3601) / C2242);
    const double C3203 = -((C3137 * C3586) / p + (C3425 * C3608) / C2242);
    const double C3232 =
        C3638 - (C3137 * C3588) / p - C3639 - (C3425 * C3610) / C2242;
    const double C965 =
        C3622 - (C982 * C3573) / p - C3623 - (C2228 * C3601) / C2242;
    const double C1058 = -((C982 * C3586) / p + (C2228 * C3608) / C2242);
    const double C1104 = -((C982 * C3588) / p + (C2228 * C3610) / C2242);
    const double C1369 = -((C1385 * C3573) / p + (C2687 * C3601) / C2242);
    const double C1460 =
        C3622 - (C1385 * C3586) / p - C3623 - (C2687 * C3608) / C2242;
    const double C1505 = -((C1385 * C3588) / p + (C2687 * C3610) / C2242);
    const double C1765 = -((C1781 * C3573) / p + (C3137 * C3601) / C2242);
    const double C1856 = -((C1781 * C3586) / p + (C3137 * C3608) / C2242);
    const double C1901 =
        C3622 - (C1781 * C3588) / p - C3623 - (C3137 * C3610) / C2242;
    const double C3615 = C3591 / C2242;
    const double C3618 = C3595 / C2242;
    const double C3621 = C3597 / C2242;
    const double C3602 = C3577 / C2242;
    const double C2374 = -((C2328 * C3586) / p + (C2599 * C3608) / C2242);
    const double C3617 = C3594 / C2242;
    const double C2826 =
        C3647 - (C2782 * C3586) / p - C3648 - (C3050 * C3608) / C2242;
    const double C3620 = C3596 / C2242;
    const double C3276 = -((C3232 * C3586) / p + (C3498 * C3608) / C2242);
    const double C1012 =
        C3629 - (C1058 * C3573) / p - C3630 - (C2298 * C3601) / C2242;
    const double C1042 =
        C3631 - (C1104 * C3573) / p - C3632 - (C2328 * C3601) / C2242;
    const double C1177 = -((C1104 * C3586) / p + (C2328 * C3608) / C2242);
    const double C1415 = -((C1460 * C3573) / p + (C2753 * C3601) / C2242);
    const double C1445 = -((C1505 * C3573) / p + (C2782 * C3601) / C2242);
    const double C1577 =
        C3631 - (C1505 * C3586) / p - C3632 - (C2782 * C3608) / C2242;
    const double C1811 = -((C1856 * C3573) / p + (C3203 * C3601) / C2242);
    const double C1841 = -((C1901 * C3573) / p + (C3232 * C3601) / C2242);
    const double C1973 = -((C1901 * C3586) / p + (C3232 * C3608) / C2242);
    const double C3640 = C2228 - C3615;
    const double C3646 = C2687 - C3618;
    const double C3650 = C3137 - C3621;
    const double C3624 = C982 - C3602;
    const double C3645 = C1385 - C3617;
    const double C3649 = C1781 - C3620;
    const double C1088 = C3598 * C1234 - (C1177 * C3573) / p -
                         (C2370 * C3574) / C3600 - (C2374 * C3601) / C2242;
    const double C1490 = -((C1577 * C3573) / p + (C2826 * C3601) / C2242);
    const double C1886 = -((C1973 * C3573) / p + (C3276 * C3601) / C2242);
    const double C3656 = C3640 / C3578;
    const double C3662 = C3646 / C3578;
    const double C3664 = C3650 / C3578;
    const double C3651 = C3624 / C3578;
    const double C3661 = C3645 / C3578;
    const double C3663 = C3649 / C3578;
    const double C2261 = C3598 * C2240 - (C2245 * C3573) / p -
                         (C2537 * C3574) / C3600 - (C2541 * C3601) / C2242 +
                         C3656;
    const double C2358 =
        C3656 - ((C2298 * C3586) / p + (C2584 * C3608) / C2242);
    const double C2404 =
        C3656 - ((C2328 * C3588) / p + (C2599 * C3610) / C2242);
    const double C2717 =
        C3662 - ((C2702 * C3573) / p + (C2990 * C3601) / C2242);
    const double C2811 = C3598 * C2294 - (C2753 * C3586) / p -
                         (C3029 * C3574) / C3600 - (C3034 * C3608) / C2242 +
                         C3662;
    const double C2855 =
        C3662 - ((C2782 * C3588) / p + (C3050 * C3610) / C2242);
    const double C3167 =
        C3664 - ((C3152 * C3573) / p + (C3440 * C3601) / C2242);
    const double C3261 =
        C3664 - ((C3203 * C3586) / p + (C3483 * C3608) / C2242);
    const double C3305 =
        C3647 - (C3232 * C3588) / p - C3648 - (C3498 * C3610) / C2242 + C3664;
    const double C966 = C3598 * C978 - (C965 * C3573) / p -
                        (C2240 * C3574) / C3600 - (C2245 * C3601) / C2242 +
                        C3651;
    const double C1162 =
        C3651 - ((C1058 * C3586) / p + (C2298 * C3608) / C2242);
    const double C1309 =
        C3651 - ((C1104 * C3588) / p + (C2328 * C3610) / C2242);
    const double C1370 =
        C3661 - ((C1369 * C3573) / p + (C2702 * C3601) / C2242);
    const double C1562 =
        C3629 - (C1460 * C3586) / p - C3630 - (C2753 * C3608) / C2242 + C3661;
    const double C1706 =
        C3661 - ((C1505 * C3588) / p + (C2782 * C3610) / C2242);
    const double C1766 =
        C3663 - ((C1765 * C3573) / p + (C3152 * C3601) / C2242);
    const double C1958 =
        C3663 - ((C1856 * C3586) / p + (C3203 * C3608) / C2242);
    const double C2102 =
        C3631 - (C1901 * C3588) / p - C3632 - (C3232 * C3610) / C2242 + C3663;
    const double C967 = C3625 - (C966 * C3573) / p - C3626 -
                        (C2261 * C3601) / C2242 +
                        (C965 - (C2245 * C2224) / C2242) / p;
    const double C997 = -((C966 * C3586) / p + (C2261 * C3608) / C2242);
    const double C1027 = -((C966 * C3588) / p + (C2261 * C3610) / C2242);
    const double C1073 =
        C3633 - (C1162 * C3573) / p - C3634 - (C2358 * C3601) / C2242;
    const double C1207 = (C1058 - (C2298 * C2224) / C2242) / p -
                         ((C1162 * C3586) / p + (C2358 * C3608) / C2242);
    const double C1222 = -((C1162 * C3588) / p + (C2358 * C3610) / C2242);
    const double C1133 =
        C3635 - (C1309 * C3573) / p - C3636 - (C2404 * C3601) / C2242;
    const double C1266 = -((C1309 * C3586) / p + (C2404 * C3608) / C2242);
    const double C1353 = (C1104 - (C2328 * C2224) / C2242) / p -
                         ((C1309 * C3588) / p + (C2404 * C3610) / C2242);
    const double C1371 = (C1369 - (C2702 * C2224) / C2242) / p -
                         ((C1370 * C3573) / p + (C2717 * C3601) / C2242);
    const double C1400 =
        C3625 - (C1370 * C3586) / p - C3626 - (C2717 * C3608) / C2242;
    const double C1430 = -((C1370 * C3588) / p + (C2717 * C3610) / C2242);
    const double C1475 = -((C1562 * C3573) / p + (C2811 * C3601) / C2242);
    const double C1606 = C3633 - (C1562 * C3586) / p - C3634 -
                         (C2811 * C3608) / C2242 +
                         (C1460 - (C2753 * C2224) / C2242) / p;
    const double C1621 = -((C1562 * C3588) / p + (C2811 * C3610) / C2242);
    const double C1534 = -((C1706 * C3573) / p + (C2855 * C3601) / C2242);
    const double C1664 =
        C3635 - (C1706 * C3586) / p - C3636 - (C2855 * C3608) / C2242;
    const double C1749 = (C1505 - (C2782 * C2224) / C2242) / p -
                         ((C1706 * C3588) / p + (C2855 * C3610) / C2242);
    const double C1767 = (C1765 - (C3152 * C2224) / C2242) / p -
                         ((C1766 * C3573) / p + (C3167 * C3601) / C2242);
    const double C1796 = -((C1766 * C3586) / p + (C3167 * C3608) / C2242);
    const double C1826 =
        C3625 - (C1766 * C3588) / p - C3626 - (C3167 * C3610) / C2242;
    const double C1871 = -((C1958 * C3573) / p + (C3261 * C3601) / C2242);
    const double C2002 = (C1856 - (C3203 * C2224) / C2242) / p -
                         ((C1958 * C3586) / p + (C3261 * C3608) / C2242);
    const double C2017 =
        C3633 - (C1958 * C3588) / p - C3634 - (C3261 * C3610) / C2242;
    const double C1930 = -((C2102 * C3573) / p + (C3305 * C3601) / C2242);
    const double C2060 = -((C2102 * C3586) / p + (C3305 * C3608) / C2242);
    const double C2145 = C3635 - (C2102 * C3588) / p - C3636 -
                         (C3305 * C3610) / C2242 +
                         (C1901 - (C3232 * C2224) / C2242) / p;
    vrx[0] = C965;
    vrx[1] = C966;
    vrx[2] = C967;
    vrx[3] = C982;
    vrx[4] = C997;
    vrx[5] = C1012;
    vrx[6] = C1027;
    vrx[7] = C1042;
    vrx[8] = C1058;
    vrx[9] = C1073;
    vrx[10] = C1088;
    vrx[11] = C1104;
    vrx[12] = C1133;
    vrx[13] = C1162;
    vrx[14] = C1177;
    vrx[15] = C1207;
    vrx[16] = C1222;
    vrx[17] = C1266;
    vrx[18] = C1309;
    vrx[19] = C1353;
    vry[0] = C1369;
    vry[1] = C1370;
    vry[2] = C1371;
    vry[3] = C1385;
    vry[4] = C1400;
    vry[5] = C1415;
    vry[6] = C1430;
    vry[7] = C1445;
    vry[8] = C1460;
    vry[9] = C1475;
    vry[10] = C1490;
    vry[11] = C1505;
    vry[12] = C1534;
    vry[13] = C1562;
    vry[14] = C1577;
    vry[15] = C1606;
    vry[16] = C1621;
    vry[17] = C1664;
    vry[18] = C1706;
    vry[19] = C1749;
    vrz[0] = C1765;
    vrz[1] = C1766;
    vrz[2] = C1767;
    vrz[3] = C1781;
    vrz[4] = C1796;
    vrz[5] = C1811;
    vrz[6] = C1826;
    vrz[7] = C1841;
    vrz[8] = C1856;
    vrz[9] = C1871;
    vrz[10] = C1886;
    vrz[11] = C1901;
    vrz[12] = C1930;
    vrz[13] = C1958;
    vrz[14] = C1973;
    vrz[15] = C2002;
    vrz[16] = C2017;
    vrz[17] = C2060;
    vrz[18] = C2102;
    vrz[19] = C2145;
}
