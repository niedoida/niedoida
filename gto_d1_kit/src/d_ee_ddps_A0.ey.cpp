/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2120_1_ints(const double ae,
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
                              double* const g)
{
    const double xAB = xA - xB;
    const double yAB = yA - yB;
    const double zAB = zA - zB;
    const double xCD = xC - xD;
    const double yCD = yC - yD;
    const double zCD = zC - zD;
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double muab = ae * be / p;
    const double mucd = ce * de / q;
    const double rAB2 = xAB * xAB + yAB * yAB + zAB * zAB;
    const double rCD2 = xCD * xCD + yCD * yCD + zCD * zCD;
    const double kab = std::exp(-muab * rAB2);
    const double kcd = std::exp(-mucd * rCD2);
    const double C17829 = 2 * q;
    const double C18429 = de * zCD;
    const double C18428 = be * zAB;
    const double C18426 = de * yCD;
    const double C18425 = be * yAB;
    const double C18423 = de * xCD;
    const double C18422 = be * xAB;
    const double C18497 = p + q;
    const double C19006 = p * q;
    const double C19005 = std::pow(Pi, 2.5);
    const double C19001 = zP - zQ;
    const double C19000 = yP - yQ;
    const double C18999 = xP - xQ;
    const double C18998 = 2 * p;
    const double C18480 = C18428 + C18429;
    const double C18478 = C18425 + C18426;
    const double C18477 = C18422 + C18423;
    const double C19007 = std::sqrt(C18497);
    const double C19019 = C19005 * kab;
    const double C19015 = C19001 * q;
    const double C19014 = C19000 * q;
    const double C19013 = C18999 * q;
    const double C19020 = C19006 * C19007;
    const double C19029 = C19019 * kcd;
    const double C12970 = (2. * C19029 * bs[0]) / C19020;
    const double C12971 = (2. * C19029 * bs[1]) / C19020;
    const double C13577 = (2. * C19029 * bs[2]) / C19020;
    const double C13968 = (2. * C19029 * bs[3]) / C19020;
    const double C14162 = (2. * C19029 * bs[4]) / C19020;
    const double C14259 = (2. * C19029 * bs[5]) / C19020;
    const double C18473 = C12970 / C17829;
    const double C18997 = C12971 * q;
    const double C5285 = -((C12970 * C18422) / p + (C12971 * C19013) / C18497);
    const double C6531 = -((C12970 * C18425) / p + (C12971 * C19014) / C18497);
    const double C6619 = -((C12970 * C18428) / p + (C12971 * C19015) / C18497);
    const double C19004 = C13577 * q;
    const double C12748 = -((C12971 * C18422) / p + (C13577 * C19013) / C18497);
    const double C12910 = -((C12971 * C18425) / p + (C13577 * C19014) / C18497);
    const double C12941 = -((C12971 * C18428) / p + (C13577 * C19015) / C18497);
    const double C19010 = C13968 * q;
    const double C13560 = -((C13577 * C18422) / p + (C13968 * C19013) / C18497);
    const double C15156 = -((C13577 * C18425) / p + (C13968 * C19014) / C18497);
    const double C15215 = -((C13577 * C18428) / p + (C13968 * C19015) / C18497);
    const double C19011 = C14162 * q;
    const double C14019 = -((C13968 * C18422) / p + (C14162 * C19013) / C18497);
    const double C15600 = -((C13968 * C18425) / p + (C14162 * C19014) / C18497);
    const double C17155 = -((C13968 * C18428) / p + (C14162 * C19015) / C18497);
    const double C14178 = -((C14162 * C18422) / p + (C14259 * C19013) / C18497);
    const double C15768 = -((C14162 * C18425) / p + (C14259 * C19014) / C18497);
    const double C17323 = -((C14162 * C18428) / p + (C14259 * C19015) / C18497);
    const double C19012 = C18997 / C18497;
    const double C18470 = C5285 / C17829;
    const double C18469 = C6531 / C17829;
    const double C18472 = C6619 / C17829;
    const double C19018 = C19004 / C18497;
    const double C5507 = -((C6531 * C18422) / p + (C12910 * C19013) / C18497);
    const double C5626 = -((C6619 * C18422) / p + (C12941 * C19013) / C18497);
    const double C6560 = -((C6619 * C18425) / p + (C12941 * C19014) / C18497);
    const double C19023 = C19010 / C18497;
    const double C12925 = -((C12941 * C18425) / p + (C15215 * C19014) / C18497);
    const double C19024 = C19011 / C18497;
    const double C19025 = C12970 - C19012;
    const double C19028 = C12971 - C19018;
    const double C18474 = C5507 * p;
    const double C18452 = C5507 / q;
    const double C18439 = C5507 / C17829;
    const double C18475 = C5626 * p;
    const double C18455 = C5626 / q;
    const double C18443 = C5626 / C17829;
    const double C18476 = C6560 * p;
    const double C18462 = C6560 / q;
    const double C18447 = C6560 / C17829;
    const double C19032 = C13577 - C19023;
    const double C6575 = -((C6560 * C18422) / p + (C12925 * C19013) / C18497);
    const double C19033 = C13968 - C19024;
    const double C19034 = C19025 / C18998;
    const double C19036 = C19028 / C18998;
    const double C17702 = -(C5285 * C18478 + C18474) / q;
    const double C17827 = -(C6531 * C18477 + C18474) / q;
    const double C17711 = -(C5285 * C18480 + C18475) / q;
    const double C17877 = -(C6619 * C18477 + C18475) / q;
    const double C17769 = -(C6531 * C18480 + C18476) / q;
    const double C17902 = -(C6619 * C18478 + C18476) / q;
    const double C19038 = C19032 / C18998;
    const double C18471 = C6575 * p;
    const double C19039 = C19033 / C18998;
    const double C5238 =
        C19034 - ((C5285 * C18422) / p + (C12748 * C19013) / C18497);
    const double C5757 =
        C19034 - ((C6531 * C18425) / p + (C12910 * C19014) / C18497);
    const double C6167 =
        C19034 - ((C6619 * C18428) / p + (C12941 * C19015) / C18497);
    const double C12728 =
        C19036 - ((C12748 * C18422) / p + (C13560 * C19013) / C18497);
    const double C12792 =
        C19036 - ((C12910 * C18425) / p + (C15156 * C19014) / C18497);
    const double C12851 =
        C19036 - ((C12941 * C18428) / p + (C15215 * C19015) / C18497);
    const double C18442 = C17711 / C17829;
    const double C18441 = C17769 / C17829;
    const double C18445 = C17902 / C17829;
    const double C13671 =
        C19038 - ((C13560 * C18422) / p + (C14019 * C19013) / C18497);
    const double C13717 =
        C19038 - ((C15156 * C18425) / p + (C15600 * C19014) / C18497);
    const double C13747 =
        C19038 - ((C15215 * C18428) / p + (C17155 * C19015) / C18497);
    const double C4939 = -(C5507 * C18480 + C18471) / q;
    const double C5105 = -(C5626 * C18478 + C18471) / q;
    const double C5150 = -(C6560 * C18477 + C18471) / q;
    const double C14035 =
        C19039 - ((C14019 * C18422) / p + (C14178 * C19013) / C18497);
    const double C14096 =
        C19039 - ((C17155 * C18428) / p + (C17323 * C19015) / C18497);
    const double C14112 =
        C19039 - ((C15600 * C18425) / p + (C15768 * C19014) / C18497);
    const double C18424 = C5238 / C17829;
    const double C17677 = C18473 - (C5285 * C18477) / q - (C5238 * p) / q;
    const double C18432 = C5757 / C17829;
    const double C17736 = C18473 - (C6531 * C18478) / q - (C5757 * p) / q;
    const double C18436 = C6167 / C17829;
    const double C17794 = C18473 - (C6619 * C18480) / q - (C6167 * p) / q;
    const double C5254 = (C5285 - (C12748 * q) / C18497) / p -
                         ((C5238 * C18422) / p + (C12728 * C19013) / C18497);
    const double C5523 = -((C5238 * C18425) / p + (C12728 * C19014) / C18497);
    const double C5642 = -((C5238 * C18428) / p + (C12728 * C19015) / C18497);
    const double C19002 = C12792 * q;
    const double C5772 = -((C5757 * C18422) / p + (C12792 * C19013) / C18497);
    const double C5977 = (C6531 - (C12910 * q) / C18497) / p -
                         ((C5757 * C18425) / p + (C12792 * C19014) / C18497);
    const double C6052 = -((C5757 * C18428) / p + (C12792 * C19015) / C18497);
    const double C19003 = C12851 * q;
    const double C6182 = -((C6167 * C18422) / p + (C12851 * C19013) / C18497);
    const double C6385 = -((C6167 * C18425) / p + (C12851 * C19014) / C18497);
    const double C6444 = (C6619 - (C12941 * q) / C18497) / p -
                         ((C6167 * C18428) / p + (C12851 * C19015) / C18497);
    const double C12986 = (C12748 - (C13560 * q) / C18497) / p -
                          ((C12728 * C18422) / p + (C13671 * C19013) / C18497);
    const double C14725 = -((C12728 * C18428) / p + (C13671 * C19015) / C18497);
    const double C19008 = C13717 * q;
    const double C13054 = -((C12792 * C18422) / p + (C13717 * C19013) / C18497);
    const double C13264 = (C12910 - (C15156 * q) / C18497) / p -
                          ((C12792 * C18425) / p + (C13717 * C19014) / C18497);
    const double C13309 = -((C12792 * C18428) / p + (C13717 * C19015) / C18497);
    const double C19009 = C13747 * q;
    const double C13099 = -((C12851 * C18422) / p + (C13747 * C19013) / C18497);
    const double C13443 = -((C12851 * C18425) / p + (C13747 * C19014) / C18497);
    const double C13458 = (C12941 - (C15215 * q) / C18497) / p -
                          ((C12851 * C18428) / p + (C13747 * C19015) / C18497);
    const double C13687 = (C13560 - (C14019 * q) / C18497) / p -
                          ((C13671 * C18422) / p + (C14035 * C19013) / C18497);
    const double C13807 = -((C13747 * C18422) / p + (C14096 * C19013) / C18497);
    const double C13839 = (C15215 - (C17155 * q) / C18497) / p -
                          ((C13747 * C18428) / p + (C14096 * C19015) / C18497);
    const double C15448 = -((C13747 * C18425) / p + (C14096 * C19014) / C18497);
    const double C13777 = (C15156 - (C15600 * q) / C18497) / p -
                          ((C13717 * C18425) / p + (C14112 * C19014) / C18497);
    const double C13823 = -((C13717 * C18422) / p + (C14112 * C19013) / C18497);
    const double C18446 = C17794 / C17829;
    const double C3753 = C5285 / q - (C5238 * C18477) / q - (C5254 * p) / q;
    const double C18449 = C5523 * p;
    const double C18451 = C5642 * p;
    const double C19016 = C19002 / C18497;
    const double C18457 = C5772 * p;
    const double C4236 = C6531 / q - (C5757 * C18478) / q - (C5977 * p) / q;
    const double C18460 = C6052 * p;
    const double C19017 = C19003 / C18497;
    const double C18464 = C6182 * p;
    const double C18466 = C6385 * p;
    const double C4647 = C6619 / q - (C6167 * C18480) / q - (C6444 * p) / q;
    const double C5270 = (3 * (C5238 - (C12728 * q) / C18497)) / C18998 -
                         ((C5254 * C18422) / p + (C12986 * C19013) / C18497);
    const double C5538 = -((C5254 * C18425) / p + (C12986 * C19014) / C18497);
    const double C5657 = -((C5254 * C18428) / p + (C12986 * C19015) / C18497);
    const double C6590 = -((C5642 * C18425) / p + (C14725 * C19014) / C18497);
    const double C19021 = C19008 / C18497;
    const double C5992 = -((C5977 * C18422) / p + (C13264 * C19013) / C18497);
    const double C8960 = -((C5977 * C18428) / p + (C13264 * C19015) / C18497);
    const double C6067 = -((C6052 * C18422) / p + (C13309 * C19013) / C18497);
    const double C19022 = C19009 / C18497;
    const double C6400 = -((C6385 * C18422) / p + (C13443 * C19013) / C18497);
    const double C6459 = -((C6444 * C18422) / p + (C13458 * C19013) / C18497);
    const double C9333 = -((C6444 * C18425) / p + (C13458 * C19014) / C18497);
    const double C13002 = (3 * (C12728 - (C13671 * q) / C18497)) / C18998 -
                          ((C12986 * C18422) / p + (C13687 * C19013) / C18497);
    const double C14607 = -((C12986 * C18425) / p + (C13687 * C19014) / C18497);
    const double C14710 = -((C12986 * C18428) / p + (C13687 * C19015) / C18497);
    const double C13247 = -((C13458 * C18422) / p + (C13839 * C19013) / C18497);
    const double C13503 = -((C13458 * C18425) / p + (C13839 * C19014) / C18497);
    const double C13186 = -((C13264 * C18422) / p + (C13777 * C19013) / C18497);
    const double C13356 = -((C13264 * C18428) / p + (C13777 * C19015) / C18497);
    const double C3850 = -(C5238 * C18478 + C18449) / q;
    const double C4878 = C18469 - (C5507 * C18477) / q - C18449 / q;
    const double C3882 = -(C5238 * C18480 + C18451) / q;
    const double C5060 = C18472 - (C5626 * C18477) / q - C18451 / q;
    const double C19026 = C5757 - C19016;
    const double C4140 = -(C5757 * C18477 + C18457) / q;
    const double C4924 = C18470 - (C5507 * C18478) / q - C18457 / q;
    const double C4266 = -(C5757 * C18480 + C18460) / q;
    const double C5194 = C18472 - (C6560 * C18478) / q - C18460 / q;
    const double C19027 = C6167 - C19017;
    const double C4520 = -(C6167 * C18477 + C18464) / q;
    const double C5121 = C18470 - (C5626 * C18480) / q - C18464 / q;
    const double C4617 = -(C6167 * C18478 + C18466) / q;
    const double C5209 = C18469 - (C6560 * C18480) / q - C18466 / q;
    const double C3733 =
        (3 * C5238) / C17829 - (C5254 * C18477) / q - (C5270 * p) / q;
    const double C18448 = C5538 * p;
    const double C18450 = C5657 * p;
    const double C18454 = C6590 * p;
    const double C19030 = C12792 - C19021;
    const double C18458 = C5992 * p;
    const double C18461 = C8960 * p;
    const double C18459 = C6067 * p;
    const double C19031 = C12851 - C19022;
    const double C18465 = C6400 * p;
    const double C18467 = C6459 * p;
    const double C18468 = C9333 * p;
    const double C5787 =
        C19026 / C18998 - ((C5772 * C18422) / p + (C13054 * C19013) / C18497);
    const double C8858 = (3 * C19026) / C18998 -
                         ((C5977 * C18425) / p + (C13264 * C19014) / C18497);
    const double C19035 = C19027 / C18998;
    const double C12185 = (3 * C19027) / C18998 -
                          ((C6444 * C18428) / p + (C13458 * C19015) / C18497);
    const double C803 =
        C17677 / q - (C3753 * C18477) / q + C18424 - (C3733 * p) / q;
    const double C3834 = -(C5254 * C18478 + C18448) / q;
    const double C3928 = C18452 - (C5523 * C18477) / q - C18448 / q;
    const double C3866 = -(C5254 * C18480 + C18450) / q;
    const double C4024 = C18455 - (C5642 * C18477) / q - C18450 / q;
    const double C3993 = -(C5523 * C18480 + C18454) / q;
    const double C4074 = -(C5642 * C18478 + C18454) / q;
    const double C4968 = C18447 - (C6575 * C18477) / q - C18454 / q;
    const double C13279 = (3 * C19030) / C18998 -
                          ((C13264 * C18425) / p + (C13777 * C19014) / C18497);
    const double C16329 =
        C19030 / C18998 - ((C13054 * C18422) / p + (C13823 * C19013) / C18497);
    const double C4221 = C18452 - (C5772 * C18478) / q - C18458 / q;
    const double C4312 = -(C5977 * C18477 + C18458) / q;
    const double C4375 = -(C5977 * C18480 + C18461) / q;
    const double C4455 = C18462 - (C6052 * C18478) / q - C18461 / q;
    const double C4251 = -(C5772 * C18480 + C18459) / q;
    const double C4405 = -(C6052 * C18477 + C18459) / q;
    const double C5016 = C18443 - (C6575 * C18478) / q - C18459 / q;
    const double C19037 = C19031 / C18998;
    const double C13473 = (3 * C19031) / C18998 -
                          ((C13458 * C18428) / p + (C13839 * C19015) / C18497);
    const double C4601 = -(C6182 * C18478 + C18465) / q;
    const double C4692 = -(C6385 * C18477 + C18465) / q;
    const double C5031 = C18439 - (C6575 * C18480) / q - C18465 / q;
    const double C4632 = C18455 - (C6182 * C18480) / q - C18467 / q;
    const double C4784 = -(C6444 * C18477 + C18467) / q;
    const double C4755 = C18462 - (C6385 * C18480) / q - C18468 / q;
    const double C4833 = -(C6444 * C18478 + C18468) / q;
    const double C18453 = C5787 * p;
    const double C4360 =
        (3 * C5757) / C17829 - (C5977 * C18478) / q - (C8858 * p) / q;
    const double C6197 =
        C19035 - ((C6182 * C18422) / p + (C13099 * C19013) / C18497);
    const double C9261 =
        C19035 - ((C6385 * C18425) / p + (C13443 * C19014) / C18497);
    const double C4849 =
        (3 * C6167) / C17829 - (C6444 * C18480) / q - (C12185 * p) / q;
    const double C836 = C17702 / q - (C3850 * C18477) / q - (C3834 * p) / q;
    const double C1325 =
        C17827 / C17829 - (C4878 * C18477) / q + C18439 - (C3928 * p) / q;
    const double C847 = C17711 / q - (C3882 * C18477) / q - (C3866 * p) / q;
    const double C1487 =
        C17877 / C17829 - (C5060 * C18477) / q + C18443 - (C4024 * p) / q;
    const double C18431 = C3993 * p;
    const double C1517 = C18445 - (C5105 * C18477) / q - (C4074 * p) / q;
    const double C1643 = C18447 - (C5150 * C18477) / q - (C4968 * p) / q;
    const double C18434 = C4221 * p;
    const double C1032 = C17769 / q - (C4266 * C18478) / q - (C4375 * p) / q;
    const double C1653 =
        C18445 - (C5194 * C18478) / q + C18447 - (C4455 * p) / q;
    const double C18435 = C4251 * p;
    const double C18444 = C5016 * p;
    const double C13325 =
        C19037 - ((C13443 * C18425) / p + (C15448 * C19014) / C18497);
    const double C14771 =
        C19037 - ((C13099 * C18422) / p + (C13807 * C19013) / C18497);
    const double C1184 = -(C4617 * C18477 + C4601 * p) / q;
    const double C18440 = C5031 * p;
    const double C18437 = C4632 * p;
    const double C18438 = C4755 * p;
    const double C18483 = C18453 / q;
    const double C988 =
        C17736 / q - (C4236 * C18478) / q + C18432 - (C4360 * p) / q;
    const double C18456 = C6197 * p;
    const double C18463 = C9261 * p;
    const double C1173 =
        C17794 / q - (C4647 * C18480) / q + C18436 - (C4849 * p) / q;
    const double C858 = -(C3882 * C18478 + C18431) / q;
    const double C1365 = C18441 - (C4939 * C18477) / q - C18431 / q;
    const double C1010 = -(C4236 * C18477 + C18434) / q;
    const double C1335 =
        C17702 / C17829 - (C4924 * C18478) / q + C18439 - C18434 / q;
    const double C1021 = -(C4266 * C18477 + C18435) / q;
    const double C1375 = C18442 - (C4939 * C18478) / q - C18435 / q;
    const double C1497 = C18443 - (C5105 * C18478) / q - C18444 / q;
    const double C1673 = -(C5194 * C18477 + C18444) / q;
    const double C1345 = C18439 - (C4939 * C18480) / q - C18440 / q;
    const double C1537 = -(C5121 * C18478 + C18440) / q;
    const double C1683 = -(C5209 * C18477 + C18440) / q;
    const double C1195 = -(C4647 * C18477 + C18437) / q;
    const double C1507 = C18442 - (C5121 * C18480) / q + C18443 - C18437 / q;
    const double C1206 = -(C4647 * C18478 + C18438) / q;
    const double C1663 = C18441 - (C5209 * C18480) / q + C18447 - C18438 / q;
    const double C3977 = C18424 - (C5523 * C18478) / q - C18483;
    const double C4121 = C18432 - (C5772 * C18477) / q - C18483;
    const double C18484 = C18456 / q;
    const double C18485 = C18463 / q;
    const double C18427 = C3977 * p;
    const double C977 = C18432 - (C4140 * C18477) / q - (C4121 * p) / q;
    const double C4091 = C18424 - (C5642 * C18480) / q - C18484;
    const double C4501 = C18436 - (C6182 * C18477) / q - C18484;
    const double C4471 = C18432 - (C6052 * C18480) / q - C18485;
    const double C4740 = C18436 - (C6385 * C18478) / q - C18485;
    const double C18479 = C18427 / q;
    const double C18430 = C4091 * p;
    const double C1151 = C18436 - (C4520 * C18477) / q - (C4501 * p) / q;
    const double C18433 = C4471 * p;
    const double C1162 = C18436 - (C4617 * C18478) / q - (C4740 * p) / q;
    const double C814 = C18424 - (C3850 * C18478) / q - C18479;
    const double C1355 = C17736 / C17829 - (C4924 * C18477) / q - C18479;
    const double C18481 = C18430 / q;
    const double C18482 = C18433 / q;
    const double C825 = C18424 - (C3882 * C18480) / q - C18481;
    const double C1527 = C18446 - (C5121 * C18477) / q - C18481;
    const double C999 = C18432 - (C4266 * C18480) / q - C18482;
    const double C1693 = C18446 - (C5209 * C18478) / q - C18482;
    g[0] = C803;
    g[1] = C814;
    g[2] = C825;
    g[3] = C836;
    g[4] = C847;
    g[5] = C858;
    g[6] = C977;
    g[7] = C988;
    g[8] = C999;
    g[9] = C1010;
    g[10] = C1021;
    g[11] = C1032;
    g[12] = C1151;
    g[13] = C1162;
    g[14] = C1173;
    g[15] = C1184;
    g[16] = C1195;
    g[17] = C1206;
    g[18] = C1325;
    g[19] = C1335;
    g[20] = C1345;
    g[21] = C1355;
    g[22] = C1365;
    g[23] = C1375;
    g[24] = C1487;
    g[25] = C1497;
    g[26] = C1507;
    g[27] = C1517;
    g[28] = C1527;
    g[29] = C1537;
    g[30] = C1643;
    g[31] = C1653;
    g[32] = C1663;
    g[33] = C1673;
    g[34] = C1683;
    g[35] = C1693;
    g[36] = C3733;
    g[37] = C3753;
    g[38] = C3834;
    g[39] = C3850;
    g[40] = C3866;
    g[41] = C3882;
    g[42] = C3928;
    g[43] = C3977;
    g[44] = C3993;
    g[45] = C4024;
    g[46] = C4074;
    g[47] = C4091;
    g[48] = C4121;
    g[49] = C4140;
    g[50] = C4221;
    g[51] = C4236;
    g[52] = C4251;
    g[53] = C4266;
    g[54] = C4312;
    g[55] = C4360;
    g[56] = C4375;
    g[57] = C4405;
    g[58] = C4455;
    g[59] = C4471;
    g[60] = C4501;
    g[61] = C4520;
    g[62] = C4601;
    g[63] = C4617;
    g[64] = C4632;
    g[65] = C4647;
    g[66] = C4692;
    g[67] = C4740;
    g[68] = C4755;
    g[69] = C4784;
    g[70] = C4833;
    g[71] = C4849;
    g[72] = C4878;
    g[73] = C4924;
    g[74] = C4939;
    g[75] = C4968;
    g[76] = C5016;
    g[77] = C5031;
    g[78] = C5060;
    g[79] = C5105;
    g[80] = C5121;
    g[81] = C5150;
    g[82] = C5194;
    g[83] = C5209;
    g[84] = C5238;
    g[85] = C5254;
    g[86] = C5270;
    g[87] = C5285;
    g[88] = C5507;
    g[89] = C5523;
    g[90] = C5538;
    g[91] = C5626;
    g[92] = C5642;
    g[93] = C5657;
    g[94] = C5757;
    g[95] = C5772;
    g[96] = C5787;
    g[97] = C5977;
    g[98] = C5992;
    g[99] = C6052;
    g[100] = C6067;
    g[101] = C6167;
    g[102] = C6182;
    g[103] = C6197;
    g[104] = C6385;
    g[105] = C6400;
    g[106] = C6444;
    g[107] = C6459;
    g[108] = C6531;
    g[109] = C6560;
    g[110] = C6575;
    g[111] = C6590;
    g[112] = C6619;
    g[113] = C8858;
    g[114] = C8960;
    g[115] = C9261;
    g[116] = C9333;
    g[117] = C12185;
    g[118] = C12728;
    g[119] = C12748;
    g[120] = C12792;
    g[121] = C12851;
    g[122] = C12910;
    g[123] = C12925;
    g[124] = C12941;
    g[125] = C12970;
    g[126] = C12971;
    g[127] = C12986;
    g[128] = C13002;
    g[129] = C13054;
    g[130] = C13099;
    g[131] = C13186;
    g[132] = C13247;
    g[133] = C13264;
    g[134] = C13279;
    g[135] = C13309;
    g[136] = C13325;
    g[137] = C13356;
    g[138] = C13443;
    g[139] = C13458;
    g[140] = C13473;
    g[141] = C13503;
    g[142] = C13560;
    g[143] = C13577;
    g[144] = C13671;
    g[145] = C13687;
    g[146] = C13717;
    g[147] = C13747;
    g[148] = C13777;
    g[149] = C13807;
    g[150] = C13823;
    g[151] = C13839;
    g[152] = C13968;
    g[153] = C14019;
    g[154] = C14035;
    g[155] = C14096;
    g[156] = C14112;
    g[157] = C14162;
    g[158] = C14178;
    g[159] = C14259;
    g[160] = C14607;
    g[161] = C14710;
    g[162] = C14725;
    g[163] = C14771;
    g[164] = C15156;
    g[165] = C15215;
    g[166] = C15448;
    g[167] = C15600;
    g[168] = C15768;
    g[169] = C16329;
    g[170] = C17155;
    g[171] = C17323;
}
