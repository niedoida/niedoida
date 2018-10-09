/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddss_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2200_11(const double ae,
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
                                  double* const d2eexx,
                                  double* const d2eexy,
                                  double* const d2eexz,
                                  double* const d2eeyx,
                                  double* const d2eeyy,
                                  double* const d2eeyz,
                                  double* const d2eezx,
                                  double* const d2eezy,
                                  double* const d2eezz)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C13914 = 0 * ae;
    const double C13913 = ae * be;
    const double C13912 = 0 * be;
    const double C13911 = 0 * be;
    const double C13910 = xA - xB;
    const double C13909 = ae + be;
    const double C13908 = 0 * be;
    const double C14015 = 0 * be;
    const double C14042 = yA - yB;
    const double C14045 = zA - zB;
    const double C14065 = 0 * be;
    const double C14091 = 0 * be;
    const double C14187 = 0 * ae;
    const double C14182 = 0 * be;
    const double C14181 = 0 * be;
    const double C14229 = 0 * be;
    const double C14337 = 0 * ae;
    const double C14332 = 0 * be;
    const double C14331 = 0 * be;
    const double C14379 = 0 * be;
    const double C14561 = p + q;
    const double C14560 = p * q;
    const double C14566 = xP - xQ;
    const double C14565 = bs[2];
    const double C14573 = std::pow(ae, 2);
    const double C14571 = bs[3];
    const double C14584 = bs[4];
    const double C14605 = bs[5];
    const double C14636 = yP - yQ;
    const double C14661 = zP - zQ;
    const double C81 = bs[0];
    const double C15680 = ce + de;
    const double C15679 = ce * de;
    const double C13923 = 2 * C13913;
    const double C13920 = -2 * C13912;
    const double C13917 = -2 * C13911;
    const double C13922 = C13913 * C13910;
    const double C13921 = C13910 * C13912;
    const double C13918 = C13910 * C13911;
    const double C15361 = C13910 * be;
    const double C15360 = C13910 * ae;
    const double C15359 = std::pow(C13910, 2);
    const double C13924 = C13914 / C13909;
    const double C13919 = C13912 / C13909;
    const double C13916 = 2 * C13909;
    const double C13915 = std::pow(C13909, 2);
    const double C14017 = C14015 / C13909;
    const double C14066 = C13913 * C14042;
    const double C15403 = std::pow(C14042, 2);
    const double C15457 = C14042 * be;
    const double C15455 = C14042 * ae;
    const double C14092 = C13913 * C14045;
    const double C15414 = std::pow(C14045, 2);
    const double C15497 = C14045 * be;
    const double C15495 = C14045 * ae;
    const double C14184 = C14042 * C14065;
    const double C14183 = C14065 / C13909;
    const double C14243 = -2 * C14065;
    const double C14334 = C14045 * C14091;
    const double C14333 = C14091 / C13909;
    const double C14393 = -2 * C14091;
    const double C14194 = C14187 / C13909;
    const double C14189 = C14042 * C14182;
    const double C14242 = -2 * C14182;
    const double C14230 = C14229 / C13909;
    const double C14344 = C14337 / C13909;
    const double C14339 = C14045 * C14332;
    const double C14392 = -2 * C14332;
    const double C14380 = C14379 / C13909;
    const double C14562 = 2 * C14560;
    const double C14574 = C14566 * ae;
    const double C14570 = std::pow(C14566, 2);
    const double C14639 = C14636 * ae;
    const double C14638 = C14566 * C14636;
    const double C14687 = C14636 * C14566;
    const double C14700 = std::pow(C14636, 2);
    const double C14664 = C14661 * ae;
    const double C14663 = C14566 * C14661;
    const double C14714 = C14636 * C14661;
    const double C14725 = C14661 * C14566;
    const double C14738 = C14661 * C14636;
    const double C14749 = std::pow(C14661, 2);
    const double C68 = std::exp(-(std::pow(zC - zD, 2) * C15679) / C15680);
    const double C69 = std::exp(-(std::pow(yC - yD, 2) * C15679) / C15680);
    const double C70 = std::exp(-(std::pow(xC - xD, 2) * C15679) / C15680);
    const double C13929 = ae * C13920;
    const double C13926 = ae * C13917;
    const double C13930 = C13921 / C13909;
    const double C13927 = C13918 / C13909;
    const double C15668 = std::pow(C15360, 2);
    const double C15362 = C15359 * C13913;
    const double C15373 = std::pow(C13916, -1);
    const double C15675 = std::pow(C13916, -2);
    const double C13928 = 2 * C13915;
    const double C13925 = C13915 * C13916;
    const double C14013 = 4 * C13915;
    const double C15404 = C15403 * C13913;
    const double C15681 = std::pow(C15455, 2);
    const double C15415 = C15414 * C13913;
    const double C15683 = std::pow(C15495, 2);
    const double C14192 = C14184 / C13909;
    const double C14252 = ae * C14243;
    const double C14342 = C14334 / C13909;
    const double C14402 = ae * C14393;
    const double C14195 = C14189 / C13909;
    const double C14251 = ae * C14242;
    const double C14345 = C14339 / C13909;
    const double C14401 = ae * C14392;
    const double C14564 = C14562 / C14561;
    const double C91 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C14562 / C14561, 2) -
          (bs[1] * C14562) / C14561) *
         std::pow(ae, 2)) /
        C13915;
    const double C82 = -(C14566 * bs[1] * C14562) / C14561;
    const double C391 = -(C14636 * bs[1] * C14562) / C14561;
    const double C844 = -(C14661 * bs[1] * C14562) / C14561;
    const double C14576 = C14571 * C14574;
    const double C14587 = C14584 * C14574;
    const double C14610 = C14605 * C14574;
    const double C86 = (-(bs[1] * C14574 * C14562) / C14561) / C13909;
    const double C14586 = C14570 * C14584;
    const double C14609 = C14570 * C14605;
    const double C14641 = C14571 * C14639;
    const double C14645 = C14584 * C14639;
    const double C14652 = C14605 * C14639;
    const double C124 = (-(bs[1] * C14639 * C14562) / C14561) / C13909;
    const double C14640 = C14638 * C14573;
    const double C14688 = C14687 * C14573;
    const double C14702 = C14700 * C14584;
    const double C14707 = C14700 * C14605;
    const double C14666 = C14571 * C14664;
    const double C14670 = C14584 * C14664;
    const double C14677 = C14605 * C14664;
    const double C157 = (-(bs[1] * C14664 * C14562) / C14561) / C13909;
    const double C14665 = C14663 * C14573;
    const double C14715 = C14714 * C14573;
    const double C14726 = C14725 * C14573;
    const double C14739 = C14738 * C14573;
    const double C14751 = C14749 * C14584;
    const double C14756 = C14749 * C14605;
    const double C13935 = C13910 * C13929;
    const double C13936 = 0 - C13930;
    const double C13932 = 0 - C13927;
    const double C15363 = C15362 / C13909;
    const double C13941 = C13912 / C13928;
    const double C13937 = C13911 / C13928;
    const double C13933 = C13908 / C13928;
    const double C14186 = C14065 / C13928;
    const double C14191 = C14182 / C13928;
    const double C14190 = C14181 / C13928;
    const double C14336 = C14091 / C13928;
    const double C14341 = C14332 / C13928;
    const double C14340 = C14331 / C13928;
    const double C13938 = C13929 / C13925;
    const double C13934 = C13926 / C13925;
    const double C15678 = 4 * C13925;
    const double C14016 = C13909 * C14013;
    const double C15405 = C15404 / C13909;
    const double C15416 = C15415 / C13909;
    const double C14196 = 0 - C14192;
    const double C14257 = C14252 / C13925;
    const double C14256 = C14042 * C14252;
    const double C14346 = 0 - C14342;
    const double C14407 = C14402 / C13925;
    const double C14406 = C14045 * C14402;
    const double C14199 = 0 - C14195;
    const double C14255 = C14251 / C13925;
    const double C14349 = 0 - C14345;
    const double C14405 = C14401 / C13925;
    const double C14567 = std::pow(C14564, 2);
    const double C14572 = -C14564;
    const double C14585 = std::pow(C14564, 4);
    const double C14644 = C14584 * C14640;
    const double C14651 = C14605 * C14640;
    const double C14690 = C14584 * C14688;
    const double C14693 = C14605 * C14688;
    const double C14669 = C14584 * C14665;
    const double C14676 = C14605 * C14665;
    const double C14717 = C14584 * C14715;
    const double C14720 = C14605 * C14715;
    const double C14728 = C14584 * C14726;
    const double C14731 = C14605 * C14726;
    const double C14741 = C14584 * C14739;
    const double C14744 = C14605 * C14739;
    const double C13944 = C13935 / C13915;
    const double C13945 = C13936 * ae;
    const double C13943 = C13932 * ae;
    const double C15364 = -C15363;
    const double C15406 = -C15405;
    const double C15417 = -C15416;
    const double C14200 = C14196 * ae;
    const double C14260 = C14256 / C13915;
    const double C14350 = C14346 * ae;
    const double C14410 = C14406 / C13915;
    const double C14204 = C14199 * ae;
    const double C14354 = C14349 * ae;
    const double C14569 = C14565 * C14567;
    const double C92 = (2 * ae * C14567 * C14565 * C14566 * ae +
                        C14566 *
                            (C14565 * C14567 + std::pow(C14566, 2) * bs[3] *
                                                   std::pow(-C14564, 3)) *
                            std::pow(ae, 2)) /
                       C13915;
    const double C129 =
        (C14567 * C14565 * C14566 * (yP - yQ) * C14573) / C13915;
    const double C162 =
        (C14567 * C14565 * C14566 * (zP - zQ) * C14573) / C13915;
    const double C189 = (C14567 * C14565 * C14636 * C14566 * C14573) / C13915;
    const double C217 =
        ((std::pow(C14636, 2) * C14565 * C14567 - (bs[1] * C14562) / C14561) *
         C14573) /
        C13915;
    const double C249 = (C14567 * C14565 * C14636 * C14661 * C14573) / C13915;
    const double C276 = (C14567 * C14565 * C14661 * C14566 * C14573) / C13915;
    const double C303 = (C14567 * C14565 * C14661 * C14636 * C14573) / C13915;
    const double C331 =
        ((std::pow(C14661, 2) * C14565 * C14567 - (bs[1] * C14562) / C14561) *
         C14573) /
        C13915;
    const double C87 = (C14566 * C14567 * C14565 * C14574) / C13909 -
                       (ae * bs[1] * C14562) / (C14561 * C13909);
    const double C125 = (C14566 * C14567 * C14565 * C14639) / C13909;
    const double C158 = (C14566 * C14567 * C14565 * C14664) / C13909;
    const double C397 = (C14636 * C14567 * C14565 * C14574) / C13909;
    const double C459 = (C14636 * C14567 * C14565 * C14639) / C13909 -
                        (ae * bs[1] * C14562) / (C14561 * C13909);
    const double C509 = (C14636 * C14567 * C14565 * C14664) / C13909;
    const double C850 = (C14661 * C14567 * C14565 * C14574) / C13909;
    const double C906 = (C14661 * C14567 * C14565 * C14639) / C13909;
    const double C959 = (C14661 * C14567 * C14565 * C14664) / C13909 -
                        (ae * bs[1] * C14562) / (C14561 * C13909);
    const double C14575 = std::pow(C14572, 3);
    const double C14606 = std::pow(C14572, 5);
    const double C14591 = C14585 * C14587;
    const double C14590 = C14586 * C14585;
    const double C14604 = C14584 * C14585;
    const double C14647 = C14585 * C14645;
    const double C14672 = C14585 * C14670;
    const double C14703 = C14702 * C14585;
    const double C14752 = C14751 * C14585;
    const double C14646 = C14585 * C14644;
    const double C14691 = C14585 * C14690;
    const double C14671 = C14585 * C14669;
    const double C14718 = C14585 * C14717;
    const double C14729 = C14585 * C14728;
    const double C14742 = C14585 * C14741;
    const double C13950 = C13945 / C13909;
    const double C13949 = C13943 / C13909;
    const double C15365 = std::exp(C15364);
    const double C15407 = std::exp(C15406);
    const double C15418 = std::exp(C15417);
    const double C14205 = C14200 / C13909;
    const double C14355 = C14350 / C13909;
    const double C14208 = C14204 / C13909;
    const double C14358 = C14354 / C13909;
    const double C14577 = C14569 * ae;
    const double C83 = C14569 * C14570 - (bs[1] * C14562) / C14561;
    const double C392 = C14636 * C14566 * C14569;
    const double C394 = C14569 * C14700 - (bs[1] * C14562) / C14561;
    const double C845 = C14661 * C14566 * C14569;
    const double C847 = C14569 * C14749 - (bs[1] * C14562) / C14561;
    const double C1995 = C14661 * C14636 * C14569;
    const double C14578 = C14575 * C14576;
    const double C14583 = C14571 * C14575;
    const double C14642 = C14575 * C14641;
    const double C14667 = C14575 * C14666;
    const double C130 = (ae * C14567 * C14565 * C14636 * ae +
                         C14566 * C14575 * C14571 * C14566 * C14636 * C14573) /
                        C13915;
    const double C163 = (ae * C14567 * C14565 * C14661 * ae +
                         C14566 * C14575 * C14571 * C14566 * C14661 * C14573) /
                        C13915;
    const double C190 = (ae * C14567 * C14565 * C14639 +
                         C14566 * C14575 * C14571 * C14636 * C14566 * C14573) /
                        C13915;
    const double C218 =
        (C14566 * (C14569 + std::pow(C14636, 2) * C14571 * C14575) * C14573) /
        C13915;
    const double C250 =
        (C14566 * C14575 * C14571 * C14636 * C14661 * C14573) / C13915;
    const double C251 =
        (C14575 * C14571 * C14715 + C14585 * C14584 * C14715 * C14570) / C13915;
    const double C277 = (ae * C14567 * C14565 * C14664 +
                         C14566 * C14575 * C14571 * C14661 * C14566 * C14573) /
                        C13915;
    const double C304 =
        (C14566 * C14575 * C14571 * C14661 * C14636 * C14573) / C13915;
    const double C305 =
        (C14575 * C14571 * C14739 + C14585 * C14584 * C14739 * C14570) / C13915;
    const double C332 =
        (C14566 * (C14569 + std::pow(C14661, 2) * C14571 * C14575) * C14573) /
        C13915;
    const double C403 =
        (C14636 * (C14569 + C14570 * C14571 * C14575) * C14573) / C13915;
    const double C465 =
        (ae * C14567 * C14565 * C14574 + C14636 * C14575 * C14571 * C14640) /
        C13915;
    const double C515 = (C14636 * C14575 * C14571 * C14665) / C13915;
    const double C559 =
        (ae * C14567 * C14565 * C14574 + C14636 * C14575 * C14571 * C14688) /
        C13915;
    const double C606 =
        (2 * ae * C14567 * C14565 * C14639 +
         C14636 * (C14569 + C14700 * C14571 * C14575) * C14573) /
        C13915;
    const double C659 =
        (ae * C14567 * C14565 * C14664 + C14636 * C14575 * C14571 * C14715) /
        C13915;
    const double C703 = (C14636 * C14575 * C14571 * C14726) / C13915;
    const double C747 =
        (ae * C14567 * C14565 * C14664 + C14636 * C14575 * C14571 * C14739) /
        C13915;
    const double C791 =
        (C14636 * (C14569 + C14749 * C14571 * C14575) * C14573) / C13915;
    const double C856 =
        (C14661 * (C14569 + C14570 * C14571 * C14575) * C14573) / C13915;
    const double C912 = (C14661 * C14575 * C14571 * C14640) / C13915;
    const double C965 =
        (ae * C14567 * C14565 * C14574 + C14661 * C14575 * C14571 * C14665) /
        C13915;
    const double C1009 = (C14661 * C14575 * C14571 * C14688) / C13915;
    const double C1053 =
        (C14661 * (C14569 + C14700 * C14571 * C14575) * C14573) / C13915;
    const double C1103 =
        (ae * C14567 * C14565 * C14639 + C14661 * C14575 * C14571 * C14715) /
        C13915;
    const double C1147 =
        (ae * C14567 * C14565 * C14574 + C14661 * C14575 * C14571 * C14726) /
        C13915;
    const double C1191 =
        (ae * C14567 * C14565 * C14639 + C14661 * C14575 * C14571 * C14739) /
        C13915;
    const double C1238 =
        (2 * ae * C14567 * C14565 * C14664 +
         C14661 * (C14569 + C14749 * C14571 * C14575) * C14573) /
        C13915;
    const double C14615 = C14606 * C14610;
    const double C14614 = C14609 * C14606;
    const double C14654 = C14606 * C14652;
    const double C14653 = C14606 * C14651;
    const double C14679 = C14606 * C14677;
    const double C14678 = C14606 * C14676;
    const double C14694 = C14606 * C14693;
    const double C14708 = C14707 * C14606;
    const double C14721 = C14606 * C14720;
    const double C14732 = C14606 * C14731;
    const double C14745 = C14606 * C14744;
    const double C14757 = C14756 * C14606;
    const double C14594 = C14566 * C14591;
    const double C14603 = ae * C14591;
    const double C14957 = C14636 * C14591;
    const double C15110 = C14661 * C14591;
    const double C14613 = C14604 * C14570;
    const double C14612 = C14566 * C14604;
    const double C14611 = C14604 * ae;
    const double C14984 = C14604 * C14700;
    const double C14983 = C14636 * C14604;
    const double C15148 = C14604 * C14749;
    const double C15147 = C14661 * C14604;
    const double C14650 = ae * C14647;
    const double C14649 = C14566 * C14647;
    const double C14969 = C14636 * C14647;
    const double C15121 = C14661 * C14647;
    const double C14675 = ae * C14672;
    const double C14674 = C14566 * C14672;
    const double C15001 = C14636 * C14672;
    const double C15133 = C14661 * C14672;
    const double C915 = (C14575 * C14571 * C14640 + C14646 * C14749) / C13915;
    const double C1012 = (C14575 * C14571 * C14688 + C14691 * C14749) / C13915;
    const double C518 = (C14575 * C14571 * C14665 + C14671 * C14700) / C13915;
    const double C252 =
        (2 * C14566 * C14718 +
         C14566 * (C14718 + C14606 * C14605 * C14715 * C14570)) /
        C13915;
    const double C706 = (C14575 * C14571 * C14726 + C14729 * C14700) / C13915;
    const double C306 =
        (2 * C14566 * C14742 +
         C14566 * (C14742 + C14606 * C14605 * C14739 * C14570)) /
        C13915;
    const double C13955 = C13950 - C13937;
    const double C13954 = C13949 - C13933;
    const double C13931 = C13922 * C15365;
    const double C15367 = C15365 * C15360;
    const double C15366 = C15365 / C13916;
    const double C15375 = C15373 * C15365;
    const double C15671 = C15365 * C15361;
    const double C15708 = C15675 * C15365;
    const double C15702 = C15365 * C15668;
    const double C14067 = C14066 * C15407;
    const double C123 = -(2 * C13913 * (yA - yB) * C15407) / C13909;
    const double C216 =
        -((C15407 - (C14042 * 2 * C13913 * C14042 * C15407) / C13909) *
          C13923) /
        C13909;
    const double C15456 = C15407 / C13916;
    const double C15458 = C15407 * C15455;
    const double C15465 = C15373 * C15407;
    const double C15688 = C15407 * C15457;
    const double C15712 = C15675 * C15407;
    const double C15710 = C15407 * C15681;
    const double C14093 = C14092 * C15418;
    const double C156 = -(2 * C13913 * (zA - zB) * C15418) / C13909;
    const double C330 =
        -((C15418 - (C14045 * 2 * C13913 * C14045 * C15418) / C13909) *
          C13923) /
        C13909;
    const double C15496 = C15418 / C13916;
    const double C15498 = C15418 * C15495;
    const double C15505 = C15373 * C15418;
    const double C15695 = C15418 * C15497;
    const double C15715 = C15675 * C15418;
    const double C15713 = C15418 * C15683;
    const double C14209 = C14205 - C14191;
    const double C14359 = C14355 - C14341;
    const double C14212 = C14208 - C14190;
    const double C14362 = C14358 - C14340;
    const double C14579 = C14566 * C14578;
    const double C466 = (C14575 * C14571 * C14640 + ae * C14636 * C14578 +
                         C14636 * (ae * C14578 + C14636 * C14646)) /
                        C13915;
    const double C562 = (C14575 * C14571 * C14688 + ae * C14636 * C14578 +
                         C14636 * (ae * C14578 + C14636 * C14691)) /
                        C13915;
    const double C966 = (C14575 * C14571 * C14665 + ae * C14661 * C14578 +
                         C14661 * (ae * C14578 + C14661 * C14671)) /
                        C13915;
    const double C1150 = (C14575 * C14571 * C14726 + ae * C14661 * C14578 +
                          C14661 * (ae * C14578 + C14661 * C14729)) /
                         C13915;
    const double C2060 = (C14661 * (ae * C14578 + C14636 * C14646)) / C13915;
    const double C2116 =
        (ae * C14636 * C14578 + C14661 * C14636 * C14671) / C13915;
    const double C2169 =
        (ae * C14661 * C14578 + C14636 * C14661 * C14691) / C13915;
    const double C2334 =
        (ae * C14636 * C14578 + C14661 * C14636 * C14729) / C13915;
    const double C400 = (C14567 * C14565 * C14574 + C14578 * C14700) / C13909;
    const double C853 = (C14567 * C14565 * C14574 + C14578 * C14749) / C13909;
    const double C1998 = (C14661 * C14636 * C14578) / C13909;
    const double C2859 =
        (2 * C14636 * C14578 + C14636 * (C14578 + C14591 * C14700)) / C13909;
    const double C3123 = (C14661 * (C14578 + C14591 * C14700)) / C13909;
    const double C5385 =
        (2 * C14661 * C14578 + C14661 * (C14578 + C14591 * C14749)) / C13909;
    const double C14589 = C14566 * C14583;
    const double C14588 = C14583 * ae;
    const double C14593 = C14583 + C14590;
    const double C14704 = C14583 + C14703;
    const double C14753 = C14583 + C14752;
    const double C14970 = C14636 * C14583;
    const double C15134 = C14661 * C14583;
    const double C219 =
        ((C14569 + C14700 * C14571 * C14575) * C14573 +
         (C14583 + C14700 * C14584 * C14585) * C14573 * C14570) /
        C13915;
    const double C333 =
        ((C14569 + C14749 * C14571 * C14575) * C14573 +
         (C14583 + C14749 * C14584 * C14585) * C14573 * C14570) /
        C13915;
    const double C84 =
        2 * C14566 * C14569 + C14566 * (C14569 + C14583 * C14570);
    const double C393 = C14636 * (C14569 + C14583 * C14570);
    const double C846 = C14661 * (C14569 + C14583 * C14570);
    const double C2857 =
        2 * C14636 * C14569 + C14636 * (C14569 + C14583 * C14700);
    const double C3120 = C14661 * (C14569 + C14583 * C14700);
    const double C5383 =
        2 * C14661 * C14569 + C14661 * (C14569 + C14583 * C14749);
    const double C14791 = C14636 * C14642;
    const double C131 =
        (C14575 * C14571 * C14640 + ae * C14566 * C14642 +
         C14566 * (ae * C14642 + C14566 * C14585 * C14584 * C14640)) /
        C13915;
    const double C132 =
        (2 * (ae * C14642 + C14566 * C14646) + ae * (C14642 + C14647 * C14570) +
         C14566 *
             (C14646 + ae * C14566 * C14647 +
              C14566 * (ae * C14647 + C14566 * C14606 * C14605 * C14640))) /
        C13915;
    const double C191 =
        (C14575 * C14571 * C14688 + ae * C14566 * C14642 +
         C14566 * (ae * C14642 + C14566 * C14585 * C14584 * C14688)) /
        C13915;
    const double C913 = (C14661 * (ae * C14642 + C14566 * C14646)) / C13915;
    const double C1010 = (C14661 * (ae * C14642 + C14566 * C14691)) / C13915;
    const double C1104 = (C14575 * C14571 * C14715 + ae * C14661 * C14642 +
                          C14661 * (ae * C14642 + C14661 * C14718)) /
                         C13915;
    const double C1105 =
        (ae * C14566 * C14642 + C14661 * C14566 * C14718) / C13915;
    const double C1192 = (C14575 * C14571 * C14739 + ae * C14661 * C14642 +
                          C14661 * (ae * C14642 + C14661 * C14742)) /
                         C13915;
    const double C1193 =
        (ae * C14566 * C14642 + C14661 * C14566 * C14742) / C13915;
    const double C126 = (C14567 * C14565 * C14639 + C14642 * C14570) / C13909;
    const double C127 =
        (2 * C14566 * C14642 + C14566 * (C14642 + C14647 * C14570)) / C13909;
    const double C461 =
        (C14636 * C14566 * C14642 + C14566 * C14569 * ae) / C13909;
    const double C463 = (C14636 * (C14642 + C14647 * C14570) +
                         (C14569 + C14583 * C14570) * ae) /
                        C13909;
    const double C907 = (C14661 * C14566 * C14642) / C13909;
    const double C908 = (C14661 * (C14642 + C14647 * C14570)) / C13909;
    const double C909 = (C14567 * C14565 * C14639 + C14642 * C14749) / C13909;
    const double C5413 =
        (2 * C14661 * C14642 + C14661 * (C14642 + C14647 * C14749)) / C13909;
    const double C14883 = C14661 * C14667;
    const double C164 =
        (C14575 * C14571 * C14665 + ae * C14566 * C14667 +
         C14566 * (ae * C14667 + C14566 * C14585 * C14584 * C14665)) /
        C13915;
    const double C165 =
        (2 * (ae * C14667 + C14566 * C14671) + ae * (C14667 + C14672 * C14570) +
         C14566 *
             (C14671 + ae * C14566 * C14672 +
              C14566 * (ae * C14672 + C14566 * C14606 * C14605 * C14665))) /
        C13915;
    const double C278 =
        (C14575 * C14571 * C14726 + ae * C14566 * C14667 +
         C14566 * (ae * C14667 + C14566 * C14585 * C14584 * C14726)) /
        C13915;
    const double C516 = (C14636 * (ae * C14667 + C14566 * C14671)) / C13915;
    const double C660 = (C14575 * C14571 * C14715 + ae * C14636 * C14667 +
                         C14636 * (ae * C14667 + C14636 * C14718)) /
                        C13915;
    const double C661 =
        (ae * C14566 * C14667 + C14636 * C14566 * C14718) / C13915;
    const double C704 = (C14636 * (ae * C14667 + C14566 * C14729)) / C13915;
    const double C748 = (C14575 * C14571 * C14739 + ae * C14636 * C14667 +
                         C14636 * (ae * C14667 + C14636 * C14742)) /
                        C13915;
    const double C749 =
        (ae * C14566 * C14667 + C14636 * C14566 * C14742) / C13915;
    const double C159 = (C14567 * C14565 * C14664 + C14667 * C14570) / C13909;
    const double C160 =
        (2 * C14566 * C14667 + C14566 * (C14667 + C14672 * C14570)) / C13909;
    const double C510 = (C14636 * C14566 * C14667) / C13909;
    const double C511 = (C14636 * (C14667 + C14672 * C14570)) / C13909;
    const double C512 = (C14567 * C14565 * C14664 + C14667 * C14700) / C13909;
    const double C961 =
        (C14661 * C14566 * C14667 + C14566 * C14569 * ae) / C13909;
    const double C963 = (C14661 * (C14667 + C14672 * C14570) +
                         (C14569 + C14583 * C14570) * ae) /
                        C13909;
    const double C2113 =
        (C14661 * C14636 * C14667 + C14636 * C14569 * ae) / C13909;
    const double C2921 =
        (2 * C14636 * C14667 + C14636 * (C14667 + C14672 * C14700)) / C13909;
    const double C3217 = (C14661 * (C14667 + C14672 * C14700) +
                          (C14569 + C14583 * C14700) * ae) /
                         C13909;
    const double C14619 = C14566 * C14615;
    const double C14959 = C14615 * C14700;
    const double C15112 = C14615 * C14749;
    const double C15198 = C14636 * C14615;
    const double C14618 = C14604 + C14614;
    const double C14656 = C14654 * C14570;
    const double C14982 = C14636 * C14654;
    const double C15058 = C14566 * C14654;
    const double C15122 = C14654 * C14749;
    const double C14655 = C14566 * C14653;
    const double C14958 = C14636 * C14653;
    const double C5415 =
        (2 * C14661 * C14646 + C14661 * (C14646 + C14653 * C14749)) / C13915;
    const double C5416 =
        (3 * (C14646 + C14653 * C14749) +
         C14661 * (2 * C14661 * C14653 +
                   C14661 * (C14653 +
                             std::pow(C14564, 6) * bs[6] * C14640 * C14749))) /
        C13915;
    const double C14681 = C14679 * C14570;
    const double C15003 = C14679 * C14700;
    const double C15070 = C14566 * C14679;
    const double C15146 = C14661 * C14679;
    const double C15207 = C14636 * C14679;
    const double C14680 = C14566 * C14678;
    const double C15111 = C14661 * C14678;
    const double C15197 = C14636 * C14678;
    const double C2923 =
        (2 * C14636 * C14671 + C14636 * (C14671 + C14678 * C14700)) / C13915;
    const double C2924 =
        (3 * (C14671 + C14678 * C14700) +
         C14636 * (2 * C14636 * C14678 +
                   C14636 * (C14678 +
                             std::pow(C14564, 6) * bs[6] * C14665 * C14700))) /
        C13915;
    const double C3220 = (ae * (C14578 + C14591 * C14700) +
                          C14661 * (C14671 + C14678 * C14700)) /
                         C13915;
    const double C14695 = C14566 * C14694;
    const double C14966 = C14636 * C14694;
    const double C15091 = C14661 * C14694;
    const double C3261 = (ae * (C14578 + C14591 * C14749) +
                          C14636 * (C14691 + C14694 * C14749)) /
                         C13915;
    const double C5470 =
        (2 * C14661 * C14691 + C14661 * (C14691 + C14694 * C14749)) / C13915;
    const double C14709 = C14604 + C14708;
    const double C15002 = C14636 * C14721;
    const double C15069 = C14566 * C14721;
    const double C15099 = C14661 * C14721;
    const double C253 =
        (3 * (C14718 + C14721 * C14570) +
         C14566 * (2 * C14566 * C14721 +
                   C14566 * (C14721 +
                             std::pow(C14564, 6) * bs[6] * C14715 * C14570))) /
        C13915;
    const double C663 = (ae * (C14667 + C14672 * C14570) +
                         C14636 * (C14718 + C14721 * C14570)) /
                        C13915;
    const double C1107 = (ae * (C14642 + C14647 * C14570) +
                          C14661 * (C14718 + C14721 * C14570)) /
                         C13915;
    const double C14733 = C14566 * C14732;
    const double C15126 = C14661 * C14732;
    const double C15203 = C14636 * C14732;
    const double C3029 =
        (2 * C14636 * C14729 + C14636 * (C14729 + C14732 * C14700)) / C13915;
    const double C3030 =
        (3 * (C14729 + C14732 * C14700) +
         C14636 * (2 * C14636 * C14732 +
                   C14636 * (C14732 +
                             std::pow(C14564, 6) * bs[6] * C14726 * C14700))) /
        C13915;
    const double C3390 = (ae * (C14578 + C14591 * C14700) +
                          C14661 * (C14729 + C14732 * C14700)) /
                         C13915;
    const double C15010 = C14636 * C14745;
    const double C15073 = C14566 * C14745;
    const double C15130 = C14661 * C14745;
    const double C307 =
        (3 * (C14742 + C14745 * C14570) +
         C14566 * (2 * C14566 * C14745 +
                   C14566 * (C14745 +
                             std::pow(C14564, 6) * bs[6] * C14739 * C14570))) /
        C13915;
    const double C751 = (ae * (C14667 + C14672 * C14570) +
                         C14636 * (C14742 + C14745 * C14570)) /
                        C13915;
    const double C1195 = (ae * (C14642 + C14647 * C14570) +
                          C14661 * (C14742 + C14745 * C14570)) /
                         C13915;
    const double C14758 = C14604 + C14757;
    const double C14608 = 2 * C14603;
    const double C2897 =
        (2 * (ae * C14578 + C14636 * C14646) + ae * (C14578 + C14591 * C14700) +
         C14636 * (C14646 + ae * C14636 * C14591 +
                   C14636 * (C14603 + C14636 * C14653))) /
        C13915;
    const double C5446 =
        (2 * (ae * C14578 + C14661 * C14671) + ae * (C14578 + C14591 * C14749) +
         C14661 * (C14671 + ae * C14661 * C14591 +
                   C14661 * (C14603 + C14661 * C14678))) /
        C13915;
    const double C2947 =
        (2 * (ae * C14578 + C14636 * C14691) + ae * (C14578 + C14591 * C14700) +
         C14636 *
             (C14691 + ae * C14957 + C14636 * (C14603 + C14636 * C14694))) /
        C13915;
    const double C3219 = (C14636 * C14671 + ae * C14661 * C14957 +
                          C14661 * (ae * C14957 + C14661 * C14636 * C14678)) /
                         C13915;
    const double C3260 =
        (C14661 * C14691 + ae * C14661 * C14957 +
         C14636 * (ae * C14661 * C14591 + C14636 * C14661 * C14694)) /
        C13915;
    const double C3262 =
        (C14691 + C14694 * C14749 + ae * (C14957 + C14636 * C14615 * C14749) +
         C14636 * (ae * (C14591 + C14615 * C14749) +
                   C14636 * (C14694 +
                             std::pow(C14564, 6) * bs[6] * C14688 * C14749))) /
        C13915;
    const double C3389 = (C14636 * C14729 + ae * C14661 * C14957 +
                          C14661 * (ae * C14957 + C14661 * C14636 * C14732)) /
                         C13915;
    const double C3122 = (C14636 * C14578 + C14957 * C14749) / C13909;
    const double C5544 =
        (2 * (ae * C14578 + C14661 * C14729) + ae * (C14578 + C14591 * C14749) +
         C14661 *
             (C14729 + ae * C15110 + C14661 * (C14603 + C14661 * C14732))) /
        C13915;
    const double C14617 = C14583 + C14613;
    const double C14616 = C14612 * ae;
    const double C15059 = C14636 * C14612;
    const double C15186 = C14661 * C14612;
    const double C14988 = C14583 + C14984;
    const double C14987 = C14983 * ae;
    const double C15208 = C14661 * C14983;
    const double C15152 = C14583 + C15148;
    const double C15151 = C15147 * ae;
    const double C14979 = 2 * C14650;
    const double C14796 = C14636 * C14649;
    const double C192 =
        (2 * (ae * C14642 + C14566 * C14691) + ae * (C14642 + C14647 * C14570) +
         C14566 * (C14691 + ae * C14649 +
                   C14566 * (C14650 + C14566 * C14606 * C14605 * C14688))) /
        C13915;
    const double C1106 = (C14566 * C14718 + ae * C14661 * C14649 +
                          C14661 * (ae * C14649 + C14661 * C14566 * C14721)) /
                         C13915;
    const double C1194 = (C14566 * C14742 + ae * C14661 * C14649 +
                          C14661 * (ae * C14649 + C14661 * C14566 * C14745)) /
                         C13915;
    const double C910 = (C14566 * C14642 + C14649 * C14749) / C13909;
    const double C5568 =
        (2 * (ae * C14642 + C14661 * C14742) + ae * (C14642 + C14647 * C14749) +
         C14661 *
             (C14742 + ae * C15121 + C14661 * (C14650 + C14661 * C14745))) /
        C13915;
    const double C15143 = 2 * C14675;
    const double C3005 =
        (2 * (ae * C14667 + C14636 * C14718) + ae * (C14667 + C14672 * C14700) +
         C14636 * (C14718 + ae * C14636 * C14672 +
                   C14636 * (C14675 + C14636 * C14721))) /
        C13915;
    const double C14888 = C14661 * C14674;
    const double C279 =
        (2 * (ae * C14667 + C14566 * C14729) + ae * (C14667 + C14672 * C14570) +
         C14566 * (C14729 + ae * C14674 +
                   C14566 * (C14675 + C14566 * C14606 * C14605 * C14726))) /
        C13915;
    const double C662 = (C14566 * C14718 + ae * C14636 * C14674 +
                         C14636 * (ae * C14674 + C14636 * C14566 * C14721)) /
                        C13915;
    const double C750 = (C14566 * C14742 + ae * C14636 * C14674 +
                         C14636 * (ae * C14674 + C14636 * C14566 * C14745)) /
                        C13915;
    const double C513 = (C14566 * C14667 + C14674 * C14700) / C13909;
    const double C15044 = C14661 * C15001;
    const double C3053 =
        (2 * (ae * C14667 + C14636 * C14742) + ae * (C14667 + C14672 * C14700) +
         C14636 *
             (C14742 + ae * C15001 + C14636 * (C14675 + C14636 * C14745))) /
        C13915;
    const double C13963 = C13955 / C13916;
    const double C13960 = C13910 * C13955;
    const double C13959 = 2 * C13955;
    const double C13958 = C13954 + C13919;
    const double C13942 = C13931 / C13915;
    const double C13940 = 2 * C13931;
    const double C13939 = -4 * C13931;
    const double C15368 = C15367 * C15361;
    const double C15374 = C15367 / C13928;
    const double C15672 = C15373 * C15367;
    const double C15670 = C15367 / C13909;
    const double C379 = (C15365 * std::pow(C15361, 2)) / C13915 + C15366;
    const double C15376 = C15375 * C15361;
    const double C15685 = C15375 / C14013;
    const double C15676 = C15360 * C15375;
    const double C15674 = 2 * C15375;
    const double C65 = C15375 / C15678;
    const double C7935 = C15375 / C13916;
    const double C15704 = C15671 / C13909;
    const double C380 = (-2 * C15373 * C15671) / C13909;
    const double C15726 = C15702 / C13915;
    const double C14075 = 2 * C14067;
    const double C14188 = C14067 / C13915;
    const double C14245 = -4 * C14067;
    const double C458 =
        ((0 * ae) / C13909 - C14067 / C13915) / C13916 + (0 * ae) / C13909;
    const double C1347 = (0 * ae) / C13909 - C14067 / C13915;
    const double C224 = C123 * C125;
    const double C223 = C123 * C124;
    const double C1060 = C123 * C906;
    const double C2490 = (C15407 * std::pow(C15457, 2)) / C13915 + C15456;
    const double C15459 = C15458 * C15457;
    const double C15464 = C15458 / C13928;
    const double C15686 = C15458 / C13909;
    const double C15682 = C15373 * C15458;
    const double C457 =
        (((C15407 - (C14042 * 2 * C14067) / C13909) * ae) / C13909 -
         C14065 / C13928) /
            C13916 +
        ((C14042 * ((0 * ae) / C13909 - C14067 / C13915) + C15465) * ae) /
            C13909;
    const double C15466 = C15465 * C15457;
    const double C15694 = C15465 / C14013;
    const double C15692 = C15455 * C15465;
    const double C15691 = 2 * C15465;
    const double C2854 = C15465 / C15678;
    const double C7938 = C15465 / C13916;
    const double C15717 = C15688 / C13909;
    const double C2491 = (-2 * C15373 * C15688) / C13909;
    const double C15731 = C15710 / C13915;
    const double C14101 = 2 * C14093;
    const double C14338 = C14093 / C13915;
    const double C14395 = -4 * C14093;
    const double C958 =
        ((0 * ae) / C13909 - C14093 / C13915) / C13916 + (0 * ae) / C13909;
    const double C1721 = (0 * ae) / C13909 - C14093 / C13915;
    const double C338 = C156 * C158;
    const double C337 = C156 * C157;
    const double C798 = C156 * C509;
    const double C4674 = (C15418 * std::pow(C15497, 2)) / C13915 + C15496;
    const double C15499 = C15498 * C15497;
    const double C15504 = C15498 / C13928;
    const double C15687 = C15498 / C13909;
    const double C15684 = C15373 * C15498;
    const double C957 =
        (((C15418 - (C14045 * 2 * C14093) / C13909) * ae) / C13909 -
         C14091 / C13928) /
            C13916 +
        ((C14045 * ((0 * ae) / C13909 - C14093 / C13915) + C15505) * ae) /
            C13909;
    const double C15506 = C15505 * C15497;
    const double C15701 = C15505 / C14013;
    const double C15699 = C15495 * C15505;
    const double C15698 = 2 * C15505;
    const double C5382 = C15505 / C15678;
    const double C10794 = C15505 / C13916;
    const double C15722 = C15695 / C13909;
    const double C4675 = (-2 * C15373 * C15695) / C13909;
    const double C15733 = C15713 / C13915;
    const double C14214 = C14209 / C13916;
    const double C14213 = C14042 * C14209;
    const double C14244 = 2 * C14209;
    const double C14364 = C14359 / C13916;
    const double C14363 = C14045 * C14359;
    const double C14394 = 2 * C14359;
    const double C14217 = C14212 + C14183;
    const double C14367 = C14362 + C14333;
    const double C14580 = C14579 + C14577;
    const double C14592 = C14589 * ae;
    const double C2114 =
        (C14661 * C14636 * C14674 + C14636 * C14589 * ae) / C13909;
    const double C395 = C14566 * C14569 + C14589 * C14700;
    const double C848 = C14566 * C14569 + C14589 * C14749;
    const double C1996 = C14661 * C14636 * C14589;
    const double C3524 =
        2 * C14636 * C14589 + C14636 * (C14589 + C14612 * C14700);
    const double C3884 = C14661 * (C14589 + C14612 * C14700);
    const double C6116 =
        2 * C14661 * C14589 + C14661 * (C14589 + C14612 * C14749);
    const double C14596 = C14594 + C14588;
    const double C14971 = C14969 + C14588;
    const double C15135 = C15133 + C14588;
    const double C3348 = (ae * (C14667 + C14661 * (C14661 * C14672 + C14588) +
                                C14661 * C14583 * ae) +
                          C14636 * (C14718 + ae * C14661 * C14647 +
                                    C14661 * (C14650 + C14661 * C14721))) /
                         C13915;
    const double C14595 = C14593 * C14573;
    const double C14705 = C14704 * C14573;
    const double C14754 = C14753 * C14573;
    const double C14972 = C14970 * ae;
    const double C3119 = C14636 * C14569 + C14970 * C14749;
    const double C6454 =
        2 * C14661 * C14970 + C14661 * (C14970 + C14983 * C14749);
    const double C15136 = C15134 * ae;
    const double C14792 = C14791 + C14577;
    const double C225 = C123 * C126;
    const double C226 = C123 * C127;
    const double C1061 = C123 * C907;
    const double C1062 = C123 * C908;
    const double C1063 = C123 * C909;
    const double C5497 = C123 * C5413;
    const double C14884 = C14883 + C14577;
    const double C339 = C156 * C159;
    const double C340 = C156 * C160;
    const double C800 = C156 * C510;
    const double C802 = C156 * C511;
    const double C799 = C156 * C512;
    const double C3080 = C156 * C2921;
    const double C14622 = C14619 + C14611;
    const double C14961 = C14591 + C14959;
    const double C15114 = C14591 + C15112;
    const double C6455 =
        (2 * C14661 * C14957 + C14661 * (C14957 + C15198 * C14749)) / C13909;
    const double C14621 = C14618 * C14573;
    const double C14658 = C14647 + C14656;
    const double C14986 = C14982 + C14611;
    const double C15060 = C14636 * C15058;
    const double C6155 =
        (2 * C14661 * C14649 + C14661 * (C14649 + C15058 * C14749)) / C13909;
    const double C15123 = C14647 + C15122;
    const double C14657 = C14650 + C14655;
    const double C14960 = C14603 + C14958;
    const double C14683 = C14672 + C14681;
    const double C15005 = C14672 + C15003;
    const double C15172 = C14636 * C15070;
    const double C15185 = C14661 * C15070;
    const double C3609 =
        (2 * C14636 * C14674 + C14636 * (C14674 + C15070 * C14700)) / C13909;
    const double C3995 = (C14661 * (C14674 + C15070 * C14700) +
                          (C14589 + C14612 * C14700) * ae) /
                         C13909;
    const double C15150 = C15146 + C14611;
    const double C15209 = C14661 * C15207;
    const double C14682 = C14675 + C14680;
    const double C15113 = C14603 + C15111;
    const double C6529 =
        (2 * (ae * C14957 + C14661 * C15197) + ae * (C14957 + C15198 * C14749) +
         C14661 *
             (C15197 + ae * C14661 * C15198 +
              C14661 * (ae * C15198 + C14661 * C14636 * std::pow(C14564, 6) *
                                          bs[6] * C14665))) /
        C13915;
    const double C14696 = C14650 + C14695;
    const double C14967 = C14603 + C14966;
    const double C5471 =
        (3 * (C14691 + C14694 * C14749) +
         C14661 * (2 * C15091 + C14661 * (C14694 + std::pow(C14564, 6) * bs[6] *
                                                       C14688 * C14749))) /
        C13915;
    const double C14710 = C14709 * C14573;
    const double C15004 = C14675 + C15002;
    const double C3727 =
        (2 * (ae * C14674 + C14636 * C15069) + ae * (C14674 + C15070 * C14700) +
         C14636 *
             (C15069 + ae * C14636 * C15070 +
              C14636 * (ae * C15070 + C14636 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14715))) /
        C13915;
    const double C6302 =
        (2 * (ae * C14649 + C14661 * C15069) + ae * (C14649 + C15058 * C14749) +
         C14661 *
             (C15069 + ae * C14661 * C15058 +
              C14661 * (ae * C15058 + C14661 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14715))) /
        C13915;
    const double C15100 = C14650 + C15099;
    const double C14734 = C14675 + C14733;
    const double C15127 = C14603 + C15126;
    const double C6671 =
        (2 * (ae * C14957 + C14661 * C15203) + ae * (C14957 + C15198 * C14749) +
         C14661 *
             (C15203 + ae * C14661 * C15198 +
              C14661 * (ae * C15198 + C14661 * C14636 * std::pow(C14564, 6) *
                                          bs[6] * C14726))) /
        C13915;
    const double C15011 = C14675 + C15010;
    const double C3797 =
        (2 * (ae * C14674 + C14636 * C15073) + ae * (C14674 + C15070 * C14700) +
         C14636 *
             (C15073 + ae * C14636 * C15070 +
              C14636 * (ae * C15070 + C14636 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14739))) /
        C13915;
    const double C6372 =
        (2 * (ae * C14649 + C14661 * C15073) + ae * (C14649 + C15058 * C14749) +
         C14661 *
             (C15073 + ae * C14661 * C15058 +
              C14661 * (ae * C15058 + C14661 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14739))) /
        C13915;
    const double C15131 = C14650 + C15130;
    const double C14759 = C14758 * C14573;
    const double C14620 = C14617 * ae;
    const double C85 = 3 * (C14569 + C14583 * C14570) +
                       C14566 * (2 * C14589 + C14566 * C14617);
    const double C396 = C14569 + C14583 * C14570 + C14617 * C14700;
    const double C849 = C14569 + C14583 * C14570 + C14617 * C14749;
    const double C1301 = C14636 * (2 * C14589 + C14566 * C14617);
    const double C1643 = C14661 * (2 * C14589 + C14566 * C14617);
    const double C1997 = C14661 * C14636 * C14617;
    const double C5921 =
        (ae * (C14674 + C14661 * (C14661 * C15070 + C14616) +
               C14661 * C14612 * ae) +
         C14636 *
             (C15069 + ae * C14661 * C15058 +
              C14661 * (ae * C15058 + C14661 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14715))) /
        C13915;
    const double C15061 = C15059 * ae;
    const double C5654 = C14636 * C14589 + C15059 * C14749;
    const double C15188 = C15186 * ae;
    const double C14990 = C14988 * ae;
    const double C2858 = 3 * (C14569 + C14583 * C14700) +
                         C14636 * (2 * C14970 + C14636 * C14988);
    const double C3121 = C14569 + C14583 * C14700 + C14988 * C14749;
    const double C4344 = C14661 * (2 * C14970 + C14636 * C14988);
    const double C3350 =
        (C14718 + ae * C14661 * C14647 + C14661 * (C14650 + C14661 * C14721) +
         ae * (C15001 + C14661 * (C14661 * C14636 * C14679 + C14987) +
               C14661 * C14983 * ae) +
         C14636 *
             (ae * (C14672 + C14661 * (C14661 * C14679 + C14611) +
                    C14661 * C14604 * ae) +
              C14636 * (C14721 + ae * C14661 * C14654 +
                        C14661 * (ae * C14654 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14715)))) /
        C13915;
    const double C15210 = C15208 * ae;
    const double C15154 = C15152 * ae;
    const double C5384 = 3 * (C14569 + C14583 * C14749) +
                         C14661 * (2 * C15134 + C14661 * C15152);
    const double C1064 = C123 * C910;
    const double C801 = C156 * C513;
    const double C13967 = C13960 + 0;
    const double C13965 = C13944 + C13959;
    const double C13966 = C13958 / C13916;
    const double C13948 = C13924 - C13942;
    const double C13947 = C13910 * C13940;
    const double C390 =
        ((-C13940 / C13909) / C13916 - (0 * be) / C13909) / C13916 -
        (0 * be) / C13909;
    const double C2856 = -C13940 / C13909;
    const double C7129 = (-C13940 / C13909) / C13916 - (0 * be) / C13909;
    const double C13946 = C13939 / C13909;
    const double C15369 = C15368 / C13915;
    const double C15705 = 2 * C15672;
    const double C15377 = C15376 / C13909;
    const double C15709 = C15676 / C13928;
    const double C15727 = C15670 - C15704;
    const double C7120 = -C15704;
    const double C15741 = C15726 + C15366;
    const double C14076 = C14042 * C14075;
    const double C2548 =
        ((-C14075 / C13909) / C13916 - (0 * be) / C13909) / C13916 -
        (0 * be) / C13909;
    const double C6837 = (-C14075 / C13909) / C13916 - (0 * be) / C13909;
    const double C14198 = C14194 - C14188;
    const double C14253 = C14245 / C13909;
    const double C1464 = C1347 * C463;
    const double C1462 = C1347 * C461;
    const double C1460 = C1347 * C459;
    const double C15460 = C15459 / C13915;
    const double C456 =
        (((0 - (C14042 * C14065) / C13909) * ae) / C13909 - (0 * be) / C13928) /
            C13916 +
        ((C14042 * (((C15407 - (C14042 * 2 * C14067) / C13909) * ae) / C13909 -
                    C14065 / C13928) +
          C15686) *
         ae) /
            C13909 +
        (0 * ae) / C13909 - C14067 / C13915;
    const double C15711 = 2 * C15682;
    const double C620 = C457 * C463;
    const double C617 = C457 * C461;
    const double C614 = C457 * C459;
    const double C15467 = C15466 / C13909;
    const double C15720 = C15692 / C13928;
    const double C15735 = C15686 - C15717;
    const double C6784 = -C15717;
    const double C15744 = C15731 + C15456;
    const double C14102 = C14045 * C14101;
    const double C4761 =
        ((-C14101 / C13909) / C13916 - (0 * be) / C13909) / C13916 -
        (0 * be) / C13909;
    const double C9298 = (-C14101 / C13909) / C13916 - (0 * be) / C13909;
    const double C14348 = C14344 - C14338;
    const double C14403 = C14395 / C13909;
    const double C1943 = C1721 * C963;
    const double C1941 = C1721 * C961;
    const double C1939 = C1721 * C959;
    const double C2445 = C1721 * C2113;
    const double C4308 = C1721 * C3217;
    const double C15500 = C15499 / C13915;
    const double C956 =
        (((0 - (C14045 * C14091) / C13909) * ae) / C13909 - (0 * be) / C13928) /
            C13916 +
        ((C14045 * (((C15418 - (C14045 * 2 * C14093) / C13909) * ae) / C13909 -
                    C14091 / C13928) +
          C15687) *
         ae) /
            C13909 +
        (0 * ae) / C13909 - C14093 / C13915;
    const double C15714 = 2 * C15684;
    const double C1252 = C957 * C963;
    const double C1249 = C957 * C961;
    const double C1246 = C957 * C959;
    const double C3479 = C957 * C3217;
    const double C3476 = C957 * C2113;
    const double C15507 = C15506 / C13909;
    const double C15725 = C15699 / C13928;
    const double C15738 = C15687 - C15722;
    const double C9223 = -C15722;
    const double C15745 = C15733 + C15496;
    const double C14218 = C14213 + 0;
    const double C14263 = C14260 + C14244;
    const double C14368 = C14363 + 0;
    const double C14413 = C14410 + C14394;
    const double C14221 = C14217 / C13916;
    const double C14371 = C14367 / C13916;
    const double C14581 = ae * C14580;
    const double C88 =
        (C14567 * C14565 * C14574 + C14566 * C14580 + C14566 * C14569 * ae) /
        C13909;
    const double C398 = (C14636 * C14580) / C13909;
    const double C851 = (C14661 * C14580) / C13909;
    const double C14797 = C14796 + C14592;
    const double C14889 = C14888 + C14592;
    const double C2447 = C1721 * C2114;
    const double C7894 = C957 * C2114;
    const double C14598 = ae * C14596;
    const double C14597 = C14566 * C14596;
    const double C14607 = 2 * C14596;
    const double C14763 = C14636 * C14596;
    const double C14831 = C14661 * C14596;
    const double C401 = (C14580 + C14596 * C14700) / C13909;
    const double C854 = (C14580 + C14596 * C14749) / C13909;
    const double C14974 = ae * C14971;
    const double C14973 = C14636 * C14971;
    const double C14981 = 2 * C14971;
    const double C15027 = C14661 * C14971;
    const double C15138 = ae * C15135;
    const double C15137 = C14661 * C15135;
    const double C15145 = 2 * C15135;
    const double C404 =
        (2 * ae * C14636 * C14578 + C14566 * C14636 * C14595) / C13915;
    const double C406 =
        ((C14569 + C14570 * C14571 * C14575) * C14573 + C14595 * C14700) /
        C13915;
    const double C857 =
        (2 * ae * C14661 * C14578 + C14566 * C14661 * C14595) / C13915;
    const double C859 =
        ((C14569 + C14570 * C14571 * C14575) * C14573 + C14595 * C14749) /
        C13915;
    const double C2001 = (C14661 * C14636 * C14595) / C13915;
    const double C220 =
        (2 * C14566 * C14705 +
         C14566 *
             (C14705 + (C14604 + C14700 * C14605 * C14606) * C14573 * C14570)) /
        C13915;
    const double C608 =
        (2 * ae * C14566 * C14642 + C14636 * C14566 * C14705) / C13915;
    const double C1054 = (C14661 * C14566 * C14705) / C13915;
    const double C1056 =
        ((C14569 + C14700 * C14571 * C14575) * C14573 + C14705 * C14749) /
        C13915;
    const double C2222 =
        (2 * ae * C14661 * C14642 + C14636 * C14661 * C14705) / C13915;
    const double C334 =
        (2 * C14566 * C14754 +
         C14566 *
             (C14754 + (C14604 + C14749 * C14605 * C14606) * C14573 * C14570)) /
        C13915;
    const double C792 =
        ((C14569 + C14749 * C14571 * C14575) * C14573 + C14754 * C14700) /
        C13915;
    const double C793 = (C14636 * C14566 * C14754) / C13915;
    const double C1240 =
        (2 * ae * C14566 * C14667 + C14661 * C14566 * C14754) / C13915;
    const double C2440 =
        (2 * ae * C14636 * C14667 + C14661 * C14636 * C14754) / C13915;
    const double C15045 = C15044 + C14972;
    const double C3349 =
        (ae * C14642 + C14661 * C14718 + ae * (C14661 * C15001 + C14972) +
         C14636 * (ae * (C14661 * C14672 + C14588) +
                   C14636 * (C14650 + C14661 * C14721))) /
        C13915;
    const double C14793 = ae * C14792;
    const double C460 =
        (C14567 * C14565 * C14639 + C14636 * C14792 + C14636 * C14569 * ae) /
        C13909;
    const double C2057 = (C14661 * C14792) / C13909;
    const double C3173 = (C14792 + C14971 * C14749) / C13909;
    const double C14885 = ae * C14884;
    const double C960 =
        (C14567 * C14565 * C14664 + C14661 * C14884 + C14661 * C14569 * ae) /
        C13909;
    const double C14625 = ae * C14622;
    const double C14624 = C14566 * C14622;
    const double C14768 = C14622 * C14700;
    const double C14836 = C14622 * C14749;
    const double C14899 = C14636 * C14622;
    const double C14913 = C14661 * C14622;
    const double C3221 =
        (C14671 + C14678 * C14700 + ae * C14661 * C14961 +
         C14661 *
             (ae * C14961 + C14661 * (C14678 + std::pow(C14564, 6) * bs[6] *
                                                   C14665 * C14700))) /
        C13915;
    const double C3391 =
        (C14729 + C14732 * C14700 + ae * C14661 * C14961 +
         C14661 *
             (ae * C14961 + C14661 * (C14732 + std::pow(C14564, 6) * bs[6] *
                                                   C14726 * C14700))) /
        C13915;
    const double C4419 =
        (ae * (2 * C14957 + C14636 * C14961) +
         C14661 * (2 * C14636 * C14678 +
                   C14636 * (C14678 +
                             std::pow(C14564, 6) * bs[6] * C14665 * C14700))) /
        C13915;
    const double C4454 =
        (2 * (ae * C14661 * C14591 + C14636 * C15091) + ae * C14661 * C14961 +
         C14636 * (C15091 + ae * C14661 * C14636 * C14615 +
                   C14636 * (ae * C14661 * C14615 + C14636 * C14661 *
                                                        std::pow(C14564, 6) *
                                                        bs[6] * C14688))) /
        C13915;
    const double C4563 =
        (ae * (2 * C14957 + C14636 * C14961) +
         C14661 * (2 * C14636 * C14732 +
                   C14636 * (C14732 +
                             std::pow(C14564, 6) * bs[6] * C14726 * C14700))) /
        C13915;
    const double C2860 = (3 * (C14578 + C14591 * C14700) +
                          C14636 * (2 * C14957 + C14636 * C14961)) /
                         C13909;
    const double C3124 = (C14578 + C14591 * C14700 + C14961 * C14749) / C13909;
    const double C4345 = (C14661 * (2 * C14957 + C14636 * C14961)) / C13909;
    const double C6564 =
        (ae * (2 * C15110 + C14661 * C15114) +
         C14636 * (2 * C15091 + C14661 * (C14694 + std::pow(C14564, 6) * bs[6] *
                                                       C14688 * C14749))) /
        C13915;
    const double C5386 = (3 * (C14578 + C14591 * C14749) +
                          C14661 * (2 * C15110 + C14661 * C15114)) /
                         C13909;
    const double C14623 = C14566 * C14621;
    const double C14897 = C14636 * C14621;
    const double C14911 = C14661 * C14621;
    const double C407 = (2 * ae * (C14578 + C14591 * C14700) +
                         C14566 * (C14595 + C14621 * C14700)) /
                        C13915;
    const double C860 = (2 * ae * (C14578 + C14591 * C14749) +
                         C14566 * (C14595 + C14621 * C14749)) /
                        C13915;
    const double C2861 =
        (2 * C14636 * C14595 + C14636 * (C14595 + C14621 * C14700)) / C13915;
    const double C3126 = (C14661 * (C14595 + C14621 * C14700)) / C13915;
    const double C3127 =
        (C14595 + C14621 * C14700 +
         (C14621 + (C14605 * C14606 + C14570 * bs[6] * std::pow(C14564, 6)) *
                       C14573 * C14700) *
             C14749) /
        C13915;
    const double C3886 = (2 * ae * C14661 * C14961 +
                          C14566 * C14661 *
                              (C14621 + (C14605 * C14606 +
                                         C14570 * bs[6] * std::pow(C14564, 6)) *
                                            C14573 * C14700)) /
                         C13915;
    const double C5387 =
        (2 * C14661 * C14595 + C14661 * (C14595 + C14621 * C14749)) / C13915;
    const double C14801 = C14636 * C14658;
    const double C1108 =
        (C14718 + C14721 * C14570 + ae * C14661 * C14658 +
         C14661 *
             (ae * C14658 + C14661 * (C14721 + std::pow(C14564, 6) * bs[6] *
                                                   C14715 * C14570))) /
        C13915;
    const double C1196 =
        (C14742 + C14745 * C14570 + ae * C14661 * C14658 +
         C14661 *
             (ae * C14658 + C14661 * (C14745 + std::pow(C14564, 6) * bs[6] *
                                                   C14739 * C14570))) /
        C13915;
    const double C1829 =
        (ae * (2 * C14649 + C14566 * C14658) +
         C14661 * (2 * C14566 * C14721 +
                   C14566 * (C14721 +
                             std::pow(C14564, 6) * bs[6] * C14715 * C14570))) /
        C13915;
    const double C1899 =
        (ae * (2 * C14649 + C14566 * C14658) +
         C14661 * (2 * C14566 * C14745 +
                   C14566 * (C14745 +
                             std::pow(C14564, 6) * bs[6] * C14739 * C14570))) /
        C13915;
    const double C128 = (3 * (C14642 + C14647 * C14570) +
                         C14566 * (2 * C14649 + C14566 * C14658)) /
                        C13909;
    const double C911 = (C14642 + C14647 * C14570 + C14658 * C14749) / C13909;
    const double C1348 = (C14636 * (2 * C14649 + C14566 * C14658) +
                          (2 * C14589 + C14566 * C14617) * ae) /
                         C13909;
    const double C1684 = (C14661 * (2 * C14649 + C14566 * C14658)) / C13909;
    const double C14991 = ae * C14986;
    const double C14989 = C14636 * C14986;
    const double C15031 = C14986 * C14749;
    const double C15095 = C14661 * C14986;
    const double C15062 = C15060 + C14616;
    const double C6268 = C123 * C6155;
    const double C5414 = (3 * (C14642 + C14647 * C14749) +
                          C14661 * (2 * C15121 + C14661 * C15123)) /
                         C13909;
    const double C133 =
        (3 * (C14646 + ae * C14649 + C14566 * C14657) +
         ae * (2 * C14649 + C14566 * C14658) +
         C14566 *
             (2 * C14657 + ae * C14658 +
              C14566 * (C14653 + ae * C14566 * C14654 +
                        C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C914 =
        (C14661 * (C14646 + ae * C14649 + C14566 * C14657)) / C13915;
    const double C916 =
        (ae * C14642 + C14566 * C14646 + C14657 * C14749) / C13915;
    const double C917 = (C14646 + ae * C14649 + C14566 * C14657 +
                         (C14653 + ae * C14566 * C14654 +
                          C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                      bs[6] * C14640)) *
                             C14749) /
                        C13915;
    const double C1685 =
        (C14661 *
         (2 * C14657 + ae * C14658 +
          C14566 * (C14653 + ae * C14566 * C14654 +
                    C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                bs[6] * C14640)))) /
        C13915;
    const double C6156 =
        (2 * C14661 * C14657 +
         C14661 * (C14657 + (ae * C14654 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14640) *
                                C14749)) /
        C13915;
    const double C2898 =
        (3 * (C14646 + ae * C14957 + C14636 * C14960) +
         ae * (2 * C14957 + C14636 * C14961) +
         C14636 *
             (2 * C14960 + ae * C14961 +
              C14636 * (C14653 + ae * C14636 * C14615 +
                        C14636 * (ae * C14615 + C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C3175 =
        (C14661 * (C14646 + ae * C14957 + C14636 * C14960)) / C13915;
    const double C3176 =
        (ae * C14578 + C14636 * C14646 + C14960 * C14749) / C13915;
    const double C3177 =
        (C14646 + ae * C14957 + C14636 * C14960 +
         (C14653 + ae * C14636 * C14615 +
          C14636 *
              (ae * C14615 + C14636 * std::pow(C14564, 6) * bs[6] * C14640)) *
             C14749) /
        C13915;
    const double C4383 =
        (C14661 *
         (2 * C14960 + ae * C14961 +
          C14636 * (C14653 + ae * C14636 * C14615 +
                    C14636 * (ae * C14615 + C14636 * std::pow(C14564, 6) *
                                                bs[6] * C14640)))) /
        C13915;
    const double C6493 =
        (2 * C14661 * C14960 +
         C14661 * (C14960 + (ae * C14615 +
                             C14636 * std::pow(C14564, 6) * bs[6] * C14640) *
                                C14749)) /
        C13915;
    const double C14893 = C14661 * C14683;
    const double C664 =
        (C14718 + C14721 * C14570 + ae * C14636 * C14683 +
         C14636 *
             (ae * C14683 + C14636 * (C14721 + std::pow(C14564, 6) * bs[6] *
                                                   C14715 * C14570))) /
        C13915;
    const double C752 =
        (C14742 + C14745 * C14570 + ae * C14636 * C14683 +
         C14636 *
             (ae * C14683 + C14636 * (C14745 + std::pow(C14564, 6) * bs[6] *
                                                   C14739 * C14570))) /
        C13915;
    const double C1500 =
        (ae * (2 * C14674 + C14566 * C14683) +
         C14636 * (2 * C14566 * C14721 +
                   C14566 * (C14721 +
                             std::pow(C14564, 6) * bs[6] * C14715 * C14570))) /
        C13915;
    const double C1570 =
        (ae * (2 * C14674 + C14566 * C14683) +
         C14636 * (2 * C14566 * C14745 +
                   C14566 * (C14745 +
                             std::pow(C14564, 6) * bs[6] * C14739 * C14570))) /
        C13915;
    const double C161 = (3 * (C14667 + C14672 * C14570) +
                         C14566 * (2 * C14674 + C14566 * C14683)) /
                        C13909;
    const double C514 = (C14667 + C14672 * C14570 + C14683 * C14700) / C13909;
    const double C1384 = (C14636 * (2 * C14674 + C14566 * C14683)) / C13909;
    const double C1722 = (C14661 * (2 * C14674 + C14566 * C14683) +
                          (2 * C14589 + C14566 * C14617) * ae) /
                         C13909;
    const double C2115 =
        (C14661 * C14636 * C14683 + C14636 * C14617 * ae) / C13909;
    const double C15049 = C14661 * C15005;
    const double C2922 = (3 * (C14667 + C14672 * C14700) +
                          C14636 * (2 * C15001 + C14636 * C15005)) /
                         C13909;
    const double C4418 = (C14661 * (2 * C15001 + C14636 * C15005) +
                          (2 * C14970 + C14636 * C14988) * ae) /
                         C13909;
    const double C15173 = C14661 * C15172;
    const double C15187 = C15185 + C14616;
    const double C3834 = C156 * C3609;
    const double C4310 = C1721 * C3995;
    const double C15155 = ae * C15150;
    const double C15153 = C14661 * C15150;
    const double C15211 = C15209 + C14987;
    const double C166 =
        (3 * (C14671 + ae * C14674 + C14566 * C14682) +
         ae * (2 * C14674 + C14566 * C14683) +
         C14566 *
             (2 * C14682 + ae * C14683 +
              C14566 * (C14678 + ae * C14566 * C14679 +
                        C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14665)))) /
        C13915;
    const double C517 =
        (C14636 * (C14671 + ae * C14674 + C14566 * C14682)) / C13915;
    const double C519 =
        (ae * C14667 + C14566 * C14671 + C14682 * C14700) / C13915;
    const double C520 = (C14671 + ae * C14674 + C14566 * C14682 +
                         (C14678 + ae * C14566 * C14679 +
                          C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                      bs[6] * C14665)) *
                             C14700) /
                        C13915;
    const double C1385 =
        (C14636 *
         (2 * C14682 + ae * C14683 +
          C14566 * (C14678 + ae * C14566 * C14679 +
                    C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                bs[6] * C14665)))) /
        C13915;
    const double C3610 =
        (2 * C14636 * C14682 +
         C14636 * (C14682 + (ae * C14679 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14665) *
                                C14700)) /
        C13915;
    const double C5447 =
        (3 * (C14671 + ae * C15110 + C14661 * C15113) +
         ae * (2 * C15110 + C14661 * C15114) +
         C14661 *
             (2 * C15113 + ae * C15114 +
              C14661 * (C14678 + ae * C14661 * C14615 +
                        C14661 * (ae * C14615 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14665)))) /
        C13915;
    const double C193 =
        (3 * (C14691 + ae * C14649 + C14566 * C14696) +
         ae * (2 * C14649 + C14566 * C14658) +
         C14566 *
             (2 * C14696 + ae * C14658 +
              C14566 * (C14694 + ae * C14566 * C14654 +
                        C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14688)))) /
        C13915;
    const double C1011 =
        (C14661 * (C14691 + ae * C14649 + C14566 * C14696)) / C13915;
    const double C1013 =
        (ae * C14642 + C14566 * C14691 + C14696 * C14749) / C13915;
    const double C1014 =
        (C14691 + ae * C14649 + C14566 * C14696 +
         (C14694 + ae * C14566 * C14654 +
          C14566 *
              (ae * C14654 + C14566 * std::pow(C14564, 6) * bs[6] * C14688)) *
             C14749) /
        C13915;
    const double C1758 =
        (C14661 *
         (2 * C14696 + ae * C14658 +
          C14566 * (C14694 + ae * C14566 * C14654 +
                    C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                bs[6] * C14688)))) /
        C13915;
    const double C6231 =
        (2 * C14661 * C14696 +
         C14661 * (C14696 + (ae * C14654 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14688) *
                                C14749)) /
        C13915;
    const double C2948 =
        (3 * (C14691 + ae * C14957 + C14636 * C14967) +
         ae * (2 * C14957 + C14636 * C14961) +
         C14636 *
             (2 * C14967 + ae * C14961 +
              C14636 * (C14694 + ae * C14636 * C14615 +
                        C14636 * (ae * C14615 + C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14688)))) /
        C13915;
    const double C14980 = C14636 * C14710;
    const double C15057 = C14566 * C14710;
    const double C15093 = C14661 * C14710;
    const double C221 =
        (3 * (C14705 + C14710 * C14570) +
         C14566 * (2 * C14566 * C14710 +
                   C14566 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C610 = (2 * ae * (C14642 + C14647 * C14570) +
                         C14636 * (C14705 + C14710 * C14570)) /
                        C13915;
    const double C1055 = (C14661 * (C14705 + C14710 * C14570)) / C13915;
    const double C1057 = (C14566 * C14705 + C14566 * C14710 * C14749) / C13915;
    const double C1058 =
        (C14705 + C14710 * C14570 +
         (C14710 + (C14605 * C14606 + C14700 * bs[6] * std::pow(C14564, 6)) *
                       C14573 * C14570) *
             C14749) /
        C13915;
    const double C1457 =
        (2 * ae * (2 * C14649 + C14566 * C14658) +
         C14636 * (2 * C14566 * C14710 +
                   C14566 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C1793 =
        (C14661 * (2 * C14566 * C14710 +
                   C14566 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C2223 =
        (2 * ae * C14661 * C14649 + C14636 * C14661 * C14566 * C14710) / C13915;
    const double C2224 = (2 * ae * C14661 * C14658 +
                          C14636 * C14661 *
                              (C14710 + (C14605 * C14606 +
                                         C14700 * bs[6] * std::pow(C14564, 6)) *
                                            C14573 * C14570)) /
                         C13915;
    const double C3302 = (2 * ae * (C14642 + C14647 * C14749) +
                          C14636 * (C14705 + C14710 * C14749)) /
                         C13915;
    const double C5494 =
        (2 * C14661 * C14705 + C14661 * (C14705 + C14710 * C14749)) / C13915;
    const double C3006 =
        (3 * (C14718 + ae * C15001 + C14636 * C15004) +
         ae * (2 * C15001 + C14636 * C15005) +
         C14636 *
             (2 * C15004 + ae * C15005 +
              C14636 * (C14721 + ae * C14636 * C14679 +
                        C14636 * (ae * C14679 + C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14715)))) /
        C13915;
    const double C5520 =
        (2 * (ae * C14642 + C14661 * C14718) + ae * (C14642 + C14647 * C14749) +
         C14661 * (C14718 + ae * C14661 * C14647 + C14661 * C15100)) /
        C13915;
    const double C5521 =
        (3 * (C14718 + ae * C15121 + C14661 * C15100) +
         ae * (2 * C15121 + C14661 * C15123) +
         C14661 *
             (2 * C15100 + ae * C15123 +
              C14661 * (C14721 + ae * C14661 * C14654 +
                        C14661 * (ae * C14654 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14715)))) /
        C13915;
    const double C280 =
        (3 * (C14729 + ae * C14674 + C14566 * C14734) +
         ae * (2 * C14674 + C14566 * C14683) +
         C14566 *
             (2 * C14734 + ae * C14683 +
              C14566 * (C14732 + ae * C14566 * C14679 +
                        C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14726)))) /
        C13915;
    const double C705 =
        (C14636 * (C14729 + ae * C14674 + C14566 * C14734)) / C13915;
    const double C707 =
        (ae * C14667 + C14566 * C14729 + C14734 * C14700) / C13915;
    const double C708 = (C14729 + ae * C14674 + C14566 * C14734 +
                         (C14732 + ae * C14566 * C14679 +
                          C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                      bs[6] * C14726)) *
                             C14700) /
                        C13915;
    const double C1535 =
        (C14636 *
         (2 * C14734 + ae * C14683 +
          C14566 * (C14732 + ae * C14566 * C14679 +
                    C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                bs[6] * C14726)))) /
        C13915;
    const double C3762 =
        (2 * C14636 * C14734 +
         C14636 * (C14734 + (ae * C14679 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14726) *
                                C14700)) /
        C13915;
    const double C5545 =
        (3 * (C14729 + ae * C15110 + C14661 * C15127) +
         ae * (2 * C15110 + C14661 * C15114) +
         C14661 *
             (2 * C15127 + ae * C15114 +
              C14661 * (C14732 + ae * C14661 * C14615 +
                        C14661 * (ae * C14615 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14726)))) /
        C13915;
    const double C3054 =
        (3 * (C14742 + ae * C15001 + C14636 * C15011) +
         ae * (2 * C15001 + C14636 * C15005) +
         C14636 *
             (2 * C15011 + ae * C15005 +
              C14636 * (C14745 + ae * C14636 * C14679 +
                        C14636 * (ae * C14679 + C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14739)))) /
        C13915;
    const double C5569 =
        (3 * (C14742 + ae * C15121 + C14661 * C15131) +
         ae * (2 * C15121 + C14661 * C15123) +
         C14661 *
             (2 * C15131 + ae * C15123 +
              C14661 * (C14745 + ae * C14661 * C14654 +
                        C14661 * (ae * C14654 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14739)))) /
        C13915;
    const double C15075 = C14566 * C14759;
    const double C15144 = C14661 * C14759;
    const double C15206 = C14636 * C14759;
    const double C335 =
        (3 * (C14754 + C14759 * C14570) +
         C14566 * (2 * C14566 * C14759 +
                   C14566 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C794 = (C14566 * C14754 + C14566 * C14759 * C14700) / C13915;
    const double C795 = (C14636 * (C14754 + C14759 * C14570)) / C13915;
    const double C796 =
        (C14754 + C14759 * C14570 +
         (C14759 + (C14605 * C14606 + C14749 * bs[6] * std::pow(C14564, 6)) *
                       C14573 * C14570) *
             C14700) /
        C13915;
    const double C1242 = (2 * ae * (C14667 + C14672 * C14570) +
                          C14661 * (C14754 + C14759 * C14570)) /
                         C13915;
    const double C1605 =
        (C14636 * (2 * C14566 * C14759 +
                   C14566 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C1936 =
        (2 * ae * (2 * C14674 + C14566 * C14683) +
         C14661 * (2 * C14566 * C14759 +
                   C14566 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C2441 =
        (2 * ae * C14636 * C14674 + C14661 * C14636 * C14566 * C14759) / C13915;
    const double C2442 = (2 * ae * C14636 * C14683 +
                          C14661 * C14636 *
                              (C14759 + (C14605 * C14606 +
                                         C14749 * bs[6] * std::pow(C14564, 6)) *
                                            C14573 * C14570)) /
                         C13915;
    const double C3077 =
        (2 * C14636 * C14754 + C14636 * (C14754 + C14759 * C14700)) / C13915;
    const double C3078 =
        (3 * (C14754 + C14759 * C14700) +
         C14636 * (2 * C14636 * C14759 +
                   C14636 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C3472 = (2 * ae * (C14667 + C14672 * C14700) +
                          C14661 * (C14754 + C14759 * C14700)) /
                         C13915;
    const double C4633 =
        (2 * ae * (2 * C15001 + C14636 * C15005) +
         C14661 * (2 * C14636 * C14759 +
                   C14636 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C4152 =
        (ae * C14649 + C14661 * C15069 +
         ae * (C14661 * C14636 * C15070 + C15061) +
         C14636 *
             (ae * (C14661 * C15070 + C14616) +
              C14636 * (ae * C15058 + C14661 * C14566 * std::pow(C14564, 6) *
                                          bs[6] * C14715))) /
        C13915;
    const double C13973 = C13967 * be;
    const double C13972 = C13965 * be;
    const double C3529 = C13948 * C87;
    const double C13953 = C13910 * C13948;
    const double C13952 = 2 * C13948;
    const double C14014 = C13948 / C13916;
    const double C13951 = C13947 / C13909;
    const double C2867 = C2856 * C2859;
    const double C2866 = C2856 * C400;
    const double C2865 = C2856 * C397;
    const double C2864 = C2856 * C86;
    const double C3133 = C2856 * C3123;
    const double C3132 = C2856 * C3122;
    const double C3131 = C2856 * C1998;
    const double C3130 = C2856 * C853;
    const double C3129 = C2856 * C850;
    const double C5390 = C2856 * C5385;
    const double C6458 = C2856 * C6455;
    const double C7132 = C7129 * C87;
    const double C15370 = C15366 - C15369;
    const double C15728 = C15705 / C13909;
    const double C15378 = C15374 - C15377;
    const double C15742 = C15727 / C13916;
    const double C14077 = C14076 / C13909;
    const double C6948 = C6837 * C463;
    const double C6946 = C6837 * C461;
    const double C6944 = C6837 * C459;
    const double C14203 = C14042 * C14198;
    const double C14228 = C14198 / C13916;
    const double C14249 = 2 * C14198;
    const double C15461 = C15456 - C15460;
    const double C619 = C456 * C126;
    const double C616 = C456 * C125;
    const double C613 = C456 * C124;
    const double C5196 = C456 * C909;
    const double C5193 = C456 * C906;
    const double C9764 = C456 * C907;
    const double C15732 = C15711 / C13909;
    const double C15468 = C15464 - C15467;
    const double C15746 = C15735 / C13916;
    const double C14103 = C14102 / C13909;
    const double C9511 = C9298 * C963;
    const double C9509 = C9298 * C961;
    const double C9507 = C9298 * C959;
    const double C9974 = C9298 * C3995;
    const double C9972 = C9298 * C2114;
    const double C9970 = C9298 * C3217;
    const double C9968 = C9298 * C2113;
    const double C14353 = C14045 * C14348;
    const double C14378 = C14348 / C13916;
    const double C14399 = 2 * C14348;
    const double C15501 = C15496 - C15500;
    const double C1251 = C956 * C159;
    const double C1248 = C956 * C158;
    const double C1245 = C956 * C157;
    const double C3478 = C956 * C512;
    const double C3475 = C956 * C509;
    const double C7893 = C956 * C510;
    const double C15734 = C15714 / C13909;
    const double C15508 = C15504 - C15507;
    const double C15748 = C15738 / C13916;
    const double C14222 = C14218 * be;
    const double C14266 = C14263 * be;
    const double C14372 = C14368 * be;
    const double C14416 = C14413 * be;
    const double C93 =
        ((C14569 + C14570 * C14571 * C14575) * C14573 + C14581 + C14581 +
         C14566 *
             (2 * ae * C14578 +
              C14566 *
                  (C14571 * C14575 + C14570 * bs[4] * std::pow(C14564, 4)) *
                  C14573)) /
        C13915;
    const double C467 =
        (C14581 + C14636 * (ae * C14642 + C14566 * C14646)) / C13915;
    const double C560 =
        (C14581 + C14636 * (ae * C14642 + C14566 * C14691)) / C13915;
    const double C967 =
        (C14581 + C14661 * (ae * C14667 + C14566 * C14671)) / C13915;
    const double C1148 =
        (C14581 + C14661 * (ae * C14667 + C14566 * C14729)) / C13915;
    const double C412 = C390 * C88;
    const double C3531 = C13948 * C398;
    const double C7134 = C7129 * C398;
    const double C3889 = C13948 * C851;
    const double C7478 = C7129 * C851;
    const double C14798 = ae * C14797;
    const double C462 =
        (C14566 * C14642 + C14636 * C14797 + C14636 * C14589 * ae) / C13909;
    const double C2058 = (C14661 * C14797) / C13909;
    const double C14890 = ae * C14889;
    const double C962 =
        (C14566 * C14667 + C14661 * C14889 + C14661 * C14589 * ae) / C13909;
    const double C2061 = (C14661 * (C14598 + C14636 * C14657)) / C13915;
    const double C14599 = C14578 + C14597;
    const double C14764 = ae * C14763;
    const double C1999 = (C14661 * C14763) / C13909;
    const double C14832 = ae * C14831;
    const double C3533 = C13948 * C401;
    const double C7136 = C7129 * C401;
    const double C5659 = C13948 * C854;
    const double C7480 = C7129 * C854;
    const double C14975 = C14642 + C14973;
    const double C15028 = ae * C15027;
    const double C15139 = C14667 + C15137;
    const double C15046 = ae * C15045;
    const double C3216 =
        (C14636 * C14667 + C14661 * C15045 + C14661 * C14970 * ae) / C13909;
    const double C607 =
        ((C14569 + C14700 * C14571 * C14575) * C14573 + C14793 + C14793 +
         C14636 * (2 * ae * C14642 + C14636 * C14705)) /
        C13915;
    const double C2387 =
        (C14793 + C14661 * (ae * C14667 + C14636 * C14742)) / C13915;
    const double C615 = C458 * C460;
    const double C2669 = C2548 * C460;
    const double C2227 = C1347 * C2057;
    const double C5194 = C457 * C2057;
    const double C7686 = C6837 * C2057;
    const double C5197 = C457 * C3173;
    const double C5869 = C1347 * C3173;
    const double C7690 = C6837 * C3173;
    const double C1239 =
        ((C14569 + C14749 * C14571 * C14575) * C14573 + C14885 + C14885 +
         C14661 * (2 * ae * C14667 + C14661 * C14754)) /
        C13915;
    const double C2281 =
        (C14885 + C14636 * (ae * C14642 + C14661 * C14718)) / C13915;
    const double C1247 = C958 * C960;
    const double C4996 = C4761 * C960;
    const double C5712 =
        (C14598 + C14636 * C14657 +
         (C14625 + C14636 * (ae * C14654 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14640)) *
             C14749) /
        C13915;
    const double C14627 = C14591 + C14624;
    const double C14769 = C14596 + C14768;
    const double C14837 = C14596 + C14836;
    const double C14901 = ae * C14899;
    const double C14927 = C14661 * C14899;
    const double C5655 = (C14763 + C14899 * C14749) / C13909;
    const double C14915 = ae * C14913;
    const double C2868 = C2856 * C2860;
    const double C3134 = C2856 * C3124;
    const double C4348 = C2856 * C4345;
    const double C5391 = C2856 * C5386;
    const double C14626 = C14608 + C14623;
    const double C2002 =
        (2 * ae * C14661 * C14636 * C14591 + C14566 * C14661 * C14897) / C13915;
    const double C2862 =
        (3 * (C14595 + C14621 * C14700) +
         C14636 * (2 * C14897 +
                   C14636 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C3125 = (C14636 * C14595 + C14897 * C14749) / C13915;
    const double C3526 =
        (2 * ae * (2 * C14957 + C14636 * C14961) +
         C14566 * (2 * C14897 +
                   C14636 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C4346 =
        (C14661 * (2 * C14897 +
                   C14636 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C5656 =
        (2 * ae * (C14957 + C14636 * C14615 * C14749) +
         C14566 * (C14897 + C14636 *
                                (C14605 * C14606 +
                                 C14570 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14749)) /
        C13915;
    const double C6456 =
        (2 * C14661 * C14897 +
         C14661 * (C14897 + C14636 *
                                (C14605 * C14606 +
                                 C14570 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14749)) /
        C13915;
    const double C5388 =
        (3 * (C14595 + C14621 * C14749) +
         C14661 * (2 * C14911 +
                   C14661 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C6118 =
        (2 * ae * (2 * C15110 + C14661 * C15114) +
         C14566 * (2 * C14911 +
                   C14661 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C14802 = C14801 + C14620;
    const double C227 = C123 * C128;
    const double C1065 = C123 * C911;
    const double C1466 = C1347 * C1348;
    const double C6950 = C6837 * C1348;
    const double C1795 = C123 * C1684;
    const double C14992 = C14647 + C14989;
    const double C15032 = C14971 + C15031;
    const double C15097 = ae * C15095;
    const double C15064 = ae * C15062;
    const double C15063 = C14636 * C15062;
    const double C15081 = C14661 * C15062;
    const double C5711 = (C14797 + C15062 * C14749) / C13909;
    const double C5498 = C123 * C5414;
    const double C14894 = C14893 + C14620;
    const double C341 = C156 * C161;
    const double C803 = C156 * C514;
    const double C1607 = C156 * C1384;
    const double C1945 = C1721 * C1722;
    const double C9513 = C9298 * C1722;
    const double C2449 = C1721 * C2115;
    const double C10754 = C9298 * C2115;
    const double C15050 = C15049 + C14990;
    const double C3081 = C156 * C2922;
    const double C4636 = C1721 * C4418;
    const double C12338 = C9298 * C4418;
    const double C15174 = C15173 + C15061;
    const double C15190 = ae * C15187;
    const double C15189 = C14661 * C15187;
    const double C15156 = C14672 + C15153;
    const double C15213 = ae * C15211;
    const double C15212 = C14661 * C15211;
    const double C14985 = C14979 + C14980;
    const double C5866 =
        (2 * ae * (C14649 + C15058 * C14749) +
         C14636 * (C15057 + C14566 *
                                (C14605 * C14606 +
                                 C14700 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14749)) /
        C13915;
    const double C6266 =
        (2 * C14661 * C15057 +
         C14661 * (C15057 + C14566 *
                                (C14605 * C14606 +
                                 C14700 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14749)) /
        C13915;
    const double C5495 =
        (3 * (C14705 + C14710 * C14749) +
         C14661 * (2 * C15093 +
                   C14661 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C6599 =
        (2 * ae * (2 * C15121 + C14661 * C15123) +
         C14636 * (2 * C15093 +
                   C14661 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C3832 =
        (2 * C14636 * C15075 +
         C14636 * (C15075 + C14566 *
                                (C14605 * C14606 +
                                 C14749 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14700)) /
        C13915;
    const double C4305 =
        (2 * ae * (C14674 + C15070 * C14700) +
         C14661 * (C15075 + C14566 *
                                (C14605 * C14606 +
                                 C14749 * bs[6] * std::pow(C14564, 6)) *
                                C14573 * C14700)) /
        C13915;
    const double C15149 = C15143 + C15144;
    const double C13978 = C13973 / C13909;
    const double C13977 = C13972 / C13909;
    const double C13957 = C13953 + C15375;
    const double C14018 = C14014 - C14017;
    const double C2498 = C14014 + (0 * ae) / C13909;
    const double C13956 = C15365 - C13951;
    const double C15669 = C15370 * C15360;
    const double C15707 = C15674 + C15370;
    const double C15677 = C15378 / C13916;
    const double C15673 = C15378 * C15360;
    const double C1287 = C15742 - (C15370 * C15361) / C13909;
    const double C14078 = C15407 - C14077;
    const double C14207 = C14203 + C15465;
    const double C14231 = C14228 - C14230;
    const double C15689 = C15461 * C15455;
    const double C15719 = C15691 + C15461;
    const double C15693 = C15468 / C13916;
    const double C15690 = C15468 * C15455;
    const double C3516 = C15746 - (C15461 * C15457) / C13909;
    const double C14104 = C15418 - C14103;
    const double C14357 = C14353 + C15505;
    const double C14381 = C14378 - C14380;
    const double C15696 = C15501 * C15495;
    const double C15724 = C15698 + C15501;
    const double C15700 = C15508 / C13916;
    const double C15697 = C15508 * C15495;
    const double C6112 = C15748 - (C15501 * C15497) / C13909;
    const double C14224 = C14222 / C13909;
    const double C14269 = C14266 / C13909;
    const double C14374 = C14372 / C13909;
    const double C14419 = C14416 / C13909;
    const double C609 =
        (C14566 * C14705 + C14798 + C14798 +
         C14636 * (2 * ae * C14649 + C14636 * C14566 * C14710)) /
        C13915;
    const double C2388 =
        (C14798 + C14661 * (ae * C14674 + C14636 * C14566 * C14745)) / C13915;
    const double C618 = C458 * C462;
    const double C2672 = C2548 * C462;
    const double C2229 = C1347 * C2058;
    const double C7688 = C6837 * C2058;
    const double C9765 = C457 * C2058;
    const double C1241 =
        (C14566 * C14754 + C14890 + C14890 +
         C14661 * (2 * ae * C14674 + C14661 * C14566 * C14759)) /
        C13915;
    const double C2282 =
        (C14890 + C14636 * (ae * C14649 + C14661 * C14566 * C14721)) / C13915;
    const double C1250 = C958 * C962;
    const double C4999 = C4761 * C962;
    const double C14600 = C14599 + C14592;
    const double C405 =
        (C14636 * C14595 + C14764 + C14764 +
         C14566 * (2 * ae * C14636 * C14591 + C14566 * C14636 * C14621)) /
        C13915;
    const double C468 = (ae * C14642 + C14566 * C14646 + C14764 +
                         C14636 * (C14598 + C14636 * C14657)) /
                        C13915;
    const double C563 = (ae * C14642 + C14566 * C14691 + C14764 +
                         C14636 * (C14598 + C14636 * C14696)) /
                        C13915;
    const double C2117 = (C14764 + C14661 * C14636 * C14682) / C13915;
    const double C2335 = (C14764 + C14661 * C14636 * C14734) / C13915;
    const double C3891 = C13948 * C1999;
    const double C7482 = C7129 * C1999;
    const double C858 =
        (C14661 * C14595 + C14832 + C14832 +
         C14566 * (2 * ae * C14661 * C14591 + C14566 * C14661 * C14621)) /
        C13915;
    const double C968 = (ae * C14667 + C14566 * C14671 + C14832 +
                         C14661 * (C14598 + C14661 * C14682)) /
                        C13915;
    const double C1151 = (ae * C14667 + C14566 * C14729 + C14832 +
                          C14661 * (C14598 + C14661 * C14734)) /
                         C13915;
    const double C2170 = (C14832 + C14636 * C14661 * C14696) / C13915;
    const double C14976 = C14975 + C14972;
    const double C3301 =
        (C14661 * C14705 + C15028 + C15028 +
         C14636 * (2 * ae * C14661 * C14647 + C14636 * C14661 * C14710)) /
        C13915;
    const double C3431 = (ae * C14667 + C14636 * C14742 + C15028 +
                          C14661 * (C14974 + C14661 * C15011)) /
                         C13915;
    const double C15140 = C15139 + C15136;
    const double C3471 =
        (C14636 * C14754 + C15046 + C15046 +
         C14661 * (2 * ae * C15001 + C14661 * C14636 * C14759)) /
        C13915;
    const double C3477 = C958 * C3216;
    const double C5353 = C4761 * C3216;
    const double C14628 = C14627 + C14616;
    const double C14770 = ae * C14769;
    const double C3525 = (2 * C14763 + C14636 * C14769) / C13909;
    const double C3885 = (C14661 * C14769) / C13909;
    const double C14838 = ae * C14837;
    const double C6117 = (2 * C14831 + C14661 * C14837) / C13909;
    const double C3944 =
        (C14661 * (C14657 + C14901 +
                   C14636 * (C14625 + C14636 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C14928 = ae * C14927;
    const double C5661 = C13948 * C5655;
    const double C7484 = C7129 * C5655;
    const double C14803 = ae * C14802;
    const double C464 =
        (C14642 + C14647 * C14570 + C14636 * C14802 + C14636 * C14617 * ae) /
        C13909;
    const double C2059 = (C14661 * C14802) / C13909;
    const double C14993 = C14992 + C14987;
    const double C15033 = ae * C15032;
    const double C6492 = (2 * C15027 + C14661 * C15032) / C13909;
    const double C15065 = C14649 + C15063;
    const double C15082 = ae * C15081;
    const double C5871 = C1347 * C5711;
    const double C7692 = C6837 * C5711;
    const double C14895 = ae * C14894;
    const double C964 =
        (C14667 + C14672 * C14570 + C14661 * C14894 + C14661 * C14617 * ae) /
        C13909;
    const double C15051 = ae * C15050;
    const double C3218 =
        (C14667 + C14672 * C14700 + C14661 * C15050 + C14661 * C14988 * ae) /
        C13909;
    const double C15175 = ae * C15174;
    const double C5763 =
        (C14636 * C14674 + C14661 * C15174 + C14661 * C15059 * ae) / C13909;
    const double C15191 = C14674 + C15189;
    const double C15157 = C15156 + C15151;
    const double C15214 = C15001 + C15212;
    const double C13985 = C13966 - C13978;
    const double C13984 = C13934 - C13977;
    const double C13964 = C13957 * be;
    const double C7948 = C14018 * C88;
    const double C14019 = 2 * C14018;
    const double C80 =
        (C14018 / C13916 + (0 * ae) / C13909) / C13916 - (0 * be) / C13909;
    const double C1300 = C14018 / C13916 - (0 * be) / C13909;
    const double C6793 = C14018 / C13916 + (0 * ae) / C13909;
    const double C2502 = C2498 * C88;
    const double C13962 = C13956 * ae;
    const double C13961 = C13956 * C13923;
    const double C386 =
        ((-C13911 / C13909) / C13916 - (C13936 * be) / C13909) / C13916 -
        ((C13910 * ((-C13919) / C13916 - (C13956 * be) / C13909) + C7120) *
         be) /
            C13909 +
        (-C13940 / C13909) / C13916 - (0 * be) / C13909;
    const double C388 =
        ((-C13919) / C13916 - (C13956 * be) / C13909) / C13916 -
        ((C13910 * ((-C13940 / C13909) / C13916 - (0 * be) / C13909) + C15375) *
         be) /
            C13909;
    const double C7127 = (-C13919) / C13916 - (C13956 * be) / C13909;
    const double C15703 = C15669 / C13909;
    const double C15729 = C15707 / C13916;
    const double C15730 = C15709 + C15677;
    const double C1289 = C15677 - C15376 / C13928;
    const double C15706 = C15673 / C13909;
    const double C14079 = C14078 * C13923;
    const double C14185 = C14078 * ae;
    const double C1346 = (C14078 * ae) / C13909 - C14065 / C13928;
    const double C2546 =
        ((-(0 * be) / C13909) / C13916 -
         ((0 - (C14042 * C14065) / C13909) * be) / C13909) /
            C13916 -
        ((C14042 * ((-C14065 / C13909) / C13916 - (C14078 * be) / C13909) +
          C6784) *
         be) /
            C13909 +
        (-C14075 / C13909) / C13916 - (0 * be) / C13909;
    const double C2547 =
        ((-C14065 / C13909) / C13916 - (C14078 * be) / C13909) / C13916 -
        ((C14042 * ((-C14075 / C13909) / C13916 - (0 * be) / C13909) + C15465) *
         be) /
            C13909;
    const double C6836 = (-C14183) / C13916 - (C14078 * be) / C13909;
    const double C14211 = C14207 * be;
    const double C8118 = C14231 * C462;
    const double C8115 = C14231 * C460;
    const double C14278 = 2 * C14231;
    const double C2894 =
        (C14231 / C13916 + (0 * ae) / C13909) / C13916 - (0 * be) / C13909;
    const double C3572 = C14231 / C13916 - (0 * be) / C13909;
    const double C7175 = C14231 / C13916 + (0 * ae) / C13909;
    const double C15716 = C15689 / C13909;
    const double C15736 = C15719 / C13916;
    const double C15737 = C15720 + C15693;
    const double C3518 = C15693 - C15466 / C13928;
    const double C15718 = C15690 / C13909;
    const double C14105 = C14104 * C13923;
    const double C14335 = C14104 * ae;
    const double C1720 = (C14104 * ae) / C13909 - C14091 / C13928;
    const double C4759 =
        ((-(0 * be) / C13909) / C13916 -
         ((0 - (C14045 * C14091) / C13909) * be) / C13909) /
            C13916 -
        ((C14045 * ((-C14091 / C13909) / C13916 - (C14104 * be) / C13909) +
          C9223) *
         be) /
            C13909 +
        (-C14101 / C13909) / C13916 - (0 * be) / C13909;
    const double C4760 =
        ((-C14091 / C13909) / C13916 - (C14104 * be) / C13909) / C13916 -
        ((C14045 * ((-C14101 / C13909) / C13916 - (0 * be) / C13909) + C15505) *
         be) /
            C13909;
    const double C9297 = (-C14333) / C13916 - (C14104 * be) / C13909;
    const double C14361 = C14357 * be;
    const double C11114 = C14381 * C962;
    const double C11111 = C14381 * C960;
    const double C11570 = C14381 * C3216;
    const double C14428 = 2 * C14381;
    const double C5443 =
        (C14381 / C13916 + (0 * ae) / C13909) / C13916 - (0 * be) / C13909;
    const double C6194 = C14381 / C13916 - (0 * be) / C13909;
    const double C10085 = C14381 / C13916 + (0 * ae) / C13909;
    const double C15721 = C15696 / C13909;
    const double C15739 = C15724 / C13916;
    const double C15740 = C15725 + C15700;
    const double C6114 = C15700 - C15506 / C13928;
    const double C15723 = C15697 / C13909;
    const double C14225 = C14221 - C14224;
    const double C14271 = C14255 - C14269;
    const double C14375 = C14371 - C14374;
    const double C14421 = C14405 - C14419;
    const double C14601 = ae * C14600;
    const double C89 =
        (2 * C14580 + C14566 * C14600 + (C14569 + C14583 * C14570) * ae) /
        C13909;
    const double C399 = (C14636 * C14600) / C13909;
    const double C852 = (C14661 * C14600) / C13909;
    const double C14977 = ae * C14976;
    const double C2895 =
        (2 * C14792 + C14636 * C14976 + (C14569 + C14583 * C14700) * ae) /
        C13909;
    const double C3172 = (C14661 * C14976) / C13909;
    const double C15141 = ae * C15140;
    const double C5444 =
        (2 * C14884 + C14661 * C15140 + (C14569 + C14583 * C14749) * ae) /
        C13909;
    const double C14630 = ae * C14628;
    const double C14629 = C14566 * C14628;
    const double C14898 = C14636 * C14628;
    const double C14912 = C14661 * C14628;
    const double C402 = (C14600 + C14628 * C14700) / C13909;
    const double C855 = (C14600 + C14628 * C14749) / C13909;
    const double C408 =
        (C14595 + C14621 * C14700 + C14770 + C14770 +
         C14566 * (2 * ae * (C14591 + C14615 * C14700) +
                   C14566 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C3574 =
        (2 * (C14598 + C14636 * C14657) + C14770 +
         C14636 * (C14657 + C14901 +
                   C14636 * (C14625 + C14636 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C3645 =
        (2 * (C14598 + C14636 * C14696) + C14770 +
         C14636 * (C14696 + C14901 +
                   C14636 * (C14625 + C14636 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14688)))) /
        C13915;
    const double C3996 =
        (C14770 +
         C14661 * (C14682 + (ae * C14679 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14665) *
                                C14700)) /
        C13915;
    const double C4203 =
        (C14770 +
         C14661 * (C14734 + (ae * C14679 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14726) *
                                C14700)) /
        C13915;
    const double C3535 = C13948 * C3525;
    const double C7138 = C7129 * C3525;
    const double C3893 = C13948 * C3885;
    const double C8783 = C7129 * C3885;
    const double C861 =
        (C14595 + C14621 * C14749 + C14838 + C14838 +
         C14566 * (2 * ae * (C14591 + C14615 * C14749) +
                   C14566 * (C14621 + (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C5815 =
        (C14838 +
         C14636 * (C14696 + (ae * C14654 +
                             C14566 * std::pow(C14564, 6) * bs[6] * C14688) *
                                C14749)) /
        C13915;
    const double C6196 =
        (2 * (C14598 + C14661 * C14682) + C14838 +
         C14661 * (C14682 + C14915 +
                   C14661 * (C14625 + C14661 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14665)))) /
        C13915;
    const double C6337 =
        (2 * (C14598 + C14661 * C14734) + C14838 +
         C14661 * (C14734 + C14915 +
                   C14661 * (C14625 + C14661 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14726)))) /
        C13915;
    const double C6121 = C13948 * C6117;
    const double C10014 = C7129 * C6117;
    const double C2003 =
        (C14661 * C14897 + C14928 + C14928 +
         C14566 *
             (2 * ae * C14661 * C14636 * C14615 +
              C14566 * C14661 * C14636 *
                  (C14605 * C14606 + C14570 * bs[6] * std::pow(C14564, 6)) *
                  C14573)) /
        C13915;
    const double C4047 =
        (C14661 * C14696 + C14928 +
         C14636 * (C14915 + C14636 * C14661 *
                                (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14688))) /
        C13915;
    const double C5764 =
        (C14636 * C14682 + C14928 +
         C14661 * (C14901 + C14661 * C14636 *
                                (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14665))) /
        C13915;
    const double C5972 =
        (C14636 * C14734 + C14928 +
         C14661 * (C14901 + C14661 * C14636 *
                                (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14726))) /
        C13915;
    const double C611 =
        (C14705 + C14710 * C14570 + C14803 + C14803 +
         C14636 * (2 * ae * C14658 +
                   C14636 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C2389 =
        (C14803 + C14661 * (ae * C14683 +
                            C14636 * (C14745 + std::pow(C14564, 6) * bs[6] *
                                                   C14739 * C14570))) /
        C13915;
    const double C621 = C458 * C464;
    const double C2675 = C2548 * C464;
    const double C8121 = C14231 * C464;
    const double C2231 = C1347 * C2059;
    const double C8531 = C6837 * C2059;
    const double C14995 = ae * C14993;
    const double C14994 = C14636 * C14993;
    const double C15094 = C14661 * C14993;
    const double C3174 = (C14976 + C14993 * C14749) / C13909;
    const double C3303 =
        (C14705 + C14710 * C14749 + C15033 + C15033 +
         C14636 * (2 * ae * (C14647 + C14654 * C14749) +
                   C14636 * (C14710 + (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14749))) /
        C13915;
    const double C6706 =
        (2 * (C14974 + C14661 * C15011) + C15033 +
         C14661 * (C15011 + C15097 +
                   C14661 * (C14991 + C14661 * (ae * C14679 +
                                                C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14739)))) /
        C13915;
    const double C6602 = C1347 * C6492;
    const double C12510 = C6837 * C6492;
    const double C15066 = C15065 + C15061;
    const double C4098 =
        (C14661 * C15057 + C15082 + C15082 +
         C14636 *
             (2 * ae * C14661 * C15058 +
              C14636 * C14661 * C14566 *
                  (C14605 * C14606 + C14700 * bs[6] * std::pow(C14564, 6)) *
                  C14573)) /
        C13915;
    const double C6023 =
        (ae * C14674 + C14636 * C15073 + C15082 +
         C14661 * (C15064 + C14661 * (ae * C15070 + C14636 * C14566 *
                                                        std::pow(C14564, 6) *
                                                        bs[6] * C14739))) /
        C13915;
    const double C1243 =
        (C14754 + C14759 * C14570 + C14895 + C14895 +
         C14661 * (2 * ae * C14683 +
                   C14661 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14570))) /
        C13915;
    const double C2283 =
        (C14895 + C14636 * (ae * C14658 +
                            C14661 * (C14721 + std::pow(C14564, 6) * bs[6] *
                                                   C14715 * C14570))) /
        C13915;
    const double C1253 = C958 * C964;
    const double C5002 = C4761 * C964;
    const double C11117 = C14381 * C964;
    const double C3473 =
        (C14754 + C14759 * C14700 + C15051 + C15051 +
         C14661 * (2 * ae * C15005 +
                   C14661 * (C14759 + (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                          C14573 * C14700))) /
        C13915;
    const double C4528 =
        (2 * (ae * (C14661 * C14672 + C14588) + C14636 * C15100) + C15051 +
         C14636 *
             (C15100 + ae * (C14661 * C14636 * C14679 + C14987) +
              C14636 * (ae * (C14661 * C14679 + C14611) +
                        C14636 * (ae * C14654 + C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14715)))) /
        C13915;
    const double C3480 = C958 * C3218;
    const double C5356 = C4761 * C3218;
    const double C13898 = C14381 * C3218;
    const double C6074 =
        (C14636 * C15075 + C15175 + C15175 +
         C14661 *
             (2 * ae * C15172 +
              C14661 * C14636 * C14566 *
                  (C14605 * C14606 + C14749 * bs[6] * std::pow(C14564, 6)) *
                  C14573)) /
        C13915;
    const double C6078 = C4761 * C5763;
    const double C7895 = C958 * C5763;
    const double C11573 = C14381 * C5763;
    const double C15192 = C15191 + C15188;
    const double C15159 = ae * C15157;
    const double C15158 = C14661 * C15157;
    const double C15215 = C15214 + C15210;
    const double C13971 = C13964 / C13909;
    const double C13969 = C13962 / C13909;
    const double C13970 = C13961 / C13928;
    const double C13968 = C13910 * C13961;
    const double C79 = (-C13961 / C13909) / (4 * C13915 * std::pow(C13916, 2));
    const double C389 = (-C13961 / C13909) / C14013;
    const double C1299 = (-C13961 / C13909) / (4 * C13925);
    const double C2497 = (-C13961 / C13909) / C14013;
    const double C2855 = -C13961 / C13909;
    const double C3522 = (-C13961 / C13909) / C13916;
    const double C6792 = (-C13961 / C13909) / (4 * C13925);
    const double C7128 = (-C13961 / C13909) / C13916;
    const double C7943 = (-C13961 / C13909) / C14013;
    const double C416 = C386 * C400;
    const double C413 = C386 * C397;
    const double C410 = C386 * C86;
    const double C866 = C386 * C853;
    const double C863 = C386 * C850;
    const double C2005 = C386 * C1998;
    const double C417 = C388 * C401;
    const double C414 = C388 * C398;
    const double C411 = C388 * C87;
    const double C867 = C388 * C854;
    const double C864 = C388 * C851;
    const double C2006 = C388 * C1999;
    const double C7137 = C7127 * C2859;
    const double C7135 = C7127 * C400;
    const double C7133 = C7127 * C397;
    const double C7131 = C7127 * C86;
    const double C7483 = C7127 * C3122;
    const double C7481 = C7127 * C1998;
    const double C7479 = C7127 * C853;
    const double C7477 = C7127 * C850;
    const double C8782 = C7127 * C3123;
    const double C10013 = C7127 * C5385;
    const double C15750 = C15703 + C15742;
    const double C1288 = C15729 - (C15378 * C15361) / C13909;
    const double C64 = C15730 / C13916 - C15376 / C14016;
    const double C15743 = C15706 + C15729;
    const double C14082 = C14042 * C14079;
    const double C14248 = C14079 / C13928;
    const double C603 =
        (ae * -2 * C14065) / C13925 +
        (((C14042 * ((-4 * C14067) / C13909 - (C14042 * C14079) / C13909) *
           ae) /
              C13909 +
          2 * ((C14078 * ae) / C13909 - C14065 / C13928)) *
         ae) /
            C13909 -
        C14079 / C13928;
    const double C605 = (-C14079 / C13909) / C14013;
    const double C1456 = (-C14079 / C13909) / C13916;
    const double C2665 = (-C14079 / C13909) / C14013;
    const double C2975 =
        (-C14079 / C13909) / (4 * C13915 * std::pow(C13916, 2));
    const double C3683 = (-C14079 / C13909) / (4 * C13925);
    const double C6941 = (-C14079 / C13909) / C13916;
    const double C7281 = (-C14079 / C13909) / (4 * C13925);
    const double C8111 = (-C14079 / C13909) / C14013;
    const double C14193 = C14185 / C13909;
    const double C1465 = C1346 * C127;
    const double C1463 = C1346 * C126;
    const double C1461 = C1346 * C125;
    const double C1459 = C1346 * C124;
    const double C2230 = C1346 * C908;
    const double C2228 = C1346 * C907;
    const double C2226 = C1346 * C906;
    const double C5870 = C1346 * C910;
    const double C5868 = C1346 * C909;
    const double C6601 = C1346 * C5413;
    const double C2673 = C2546 * C126;
    const double C2670 = C2546 * C125;
    const double C2667 = C2546 * C124;
    const double C3308 = C2546 * C909;
    const double C3305 = C2546 * C906;
    const double C4100 = C2546 * C907;
    const double C2674 = C2547 * C463;
    const double C2671 = C2547 * C461;
    const double C2668 = C2547 * C459;
    const double C3309 = C2547 * C3173;
    const double C3306 = C2547 * C2057;
    const double C4101 = C2547 * C2058;
    const double C6949 = C6836 * C127;
    const double C6947 = C6836 * C126;
    const double C6945 = C6836 * C125;
    const double C6943 = C6836 * C124;
    const double C7691 = C6836 * C910;
    const double C7689 = C6836 * C909;
    const double C7687 = C6836 * C907;
    const double C7685 = C6836 * C906;
    const double C8530 = C6836 * C908;
    const double C12509 = C6836 * C5413;
    const double C14216 = C14211 / C13909;
    const double C15751 = C15716 + C15746;
    const double C3517 = C15736 - (C15468 * C15457) / C13909;
    const double C2853 = C15737 / C13916 - C15466 / C14016;
    const double C15747 = C15718 + C15736;
    const double C14108 = C14045 * C14105;
    const double C14398 = C14105 / C13928;
    const double C1235 =
        (ae * -2 * C14091) / C13925 +
        (((C14045 * ((-4 * C14093) / C13909 - (C14045 * C14105) / C13909) *
           ae) /
              C13909 +
          2 * ((C14104 * ae) / C13909 - C14091 / C13928)) *
         ae) /
            C13909 -
        C14105 / C13928;
    const double C1237 = (-C14105 / C13909) / C14013;
    const double C1935 = (-C14105 / C13909) / C13916;
    const double C4992 = (-C14105 / C13909) / C14013;
    const double C5596 =
        (-C14105 / C13909) / (4 * C13915 * std::pow(C13916, 2));
    const double C6410 = (-C14105 / C13909) / (4 * C13925);
    const double C9504 = (-C14105 / C13909) / C13916;
    const double C10293 = (-C14105 / C13909) / (4 * C13925);
    const double C11107 = (-C14105 / C13909) / C14013;
    const double C14343 = C14335 / C13909;
    const double C1944 = C1720 * C160;
    const double C1942 = C1720 * C159;
    const double C1940 = C1720 * C158;
    const double C1938 = C1720 * C157;
    const double C2448 = C1720 * C511;
    const double C2446 = C1720 * C510;
    const double C2444 = C1720 * C509;
    const double C4309 = C1720 * C513;
    const double C4307 = C1720 * C512;
    const double C4635 = C1720 * C2921;
    const double C5000 = C4759 * C159;
    const double C4997 = C4759 * C158;
    const double C4994 = C4759 * C157;
    const double C5354 = C4759 * C512;
    const double C5351 = C4759 * C509;
    const double C6076 = C4759 * C510;
    const double C5001 = C4760 * C963;
    const double C4998 = C4760 * C961;
    const double C4995 = C4760 * C959;
    const double C5355 = C4760 * C3217;
    const double C5352 = C4760 * C2113;
    const double C6077 = C4760 * C2114;
    const double C9512 = C9297 * C160;
    const double C9510 = C9297 * C159;
    const double C9508 = C9297 * C158;
    const double C9506 = C9297 * C157;
    const double C9973 = C9297 * C513;
    const double C9971 = C9297 * C510;
    const double C9969 = C9297 * C512;
    const double C9967 = C9297 * C509;
    const double C10753 = C9297 * C511;
    const double C12337 = C9297 * C2921;
    const double C14366 = C14361 / C13909;
    const double C15752 = C15721 + C15748;
    const double C6113 = C15739 - (C15508 * C15497) / C13909;
    const double C5381 = C15740 / C13916 - C15506 / C14016;
    const double C15749 = C15723 + C15739;
    const double C94 =
        (2 * (2 * ae * C14578 + C14566 * C14595) + C14601 + C14601 +
         C14566 * (C14595 + C14598 + C14598 +
                   C14566 * (2 * ae * C14591 +
                             C14566 *
                                 (C14584 * C14585 +
                                  C14570 * bs[5] * std::pow(C14572, 5)) *
                                 C14573))) /
        C13915;
    const double C469 =
        (C14601 + C14636 * (C14646 + ae * C14649 + C14566 * C14657)) / C13915;
    const double C561 =
        (C14601 + C14636 * (C14691 + ae * C14649 + C14566 * C14696)) / C13915;
    const double C969 =
        (C14601 + C14661 * (C14671 + ae * C14674 + C14566 * C14682)) / C13915;
    const double C1149 =
        (C14601 + C14661 * (C14729 + ae * C14674 + C14566 * C14734)) / C13915;
    const double C1308 = C1300 * C89;
    const double C6798 = C6793 * C89;
    const double C415 = C390 * C399;
    const double C2505 = C2498 * C399;
    const double C7951 = C14018 * C399;
    const double C865 = C390 * C852;
    const double C4680 = C2498 * C852;
    const double C8326 = C14018 * C852;
    const double C2976 =
        (2 * (2 * ae * C14642 + C14636 * C14705) + C14977 + C14977 +
         C14636 * (C14705 + C14974 + C14974 +
                   C14636 * (2 * C14650 + C14636 * C14710))) /
        C13915;
    const double C3430 =
        (C14977 + C14661 * (C14742 + ae * C15001 + C14636 * C15011)) / C13915;
    const double C3689 = C3572 * C2895;
    const double C7286 = C7175 * C2895;
    const double C3307 = C2548 * C3172;
    const double C5195 = C458 * C3172;
    const double C8986 = C14231 * C3172;
    const double C5597 =
        (2 * (2 * ae * C14667 + C14661 * C14754) + C15141 + C15141 +
         C14661 * (C14754 + C15138 + C15138 +
                   C14661 * (2 * C14675 + C14661 * C14759))) /
        C13915;
    const double C6416 = C6194 * C5444;
    const double C10298 = C10085 * C5444;
    const double C470 =
        (C14646 + ae * C14649 + C14566 * C14657 + ae * C14636 * C14628 +
         C14636 * (C14630 + C14636 * (C14653 + ae * C14566 * C14654 +
                                      C14566 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C564 =
        (C14691 + ae * C14649 + C14566 * C14696 + ae * C14636 * C14628 +
         C14636 * (C14630 + C14636 * (C14694 + ae * C14566 * C14654 +
                                      C14566 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14688)))) /
        C13915;
    const double C970 =
        (C14671 + ae * C14674 + C14566 * C14682 + ae * C14661 * C14628 +
         C14661 * (C14630 + C14661 * (C14678 + ae * C14566 * C14679 +
                                      C14566 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14665)))) /
        C13915;
    const double C1152 =
        (C14729 + ae * C14674 + C14566 * C14734 + ae * C14661 * C14628 +
         C14661 * (C14630 + C14661 * (C14732 + ae * C14566 * C14679 +
                                      C14566 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14726)))) /
        C13915;
    const double C2062 =
        (C14661 * (C14630 + C14636 * (C14653 + ae * C14566 * C14654 +
                                      C14566 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C14631 = C14607 + C14629;
    const double C14900 = ae * C14898;
    const double C2000 = (C14661 * C14898) / C13909;
    const double C14914 = ae * C14912;
    const double C418 = C390 * C402;
    const double C2508 = C2498 * C402;
    const double C7954 = C14018 * C402;
    const double C868 = C390 * C855;
    const double C4683 = C2498 * C855;
    const double C10798 = C14018 * C855;
    const double C3432 =
        (C14742 + ae * C15001 + C14636 * C15011 + ae * C14661 * C14993 +
         C14661 * (C14995 + C14661 * (C14745 + ae * C14636 * C14679 +
                                      C14636 * (ae * C14679 +
                                                C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14739)))) /
        C13915;
    const double C14996 = C14981 + C14994;
    const double C15096 = ae * C15094;
    const double C3310 = C2548 * C3174;
    const double C5198 = C458 * C3174;
    const double C13743 = C14231 * C3174;
    const double C15067 = ae * C15066;
    const double C3573 =
        (2 * C14797 + C14636 * C15066 + (C14589 + C14612 * C14700) * ae) /
        C13909;
    const double C3943 = (C14661 * C15066) / C13909;
    const double C15193 = ae * C15192;
    const double C6195 =
        (2 * C14889 + C14661 * C15192 + (C14589 + C14612 * C14749) * ae) /
        C13909;
    const double C15160 = C15145 + C15158;
    const double C15216 = ae * C15215;
    const double C6528 =
        (2 * C15045 + C14661 * C15215 + (C14970 + C14983 * C14749) * ae) /
        C13909;
    const double C13975 = C13969 - C13941;
    const double C13976 = C13968 / C13928;
    const double C13974 = C13968 / C13909;
    const double C61 =
        (C15741 + 2 * C15370) / C13916 - (C15750 * C15361) / C13909;
    const double C62 =
        (C15728 + 2 * C15378 + C15750) / C13916 - (C15743 * C15361) / C13909;
    const double C63 = (C15708 + C15375 / C13909 + C15743) / C13916 -
                       (C15730 * C15361) / C13909;
    const double C14250 = C14082 / C13928;
    const double C14246 = C14082 / C13909;
    const double C604 =
        (((-4 * C14067) / C13909 - C14082 / C13909) * ae) / C13928 +
        ((2 * ((0 * ae) / C13909 - C14067 / C13915) - C14082 / C13928) * ae) /
            C13909;
    const double C1455 =
        (((-4 * C14067) / C13909 - C14082 / C13909) * ae) / C13909;
    const double C2663 =
        (-(be * -2 * C14065) / C13915) / C13916 -
        ((2 * ((-C14065 / C13909) / C13916 - (C14078 * be) / C13909) -
          (C14042 * ((-4 * C14067) / C13909 - C14082 / C13909) * be) / C13909) *
         be) /
            C13909 -
        C14079 / C13928;
    const double C2664 =
        (-(((-4 * C14067) / C13909 - C14082 / C13909) * be) / C13909) / C13916 -
        ((2 * ((-C14075 / C13909) / C13916 - (0 * be) / C13909) -
          C14082 / C13928) *
         be) /
            C13909;
    const double C14197 = C14193 - C14186;
    const double C2850 =
        (C15744 + 2 * C15461) / C13916 - (C15751 * C15457) / C13909;
    const double C2851 =
        (C15732 + 2 * C15468 + C15751) / C13916 - (C15747 * C15457) / C13909;
    const double C2852 = (C15712 + C15465 / C13909 + C15747) / C13916 -
                         (C15737 * C15457) / C13909;
    const double C14400 = C14108 / C13928;
    const double C14396 = C14108 / C13909;
    const double C1236 =
        (((-4 * C14093) / C13909 - C14108 / C13909) * ae) / C13928 +
        ((2 * ((0 * ae) / C13909 - C14093 / C13915) - C14108 / C13928) * ae) /
            C13909;
    const double C1934 =
        (((-4 * C14093) / C13909 - C14108 / C13909) * ae) / C13909;
    const double C4990 =
        (-(be * -2 * C14091) / C13915) / C13916 -
        ((2 * ((-C14091 / C13909) / C13916 - (C14104 * be) / C13909) -
          (C14045 * ((-4 * C14093) / C13909 - C14108 / C13909) * be) / C13909) *
         be) /
            C13909 -
        C14105 / C13928;
    const double C4991 =
        (-(((-4 * C14093) / C13909 - C14108 / C13909) * be) / C13909) / C13916 -
        ((2 * ((-C14101 / C13909) / C13916 - (0 * be) / C13909) -
          C14108 / C13928) *
         be) /
            C13909;
    const double C14347 = C14343 - C14336;
    const double C5378 =
        (C15745 + 2 * C15501) / C13916 - (C15752 * C15497) / C13909;
    const double C5379 =
        (C15734 + 2 * C15508 + C15752) / C13916 - (C15749 * C15497) / C13909;
    const double C5380 = (C15715 + C15505 / C13909 + C15749) / C13916 -
                         (C15740 * C15497) / C13909;
    const double C14632 = C14631 + C14620;
    const double C1303 =
        (2 * (2 * ae * C14636 * C14591 + C14566 * C14897) + C14900 + C14900 +
         C14566 * (C14897 + C14901 + C14901 +
                   C14566 * (2 * ae * C14636 * C14615 +
                             C14566 * C14636 *
                                 (C14605 * C14606 +
                                  C14570 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C2118 =
        (C14900 + C14661 * C14636 *
                      (C14678 + ae * C14566 * C14679 +
                       C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14665))) /
        C13915;
    const double C2336 =
        (C14900 + C14661 * C14636 *
                      (C14732 + ae * C14566 * C14679 +
                       C14566 * (ae * C14679 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14726))) /
        C13915;
    const double C2007 = C390 * C2000;
    const double C8329 = C14018 * C2000;
    const double C11626 = C2498 * C2000;
    const double C1645 =
        (2 * (2 * ae * C14661 * C14591 + C14566 * C14911) + C14914 + C14914 +
         C14566 * (C14911 + C14915 + C14915 +
                   C14566 * (2 * ae * C14661 * C14615 +
                             C14566 * C14661 *
                                 (C14605 * C14606 +
                                  C14570 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C2171 =
        (C14914 + C14636 * C14661 *
                      (C14694 + ae * C14566 * C14654 +
                       C14566 * (ae * C14654 + C14566 * std::pow(C14564, 6) *
                                                   bs[6] * C14688))) /
        C13915;
    const double C14997 = C14996 + C14990;
    const double C4489 =
        (2 * (2 * ae * C14661 * C14647 + C14636 * C15093) + C15096 + C15096 +
         C14636 * (C15093 + C15097 + C15097 +
                   C14636 * (2 * ae * C14661 * C14654 +
                             C14636 * C14661 *
                                 (C14605 * C14606 +
                                  C14700 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C3684 =
        (2 * (2 * ae * C14649 + C14636 * C15057) + C15067 + C15067 +
         C14636 * (C15057 + C15064 + C15064 +
                   C14636 * (2 * ae * C15058 +
                             C14636 * C14566 *
                                 (C14605 * C14606 +
                                  C14700 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C4254 =
        (C15067 + C14661 * (C15073 + ae * C14636 * C15070 +
                            C14636 * (ae * C15070 + C14636 * C14566 *
                                                        std::pow(C14564, 6) *
                                                        bs[6] * C14739))) /
        C13915;
    const double C3693 = C3572 * C3573;
    const double C7290 = C7175 * C3573;
    const double C4102 = C2548 * C3943;
    const double C8989 = C14231 * C3943;
    const double C9766 = C458 * C3943;
    const double C6411 =
        (2 * (2 * ae * C14674 + C14661 * C15075) + C15193 + C15193 +
         C14661 * (C15075 + C15190 + C15190 +
                   C14661 * (2 * ae * C15070 +
                             C14661 * C14566 *
                                 (C14605 * C14606 +
                                  C14749 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C6420 = C6194 * C6195;
    const double C10302 = C10085 * C6195;
    const double C15161 = C15160 + C15154;
    const double C6741 =
        (2 * (2 * ae * C15001 + C14661 * C15206) + C15216 + C15216 +
         C14661 * (C15206 + C15213 + C15213 +
                   C14661 * (2 * ae * C15207 +
                             C14661 * C14636 *
                                 (C14605 * C14606 +
                                  C14749 * bs[6] * std::pow(C14564, 6)) *
                                 C14573))) /
        C13915;
    const double C6746 = C6194 * C6528;
    const double C12650 = C10085 * C6528;
    const double C3534 = C13975 * C2859;
    const double C3532 = C13975 * C400;
    const double C3530 = C13975 * C397;
    const double C3528 = C13975 * C86;
    const double C3892 = C13975 * C3123;
    const double C3890 = C13975 * C1998;
    const double C3888 = C13975 * C850;
    const double C5660 = C13975 * C3122;
    const double C5658 = C13975 * C853;
    const double C6120 = C13975 * C5385;
    const double C13983 = C13975 / C13916;
    const double C13981 = C13910 * C13975;
    const double C13980 = 2 * C13975;
    const double C13982 = C13952 - C13976;
    const double C13979 = C13946 - C13974;
    const double C14254 = C14249 - C14250;
    const double C14258 = C14253 - C14246;
    const double C14202 = C14197 / C13916;
    const double C14201 = C14042 * C14197;
    const double C14247 = 2 * C14197;
    const double C14404 = C14399 - C14400;
    const double C14408 = C14403 - C14396;
    const double C14352 = C14347 / C13916;
    const double C14351 = C14045 * C14347;
    const double C14397 = 2 * C14347;
    const double C14633 = ae * C14632;
    const double C90 =
        (3 * C14600 + C14566 * C14632 + (2 * C14589 + C14566 * C14617) * ae) /
        C13909;
    const double C1302 = (C14636 * C14632) / C13909;
    const double C1644 = (C14661 * C14632) / C13909;
    const double C14998 = ae * C14997;
    const double C2896 =
        (3 * C14976 + C14636 * C14997 + (2 * C14970 + C14636 * C14988) * ae) /
        C13909;
    const double C4382 = (C14661 * C14997) / C13909;
    const double C15162 = ae * C15161;
    const double C5445 =
        (3 * C15140 + C14661 * C15161 + (2 * C15134 + C14661 * C15152) * ae) /
        C13909;
    const double C13989 = C13983 - C13971;
    const double C2496 = C13983 + (C13957 * ae) / C13909;
    const double C13987 = C13981 + C15670;
    const double C13988 = C13982 * be;
    const double C13986 = C13979 * ae;
    const double C385 = (-(be * C13920) / C13915) / C13916 -
                        ((2 * ((-C13919) / C13916 - (C13956 * be) / C13909) -
                          (C13910 * C13979 * be) / C13909) *
                         be) /
                            C13909 -
                        C13970;
    const double C387 =
        (-(C13979 * be) / C13909) / C13916 -
        ((2 * ((-C13940 / C13909) / C13916 - (0 * be) / C13909) - C13976) *
         be) /
            C13909;
    const double C7126 = -(C13979 * be) / C13909;
    const double C14259 = C14254 * be;
    const double C14261 = C14258 * ae;
    const double C6940 = -(C14258 * be) / C13909;
    const double C14220 = C14202 - C14216;
    const double C14206 = C14201 + C15686;
    const double C14409 = C14404 * be;
    const double C14411 = C14408 * ae;
    const double C9503 = -(C14408 * be) / C13909;
    const double C14370 = C14352 - C14366;
    const double C14356 = C14351 + C15687;
    const double C95 =
        (3 * (C14595 + C14598 + C14598 + C14566 * C14626) + C14633 + C14633 +
         C14566 *
             (2 * C14626 + C14630 + C14630 +
              C14566 * (C14621 + C14625 + C14625 +
                        C14566 * (2 * ae * C14615 +
                                  C14566 *
                                      (C14605 * C14606 +
                                       C14570 * bs[6] * std::pow(C14564, 6)) *
                                      C14573)))) /
        C13915;
    const double C1349 =
        (C14633 + C14636 * (2 * C14657 + ae * C14658 +
                            C14566 * (C14653 + ae * C14566 * C14654 +
                                      C14566 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14640)))) /
        C13915;
    const double C1420 =
        (C14633 + C14636 * (2 * C14696 + ae * C14658 +
                            C14566 * (C14694 + ae * C14566 * C14654 +
                                      C14566 * (ae * C14654 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14688)))) /
        C13915;
    const double C1723 =
        (C14633 + C14661 * (2 * C14682 + ae * C14683 +
                            C14566 * (C14678 + ae * C14566 * C14679 +
                                      C14566 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14665)))) /
        C13915;
    const double C1864 =
        (C14633 + C14661 * (2 * C14734 + ae * C14683 +
                            C14566 * (C14732 + ae * C14566 * C14679 +
                                      C14566 * (ae * C14679 +
                                                C14566 * std::pow(C14564, 6) *
                                                    bs[6] * C14726)))) /
        C13915;
    const double C101 = C80 * C90;
    const double C1312 = C1300 * C1302;
    const double C6802 = C6793 * C1302;
    const double C1650 = C1300 * C1644;
    const double C9229 = C6793 * C1644;
    const double C2977 =
        (3 * (C14705 + C14974 + C14974 + C14636 * C14985) + C14998 + C14998 +
         C14636 *
             (2 * C14985 + C14995 + C14995 +
              C14636 * (C14710 + C14991 + C14991 +
                        C14636 * (2 * ae * C14654 +
                                  C14636 *
                                      (C14605 * C14606 +
                                       C14700 * bs[6] * std::pow(C14564, 6)) *
                                      C14573)))) /
        C13915;
    const double C4598 =
        (C14998 + C14661 * (2 * C15011 + ae * C15005 +
                            C14636 * (C14745 + ae * C14636 * C14679 +
                                      C14636 * (ae * C14679 +
                                                C14636 * std::pow(C14564, 6) *
                                                    bs[6] * C14739)))) /
        C13915;
    const double C2983 = C2894 * C2896;
    const double C4494 = C3572 * C4382;
    const double C12200 = C7175 * C4382;
    const double C5598 =
        (3 * (C14754 + C15138 + C15138 + C14661 * C15149) + C15162 + C15162 +
         C14661 *
             (2 * C15149 + C15159 + C15159 +
              C14661 * (C14759 + C15155 + C15155 +
                        C14661 * (2 * ae * C14679 +
                                  C14661 *
                                      (C14605 * C14606 +
                                       C14749 * bs[6] * std::pow(C14564, 6)) *
                                      C14573)))) /
        C13915;
    const double C6636 =
        (C15162 + C14636 * (2 * C15100 + ae * C15123 +
                            C14661 * (C14721 + ae * C14661 * C14654 +
                                      C14661 * (ae * C14654 +
                                                C14661 * std::pow(C14564, 6) *
                                                    bs[6] * C14715)))) /
        C13915;
    const double C5604 = C5443 * C5445;
    const double C7953 = C13989 * C401;
    const double C7950 = C13989 * C398;
    const double C7947 = C13989 * C87;
    const double C8328 = C13989 * C1999;
    const double C8325 = C13989 * C851;
    const double C10797 = C13989 * C854;
    const double C78 =
        (C13989 / C13916 + ((C13910 * C14018 + C7935) * ae) / C13909) / C13916 -
        ((C13910 * (C14018 / C13916 + (0 * ae) / C13909) + C15685) * be) /
            C13909;
    const double C1298 =
        C13989 / C13916 - ((C13910 * C14018 + C7935) * be) / C13909;
    const double C6791 =
        C13989 / C13916 + ((C13910 * C14018 + C7935) * ae) / C13909;
    const double C2507 = C2496 * C401;
    const double C2504 = C2496 * C398;
    const double C2501 = C2496 * C87;
    const double C4682 = C2496 * C854;
    const double C4679 = C2496 * C851;
    const double C11625 = C2496 * C1999;
    const double C13991 = C13987 * be;
    const double C2494 = C13963 + (C13987 * ae) / C13909 + C13948;
    const double C13993 = C13988 / C13909;
    const double C13992 = C13986 / C13928;
    const double C13990 = C13910 * C13986;
    const double C3520 = C13986 / C13909;
    const double C14262 = C14259 / C13909;
    const double C14265 = C14261 / C13928;
    const double C14264 = C14042 * C14261;
    const double C8120 = C14220 * C463;
    const double C8117 = C14220 * C461;
    const double C8114 = C14220 * C459;
    const double C8988 = C14220 * C2058;
    const double C8985 = C14220 * C2057;
    const double C13742 = C14220 * C3173;
    const double C2893 =
        (C14220 / C13916 + ((C14042 * C14231 + C7938) * ae) / C13909) / C13916 -
        ((C14042 * (C14231 / C13916 + (0 * ae) / C13909) + C15694) * be) /
            C13909;
    const double C3571 =
        C14220 / C13916 - ((C14042 * C14231 + C7938) * be) / C13909;
    const double C7174 =
        C14220 / C13916 + ((C14042 * C14231 + C7938) * ae) / C13909;
    const double C14210 = C14206 * be;
    const double C14412 = C14409 / C13909;
    const double C14415 = C14411 / C13928;
    const double C14414 = C14045 * C14411;
    const double C11116 = C14370 * C963;
    const double C11113 = C14370 * C961;
    const double C11110 = C14370 * C959;
    const double C11572 = C14370 * C2114;
    const double C11569 = C14370 * C2113;
    const double C13897 = C14370 * C3217;
    const double C5442 =
        (C14370 / C13916 + ((C14045 * C14381 + C10794) * ae) / C13909) /
            C13916 -
        ((C14045 * (C14381 / C13916 + (0 * ae) / C13909) + C15701) * be) /
            C13909;
    const double C6193 =
        C14370 / C13916 - ((C14045 * C14381 + C10794) * be) / C13909;
    const double C10084 =
        C14370 / C13916 + ((C14045 * C14381 + C10794) * ae) / C13909;
    const double C14360 = C14356 * be;
    const double C100 = C78 * C89;
    const double C1311 = C1298 * C399;
    const double C1307 = C1298 * C88;
    const double C1649 = C1298 * C852;
    const double C6801 = C6791 * C399;
    const double C6797 = C6791 * C88;
    const double C9228 = C6791 * C852;
    const double C13995 = C13991 / C13909;
    const double C2506 = C2494 * C400;
    const double C2503 = C2494 * C397;
    const double C2500 = C2494 * C86;
    const double C4681 = C2494 * C853;
    const double C4678 = C2494 * C850;
    const double C11624 = C2494 * C1998;
    const double C13996 = C13992 - C13993;
    const double C2495 = C13992 + (C13982 * ae) / C13909;
    const double C13994 = C13990 / C13909;
    const double C14268 = C14265 - C14262;
    const double C14267 = C14264 / C13909;
    const double C2982 = C2893 * C2895;
    const double C3692 = C3571 * C462;
    const double C3688 = C3571 * C460;
    const double C4493 = C3571 * C3172;
    const double C7289 = C7174 * C462;
    const double C7285 = C7174 * C460;
    const double C12199 = C7174 * C3172;
    const double C14215 = C14210 / C13909;
    const double C14418 = C14415 - C14412;
    const double C14417 = C14414 / C13909;
    const double C5603 = C5442 * C5444;
    const double C6419 = C6193 * C962;
    const double C6415 = C6193 * C960;
    const double C6745 = C6193 * C3216;
    const double C10301 = C10084 * C962;
    const double C10297 = C10084 * C960;
    const double C12649 = C10084 * C3216;
    const double C14365 = C14360 / C13909;
    const double C13998 = C13963 - C13995;
    const double C77 =
        (C13996 / C13916 + ((C14019 - C13968 / C14016) * ae) / C13909) /
            C13916 -
        ((2 * (C14018 / C13916 + (0 * ae) / C13909) -
          C13968 / (C13909 * 4 * C13925)) *
         be) /
            C13909;
    const double C1297 =
        C13996 / C13916 - ((C14019 - C13968 / C14016) * be) / C13909;
    const double C6790 =
        C13996 / C13916 + ((C14019 - C13968 / C14016) * ae) / C13909;
    const double C13997 = C13994 + C13980;
    const double C2974 =
        (C14268 / C13916 + ((C14278 - C14082 / C14016) * ae) / C13909) /
            C13916 -
        ((2 * (C14231 / C13916 + (0 * ae) / C13909) -
          C14082 / (C13909 * 4 * C13925)) *
         be) /
            C13909;
    const double C3682 =
        C14268 / C13916 - ((C14278 - C14082 / C14016) * be) / C13909;
    const double C7280 =
        C14268 / C13916 + ((C14278 - C14082 / C14016) * ae) / C13909;
    const double C14270 = C14267 + C14247;
    const double C14219 = C14214 - C14215;
    const double C5595 =
        (C14418 / C13916 + ((C14428 - C14108 / C14016) * ae) / C13909) /
            C13916 -
        ((2 * (C14381 / C13916 + (0 * ae) / C13909) -
          C14108 / (C13909 * 4 * C13925)) *
         be) /
            C13909;
    const double C6409 =
        C14418 / C13916 - ((C14428 - C14108 / C14016) * be) / C13909;
    const double C10292 =
        C14418 / C13916 + ((C14428 - C14108 / C14016) * ae) / C13909;
    const double C14420 = C14417 + C14397;
    const double C14369 = C14364 - C14365;
    const double C14000 = C13998 + C13948;
    const double C13999 = C13997 * be;
    const double C2493 = C13938 + (C13997 * ae) / C13909 - C13970;
    const double C14272 = C14270 * be;
    const double C14223 = C14219 + C14198;
    const double C14422 = C14420 * be;
    const double C14373 = C14369 + C14348;
    const double C7952 = C14000 * C400;
    const double C7949 = C14000 * C397;
    const double C7946 = C14000 * C86;
    const double C8327 = C14000 * C1998;
    const double C8324 = C14000 * C850;
    const double C10796 = C14000 * C853;
    const double C72 =
        (((((0 - (C13910 * C13908) / C13909) * ae) / C13909 -
           (0 * be) / C13928 + (2 * C13911) / C13909) /
              C13916 -
          ((C13910 * C13958 + 0) * be) / C13909 + C13937 - C13950) /
             C13916 +
         ((C13910 * C13985 + 0) * ae) / C13909) /
            C13916 -
        ((C13910 * (C13985 / C13916 +
                    ((C13910 * C14000 + C15370) * ae) / C13909 + C13989) +
          C15750) *
         be) /
            C13909 +
        C14000 / C13916 + ((C13910 * C13989 + C15378) * ae) / C13909 +
        2 * (C13948 / C13916 - (0 * be) / C13909);
    const double C74 =
        (C13985 / C13916 + ((C13910 * C14000 + C15370) * ae) / C13909 +
         C13989) /
            C13916 -
        ((C13910 * (C14000 / C13916 +
                    ((C13910 * C13989 + C15378) * ae) / C13909 + C14019) +
          C15743) *
         be) /
            C13909 +
        2 * (C13989 / C13916 + ((C13910 * C14018 + C7935) * ae) / C13909);
    const double C76 = (C14000 / C13916 +
                        ((C13910 * C13989 + C15378) * ae) / C13909 + C14019) /
                           C13916 -
                       ((C13910 * (C13989 / C13916 +
                                   ((C13910 * C14018 + C7935) * ae) / C13909) +
                         C15730) *
                        be) /
                           C13909 +
                       3 * (C14018 / C13916 + (0 * ae) / C13909);
    const double C1294 =
        C13985 / C13916 - ((C13910 * C14000 + C15370) * be) / C13909 + C13989;
    const double C1296 =
        C14000 / C13916 - ((C13910 * C13989 + C15378) * be) / C13909 + C14019;
    const double C6787 =
        C13985 / C13916 + ((C13910 * C14000 + C15370) * ae) / C13909 + C13989;
    const double C6789 =
        C14000 / C13916 + ((C13910 * C13989 + C15378) * ae) / C13909 + C14019;
    const double C14001 = C13999 / C13909;
    const double C14273 = C14272 / C13909;
    const double C8119 = C14223 * C126;
    const double C8116 = C14223 * C125;
    const double C8113 = C14223 * C124;
    const double C8987 = C14223 * C907;
    const double C8984 = C14223 * C906;
    const double C13741 = C14223 * C909;
    const double C2890 =
        (((((0 - (C14042 * C14181) / C13909) * ae) / C13909 -
           (0 * be) / C13928 + (2 * C14182) / C13909) /
              C13916 -
          ((C14042 * C14217 + 0) * be) / C13909 + C14191 - C14205) /
             C13916 +
         ((C14042 * C14225 + 0) * ae) / C13909) /
            C13916 -
        ((C14042 * (C14225 / C13916 +
                    ((C14042 * C14223 + C15461) * ae) / C13909 + C14220) +
          C15751) *
         be) /
            C13909 +
        C14223 / C13916 + ((C14042 * C14220 + C15468) * ae) / C13909 +
        2 * (C14198 / C13916 - (0 * be) / C13909);
    const double C2891 =
        (C14225 / C13916 + ((C14042 * C14223 + C15461) * ae) / C13909 +
         C14220) /
            C13916 -
        ((C14042 * (C14223 / C13916 +
                    ((C14042 * C14220 + C15468) * ae) / C13909 + 2 * C14231) +
          C15747) *
         be) /
            C13909 +
        2 * (C14220 / C13916 + ((C14042 * C14231 + C7938) * ae) / C13909);
    const double C2892 =
        (C14223 / C13916 + ((C14042 * C14220 + C15468) * ae) / C13909 +
         2 * C14231) /
            C13916 -
        ((C14042 *
              (C14220 / C13916 + ((C14042 * C14231 + C7938) * ae) / C13909) +
          C15737) *
         be) /
            C13909 +
        3 * (C14231 / C13916 + (0 * ae) / C13909);
    const double C3569 =
        C14225 / C13916 - ((C14042 * C14223 + C15461) * be) / C13909 + C14220;
    const double C3570 =
        C14223 / C13916 - ((C14042 * C14220 + C15468) * be) / C13909 + C14278;
    const double C7172 =
        C14225 / C13916 + ((C14042 * C14223 + C15461) * ae) / C13909 + C14220;
    const double C7173 =
        C14223 / C13916 + ((C14042 * C14220 + C15468) * ae) / C13909 + C14278;
    const double C14423 = C14422 / C13909;
    const double C11115 = C14373 * C159;
    const double C11112 = C14373 * C158;
    const double C11109 = C14373 * C157;
    const double C11571 = C14373 * C510;
    const double C11568 = C14373 * C509;
    const double C13896 = C14373 * C512;
    const double C5439 =
        (((((0 - (C14045 * C14331) / C13909) * ae) / C13909 -
           (0 * be) / C13928 + (2 * C14332) / C13909) /
              C13916 -
          ((C14045 * C14367 + 0) * be) / C13909 + C14341 - C14355) /
             C13916 +
         ((C14045 * C14375 + 0) * ae) / C13909) /
            C13916 -
        ((C14045 * (C14375 / C13916 +
                    ((C14045 * C14373 + C15501) * ae) / C13909 + C14370) +
          C15752) *
         be) /
            C13909 +
        C14373 / C13916 + ((C14045 * C14370 + C15508) * ae) / C13909 +
        2 * (C14348 / C13916 - (0 * be) / C13909);
    const double C5440 =
        (C14375 / C13916 + ((C14045 * C14373 + C15501) * ae) / C13909 +
         C14370) /
            C13916 -
        ((C14045 * (C14373 / C13916 +
                    ((C14045 * C14370 + C15508) * ae) / C13909 + 2 * C14381) +
          C15749) *
         be) /
            C13909 +
        2 * (C14370 / C13916 + ((C14045 * C14381 + C10794) * ae) / C13909);
    const double C5441 =
        (C14373 / C13916 + ((C14045 * C14370 + C15508) * ae) / C13909 +
         2 * C14381) /
            C13916 -
        ((C14045 *
              (C14370 / C13916 + ((C14045 * C14381 + C10794) * ae) / C13909) +
          C15740) *
         be) /
            C13909 +
        3 * (C14381 / C13916 + (0 * ae) / C13909);
    const double C6191 =
        C14375 / C13916 - ((C14045 * C14373 + C15501) * be) / C13909 + C14370;
    const double C6192 =
        C14373 / C13916 - ((C14045 * C14370 + C15508) * be) / C13909 + C14428;
    const double C10082 =
        C14375 / C13916 + ((C14045 * C14373 + C15501) * ae) / C13909 + C14370;
    const double C10083 =
        C14373 / C13916 + ((C14045 * C14370 + C15508) * ae) / C13909 + C14428;
    const double C97 = C72 * C86;
    const double C98 = C74 * C87;
    const double C99 = C76 * C88;
    const double C1309 = C1294 * C397;
    const double C1305 = C1294 * C86;
    const double C1647 = C1294 * C850;
    const double C1310 = C1296 * C398;
    const double C1306 = C1296 * C87;
    const double C1648 = C1296 * C851;
    const double C6799 = C6787 * C397;
    const double C6795 = C6787 * C86;
    const double C9226 = C6787 * C850;
    const double C6800 = C6789 * C398;
    const double C6796 = C6789 * C87;
    const double C9227 = C6789 * C851;
    const double C14002 = C13938 - C14001;
    const double C14274 = C14257 - C14273;
    const double C2979 = C2890 * C124;
    const double C2980 = C2891 * C459;
    const double C2981 = C2892 * C460;
    const double C3690 = C3569 * C125;
    const double C3686 = C3569 * C124;
    const double C4491 = C3569 * C906;
    const double C3691 = C3570 * C461;
    const double C3687 = C3570 * C459;
    const double C4492 = C3570 * C2057;
    const double C7287 = C7172 * C125;
    const double C7283 = C7172 * C124;
    const double C12197 = C7172 * C906;
    const double C7288 = C7173 * C461;
    const double C7284 = C7173 * C459;
    const double C12198 = C7173 * C2057;
    const double C14424 = C14407 - C14423;
    const double C5600 = C5439 * C157;
    const double C5601 = C5440 * C959;
    const double C5602 = C5441 * C960;
    const double C6417 = C6191 * C158;
    const double C6413 = C6191 * C157;
    const double C6743 = C6191 * C509;
    const double C6418 = C6192 * C961;
    const double C6414 = C6192 * C959;
    const double C6744 = C6192 * C2113;
    const double C10299 = C10082 * C158;
    const double C10295 = C10082 * C157;
    const double C12647 = C10082 * C509;
    const double C10300 = C10083 * C961;
    const double C10296 = C10083 * C959;
    const double C12648 = C10083 * C2113;
    const double C14003 = C14002 - C13970;
    const double C14275 = C14274 - C14248;
    const double C14425 = C14424 - C14398;
    const double C71 =
        (((ae * -2 * C13908) / C13925 -
          (((C13910 * C13926) / C13915 + 2 * C13958) * be) / C13909 -
          C13929 / C13915) /
             C13916 +
         ((C13910 * C13984 + 2 * C13985) * ae) / C13909) /
            C13916 -
        ((C13910 * (C13984 / C13916 +
                    ((C13910 * C14003 + 2 * C14000) * ae) / C13909 + C13996) +
          2 * (C13985 / C13916 + ((C13910 * C14000 + C15370) * ae) / C13909 +
               C13989)) *
         be) /
            C13909 +
        C14003 / C13916 + ((C13910 * C13996 + 2 * C13989) * ae) / C13909 +
        (-2 * C13961) / (C13909 * 4 * C13915);
    const double C73 =
        (C13984 / C13916 + ((C13910 * C14003 + 2 * C14000) * ae) / C13909 +
         C13996) /
            C13916 -
        ((C13910 * (C14003 / C13916 +
                    ((C13910 * C13996 + 2 * C13989) * ae) / C13909 +
                    (-2 * C13961) / C14016) +
          2 * (C14000 / C13916 + ((C13910 * C13989 + C15378) * ae) / C13909 +
               C14019)) *
         be) /
            C13909 +
        2 * (C13996 / C13916 + ((C14019 - C13968 / C14016) * ae) / C13909);
    const double C75 =
        (C14003 / C13916 + ((C13910 * C13996 + 2 * C13989) * ae) / C13909 +
         (-2 * C13961) / C14016) /
            C13916 -
        ((C13910 *
              (C13996 / C13916 + ((C14019 - C13968 / C14016) * ae) / C13909) +
          2 * (C13989 / C13916 + ((C13910 * C14018 + C7935) * ae) / C13909)) *
         be) /
            C13909 +
        (-3 * C13961) / (C13909 * 4 * C13925);
    const double C1293 = C13984 / C13916 -
                         ((C13910 * C14003 + 2 * C14000) * be) / C13909 +
                         C13996;
    const double C1295 = C14003 / C13916 -
                         ((C13910 * C13996 + 2 * C13989) * be) / C13909 +
                         (-2 * C13961) / C14016;
    const double C6786 = C13984 / C13916 +
                         ((C13910 * C14003 + 2 * C14000) * ae) / C13909 +
                         C13996;
    const double C6788 = C14003 / C13916 +
                         ((C13910 * C13996 + 2 * C13989) * ae) / C13909 +
                         (-2 * C13961) / C14016;
    const double C2971 =
        (((ae * -2 * C14181) / C13925 -
          (((C14042 * C14251) / C13915 + 2 * C14217) * be) / C13909 -
          C14252 / C13915) /
             C13916 +
         ((C14042 * C14271 + 2 * C14225) * ae) / C13909) /
            C13916 -
        ((C14042 * (C14271 / C13916 +
                    ((C14042 * C14275 + 2 * C14223) * ae) / C13909 + C14268) +
          2 * (C14225 / C13916 + ((C14042 * C14223 + C15461) * ae) / C13909 +
               C14220)) *
         be) /
            C13909 +
        C14275 / C13916 + ((C14042 * C14268 + 2 * C14220) * ae) / C13909 +
        (-2 * C14079) / C14016;
    const double C2972 =
        (C14271 / C13916 + ((C14042 * C14275 + 2 * C14223) * ae) / C13909 +
         C14268) /
            C13916 -
        ((C14042 * (C14275 / C13916 +
                    ((C14042 * C14268 + 2 * C14220) * ae) / C13909 +
                    (-2 * C14079) / C14016) +
          2 * (C14223 / C13916 + ((C14042 * C14220 + C15468) * ae) / C13909 +
               C14278)) *
         be) /
            C13909 +
        2 * (C14268 / C13916 + ((C14278 - C14082 / C14016) * ae) / C13909);
    const double C2973 =
        (C14275 / C13916 + ((C14042 * C14268 + 2 * C14220) * ae) / C13909 +
         (-2 * C14079) / C14016) /
            C13916 -
        ((C14042 *
              (C14268 / C13916 + ((C14278 - C14082 / C14016) * ae) / C13909) +
          2 * (C14220 / C13916 + ((C14042 * C14231 + C7938) * ae) / C13909)) *
         be) /
            C13909 +
        (-3 * C14079) / (C13909 * 4 * C13925);
    const double C3680 = C14271 / C13916 -
                         ((C14042 * C14275 + 2 * C14223) * be) / C13909 +
                         C14268;
    const double C3681 = C14275 / C13916 -
                         ((C14042 * C14268 + 2 * C14220) * be) / C13909 +
                         (-2 * C14079) / C14016;
    const double C7278 = C14271 / C13916 +
                         ((C14042 * C14275 + 2 * C14223) * ae) / C13909 +
                         C14268;
    const double C7279 = C14275 / C13916 +
                         ((C14042 * C14268 + 2 * C14220) * ae) / C13909 +
                         (-2 * C14079) / C14016;
    const double C5592 =
        (((ae * -2 * C14331) / C13925 -
          (((C14045 * C14401) / C13915 + 2 * C14367) * be) / C13909 -
          C14402 / C13915) /
             C13916 +
         ((C14045 * C14421 + 2 * C14375) * ae) / C13909) /
            C13916 -
        ((C14045 * (C14421 / C13916 +
                    ((C14045 * C14425 + 2 * C14373) * ae) / C13909 + C14418) +
          2 * (C14375 / C13916 + ((C14045 * C14373 + C15501) * ae) / C13909 +
               C14370)) *
         be) /
            C13909 +
        C14425 / C13916 + ((C14045 * C14418 + 2 * C14370) * ae) / C13909 +
        (-2 * C14105) / C14016;
    const double C5593 =
        (C14421 / C13916 + ((C14045 * C14425 + 2 * C14373) * ae) / C13909 +
         C14418) /
            C13916 -
        ((C14045 * (C14425 / C13916 +
                    ((C14045 * C14418 + 2 * C14370) * ae) / C13909 +
                    (-2 * C14105) / C14016) +
          2 * (C14373 / C13916 + ((C14045 * C14370 + C15508) * ae) / C13909 +
               C14428)) *
         be) /
            C13909 +
        2 * (C14418 / C13916 + ((C14428 - C14108 / C14016) * ae) / C13909);
    const double C5594 =
        (C14425 / C13916 + ((C14045 * C14418 + 2 * C14370) * ae) / C13909 +
         (-2 * C14105) / C14016) /
            C13916 -
        ((C14045 *
              (C14418 / C13916 + ((C14428 - C14108 / C14016) * ae) / C13909) +
          2 * (C14370 / C13916 + ((C14045 * C14381 + C10794) * ae) / C13909)) *
         be) /
            C13909 +
        (-3 * C14105) / (C13909 * 4 * C13925);
    const double C6407 = C14421 / C13916 -
                         ((C14045 * C14425 + 2 * C14373) * be) / C13909 +
                         C14418;
    const double C6408 = C14425 / C13916 -
                         ((C14045 * C14418 + 2 * C14370) * be) / C13909 +
                         (-2 * C14105) / C14016;
    const double C10290 = C14421 / C13916 +
                          ((C14045 * C14425 + 2 * C14373) * ae) / C13909 +
                          C14418;
    const double C10291 = C14425 / C13916 +
                          ((C14045 * C14418 + 2 * C14370) * ae) / C13909 +
                          (-2 * C14105) / C14016;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C14003 * C81 + C7946 + C7946 + C15370 * C91 + C13996 * C82 + C7947 +
           C7947 + C15378 * C92 + C7943 * C83 + C7948 + C7948 + C7935 * C93) *
              C15418 * C15461 +
          (C14003 * C391 + C7949 + C7949 + C15370 * C403 + C13996 * C392 +
           C7950 + C7950 + C15378 * C404 + C7943 * C393 + C7951 + C7951 +
           C7935 * C405) *
              C15418 * C15468 +
          (C14003 * C394 + C7952 + C7952 + C15370 * C406 + C13996 * C395 +
           C7953 + C7953 + C15378 * C407 + C7943 * C396 + C7954 + C7954 +
           C7935 * C408) *
              C15418 * C7938) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                    C15468 * C459 + C14231 * C394 + C7938 * C460) *
                       C14000 +
                   (C14223 * C86 + C15461 * C129 + C14220 * C397 +
                    C15468 * C465 + C14231 * C400 + C7938 * C466) *
                       C15370 +
                   (C14223 * C82 + C15461 * C125 + C14220 * C392 +
                    C15468 * C461 + C14231 * C395 + C7938 * C462) *
                       C13989 +
                   (C14223 * C87 + C15461 * C130 + C14220 * C398 +
                    C15468 * C467 + C14231 * C401 + C7938 * C468) *
                       C15378 +
                   (C14223 * C83 + C15461 * C126 + C14220 * C393 +
                    C15468 * C463 + C14231 * C396 + C7938 * C464) *
                       C14018 +
                   (C14223 * C88 + C15461 * C131 + C14220 * C399 +
                    C15468 * C469 + C14231 * C402 + C7938 * C470) *
                       C7935) *
                  C15418 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C14000 +
                    (C156 * C86 + C15418 * C162) * C15370 +
                    (C156 * C82 + C15418 * C158) * C13989 +
                    (C156 * C87 + C15418 * C163) * C15378 +
                    (C156 * C83 + C15418 * C159) * C14018 +
                    (C156 * C88 + C15418 * C164) * C7935) *
                       C15461 +
                   ((C156 * C391 + C15418 * C509) * C14000 +
                    (C156 * C397 + C15418 * C515) * C15370 +
                    (C156 * C392 + C15418 * C510) * C13989 +
                    (C156 * C398 + C15418 * C516) * C15378 +
                    (C156 * C393 + C15418 * C511) * C14018 +
                    (C156 * C399 + C15418 * C517) * C7935) *
                       C15468 +
                   ((C156 * C394 + C15418 * C512) * C14000 +
                    (C156 * C400 + C15418 * C518) * C15370 +
                    (C156 * C395 + C15418 * C513) * C13989 +
                    (C156 * C401 + C15418 * C519) * C15378 +
                    (C156 * C396 + C15418 * C514) * C14018 +
                    (C156 * C402 + C15418 * C520) * C7935) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14000 * C81 + C15370 * C86 + C13989 * C82 + C15378 * C87 +
                    C14018 * C83 + C7935 * C88) *
                       C14223 +
                   (C14000 * C124 + C15370 * C189 + C13989 * C125 +
                    C15378 * C190 + C14018 * C126 + C7935 * C191) *
                       C15461 +
                   (C14000 * C391 + C15370 * C397 + C13989 * C392 +
                    C15378 * C398 + C14018 * C393 + C7935 * C399) *
                       C14220 +
                   (C14000 * C459 + C15370 * C559 + C13989 * C461 +
                    C15378 * C560 + C14018 * C463 + C7935 * C561) *
                       C15468 +
                   (C14000 * C394 + C15370 * C400 + C13989 * C395 +
                    C15378 * C401 + C14018 * C396 + C7935 * C402) *
                       C14231 +
                   (C14000 * C460 + C15370 * C562 + C13989 * C462 +
                    C15378 * C563 + C14018 * C464 + C7935 * C564) *
                       C7938) *
                  C15418 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14275 * C81 + C8113 + C8113 + C15461 * C217 +
                    C14268 * C391 + C8114 + C8114 + C15468 * C606 +
                    C8111 * C394 + C8115 + C8115 + C7938 * C607) *
                       C15370 +
                   (C14275 * C82 + C8116 + C8116 + C15461 * C218 +
                    C14268 * C392 + C8117 + C8117 + C15468 * C608 +
                    C8111 * C395 + C8118 + C8118 + C7938 * C609) *
                       C15378 +
                   (C14275 * C83 + C8119 + C8119 + C15461 * C219 +
                    C14268 * C393 + C8120 + C8120 + C15468 * C610 +
                    C8111 * C396 + C8121 + C8121 + C7938 * C611) *
                       C7935) *
                  C15418 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C14223 +
                    (C156 * C124 + C15418 * C249) * C15461 +
                    (C156 * C391 + C15418 * C509) * C14220 +
                    (C156 * C459 + C15418 * C659) * C15468 +
                    (C156 * C394 + C15418 * C512) * C14231 +
                    (C156 * C460 + C15418 * C660) * C7938) *
                       C15370 +
                   ((C156 * C82 + C15418 * C158) * C14223 +
                    (C156 * C125 + C15418 * C250) * C15461 +
                    (C156 * C392 + C15418 * C510) * C14220 +
                    (C156 * C461 + C15418 * C661) * C15468 +
                    (C156 * C395 + C15418 * C513) * C14231 +
                    (C156 * C462 + C15418 * C662) * C7938) *
                       C15378 +
                   ((C156 * C83 + C15418 * C159) * C14223 +
                    (C156 * C126 + C15418 * C251) * C15461 +
                    (C156 * C393 + C15418 * C511) * C14220 +
                    (C156 * C463 + C15418 * C663) * C15468 +
                    (C156 * C396 + C15418 * C514) * C14231 +
                    (C156 * C464 + C15418 * C664) * C7938) *
                       C7935) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14000 * C81 + C15370 * C86 + C13989 * C82 + C15378 * C87 +
                     C14018 * C83 + C7935 * C88) *
                        C156 +
                    (C14000 * C157 + C15370 * C276 + C13989 * C158 +
                     C15378 * C277 + C14018 * C159 + C7935 * C278) *
                        C15418) *
                       C15461 +
                   ((C14000 * C391 + C15370 * C397 + C13989 * C392 +
                     C15378 * C398 + C14018 * C393 + C7935 * C399) *
                        C156 +
                    (C14000 * C509 + C15370 * C703 + C13989 * C510 +
                     C15378 * C704 + C14018 * C511 + C7935 * C705) *
                        C15418) *
                       C15468 +
                   ((C14000 * C394 + C15370 * C400 + C13989 * C395 +
                     C15378 * C401 + C14018 * C396 + C7935 * C402) *
                        C156 +
                    (C14000 * C512 + C15370 * C706 + C13989 * C513 +
                     C15378 * C707 + C14018 * C514 + C7935 * C708) *
                        C15418) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C156 +
                    (C14223 * C157 + C15461 * C303 + C14220 * C509 +
                     C15468 * C747 + C14231 * C512 + C7938 * C748) *
                        C15418) *
                       C15370 +
                   ((C14223 * C82 + C15461 * C125 + C14220 * C392 +
                     C15468 * C461 + C14231 * C395 + C7938 * C462) *
                        C156 +
                    (C14223 * C158 + C15461 * C304 + C14220 * C510 +
                     C15468 * C749 + C14231 * C513 + C7938 * C750) *
                        C15418) *
                       C15378 +
                   ((C14223 * C83 + C15461 * C126 + C14220 * C393 +
                     C15468 * C463 + C14231 * C396 + C7938 * C464) *
                        C156 +
                    (C14223 * C159 + C15461 * C305 + C14220 * C511 +
                     C15468 * C751 + C14231 * C514 + C7938 * C752) *
                        C15418) *
                       C7935) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C330 * C81 + C337 + C337 + C15418 * C331) * C15461 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C15468 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C7938) *
                       C15370 +
                   ((C330 * C82 + C338 + C338 + C15418 * C332) * C15461 +
                    (C330 * C392 + C800 + C800 + C15418 * C793) * C15468 +
                    (C330 * C395 + C801 + C801 + C15418 * C794) * C7938) *
                       C15378 +
                   ((C330 * C83 + C339 + C339 + C15418 * C333) * C15461 +
                    (C330 * C393 + C802 + C802 + C15418 * C795) * C15468 +
                    (C330 * C396 + C803 + C803 + C15418 * C796) * C7938) *
                       C7935) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 +
                     C7132 + C7132 + C15375 * C92) *
                        C15687 +
                    (C7126 * C844 + C7477 + C7477 + C7120 * C856 +
                     C7128 * C845 + C7478 + C7478 + C15375 * C857) *
                        C15505) *
                       C15461 +
                   ((C7126 * C391 + C7133 + C7133 + C7120 * C403 +
                     C7128 * C392 + C7134 + C7134 + C15375 * C404) *
                        C15687 +
                    (C7126 * C1995 + C7481 + C7481 + C7120 * C2001 +
                     C7128 * C1996 + C7482 + C7482 + C15375 * C2002) *
                        C15505) *
                       C15468 +
                   ((C7126 * C394 + C7135 + C7135 + C7120 * C406 +
                     C7128 * C395 + C7136 + C7136 + C15375 * C407) *
                        C15687 +
                    (C7126 * C3120 + C8782 + C8782 + C7120 * C3126 +
                     C7128 * C3884 + C8783 + C8783 + C15375 * C3886) *
                        C15505) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C7127 +
                    (C14223 * C86 + C15461 * C129 + C14220 * C397 +
                     C15468 * C465 + C14231 * C400 + C7938 * C466) *
                        C7120 +
                    (C14223 * C82 + C15461 * C125 + C14220 * C392 +
                     C15468 * C461 + C14231 * C395 + C7938 * C462) *
                        C7129 +
                    (C14223 * C87 + C15461 * C130 + C14220 * C398 +
                     C15468 * C467 + C14231 * C401 + C7938 * C468) *
                        C15375) *
                       C15687 +
                   ((C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                     C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                        C7127 +
                    (C14223 * C850 + C15461 * C912 + C14220 * C1998 +
                     C15468 * C2060 + C14231 * C3123 + C7938 * C3175) *
                        C7120 +
                    (C14223 * C845 + C15461 * C907 + C14220 * C1996 +
                     C15468 * C2058 + C14231 * C3884 + C7938 * C3943) *
                        C7129 +
                    (C14223 * C851 + C15461 * C913 + C14220 * C1999 +
                     C15468 * C2061 + C14231 * C3885 + C7938 * C3944) *
                        C15375) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C7127 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C7120 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C7129 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) *
               C15375) *
              C15461 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C7127 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C7120 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C7129 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C15375) *
              C15468 +
          ((C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C7127 +
           (C1720 * C400 + C15687 * C518 + C1721 * C3123 + C15505 * C3220) *
               C7120 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C7129 +
           (C1720 * C401 + C15687 * C519 + C1721 * C3885 + C15505 * C3996) *
               C15375) *
              C7938) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C14223 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C15461 +
           (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C14220 +
           (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
               C15468 +
           (C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) *
               C14231 +
           (C7127 * C460 + C7120 * C562 + C7129 * C462 + C15375 * C563) *
               C7938) *
              C15687 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C14223 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C15461 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C14220 +
           (C7127 * C2057 + C7120 * C2169 + C7129 * C2058 + C15375 * C2170) *
               C15468 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C14231 +
           (C7127 * C3172 + C7120 * C3260 + C7129 * C3943 + C15375 * C4047) *
               C7938) *
              C15505) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14275 * C81 + C8113 + C8113 + C15461 * C217 +
                     C14268 * C391 + C8114 + C8114 + C15468 * C606 +
                     C8111 * C394 + C8115 + C8115 + C7938 * C607) *
                        C7120 +
                    (C14275 * C82 + C8116 + C8116 + C15461 * C218 +
                     C14268 * C392 + C8117 + C8117 + C15468 * C608 +
                     C8111 * C395 + C8118 + C8118 + C7938 * C609) *
                        C15375) *
                       C15687 +
                   ((C14275 * C844 + C8984 + C8984 + C15461 * C1053 +
                     C14268 * C1995 + C8985 + C8985 + C15468 * C2222 +
                     C8111 * C3120 + C8986 + C8986 + C7938 * C3301) *
                        C7120 +
                    (C14275 * C845 + C8987 + C8987 + C15461 * C1054 +
                     C14268 * C1996 + C8988 + C8988 + C15468 * C2223 +
                     C8111 * C3884 + C8989 + C8989 + C7938 * C4098) *
                        C15375) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C14223 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C15461 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C14220 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C15468 +
           (C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C14231 +
           (C1720 * C460 + C15687 * C660 + C1721 * C3172 + C15505 * C3349) *
               C7938) *
              C7120 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C14223 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C15461 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C14220 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C15468 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C14231 +
           (C1720 * C462 + C15687 * C662 + C1721 * C3943 + C15505 * C4152) *
               C7938) *
              C15375) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C1720 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C15687 +
           (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C1721 +
           (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
               C15505) *
              C15461 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C1720 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C15687 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C1721 +
           (C7127 * C2113 + C7120 * C2334 + C7129 * C2114 + C15375 * C2335) *
               C15505) *
              C15468 +
          ((C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) *
               C1720 +
           (C7127 * C512 + C7120 * C706 + C7129 * C513 + C15375 * C707) *
               C15687 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C1721 +
           (C7127 * C3217 + C7120 * C3390 + C7129 * C3995 + C15375 * C4203) *
               C15505) *
              C7938) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C1720 +
                    (C14223 * C157 + C15461 * C303 + C14220 * C509 +
                     C15468 * C747 + C14231 * C512 + C7938 * C748) *
                        C15687 +
                    (C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                     C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                        C1721 +
                    (C14223 * C959 + C15461 * C1191 + C14220 * C2113 +
                     C15468 * C2387 + C14231 * C3217 + C7938 * C3430) *
                        C15505) *
                       C7120 +
                   ((C14223 * C82 + C15461 * C125 + C14220 * C392 +
                     C15468 * C461 + C14231 * C395 + C7938 * C462) *
                        C1720 +
                    (C14223 * C158 + C15461 * C304 + C14220 * C510 +
                     C15468 * C749 + C14231 * C513 + C7938 * C750) *
                        C15687 +
                    (C14223 * C845 + C15461 * C907 + C14220 * C1996 +
                     C15468 * C2058 + C14231 * C3884 + C7938 * C3943) *
                        C1721 +
                    (C14223 * C961 + C15461 * C1193 + C14220 * C2114 +
                     C15468 * C2388 + C14231 * C3995 + C7938 * C4254) *
                        C15505) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                     C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                        C15461 +
                    (C1934 * C391 + C2444 + C2444 + C15687 * C791 +
                     C1935 * C1995 + C2445 + C2445 + C15505 * C2440) *
                        C15468 +
                    (C1934 * C394 + C4307 + C4307 + C15687 * C792 +
                     C1935 * C3120 + C4308 + C4308 + C15505 * C3472) *
                        C7938) *
                       C7120 +
                   ((C1934 * C82 + C1940 + C1940 + C15687 * C332 +
                     C1935 * C845 + C1941 + C1941 + C15505 * C1240) *
                        C15461 +
                    (C1934 * C392 + C2446 + C2446 + C15687 * C793 +
                     C1935 * C1996 + C2447 + C2447 + C15505 * C2441) *
                        C15468 +
                    (C1934 * C395 + C4309 + C4309 + C15687 * C794 +
                     C1935 * C3884 + C4310 + C4310 + C15505 * C4305) *
                        C7938) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
           C7132 + C15375 * C92) *
              C15418 * C15751 +
          (C7126 * C391 + C7133 + C7133 + C7120 * C403 + C7128 * C392 + C7134 +
           C7134 + C15375 * C404) *
              C15418 * C15747 +
          (C7126 * C394 + C7135 + C7135 + C7120 * C406 + C7128 * C395 + C7136 +
           C7136 + C15375 * C407) *
              C15418 * C15737 +
          (C7126 * C2857 + C7137 + C7137 + C7120 * C2861 + C7128 * C3524 +
           C7138 + C7138 + C15375 * C3526) *
              C15418 * C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6786 * C81 + C6795 + C6795 + C15750 * C91 + C6788 * C82 + C6796 +
           C6796 + C15743 * C92 + C6790 * C83 + C6797 + C6797 + C15730 * C93 +
           C6792 * C84 + C6798 + C6798 + C15685 * C94) *
              C15418 * C6784 +
          (C6786 * C391 + C6799 + C6799 + C15750 * C403 + C6788 * C392 + C6800 +
           C6800 + C15743 * C404 + C6790 * C393 + C6801 + C6801 +
           C15730 * C405 + C6792 * C1301 + C6802 + C6802 + C15685 * C1303) *
              C15418 * C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
            C7132 + C15375 * C92) *
               C15745 +
           (C7126 * C844 + C7477 + C7477 + C7120 * C856 + C7128 * C845 + C7478 +
            C7478 + C15375 * C857) *
               C15734 +
           (C7126 * C847 + C7479 + C7479 + C7120 * C859 + C7128 * C848 + C7480 +
            C7480 + C15375 * C860) *
               C15715) *
              C6784 +
          ((C7126 * C391 + C7133 + C7133 + C7120 * C403 + C7128 * C392 + C7134 +
            C7134 + C15375 * C404) *
               C15745 +
           (C7126 * C1995 + C7481 + C7481 + C7120 * C2001 + C7128 * C1996 +
            C7482 + C7482 + C15375 * C2002) *
               C15734 +
           (C7126 * C3119 + C7483 + C7483 + C7120 * C3125 + C7128 * C5654 +
            C7484 + C7484 + C15375 * C5656) *
               C15715) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
           C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
              C7127 +
          (C7172 * C86 + C15751 * C129 + C7173 * C397 + C15747 * C465 +
           C7174 * C400 + C15737 * C466 + C7175 * C2859 + C15694 * C2897) *
              C7120 +
          (C7172 * C82 + C15751 * C125 + C7173 * C392 + C15747 * C461 +
           C7174 * C395 + C15737 * C462 + C7175 * C3524 + C15694 * C3573) *
              C7129 +
          (C7172 * C87 + C15751 * C130 + C7173 * C398 + C15747 * C467 +
           C7174 * C401 + C15737 * C468 + C7175 * C3525 + C15694 * C3574) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C6787 +
          (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) * C15750 +
          (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C6789 +
          (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) * C15743 +
          (C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C6791 +
          (C6836 * C88 + C6784 * C131 + C6837 * C399 + C15465 * C469) * C15730 +
          (C6836 * C84 + C6784 * C127 + C6837 * C1301 + C15465 * C1348) *
              C6793 +
          (C6836 * C89 + C6784 * C132 + C6837 * C1302 + C15465 * C1349) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C7127 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) * C7120 +
           (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C7129 +
           (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) *
               C15375) *
              C15745 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C7127 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C7120 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C7129 +
           (C6836 * C851 + C6784 * C913 + C6837 * C1999 + C15465 * C2061) *
               C15375) *
              C15734 +
          ((C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
               C7127 +
           (C6836 * C853 + C6784 * C915 + C6837 * C3122 + C15465 * C3176) *
               C7120 +
           (C6836 * C848 + C6784 * C910 + C6837 * C5654 + C15465 * C5711) *
               C7129 +
           (C6836 * C854 + C6784 * C916 + C6837 * C5655 + C15465 * C5712) *
               C15375) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C7127 +
                    (C156 * C86 + C15418 * C162) * C7120 +
                    (C156 * C82 + C15418 * C158) * C7129 +
                    (C156 * C87 + C15418 * C163) * C15375) *
                       C15751 +
                   ((C156 * C391 + C15418 * C509) * C7127 +
                    (C156 * C397 + C15418 * C515) * C7120 +
                    (C156 * C392 + C15418 * C510) * C7129 +
                    (C156 * C398 + C15418 * C516) * C15375) *
                       C15747 +
                   ((C156 * C394 + C15418 * C512) * C7127 +
                    (C156 * C400 + C15418 * C518) * C7120 +
                    (C156 * C395 + C15418 * C513) * C7129 +
                    (C156 * C401 + C15418 * C519) * C15375) *
                       C15737 +
                   ((C156 * C2857 + C15418 * C2921) * C7127 +
                    (C156 * C2859 + C15418 * C2923) * C7120 +
                    (C156 * C3524 + C15418 * C3609) * C7129 +
                    (C156 * C3525 + C15418 * C3610) * C15375) *
                       C15694) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C6787 +
                    (C156 * C86 + C15418 * C162) * C15750 +
                    (C156 * C82 + C15418 * C158) * C6789 +
                    (C156 * C87 + C15418 * C163) * C15743 +
                    (C156 * C83 + C15418 * C159) * C6791 +
                    (C156 * C88 + C15418 * C164) * C15730 +
                    (C156 * C84 + C15418 * C160) * C6793 +
                    (C156 * C89 + C15418 * C165) * C15685) *
                       C6784 +
                   ((C156 * C391 + C15418 * C509) * C6787 +
                    (C156 * C397 + C15418 * C515) * C15750 +
                    (C156 * C392 + C15418 * C510) * C6789 +
                    (C156 * C398 + C15418 * C516) * C15743 +
                    (C156 * C393 + C15418 * C511) * C6791 +
                    (C156 * C399 + C15418 * C517) * C15730 +
                    (C156 * C1301 + C15418 * C1384) * C6793 +
                    (C156 * C1302 + C15418 * C1385) * C15685) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                     C958 * C847 + C15715 * C960) *
                        C7127 +
                    (C956 * C86 + C15745 * C162 + C957 * C850 + C15734 * C965 +
                     C958 * C853 + C15715 * C966) *
                        C7120 +
                    (C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
                     C958 * C848 + C15715 * C962) *
                        C7129 +
                    (C956 * C87 + C15745 * C163 + C957 * C851 + C15734 * C967 +
                     C958 * C854 + C15715 * C968) *
                        C15375) *
                       C6784 +
                   ((C956 * C391 + C15745 * C509 + C957 * C1995 +
                     C15734 * C2113 + C958 * C3119 + C15715 * C3216) *
                        C7127 +
                    (C956 * C397 + C15745 * C515 + C957 * C1998 +
                     C15734 * C2116 + C958 * C3122 + C15715 * C3219) *
                        C7120 +
                    (C956 * C392 + C15745 * C510 + C957 * C1996 +
                     C15734 * C2114 + C958 * C5654 + C15715 * C5763) *
                        C7129 +
                    (C956 * C398 + C15745 * C516 + C957 * C1999 +
                     C15734 * C2117 + C958 * C5655 + C15715 * C5764) *
                        C15375) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C7172 +
          (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
              C15751 +
          (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C7173 +
          (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
              C15747 +
          (C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C7174 +
          (C7127 * C460 + C7120 * C562 + C7129 * C462 + C15375 * C563) *
              C15737 +
          (C7127 * C2857 + C7120 * C2859 + C7129 * C3524 + C15375 * C3525) *
              C7175 +
          (C7127 * C2895 + C7120 * C2947 + C7129 * C3573 + C15375 * C3645) *
              C15694) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
           C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
              C6836 +
          (C6787 * C124 + C15750 * C189 + C6789 * C125 + C15743 * C190 +
           C6791 * C126 + C15730 * C191 + C6793 * C127 + C15685 * C192) *
              C6784 +
          (C6787 * C391 + C15750 * C397 + C6789 * C392 + C15743 * C398 +
           C6791 * C393 + C15730 * C399 + C6793 * C1301 + C15685 * C1302) *
              C6837 +
          (C6787 * C459 + C15750 * C559 + C6789 * C461 + C15743 * C560 +
           C6791 * C463 + C15730 * C561 + C6793 * C1348 + C15685 * C1420) *
              C15465) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C6836 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C6784 +
           (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C6837 +
           (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
               C15465) *
              C15745 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C6836 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C6784 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C6837 +
           (C7127 * C2057 + C7120 * C2169 + C7129 * C2058 + C15375 * C2170) *
               C15465) *
              C15734 +
          ((C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) *
               C6836 +
           (C7127 * C909 + C7120 * C1012 + C7129 * C910 + C15375 * C1013) *
               C6784 +
           (C7127 * C3119 + C7120 * C3122 + C7129 * C5654 + C15375 * C5655) *
               C6837 +
           (C7127 * C3173 + C7120 * C3261 + C7129 * C5711 + C15375 * C5815) *
               C15465) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7278 * C81 + C7283 + C7283 + C15751 * C217 + C7279 * C391 + C7284 +
           C7284 + C15747 * C606 + C7280 * C394 + C7285 + C7285 +
           C15737 * C607 + C7281 * C2857 + C7286 + C7286 + C15694 * C2976) *
              C7120 +
          (C7278 * C82 + C7287 + C7287 + C15751 * C218 + C7279 * C392 + C7288 +
           C7288 + C15747 * C608 + C7280 * C395 + C7289 + C7289 +
           C15737 * C609 + C7281 * C3524 + C7290 + C7290 + C15694 * C3684) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
           C6944 + C15465 * C606) *
              C15750 +
          (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 + C6946 +
           C6946 + C15465 * C608) *
              C15743 +
          (C6940 * C83 + C6947 + C6947 + C6784 * C219 + C6941 * C393 + C6948 +
           C6948 + C15465 * C610) *
              C15730 +
          (C6940 * C84 + C6949 + C6949 + C6784 * C220 + C6941 * C1301 + C6950 +
           C6950 + C15465 * C1457) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
            C6944 + C15465 * C606) *
               C7120 +
           (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 + C6946 +
            C6946 + C15465 * C608) *
               C15375) *
              C15745 +
          ((C6940 * C844 + C7685 + C7685 + C6784 * C1053 + C6941 * C1995 +
            C7686 + C7686 + C15465 * C2222) *
               C7120 +
           (C6940 * C845 + C7687 + C7687 + C6784 * C1054 + C6941 * C1996 +
            C7688 + C7688 + C15465 * C2223) *
               C15375) *
              C15734 +
          ((C6940 * C847 + C7689 + C7689 + C6784 * C1056 + C6941 * C3119 +
            C7690 + C7690 + C15465 * C3302) *
               C7120 +
           (C6940 * C848 + C7691 + C7691 + C6784 * C1057 + C6941 * C5654 +
            C7692 + C7692 + C15465 * C5866) *
               C15375) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C7172 +
                    (C156 * C124 + C15418 * C249) * C15751 +
                    (C156 * C391 + C15418 * C509) * C7173 +
                    (C156 * C459 + C15418 * C659) * C15747 +
                    (C156 * C394 + C15418 * C512) * C7174 +
                    (C156 * C460 + C15418 * C660) * C15737 +
                    (C156 * C2857 + C15418 * C2921) * C7175 +
                    (C156 * C2895 + C15418 * C3005) * C15694) *
                       C7120 +
                   ((C156 * C82 + C15418 * C158) * C7172 +
                    (C156 * C125 + C15418 * C250) * C15751 +
                    (C156 * C392 + C15418 * C510) * C7173 +
                    (C156 * C461 + C15418 * C661) * C15747 +
                    (C156 * C395 + C15418 * C513) * C7174 +
                    (C156 * C462 + C15418 * C662) * C15737 +
                    (C156 * C3524 + C15418 * C3609) * C7175 +
                    (C156 * C3573 + C15418 * C3727) * C15694) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C6836 +
                    (C156 * C124 + C15418 * C249) * C6784 +
                    (C156 * C391 + C15418 * C509) * C6837 +
                    (C156 * C459 + C15418 * C659) * C15465) *
                       C15750 +
                   ((C156 * C82 + C15418 * C158) * C6836 +
                    (C156 * C125 + C15418 * C250) * C6784 +
                    (C156 * C392 + C15418 * C510) * C6837 +
                    (C156 * C461 + C15418 * C661) * C15465) *
                       C15743 +
                   ((C156 * C83 + C15418 * C159) * C6836 +
                    (C156 * C126 + C15418 * C251) * C6784 +
                    (C156 * C393 + C15418 * C511) * C6837 +
                    (C156 * C463 + C15418 * C663) * C15465) *
                       C15730 +
                   ((C156 * C84 + C15418 * C160) * C6836 +
                    (C156 * C127 + C15418 * C252) * C6784 +
                    (C156 * C1301 + C15418 * C1384) * C6837 +
                    (C156 * C1348 + C15418 * C1500) * C15465) *
                       C15685) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                     C958 * C847 + C15715 * C960) *
                        C6836 +
                    (C956 * C124 + C15745 * C249 + C957 * C906 +
                     C15734 * C1103 + C958 * C909 + C15715 * C1104) *
                        C6784 +
                    (C956 * C391 + C15745 * C509 + C957 * C1995 +
                     C15734 * C2113 + C958 * C3119 + C15715 * C3216) *
                        C6837 +
                    (C956 * C459 + C15745 * C659 + C957 * C2057 +
                     C15734 * C2281 + C958 * C3173 + C15715 * C3348) *
                        C15465) *
                       C7120 +
                   ((C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
                     C958 * C848 + C15715 * C962) *
                        C6836 +
                    (C956 * C125 + C15745 * C250 + C957 * C907 +
                     C15734 * C1105 + C958 * C910 + C15715 * C1106) *
                        C6784 +
                    (C956 * C392 + C15745 * C510 + C957 * C1996 +
                     C15734 * C2114 + C958 * C5654 + C15715 * C5763) *
                        C6837 +
                    (C956 * C461 + C15745 * C661 + C957 * C2058 +
                     C15734 * C2282 + C958 * C5711 + C15715 * C5921) *
                        C15465) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C156 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C15418) *
              C15751 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C156 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C15418) *
              C15747 +
          ((C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C156 +
           (C7127 * C512 + C7120 * C706 + C7129 * C513 + C15375 * C707) *
               C15418) *
              C15737 +
          ((C7127 * C2857 + C7120 * C2859 + C7129 * C3524 + C15375 * C3525) *
               C156 +
           (C7127 * C2921 + C7120 * C3029 + C7129 * C3609 + C15375 * C3762) *
               C15418) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
            C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
               C156 +
           (C6787 * C157 + C15750 * C276 + C6789 * C158 + C15743 * C277 +
            C6791 * C159 + C15730 * C278 + C6793 * C160 + C15685 * C279) *
               C15418) *
              C6784 +
          ((C6787 * C391 + C15750 * C397 + C6789 * C392 + C15743 * C398 +
            C6791 * C393 + C15730 * C399 + C6793 * C1301 + C15685 * C1302) *
               C156 +
           (C6787 * C509 + C15750 * C703 + C6789 * C510 + C15743 * C704 +
            C6791 * C511 + C15730 * C705 + C6793 * C1384 + C15685 * C1535) *
               C15418) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C956 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C15745 +
           (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) * C957 +
           (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
               C15734 +
           (C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) * C958 +
           (C7127 * C960 + C7120 * C1150 + C7129 * C962 + C15375 * C1151) *
               C15715) *
              C6784 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C956 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C15745 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C957 +
           (C7127 * C2113 + C7120 * C2334 + C7129 * C2114 + C15375 * C2335) *
               C15734 +
           (C7127 * C3119 + C7120 * C3122 + C7129 * C5654 + C15375 * C5655) *
               C958 +
           (C7127 * C3216 + C7120 * C3389 + C7129 * C5763 + C15375 * C5972) *
               C15715) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
            C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
               C156 +
           (C7172 * C157 + C15751 * C303 + C7173 * C509 + C15747 * C747 +
            C7174 * C512 + C15737 * C748 + C7175 * C2921 + C15694 * C3053) *
               C15418) *
              C7120 +
          ((C7172 * C82 + C15751 * C125 + C7173 * C392 + C15747 * C461 +
            C7174 * C395 + C15737 * C462 + C7175 * C3524 + C15694 * C3573) *
               C156 +
           (C7172 * C158 + C15751 * C304 + C7173 * C510 + C15747 * C749 +
            C7174 * C513 + C15737 * C750 + C7175 * C3609 + C15694 * C3797) *
               C15418) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C156 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C15418) *
              C15750 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C156 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C15418) *
              C15743 +
          ((C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C156 +
           (C6836 * C159 + C6784 * C305 + C6837 * C511 + C15465 * C751) *
               C15418) *
              C15730 +
          ((C6836 * C84 + C6784 * C127 + C6837 * C1301 + C15465 * C1348) *
               C156 +
           (C6836 * C160 + C6784 * C306 + C6837 * C1384 + C15465 * C1570) *
               C15418) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C956 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C15745 +
           (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C957 +
           (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
               C15734 +
           (C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
               C958 +
           (C6836 * C960 + C6784 * C1192 + C6837 * C3216 + C15465 * C3431) *
               C15715) *
              C7120 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C956 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C15745 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C957 +
           (C6836 * C961 + C6784 * C1193 + C6837 * C2114 + C15465 * C2388) *
               C15734 +
           (C6836 * C848 + C6784 * C910 + C6837 * C5654 + C15465 * C5711) *
               C958 +
           (C6836 * C962 + C6784 * C1194 + C6837 * C5763 + C15465 * C6023) *
               C15715) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C330 * C81 + C337 + C337 + C15418 * C331) * C15751 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C15747 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C15737 +
                    (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C15694) *
                       C7120 +
                   ((C330 * C82 + C338 + C338 + C15418 * C332) * C15751 +
                    (C330 * C392 + C800 + C800 + C15418 * C793) * C15747 +
                    (C330 * C395 + C801 + C801 + C15418 * C794) * C15737 +
                    (C330 * C3524 + C3834 + C3834 + C15418 * C3832) * C15694) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C330 * C81 + C337 + C337 + C15418 * C331) * C6784 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C15465) *
                       C15750 +
                   ((C330 * C82 + C338 + C338 + C15418 * C332) * C6784 +
                    (C330 * C392 + C800 + C800 + C15418 * C793) * C15465) *
                       C15743 +
                   ((C330 * C83 + C339 + C339 + C15418 * C333) * C6784 +
                    (C330 * C393 + C802 + C802 + C15418 * C795) * C15465) *
                       C15730 +
                   ((C330 * C84 + C340 + C340 + C15418 * C334) * C6784 +
                    (C330 * C1301 + C1607 + C1607 + C15418 * C1605) * C15465) *
                       C15685) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C1235 * C81 + C1245 + C1245 + C15745 * C331 +
                     C1236 * C844 + C1246 + C1246 + C15734 * C1238 +
                     C1237 * C847 + C1247 + C1247 + C15715 * C1239) *
                        C6784 +
                    (C1235 * C391 + C3475 + C3475 + C15745 * C791 +
                     C1236 * C1995 + C3476 + C3476 + C15734 * C2440 +
                     C1237 * C3119 + C3477 + C3477 + C15715 * C3471) *
                        C15465) *
                       C7120 +
                   ((C1235 * C82 + C1248 + C1248 + C15745 * C332 +
                     C1236 * C845 + C1249 + C1249 + C15734 * C1240 +
                     C1237 * C848 + C1250 + C1250 + C15715 * C1241) *
                        C6784 +
                    (C1235 * C392 + C7893 + C7893 + C15745 * C793 +
                     C1236 * C1996 + C7894 + C7894 + C15734 * C2441 +
                     C1237 * C5654 + C7895 + C7895 + C15715 * C6074) *
                        C15465) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C14003 * C81 + C7946 + C7946 + C15370 * C91 + C13996 * C82 + C7947 +
            C7947 + C15378 * C92 + C7943 * C83 + C7948 + C7948 + C7935 * C93) *
               C15687 +
           (C14003 * C844 + C8324 + C8324 + C15370 * C856 + C13996 * C845 +
            C8325 + C8325 + C15378 * C857 + C7943 * C846 + C8326 + C8326 +
            C7935 * C858) *
               C15505) *
              C6784 +
          ((C14003 * C391 + C7949 + C7949 + C15370 * C403 + C13996 * C392 +
            C7950 + C7950 + C15378 * C404 + C7943 * C393 + C7951 + C7951 +
            C7935 * C405) *
               C15687 +
           (C14003 * C1995 + C8327 + C8327 + C15370 * C2001 + C13996 * C1996 +
            C8328 + C8328 + C15378 * C2002 + C7943 * C1997 + C8329 + C8329 +
            C7935 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) *
               C14000 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) *
               C15370 +
           (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) *
               C13989 +
           (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) *
               C15378 +
           (C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) *
               C14018 +
           (C6836 * C88 + C6784 * C131 + C6837 * C399 + C15465 * C469) *
               C7935) *
              C15687 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C14000 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C15370 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C13989 +
           (C6836 * C851 + C6784 * C913 + C6837 * C1999 + C15465 * C2061) *
               C15378 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C14018 +
           (C6836 * C852 + C6784 * C914 + C6837 * C2000 + C15465 * C2062) *
               C7935) *
              C15505) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C14000 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C15370 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C13989 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) *
               C15378 +
           (C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) *
               C14018 +
           (C1720 * C88 + C15687 * C164 + C1721 * C852 + C15505 * C969) *
               C7935) *
              C6784 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C14000 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C15370 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C13989 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C15378 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C14018 +
           (C1720 * C399 + C15687 * C517 + C1721 * C2000 + C15505 * C2118) *
               C7935) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14000 * C81 + C15370 * C86 + C13989 * C82 + C15378 * C87 +
                     C14018 * C83 + C7935 * C88) *
                        C6836 +
                    (C14000 * C124 + C15370 * C189 + C13989 * C125 +
                     C15378 * C190 + C14018 * C126 + C7935 * C191) *
                        C6784 +
                    (C14000 * C391 + C15370 * C397 + C13989 * C392 +
                     C15378 * C398 + C14018 * C393 + C7935 * C399) *
                        C6837 +
                    (C14000 * C459 + C15370 * C559 + C13989 * C461 +
                     C15378 * C560 + C14018 * C463 + C7935 * C561) *
                        C15465) *
                       C15687 +
                   ((C14000 * C844 + C15370 * C850 + C13989 * C845 +
                     C15378 * C851 + C14018 * C846 + C7935 * C852) *
                        C6836 +
                    (C14000 * C906 + C15370 * C1009 + C13989 * C907 +
                     C15378 * C1010 + C14018 * C908 + C7935 * C1011) *
                        C6784 +
                    (C14000 * C1995 + C15370 * C1998 + C13989 * C1996 +
                     C15378 * C1999 + C14018 * C1997 + C7935 * C2000) *
                        C6837 +
                    (C14000 * C2057 + C15370 * C2169 + C13989 * C2058 +
                     C15378 * C2170 + C14018 * C2059 + C7935 * C2171) *
                        C15465) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 +
                     C6944 + C6944 + C15465 * C606) *
                        C15370 +
                    (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 +
                     C6946 + C6946 + C15465 * C608) *
                        C15378 +
                    (C6940 * C83 + C6947 + C6947 + C6784 * C219 + C6941 * C393 +
                     C6948 + C6948 + C15465 * C610) *
                        C7935) *
                       C15687 +
                   ((C6940 * C844 + C7685 + C7685 + C6784 * C1053 +
                     C6941 * C1995 + C7686 + C7686 + C15465 * C2222) *
                        C15370 +
                    (C6940 * C845 + C7687 + C7687 + C6784 * C1054 +
                     C6941 * C1996 + C7688 + C7688 + C15465 * C2223) *
                        C15378 +
                    (C6940 * C846 + C8530 + C8530 + C6784 * C1055 +
                     C6941 * C1997 + C8531 + C8531 + C15465 * C2224) *
                        C7935) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C6836 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C6784 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C6837 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C15465) *
              C15370 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C6836 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C6784 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C6837 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C15465) *
              C15378 +
          ((C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) *
               C6836 +
           (C1720 * C126 + C15687 * C251 + C1721 * C908 + C15505 * C1107) *
               C6784 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C6837 +
           (C1720 * C463 + C15687 * C663 + C1721 * C2059 + C15505 * C2283) *
               C15465) *
              C7935) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14000 * C81 + C15370 * C86 + C13989 * C82 + C15378 * C87 +
                     C14018 * C83 + C7935 * C88) *
                        C1720 +
                    (C14000 * C157 + C15370 * C276 + C13989 * C158 +
                     C15378 * C277 + C14018 * C159 + C7935 * C278) *
                        C15687 +
                    (C14000 * C844 + C15370 * C850 + C13989 * C845 +
                     C15378 * C851 + C14018 * C846 + C7935 * C852) *
                        C1721 +
                    (C14000 * C959 + C15370 * C1147 + C13989 * C961 +
                     C15378 * C1148 + C14018 * C963 + C7935 * C1149) *
                        C15505) *
                       C6784 +
                   ((C14000 * C391 + C15370 * C397 + C13989 * C392 +
                     C15378 * C398 + C14018 * C393 + C7935 * C399) *
                        C1720 +
                    (C14000 * C509 + C15370 * C703 + C13989 * C510 +
                     C15378 * C704 + C14018 * C511 + C7935 * C705) *
                        C15687 +
                    (C14000 * C1995 + C15370 * C1998 + C13989 * C1996 +
                     C15378 * C1999 + C14018 * C1997 + C7935 * C2000) *
                        C1721 +
                    (C14000 * C2113 + C15370 * C2334 + C13989 * C2114 +
                     C15378 * C2335 + C14018 * C2115 + C7935 * C2336) *
                        C15505) *
                       C15465) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C1720 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C15687 +
           (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C1721 +
           (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
               C15505) *
              C15370 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C1720 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C15687 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C1721 +
           (C6836 * C961 + C6784 * C1193 + C6837 * C2114 + C15465 * C2388) *
               C15505) *
              C15378 +
          ((C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C1720 +
           (C6836 * C159 + C6784 * C305 + C6837 * C511 + C15465 * C751) *
               C15687 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C1721 +
           (C6836 * C963 + C6784 * C1195 + C6837 * C2115 + C15465 * C2389) *
               C15505) *
              C7935) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                     C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                        C6784 +
                    (C1934 * C391 + C2444 + C2444 + C15687 * C791 +
                     C1935 * C1995 + C2445 + C2445 + C15505 * C2440) *
                        C15465) *
                       C15370 +
                   ((C1934 * C82 + C1940 + C1940 + C15687 * C332 +
                     C1935 * C845 + C1941 + C1941 + C15505 * C1240) *
                        C6784 +
                    (C1934 * C392 + C2446 + C2446 + C15687 * C793 +
                     C1935 * C1996 + C2447 + C2447 + C15505 * C2441) *
                        C15465) *
                       C15378 +
                   ((C1934 * C83 + C1942 + C1942 + C15687 * C333 +
                     C1935 * C846 + C1943 + C1943 + C15505 * C1242) *
                        C6784 +
                    (C1934 * C393 + C2448 + C2448 + C15687 * C795 +
                     C1935 * C1997 + C2449 + C2449 + C15505 * C2442) *
                        C15465) *
                       C7935) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6786 * C81 + C6795 + C6795 + C15750 * C91 + C6788 * C82 + C6796 +
           C6796 + C15743 * C92 + C6790 * C83 + C6797 + C6797 + C15730 * C93 +
           C6792 * C84 + C6798 + C6798 + C15685 * C94) *
              C15418 * C6784 +
          (C6786 * C391 + C6799 + C6799 + C15750 * C403 + C6788 * C392 + C6800 +
           C6800 + C15743 * C404 + C6790 * C393 + C6801 + C6801 +
           C15730 * C405 + C6792 * C1301 + C6802 + C6802 + C15685 * C1303) *
              C15418 * C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
           C7132 + C15375 * C92) *
              C15418 * C15751 +
          (C7126 * C391 + C7133 + C7133 + C7120 * C403 + C7128 * C392 + C7134 +
           C7134 + C15375 * C404) *
              C15418 * C15747 +
          (C7126 * C394 + C7135 + C7135 + C7120 * C406 + C7128 * C395 + C7136 +
           C7136 + C15375 * C407) *
              C15418 * C15737 +
          (C7126 * C2857 + C7137 + C7137 + C7120 * C2861 + C7128 * C3524 +
           C7138 + C7138 + C15375 * C3526) *
              C15418 * C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C6787 +
          (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) * C15750 +
          (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C6789 +
          (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) * C15743 +
          (C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C6791 +
          (C6836 * C88 + C6784 * C131 + C6837 * C399 + C15465 * C469) * C15730 +
          (C6836 * C84 + C6784 * C127 + C6837 * C1301 + C15465 * C1348) *
              C6793 +
          (C6836 * C89 + C6784 * C132 + C6837 * C1302 + C15465 * C1349) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
           C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
              C7127 +
          (C7172 * C86 + C15751 * C129 + C7173 * C397 + C15747 * C465 +
           C7174 * C400 + C15737 * C466 + C7175 * C2859 + C15694 * C2897) *
              C7120 +
          (C7172 * C82 + C15751 * C125 + C7173 * C392 + C15747 * C461 +
           C7174 * C395 + C15737 * C462 + C7175 * C3524 + C15694 * C3573) *
              C7129 +
          (C7172 * C87 + C15751 * C130 + C7173 * C398 + C15747 * C467 +
           C7174 * C401 + C15737 * C468 + C7175 * C3525 + C15694 * C3574) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C6787 +
                    (C156 * C86 + C15418 * C162) * C15750 +
                    (C156 * C82 + C15418 * C158) * C6789 +
                    (C156 * C87 + C15418 * C163) * C15743 +
                    (C156 * C83 + C15418 * C159) * C6791 +
                    (C156 * C88 + C15418 * C164) * C15730 +
                    (C156 * C84 + C15418 * C160) * C6793 +
                    (C156 * C89 + C15418 * C165) * C15685) *
                       C6784 +
                   ((C156 * C391 + C15418 * C509) * C6787 +
                    (C156 * C397 + C15418 * C515) * C15750 +
                    (C156 * C392 + C15418 * C510) * C6789 +
                    (C156 * C398 + C15418 * C516) * C15743 +
                    (C156 * C393 + C15418 * C511) * C6791 +
                    (C156 * C399 + C15418 * C517) * C15730 +
                    (C156 * C1301 + C15418 * C1384) * C6793 +
                    (C156 * C1302 + C15418 * C1385) * C15685) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C7127 +
                    (C156 * C86 + C15418 * C162) * C7120 +
                    (C156 * C82 + C15418 * C158) * C7129 +
                    (C156 * C87 + C15418 * C163) * C15375) *
                       C15751 +
                   ((C156 * C391 + C15418 * C509) * C7127 +
                    (C156 * C397 + C15418 * C515) * C7120 +
                    (C156 * C392 + C15418 * C510) * C7129 +
                    (C156 * C398 + C15418 * C516) * C15375) *
                       C15747 +
                   ((C156 * C394 + C15418 * C512) * C7127 +
                    (C156 * C400 + C15418 * C518) * C7120 +
                    (C156 * C395 + C15418 * C513) * C7129 +
                    (C156 * C401 + C15418 * C519) * C15375) *
                       C15737 +
                   ((C156 * C2857 + C15418 * C2921) * C7127 +
                    (C156 * C2859 + C15418 * C2923) * C7120 +
                    (C156 * C3524 + C15418 * C3609) * C7129 +
                    (C156 * C3525 + C15418 * C3610) * C15375) *
                       C15694) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
           C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
              C6836 +
          (C6787 * C124 + C15750 * C189 + C6789 * C125 + C15743 * C190 +
           C6791 * C126 + C15730 * C191 + C6793 * C127 + C15685 * C192) *
              C6784 +
          (C6787 * C391 + C15750 * C397 + C6789 * C392 + C15743 * C398 +
           C6791 * C393 + C15730 * C399 + C6793 * C1301 + C15685 * C1302) *
              C6837 +
          (C6787 * C459 + C15750 * C559 + C6789 * C461 + C15743 * C560 +
           C6791 * C463 + C15730 * C561 + C6793 * C1348 + C15685 * C1420) *
              C15465) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C7172 +
          (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
              C15751 +
          (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C7173 +
          (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
              C15747 +
          (C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C7174 +
          (C7127 * C460 + C7120 * C562 + C7129 * C462 + C15375 * C563) *
              C15737 +
          (C7127 * C2857 + C7120 * C2859 + C7129 * C3524 + C15375 * C3525) *
              C7175 +
          (C7127 * C2895 + C7120 * C2947 + C7129 * C3573 + C15375 * C3645) *
              C15694) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
           C6944 + C15465 * C606) *
              C15750 +
          (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 + C6946 +
           C6946 + C15465 * C608) *
              C15743 +
          (C6940 * C83 + C6947 + C6947 + C6784 * C219 + C6941 * C393 + C6948 +
           C6948 + C15465 * C610) *
              C15730 +
          (C6940 * C84 + C6949 + C6949 + C6784 * C220 + C6941 * C1301 + C6950 +
           C6950 + C15465 * C1457) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7278 * C81 + C7283 + C7283 + C15751 * C217 + C7279 * C391 + C7284 +
           C7284 + C15747 * C606 + C7280 * C394 + C7285 + C7285 +
           C15737 * C607 + C7281 * C2857 + C7286 + C7286 + C15694 * C2976) *
              C7120 +
          (C7278 * C82 + C7287 + C7287 + C15751 * C218 + C7279 * C392 + C7288 +
           C7288 + C15747 * C608 + C7280 * C395 + C7289 + C7289 +
           C15737 * C609 + C7281 * C3524 + C7290 + C7290 + C15694 * C3684) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C6836 +
                    (C156 * C124 + C15418 * C249) * C6784 +
                    (C156 * C391 + C15418 * C509) * C6837 +
                    (C156 * C459 + C15418 * C659) * C15465) *
                       C15750 +
                   ((C156 * C82 + C15418 * C158) * C6836 +
                    (C156 * C125 + C15418 * C250) * C6784 +
                    (C156 * C392 + C15418 * C510) * C6837 +
                    (C156 * C461 + C15418 * C661) * C15465) *
                       C15743 +
                   ((C156 * C83 + C15418 * C159) * C6836 +
                    (C156 * C126 + C15418 * C251) * C6784 +
                    (C156 * C393 + C15418 * C511) * C6837 +
                    (C156 * C463 + C15418 * C663) * C15465) *
                       C15730 +
                   ((C156 * C84 + C15418 * C160) * C6836 +
                    (C156 * C127 + C15418 * C252) * C6784 +
                    (C156 * C1301 + C15418 * C1384) * C6837 +
                    (C156 * C1348 + C15418 * C1500) * C15465) *
                       C15685) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C156 * C81 + C15418 * C157) * C7172 +
                    (C156 * C124 + C15418 * C249) * C15751 +
                    (C156 * C391 + C15418 * C509) * C7173 +
                    (C156 * C459 + C15418 * C659) * C15747 +
                    (C156 * C394 + C15418 * C512) * C7174 +
                    (C156 * C460 + C15418 * C660) * C15737 +
                    (C156 * C2857 + C15418 * C2921) * C7175 +
                    (C156 * C2895 + C15418 * C3005) * C15694) *
                       C7120 +
                   ((C156 * C82 + C15418 * C158) * C7172 +
                    (C156 * C125 + C15418 * C250) * C15751 +
                    (C156 * C392 + C15418 * C510) * C7173 +
                    (C156 * C461 + C15418 * C661) * C15747 +
                    (C156 * C395 + C15418 * C513) * C7174 +
                    (C156 * C462 + C15418 * C662) * C15737 +
                    (C156 * C3524 + C15418 * C3609) * C7175 +
                    (C156 * C3573 + C15418 * C3727) * C15694) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
            C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
               C156 +
           (C6787 * C157 + C15750 * C276 + C6789 * C158 + C15743 * C277 +
            C6791 * C159 + C15730 * C278 + C6793 * C160 + C15685 * C279) *
               C15418) *
              C6784 +
          ((C6787 * C391 + C15750 * C397 + C6789 * C392 + C15743 * C398 +
            C6791 * C393 + C15730 * C399 + C6793 * C1301 + C15685 * C1302) *
               C156 +
           (C6787 * C509 + C15750 * C703 + C6789 * C510 + C15743 * C704 +
            C6791 * C511 + C15730 * C705 + C6793 * C1384 + C15685 * C1535) *
               C15418) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C156 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C15418) *
              C15751 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C156 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C15418) *
              C15747 +
          ((C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C156 +
           (C7127 * C512 + C7120 * C706 + C7129 * C513 + C15375 * C707) *
               C15418) *
              C15737 +
          ((C7127 * C2857 + C7120 * C2859 + C7129 * C3524 + C15375 * C3525) *
               C156 +
           (C7127 * C2921 + C7120 * C3029 + C7129 * C3609 + C15375 * C3762) *
               C15418) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C156 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C15418) *
              C15750 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C156 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C15418) *
              C15743 +
          ((C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C156 +
           (C6836 * C159 + C6784 * C305 + C6837 * C511 + C15465 * C751) *
               C15418) *
              C15730 +
          ((C6836 * C84 + C6784 * C127 + C6837 * C1301 + C15465 * C1348) *
               C156 +
           (C6836 * C160 + C6784 * C306 + C6837 * C1384 + C15465 * C1570) *
               C15418) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
            C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
               C156 +
           (C7172 * C157 + C15751 * C303 + C7173 * C509 + C15747 * C747 +
            C7174 * C512 + C15737 * C748 + C7175 * C2921 + C15694 * C3053) *
               C15418) *
              C7120 +
          ((C7172 * C82 + C15751 * C125 + C7173 * C392 + C15747 * C461 +
            C7174 * C395 + C15737 * C462 + C7175 * C3524 + C15694 * C3573) *
               C156 +
           (C7172 * C158 + C15751 * C304 + C7173 * C510 + C15747 * C749 +
            C7174 * C513 + C15737 * C750 + C7175 * C3609 + C15694 * C3797) *
               C15418) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C330 * C81 + C337 + C337 + C15418 * C331) * C6784 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C15465) *
                       C15750 +
                   ((C330 * C82 + C338 + C338 + C15418 * C332) * C6784 +
                    (C330 * C392 + C800 + C800 + C15418 * C793) * C15465) *
                       C15743 +
                   ((C330 * C83 + C339 + C339 + C15418 * C333) * C6784 +
                    (C330 * C393 + C802 + C802 + C15418 * C795) * C15465) *
                       C15730 +
                   ((C330 * C84 + C340 + C340 + C15418 * C334) * C6784 +
                    (C330 * C1301 + C1607 + C1607 + C15418 * C1605) * C15465) *
                       C15685) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C330 * C81 + C337 + C337 + C15418 * C331) * C15751 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C15747 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C15737 +
                    (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C15694) *
                       C7120 +
                   ((C330 * C82 + C338 + C338 + C15418 * C332) * C15751 +
                    (C330 * C392 + C800 + C800 + C15418 * C793) * C15747 +
                    (C330 * C395 + C801 + C801 + C15418 * C794) * C15737 +
                    (C330 * C3524 + C3834 + C3834 + C15418 * C3832) * C15694) *
                       C15375) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 +
                     C3529 + C3529 + C15375 * C92) *
                        C9223 +
                    (C3520 * C844 + C3888 + C3888 + C15670 * C856 +
                     C3522 * C845 + C3889 + C3889 + C15375 * C857) *
                        C15505) *
                       C15461 +
                   ((C3520 * C391 + C3530 + C3530 + C15670 * C403 +
                     C3522 * C392 + C3531 + C3531 + C15375 * C404) *
                        C9223 +
                    (C3520 * C1995 + C3890 + C3890 + C15670 * C2001 +
                     C3522 * C1996 + C3891 + C3891 + C15375 * C2002) *
                        C15505) *
                       C15468 +
                   ((C3520 * C394 + C3532 + C3532 + C15670 * C406 +
                     C3522 * C395 + C3533 + C3533 + C15375 * C407) *
                        C9223 +
                    (C3520 * C3120 + C3892 + C3892 + C15670 * C3126 +
                     C3522 * C3884 + C3893 + C3893 + C15375 * C3886) *
                        C15505) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C13975 +
                    (C14223 * C86 + C15461 * C129 + C14220 * C397 +
                     C15468 * C465 + C14231 * C400 + C7938 * C466) *
                        C15670 +
                    (C14223 * C82 + C15461 * C125 + C14220 * C392 +
                     C15468 * C461 + C14231 * C395 + C7938 * C462) *
                        C13948 +
                    (C14223 * C87 + C15461 * C130 + C14220 * C398 +
                     C15468 * C467 + C14231 * C401 + C7938 * C468) *
                        C15375) *
                       C9223 +
                   ((C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                     C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                        C13975 +
                    (C14223 * C850 + C15461 * C912 + C14220 * C1998 +
                     C15468 * C2060 + C14231 * C3123 + C7938 * C3175) *
                        C15670 +
                    (C14223 * C845 + C15461 * C907 + C14220 * C1996 +
                     C15468 * C2058 + C14231 * C3884 + C7938 * C3943) *
                        C13948 +
                    (C14223 * C851 + C15461 * C913 + C14220 * C1999 +
                     C15468 * C2061 + C14231 * C3885 + C7938 * C3944) *
                        C15375) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) *
               C13975 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15670 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) *
               C13948 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15375) *
              C15461 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C13975 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15670 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C13948 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15375) *
              C15468 +
          ((C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C13975 +
           (C9297 * C400 + C9223 * C518 + C9298 * C3123 + C15505 * C3220) *
               C15670 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C13948 +
           (C9297 * C401 + C9223 * C519 + C9298 * C3885 + C15505 * C3996) *
               C15375) *
              C7938) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) *
               C14223 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C15461 +
           (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C14220 +
           (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
               C15468 +
           (C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C14231 +
           (C13975 * C460 + C15670 * C562 + C13948 * C462 + C15375 * C563) *
               C7938) *
              C9223 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C14223 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C15461 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C14220 +
           (C13975 * C2057 + C15670 * C2169 + C13948 * C2058 + C15375 * C2170) *
               C15468 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C14231 +
           (C13975 * C3172 + C15670 * C3260 + C13948 * C3943 + C15375 * C4047) *
               C7938) *
              C15505) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14275 * C81 + C8113 + C8113 + C15461 * C217 +
                     C14268 * C391 + C8114 + C8114 + C15468 * C606 +
                     C8111 * C394 + C8115 + C8115 + C7938 * C607) *
                        C15670 +
                    (C14275 * C82 + C8116 + C8116 + C15461 * C218 +
                     C14268 * C392 + C8117 + C8117 + C15468 * C608 +
                     C8111 * C395 + C8118 + C8118 + C7938 * C609) *
                        C15375) *
                       C9223 +
                   ((C14275 * C844 + C8984 + C8984 + C15461 * C1053 +
                     C14268 * C1995 + C8985 + C8985 + C15468 * C2222 +
                     C8111 * C3120 + C8986 + C8986 + C7938 * C3301) *
                        C15670 +
                    (C14275 * C845 + C8987 + C8987 + C15461 * C1054 +
                     C14268 * C1996 + C8988 + C8988 + C15468 * C2223 +
                     C8111 * C3884 + C8989 + C8989 + C7938 * C4098) *
                        C15375) *
                       C15505) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) *
               C14223 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15461 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C14220 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15468 +
           (C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C14231 +
           (C9297 * C460 + C9223 * C660 + C9298 * C3172 + C15505 * C3349) *
               C7938) *
              C15670 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) *
               C14223 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15461 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C14220 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15468 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C14231 +
           (C9297 * C462 + C9223 * C662 + C9298 * C3943 + C15505 * C4152) *
               C7938) *
              C15375) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C9297 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C9223 +
           (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C9298 +
           (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
               C15505) *
              C15461 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C9297 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C9223 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C9298 +
           (C13975 * C2113 + C15670 * C2334 + C13948 * C2114 + C15375 * C2335) *
               C15505) *
              C15468 +
          ((C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C9297 +
           (C13975 * C512 + C15670 * C706 + C13948 * C513 + C15375 * C707) *
               C9223 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C9298 +
           (C13975 * C3217 + C15670 * C3390 + C13948 * C3995 + C15375 * C4203) *
               C15505) *
              C7938) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C9297 +
                    (C14223 * C157 + C15461 * C303 + C14220 * C509 +
                     C15468 * C747 + C14231 * C512 + C7938 * C748) *
                        C9223 +
                    (C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                     C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                        C9298 +
                    (C14223 * C959 + C15461 * C1191 + C14220 * C2113 +
                     C15468 * C2387 + C14231 * C3217 + C7938 * C3430) *
                        C15505) *
                       C15670 +
                   ((C14223 * C82 + C15461 * C125 + C14220 * C392 +
                     C15468 * C461 + C14231 * C395 + C7938 * C462) *
                        C9297 +
                    (C14223 * C158 + C15461 * C304 + C14220 * C510 +
                     C15468 * C749 + C14231 * C513 + C7938 * C750) *
                        C9223 +
                    (C14223 * C845 + C15461 * C907 + C14220 * C1996 +
                     C15468 * C2058 + C14231 * C3884 + C7938 * C3943) *
                        C9298 +
                    (C14223 * C961 + C15461 * C1193 + C14220 * C2114 +
                     C15468 * C2388 + C14231 * C3995 + C7938 * C4254) *
                        C15505) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 +
                     C9507 + C9507 + C15505 * C1238) *
                        C15461 +
                    (C9503 * C391 + C9967 + C9967 + C9223 * C791 +
                     C9504 * C1995 + C9968 + C9968 + C15505 * C2440) *
                        C15468 +
                    (C9503 * C394 + C9969 + C9969 + C9223 * C792 +
                     C9504 * C3120 + C9970 + C9970 + C15505 * C3472) *
                        C7938) *
                       C15670 +
                   ((C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 +
                     C9509 + C9509 + C15505 * C1240) *
                        C15461 +
                    (C9503 * C392 + C9971 + C9971 + C9223 * C793 +
                     C9504 * C1996 + C9972 + C9972 + C15505 * C2441) *
                        C15468 +
                    (C9503 * C395 + C9973 + C9973 + C9223 * C794 +
                     C9504 * C3884 + C9974 + C9974 + C15505 * C4305) *
                        C7938) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15501 +
                    (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15508 +
                    (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C10794) *
                       C15461 +
                   ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15501 +
                    (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15508 +
                    (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C10794) *
                       C15468 +
                   ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15501 +
                    (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15508 +
                    (C2855 * C3121 + C3134 + C3134 + C15365 * C3127) * C10794) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                     C15468 * C459 + C14231 * C394 + C7938 * C460) *
                        C2856 +
                    (C14223 * C86 + C15461 * C129 + C14220 * C397 +
                     C15468 * C465 + C14231 * C400 + C7938 * C466) *
                        C15365) *
                       C15501 +
                   ((C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                     C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                        C2856 +
                    (C14223 * C850 + C15461 * C912 + C14220 * C1998 +
                     C15468 * C2060 + C14231 * C3123 + C7938 * C3175) *
                        C15365) *
                       C15508 +
                   ((C14223 * C847 + C15461 * C909 + C14220 * C3119 +
                     C15468 * C3173 + C14231 * C3121 + C7938 * C3174) *
                        C2856 +
                    (C14223 * C853 + C15461 * C915 + C14220 * C3122 +
                     C15468 * C3176 + C14231 * C3124 + C7938 * C3177) *
                        C15365) *
                       C10794) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                     C15508 * C959 + C14381 * C847 + C10794 * C960) *
                        C2856 +
                    (C14373 * C86 + C15501 * C162 + C14370 * C850 +
                     C15508 * C965 + C14381 * C853 + C10794 * C966) *
                        C15365) *
                       C15461 +
                   ((C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                     C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                        C2856 +
                    (C14373 * C397 + C15501 * C515 + C14370 * C1998 +
                     C15508 * C2116 + C14381 * C3122 + C10794 * C3219) *
                        C15365) *
                       C15468 +
                   ((C14373 * C394 + C15501 * C512 + C14370 * C3120 +
                     C15508 * C3217 + C14381 * C3121 + C10794 * C3218) *
                        C2856 +
                    (C14373 * C400 + C15501 * C518 + C14370 * C3123 +
                     C15508 * C3220 + C14381 * C3124 + C10794 * C3221) *
                        C15365) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C14223 +
                    (C2856 * C124 + C15365 * C189) * C15461 +
                    (C2856 * C391 + C15365 * C397) * C14220 +
                    (C2856 * C459 + C15365 * C559) * C15468 +
                    (C2856 * C394 + C15365 * C400) * C14231 +
                    (C2856 * C460 + C15365 * C562) * C7938) *
                       C15501 +
                   ((C2856 * C844 + C15365 * C850) * C14223 +
                    (C2856 * C906 + C15365 * C1009) * C15461 +
                    (C2856 * C1995 + C15365 * C1998) * C14220 +
                    (C2856 * C2057 + C15365 * C2169) * C15468 +
                    (C2856 * C3120 + C15365 * C3123) * C14231 +
                    (C2856 * C3172 + C15365 * C3260) * C7938) *
                       C15508 +
                   ((C2856 * C847 + C15365 * C853) * C14223 +
                    (C2856 * C909 + C15365 * C1012) * C15461 +
                    (C2856 * C3119 + C15365 * C3122) * C14220 +
                    (C2856 * C3173 + C15365 * C3261) * C15468 +
                    (C2856 * C3121 + C15365 * C3124) * C14231 +
                    (C2856 * C3174 + C15365 * C3262) * C7938) *
                       C10794) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14275 * C81 + C8113 + C8113 + C15461 * C217 +
                    C14268 * C391 + C8114 + C8114 + C15468 * C606 +
                    C8111 * C394 + C8115 + C8115 + C7938 * C607) *
                       C15365 * C15501 +
                   (C14275 * C844 + C8984 + C8984 + C15461 * C1053 +
                    C14268 * C1995 + C8985 + C8985 + C15468 * C2222 +
                    C8111 * C3120 + C8986 + C8986 + C7938 * C3301) *
                       C15365 * C15508 +
                   (C14275 * C847 + C13741 + C13741 + C15461 * C1056 +
                    C14268 * C3119 + C13742 + C13742 + C15468 * C3302 +
                    C8111 * C3121 + C13743 + C13743 + C7938 * C3303) *
                       C15365 * C10794) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                    C15508 * C959 + C14381 * C847 + C10794 * C960) *
                       C14223 +
                   (C14373 * C124 + C15501 * C249 + C14370 * C906 +
                    C15508 * C1103 + C14381 * C909 + C10794 * C1104) *
                       C15461 +
                   (C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                    C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                       C14220 +
                   (C14373 * C459 + C15501 * C659 + C14370 * C2057 +
                    C15508 * C2281 + C14381 * C3173 + C10794 * C3348) *
                       C15468 +
                   (C14373 * C394 + C15501 * C512 + C14370 * C3120 +
                    C15508 * C3217 + C14381 * C3121 + C10794 * C3218) *
                       C14231 +
                   (C14373 * C460 + C15501 * C660 + C14370 * C3172 +
                    C15508 * C3349 + C14381 * C3174 + C10794 * C3350) *
                       C7938) *
                  C15365 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C14373 +
                    (C2856 * C157 + C15365 * C276) * C15501 +
                    (C2856 * C844 + C15365 * C850) * C14370 +
                    (C2856 * C959 + C15365 * C1147) * C15508 +
                    (C2856 * C847 + C15365 * C853) * C14381 +
                    (C2856 * C960 + C15365 * C1150) * C10794) *
                       C15461 +
                   ((C2856 * C391 + C15365 * C397) * C14373 +
                    (C2856 * C509 + C15365 * C703) * C15501 +
                    (C2856 * C1995 + C15365 * C1998) * C14370 +
                    (C2856 * C2113 + C15365 * C2334) * C15508 +
                    (C2856 * C3119 + C15365 * C3122) * C14381 +
                    (C2856 * C3216 + C15365 * C3389) * C10794) *
                       C15468 +
                   ((C2856 * C394 + C15365 * C400) * C14373 +
                    (C2856 * C512 + C15365 * C706) * C15501 +
                    (C2856 * C3120 + C15365 * C3123) * C14370 +
                    (C2856 * C3217 + C15365 * C3390) * C15508 +
                    (C2856 * C3121 + C15365 * C3124) * C14381 +
                    (C2856 * C3218 + C15365 * C3391) * C10794) *
                       C7938) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14223 * C81 + C15461 * C124 + C14220 * C391 +
                    C15468 * C459 + C14231 * C394 + C7938 * C460) *
                       C14373 +
                   (C14223 * C157 + C15461 * C303 + C14220 * C509 +
                    C15468 * C747 + C14231 * C512 + C7938 * C748) *
                       C15501 +
                   (C14223 * C844 + C15461 * C906 + C14220 * C1995 +
                    C15468 * C2057 + C14231 * C3120 + C7938 * C3172) *
                       C14370 +
                   (C14223 * C959 + C15461 * C1191 + C14220 * C2113 +
                    C15468 * C2387 + C14231 * C3217 + C7938 * C3430) *
                       C15508 +
                   (C14223 * C847 + C15461 * C909 + C14220 * C3119 +
                    C15468 * C3173 + C14231 * C3121 + C7938 * C3174) *
                       C14381 +
                   (C14223 * C960 + C15461 * C1192 + C14220 * C3216 +
                    C15468 * C3431 + C14231 * C3218 + C7938 * C3432) *
                       C10794) *
                  C15365 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((C14425 * C81 + C11109 + C11109 + C15501 * C331 +
                    C14418 * C844 + C11110 + C11110 + C15508 * C1238 +
                    C11107 * C847 + C11111 + C11111 + C10794 * C1239) *
                       C15461 +
                   (C14425 * C391 + C11568 + C11568 + C15501 * C791 +
                    C14418 * C1995 + C11569 + C11569 + C15508 * C2440 +
                    C11107 * C3119 + C11570 + C11570 + C10794 * C3471) *
                       C15468 +
                   (C14425 * C394 + C13896 + C13896 + C15501 * C792 +
                    C14418 * C3120 + C13897 + C13897 + C15508 * C3472 +
                    C11107 * C3121 + C13898 + C13898 + C10794 * C3473) *
                       C7938) *
                  C15365 * C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C9223 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15505) *
              C15751 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C9223 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15505) *
              C15747 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C9223 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15505) *
              C15737 +
          ((C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C9223 +
           (C2855 * C4344 + C4348 + C4348 + C15365 * C4346) * C15505) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
            C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
               C9223 +
           (C2493 * C844 + C4678 + C4678 + C15741 * C856 + C2495 * C845 +
            C4679 + C4679 + C15728 * C857 + C2497 * C846 + C4680 + C4680 +
            C15708 * C858) *
               C15505) *
              C6784 +
          ((C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 +
            C2504 + C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
            C15708 * C405) *
               C9223 +
           (C2493 * C1995 + C11624 + C11624 + C15741 * C2001 + C2495 * C1996 +
            C11625 + C11625 + C15728 * C2002 + C2497 * C1997 + C11626 + C11626 +
            C15708 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15752 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15749 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C15740 +
           (C2855 * C5383 + C5390 + C5390 + C15365 * C5387) * C15701) *
              C6784 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15752 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15749 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C15740 +
           (C2855 * C6454 + C6458 + C6458 + C15365 * C6456) * C15701) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
            C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
               C2856 +
           (C7172 * C86 + C15751 * C129 + C7173 * C397 + C15747 * C465 +
            C7174 * C400 + C15737 * C466 + C7175 * C2859 + C15694 * C2897) *
               C15365) *
              C9223 +
          ((C7172 * C844 + C15751 * C906 + C7173 * C1995 + C15747 * C2057 +
            C7174 * C3120 + C15737 * C3172 + C7175 * C4344 + C15694 * C4382) *
               C2856 +
           (C7172 * C850 + C15751 * C912 + C7173 * C1998 + C15747 * C2060 +
            C7174 * C3123 + C15737 * C3175 + C7175 * C4345 + C15694 * C4383) *
               C15365) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C2494 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) *
               C15741 +
           (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C2496 +
           (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) *
               C15728 +
           (C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C2498 +
           (C6836 * C88 + C6784 * C131 + C6837 * C399 + C15465 * C469) *
               C15708) *
              C9223 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C2494 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C15741 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C2496 +
           (C6836 * C851 + C6784 * C913 + C6837 * C1999 + C15465 * C2061) *
               C15728 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C2498 +
           (C6836 * C852 + C6784 * C914 + C6837 * C2000 + C15465 * C2062) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C2856 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) *
               C15365) *
              C15752 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C2856 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C15365) *
              C15749 +
          ((C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
               C2856 +
           (C6836 * C853 + C6784 * C915 + C6837 * C3122 + C15465 * C3176) *
               C15365) *
              C15740 +
          ((C6836 * C5383 + C6784 * C5413 + C6837 * C6454 + C15465 * C6492) *
               C2856 +
           (C6836 * C5385 + C6784 * C5415 + C6837 * C6455 + C15465 * C6493) *
               C15365) *
              C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C2856 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15365) *
              C15751 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C2856 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15365) *
              C15747 +
          ((C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C2856 +
           (C9297 * C400 + C9223 * C518 + C9298 * C3123 + C15505 * C3220) *
               C15365) *
              C15737 +
          ((C9297 * C2857 + C9223 * C2921 + C9298 * C4344 + C15505 * C4418) *
               C2856 +
           (C9297 * C2859 + C9223 * C2923 + C9298 * C4345 + C15505 * C4419) *
               C15365) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C2494 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15741 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C2496 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15728 +
           (C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C2498 +
           (C9297 * C88 + C9223 * C164 + C9298 * C852 + C15505 * C969) *
               C15708) *
              C6784 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C2494 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15741 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C2496 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15728 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C2498 +
           (C9297 * C399 + C9223 * C517 + C9298 * C2000 + C15505 * C2118) *
               C15708) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C10082 * C81 + C15752 * C157 + C10083 * C844 + C15749 * C959 +
            C10084 * C847 + C15740 * C960 + C10085 * C5383 + C15701 * C5444) *
               C2856 +
           (C10082 * C86 + C15752 * C162 + C10083 * C850 + C15749 * C965 +
            C10084 * C853 + C15740 * C966 + C10085 * C5385 + C15701 * C5446) *
               C15365) *
              C6784 +
          ((C10082 * C391 + C15752 * C509 + C10083 * C1995 + C15749 * C2113 +
            C10084 * C3119 + C15740 * C3216 + C10085 * C6454 + C15701 * C6528) *
               C2856 +
           (C10082 * C397 + C15752 * C515 + C10083 * C1998 + C15749 * C2116 +
            C10084 * C3122 + C15740 * C3219 + C10085 * C6455 + C15701 * C6529) *
               C15365) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C7172 +
                    (C2856 * C124 + C15365 * C189) * C15751 +
                    (C2856 * C391 + C15365 * C397) * C7173 +
                    (C2856 * C459 + C15365 * C559) * C15747 +
                    (C2856 * C394 + C15365 * C400) * C7174 +
                    (C2856 * C460 + C15365 * C562) * C15737 +
                    (C2856 * C2857 + C15365 * C2859) * C7175 +
                    (C2856 * C2895 + C15365 * C2947) * C15694) *
                       C9223 +
                   ((C2856 * C844 + C15365 * C850) * C7172 +
                    (C2856 * C906 + C15365 * C1009) * C15751 +
                    (C2856 * C1995 + C15365 * C1998) * C7173 +
                    (C2856 * C2057 + C15365 * C2169) * C15747 +
                    (C2856 * C3120 + C15365 * C3123) * C7174 +
                    (C2856 * C3172 + C15365 * C3260) * C15737 +
                    (C2856 * C4344 + C15365 * C4345) * C7175 +
                    (C2856 * C4382 + C15365 * C4454) * C15694) *
                       C15505) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
                     C2498 * C83 + C15708 * C88) *
                        C6836 +
                    (C2494 * C124 + C15741 * C189 + C2496 * C125 +
                     C15728 * C190 + C2498 * C126 + C15708 * C191) *
                        C6784 +
                    (C2494 * C391 + C15741 * C397 + C2496 * C392 +
                     C15728 * C398 + C2498 * C393 + C15708 * C399) *
                        C6837 +
                    (C2494 * C459 + C15741 * C559 + C2496 * C461 +
                     C15728 * C560 + C2498 * C463 + C15708 * C561) *
                        C15465) *
                       C9223 +
                   ((C2494 * C844 + C15741 * C850 + C2496 * C845 +
                     C15728 * C851 + C2498 * C846 + C15708 * C852) *
                        C6836 +
                    (C2494 * C906 + C15741 * C1009 + C2496 * C907 +
                     C15728 * C1010 + C2498 * C908 + C15708 * C1011) *
                        C6784 +
                    (C2494 * C1995 + C15741 * C1998 + C2496 * C1996 +
                     C15728 * C1999 + C2498 * C1997 + C15708 * C2000) *
                        C6837 +
                    (C2494 * C2057 + C15741 * C2169 + C2496 * C2058 +
                     C15728 * C2170 + C2498 * C2059 + C15708 * C2171) *
                        C15465) *
                       C15505) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C6836 +
                    (C2856 * C124 + C15365 * C189) * C6784 +
                    (C2856 * C391 + C15365 * C397) * C6837 +
                    (C2856 * C459 + C15365 * C559) * C15465) *
                       C15752 +
                   ((C2856 * C844 + C15365 * C850) * C6836 +
                    (C2856 * C906 + C15365 * C1009) * C6784 +
                    (C2856 * C1995 + C15365 * C1998) * C6837 +
                    (C2856 * C2057 + C15365 * C2169) * C15465) *
                       C15749 +
                   ((C2856 * C847 + C15365 * C853) * C6836 +
                    (C2856 * C909 + C15365 * C1012) * C6784 +
                    (C2856 * C3119 + C15365 * C3122) * C6837 +
                    (C2856 * C3173 + C15365 * C3261) * C15465) *
                       C15740 +
                   ((C2856 * C5383 + C15365 * C5385) * C6836 +
                    (C2856 * C5413 + C15365 * C5470) * C6784 +
                    (C2856 * C6454 + C15365 * C6455) * C6837 +
                    (C2856 * C6492 + C15365 * C6564) * C15465) *
                       C15701) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7278 * C81 + C7283 + C7283 + C15751 * C217 + C7279 * C391 + C7284 +
           C7284 + C15747 * C606 + C7280 * C394 + C7285 + C7285 +
           C15737 * C607 + C7281 * C2857 + C7286 + C7286 + C15694 * C2976) *
              C15365 * C9223 +
          (C7278 * C844 + C12197 + C12197 + C15751 * C1053 + C7279 * C1995 +
           C12198 + C12198 + C15747 * C2222 + C7280 * C3120 + C12199 + C12199 +
           C15737 * C3301 + C7281 * C4344 + C12200 + C12200 + C15694 * C4489) *
              C15365 * C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
            C6944 + C15465 * C606) *
               C15741 +
           (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 + C6946 +
            C6946 + C15465 * C608) *
               C15728 +
           (C6940 * C83 + C6947 + C6947 + C6784 * C219 + C6941 * C393 + C6948 +
            C6948 + C15465 * C610) *
               C15708) *
              C9223 +
          ((C6940 * C844 + C7685 + C7685 + C6784 * C1053 + C6941 * C1995 +
            C7686 + C7686 + C15465 * C2222) *
               C15741 +
           (C6940 * C845 + C7687 + C7687 + C6784 * C1054 + C6941 * C1996 +
            C7688 + C7688 + C15465 * C2223) *
               C15728 +
           (C6940 * C846 + C8530 + C8530 + C6784 * C1055 + C6941 * C1997 +
            C8531 + C8531 + C15465 * C2224) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
           C6944 + C15465 * C606) *
              C15365 * C15752 +
          (C6940 * C844 + C7685 + C7685 + C6784 * C1053 + C6941 * C1995 +
           C7686 + C7686 + C15465 * C2222) *
              C15365 * C15749 +
          (C6940 * C847 + C7689 + C7689 + C6784 * C1056 + C6941 * C3119 +
           C7690 + C7690 + C15465 * C3302) *
              C15365 * C15740 +
          (C6940 * C5383 + C12509 + C12509 + C6784 * C5494 + C6941 * C6454 +
           C12510 + C12510 + C15465 * C6599) *
              C15365 * C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C7172 +
          (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
              C15751 +
          (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
              C7173 +
          (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
              C15747 +
          (C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
              C7174 +
          (C9297 * C460 + C9223 * C660 + C9298 * C3172 + C15505 * C3349) *
              C15737 +
          (C9297 * C2857 + C9223 * C2921 + C9298 * C4344 + C15505 * C4418) *
              C7175 +
          (C9297 * C2895 + C9223 * C3005 + C9298 * C4382 + C15505 * C4528) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C6836 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C6784 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C6837 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15465) *
              C15741 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C6836 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C6784 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C6837 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15465) *
              C15728 +
          ((C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C6836 +
           (C9297 * C126 + C9223 * C251 + C9298 * C908 + C15505 * C1107) *
               C6784 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C6837 +
           (C9297 * C463 + C9223 * C663 + C9298 * C2059 + C15505 * C2283) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C10082 * C81 + C15752 * C157 + C10083 * C844 + C15749 * C959 +
           C10084 * C847 + C15740 * C960 + C10085 * C5383 + C15701 * C5444) *
              C6836 +
          (C10082 * C124 + C15752 * C249 + C10083 * C906 + C15749 * C1103 +
           C10084 * C909 + C15740 * C1104 + C10085 * C5413 + C15701 * C5520) *
              C6784 +
          (C10082 * C391 + C15752 * C509 + C10083 * C1995 + C15749 * C2113 +
           C10084 * C3119 + C15740 * C3216 + C10085 * C6454 + C15701 * C6528) *
              C6837 +
          (C10082 * C459 + C15752 * C659 + C10083 * C2057 + C15749 * C2281 +
           C10084 * C3173 + C15740 * C3348 + C10085 * C6492 + C15701 * C6636) *
              C15465) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C9297 +
                    (C2856 * C157 + C15365 * C276) * C9223 +
                    (C2856 * C844 + C15365 * C850) * C9298 +
                    (C2856 * C959 + C15365 * C1147) * C15505) *
                       C15751 +
                   ((C2856 * C391 + C15365 * C397) * C9297 +
                    (C2856 * C509 + C15365 * C703) * C9223 +
                    (C2856 * C1995 + C15365 * C1998) * C9298 +
                    (C2856 * C2113 + C15365 * C2334) * C15505) *
                       C15747 +
                   ((C2856 * C394 + C15365 * C400) * C9297 +
                    (C2856 * C512 + C15365 * C706) * C9223 +
                    (C2856 * C3120 + C15365 * C3123) * C9298 +
                    (C2856 * C3217 + C15365 * C3390) * C15505) *
                       C15737 +
                   ((C2856 * C2857 + C15365 * C2859) * C9297 +
                    (C2856 * C2921 + C15365 * C3029) * C9223 +
                    (C2856 * C4344 + C15365 * C4345) * C9298 +
                    (C2856 * C4418 + C15365 * C4563) * C15505) *
                       C15694) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
                     C2498 * C83 + C15708 * C88) *
                        C9297 +
                    (C2494 * C157 + C15741 * C276 + C2496 * C158 +
                     C15728 * C277 + C2498 * C159 + C15708 * C278) *
                        C9223 +
                    (C2494 * C844 + C15741 * C850 + C2496 * C845 +
                     C15728 * C851 + C2498 * C846 + C15708 * C852) *
                        C9298 +
                    (C2494 * C959 + C15741 * C1147 + C2496 * C961 +
                     C15728 * C1148 + C2498 * C963 + C15708 * C1149) *
                        C15505) *
                       C6784 +
                   ((C2494 * C391 + C15741 * C397 + C2496 * C392 +
                     C15728 * C398 + C2498 * C393 + C15708 * C399) *
                        C9297 +
                    (C2494 * C509 + C15741 * C703 + C2496 * C510 +
                     C15728 * C704 + C2498 * C511 + C15708 * C705) *
                        C9223 +
                    (C2494 * C1995 + C15741 * C1998 + C2496 * C1996 +
                     C15728 * C1999 + C2498 * C1997 + C15708 * C2000) *
                        C9298 +
                    (C2494 * C2113 + C15741 * C2334 + C2496 * C2114 +
                     C15728 * C2335 + C2498 * C2115 + C15708 * C2336) *
                        C15505) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C10082 +
                    (C2856 * C157 + C15365 * C276) * C15752 +
                    (C2856 * C844 + C15365 * C850) * C10083 +
                    (C2856 * C959 + C15365 * C1147) * C15749 +
                    (C2856 * C847 + C15365 * C853) * C10084 +
                    (C2856 * C960 + C15365 * C1150) * C15740 +
                    (C2856 * C5383 + C15365 * C5385) * C10085 +
                    (C2856 * C5444 + C15365 * C5544) * C15701) *
                       C6784 +
                   ((C2856 * C391 + C15365 * C397) * C10082 +
                    (C2856 * C509 + C15365 * C703) * C15752 +
                    (C2856 * C1995 + C15365 * C1998) * C10083 +
                    (C2856 * C2113 + C15365 * C2334) * C15749 +
                    (C2856 * C3119 + C15365 * C3122) * C10084 +
                    (C2856 * C3216 + C15365 * C3389) * C15740 +
                    (C2856 * C6454 + C15365 * C6455) * C10085 +
                    (C2856 * C6528 + C15365 * C6671) * C15701) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
           C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
              C9297 +
          (C7172 * C157 + C15751 * C303 + C7173 * C509 + C15747 * C747 +
           C7174 * C512 + C15737 * C748 + C7175 * C2921 + C15694 * C3053) *
              C9223 +
          (C7172 * C844 + C15751 * C906 + C7173 * C1995 + C15747 * C2057 +
           C7174 * C3120 + C15737 * C3172 + C7175 * C4344 + C15694 * C4382) *
              C9298 +
          (C7172 * C959 + C15751 * C1191 + C7173 * C2113 + C15747 * C2387 +
           C7174 * C3217 + C15737 * C3430 + C7175 * C4418 + C15694 * C4598) *
              C15505) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C9297 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C9223 +
           (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C9298 +
           (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
               C15505) *
              C15741 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C9297 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C9223 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C9298 +
           (C6836 * C961 + C6784 * C1193 + C6837 * C2114 + C15465 * C2388) *
               C15505) *
              C15728 +
          ((C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C9297 +
           (C6836 * C159 + C6784 * C305 + C6837 * C511 + C15465 * C751) *
               C9223 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C9298 +
           (C6836 * C963 + C6784 * C1195 + C6837 * C2115 + C15465 * C2389) *
               C15505) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C10082 +
          (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
              C15752 +
          (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
              C10083 +
          (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
              C15749 +
          (C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
              C10084 +
          (C6836 * C960 + C6784 * C1192 + C6837 * C3216 + C15465 * C3431) *
              C15740 +
          (C6836 * C5383 + C6784 * C5413 + C6837 * C6454 + C15465 * C6492) *
              C10085 +
          (C6836 * C5444 + C6784 * C5568 + C6837 * C6528 + C15465 * C6706) *
              C15701) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 + C9507 +
           C9507 + C15505 * C1238) *
              C15751 +
          (C9503 * C391 + C9967 + C9967 + C9223 * C791 + C9504 * C1995 + C9968 +
           C9968 + C15505 * C2440) *
              C15747 +
          (C9503 * C394 + C9969 + C9969 + C9223 * C792 + C9504 * C3120 + C9970 +
           C9970 + C15505 * C3472) *
              C15737 +
          (C9503 * C2857 + C12337 + C12337 + C9223 * C3077 + C9504 * C4344 +
           C12338 + C12338 + C15505 * C4633) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 + C9507 +
            C9507 + C15505 * C1238) *
               C6784 +
           (C9503 * C391 + C9967 + C9967 + C9223 * C791 + C9504 * C1995 +
            C9968 + C9968 + C15505 * C2440) *
               C15465) *
              C15741 +
          ((C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 + C9509 +
            C9509 + C15505 * C1240) *
               C6784 +
           (C9503 * C392 + C9971 + C9971 + C9223 * C793 + C9504 * C1996 +
            C9972 + C9972 + C15505 * C2441) *
               C15465) *
              C15728 +
          ((C9503 * C83 + C9510 + C9510 + C9223 * C333 + C9504 * C846 + C9511 +
            C9511 + C15505 * C1242) *
               C6784 +
           (C9503 * C393 + C10753 + C10753 + C9223 * C795 + C9504 * C1997 +
            C10754 + C10754 + C15505 * C2442) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C10290 * C81 + C10295 + C10295 + C15752 * C331 + C10291 * C844 +
           C10296 + C10296 + C15749 * C1238 + C10292 * C847 + C10297 + C10297 +
           C15740 * C1239 + C10293 * C5383 + C10298 + C10298 + C15701 * C5597) *
              C6784 +
          (C10290 * C391 + C12647 + C12647 + C15752 * C791 + C10291 * C1995 +
           C12648 + C12648 + C15749 * C2440 + C10292 * C3119 + C12649 + C12649 +
           C15740 * C3471 + C10293 * C6454 + C12650 + C12650 + C15701 * C6741) *
              C15465) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 +
                     C3529 + C3529 + C15375 * C92) *
                        C15501 +
                    (C3520 * C844 + C3888 + C3888 + C15670 * C856 +
                     C3522 * C845 + C3889 + C3889 + C15375 * C857) *
                        C15508 +
                    (C3520 * C847 + C5658 + C5658 + C15670 * C859 +
                     C3522 * C848 + C5659 + C5659 + C15375 * C860) *
                        C10794) *
                       C6784 +
                   ((C3520 * C391 + C3530 + C3530 + C15670 * C403 +
                     C3522 * C392 + C3531 + C3531 + C15375 * C404) *
                        C15501 +
                    (C3520 * C1995 + C3890 + C3890 + C15670 * C2001 +
                     C3522 * C1996 + C3891 + C3891 + C15375 * C2002) *
                        C15508 +
                    (C3520 * C3119 + C5660 + C5660 + C15670 * C3125 +
                     C3522 * C5654 + C5661 + C5661 + C15375 * C5656) *
                        C10794) *
                       C15465) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) *
               C13975 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) *
               C15670 +
           (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) *
               C13948 +
           (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) *
               C15375) *
              C15501 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C13975 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C15670 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C13948 +
           (C6836 * C851 + C6784 * C913 + C6837 * C1999 + C15465 * C2061) *
               C15375) *
              C15508 +
          ((C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
               C13975 +
           (C6836 * C853 + C6784 * C915 + C6837 * C3122 + C15465 * C3176) *
               C15670 +
           (C6836 * C848 + C6784 * C910 + C6837 * C5654 + C15465 * C5711) *
               C13948 +
           (C6836 * C854 + C6784 * C916 + C6837 * C5655 + C15465 * C5712) *
               C15375) *
              C10794) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                     C15508 * C959 + C14381 * C847 + C10794 * C960) *
                        C13975 +
                    (C14373 * C86 + C15501 * C162 + C14370 * C850 +
                     C15508 * C965 + C14381 * C853 + C10794 * C966) *
                        C15670 +
                    (C14373 * C82 + C15501 * C158 + C14370 * C845 +
                     C15508 * C961 + C14381 * C848 + C10794 * C962) *
                        C13948 +
                    (C14373 * C87 + C15501 * C163 + C14370 * C851 +
                     C15508 * C967 + C14381 * C854 + C10794 * C968) *
                        C15375) *
                       C6784 +
                   ((C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                     C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                        C13975 +
                    (C14373 * C397 + C15501 * C515 + C14370 * C1998 +
                     C15508 * C2116 + C14381 * C3122 + C10794 * C3219) *
                        C15670 +
                    (C14373 * C392 + C15501 * C510 + C14370 * C1996 +
                     C15508 * C2114 + C14381 * C5654 + C10794 * C5763) *
                        C13948 +
                    (C14373 * C398 + C15501 * C516 + C14370 * C1999 +
                     C15508 * C2117 + C14381 * C5655 + C10794 * C5764) *
                        C15375) *
                       C15465) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C6836 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C6784 +
           (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C6837 +
           (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
               C15465) *
              C15501 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C6836 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C6784 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C6837 +
           (C13975 * C2057 + C15670 * C2169 + C13948 * C2058 + C15375 * C2170) *
               C15465) *
              C15508 +
          ((C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
               C6836 +
           (C13975 * C909 + C15670 * C1012 + C13948 * C910 + C15375 * C1013) *
               C6784 +
           (C13975 * C3119 + C15670 * C3122 + C13948 * C5654 + C15375 * C5655) *
               C6837 +
           (C13975 * C3173 + C15670 * C3261 + C13948 * C5711 + C15375 * C5815) *
               C15465) *
              C10794) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 +
                     C6944 + C6944 + C15465 * C606) *
                        C15670 +
                    (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 +
                     C6946 + C6946 + C15465 * C608) *
                        C15375) *
                       C15501 +
                   ((C6940 * C844 + C7685 + C7685 + C6784 * C1053 +
                     C6941 * C1995 + C7686 + C7686 + C15465 * C2222) *
                        C15670 +
                    (C6940 * C845 + C7687 + C7687 + C6784 * C1054 +
                     C6941 * C1996 + C7688 + C7688 + C15465 * C2223) *
                        C15375) *
                       C15508 +
                   ((C6940 * C847 + C7689 + C7689 + C6784 * C1056 +
                     C6941 * C3119 + C7690 + C7690 + C15465 * C3302) *
                        C15670 +
                    (C6940 * C848 + C7691 + C7691 + C6784 * C1057 +
                     C6941 * C5654 + C7692 + C7692 + C15465 * C5866) *
                        C15375) *
                       C10794) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                     C15508 * C959 + C14381 * C847 + C10794 * C960) *
                        C6836 +
                    (C14373 * C124 + C15501 * C249 + C14370 * C906 +
                     C15508 * C1103 + C14381 * C909 + C10794 * C1104) *
                        C6784 +
                    (C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                     C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                        C6837 +
                    (C14373 * C459 + C15501 * C659 + C14370 * C2057 +
                     C15508 * C2281 + C14381 * C3173 + C10794 * C3348) *
                        C15465) *
                       C15670 +
                   ((C14373 * C82 + C15501 * C158 + C14370 * C845 +
                     C15508 * C961 + C14381 * C848 + C10794 * C962) *
                        C6836 +
                    (C14373 * C125 + C15501 * C250 + C14370 * C907 +
                     C15508 * C1105 + C14381 * C910 + C10794 * C1106) *
                        C6784 +
                    (C14373 * C392 + C15501 * C510 + C14370 * C1996 +
                     C15508 * C2114 + C14381 * C5654 + C10794 * C5763) *
                        C6837 +
                    (C14373 * C461 + C15501 * C661 + C14370 * C2058 +
                     C15508 * C2282 + C14381 * C5711 + C10794 * C5921) *
                        C15465) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) *
               C14373 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C15501 +
           (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C14370 +
           (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
               C15508 +
           (C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
               C14381 +
           (C13975 * C960 + C15670 * C1150 + C13948 * C962 + C15375 * C1151) *
               C10794) *
              C6784 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C14373 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C15501 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C14370 +
           (C13975 * C2113 + C15670 * C2334 + C13948 * C2114 + C15375 * C2335) *
               C15508 +
           (C13975 * C3119 + C15670 * C3122 + C13948 * C5654 + C15375 * C5655) *
               C14381 +
           (C13975 * C3216 + C15670 * C3389 + C13948 * C5763 + C15375 * C5972) *
               C10794) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) *
               C14373 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C15501 +
           (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C14370 +
           (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
               C15508 +
           (C6836 * C847 + C6784 * C909 + C6837 * C3119 + C15465 * C3173) *
               C14381 +
           (C6836 * C960 + C6784 * C1192 + C6837 * C3216 + C15465 * C3431) *
               C10794) *
              C15670 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) *
               C14373 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C15501 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C14370 +
           (C6836 * C961 + C6784 * C1193 + C6837 * C2114 + C15465 * C2388) *
               C15508 +
           (C6836 * C848 + C6784 * C910 + C6837 * C5654 + C15465 * C5711) *
               C14381 +
           (C6836 * C962 + C6784 * C1194 + C6837 * C5763 + C15465 * C6023) *
               C10794) *
              C15375) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((C14425 * C81 + C11109 + C11109 + C15501 * C331 +
                     C14418 * C844 + C11110 + C11110 + C15508 * C1238 +
                     C11107 * C847 + C11111 + C11111 + C10794 * C1239) *
                        C6784 +
                    (C14425 * C391 + C11568 + C11568 + C15501 * C791 +
                     C14418 * C1995 + C11569 + C11569 + C15508 * C2440 +
                     C11107 * C3119 + C11570 + C11570 + C10794 * C3471) *
                        C15465) *
                       C15670 +
                   ((C14425 * C82 + C11112 + C11112 + C15501 * C332 +
                     C14418 * C845 + C11113 + C11113 + C15508 * C1240 +
                     C11107 * C848 + C11114 + C11114 + C10794 * C1241) *
                        C6784 +
                    (C14425 * C392 + C11571 + C11571 + C15501 * C793 +
                     C14418 * C1996 + C11572 + C11572 + C15508 * C2441 +
                     C11107 * C5654 + C11573 + C11573 + C10794 * C6074) *
                        C15465) *
                       C15375) *
                  C68 * C69 * C70) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
            C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
               C9223 +
           (C2493 * C844 + C4678 + C4678 + C15741 * C856 + C2495 * C845 +
            C4679 + C4679 + C15728 * C857 + C2497 * C846 + C4680 + C4680 +
            C15708 * C858) *
               C15505) *
              C6784 +
          ((C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 +
            C2504 + C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
            C15708 * C405) *
               C9223 +
           (C2493 * C1995 + C11624 + C11624 + C15741 * C2001 + C2495 * C1996 +
            C11625 + C11625 + C15728 * C2002 + C2497 * C1997 + C11626 + C11626 +
            C15708 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C9223 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15505) *
              C15751 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C9223 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15505) *
              C15747 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C9223 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15505) *
              C15737 +
          ((C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C9223 +
           (C2855 * C4344 + C4348 + C4348 + C15365 * C4346) * C15505) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C2494 +
           (C6836 * C86 + C6784 * C129 + C6837 * C397 + C15465 * C465) *
               C15741 +
           (C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C2496 +
           (C6836 * C87 + C6784 * C130 + C6837 * C398 + C15465 * C467) *
               C15728 +
           (C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C2498 +
           (C6836 * C88 + C6784 * C131 + C6837 * C399 + C15465 * C469) *
               C15708) *
              C9223 +
          ((C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C2494 +
           (C6836 * C850 + C6784 * C912 + C6837 * C1998 + C15465 * C2060) *
               C15741 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C2496 +
           (C6836 * C851 + C6784 * C913 + C6837 * C1999 + C15465 * C2061) *
               C15728 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C2498 +
           (C6836 * C852 + C6784 * C914 + C6837 * C2000 + C15465 * C2062) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
            C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
               C2856 +
           (C7172 * C86 + C15751 * C129 + C7173 * C397 + C15747 * C465 +
            C7174 * C400 + C15737 * C466 + C7175 * C2859 + C15694 * C2897) *
               C15365) *
              C9223 +
          ((C7172 * C844 + C15751 * C906 + C7173 * C1995 + C15747 * C2057 +
            C7174 * C3120 + C15737 * C3172 + C7175 * C4344 + C15694 * C4382) *
               C2856 +
           (C7172 * C850 + C15751 * C912 + C7173 * C1998 + C15747 * C2060 +
            C7174 * C3123 + C15737 * C3175 + C7175 * C4345 + C15694 * C4383) *
               C15365) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C2494 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15741 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C2496 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15728 +
           (C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C2498 +
           (C9297 * C88 + C9223 * C164 + C9298 * C852 + C15505 * C969) *
               C15708) *
              C6784 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C2494 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15741 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C2496 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15728 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C2498 +
           (C9297 * C399 + C9223 * C517 + C9298 * C2000 + C15505 * C2118) *
               C15708) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C2856 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15365) *
              C15751 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C2856 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15365) *
              C15747 +
          ((C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C2856 +
           (C9297 * C400 + C9223 * C518 + C9298 * C3123 + C15505 * C3220) *
               C15365) *
              C15737 +
          ((C9297 * C2857 + C9223 * C2921 + C9298 * C4344 + C15505 * C4418) *
               C2856 +
           (C9297 * C2859 + C9223 * C2923 + C9298 * C4345 + C15505 * C4419) *
               C15365) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
                     C2498 * C83 + C15708 * C88) *
                        C6836 +
                    (C2494 * C124 + C15741 * C189 + C2496 * C125 +
                     C15728 * C190 + C2498 * C126 + C15708 * C191) *
                        C6784 +
                    (C2494 * C391 + C15741 * C397 + C2496 * C392 +
                     C15728 * C398 + C2498 * C393 + C15708 * C399) *
                        C6837 +
                    (C2494 * C459 + C15741 * C559 + C2496 * C461 +
                     C15728 * C560 + C2498 * C463 + C15708 * C561) *
                        C15465) *
                       C9223 +
                   ((C2494 * C844 + C15741 * C850 + C2496 * C845 +
                     C15728 * C851 + C2498 * C846 + C15708 * C852) *
                        C6836 +
                    (C2494 * C906 + C15741 * C1009 + C2496 * C907 +
                     C15728 * C1010 + C2498 * C908 + C15708 * C1011) *
                        C6784 +
                    (C2494 * C1995 + C15741 * C1998 + C2496 * C1996 +
                     C15728 * C1999 + C2498 * C1997 + C15708 * C2000) *
                        C6837 +
                    (C2494 * C2057 + C15741 * C2169 + C2496 * C2058 +
                     C15728 * C2170 + C2498 * C2059 + C15708 * C2171) *
                        C15465) *
                       C15505) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C7172 +
                    (C2856 * C124 + C15365 * C189) * C15751 +
                    (C2856 * C391 + C15365 * C397) * C7173 +
                    (C2856 * C459 + C15365 * C559) * C15747 +
                    (C2856 * C394 + C15365 * C400) * C7174 +
                    (C2856 * C460 + C15365 * C562) * C15737 +
                    (C2856 * C2857 + C15365 * C2859) * C7175 +
                    (C2856 * C2895 + C15365 * C2947) * C15694) *
                       C9223 +
                   ((C2856 * C844 + C15365 * C850) * C7172 +
                    (C2856 * C906 + C15365 * C1009) * C15751 +
                    (C2856 * C1995 + C15365 * C1998) * C7173 +
                    (C2856 * C2057 + C15365 * C2169) * C15747 +
                    (C2856 * C3120 + C15365 * C3123) * C7174 +
                    (C2856 * C3172 + C15365 * C3260) * C15737 +
                    (C2856 * C4344 + C15365 * C4345) * C7175 +
                    (C2856 * C4382 + C15365 * C4454) * C15694) *
                       C15505) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6940 * C81 + C6943 + C6943 + C6784 * C217 + C6941 * C391 + C6944 +
            C6944 + C15465 * C606) *
               C15741 +
           (C6940 * C82 + C6945 + C6945 + C6784 * C218 + C6941 * C392 + C6946 +
            C6946 + C15465 * C608) *
               C15728 +
           (C6940 * C83 + C6947 + C6947 + C6784 * C219 + C6941 * C393 + C6948 +
            C6948 + C15465 * C610) *
               C15708) *
              C9223 +
          ((C6940 * C844 + C7685 + C7685 + C6784 * C1053 + C6941 * C1995 +
            C7686 + C7686 + C15465 * C2222) *
               C15741 +
           (C6940 * C845 + C7687 + C7687 + C6784 * C1054 + C6941 * C1996 +
            C7688 + C7688 + C15465 * C2223) *
               C15728 +
           (C6940 * C846 + C8530 + C8530 + C6784 * C1055 + C6941 * C1997 +
            C8531 + C8531 + C15465 * C2224) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7278 * C81 + C7283 + C7283 + C15751 * C217 + C7279 * C391 + C7284 +
           C7284 + C15747 * C606 + C7280 * C394 + C7285 + C7285 +
           C15737 * C607 + C7281 * C2857 + C7286 + C7286 + C15694 * C2976) *
              C15365 * C9223 +
          (C7278 * C844 + C12197 + C12197 + C15751 * C1053 + C7279 * C1995 +
           C12198 + C12198 + C15747 * C2222 + C7280 * C3120 + C12199 + C12199 +
           C15737 * C3301 + C7281 * C4344 + C12200 + C12200 + C15694 * C4489) *
              C15365 * C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C6836 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C6784 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C6837 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15465) *
              C15741 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C6836 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C6784 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C6837 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15465) *
              C15728 +
          ((C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C6836 +
           (C9297 * C126 + C9223 * C251 + C9298 * C908 + C15505 * C1107) *
               C6784 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C6837 +
           (C9297 * C463 + C9223 * C663 + C9298 * C2059 + C15505 * C2283) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C7172 +
          (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
              C15751 +
          (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
              C7173 +
          (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
              C15747 +
          (C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
              C7174 +
          (C9297 * C460 + C9223 * C660 + C9298 * C3172 + C15505 * C3349) *
              C15737 +
          (C9297 * C2857 + C9223 * C2921 + C9298 * C4344 + C15505 * C4418) *
              C7175 +
          (C9297 * C2895 + C9223 * C3005 + C9298 * C4382 + C15505 * C4528) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
                     C2498 * C83 + C15708 * C88) *
                        C9297 +
                    (C2494 * C157 + C15741 * C276 + C2496 * C158 +
                     C15728 * C277 + C2498 * C159 + C15708 * C278) *
                        C9223 +
                    (C2494 * C844 + C15741 * C850 + C2496 * C845 +
                     C15728 * C851 + C2498 * C846 + C15708 * C852) *
                        C9298 +
                    (C2494 * C959 + C15741 * C1147 + C2496 * C961 +
                     C15728 * C1148 + C2498 * C963 + C15708 * C1149) *
                        C15505) *
                       C6784 +
                   ((C2494 * C391 + C15741 * C397 + C2496 * C392 +
                     C15728 * C398 + C2498 * C393 + C15708 * C399) *
                        C9297 +
                    (C2494 * C509 + C15741 * C703 + C2496 * C510 +
                     C15728 * C704 + C2498 * C511 + C15708 * C705) *
                        C9223 +
                    (C2494 * C1995 + C15741 * C1998 + C2496 * C1996 +
                     C15728 * C1999 + C2498 * C1997 + C15708 * C2000) *
                        C9298 +
                    (C2494 * C2113 + C15741 * C2334 + C2496 * C2114 +
                     C15728 * C2335 + C2498 * C2115 + C15708 * C2336) *
                        C15505) *
                       C15465) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C2856 * C81 + C15365 * C86) * C9297 +
                    (C2856 * C157 + C15365 * C276) * C9223 +
                    (C2856 * C844 + C15365 * C850) * C9298 +
                    (C2856 * C959 + C15365 * C1147) * C15505) *
                       C15751 +
                   ((C2856 * C391 + C15365 * C397) * C9297 +
                    (C2856 * C509 + C15365 * C703) * C9223 +
                    (C2856 * C1995 + C15365 * C1998) * C9298 +
                    (C2856 * C2113 + C15365 * C2334) * C15505) *
                       C15747 +
                   ((C2856 * C394 + C15365 * C400) * C9297 +
                    (C2856 * C512 + C15365 * C706) * C9223 +
                    (C2856 * C3120 + C15365 * C3123) * C9298 +
                    (C2856 * C3217 + C15365 * C3390) * C15505) *
                       C15737 +
                   ((C2856 * C2857 + C15365 * C2859) * C9297 +
                    (C2856 * C2921 + C15365 * C3029) * C9223 +
                    (C2856 * C4344 + C15365 * C4345) * C9298 +
                    (C2856 * C4418 + C15365 * C4563) * C15505) *
                       C15694) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6836 * C81 + C6784 * C124 + C6837 * C391 + C15465 * C459) * C9297 +
           (C6836 * C157 + C6784 * C303 + C6837 * C509 + C15465 * C747) *
               C9223 +
           (C6836 * C844 + C6784 * C906 + C6837 * C1995 + C15465 * C2057) *
               C9298 +
           (C6836 * C959 + C6784 * C1191 + C6837 * C2113 + C15465 * C2387) *
               C15505) *
              C15741 +
          ((C6836 * C82 + C6784 * C125 + C6837 * C392 + C15465 * C461) * C9297 +
           (C6836 * C158 + C6784 * C304 + C6837 * C510 + C15465 * C749) *
               C9223 +
           (C6836 * C845 + C6784 * C907 + C6837 * C1996 + C15465 * C2058) *
               C9298 +
           (C6836 * C961 + C6784 * C1193 + C6837 * C2114 + C15465 * C2388) *
               C15505) *
              C15728 +
          ((C6836 * C83 + C6784 * C126 + C6837 * C393 + C15465 * C463) * C9297 +
           (C6836 * C159 + C6784 * C305 + C6837 * C511 + C15465 * C751) *
               C9223 +
           (C6836 * C846 + C6784 * C908 + C6837 * C1997 + C15465 * C2059) *
               C9298 +
           (C6836 * C963 + C6784 * C1195 + C6837 * C2115 + C15465 * C2389) *
               C15505) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C7172 * C81 + C15751 * C124 + C7173 * C391 + C15747 * C459 +
           C7174 * C394 + C15737 * C460 + C7175 * C2857 + C15694 * C2895) *
              C9297 +
          (C7172 * C157 + C15751 * C303 + C7173 * C509 + C15747 * C747 +
           C7174 * C512 + C15737 * C748 + C7175 * C2921 + C15694 * C3053) *
              C9223 +
          (C7172 * C844 + C15751 * C906 + C7173 * C1995 + C15747 * C2057 +
           C7174 * C3120 + C15737 * C3172 + C7175 * C4344 + C15694 * C4382) *
              C9298 +
          (C7172 * C959 + C15751 * C1191 + C7173 * C2113 + C15747 * C2387 +
           C7174 * C3217 + C15737 * C3430 + C7175 * C4418 + C15694 * C4598) *
              C15505) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  (((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 +
                     C9507 + C9507 + C15505 * C1238) *
                        C6784 +
                    (C9503 * C391 + C9967 + C9967 + C9223 * C791 +
                     C9504 * C1995 + C9968 + C9968 + C15505 * C2440) *
                        C15465) *
                       C15741 +
                   ((C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 +
                     C9509 + C9509 + C15505 * C1240) *
                        C6784 +
                    (C9503 * C392 + C9971 + C9971 + C9223 * C793 +
                     C9504 * C1996 + C9972 + C9972 + C15505 * C2441) *
                        C15465) *
                       C15728 +
                   ((C9503 * C83 + C9510 + C9510 + C9223 * C333 + C9504 * C846 +
                     C9511 + C9511 + C15505 * C1242) *
                        C6784 +
                    (C9503 * C393 + C10753 + C10753 + C9223 * C795 +
                     C9504 * C1997 + C10754 + C10754 + C15505 * C2442) *
                        C15465) *
                       C15708) *
                  C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 +
                    C9507 + C9507 + C15505 * C1238) *
                       C15751 +
                   (C9503 * C391 + C9967 + C9967 + C9223 * C791 +
                    C9504 * C1995 + C9968 + C9968 + C15505 * C2440) *
                       C15747 +
                   (C9503 * C394 + C9969 + C9969 + C9223 * C792 +
                    C9504 * C3120 + C9970 + C9970 + C15505 * C3472) *
                       C15737 +
                   (C9503 * C2857 + C12337 + C12337 + C9223 * C3077 +
                    C9504 * C4344 + C12338 + C12338 + C15505 * C4633) *
                       C15694) *
                  C15365 * C68 * C69 * C70) /
                     (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
           C3529 + C15375 * C92) *
              C15418 * C3516 +
          (C3520 * C391 + C3530 + C3530 + C15670 * C403 + C3522 * C392 + C3531 +
           C3531 + C15375 * C404) *
              C15418 * C3517 +
          (C3520 * C394 + C3532 + C3532 + C15670 * C406 + C3522 * C395 + C3533 +
           C3533 + C15375 * C407) *
              C15418 * C3518 +
          (C3520 * C2857 + C3534 + C3534 + C15670 * C2861 + C3522 * C3524 +
           C3535 + C3535 + C15375 * C3526) *
              C15418 * C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1293 * C81 + C1305 + C1305 + C1287 * C91 + C1295 * C82 + C1306 +
           C1306 + C1288 * C92 + C1297 * C83 + C1307 + C1307 + C1289 * C93 +
           C1299 * C84 + C1308 + C1308 + C15685 * C94) *
              C15418 * C15686 +
          (C1293 * C391 + C1309 + C1309 + C1287 * C403 + C1295 * C392 + C1310 +
           C1310 + C1288 * C404 + C1297 * C393 + C1311 + C1311 + C1289 * C405 +
           C1299 * C1301 + C1312 + C1312 + C15685 * C1303) *
              C15418 * C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
            C3529 + C15375 * C92) *
               C4674 +
           (C3520 * C844 + C3888 + C3888 + C15670 * C856 + C3522 * C845 +
            C3889 + C3889 + C15375 * C857) *
               C4675 +
           (C3520 * C847 + C5658 + C5658 + C15670 * C859 + C3522 * C848 +
            C5659 + C5659 + C15375 * C860) *
               C15715) *
              C15686 +
          ((C3520 * C391 + C3530 + C3530 + C15670 * C403 + C3522 * C392 +
            C3531 + C3531 + C15375 * C404) *
               C4674 +
           (C3520 * C1995 + C3890 + C3890 + C15670 * C2001 + C3522 * C1996 +
            C3891 + C3891 + C15375 * C2002) *
               C4675 +
           (C3520 * C3119 + C5660 + C5660 + C15670 * C3125 + C3522 * C5654 +
            C5661 + C5661 + C15375 * C5656) *
               C15715) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
           C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
              C13975 +
          (C3569 * C86 + C3516 * C129 + C3570 * C397 + C3517 * C465 +
           C3571 * C400 + C3518 * C466 + C3572 * C2859 + C15694 * C2897) *
              C15670 +
          (C3569 * C82 + C3516 * C125 + C3570 * C392 + C3517 * C461 +
           C3571 * C395 + C3518 * C462 + C3572 * C3524 + C15694 * C3573) *
              C13948 +
          (C3569 * C87 + C3516 * C130 + C3570 * C398 + C3517 * C467 +
           C3571 * C401 + C3518 * C468 + C3572 * C3525 + C15694 * C3574) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C1294 +
          (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) * C1287 +
          (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C1296 +
          (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) * C1288 +
          (C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C1298 +
          (C1346 * C88 + C15686 * C131 + C1347 * C399 + C15465 * C469) * C1289 +
          (C1346 * C84 + C15686 * C127 + C1347 * C1301 + C15465 * C1348) *
              C1300 +
          (C1346 * C89 + C15686 * C132 + C1347 * C1302 + C15465 * C1349) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C13975 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) *
               C15670 +
           (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C13948 +
           (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) *
               C15375) *
              C4674 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C13975 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C15670 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C13948 +
           (C1346 * C851 + C15686 * C913 + C1347 * C1999 + C15465 * C2061) *
               C15375) *
              C4675 +
          ((C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
               C13975 +
           (C1346 * C853 + C15686 * C915 + C1347 * C3122 + C15465 * C3176) *
               C15670 +
           (C1346 * C848 + C15686 * C910 + C1347 * C5654 + C15465 * C5711) *
               C13948 +
           (C1346 * C854 + C15686 * C916 + C1347 * C5655 + C15465 * C5712) *
               C15375) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C13975 +
                     (C156 * C86 + C15418 * C162) * C15670 +
                     (C156 * C82 + C15418 * C158) * C13948 +
                     (C156 * C87 + C15418 * C163) * C15375) *
                        C3516 +
                    ((C156 * C391 + C15418 * C509) * C13975 +
                     (C156 * C397 + C15418 * C515) * C15670 +
                     (C156 * C392 + C15418 * C510) * C13948 +
                     (C156 * C398 + C15418 * C516) * C15375) *
                        C3517 +
                    ((C156 * C394 + C15418 * C512) * C13975 +
                     (C156 * C400 + C15418 * C518) * C15670 +
                     (C156 * C395 + C15418 * C513) * C13948 +
                     (C156 * C401 + C15418 * C519) * C15375) *
                        C3518 +
                    ((C156 * C2857 + C15418 * C2921) * C13975 +
                     (C156 * C2859 + C15418 * C2923) * C15670 +
                     (C156 * C3524 + C15418 * C3609) * C13948 +
                     (C156 * C3525 + C15418 * C3610) * C15375) *
                        C15694) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C1294 +
                     (C156 * C86 + C15418 * C162) * C1287 +
                     (C156 * C82 + C15418 * C158) * C1296 +
                     (C156 * C87 + C15418 * C163) * C1288 +
                     (C156 * C83 + C15418 * C159) * C1298 +
                     (C156 * C88 + C15418 * C164) * C1289 +
                     (C156 * C84 + C15418 * C160) * C1300 +
                     (C156 * C89 + C15418 * C165) * C15685) *
                        C15686 +
                    ((C156 * C391 + C15418 * C509) * C1294 +
                     (C156 * C397 + C15418 * C515) * C1287 +
                     (C156 * C392 + C15418 * C510) * C1296 +
                     (C156 * C398 + C15418 * C516) * C1288 +
                     (C156 * C393 + C15418 * C511) * C1298 +
                     (C156 * C399 + C15418 * C517) * C1289 +
                     (C156 * C1301 + C15418 * C1384) * C1300 +
                     (C156 * C1302 + C15418 * C1385) * C15685) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                      C4761 * C847 + C15715 * C960) *
                         C13975 +
                     (C4759 * C86 + C4674 * C162 + C4760 * C850 + C4675 * C965 +
                      C4761 * C853 + C15715 * C966) *
                         C15670 +
                     (C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
                      C4761 * C848 + C15715 * C962) *
                         C13948 +
                     (C4759 * C87 + C4674 * C163 + C4760 * C851 + C4675 * C967 +
                      C4761 * C854 + C15715 * C968) *
                         C15375) *
                        C15686 +
                    ((C4759 * C391 + C4674 * C509 + C4760 * C1995 +
                      C4675 * C2113 + C4761 * C3119 + C15715 * C3216) *
                         C13975 +
                     (C4759 * C397 + C4674 * C515 + C4760 * C1998 +
                      C4675 * C2116 + C4761 * C3122 + C15715 * C3219) *
                         C15670 +
                     (C4759 * C392 + C4674 * C510 + C4760 * C1996 +
                      C4675 * C2114 + C4761 * C5654 + C15715 * C5763) *
                         C13948 +
                     (C4759 * C398 + C4674 * C516 + C4760 * C1999 +
                      C4675 * C2117 + C4761 * C5655 + C15715 * C5764) *
                         C15375) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C3569 +
          (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
              C3516 +
          (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
              C3570 +
          (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
              C3517 +
          (C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
              C3571 +
          (C13975 * C460 + C15670 * C562 + C13948 * C462 + C15375 * C563) *
              C3518 +
          (C13975 * C2857 + C15670 * C2859 + C13948 * C3524 + C15375 * C3525) *
              C3572 +
          (C13975 * C2895 + C15670 * C2947 + C13948 * C3573 + C15375 * C3645) *
              C15694) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 + C1298 * C83 +
           C1289 * C88 + C1300 * C84 + C15685 * C89) *
              C1346 +
          (C1294 * C124 + C1287 * C189 + C1296 * C125 + C1288 * C190 +
           C1298 * C126 + C1289 * C191 + C1300 * C127 + C15685 * C192) *
              C15686 +
          (C1294 * C391 + C1287 * C397 + C1296 * C392 + C1288 * C398 +
           C1298 * C393 + C1289 * C399 + C1300 * C1301 + C15685 * C1302) *
              C1347 +
          (C1294 * C459 + C1287 * C559 + C1296 * C461 + C1288 * C560 +
           C1298 * C463 + C1289 * C561 + C1300 * C1348 + C15685 * C1420) *
              C15465) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C1346 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C15686 +
           (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C1347 +
           (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
               C15465) *
              C4674 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C1346 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C15686 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C1347 +
           (C13975 * C2057 + C15670 * C2169 + C13948 * C2058 + C15375 * C2170) *
               C15465) *
              C4675 +
          ((C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
               C1346 +
           (C13975 * C909 + C15670 * C1012 + C13948 * C910 + C15375 * C1013) *
               C15686 +
           (C13975 * C3119 + C15670 * C3122 + C13948 * C5654 + C15375 * C5655) *
               C1347 +
           (C13975 * C3173 + C15670 * C3261 + C13948 * C5711 + C15375 * C5815) *
               C15465) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3680 * C81 + C3686 + C3686 + C3516 * C217 + C3681 * C391 + C3687 +
           C3687 + C3517 * C606 + C3682 * C394 + C3688 + C3688 + C3518 * C607 +
           C3683 * C2857 + C3689 + C3689 + C15694 * C2976) *
              C15670 +
          (C3680 * C82 + C3690 + C3690 + C3516 * C218 + C3681 * C392 + C3691 +
           C3691 + C3517 * C608 + C3682 * C395 + C3692 + C3692 + C3518 * C609 +
           C3683 * C3524 + C3693 + C3693 + C15694 * C3684) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
           C1460 + C15465 * C606) *
              C1287 +
          (C1455 * C82 + C1461 + C1461 + C15686 * C218 + C1456 * C392 + C1462 +
           C1462 + C15465 * C608) *
              C1288 +
          (C1455 * C83 + C1463 + C1463 + C15686 * C219 + C1456 * C393 + C1464 +
           C1464 + C15465 * C610) *
              C1289 +
          (C1455 * C84 + C1465 + C1465 + C15686 * C220 + C1456 * C1301 + C1466 +
           C1466 + C15465 * C1457) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
            C1460 + C15465 * C606) *
               C15670 +
           (C1455 * C82 + C1461 + C1461 + C15686 * C218 + C1456 * C392 + C1462 +
            C1462 + C15465 * C608) *
               C15375) *
              C4674 +
          ((C1455 * C844 + C2226 + C2226 + C15686 * C1053 + C1456 * C1995 +
            C2227 + C2227 + C15465 * C2222) *
               C15670 +
           (C1455 * C845 + C2228 + C2228 + C15686 * C1054 + C1456 * C1996 +
            C2229 + C2229 + C15465 * C2223) *
               C15375) *
              C4675 +
          ((C1455 * C847 + C5868 + C5868 + C15686 * C1056 + C1456 * C3119 +
            C5869 + C5869 + C15465 * C3302) *
               C15670 +
           (C1455 * C848 + C5870 + C5870 + C15686 * C1057 + C1456 * C5654 +
            C5871 + C5871 + C15465 * C5866) *
               C15375) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C3569 +
                     (C156 * C124 + C15418 * C249) * C3516 +
                     (C156 * C391 + C15418 * C509) * C3570 +
                     (C156 * C459 + C15418 * C659) * C3517 +
                     (C156 * C394 + C15418 * C512) * C3571 +
                     (C156 * C460 + C15418 * C660) * C3518 +
                     (C156 * C2857 + C15418 * C2921) * C3572 +
                     (C156 * C2895 + C15418 * C3005) * C15694) *
                        C15670 +
                    ((C156 * C82 + C15418 * C158) * C3569 +
                     (C156 * C125 + C15418 * C250) * C3516 +
                     (C156 * C392 + C15418 * C510) * C3570 +
                     (C156 * C461 + C15418 * C661) * C3517 +
                     (C156 * C395 + C15418 * C513) * C3571 +
                     (C156 * C462 + C15418 * C662) * C3518 +
                     (C156 * C3524 + C15418 * C3609) * C3572 +
                     (C156 * C3573 + C15418 * C3727) * C15694) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C1346 +
                     (C156 * C124 + C15418 * C249) * C15686 +
                     (C156 * C391 + C15418 * C509) * C1347 +
                     (C156 * C459 + C15418 * C659) * C15465) *
                        C1287 +
                    ((C156 * C82 + C15418 * C158) * C1346 +
                     (C156 * C125 + C15418 * C250) * C15686 +
                     (C156 * C392 + C15418 * C510) * C1347 +
                     (C156 * C461 + C15418 * C661) * C15465) *
                        C1288 +
                    ((C156 * C83 + C15418 * C159) * C1346 +
                     (C156 * C126 + C15418 * C251) * C15686 +
                     (C156 * C393 + C15418 * C511) * C1347 +
                     (C156 * C463 + C15418 * C663) * C15465) *
                        C1289 +
                    ((C156 * C84 + C15418 * C160) * C1346 +
                     (C156 * C127 + C15418 * C252) * C15686 +
                     (C156 * C1301 + C15418 * C1384) * C1347 +
                     (C156 * C1348 + C15418 * C1500) * C15465) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                      C4761 * C847 + C15715 * C960) *
                         C1346 +
                     (C4759 * C124 + C4674 * C249 + C4760 * C906 +
                      C4675 * C1103 + C4761 * C909 + C15715 * C1104) *
                         C15686 +
                     (C4759 * C391 + C4674 * C509 + C4760 * C1995 +
                      C4675 * C2113 + C4761 * C3119 + C15715 * C3216) *
                         C1347 +
                     (C4759 * C459 + C4674 * C659 + C4760 * C2057 +
                      C4675 * C2281 + C4761 * C3173 + C15715 * C3348) *
                         C15465) *
                        C15670 +
                    ((C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
                      C4761 * C848 + C15715 * C962) *
                         C1346 +
                     (C4759 * C125 + C4674 * C250 + C4760 * C907 +
                      C4675 * C1105 + C4761 * C910 + C15715 * C1106) *
                         C15686 +
                     (C4759 * C392 + C4674 * C510 + C4760 * C1996 +
                      C4675 * C2114 + C4761 * C5654 + C15715 * C5763) *
                         C1347 +
                     (C4759 * C461 + C4674 * C661 + C4760 * C2058 +
                      C4675 * C2282 + C4761 * C5711 + C15715 * C5921) *
                         C15465) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C156 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C15418) *
              C3516 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C156 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C15418) *
              C3517 +
          ((C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C156 +
           (C13975 * C512 + C15670 * C706 + C13948 * C513 + C15375 * C707) *
               C15418) *
              C3518 +
          ((C13975 * C2857 + C15670 * C2859 + C13948 * C3524 + C15375 * C3525) *
               C156 +
           (C13975 * C2921 + C15670 * C3029 + C13948 * C3609 + C15375 * C3762) *
               C15418) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 +
            C1298 * C83 + C1289 * C88 + C1300 * C84 + C15685 * C89) *
               C156 +
           (C1294 * C157 + C1287 * C276 + C1296 * C158 + C1288 * C277 +
            C1298 * C159 + C1289 * C278 + C1300 * C160 + C15685 * C279) *
               C15418) *
              C15686 +
          ((C1294 * C391 + C1287 * C397 + C1296 * C392 + C1288 * C398 +
            C1298 * C393 + C1289 * C399 + C1300 * C1301 + C15685 * C1302) *
               C156 +
           (C1294 * C509 + C1287 * C703 + C1296 * C510 + C1288 * C704 +
            C1298 * C511 + C1289 * C705 + C1300 * C1384 + C15685 * C1535) *
               C15418) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C4759 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C4674 +
           (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C4760 +
           (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
               C4675 +
           (C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
               C4761 +
           (C13975 * C960 + C15670 * C1150 + C13948 * C962 + C15375 * C1151) *
               C15715) *
              C15686 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C4759 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C4674 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C4760 +
           (C13975 * C2113 + C15670 * C2334 + C13948 * C2114 + C15375 * C2335) *
               C4675 +
           (C13975 * C3119 + C15670 * C3122 + C13948 * C5654 + C15375 * C5655) *
               C4761 +
           (C13975 * C3216 + C15670 * C3389 + C13948 * C5763 + C15375 * C5972) *
               C15715) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
            C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
               C156 +
           (C3569 * C157 + C3516 * C303 + C3570 * C509 + C3517 * C747 +
            C3571 * C512 + C3518 * C748 + C3572 * C2921 + C15694 * C3053) *
               C15418) *
              C15670 +
          ((C3569 * C82 + C3516 * C125 + C3570 * C392 + C3517 * C461 +
            C3571 * C395 + C3518 * C462 + C3572 * C3524 + C15694 * C3573) *
               C156 +
           (C3569 * C158 + C3516 * C304 + C3570 * C510 + C3517 * C749 +
            C3571 * C513 + C3518 * C750 + C3572 * C3609 + C15694 * C3797) *
               C15418) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C156 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C15418) *
              C1287 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C156 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C15418) *
              C1288 +
          ((C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C156 +
           (C1346 * C159 + C15686 * C305 + C1347 * C511 + C15465 * C751) *
               C15418) *
              C1289 +
          ((C1346 * C84 + C15686 * C127 + C1347 * C1301 + C15465 * C1348) *
               C156 +
           (C1346 * C160 + C15686 * C306 + C1347 * C1384 + C15465 * C1570) *
               C15418) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C4759 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C4674 +
           (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C4760 +
           (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
               C4675 +
           (C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
               C4761 +
           (C1346 * C960 + C15686 * C1192 + C1347 * C3216 + C15465 * C3431) *
               C15715) *
              C15670 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C4759 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C4674 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C4760 +
           (C1346 * C961 + C15686 * C1193 + C1347 * C2114 + C15465 * C2388) *
               C4675 +
           (C1346 * C848 + C15686 * C910 + C1347 * C5654 + C15465 * C5711) *
               C4761 +
           (C1346 * C962 + C15686 * C1194 + C1347 * C5763 + C15465 * C6023) *
               C15715) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C3516 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C3517 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C3518 +
                     (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C15694) *
                        C15670 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C3516 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C3517 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C3518 +
                     (C330 * C3524 + C3834 + C3834 + C15418 * C3832) * C15694) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C15686 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C15465) *
                        C1287 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C15686 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C15465) *
                        C1288 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C15686 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C15465) *
                        C1289 +
                    ((C330 * C84 + C340 + C340 + C15418 * C334) * C15686 +
                     (C330 * C1301 + C1607 + C1607 + C15418 * C1605) * C15465) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4990 * C81 + C4994 + C4994 + C4674 * C331 +
                      C4991 * C844 + C4995 + C4995 + C4675 * C1238 +
                      C4992 * C847 + C4996 + C4996 + C15715 * C1239) *
                         C15686 +
                     (C4990 * C391 + C5351 + C5351 + C4674 * C791 +
                      C4991 * C1995 + C5352 + C5352 + C4675 * C2440 +
                      C4992 * C3119 + C5353 + C5353 + C15715 * C3471) *
                         C15465) *
                        C15670 +
                    ((C4990 * C82 + C4997 + C4997 + C4674 * C332 +
                      C4991 * C845 + C4998 + C4998 + C4675 * C1240 +
                      C4992 * C848 + C4999 + C4999 + C15715 * C1241) *
                         C15686 +
                     (C4990 * C392 + C6076 + C6076 + C4674 * C793 +
                      C4991 * C1996 + C6077 + C6077 + C4675 * C2441 +
                      C4992 * C5654 + C6078 + C6078 + C15715 * C6074) *
                         C15465) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15687 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15505) *
              C3516 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15687 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15505) *
              C3517 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15687 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15505) *
              C3518 +
          ((C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15687 +
           (C2855 * C4344 + C4348 + C4348 + C15365 * C4346) * C15505) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
            C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
               C15687 +
           (C385 * C844 + C863 + C863 + C379 * C856 + C387 * C845 + C864 +
            C864 + C380 * C857 + C389 * C846 + C865 + C865 + C15708 * C858) *
               C15505) *
              C15686 +
          ((C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 +
            C414 + C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
               C15687 +
           (C385 * C1995 + C2005 + C2005 + C379 * C2001 + C387 * C1996 + C2006 +
            C2006 + C380 * C2002 + C389 * C1997 + C2007 + C2007 +
            C15708 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C6112 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C6113 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C6114 +
           (C2855 * C5383 + C5390 + C5390 + C15365 * C5387) * C15701) *
              C15686 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C6112 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C6113 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C6114 +
           (C2855 * C6454 + C6458 + C6458 + C15365 * C6456) * C15701) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
            C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
               C2856 +
           (C3569 * C86 + C3516 * C129 + C3570 * C397 + C3517 * C465 +
            C3571 * C400 + C3518 * C466 + C3572 * C2859 + C15694 * C2897) *
               C15365) *
              C15687 +
          ((C3569 * C844 + C3516 * C906 + C3570 * C1995 + C3517 * C2057 +
            C3571 * C3120 + C3518 * C3172 + C3572 * C4344 + C15694 * C4382) *
               C2856 +
           (C3569 * C850 + C3516 * C912 + C3570 * C1998 + C3517 * C2060 +
            C3571 * C3123 + C3518 * C3175 + C3572 * C4345 + C15694 * C4383) *
               C15365) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C386 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) * C379 +
           (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C388 +
           (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) * C380 +
           (C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C390 +
           (C1346 * C88 + C15686 * C131 + C1347 * C399 + C15465 * C469) *
               C15708) *
              C15687 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C386 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C379 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C388 +
           (C1346 * C851 + C15686 * C913 + C1347 * C1999 + C15465 * C2061) *
               C380 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C390 +
           (C1346 * C852 + C15686 * C914 + C1347 * C2000 + C15465 * C2062) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C2856 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) *
               C15365) *
              C6112 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C2856 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C15365) *
              C6113 +
          ((C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
               C2856 +
           (C1346 * C853 + C15686 * C915 + C1347 * C3122 + C15465 * C3176) *
               C15365) *
              C6114 +
          ((C1346 * C5383 + C15686 * C5413 + C1347 * C6454 + C15465 * C6492) *
               C2856 +
           (C1346 * C5385 + C15686 * C5415 + C1347 * C6455 + C15465 * C6493) *
               C15365) *
              C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C2856 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C15365) *
              C3516 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C2856 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C15365) *
              C3517 +
          ((C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C2856 +
           (C1720 * C400 + C15687 * C518 + C1721 * C3123 + C15505 * C3220) *
               C15365) *
              C3518 +
          ((C1720 * C2857 + C15687 * C2921 + C1721 * C4344 + C15505 * C4418) *
               C2856 +
           (C1720 * C2859 + C15687 * C2923 + C1721 * C4345 + C15505 * C4419) *
               C15365) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C386 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) * C379 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C388 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) * C380 +
           (C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C390 +
           (C1720 * C88 + C15687 * C164 + C1721 * C852 + C15505 * C969) *
               C15708) *
              C15686 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C386 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C379 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C388 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C380 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C390 +
           (C1720 * C399 + C15687 * C517 + C1721 * C2000 + C15505 * C2118) *
               C15708) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C81 + C6112 * C157 + C6192 * C844 + C6113 * C959 +
            C6193 * C847 + C6114 * C960 + C6194 * C5383 + C15701 * C5444) *
               C2856 +
           (C6191 * C86 + C6112 * C162 + C6192 * C850 + C6113 * C965 +
            C6193 * C853 + C6114 * C966 + C6194 * C5385 + C15701 * C5446) *
               C15365) *
              C15686 +
          ((C6191 * C391 + C6112 * C509 + C6192 * C1995 + C6113 * C2113 +
            C6193 * C3119 + C6114 * C3216 + C6194 * C6454 + C15701 * C6528) *
               C2856 +
           (C6191 * C397 + C6112 * C515 + C6192 * C1998 + C6113 * C2116 +
            C6193 * C3122 + C6114 * C3219 + C6194 * C6455 + C15701 * C6529) *
               C15365) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C3569 +
                     (C2856 * C124 + C15365 * C189) * C3516 +
                     (C2856 * C391 + C15365 * C397) * C3570 +
                     (C2856 * C459 + C15365 * C559) * C3517 +
                     (C2856 * C394 + C15365 * C400) * C3571 +
                     (C2856 * C460 + C15365 * C562) * C3518 +
                     (C2856 * C2857 + C15365 * C2859) * C3572 +
                     (C2856 * C2895 + C15365 * C2947) * C15694) *
                        C15687 +
                    ((C2856 * C844 + C15365 * C850) * C3569 +
                     (C2856 * C906 + C15365 * C1009) * C3516 +
                     (C2856 * C1995 + C15365 * C1998) * C3570 +
                     (C2856 * C2057 + C15365 * C2169) * C3517 +
                     (C2856 * C3120 + C15365 * C3123) * C3571 +
                     (C2856 * C3172 + C15365 * C3260) * C3518 +
                     (C2856 * C4344 + C15365 * C4345) * C3572 +
                     (C2856 * C4382 + C15365 * C4454) * C15694) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 +
                      C390 * C83 + C15708 * C88) *
                         C1346 +
                     (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 +
                      C390 * C126 + C15708 * C191) *
                         C15686 +
                     (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
                      C390 * C393 + C15708 * C399) *
                         C1347 +
                     (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 +
                      C390 * C463 + C15708 * C561) *
                         C15465) *
                        C15687 +
                    ((C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
                      C390 * C846 + C15708 * C852) *
                         C1346 +
                     (C386 * C906 + C379 * C1009 + C388 * C907 + C380 * C1010 +
                      C390 * C908 + C15708 * C1011) *
                         C15686 +
                     (C386 * C1995 + C379 * C1998 + C388 * C1996 +
                      C380 * C1999 + C390 * C1997 + C15708 * C2000) *
                         C1347 +
                     (C386 * C2057 + C379 * C2169 + C388 * C2058 +
                      C380 * C2170 + C390 * C2059 + C15708 * C2171) *
                         C15465) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C1346 +
                     (C2856 * C124 + C15365 * C189) * C15686 +
                     (C2856 * C391 + C15365 * C397) * C1347 +
                     (C2856 * C459 + C15365 * C559) * C15465) *
                        C6112 +
                    ((C2856 * C844 + C15365 * C850) * C1346 +
                     (C2856 * C906 + C15365 * C1009) * C15686 +
                     (C2856 * C1995 + C15365 * C1998) * C1347 +
                     (C2856 * C2057 + C15365 * C2169) * C15465) *
                        C6113 +
                    ((C2856 * C847 + C15365 * C853) * C1346 +
                     (C2856 * C909 + C15365 * C1012) * C15686 +
                     (C2856 * C3119 + C15365 * C3122) * C1347 +
                     (C2856 * C3173 + C15365 * C3261) * C15465) *
                        C6114 +
                    ((C2856 * C5383 + C15365 * C5385) * C1346 +
                     (C2856 * C5413 + C15365 * C5470) * C15686 +
                     (C2856 * C6454 + C15365 * C6455) * C1347 +
                     (C2856 * C6492 + C15365 * C6564) * C15465) *
                        C15701) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3680 * C81 + C3686 + C3686 + C3516 * C217 + C3681 * C391 + C3687 +
           C3687 + C3517 * C606 + C3682 * C394 + C3688 + C3688 + C3518 * C607 +
           C3683 * C2857 + C3689 + C3689 + C15694 * C2976) *
              C15365 * C15687 +
          (C3680 * C844 + C4491 + C4491 + C3516 * C1053 + C3681 * C1995 +
           C4492 + C4492 + C3517 * C2222 + C3682 * C3120 + C4493 + C4493 +
           C3518 * C3301 + C3683 * C4344 + C4494 + C4494 + C15694 * C4489) *
              C15365 * C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
            C1460 + C15465 * C606) *
               C379 +
           (C1455 * C82 + C1461 + C1461 + C15686 * C218 + C1456 * C392 + C1462 +
            C1462 + C15465 * C608) *
               C380 +
           (C1455 * C83 + C1463 + C1463 + C15686 * C219 + C1456 * C393 + C1464 +
            C1464 + C15465 * C610) *
               C15708) *
              C15687 +
          ((C1455 * C844 + C2226 + C2226 + C15686 * C1053 + C1456 * C1995 +
            C2227 + C2227 + C15465 * C2222) *
               C379 +
           (C1455 * C845 + C2228 + C2228 + C15686 * C1054 + C1456 * C1996 +
            C2229 + C2229 + C15465 * C2223) *
               C380 +
           (C1455 * C846 + C2230 + C2230 + C15686 * C1055 + C1456 * C1997 +
            C2231 + C2231 + C15465 * C2224) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
           C1460 + C15465 * C606) *
              C15365 * C6112 +
          (C1455 * C844 + C2226 + C2226 + C15686 * C1053 + C1456 * C1995 +
           C2227 + C2227 + C15465 * C2222) *
              C15365 * C6113 +
          (C1455 * C847 + C5868 + C5868 + C15686 * C1056 + C1456 * C3119 +
           C5869 + C5869 + C15465 * C3302) *
              C15365 * C6114 +
          (C1455 * C5383 + C6601 + C6601 + C15686 * C5494 + C1456 * C6454 +
           C6602 + C6602 + C15465 * C6599) *
              C15365 * C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C3569 +
          (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
              C3516 +
          (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
              C3570 +
          (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
              C3517 +
          (C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
              C3571 +
          (C1720 * C460 + C15687 * C660 + C1721 * C3172 + C15505 * C3349) *
              C3518 +
          (C1720 * C2857 + C15687 * C2921 + C1721 * C4344 + C15505 * C4418) *
              C3572 +
          (C1720 * C2895 + C15687 * C3005 + C1721 * C4382 + C15505 * C4528) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C1346 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C15686 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C1347 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C15465) *
              C379 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C1346 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C15686 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C1347 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C15465) *
              C380 +
          ((C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) *
               C1346 +
           (C1720 * C126 + C15687 * C251 + C1721 * C908 + C15505 * C1107) *
               C15686 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C1347 +
           (C1720 * C463 + C15687 * C663 + C1721 * C2059 + C15505 * C2283) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6191 * C81 + C6112 * C157 + C6192 * C844 + C6113 * C959 +
           C6193 * C847 + C6114 * C960 + C6194 * C5383 + C15701 * C5444) *
              C1346 +
          (C6191 * C124 + C6112 * C249 + C6192 * C906 + C6113 * C1103 +
           C6193 * C909 + C6114 * C1104 + C6194 * C5413 + C15701 * C5520) *
              C15686 +
          (C6191 * C391 + C6112 * C509 + C6192 * C1995 + C6113 * C2113 +
           C6193 * C3119 + C6114 * C3216 + C6194 * C6454 + C15701 * C6528) *
              C1347 +
          (C6191 * C459 + C6112 * C659 + C6192 * C2057 + C6113 * C2281 +
           C6193 * C3173 + C6114 * C3348 + C6194 * C6492 + C15701 * C6636) *
              C15465) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C1720 +
                     (C2856 * C157 + C15365 * C276) * C15687 +
                     (C2856 * C844 + C15365 * C850) * C1721 +
                     (C2856 * C959 + C15365 * C1147) * C15505) *
                        C3516 +
                    ((C2856 * C391 + C15365 * C397) * C1720 +
                     (C2856 * C509 + C15365 * C703) * C15687 +
                     (C2856 * C1995 + C15365 * C1998) * C1721 +
                     (C2856 * C2113 + C15365 * C2334) * C15505) *
                        C3517 +
                    ((C2856 * C394 + C15365 * C400) * C1720 +
                     (C2856 * C512 + C15365 * C706) * C15687 +
                     (C2856 * C3120 + C15365 * C3123) * C1721 +
                     (C2856 * C3217 + C15365 * C3390) * C15505) *
                        C3518 +
                    ((C2856 * C2857 + C15365 * C2859) * C1720 +
                     (C2856 * C2921 + C15365 * C3029) * C15687 +
                     (C2856 * C4344 + C15365 * C4345) * C1721 +
                     (C2856 * C4418 + C15365 * C4563) * C15505) *
                        C15694) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 +
                      C390 * C83 + C15708 * C88) *
                         C1720 +
                     (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
                      C390 * C159 + C15708 * C278) *
                         C15687 +
                     (C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
                      C390 * C846 + C15708 * C852) *
                         C1721 +
                     (C386 * C959 + C379 * C1147 + C388 * C961 + C380 * C1148 +
                      C390 * C963 + C15708 * C1149) *
                         C15505) *
                        C15686 +
                    ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
                      C390 * C393 + C15708 * C399) *
                         C1720 +
                     (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
                      C390 * C511 + C15708 * C705) *
                         C15687 +
                     (C386 * C1995 + C379 * C1998 + C388 * C1996 +
                      C380 * C1999 + C390 * C1997 + C15708 * C2000) *
                         C1721 +
                     (C386 * C2113 + C379 * C2334 + C388 * C2114 +
                      C380 * C2335 + C390 * C2115 + C15708 * C2336) *
                         C15505) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C6191 +
                     (C2856 * C157 + C15365 * C276) * C6112 +
                     (C2856 * C844 + C15365 * C850) * C6192 +
                     (C2856 * C959 + C15365 * C1147) * C6113 +
                     (C2856 * C847 + C15365 * C853) * C6193 +
                     (C2856 * C960 + C15365 * C1150) * C6114 +
                     (C2856 * C5383 + C15365 * C5385) * C6194 +
                     (C2856 * C5444 + C15365 * C5544) * C15701) *
                        C15686 +
                    ((C2856 * C391 + C15365 * C397) * C6191 +
                     (C2856 * C509 + C15365 * C703) * C6112 +
                     (C2856 * C1995 + C15365 * C1998) * C6192 +
                     (C2856 * C2113 + C15365 * C2334) * C6113 +
                     (C2856 * C3119 + C15365 * C3122) * C6193 +
                     (C2856 * C3216 + C15365 * C3389) * C6114 +
                     (C2856 * C6454 + C15365 * C6455) * C6194 +
                     (C2856 * C6528 + C15365 * C6671) * C15701) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
           C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
              C1720 +
          (C3569 * C157 + C3516 * C303 + C3570 * C509 + C3517 * C747 +
           C3571 * C512 + C3518 * C748 + C3572 * C2921 + C15694 * C3053) *
              C15687 +
          (C3569 * C844 + C3516 * C906 + C3570 * C1995 + C3517 * C2057 +
           C3571 * C3120 + C3518 * C3172 + C3572 * C4344 + C15694 * C4382) *
              C1721 +
          (C3569 * C959 + C3516 * C1191 + C3570 * C2113 + C3517 * C2387 +
           C3571 * C3217 + C3518 * C3430 + C3572 * C4418 + C15694 * C4598) *
              C15505) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C1720 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C15687 +
           (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C1721 +
           (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
               C15505) *
              C379 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C1720 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C15687 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C1721 +
           (C1346 * C961 + C15686 * C1193 + C1347 * C2114 + C15465 * C2388) *
               C15505) *
              C380 +
          ((C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) *
               C1720 +
           (C1346 * C159 + C15686 * C305 + C1347 * C511 + C15465 * C751) *
               C15687 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C1721 +
           (C1346 * C963 + C15686 * C1195 + C1347 * C2115 + C15465 * C2389) *
               C15505) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C6191 +
          (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
              C6112 +
          (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
              C6192 +
          (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
              C6113 +
          (C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
              C6193 +
          (C1346 * C960 + C15686 * C1192 + C1347 * C3216 + C15465 * C3431) *
              C6114 +
          (C1346 * C5383 + C15686 * C5413 + C1347 * C6454 + C15465 * C6492) *
              C6194 +
          (C1346 * C5444 + C15686 * C5568 + C1347 * C6528 + C15465 * C6706) *
              C15701) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1934 * C81 + C1938 + C1938 + C15687 * C331 + C1935 * C844 + C1939 +
           C1939 + C15505 * C1238) *
              C3516 +
          (C1934 * C391 + C2444 + C2444 + C15687 * C791 + C1935 * C1995 +
           C2445 + C2445 + C15505 * C2440) *
              C3517 +
          (C1934 * C394 + C4307 + C4307 + C15687 * C792 + C1935 * C3120 +
           C4308 + C4308 + C15505 * C3472) *
              C3518 +
          (C1934 * C2857 + C4635 + C4635 + C15687 * C3077 + C1935 * C4344 +
           C4636 + C4636 + C15505 * C4633) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1934 * C81 + C1938 + C1938 + C15687 * C331 + C1935 * C844 + C1939 +
            C1939 + C15505 * C1238) *
               C15686 +
           (C1934 * C391 + C2444 + C2444 + C15687 * C791 + C1935 * C1995 +
            C2445 + C2445 + C15505 * C2440) *
               C15465) *
              C379 +
          ((C1934 * C82 + C1940 + C1940 + C15687 * C332 + C1935 * C845 + C1941 +
            C1941 + C15505 * C1240) *
               C15686 +
           (C1934 * C392 + C2446 + C2446 + C15687 * C793 + C1935 * C1996 +
            C2447 + C2447 + C15505 * C2441) *
               C15465) *
              C380 +
          ((C1934 * C83 + C1942 + C1942 + C15687 * C333 + C1935 * C846 + C1943 +
            C1943 + C15505 * C1242) *
               C15686 +
           (C1934 * C393 + C2448 + C2448 + C15687 * C795 + C1935 * C1997 +
            C2449 + C2449 + C15505 * C2442) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6407 * C81 + C6413 + C6413 + C6112 * C331 + C6408 * C844 + C6414 +
           C6414 + C6113 * C1238 + C6409 * C847 + C6415 + C6415 +
           C6114 * C1239 + C6410 * C5383 + C6416 + C6416 + C15701 * C5597) *
              C15686 +
          (C6407 * C391 + C6743 + C6743 + C6112 * C791 + C6408 * C1995 + C6744 +
           C6744 + C6113 * C2440 + C6409 * C3119 + C6745 + C6745 +
           C6114 * C3471 + C6410 * C6454 + C6746 + C6746 + C15701 * C6741) *
              C15465) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (C71 * C81 + C97 + C97 + C61 * C91 + C73 * C82 + C98 + C98 +
              C62 * C92 + C75 * C83 + C99 + C99 + C63 * C93 + C77 * C84 + C100 +
              C100 + C64 * C94 + C79 * C85 + C101 + C101 + C65 * C95) *
             C15418 * C15407 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 +
               C411 + C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
                  C15418 * C15744 +
              (C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 +
               C414 + C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
                  C15418 * C15732 +
              (C385 * C394 + C416 + C416 + C379 * C406 + C387 * C395 + C417 +
               C417 + C380 * C407 + C389 * C396 + C418 + C418 + C15708 * C408) *
                  C15418 * C15712) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
           C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
              C15745 +
          (C385 * C844 + C863 + C863 + C379 * C856 + C387 * C845 + C864 + C864 +
           C380 * C857 + C389 * C846 + C865 + C865 + C15708 * C858) *
              C15734 +
          (C385 * C847 + C866 + C866 + C379 * C859 + C387 * C848 + C867 + C867 +
           C380 * C860 + C389 * C849 + C868 + C868 + C15708 * C861) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C15418 * C2490 +
          (C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 + C2504 +
           C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
           C15708 * C405) *
              C15418 * C2491 +
          (C2493 * C394 + C2506 + C2506 + C15741 * C406 + C2495 * C395 + C2507 +
           C2507 + C15728 * C407 + C2497 * C396 + C2508 + C2508 +
           C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15418 * C2850 +
          (C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15418 * C2851 +
          (C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15418 * C2852 +
          (C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15418 * C2853 +
          (C2855 * C2858 + C2868 + C2868 + C15365 * C2862) * C15418 * C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15745 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15734 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C15715) *
              C2490 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15745 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15734 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C15715) *
              C2491 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15745 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15734 +
           (C2855 * C3121 + C3134 + C3134 + C15365 * C3127) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C4674 +
          (C2493 * C844 + C4678 + C4678 + C15741 * C856 + C2495 * C845 + C4679 +
           C4679 + C15728 * C857 + C2497 * C846 + C4680 + C4680 +
           C15708 * C858) *
              C4675 +
          (C2493 * C847 + C4681 + C4681 + C15741 * C859 + C2495 * C848 + C4682 +
           C4682 + C15728 * C860 + C2497 * C849 + C4683 + C4683 +
           C15708 * C861) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C4674 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C4675 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C15715) *
              C15744 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C4674 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C4675 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C15715) *
              C15732 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C4674 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C4675 +
           (C2855 * C3121 + C3134 + C3134 + C15365 * C3127) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C5378 +
          (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C5379 +
          (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C5380 +
          (C2855 * C5383 + C5390 + C5390 + C15365 * C5387) * C5381 +
          (C2855 * C5384 + C5391 + C5391 + C15365 * C5388) * C5382) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] += (0.5 * std::pow(Pi, 2.5) *
                       ((C123 * C81 + C15407 * C124) * C72 +
                        (C123 * C86 + C15407 * C129) * C61 +
                        (C123 * C82 + C15407 * C125) * C74 +
                        (C123 * C87 + C15407 * C130) * C62 +
                        (C123 * C83 + C15407 * C126) * C76 +
                        (C123 * C88 + C15407 * C131) * C63 +
                        (C123 * C84 + C15407 * C127) * C78 +
                        (C123 * C89 + C15407 * C132) * C64 +
                        (C123 * C85 + C15407 * C128) * C80 +
                        (C123 * C90 + C15407 * C133) * C65) *
                       C15418 * C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       ((C456 * C81 + C15744 * C124 + C457 * C391 +
                         C15732 * C459 + C458 * C394 + C15712 * C460) *
                            C386 +
                        (C456 * C86 + C15744 * C129 + C457 * C397 +
                         C15732 * C465 + C458 * C400 + C15712 * C466) *
                            C379 +
                        (C456 * C82 + C15744 * C125 + C457 * C392 +
                         C15732 * C461 + C458 * C395 + C15712 * C462) *
                            C388 +
                        (C456 * C87 + C15744 * C130 + C457 * C398 +
                         C15732 * C467 + C458 * C401 + C15712 * C468) *
                            C380 +
                        (C456 * C83 + C15744 * C126 + C457 * C393 +
                         C15732 * C463 + C458 * C396 + C15712 * C464) *
                            C390 +
                        (C456 * C88 + C15744 * C131 + C457 * C399 +
                         C15732 * C469 + C458 * C402 + C15712 * C470) *
                            C15708) *
                       C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C386 +
                     (C123 * C86 + C15407 * C129) * C379 +
                     (C123 * C82 + C15407 * C125) * C388 +
                     (C123 * C87 + C15407 * C130) * C380 +
                     (C123 * C83 + C15407 * C126) * C390 +
                     (C123 * C88 + C15407 * C131) * C15708) *
                        C15745 +
                    ((C123 * C844 + C15407 * C906) * C386 +
                     (C123 * C850 + C15407 * C912) * C379 +
                     (C123 * C845 + C15407 * C907) * C388 +
                     (C123 * C851 + C15407 * C913) * C380 +
                     (C123 * C846 + C15407 * C908) * C390 +
                     (C123 * C852 + C15407 * C914) * C15708) *
                        C15734 +
                    ((C123 * C847 + C15407 * C909) * C386 +
                     (C123 * C853 + C15407 * C915) * C379 +
                     (C123 * C848 + C15407 * C910) * C388 +
                     (C123 * C854 + C15407 * C916) * C380 +
                     (C123 * C849 + C15407 * C911) * C390 +
                     (C123 * C855 + C15407 * C917) * C15708) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C2494 +
                    (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                     C2548 * C400 + C15712 * C466) *
                        C15741 +
                    (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                     C2548 * C395 + C15712 * C462) *
                        C2496 +
                    (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                     C2548 * C401 + C15712 * C468) *
                        C15728 +
                    (C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                     C2548 * C396 + C15712 * C464) *
                        C2498 +
                    (C2546 * C88 + C2490 * C131 + C2547 * C399 + C2491 * C469 +
                     C2548 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C2856 +
                    (C2890 * C86 + C2850 * C129 + C2891 * C397 + C2851 * C465 +
                     C2892 * C400 + C2852 * C466 + C2893 * C2859 +
                     C2853 * C2897 + C2894 * C2860 + C2854 * C2898) *
                        C15365) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C2856 +
                     (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                      C2548 * C400 + C15712 * C466) *
                         C15365) *
                        C15745 +
                    ((C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C2856 +
                     (C2546 * C850 + C2490 * C912 + C2547 * C1998 +
                      C2491 * C2060 + C2548 * C3123 + C15712 * C3175) *
                         C15365) *
                        C15734 +
                    ((C2546 * C847 + C2490 * C909 + C2547 * C3119 +
                      C2491 * C3173 + C2548 * C3121 + C15712 * C3174) *
                         C2856 +
                     (C2546 * C853 + C2490 * C915 + C2547 * C3122 +
                      C2491 * C3176 + C2548 * C3124 + C15712 * C3177) *
                         C15365) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C2494 +
                     (C123 * C86 + C15407 * C129) * C15741 +
                     (C123 * C82 + C15407 * C125) * C2496 +
                     (C123 * C87 + C15407 * C130) * C15728 +
                     (C123 * C83 + C15407 * C126) * C2498 +
                     (C123 * C88 + C15407 * C131) * C15708) *
                        C4674 +
                    ((C123 * C844 + C15407 * C906) * C2494 +
                     (C123 * C850 + C15407 * C912) * C15741 +
                     (C123 * C845 + C15407 * C907) * C2496 +
                     (C123 * C851 + C15407 * C913) * C15728 +
                     (C123 * C846 + C15407 * C908) * C2498 +
                     (C123 * C852 + C15407 * C914) * C15708) *
                        C4675 +
                    ((C123 * C847 + C15407 * C909) * C2494 +
                     (C123 * C853 + C15407 * C915) * C15741 +
                     (C123 * C848 + C15407 * C910) * C2496 +
                     (C123 * C854 + C15407 * C916) * C15728 +
                     (C123 * C849 + C15407 * C911) * C2498 +
                     (C123 * C855 + C15407 * C917) * C15708) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C2856 +
                     (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                      C458 * C400 + C15712 * C466) *
                         C15365) *
                        C4674 +
                    ((C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C2856 +
                     (C456 * C850 + C15744 * C912 + C457 * C1998 +
                      C15732 * C2060 + C458 * C3123 + C15712 * C3175) *
                         C15365) *
                        C4675 +
                    ((C456 * C847 + C15744 * C909 + C457 * C3119 +
                      C15732 * C3173 + C458 * C3121 + C15712 * C3174) *
                         C2856 +
                     (C456 * C853 + C15744 * C915 + C457 * C3122 +
                      C15732 * C3176 + C458 * C3124 + C15712 * C3177) *
                         C15365) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C2856 +
                     (C123 * C86 + C15407 * C129) * C15365) *
                        C5378 +
                    ((C123 * C844 + C15407 * C906) * C2856 +
                     (C123 * C850 + C15407 * C912) * C15365) *
                        C5379 +
                    ((C123 * C847 + C15407 * C909) * C2856 +
                     (C123 * C853 + C15407 * C915) * C15365) *
                        C5380 +
                    ((C123 * C5383 + C15407 * C5413) * C2856 +
                     (C123 * C5385 + C15407 * C5415) * C15365) *
                        C5381 +
                    ((C123 * C5384 + C15407 * C5414) * C2856 +
                     (C123 * C5386 + C15407 * C5416) * C15365) *
                        C5382) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[12] += (0.5 * std::pow(Pi, 2.5) *
                       ((C156 * C81 + C15418 * C157) * C72 +
                        (C156 * C86 + C15418 * C162) * C61 +
                        (C156 * C82 + C15418 * C158) * C74 +
                        (C156 * C87 + C15418 * C163) * C62 +
                        (C156 * C83 + C15418 * C159) * C76 +
                        (C156 * C88 + C15418 * C164) * C63 +
                        (C156 * C84 + C15418 * C160) * C78 +
                        (C156 * C89 + C15418 * C165) * C64 +
                        (C156 * C85 + C15418 * C161) * C80 +
                        (C156 * C90 + C15418 * C166) * C65) *
                       C15407 * C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       (((C156 * C81 + C15418 * C157) * C386 +
                         (C156 * C86 + C15418 * C162) * C379 +
                         (C156 * C82 + C15418 * C158) * C388 +
                         (C156 * C87 + C15418 * C163) * C380 +
                         (C156 * C83 + C15418 * C159) * C390 +
                         (C156 * C88 + C15418 * C164) * C15708) *
                            C15744 +
                        ((C156 * C391 + C15418 * C509) * C386 +
                         (C156 * C397 + C15418 * C515) * C379 +
                         (C156 * C392 + C15418 * C510) * C388 +
                         (C156 * C398 + C15418 * C516) * C380 +
                         (C156 * C393 + C15418 * C511) * C390 +
                         (C156 * C399 + C15418 * C517) * C15708) *
                            C15732 +
                        ((C156 * C394 + C15418 * C512) * C386 +
                         (C156 * C400 + C15418 * C518) * C379 +
                         (C156 * C395 + C15418 * C513) * C388 +
                         (C156 * C401 + C15418 * C519) * C380 +
                         (C156 * C396 + C15418 * C514) * C390 +
                         (C156 * C402 + C15418 * C520) * C15708) *
                            C15712) *
                       C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                     C958 * C847 + C15715 * C960) *
                        C386 +
                    (C956 * C86 + C15745 * C162 + C957 * C850 + C15734 * C965 +
                     C958 * C853 + C15715 * C966) *
                        C379 +
                    (C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
                     C958 * C848 + C15715 * C962) *
                        C388 +
                    (C956 * C87 + C15745 * C163 + C957 * C851 + C15734 * C967 +
                     C958 * C854 + C15715 * C968) *
                        C380 +
                    (C956 * C83 + C15745 * C159 + C957 * C846 + C15734 * C963 +
                     C958 * C849 + C15715 * C964) *
                        C390 +
                    (C956 * C88 + C15745 * C164 + C957 * C852 + C15734 * C969 +
                     C958 * C855 + C15715 * C970) *
                        C15708) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2494 +
                     (C156 * C86 + C15418 * C162) * C15741 +
                     (C156 * C82 + C15418 * C158) * C2496 +
                     (C156 * C87 + C15418 * C163) * C15728 +
                     (C156 * C83 + C15418 * C159) * C2498 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C2490 +
                    ((C156 * C391 + C15418 * C509) * C2494 +
                     (C156 * C397 + C15418 * C515) * C15741 +
                     (C156 * C392 + C15418 * C510) * C2496 +
                     (C156 * C398 + C15418 * C516) * C15728 +
                     (C156 * C393 + C15418 * C511) * C2498 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C2491 +
                    ((C156 * C394 + C15418 * C512) * C2494 +
                     (C156 * C400 + C15418 * C518) * C15741 +
                     (C156 * C395 + C15418 * C513) * C2496 +
                     (C156 * C401 + C15418 * C519) * C15728 +
                     (C156 * C396 + C15418 * C514) * C2498 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2856 +
                     (C156 * C86 + C15418 * C162) * C15365) *
                        C2850 +
                    ((C156 * C391 + C15418 * C509) * C2856 +
                     (C156 * C397 + C15418 * C515) * C15365) *
                        C2851 +
                    ((C156 * C394 + C15418 * C512) * C2856 +
                     (C156 * C400 + C15418 * C518) * C15365) *
                        C2852 +
                    ((C156 * C2857 + C15418 * C2921) * C2856 +
                     (C156 * C2859 + C15418 * C2923) * C15365) *
                        C2853 +
                    ((C156 * C2858 + C15418 * C2922) * C2856 +
                     (C156 * C2860 + C15418 * C2924) * C15365) *
                        C2854) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                      C958 * C847 + C15715 * C960) *
                         C2856 +
                     (C956 * C86 + C15745 * C162 + C957 * C850 + C15734 * C965 +
                      C958 * C853 + C15715 * C966) *
                         C15365) *
                        C2490 +
                    ((C956 * C391 + C15745 * C509 + C957 * C1995 +
                      C15734 * C2113 + C958 * C3119 + C15715 * C3216) *
                         C2856 +
                     (C956 * C397 + C15745 * C515 + C957 * C1998 +
                      C15734 * C2116 + C958 * C3122 + C15715 * C3219) *
                         C15365) *
                        C2491 +
                    ((C956 * C394 + C15745 * C512 + C957 * C3120 +
                      C15734 * C3217 + C958 * C3121 + C15715 * C3218) *
                         C2856 +
                     (C956 * C400 + C15745 * C518 + C957 * C3123 +
                      C15734 * C3220 + C958 * C3124 + C15715 * C3221) *
                         C15365) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                     C4761 * C847 + C15715 * C960) *
                        C2494 +
                    (C4759 * C86 + C4674 * C162 + C4760 * C850 + C4675 * C965 +
                     C4761 * C853 + C15715 * C966) *
                        C15741 +
                    (C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
                     C4761 * C848 + C15715 * C962) *
                        C2496 +
                    (C4759 * C87 + C4674 * C163 + C4760 * C851 + C4675 * C967 +
                     C4761 * C854 + C15715 * C968) *
                        C15728 +
                    (C4759 * C83 + C4674 * C159 + C4760 * C846 + C4675 * C963 +
                     C4761 * C849 + C15715 * C964) *
                        C2498 +
                    (C4759 * C88 + C4674 * C164 + C4760 * C852 + C4675 * C969 +
                     C4761 * C855 + C15715 * C970) *
                        C15708) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                      C4761 * C847 + C15715 * C960) *
                         C2856 +
                     (C4759 * C86 + C4674 * C162 + C4760 * C850 + C4675 * C965 +
                      C4761 * C853 + C15715 * C966) *
                         C15365) *
                        C15744 +
                    ((C4759 * C391 + C4674 * C509 + C4760 * C1995 +
                      C4675 * C2113 + C4761 * C3119 + C15715 * C3216) *
                         C2856 +
                     (C4759 * C397 + C4674 * C515 + C4760 * C1998 +
                      C4675 * C2116 + C4761 * C3122 + C15715 * C3219) *
                         C15365) *
                        C15732 +
                    ((C4759 * C394 + C4674 * C512 + C4760 * C3120 +
                      C4675 * C3217 + C4761 * C3121 + C15715 * C3218) *
                         C2856 +
                     (C4759 * C400 + C4674 * C518 + C4760 * C3123 +
                      C4675 * C3220 + C4761 * C3124 + C15715 * C3221) *
                         C15365) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C5439 * C81 + C5378 * C157 + C5440 * C844 + C5379 * C959 +
                     C5441 * C847 + C5380 * C960 + C5442 * C5383 +
                     C5381 * C5444 + C5443 * C5384 + C5382 * C5445) *
                        C2856 +
                    (C5439 * C86 + C5378 * C162 + C5440 * C850 + C5379 * C965 +
                     C5441 * C853 + C5380 * C966 + C5442 * C5385 +
                     C5381 * C5446 + C5443 * C5386 + C5382 * C5447) *
                        C15365) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
               C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
                  C123 +
              (C72 * C124 + C61 * C189 + C74 * C125 + C62 * C190 + C76 * C126 +
               C63 * C191 + C78 * C127 + C64 * C192 + C80 * C128 + C65 * C193) *
                  C15407) *
             C15418 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
               C15708 * C88) *
                  C456 +
              (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 +
               C390 * C126 + C15708 * C191) *
                  C15744 +
              (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
               C390 * C393 + C15708 * C399) *
                  C457 +
              (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 +
               C390 * C463 + C15708 * C561) *
                  C15732 +
              (C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 +
               C390 * C396 + C15708 * C402) *
                  C458 +
              (C386 * C460 + C379 * C562 + C388 * C462 + C380 * C563 +
               C390 * C464 + C15708 * C564) *
                  C15712) *
             C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
            C15708 * C88) *
               C123 +
           (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 +
            C390 * C126 + C15708 * C191) *
               C15407) *
              C15745 +
          ((C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
            C390 * C846 + C15708 * C852) *
               C123 +
           (C386 * C906 + C379 * C1009 + C388 * C907 + C380 * C1010 +
            C390 * C908 + C15708 * C1011) *
               C15407) *
              C15734 +
          ((C386 * C847 + C379 * C853 + C388 * C848 + C380 * C854 +
            C390 * C849 + C15708 * C855) *
               C123 +
           (C386 * C909 + C379 * C1012 + C388 * C910 + C380 * C1013 +
            C390 * C911 + C15708 * C1014) *
               C15407) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C2546 +
          (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
           C2498 * C126 + C15708 * C191) *
              C2490 +
          (C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
           C2498 * C393 + C15708 * C399) *
              C2547 +
          (C2494 * C459 + C15741 * C559 + C2496 * C461 + C15728 * C560 +
           C2498 * C463 + C15708 * C561) *
              C2491 +
          (C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
           C2498 * C396 + C15708 * C402) *
              C2548 +
          (C2494 * C460 + C15741 * C562 + C2496 * C462 + C15728 * C563 +
           C2498 * C464 + C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2856 * C81 + C15365 * C86) * C2890 +
          (C2856 * C124 + C15365 * C189) * C2850 +
          (C2856 * C391 + C15365 * C397) * C2891 +
          (C2856 * C459 + C15365 * C559) * C2851 +
          (C2856 * C394 + C15365 * C400) * C2892 +
          (C2856 * C460 + C15365 * C562) * C2852 +
          (C2856 * C2857 + C15365 * C2859) * C2893 +
          (C2856 * C2895 + C15365 * C2947) * C2853 +
          (C2856 * C2858 + C15365 * C2860) * C2894 +
          (C2856 * C2896 + C15365 * C2948) * C2854) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C2546 +
           (C2856 * C124 + C15365 * C189) * C2490 +
           (C2856 * C391 + C15365 * C397) * C2547 +
           (C2856 * C459 + C15365 * C559) * C2491 +
           (C2856 * C394 + C15365 * C400) * C2548 +
           (C2856 * C460 + C15365 * C562) * C15712) *
              C15745 +
          ((C2856 * C844 + C15365 * C850) * C2546 +
           (C2856 * C906 + C15365 * C1009) * C2490 +
           (C2856 * C1995 + C15365 * C1998) * C2547 +
           (C2856 * C2057 + C15365 * C2169) * C2491 +
           (C2856 * C3120 + C15365 * C3123) * C2548 +
           (C2856 * C3172 + C15365 * C3260) * C15712) *
              C15734 +
          ((C2856 * C847 + C15365 * C853) * C2546 +
           (C2856 * C909 + C15365 * C1012) * C2490 +
           (C2856 * C3119 + C15365 * C3122) * C2547 +
           (C2856 * C3173 + C15365 * C3261) * C2491 +
           (C2856 * C3121 + C15365 * C3124) * C2548 +
           (C2856 * C3174 + C15365 * C3262) * C15712) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C123 +
           (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
            C2498 * C126 + C15708 * C191) *
               C15407) *
              C4674 +
          ((C2494 * C844 + C15741 * C850 + C2496 * C845 + C15728 * C851 +
            C2498 * C846 + C15708 * C852) *
               C123 +
           (C2494 * C906 + C15741 * C1009 + C2496 * C907 + C15728 * C1010 +
            C2498 * C908 + C15708 * C1011) *
               C15407) *
              C4675 +
          ((C2494 * C847 + C15741 * C853 + C2496 * C848 + C15728 * C854 +
            C2498 * C849 + C15708 * C855) *
               C123 +
           (C2494 * C909 + C15741 * C1012 + C2496 * C910 + C15728 * C1013 +
            C2498 * C911 + C15708 * C1014) *
               C15407) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C456 +
           (C2856 * C124 + C15365 * C189) * C15744 +
           (C2856 * C391 + C15365 * C397) * C457 +
           (C2856 * C459 + C15365 * C559) * C15732 +
           (C2856 * C394 + C15365 * C400) * C458 +
           (C2856 * C460 + C15365 * C562) * C15712) *
              C4674 +
          ((C2856 * C844 + C15365 * C850) * C456 +
           (C2856 * C906 + C15365 * C1009) * C15744 +
           (C2856 * C1995 + C15365 * C1998) * C457 +
           (C2856 * C2057 + C15365 * C2169) * C15732 +
           (C2856 * C3120 + C15365 * C3123) * C458 +
           (C2856 * C3172 + C15365 * C3260) * C15712) *
              C4675 +
          ((C2856 * C847 + C15365 * C853) * C456 +
           (C2856 * C909 + C15365 * C1012) * C15744 +
           (C2856 * C3119 + C15365 * C3122) * C457 +
           (C2856 * C3173 + C15365 * C3261) * C15732 +
           (C2856 * C3121 + C15365 * C3124) * C458 +
           (C2856 * C3174 + C15365 * C3262) * C15712) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C123 +
           (C2856 * C124 + C15365 * C189) * C15407) *
              C5378 +
          ((C2856 * C844 + C15365 * C850) * C123 +
           (C2856 * C906 + C15365 * C1009) * C15407) *
              C5379 +
          ((C2856 * C847 + C15365 * C853) * C123 +
           (C2856 * C909 + C15365 * C1012) * C15407) *
              C5380 +
          ((C2856 * C5383 + C15365 * C5385) * C123 +
           (C2856 * C5413 + C15365 * C5470) * C15407) *
              C5381 +
          ((C2856 * C5384 + C15365 * C5386) * C123 +
           (C2856 * C5414 + C15365 * C5471) * C15407) *
              C5382) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C216 * C81 + C223 + C223 + C15407 * C217) * C61 +
              (C216 * C82 + C224 + C224 + C15407 * C218) * C62 +
              (C216 * C83 + C225 + C225 + C15407 * C219) * C63 +
              (C216 * C84 + C226 + C226 + C15407 * C220) * C64 +
              (C216 * C85 + C227 + C227 + C15407 * C221) * C65) *
             C15418 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
               C614 + C15732 * C606 + C605 * C394 + C615 + C615 +
               C15712 * C607) *
                  C379 +
              (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
               C617 + C15732 * C608 + C605 * C395 + C618 + C618 +
               C15712 * C609) *
                  C380 +
              (C603 * C83 + C619 + C619 + C15744 * C219 + C604 * C393 + C620 +
               C620 + C15732 * C610 + C605 * C396 + C621 + C621 +
               C15712 * C611) *
                  C15708) *
             C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C379 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C380 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15708) *
              C15745 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C379 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C380 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15708) *
              C15734 +
          ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C379 +
           (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C380 +
           (C216 * C849 + C1065 + C1065 + C15407 * C1058) * C15708) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15741 +
          (C2663 * C82 + C2670 + C2670 + C2490 * C218 + C2664 * C392 + C2671 +
           C2671 + C2491 * C608 + C2665 * C395 + C2672 + C2672 +
           C15712 * C609) *
              C15728 +
          (C2663 * C83 + C2673 + C2673 + C2490 * C219 + C2664 * C393 + C2674 +
           C2674 + C2491 * C610 + C2665 * C396 + C2675 + C2675 +
           C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (C2971 * C81 + C2979 + C2979 + C2850 * C217 + C2972 * C391 + C2980 +
          C2980 + C2851 * C606 + C2973 * C394 + C2981 + C2981 + C2852 * C607 +
          C2974 * C2857 + C2982 + C2982 + C2853 * C2976 + C2975 * C2858 +
          C2983 + C2983 + C2854 * C2977) *
         C15365 * C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15365 * C15745 +
          (C2663 * C844 + C3305 + C3305 + C2490 * C1053 + C2664 * C1995 +
           C3306 + C3306 + C2491 * C2222 + C2665 * C3120 + C3307 + C3307 +
           C15712 * C3301) *
              C15365 * C15734 +
          (C2663 * C847 + C3308 + C3308 + C2490 * C1056 + C2664 * C3119 +
           C3309 + C3309 + C2491 * C3302 + C2665 * C3121 + C3310 + C3310 +
           C15712 * C3303) *
              C15365 * C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C15741 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C15728 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15708) *
              C4674 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15741 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15728 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15708) *
              C4675 +
          ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C15741 +
           (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C15728 +
           (C216 * C849 + C1065 + C1065 + C15407 * C1058) * C15708) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
           C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
              C15365 * C4674 +
          (C603 * C844 + C5193 + C5193 + C15744 * C1053 + C604 * C1995 + C5194 +
           C5194 + C15732 * C2222 + C605 * C3120 + C5195 + C5195 +
           C15712 * C3301) *
              C15365 * C4675 +
          (C603 * C847 + C5196 + C5196 + C15744 * C1056 + C604 * C3119 + C5197 +
           C5197 + C15732 * C3302 + C605 * C3121 + C5198 + C5198 +
           C15712 * C3303) *
              C15365 * C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C216 * C81 + C223 + C223 + C15407 * C217) * C15365 * C5378 +
          (C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15365 * C5379 +
          (C216 * C847 + C1063 + C1063 + C15407 * C1056) * C15365 * C5380 +
          (C216 * C5383 + C5497 + C5497 + C15407 * C5494) * C15365 * C5381 +
          (C216 * C5384 + C5498 + C5498 + C15407 * C5495) * C15365 * C5382) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C156 * C81 + C15418 * C157) * C123 +
               (C156 * C124 + C15418 * C249) * C15407) *
                  C61 +
              ((C156 * C82 + C15418 * C158) * C123 +
               (C156 * C125 + C15418 * C250) * C15407) *
                  C62 +
              ((C156 * C83 + C15418 * C159) * C123 +
               (C156 * C126 + C15418 * C251) * C15407) *
                  C63 +
              ((C156 * C84 + C15418 * C160) * C123 +
               (C156 * C127 + C15418 * C252) * C15407) *
                  C64 +
              ((C156 * C85 + C15418 * C161) * C123 +
               (C156 * C128 + C15418 * C253) * C15407) *
                  C65) *
             C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C156 * C81 + C15418 * C157) * C456 +
               (C156 * C124 + C15418 * C249) * C15744 +
               (C156 * C391 + C15418 * C509) * C457 +
               (C156 * C459 + C15418 * C659) * C15732 +
               (C156 * C394 + C15418 * C512) * C458 +
               (C156 * C460 + C15418 * C660) * C15712) *
                  C379 +
              ((C156 * C82 + C15418 * C158) * C456 +
               (C156 * C125 + C15418 * C250) * C15744 +
               (C156 * C392 + C15418 * C510) * C457 +
               (C156 * C461 + C15418 * C661) * C15732 +
               (C156 * C395 + C15418 * C513) * C458 +
               (C156 * C462 + C15418 * C662) * C15712) *
                  C380 +
              ((C156 * C83 + C15418 * C159) * C456 +
               (C156 * C126 + C15418 * C251) * C15744 +
               (C156 * C393 + C15418 * C511) * C457 +
               (C156 * C463 + C15418 * C663) * C15732 +
               (C156 * C396 + C15418 * C514) * C458 +
               (C156 * C464 + C15418 * C664) * C15712) *
                  C15708) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
            C958 * C847 + C15715 * C960) *
               C123 +
           (C956 * C124 + C15745 * C249 + C957 * C906 + C15734 * C1103 +
            C958 * C909 + C15715 * C1104) *
               C15407) *
              C379 +
          ((C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
            C958 * C848 + C15715 * C962) *
               C123 +
           (C956 * C125 + C15745 * C250 + C957 * C907 + C15734 * C1105 +
            C958 * C910 + C15715 * C1106) *
               C15407) *
              C380 +
          ((C956 * C83 + C15745 * C159 + C957 * C846 + C15734 * C963 +
            C958 * C849 + C15715 * C964) *
               C123 +
           (C956 * C126 + C15745 * C251 + C957 * C908 + C15734 * C1107 +
            C958 * C911 + C15715 * C1108) *
               C15407) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C156 * C81 + C15418 * C157) * C2546 +
           (C156 * C124 + C15418 * C249) * C2490 +
           (C156 * C391 + C15418 * C509) * C2547 +
           (C156 * C459 + C15418 * C659) * C2491 +
           (C156 * C394 + C15418 * C512) * C2548 +
           (C156 * C460 + C15418 * C660) * C15712) *
              C15741 +
          ((C156 * C82 + C15418 * C158) * C2546 +
           (C156 * C125 + C15418 * C250) * C2490 +
           (C156 * C392 + C15418 * C510) * C2547 +
           (C156 * C461 + C15418 * C661) * C2491 +
           (C156 * C395 + C15418 * C513) * C2548 +
           (C156 * C462 + C15418 * C662) * C15712) *
              C15728 +
          ((C156 * C83 + C15418 * C159) * C2546 +
           (C156 * C126 + C15418 * C251) * C2490 +
           (C156 * C393 + C15418 * C511) * C2547 +
           (C156 * C463 + C15418 * C663) * C2491 +
           (C156 * C396 + C15418 * C514) * C2548 +
           (C156 * C464 + C15418 * C664) * C15712) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C156 * C81 + C15418 * C157) * C2890 +
          (C156 * C124 + C15418 * C249) * C2850 +
          (C156 * C391 + C15418 * C509) * C2891 +
          (C156 * C459 + C15418 * C659) * C2851 +
          (C156 * C394 + C15418 * C512) * C2892 +
          (C156 * C460 + C15418 * C660) * C2852 +
          (C156 * C2857 + C15418 * C2921) * C2893 +
          (C156 * C2895 + C15418 * C3005) * C2853 +
          (C156 * C2858 + C15418 * C2922) * C2894 +
          (C156 * C2896 + C15418 * C3006) * C2854) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
           C958 * C847 + C15715 * C960) *
              C2546 +
          (C956 * C124 + C15745 * C249 + C957 * C906 + C15734 * C1103 +
           C958 * C909 + C15715 * C1104) *
              C2490 +
          (C956 * C391 + C15745 * C509 + C957 * C1995 + C15734 * C2113 +
           C958 * C3119 + C15715 * C3216) *
              C2547 +
          (C956 * C459 + C15745 * C659 + C957 * C2057 + C15734 * C2281 +
           C958 * C3173 + C15715 * C3348) *
              C2491 +
          (C956 * C394 + C15745 * C512 + C957 * C3120 + C15734 * C3217 +
           C958 * C3121 + C15715 * C3218) *
              C2548 +
          (C956 * C460 + C15745 * C660 + C957 * C3172 + C15734 * C3349 +
           C958 * C3174 + C15715 * C3350) *
              C15712) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
            C4761 * C847 + C15715 * C960) *
               C123 +
           (C4759 * C124 + C4674 * C249 + C4760 * C906 + C4675 * C1103 +
            C4761 * C909 + C15715 * C1104) *
               C15407) *
              C15741 +
          ((C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
            C4761 * C848 + C15715 * C962) *
               C123 +
           (C4759 * C125 + C4674 * C250 + C4760 * C907 + C4675 * C1105 +
            C4761 * C910 + C15715 * C1106) *
               C15407) *
              C15728 +
          ((C4759 * C83 + C4674 * C159 + C4760 * C846 + C4675 * C963 +
            C4761 * C849 + C15715 * C964) *
               C123 +
           (C4759 * C126 + C4674 * C251 + C4760 * C908 + C4675 * C1107 +
            C4761 * C911 + C15715 * C1108) *
               C15407) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
           C4761 * C847 + C15715 * C960) *
              C456 +
          (C4759 * C124 + C4674 * C249 + C4760 * C906 + C4675 * C1103 +
           C4761 * C909 + C15715 * C1104) *
              C15744 +
          (C4759 * C391 + C4674 * C509 + C4760 * C1995 + C4675 * C2113 +
           C4761 * C3119 + C15715 * C3216) *
              C457 +
          (C4759 * C459 + C4674 * C659 + C4760 * C2057 + C4675 * C2281 +
           C4761 * C3173 + C15715 * C3348) *
              C15732 +
          (C4759 * C394 + C4674 * C512 + C4760 * C3120 + C4675 * C3217 +
           C4761 * C3121 + C15715 * C3218) *
              C458 +
          (C4759 * C460 + C4674 * C660 + C4760 * C3172 + C4675 * C3349 +
           C4761 * C3174 + C15715 * C3350) *
              C15712) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C5439 * C81 + C5378 * C157 + C5440 * C844 + C5379 * C959 +
           C5441 * C847 + C5380 * C960 + C5442 * C5383 + C5381 * C5444 +
           C5443 * C5384 + C5382 * C5445) *
              C123 +
          (C5439 * C124 + C5378 * C249 + C5440 * C906 + C5379 * C1103 +
           C5441 * C909 + C5380 * C1104 + C5442 * C5413 + C5381 * C5520 +
           C5443 * C5414 + C5382 * C5521) *
              C15407) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
               C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
                  C156 +
              (C72 * C157 + C61 * C276 + C74 * C158 + C62 * C277 + C76 * C159 +
               C63 * C278 + C78 * C160 + C64 * C279 + C80 * C161 + C65 * C280) *
                  C15418) *
             C15407 * C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
                C15708 * C88) *
                   C156 +
               (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
                C390 * C159 + C15708 * C278) *
                   C15418) *
                  C15744 +
              ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
                C390 * C393 + C15708 * C399) *
                   C156 +
               (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
                C390 * C511 + C15708 * C705) *
                   C15418) *
                  C15732 +
              ((C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 +
                C390 * C396 + C15708 * C402) *
                   C156 +
               (C386 * C512 + C379 * C706 + C388 * C513 + C380 * C707 +
                C390 * C514 + C15708 * C708) *
                   C15418) *
                  C15712) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
           C15708 * C88) *
              C956 +
          (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 + C390 * C159 +
           C15708 * C278) *
              C15745 +
          (C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 + C390 * C846 +
           C15708 * C852) *
              C957 +
          (C386 * C959 + C379 * C1147 + C388 * C961 + C380 * C1148 +
           C390 * C963 + C15708 * C1149) *
              C15734 +
          (C386 * C847 + C379 * C853 + C388 * C848 + C380 * C854 + C390 * C849 +
           C15708 * C855) *
              C958 +
          (C386 * C960 + C379 * C1150 + C388 * C962 + C380 * C1151 +
           C390 * C964 + C15708 * C1152) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C156 +
           (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
            C2498 * C159 + C15708 * C278) *
               C15418) *
              C2490 +
          ((C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
            C2498 * C393 + C15708 * C399) *
               C156 +
           (C2494 * C509 + C15741 * C703 + C2496 * C510 + C15728 * C704 +
            C2498 * C511 + C15708 * C705) *
               C15418) *
              C2491 +
          ((C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
            C2498 * C396 + C15708 * C402) *
               C156 +
           (C2494 * C512 + C15741 * C706 + C2496 * C513 + C15728 * C707 +
            C2498 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C156 +
           (C2856 * C157 + C15365 * C276) * C15418) *
              C2850 +
          ((C2856 * C391 + C15365 * C397) * C156 +
           (C2856 * C509 + C15365 * C703) * C15418) *
              C2851 +
          ((C2856 * C394 + C15365 * C400) * C156 +
           (C2856 * C512 + C15365 * C706) * C15418) *
              C2852 +
          ((C2856 * C2857 + C15365 * C2859) * C156 +
           (C2856 * C2921 + C15365 * C3029) * C15418) *
              C2853 +
          ((C2856 * C2858 + C15365 * C2860) * C156 +
           (C2856 * C2922 + C15365 * C3030) * C15418) *
              C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C956 +
           (C2856 * C157 + C15365 * C276) * C15745 +
           (C2856 * C844 + C15365 * C850) * C957 +
           (C2856 * C959 + C15365 * C1147) * C15734 +
           (C2856 * C847 + C15365 * C853) * C958 +
           (C2856 * C960 + C15365 * C1150) * C15715) *
              C2490 +
          ((C2856 * C391 + C15365 * C397) * C956 +
           (C2856 * C509 + C15365 * C703) * C15745 +
           (C2856 * C1995 + C15365 * C1998) * C957 +
           (C2856 * C2113 + C15365 * C2334) * C15734 +
           (C2856 * C3119 + C15365 * C3122) * C958 +
           (C2856 * C3216 + C15365 * C3389) * C15715) *
              C2491 +
          ((C2856 * C394 + C15365 * C400) * C956 +
           (C2856 * C512 + C15365 * C706) * C15745 +
           (C2856 * C3120 + C15365 * C3123) * C957 +
           (C2856 * C3217 + C15365 * C3390) * C15734 +
           (C2856 * C3121 + C15365 * C3124) * C958 +
           (C2856 * C3218 + C15365 * C3391) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C4759 +
          (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
           C2498 * C159 + C15708 * C278) *
              C4674 +
          (C2494 * C844 + C15741 * C850 + C2496 * C845 + C15728 * C851 +
           C2498 * C846 + C15708 * C852) *
              C4760 +
          (C2494 * C959 + C15741 * C1147 + C2496 * C961 + C15728 * C1148 +
           C2498 * C963 + C15708 * C1149) *
              C4675 +
          (C2494 * C847 + C15741 * C853 + C2496 * C848 + C15728 * C854 +
           C2498 * C849 + C15708 * C855) *
              C4761 +
          (C2494 * C960 + C15741 * C1150 + C2496 * C962 + C15728 * C1151 +
           C2498 * C964 + C15708 * C1152) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C4759 +
           (C2856 * C157 + C15365 * C276) * C4674 +
           (C2856 * C844 + C15365 * C850) * C4760 +
           (C2856 * C959 + C15365 * C1147) * C4675 +
           (C2856 * C847 + C15365 * C853) * C4761 +
           (C2856 * C960 + C15365 * C1150) * C15715) *
              C15744 +
          ((C2856 * C391 + C15365 * C397) * C4759 +
           (C2856 * C509 + C15365 * C703) * C4674 +
           (C2856 * C1995 + C15365 * C1998) * C4760 +
           (C2856 * C2113 + C15365 * C2334) * C4675 +
           (C2856 * C3119 + C15365 * C3122) * C4761 +
           (C2856 * C3216 + C15365 * C3389) * C15715) *
              C15732 +
          ((C2856 * C394 + C15365 * C400) * C4759 +
           (C2856 * C512 + C15365 * C706) * C4674 +
           (C2856 * C3120 + C15365 * C3123) * C4760 +
           (C2856 * C3217 + C15365 * C3390) * C4675 +
           (C2856 * C3121 + C15365 * C3124) * C4761 +
           (C2856 * C3218 + C15365 * C3391) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C2856 * C81 + C15365 * C86) * C5439 +
          (C2856 * C157 + C15365 * C276) * C5378 +
          (C2856 * C844 + C15365 * C850) * C5440 +
          (C2856 * C959 + C15365 * C1147) * C5379 +
          (C2856 * C847 + C15365 * C853) * C5441 +
          (C2856 * C960 + C15365 * C1150) * C5380 +
          (C2856 * C5383 + C15365 * C5385) * C5442 +
          (C2856 * C5444 + C15365 * C5544) * C5381 +
          (C2856 * C5384 + C15365 * C5386) * C5443 +
          (C2856 * C5445 + C15365 * C5545) * C5382) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] += (0.5 * std::pow(Pi, 2.5) *
                       (((C123 * C81 + C15407 * C124) * C156 +
                         (C123 * C157 + C15407 * C303) * C15418) *
                            C61 +
                        ((C123 * C82 + C15407 * C125) * C156 +
                         (C123 * C158 + C15407 * C304) * C15418) *
                            C62 +
                        ((C123 * C83 + C15407 * C126) * C156 +
                         (C123 * C159 + C15407 * C305) * C15418) *
                            C63 +
                        ((C123 * C84 + C15407 * C127) * C156 +
                         (C123 * C160 + C15407 * C306) * C15418) *
                            C64 +
                        ((C123 * C85 + C15407 * C128) * C156 +
                         (C123 * C161 + C15407 * C307) * C15418) *
                            C65) *
                       C68 * C69 * C70 +
                   0.5 * std::pow(Pi, 2.5) *
                       (((C456 * C81 + C15744 * C124 + C457 * C391 +
                          C15732 * C459 + C458 * C394 + C15712 * C460) *
                             C156 +
                         (C456 * C157 + C15744 * C303 + C457 * C509 +
                          C15732 * C747 + C458 * C512 + C15712 * C748) *
                             C15418) *
                            C379 +
                        ((C456 * C82 + C15744 * C125 + C457 * C392 +
                          C15732 * C461 + C458 * C395 + C15712 * C462) *
                             C156 +
                         (C456 * C158 + C15744 * C304 + C457 * C510 +
                          C15732 * C749 + C458 * C513 + C15712 * C750) *
                             C15418) *
                            C380 +
                        ((C456 * C83 + C15744 * C126 + C457 * C393 +
                          C15732 * C463 + C458 * C396 + C15712 * C464) *
                             C156 +
                         (C456 * C159 + C15744 * C305 + C457 * C511 +
                          C15732 * C751 + C458 * C514 + C15712 * C752) *
                             C15418) *
                            C15708) *
                       C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C956 +
                     (C123 * C157 + C15407 * C303) * C15745 +
                     (C123 * C844 + C15407 * C906) * C957 +
                     (C123 * C959 + C15407 * C1191) * C15734 +
                     (C123 * C847 + C15407 * C909) * C958 +
                     (C123 * C960 + C15407 * C1192) * C15715) *
                        C379 +
                    ((C123 * C82 + C15407 * C125) * C956 +
                     (C123 * C158 + C15407 * C304) * C15745 +
                     (C123 * C845 + C15407 * C907) * C957 +
                     (C123 * C961 + C15407 * C1193) * C15734 +
                     (C123 * C848 + C15407 * C910) * C958 +
                     (C123 * C962 + C15407 * C1194) * C15715) *
                        C380 +
                    ((C123 * C83 + C15407 * C126) * C956 +
                     (C123 * C159 + C15407 * C305) * C15745 +
                     (C123 * C846 + C15407 * C908) * C957 +
                     (C123 * C963 + C15407 * C1195) * C15734 +
                     (C123 * C849 + C15407 * C911) * C958 +
                     (C123 * C964 + C15407 * C1196) * C15715) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C156 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15418) *
                        C15741 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C156 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15418) *
                        C15728 +
                    ((C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                      C2548 * C396 + C15712 * C464) *
                         C156 +
                     (C2546 * C159 + C2490 * C305 + C2547 * C511 +
                      C2491 * C751 + C2548 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (0.5 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C156 +
                    (C2890 * C157 + C2850 * C303 + C2891 * C509 + C2851 * C747 +
                     C2892 * C512 + C2852 * C748 + C2893 * C2921 +
                     C2853 * C3053 + C2894 * C2922 + C2854 * C3054) *
                        C15418) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C956 +
                    (C2546 * C157 + C2490 * C303 + C2547 * C509 + C2491 * C747 +
                     C2548 * C512 + C15712 * C748) *
                        C15745 +
                    (C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                     C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                        C957 +
                    (C2546 * C959 + C2490 * C1191 + C2547 * C2113 +
                     C2491 * C2387 + C2548 * C3217 + C15712 * C3430) *
                        C15734 +
                    (C2546 * C847 + C2490 * C909 + C2547 * C3119 +
                     C2491 * C3173 + C2548 * C3121 + C15712 * C3174) *
                        C958 +
                    (C2546 * C960 + C2490 * C1192 + C2547 * C3216 +
                     C2491 * C3431 + C2548 * C3218 + C15712 * C3432) *
                        C15715) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C4759 +
                     (C123 * C157 + C15407 * C303) * C4674 +
                     (C123 * C844 + C15407 * C906) * C4760 +
                     (C123 * C959 + C15407 * C1191) * C4675 +
                     (C123 * C847 + C15407 * C909) * C4761 +
                     (C123 * C960 + C15407 * C1192) * C15715) *
                        C15741 +
                    ((C123 * C82 + C15407 * C125) * C4759 +
                     (C123 * C158 + C15407 * C304) * C4674 +
                     (C123 * C845 + C15407 * C907) * C4760 +
                     (C123 * C961 + C15407 * C1193) * C4675 +
                     (C123 * C848 + C15407 * C910) * C4761 +
                     (C123 * C962 + C15407 * C1194) * C15715) *
                        C15728 +
                    ((C123 * C83 + C15407 * C126) * C4759 +
                     (C123 * C159 + C15407 * C305) * C4674 +
                     (C123 * C846 + C15407 * C908) * C4760 +
                     (C123 * C963 + C15407 * C1195) * C4675 +
                     (C123 * C849 + C15407 * C911) * C4761 +
                     (C123 * C964 + C15407 * C1196) * C15715) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                     C458 * C394 + C15712 * C460) *
                        C4759 +
                    (C456 * C157 + C15744 * C303 + C457 * C509 + C15732 * C747 +
                     C458 * C512 + C15712 * C748) *
                        C4674 +
                    (C456 * C844 + C15744 * C906 + C457 * C1995 +
                     C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                        C4760 +
                    (C456 * C959 + C15744 * C1191 + C457 * C2113 +
                     C15732 * C2387 + C458 * C3217 + C15712 * C3430) *
                        C4675 +
                    (C456 * C847 + C15744 * C909 + C457 * C3119 +
                     C15732 * C3173 + C458 * C3121 + C15712 * C3174) *
                        C4761 +
                    (C456 * C960 + C15744 * C1192 + C457 * C3216 +
                     C15732 * C3431 + C458 * C3218 + C15712 * C3432) *
                        C15715) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C123 * C81 + C15407 * C124) * C5439 +
                    (C123 * C157 + C15407 * C303) * C5378 +
                    (C123 * C844 + C15407 * C906) * C5440 +
                    (C123 * C959 + C15407 * C1191) * C5379 +
                    (C123 * C847 + C15407 * C909) * C5441 +
                    (C123 * C960 + C15407 * C1192) * C5380 +
                    (C123 * C5383 + C15407 * C5413) * C5442 +
                    (C123 * C5444 + C15407 * C5568) * C5381 +
                    (C123 * C5384 + C15407 * C5414) * C5443 +
                    (C123 * C5445 + C15407 * C5569) * C5382) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C330 * C81 + C337 + C337 + C15418 * C331) * C15407 * C61 +
              (C330 * C82 + C338 + C338 + C15418 * C332) * C15407 * C62 +
              (C330 * C83 + C339 + C339 + C15418 * C333) * C15407 * C63 +
              (C330 * C84 + C340 + C340 + C15418 * C334) * C15407 * C64 +
              (C330 * C85 + C341 + C341 + C15418 * C335) * C15407 * C65) *
             C68 * C69 * C70 +
         0.5 * std::pow(Pi, 2.5) *
             (((C330 * C81 + C337 + C337 + C15418 * C331) * C15744 +
               (C330 * C391 + C798 + C798 + C15418 * C791) * C15732 +
               (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                  C379 +
              ((C330 * C82 + C338 + C338 + C15418 * C332) * C15744 +
               (C330 * C392 + C800 + C800 + C15418 * C793) * C15732 +
               (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                  C380 +
              ((C330 * C83 + C339 + C339 + C15418 * C333) * C15744 +
               (C330 * C393 + C802 + C802 + C15418 * C795) * C15732 +
               (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                  C15708) *
             C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1235 * C81 + C1245 + C1245 + C15745 * C331 + C1236 * C844 + C1246 +
           C1246 + C15734 * C1238 + C1237 * C847 + C1247 + C1247 +
           C15715 * C1239) *
              C15407 * C379 +
          (C1235 * C82 + C1248 + C1248 + C15745 * C332 + C1236 * C845 + C1249 +
           C1249 + C15734 * C1240 + C1237 * C848 + C1250 + C1250 +
           C15715 * C1241) *
              C15407 * C380 +
          (C1235 * C83 + C1251 + C1251 + C15745 * C333 + C1236 * C846 + C1252 +
           C1252 + C15734 * C1242 + C1237 * C849 + C1253 + C1253 +
           C15715 * C1243) *
              C15407 * C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C330 * C81 + C337 + C337 + C15418 * C331) * C2490 +
           (C330 * C391 + C798 + C798 + C15418 * C791) * C2491 +
           (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
              C15741 +
          ((C330 * C82 + C338 + C338 + C15418 * C332) * C2490 +
           (C330 * C392 + C800 + C800 + C15418 * C793) * C2491 +
           (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
              C15728 +
          ((C330 * C83 + C339 + C339 + C15418 * C333) * C2490 +
           (C330 * C393 + C802 + C802 + C15418 * C795) * C2491 +
           (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C330 * C81 + C337 + C337 + C15418 * C331) * C2850 +
          (C330 * C391 + C798 + C798 + C15418 * C791) * C2851 +
          (C330 * C394 + C799 + C799 + C15418 * C792) * C2852 +
          (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C2853 +
          (C330 * C2858 + C3081 + C3081 + C15418 * C3078) * C2854) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C1235 * C81 + C1245 + C1245 + C15745 * C331 + C1236 * C844 + C1246 +
           C1246 + C15734 * C1238 + C1237 * C847 + C1247 + C1247 +
           C15715 * C1239) *
              C2490 +
          (C1235 * C391 + C3475 + C3475 + C15745 * C791 + C1236 * C1995 +
           C3476 + C3476 + C15734 * C2440 + C1237 * C3119 + C3477 + C3477 +
           C15715 * C3471) *
              C2491 +
          (C1235 * C394 + C3478 + C3478 + C15745 * C792 + C1236 * C3120 +
           C3479 + C3479 + C15734 * C3472 + C1237 * C3121 + C3480 + C3480 +
           C15715 * C3473) *
              C15712) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4990 * C81 + C4994 + C4994 + C4674 * C331 + C4991 * C844 + C4995 +
           C4995 + C4675 * C1238 + C4992 * C847 + C4996 + C4996 +
           C15715 * C1239) *
              C15407 * C15741 +
          (C4990 * C82 + C4997 + C4997 + C4674 * C332 + C4991 * C845 + C4998 +
           C4998 + C4675 * C1240 + C4992 * C848 + C4999 + C4999 +
           C15715 * C1241) *
              C15407 * C15728 +
          (C4990 * C83 + C5000 + C5000 + C4674 * C333 + C4991 * C846 + C5001 +
           C5001 + C4675 * C1242 + C4992 * C849 + C5002 + C5002 +
           C15715 * C1243) *
              C15407 * C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C4990 * C81 + C4994 + C4994 + C4674 * C331 + C4991 * C844 + C4995 +
           C4995 + C4675 * C1238 + C4992 * C847 + C4996 + C4996 +
           C15715 * C1239) *
              C15744 +
          (C4990 * C391 + C5351 + C5351 + C4674 * C791 + C4991 * C1995 + C5352 +
           C5352 + C4675 * C2440 + C4992 * C3119 + C5353 + C5353 +
           C15715 * C3471) *
              C15732 +
          (C4990 * C394 + C5354 + C5354 + C4674 * C792 + C4991 * C3120 + C5355 +
           C5355 + C4675 * C3472 + C4992 * C3121 + C5356 + C5356 +
           C15715 * C3473) *
              C15712) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (C5592 * C81 + C5600 + C5600 + C5378 * C331 + C5593 * C844 + C5601 +
          C5601 + C5379 * C1238 + C5594 * C847 + C5602 + C5602 + C5380 * C1239 +
          C5595 * C5383 + C5603 + C5603 + C5381 * C5597 + C5596 * C5384 +
          C5604 + C5604 + C5382 * C5598) *
         C15407 * C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
            C3529 + C15375 * C92) *
               C15687 +
           (C3520 * C844 + C3888 + C3888 + C15670 * C856 + C3522 * C845 +
            C3889 + C3889 + C15375 * C857) *
               C15505) *
              C2490 +
          ((C3520 * C391 + C3530 + C3530 + C15670 * C403 + C3522 * C392 +
            C3531 + C3531 + C15375 * C404) *
               C15687 +
           (C3520 * C1995 + C3890 + C3890 + C15670 * C2001 + C3522 * C1996 +
            C3891 + C3891 + C15375 * C2002) *
               C15505) *
              C2491 +
          ((C3520 * C394 + C3532 + C3532 + C15670 * C406 + C3522 * C395 +
            C3533 + C3533 + C15375 * C407) *
               C15687 +
           (C3520 * C3120 + C3892 + C3892 + C15670 * C3126 + C3522 * C3884 +
            C3893 + C3893 + C15375 * C3886) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1293 * C81 + C1305 + C1305 + C1287 * C91 + C1295 * C82 + C1306 +
           C1306 + C1288 * C92 + C1297 * C83 + C1307 + C1307 + C1289 * C93 +
           C1299 * C84 + C1308 + C1308 + C15685 * C94) *
              C15687 +
          (C1293 * C844 + C1647 + C1647 + C1287 * C856 + C1295 * C845 + C1648 +
           C1648 + C1288 * C857 + C1297 * C846 + C1649 + C1649 + C1289 * C858 +
           C1299 * C1643 + C1650 + C1650 + C15685 * C1645) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
           C3529 + C15375 * C92) *
              C6112 +
          (C3520 * C844 + C3888 + C3888 + C15670 * C856 + C3522 * C845 + C3889 +
           C3889 + C15375 * C857) *
              C6113 +
          (C3520 * C847 + C5658 + C5658 + C15670 * C859 + C3522 * C848 + C5659 +
           C5659 + C15375 * C860) *
              C6114 +
          (C3520 * C5383 + C6120 + C6120 + C15670 * C5387 + C3522 * C6116 +
           C6121 + C6121 + C15375 * C6118) *
              C15701) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C13975 +
                     (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                      C2548 * C400 + C15712 * C466) *
                         C15670 +
                     (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C13948 +
                     (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                      C2548 * C401 + C15712 * C468) *
                         C15375) *
                        C15687 +
                    ((C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C13975 +
                     (C2546 * C850 + C2490 * C912 + C2547 * C1998 +
                      C2491 * C2060 + C2548 * C3123 + C15712 * C3175) *
                         C15670 +
                     (C2546 * C845 + C2490 * C907 + C2547 * C1996 +
                      C2491 * C2058 + C2548 * C3884 + C15712 * C3943) *
                         C13948 +
                     (C2546 * C851 + C2490 * C913 + C2547 * C1999 +
                      C2491 * C2061 + C2548 * C3885 + C15712 * C3944) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C1294 +
                     (C123 * C86 + C15407 * C129) * C1287 +
                     (C123 * C82 + C15407 * C125) * C1296 +
                     (C123 * C87 + C15407 * C130) * C1288 +
                     (C123 * C83 + C15407 * C126) * C1298 +
                     (C123 * C88 + C15407 * C131) * C1289 +
                     (C123 * C84 + C15407 * C127) * C1300 +
                     (C123 * C89 + C15407 * C132) * C15685) *
                        C15687 +
                    ((C123 * C844 + C15407 * C906) * C1294 +
                     (C123 * C850 + C15407 * C912) * C1287 +
                     (C123 * C845 + C15407 * C907) * C1296 +
                     (C123 * C851 + C15407 * C913) * C1288 +
                     (C123 * C846 + C15407 * C908) * C1298 +
                     (C123 * C852 + C15407 * C914) * C1289 +
                     (C123 * C1643 + C15407 * C1684) * C1300 +
                     (C123 * C1644 + C15407 * C1685) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C13975 +
                     (C123 * C86 + C15407 * C129) * C15670 +
                     (C123 * C82 + C15407 * C125) * C13948 +
                     (C123 * C87 + C15407 * C130) * C15375) *
                        C6112 +
                    ((C123 * C844 + C15407 * C906) * C13975 +
                     (C123 * C850 + C15407 * C912) * C15670 +
                     (C123 * C845 + C15407 * C907) * C13948 +
                     (C123 * C851 + C15407 * C913) * C15375) *
                        C6113 +
                    ((C123 * C847 + C15407 * C909) * C13975 +
                     (C123 * C853 + C15407 * C915) * C15670 +
                     (C123 * C848 + C15407 * C910) * C13948 +
                     (C123 * C854 + C15407 * C916) * C15375) *
                        C6114 +
                    ((C123 * C5383 + C15407 * C5413) * C13975 +
                     (C123 * C5385 + C15407 * C5415) * C15670 +
                     (C123 * C6116 + C15407 * C6155) * C13948 +
                     (C123 * C6117 + C15407 * C6156) * C15375) *
                        C15701) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C13975 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C15670 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C13948 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) *
               C15375) *
              C2490 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C13975 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C15670 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C13948 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C15375) *
              C2491 +
          ((C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C13975 +
           (C1720 * C400 + C15687 * C518 + C1721 * C3123 + C15505 * C3220) *
               C15670 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C13948 +
           (C1720 * C401 + C15687 * C519 + C1721 * C3885 + C15505 * C3996) *
               C15375) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C1294 +
          (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) * C1287 +
          (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C1296 +
          (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) * C1288 +
          (C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C1298 +
          (C1720 * C88 + C15687 * C164 + C1721 * C852 + C15505 * C969) * C1289 +
          (C1720 * C84 + C15687 * C160 + C1721 * C1643 + C15505 * C1722) *
              C1300 +
          (C1720 * C89 + C15687 * C165 + C1721 * C1644 + C15505 * C1723) *
              C15685) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6191 * C81 + C6112 * C157 + C6192 * C844 + C6113 * C959 +
           C6193 * C847 + C6114 * C960 + C6194 * C5383 + C15701 * C5444) *
              C13975 +
          (C6191 * C86 + C6112 * C162 + C6192 * C850 + C6113 * C965 +
           C6193 * C853 + C6114 * C966 + C6194 * C5385 + C15701 * C5446) *
              C15670 +
          (C6191 * C82 + C6112 * C158 + C6192 * C845 + C6113 * C961 +
           C6193 * C848 + C6114 * C962 + C6194 * C6116 + C15701 * C6195) *
              C13948 +
          (C6191 * C87 + C6112 * C163 + C6192 * C851 + C6113 * C967 +
           C6193 * C854 + C6114 * C968 + C6194 * C6117 + C15701 * C6196) *
              C15375) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C2546 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C2490 +
           (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C2547 +
           (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
               C2491 +
           (C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C2548 +
           (C13975 * C460 + C15670 * C562 + C13948 * C462 + C15375 * C563) *
               C15712) *
              C15687 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C2546 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C2490 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C2547 +
           (C13975 * C2057 + C15670 * C2169 + C13948 * C2058 + C15375 * C2170) *
               C2491 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C2548 +
           (C13975 * C3172 + C15670 * C3260 + C13948 * C3943 + C15375 * C4047) *
               C15712) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 +
            C1298 * C83 + C1289 * C88 + C1300 * C84 + C15685 * C89) *
               C123 +
           (C1294 * C124 + C1287 * C189 + C1296 * C125 + C1288 * C190 +
            C1298 * C126 + C1289 * C191 + C1300 * C127 + C15685 * C192) *
               C15407) *
              C15687 +
          ((C1294 * C844 + C1287 * C850 + C1296 * C845 + C1288 * C851 +
            C1298 * C846 + C1289 * C852 + C1300 * C1643 + C15685 * C1644) *
               C123 +
           (C1294 * C906 + C1287 * C1009 + C1296 * C907 + C1288 * C1010 +
            C1298 * C908 + C1289 * C1011 + C1300 * C1684 + C15685 * C1758) *
               C15407) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C123 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C15407) *
              C6112 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C123 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C15407) *
              C6113 +
          ((C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
               C123 +
           (C13975 * C909 + C15670 * C1012 + C13948 * C910 + C15375 * C1013) *
               C15407) *
              C6114 +
          ((C13975 * C5383 + C15670 * C5385 + C13948 * C6116 + C15375 * C6117) *
               C123 +
           (C13975 * C5413 + C15670 * C5470 + C13948 * C6155 + C15375 * C6231) *
               C15407) *
              C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2663 * C81 + C2667 + C2667 + C2490 * C217 +
                      C2664 * C391 + C2668 + C2668 + C2491 * C606 +
                      C2665 * C394 + C2669 + C2669 + C15712 * C607) *
                         C15670 +
                     (C2663 * C82 + C2670 + C2670 + C2490 * C218 +
                      C2664 * C392 + C2671 + C2671 + C2491 * C608 +
                      C2665 * C395 + C2672 + C2672 + C15712 * C609) *
                         C15375) *
                        C15687 +
                    ((C2663 * C844 + C3305 + C3305 + C2490 * C1053 +
                      C2664 * C1995 + C3306 + C3306 + C2491 * C2222 +
                      C2665 * C3120 + C3307 + C3307 + C15712 * C3301) *
                         C15670 +
                     (C2663 * C845 + C4100 + C4100 + C2490 * C1054 +
                      C2664 * C1996 + C4101 + C4101 + C2491 * C2223 +
                      C2665 * C3884 + C4102 + C4102 + C15712 * C4098) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C216 * C81 + C223 + C223 + C15407 * C217) * C1287 +
                     (C216 * C82 + C224 + C224 + C15407 * C218) * C1288 +
                     (C216 * C83 + C225 + C225 + C15407 * C219) * C1289 +
                     (C216 * C84 + C226 + C226 + C15407 * C220) * C15685) *
                        C15687 +
                    ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C1287 +
                     (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C1288 +
                     (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C1289 +
                     (C216 * C1643 + C1795 + C1795 + C15407 * C1793) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C216 * C81 + C223 + C223 + C15407 * C217) * C15670 +
                     (C216 * C82 + C224 + C224 + C15407 * C218) * C15375) *
                        C6112 +
                    ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15670 +
                     (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15375) *
                        C6113 +
                    ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C15670 +
                     (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C15375) *
                        C6114 +
                    ((C216 * C5383 + C5497 + C5497 + C15407 * C5494) * C15670 +
                     (C216 * C6116 + C6268 + C6268 + C15407 * C6266) * C15375) *
                        C15701) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C2546 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C2490 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C2547 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C2491 +
           (C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C2548 +
           (C1720 * C460 + C15687 * C660 + C1721 * C3172 + C15505 * C3349) *
               C15712) *
              C15670 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C2546 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C2490 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C2547 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C2491 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C2548 +
           (C1720 * C462 + C15687 * C662 + C1721 * C3943 + C15505 * C4152) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C123 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C15407) *
              C1287 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C123 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C15407) *
              C1288 +
          ((C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C123 +
           (C1720 * C126 + C15687 * C251 + C1721 * C908 + C15505 * C1107) *
               C15407) *
              C1289 +
          ((C1720 * C84 + C15687 * C160 + C1721 * C1643 + C15505 * C1722) *
               C123 +
           (C1720 * C127 + C15687 * C252 + C1721 * C1684 + C15505 * C1829) *
               C15407) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6191 * C81 + C6112 * C157 + C6192 * C844 + C6113 * C959 +
            C6193 * C847 + C6114 * C960 + C6194 * C5383 + C15701 * C5444) *
               C123 +
           (C6191 * C124 + C6112 * C249 + C6192 * C906 + C6113 * C1103 +
            C6193 * C909 + C6114 * C1104 + C6194 * C5413 + C15701 * C5520) *
               C15407) *
              C15670 +
          ((C6191 * C82 + C6112 * C158 + C6192 * C845 + C6113 * C961 +
            C6193 * C848 + C6114 * C962 + C6194 * C6116 + C15701 * C6195) *
               C123 +
           (C6191 * C125 + C6112 * C250 + C6192 * C907 + C6113 * C1105 +
            C6193 * C910 + C6114 * C1106 + C6194 * C6155 + C15701 * C6302) *
               C15407) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C1720 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C15687 +
           (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C1721 +
           (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
               C15505) *
              C2490 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C1720 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C15687 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C1721 +
           (C13975 * C2113 + C15670 * C2334 + C13948 * C2114 + C15375 * C2335) *
               C15505) *
              C2491 +
          ((C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C1720 +
           (C13975 * C512 + C15670 * C706 + C13948 * C513 + C15375 * C707) *
               C15687 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C1721 +
           (C13975 * C3217 + C15670 * C3390 + C13948 * C3995 + C15375 * C4203) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 + C1298 * C83 +
           C1289 * C88 + C1300 * C84 + C15685 * C89) *
              C1720 +
          (C1294 * C157 + C1287 * C276 + C1296 * C158 + C1288 * C277 +
           C1298 * C159 + C1289 * C278 + C1300 * C160 + C15685 * C279) *
              C15687 +
          (C1294 * C844 + C1287 * C850 + C1296 * C845 + C1288 * C851 +
           C1298 * C846 + C1289 * C852 + C1300 * C1643 + C15685 * C1644) *
              C1721 +
          (C1294 * C959 + C1287 * C1147 + C1296 * C961 + C1288 * C1148 +
           C1298 * C963 + C1289 * C1149 + C1300 * C1722 + C15685 * C1864) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C6191 +
          (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
              C6112 +
          (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
              C6192 +
          (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
              C6113 +
          (C13975 * C847 + C15670 * C853 + C13948 * C848 + C15375 * C854) *
              C6193 +
          (C13975 * C960 + C15670 * C1150 + C13948 * C962 + C15375 * C1151) *
              C6114 +
          (C13975 * C5383 + C15670 * C5385 + C13948 * C6116 + C15375 * C6117) *
              C6194 +
          (C13975 * C5444 + C15670 * C5544 + C13948 * C6195 + C15375 * C6337) *
              C15701) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C1720 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15687 +
                     (C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C1721 +
                     (C2546 * C959 + C2490 * C1191 + C2547 * C2113 +
                      C2491 * C2387 + C2548 * C3217 + C15712 * C3430) *
                         C15505) *
                        C15670 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C1720 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15687 +
                     (C2546 * C845 + C2490 * C907 + C2547 * C1996 +
                      C2491 * C2058 + C2548 * C3884 + C15712 * C3943) *
                         C1721 +
                     (C2546 * C961 + C2490 * C1193 + C2547 * C2114 +
                      C2491 * C2388 + C2548 * C3995 + C15712 * C4254) *
                         C15505) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C1720 +
                     (C123 * C157 + C15407 * C303) * C15687 +
                     (C123 * C844 + C15407 * C906) * C1721 +
                     (C123 * C959 + C15407 * C1191) * C15505) *
                        C1287 +
                    ((C123 * C82 + C15407 * C125) * C1720 +
                     (C123 * C158 + C15407 * C304) * C15687 +
                     (C123 * C845 + C15407 * C907) * C1721 +
                     (C123 * C961 + C15407 * C1193) * C15505) *
                        C1288 +
                    ((C123 * C83 + C15407 * C126) * C1720 +
                     (C123 * C159 + C15407 * C305) * C15687 +
                     (C123 * C846 + C15407 * C908) * C1721 +
                     (C123 * C963 + C15407 * C1195) * C15505) *
                        C1289 +
                    ((C123 * C84 + C15407 * C127) * C1720 +
                     (C123 * C160 + C15407 * C306) * C15687 +
                     (C123 * C1643 + C15407 * C1684) * C1721 +
                     (C123 * C1722 + C15407 * C1899) * C15505) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C6191 +
                     (C123 * C157 + C15407 * C303) * C6112 +
                     (C123 * C844 + C15407 * C906) * C6192 +
                     (C123 * C959 + C15407 * C1191) * C6113 +
                     (C123 * C847 + C15407 * C909) * C6193 +
                     (C123 * C960 + C15407 * C1192) * C6114 +
                     (C123 * C5383 + C15407 * C5413) * C6194 +
                     (C123 * C5444 + C15407 * C5568) * C15701) *
                        C15670 +
                    ((C123 * C82 + C15407 * C125) * C6191 +
                     (C123 * C158 + C15407 * C304) * C6112 +
                     (C123 * C845 + C15407 * C907) * C6192 +
                     (C123 * C961 + C15407 * C1193) * C6113 +
                     (C123 * C848 + C15407 * C910) * C6193 +
                     (C123 * C962 + C15407 * C1194) * C6114 +
                     (C123 * C6116 + C15407 * C6155) * C6194 +
                     (C123 * C6195 + C15407 * C6372) * C15701) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1934 * C81 + C1938 + C1938 + C15687 * C331 + C1935 * C844 + C1939 +
            C1939 + C15505 * C1238) *
               C2490 +
           (C1934 * C391 + C2444 + C2444 + C15687 * C791 + C1935 * C1995 +
            C2445 + C2445 + C15505 * C2440) *
               C2491 +
           (C1934 * C394 + C4307 + C4307 + C15687 * C792 + C1935 * C3120 +
            C4308 + C4308 + C15505 * C3472) *
               C15712) *
              C15670 +
          ((C1934 * C82 + C1940 + C1940 + C15687 * C332 + C1935 * C845 + C1941 +
            C1941 + C15505 * C1240) *
               C2490 +
           (C1934 * C392 + C2446 + C2446 + C15687 * C793 + C1935 * C1996 +
            C2447 + C2447 + C15505 * C2441) *
               C2491 +
           (C1934 * C395 + C4309 + C4309 + C15687 * C794 + C1935 * C3884 +
            C4310 + C4310 + C15505 * C4305) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C1934 * C81 + C1938 + C1938 + C15687 * C331 + C1935 * C844 + C1939 +
           C1939 + C15505 * C1238) *
              C15407 * C1287 +
          (C1934 * C82 + C1940 + C1940 + C15687 * C332 + C1935 * C845 + C1941 +
           C1941 + C15505 * C1240) *
              C15407 * C1288 +
          (C1934 * C83 + C1942 + C1942 + C15687 * C333 + C1935 * C846 + C1943 +
           C1943 + C15505 * C1242) *
              C15407 * C1289 +
          (C1934 * C84 + C1944 + C1944 + C15687 * C334 + C1935 * C1643 + C1945 +
           C1945 + C15505 * C1936) *
              C15407 * C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C6407 * C81 + C6413 + C6413 + C6112 * C331 + C6408 * C844 + C6414 +
           C6414 + C6113 * C1238 + C6409 * C847 + C6415 + C6415 +
           C6114 * C1239 + C6410 * C5383 + C6416 + C6416 + C15701 * C5597) *
              C15407 * C15670 +
          (C6407 * C82 + C6417 + C6417 + C6112 * C332 + C6408 * C845 + C6418 +
           C6418 + C6113 * C1240 + C6409 * C848 + C6419 + C6419 +
           C6114 * C1241 + C6410 * C6116 + C6420 + C6420 + C15701 * C6411) *
              C15407 * C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
           C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
              C15418 * C15744 +
          (C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 + C414 +
           C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
              C15418 * C15732 +
          (C385 * C394 + C416 + C416 + C379 * C406 + C387 * C395 + C417 + C417 +
           C380 * C407 + C389 * C396 + C418 + C418 + C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C71 * C81 + C97 + C97 + C61 * C91 + C73 * C82 + C98 + C98 +
          C62 * C92 + C75 * C83 + C99 + C99 + C63 * C93 + C77 * C84 + C100 +
          C100 + C64 * C94 + C79 * C85 + C101 + C101 + C65 * C95) *
         C15418 * C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C15418 * C2490 +
          (C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 + C2504 +
           C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
           C15708 * C405) *
              C15418 * C2491 +
          (C2493 * C394 + C2506 + C2506 + C15741 * C406 + C2495 * C395 + C2507 +
           C2507 + C15728 * C407 + C2497 * C396 + C2508 + C2508 +
           C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15418 * C2850 +
          (C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15418 * C2851 +
          (C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15418 * C2852 +
          (C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15418 * C2853 +
          (C2855 * C2858 + C2868 + C2868 + C15365 * C2862) * C15418 * C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C4674 +
          (C2493 * C844 + C4678 + C4678 + C15741 * C856 + C2495 * C845 + C4679 +
           C4679 + C15728 * C857 + C2497 * C846 + C4680 + C4680 +
           C15708 * C858) *
              C4675 +
          (C2493 * C847 + C4681 + C4681 + C15741 * C859 + C2495 * C848 + C4682 +
           C4682 + C15728 * C860 + C2497 * C849 + C4683 + C4683 +
           C15708 * C861) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C4674 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C4675 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C15715) *
              C15744 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C4674 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C4675 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C15715) *
              C15732 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C4674 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C4675 +
           (C2855 * C3121 + C3134 + C3134 + C15365 * C3127) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                     C458 * C394 + C15712 * C460) *
                        C386 +
                    (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                     C458 * C400 + C15712 * C466) *
                        C379 +
                    (C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                     C458 * C395 + C15712 * C462) *
                        C388 +
                    (C456 * C87 + C15744 * C130 + C457 * C398 + C15732 * C467 +
                     C458 * C401 + C15712 * C468) *
                        C380 +
                    (C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                     C458 * C396 + C15712 * C464) *
                        C390 +
                    (C456 * C88 + C15744 * C131 + C457 * C399 + C15732 * C469 +
                     C458 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C123 * C81 + C15407 * C124) * C72 +
                    (C123 * C86 + C15407 * C129) * C61 +
                    (C123 * C82 + C15407 * C125) * C74 +
                    (C123 * C87 + C15407 * C130) * C62 +
                    (C123 * C83 + C15407 * C126) * C76 +
                    (C123 * C88 + C15407 * C131) * C63 +
                    (C123 * C84 + C15407 * C127) * C78 +
                    (C123 * C89 + C15407 * C132) * C64 +
                    (C123 * C85 + C15407 * C128) * C80 +
                    (C123 * C90 + C15407 * C133) * C65) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C2494 +
                    (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                     C2548 * C400 + C15712 * C466) *
                        C15741 +
                    (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                     C2548 * C395 + C15712 * C462) *
                        C2496 +
                    (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                     C2548 * C401 + C15712 * C468) *
                        C15728 +
                    (C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                     C2548 * C396 + C15712 * C464) *
                        C2498 +
                    (C2546 * C88 + C2490 * C131 + C2547 * C399 + C2491 * C469 +
                     C2548 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C2856 +
                    (C2890 * C86 + C2850 * C129 + C2891 * C397 + C2851 * C465 +
                     C2892 * C400 + C2852 * C466 + C2893 * C2859 +
                     C2853 * C2897 + C2894 * C2860 + C2854 * C2898) *
                        C15365) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C2494 +
                     (C123 * C86 + C15407 * C129) * C15741 +
                     (C123 * C82 + C15407 * C125) * C2496 +
                     (C123 * C87 + C15407 * C130) * C15728 +
                     (C123 * C83 + C15407 * C126) * C2498 +
                     (C123 * C88 + C15407 * C131) * C15708) *
                        C4674 +
                    ((C123 * C844 + C15407 * C906) * C2494 +
                     (C123 * C850 + C15407 * C912) * C15741 +
                     (C123 * C845 + C15407 * C907) * C2496 +
                     (C123 * C851 + C15407 * C913) * C15728 +
                     (C123 * C846 + C15407 * C908) * C2498 +
                     (C123 * C852 + C15407 * C914) * C15708) *
                        C4675 +
                    ((C123 * C847 + C15407 * C909) * C2494 +
                     (C123 * C853 + C15407 * C915) * C15741 +
                     (C123 * C848 + C15407 * C910) * C2496 +
                     (C123 * C854 + C15407 * C916) * C15728 +
                     (C123 * C849 + C15407 * C911) * C2498 +
                     (C123 * C855 + C15407 * C917) * C15708) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C2856 +
                     (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                      C458 * C400 + C15712 * C466) *
                         C15365) *
                        C4674 +
                    ((C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C2856 +
                     (C456 * C850 + C15744 * C912 + C457 * C1998 +
                      C15732 * C2060 + C458 * C3123 + C15712 * C3175) *
                         C15365) *
                        C4675 +
                    ((C456 * C847 + C15744 * C909 + C457 * C3119 +
                      C15732 * C3173 + C458 * C3121 + C15712 * C3174) *
                         C2856 +
                     (C456 * C853 + C15744 * C915 + C457 * C3122 +
                      C15732 * C3176 + C458 * C3124 + C15712 * C3177) *
                         C15365) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C386 +
                     (C156 * C86 + C15418 * C162) * C379 +
                     (C156 * C82 + C15418 * C158) * C388 +
                     (C156 * C87 + C15418 * C163) * C380 +
                     (C156 * C83 + C15418 * C159) * C390 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C15744 +
                    ((C156 * C391 + C15418 * C509) * C386 +
                     (C156 * C397 + C15418 * C515) * C379 +
                     (C156 * C392 + C15418 * C510) * C388 +
                     (C156 * C398 + C15418 * C516) * C380 +
                     (C156 * C393 + C15418 * C511) * C390 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C15732 +
                    ((C156 * C394 + C15418 * C512) * C386 +
                     (C156 * C400 + C15418 * C518) * C379 +
                     (C156 * C395 + C15418 * C513) * C388 +
                     (C156 * C401 + C15418 * C519) * C380 +
                     (C156 * C396 + C15418 * C514) * C390 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C72 +
                    (C156 * C86 + C15418 * C162) * C61 +
                    (C156 * C82 + C15418 * C158) * C74 +
                    (C156 * C87 + C15418 * C163) * C62 +
                    (C156 * C83 + C15418 * C159) * C76 +
                    (C156 * C88 + C15418 * C164) * C63 +
                    (C156 * C84 + C15418 * C160) * C78 +
                    (C156 * C89 + C15418 * C165) * C64 +
                    (C156 * C85 + C15418 * C161) * C80 +
                    (C156 * C90 + C15418 * C166) * C65) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2494 +
                     (C156 * C86 + C15418 * C162) * C15741 +
                     (C156 * C82 + C15418 * C158) * C2496 +
                     (C156 * C87 + C15418 * C163) * C15728 +
                     (C156 * C83 + C15418 * C159) * C2498 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C2490 +
                    ((C156 * C391 + C15418 * C509) * C2494 +
                     (C156 * C397 + C15418 * C515) * C15741 +
                     (C156 * C392 + C15418 * C510) * C2496 +
                     (C156 * C398 + C15418 * C516) * C15728 +
                     (C156 * C393 + C15418 * C511) * C2498 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C2491 +
                    ((C156 * C394 + C15418 * C512) * C2494 +
                     (C156 * C400 + C15418 * C518) * C15741 +
                     (C156 * C395 + C15418 * C513) * C2496 +
                     (C156 * C401 + C15418 * C519) * C15728 +
                     (C156 * C396 + C15418 * C514) * C2498 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2856 +
                     (C156 * C86 + C15418 * C162) * C15365) *
                        C2850 +
                    ((C156 * C391 + C15418 * C509) * C2856 +
                     (C156 * C397 + C15418 * C515) * C15365) *
                        C2851 +
                    ((C156 * C394 + C15418 * C512) * C2856 +
                     (C156 * C400 + C15418 * C518) * C15365) *
                        C2852 +
                    ((C156 * C2857 + C15418 * C2921) * C2856 +
                     (C156 * C2859 + C15418 * C2923) * C15365) *
                        C2853 +
                    ((C156 * C2858 + C15418 * C2922) * C2856 +
                     (C156 * C2860 + C15418 * C2924) * C15365) *
                        C2854) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                     C4761 * C847 + C15715 * C960) *
                        C2494 +
                    (C4759 * C86 + C4674 * C162 + C4760 * C850 + C4675 * C965 +
                     C4761 * C853 + C15715 * C966) *
                        C15741 +
                    (C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
                     C4761 * C848 + C15715 * C962) *
                        C2496 +
                    (C4759 * C87 + C4674 * C163 + C4760 * C851 + C4675 * C967 +
                     C4761 * C854 + C15715 * C968) *
                        C15728 +
                    (C4759 * C83 + C4674 * C159 + C4760 * C846 + C4675 * C963 +
                     C4761 * C849 + C15715 * C964) *
                        C2498 +
                    (C4759 * C88 + C4674 * C164 + C4760 * C852 + C4675 * C969 +
                     C4761 * C855 + C15715 * C970) *
                        C15708) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                      C4761 * C847 + C15715 * C960) *
                         C2856 +
                     (C4759 * C86 + C4674 * C162 + C4760 * C850 + C4675 * C965 +
                      C4761 * C853 + C15715 * C966) *
                         C15365) *
                        C15744 +
                    ((C4759 * C391 + C4674 * C509 + C4760 * C1995 +
                      C4675 * C2113 + C4761 * C3119 + C15715 * C3216) *
                         C2856 +
                     (C4759 * C397 + C4674 * C515 + C4760 * C1998 +
                      C4675 * C2116 + C4761 * C3122 + C15715 * C3219) *
                         C15365) *
                        C15732 +
                    ((C4759 * C394 + C4674 * C512 + C4760 * C3120 +
                      C4675 * C3217 + C4761 * C3121 + C15715 * C3218) *
                         C2856 +
                     (C4759 * C400 + C4674 * C518 + C4760 * C3123 +
                      C4675 * C3220 + C4761 * C3124 + C15715 * C3221) *
                         C15365) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
           C15708 * C88) *
              C456 +
          (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 + C390 * C126 +
           C15708 * C191) *
              C15744 +
          (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 + C390 * C393 +
           C15708 * C399) *
              C457 +
          (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 + C390 * C463 +
           C15708 * C561) *
              C15732 +
          (C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 + C390 * C396 +
           C15708 * C402) *
              C458 +
          (C386 * C460 + C379 * C562 + C388 * C462 + C380 * C563 + C390 * C464 +
           C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C123 +
          (C72 * C124 + C61 * C189 + C74 * C125 + C62 * C190 + C76 * C126 +
           C63 * C191 + C78 * C127 + C64 * C192 + C80 * C128 + C65 * C193) *
              C15407) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C2546 +
          (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
           C2498 * C126 + C15708 * C191) *
              C2490 +
          (C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
           C2498 * C393 + C15708 * C399) *
              C2547 +
          (C2494 * C459 + C15741 * C559 + C2496 * C461 + C15728 * C560 +
           C2498 * C463 + C15708 * C561) *
              C2491 +
          (C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
           C2498 * C396 + C15708 * C402) *
              C2548 +
          (C2494 * C460 + C15741 * C562 + C2496 * C462 + C15728 * C563 +
           C2498 * C464 + C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2856 * C81 + C15365 * C86) * C2890 +
          (C2856 * C124 + C15365 * C189) * C2850 +
          (C2856 * C391 + C15365 * C397) * C2891 +
          (C2856 * C459 + C15365 * C559) * C2851 +
          (C2856 * C394 + C15365 * C400) * C2892 +
          (C2856 * C460 + C15365 * C562) * C2852 +
          (C2856 * C2857 + C15365 * C2859) * C2893 +
          (C2856 * C2895 + C15365 * C2947) * C2853 +
          (C2856 * C2858 + C15365 * C2860) * C2894 +
          (C2856 * C2896 + C15365 * C2948) * C2854) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C123 +
           (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
            C2498 * C126 + C15708 * C191) *
               C15407) *
              C4674 +
          ((C2494 * C844 + C15741 * C850 + C2496 * C845 + C15728 * C851 +
            C2498 * C846 + C15708 * C852) *
               C123 +
           (C2494 * C906 + C15741 * C1009 + C2496 * C907 + C15728 * C1010 +
            C2498 * C908 + C15708 * C1011) *
               C15407) *
              C4675 +
          ((C2494 * C847 + C15741 * C853 + C2496 * C848 + C15728 * C854 +
            C2498 * C849 + C15708 * C855) *
               C123 +
           (C2494 * C909 + C15741 * C1012 + C2496 * C910 + C15728 * C1013 +
            C2498 * C911 + C15708 * C1014) *
               C15407) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C456 +
           (C2856 * C124 + C15365 * C189) * C15744 +
           (C2856 * C391 + C15365 * C397) * C457 +
           (C2856 * C459 + C15365 * C559) * C15732 +
           (C2856 * C394 + C15365 * C400) * C458 +
           (C2856 * C460 + C15365 * C562) * C15712) *
              C4674 +
          ((C2856 * C844 + C15365 * C850) * C456 +
           (C2856 * C906 + C15365 * C1009) * C15744 +
           (C2856 * C1995 + C15365 * C1998) * C457 +
           (C2856 * C2057 + C15365 * C2169) * C15732 +
           (C2856 * C3120 + C15365 * C3123) * C458 +
           (C2856 * C3172 + C15365 * C3260) * C15712) *
              C4675 +
          ((C2856 * C847 + C15365 * C853) * C456 +
           (C2856 * C909 + C15365 * C1012) * C15744 +
           (C2856 * C3119 + C15365 * C3122) * C457 +
           (C2856 * C3173 + C15365 * C3261) * C15732 +
           (C2856 * C3121 + C15365 * C3124) * C458 +
           (C2856 * C3174 + C15365 * C3262) * C15712) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
           C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
              C379 +
          (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
           C617 + C15732 * C608 + C605 * C395 + C618 + C618 + C15712 * C609) *
              C380 +
          (C603 * C83 + C619 + C619 + C15744 * C219 + C604 * C393 + C620 +
           C620 + C15732 * C610 + C605 * C396 + C621 + C621 + C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C216 * C81 + C223 + C223 + C15407 * C217) * C61 +
          (C216 * C82 + C224 + C224 + C15407 * C218) * C62 +
          (C216 * C83 + C225 + C225 + C15407 * C219) * C63 +
          (C216 * C84 + C226 + C226 + C15407 * C220) * C64 +
          (C216 * C85 + C227 + C227 + C15407 * C221) * C65) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15741 +
          (C2663 * C82 + C2670 + C2670 + C2490 * C218 + C2664 * C392 + C2671 +
           C2671 + C2491 * C608 + C2665 * C395 + C2672 + C2672 +
           C15712 * C609) *
              C15728 +
          (C2663 * C83 + C2673 + C2673 + C2490 * C219 + C2664 * C393 + C2674 +
           C2674 + C2491 * C610 + C2665 * C396 + C2675 + C2675 +
           C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C2971 * C81 + C2979 + C2979 + C2850 * C217 + C2972 * C391 + C2980 +
          C2980 + C2851 * C606 + C2973 * C394 + C2981 + C2981 + C2852 * C607 +
          C2974 * C2857 + C2982 + C2982 + C2853 * C2976 + C2975 * C2858 +
          C2983 + C2983 + C2854 * C2977) *
         C15365 * C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C15741 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C15728 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15708) *
              C4674 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15741 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15728 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15708) *
              C4675 +
          ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C15741 +
           (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C15728 +
           (C216 * C849 + C1065 + C1065 + C15407 * C1058) * C15708) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
           C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
              C15365 * C4674 +
          (C603 * C844 + C5193 + C5193 + C15744 * C1053 + C604 * C1995 + C5194 +
           C5194 + C15732 * C2222 + C605 * C3120 + C5195 + C5195 +
           C15712 * C3301) *
              C15365 * C4675 +
          (C603 * C847 + C5196 + C5196 + C15744 * C1056 + C604 * C3119 + C5197 +
           C5197 + C15732 * C3302 + C605 * C3121 + C5198 + C5198 +
           C15712 * C3303) *
              C15365 * C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C456 +
                     (C156 * C124 + C15418 * C249) * C15744 +
                     (C156 * C391 + C15418 * C509) * C457 +
                     (C156 * C459 + C15418 * C659) * C15732 +
                     (C156 * C394 + C15418 * C512) * C458 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C379 +
                    ((C156 * C82 + C15418 * C158) * C456 +
                     (C156 * C125 + C15418 * C250) * C15744 +
                     (C156 * C392 + C15418 * C510) * C457 +
                     (C156 * C461 + C15418 * C661) * C15732 +
                     (C156 * C395 + C15418 * C513) * C458 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C380 +
                    ((C156 * C83 + C15418 * C159) * C456 +
                     (C156 * C126 + C15418 * C251) * C15744 +
                     (C156 * C393 + C15418 * C511) * C457 +
                     (C156 * C463 + C15418 * C663) * C15732 +
                     (C156 * C396 + C15418 * C514) * C458 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C123 +
                     (C156 * C124 + C15418 * C249) * C15407) *
                        C61 +
                    ((C156 * C82 + C15418 * C158) * C123 +
                     (C156 * C125 + C15418 * C250) * C15407) *
                        C62 +
                    ((C156 * C83 + C15418 * C159) * C123 +
                     (C156 * C126 + C15418 * C251) * C15407) *
                        C63 +
                    ((C156 * C84 + C15418 * C160) * C123 +
                     (C156 * C127 + C15418 * C252) * C15407) *
                        C64 +
                    ((C156 * C85 + C15418 * C161) * C123 +
                     (C156 * C128 + C15418 * C253) * C15407) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2546 +
                     (C156 * C124 + C15418 * C249) * C2490 +
                     (C156 * C391 + C15418 * C509) * C2547 +
                     (C156 * C459 + C15418 * C659) * C2491 +
                     (C156 * C394 + C15418 * C512) * C2548 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C15741 +
                    ((C156 * C82 + C15418 * C158) * C2546 +
                     (C156 * C125 + C15418 * C250) * C2490 +
                     (C156 * C392 + C15418 * C510) * C2547 +
                     (C156 * C461 + C15418 * C661) * C2491 +
                     (C156 * C395 + C15418 * C513) * C2548 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C15728 +
                    ((C156 * C83 + C15418 * C159) * C2546 +
                     (C156 * C126 + C15418 * C251) * C2490 +
                     (C156 * C393 + C15418 * C511) * C2547 +
                     (C156 * C463 + C15418 * C663) * C2491 +
                     (C156 * C396 + C15418 * C514) * C2548 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C2890 +
                    (C156 * C124 + C15418 * C249) * C2850 +
                    (C156 * C391 + C15418 * C509) * C2891 +
                    (C156 * C459 + C15418 * C659) * C2851 +
                    (C156 * C394 + C15418 * C512) * C2892 +
                    (C156 * C460 + C15418 * C660) * C2852 +
                    (C156 * C2857 + C15418 * C2921) * C2893 +
                    (C156 * C2895 + C15418 * C3005) * C2853 +
                    (C156 * C2858 + C15418 * C2922) * C2894 +
                    (C156 * C2896 + C15418 * C3006) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                      C4761 * C847 + C15715 * C960) *
                         C123 +
                     (C4759 * C124 + C4674 * C249 + C4760 * C906 +
                      C4675 * C1103 + C4761 * C909 + C15715 * C1104) *
                         C15407) *
                        C15741 +
                    ((C4759 * C82 + C4674 * C158 + C4760 * C845 + C4675 * C961 +
                      C4761 * C848 + C15715 * C962) *
                         C123 +
                     (C4759 * C125 + C4674 * C250 + C4760 * C907 +
                      C4675 * C1105 + C4761 * C910 + C15715 * C1106) *
                         C15407) *
                        C15728 +
                    ((C4759 * C83 + C4674 * C159 + C4760 * C846 + C4675 * C963 +
                      C4761 * C849 + C15715 * C964) *
                         C123 +
                     (C4759 * C126 + C4674 * C251 + C4760 * C908 +
                      C4675 * C1107 + C4761 * C911 + C15715 * C1108) *
                         C15407) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4759 * C81 + C4674 * C157 + C4760 * C844 + C4675 * C959 +
                     C4761 * C847 + C15715 * C960) *
                        C456 +
                    (C4759 * C124 + C4674 * C249 + C4760 * C906 +
                     C4675 * C1103 + C4761 * C909 + C15715 * C1104) *
                        C15744 +
                    (C4759 * C391 + C4674 * C509 + C4760 * C1995 +
                     C4675 * C2113 + C4761 * C3119 + C15715 * C3216) *
                        C457 +
                    (C4759 * C459 + C4674 * C659 + C4760 * C2057 +
                     C4675 * C2281 + C4761 * C3173 + C15715 * C3348) *
                        C15732 +
                    (C4759 * C394 + C4674 * C512 + C4760 * C3120 +
                     C4675 * C3217 + C4761 * C3121 + C15715 * C3218) *
                        C458 +
                    (C4759 * C460 + C4674 * C660 + C4760 * C3172 +
                     C4675 * C3349 + C4761 * C3174 + C15715 * C3350) *
                        C15712) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
            C15708 * C88) *
               C156 +
           (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
            C390 * C159 + C15708 * C278) *
               C15418) *
              C15744 +
          ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
            C390 * C393 + C15708 * C399) *
               C156 +
           (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
            C390 * C511 + C15708 * C705) *
               C15418) *
              C15732 +
          ((C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 +
            C390 * C396 + C15708 * C402) *
               C156 +
           (C386 * C512 + C379 * C706 + C388 * C513 + C380 * C707 +
            C390 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C156 +
          (C72 * C157 + C61 * C276 + C74 * C158 + C62 * C277 + C76 * C159 +
           C63 * C278 + C78 * C160 + C64 * C279 + C80 * C161 + C65 * C280) *
              C15418) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C156 +
           (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
            C2498 * C159 + C15708 * C278) *
               C15418) *
              C2490 +
          ((C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
            C2498 * C393 + C15708 * C399) *
               C156 +
           (C2494 * C509 + C15741 * C703 + C2496 * C510 + C15728 * C704 +
            C2498 * C511 + C15708 * C705) *
               C15418) *
              C2491 +
          ((C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
            C2498 * C396 + C15708 * C402) *
               C156 +
           (C2494 * C512 + C15741 * C706 + C2496 * C513 + C15728 * C707 +
            C2498 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C156 +
           (C2856 * C157 + C15365 * C276) * C15418) *
              C2850 +
          ((C2856 * C391 + C15365 * C397) * C156 +
           (C2856 * C509 + C15365 * C703) * C15418) *
              C2851 +
          ((C2856 * C394 + C15365 * C400) * C156 +
           (C2856 * C512 + C15365 * C706) * C15418) *
              C2852 +
          ((C2856 * C2857 + C15365 * C2859) * C156 +
           (C2856 * C2921 + C15365 * C3029) * C15418) *
              C2853 +
          ((C2856 * C2858 + C15365 * C2860) * C156 +
           (C2856 * C2922 + C15365 * C3030) * C15418) *
              C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C4759 +
          (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
           C2498 * C159 + C15708 * C278) *
              C4674 +
          (C2494 * C844 + C15741 * C850 + C2496 * C845 + C15728 * C851 +
           C2498 * C846 + C15708 * C852) *
              C4760 +
          (C2494 * C959 + C15741 * C1147 + C2496 * C961 + C15728 * C1148 +
           C2498 * C963 + C15708 * C1149) *
              C4675 +
          (C2494 * C847 + C15741 * C853 + C2496 * C848 + C15728 * C854 +
           C2498 * C849 + C15708 * C855) *
              C4761 +
          (C2494 * C960 + C15741 * C1150 + C2496 * C962 + C15728 * C1151 +
           C2498 * C964 + C15708 * C1152) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C4759 +
           (C2856 * C157 + C15365 * C276) * C4674 +
           (C2856 * C844 + C15365 * C850) * C4760 +
           (C2856 * C959 + C15365 * C1147) * C4675 +
           (C2856 * C847 + C15365 * C853) * C4761 +
           (C2856 * C960 + C15365 * C1150) * C15715) *
              C15744 +
          ((C2856 * C391 + C15365 * C397) * C4759 +
           (C2856 * C509 + C15365 * C703) * C4674 +
           (C2856 * C1995 + C15365 * C1998) * C4760 +
           (C2856 * C2113 + C15365 * C2334) * C4675 +
           (C2856 * C3119 + C15365 * C3122) * C4761 +
           (C2856 * C3216 + C15365 * C3389) * C15715) *
              C15732 +
          ((C2856 * C394 + C15365 * C400) * C4759 +
           (C2856 * C512 + C15365 * C706) * C4674 +
           (C2856 * C3120 + C15365 * C3123) * C4760 +
           (C2856 * C3217 + C15365 * C3390) * C4675 +
           (C2856 * C3121 + C15365 * C3124) * C4761 +
           (C2856 * C3218 + C15365 * C3391) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C156 +
                     (C456 * C157 + C15744 * C303 + C457 * C509 +
                      C15732 * C747 + C458 * C512 + C15712 * C748) *
                         C15418) *
                        C379 +
                    ((C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C156 +
                     (C456 * C158 + C15744 * C304 + C457 * C510 +
                      C15732 * C749 + C458 * C513 + C15712 * C750) *
                         C15418) *
                        C380 +
                    ((C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                      C458 * C396 + C15712 * C464) *
                         C156 +
                     (C456 * C159 + C15744 * C305 + C457 * C511 +
                      C15732 * C751 + C458 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C156 +
                     (C123 * C157 + C15407 * C303) * C15418) *
                        C61 +
                    ((C123 * C82 + C15407 * C125) * C156 +
                     (C123 * C158 + C15407 * C304) * C15418) *
                        C62 +
                    ((C123 * C83 + C15407 * C126) * C156 +
                     (C123 * C159 + C15407 * C305) * C15418) *
                        C63 +
                    ((C123 * C84 + C15407 * C127) * C156 +
                     (C123 * C160 + C15407 * C306) * C15418) *
                        C64 +
                    ((C123 * C85 + C15407 * C128) * C156 +
                     (C123 * C161 + C15407 * C307) * C15418) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C156 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15418) *
                        C15741 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C156 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15418) *
                        C15728 +
                    ((C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                      C2548 * C396 + C15712 * C464) *
                         C156 +
                     (C2546 * C159 + C2490 * C305 + C2547 * C511 +
                      C2491 * C751 + C2548 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C156 +
                    (C2890 * C157 + C2850 * C303 + C2891 * C509 + C2851 * C747 +
                     C2892 * C512 + C2852 * C748 + C2893 * C2921 +
                     C2853 * C3053 + C2894 * C2922 + C2854 * C3054) *
                        C15418) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C4759 +
                     (C123 * C157 + C15407 * C303) * C4674 +
                     (C123 * C844 + C15407 * C906) * C4760 +
                     (C123 * C959 + C15407 * C1191) * C4675 +
                     (C123 * C847 + C15407 * C909) * C4761 +
                     (C123 * C960 + C15407 * C1192) * C15715) *
                        C15741 +
                    ((C123 * C82 + C15407 * C125) * C4759 +
                     (C123 * C158 + C15407 * C304) * C4674 +
                     (C123 * C845 + C15407 * C907) * C4760 +
                     (C123 * C961 + C15407 * C1193) * C4675 +
                     (C123 * C848 + C15407 * C910) * C4761 +
                     (C123 * C962 + C15407 * C1194) * C15715) *
                        C15728 +
                    ((C123 * C83 + C15407 * C126) * C4759 +
                     (C123 * C159 + C15407 * C305) * C4674 +
                     (C123 * C846 + C15407 * C908) * C4760 +
                     (C123 * C963 + C15407 * C1195) * C4675 +
                     (C123 * C849 + C15407 * C911) * C4761 +
                     (C123 * C964 + C15407 * C1196) * C15715) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                     C458 * C394 + C15712 * C460) *
                        C4759 +
                    (C456 * C157 + C15744 * C303 + C457 * C509 + C15732 * C747 +
                     C458 * C512 + C15712 * C748) *
                        C4674 +
                    (C456 * C844 + C15744 * C906 + C457 * C1995 +
                     C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                        C4760 +
                    (C456 * C959 + C15744 * C1191 + C457 * C2113 +
                     C15732 * C2387 + C458 * C3217 + C15712 * C3430) *
                        C4675 +
                    (C456 * C847 + C15744 * C909 + C457 * C3119 +
                     C15732 * C3173 + C458 * C3121 + C15712 * C3174) *
                        C4761 +
                    (C456 * C960 + C15744 * C1192 + C457 * C3216 +
                     C15732 * C3431 + C458 * C3218 + C15712 * C3432) *
                        C15715) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C15744 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C15732 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C379 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C15744 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C15732 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C380 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C15744 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C15732 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C15407 * C61 +
                    (C330 * C82 + C338 + C338 + C15418 * C332) * C15407 * C62 +
                    (C330 * C83 + C339 + C339 + C15418 * C333) * C15407 * C63 +
                    (C330 * C84 + C340 + C340 + C15418 * C334) * C15407 * C64 +
                    (C330 * C85 + C341 + C341 + C15418 * C335) * C15407 * C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C2490 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C2491 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C15741 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C2490 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C2491 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C15728 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C2490 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C2491 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C2850 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C2851 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C2852 +
                    (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C2853 +
                    (C330 * C2858 + C3081 + C3081 + C15418 * C3078) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4990 * C81 + C4994 + C4994 + C4674 * C331 + C4991 * C844 +
                     C4995 + C4995 + C4675 * C1238 + C4992 * C847 + C4996 +
                     C4996 + C15715 * C1239) *
                        C15407 * C15741 +
                    (C4990 * C82 + C4997 + C4997 + C4674 * C332 + C4991 * C845 +
                     C4998 + C4998 + C4675 * C1240 + C4992 * C848 + C4999 +
                     C4999 + C15715 * C1241) *
                        C15407 * C15728 +
                    (C4990 * C83 + C5000 + C5000 + C4674 * C333 + C4991 * C846 +
                     C5001 + C5001 + C4675 * C1242 + C4992 * C849 + C5002 +
                     C5002 + C15715 * C1243) *
                        C15407 * C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C4990 * C81 + C4994 + C4994 + C4674 * C331 + C4991 * C844 +
                     C4995 + C4995 + C4675 * C1238 + C4992 * C847 + C4996 +
                     C4996 + C15715 * C1239) *
                        C15744 +
                    (C4990 * C391 + C5351 + C5351 + C4674 * C791 +
                     C4991 * C1995 + C5352 + C5352 + C4675 * C2440 +
                     C4992 * C3119 + C5353 + C5353 + C15715 * C3471) *
                        C15732 +
                    (C4990 * C394 + C5354 + C5354 + C4674 * C792 +
                     C4991 * C3120 + C5355 + C5355 + C4675 * C3472 +
                     C4992 * C3121 + C5356 + C5356 + C15715 * C3473) *
                        C15712) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C14003 * C81 + C7946 + C7946 + C15370 * C91 + C13996 * C82 + C7947 +
            C7947 + C15378 * C92 + C7943 * C83 + C7948 + C7948 + C7935 * C93) *
               C9223 +
           (C14003 * C844 + C8324 + C8324 + C15370 * C856 + C13996 * C845 +
            C8325 + C8325 + C15378 * C857 + C7943 * C846 + C8326 + C8326 +
            C7935 * C858) *
               C15505) *
              C15686 +
          ((C14003 * C391 + C7949 + C7949 + C15370 * C403 + C13996 * C392 +
            C7950 + C7950 + C15378 * C404 + C7943 * C393 + C7951 + C7951 +
            C7935 * C405) *
               C9223 +
           (C14003 * C1995 + C8327 + C8327 + C15370 * C2001 + C13996 * C1996 +
            C8328 + C8328 + C15378 * C2002 + C7943 * C1997 + C8329 + C8329 +
            C7935 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C14000 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) *
               C15370 +
           (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C13989 +
           (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) *
               C15378 +
           (C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) *
               C14018 +
           (C1346 * C88 + C15686 * C131 + C1347 * C399 + C15465 * C469) *
               C7935) *
              C9223 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C14000 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C15370 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C13989 +
           (C1346 * C851 + C15686 * C913 + C1347 * C1999 + C15465 * C2061) *
               C15378 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C14018 +
           (C1346 * C852 + C15686 * C914 + C1347 * C2000 + C15465 * C2062) *
               C7935) *
              C15505) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) *
               C14000 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) *
               C15370 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) *
               C13989 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15378 +
           (C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) *
               C14018 +
           (C9297 * C88 + C9223 * C164 + C9298 * C852 + C15505 * C969) *
               C7935) *
              C15686 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C14000 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C15370 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C13989 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15378 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C14018 +
           (C9297 * C399 + C9223 * C517 + C9298 * C2000 + C15505 * C2118) *
               C7935) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14000 * C81 + C15370 * C86 + C13989 * C82 +
                      C15378 * C87 + C14018 * C83 + C7935 * C88) *
                         C1346 +
                     (C14000 * C124 + C15370 * C189 + C13989 * C125 +
                      C15378 * C190 + C14018 * C126 + C7935 * C191) *
                         C15686 +
                     (C14000 * C391 + C15370 * C397 + C13989 * C392 +
                      C15378 * C398 + C14018 * C393 + C7935 * C399) *
                         C1347 +
                     (C14000 * C459 + C15370 * C559 + C13989 * C461 +
                      C15378 * C560 + C14018 * C463 + C7935 * C561) *
                         C15465) *
                        C9223 +
                    ((C14000 * C844 + C15370 * C850 + C13989 * C845 +
                      C15378 * C851 + C14018 * C846 + C7935 * C852) *
                         C1346 +
                     (C14000 * C906 + C15370 * C1009 + C13989 * C907 +
                      C15378 * C1010 + C14018 * C908 + C7935 * C1011) *
                         C15686 +
                     (C14000 * C1995 + C15370 * C1998 + C13989 * C1996 +
                      C15378 * C1999 + C14018 * C1997 + C7935 * C2000) *
                         C1347 +
                     (C14000 * C2057 + C15370 * C2169 + C13989 * C2058 +
                      C15378 * C2170 + C14018 * C2059 + C7935 * C2171) *
                         C15465) *
                        C15505) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C1455 * C81 + C1459 + C1459 + C15686 * C217 +
                      C1456 * C391 + C1460 + C1460 + C15465 * C606) *
                         C15370 +
                     (C1455 * C82 + C1461 + C1461 + C15686 * C218 +
                      C1456 * C392 + C1462 + C1462 + C15465 * C608) *
                         C15378 +
                     (C1455 * C83 + C1463 + C1463 + C15686 * C219 +
                      C1456 * C393 + C1464 + C1464 + C15465 * C610) *
                         C7935) *
                        C9223 +
                    ((C1455 * C844 + C2226 + C2226 + C15686 * C1053 +
                      C1456 * C1995 + C2227 + C2227 + C15465 * C2222) *
                         C15370 +
                     (C1455 * C845 + C2228 + C2228 + C15686 * C1054 +
                      C1456 * C1996 + C2229 + C2229 + C15465 * C2223) *
                         C15378 +
                     (C1455 * C846 + C2230 + C2230 + C15686 * C1055 +
                      C1456 * C1997 + C2231 + C2231 + C15465 * C2224) *
                         C7935) *
                        C15505) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C1346 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15686 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C1347 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15465) *
              C15370 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C1346 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15686 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C1347 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15465) *
              C15378 +
          ((C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C1346 +
           (C9297 * C126 + C9223 * C251 + C9298 * C908 + C15505 * C1107) *
               C15686 +
           (C9297 * C393 + C9223 * C511 + C9298 * C1997 + C15505 * C2115) *
               C1347 +
           (C9297 * C463 + C9223 * C663 + C9298 * C2059 + C15505 * C2283) *
               C15465) *
              C7935) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14000 * C81 + C15370 * C86 + C13989 * C82 +
                      C15378 * C87 + C14018 * C83 + C7935 * C88) *
                         C9297 +
                     (C14000 * C157 + C15370 * C276 + C13989 * C158 +
                      C15378 * C277 + C14018 * C159 + C7935 * C278) *
                         C9223 +
                     (C14000 * C844 + C15370 * C850 + C13989 * C845 +
                      C15378 * C851 + C14018 * C846 + C7935 * C852) *
                         C9298 +
                     (C14000 * C959 + C15370 * C1147 + C13989 * C961 +
                      C15378 * C1148 + C14018 * C963 + C7935 * C1149) *
                         C15505) *
                        C15686 +
                    ((C14000 * C391 + C15370 * C397 + C13989 * C392 +
                      C15378 * C398 + C14018 * C393 + C7935 * C399) *
                         C9297 +
                     (C14000 * C509 + C15370 * C703 + C13989 * C510 +
                      C15378 * C704 + C14018 * C511 + C7935 * C705) *
                         C9223 +
                     (C14000 * C1995 + C15370 * C1998 + C13989 * C1996 +
                      C15378 * C1999 + C14018 * C1997 + C7935 * C2000) *
                         C9298 +
                     (C14000 * C2113 + C15370 * C2334 + C13989 * C2114 +
                      C15378 * C2335 + C14018 * C2115 + C7935 * C2336) *
                         C15505) *
                        C15465) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C9297 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C9223 +
           (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C9298 +
           (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
               C15505) *
              C15370 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C9297 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C9223 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C9298 +
           (C1346 * C961 + C15686 * C1193 + C1347 * C2114 + C15465 * C2388) *
               C15505) *
              C15378 +
          ((C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) *
               C9297 +
           (C1346 * C159 + C15686 * C305 + C1347 * C511 + C15465 * C751) *
               C9223 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C9298 +
           (C1346 * C963 + C15686 * C1195 + C1347 * C2115 + C15465 * C2389) *
               C15505) *
              C7935) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C9503 * C81 + C9506 + C9506 + C9223 * C331 +
                      C9504 * C844 + C9507 + C9507 + C15505 * C1238) *
                         C15686 +
                     (C9503 * C391 + C9967 + C9967 + C9223 * C791 +
                      C9504 * C1995 + C9968 + C9968 + C15505 * C2440) *
                         C15465) *
                        C15370 +
                    ((C9503 * C82 + C9508 + C9508 + C9223 * C332 +
                      C9504 * C845 + C9509 + C9509 + C15505 * C1240) *
                         C15686 +
                     (C9503 * C392 + C9971 + C9971 + C9223 * C793 +
                      C9504 * C1996 + C9972 + C9972 + C15505 * C2441) *
                         C15465) *
                        C15378 +
                    ((C9503 * C83 + C9510 + C9510 + C9223 * C333 +
                      C9504 * C846 + C9511 + C9511 + C15505 * C1242) *
                         C15686 +
                     (C9503 * C393 + C10753 + C10753 + C9223 * C795 +
                      C9504 * C1997 + C10754 + C10754 + C15505 * C2442) *
                         C15465) *
                        C7935) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 +
                      C7132 + C7132 + C15375 * C92) *
                         C15501 +
                     (C7126 * C844 + C7477 + C7477 + C7120 * C856 +
                      C7128 * C845 + C7478 + C7478 + C15375 * C857) *
                         C15508 +
                     (C7126 * C847 + C7479 + C7479 + C7120 * C859 +
                      C7128 * C848 + C7480 + C7480 + C15375 * C860) *
                         C10794) *
                        C15686 +
                    ((C7126 * C391 + C7133 + C7133 + C7120 * C403 +
                      C7128 * C392 + C7134 + C7134 + C15375 * C404) *
                         C15501 +
                     (C7126 * C1995 + C7481 + C7481 + C7120 * C2001 +
                      C7128 * C1996 + C7482 + C7482 + C15375 * C2002) *
                         C15508 +
                     (C7126 * C3119 + C7483 + C7483 + C7120 * C3125 +
                      C7128 * C5654 + C7484 + C7484 + C15375 * C5656) *
                         C10794) *
                        C15465) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C7127 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) *
               C7120 +
           (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C7129 +
           (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) *
               C15375) *
              C15501 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C7127 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C7120 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C7129 +
           (C1346 * C851 + C15686 * C913 + C1347 * C1999 + C15465 * C2061) *
               C15375) *
              C15508 +
          ((C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
               C7127 +
           (C1346 * C853 + C15686 * C915 + C1347 * C3122 + C15465 * C3176) *
               C7120 +
           (C1346 * C848 + C15686 * C910 + C1347 * C5654 + C15465 * C5711) *
               C7129 +
           (C1346 * C854 + C15686 * C916 + C1347 * C5655 + C15465 * C5712) *
               C15375) *
              C10794) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                      C15508 * C959 + C14381 * C847 + C10794 * C960) *
                         C7127 +
                     (C14373 * C86 + C15501 * C162 + C14370 * C850 +
                      C15508 * C965 + C14381 * C853 + C10794 * C966) *
                         C7120 +
                     (C14373 * C82 + C15501 * C158 + C14370 * C845 +
                      C15508 * C961 + C14381 * C848 + C10794 * C962) *
                         C7129 +
                     (C14373 * C87 + C15501 * C163 + C14370 * C851 +
                      C15508 * C967 + C14381 * C854 + C10794 * C968) *
                         C15375) *
                        C15686 +
                    ((C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                      C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                         C7127 +
                     (C14373 * C397 + C15501 * C515 + C14370 * C1998 +
                      C15508 * C2116 + C14381 * C3122 + C10794 * C3219) *
                         C7120 +
                     (C14373 * C392 + C15501 * C510 + C14370 * C1996 +
                      C15508 * C2114 + C14381 * C5654 + C10794 * C5763) *
                         C7129 +
                     (C14373 * C398 + C15501 * C516 + C14370 * C1999 +
                      C15508 * C2117 + C14381 * C5655 + C10794 * C5764) *
                         C15375) *
                        C15465) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C1346 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C15686 +
           (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C1347 +
           (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
               C15465) *
              C15501 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C1346 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C15686 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C1347 +
           (C7127 * C2057 + C7120 * C2169 + C7129 * C2058 + C15375 * C2170) *
               C15465) *
              C15508 +
          ((C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) *
               C1346 +
           (C7127 * C909 + C7120 * C1012 + C7129 * C910 + C15375 * C1013) *
               C15686 +
           (C7127 * C3119 + C7120 * C3122 + C7129 * C5654 + C15375 * C5655) *
               C1347 +
           (C7127 * C3173 + C7120 * C3261 + C7129 * C5711 + C15375 * C5815) *
               C15465) *
              C10794) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C1455 * C81 + C1459 + C1459 + C15686 * C217 +
                      C1456 * C391 + C1460 + C1460 + C15465 * C606) *
                         C7120 +
                     (C1455 * C82 + C1461 + C1461 + C15686 * C218 +
                      C1456 * C392 + C1462 + C1462 + C15465 * C608) *
                         C15375) *
                        C15501 +
                    ((C1455 * C844 + C2226 + C2226 + C15686 * C1053 +
                      C1456 * C1995 + C2227 + C2227 + C15465 * C2222) *
                         C7120 +
                     (C1455 * C845 + C2228 + C2228 + C15686 * C1054 +
                      C1456 * C1996 + C2229 + C2229 + C15465 * C2223) *
                         C15375) *
                        C15508 +
                    ((C1455 * C847 + C5868 + C5868 + C15686 * C1056 +
                      C1456 * C3119 + C5869 + C5869 + C15465 * C3302) *
                         C7120 +
                     (C1455 * C848 + C5870 + C5870 + C15686 * C1057 +
                      C1456 * C5654 + C5871 + C5871 + C15465 * C5866) *
                         C15375) *
                        C10794) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                      C15508 * C959 + C14381 * C847 + C10794 * C960) *
                         C1346 +
                     (C14373 * C124 + C15501 * C249 + C14370 * C906 +
                      C15508 * C1103 + C14381 * C909 + C10794 * C1104) *
                         C15686 +
                     (C14373 * C391 + C15501 * C509 + C14370 * C1995 +
                      C15508 * C2113 + C14381 * C3119 + C10794 * C3216) *
                         C1347 +
                     (C14373 * C459 + C15501 * C659 + C14370 * C2057 +
                      C15508 * C2281 + C14381 * C3173 + C10794 * C3348) *
                         C15465) *
                        C7120 +
                    ((C14373 * C82 + C15501 * C158 + C14370 * C845 +
                      C15508 * C961 + C14381 * C848 + C10794 * C962) *
                         C1346 +
                     (C14373 * C125 + C15501 * C250 + C14370 * C907 +
                      C15508 * C1105 + C14381 * C910 + C10794 * C1106) *
                         C15686 +
                     (C14373 * C392 + C15501 * C510 + C14370 * C1996 +
                      C15508 * C2114 + C14381 * C5654 + C10794 * C5763) *
                         C1347 +
                     (C14373 * C461 + C15501 * C661 + C14370 * C2058 +
                      C15508 * C2282 + C14381 * C5711 + C10794 * C5921) *
                         C15465) *
                        C15375) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C14373 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C15501 +
           (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C14370 +
           (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
               C15508 +
           (C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) *
               C14381 +
           (C7127 * C960 + C7120 * C1150 + C7129 * C962 + C15375 * C1151) *
               C10794) *
              C15686 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C14373 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C15501 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C14370 +
           (C7127 * C2113 + C7120 * C2334 + C7129 * C2114 + C15375 * C2335) *
               C15508 +
           (C7127 * C3119 + C7120 * C3122 + C7129 * C5654 + C15375 * C5655) *
               C14381 +
           (C7127 * C3216 + C7120 * C3389 + C7129 * C5763 + C15375 * C5972) *
               C10794) *
              C15465) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C14373 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C15501 +
           (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C14370 +
           (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
               C15508 +
           (C1346 * C847 + C15686 * C909 + C1347 * C3119 + C15465 * C3173) *
               C14381 +
           (C1346 * C960 + C15686 * C1192 + C1347 * C3216 + C15465 * C3431) *
               C10794) *
              C7120 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C14373 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C15501 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C14370 +
           (C1346 * C961 + C15686 * C1193 + C1347 * C2114 + C15465 * C2388) *
               C15508 +
           (C1346 * C848 + C15686 * C910 + C1347 * C5654 + C15465 * C5711) *
               C14381 +
           (C1346 * C962 + C15686 * C1194 + C1347 * C5763 + C15465 * C6023) *
               C10794) *
              C15375) *
         C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14425 * C81 + C11109 + C11109 + C15501 * C331 +
                      C14418 * C844 + C11110 + C11110 + C15508 * C1238 +
                      C11107 * C847 + C11111 + C11111 + C10794 * C1239) *
                         C15686 +
                     (C14425 * C391 + C11568 + C11568 + C15501 * C791 +
                      C14418 * C1995 + C11569 + C11569 + C15508 * C2440 +
                      C11107 * C3119 + C11570 + C11570 + C10794 * C3471) *
                         C15465) *
                        C7120 +
                    ((C14425 * C82 + C11112 + C11112 + C15501 * C332 +
                      C14418 * C845 + C11113 + C11113 + C15508 * C1240 +
                      C11107 * C848 + C11114 + C11114 + C10794 * C1241) *
                         C15686 +
                     (C14425 * C392 + C11571 + C11571 + C15501 * C793 +
                      C14418 * C1996 + C11572 + C11572 + C15508 * C2441 +
                      C11107 * C5654 + C11573 + C11573 + C10794 * C6074) *
                         C15465) *
                        C15375) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
            C7132 + C15375 * C92) *
               C9223 +
           (C7126 * C844 + C7477 + C7477 + C7120 * C856 + C7128 * C845 + C7478 +
            C7478 + C15375 * C857) *
               C15505) *
              C15744 +
          ((C7126 * C391 + C7133 + C7133 + C7120 * C403 + C7128 * C392 + C7134 +
            C7134 + C15375 * C404) *
               C9223 +
           (C7126 * C1995 + C7481 + C7481 + C7120 * C2001 + C7128 * C1996 +
            C7482 + C7482 + C15375 * C2002) *
               C15505) *
              C15732 +
          ((C7126 * C394 + C7135 + C7135 + C7120 * C406 + C7128 * C395 + C7136 +
            C7136 + C15375 * C407) *
               C9223 +
           (C7126 * C3120 + C8782 + C8782 + C7120 * C3126 + C7128 * C3884 +
            C8783 + C8783 + C15375 * C3886) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6786 * C81 + C6795 + C6795 + C15750 * C91 + C6788 * C82 + C6796 +
           C6796 + C15743 * C92 + C6790 * C83 + C6797 + C6797 + C15730 * C93 +
           C6792 * C84 + C6798 + C6798 + C15685 * C94) *
              C9223 +
          (C6786 * C844 + C9226 + C9226 + C15750 * C856 + C6788 * C845 + C9227 +
           C9227 + C15743 * C857 + C6790 * C846 + C9228 + C9228 +
           C15730 * C858 + C6792 * C1643 + C9229 + C9229 + C15685 * C1645) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
           C7132 + C15375 * C92) *
              C15752 +
          (C7126 * C844 + C7477 + C7477 + C7120 * C856 + C7128 * C845 + C7478 +
           C7478 + C15375 * C857) *
              C15749 +
          (C7126 * C847 + C7479 + C7479 + C7120 * C859 + C7128 * C848 + C7480 +
           C7480 + C15375 * C860) *
              C15740 +
          (C7126 * C5383 + C10013 + C10013 + C7120 * C5387 + C7128 * C6116 +
           C10014 + C10014 + C15375 * C6118) *
              C15701) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C7127 +
                     (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                      C458 * C400 + C15712 * C466) *
                         C7120 +
                     (C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C7129 +
                     (C456 * C87 + C15744 * C130 + C457 * C398 + C15732 * C467 +
                      C458 * C401 + C15712 * C468) *
                         C15375) *
                        C9223 +
                    ((C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C7127 +
                     (C456 * C850 + C15744 * C912 + C457 * C1998 +
                      C15732 * C2060 + C458 * C3123 + C15712 * C3175) *
                         C7120 +
                     (C456 * C845 + C15744 * C907 + C457 * C1996 +
                      C15732 * C2058 + C458 * C3884 + C15712 * C3943) *
                         C7129 +
                     (C456 * C851 + C15744 * C913 + C457 * C1999 +
                      C15732 * C2061 + C458 * C3885 + C15712 * C3944) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C6787 +
                     (C123 * C86 + C15407 * C129) * C15750 +
                     (C123 * C82 + C15407 * C125) * C6789 +
                     (C123 * C87 + C15407 * C130) * C15743 +
                     (C123 * C83 + C15407 * C126) * C6791 +
                     (C123 * C88 + C15407 * C131) * C15730 +
                     (C123 * C84 + C15407 * C127) * C6793 +
                     (C123 * C89 + C15407 * C132) * C15685) *
                        C9223 +
                    ((C123 * C844 + C15407 * C906) * C6787 +
                     (C123 * C850 + C15407 * C912) * C15750 +
                     (C123 * C845 + C15407 * C907) * C6789 +
                     (C123 * C851 + C15407 * C913) * C15743 +
                     (C123 * C846 + C15407 * C908) * C6791 +
                     (C123 * C852 + C15407 * C914) * C15730 +
                     (C123 * C1643 + C15407 * C1684) * C6793 +
                     (C123 * C1644 + C15407 * C1685) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C7127 +
                     (C123 * C86 + C15407 * C129) * C7120 +
                     (C123 * C82 + C15407 * C125) * C7129 +
                     (C123 * C87 + C15407 * C130) * C15375) *
                        C15752 +
                    ((C123 * C844 + C15407 * C906) * C7127 +
                     (C123 * C850 + C15407 * C912) * C7120 +
                     (C123 * C845 + C15407 * C907) * C7129 +
                     (C123 * C851 + C15407 * C913) * C15375) *
                        C15749 +
                    ((C123 * C847 + C15407 * C909) * C7127 +
                     (C123 * C853 + C15407 * C915) * C7120 +
                     (C123 * C848 + C15407 * C910) * C7129 +
                     (C123 * C854 + C15407 * C916) * C15375) *
                        C15740 +
                    ((C123 * C5383 + C15407 * C5413) * C7127 +
                     (C123 * C5385 + C15407 * C5415) * C7120 +
                     (C123 * C6116 + C15407 * C6155) * C7129 +
                     (C123 * C6117 + C15407 * C6156) * C15375) *
                        C15701) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C7127 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) * C7120 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C7129 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15375) *
              C15744 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C7127 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C7120 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C7129 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15375) *
              C15732 +
          ((C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C7127 +
           (C9297 * C400 + C9223 * C518 + C9298 * C3123 + C15505 * C3220) *
               C7120 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C7129 +
           (C9297 * C401 + C9223 * C519 + C9298 * C3885 + C15505 * C3996) *
               C15375) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C6787 +
          (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) * C15750 +
          (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C6789 +
          (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) * C15743 +
          (C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C6791 +
          (C9297 * C88 + C9223 * C164 + C9298 * C852 + C15505 * C969) * C15730 +
          (C9297 * C84 + C9223 * C160 + C9298 * C1643 + C15505 * C1722) *
              C6793 +
          (C9297 * C89 + C9223 * C165 + C9298 * C1644 + C15505 * C1723) *
              C15685) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C10082 * C81 + C15752 * C157 + C10083 * C844 + C15749 * C959 +
           C10084 * C847 + C15740 * C960 + C10085 * C5383 + C15701 * C5444) *
              C7127 +
          (C10082 * C86 + C15752 * C162 + C10083 * C850 + C15749 * C965 +
           C10084 * C853 + C15740 * C966 + C10085 * C5385 + C15701 * C5446) *
              C7120 +
          (C10082 * C82 + C15752 * C158 + C10083 * C845 + C15749 * C961 +
           C10084 * C848 + C15740 * C962 + C10085 * C6116 + C15701 * C6195) *
              C7129 +
          (C10082 * C87 + C15752 * C163 + C10083 * C851 + C15749 * C967 +
           C10084 * C854 + C15740 * C968 + C10085 * C6117 + C15701 * C6196) *
              C15375) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C456 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C15744 +
           (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C457 +
           (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
               C15732 +
           (C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C458 +
           (C7127 * C460 + C7120 * C562 + C7129 * C462 + C15375 * C563) *
               C15712) *
              C9223 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) * C456 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C15744 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C457 +
           (C7127 * C2057 + C7120 * C2169 + C7129 * C2058 + C15375 * C2170) *
               C15732 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C458 +
           (C7127 * C3172 + C7120 * C3260 + C7129 * C3943 + C15375 * C4047) *
               C15712) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
            C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
               C123 +
           (C6787 * C124 + C15750 * C189 + C6789 * C125 + C15743 * C190 +
            C6791 * C126 + C15730 * C191 + C6793 * C127 + C15685 * C192) *
               C15407) *
              C9223 +
          ((C6787 * C844 + C15750 * C850 + C6789 * C845 + C15743 * C851 +
            C6791 * C846 + C15730 * C852 + C6793 * C1643 + C15685 * C1644) *
               C123 +
           (C6787 * C906 + C15750 * C1009 + C6789 * C907 + C15743 * C1010 +
            C6791 * C908 + C15730 * C1011 + C6793 * C1684 + C15685 * C1758) *
               C15407) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C123 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C15407) *
              C15752 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) * C123 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C15407) *
              C15749 +
          ((C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) * C123 +
           (C7127 * C909 + C7120 * C1012 + C7129 * C910 + C15375 * C1013) *
               C15407) *
              C15740 +
          ((C7127 * C5383 + C7120 * C5385 + C7129 * C6116 + C15375 * C6117) *
               C123 +
           (C7127 * C5413 + C7120 * C5470 + C7129 * C6155 + C15375 * C6231) *
               C15407) *
              C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
            C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
               C7120 +
           (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
            C617 + C15732 * C608 + C605 * C395 + C618 + C618 + C15712 * C609) *
               C15375) *
              C9223 +
          ((C603 * C844 + C5193 + C5193 + C15744 * C1053 + C604 * C1995 +
            C5194 + C5194 + C15732 * C2222 + C605 * C3120 + C5195 + C5195 +
            C15712 * C3301) *
               C7120 +
           (C603 * C845 + C9764 + C9764 + C15744 * C1054 + C604 * C1996 +
            C9765 + C9765 + C15732 * C2223 + C605 * C3884 + C9766 + C9766 +
            C15712 * C4098) *
               C15375) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C15750 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C15743 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15730 +
           (C216 * C84 + C226 + C226 + C15407 * C220) * C15685) *
              C9223 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15750 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15743 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15730 +
           (C216 * C1643 + C1795 + C1795 + C15407 * C1793) * C15685) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C7120 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C15375) *
              C15752 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C7120 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15375) *
              C15749 +
          ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C7120 +
           (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C15375) *
              C15740 +
          ((C216 * C5383 + C5497 + C5497 + C15407 * C5494) * C7120 +
           (C216 * C6116 + C6268 + C6268 + C15407 * C6266) * C15375) *
              C15701) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C456 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15744 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C457 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15732 +
           (C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C458 +
           (C9297 * C460 + C9223 * C660 + C9298 * C3172 + C15505 * C3349) *
               C15712) *
              C7120 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C456 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15744 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C457 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15732 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C458 +
           (C9297 * C462 + C9223 * C662 + C9298 * C3943 + C15505 * C4152) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C123 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15407) *
              C15750 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C123 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15407) *
              C15743 +
          ((C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C123 +
           (C9297 * C126 + C9223 * C251 + C9298 * C908 + C15505 * C1107) *
               C15407) *
              C15730 +
          ((C9297 * C84 + C9223 * C160 + C9298 * C1643 + C15505 * C1722) *
               C123 +
           (C9297 * C127 + C9223 * C252 + C9298 * C1684 + C15505 * C1829) *
               C15407) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C10082 * C81 + C15752 * C157 + C10083 * C844 + C15749 * C959 +
            C10084 * C847 + C15740 * C960 + C10085 * C5383 + C15701 * C5444) *
               C123 +
           (C10082 * C124 + C15752 * C249 + C10083 * C906 + C15749 * C1103 +
            C10084 * C909 + C15740 * C1104 + C10085 * C5413 + C15701 * C5520) *
               C15407) *
              C7120 +
          ((C10082 * C82 + C15752 * C158 + C10083 * C845 + C15749 * C961 +
            C10084 * C848 + C15740 * C962 + C10085 * C6116 + C15701 * C6195) *
               C123 +
           (C10082 * C125 + C15752 * C250 + C10083 * C907 + C15749 * C1105 +
            C10084 * C910 + C15740 * C1106 + C10085 * C6155 + C15701 * C6302) *
               C15407) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C9297 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C9223 +
           (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C9298 +
           (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
               C15505) *
              C15744 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C9297 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C9223 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C9298 +
           (C7127 * C2113 + C7120 * C2334 + C7129 * C2114 + C15375 * C2335) *
               C15505) *
              C15732 +
          ((C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) *
               C9297 +
           (C7127 * C512 + C7120 * C706 + C7129 * C513 + C15375 * C707) *
               C9223 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C9298 +
           (C7127 * C3217 + C7120 * C3390 + C7129 * C3995 + C15375 * C4203) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
           C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
              C9297 +
          (C6787 * C157 + C15750 * C276 + C6789 * C158 + C15743 * C277 +
           C6791 * C159 + C15730 * C278 + C6793 * C160 + C15685 * C279) *
              C9223 +
          (C6787 * C844 + C15750 * C850 + C6789 * C845 + C15743 * C851 +
           C6791 * C846 + C15730 * C852 + C6793 * C1643 + C15685 * C1644) *
              C9298 +
          (C6787 * C959 + C15750 * C1147 + C6789 * C961 + C15743 * C1148 +
           C6791 * C963 + C15730 * C1149 + C6793 * C1722 + C15685 * C1864) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C10082 +
          (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
              C15752 +
          (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
              C10083 +
          (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
              C15749 +
          (C7127 * C847 + C7120 * C853 + C7129 * C848 + C15375 * C854) *
              C10084 +
          (C7127 * C960 + C7120 * C1150 + C7129 * C962 + C15375 * C1151) *
              C15740 +
          (C7127 * C5383 + C7120 * C5385 + C7129 * C6116 + C15375 * C6117) *
              C10085 +
          (C7127 * C5444 + C7120 * C5544 + C7129 * C6195 + C15375 * C6337) *
              C15701) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C9297 +
                     (C456 * C157 + C15744 * C303 + C457 * C509 +
                      C15732 * C747 + C458 * C512 + C15712 * C748) *
                         C9223 +
                     (C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C9298 +
                     (C456 * C959 + C15744 * C1191 + C457 * C2113 +
                      C15732 * C2387 + C458 * C3217 + C15712 * C3430) *
                         C15505) *
                        C7120 +
                    ((C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C9297 +
                     (C456 * C158 + C15744 * C304 + C457 * C510 +
                      C15732 * C749 + C458 * C513 + C15712 * C750) *
                         C9223 +
                     (C456 * C845 + C15744 * C907 + C457 * C1996 +
                      C15732 * C2058 + C458 * C3884 + C15712 * C3943) *
                         C9298 +
                     (C456 * C961 + C15744 * C1193 + C457 * C2114 +
                      C15732 * C2388 + C458 * C3995 + C15712 * C4254) *
                         C15505) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C9297 +
                     (C123 * C157 + C15407 * C303) * C9223 +
                     (C123 * C844 + C15407 * C906) * C9298 +
                     (C123 * C959 + C15407 * C1191) * C15505) *
                        C15750 +
                    ((C123 * C82 + C15407 * C125) * C9297 +
                     (C123 * C158 + C15407 * C304) * C9223 +
                     (C123 * C845 + C15407 * C907) * C9298 +
                     (C123 * C961 + C15407 * C1193) * C15505) *
                        C15743 +
                    ((C123 * C83 + C15407 * C126) * C9297 +
                     (C123 * C159 + C15407 * C305) * C9223 +
                     (C123 * C846 + C15407 * C908) * C9298 +
                     (C123 * C963 + C15407 * C1195) * C15505) *
                        C15730 +
                    ((C123 * C84 + C15407 * C127) * C9297 +
                     (C123 * C160 + C15407 * C306) * C9223 +
                     (C123 * C1643 + C15407 * C1684) * C9298 +
                     (C123 * C1722 + C15407 * C1899) * C15505) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C10082 +
                     (C123 * C157 + C15407 * C303) * C15752 +
                     (C123 * C844 + C15407 * C906) * C10083 +
                     (C123 * C959 + C15407 * C1191) * C15749 +
                     (C123 * C847 + C15407 * C909) * C10084 +
                     (C123 * C960 + C15407 * C1192) * C15740 +
                     (C123 * C5383 + C15407 * C5413) * C10085 +
                     (C123 * C5444 + C15407 * C5568) * C15701) *
                        C7120 +
                    ((C123 * C82 + C15407 * C125) * C10082 +
                     (C123 * C158 + C15407 * C304) * C15752 +
                     (C123 * C845 + C15407 * C907) * C10083 +
                     (C123 * C961 + C15407 * C1193) * C15749 +
                     (C123 * C848 + C15407 * C910) * C10084 +
                     (C123 * C962 + C15407 * C1194) * C15740 +
                     (C123 * C6116 + C15407 * C6155) * C10085 +
                     (C123 * C6195 + C15407 * C6372) * C15701) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 + C9507 +
            C9507 + C15505 * C1238) *
               C15744 +
           (C9503 * C391 + C9967 + C9967 + C9223 * C791 + C9504 * C1995 +
            C9968 + C9968 + C15505 * C2440) *
               C15732 +
           (C9503 * C394 + C9969 + C9969 + C9223 * C792 + C9504 * C3120 +
            C9970 + C9970 + C15505 * C3472) *
               C15712) *
              C7120 +
          ((C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 + C9509 +
            C9509 + C15505 * C1240) *
               C15744 +
           (C9503 * C392 + C9971 + C9971 + C9223 * C793 + C9504 * C1996 +
            C9972 + C9972 + C15505 * C2441) *
               C15732 +
           (C9503 * C395 + C9973 + C9973 + C9223 * C794 + C9504 * C3884 +
            C9974 + C9974 + C15505 * C4305) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 + C9507 +
           C9507 + C15505 * C1238) *
              C15407 * C15750 +
          (C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 + C9509 +
           C9509 + C15505 * C1240) *
              C15407 * C15743 +
          (C9503 * C83 + C9510 + C9510 + C9223 * C333 + C9504 * C846 + C9511 +
           C9511 + C15505 * C1242) *
              C15407 * C15730 +
          (C9503 * C84 + C9512 + C9512 + C9223 * C334 + C9504 * C1643 + C9513 +
           C9513 + C15505 * C1936) *
              C15407 * C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((C10290 * C81 + C10295 + C10295 + C15752 * C331 + C10291 * C844 +
           C10296 + C10296 + C15749 * C1238 + C10292 * C847 + C10297 + C10297 +
           C15740 * C1239 + C10293 * C5383 + C10298 + C10298 + C15701 * C5597) *
              C15407 * C7120 +
          (C10290 * C82 + C10299 + C10299 + C15752 * C332 + C10291 * C845 +
           C10300 + C10300 + C15749 * C1240 + C10292 * C848 + C10301 + C10301 +
           C15740 * C1241 + C10293 * C6116 + C10302 + C10302 + C15701 * C6411) *
              C15407 * C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((C14003 * C81 + C7946 + C7946 + C15370 * C91 + C13996 * C82 + C7947 +
           C7947 + C15378 * C92 + C7943 * C83 + C7948 + C7948 + C7935 * C93) *
              C15501 +
          (C14003 * C844 + C8324 + C8324 + C15370 * C856 + C13996 * C845 +
           C8325 + C8325 + C15378 * C857 + C7943 * C846 + C8326 + C8326 +
           C7935 * C858) *
              C15508 +
          (C14003 * C847 + C10796 + C10796 + C15370 * C859 + C13996 * C848 +
           C10797 + C10797 + C15378 * C860 + C7943 * C849 + C10798 + C10798 +
           C7935 * C861) *
              C10794) *
         C15407 * C68 * C69 * C70) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C14000 +
                     (C123 * C86 + C15407 * C129) * C15370 +
                     (C123 * C82 + C15407 * C125) * C13989 +
                     (C123 * C87 + C15407 * C130) * C15378 +
                     (C123 * C83 + C15407 * C126) * C14018 +
                     (C123 * C88 + C15407 * C131) * C7935) *
                        C15501 +
                    ((C123 * C844 + C15407 * C906) * C14000 +
                     (C123 * C850 + C15407 * C912) * C15370 +
                     (C123 * C845 + C15407 * C907) * C13989 +
                     (C123 * C851 + C15407 * C913) * C15378 +
                     (C123 * C846 + C15407 * C908) * C14018 +
                     (C123 * C852 + C15407 * C914) * C7935) *
                        C15508 +
                    ((C123 * C847 + C15407 * C909) * C14000 +
                     (C123 * C853 + C15407 * C915) * C15370 +
                     (C123 * C848 + C15407 * C910) * C13989 +
                     (C123 * C854 + C15407 * C916) * C15378 +
                     (C123 * C849 + C15407 * C911) * C14018 +
                     (C123 * C855 + C15407 * C917) * C7935) *
                        C10794) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                     C15508 * C959 + C14381 * C847 + C10794 * C960) *
                        C14000 +
                    (C14373 * C86 + C15501 * C162 + C14370 * C850 +
                     C15508 * C965 + C14381 * C853 + C10794 * C966) *
                        C15370 +
                    (C14373 * C82 + C15501 * C158 + C14370 * C845 +
                     C15508 * C961 + C14381 * C848 + C10794 * C962) *
                        C13989 +
                    (C14373 * C87 + C15501 * C163 + C14370 * C851 +
                     C15508 * C967 + C14381 * C854 + C10794 * C968) *
                        C15378 +
                    (C14373 * C83 + C15501 * C159 + C14370 * C846 +
                     C15508 * C963 + C14381 * C849 + C10794 * C964) *
                        C14018 +
                    (C14373 * C88 + C15501 * C164 + C14370 * C852 +
                     C15508 * C969 + C14381 * C855 + C10794 * C970) *
                        C7935) *
                   C15407 * C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14000 * C81 + C15370 * C86 + C13989 * C82 +
                      C15378 * C87 + C14018 * C83 + C7935 * C88) *
                         C123 +
                     (C14000 * C124 + C15370 * C189 + C13989 * C125 +
                      C15378 * C190 + C14018 * C126 + C7935 * C191) *
                         C15407) *
                        C15501 +
                    ((C14000 * C844 + C15370 * C850 + C13989 * C845 +
                      C15378 * C851 + C14018 * C846 + C7935 * C852) *
                         C123 +
                     (C14000 * C906 + C15370 * C1009 + C13989 * C907 +
                      C15378 * C1010 + C14018 * C908 + C7935 * C1011) *
                         C15407) *
                        C15508 +
                    ((C14000 * C847 + C15370 * C853 + C13989 * C848 +
                      C15378 * C854 + C14018 * C849 + C7935 * C855) *
                         C123 +
                     (C14000 * C909 + C15370 * C1012 + C13989 * C910 +
                      C15378 * C1013 + C14018 * C911 + C7935 * C1014) *
                         C15407) *
                        C10794) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C216 * C81 + C223 + C223 + C15407 * C217) * C15370 +
                     (C216 * C82 + C224 + C224 + C15407 * C218) * C15378 +
                     (C216 * C83 + C225 + C225 + C15407 * C219) * C7935) *
                        C15501 +
                    ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15370 +
                     (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15378 +
                     (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C7935) *
                        C15508 +
                    ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C15370 +
                     (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C15378 +
                     (C216 * C849 + C1065 + C1065 + C15407 * C1058) * C7935) *
                        C10794) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C14373 * C81 + C15501 * C157 + C14370 * C844 +
                      C15508 * C959 + C14381 * C847 + C10794 * C960) *
                         C123 +
                     (C14373 * C124 + C15501 * C249 + C14370 * C906 +
                      C15508 * C1103 + C14381 * C909 + C10794 * C1104) *
                         C15407) *
                        C15370 +
                    ((C14373 * C82 + C15501 * C158 + C14370 * C845 +
                      C15508 * C961 + C14381 * C848 + C10794 * C962) *
                         C123 +
                     (C14373 * C125 + C15501 * C250 + C14370 * C907 +
                      C15508 * C1105 + C14381 * C910 + C10794 * C1106) *
                         C15407) *
                        C15378 +
                    ((C14373 * C83 + C15501 * C159 + C14370 * C846 +
                      C15508 * C963 + C14381 * C849 + C10794 * C964) *
                         C123 +
                     (C14373 * C126 + C15501 * C251 + C14370 * C908 +
                      C15508 * C1107 + C14381 * C911 + C10794 * C1108) *
                         C15407) *
                        C7935) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezx[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((C14000 * C81 + C15370 * C86 + C13989 * C82 + C15378 * C87 +
                     C14018 * C83 + C7935 * C88) *
                        C14373 +
                    (C14000 * C157 + C15370 * C276 + C13989 * C158 +
                     C15378 * C277 + C14018 * C159 + C7935 * C278) *
                        C15501 +
                    (C14000 * C844 + C15370 * C850 + C13989 * C845 +
                     C15378 * C851 + C14018 * C846 + C7935 * C852) *
                        C14370 +
                    (C14000 * C959 + C15370 * C1147 + C13989 * C961 +
                     C15378 * C1148 + C14018 * C963 + C7935 * C1149) *
                        C15508 +
                    (C14000 * C847 + C15370 * C853 + C13989 * C848 +
                     C15378 * C854 + C14018 * C849 + C7935 * C855) *
                        C14381 +
                    (C14000 * C960 + C15370 * C1150 + C13989 * C962 +
                     C15378 * C1151 + C14018 * C964 + C7935 * C1152) *
                        C10794) *
                   C15407 * C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C14373 +
                     (C123 * C157 + C15407 * C303) * C15501 +
                     (C123 * C844 + C15407 * C906) * C14370 +
                     (C123 * C959 + C15407 * C1191) * C15508 +
                     (C123 * C847 + C15407 * C909) * C14381 +
                     (C123 * C960 + C15407 * C1192) * C10794) *
                        C15370 +
                    ((C123 * C82 + C15407 * C125) * C14373 +
                     (C123 * C158 + C15407 * C304) * C15501 +
                     (C123 * C845 + C15407 * C907) * C14370 +
                     (C123 * C961 + C15407 * C1193) * C15508 +
                     (C123 * C848 + C15407 * C910) * C14381 +
                     (C123 * C962 + C15407 * C1194) * C10794) *
                        C15378 +
                    ((C123 * C83 + C15407 * C126) * C14373 +
                     (C123 * C159 + C15407 * C305) * C15501 +
                     (C123 * C846 + C15407 * C908) * C14370 +
                     (C123 * C963 + C15407 * C1195) * C15508 +
                     (C123 * C849 + C15407 * C911) * C14381 +
                     (C123 * C964 + C15407 * C1196) * C10794) *
                        C7935) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((C14425 * C81 + C11109 + C11109 + C15501 * C331 +
                     C14418 * C844 + C11110 + C11110 + C15508 * C1238 +
                     C11107 * C847 + C11111 + C11111 + C10794 * C1239) *
                        C15407 * C15370 +
                    (C14425 * C82 + C11112 + C11112 + C15501 * C332 +
                     C14418 * C845 + C11113 + C11113 + C15508 * C1240 +
                     C11107 * C848 + C11114 + C11114 + C10794 * C1241) *
                        C15407 * C15378 +
                    (C14425 * C83 + C11115 + C11115 + C15501 * C333 +
                     C14418 * C846 + C11116 + C11116 + C15508 * C1242 +
                     C11107 * C849 + C11117 + C11117 + C10794 * C1243) *
                        C15407 * C7935) *
                   C68 * C69 * C70) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6786 * C81 + C6795 + C6795 + C15750 * C91 + C6788 * C82 + C6796 +
           C6796 + C15743 * C92 + C6790 * C83 + C6797 + C6797 + C15730 * C93 +
           C6792 * C84 + C6798 + C6798 + C15685 * C94) *
              C9223 +
          (C6786 * C844 + C9226 + C9226 + C15750 * C856 + C6788 * C845 + C9227 +
           C9227 + C15743 * C857 + C6790 * C846 + C9228 + C9228 +
           C15730 * C858 + C6792 * C1643 + C9229 + C9229 + C15685 * C1645) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7126 * C81 + C7131 + C7131 + C7120 * C91 + C7128 * C82 + C7132 +
            C7132 + C15375 * C92) *
               C9223 +
           (C7126 * C844 + C7477 + C7477 + C7120 * C856 + C7128 * C845 + C7478 +
            C7478 + C15375 * C857) *
               C15505) *
              C15744 +
          ((C7126 * C391 + C7133 + C7133 + C7120 * C403 + C7128 * C392 + C7134 +
            C7134 + C15375 * C404) *
               C9223 +
           (C7126 * C1995 + C7481 + C7481 + C7120 * C2001 + C7128 * C1996 +
            C7482 + C7482 + C15375 * C2002) *
               C15505) *
              C15732 +
          ((C7126 * C394 + C7135 + C7135 + C7120 * C406 + C7128 * C395 + C7136 +
            C7136 + C15375 * C407) *
               C9223 +
           (C7126 * C3120 + C8782 + C8782 + C7120 * C3126 + C7128 * C3884 +
            C8783 + C8783 + C15375 * C3886) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C6787 +
                     (C123 * C86 + C15407 * C129) * C15750 +
                     (C123 * C82 + C15407 * C125) * C6789 +
                     (C123 * C87 + C15407 * C130) * C15743 +
                     (C123 * C83 + C15407 * C126) * C6791 +
                     (C123 * C88 + C15407 * C131) * C15730 +
                     (C123 * C84 + C15407 * C127) * C6793 +
                     (C123 * C89 + C15407 * C132) * C15685) *
                        C9223 +
                    ((C123 * C844 + C15407 * C906) * C6787 +
                     (C123 * C850 + C15407 * C912) * C15750 +
                     (C123 * C845 + C15407 * C907) * C6789 +
                     (C123 * C851 + C15407 * C913) * C15743 +
                     (C123 * C846 + C15407 * C908) * C6791 +
                     (C123 * C852 + C15407 * C914) * C15730 +
                     (C123 * C1643 + C15407 * C1684) * C6793 +
                     (C123 * C1644 + C15407 * C1685) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C7127 +
                     (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                      C458 * C400 + C15712 * C466) *
                         C7120 +
                     (C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C7129 +
                     (C456 * C87 + C15744 * C130 + C457 * C398 + C15732 * C467 +
                      C458 * C401 + C15712 * C468) *
                         C15375) *
                        C9223 +
                    ((C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C7127 +
                     (C456 * C850 + C15744 * C912 + C457 * C1998 +
                      C15732 * C2060 + C458 * C3123 + C15712 * C3175) *
                         C7120 +
                     (C456 * C845 + C15744 * C907 + C457 * C1996 +
                      C15732 * C2058 + C458 * C3884 + C15712 * C3943) *
                         C7129 +
                     (C456 * C851 + C15744 * C913 + C457 * C1999 +
                      C15732 * C2061 + C458 * C3885 + C15712 * C3944) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C6787 +
          (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) * C15750 +
          (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C6789 +
          (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) * C15743 +
          (C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C6791 +
          (C9297 * C88 + C9223 * C164 + C9298 * C852 + C15505 * C969) * C15730 +
          (C9297 * C84 + C9223 * C160 + C9298 * C1643 + C15505 * C1722) *
              C6793 +
          (C9297 * C89 + C9223 * C165 + C9298 * C1644 + C15505 * C1723) *
              C15685) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C7127 +
           (C9297 * C86 + C9223 * C162 + C9298 * C850 + C15505 * C965) * C7120 +
           (C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C7129 +
           (C9297 * C87 + C9223 * C163 + C9298 * C851 + C15505 * C967) *
               C15375) *
              C15744 +
          ((C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C7127 +
           (C9297 * C397 + C9223 * C515 + C9298 * C1998 + C15505 * C2116) *
               C7120 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C7129 +
           (C9297 * C398 + C9223 * C516 + C9298 * C1999 + C15505 * C2117) *
               C15375) *
              C15732 +
          ((C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C7127 +
           (C9297 * C400 + C9223 * C518 + C9298 * C3123 + C15505 * C3220) *
               C7120 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C7129 +
           (C9297 * C401 + C9223 * C519 + C9298 * C3885 + C15505 * C3996) *
               C15375) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
            C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
               C123 +
           (C6787 * C124 + C15750 * C189 + C6789 * C125 + C15743 * C190 +
            C6791 * C126 + C15730 * C191 + C6793 * C127 + C15685 * C192) *
               C15407) *
              C9223 +
          ((C6787 * C844 + C15750 * C850 + C6789 * C845 + C15743 * C851 +
            C6791 * C846 + C15730 * C852 + C6793 * C1643 + C15685 * C1644) *
               C123 +
           (C6787 * C906 + C15750 * C1009 + C6789 * C907 + C15743 * C1010 +
            C6791 * C908 + C15730 * C1011 + C6793 * C1684 + C15685 * C1758) *
               C15407) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C456 +
           (C7127 * C124 + C7120 * C189 + C7129 * C125 + C15375 * C190) *
               C15744 +
           (C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) * C457 +
           (C7127 * C459 + C7120 * C559 + C7129 * C461 + C15375 * C560) *
               C15732 +
           (C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) * C458 +
           (C7127 * C460 + C7120 * C562 + C7129 * C462 + C15375 * C563) *
               C15712) *
              C9223 +
          ((C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) * C456 +
           (C7127 * C906 + C7120 * C1009 + C7129 * C907 + C15375 * C1010) *
               C15744 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C457 +
           (C7127 * C2057 + C7120 * C2169 + C7129 * C2058 + C15375 * C2170) *
               C15732 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C458 +
           (C7127 * C3172 + C7120 * C3260 + C7129 * C3943 + C15375 * C4047) *
               C15712) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C15750 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C15743 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15730 +
           (C216 * C84 + C226 + C226 + C15407 * C220) * C15685) *
              C9223 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C15750 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C15743 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15730 +
           (C216 * C1643 + C1795 + C1795 + C15407 * C1793) * C15685) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
            C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
               C7120 +
           (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
            C617 + C15732 * C608 + C605 * C395 + C618 + C618 + C15712 * C609) *
               C15375) *
              C9223 +
          ((C603 * C844 + C5193 + C5193 + C15744 * C1053 + C604 * C1995 +
            C5194 + C5194 + C15732 * C2222 + C605 * C3120 + C5195 + C5195 +
            C15712 * C3301) *
               C7120 +
           (C603 * C845 + C9764 + C9764 + C15744 * C1054 + C604 * C1996 +
            C9765 + C9765 + C15732 * C2223 + C605 * C3884 + C9766 + C9766 +
            C15712 * C4098) *
               C15375) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C123 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15407) *
              C15750 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C123 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15407) *
              C15743 +
          ((C9297 * C83 + C9223 * C159 + C9298 * C846 + C15505 * C963) * C123 +
           (C9297 * C126 + C9223 * C251 + C9298 * C908 + C15505 * C1107) *
               C15407) *
              C15730 +
          ((C9297 * C84 + C9223 * C160 + C9298 * C1643 + C15505 * C1722) *
               C123 +
           (C9297 * C127 + C9223 * C252 + C9298 * C1684 + C15505 * C1829) *
               C15407) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C9297 * C81 + C9223 * C157 + C9298 * C844 + C15505 * C959) * C456 +
           (C9297 * C124 + C9223 * C249 + C9298 * C906 + C15505 * C1103) *
               C15744 +
           (C9297 * C391 + C9223 * C509 + C9298 * C1995 + C15505 * C2113) *
               C457 +
           (C9297 * C459 + C9223 * C659 + C9298 * C2057 + C15505 * C2281) *
               C15732 +
           (C9297 * C394 + C9223 * C512 + C9298 * C3120 + C15505 * C3217) *
               C458 +
           (C9297 * C460 + C9223 * C660 + C9298 * C3172 + C15505 * C3349) *
               C15712) *
              C7120 +
          ((C9297 * C82 + C9223 * C158 + C9298 * C845 + C15505 * C961) * C456 +
           (C9297 * C125 + C9223 * C250 + C9298 * C907 + C15505 * C1105) *
               C15744 +
           (C9297 * C392 + C9223 * C510 + C9298 * C1996 + C15505 * C2114) *
               C457 +
           (C9297 * C461 + C9223 * C661 + C9298 * C2058 + C15505 * C2282) *
               C15732 +
           (C9297 * C395 + C9223 * C513 + C9298 * C3884 + C15505 * C3995) *
               C458 +
           (C9297 * C462 + C9223 * C662 + C9298 * C3943 + C15505 * C4152) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C6787 * C81 + C15750 * C86 + C6789 * C82 + C15743 * C87 +
           C6791 * C83 + C15730 * C88 + C6793 * C84 + C15685 * C89) *
              C9297 +
          (C6787 * C157 + C15750 * C276 + C6789 * C158 + C15743 * C277 +
           C6791 * C159 + C15730 * C278 + C6793 * C160 + C15685 * C279) *
              C9223 +
          (C6787 * C844 + C15750 * C850 + C6789 * C845 + C15743 * C851 +
           C6791 * C846 + C15730 * C852 + C6793 * C1643 + C15685 * C1644) *
              C9298 +
          (C6787 * C959 + C15750 * C1147 + C6789 * C961 + C15743 * C1148 +
           C6791 * C963 + C15730 * C1149 + C6793 * C1722 + C15685 * C1864) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C7127 * C81 + C7120 * C86 + C7129 * C82 + C15375 * C87) * C9297 +
           (C7127 * C157 + C7120 * C276 + C7129 * C158 + C15375 * C277) *
               C9223 +
           (C7127 * C844 + C7120 * C850 + C7129 * C845 + C15375 * C851) *
               C9298 +
           (C7127 * C959 + C7120 * C1147 + C7129 * C961 + C15375 * C1148) *
               C15505) *
              C15744 +
          ((C7127 * C391 + C7120 * C397 + C7129 * C392 + C15375 * C398) *
               C9297 +
           (C7127 * C509 + C7120 * C703 + C7129 * C510 + C15375 * C704) *
               C9223 +
           (C7127 * C1995 + C7120 * C1998 + C7129 * C1996 + C15375 * C1999) *
               C9298 +
           (C7127 * C2113 + C7120 * C2334 + C7129 * C2114 + C15375 * C2335) *
               C15505) *
              C15732 +
          ((C7127 * C394 + C7120 * C400 + C7129 * C395 + C15375 * C401) *
               C9297 +
           (C7127 * C512 + C7120 * C706 + C7129 * C513 + C15375 * C707) *
               C9223 +
           (C7127 * C3120 + C7120 * C3123 + C7129 * C3884 + C15375 * C3885) *
               C9298 +
           (C7127 * C3217 + C7120 * C3390 + C7129 * C3995 + C15375 * C4203) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C9297 +
                     (C123 * C157 + C15407 * C303) * C9223 +
                     (C123 * C844 + C15407 * C906) * C9298 +
                     (C123 * C959 + C15407 * C1191) * C15505) *
                        C15750 +
                    ((C123 * C82 + C15407 * C125) * C9297 +
                     (C123 * C158 + C15407 * C304) * C9223 +
                     (C123 * C845 + C15407 * C907) * C9298 +
                     (C123 * C961 + C15407 * C1193) * C15505) *
                        C15743 +
                    ((C123 * C83 + C15407 * C126) * C9297 +
                     (C123 * C159 + C15407 * C305) * C9223 +
                     (C123 * C846 + C15407 * C908) * C9298 +
                     (C123 * C963 + C15407 * C1195) * C15505) *
                        C15730 +
                    ((C123 * C84 + C15407 * C127) * C9297 +
                     (C123 * C160 + C15407 * C306) * C9223 +
                     (C123 * C1643 + C15407 * C1684) * C9298 +
                     (C123 * C1722 + C15407 * C1899) * C15505) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C9297 +
                     (C456 * C157 + C15744 * C303 + C457 * C509 +
                      C15732 * C747 + C458 * C512 + C15712 * C748) *
                         C9223 +
                     (C456 * C844 + C15744 * C906 + C457 * C1995 +
                      C15732 * C2057 + C458 * C3120 + C15712 * C3172) *
                         C9298 +
                     (C456 * C959 + C15744 * C1191 + C457 * C2113 +
                      C15732 * C2387 + C458 * C3217 + C15712 * C3430) *
                         C15505) *
                        C7120 +
                    ((C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C9297 +
                     (C456 * C158 + C15744 * C304 + C457 * C510 +
                      C15732 * C749 + C458 * C513 + C15712 * C750) *
                         C9223 +
                     (C456 * C845 + C15744 * C907 + C457 * C1996 +
                      C15732 * C2058 + C458 * C3884 + C15712 * C3943) *
                         C9298 +
                     (C456 * C961 + C15744 * C1193 + C457 * C2114 +
                      C15732 * C2388 + C458 * C3995 + C15712 * C4254) *
                         C15505) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((C9503 * C81 + C9506 + C9506 + C9223 * C331 + C9504 * C844 +
                     C9507 + C9507 + C15505 * C1238) *
                        C15407 * C15750 +
                    (C9503 * C82 + C9508 + C9508 + C9223 * C332 + C9504 * C845 +
                     C9509 + C9509 + C15505 * C1240) *
                        C15407 * C15743 +
                    (C9503 * C83 + C9510 + C9510 + C9223 * C333 + C9504 * C846 +
                     C9511 + C9511 + C15505 * C1242) *
                        C15407 * C15730 +
                    (C9503 * C84 + C9512 + C9512 + C9223 * C334 +
                     C9504 * C1643 + C9513 + C9513 + C15505 * C1936) *
                        C15407 * C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C9503 * C81 + C9506 + C9506 + C9223 * C331 +
                      C9504 * C844 + C9507 + C9507 + C15505 * C1238) *
                         C15744 +
                     (C9503 * C391 + C9967 + C9967 + C9223 * C791 +
                      C9504 * C1995 + C9968 + C9968 + C15505 * C2440) *
                         C15732 +
                     (C9503 * C394 + C9969 + C9969 + C9223 * C792 +
                      C9504 * C3120 + C9970 + C9970 + C15505 * C3472) *
                         C15712) *
                        C7120 +
                    ((C9503 * C82 + C9508 + C9508 + C9223 * C332 +
                      C9504 * C845 + C9509 + C9509 + C15505 * C1240) *
                         C15744 +
                     (C9503 * C392 + C9971 + C9971 + C9223 * C793 +
                      C9504 * C1996 + C9972 + C9972 + C15505 * C2441) *
                         C15732 +
                     (C9503 * C395 + C9973 + C9973 + C9223 * C794 +
                      C9504 * C3884 + C9974 + C9974 + C15505 * C4305) *
                         C15712) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1293 * C81 + C1305 + C1305 + C1287 * C91 + C1295 * C82 + C1306 +
           C1306 + C1288 * C92 + C1297 * C83 + C1307 + C1307 + C1289 * C93 +
           C1299 * C84 + C1308 + C1308 + C15685 * C94) *
              C15418 * C15686 +
          (C1293 * C391 + C1309 + C1309 + C1287 * C403 + C1295 * C392 + C1310 +
           C1310 + C1288 * C404 + C1297 * C393 + C1311 + C1311 + C1289 * C405 +
           C1299 * C1301 + C1312 + C1312 + C15685 * C1303) *
              C15418 * C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
           C3529 + C15375 * C92) *
              C15418 * C3516 +
          (C3520 * C391 + C3530 + C3530 + C15670 * C403 + C3522 * C392 + C3531 +
           C3531 + C15375 * C404) *
              C15418 * C3517 +
          (C3520 * C394 + C3532 + C3532 + C15670 * C406 + C3522 * C395 + C3533 +
           C3533 + C15375 * C407) *
              C15418 * C3518 +
          (C3520 * C2857 + C3534 + C3534 + C15670 * C2861 + C3522 * C3524 +
           C3535 + C3535 + C15375 * C3526) *
              C15418 * C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C1294 +
          (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) * C1287 +
          (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C1296 +
          (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) * C1288 +
          (C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C1298 +
          (C1346 * C88 + C15686 * C131 + C1347 * C399 + C15465 * C469) * C1289 +
          (C1346 * C84 + C15686 * C127 + C1347 * C1301 + C15465 * C1348) *
              C1300 +
          (C1346 * C89 + C15686 * C132 + C1347 * C1302 + C15465 * C1349) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
           C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
              C13975 +
          (C3569 * C86 + C3516 * C129 + C3570 * C397 + C3517 * C465 +
           C3571 * C400 + C3518 * C466 + C3572 * C2859 + C15694 * C2897) *
              C15670 +
          (C3569 * C82 + C3516 * C125 + C3570 * C392 + C3517 * C461 +
           C3571 * C395 + C3518 * C462 + C3572 * C3524 + C15694 * C3573) *
              C13948 +
          (C3569 * C87 + C3516 * C130 + C3570 * C398 + C3517 * C467 +
           C3571 * C401 + C3518 * C468 + C3572 * C3525 + C15694 * C3574) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C1294 +
                     (C156 * C86 + C15418 * C162) * C1287 +
                     (C156 * C82 + C15418 * C158) * C1296 +
                     (C156 * C87 + C15418 * C163) * C1288 +
                     (C156 * C83 + C15418 * C159) * C1298 +
                     (C156 * C88 + C15418 * C164) * C1289 +
                     (C156 * C84 + C15418 * C160) * C1300 +
                     (C156 * C89 + C15418 * C165) * C15685) *
                        C15686 +
                    ((C156 * C391 + C15418 * C509) * C1294 +
                     (C156 * C397 + C15418 * C515) * C1287 +
                     (C156 * C392 + C15418 * C510) * C1296 +
                     (C156 * C398 + C15418 * C516) * C1288 +
                     (C156 * C393 + C15418 * C511) * C1298 +
                     (C156 * C399 + C15418 * C517) * C1289 +
                     (C156 * C1301 + C15418 * C1384) * C1300 +
                     (C156 * C1302 + C15418 * C1385) * C15685) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C13975 +
                     (C156 * C86 + C15418 * C162) * C15670 +
                     (C156 * C82 + C15418 * C158) * C13948 +
                     (C156 * C87 + C15418 * C163) * C15375) *
                        C3516 +
                    ((C156 * C391 + C15418 * C509) * C13975 +
                     (C156 * C397 + C15418 * C515) * C15670 +
                     (C156 * C392 + C15418 * C510) * C13948 +
                     (C156 * C398 + C15418 * C516) * C15375) *
                        C3517 +
                    ((C156 * C394 + C15418 * C512) * C13975 +
                     (C156 * C400 + C15418 * C518) * C15670 +
                     (C156 * C395 + C15418 * C513) * C13948 +
                     (C156 * C401 + C15418 * C519) * C15375) *
                        C3518 +
                    ((C156 * C2857 + C15418 * C2921) * C13975 +
                     (C156 * C2859 + C15418 * C2923) * C15670 +
                     (C156 * C3524 + C15418 * C3609) * C13948 +
                     (C156 * C3525 + C15418 * C3610) * C15375) *
                        C15694) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 + C1298 * C83 +
           C1289 * C88 + C1300 * C84 + C15685 * C89) *
              C1346 +
          (C1294 * C124 + C1287 * C189 + C1296 * C125 + C1288 * C190 +
           C1298 * C126 + C1289 * C191 + C1300 * C127 + C15685 * C192) *
              C15686 +
          (C1294 * C391 + C1287 * C397 + C1296 * C392 + C1288 * C398 +
           C1298 * C393 + C1289 * C399 + C1300 * C1301 + C15685 * C1302) *
              C1347 +
          (C1294 * C459 + C1287 * C559 + C1296 * C461 + C1288 * C560 +
           C1298 * C463 + C1289 * C561 + C1300 * C1348 + C15685 * C1420) *
              C15465) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C3569 +
          (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
              C3516 +
          (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
              C3570 +
          (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
              C3517 +
          (C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
              C3571 +
          (C13975 * C460 + C15670 * C562 + C13948 * C462 + C15375 * C563) *
              C3518 +
          (C13975 * C2857 + C15670 * C2859 + C13948 * C3524 + C15375 * C3525) *
              C3572 +
          (C13975 * C2895 + C15670 * C2947 + C13948 * C3573 + C15375 * C3645) *
              C15694) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
           C1460 + C15465 * C606) *
              C1287 +
          (C1455 * C82 + C1461 + C1461 + C15686 * C218 + C1456 * C392 + C1462 +
           C1462 + C15465 * C608) *
              C1288 +
          (C1455 * C83 + C1463 + C1463 + C15686 * C219 + C1456 * C393 + C1464 +
           C1464 + C15465 * C610) *
              C1289 +
          (C1455 * C84 + C1465 + C1465 + C15686 * C220 + C1456 * C1301 + C1466 +
           C1466 + C15465 * C1457) *
              C15685) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3680 * C81 + C3686 + C3686 + C3516 * C217 + C3681 * C391 + C3687 +
           C3687 + C3517 * C606 + C3682 * C394 + C3688 + C3688 + C3518 * C607 +
           C3683 * C2857 + C3689 + C3689 + C15694 * C2976) *
              C15670 +
          (C3680 * C82 + C3690 + C3690 + C3516 * C218 + C3681 * C392 + C3691 +
           C3691 + C3517 * C608 + C3682 * C395 + C3692 + C3692 + C3518 * C609 +
           C3683 * C3524 + C3693 + C3693 + C15694 * C3684) *
              C15375) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C1346 +
                     (C156 * C124 + C15418 * C249) * C15686 +
                     (C156 * C391 + C15418 * C509) * C1347 +
                     (C156 * C459 + C15418 * C659) * C15465) *
                        C1287 +
                    ((C156 * C82 + C15418 * C158) * C1346 +
                     (C156 * C125 + C15418 * C250) * C15686 +
                     (C156 * C392 + C15418 * C510) * C1347 +
                     (C156 * C461 + C15418 * C661) * C15465) *
                        C1288 +
                    ((C156 * C83 + C15418 * C159) * C1346 +
                     (C156 * C126 + C15418 * C251) * C15686 +
                     (C156 * C393 + C15418 * C511) * C1347 +
                     (C156 * C463 + C15418 * C663) * C15465) *
                        C1289 +
                    ((C156 * C84 + C15418 * C160) * C1346 +
                     (C156 * C127 + C15418 * C252) * C15686 +
                     (C156 * C1301 + C15418 * C1384) * C1347 +
                     (C156 * C1348 + C15418 * C1500) * C15465) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C3569 +
                     (C156 * C124 + C15418 * C249) * C3516 +
                     (C156 * C391 + C15418 * C509) * C3570 +
                     (C156 * C459 + C15418 * C659) * C3517 +
                     (C156 * C394 + C15418 * C512) * C3571 +
                     (C156 * C460 + C15418 * C660) * C3518 +
                     (C156 * C2857 + C15418 * C2921) * C3572 +
                     (C156 * C2895 + C15418 * C3005) * C15694) *
                        C15670 +
                    ((C156 * C82 + C15418 * C158) * C3569 +
                     (C156 * C125 + C15418 * C250) * C3516 +
                     (C156 * C392 + C15418 * C510) * C3570 +
                     (C156 * C461 + C15418 * C661) * C3517 +
                     (C156 * C395 + C15418 * C513) * C3571 +
                     (C156 * C462 + C15418 * C662) * C3518 +
                     (C156 * C3524 + C15418 * C3609) * C3572 +
                     (C156 * C3573 + C15418 * C3727) * C15694) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 +
            C1298 * C83 + C1289 * C88 + C1300 * C84 + C15685 * C89) *
               C156 +
           (C1294 * C157 + C1287 * C276 + C1296 * C158 + C1288 * C277 +
            C1298 * C159 + C1289 * C278 + C1300 * C160 + C15685 * C279) *
               C15418) *
              C15686 +
          ((C1294 * C391 + C1287 * C397 + C1296 * C392 + C1288 * C398 +
            C1298 * C393 + C1289 * C399 + C1300 * C1301 + C15685 * C1302) *
               C156 +
           (C1294 * C509 + C1287 * C703 + C1296 * C510 + C1288 * C704 +
            C1298 * C511 + C1289 * C705 + C1300 * C1384 + C15685 * C1535) *
               C15418) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C156 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C15418) *
              C3516 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C156 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C15418) *
              C3517 +
          ((C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C156 +
           (C13975 * C512 + C15670 * C706 + C13948 * C513 + C15375 * C707) *
               C15418) *
              C3518 +
          ((C13975 * C2857 + C15670 * C2859 + C13948 * C3524 + C15375 * C3525) *
               C156 +
           (C13975 * C2921 + C15670 * C3029 + C13948 * C3609 + C15375 * C3762) *
               C15418) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C156 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C15418) *
              C1287 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C156 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C15418) *
              C1288 +
          ((C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C156 +
           (C1346 * C159 + C15686 * C305 + C1347 * C511 + C15465 * C751) *
               C15418) *
              C1289 +
          ((C1346 * C84 + C15686 * C127 + C1347 * C1301 + C15465 * C1348) *
               C156 +
           (C1346 * C160 + C15686 * C306 + C1347 * C1384 + C15465 * C1570) *
               C15418) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
            C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
               C156 +
           (C3569 * C157 + C3516 * C303 + C3570 * C509 + C3517 * C747 +
            C3571 * C512 + C3518 * C748 + C3572 * C2921 + C15694 * C3053) *
               C15418) *
              C15670 +
          ((C3569 * C82 + C3516 * C125 + C3570 * C392 + C3517 * C461 +
            C3571 * C395 + C3518 * C462 + C3572 * C3524 + C15694 * C3573) *
               C156 +
           (C3569 * C158 + C3516 * C304 + C3570 * C510 + C3517 * C749 +
            C3571 * C513 + C3518 * C750 + C3572 * C3609 + C15694 * C3797) *
               C15418) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C15686 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C15465) *
                        C1287 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C15686 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C15465) *
                        C1288 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C15686 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C15465) *
                        C1289 +
                    ((C330 * C84 + C340 + C340 + C15418 * C334) * C15686 +
                     (C330 * C1301 + C1607 + C1607 + C15418 * C1605) * C15465) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C3516 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C3517 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C3518 +
                     (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C15694) *
                        C15670 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C3516 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C3517 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C3518 +
                     (C330 * C3524 + C3834 + C3834 + C15418 * C3832) * C15694) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
            C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
               C15687 +
           (C385 * C844 + C863 + C863 + C379 * C856 + C387 * C845 + C864 +
            C864 + C380 * C857 + C389 * C846 + C865 + C865 + C15708 * C858) *
               C15505) *
              C15686 +
          ((C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 +
            C414 + C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
               C15687 +
           (C385 * C1995 + C2005 + C2005 + C379 * C2001 + C387 * C1996 + C2006 +
            C2006 + C380 * C2002 + C389 * C1997 + C2007 + C2007 +
            C15708 * C2003) *
               C15505) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15687 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15505) *
              C3516 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15687 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15505) *
              C3517 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15687 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15505) *
              C3518 +
          ((C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15687 +
           (C2855 * C4344 + C4348 + C4348 + C15365 * C4346) * C15505) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) * C386 +
           (C1346 * C86 + C15686 * C129 + C1347 * C397 + C15465 * C465) * C379 +
           (C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) * C388 +
           (C1346 * C87 + C15686 * C130 + C1347 * C398 + C15465 * C467) * C380 +
           (C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) * C390 +
           (C1346 * C88 + C15686 * C131 + C1347 * C399 + C15465 * C469) *
               C15708) *
              C15687 +
          ((C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C386 +
           (C1346 * C850 + C15686 * C912 + C1347 * C1998 + C15465 * C2060) *
               C379 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C388 +
           (C1346 * C851 + C15686 * C913 + C1347 * C1999 + C15465 * C2061) *
               C380 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C390 +
           (C1346 * C852 + C15686 * C914 + C1347 * C2000 + C15465 * C2062) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
            C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
               C2856 +
           (C3569 * C86 + C3516 * C129 + C3570 * C397 + C3517 * C465 +
            C3571 * C400 + C3518 * C466 + C3572 * C2859 + C15694 * C2897) *
               C15365) *
              C15687 +
          ((C3569 * C844 + C3516 * C906 + C3570 * C1995 + C3517 * C2057 +
            C3571 * C3120 + C3518 * C3172 + C3572 * C4344 + C15694 * C4382) *
               C2856 +
           (C3569 * C850 + C3516 * C912 + C3570 * C1998 + C3517 * C2060 +
            C3571 * C3123 + C3518 * C3175 + C3572 * C4345 + C15694 * C4383) *
               C15365) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C386 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) * C379 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C388 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) * C380 +
           (C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C390 +
           (C1720 * C88 + C15687 * C164 + C1721 * C852 + C15505 * C969) *
               C15708) *
              C15686 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C386 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C379 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C388 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C380 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C390 +
           (C1720 * C399 + C15687 * C517 + C1721 * C2000 + C15505 * C2118) *
               C15708) *
              C15465) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C2856 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C15365) *
              C3516 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C2856 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C15365) *
              C3517 +
          ((C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C2856 +
           (C1720 * C400 + C15687 * C518 + C1721 * C3123 + C15505 * C3220) *
               C15365) *
              C3518 +
          ((C1720 * C2857 + C15687 * C2921 + C1721 * C4344 + C15505 * C4418) *
               C2856 +
           (C1720 * C2859 + C15687 * C2923 + C1721 * C4345 + C15505 * C4419) *
               C15365) *
              C15694) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 +
                      C390 * C83 + C15708 * C88) *
                         C1346 +
                     (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 +
                      C390 * C126 + C15708 * C191) *
                         C15686 +
                     (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
                      C390 * C393 + C15708 * C399) *
                         C1347 +
                     (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 +
                      C390 * C463 + C15708 * C561) *
                         C15465) *
                        C15687 +
                    ((C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
                      C390 * C846 + C15708 * C852) *
                         C1346 +
                     (C386 * C906 + C379 * C1009 + C388 * C907 + C380 * C1010 +
                      C390 * C908 + C15708 * C1011) *
                         C15686 +
                     (C386 * C1995 + C379 * C1998 + C388 * C1996 +
                      C380 * C1999 + C390 * C1997 + C15708 * C2000) *
                         C1347 +
                     (C386 * C2057 + C379 * C2169 + C388 * C2058 +
                      C380 * C2170 + C390 * C2059 + C15708 * C2171) *
                         C15465) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C3569 +
                     (C2856 * C124 + C15365 * C189) * C3516 +
                     (C2856 * C391 + C15365 * C397) * C3570 +
                     (C2856 * C459 + C15365 * C559) * C3517 +
                     (C2856 * C394 + C15365 * C400) * C3571 +
                     (C2856 * C460 + C15365 * C562) * C3518 +
                     (C2856 * C2857 + C15365 * C2859) * C3572 +
                     (C2856 * C2895 + C15365 * C2947) * C15694) *
                        C15687 +
                    ((C2856 * C844 + C15365 * C850) * C3569 +
                     (C2856 * C906 + C15365 * C1009) * C3516 +
                     (C2856 * C1995 + C15365 * C1998) * C3570 +
                     (C2856 * C2057 + C15365 * C2169) * C3517 +
                     (C2856 * C3120 + C15365 * C3123) * C3571 +
                     (C2856 * C3172 + C15365 * C3260) * C3518 +
                     (C2856 * C4344 + C15365 * C4345) * C3572 +
                     (C2856 * C4382 + C15365 * C4454) * C15694) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1455 * C81 + C1459 + C1459 + C15686 * C217 + C1456 * C391 + C1460 +
            C1460 + C15465 * C606) *
               C379 +
           (C1455 * C82 + C1461 + C1461 + C15686 * C218 + C1456 * C392 + C1462 +
            C1462 + C15465 * C608) *
               C380 +
           (C1455 * C83 + C1463 + C1463 + C15686 * C219 + C1456 * C393 + C1464 +
            C1464 + C15465 * C610) *
               C15708) *
              C15687 +
          ((C1455 * C844 + C2226 + C2226 + C15686 * C1053 + C1456 * C1995 +
            C2227 + C2227 + C15465 * C2222) *
               C379 +
           (C1455 * C845 + C2228 + C2228 + C15686 * C1054 + C1456 * C1996 +
            C2229 + C2229 + C15465 * C2223) *
               C380 +
           (C1455 * C846 + C2230 + C2230 + C15686 * C1055 + C1456 * C1997 +
            C2231 + C2231 + C15465 * C2224) *
               C15708) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3680 * C81 + C3686 + C3686 + C3516 * C217 + C3681 * C391 + C3687 +
           C3687 + C3517 * C606 + C3682 * C394 + C3688 + C3688 + C3518 * C607 +
           C3683 * C2857 + C3689 + C3689 + C15694 * C2976) *
              C15365 * C15687 +
          (C3680 * C844 + C4491 + C4491 + C3516 * C1053 + C3681 * C1995 +
           C4492 + C4492 + C3517 * C2222 + C3682 * C3120 + C4493 + C4493 +
           C3518 * C3301 + C3683 * C4344 + C4494 + C4494 + C15694 * C4489) *
              C15365 * C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C1346 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C15686 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C1347 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C15465) *
              C379 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C1346 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C15686 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C1347 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C15465) *
              C380 +
          ((C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) *
               C1346 +
           (C1720 * C126 + C15687 * C251 + C1721 * C908 + C15505 * C1107) *
               C15686 +
           (C1720 * C393 + C15687 * C511 + C1721 * C1997 + C15505 * C2115) *
               C1347 +
           (C1720 * C463 + C15687 * C663 + C1721 * C2059 + C15505 * C2283) *
               C15465) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C3569 +
          (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
              C3516 +
          (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
              C3570 +
          (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
              C3517 +
          (C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
              C3571 +
          (C1720 * C460 + C15687 * C660 + C1721 * C3172 + C15505 * C3349) *
              C3518 +
          (C1720 * C2857 + C15687 * C2921 + C1721 * C4344 + C15505 * C4418) *
              C3572 +
          (C1720 * C2895 + C15687 * C3005 + C1721 * C4382 + C15505 * C4528) *
              C15694) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 +
                      C390 * C83 + C15708 * C88) *
                         C1720 +
                     (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
                      C390 * C159 + C15708 * C278) *
                         C15687 +
                     (C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
                      C390 * C846 + C15708 * C852) *
                         C1721 +
                     (C386 * C959 + C379 * C1147 + C388 * C961 + C380 * C1148 +
                      C390 * C963 + C15708 * C1149) *
                         C15505) *
                        C15686 +
                    ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
                      C390 * C393 + C15708 * C399) *
                         C1720 +
                     (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
                      C390 * C511 + C15708 * C705) *
                         C15687 +
                     (C386 * C1995 + C379 * C1998 + C388 * C1996 +
                      C380 * C1999 + C390 * C1997 + C15708 * C2000) *
                         C1721 +
                     (C386 * C2113 + C379 * C2334 + C388 * C2114 +
                      C380 * C2335 + C390 * C2115 + C15708 * C2336) *
                         C15505) *
                        C15465) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2856 * C81 + C15365 * C86) * C1720 +
                     (C2856 * C157 + C15365 * C276) * C15687 +
                     (C2856 * C844 + C15365 * C850) * C1721 +
                     (C2856 * C959 + C15365 * C1147) * C15505) *
                        C3516 +
                    ((C2856 * C391 + C15365 * C397) * C1720 +
                     (C2856 * C509 + C15365 * C703) * C15687 +
                     (C2856 * C1995 + C15365 * C1998) * C1721 +
                     (C2856 * C2113 + C15365 * C2334) * C15505) *
                        C3517 +
                    ((C2856 * C394 + C15365 * C400) * C1720 +
                     (C2856 * C512 + C15365 * C706) * C15687 +
                     (C2856 * C3120 + C15365 * C3123) * C1721 +
                     (C2856 * C3217 + C15365 * C3390) * C15505) *
                        C3518 +
                    ((C2856 * C2857 + C15365 * C2859) * C1720 +
                     (C2856 * C2921 + C15365 * C3029) * C15687 +
                     (C2856 * C4344 + C15365 * C4345) * C1721 +
                     (C2856 * C4418 + C15365 * C4563) * C15505) *
                        C15694) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1346 * C81 + C15686 * C124 + C1347 * C391 + C15465 * C459) *
               C1720 +
           (C1346 * C157 + C15686 * C303 + C1347 * C509 + C15465 * C747) *
               C15687 +
           (C1346 * C844 + C15686 * C906 + C1347 * C1995 + C15465 * C2057) *
               C1721 +
           (C1346 * C959 + C15686 * C1191 + C1347 * C2113 + C15465 * C2387) *
               C15505) *
              C379 +
          ((C1346 * C82 + C15686 * C125 + C1347 * C392 + C15465 * C461) *
               C1720 +
           (C1346 * C158 + C15686 * C304 + C1347 * C510 + C15465 * C749) *
               C15687 +
           (C1346 * C845 + C15686 * C907 + C1347 * C1996 + C15465 * C2058) *
               C1721 +
           (C1346 * C961 + C15686 * C1193 + C1347 * C2114 + C15465 * C2388) *
               C15505) *
              C380 +
          ((C1346 * C83 + C15686 * C126 + C1347 * C393 + C15465 * C463) *
               C1720 +
           (C1346 * C159 + C15686 * C305 + C1347 * C511 + C15465 * C751) *
               C15687 +
           (C1346 * C846 + C15686 * C908 + C1347 * C1997 + C15465 * C2059) *
               C1721 +
           (C1346 * C963 + C15686 * C1195 + C1347 * C2115 + C15465 * C2389) *
               C15505) *
              C15708) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C3569 * C81 + C3516 * C124 + C3570 * C391 + C3517 * C459 +
           C3571 * C394 + C3518 * C460 + C3572 * C2857 + C15694 * C2895) *
              C1720 +
          (C3569 * C157 + C3516 * C303 + C3570 * C509 + C3517 * C747 +
           C3571 * C512 + C3518 * C748 + C3572 * C2921 + C15694 * C3053) *
              C15687 +
          (C3569 * C844 + C3516 * C906 + C3570 * C1995 + C3517 * C2057 +
           C3571 * C3120 + C3518 * C3172 + C3572 * C4344 + C15694 * C4382) *
              C1721 +
          (C3569 * C959 + C3516 * C1191 + C3570 * C2113 + C3517 * C2387 +
           C3571 * C3217 + C3518 * C3430 + C3572 * C4418 + C15694 * C4598) *
              C15505) *
         C15365 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                      C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                         C15686 +
                     (C1934 * C391 + C2444 + C2444 + C15687 * C791 +
                      C1935 * C1995 + C2445 + C2445 + C15505 * C2440) *
                         C15465) *
                        C379 +
                    ((C1934 * C82 + C1940 + C1940 + C15687 * C332 +
                      C1935 * C845 + C1941 + C1941 + C15505 * C1240) *
                         C15686 +
                     (C1934 * C392 + C2446 + C2446 + C15687 * C793 +
                      C1935 * C1996 + C2447 + C2447 + C15505 * C2441) *
                         C15465) *
                        C380 +
                    ((C1934 * C83 + C1942 + C1942 + C15687 * C333 +
                      C1935 * C846 + C1943 + C1943 + C15505 * C1242) *
                         C15686 +
                     (C1934 * C393 + C2448 + C2448 + C15687 * C795 +
                      C1935 * C1997 + C2449 + C2449 + C15505 * C2442) *
                         C15465) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                     C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                        C3516 +
                    (C1934 * C391 + C2444 + C2444 + C15687 * C791 +
                     C1935 * C1995 + C2445 + C2445 + C15505 * C2440) *
                        C3517 +
                    (C1934 * C394 + C4307 + C4307 + C15687 * C792 +
                     C1935 * C3120 + C4308 + C4308 + C15505 * C3472) *
                        C3518 +
                    (C1934 * C2857 + C4635 + C4635 + C15687 * C3077 +
                     C1935 * C4344 + C4636 + C4636 + C15505 * C4633) *
                        C15694) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
           C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
              C15418 * C15744 +
          (C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 + C414 +
           C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
              C15418 * C15732 +
          (C385 * C394 + C416 + C416 + C379 * C406 + C387 * C395 + C417 + C417 +
           C380 * C407 + C389 * C396 + C418 + C418 + C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C71 * C81 + C97 + C97 + C61 * C91 + C73 * C82 + C98 + C98 +
          C62 * C92 + C75 * C83 + C99 + C99 + C63 * C93 + C77 * C84 + C100 +
          C100 + C64 * C94 + C79 * C85 + C101 + C101 + C65 * C95) *
         C15418 * C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
           C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
              C15745 +
          (C385 * C844 + C863 + C863 + C379 * C856 + C387 * C845 + C864 + C864 +
           C380 * C857 + C389 * C846 + C865 + C865 + C15708 * C858) *
              C15734 +
          (C385 * C847 + C866 + C866 + C379 * C859 + C387 * C848 + C867 + C867 +
           C380 * C860 + C389 * C849 + C868 + C868 + C15708 * C861) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C15418 * C2490 +
          (C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 + C2504 +
           C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
           C15708 * C405) *
              C15418 * C2491 +
          (C2493 * C394 + C2506 + C2506 + C15741 * C406 + C2495 * C395 + C2507 +
           C2507 + C15728 * C407 + C2497 * C396 + C2508 + C2508 +
           C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15418 * C2850 +
          (C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15418 * C2851 +
          (C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15418 * C2852 +
          (C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15418 * C2853 +
          (C2855 * C2858 + C2868 + C2868 + C15365 * C2862) * C15418 * C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15745 +
           (C2855 * C844 + C3129 + C3129 + C15365 * C856) * C15734 +
           (C2855 * C847 + C3130 + C3130 + C15365 * C859) * C15715) *
              C2490 +
          ((C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15745 +
           (C2855 * C1995 + C3131 + C3131 + C15365 * C2001) * C15734 +
           (C2855 * C3119 + C3132 + C3132 + C15365 * C3125) * C15715) *
              C2491 +
          ((C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15745 +
           (C2855 * C3120 + C3133 + C3133 + C15365 * C3126) * C15734 +
           (C2855 * C3121 + C3134 + C3134 + C15365 * C3127) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                     C458 * C394 + C15712 * C460) *
                        C386 +
                    (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                     C458 * C400 + C15712 * C466) *
                        C379 +
                    (C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                     C458 * C395 + C15712 * C462) *
                        C388 +
                    (C456 * C87 + C15744 * C130 + C457 * C398 + C15732 * C467 +
                     C458 * C401 + C15712 * C468) *
                        C380 +
                    (C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                     C458 * C396 + C15712 * C464) *
                        C390 +
                    (C456 * C88 + C15744 * C131 + C457 * C399 + C15732 * C469 +
                     C458 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C123 * C81 + C15407 * C124) * C72 +
                    (C123 * C86 + C15407 * C129) * C61 +
                    (C123 * C82 + C15407 * C125) * C74 +
                    (C123 * C87 + C15407 * C130) * C62 +
                    (C123 * C83 + C15407 * C126) * C76 +
                    (C123 * C88 + C15407 * C131) * C63 +
                    (C123 * C84 + C15407 * C127) * C78 +
                    (C123 * C89 + C15407 * C132) * C64 +
                    (C123 * C85 + C15407 * C128) * C80 +
                    (C123 * C90 + C15407 * C133) * C65) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C386 +
                     (C123 * C86 + C15407 * C129) * C379 +
                     (C123 * C82 + C15407 * C125) * C388 +
                     (C123 * C87 + C15407 * C130) * C380 +
                     (C123 * C83 + C15407 * C126) * C390 +
                     (C123 * C88 + C15407 * C131) * C15708) *
                        C15745 +
                    ((C123 * C844 + C15407 * C906) * C386 +
                     (C123 * C850 + C15407 * C912) * C379 +
                     (C123 * C845 + C15407 * C907) * C388 +
                     (C123 * C851 + C15407 * C913) * C380 +
                     (C123 * C846 + C15407 * C908) * C390 +
                     (C123 * C852 + C15407 * C914) * C15708) *
                        C15734 +
                    ((C123 * C847 + C15407 * C909) * C386 +
                     (C123 * C853 + C15407 * C915) * C379 +
                     (C123 * C848 + C15407 * C910) * C388 +
                     (C123 * C854 + C15407 * C916) * C380 +
                     (C123 * C849 + C15407 * C911) * C390 +
                     (C123 * C855 + C15407 * C917) * C15708) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C2494 +
                    (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                     C2548 * C400 + C15712 * C466) *
                        C15741 +
                    (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                     C2548 * C395 + C15712 * C462) *
                        C2496 +
                    (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                     C2548 * C401 + C15712 * C468) *
                        C15728 +
                    (C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                     C2548 * C396 + C15712 * C464) *
                        C2498 +
                    (C2546 * C88 + C2490 * C131 + C2547 * C399 + C2491 * C469 +
                     C2548 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C2856 +
                    (C2890 * C86 + C2850 * C129 + C2891 * C397 + C2851 * C465 +
                     C2892 * C400 + C2852 * C466 + C2893 * C2859 +
                     C2853 * C2897 + C2894 * C2860 + C2854 * C2898) *
                        C15365) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C2856 +
                     (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                      C2548 * C400 + C15712 * C466) *
                         C15365) *
                        C15745 +
                    ((C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C2856 +
                     (C2546 * C850 + C2490 * C912 + C2547 * C1998 +
                      C2491 * C2060 + C2548 * C3123 + C15712 * C3175) *
                         C15365) *
                        C15734 +
                    ((C2546 * C847 + C2490 * C909 + C2547 * C3119 +
                      C2491 * C3173 + C2548 * C3121 + C15712 * C3174) *
                         C2856 +
                     (C2546 * C853 + C2490 * C915 + C2547 * C3122 +
                      C2491 * C3176 + C2548 * C3124 + C15712 * C3177) *
                         C15365) *
                        C15715) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C386 +
                     (C156 * C86 + C15418 * C162) * C379 +
                     (C156 * C82 + C15418 * C158) * C388 +
                     (C156 * C87 + C15418 * C163) * C380 +
                     (C156 * C83 + C15418 * C159) * C390 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C15744 +
                    ((C156 * C391 + C15418 * C509) * C386 +
                     (C156 * C397 + C15418 * C515) * C379 +
                     (C156 * C392 + C15418 * C510) * C388 +
                     (C156 * C398 + C15418 * C516) * C380 +
                     (C156 * C393 + C15418 * C511) * C390 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C15732 +
                    ((C156 * C394 + C15418 * C512) * C386 +
                     (C156 * C400 + C15418 * C518) * C379 +
                     (C156 * C395 + C15418 * C513) * C388 +
                     (C156 * C401 + C15418 * C519) * C380 +
                     (C156 * C396 + C15418 * C514) * C390 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C72 +
                    (C156 * C86 + C15418 * C162) * C61 +
                    (C156 * C82 + C15418 * C158) * C74 +
                    (C156 * C87 + C15418 * C163) * C62 +
                    (C156 * C83 + C15418 * C159) * C76 +
                    (C156 * C88 + C15418 * C164) * C63 +
                    (C156 * C84 + C15418 * C160) * C78 +
                    (C156 * C89 + C15418 * C165) * C64 +
                    (C156 * C85 + C15418 * C161) * C80 +
                    (C156 * C90 + C15418 * C166) * C65) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                     C958 * C847 + C15715 * C960) *
                        C386 +
                    (C956 * C86 + C15745 * C162 + C957 * C850 + C15734 * C965 +
                     C958 * C853 + C15715 * C966) *
                        C379 +
                    (C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
                     C958 * C848 + C15715 * C962) *
                        C388 +
                    (C956 * C87 + C15745 * C163 + C957 * C851 + C15734 * C967 +
                     C958 * C854 + C15715 * C968) *
                        C380 +
                    (C956 * C83 + C15745 * C159 + C957 * C846 + C15734 * C963 +
                     C958 * C849 + C15715 * C964) *
                        C390 +
                    (C956 * C88 + C15745 * C164 + C957 * C852 + C15734 * C969 +
                     C958 * C855 + C15715 * C970) *
                        C15708) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2494 +
                     (C156 * C86 + C15418 * C162) * C15741 +
                     (C156 * C82 + C15418 * C158) * C2496 +
                     (C156 * C87 + C15418 * C163) * C15728 +
                     (C156 * C83 + C15418 * C159) * C2498 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C2490 +
                    ((C156 * C391 + C15418 * C509) * C2494 +
                     (C156 * C397 + C15418 * C515) * C15741 +
                     (C156 * C392 + C15418 * C510) * C2496 +
                     (C156 * C398 + C15418 * C516) * C15728 +
                     (C156 * C393 + C15418 * C511) * C2498 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C2491 +
                    ((C156 * C394 + C15418 * C512) * C2494 +
                     (C156 * C400 + C15418 * C518) * C15741 +
                     (C156 * C395 + C15418 * C513) * C2496 +
                     (C156 * C401 + C15418 * C519) * C15728 +
                     (C156 * C396 + C15418 * C514) * C2498 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2856 +
                     (C156 * C86 + C15418 * C162) * C15365) *
                        C2850 +
                    ((C156 * C391 + C15418 * C509) * C2856 +
                     (C156 * C397 + C15418 * C515) * C15365) *
                        C2851 +
                    ((C156 * C394 + C15418 * C512) * C2856 +
                     (C156 * C400 + C15418 * C518) * C15365) *
                        C2852 +
                    ((C156 * C2857 + C15418 * C2921) * C2856 +
                     (C156 * C2859 + C15418 * C2923) * C15365) *
                        C2853 +
                    ((C156 * C2858 + C15418 * C2922) * C2856 +
                     (C156 * C2860 + C15418 * C2924) * C15365) *
                        C2854) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                      C958 * C847 + C15715 * C960) *
                         C2856 +
                     (C956 * C86 + C15745 * C162 + C957 * C850 + C15734 * C965 +
                      C958 * C853 + C15715 * C966) *
                         C15365) *
                        C2490 +
                    ((C956 * C391 + C15745 * C509 + C957 * C1995 +
                      C15734 * C2113 + C958 * C3119 + C15715 * C3216) *
                         C2856 +
                     (C956 * C397 + C15745 * C515 + C957 * C1998 +
                      C15734 * C2116 + C958 * C3122 + C15715 * C3219) *
                         C15365) *
                        C2491 +
                    ((C956 * C394 + C15745 * C512 + C957 * C3120 +
                      C15734 * C3217 + C958 * C3121 + C15715 * C3218) *
                         C2856 +
                     (C956 * C400 + C15745 * C518 + C957 * C3123 +
                      C15734 * C3220 + C958 * C3124 + C15715 * C3221) *
                         C15365) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
           C15708 * C88) *
              C456 +
          (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 + C390 * C126 +
           C15708 * C191) *
              C15744 +
          (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 + C390 * C393 +
           C15708 * C399) *
              C457 +
          (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 + C390 * C463 +
           C15708 * C561) *
              C15732 +
          (C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 + C390 * C396 +
           C15708 * C402) *
              C458 +
          (C386 * C460 + C379 * C562 + C388 * C462 + C380 * C563 + C390 * C464 +
           C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C123 +
          (C72 * C124 + C61 * C189 + C74 * C125 + C62 * C190 + C76 * C126 +
           C63 * C191 + C78 * C127 + C64 * C192 + C80 * C128 + C65 * C193) *
              C15407) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
            C15708 * C88) *
               C123 +
           (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 +
            C390 * C126 + C15708 * C191) *
               C15407) *
              C15745 +
          ((C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 +
            C390 * C846 + C15708 * C852) *
               C123 +
           (C386 * C906 + C379 * C1009 + C388 * C907 + C380 * C1010 +
            C390 * C908 + C15708 * C1011) *
               C15407) *
              C15734 +
          ((C386 * C847 + C379 * C853 + C388 * C848 + C380 * C854 +
            C390 * C849 + C15708 * C855) *
               C123 +
           (C386 * C909 + C379 * C1012 + C388 * C910 + C380 * C1013 +
            C390 * C911 + C15708 * C1014) *
               C15407) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C2546 +
          (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
           C2498 * C126 + C15708 * C191) *
              C2490 +
          (C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
           C2498 * C393 + C15708 * C399) *
              C2547 +
          (C2494 * C459 + C15741 * C559 + C2496 * C461 + C15728 * C560 +
           C2498 * C463 + C15708 * C561) *
              C2491 +
          (C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
           C2498 * C396 + C15708 * C402) *
              C2548 +
          (C2494 * C460 + C15741 * C562 + C2496 * C462 + C15728 * C563 +
           C2498 * C464 + C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2856 * C81 + C15365 * C86) * C2890 +
          (C2856 * C124 + C15365 * C189) * C2850 +
          (C2856 * C391 + C15365 * C397) * C2891 +
          (C2856 * C459 + C15365 * C559) * C2851 +
          (C2856 * C394 + C15365 * C400) * C2892 +
          (C2856 * C460 + C15365 * C562) * C2852 +
          (C2856 * C2857 + C15365 * C2859) * C2893 +
          (C2856 * C2895 + C15365 * C2947) * C2853 +
          (C2856 * C2858 + C15365 * C2860) * C2894 +
          (C2856 * C2896 + C15365 * C2948) * C2854) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C2546 +
           (C2856 * C124 + C15365 * C189) * C2490 +
           (C2856 * C391 + C15365 * C397) * C2547 +
           (C2856 * C459 + C15365 * C559) * C2491 +
           (C2856 * C394 + C15365 * C400) * C2548 +
           (C2856 * C460 + C15365 * C562) * C15712) *
              C15745 +
          ((C2856 * C844 + C15365 * C850) * C2546 +
           (C2856 * C906 + C15365 * C1009) * C2490 +
           (C2856 * C1995 + C15365 * C1998) * C2547 +
           (C2856 * C2057 + C15365 * C2169) * C2491 +
           (C2856 * C3120 + C15365 * C3123) * C2548 +
           (C2856 * C3172 + C15365 * C3260) * C15712) *
              C15734 +
          ((C2856 * C847 + C15365 * C853) * C2546 +
           (C2856 * C909 + C15365 * C1012) * C2490 +
           (C2856 * C3119 + C15365 * C3122) * C2547 +
           (C2856 * C3173 + C15365 * C3261) * C2491 +
           (C2856 * C3121 + C15365 * C3124) * C2548 +
           (C2856 * C3174 + C15365 * C3262) * C15712) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
           C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
              C379 +
          (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
           C617 + C15732 * C608 + C605 * C395 + C618 + C618 + C15712 * C609) *
              C380 +
          (C603 * C83 + C619 + C619 + C15744 * C219 + C604 * C393 + C620 +
           C620 + C15732 * C610 + C605 * C396 + C621 + C621 + C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C216 * C81 + C223 + C223 + C15407 * C217) * C61 +
          (C216 * C82 + C224 + C224 + C15407 * C218) * C62 +
          (C216 * C83 + C225 + C225 + C15407 * C219) * C63 +
          (C216 * C84 + C226 + C226 + C15407 * C220) * C64 +
          (C216 * C85 + C227 + C227 + C15407 * C221) * C65) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C216 * C81 + C223 + C223 + C15407 * C217) * C379 +
           (C216 * C82 + C224 + C224 + C15407 * C218) * C380 +
           (C216 * C83 + C225 + C225 + C15407 * C219) * C15708) *
              C15745 +
          ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C379 +
           (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C380 +
           (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C15708) *
              C15734 +
          ((C216 * C847 + C1063 + C1063 + C15407 * C1056) * C379 +
           (C216 * C848 + C1064 + C1064 + C15407 * C1057) * C380 +
           (C216 * C849 + C1065 + C1065 + C15407 * C1058) * C15708) *
              C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15741 +
          (C2663 * C82 + C2670 + C2670 + C2490 * C218 + C2664 * C392 + C2671 +
           C2671 + C2491 * C608 + C2665 * C395 + C2672 + C2672 +
           C15712 * C609) *
              C15728 +
          (C2663 * C83 + C2673 + C2673 + C2490 * C219 + C2664 * C393 + C2674 +
           C2674 + C2491 * C610 + C2665 * C396 + C2675 + C2675 +
           C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (C2971 * C81 + C2979 + C2979 + C2850 * C217 + C2972 * C391 + C2980 +
          C2980 + C2851 * C606 + C2973 * C394 + C2981 + C2981 + C2852 * C607 +
          C2974 * C2857 + C2982 + C2982 + C2853 * C2976 + C2975 * C2858 +
          C2983 + C2983 + C2854 * C2977) *
         C15365 * C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15365 * C15745 +
          (C2663 * C844 + C3305 + C3305 + C2490 * C1053 + C2664 * C1995 +
           C3306 + C3306 + C2491 * C2222 + C2665 * C3120 + C3307 + C3307 +
           C15712 * C3301) *
              C15365 * C15734 +
          (C2663 * C847 + C3308 + C3308 + C2490 * C1056 + C2664 * C3119 +
           C3309 + C3309 + C2491 * C3302 + C2665 * C3121 + C3310 + C3310 +
           C15712 * C3303) *
              C15365 * C15715) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C456 +
                     (C156 * C124 + C15418 * C249) * C15744 +
                     (C156 * C391 + C15418 * C509) * C457 +
                     (C156 * C459 + C15418 * C659) * C15732 +
                     (C156 * C394 + C15418 * C512) * C458 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C379 +
                    ((C156 * C82 + C15418 * C158) * C456 +
                     (C156 * C125 + C15418 * C250) * C15744 +
                     (C156 * C392 + C15418 * C510) * C457 +
                     (C156 * C461 + C15418 * C661) * C15732 +
                     (C156 * C395 + C15418 * C513) * C458 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C380 +
                    ((C156 * C83 + C15418 * C159) * C456 +
                     (C156 * C126 + C15418 * C251) * C15744 +
                     (C156 * C393 + C15418 * C511) * C457 +
                     (C156 * C463 + C15418 * C663) * C15732 +
                     (C156 * C396 + C15418 * C514) * C458 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C123 +
                     (C156 * C124 + C15418 * C249) * C15407) *
                        C61 +
                    ((C156 * C82 + C15418 * C158) * C123 +
                     (C156 * C125 + C15418 * C250) * C15407) *
                        C62 +
                    ((C156 * C83 + C15418 * C159) * C123 +
                     (C156 * C126 + C15418 * C251) * C15407) *
                        C63 +
                    ((C156 * C84 + C15418 * C160) * C123 +
                     (C156 * C127 + C15418 * C252) * C15407) *
                        C64 +
                    ((C156 * C85 + C15418 * C161) * C123 +
                     (C156 * C128 + C15418 * C253) * C15407) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                      C958 * C847 + C15715 * C960) *
                         C123 +
                     (C956 * C124 + C15745 * C249 + C957 * C906 +
                      C15734 * C1103 + C958 * C909 + C15715 * C1104) *
                         C15407) *
                        C379 +
                    ((C956 * C82 + C15745 * C158 + C957 * C845 + C15734 * C961 +
                      C958 * C848 + C15715 * C962) *
                         C123 +
                     (C956 * C125 + C15745 * C250 + C957 * C907 +
                      C15734 * C1105 + C958 * C910 + C15715 * C1106) *
                         C15407) *
                        C380 +
                    ((C956 * C83 + C15745 * C159 + C957 * C846 + C15734 * C963 +
                      C958 * C849 + C15715 * C964) *
                         C123 +
                     (C956 * C126 + C15745 * C251 + C957 * C908 +
                      C15734 * C1107 + C958 * C911 + C15715 * C1108) *
                         C15407) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2546 +
                     (C156 * C124 + C15418 * C249) * C2490 +
                     (C156 * C391 + C15418 * C509) * C2547 +
                     (C156 * C459 + C15418 * C659) * C2491 +
                     (C156 * C394 + C15418 * C512) * C2548 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C15741 +
                    ((C156 * C82 + C15418 * C158) * C2546 +
                     (C156 * C125 + C15418 * C250) * C2490 +
                     (C156 * C392 + C15418 * C510) * C2547 +
                     (C156 * C461 + C15418 * C661) * C2491 +
                     (C156 * C395 + C15418 * C513) * C2548 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C15728 +
                    ((C156 * C83 + C15418 * C159) * C2546 +
                     (C156 * C126 + C15418 * C251) * C2490 +
                     (C156 * C393 + C15418 * C511) * C2547 +
                     (C156 * C463 + C15418 * C663) * C2491 +
                     (C156 * C396 + C15418 * C514) * C2548 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C2890 +
                    (C156 * C124 + C15418 * C249) * C2850 +
                    (C156 * C391 + C15418 * C509) * C2891 +
                    (C156 * C459 + C15418 * C659) * C2851 +
                    (C156 * C394 + C15418 * C512) * C2892 +
                    (C156 * C460 + C15418 * C660) * C2852 +
                    (C156 * C2857 + C15418 * C2921) * C2893 +
                    (C156 * C2895 + C15418 * C3005) * C2853 +
                    (C156 * C2858 + C15418 * C2922) * C2894 +
                    (C156 * C2896 + C15418 * C3006) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C956 * C81 + C15745 * C157 + C957 * C844 + C15734 * C959 +
                     C958 * C847 + C15715 * C960) *
                        C2546 +
                    (C956 * C124 + C15745 * C249 + C957 * C906 +
                     C15734 * C1103 + C958 * C909 + C15715 * C1104) *
                        C2490 +
                    (C956 * C391 + C15745 * C509 + C957 * C1995 +
                     C15734 * C2113 + C958 * C3119 + C15715 * C3216) *
                        C2547 +
                    (C956 * C459 + C15745 * C659 + C957 * C2057 +
                     C15734 * C2281 + C958 * C3173 + C15715 * C3348) *
                        C2491 +
                    (C956 * C394 + C15745 * C512 + C957 * C3120 +
                     C15734 * C3217 + C958 * C3121 + C15715 * C3218) *
                        C2548 +
                    (C956 * C460 + C15745 * C660 + C957 * C3172 +
                     C15734 * C3349 + C958 * C3174 + C15715 * C3350) *
                        C15712) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
            C15708 * C88) *
               C156 +
           (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
            C390 * C159 + C15708 * C278) *
               C15418) *
              C15744 +
          ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
            C390 * C393 + C15708 * C399) *
               C156 +
           (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
            C390 * C511 + C15708 * C705) *
               C15418) *
              C15732 +
          ((C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 +
            C390 * C396 + C15708 * C402) *
               C156 +
           (C386 * C512 + C379 * C706 + C388 * C513 + C380 * C707 +
            C390 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C156 +
          (C72 * C157 + C61 * C276 + C74 * C158 + C62 * C277 + C76 * C159 +
           C63 * C278 + C78 * C160 + C64 * C279 + C80 * C161 + C65 * C280) *
              C15418) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
           C15708 * C88) *
              C956 +
          (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 + C390 * C159 +
           C15708 * C278) *
              C15745 +
          (C386 * C844 + C379 * C850 + C388 * C845 + C380 * C851 + C390 * C846 +
           C15708 * C852) *
              C957 +
          (C386 * C959 + C379 * C1147 + C388 * C961 + C380 * C1148 +
           C390 * C963 + C15708 * C1149) *
              C15734 +
          (C386 * C847 + C379 * C853 + C388 * C848 + C380 * C854 + C390 * C849 +
           C15708 * C855) *
              C958 +
          (C386 * C960 + C379 * C1150 + C388 * C962 + C380 * C1151 +
           C390 * C964 + C15708 * C1152) *
              C15715) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C156 +
           (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
            C2498 * C159 + C15708 * C278) *
               C15418) *
              C2490 +
          ((C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
            C2498 * C393 + C15708 * C399) *
               C156 +
           (C2494 * C509 + C15741 * C703 + C2496 * C510 + C15728 * C704 +
            C2498 * C511 + C15708 * C705) *
               C15418) *
              C2491 +
          ((C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
            C2498 * C396 + C15708 * C402) *
               C156 +
           (C2494 * C512 + C15741 * C706 + C2496 * C513 + C15728 * C707 +
            C2498 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C156 +
           (C2856 * C157 + C15365 * C276) * C15418) *
              C2850 +
          ((C2856 * C391 + C15365 * C397) * C156 +
           (C2856 * C509 + C15365 * C703) * C15418) *
              C2851 +
          ((C2856 * C394 + C15365 * C400) * C156 +
           (C2856 * C512 + C15365 * C706) * C15418) *
              C2852 +
          ((C2856 * C2857 + C15365 * C2859) * C156 +
           (C2856 * C2921 + C15365 * C3029) * C15418) *
              C2853 +
          ((C2856 * C2858 + C15365 * C2860) * C156 +
           (C2856 * C2922 + C15365 * C3030) * C15418) *
              C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C956 +
           (C2856 * C157 + C15365 * C276) * C15745 +
           (C2856 * C844 + C15365 * C850) * C957 +
           (C2856 * C959 + C15365 * C1147) * C15734 +
           (C2856 * C847 + C15365 * C853) * C958 +
           (C2856 * C960 + C15365 * C1150) * C15715) *
              C2490 +
          ((C2856 * C391 + C15365 * C397) * C956 +
           (C2856 * C509 + C15365 * C703) * C15745 +
           (C2856 * C1995 + C15365 * C1998) * C957 +
           (C2856 * C2113 + C15365 * C2334) * C15734 +
           (C2856 * C3119 + C15365 * C3122) * C958 +
           (C2856 * C3216 + C15365 * C3389) * C15715) *
              C2491 +
          ((C2856 * C394 + C15365 * C400) * C956 +
           (C2856 * C512 + C15365 * C706) * C15745 +
           (C2856 * C3120 + C15365 * C3123) * C957 +
           (C2856 * C3217 + C15365 * C3390) * C15734 +
           (C2856 * C3121 + C15365 * C3124) * C958 +
           (C2856 * C3218 + C15365 * C3391) * C15715) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C156 +
                     (C456 * C157 + C15744 * C303 + C457 * C509 +
                      C15732 * C747 + C458 * C512 + C15712 * C748) *
                         C15418) *
                        C379 +
                    ((C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C156 +
                     (C456 * C158 + C15744 * C304 + C457 * C510 +
                      C15732 * C749 + C458 * C513 + C15712 * C750) *
                         C15418) *
                        C380 +
                    ((C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                      C458 * C396 + C15712 * C464) *
                         C156 +
                     (C456 * C159 + C15744 * C305 + C457 * C511 +
                      C15732 * C751 + C458 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C156 +
                     (C123 * C157 + C15407 * C303) * C15418) *
                        C61 +
                    ((C123 * C82 + C15407 * C125) * C156 +
                     (C123 * C158 + C15407 * C304) * C15418) *
                        C62 +
                    ((C123 * C83 + C15407 * C126) * C156 +
                     (C123 * C159 + C15407 * C305) * C15418) *
                        C63 +
                    ((C123 * C84 + C15407 * C127) * C156 +
                     (C123 * C160 + C15407 * C306) * C15418) *
                        C64 +
                    ((C123 * C85 + C15407 * C128) * C156 +
                     (C123 * C161 + C15407 * C307) * C15418) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C956 +
                     (C123 * C157 + C15407 * C303) * C15745 +
                     (C123 * C844 + C15407 * C906) * C957 +
                     (C123 * C959 + C15407 * C1191) * C15734 +
                     (C123 * C847 + C15407 * C909) * C958 +
                     (C123 * C960 + C15407 * C1192) * C15715) *
                        C379 +
                    ((C123 * C82 + C15407 * C125) * C956 +
                     (C123 * C158 + C15407 * C304) * C15745 +
                     (C123 * C845 + C15407 * C907) * C957 +
                     (C123 * C961 + C15407 * C1193) * C15734 +
                     (C123 * C848 + C15407 * C910) * C958 +
                     (C123 * C962 + C15407 * C1194) * C15715) *
                        C380 +
                    ((C123 * C83 + C15407 * C126) * C956 +
                     (C123 * C159 + C15407 * C305) * C15745 +
                     (C123 * C846 + C15407 * C908) * C957 +
                     (C123 * C963 + C15407 * C1195) * C15734 +
                     (C123 * C849 + C15407 * C911) * C958 +
                     (C123 * C964 + C15407 * C1196) * C15715) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C156 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15418) *
                        C15741 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C156 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15418) *
                        C15728 +
                    ((C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                      C2548 * C396 + C15712 * C464) *
                         C156 +
                     (C2546 * C159 + C2490 * C305 + C2547 * C511 +
                      C2491 * C751 + C2548 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C156 +
                    (C2890 * C157 + C2850 * C303 + C2891 * C509 + C2851 * C747 +
                     C2892 * C512 + C2852 * C748 + C2893 * C2921 +
                     C2853 * C3053 + C2894 * C2922 + C2854 * C3054) *
                        C15418) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C956 +
                    (C2546 * C157 + C2490 * C303 + C2547 * C509 + C2491 * C747 +
                     C2548 * C512 + C15712 * C748) *
                        C15745 +
                    (C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                     C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                        C957 +
                    (C2546 * C959 + C2490 * C1191 + C2547 * C2113 +
                     C2491 * C2387 + C2548 * C3217 + C15712 * C3430) *
                        C15734 +
                    (C2546 * C847 + C2490 * C909 + C2547 * C3119 +
                     C2491 * C3173 + C2548 * C3121 + C15712 * C3174) *
                        C958 +
                    (C2546 * C960 + C2490 * C1192 + C2547 * C3216 +
                     C2491 * C3431 + C2548 * C3218 + C15712 * C3432) *
                        C15715) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C15744 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C15732 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C379 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C15744 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C15732 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C380 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C15744 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C15732 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C15407 * C61 +
                    (C330 * C82 + C338 + C338 + C15418 * C332) * C15407 * C62 +
                    (C330 * C83 + C339 + C339 + C15418 * C333) * C15407 * C63 +
                    (C330 * C84 + C340 + C340 + C15418 * C334) * C15407 * C64 +
                    (C330 * C85 + C341 + C341 + C15418 * C335) * C15407 * C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1235 * C81 + C1245 + C1245 + C15745 * C331 +
                     C1236 * C844 + C1246 + C1246 + C15734 * C1238 +
                     C1237 * C847 + C1247 + C1247 + C15715 * C1239) *
                        C15407 * C379 +
                    (C1235 * C82 + C1248 + C1248 + C15745 * C332 +
                     C1236 * C845 + C1249 + C1249 + C15734 * C1240 +
                     C1237 * C848 + C1250 + C1250 + C15715 * C1241) *
                        C15407 * C380 +
                    (C1235 * C83 + C1251 + C1251 + C15745 * C333 +
                     C1236 * C846 + C1252 + C1252 + C15734 * C1242 +
                     C1237 * C849 + C1253 + C1253 + C15715 * C1243) *
                        C15407 * C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C2490 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C2491 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C15741 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C2490 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C2491 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C15728 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C2490 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C2491 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C2850 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C2851 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C2852 +
                    (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C2853 +
                    (C330 * C2858 + C3081 + C3081 + C15418 * C3078) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C1235 * C81 + C1245 + C1245 + C15745 * C331 +
                     C1236 * C844 + C1246 + C1246 + C15734 * C1238 +
                     C1237 * C847 + C1247 + C1247 + C15715 * C1239) *
                        C2490 +
                    (C1235 * C391 + C3475 + C3475 + C15745 * C791 +
                     C1236 * C1995 + C3476 + C3476 + C15734 * C2440 +
                     C1237 * C3119 + C3477 + C3477 + C15715 * C3471) *
                        C2491 +
                    (C1235 * C394 + C3478 + C3478 + C15745 * C792 +
                     C1236 * C3120 + C3479 + C3479 + C15734 * C3472 +
                     C1237 * C3121 + C3480 + C3480 + C15715 * C3473) *
                        C15712) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1293 * C81 + C1305 + C1305 + C1287 * C91 + C1295 * C82 + C1306 +
           C1306 + C1288 * C92 + C1297 * C83 + C1307 + C1307 + C1289 * C93 +
           C1299 * C84 + C1308 + C1308 + C15685 * C94) *
              C15687 +
          (C1293 * C844 + C1647 + C1647 + C1287 * C856 + C1295 * C845 + C1648 +
           C1648 + C1288 * C857 + C1297 * C846 + C1649 + C1649 + C1289 * C858 +
           C1299 * C1643 + C1650 + C1650 + C15685 * C1645) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3520 * C81 + C3528 + C3528 + C15670 * C91 + C3522 * C82 + C3529 +
            C3529 + C15375 * C92) *
               C15687 +
           (C3520 * C844 + C3888 + C3888 + C15670 * C856 + C3522 * C845 +
            C3889 + C3889 + C15375 * C857) *
               C15505) *
              C2490 +
          ((C3520 * C391 + C3530 + C3530 + C15670 * C403 + C3522 * C392 +
            C3531 + C3531 + C15375 * C404) *
               C15687 +
           (C3520 * C1995 + C3890 + C3890 + C15670 * C2001 + C3522 * C1996 +
            C3891 + C3891 + C15375 * C2002) *
               C15505) *
              C2491 +
          ((C3520 * C394 + C3532 + C3532 + C15670 * C406 + C3522 * C395 +
            C3533 + C3533 + C15375 * C407) *
               C15687 +
           (C3520 * C3120 + C3892 + C3892 + C15670 * C3126 + C3522 * C3884 +
            C3893 + C3893 + C15375 * C3886) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C1294 +
                     (C123 * C86 + C15407 * C129) * C1287 +
                     (C123 * C82 + C15407 * C125) * C1296 +
                     (C123 * C87 + C15407 * C130) * C1288 +
                     (C123 * C83 + C15407 * C126) * C1298 +
                     (C123 * C88 + C15407 * C131) * C1289 +
                     (C123 * C84 + C15407 * C127) * C1300 +
                     (C123 * C89 + C15407 * C132) * C15685) *
                        C15687 +
                    ((C123 * C844 + C15407 * C906) * C1294 +
                     (C123 * C850 + C15407 * C912) * C1287 +
                     (C123 * C845 + C15407 * C907) * C1296 +
                     (C123 * C851 + C15407 * C913) * C1288 +
                     (C123 * C846 + C15407 * C908) * C1298 +
                     (C123 * C852 + C15407 * C914) * C1289 +
                     (C123 * C1643 + C15407 * C1684) * C1300 +
                     (C123 * C1644 + C15407 * C1685) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C13975 +
                     (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                      C2548 * C400 + C15712 * C466) *
                         C15670 +
                     (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C13948 +
                     (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                      C2548 * C401 + C15712 * C468) *
                         C15375) *
                        C15687 +
                    ((C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C13975 +
                     (C2546 * C850 + C2490 * C912 + C2547 * C1998 +
                      C2491 * C2060 + C2548 * C3123 + C15712 * C3175) *
                         C15670 +
                     (C2546 * C845 + C2490 * C907 + C2547 * C1996 +
                      C2491 * C2058 + C2548 * C3884 + C15712 * C3943) *
                         C13948 +
                     (C2546 * C851 + C2490 * C913 + C2547 * C1999 +
                      C2491 * C2061 + C2548 * C3885 + C15712 * C3944) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C1294 +
          (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) * C1287 +
          (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C1296 +
          (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) * C1288 +
          (C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C1298 +
          (C1720 * C88 + C15687 * C164 + C1721 * C852 + C15505 * C969) * C1289 +
          (C1720 * C84 + C15687 * C160 + C1721 * C1643 + C15505 * C1722) *
              C1300 +
          (C1720 * C89 + C15687 * C165 + C1721 * C1644 + C15505 * C1723) *
              C15685) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C13975 +
           (C1720 * C86 + C15687 * C162 + C1721 * C850 + C15505 * C965) *
               C15670 +
           (C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C13948 +
           (C1720 * C87 + C15687 * C163 + C1721 * C851 + C15505 * C967) *
               C15375) *
              C2490 +
          ((C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C13975 +
           (C1720 * C397 + C15687 * C515 + C1721 * C1998 + C15505 * C2116) *
               C15670 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C13948 +
           (C1720 * C398 + C15687 * C516 + C1721 * C1999 + C15505 * C2117) *
               C15375) *
              C2491 +
          ((C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C13975 +
           (C1720 * C400 + C15687 * C518 + C1721 * C3123 + C15505 * C3220) *
               C15670 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C13948 +
           (C1720 * C401 + C15687 * C519 + C1721 * C3885 + C15505 * C3996) *
               C15375) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 +
            C1298 * C83 + C1289 * C88 + C1300 * C84 + C15685 * C89) *
               C123 +
           (C1294 * C124 + C1287 * C189 + C1296 * C125 + C1288 * C190 +
            C1298 * C126 + C1289 * C191 + C1300 * C127 + C15685 * C192) *
               C15407) *
              C15687 +
          ((C1294 * C844 + C1287 * C850 + C1296 * C845 + C1288 * C851 +
            C1298 * C846 + C1289 * C852 + C1300 * C1643 + C15685 * C1644) *
               C123 +
           (C1294 * C906 + C1287 * C1009 + C1296 * C907 + C1288 * C1010 +
            C1298 * C908 + C1289 * C1011 + C1300 * C1684 + C15685 * C1758) *
               C15407) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C2546 +
           (C13975 * C124 + C15670 * C189 + C13948 * C125 + C15375 * C190) *
               C2490 +
           (C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C2547 +
           (C13975 * C459 + C15670 * C559 + C13948 * C461 + C15375 * C560) *
               C2491 +
           (C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C2548 +
           (C13975 * C460 + C15670 * C562 + C13948 * C462 + C15375 * C563) *
               C15712) *
              C15687 +
          ((C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C2546 +
           (C13975 * C906 + C15670 * C1009 + C13948 * C907 + C15375 * C1010) *
               C2490 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C2547 +
           (C13975 * C2057 + C15670 * C2169 + C13948 * C2058 + C15375 * C2170) *
               C2491 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C2548 +
           (C13975 * C3172 + C15670 * C3260 + C13948 * C3943 + C15375 * C4047) *
               C15712) *
              C15505) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C216 * C81 + C223 + C223 + C15407 * C217) * C1287 +
                     (C216 * C82 + C224 + C224 + C15407 * C218) * C1288 +
                     (C216 * C83 + C225 + C225 + C15407 * C219) * C1289 +
                     (C216 * C84 + C226 + C226 + C15407 * C220) * C15685) *
                        C15687 +
                    ((C216 * C844 + C1060 + C1060 + C15407 * C1053) * C1287 +
                     (C216 * C845 + C1061 + C1061 + C15407 * C1054) * C1288 +
                     (C216 * C846 + C1062 + C1062 + C15407 * C1055) * C1289 +
                     (C216 * C1643 + C1795 + C1795 + C15407 * C1793) * C15685) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2663 * C81 + C2667 + C2667 + C2490 * C217 +
                      C2664 * C391 + C2668 + C2668 + C2491 * C606 +
                      C2665 * C394 + C2669 + C2669 + C15712 * C607) *
                         C15670 +
                     (C2663 * C82 + C2670 + C2670 + C2490 * C218 +
                      C2664 * C392 + C2671 + C2671 + C2491 * C608 +
                      C2665 * C395 + C2672 + C2672 + C15712 * C609) *
                         C15375) *
                        C15687 +
                    ((C2663 * C844 + C3305 + C3305 + C2490 * C1053 +
                      C2664 * C1995 + C3306 + C3306 + C2491 * C2222 +
                      C2665 * C3120 + C3307 + C3307 + C15712 * C3301) *
                         C15670 +
                     (C2663 * C845 + C4100 + C4100 + C2490 * C1054 +
                      C2664 * C1996 + C4101 + C4101 + C2491 * C2223 +
                      C2665 * C3884 + C4102 + C4102 + C15712 * C4098) *
                         C15375) *
                        C15505) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) * C123 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C15407) *
              C1287 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) * C123 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C15407) *
              C1288 +
          ((C1720 * C83 + C15687 * C159 + C1721 * C846 + C15505 * C963) * C123 +
           (C1720 * C126 + C15687 * C251 + C1721 * C908 + C15505 * C1107) *
               C15407) *
              C1289 +
          ((C1720 * C84 + C15687 * C160 + C1721 * C1643 + C15505 * C1722) *
               C123 +
           (C1720 * C127 + C15687 * C252 + C1721 * C1684 + C15505 * C1829) *
               C15407) *
              C15685) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C1720 * C81 + C15687 * C157 + C1721 * C844 + C15505 * C959) *
               C2546 +
           (C1720 * C124 + C15687 * C249 + C1721 * C906 + C15505 * C1103) *
               C2490 +
           (C1720 * C391 + C15687 * C509 + C1721 * C1995 + C15505 * C2113) *
               C2547 +
           (C1720 * C459 + C15687 * C659 + C1721 * C2057 + C15505 * C2281) *
               C2491 +
           (C1720 * C394 + C15687 * C512 + C1721 * C3120 + C15505 * C3217) *
               C2548 +
           (C1720 * C460 + C15687 * C660 + C1721 * C3172 + C15505 * C3349) *
               C15712) *
              C15670 +
          ((C1720 * C82 + C15687 * C158 + C1721 * C845 + C15505 * C961) *
               C2546 +
           (C1720 * C125 + C15687 * C250 + C1721 * C907 + C15505 * C1105) *
               C2490 +
           (C1720 * C392 + C15687 * C510 + C1721 * C1996 + C15505 * C2114) *
               C2547 +
           (C1720 * C461 + C15687 * C661 + C1721 * C2058 + C15505 * C2282) *
               C2491 +
           (C1720 * C395 + C15687 * C513 + C1721 * C3884 + C15505 * C3995) *
               C2548 +
           (C1720 * C462 + C15687 * C662 + C1721 * C3943 + C15505 * C4152) *
               C15712) *
              C15375) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((C1294 * C81 + C1287 * C86 + C1296 * C82 + C1288 * C87 + C1298 * C83 +
           C1289 * C88 + C1300 * C84 + C15685 * C89) *
              C1720 +
          (C1294 * C157 + C1287 * C276 + C1296 * C158 + C1288 * C277 +
           C1298 * C159 + C1289 * C278 + C1300 * C160 + C15685 * C279) *
              C15687 +
          (C1294 * C844 + C1287 * C850 + C1296 * C845 + C1288 * C851 +
           C1298 * C846 + C1289 * C852 + C1300 * C1643 + C15685 * C1644) *
              C1721 +
          (C1294 * C959 + C1287 * C1147 + C1296 * C961 + C1288 * C1148 +
           C1298 * C963 + C1289 * C1149 + C1300 * C1722 + C15685 * C1864) *
              C15505) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13975 * C81 + C15670 * C86 + C13948 * C82 + C15375 * C87) * C1720 +
           (C13975 * C157 + C15670 * C276 + C13948 * C158 + C15375 * C277) *
               C15687 +
           (C13975 * C844 + C15670 * C850 + C13948 * C845 + C15375 * C851) *
               C1721 +
           (C13975 * C959 + C15670 * C1147 + C13948 * C961 + C15375 * C1148) *
               C15505) *
              C2490 +
          ((C13975 * C391 + C15670 * C397 + C13948 * C392 + C15375 * C398) *
               C1720 +
           (C13975 * C509 + C15670 * C703 + C13948 * C510 + C15375 * C704) *
               C15687 +
           (C13975 * C1995 + C15670 * C1998 + C13948 * C1996 + C15375 * C1999) *
               C1721 +
           (C13975 * C2113 + C15670 * C2334 + C13948 * C2114 + C15375 * C2335) *
               C15505) *
              C2491 +
          ((C13975 * C394 + C15670 * C400 + C13948 * C395 + C15375 * C401) *
               C1720 +
           (C13975 * C512 + C15670 * C706 + C13948 * C513 + C15375 * C707) *
               C15687 +
           (C13975 * C3120 + C15670 * C3123 + C13948 * C3884 + C15375 * C3885) *
               C1721 +
           (C13975 * C3217 + C15670 * C3390 + C13948 * C3995 + C15375 * C4203) *
               C15505) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C1720 +
                     (C123 * C157 + C15407 * C303) * C15687 +
                     (C123 * C844 + C15407 * C906) * C1721 +
                     (C123 * C959 + C15407 * C1191) * C15505) *
                        C1287 +
                    ((C123 * C82 + C15407 * C125) * C1720 +
                     (C123 * C158 + C15407 * C304) * C15687 +
                     (C123 * C845 + C15407 * C907) * C1721 +
                     (C123 * C961 + C15407 * C1193) * C15505) *
                        C1288 +
                    ((C123 * C83 + C15407 * C126) * C1720 +
                     (C123 * C159 + C15407 * C305) * C15687 +
                     (C123 * C846 + C15407 * C908) * C1721 +
                     (C123 * C963 + C15407 * C1195) * C15505) *
                        C1289 +
                    ((C123 * C84 + C15407 * C127) * C1720 +
                     (C123 * C160 + C15407 * C306) * C15687 +
                     (C123 * C1643 + C15407 * C1684) * C1721 +
                     (C123 * C1722 + C15407 * C1899) * C15505) *
                        C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C1720 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15687 +
                     (C2546 * C844 + C2490 * C906 + C2547 * C1995 +
                      C2491 * C2057 + C2548 * C3120 + C15712 * C3172) *
                         C1721 +
                     (C2546 * C959 + C2490 * C1191 + C2547 * C2113 +
                      C2491 * C2387 + C2548 * C3217 + C15712 * C3430) *
                         C15505) *
                        C15670 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C1720 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15687 +
                     (C2546 * C845 + C2490 * C907 + C2547 * C1996 +
                      C2491 * C2058 + C2548 * C3884 + C15712 * C3943) *
                         C1721 +
                     (C2546 * C961 + C2490 * C1193 + C2547 * C2114 +
                      C2491 * C2388 + C2548 * C3995 + C15712 * C4254) *
                         C15505) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                     C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                        C15407 * C1287 +
                    (C1934 * C82 + C1940 + C1940 + C15687 * C332 +
                     C1935 * C845 + C1941 + C1941 + C15505 * C1240) *
                        C15407 * C1288 +
                    (C1934 * C83 + C1942 + C1942 + C15687 * C333 +
                     C1935 * C846 + C1943 + C1943 + C15505 * C1242) *
                        C15407 * C1289 +
                    (C1934 * C84 + C1944 + C1944 + C15687 * C334 +
                     C1935 * C1643 + C1945 + C1945 + C15505 * C1936) *
                        C15407 * C15685) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C1934 * C81 + C1938 + C1938 + C15687 * C331 +
                      C1935 * C844 + C1939 + C1939 + C15505 * C1238) *
                         C2490 +
                     (C1934 * C391 + C2444 + C2444 + C15687 * C791 +
                      C1935 * C1995 + C2445 + C2445 + C15505 * C2440) *
                         C2491 +
                     (C1934 * C394 + C4307 + C4307 + C15687 * C792 +
                      C1935 * C3120 + C4308 + C4308 + C15505 * C3472) *
                         C15712) *
                        C15670 +
                    ((C1934 * C82 + C1940 + C1940 + C15687 * C332 +
                      C1935 * C845 + C1941 + C1941 + C15505 * C1240) *
                         C2490 +
                     (C1934 * C392 + C2446 + C2446 + C15687 * C793 +
                      C1935 * C1996 + C2447 + C2447 + C15505 * C2441) *
                         C2491 +
                     (C1934 * C395 + C4309 + C4309 + C15687 * C794 +
                      C1935 * C3884 + C4310 + C4310 + C15505 * C4305) *
                         C15712) *
                        C15375) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (C71 * C81 + C97 + C97 + C61 * C91 + C73 * C82 + C98 + C98 +
          C62 * C92 + C75 * C83 + C99 + C99 + C63 * C93 + C77 * C84 + C100 +
          C100 + C64 * C94 + C79 * C85 + C101 + C101 + C65 * C95) *
         C15418 * C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C385 * C81 + C410 + C410 + C379 * C91 + C387 * C82 + C411 + C411 +
           C380 * C92 + C389 * C83 + C412 + C412 + C15708 * C93) *
              C15418 * C15744 +
          (C385 * C391 + C413 + C413 + C379 * C403 + C387 * C392 + C414 + C414 +
           C380 * C404 + C389 * C393 + C415 + C415 + C15708 * C405) *
              C15418 * C15732 +
          (C385 * C394 + C416 + C416 + C379 * C406 + C387 * C395 + C417 + C417 +
           C380 * C407 + C389 * C396 + C418 + C418 + C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2493 * C81 + C2500 + C2500 + C15741 * C91 + C2495 * C82 + C2501 +
           C2501 + C15728 * C92 + C2497 * C83 + C2502 + C2502 + C15708 * C93) *
              C15418 * C2490 +
          (C2493 * C391 + C2503 + C2503 + C15741 * C403 + C2495 * C392 + C2504 +
           C2504 + C15728 * C404 + C2497 * C393 + C2505 + C2505 +
           C15708 * C405) *
              C15418 * C2491 +
          (C2493 * C394 + C2506 + C2506 + C15741 * C406 + C2495 * C395 + C2507 +
           C2507 + C15728 * C407 + C2497 * C396 + C2508 + C2508 +
           C15708 * C408) *
              C15418 * C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2855 * C81 + C2864 + C2864 + C15365 * C91) * C15418 * C2850 +
          (C2855 * C391 + C2865 + C2865 + C15365 * C403) * C15418 * C2851 +
          (C2855 * C394 + C2866 + C2866 + C15365 * C406) * C15418 * C2852 +
          (C2855 * C2857 + C2867 + C2867 + C15365 * C2861) * C15418 * C2853 +
          (C2855 * C2858 + C2868 + C2868 + C15365 * C2862) * C15418 * C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C123 * C81 + C15407 * C124) * C72 +
                    (C123 * C86 + C15407 * C129) * C61 +
                    (C123 * C82 + C15407 * C125) * C74 +
                    (C123 * C87 + C15407 * C130) * C62 +
                    (C123 * C83 + C15407 * C126) * C76 +
                    (C123 * C88 + C15407 * C131) * C63 +
                    (C123 * C84 + C15407 * C127) * C78 +
                    (C123 * C89 + C15407 * C132) * C64 +
                    (C123 * C85 + C15407 * C128) * C80 +
                    (C123 * C90 + C15407 * C133) * C65) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                     C458 * C394 + C15712 * C460) *
                        C386 +
                    (C456 * C86 + C15744 * C129 + C457 * C397 + C15732 * C465 +
                     C458 * C400 + C15712 * C466) *
                        C379 +
                    (C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                     C458 * C395 + C15712 * C462) *
                        C388 +
                    (C456 * C87 + C15744 * C130 + C457 * C398 + C15732 * C467 +
                     C458 * C401 + C15712 * C468) *
                        C380 +
                    (C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                     C458 * C396 + C15712 * C464) *
                        C390 +
                    (C456 * C88 + C15744 * C131 + C457 * C399 + C15732 * C469 +
                     C458 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                     C2548 * C394 + C15712 * C460) *
                        C2494 +
                    (C2546 * C86 + C2490 * C129 + C2547 * C397 + C2491 * C465 +
                     C2548 * C400 + C15712 * C466) *
                        C15741 +
                    (C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                     C2548 * C395 + C15712 * C462) *
                        C2496 +
                    (C2546 * C87 + C2490 * C130 + C2547 * C398 + C2491 * C467 +
                     C2548 * C401 + C15712 * C468) *
                        C15728 +
                    (C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                     C2548 * C396 + C15712 * C464) *
                        C2498 +
                    (C2546 * C88 + C2490 * C131 + C2547 * C399 + C2491 * C469 +
                     C2548 * C402 + C15712 * C470) *
                        C15708) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C2856 +
                    (C2890 * C86 + C2850 * C129 + C2891 * C397 + C2851 * C465 +
                     C2892 * C400 + C2852 * C466 + C2893 * C2859 +
                     C2853 * C2897 + C2894 * C2860 + C2854 * C2898) *
                        C15365) *
                   C15418 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C72 +
                    (C156 * C86 + C15418 * C162) * C61 +
                    (C156 * C82 + C15418 * C158) * C74 +
                    (C156 * C87 + C15418 * C163) * C62 +
                    (C156 * C83 + C15418 * C159) * C76 +
                    (C156 * C88 + C15418 * C164) * C63 +
                    (C156 * C84 + C15418 * C160) * C78 +
                    (C156 * C89 + C15418 * C165) * C64 +
                    (C156 * C85 + C15418 * C161) * C80 +
                    (C156 * C90 + C15418 * C166) * C65) *
                   C15407 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C386 +
                     (C156 * C86 + C15418 * C162) * C379 +
                     (C156 * C82 + C15418 * C158) * C388 +
                     (C156 * C87 + C15418 * C163) * C380 +
                     (C156 * C83 + C15418 * C159) * C390 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C15744 +
                    ((C156 * C391 + C15418 * C509) * C386 +
                     (C156 * C397 + C15418 * C515) * C379 +
                     (C156 * C392 + C15418 * C510) * C388 +
                     (C156 * C398 + C15418 * C516) * C380 +
                     (C156 * C393 + C15418 * C511) * C390 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C15732 +
                    ((C156 * C394 + C15418 * C512) * C386 +
                     (C156 * C400 + C15418 * C518) * C379 +
                     (C156 * C395 + C15418 * C513) * C388 +
                     (C156 * C401 + C15418 * C519) * C380 +
                     (C156 * C396 + C15418 * C514) * C390 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2494 +
                     (C156 * C86 + C15418 * C162) * C15741 +
                     (C156 * C82 + C15418 * C158) * C2496 +
                     (C156 * C87 + C15418 * C163) * C15728 +
                     (C156 * C83 + C15418 * C159) * C2498 +
                     (C156 * C88 + C15418 * C164) * C15708) *
                        C2490 +
                    ((C156 * C391 + C15418 * C509) * C2494 +
                     (C156 * C397 + C15418 * C515) * C15741 +
                     (C156 * C392 + C15418 * C510) * C2496 +
                     (C156 * C398 + C15418 * C516) * C15728 +
                     (C156 * C393 + C15418 * C511) * C2498 +
                     (C156 * C399 + C15418 * C517) * C15708) *
                        C2491 +
                    ((C156 * C394 + C15418 * C512) * C2494 +
                     (C156 * C400 + C15418 * C518) * C15741 +
                     (C156 * C395 + C15418 * C513) * C2496 +
                     (C156 * C401 + C15418 * C519) * C15728 +
                     (C156 * C396 + C15418 * C514) * C2498 +
                     (C156 * C402 + C15418 * C520) * C15708) *
                        C15712) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2856 +
                     (C156 * C86 + C15418 * C162) * C15365) *
                        C2850 +
                    ((C156 * C391 + C15418 * C509) * C2856 +
                     (C156 * C397 + C15418 * C515) * C15365) *
                        C2851 +
                    ((C156 * C394 + C15418 * C512) * C2856 +
                     (C156 * C400 + C15418 * C518) * C15365) *
                        C2852 +
                    ((C156 * C2857 + C15418 * C2921) * C2856 +
                     (C156 * C2859 + C15418 * C2923) * C15365) *
                        C2853 +
                    ((C156 * C2858 + C15418 * C2922) * C2856 +
                     (C156 * C2860 + C15418 * C2924) * C15365) *
                        C2854) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C123 +
          (C72 * C124 + C61 * C189 + C74 * C125 + C62 * C190 + C76 * C126 +
           C63 * C191 + C78 * C127 + C64 * C192 + C80 * C128 + C65 * C193) *
              C15407) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
           C15708 * C88) *
              C456 +
          (C386 * C124 + C379 * C189 + C388 * C125 + C380 * C190 + C390 * C126 +
           C15708 * C191) *
              C15744 +
          (C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 + C390 * C393 +
           C15708 * C399) *
              C457 +
          (C386 * C459 + C379 * C559 + C388 * C461 + C380 * C560 + C390 * C463 +
           C15708 * C561) *
              C15732 +
          (C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 + C390 * C396 +
           C15708 * C402) *
              C458 +
          (C386 * C460 + C379 * C562 + C388 * C462 + C380 * C563 + C390 * C464 +
           C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
           C2498 * C83 + C15708 * C88) *
              C2546 +
          (C2494 * C124 + C15741 * C189 + C2496 * C125 + C15728 * C190 +
           C2498 * C126 + C15708 * C191) *
              C2490 +
          (C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
           C2498 * C393 + C15708 * C399) *
              C2547 +
          (C2494 * C459 + C15741 * C559 + C2496 * C461 + C15728 * C560 +
           C2498 * C463 + C15708 * C561) *
              C2491 +
          (C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
           C2498 * C396 + C15708 * C402) *
              C2548 +
          (C2494 * C460 + C15741 * C562 + C2496 * C462 + C15728 * C563 +
           C2498 * C464 + C15708 * C564) *
              C15712) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2856 * C81 + C15365 * C86) * C2890 +
          (C2856 * C124 + C15365 * C189) * C2850 +
          (C2856 * C391 + C15365 * C397) * C2891 +
          (C2856 * C459 + C15365 * C559) * C2851 +
          (C2856 * C394 + C15365 * C400) * C2892 +
          (C2856 * C460 + C15365 * C562) * C2852 +
          (C2856 * C2857 + C15365 * C2859) * C2893 +
          (C2856 * C2895 + C15365 * C2947) * C2853 +
          (C2856 * C2858 + C15365 * C2860) * C2894 +
          (C2856 * C2896 + C15365 * C2948) * C2854) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C216 * C81 + C223 + C223 + C15407 * C217) * C61 +
          (C216 * C82 + C224 + C224 + C15407 * C218) * C62 +
          (C216 * C83 + C225 + C225 + C15407 * C219) * C63 +
          (C216 * C84 + C226 + C226 + C15407 * C220) * C64 +
          (C216 * C85 + C227 + C227 + C15407 * C221) * C65) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C603 * C81 + C613 + C613 + C15744 * C217 + C604 * C391 + C614 +
           C614 + C15732 * C606 + C605 * C394 + C615 + C615 + C15712 * C607) *
              C379 +
          (C603 * C82 + C616 + C616 + C15744 * C218 + C604 * C392 + C617 +
           C617 + C15732 * C608 + C605 * C395 + C618 + C618 + C15712 * C609) *
              C380 +
          (C603 * C83 + C619 + C619 + C15744 * C219 + C604 * C393 + C620 +
           C620 + C15732 * C610 + C605 * C396 + C621 + C621 + C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C2663 * C81 + C2667 + C2667 + C2490 * C217 + C2664 * C391 + C2668 +
           C2668 + C2491 * C606 + C2665 * C394 + C2669 + C2669 +
           C15712 * C607) *
              C15741 +
          (C2663 * C82 + C2670 + C2670 + C2490 * C218 + C2664 * C392 + C2671 +
           C2671 + C2491 * C608 + C2665 * C395 + C2672 + C2672 +
           C15712 * C609) *
              C15728 +
          (C2663 * C83 + C2673 + C2673 + C2490 * C219 + C2664 * C393 + C2674 +
           C2674 + C2491 * C610 + C2665 * C396 + C2675 + C2675 +
           C15712 * C611) *
              C15708) *
         C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (C2971 * C81 + C2979 + C2979 + C2850 * C217 + C2972 * C391 + C2980 +
          C2980 + C2851 * C606 + C2973 * C394 + C2981 + C2981 + C2852 * C607 +
          C2974 * C2857 + C2982 + C2982 + C2853 * C2976 + C2975 * C2858 +
          C2983 + C2983 + C2854 * C2977) *
         C15365 * C15418 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C123 +
                     (C156 * C124 + C15418 * C249) * C15407) *
                        C61 +
                    ((C156 * C82 + C15418 * C158) * C123 +
                     (C156 * C125 + C15418 * C250) * C15407) *
                        C62 +
                    ((C156 * C83 + C15418 * C159) * C123 +
                     (C156 * C126 + C15418 * C251) * C15407) *
                        C63 +
                    ((C156 * C84 + C15418 * C160) * C123 +
                     (C156 * C127 + C15418 * C252) * C15407) *
                        C64 +
                    ((C156 * C85 + C15418 * C161) * C123 +
                     (C156 * C128 + C15418 * C253) * C15407) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C456 +
                     (C156 * C124 + C15418 * C249) * C15744 +
                     (C156 * C391 + C15418 * C509) * C457 +
                     (C156 * C459 + C15418 * C659) * C15732 +
                     (C156 * C394 + C15418 * C512) * C458 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C379 +
                    ((C156 * C82 + C15418 * C158) * C456 +
                     (C156 * C125 + C15418 * C250) * C15744 +
                     (C156 * C392 + C15418 * C510) * C457 +
                     (C156 * C461 + C15418 * C661) * C15732 +
                     (C156 * C395 + C15418 * C513) * C458 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C380 +
                    ((C156 * C83 + C15418 * C159) * C456 +
                     (C156 * C126 + C15418 * C251) * C15744 +
                     (C156 * C393 + C15418 * C511) * C457 +
                     (C156 * C463 + C15418 * C663) * C15732 +
                     (C156 * C396 + C15418 * C514) * C458 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C156 * C81 + C15418 * C157) * C2546 +
                     (C156 * C124 + C15418 * C249) * C2490 +
                     (C156 * C391 + C15418 * C509) * C2547 +
                     (C156 * C459 + C15418 * C659) * C2491 +
                     (C156 * C394 + C15418 * C512) * C2548 +
                     (C156 * C460 + C15418 * C660) * C15712) *
                        C15741 +
                    ((C156 * C82 + C15418 * C158) * C2546 +
                     (C156 * C125 + C15418 * C250) * C2490 +
                     (C156 * C392 + C15418 * C510) * C2547 +
                     (C156 * C461 + C15418 * C661) * C2491 +
                     (C156 * C395 + C15418 * C513) * C2548 +
                     (C156 * C462 + C15418 * C662) * C15712) *
                        C15728 +
                    ((C156 * C83 + C15418 * C159) * C2546 +
                     (C156 * C126 + C15418 * C251) * C2490 +
                     (C156 * C393 + C15418 * C511) * C2547 +
                     (C156 * C463 + C15418 * C663) * C2491 +
                     (C156 * C396 + C15418 * C514) * C2548 +
                     (C156 * C464 + C15418 * C664) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C156 * C81 + C15418 * C157) * C2890 +
                    (C156 * C124 + C15418 * C249) * C2850 +
                    (C156 * C391 + C15418 * C509) * C2891 +
                    (C156 * C459 + C15418 * C659) * C2851 +
                    (C156 * C394 + C15418 * C512) * C2892 +
                    (C156 * C460 + C15418 * C660) * C2852 +
                    (C156 * C2857 + C15418 * C2921) * C2893 +
                    (C156 * C2895 + C15418 * C3005) * C2853 +
                    (C156 * C2858 + C15418 * C2922) * C2894 +
                    (C156 * C2896 + C15418 * C3006) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C72 * C81 + C61 * C86 + C74 * C82 + C62 * C87 + C76 * C83 +
           C63 * C88 + C78 * C84 + C64 * C89 + C80 * C85 + C65 * C90) *
              C156 +
          (C72 * C157 + C61 * C276 + C74 * C158 + C62 * C277 + C76 * C159 +
           C63 * C278 + C78 * C160 + C64 * C279 + C80 * C161 + C65 * C280) *
              C15418) *
         C15407 * C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C386 * C81 + C379 * C86 + C388 * C82 + C380 * C87 + C390 * C83 +
            C15708 * C88) *
               C156 +
           (C386 * C157 + C379 * C276 + C388 * C158 + C380 * C277 +
            C390 * C159 + C15708 * C278) *
               C15418) *
              C15744 +
          ((C386 * C391 + C379 * C397 + C388 * C392 + C380 * C398 +
            C390 * C393 + C15708 * C399) *
               C156 +
           (C386 * C509 + C379 * C703 + C388 * C510 + C380 * C704 +
            C390 * C511 + C15708 * C705) *
               C15418) *
              C15732 +
          ((C386 * C394 + C379 * C400 + C388 * C395 + C380 * C401 +
            C390 * C396 + C15708 * C402) *
               C156 +
           (C386 * C512 + C379 * C706 + C388 * C513 + C380 * C707 +
            C390 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2494 * C81 + C15741 * C86 + C2496 * C82 + C15728 * C87 +
            C2498 * C83 + C15708 * C88) *
               C156 +
           (C2494 * C157 + C15741 * C276 + C2496 * C158 + C15728 * C277 +
            C2498 * C159 + C15708 * C278) *
               C15418) *
              C2490 +
          ((C2494 * C391 + C15741 * C397 + C2496 * C392 + C15728 * C398 +
            C2498 * C393 + C15708 * C399) *
               C156 +
           (C2494 * C509 + C15741 * C703 + C2496 * C510 + C15728 * C704 +
            C2498 * C511 + C15708 * C705) *
               C15418) *
              C2491 +
          ((C2494 * C394 + C15741 * C400 + C2496 * C395 + C15728 * C401 +
            C2498 * C396 + C15708 * C402) *
               C156 +
           (C2494 * C512 + C15741 * C706 + C2496 * C513 + C15728 * C707 +
            C2498 * C514 + C15708 * C708) *
               C15418) *
              C15712) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C2856 * C81 + C15365 * C86) * C156 +
           (C2856 * C157 + C15365 * C276) * C15418) *
              C2850 +
          ((C2856 * C391 + C15365 * C397) * C156 +
           (C2856 * C509 + C15365 * C703) * C15418) *
              C2851 +
          ((C2856 * C394 + C15365 * C400) * C156 +
           (C2856 * C512 + C15365 * C706) * C15418) *
              C2852 +
          ((C2856 * C2857 + C15365 * C2859) * C156 +
           (C2856 * C2921 + C15365 * C3029) * C15418) *
              C2853 +
          ((C2856 * C2858 + C15365 * C2860) * C156 +
           (C2856 * C2922 + C15365 * C3030) * C15418) *
              C2854) *
         C68 * C69 * C70) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C123 * C81 + C15407 * C124) * C156 +
                     (C123 * C157 + C15407 * C303) * C15418) *
                        C61 +
                    ((C123 * C82 + C15407 * C125) * C156 +
                     (C123 * C158 + C15407 * C304) * C15418) *
                        C62 +
                    ((C123 * C83 + C15407 * C126) * C156 +
                     (C123 * C159 + C15407 * C305) * C15418) *
                        C63 +
                    ((C123 * C84 + C15407 * C127) * C156 +
                     (C123 * C160 + C15407 * C306) * C15418) *
                        C64 +
                    ((C123 * C85 + C15407 * C128) * C156 +
                     (C123 * C161 + C15407 * C307) * C15418) *
                        C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C456 * C81 + C15744 * C124 + C457 * C391 + C15732 * C459 +
                      C458 * C394 + C15712 * C460) *
                         C156 +
                     (C456 * C157 + C15744 * C303 + C457 * C509 +
                      C15732 * C747 + C458 * C512 + C15712 * C748) *
                         C15418) *
                        C379 +
                    ((C456 * C82 + C15744 * C125 + C457 * C392 + C15732 * C461 +
                      C458 * C395 + C15712 * C462) *
                         C156 +
                     (C456 * C158 + C15744 * C304 + C457 * C510 +
                      C15732 * C749 + C458 * C513 + C15712 * C750) *
                         C15418) *
                        C380 +
                    ((C456 * C83 + C15744 * C126 + C457 * C393 + C15732 * C463 +
                      C458 * C396 + C15712 * C464) *
                         C156 +
                     (C456 * C159 + C15744 * C305 + C457 * C511 +
                      C15732 * C751 + C458 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C2546 * C81 + C2490 * C124 + C2547 * C391 + C2491 * C459 +
                      C2548 * C394 + C15712 * C460) *
                         C156 +
                     (C2546 * C157 + C2490 * C303 + C2547 * C509 +
                      C2491 * C747 + C2548 * C512 + C15712 * C748) *
                         C15418) *
                        C15741 +
                    ((C2546 * C82 + C2490 * C125 + C2547 * C392 + C2491 * C461 +
                      C2548 * C395 + C15712 * C462) *
                         C156 +
                     (C2546 * C158 + C2490 * C304 + C2547 * C510 +
                      C2491 * C749 + C2548 * C513 + C15712 * C750) *
                         C15418) *
                        C15728 +
                    ((C2546 * C83 + C2490 * C126 + C2547 * C393 + C2491 * C463 +
                      C2548 * C396 + C15712 * C464) *
                         C156 +
                     (C2546 * C159 + C2490 * C305 + C2547 * C511 +
                      C2491 * C751 + C2548 * C514 + C15712 * C752) *
                         C15418) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C2890 * C81 + C2850 * C124 + C2891 * C391 + C2851 * C459 +
                     C2892 * C394 + C2852 * C460 + C2893 * C2857 +
                     C2853 * C2895 + C2894 * C2858 + C2854 * C2896) *
                        C156 +
                    (C2890 * C157 + C2850 * C303 + C2891 * C509 + C2851 * C747 +
                     C2892 * C512 + C2852 * C748 + C2893 * C2921 +
                     C2853 * C3053 + C2894 * C2922 + C2854 * C3054) *
                        C15418) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
    d2eezz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C15407 * C61 +
                    (C330 * C82 + C338 + C338 + C15418 * C332) * C15407 * C62 +
                    (C330 * C83 + C339 + C339 + C15418 * C333) * C15407 * C63 +
                    (C330 * C84 + C340 + C340 + C15418 * C334) * C15407 * C64 +
                    (C330 * C85 + C341 + C341 + C15418 * C335) * C15407 * C65) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C15744 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C15732 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C379 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C15744 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C15732 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C380 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C15744 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C15732 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C330 * C81 + C337 + C337 + C15418 * C331) * C2490 +
                     (C330 * C391 + C798 + C798 + C15418 * C791) * C2491 +
                     (C330 * C394 + C799 + C799 + C15418 * C792) * C15712) *
                        C15741 +
                    ((C330 * C82 + C338 + C338 + C15418 * C332) * C2490 +
                     (C330 * C392 + C800 + C800 + C15418 * C793) * C2491 +
                     (C330 * C395 + C801 + C801 + C15418 * C794) * C15712) *
                        C15728 +
                    ((C330 * C83 + C339 + C339 + C15418 * C333) * C2490 +
                     (C330 * C393 + C802 + C802 + C15418 * C795) * C2491 +
                     (C330 * C396 + C803 + C803 + C15418 * C796) * C15712) *
                        C15708) *
                   C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C330 * C81 + C337 + C337 + C15418 * C331) * C2850 +
                    (C330 * C391 + C798 + C798 + C15418 * C791) * C2851 +
                    (C330 * C394 + C799 + C799 + C15418 * C792) * C2852 +
                    (C330 * C2857 + C3080 + C3080 + C15418 * C3077) * C2853 +
                    (C330 * C2858 + C3081 + C3081 + C15418 * C3078) * C2854) *
                   C15365 * C68 * C69 * C70) /
                      (p * q * std::sqrt(p + q));
}
