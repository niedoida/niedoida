/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2111_1_ints(const double ae,
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
    const double C23301 = 2 * q;
    const double C23831 = de * zCD;
    const double C23830 = be * zAB;
    const double C23826 = de * yCD;
    const double C23825 = be * yAB;
    const double C23823 = de * xCD;
    const double C23822 = be * xAB;
    const double C23897 = p + q;
    const double C24406 = p * q;
    const double C24405 = std::pow(Pi, 2.5);
    const double C24401 = zP - zQ;
    const double C24400 = yP - yQ;
    const double C24399 = 2 * p;
    const double C24397 = xP - xQ;
    const double C23880 = C23830 + C23831;
    const double C23878 = C23825 + C23826;
    const double C23877 = C23822 + C23823;
    const double C24407 = std::sqrt(C23897);
    const double C24419 = C24405 * kab;
    const double C24415 = C24401 * q;
    const double C24414 = C24400 * q;
    const double C24412 = C24397 * q;
    const double C24420 = C24406 * C24407;
    const double C24429 = C24419 * kcd;
    const double C18180 = (2. * C24429 * bs[0]) / C24420;
    const double C18181 = (2. * C24429 * bs[1]) / C24420;
    const double C18977 = (2. * C24429 * bs[2]) / C24420;
    const double C19368 = (2. * C24429 * bs[3]) / C24420;
    const double C19562 = (2. * C24429 * bs[4]) / C24420;
    const double C19659 = (2. * C24429 * bs[5]) / C24420;
    const double C23873 = C18180 / C23301;
    const double C24398 = C18181 * q;
    const double C11455 = -((C18180 * C23822) / p + (C18181 * C24412) / C23897);
    const double C12085 = -((C18180 * C23825) / p + (C18181 * C24414) / C23897);
    const double C12115 = -((C18180 * C23830) / p + (C18181 * C24415) / C23897);
    const double C24404 = C18977 * q;
    const double C18148 = -((C18181 * C23822) / p + (C18977 * C24412) / C23897);
    const double C18252 = -((C18181 * C23825) / p + (C18977 * C24414) / C23897);
    const double C18300 = -((C18181 * C23830) / p + (C18977 * C24415) / C23897);
    const double C24410 = C19368 * q;
    const double C18960 = -((C18977 * C23822) / p + (C19368 * C24412) / C23897);
    const double C20585 = -((C18977 * C23825) / p + (C19368 * C24414) / C23897);
    const double C20730 = -((C18977 * C23830) / p + (C19368 * C24415) / C23897);
    const double C24411 = C19562 * q;
    const double C19391 = -((C19368 * C23822) / p + (C19562 * C24412) / C23897);
    const double C20971 = -((C19368 * C23825) / p + (C19562 * C24414) / C23897);
    const double C22540 = -((C19368 * C23830) / p + (C19562 * C24415) / C23897);
    const double C19606 = -((C19562 * C23822) / p + (C19659 * C24412) / C23897);
    const double C21168 = -((C19562 * C23825) / p + (C19659 * C24414) / C23897);
    const double C22723 = -((C19562 * C23830) / p + (C19659 * C24415) / C23897);
    const double C24413 = C24398 / C23897;
    const double C23848 = C11455 / C23301;
    const double C23846 = C12085 / C23301;
    const double C23853 = C12115 / C23301;
    const double C24418 = C24404 / C23897;
    const double C10939 = -((C12085 * C23822) / p + (C18252 * C24412) / C23897);
    const double C11199 = -((C12115 * C23822) / p + (C18300 * C24412) / C23897);
    const double C11327 = -((C12115 * C23825) / p + (C18300 * C24414) / C23897);
    const double C24423 = C24410 / C23897;
    const double C18623 = -((C18300 * C23825) / p + (C20730 * C24414) / C23897);
    const double C24424 = C24411 / C23897;
    const double C24425 = C18180 - C24413;
    const double C24428 = C18181 - C24418;
    const double C23874 = C10939 * p;
    const double C23860 = C10939 / q;
    const double C23845 = C10939 / C23301;
    const double C23875 = C11199 * p;
    const double C23863 = C11199 / q;
    const double C23852 = C11199 / C23301;
    const double C23876 = C11327 * p;
    const double C23868 = C11327 / q;
    const double C23857 = C11327 / C23301;
    const double C24432 = C18977 - C24423;
    const double C11069 = -((C11327 * C23822) / p + (C18623 * C24412) / C23897);
    const double C24433 = C19368 - C24424;
    const double C24434 = C24425 / C24399;
    const double C24436 = C24428 / C24399;
    const double C23094 = -(C11455 * C23878 + C23874) / q;
    const double C23299 = -(C12085 * C23877 + C23874) / q;
    const double C23103 = -(C11455 * C23880 + C23875) / q;
    const double C23373 = -(C12115 * C23877 + C23875) / q;
    const double C23201 = -(C12085 * C23880 + C23876) / q;
    const double C23390 = -(C12115 * C23878 + C23876) / q;
    const double C24438 = C24432 / C24399;
    const double C23850 = C11069 * p;
    const double C24439 = C24433 / C24399;
    const double C9345 =
        C24434 - ((C11455 * C23822) / p + (C18148 * C24412) / C23897);
    const double C9890 =
        C24434 - ((C12085 * C23825) / p + (C18252 * C24414) / C23897);
    const double C10432 =
        C24434 - ((C12115 * C23830) / p + (C18300 * C24415) / C23897);
    const double C18128 =
        C24436 - ((C18148 * C23822) / p + (C18960 * C24412) / C23897);
    const double C18333 =
        C24436 - ((C18252 * C23825) / p + (C20585 * C24414) / C23897);
    const double C18493 =
        C24436 - ((C18300 * C23830) / p + (C20730 * C24415) / C23897);
    const double C23849 = C23103 / C23301;
    const double C23847 = C23201 / C23301;
    const double C23854 = C23390 / C23301;
    const double C18999 =
        C24438 - ((C18960 * C23822) / p + (C19391 * C24412) / C23897);
    const double C19029 =
        C24438 - ((C20585 * C23825) / p + (C20971 * C24414) / C23897);
    const double C19088 =
        C24438 - ((C20730 * C23830) / p + (C22540 * C24415) / C23897);
    const double C3276 = -(C10939 * C23880 + C23850) / q;
    const double C3489 = -(C11199 * C23878 + C23850) / q;
    const double C3693 = -(C11327 * C23877 + C23850) / q;
    const double C19465 =
        C24439 - ((C19391 * C23822) / p + (C19606 * C24412) / C23897);
    const double C19496 =
        C24439 - ((C20971 * C23825) / p + (C21168 * C24414) / C23897);
    const double C19511 =
        C24439 - ((C22540 * C23830) / p + (C22723 * C24415) / C23897);
    const double C23824 = C9345 / C23301;
    const double C23077 = C23873 - (C11455 * C23877) / q - (C9345 * p) / q;
    const double C23834 = C9890 / C23301;
    const double C23192 = C23873 - (C12085 * C23878) / q - (C9890 * p) / q;
    const double C23840 = C10432 / C23301;
    const double C23290 = C23873 - (C12115 * C23880) / q - (C10432 * p) / q;
    const double C9329 = (C11455 - (C18148 * q) / C23897) / p -
                         ((C9345 * C23822) / p + (C18128 * C24412) / C23897);
    const double C9586 = -((C9345 * C23825) / p + (C18128 * C24414) / C23897);
    const double C9723 = -((C9345 * C23830) / p + (C18128 * C24415) / C23897);
    const double C24402 = C18333 * q;
    const double C9875 = -((C9890 * C23822) / p + (C18333 * C24412) / C23897);
    const double C10129 = (C12085 - (C18252 * q) / C23897) / p -
                          ((C9890 * C23825) / p + (C18333 * C24414) / C23897);
    const double C10265 = -((C9890 * C23830) / p + (C18333 * C24415) / C23897);
    const double C24403 = C18493 * q;
    const double C10417 = -((C10432 * C23822) / p + (C18493 * C24412) / C23897);
    const double C10671 = -((C10432 * C23825) / p + (C18493 * C24414) / C23897);
    const double C10805 = (C12115 - (C18300 * q) / C23897) / p -
                          ((C10432 * C23830) / p + (C18493 * C24415) / C23897);
    const double C18164 = (C18148 - (C18960 * q) / C23897) / p -
                          ((C18128 * C23822) / p + (C18999 * C24412) / C23897);
    const double C19857 = -((C18128 * C23830) / p + (C18999 * C24415) / C23897);
    const double C24408 = C19029 * q;
    const double C18268 = -((C18333 * C23822) / p + (C19029 * C24412) / C23897);
    const double C18362 = (C18252 - (C20585 * q) / C23897) / p -
                          ((C18333 * C23825) / p + (C19029 * C24414) / C23897);
    const double C18406 = -((C18333 * C23830) / p + (C19029 * C24415) / C23897);
    const double C24409 = C19088 * q;
    const double C18316 = -((C18493 * C23822) / p + (C19088 * C24412) / C23897);
    const double C18522 = -((C18493 * C23825) / p + (C19088 * C24414) / C23897);
    const double C18551 = (C18300 - (C20730 * q) / C23897) / p -
                          ((C18493 * C23830) / p + (C19088 * C24415) / C23897);
    const double C19189 = (C18960 - (C19391 * q) / C23897) / p -
                          ((C18999 * C23822) / p + (C19465 * C24412) / C23897);
    const double C19233 = (C20585 - (C20971 * q) / C23897) / p -
                          ((C19029 * C23825) / p + (C19496 * C24414) / C23897);
    const double C19249 = -((C19029 * C23822) / p + (C19496 * C24412) / C23897);
    const double C19265 = -((C19088 * C23822) / p + (C19511 * C24412) / C23897);
    const double C19281 = (C20730 - (C22540 * q) / C23897) / p -
                          ((C19088 * C23830) / p + (C19511 * C24415) / C23897);
    const double C20876 = -((C19088 * C23825) / p + (C19511 * C24414) / C23897);
    const double C23855 = C23290 / C23301;
    const double C2434 = C11455 / q - (C9345 * C23877) / q - (C9329 * p) / q;
    const double C23827 = C9586 * p;
    const double C23832 = C9723 * p;
    const double C24416 = C24402 / C23897;
    const double C23835 = C9875 * p;
    const double C2728 = C12085 / q - (C9890 * C23878) / q - (C10129 * p) / q;
    const double C23838 = C10265 * p;
    const double C24417 = C24403 / C23897;
    const double C23841 = C10417 * p;
    const double C23843 = C10671 * p;
    const double C3022 = C12115 / q - (C10432 * C23880) / q - (C10805 * p) / q;
    const double C11440 = (3 * (C9345 - (C18128 * q) / C23897)) / C24399 -
                          ((C9329 * C23822) / p + (C18164 * C24412) / C23897);
    const double C11574 = -((C9329 * C23825) / p + (C18164 * C24414) / C23897);
    const double C11634 = -((C9329 * C23830) / p + (C18164 * C24415) / C23897);
    const double C12100 = -((C9723 * C23825) / p + (C19857 * C24414) / C23897);
    const double C24421 = C24408 / C23897;
    const double C11779 = -((C10129 * C23822) / p + (C18362 * C24412) / C23897);
    const double C14664 = -((C10129 * C23830) / p + (C18362 * C24415) / C23897);
    const double C11839 = -((C10265 * C23822) / p + (C18406 * C24412) / C23897);
    const double C24422 = C24409 / C23897;
    const double C11983 = -((C10671 * C23822) / p + (C18522 * C24412) / C23897);
    const double C12027 = -((C10805 * C23822) / p + (C18551 * C24412) / C23897);
    const double C14851 = -((C10805 * C23825) / p + (C18551 * C24414) / C23897);
    const double C18639 = (3 * (C18128 - (C18999 * q) / C23897)) / C24399 -
                          ((C18164 * C23822) / p + (C19189 * C24412) / C23897);
    const double C20253 = -((C18164 * C23825) / p + (C19189 * C24414) / C23897);
    const double C20269 = -((C18164 * C23830) / p + (C19189 * C24415) / C23897);
    const double C18734 = -((C18362 * C23822) / p + (C19233 * C24412) / C23897);
    const double C18812 = -((C18362 * C23830) / p + (C19233 * C24415) / C23897);
    const double C18780 = -((C18551 * C23822) / p + (C19281 * C24412) / C23897);
    const double C18901 = -((C18551 * C23825) / p + (C19281 * C24414) / C23897);
    const double C2467 = -(C9345 * C23878 + C23827) / q;
    const double C3216 = C23846 - (C10939 * C23877) / q - C23827 / q;
    const double C2500 = -(C9345 * C23880 + C23832) / q;
    const double C3459 = C23853 - (C11199 * C23877) / q - C23832 / q;
    const double C24426 = C9890 - C24416;
    const double C2695 = -(C9890 * C23877 + C23835) / q;
    const double C3246 = C23848 - (C10939 * C23878) / q - C23835 / q;
    const double C2761 = -(C9890 * C23880 + C23838) / q;
    const double C3723 = C23853 - (C11327 * C23878) / q - C23838 / q;
    const double C24427 = C10432 - C24417;
    const double C2956 = -(C10432 * C23877 + C23841) / q;
    const double C3519 = C23848 - (C11199 * C23880) / q - C23841 / q;
    const double C2989 = -(C10432 * C23878 + C23843) / q;
    const double C3753 = C23846 - (C11327 * C23880) / q - C23843 / q;
    const double C9295 =
        (3 * C9345) / C23301 - (C9329 * C23877) / q - (C11440 * p) / q;
    const double C23858 = C11574 * p;
    const double C23859 = C11634 * p;
    const double C23862 = C12100 * p;
    const double C24430 = C18333 - C24421;
    const double C23865 = C11779 * p;
    const double C23867 = C14664 * p;
    const double C23866 = C11839 * p;
    const double C24431 = C18493 - C24422;
    const double C23870 = C11983 * p;
    const double C23871 = C12027 * p;
    const double C23872 = C14851 * p;
    const double C11692 =
        C24426 / C24399 - ((C9875 * C23822) / p + (C18268 * C24412) / C23897);
    const double C14590 = (3 * C24426) / C24399 -
                          ((C10129 * C23825) / p + (C18362 * C24414) / C23897);
    const double C24435 = C24427 / C24399;
    const double C17655 = (3 * C24427) / C24399 -
                          ((C10805 * C23830) / p + (C18551 * C24415) / C23897);
    const double C2423 =
        C23077 / q - (C2434 * C23877) / q + C23824 - (C9295 * p) / q;
    const double C9361 = -(C9329 * C23878 + C23858) / q;
    const double C9570 = C23860 - (C9586 * C23877) / q - C23858 / q;
    const double C9392 = -(C9329 * C23880 + C23859) / q;
    const double C9707 = C23863 - (C9723 * C23877) / q - C23859 / q;
    const double C9617 = -(C9586 * C23880 + C23862) / q;
    const double C9739 = -(C9723 * C23878 + C23862) / q;
    const double C11053 = C23857 - (C11069 * C23877) / q - C23862 / q;
    const double C18796 = (3 * C24430) / C24399 -
                          ((C18362 * C23825) / p + (C19233 * C24414) / C23897);
    const double C21857 =
        C24430 / C24399 - ((C18268 * C23822) / p + (C19249 * C24412) / C23897);
    const double C9905 = C23860 - (C9875 * C23878) / q - C23865 / q;
    const double C10113 = -(C10129 * C23877 + C23865) / q;
    const double C10159 = -(C10129 * C23880 + C23867) / q;
    const double C10280 = C23868 - (C10265 * C23878) / q - C23867 / q;
    const double C9934 = -(C9875 * C23880 + C23866) / q;
    const double C10249 = -(C10265 * C23877 + C23866) / q;
    const double C11084 = C23852 - (C11069 * C23878) / q - C23866 / q;
    const double C24437 = C24431 / C24399;
    const double C18916 = (3 * C24431) / C24399 -
                          ((C18551 * C23830) / p + (C19281 * C24415) / C23897);
    const double C10447 = -(C10417 * C23878 + C23870) / q;
    const double C10655 = -(C10671 * C23877 + C23870) / q;
    const double C11099 = C23845 - (C11069 * C23880) / q - C23870 / q;
    const double C10477 = C23863 - (C10417 * C23880) / q - C23871 / q;
    const double C10789 = -(C10805 * C23877 + C23871) / q;
    const double C10701 = C23868 - (C10671 * C23880) / q - C23872 / q;
    const double C10820 = -(C10805 * C23878 + C23872) / q;
    const double C23861 = C11692 * p;
    const double C10144 =
        (3 * C9890) / C23301 - (C10129 * C23878) / q - (C14590 * p) / q;
    const double C11897 =
        C24435 - ((C10417 * C23822) / p + (C18316 * C24412) / C23897);
    const double C14793 =
        C24435 - ((C10671 * C23825) / p + (C18522 * C24414) / C23897);
    const double C10836 =
        (3 * C10432) / C23301 - (C10805 * C23880) / q - (C17655 * p) / q;
    const double C2445 = C23094 / q - (C2467 * C23877) / q - (C9361 * p) / q;
    const double C3206 =
        C23299 / C23301 - (C3216 * C23877) / q + C23845 - (C9570 * p) / q;
    const double C2456 = C23103 / q - (C2500 * C23877) / q - (C9392 * p) / q;
    const double C3449 =
        C23373 / C23301 - (C3459 * C23877) / q + C23852 - (C9707 * p) / q;
    const double C23829 = C9617 * p;
    const double C3469 = C23854 - (C3489 * C23877) / q - (C9739 * p) / q;
    const double C3683 = C23857 - (C3693 * C23877) / q - (C11053 * p) / q;
    const double C23836 = C9905 * p;
    const double C2750 = C23201 / q - (C2761 * C23878) / q - (C10159 * p) / q;
    const double C3733 =
        C23854 - (C3723 * C23878) / q + C23857 - (C10280 * p) / q;
    const double C23837 = C9934 * p;
    const double C23856 = C11084 * p;
    const double C18828 =
        C24437 - ((C18522 * C23825) / p + (C20876 * C24414) / C23897);
    const double C20329 =
        C24437 - ((C18316 * C23822) / p + (C19265 * C24412) / C23897);
    const double C2967 = -(C2989 * C23877 + C10447 * p) / q;
    const double C23851 = C11099 * p;
    const double C23842 = C10477 * p;
    const double C23844 = C10701 * p;
    const double C23883 = C23861 / q;
    const double C2739 =
        C23192 / q - (C2728 * C23878) / q + C23834 - (C10144 * p) / q;
    const double C23864 = C11897 * p;
    const double C23869 = C14793 * p;
    const double C3033 =
        C23290 / q - (C3022 * C23880) / q + C23840 - (C10836 * p) / q;
    const double C2489 = -(C2500 * C23878 + C23829) / q;
    const double C3236 = C23847 - (C3276 * C23877) / q - C23829 / q;
    const double C2706 = -(C2728 * C23877 + C23836) / q;
    const double C3256 =
        C23094 / C23301 - (C3246 * C23878) / q + C23845 - C23836 / q;
    const double C2717 = -(C2761 * C23877 + C23837) / q;
    const double C3266 = C23849 - (C3276 * C23878) / q - C23837 / q;
    const double C3499 = C23852 - (C3489 * C23878) / q - C23856 / q;
    const double C3703 = -(C3723 * C23877 + C23856) / q;
    const double C3286 = C23845 - (C3276 * C23880) / q - C23851 / q;
    const double C3509 = -(C3519 * C23878 + C23851) / q;
    const double C3713 = -(C3753 * C23877 + C23851) / q;
    const double C2978 = -(C3022 * C23877 + C23842) / q;
    const double C3529 = C23849 - (C3519 * C23880) / q + C23852 - C23842 / q;
    const double C3011 = -(C3022 * C23878 + C23844) / q;
    const double C3763 = C23847 - (C3753 * C23880) / q + C23857 - C23844 / q;
    const double C9602 = C23824 - (C9586 * C23878) / q - C23883;
    const double C9843 = C23834 - (C9875 * C23877) / q - C23883;
    const double C23884 = C23864 / q;
    const double C23885 = C23869 / q;
    const double C23828 = C9602 * p;
    const double C2684 = C23834 - (C2695 * C23877) / q - (C9843 * p) / q;
    const double C9755 = C23824 - (C9723 * C23880) / q - C23884;
    const double C10385 = C23840 - (C10417 * C23877) / q - C23884;
    const double C10296 = C23834 - (C10265 * C23880) / q - C23885;
    const double C10686 = C23840 - (C10671 * C23878) / q - C23885;
    const double C23879 = C23828 / q;
    const double C23833 = C9755 * p;
    const double C2945 = C23840 - (C2956 * C23877) / q - (C10385 * p) / q;
    const double C23839 = C10296 * p;
    const double C3000 = C23840 - (C2989 * C23878) / q - (C10686 * p) / q;
    const double C2478 = C23824 - (C2467 * C23878) / q - C23879;
    const double C3226 = C23192 / C23301 - (C3246 * C23877) / q - C23879;
    const double C23881 = C23833 / q;
    const double C23882 = C23839 / q;
    const double C2511 = C23824 - (C2500 * C23880) / q - C23881;
    const double C3479 = C23855 - (C3519 * C23877) / q - C23881;
    const double C2772 = C23834 - (C2761 * C23880) / q - C23882;
    const double C3743 = C23855 - (C3753 * C23878) / q - C23882;
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
    g[118] = C18128;
    g[119] = C18148;
    g[120] = C18164;
    g[121] = C18180;
    g[122] = C18181;
    g[123] = C18252;
    g[124] = C18268;
    g[125] = C18300;
    g[126] = C18316;
    g[127] = C18333;
    g[128] = C18362;
    g[129] = C18406;
    g[130] = C18493;
    g[131] = C18522;
    g[132] = C18551;
    g[133] = C18623;
    g[134] = C18639;
    g[135] = C18734;
    g[136] = C18780;
    g[137] = C18796;
    g[138] = C18812;
    g[139] = C18828;
    g[140] = C18901;
    g[141] = C18916;
    g[142] = C18960;
    g[143] = C18977;
    g[144] = C18999;
    g[145] = C19029;
    g[146] = C19088;
    g[147] = C19189;
    g[148] = C19233;
    g[149] = C19249;
    g[150] = C19265;
    g[151] = C19281;
    g[152] = C19368;
    g[153] = C19391;
    g[154] = C19465;
    g[155] = C19496;
    g[156] = C19511;
    g[157] = C19562;
    g[158] = C19606;
    g[159] = C19659;
    g[160] = C19857;
    g[161] = C20253;
    g[162] = C20269;
    g[163] = C20329;
    g[164] = C20585;
    g[165] = C20730;
    g[166] = C20876;
    g[167] = C20971;
    g[168] = C21168;
    g[169] = C21857;
    g[170] = C22540;
    g[171] = C22723;
}
