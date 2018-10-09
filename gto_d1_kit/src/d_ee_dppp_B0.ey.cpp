/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_2_ints(const double ae,
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
    const double C23365 = 2 * q;
    const double C23895 = de * zCD;
    const double C23894 = be * zAB;
    const double C23890 = de * yCD;
    const double C23889 = be * yAB;
    const double C23887 = de * xCD;
    const double C23886 = be * xAB;
    const double C23961 = p + q;
    const double C24470 = p * q;
    const double C24469 = std::pow(Pi, 2.5);
    const double C24465 = zP - zQ;
    const double C24464 = yP - yQ;
    const double C24463 = 2 * p;
    const double C24461 = xP - xQ;
    const double C23944 = C23894 + C23895;
    const double C23942 = C23889 + C23890;
    const double C23941 = C23886 + C23887;
    const double C24471 = std::sqrt(C23961);
    const double C24483 = C24469 * kab;
    const double C24479 = C24465 * q;
    const double C24478 = C24464 * q;
    const double C24476 = C24461 * q;
    const double C24484 = C24470 * C24471;
    const double C24493 = C24483 * kcd;
    const double C18222 = (2. * C24493 * bs[0]) / C24484;
    const double C18223 = (2. * C24493 * bs[1]) / C24484;
    const double C19019 = (2. * C24493 * bs[2]) / C24484;
    const double C19410 = (2. * C24493 * bs[3]) / C24484;
    const double C19604 = (2. * C24493 * bs[4]) / C24484;
    const double C19701 = (2. * C24493 * bs[5]) / C24484;
    const double C23937 = C18222 / C23365;
    const double C24462 = C18223 * q;
    const double C11455 = -((C18222 * C23886) / p + (C18223 * C24476) / C23961);
    const double C12085 = -((C18222 * C23889) / p + (C18223 * C24478) / C23961);
    const double C12115 = -((C18222 * C23894) / p + (C18223 * C24479) / C23961);
    const double C24468 = C19019 * q;
    const double C18190 = -((C18223 * C23886) / p + (C19019 * C24476) / C23961);
    const double C18294 = -((C18223 * C23889) / p + (C19019 * C24478) / C23961);
    const double C18342 = -((C18223 * C23894) / p + (C19019 * C24479) / C23961);
    const double C24474 = C19410 * q;
    const double C19002 = -((C19019 * C23886) / p + (C19410 * C24476) / C23961);
    const double C20627 = -((C19019 * C23889) / p + (C19410 * C24478) / C23961);
    const double C20772 = -((C19019 * C23894) / p + (C19410 * C24479) / C23961);
    const double C24475 = C19604 * q;
    const double C19433 = -((C19410 * C23886) / p + (C19604 * C24476) / C23961);
    const double C21013 = -((C19410 * C23889) / p + (C19604 * C24478) / C23961);
    const double C22582 = -((C19410 * C23894) / p + (C19604 * C24479) / C23961);
    const double C19648 = -((C19604 * C23886) / p + (C19701 * C24476) / C23961);
    const double C21210 = -((C19604 * C23889) / p + (C19701 * C24478) / C23961);
    const double C22765 = -((C19604 * C23894) / p + (C19701 * C24479) / C23961);
    const double C24477 = C24462 / C23961;
    const double C23912 = C11455 / C23365;
    const double C23910 = C12085 / C23365;
    const double C23917 = C12115 / C23365;
    const double C24482 = C24468 / C23961;
    const double C10939 = -((C12085 * C23886) / p + (C18294 * C24476) / C23961);
    const double C11199 = -((C12115 * C23886) / p + (C18342 * C24476) / C23961);
    const double C11327 = -((C12115 * C23889) / p + (C18342 * C24478) / C23961);
    const double C24487 = C24474 / C23961;
    const double C18665 = -((C18342 * C23889) / p + (C20772 * C24478) / C23961);
    const double C24488 = C24475 / C23961;
    const double C24489 = C18222 - C24477;
    const double C24492 = C18223 - C24482;
    const double C23938 = C10939 * p;
    const double C23924 = C10939 / q;
    const double C23909 = C10939 / C23365;
    const double C23939 = C11199 * p;
    const double C23927 = C11199 / q;
    const double C23916 = C11199 / C23365;
    const double C23940 = C11327 * p;
    const double C23932 = C11327 / q;
    const double C23921 = C11327 / C23365;
    const double C24496 = C19019 - C24487;
    const double C11069 = -((C11327 * C23886) / p + (C18665 * C24476) / C23961);
    const double C24497 = C19410 - C24488;
    const double C24498 = C24489 / C24463;
    const double C24500 = C24492 / C24463;
    const double C23158 = -(C11455 * C23942 + C23938) / q;
    const double C23363 = -(C12085 * C23941 + C23938) / q;
    const double C23167 = -(C11455 * C23944 + C23939) / q;
    const double C23437 = -(C12115 * C23941 + C23939) / q;
    const double C23265 = -(C12085 * C23944 + C23940) / q;
    const double C23454 = -(C12115 * C23942 + C23940) / q;
    const double C24502 = C24496 / C24463;
    const double C23914 = C11069 * p;
    const double C24503 = C24497 / C24463;
    const double C9345 =
        C24498 - ((C11455 * C23886) / p + (C18190 * C24476) / C23961);
    const double C9890 =
        C24498 - ((C12085 * C23889) / p + (C18294 * C24478) / C23961);
    const double C10432 =
        C24498 - ((C12115 * C23894) / p + (C18342 * C24479) / C23961);
    const double C18170 =
        C24500 - ((C18190 * C23886) / p + (C19002 * C24476) / C23961);
    const double C18375 =
        C24500 - ((C18294 * C23889) / p + (C20627 * C24478) / C23961);
    const double C18535 =
        C24500 - ((C18342 * C23894) / p + (C20772 * C24479) / C23961);
    const double C23913 = C23167 / C23365;
    const double C23911 = C23265 / C23365;
    const double C23918 = C23454 / C23365;
    const double C19041 =
        C24502 - ((C19002 * C23886) / p + (C19433 * C24476) / C23961);
    const double C19071 =
        C24502 - ((C20627 * C23889) / p + (C21013 * C24478) / C23961);
    const double C19130 =
        C24502 - ((C20772 * C23894) / p + (C22582 * C24479) / C23961);
    const double C3276 = -(C10939 * C23944 + C23914) / q;
    const double C3489 = -(C11199 * C23942 + C23914) / q;
    const double C3693 = -(C11327 * C23941 + C23914) / q;
    const double C19507 =
        C24503 - ((C19433 * C23886) / p + (C19648 * C24476) / C23961);
    const double C19538 =
        C24503 - ((C21013 * C23889) / p + (C21210 * C24478) / C23961);
    const double C19553 =
        C24503 - ((C22582 * C23894) / p + (C22765 * C24479) / C23961);
    const double C23888 = C9345 / C23365;
    const double C23141 = C23937 - (C11455 * C23941) / q - (C9345 * p) / q;
    const double C23898 = C9890 / C23365;
    const double C23256 = C23937 - (C12085 * C23942) / q - (C9890 * p) / q;
    const double C23904 = C10432 / C23365;
    const double C23354 = C23937 - (C12115 * C23944) / q - (C10432 * p) / q;
    const double C9329 = (C11455 - (C18190 * q) / C23961) / p -
                         ((C9345 * C23886) / p + (C18170 * C24476) / C23961);
    const double C9586 = -((C9345 * C23889) / p + (C18170 * C24478) / C23961);
    const double C9723 = -((C9345 * C23894) / p + (C18170 * C24479) / C23961);
    const double C24466 = C18375 * q;
    const double C9875 = -((C9890 * C23886) / p + (C18375 * C24476) / C23961);
    const double C10129 = (C12085 - (C18294 * q) / C23961) / p -
                          ((C9890 * C23889) / p + (C18375 * C24478) / C23961);
    const double C10265 = -((C9890 * C23894) / p + (C18375 * C24479) / C23961);
    const double C24467 = C18535 * q;
    const double C10417 = -((C10432 * C23886) / p + (C18535 * C24476) / C23961);
    const double C10671 = -((C10432 * C23889) / p + (C18535 * C24478) / C23961);
    const double C10805 = (C12115 - (C18342 * q) / C23961) / p -
                          ((C10432 * C23894) / p + (C18535 * C24479) / C23961);
    const double C18206 = (C18190 - (C19002 * q) / C23961) / p -
                          ((C18170 * C23886) / p + (C19041 * C24476) / C23961);
    const double C19899 = -((C18170 * C23894) / p + (C19041 * C24479) / C23961);
    const double C24472 = C19071 * q;
    const double C18310 = -((C18375 * C23886) / p + (C19071 * C24476) / C23961);
    const double C18404 = (C18294 - (C20627 * q) / C23961) / p -
                          ((C18375 * C23889) / p + (C19071 * C24478) / C23961);
    const double C18448 = -((C18375 * C23894) / p + (C19071 * C24479) / C23961);
    const double C24473 = C19130 * q;
    const double C18358 = -((C18535 * C23886) / p + (C19130 * C24476) / C23961);
    const double C18564 = -((C18535 * C23889) / p + (C19130 * C24478) / C23961);
    const double C18593 = (C18342 - (C20772 * q) / C23961) / p -
                          ((C18535 * C23894) / p + (C19130 * C24479) / C23961);
    const double C19231 = (C19002 - (C19433 * q) / C23961) / p -
                          ((C19041 * C23886) / p + (C19507 * C24476) / C23961);
    const double C19275 = (C20627 - (C21013 * q) / C23961) / p -
                          ((C19071 * C23889) / p + (C19538 * C24478) / C23961);
    const double C19291 = -((C19071 * C23886) / p + (C19538 * C24476) / C23961);
    const double C19307 = -((C19130 * C23886) / p + (C19553 * C24476) / C23961);
    const double C19323 = (C20772 - (C22582 * q) / C23961) / p -
                          ((C19130 * C23894) / p + (C19553 * C24479) / C23961);
    const double C20918 = -((C19130 * C23889) / p + (C19553 * C24478) / C23961);
    const double C23919 = C23354 / C23365;
    const double C2434 = C11455 / q - (C9345 * C23941) / q - (C9329 * p) / q;
    const double C23891 = C9586 * p;
    const double C23896 = C9723 * p;
    const double C24480 = C24466 / C23961;
    const double C23899 = C9875 * p;
    const double C2728 = C12085 / q - (C9890 * C23942) / q - (C10129 * p) / q;
    const double C23902 = C10265 * p;
    const double C24481 = C24467 / C23961;
    const double C23905 = C10417 * p;
    const double C23907 = C10671 * p;
    const double C3022 = C12115 / q - (C10432 * C23944) / q - (C10805 * p) / q;
    const double C11440 = (3 * (C9345 - (C18170 * q) / C23961)) / C24463 -
                          ((C9329 * C23886) / p + (C18206 * C24476) / C23961);
    const double C11574 = -((C9329 * C23889) / p + (C18206 * C24478) / C23961);
    const double C11634 = -((C9329 * C23894) / p + (C18206 * C24479) / C23961);
    const double C12100 = -((C9723 * C23889) / p + (C19899 * C24478) / C23961);
    const double C24485 = C24472 / C23961;
    const double C11779 = -((C10129 * C23886) / p + (C18404 * C24476) / C23961);
    const double C14664 = -((C10129 * C23894) / p + (C18404 * C24479) / C23961);
    const double C11839 = -((C10265 * C23886) / p + (C18448 * C24476) / C23961);
    const double C24486 = C24473 / C23961;
    const double C11983 = -((C10671 * C23886) / p + (C18564 * C24476) / C23961);
    const double C12027 = -((C10805 * C23886) / p + (C18593 * C24476) / C23961);
    const double C14851 = -((C10805 * C23889) / p + (C18593 * C24478) / C23961);
    const double C18681 = (3 * (C18170 - (C19041 * q) / C23961)) / C24463 -
                          ((C18206 * C23886) / p + (C19231 * C24476) / C23961);
    const double C20295 = -((C18206 * C23889) / p + (C19231 * C24478) / C23961);
    const double C20311 = -((C18206 * C23894) / p + (C19231 * C24479) / C23961);
    const double C18776 = -((C18404 * C23886) / p + (C19275 * C24476) / C23961);
    const double C18854 = -((C18404 * C23894) / p + (C19275 * C24479) / C23961);
    const double C18822 = -((C18593 * C23886) / p + (C19323 * C24476) / C23961);
    const double C18943 = -((C18593 * C23889) / p + (C19323 * C24478) / C23961);
    const double C2467 = -(C9345 * C23942 + C23891) / q;
    const double C3216 = C23910 - (C10939 * C23941) / q - C23891 / q;
    const double C2500 = -(C9345 * C23944 + C23896) / q;
    const double C3459 = C23917 - (C11199 * C23941) / q - C23896 / q;
    const double C24490 = C9890 - C24480;
    const double C2695 = -(C9890 * C23941 + C23899) / q;
    const double C3246 = C23912 - (C10939 * C23942) / q - C23899 / q;
    const double C2761 = -(C9890 * C23944 + C23902) / q;
    const double C3723 = C23917 - (C11327 * C23942) / q - C23902 / q;
    const double C24491 = C10432 - C24481;
    const double C2956 = -(C10432 * C23941 + C23905) / q;
    const double C3519 = C23912 - (C11199 * C23944) / q - C23905 / q;
    const double C2989 = -(C10432 * C23942 + C23907) / q;
    const double C3753 = C23910 - (C11327 * C23944) / q - C23907 / q;
    const double C9295 =
        (3 * C9345) / C23365 - (C9329 * C23941) / q - (C11440 * p) / q;
    const double C23922 = C11574 * p;
    const double C23923 = C11634 * p;
    const double C23926 = C12100 * p;
    const double C24494 = C18375 - C24485;
    const double C23929 = C11779 * p;
    const double C23931 = C14664 * p;
    const double C23930 = C11839 * p;
    const double C24495 = C18535 - C24486;
    const double C23934 = C11983 * p;
    const double C23935 = C12027 * p;
    const double C23936 = C14851 * p;
    const double C11692 =
        C24490 / C24463 - ((C9875 * C23886) / p + (C18310 * C24476) / C23961);
    const double C14590 = (3 * C24490) / C24463 -
                          ((C10129 * C23889) / p + (C18404 * C24478) / C23961);
    const double C24499 = C24491 / C24463;
    const double C17655 = (3 * C24491) / C24463 -
                          ((C10805 * C23894) / p + (C18593 * C24479) / C23961);
    const double C2423 =
        C23141 / q - (C2434 * C23941) / q + C23888 - (C9295 * p) / q;
    const double C9361 = -(C9329 * C23942 + C23922) / q;
    const double C9570 = C23924 - (C9586 * C23941) / q - C23922 / q;
    const double C9392 = -(C9329 * C23944 + C23923) / q;
    const double C9707 = C23927 - (C9723 * C23941) / q - C23923 / q;
    const double C9617 = -(C9586 * C23944 + C23926) / q;
    const double C9739 = -(C9723 * C23942 + C23926) / q;
    const double C11053 = C23921 - (C11069 * C23941) / q - C23926 / q;
    const double C18838 = (3 * C24494) / C24463 -
                          ((C18404 * C23889) / p + (C19275 * C24478) / C23961);
    const double C21899 =
        C24494 / C24463 - ((C18310 * C23886) / p + (C19291 * C24476) / C23961);
    const double C9905 = C23924 - (C9875 * C23942) / q - C23929 / q;
    const double C10113 = -(C10129 * C23941 + C23929) / q;
    const double C10159 = -(C10129 * C23944 + C23931) / q;
    const double C10280 = C23932 - (C10265 * C23942) / q - C23931 / q;
    const double C9934 = -(C9875 * C23944 + C23930) / q;
    const double C10249 = -(C10265 * C23941 + C23930) / q;
    const double C11084 = C23916 - (C11069 * C23942) / q - C23930 / q;
    const double C24501 = C24495 / C24463;
    const double C18958 = (3 * C24495) / C24463 -
                          ((C18593 * C23894) / p + (C19323 * C24479) / C23961);
    const double C10447 = -(C10417 * C23942 + C23934) / q;
    const double C10655 = -(C10671 * C23941 + C23934) / q;
    const double C11099 = C23909 - (C11069 * C23944) / q - C23934 / q;
    const double C10477 = C23927 - (C10417 * C23944) / q - C23935 / q;
    const double C10789 = -(C10805 * C23941 + C23935) / q;
    const double C10701 = C23932 - (C10671 * C23944) / q - C23936 / q;
    const double C10820 = -(C10805 * C23942 + C23936) / q;
    const double C23925 = C11692 * p;
    const double C10144 =
        (3 * C9890) / C23365 - (C10129 * C23942) / q - (C14590 * p) / q;
    const double C11897 =
        C24499 - ((C10417 * C23886) / p + (C18358 * C24476) / C23961);
    const double C14793 =
        C24499 - ((C10671 * C23889) / p + (C18564 * C24478) / C23961);
    const double C10836 =
        (3 * C10432) / C23365 - (C10805 * C23944) / q - (C17655 * p) / q;
    const double C2445 = C23158 / q - (C2467 * C23941) / q - (C9361 * p) / q;
    const double C3206 =
        C23363 / C23365 - (C3216 * C23941) / q + C23909 - (C9570 * p) / q;
    const double C2456 = C23167 / q - (C2500 * C23941) / q - (C9392 * p) / q;
    const double C3449 =
        C23437 / C23365 - (C3459 * C23941) / q + C23916 - (C9707 * p) / q;
    const double C23893 = C9617 * p;
    const double C3469 = C23918 - (C3489 * C23941) / q - (C9739 * p) / q;
    const double C3683 = C23921 - (C3693 * C23941) / q - (C11053 * p) / q;
    const double C23900 = C9905 * p;
    const double C2750 = C23265 / q - (C2761 * C23942) / q - (C10159 * p) / q;
    const double C3733 =
        C23918 - (C3723 * C23942) / q + C23921 - (C10280 * p) / q;
    const double C23901 = C9934 * p;
    const double C23920 = C11084 * p;
    const double C18870 =
        C24501 - ((C18564 * C23889) / p + (C20918 * C24478) / C23961);
    const double C20371 =
        C24501 - ((C18358 * C23886) / p + (C19307 * C24476) / C23961);
    const double C2967 = -(C2989 * C23941 + C10447 * p) / q;
    const double C23915 = C11099 * p;
    const double C23906 = C10477 * p;
    const double C23908 = C10701 * p;
    const double C23947 = C23925 / q;
    const double C2739 =
        C23256 / q - (C2728 * C23942) / q + C23898 - (C10144 * p) / q;
    const double C23928 = C11897 * p;
    const double C23933 = C14793 * p;
    const double C3033 =
        C23354 / q - (C3022 * C23944) / q + C23904 - (C10836 * p) / q;
    const double C2489 = -(C2500 * C23942 + C23893) / q;
    const double C3236 = C23911 - (C3276 * C23941) / q - C23893 / q;
    const double C2706 = -(C2728 * C23941 + C23900) / q;
    const double C3256 =
        C23158 / C23365 - (C3246 * C23942) / q + C23909 - C23900 / q;
    const double C2717 = -(C2761 * C23941 + C23901) / q;
    const double C3266 = C23913 - (C3276 * C23942) / q - C23901 / q;
    const double C3499 = C23916 - (C3489 * C23942) / q - C23920 / q;
    const double C3703 = -(C3723 * C23941 + C23920) / q;
    const double C3286 = C23909 - (C3276 * C23944) / q - C23915 / q;
    const double C3509 = -(C3519 * C23942 + C23915) / q;
    const double C3713 = -(C3753 * C23941 + C23915) / q;
    const double C2978 = -(C3022 * C23941 + C23906) / q;
    const double C3529 = C23913 - (C3519 * C23944) / q + C23916 - C23906 / q;
    const double C3011 = -(C3022 * C23942 + C23908) / q;
    const double C3763 = C23911 - (C3753 * C23944) / q + C23921 - C23908 / q;
    const double C9602 = C23888 - (C9586 * C23942) / q - C23947;
    const double C9843 = C23898 - (C9875 * C23941) / q - C23947;
    const double C23948 = C23928 / q;
    const double C23949 = C23933 / q;
    const double C23892 = C9602 * p;
    const double C2684 = C23898 - (C2695 * C23941) / q - (C9843 * p) / q;
    const double C9755 = C23888 - (C9723 * C23944) / q - C23948;
    const double C10385 = C23904 - (C10417 * C23941) / q - C23948;
    const double C10296 = C23898 - (C10265 * C23944) / q - C23949;
    const double C10686 = C23904 - (C10671 * C23942) / q - C23949;
    const double C23943 = C23892 / q;
    const double C23897 = C9755 * p;
    const double C2945 = C23904 - (C2956 * C23941) / q - (C10385 * p) / q;
    const double C23903 = C10296 * p;
    const double C3000 = C23904 - (C2989 * C23942) / q - (C10686 * p) / q;
    const double C2478 = C23888 - (C2467 * C23942) / q - C23943;
    const double C3226 = C23256 / C23365 - (C3246 * C23941) / q - C23943;
    const double C23945 = C23897 / q;
    const double C23946 = C23903 / q;
    const double C2511 = C23888 - (C2500 * C23944) / q - C23945;
    const double C3479 = C23919 - (C3519 * C23941) / q - C23945;
    const double C2772 = C23898 - (C2761 * C23944) / q - C23946;
    const double C3743 = C23919 - (C3753 * C23942) / q - C23946;
    g[0] = C2423;
    g[1] = C2434;
    g[2] = C2445;
    g[3] = C2456;
    g[4] = C2467;
    g[5] = C2478;
    g[6] = C2489;
    g[7] = C2500;
    g[8] = C2511;
    g[9] = C2684;
    g[10] = C2695;
    g[11] = C2706;
    g[12] = C2717;
    g[13] = C2728;
    g[14] = C2739;
    g[15] = C2750;
    g[16] = C2761;
    g[17] = C2772;
    g[18] = C2945;
    g[19] = C2956;
    g[20] = C2967;
    g[21] = C2978;
    g[22] = C2989;
    g[23] = C3000;
    g[24] = C3011;
    g[25] = C3022;
    g[26] = C3033;
    g[27] = C3206;
    g[28] = C3216;
    g[29] = C3226;
    g[30] = C3236;
    g[31] = C3246;
    g[32] = C3256;
    g[33] = C3266;
    g[34] = C3276;
    g[35] = C3286;
    g[36] = C3449;
    g[37] = C3459;
    g[38] = C3469;
    g[39] = C3479;
    g[40] = C3489;
    g[41] = C3499;
    g[42] = C3509;
    g[43] = C3519;
    g[44] = C3529;
    g[45] = C3683;
    g[46] = C3693;
    g[47] = C3703;
    g[48] = C3713;
    g[49] = C3723;
    g[50] = C3733;
    g[51] = C3743;
    g[52] = C3753;
    g[53] = C3763;
    g[54] = C9295;
    g[55] = C9329;
    g[56] = C9345;
    g[57] = C9361;
    g[58] = C9392;
    g[59] = C9570;
    g[60] = C9586;
    g[61] = C9602;
    g[62] = C9617;
    g[63] = C9707;
    g[64] = C9723;
    g[65] = C9739;
    g[66] = C9755;
    g[67] = C9843;
    g[68] = C9875;
    g[69] = C9890;
    g[70] = C9905;
    g[71] = C9934;
    g[72] = C10113;
    g[73] = C10129;
    g[74] = C10144;
    g[75] = C10159;
    g[76] = C10249;
    g[77] = C10265;
    g[78] = C10280;
    g[79] = C10296;
    g[80] = C10385;
    g[81] = C10417;
    g[82] = C10432;
    g[83] = C10447;
    g[84] = C10477;
    g[85] = C10655;
    g[86] = C10671;
    g[87] = C10686;
    g[88] = C10701;
    g[89] = C10789;
    g[90] = C10805;
    g[91] = C10820;
    g[92] = C10836;
    g[93] = C10939;
    g[94] = C11053;
    g[95] = C11069;
    g[96] = C11084;
    g[97] = C11099;
    g[98] = C11199;
    g[99] = C11327;
    g[100] = C11440;
    g[101] = C11455;
    g[102] = C11574;
    g[103] = C11634;
    g[104] = C11692;
    g[105] = C11779;
    g[106] = C11839;
    g[107] = C11897;
    g[108] = C11983;
    g[109] = C12027;
    g[110] = C12085;
    g[111] = C12100;
    g[112] = C12115;
    g[113] = C14590;
    g[114] = C14664;
    g[115] = C14793;
    g[116] = C14851;
    g[117] = C17655;
    g[118] = C18170;
    g[119] = C18190;
    g[120] = C18206;
    g[121] = C18222;
    g[122] = C18223;
    g[123] = C18294;
    g[124] = C18310;
    g[125] = C18342;
    g[126] = C18358;
    g[127] = C18375;
    g[128] = C18404;
    g[129] = C18448;
    g[130] = C18535;
    g[131] = C18564;
    g[132] = C18593;
    g[133] = C18665;
    g[134] = C18681;
    g[135] = C18776;
    g[136] = C18822;
    g[137] = C18838;
    g[138] = C18854;
    g[139] = C18870;
    g[140] = C18943;
    g[141] = C18958;
    g[142] = C19002;
    g[143] = C19019;
    g[144] = C19041;
    g[145] = C19071;
    g[146] = C19130;
    g[147] = C19231;
    g[148] = C19275;
    g[149] = C19291;
    g[150] = C19307;
    g[151] = C19323;
    g[152] = C19410;
    g[153] = C19433;
    g[154] = C19507;
    g[155] = C19538;
    g[156] = C19553;
    g[157] = C19604;
    g[158] = C19648;
    g[159] = C19701;
    g[160] = C19899;
    g[161] = C20295;
    g[162] = C20311;
    g[163] = C20371;
    g[164] = C20627;
    g[165] = C20772;
    g[166] = C20918;
    g[167] = C21013;
    g[168] = C21210;
    g[169] = C21899;
    g[170] = C22582;
    g[171] = C22765;
}
