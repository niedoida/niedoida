/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d1_kit/gto_d1.hpp"
#include <cmath>

namespace {
    static const double Pi = M_PI;
}

void eri_gradient_2100_2_vr(const double ae,
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
    const double C8535 = g[0];
    const double C8564 = g[1];
    const double C8593 = g[2];
    const double C8675 = g[5];
    const double C9043 = g[6];
    const double C9064 = g[7];
    const double C9065 = g[8];
    const double C9110 = g[9];
    const double C9170 = g[10];
    const double C9230 = g[11];
    const double C9231 = g[12];
    const double C9246 = g[13];
    const double C9262 = g[14];
    const double C9263 = g[15];
    const double C9292 = g[16];
    const double C9309 = g[17];
    const double C9310 = g[18];
    const double C9325 = g[19];
    const double C9454 = g[20];
    const double C9806 = g[21];
    const double C9893 = g[22];
    const double C9046 = p + q;
    const double C9045 = p * q;
    const double C10440 = C9263 * be;
    const double C10437 = bs[4];
    const double C10436 = bs[3];
    const double C10435 = C9325 * be;
    const double C10434 = bs[2];
    const double C10432 = std::pow(Pi, 2.5);
    const double C10431 = ae * be;
    const double C10430 = bs[0];
    const double C10427 = bs[1];
    const double C10426 = C9310 * be;
    const double C10425 = C9309 * be;
    const double C10423 = C9262 * be;
    const double C10422 = C9230 * be;
    const double C10421 = C8593 * be;
    const double C10420 = C8564 * be;
    const double C10419 = zP - zQ;
    const double C10418 = be * zAB;
    const double C10417 = yP - yQ;
    const double C10416 = be * yAB;
    const double C10415 = 2 * p;
    const double C10413 = xP - xQ;
    const double C10412 = std::pow(p, 2);
    const double C10410 = be * xAB;
    const double C10409 = C8535 * be;
    const double C9047 = C9046 * p;
    const double C10433 = std::sqrt(C9046);
    const double C10429 = p * C9046;
    const double C10428 = C9045 * be;
    const double C10411 = be * C9045;
    const double C10471 = C10440 / p;
    const double C10467 = C10435 / p;
    const double C10465 = 4 * C10432;
    const double C10464 = kab * C10431;
    const double C10461 = C10426 / p;
    const double C10459 = C10425 / p;
    const double C10456 = C10423 / p;
    const double C10454 = C10422 / p;
    const double C10452 = C10421 / p;
    const double C10450 = C10420 / p;
    const double C10449 = C10419 * C9045;
    const double C10448 = C10417 * C9045;
    const double C10446 = C10413 * C9045;
    const double C10445 = C9046 * C10412;
    const double C10443 = C10409 / p;
    const double C10466 = C9045 * C10433;
    const double C10463 = kab * C10428;
    const double C10472 = C9893 * C10411;
    const double C10468 = C9454 * C10411;
    const double C10462 = C9325 * C10411;
    const double C10460 = C9310 * C10411;
    const double C10457 = C9263 * C10411;
    const double C10455 = C9231 * C10411;
    const double C10453 = C9170 * C10411;
    const double C10451 = C9110 * C10411;
    const double C10444 = C9043 * C10411;
    const double C10485 = kcd * C10464;
    const double C10484 = kcd * C10463;
    const double C10489 = C10472 / C10445;
    const double C10486 = C10468 / C10445;
    const double C10483 = C10462 / C10445;
    const double C10482 = C10460 / C10445;
    const double C10480 = C10457 / C10445;
    const double C10479 = C10455 / C10445;
    const double C10478 = C10453 / C10445;
    const double C10477 = C10451 / C10445;
    const double C10475 = C10444 / C10445;
    const double C10501 = C10436 * C10485;
    const double C10499 = C10434 * C10485;
    const double C10497 = C10427 * C10485;
    const double C10495 = C10430 * C10485;
    const double C10500 = C10437 * C10484;
    const double C10498 = C10436 * C10484;
    const double C10496 = C10434 * C10484;
    const double C10494 = C10427 * C10484;
    const double C9458 =
        -(((C10413 * C10500) / C10429 - (xAB * C10501) / p) * C10465) / C10466;
    const double C9919 =
        -(((C10417 * C10500) / C10429 - (yAB * C10501) / p) * C10465) / C10466;
    const double C10371 =
        -(((C10419 * C10500) / C10429 - (zAB * C10501) / p) * C10465) / C10466;
    const double C9297 =
        -(((C10413 * C10498) / C10429 - (xAB * C10499) / p) * C10465) / C10466;
    const double C9766 =
        -(((C10417 * C10498) / C10429 - (yAB * C10499) / p) * C10465) / C10466;
    const double C10220 =
        -(((C10419 * C10498) / C10429 - (zAB * C10499) / p) * C10465) / C10466;
    const double C9070 =
        -(((C10413 * C10496) / C10429 - (xAB * C10497) / p) * C10465) / C10466;
    const double C9534 =
        -(((C10417 * C10496) / C10429 - (yAB * C10497) / p) * C10465) / C10466;
    const double C9988 =
        -(((C10419 * C10496) / C10429 - (zAB * C10497) / p) * C10465) / C10466;
    const double C9069 =
        -(((C10413 * C10494) / C10429 - (xAB * C10495) / p) * C10465) / C10466;
    const double C9533 =
        -(((C10417 * C10494) / C10429 - (yAB * C10495) / p) * C10465) / C10466;
    const double C9987 =
        -(((C10419 * C10494) / C10429 - (zAB * C10495) / p) * C10465) / C10466;
    const double C10424 = C9297 * C9045;
    const double C9296 =
        C10467 - (C9297 * C10410) / p - C10486 - (C9458 * C10446) / C9047;
    const double C9357 = -((C9297 * C10416) / p + (C9458 * C10448) / C9047);
    const double C9400 = -((C9297 * C10418) / p + (C9458 * C10449) / C9047);
    const double C10439 = C9766 * C9045;
    const double C9781 = -((C9766 * C10410) / p + (C9919 * C10446) / C9047);
    const double C9811 =
        C10467 - (C9766 * C10416) / p - C10486 - (C9919 * C10448) / C9047;
    const double C9854 = -((C9766 * C10418) / p + (C9919 * C10449) / C9047);
    const double C10442 = C10220 * C9045;
    const double C10235 = -((C10220 * C10410) / p + (C10371 * C10446) / C9047);
    const double C10264 = -((C10220 * C10416) / p + (C10371 * C10448) / C9047);
    const double C10307 =
        C10467 - (C10220 * C10418) / p - C10486 - (C10371 * C10449) / C9047;
    const double C10414 = C9070 * C9045;
    const double C9052 =
        C10461 - (C9070 * C10410) / p - C10483 - (C9297 * C10446) / C9047;
    const double C9130 = -((C9070 * C10416) / p + (C9297 * C10448) / C9047);
    const double C9190 = -((C9070 * C10418) / p + (C9297 * C10449) / C9047);
    const double C10438 = C9534 * C9045;
    const double C9517 = -((C9534 * C10410) / p + (C9766 * C10446) / C9047);
    const double C9593 =
        C10461 - (C9534 * C10416) / p - C10483 - (C9766 * C10448) / C9047;
    const double C9652 = -((C9534 * C10418) / p + (C9766 * C10449) / C9047);
    const double C10441 = C9988 * C9045;
    const double C9971 = -((C9988 * C10410) / p + (C10220 * C10446) / C9047);
    const double C10047 = -((C9988 * C10416) / p + (C10220 * C10448) / C9047);
    const double C10106 =
        C10461 - (C9988 * C10418) / p - C10483 - (C10220 * C10449) / C9047;
    const double C9051 =
        C10459 - (C9069 * C10410) / p - C10482 - (C9070 * C10446) / C9047;
    const double C9129 = -((C9069 * C10416) / p + (C9070 * C10448) / C9047);
    const double C9189 = -((C9069 * C10418) / p + (C9070 * C10449) / C9047);
    const double C9516 = -((C9533 * C10410) / p + (C9534 * C10446) / C9047);
    const double C9592 =
        C10459 - (C9533 * C10416) / p - C10482 - (C9534 * C10448) / C9047;
    const double C9651 = -((C9533 * C10418) / p + (C9534 * C10449) / C9047);
    const double C9970 = -((C9987 * C10410) / p + (C9988 * C10446) / C9047);
    const double C10046 = -((C9987 * C10416) / p + (C9988 * C10448) / C9047);
    const double C10105 =
        C10459 - (C9987 * C10418) / p - C10482 - (C9988 * C10449) / C9047;
    const double C10458 = C10424 / C9047;
    const double C10470 = C10439 / C9047;
    const double C10474 = C10442 / C9047;
    const double C10447 = C10414 / C9047;
    const double C9250 = -((C9190 * C10416) / p + (C9400 * C10448) / C9047);
    const double C10469 = C10438 / C9047;
    const double C9709 =
        C10471 - (C9652 * C10416) / p - C10489 - (C9854 * C10448) / C9047;
    const double C10473 = C10441 / C9047;
    const double C10163 = -((C10106 * C10416) / p + (C10307 * C10448) / C9047);
    const double C8625 =
        C10454 - (C9129 * C10410) / p - C10479 - (C9130 * C10446) / C9047;
    const double C8652 =
        C10456 - (C9189 * C10410) / p - C10480 - (C9190 * C10446) / C9047;
    const double C8678 = -((C9189 * C10416) / p + (C9190 * C10448) / C9047);
    const double C8787 = -((C9592 * C10410) / p + (C9593 * C10446) / C9047);
    const double C8813 = -((C9651 * C10410) / p + (C9652 * C10446) / C9047);
    const double C8838 =
        C10456 - (C9651 * C10416) / p - C10480 - (C9652 * C10448) / C9047;
    const double C8947 = -((C10046 * C10410) / p + (C10047 * C10446) / C9047);
    const double C8973 = -((C10105 * C10410) / p + (C10106 * C10446) / C9047);
    const double C8998 = -((C10105 * C10416) / p + (C10106 * C10448) / C9047);
    const double C10481 = C9070 - C10458;
    const double C10488 = C9534 - C10470;
    const double C10491 = C9988 - C10474;
    const double C10476 = C9069 - C10447;
    const double C10487 = C9533 - C10469;
    const double C10490 = C9987 - C10473;
    const double C8642 = (C8675 * be) / p - (C8678 * C10410) / p -
                         (C9246 * C10411) / C10445 - (C9250 * C10446) / C9047;
    const double C8804 = -((C8838 * C10410) / p + (C9709 * C10446) / C9047);
    const double C8964 = -((C8998 * C10410) / p + (C10163 * C10446) / C9047);
    const double C10493 = C10481 / C10415;
    const double C10503 = C10488 / C10415;
    const double C10505 = C10491 / C10415;
    const double C10492 = C10476 / C10415;
    const double C10502 = C10487 / C10415;
    const double C10504 = C10490 / C10415;
    const double C9050 = (C9065 * be) / p - (C9052 * C10410) / p -
                         (C9292 * C10411) / C10445 - (C9296 * C10446) / C9047 +
                         C10493;
    const double C9114 =
        C10493 - ((C9130 * C10416) / p + (C9357 * C10448) / C9047);
    const double C9174 =
        C10493 - ((C9190 * C10418) / p + (C9400 * C10449) / C9047);
    const double C9518 =
        C10503 - ((C9517 * C10410) / p + (C9781 * C10446) / C9047);
    const double C9577 = (C9231 * be) / p - (C9593 * C10416) / p -
                         (C9806 * C10411) / C10445 - (C9811 * C10448) / C9047 +
                         C10503;
    const double C9636 =
        C10503 - ((C9652 * C10418) / p + (C9854 * C10449) / C9047);
    const double C9972 =
        C10505 - ((C9971 * C10410) / p + (C10235 * C10446) / C9047);
    const double C10031 =
        C10505 - ((C10047 * C10416) / p + (C10264 * C10448) / C9047);
    const double C10090 = C10471 - (C10106 * C10418) / p - C10489 -
                          (C10307 * C10449) / C9047 + C10505;
    const double C8539 = (C9064 * be) / p - (C9051 * C10410) / p -
                         (C9065 * C10411) / C10445 - (C9052 * C10446) / C9047 +
                         C10492;
    const double C8568 =
        C10492 - ((C9129 * C10416) / p + (C9130 * C10448) / C9047);
    const double C8597 =
        C10492 - ((C9189 * C10418) / p + (C9190 * C10449) / C9047);
    const double C8704 =
        C10502 - ((C9516 * C10410) / p + (C9517 * C10446) / C9047);
    const double C8732 = C10454 - (C9592 * C10416) / p - C10479 -
                         (C9593 * C10448) / C9047 + C10502;
    const double C8760 =
        C10502 - ((C9651 * C10418) / p + (C9652 * C10449) / C9047);
    const double C8864 =
        C10504 - ((C9970 * C10410) / p + (C9971 * C10446) / C9047);
    const double C8892 =
        C10504 - ((C10046 * C10416) / p + (C10047 * C10448) / C9047);
    const double C8920 = C10456 - (C10105 * C10418) / p - C10480 -
                         (C10106 * C10449) / C9047 + C10504;
    const double C8538 = C10443 - (C8539 * C10410) / p - C10475 -
                         (C9050 * C10446) / C9047 +
                         (C9051 - (C9052 * C9045) / C9047) / p;
    const double C8548 = -((C8539 * C10416) / p + (C9050 * C10448) / C9047);
    const double C8557 = -((C8539 * C10418) / p + (C9050 * C10449) / C9047);
    const double C8567 =
        C10450 - (C8568 * C10410) / p - C10477 - (C9114 * C10446) / C9047;
    const double C8577 = (C9129 - (C9130 * C9045) / C9047) / p -
                         ((C8568 * C10416) / p + (C9114 * C10448) / C9047);
    const double C8586 = -((C8568 * C10418) / p + (C9114 * C10449) / C9047);
    const double C8596 =
        C10452 - (C8597 * C10410) / p - C10478 - (C9174 * C10446) / C9047;
    const double C8606 = -((C8597 * C10416) / p + (C9174 * C10448) / C9047);
    const double C8615 = (C9189 - (C9190 * C9045) / C9047) / p -
                         ((C8597 * C10418) / p + (C9174 * C10449) / C9047);
    const double C8703 = (C9516 - (C9517 * C9045) / C9047) / p -
                         ((C8704 * C10410) / p + (C9518 * C10446) / C9047);
    const double C8713 =
        C10443 - (C8704 * C10416) / p - C10475 - (C9518 * C10448) / C9047;
    const double C8722 = -((C8704 * C10418) / p + (C9518 * C10449) / C9047);
    const double C8731 = -((C8732 * C10410) / p + (C9577 * C10446) / C9047);
    const double C8741 = C10450 - (C8732 * C10416) / p - C10477 -
                         (C9577 * C10448) / C9047 +
                         (C9592 - (C9593 * C9045) / C9047) / p;
    const double C8750 = -((C8732 * C10418) / p + (C9577 * C10449) / C9047);
    const double C8759 = -((C8760 * C10410) / p + (C9636 * C10446) / C9047);
    const double C8769 =
        C10452 - (C8760 * C10416) / p - C10478 - (C9636 * C10448) / C9047;
    const double C8778 = (C9651 - (C9652 * C9045) / C9047) / p -
                         ((C8760 * C10418) / p + (C9636 * C10449) / C9047);
    const double C8863 = (C9970 - (C9971 * C9045) / C9047) / p -
                         ((C8864 * C10410) / p + (C9972 * C10446) / C9047);
    const double C8873 = -((C8864 * C10416) / p + (C9972 * C10448) / C9047);
    const double C8882 =
        C10443 - (C8864 * C10418) / p - C10475 - (C9972 * C10449) / C9047;
    const double C8891 = -((C8892 * C10410) / p + (C10031 * C10446) / C9047);
    const double C8901 = (C10046 - (C10047 * C9045) / C9047) / p -
                         ((C8892 * C10416) / p + (C10031 * C10448) / C9047);
    const double C8910 =
        C10450 - (C8892 * C10418) / p - C10477 - (C10031 * C10449) / C9047;
    const double C8919 = -((C8920 * C10410) / p + (C10090 * C10446) / C9047);
    const double C8929 = -((C8920 * C10416) / p + (C10090 * C10448) / C9047);
    const double C8938 = C10452 - (C8920 * C10418) / p - C10478 -
                         (C10090 * C10449) / C9047 +
                         (C10105 - (C10106 * C9045) / C9047) / p;
    vrx[0] = C8538;
    vrx[1] = C8539;
    vrx[2] = C8548;
    vrx[3] = C8557;
    vrx[4] = C8567;
    vrx[5] = C8568;
    vrx[6] = C8577;
    vrx[7] = C8586;
    vrx[8] = C8596;
    vrx[9] = C8597;
    vrx[10] = C8606;
    vrx[11] = C8615;
    vrx[12] = C8625;
    vrx[13] = C8642;
    vrx[14] = C8652;
    vrx[15] = C8678;
    vry[0] = C8703;
    vry[1] = C8704;
    vry[2] = C8713;
    vry[3] = C8722;
    vry[4] = C8731;
    vry[5] = C8732;
    vry[6] = C8741;
    vry[7] = C8750;
    vry[8] = C8759;
    vry[9] = C8760;
    vry[10] = C8769;
    vry[11] = C8778;
    vry[12] = C8787;
    vry[13] = C8804;
    vry[14] = C8813;
    vry[15] = C8838;
    vrz[0] = C8863;
    vrz[1] = C8864;
    vrz[2] = C8873;
    vrz[3] = C8882;
    vrz[4] = C8891;
    vrz[5] = C8892;
    vrz[6] = C8901;
    vrz[7] = C8910;
    vrz[8] = C8919;
    vrz[9] = C8920;
    vrz[10] = C8929;
    vrz[11] = C8938;
    vrz[12] = C8947;
    vrz[13] = C8964;
    vrz[14] = C8973;
    vrz[15] = C8998;
}
