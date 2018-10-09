/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2200_3_vr(const double ae,
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
    const double C2201 = g[0];
    const double C2220 = g[1];
    const double C2236 = g[2];
    const double C2252 = g[3];
    const double C2281 = g[4];
    const double C2350 = g[5];
    const double C2433 = g[6];
    const double C2447 = g[7];
    const double C2475 = g[8];
    const double C2544 = g[9];
    const double C2558 = g[10];
    const double C2585 = g[11];
    const double C2599 = g[12];
    const double C2614 = g[13];
    const double C2641 = g[14];
    const double C2657 = g[15];
    const double C2672 = g[16];
    const double C2686 = g[17];
    const double C2714 = g[18];
    const double C2743 = g[19];
    const double C2902 = g[20];
    const double C2918 = g[21];
    const double C2993 = g[22];
    const double C3175 = g[23];
    const double C3541 = g[24];
    const double C3715 = g[25];
    const double C3777 = g[26];
    const double C4626 = g[27];
    const double C2204 = p + q;
    const double C2203 = p * q;
    const double C4713 = bs[5];
    const double C4712 = bs[4];
    const double C4711 = bs[3];
    const double C4709 = bs[2];
    const double C4707 = std::pow(Pi, 2.5);
    const double C4706 = ce * de;
    const double C4705 = bs[0];
    const double C4702 = bs[1];
    const double C4700 = zP - zQ;
    const double C4699 = be * zAB;
    const double C4697 = yP - yQ;
    const double C4696 = be * yAB;
    const double C4693 = 2 * p;
    const double C4692 = xP - xQ;
    const double C4691 = be * xAB;
    const double C2205 = C2204 * p;
    const double C4708 = std::sqrt(C2204);
    const double C4704 = q * C2204;
    const double C4703 = C2203 * ce;
    const double C4690 = C2204 * C2203;
    const double C4689 = ce * C2203;
    const double C4745 = 4 * C4707;
    const double C4744 = kab * C4706;
    const double C4731 = C4700 * C2203;
    const double C4729 = C4697 * C2203;
    const double C4725 = C4692 * C2203;
    const double C4746 = C2203 * C4708;
    const double C4743 = kab * C4703;
    const double C4756 = C3715 * C4689;
    const double C4751 = C2993 * C4689;
    const double C4750 = C2918 * C4689;
    const double C4748 = C2743 * C4689;
    const double C4747 = C2714 * C4689;
    const double C4742 = C2686 * C4689;
    const double C4741 = C2672 * C4689;
    const double C4739 = C2641 * C4689;
    const double C4738 = C2614 * C4689;
    const double C4737 = C2585 * C4689;
    const double C4736 = C2558 * C4689;
    const double C4735 = C2544 * C4689;
    const double C4734 = C2475 * C4689;
    const double C4733 = C2433 * C4689;
    const double C4732 = C2350 * C4689;
    const double C4726 = C2220 * C4689;
    const double C4724 = C2201 * C4689;
    const double C4780 = kcd * C4744;
    const double C4779 = kcd * C4743;
    const double C4790 = C4756 / C4690;
    const double C4785 = C4751 / C4690;
    const double C4784 = C4750 / C4690;
    const double C4782 = C4748 / C4690;
    const double C4781 = C4747 / C4690;
    const double C4778 = C4742 / C4690;
    const double C4777 = C4741 / C4690;
    const double C4775 = C4739 / C4690;
    const double C4774 = C4738 / C4690;
    const double C4773 = C4737 / C4690;
    const double C4772 = C4736 / C4690;
    const double C4771 = C4735 / C4690;
    const double C4770 = C4734 / C4690;
    const double C4769 = C4733 / C4690;
    const double C4768 = C4732 / C4690;
    const double C4764 = C4726 / C4690;
    const double C4763 = C4724 / C4690;
    const double C4810 = C4712 * C4780;
    const double C4808 = C4711 * C4780;
    const double C4806 = C4709 * C4780;
    const double C4803 = C4702 * C4780;
    const double C4801 = C4705 * C4780;
    const double C4809 = C4713 * C4779;
    const double C4807 = C4712 * C4779;
    const double C4805 = C4711 * C4779;
    const double C4802 = C4709 * C4779;
    const double C4800 = C4702 * C4779;
    const double C2997 =
        (((C4692 * C4809) / C4704 - (xCD * C4810) / q) * C4745) / C4746;
    const double C3830 =
        (((C4697 * C4809) / C4704 - (yCD * C4810) / q) * C4745) / C4746;
    const double C4653 =
        (((C4700 * C4809) / C4704 - (zCD * C4810) / q) * C4745) / C4746;
    const double C2907 =
        (((C4692 * C4807) / C4704 - (xCD * C4808) / q) * C4745) / C4746;
    const double C3740 =
        (((C4697 * C4807) / C4704 - (yCD * C4808) / q) * C4745) / C4746;
    const double C4563 =
        (((C4700 * C4807) / C4704 - (zCD * C4808) / q) * C4745) / C4746;
    const double C2661 =
        (((C4692 * C4805) / C4704 - (xCD * C4806) / q) * C4745) / C4746;
    const double C3476 =
        (((C4697 * C4805) / C4704 - (yCD * C4806) / q) * C4745) / C4746;
    const double C4301 =
        (((C4700 * C4805) / C4704 - (zCD * C4806) / q) * C4745) / C4746;
    const double C2241 =
        (((C4692 * C4802) / C4704 - (xCD * C4803) / q) * C4745) / C4746;
    const double C3083 =
        (((C4697 * C4802) / C4704 - (yCD * C4803) / q) * C4745) / C4746;
    const double C3909 =
        (((C4700 * C4802) / C4704 - (zCD * C4803) / q) * C4745) / C4746;
    const double C2240 =
        (((C4692 * C4800) / C4704 - (xCD * C4801) / q) * C4745) / C4746;
    const double C3082 =
        (((C4697 * C4800) / C4704 - (yCD * C4801) / q) * C4745) / C4746;
    const double C3908 =
        (((C4700 * C4800) / C4704 - (zCD * C4801) / q) * C4745) / C4746;
    const double C4710 = C2907 * C2203;
    const double C2906 = C4785 - (C2907 * C4691) / p - (C2997 * C4725) / C2205;
    const double C2942 = -((C2907 * C4696) / p + (C2997 * C4729) / C2205);
    const double C2969 = -((C2907 * C4699) / p + (C2997 * C4731) / C2205);
    const double C4718 = C3740 * C2203;
    const double C3754 = -((C3740 * C4691) / p + (C3830 * C4725) / C2205);
    const double C3782 = C4785 - (C3740 * C4696) / p - (C3830 * C4729) / C2205;
    const double C3809 = -((C3740 * C4699) / p + (C3830 * C4731) / C2205);
    const double C4723 = C4563 * C2203;
    const double C4577 = -((C4563 * C4691) / p + (C4653 * C4725) / C2205);
    const double C4604 = -((C4563 * C4696) / p + (C4653 * C4729) / C2205);
    const double C4632 = C4785 - (C4563 * C4699) / p - (C4653 * C4731) / C2205;
    const double C4701 = C2661 * C2203;
    const double C2646 = C4784 - (C2661 * C4691) / p - (C2907 * C4725) / C2205;
    const double C2732 = -((C2661 * C4696) / p + (C2907 * C4729) / C2205);
    const double C2761 = -((C2661 * C4699) / p + (C2907 * C4731) / C2205);
    const double C4717 = C3476 * C2203;
    const double C3477 = -((C3476 * C4691) / p + (C3740 * C4725) / C2205);
    const double C3546 = C4784 - (C3476 * C4696) / p - (C3740 * C4729) / C2205;
    const double C3574 = -((C3476 * C4699) / p + (C3740 * C4731) / C2205);
    const double C4722 = C4301 * C2203;
    const double C4302 = -((C4301 * C4691) / p + (C4563 * C4725) / C2205);
    const double C4370 = -((C4301 * C4696) / p + (C4563 * C4729) / C2205);
    const double C4398 = C4784 - (C4301 * C4699) / p - (C4563 * C4731) / C2205;
    const double C4694 = C2241 * C2203;
    const double C2225 = C4778 - (C2241 * C4691) / p - (C2661 * C4725) / C2205;
    const double C2368 = -((C2241 * C4696) / p + (C2661 * C4729) / C2205);
    const double C2493 = -((C2241 * C4699) / p + (C2661 * C4731) / C2205);
    const double C4714 = C3083 * C2203;
    const double C3068 = -((C3083 * C4691) / p + (C3476 * C4725) / C2205);
    const double C3208 = C4778 - (C3083 * C4696) / p - (C3476 * C4729) / C2205;
    const double C3330 = -((C3083 * C4699) / p + (C3476 * C4731) / C2205);
    const double C4719 = C3909 * C2203;
    const double C3894 = -((C3909 * C4691) / p + (C4301 * C4725) / C2205);
    const double C4033 = -((C3909 * C4696) / p + (C4301 * C4729) / C2205);
    const double C4155 = C4778 - (C3909 * C4699) / p - (C4301 * C4731) / C2205;
    const double C2224 = C4777 - (C2240 * C4691) / p - (C2241 * C4725) / C2205;
    const double C2367 = -((C2240 * C4696) / p + (C2241 * C4729) / C2205);
    const double C2492 = -((C2240 * C4699) / p + (C2241 * C4731) / C2205);
    const double C3067 = -((C3082 * C4691) / p + (C3083 * C4725) / C2205);
    const double C3207 = C4777 - (C3082 * C4696) / p - (C3083 * C4729) / C2205;
    const double C3329 = -((C3082 * C4699) / p + (C3083 * C4731) / C2205);
    const double C3893 = -((C3908 * C4691) / p + (C3909 * C4725) / C2205);
    const double C4032 = -((C3908 * C4696) / p + (C3909 * C4729) / C2205);
    const double C4154 = C4777 - (C3908 * C4699) / p - (C3909 * C4731) / C2205;
    const double C4749 = C4710 / C2205;
    const double C4757 = C4718 / C2205;
    const double C4762 = C4723 / C2205;
    const double C4740 = C4701 / C2205;
    const double C4755 = C4717 / C2205;
    const double C4761 = C4722 / C2205;
    const double C4727 = C4694 / C2205;
    const double C2603 = -((C2493 * C4696) / p + (C2761 * C4729) / C2205);
    const double C4752 = C4714 / C2205;
    const double C3436 = C4790 - (C3330 * C4696) / p - (C3574 * C4729) / C2205;
    const double C4758 = C4719 / C2205;
    const double C4261 = -((C4155 * C4696) / p + (C4398 * C4729) / C2205);
    const double C818 = C4773 - (C2367 * C4691) / p - (C2368 * C4725) / C2205;
    const double C855 = C4774 - (C2492 * C4691) / p - (C2493 * C4725) / C2205;
    const double C898 = -((C2492 * C4696) / p + (C2493 * C4729) / C2205);
    const double C1445 = -((C3207 * C4691) / p + (C3208 * C4725) / C2205);
    const double C1482 = -((C3329 * C4691) / p + (C3330 * C4725) / C2205);
    const double C1525 = C4774 - (C3329 * C4696) / p - (C3330 * C4729) / C2205;
    const double C2072 = -((C4032 * C4691) / p + (C4033 * C4725) / C2205);
    const double C2109 = -((C4154 * C4691) / p + (C4155 * C4725) / C2205);
    const double C2152 = -((C4154 * C4696) / p + (C4155 * C4729) / C2205);
    const double C4783 = C2661 - C4749;
    const double C4791 = C3476 - C4757;
    const double C4796 = C4301 - C4762;
    const double C4776 = C2241 - C4740;
    const double C4789 = C3083 - C4755;
    const double C4795 = C3909 - C4761;
    const double C4765 = C2240 - C4727;
    const double C4786 = C3082 - C4752;
    const double C4792 = C3908 - C4758;
    const double C833 =
        (C2599 * C4689) / C4690 - (C898 * C4691) / p - (C2603 * C4725) / C2205;
    const double C1460 = -((C1525 * C4691) / p + (C3436 * C4725) / C2205);
    const double C2087 = -((C2152 * C4691) / p + (C4261 * C4725) / C2205);
    const double C4804 = C4783 / C4693;
    const double C4814 = C4791 / C4693;
    const double C4818 = C4796 / C4693;
    const double C4799 = C4776 / C4693;
    const double C4813 = C4789 / C4693;
    const double C4817 = C4795 / C4693;
    const double C4797 = C4765 / C4693;
    const double C4811 = C4786 / C4693;
    const double C4815 = C4792 / C4693;
    const double C2645 = (C2902 * C4689) / C4690 - (C2646 * C4691) / p -
                         (C2906 * C4725) / C2205 + C4804;
    const double C2718 =
        C4804 - ((C2732 * C4696) / p + (C2942 * C4729) / C2205);
    const double C2747 =
        C4804 - ((C2761 * C4699) / p + (C2969 * C4731) / C2205);
    const double C3491 =
        C4814 - ((C3477 * C4691) / p + (C3754 * C4725) / C2205);
    const double C3560 = (C3777 * C4689) / C4690 - (C3546 * C4696) / p -
                         (C3782 * C4729) / C2205 + C4814;
    const double C3588 =
        C4814 - ((C3574 * C4699) / p + (C3809 * C4731) / C2205);
    const double C4316 =
        C4818 - ((C4302 * C4691) / p + (C4577 * C4725) / C2205);
    const double C4384 =
        C4818 - ((C4370 * C4696) / p + (C4604 * C4729) / C2205);
    const double C4412 = (C4626 * C4689) / C4690 - (C4398 * C4699) / p -
                         (C4632 * C4731) / C2205 + C4818;
    const double C2209 = (C2657 * C4689) / C4690 - (C2225 * C4691) / p -
                         (C2646 * C4725) / C2205 + C4799;
    const double C2257 =
        C4799 - ((C2368 * C4696) / p + (C2732 * C4729) / C2205);
    const double C2286 =
        C4799 - ((C2493 * C4699) / p + (C2761 * C4731) / C2205);
    const double C3052 =
        C4813 - ((C3068 * C4691) / p + (C3477 * C4725) / C2205);
    const double C3097 = (C3541 * C4689) / C4690 - (C3208 * C4696) / p -
                         (C3546 * C4729) / C2205 + C4813;
    const double C3125 =
        C4813 - ((C3330 * C4699) / p + (C3574 * C4731) / C2205);
    const double C3878 =
        C4817 - ((C3894 * C4691) / p + (C4302 * C4725) / C2205);
    const double C3923 =
        C4817 - ((C4033 * C4696) / p + (C4370 * C4729) / C2205);
    const double C3951 =
        C4790 - (C4155 * C4699) / p - (C4398 * C4731) / C2205 + C4817;
    const double C604 = (C2236 * C4689) / C4690 - (C2224 * C4691) / p -
                        (C2225 * C4725) / C2205 + C4797;
    const double C676 = C4797 - ((C2367 * C4696) / p + (C2368 * C4729) / C2205);
    const double C748 = C4797 - ((C2492 * C4699) / p + (C2493 * C4731) / C2205);
    const double C1231 =
        C4811 - ((C3067 * C4691) / p + (C3068 * C4725) / C2205);
    const double C1303 =
        C4773 - (C3207 * C4696) / p - (C3208 * C4729) / C2205 + C4811;
    const double C1375 =
        C4811 - ((C3329 * C4699) / p + (C3330 * C4731) / C2205);
    const double C1858 =
        C4815 - ((C3893 * C4691) / p + (C3894 * C4725) / C2205);
    const double C1930 =
        C4815 - ((C4032 * C4696) / p + (C4033 * C4729) / C2205);
    const double C2002 =
        C4774 - (C4154 * C4699) / p - (C4155 * C4731) / C2205 + C4815;
    const double C2208 = C4775 - (C2209 * C4691) / p - (C2645 * C4725) / C2205 +
                         (C2225 - (C2646 * C2203) / C2205) / p;
    const double C2339 = -((C2209 * C4699) / p + (C2645 * C4731) / C2205);
    const double C4695 = C2257 * C2203;
    const double C2256 = C4781 - (C2257 * C4691) / p - (C2718 * C4725) / C2205;
    const double C2382 = (C2368 - (C2732 * C2203) / C2205) / p -
                         ((C2257 * C4696) / p + (C2718 * C4729) / C2205);
    const double C2451 = -((C2257 * C4699) / p + (C2718 * C4731) / C2205);
    const double C4698 = C2286 * C2203;
    const double C2285 = C4782 - (C2286 * C4691) / p - (C2747 * C4725) / C2205;
    const double C2409 = -((C2286 * C4696) / p + (C2747 * C4729) / C2205);
    const double C2520 = (C2493 - (C2761 * C2203) / C2205) / p -
                         ((C2286 * C4699) / p + (C2747 * C4731) / C2205);
    const double C3053 = (C3068 - (C3477 * C2203) / C2205) / p -
                         ((C3052 * C4691) / p + (C3491 * C4725) / C2205);
    const double C3180 = -((C3052 * C4699) / p + (C3491 * C4731) / C2205);
    const double C4715 = C3097 * C2203;
    const double C3098 = -((C3097 * C4691) / p + (C3560 * C4725) / C2205);
    const double C3222 = C4781 - (C3097 * C4696) / p - (C3560 * C4729) / C2205 +
                         (C3208 - (C3546 * C2203) / C2205) / p;
    const double C3289 = -((C3097 * C4699) / p + (C3560 * C4731) / C2205);
    const double C4716 = C3125 * C2203;
    const double C3126 = -((C3125 * C4691) / p + (C3588 * C4725) / C2205);
    const double C3249 = C4782 - (C3125 * C4696) / p - (C3588 * C4729) / C2205;
    const double C3357 = (C3330 - (C3574 * C2203) / C2205) / p -
                         ((C3125 * C4699) / p + (C3588 * C4731) / C2205);
    const double C3879 = (C3894 - (C4302 * C2203) / C2205) / p -
                         ((C3878 * C4691) / p + (C4316 * C4725) / C2205);
    const double C4005 = C4775 - (C3878 * C4699) / p - (C4316 * C4731) / C2205;
    const double C4720 = C3923 * C2203;
    const double C3924 = -((C3923 * C4691) / p + (C4384 * C4725) / C2205);
    const double C4047 = (C4033 - (C4370 * C2203) / C2205) / p -
                         ((C3923 * C4696) / p + (C4384 * C4729) / C2205);
    const double C4114 = C4781 - (C3923 * C4699) / p - (C4384 * C4731) / C2205;
    const double C4721 = C3951 * C2203;
    const double C3952 = -((C3951 * C4691) / p + (C4412 * C4725) / C2205);
    const double C4074 = -((C3951 * C4696) / p + (C4412 * C4729) / C2205);
    const double C4182 = C4782 - (C3951 * C4699) / p - (C4412 * C4731) / C2205 +
                         (C4155 - (C4398 * C2203) / C2205) / p;
    const double C596 = C4764 - (C604 * C4691) / p - (C2209 * C4725) / C2205 +
                        (C2224 - (C2225 * C2203) / C2205) / p;
    const double C613 = -((C604 * C4696) / p + (C2209 * C4729) / C2205);
    const double C629 = -((C604 * C4699) / p + (C2209 * C4731) / C2205);
    const double C668 = C4768 - (C676 * C4691) / p - (C2257 * C4725) / C2205;
    const double C685 = (C2367 - (C2368 * C2203) / C2205) / p -
                        ((C676 * C4696) / p + (C2257 * C4729) / C2205);
    const double C701 = -((C676 * C4699) / p + (C2257 * C4731) / C2205);
    const double C740 = C4770 - (C748 * C4691) / p - (C2286 * C4725) / C2205;
    const double C756 = -((C748 * C4696) / p + (C2286 * C4729) / C2205);
    const double C772 = (C2492 - (C2493 * C2203) / C2205) / p -
                        ((C748 * C4699) / p + (C2286 * C4731) / C2205);
    const double C1223 = (C3067 - (C3068 * C2203) / C2205) / p -
                         ((C1231 * C4691) / p + (C3052 * C4725) / C2205);
    const double C1240 = C4764 - (C1231 * C4696) / p - (C3052 * C4729) / C2205;
    const double C1256 = -((C1231 * C4699) / p + (C3052 * C4731) / C2205);
    const double C1295 = -((C1303 * C4691) / p + (C3097 * C4725) / C2205);
    const double C1312 = C4768 - (C1303 * C4696) / p - (C3097 * C4729) / C2205 +
                         (C3207 - (C3208 * C2203) / C2205) / p;
    const double C1328 = -((C1303 * C4699) / p + (C3097 * C4731) / C2205);
    const double C1367 = -((C1375 * C4691) / p + (C3125 * C4725) / C2205);
    const double C1383 = C4770 - (C1375 * C4696) / p - (C3125 * C4729) / C2205;
    const double C1399 = (C3329 - (C3330 * C2203) / C2205) / p -
                         ((C1375 * C4699) / p + (C3125 * C4731) / C2205);
    const double C1850 = (C3893 - (C3894 * C2203) / C2205) / p -
                         ((C1858 * C4691) / p + (C3878 * C4725) / C2205);
    const double C1867 = -((C1858 * C4696) / p + (C3878 * C4729) / C2205);
    const double C1883 = C4764 - (C1858 * C4699) / p - (C3878 * C4731) / C2205;
    const double C1922 = -((C1930 * C4691) / p + (C3923 * C4725) / C2205);
    const double C1939 = (C4032 - (C4033 * C2203) / C2205) / p -
                         ((C1930 * C4696) / p + (C3923 * C4729) / C2205);
    const double C1955 = C4768 - (C1930 * C4699) / p - (C3923 * C4731) / C2205;
    const double C1994 = -((C2002 * C4691) / p + (C3951 * C4725) / C2205);
    const double C2010 = -((C2002 * C4696) / p + (C3951 * C4729) / C2205);
    const double C2026 = C4770 - (C2002 * C4699) / p - (C3951 * C4731) / C2205 +
                         (C4154 - (C4155 * C2203) / C2205) / p;
    const double C4728 = C4695 / C2205;
    const double C4730 = C4698 / C2205;
    const double C4753 = C4715 / C2205;
    const double C4754 = C4716 / C2205;
    const double C4759 = C4720 / C2205;
    const double C4760 = C4721 / C2205;
    const double C595 = C4763 - (C596 * C4691) / p - (C2208 * C4725) / C2205 +
                        (3 * (C604 - (C2209 * C2203) / C2205)) / C4693;
    const double C644 = -((C596 * C4696) / p + (C2208 * C4729) / C2205);
    const double C652 = -((C596 * C4699) / p + (C2208 * C4731) / C2205);
    const double C660 = -((C629 * C4696) / p + (C2339 * C4729) / C2205);
    const double C716 = C4769 - (C685 * C4691) / p - (C2382 * C4725) / C2205;
    const double C732 = -((C685 * C4699) / p + (C2382 * C4731) / C2205);
    const double C724 =
        (C2447 * C4689) / C4690 - (C701 * C4691) / p - (C2451 * C4725) / C2205;
    const double C787 = C4771 - (C756 * C4691) / p - (C2409 * C4725) / C2205;
    const double C795 = C4772 - (C772 * C4691) / p - (C2520 * C4725) / C2205;
    const double C803 = -((C772 * C4696) / p + (C2520 * C4729) / C2205);
    const double C1222 = (3 * (C1231 - (C3052 * C2203) / C2205)) / C4693 -
                         ((C1223 * C4691) / p + (C3053 * C4725) / C2205);
    const double C1271 = C4763 - (C1223 * C4696) / p - (C3053 * C4729) / C2205;
    const double C1279 = -((C1223 * C4699) / p + (C3053 * C4731) / C2205);
    const double C1287 =
        (C3175 * C4689) / C4690 - (C1256 * C4696) / p - (C3180 * C4729) / C2205;
    const double C1343 = -((C1312 * C4691) / p + (C3222 * C4725) / C2205);
    const double C1359 = -((C1312 * C4699) / p + (C3222 * C4731) / C2205);
    const double C1351 = -((C1328 * C4691) / p + (C3289 * C4725) / C2205);
    const double C1414 = -((C1383 * C4691) / p + (C3249 * C4725) / C2205);
    const double C1422 = -((C1399 * C4691) / p + (C3357 * C4725) / C2205);
    const double C1430 = C4772 - (C1399 * C4696) / p - (C3357 * C4729) / C2205;
    const double C1849 = (3 * (C1858 - (C3878 * C2203) / C2205)) / C4693 -
                         ((C1850 * C4691) / p + (C3879 * C4725) / C2205);
    const double C1898 = -((C1850 * C4696) / p + (C3879 * C4729) / C2205);
    const double C1906 = C4763 - (C1850 * C4699) / p - (C3879 * C4731) / C2205;
    const double C1914 = -((C1883 * C4696) / p + (C4005 * C4729) / C2205);
    const double C1970 = -((C1939 * C4691) / p + (C4047 * C4725) / C2205);
    const double C1986 = C4769 - (C1939 * C4699) / p - (C4047 * C4731) / C2205;
    const double C1978 = -((C1955 * C4691) / p + (C4114 * C4725) / C2205);
    const double C2041 = -((C2010 * C4691) / p + (C4074 * C4725) / C2205);
    const double C2049 = -((C2026 * C4691) / p + (C4182 * C4725) / C2205);
    const double C2057 = -((C2026 * C4696) / p + (C4182 * C4729) / C2205);
    const double C4766 = C676 - C4728;
    const double C4767 = C748 - C4730;
    const double C4787 = C1303 - C4753;
    const double C4788 = C1375 - C4754;
    const double C4793 = C1930 - C4759;
    const double C4794 = C2002 - C4760;
    const double C612 = (C2252 * C4689) / C4690 - (C668 * C4691) / p -
                        (C2256 * C4725) / C2205 + C4766 / C4693;
    const double C684 =
        (3 * C4766) / C4693 - ((C685 * C4696) / p + (C2382 * C4729) / C2205);
    const double C4798 = C4767 / C4693;
    const double C771 =
        (3 * C4767) / C4693 - ((C772 * C4699) / p + (C2520 * C4731) / C2205);
    const double C1239 =
        C4787 / C4693 - ((C1295 * C4691) / p + (C3098 * C4725) / C2205);
    const double C1311 = C4769 - (C1312 * C4696) / p - (C3222 * C4729) / C2205 +
                         (3 * C4787) / C4693;
    const double C4812 = C4788 / C4693;
    const double C1398 =
        (3 * C4788) / C4693 - ((C1399 * C4699) / p + (C3357 * C4731) / C2205);
    const double C1866 =
        C4793 / C4693 - ((C1922 * C4691) / p + (C3924 * C4725) / C2205);
    const double C1938 =
        (3 * C4793) / C4693 - ((C1939 * C4696) / p + (C4047 * C4729) / C2205);
    const double C4816 = C4794 / C4693;
    const double C2025 = C4772 - (C2026 * C4699) / p - (C4182 * C4731) / C2205 +
                         (3 * C4794) / C4693;
    const double C628 = (C2281 * C4689) / C4690 - (C740 * C4691) / p -
                        (C2285 * C4725) / C2205 + C4798;
    const double C700 = C4798 - ((C756 * C4696) / p + (C2409 * C4729) / C2205);
    const double C1255 =
        C4812 - ((C1367 * C4691) / p + (C3126 * C4725) / C2205);
    const double C1327 =
        C4771 - (C1383 * C4696) / p - (C3249 * C4729) / C2205 + C4812;
    const double C1882 =
        C4816 - ((C1994 * C4691) / p + (C3952 * C4725) / C2205);
    const double C1954 =
        C4816 - ((C2010 * C4696) / p + (C4074 * C4729) / C2205);
    vrx[0] = C595;
    vrx[1] = C596;
    vrx[2] = C604;
    vrx[3] = C612;
    vrx[4] = C613;
    vrx[5] = C628;
    vrx[6] = C629;
    vrx[7] = C644;
    vrx[8] = C652;
    vrx[9] = C660;
    vrx[10] = C668;
    vrx[11] = C676;
    vrx[12] = C684;
    vrx[13] = C685;
    vrx[14] = C700;
    vrx[15] = C701;
    vrx[16] = C716;
    vrx[17] = C724;
    vrx[18] = C732;
    vrx[19] = C740;
    vrx[20] = C748;
    vrx[21] = C756;
    vrx[22] = C771;
    vrx[23] = C772;
    vrx[24] = C787;
    vrx[25] = C795;
    vrx[26] = C803;
    vrx[27] = C818;
    vrx[28] = C833;
    vrx[29] = C855;
    vrx[30] = C898;
    vry[0] = C1222;
    vry[1] = C1223;
    vry[2] = C1231;
    vry[3] = C1239;
    vry[4] = C1240;
    vry[5] = C1255;
    vry[6] = C1256;
    vry[7] = C1271;
    vry[8] = C1279;
    vry[9] = C1287;
    vry[10] = C1295;
    vry[11] = C1303;
    vry[12] = C1311;
    vry[13] = C1312;
    vry[14] = C1327;
    vry[15] = C1328;
    vry[16] = C1343;
    vry[17] = C1351;
    vry[18] = C1359;
    vry[19] = C1367;
    vry[20] = C1375;
    vry[21] = C1383;
    vry[22] = C1398;
    vry[23] = C1399;
    vry[24] = C1414;
    vry[25] = C1422;
    vry[26] = C1430;
    vry[27] = C1445;
    vry[28] = C1460;
    vry[29] = C1482;
    vry[30] = C1525;
    vrz[0] = C1849;
    vrz[1] = C1850;
    vrz[2] = C1858;
    vrz[3] = C1866;
    vrz[4] = C1867;
    vrz[5] = C1882;
    vrz[6] = C1883;
    vrz[7] = C1898;
    vrz[8] = C1906;
    vrz[9] = C1914;
    vrz[10] = C1922;
    vrz[11] = C1930;
    vrz[12] = C1938;
    vrz[13] = C1939;
    vrz[14] = C1954;
    vrz[15] = C1955;
    vrz[16] = C1970;
    vrz[17] = C1978;
    vrz[18] = C1986;
    vrz[19] = C1994;
    vrz[20] = C2002;
    vrz[21] = C2010;
    vrz[22] = C2025;
    vrz[23] = C2026;
    vrz[24] = C2041;
    vrz[25] = C2049;
    vrz[26] = C2057;
    vrz[27] = C2072;
    vrz[28] = C2087;
    vrz[29] = C2109;
    vrz[30] = C2152;
}
