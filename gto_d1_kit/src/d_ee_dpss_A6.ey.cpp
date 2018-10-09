/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_1_vr(const double ae,
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
    const double C8525 = g[0];
    const double C8554 = g[1];
    const double C8583 = g[2];
    const double C8665 = g[5];
    const double C9033 = g[6];
    const double C9054 = g[7];
    const double C9055 = g[8];
    const double C9100 = g[9];
    const double C9160 = g[10];
    const double C9220 = g[11];
    const double C9221 = g[12];
    const double C9236 = g[13];
    const double C9252 = g[14];
    const double C9253 = g[15];
    const double C9282 = g[16];
    const double C9299 = g[17];
    const double C9300 = g[18];
    const double C9315 = g[19];
    const double C9444 = g[20];
    const double C9796 = g[21];
    const double C9883 = g[22];
    const double C9036 = p + q;
    const double C9035 = p * q;
    const double C10420 = bs[4];
    const double C10419 = bs[3];
    const double C10418 = bs[2];
    const double C10416 = std::pow(Pi, 2.5);
    const double C10413 = bs[1];
    const double C10412 = ae * be;
    const double C10411 = bs[0];
    const double C10409 = zP - zQ;
    const double C10408 = be * zAB;
    const double C10407 = yP - yQ;
    const double C10406 = be * yAB;
    const double C10405 = 2 * p;
    const double C10403 = xP - xQ;
    const double C10402 = std::pow(p, 2);
    const double C10400 = be * xAB;
    const double C10399 = ae / p;
    const double C9037 = C9036 * p;
    const double C10417 = std::sqrt(C9036);
    const double C10415 = p * C9036;
    const double C10414 = kab * C9035;
    const double C10401 = ae * C9035;
    const double C10441 = 4 * C10416;
    const double C10439 = kab * C10412;
    const double C10431 = C10409 * C9035;
    const double C10430 = C10407 * C9035;
    const double C10428 = C10403 * C9035;
    const double C10427 = C9036 * C10402;
    const double C10425 = C10399 - 1;
    const double C10442 = C9035 * C10417;
    const double C10440 = kcd * C10414;
    const double C10446 = C9883 * C10401;
    const double C10443 = C9444 * C10401;
    const double C10438 = C9315 * C10401;
    const double C10437 = C9300 * C10401;
    const double C10435 = C9253 * C10401;
    const double C10434 = C9221 * C10401;
    const double C10433 = C9160 * C10401;
    const double C10432 = C9100 * C10401;
    const double C10426 = C9033 * C10401;
    const double C10465 = kcd * C10439;
    const double C10474 = C10425 * C9253;
    const double C10468 = C10425 * C9315;
    const double C10463 = C10425 * C9300;
    const double C10461 = C10425 * C9299;
    const double C10458 = C10425 * C9252;
    const double C10456 = C10425 * C9220;
    const double C10454 = C10425 * C8583;
    const double C10452 = C10425 * C8554;
    const double C10449 = C10425 * C8525;
    const double C10471 = C10420 * C10440;
    const double C10470 = C10419 * C10440;
    const double C10467 = C10418 * C10440;
    const double C10466 = C10413 * C10440;
    const double C10475 = C10446 / C10427;
    const double C10469 = C10443 / C10427;
    const double C10464 = C10438 / C10427;
    const double C10462 = C10437 / C10427;
    const double C10459 = C10435 / C10427;
    const double C10457 = C10434 / C10427;
    const double C10455 = C10433 / C10427;
    const double C10453 = C10432 / C10427;
    const double C10450 = C10426 / C10427;
    const double C10486 = C10419 * C10465;
    const double C10484 = C10418 * C10465;
    const double C10482 = C10413 * C10465;
    const double C10480 = C10411 * C10465;
    const double C10487 = C10471 * ae;
    const double C10485 = C10470 * ae;
    const double C10483 = C10467 * ae;
    const double C10481 = C10466 * ae;
    const double C9448 =
        -(((xAB * C10486) / p + (C10403 * C10487) / C10415) * C10441) / C10442;
    const double C9909 =
        -(((yAB * C10486) / p + (C10407 * C10487) / C10415) * C10441) / C10442;
    const double C10361 =
        -(((zAB * C10486) / p + (C10409 * C10487) / C10415) * C10441) / C10442;
    const double C9287 =
        -(((xAB * C10484) / p + (C10403 * C10485) / C10415) * C10441) / C10442;
    const double C9756 =
        -(((yAB * C10484) / p + (C10407 * C10485) / C10415) * C10441) / C10442;
    const double C10210 =
        -(((zAB * C10484) / p + (C10409 * C10485) / C10415) * C10441) / C10442;
    const double C9060 =
        -(((xAB * C10482) / p + (C10403 * C10483) / C10415) * C10441) / C10442;
    const double C9524 =
        -(((yAB * C10482) / p + (C10407 * C10483) / C10415) * C10441) / C10442;
    const double C9978 =
        -(((zAB * C10482) / p + (C10409 * C10483) / C10415) * C10441) / C10442;
    const double C9059 =
        -(((xAB * C10480) / p + (C10403 * C10481) / C10415) * C10441) / C10442;
    const double C9523 =
        -(((yAB * C10480) / p + (C10407 * C10481) / C10415) * C10441) / C10442;
    const double C9977 =
        -(((zAB * C10480) / p + (C10409 * C10481) / C10415) * C10441) / C10442;
    const double C10410 = C9287 * C9035;
    const double C9286 =
        C10468 - (C9287 * C10400) / p - C10469 - (C9448 * C10428) / C9037;
    const double C9347 = -((C9287 * C10406) / p + (C9448 * C10430) / C9037);
    const double C9390 = -((C9287 * C10408) / p + (C9448 * C10431) / C9037);
    const double C10422 = C9756 * C9035;
    const double C9771 = -((C9756 * C10400) / p + (C9909 * C10428) / C9037);
    const double C9801 =
        C10468 - (C9756 * C10406) / p - C10469 - (C9909 * C10430) / C9037;
    const double C9844 = -((C9756 * C10408) / p + (C9909 * C10431) / C9037);
    const double C10424 = C10210 * C9035;
    const double C10225 = -((C10210 * C10400) / p + (C10361 * C10428) / C9037);
    const double C10254 = -((C10210 * C10406) / p + (C10361 * C10430) / C9037);
    const double C10297 =
        C10468 - (C10210 * C10408) / p - C10469 - (C10361 * C10431) / C9037;
    const double C10404 = C9060 * C9035;
    const double C9042 =
        C10463 - (C9060 * C10400) / p - C10464 - (C9287 * C10428) / C9037;
    const double C9120 = -((C9060 * C10406) / p + (C9287 * C10430) / C9037);
    const double C9180 = -((C9060 * C10408) / p + (C9287 * C10431) / C9037);
    const double C10421 = C9524 * C9035;
    const double C9507 = -((C9524 * C10400) / p + (C9756 * C10428) / C9037);
    const double C9583 =
        C10463 - (C9524 * C10406) / p - C10464 - (C9756 * C10430) / C9037;
    const double C9642 = -((C9524 * C10408) / p + (C9756 * C10431) / C9037);
    const double C10423 = C9978 * C9035;
    const double C9961 = -((C9978 * C10400) / p + (C10210 * C10428) / C9037);
    const double C10037 = -((C9978 * C10406) / p + (C10210 * C10430) / C9037);
    const double C10096 =
        C10463 - (C9978 * C10408) / p - C10464 - (C10210 * C10431) / C9037;
    const double C9041 =
        C10461 - (C9059 * C10400) / p - C10462 - (C9060 * C10428) / C9037;
    const double C9119 = -((C9059 * C10406) / p + (C9060 * C10430) / C9037);
    const double C9179 = -((C9059 * C10408) / p + (C9060 * C10431) / C9037);
    const double C9506 = -((C9523 * C10400) / p + (C9524 * C10428) / C9037);
    const double C9582 =
        C10461 - (C9523 * C10406) / p - C10462 - (C9524 * C10430) / C9037;
    const double C9641 = -((C9523 * C10408) / p + (C9524 * C10431) / C9037);
    const double C9960 = -((C9977 * C10400) / p + (C9978 * C10428) / C9037);
    const double C10036 = -((C9977 * C10406) / p + (C9978 * C10430) / C9037);
    const double C10095 =
        C10461 - (C9977 * C10408) / p - C10462 - (C9978 * C10431) / C9037;
    const double C10436 = C10410 / C9037;
    const double C10445 = C10422 / C9037;
    const double C10448 = C10424 / C9037;
    const double C10429 = C10404 / C9037;
    const double C9240 = -((C9180 * C10406) / p + (C9390 * C10430) / C9037);
    const double C10444 = C10421 / C9037;
    const double C9699 =
        C10474 - (C9642 * C10406) / p - C10475 - (C9844 * C10430) / C9037;
    const double C10447 = C10423 / C9037;
    const double C10153 = -((C10096 * C10406) / p + (C10297 * C10430) / C9037);
    const double C8615 =
        C10456 - (C9119 * C10400) / p - C10457 - (C9120 * C10428) / C9037;
    const double C8642 =
        C10458 - (C9179 * C10400) / p - C10459 - (C9180 * C10428) / C9037;
    const double C8668 = -((C9179 * C10406) / p + (C9180 * C10430) / C9037);
    const double C8777 = -((C9582 * C10400) / p + (C9583 * C10428) / C9037);
    const double C8803 = -((C9641 * C10400) / p + (C9642 * C10428) / C9037);
    const double C8828 =
        C10458 - (C9641 * C10406) / p - C10459 - (C9642 * C10430) / C9037;
    const double C8937 = -((C10036 * C10400) / p + (C10037 * C10428) / C9037);
    const double C8963 = -((C10095 * C10400) / p + (C10096 * C10428) / C9037);
    const double C8988 = -((C10095 * C10406) / p + (C10096 * C10430) / C9037);
    const double C10460 = C9060 - C10436;
    const double C10473 = C9524 - C10445;
    const double C10477 = C9978 - C10448;
    const double C10451 = C9059 - C10429;
    const double C10472 = C9523 - C10444;
    const double C10476 = C9977 - C10447;
    const double C8632 = C10425 * C8665 - (C8668 * C10400) / p -
                         (C9236 * C10401) / C10427 - (C9240 * C10428) / C9037;
    const double C8794 = -((C8828 * C10400) / p + (C9699 * C10428) / C9037);
    const double C8954 = -((C8988 * C10400) / p + (C10153 * C10428) / C9037);
    const double C10479 = C10460 / C10405;
    const double C10489 = C10473 / C10405;
    const double C10491 = C10477 / C10405;
    const double C10478 = C10451 / C10405;
    const double C10488 = C10472 / C10405;
    const double C10490 = C10476 / C10405;
    const double C9040 = C10425 * C9055 - (C9042 * C10400) / p -
                         (C9282 * C10401) / C10427 - (C9286 * C10428) / C9037 +
                         C10479;
    const double C9104 =
        C10479 - ((C9120 * C10406) / p + (C9347 * C10430) / C9037);
    const double C9164 =
        C10479 - ((C9180 * C10408) / p + (C9390 * C10431) / C9037);
    const double C9508 =
        C10489 - ((C9507 * C10400) / p + (C9771 * C10428) / C9037);
    const double C9567 = C10425 * C9221 - (C9583 * C10406) / p -
                         (C9796 * C10401) / C10427 - (C9801 * C10430) / C9037 +
                         C10489;
    const double C9626 =
        C10489 - ((C9642 * C10408) / p + (C9844 * C10431) / C9037);
    const double C9962 =
        C10491 - ((C9961 * C10400) / p + (C10225 * C10428) / C9037);
    const double C10021 =
        C10491 - ((C10037 * C10406) / p + (C10254 * C10430) / C9037);
    const double C10080 = C10474 - (C10096 * C10408) / p - C10475 -
                          (C10297 * C10431) / C9037 + C10491;
    const double C8529 = C10425 * C9054 - (C9041 * C10400) / p -
                         (C9055 * C10401) / C10427 - (C9042 * C10428) / C9037 +
                         C10478;
    const double C8558 =
        C10478 - ((C9119 * C10406) / p + (C9120 * C10430) / C9037);
    const double C8587 =
        C10478 - ((C9179 * C10408) / p + (C9180 * C10431) / C9037);
    const double C8694 =
        C10488 - ((C9506 * C10400) / p + (C9507 * C10428) / C9037);
    const double C8722 = C10456 - (C9582 * C10406) / p - C10457 -
                         (C9583 * C10430) / C9037 + C10488;
    const double C8750 =
        C10488 - ((C9641 * C10408) / p + (C9642 * C10431) / C9037);
    const double C8854 =
        C10490 - ((C9960 * C10400) / p + (C9961 * C10428) / C9037);
    const double C8882 =
        C10490 - ((C10036 * C10406) / p + (C10037 * C10430) / C9037);
    const double C8910 = C10458 - (C10095 * C10408) / p - C10459 -
                         (C10096 * C10431) / C9037 + C10490;
    const double C8528 = C10449 - (C8529 * C10400) / p - C10450 -
                         (C9040 * C10428) / C9037 +
                         (C9041 - (C9042 * C9035) / C9037) / p;
    const double C8538 = -((C8529 * C10406) / p + (C9040 * C10430) / C9037);
    const double C8547 = -((C8529 * C10408) / p + (C9040 * C10431) / C9037);
    const double C8557 =
        C10452 - (C8558 * C10400) / p - C10453 - (C9104 * C10428) / C9037;
    const double C8567 = (C9119 - (C9120 * C9035) / C9037) / p -
                         ((C8558 * C10406) / p + (C9104 * C10430) / C9037);
    const double C8576 = -((C8558 * C10408) / p + (C9104 * C10431) / C9037);
    const double C8586 =
        C10454 - (C8587 * C10400) / p - C10455 - (C9164 * C10428) / C9037;
    const double C8596 = -((C8587 * C10406) / p + (C9164 * C10430) / C9037);
    const double C8605 = (C9179 - (C9180 * C9035) / C9037) / p -
                         ((C8587 * C10408) / p + (C9164 * C10431) / C9037);
    const double C8693 = (C9506 - (C9507 * C9035) / C9037) / p -
                         ((C8694 * C10400) / p + (C9508 * C10428) / C9037);
    const double C8703 =
        C10449 - (C8694 * C10406) / p - C10450 - (C9508 * C10430) / C9037;
    const double C8712 = -((C8694 * C10408) / p + (C9508 * C10431) / C9037);
    const double C8721 = -((C8722 * C10400) / p + (C9567 * C10428) / C9037);
    const double C8731 = C10452 - (C8722 * C10406) / p - C10453 -
                         (C9567 * C10430) / C9037 +
                         (C9582 - (C9583 * C9035) / C9037) / p;
    const double C8740 = -((C8722 * C10408) / p + (C9567 * C10431) / C9037);
    const double C8749 = -((C8750 * C10400) / p + (C9626 * C10428) / C9037);
    const double C8759 =
        C10454 - (C8750 * C10406) / p - C10455 - (C9626 * C10430) / C9037;
    const double C8768 = (C9641 - (C9642 * C9035) / C9037) / p -
                         ((C8750 * C10408) / p + (C9626 * C10431) / C9037);
    const double C8853 = (C9960 - (C9961 * C9035) / C9037) / p -
                         ((C8854 * C10400) / p + (C9962 * C10428) / C9037);
    const double C8863 = -((C8854 * C10406) / p + (C9962 * C10430) / C9037);
    const double C8872 =
        C10449 - (C8854 * C10408) / p - C10450 - (C9962 * C10431) / C9037;
    const double C8881 = -((C8882 * C10400) / p + (C10021 * C10428) / C9037);
    const double C8891 = (C10036 - (C10037 * C9035) / C9037) / p -
                         ((C8882 * C10406) / p + (C10021 * C10430) / C9037);
    const double C8900 =
        C10452 - (C8882 * C10408) / p - C10453 - (C10021 * C10431) / C9037;
    const double C8909 = -((C8910 * C10400) / p + (C10080 * C10428) / C9037);
    const double C8919 = -((C8910 * C10406) / p + (C10080 * C10430) / C9037);
    const double C8928 = C10454 - (C8910 * C10408) / p - C10455 -
                         (C10080 * C10431) / C9037 +
                         (C10095 - (C10096 * C9035) / C9037) / p;
    vrx[0] = C8528;
    vrx[1] = C8529;
    vrx[2] = C8538;
    vrx[3] = C8547;
    vrx[4] = C8557;
    vrx[5] = C8558;
    vrx[6] = C8567;
    vrx[7] = C8576;
    vrx[8] = C8586;
    vrx[9] = C8587;
    vrx[10] = C8596;
    vrx[11] = C8605;
    vrx[12] = C8615;
    vrx[13] = C8632;
    vrx[14] = C8642;
    vrx[15] = C8668;
    vry[0] = C8693;
    vry[1] = C8694;
    vry[2] = C8703;
    vry[3] = C8712;
    vry[4] = C8721;
    vry[5] = C8722;
    vry[6] = C8731;
    vry[7] = C8740;
    vry[8] = C8749;
    vry[9] = C8750;
    vry[10] = C8759;
    vry[11] = C8768;
    vry[12] = C8777;
    vry[13] = C8794;
    vry[14] = C8803;
    vry[15] = C8828;
    vrz[0] = C8853;
    vrz[1] = C8854;
    vrz[2] = C8863;
    vrz[3] = C8872;
    vrz[4] = C8881;
    vrz[5] = C8882;
    vrz[6] = C8891;
    vrz[7] = C8900;
    vrz[8] = C8909;
    vrz[9] = C8910;
    vrz[10] = C8919;
    vrz[11] = C8928;
    vrz[12] = C8937;
    vrz[13] = C8954;
    vrz[14] = C8963;
    vrz[15] = C8988;
}
