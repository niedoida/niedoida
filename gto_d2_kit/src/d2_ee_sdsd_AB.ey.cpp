/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_sdsd_AB.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_0202_12(const double ae,
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
    const double C18396 = ae * be;
    const double C18395 = ae + be;
    const double C18394 = 0 * be;
    const double C18393 = xA - xB;
    const double C18425 = yA - yB;
    const double C18428 = zA - zB;
    const double C18439 = 0 * be;
    const double C18465 = 0 * be;
    const double C18511 = p + q;
    const double C18510 = p * q;
    const double C18516 = xP - xQ;
    const double C18515 = bs[2];
    const double C18521 = bs[3];
    const double C18532 = bs[4];
    const double C18553 = bs[5];
    const double C18585 = yP - yQ;
    const double C18611 = zP - zQ;
    const double C93 = bs[0];
    const double C19399 = ce + de;
    const double C19398 = ce * de;
    const double C19397 = xC - xD;
    const double C19411 = yC - yD;
    const double C19425 = zC - zD;
    const double C18404 = 2 * C18396;
    const double C18397 = std::pow(C18395, 2);
    const double C19515 = 2 * C18395;
    const double C18398 = C18396 * C18393;
    const double C19378 = std::pow(C18393, 2);
    const double C19514 = C18393 * ae;
    const double C18440 = C18396 * C18425;
    const double C19451 = std::pow(C18425, 2);
    const double C19521 = C18425 * ae;
    const double C18466 = C18396 * C18428;
    const double C19462 = std::pow(C18428, 2);
    const double C19522 = C18428 * ae;
    const double C18512 = 2 * C18510;
    const double C18524 = C18516 * ae;
    const double C18523 = C18516 * be;
    const double C18520 = std::pow(C18516, 2);
    const double C18588 = C18585 * be;
    const double C18587 = C18516 * C18585;
    const double C18639 = C18585 * ae;
    const double C18638 = C18585 * C18516;
    const double C18663 = std::pow(C18585, 2);
    const double C18614 = C18611 * be;
    const double C18613 = C18516 * C18611;
    const double C18677 = C18585 * C18611;
    const double C18690 = C18611 * ae;
    const double C18689 = C18611 * C18516;
    const double C18714 = C18611 * C18585;
    const double C18726 = std::pow(C18611, 2);
    const double C19518 = 2 * C19399;
    const double C19517 = std::pow(C19399, 2);
    const double C19400 = std::pow(C19397, 2);
    const double C19516 = C19397 * ce;
    const double C19412 = std::pow(C19411, 2);
    const double C19519 = C19411 * ce;
    const double C19426 = std::pow(C19425, 2);
    const double C19520 = C19425 * ce;
    const double C18399 = 2 * C18397;
    const double C19525 = std::pow(C19515, -2);
    const double C19523 = std::pow(C19515, -1);
    const double C19379 = C19378 * C18396;
    const double C19452 = C19451 * C18396;
    const double C19463 = C19462 * C18396;
    const double C18514 = C18512 / C18511;
    const double C108 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C18512 / C18511, 2) -
          (bs[1] * C18512) / C18511) *
         C18396) /
        C18397;
    const double C94 = -(C18516 * bs[1] * C18512) / C18511;
    const double C618 = -(C18585 * bs[1] * C18512) / C18511;
    const double C1059 = -(C18611 * bs[1] * C18512) / C18511;
    const double C18527 = C18521 * C18524;
    const double C18538 = C18532 * C18524;
    const double C18561 = C18553 * C18524;
    const double C99 = (-(bs[1] * C18524 * C18512) / C18511) / C18395;
    const double C18526 = C18521 * C18523;
    const double C18535 = C18532 * C18523;
    const double C18557 = C18553 * C18523;
    const double C98 = (-(bs[1] * C18523 * C18512) / C18511) / C18395;
    const double C18534 = C18520 * C18532;
    const double C18556 = C18520 * C18553;
    const double C18590 = C18521 * C18588;
    const double C18595 = C18532 * C18588;
    const double C18602 = C18553 * C18588;
    const double C152 = (-(bs[1] * C18588 * C18512) / C18511) / C18395;
    const double C18589 = C18587 * ae;
    const double C18641 = C18521 * C18639;
    const double C18646 = C18532 * C18639;
    const double C18653 = C18553 * C18639;
    const double C277 = (-(bs[1] * C18639 * C18512) / C18511) / C18395;
    const double C18640 = C18638 * ae;
    const double C18665 = C18663 * C18532;
    const double C18670 = C18663 * C18553;
    const double C18616 = C18521 * C18614;
    const double C18621 = C18532 * C18614;
    const double C18628 = C18553 * C18614;
    const double C215 = (-(bs[1] * C18614 * C18512) / C18511) / C18395;
    const double C18615 = C18613 * ae;
    const double C18678 = C18677 * ae;
    const double C18692 = C18521 * C18690;
    const double C18697 = C18532 * C18690;
    const double C18704 = C18553 * C18690;
    const double C443 = (-(bs[1] * C18690 * C18512) / C18511) / C18395;
    const double C18691 = C18689 * ae;
    const double C18715 = C18714 * ae;
    const double C18728 = C18726 * C18532;
    const double C18733 = C18726 * C18553;
    const double C19528 = std::pow(C19518, -2);
    const double C19526 = std::pow(C19518, -1);
    const double C19401 = C19400 * C19398;
    const double C19413 = C19412 * C19398;
    const double C19427 = C19426 * C19398;
    const double C19380 = C19379 / C18395;
    const double C19453 = C19452 / C18395;
    const double C19464 = C19463 / C18395;
    const double C18517 = std::pow(C18514, 2);
    const double C18522 = -C18514;
    const double C18533 = std::pow(C18514, 4);
    const double C18591 = C18589 * be;
    const double C18642 = C18640 * be;
    const double C18617 = C18615 * be;
    const double C18679 = C18678 * be;
    const double C18693 = C18691 * be;
    const double C18716 = C18715 * be;
    const double C19402 = C19401 / C19399;
    const double C19414 = C19413 / C19399;
    const double C19428 = C19427 / C19399;
    const double C19381 = -C19380;
    const double C19454 = -C19453;
    const double C19465 = -C19464;
    const double C18519 = C18515 * C18517;
    const double C109 = (ae * C18517 * C18515 * C18516 * be +
                         be * C18517 * C18515 * C18516 * ae +
                         C18516 *
                             (C18515 * C18517 + std::pow(C18516, 2) * bs[3] *
                                                    std::pow(-C18514, 3)) *
                             C18396) /
                        C18397;
    const double C157 =
        (C18517 * C18515 * C18516 * (yP - yQ) * ae * be) / C18397;
    const double C220 =
        (C18517 * C18515 * C18516 * (zP - zQ) * ae * be) / C18397;
    const double C282 = (C18517 * C18515 * C18585 * C18516 * ae * be) / C18397;
    const double C326 =
        ((std::pow(C18585, 2) * C18515 * C18517 - (bs[1] * C18512) / C18511) *
         C18396) /
        C18397;
    const double C390 = (C18517 * C18515 * C18585 * C18611 * ae * be) / C18397;
    const double C448 = (C18517 * C18515 * C18611 * C18516 * ae * be) / C18397;
    const double C491 = (C18517 * C18515 * C18611 * C18585 * ae * be) / C18397;
    const double C545 =
        ((std::pow(C18611, 2) * C18515 * C18517 - (bs[1] * C18512) / C18511) *
         C18396) /
        C18397;
    const double C100 = (C18516 * C18517 * C18515 * C18523) / C18395 -
                        (be * bs[1] * C18512) / (C18511 * C18395);
    const double C101 = (C18516 * C18517 * C18515 * C18524) / C18395 -
                        (ae * bs[1] * C18512) / (C18511 * C18395);
    const double C153 = (C18516 * C18517 * C18515 * C18588) / C18395;
    const double C216 = (C18516 * C18517 * C18515 * C18614) / C18395;
    const double C278 = (C18516 * C18517 * C18515 * C18639) / C18395;
    const double C444 = (C18516 * C18517 * C18515 * C18690) / C18395;
    const double C626 = (C18585 * C18517 * C18515 * C18523) / C18395;
    const double C627 = (C18585 * C18517 * C18515 * C18524) / C18395;
    const double C678 = (C18585 * C18517 * C18515 * C18588) / C18395 -
                        (be * bs[1] * C18512) / (C18511 * C18395);
    const double C728 = (C18585 * C18517 * C18515 * C18614) / C18395;
    const double C778 = (C18585 * C18517 * C18515 * C18639) / C18395 -
                        (ae * bs[1] * C18512) / (C18511 * C18395);
    const double C916 = (C18585 * C18517 * C18515 * C18690) / C18395;
    const double C1067 = (C18611 * C18517 * C18515 * C18523) / C18395;
    const double C1068 = (C18611 * C18517 * C18515 * C18524) / C18395;
    const double C1119 = (C18611 * C18517 * C18515 * C18588) / C18395;
    const double C1169 = (C18611 * C18517 * C18515 * C18614) / C18395 -
                         (be * bs[1] * C18512) / (C18511 * C18395);
    const double C1219 = (C18611 * C18517 * C18515 * C18639) / C18395;
    const double C1357 = (C18611 * C18517 * C18515 * C18690) / C18395 -
                         (ae * bs[1] * C18512) / (C18511 * C18395);
    const double C18525 = std::pow(C18522, 3);
    const double C18554 = std::pow(C18522, 5);
    const double C18542 = C18533 * C18538;
    const double C18541 = C18533 * C18535;
    const double C18540 = C18534 * C18533;
    const double C18552 = C18532 * C18533;
    const double C18597 = C18533 * C18595;
    const double C18623 = C18533 * C18621;
    const double C18648 = C18533 * C18646;
    const double C18666 = C18665 * C18533;
    const double C18699 = C18533 * C18697;
    const double C18729 = C18728 * C18533;
    const double C18594 = C18532 * C18591;
    const double C18601 = C18553 * C18591;
    const double C18645 = C18532 * C18642;
    const double C18652 = C18553 * C18642;
    const double C18620 = C18532 * C18617;
    const double C18627 = C18553 * C18617;
    const double C18681 = C18532 * C18679;
    const double C18684 = C18553 * C18679;
    const double C18696 = C18532 * C18693;
    const double C18703 = C18553 * C18693;
    const double C18718 = C18532 * C18716;
    const double C18721 = C18553 * C18716;
    const double C19403 = -C19402;
    const double C19415 = -C19414;
    const double C19429 = -C19428;
    const double C19382 = std::exp(C19381);
    const double C19455 = std::exp(C19454);
    const double C19466 = std::exp(C19465);
    const double C95 = C18519 * C18520 - (bs[1] * C18512) / C18511;
    const double C617 = C18585 * C18516 * C18519;
    const double C619 = C18519 * C18663 - (bs[1] * C18512) / C18511;
    const double C1058 = C18611 * C18516 * C18519;
    const double C1060 = C18519 * C18726 - (bs[1] * C18512) / C18511;
    const double C2553 = C18611 * C18585 * C18519;
    const double C18529 = C18525 * C18527;
    const double C18528 = C18525 * C18526;
    const double C18531 = C18521 * C18525;
    const double C18592 = C18525 * C18590;
    const double C18618 = C18525 * C18616;
    const double C18643 = C18525 * C18641;
    const double C18694 = C18525 * C18692;
    const double C158 = (ae * C18517 * C18515 * C18585 * be +
                         C18516 * C18525 * C18521 * C18516 * C18585 * ae * be) /
                        C18397;
    const double C221 = (ae * C18517 * C18515 * C18611 * be +
                         C18516 * C18525 * C18521 * C18516 * C18611 * ae * be) /
                        C18397;
    const double C283 = (be * C18517 * C18515 * C18585 * ae +
                         C18516 * C18525 * C18521 * C18585 * C18516 * ae * be) /
                        C18397;
    const double C327 =
        (C18516 * (C18519 + std::pow(C18585, 2) * C18521 * C18525) * C18396) /
        C18397;
    const double C391 =
        (C18516 * C18525 * C18521 * C18585 * C18611 * ae * be) / C18397;
    const double C392 =
        (C18525 * C18521 * C18679 + C18533 * C18532 * C18679 * C18520) / C18397;
    const double C449 = (be * C18517 * C18515 * C18611 * ae +
                         C18516 * C18525 * C18521 * C18611 * C18516 * ae * be) /
                        C18397;
    const double C492 =
        (C18516 * C18525 * C18521 * C18611 * C18585 * ae * be) / C18397;
    const double C493 =
        (C18525 * C18521 * C18716 + C18533 * C18532 * C18716 * C18520) / C18397;
    const double C546 =
        (C18516 * (C18519 + std::pow(C18611, 2) * C18521 * C18525) * C18396) /
        C18397;
    const double C636 =
        (C18585 * (C18519 + C18520 * C18521 * C18525) * C18396) / C18397;
    const double C684 =
        (be * C18517 * C18515 * C18524 + C18585 * C18525 * C18521 * C18591) /
        C18397;
    const double C734 = (C18585 * C18525 * C18521 * C18617) / C18397;
    const double C784 =
        (ae * C18517 * C18515 * C18523 + C18585 * C18525 * C18521 * C18642) /
        C18397;
    const double C830 =
        (ae * C18517 * C18515 * C18588 + be * C18517 * C18515 * C18639 +
         C18585 * (C18519 + C18663 * C18521 * C18525) * C18396) /
        C18397;
    const double C872 =
        (ae * C18517 * C18515 * C18614 + C18585 * C18525 * C18521 * C18679) /
        C18397;
    const double C922 = (C18585 * C18525 * C18521 * C18693) / C18397;
    const double C966 =
        (be * C18517 * C18515 * C18690 + C18585 * C18525 * C18521 * C18716) /
        C18397;
    const double C1012 =
        (C18585 * (C18519 + C18726 * C18521 * C18525) * C18396) / C18397;
    const double C1077 =
        (C18611 * (C18519 + C18520 * C18521 * C18525) * C18396) / C18397;
    const double C1125 = (C18611 * C18525 * C18521 * C18591) / C18397;
    const double C1175 =
        (be * C18517 * C18515 * C18524 + C18611 * C18525 * C18521 * C18617) /
        C18397;
    const double C1225 = (C18611 * C18525 * C18521 * C18642) / C18397;
    const double C1271 =
        (C18611 * (C18519 + C18663 * C18521 * C18525) * C18396) / C18397;
    const double C1313 =
        (be * C18517 * C18515 * C18639 + C18611 * C18525 * C18521 * C18679) /
        C18397;
    const double C1363 =
        (ae * C18517 * C18515 * C18523 + C18611 * C18525 * C18521 * C18693) /
        C18397;
    const double C1407 =
        (ae * C18517 * C18515 * C18588 + C18611 * C18525 * C18521 * C18716) /
        C18397;
    const double C1453 =
        (ae * C18517 * C18515 * C18614 + be * C18517 * C18515 * C18690 +
         C18611 * (C18519 + C18726 * C18521 * C18525) * C18396) /
        C18397;
    const double C18567 = C18554 * C18561;
    const double C18564 = C18554 * C18557;
    const double C18563 = C18556 * C18554;
    const double C18604 = C18554 * C18602;
    const double C18630 = C18554 * C18628;
    const double C18655 = C18554 * C18653;
    const double C18671 = C18670 * C18554;
    const double C18706 = C18554 * C18704;
    const double C18734 = C18733 * C18554;
    const double C18545 = C18516 * C18542;
    const double C18551 = be * C18542;
    const double C18896 = C18585 * C18542;
    const double C19030 = C18611 * C18542;
    const double C18544 = C18516 * C18541;
    const double C18550 = ae * C18541;
    const double C18905 = C18585 * C18541;
    const double C19046 = C18611 * C18541;
    const double C18562 = C18552 * ae;
    const double C18560 = C18552 * C18520;
    const double C18559 = C18516 * C18552;
    const double C18558 = C18552 * be;
    const double C18921 = C18552 * C18663;
    const double C18920 = C18585 * C18552;
    const double C19069 = C18552 * C18726;
    const double C19068 = C18611 * C18552;
    const double C18600 = ae * C18597;
    const double C18599 = C18516 * C18597;
    const double C18911 = C18585 * C18597;
    const double C19053 = C18611 * C18597;
    const double C18626 = ae * C18623;
    const double C18625 = C18516 * C18623;
    const double C18937 = C18585 * C18623;
    const double C19059 = C18611 * C18623;
    const double C18651 = be * C18648;
    const double C18650 = C18516 * C18648;
    const double C18913 = C18585 * C18648;
    const double C19041 = C18611 * C18648;
    const double C18702 = be * C18699;
    const double C18701 = C18516 * C18699;
    const double C18946 = C18585 * C18699;
    const double C19061 = C18611 * C18699;
    const double C18596 = C18533 * C18594;
    const double C18603 = C18554 * C18601;
    const double C18647 = C18533 * C18645;
    const double C18654 = C18554 * C18652;
    const double C18622 = C18533 * C18620;
    const double C18629 = C18554 * C18627;
    const double C18682 = C18533 * C18681;
    const double C18685 = C18554 * C18684;
    const double C18698 = C18533 * C18696;
    const double C18705 = C18554 * C18703;
    const double C18719 = C18533 * C18718;
    const double C18722 = C18554 * C18721;
    const double C19404 = std::exp(C19403);
    const double C19416 = std::exp(C19415);
    const double C19430 = std::exp(C19429);
    const double C3569 = C19382 * C626;
    const double C6609 = C19382 * C1067;
    const double C18400 = C18398 * C19382;
    const double C19524 = C19382 * C19514;
    const double C77 =
        (C19382 * std::pow(C19514, 2)) / C18397 + C19382 / C19515;
    const double C79 = C19525 * C19382;
    const double C8396 = C19523 * C19382;
    const double C163 = C19455 * C153;
    const double C6508 = C19455 * C1119;
    const double C18441 = C18440 * C19455;
    const double C151 = -(2 * C18396 * (yA - yB) * C19455) / C18395;
    const double C325 =
        -((C19455 - (C18425 * 2 * C18396 * C18425 * C19455) / C18395) *
          C18404) /
        C18395;
    const double C19531 = C19455 * C19521;
    const double C3040 =
        (C19455 * std::pow(C19521, 2)) / C18397 + C19455 / C19515;
    const double C3042 = C19525 * C19455;
    const double C8398 = C19523 * C19455;
    const double C226 = C19466 * C216;
    const double C3510 = C19466 * C728;
    const double C18467 = C18466 * C19466;
    const double C214 = -(2 * C18396 * (zA - zB) * C19466) / C18395;
    const double C544 =
        -((C19466 - (C18428 * 2 * C18396 * C18428 * C19466) / C18395) *
          C18404) /
        C18395;
    const double C19532 = C19466 * C19522;
    const double C5743 =
        (C19466 * std::pow(C19522, 2)) / C18397 + C19466 / C19515;
    const double C5745 = C19525 * C19466;
    const double C11775 = C19523 * C19466;
    const double C103 =
        (C18517 * C18515 * C18524 + C18516 * (C18516 * C18529 + C18519 * ae) +
         C18516 * C18519 * ae) /
        C18395;
    const double C625 = (C18585 * (C18516 * C18529 + C18519 * ae)) / C18395;
    const double C629 = (C18517 * C18515 * C18524 + C18529 * C18663) / C18395;
    const double C1066 = (C18611 * (C18516 * C18529 + C18519 * ae)) / C18395;
    const double C1070 = (C18517 * C18515 * C18524 + C18529 * C18726) / C18395;
    const double C2557 = (C18611 * C18585 * C18529) / C18395;
    const double C3396 =
        (2 * C18585 * C18529 + C18585 * (C18529 + C18542 * C18663)) / C18395;
    const double C3864 = (C18611 * (C18529 + C18542 * C18663)) / C18395;
    const double C6439 =
        (2 * C18611 * C18529 + C18611 * (C18529 + C18542 * C18726)) / C18395;
    const double C110 =
        ((C18519 + C18520 * C18521 * C18525) * C18396 +
         ae * (C18516 * C18528 + C18519 * be) +
         be * (C18516 * C18529 + C18519 * ae) +
         C18516 *
             (ae * C18528 + be * C18529 +
              C18516 *
                  (C18521 * C18525 + C18520 * bs[4] * std::pow(C18514, 4)) *
                  C18396)) /
        C18397;
    const double C102 =
        (C18517 * C18515 * C18523 + C18516 * (C18516 * C18528 + C18519 * be) +
         C18516 * C18519 * be) /
        C18395;
    const double C624 = (C18585 * (C18516 * C18528 + C18519 * be)) / C18395;
    const double C628 = (C18517 * C18515 * C18523 + C18528 * C18663) / C18395;
    const double C1065 = (C18611 * (C18516 * C18528 + C18519 * be)) / C18395;
    const double C1069 = (C18517 * C18515 * C18523 + C18528 * C18726) / C18395;
    const double C2556 = (C18611 * C18585 * C18528) / C18395;
    const double C3395 =
        (2 * C18585 * C18528 + C18585 * (C18528 + C18541 * C18663)) / C18395;
    const double C3863 = (C18611 * (C18528 + C18541 * C18663)) / C18395;
    const double C6438 =
        (2 * C18611 * C18528 + C18611 * (C18528 + C18541 * C18726)) / C18395;
    const double C18539 = C18531 * ae;
    const double C18537 = C18516 * C18531;
    const double C18536 = C18531 * be;
    const double C18543 = C18531 + C18540;
    const double C18667 = C18531 + C18666;
    const double C18730 = C18531 + C18729;
    const double C18912 = C18585 * C18531;
    const double C19060 = C18611 * C18531;
    const double C328 =
        ((C18519 + C18663 * C18521 * C18525) * C18396 +
         (C18531 + C18663 * C18532 * C18533) * C18396 * C18520) /
        C18397;
    const double C547 =
        ((C18519 + C18726 * C18521 * C18525) * C18396 +
         (C18531 + C18726 * C18532 * C18533) * C18396 * C18520) /
        C18397;
    const double C96 =
        2 * C18516 * C18519 + C18516 * (C18519 + C18531 * C18520);
    const double C616 = C18585 * (C18519 + C18531 * C18520);
    const double C1057 = C18611 * (C18519 + C18531 * C18520);
    const double C3393 =
        2 * C18585 * C18519 + C18585 * (C18519 + C18531 * C18663);
    const double C3860 = C18611 * (C18519 + C18531 * C18663);
    const double C6436 =
        2 * C18611 * C18519 + C18611 * (C18519 + C18531 * C18726);
    const double C159 =
        (C18525 * C18521 * C18591 + ae * C18516 * C18592 +
         C18516 * (ae * C18592 + C18516 * C18533 * C18532 * C18591)) /
        C18397;
    const double C154 = (C18517 * C18515 * C18588 + C18592 * C18520) / C18395;
    const double C155 =
        (2 * C18516 * C18592 + C18516 * (C18592 + C18597 * C18520)) / C18395;
    const double C679 =
        (C18585 * C18516 * C18592 + C18516 * C18519 * be) / C18395;
    const double C680 = (C18585 * (C18592 + C18597 * C18520) +
                         (C18519 + C18531 * C18520) * be) /
                        C18395;
    const double C681 =
        (C18517 * C18515 * C18588 + C18585 * (C18585 * C18592 + C18519 * be) +
         C18585 * C18519 * be) /
        C18395;
    const double C1120 = (C18611 * C18516 * C18592) / C18395;
    const double C1121 = (C18611 * (C18592 + C18597 * C18520)) / C18395;
    const double C1122 = (C18517 * C18515 * C18588 + C18592 * C18726) / C18395;
    const double C2615 = (C18611 * (C18585 * C18592 + C18519 * be)) / C18395;
    const double C6503 =
        (2 * C18611 * C18592 + C18611 * (C18592 + C18597 * C18726)) / C18395;
    const double C222 =
        (C18525 * C18521 * C18617 + ae * C18516 * C18618 +
         C18516 * (ae * C18618 + C18516 * C18533 * C18532 * C18617)) /
        C18397;
    const double C217 = (C18517 * C18515 * C18614 + C18618 * C18520) / C18395;
    const double C218 =
        (2 * C18516 * C18618 + C18516 * (C18618 + C18623 * C18520)) / C18395;
    const double C729 = (C18585 * C18516 * C18618) / C18395;
    const double C730 = (C18585 * (C18618 + C18623 * C18520)) / C18395;
    const double C731 = (C18517 * C18515 * C18614 + C18618 * C18663) / C18395;
    const double C1170 =
        (C18611 * C18516 * C18618 + C18516 * C18519 * be) / C18395;
    const double C1171 = (C18611 * (C18618 + C18623 * C18520) +
                          (C18519 + C18531 * C18520) * be) /
                         C18395;
    const double C1172 =
        (C18517 * C18515 * C18614 + C18611 * (C18611 * C18618 + C18519 * be) +
         C18611 * C18519 * be) /
        C18395;
    const double C2671 =
        (C18611 * C18585 * C18618 + C18585 * C18519 * be) / C18395;
    const double C3505 =
        (2 * C18585 * C18618 + C18585 * (C18618 + C18623 * C18663)) / C18395;
    const double C3954 = (C18611 * (C18618 + C18623 * C18663) +
                          (C18519 + C18531 * C18663) * be) /
                         C18395;
    const double C284 =
        (C18525 * C18521 * C18642 + be * C18516 * C18643 +
         C18516 * (be * C18643 + C18516 * C18533 * C18532 * C18642)) /
        C18397;
    const double C279 = (C18517 * C18515 * C18639 + C18643 * C18520) / C18395;
    const double C280 =
        (2 * C18516 * C18643 + C18516 * (C18643 + C18648 * C18520)) / C18395;
    const double C779 =
        (C18585 * C18516 * C18643 + C18516 * C18519 * ae) / C18395;
    const double C780 = (C18585 * (C18643 + C18648 * C18520) +
                         (C18519 + C18531 * C18520) * ae) /
                        C18395;
    const double C781 =
        (C18517 * C18515 * C18639 + C18585 * (C18585 * C18643 + C18519 * ae) +
         C18585 * C18519 * ae) /
        C18395;
    const double C1220 = (C18611 * C18516 * C18643) / C18395;
    const double C1221 = (C18611 * (C18643 + C18648 * C18520)) / C18395;
    const double C1222 = (C18517 * C18515 * C18639 + C18643 * C18726) / C18395;
    const double C2727 = (C18611 * (C18585 * C18643 + C18519 * ae)) / C18395;
    const double C6604 =
        (2 * C18611 * C18643 + C18611 * (C18643 + C18648 * C18726)) / C18395;
    const double C450 =
        (C18525 * C18521 * C18693 + be * C18516 * C18694 +
         C18516 * (be * C18694 + C18516 * C18533 * C18532 * C18693)) /
        C18397;
    const double C445 = (C18517 * C18515 * C18690 + C18694 * C18520) / C18395;
    const double C446 =
        (2 * C18516 * C18694 + C18516 * (C18694 + C18699 * C18520)) / C18395;
    const double C917 = (C18585 * C18516 * C18694) / C18395;
    const double C918 = (C18585 * (C18694 + C18699 * C18520)) / C18395;
    const double C919 = (C18517 * C18515 * C18690 + C18694 * C18663) / C18395;
    const double C1358 =
        (C18611 * C18516 * C18694 + C18516 * C18519 * ae) / C18395;
    const double C1359 = (C18611 * (C18694 + C18699 * C18520) +
                          (C18519 + C18531 * C18520) * ae) /
                         C18395;
    const double C1360 =
        (C18517 * C18515 * C18690 + C18611 * (C18611 * C18694 + C18519 * ae) +
         C18611 * C18519 * ae) /
        C18395;
    const double C2889 =
        (C18611 * C18585 * C18694 + C18585 * C18519 * ae) / C18395;
    const double C3707 =
        (2 * C18585 * C18694 + C18585 * (C18694 + C18699 * C18663)) / C18395;
    const double C4124 = (C18611 * (C18694 + C18699 * C18663) +
                          (C18519 + C18531 * C18663) * ae) /
                         C18395;
    const double C165 = C19455 * C158;
    const double C228 = C19466 * C221;
    const double C335 = C19455 * C327;
    const double C396 = C19466 * C391;
    const double C399 = C19466 * C392;
    const double C497 = C19455 * C492;
    const double C500 = C19455 * C493;
    const double C554 = C19466 * C546;
    const double C3405 = C19382 * C636;
    const double C3512 = C19466 * C734;
    const double C3571 = C19382 * C784;
    const double C3663 = C19466 * C872;
    const double C3712 = C19382 * C922;
    const double C3805 = C19466 * C1012;
    const double C6448 = C19382 * C1077;
    const double C6510 = C19455 * C1125;
    const double C6611 = C19382 * C1225;
    const double C6669 = C19455 * C1271;
    const double C6772 = C19382 * C1363;
    const double C6819 = C19455 * C1407;
    const double C18571 = C18516 * C18567;
    const double C18898 = C18567 * C18663;
    const double C19032 = C18567 * C18726;
    const double C19114 = C18585 * C18567;
    const double C18570 = C18516 * C18564;
    const double C18907 = C18564 * C18663;
    const double C19048 = C18564 * C18726;
    const double C19120 = C18585 * C18564;
    const double C18569 = C18552 + C18563;
    const double C18606 = C18604 * C18520;
    const double C18919 = C18585 * C18604;
    const double C18986 = C18516 * C18604;
    const double C19055 = C18604 * C18726;
    const double C18632 = C18630 * C18520;
    const double C18939 = C18630 * C18663;
    const double C18995 = C18516 * C18630;
    const double C19067 = C18611 * C18630;
    const double C19124 = C18585 * C18630;
    const double C18657 = C18655 * C18520;
    const double C18922 = C18585 * C18655;
    const double C18988 = C18516 * C18655;
    const double C19042 = C18655 * C18726;
    const double C18672 = C18552 + C18671;
    const double C18708 = C18706 * C18520;
    const double C18948 = C18706 * C18663;
    const double C18999 = C18516 * C18706;
    const double C19070 = C18611 * C18706;
    const double C19126 = C18585 * C18706;
    const double C18735 = C18552 + C18734;
    const double C3866 = (C18585 * C18529 + C18896 * C18726) / C18395;
    const double C18555 = C18550 + C18551;
    const double C3865 = (C18585 * C18528 + C18905 * C18726) / C18395;
    const double C18566 = C18531 + C18560;
    const double C18568 = C18559 * ae;
    const double C18565 = C18559 * be;
    const double C18987 = C18585 * C18559;
    const double C19106 = C18611 * C18559;
    const double C18926 = C18531 + C18921;
    const double C18928 = C18920 * ae;
    const double C18925 = C18920 * be;
    const double C19125 = C18611 * C18920;
    const double C19074 = C18531 + C19069;
    const double C19076 = C19068 * ae;
    const double C19073 = C19068 * be;
    const double C1123 = (C18516 * C18592 + C18599 * C18726) / C18395;
    const double C732 = (C18516 * C18618 + C18625 * C18663) / C18395;
    const double C18917 = C18600 + C18651;
    const double C1223 = (C18516 * C18643 + C18650 * C18726) / C18395;
    const double C19065 = C18626 + C18702;
    const double C920 = (C18516 * C18694 + C18701 * C18663) / C18395;
    const double C160 =
        (2 * (ae * C18592 + C18516 * C18596) + ae * (C18592 + C18597 * C18520) +
         C18516 *
             (C18596 + ae * C18516 * C18597 +
              C18516 * (ae * C18597 + C18516 * C18554 * C18553 * C18591))) /
        C18397;
    const double C685 = (be * (C18516 * C18529 + C18519 * ae) +
                         C18585 * (ae * C18592 + C18516 * C18596)) /
                        C18397;
    const double C687 = (C18525 * C18521 * C18591 + be * C18585 * C18529 +
                         C18585 * (be * C18529 + C18585 * C18596)) /
                        C18397;
    const double C1126 = (C18611 * (ae * C18592 + C18516 * C18596)) / C18397;
    const double C1128 = (C18525 * C18521 * C18591 + C18596 * C18726) / C18397;
    const double C2618 = (C18611 * (be * C18529 + C18585 * C18596)) / C18397;
    const double C18605 = C18516 * C18603;
    const double C18897 = C18585 * C18603;
    const double C3465 =
        (2 * (be * C18529 + C18585 * C18596) + be * (C18529 + C18542 * C18663) +
         C18585 * (C18596 + be * C18585 * C18542 +
                   C18585 * (C18551 + C18585 * C18603))) /
        C18397;
    const double C6505 =
        (2 * C18611 * C18596 + C18611 * (C18596 + C18603 * C18726)) / C18397;
    const double C6506 =
        (3 * (C18596 + C18603 * C18726) +
         C18611 * (2 * C18611 * C18603 +
                   C18611 * (C18603 +
                             std::pow(C18514, 6) * bs[6] * C18591 * C18726))) /
        C18397;
    const double C285 =
        (2 * (be * C18643 + C18516 * C18647) + be * (C18643 + C18648 * C18520) +
         C18516 *
             (C18647 + be * C18516 * C18648 +
              C18516 * (be * C18648 + C18516 * C18554 * C18553 * C18642))) /
        C18397;
    const double C785 = (ae * (C18516 * C18528 + C18519 * be) +
                         C18585 * (be * C18643 + C18516 * C18647)) /
                        C18397;
    const double C787 = (C18525 * C18521 * C18642 + ae * C18585 * C18528 +
                         C18585 * (ae * C18528 + C18585 * C18647)) /
                        C18397;
    const double C1226 = (C18611 * (be * C18643 + C18516 * C18647)) / C18397;
    const double C1228 = (C18525 * C18521 * C18642 + C18647 * C18726) / C18397;
    const double C2730 =
        (ae * C18611 * C18528 + C18585 * C18611 * C18647) / C18397;
    const double C18656 = C18516 * C18654;
    const double C18906 = C18585 * C18654;
    const double C19015 = C18611 * C18654;
    const double C3566 =
        (2 * (ae * C18528 + C18585 * C18647) + ae * (C18528 + C18541 * C18663) +
         C18585 * (C18647 + ae * C18585 * C18541 +
                   C18585 * (C18550 + C18585 * C18654))) /
        C18397;
    const double C4001 =
        (C18611 * C18647 + ae * C18611 * C18905 +
         C18585 * (ae * C18611 * C18541 + C18585 * C18611 * C18654)) /
        C18397;
    const double C4002 = (ae * (C18528 + C18541 * C18726) +
                          C18585 * (C18647 + C18654 * C18726)) /
                         C18397;
    const double C4003 =
        (C18647 + C18654 * C18726 + ae * (C18905 + C18585 * C18564 * C18726) +
         C18585 * (ae * (C18541 + C18564 * C18726) +
                   C18585 * (C18654 +
                             std::pow(C18514, 6) * bs[6] * C18642 * C18726))) /
        C18397;
    const double C6606 =
        (2 * C18611 * C18647 + C18611 * (C18647 + C18654 * C18726)) / C18397;
    const double C223 =
        (2 * (ae * C18618 + C18516 * C18622) + ae * (C18618 + C18623 * C18520) +
         C18516 *
             (C18622 + ae * C18516 * C18623 +
              C18516 * (ae * C18623 + C18516 * C18554 * C18553 * C18617))) /
        C18397;
    const double C735 = (C18585 * (ae * C18618 + C18516 * C18622)) / C18397;
    const double C737 = (C18525 * C18521 * C18617 + C18622 * C18663) / C18397;
    const double C1176 = (be * (C18516 * C18529 + C18519 * ae) +
                          C18611 * (ae * C18618 + C18516 * C18622)) /
                         C18397;
    const double C1178 = (C18525 * C18521 * C18617 + be * C18611 * C18529 +
                          C18611 * (be * C18529 + C18611 * C18622)) /
                         C18397;
    const double C2674 =
        (be * C18585 * C18529 + C18611 * C18585 * C18622) / C18397;
    const double C18631 = C18516 * C18629;
    const double C19031 = C18611 * C18629;
    const double C19113 = C18585 * C18629;
    const double C3507 =
        (2 * C18585 * C18622 + C18585 * (C18622 + C18629 * C18663)) / C18397;
    const double C3508 =
        (3 * (C18622 + C18629 * C18663) +
         C18585 * (2 * C18585 * C18629 +
                   C18585 * (C18629 +
                             std::pow(C18514, 6) * bs[6] * C18617 * C18663))) /
        C18397;
    const double C3957 = (be * (C18529 + C18542 * C18663) +
                          C18611 * (C18622 + C18629 * C18663)) /
                         C18397;
    const double C3958 = (C18585 * C18622 + be * C18611 * C18896 +
                          C18611 * (be * C18896 + C18611 * C18585 * C18629)) /
                         C18397;
    const double C6564 =
        (2 * (be * C18529 + C18611 * C18622) + be * (C18529 + C18542 * C18726) +
         C18611 * (C18622 + be * C18611 * C18542 +
                   C18611 * (C18551 + C18611 * C18629))) /
        C18397;
    const double C393 =
        (2 * C18516 * C18682 +
         C18516 * (C18682 + C18554 * C18553 * C18679 * C18520)) /
        C18397;
    const double C873 =
        (ae * C18516 * C18618 + C18585 * C18516 * C18682) / C18397;
    const double C875 = (C18525 * C18521 * C18679 + ae * C18585 * C18618 +
                         C18585 * (ae * C18618 + C18585 * C18682)) /
                        C18397;
    const double C1314 =
        (be * C18516 * C18643 + C18611 * C18516 * C18682) / C18397;
    const double C1316 = (C18525 * C18521 * C18679 + be * C18611 * C18643 +
                          C18611 * (be * C18643 + C18611 * C18682)) /
                         C18397;
    const double C2836 = (ae * (C18611 * C18618 + C18519 * be) +
                          C18585 * (be * C18643 + C18611 * C18682)) /
                         C18397;
    const double C18938 = C18585 * C18685;
    const double C18994 = C18516 * C18685;
    const double C19019 = C18611 * C18685;
    const double C394 =
        (3 * (C18682 + C18685 * C18520) +
         C18516 * (2 * C18516 * C18685 +
                   C18516 * (C18685 +
                             std::pow(C18514, 6) * bs[6] * C18679 * C18520))) /
        C18397;
    const double C874 = (ae * (C18618 + C18623 * C18520) +
                         C18585 * (C18682 + C18685 * C18520)) /
                        C18397;
    const double C876 = (C18516 * C18682 + ae * C18585 * C18625 +
                         C18585 * (ae * C18625 + C18585 * C18516 * C18685)) /
                        C18397;
    const double C1315 = (be * (C18643 + C18648 * C18520) +
                          C18611 * (C18682 + C18685 * C18520)) /
                         C18397;
    const double C1317 = (C18516 * C18682 + be * C18611 * C18650 +
                          C18611 * (be * C18650 + C18611 * C18516 * C18685)) /
                         C18397;
    const double C3660 =
        (2 * (ae * C18618 + C18585 * C18682) + ae * (C18618 + C18623 * C18663) +
         C18585 * (C18682 + ae * C18585 * C18623 +
                   C18585 * (C18626 + C18585 * C18685))) /
        C18397;
    const double C451 =
        (2 * (be * C18694 + C18516 * C18698) + be * (C18694 + C18699 * C18520) +
         C18516 *
             (C18698 + be * C18516 * C18699 +
              C18516 * (be * C18699 + C18516 * C18554 * C18553 * C18693))) /
        C18397;
    const double C923 = (C18585 * (be * C18694 + C18516 * C18698)) / C18397;
    const double C925 = (C18525 * C18521 * C18693 + C18698 * C18663) / C18397;
    const double C1364 = (ae * (C18516 * C18528 + C18519 * be) +
                          C18611 * (be * C18694 + C18516 * C18698)) /
                         C18397;
    const double C1366 = (C18525 * C18521 * C18693 + ae * C18611 * C18528 +
                          C18611 * (ae * C18528 + C18611 * C18698)) /
                         C18397;
    const double C2892 =
        (ae * C18585 * C18528 + C18611 * C18585 * C18698) / C18397;
    const double C18707 = C18516 * C18705;
    const double C19047 = C18611 * C18705;
    const double C19119 = C18585 * C18705;
    const double C3709 =
        (2 * C18585 * C18698 + C18585 * (C18698 + C18705 * C18663)) / C18397;
    const double C3710 =
        (3 * (C18698 + C18705 * C18663) +
         C18585 * (2 * C18585 * C18705 +
                   C18585 * (C18705 +
                             std::pow(C18514, 6) * bs[6] * C18693 * C18663))) /
        C18397;
    const double C4127 = (ae * (C18528 + C18541 * C18663) +
                          C18611 * (C18698 + C18705 * C18663)) /
                         C18397;
    const double C4128 = (C18585 * C18698 + ae * C18611 * C18905 +
                          C18611 * (ae * C18905 + C18611 * C18585 * C18705)) /
                         C18397;
    const double C6769 =
        (2 * (ae * C18528 + C18611 * C18698) + ae * (C18528 + C18541 * C18726) +
         C18611 * (C18698 + ae * C18611 * C18541 +
                   C18611 * (C18550 + C18611 * C18705))) /
        C18397;
    const double C494 =
        (2 * C18516 * C18719 +
         C18516 * (C18719 + C18554 * C18553 * C18716 * C18520)) /
        C18397;
    const double C967 =
        (be * C18516 * C18694 + C18585 * C18516 * C18719) / C18397;
    const double C969 = (C18525 * C18521 * C18716 + be * C18585 * C18694 +
                         C18585 * (be * C18694 + C18585 * C18719)) /
                        C18397;
    const double C1408 =
        (ae * C18516 * C18592 + C18611 * C18516 * C18719) / C18397;
    const double C1410 = (C18525 * C18521 * C18716 + ae * C18611 * C18592 +
                          C18611 * (ae * C18592 + C18611 * C18719)) /
                         C18397;
    const double C2945 = (ae * (C18585 * C18592 + C18519 * be) +
                          C18611 * (be * C18694 + C18585 * C18719)) /
                         C18397;
    const double C18947 = C18585 * C18722;
    const double C18998 = C18516 * C18722;
    const double C19054 = C18611 * C18722;
    const double C495 =
        (3 * (C18719 + C18722 * C18520) +
         C18516 * (2 * C18516 * C18722 +
                   C18516 * (C18722 +
                             std::pow(C18514, 6) * bs[6] * C18716 * C18520))) /
        C18397;
    const double C968 = (be * (C18694 + C18699 * C18520) +
                         C18585 * (C18719 + C18722 * C18520)) /
                        C18397;
    const double C970 = (C18516 * C18719 + be * C18585 * C18701 +
                         C18585 * (be * C18701 + C18585 * C18516 * C18722)) /
                        C18397;
    const double C1409 = (ae * (C18592 + C18597 * C18520) +
                          C18611 * (C18719 + C18722 * C18520)) /
                         C18397;
    const double C1411 = (C18516 * C18719 + ae * C18611 * C18599 +
                          C18611 * (ae * C18599 + C18611 * C18516 * C18722)) /
                         C18397;
    const double C3759 =
        (2 * (be * C18694 + C18585 * C18719) + be * (C18694 + C18699 * C18663) +
         C18585 * (C18719 + be * C18585 * C18699 +
                   C18585 * (C18702 + C18585 * C18722))) /
        C18397;
    const double C6816 =
        (2 * (ae * C18592 + C18611 * C18719) + ae * (C18592 + C18597 * C18726) +
         C18611 * (C18719 + ae * C18611 * C18597 +
                   C18611 * (C18600 + C18611 * C18722))) /
        C18397;
    const double C19527 = C19404 * C19516;
    const double C84 =
        (C19404 * std::pow(C19516, 2)) / C19517 + C19404 / C19518;
    const double C86 = C19528 * C19404;
    const double C1510 = C19526 * C19404;
    const double C19529 = C19416 * C19519;
    const double C612 =
        (C19416 * std::pow(C19519, 2)) / C19517 + C19416 / C19518;
    const double C614 = C19528 * C19416;
    const double C1508 = C19526 * C19416;
    const double C19530 = C19430 * C19520;
    const double C1054 =
        (C19430 * std::pow(C19520, 2)) / C19517 + C19430 / C19518;
    const double C1056 = C19528 * C19430;
    const double C2032 = C19526 * C19430;
    const double C18403 = 2 * C18400;
    const double C91 = ((0 * ae) / C18395 - C18400 / C18397) / (2 * C18395) +
                       (0 * ae) / C18395;
    const double C8401 = (0 * ae) / C18395 - C18400 / C18397;
    const double C78 = (2 * C19523 * C19524) / C18395;
    const double C8395 = C19524 / C18395;
    const double C18449 = 2 * C18441;
    const double C3085 = ((0 * ae) / C18395 - C18441 / C18397) / (2 * C18395) +
                         (0 * ae) / C18395;
    const double C8454 = (0 * ae) / C18395 - C18441 / C18397;
    const double C168 = C151 * C95;
    const double C166 = C151 * C101;
    const double C164 = C151 * C94;
    const double C334 = C151 * C278;
    const double C332 = C151 * C153;
    const double C498 = C151 * C444;
    const double C1568 = C151 * C617;
    const double C2090 = C151 * C1058;
    const double C6513 = C151 * C1060;
    const double C6511 = C151 * C1068;
    const double C6509 = C151 * C1059;
    const double C6668 = C151 * C1219;
    const double C6666 = C151 * C1119;
    const double C6820 = C151 * C1357;
    const double C7952 = C151 * C2553;
    const double C337 = C325 * C95;
    const double C333 = C325 * C94;
    const double C1744 = C325 * C617;
    const double C2266 = C325 * C1058;
    const double C6671 = C325 * C1060;
    const double C6667 = C325 * C1059;
    const double C8120 = C325 * C2553;
    const double C3041 = (2 * C19523 * C19531) / C18395;
    const double C8397 = C19531 / C18395;
    const double C3084 =
        (((C19455 - (C18425 * 2 * C18441) / C18395) * ae) / C18395 -
         C18439 / C18399) /
            (2 * C18395) +
        ((C18425 * ((0 * ae) / C18395 - C18441 / C18397) + C8398) * ae) /
            C18395;
    const double C18475 = 2 * C18467;
    const double C5824 = ((0 * ae) / C18395 - C18467 / C18397) / (2 * C18395) +
                         (0 * ae) / C18395;
    const double C11877 = (0 * ae) / C18395 - C18467 / C18397;
    const double C231 = C214 * C95;
    const double C229 = C214 * C101;
    const double C227 = C214 * C94;
    const double C397 = C214 * C278;
    const double C553 = C214 * C444;
    const double C551 = C214 * C216;
    const double C1628 = C214 * C617;
    const double C2150 = C214 * C1058;
    const double C3515 = C214 * C619;
    const double C3513 = C214 * C627;
    const double C3511 = C214 * C618;
    const double C3664 = C214 * C778;
    const double C3804 = C214 * C916;
    const double C3802 = C214 * C728;
    const double C5360 = C214 * C2553;
    const double C556 = C544 * C95;
    const double C552 = C544 * C94;
    const double C1971 = C544 * C617;
    const double C2493 = C544 * C1058;
    const double C3807 = C544 * C619;
    const double C3803 = C544 * C618;
    const double C5697 = C544 * C2553;
    const double C5744 = (2 * C19523 * C19532) / C18395;
    const double C11774 = C19532 / C18395;
    const double C5823 =
        (((C19466 - (C18428 * 2 * C18467) / C18395) * ae) / C18395 -
         C18465 / C18399) /
            (2 * C18395) +
        ((C18428 * ((0 * ae) / C18395 - C18467 / C18397) + C11775) * ae) /
            C18395;
    const double C170 = C151 * C103;
    const double C233 = C214 * C103;
    const double C1570 = C151 * C625;
    const double C1630 = C214 * C625;
    const double C3517 = C214 * C629;
    const double C2092 = C151 * C1066;
    const double C2152 = C214 * C1066;
    const double C6515 = C151 * C1070;
    const double C5362 = C214 * C2557;
    const double C7954 = C151 * C2557;
    const double C3520 = C214 * C3396;
    const double C5366 = C214 * C3864;
    const double C6518 = C151 * C6439;
    const double C4444 = C19382 * C624;
    const double C9094 = C8396 * C624;
    const double C3573 = C19382 * C628;
    const double C7561 = C19382 * C1065;
    const double C12913 = C8396 * C1065;
    const double C6613 = C19382 * C1069;
    const double C5421 = C19382 * C2556;
    const double C3578 = C19382 * C3395;
    const double C5425 = C19382 * C3863;
    const double C6618 = C19382 * C6438;
    const double C18548 = C18545 + C18539;
    const double C18915 = C18913 + C18539;
    const double C19063 = C19061 + C18539;
    const double C2837 = (ae * (C18611 * C18625 + C18537 * be) +
                          C18585 * (be * C18650 + C18611 * C18516 * C18685)) /
                         C18397;
    const double C2946 = (ae * (C18585 * C18599 + C18537 * be) +
                          C18611 * (be * C18701 + C18585 * C18516 * C18722)) /
                         C18397;
    const double C682 =
        (C18516 * C18592 + C18585 * (C18585 * C18599 + C18537 * be) +
         C18585 * C18537 * be) /
        C18395;
    const double C782 =
        (C18516 * C18643 + C18585 * (C18585 * C18650 + C18537 * ae) +
         C18585 * C18537 * ae) /
        C18395;
    const double C1173 =
        (C18516 * C18618 + C18611 * (C18611 * C18625 + C18537 * be) +
         C18611 * C18537 * be) /
        C18395;
    const double C1361 =
        (C18516 * C18694 + C18611 * (C18611 * C18701 + C18537 * ae) +
         C18611 * C18537 * ae) /
        C18395;
    const double C2616 = (C18611 * (C18585 * C18599 + C18537 * be)) / C18395;
    const double C2672 =
        (C18611 * C18585 * C18625 + C18585 * C18537 * be) / C18395;
    const double C2728 = (C18611 * (C18585 * C18650 + C18537 * ae)) / C18395;
    const double C2890 =
        (C18611 * C18585 * C18701 + C18585 * C18537 * ae) / C18395;
    const double C620 = C18516 * C18519 + C18537 * C18663;
    const double C1061 = C18516 * C18519 + C18537 * C18726;
    const double C2554 = C18611 * C18585 * C18537;
    const double C4262 =
        2 * C18585 * C18537 + C18585 * (C18537 + C18559 * C18663);
    const double C4769 = C18611 * (C18537 + C18559 * C18663);
    const double C7381 =
        2 * C18611 * C18537 + C18611 * (C18537 + C18559 * C18726);
    const double C18547 = C18544 + C18536;
    const double C18914 = C18911 + C18536;
    const double C19062 = C19059 + C18536;
    const double C4084 = (ae * (C18618 + C18611 * (C18611 * C18623 + C18536) +
                                C18611 * C18531 * be) +
                          C18585 * (C18682 + be * C18611 * C18648 +
                                    C18611 * (C18651 + C18611 * C18685))) /
                         C18397;
    const double C18546 = C18543 * C18396;
    const double C18668 = C18667 * C18396;
    const double C18731 = C18730 * C18396;
    const double C4083 =
        (be * C18643 + C18611 * C18682 + ae * (C18611 * C18937 + C18912 * be) +
         C18585 * (ae * (C18611 * C18623 + C18536) +
                   C18585 * (C18651 + C18611 * C18685))) /
        C18397;
    const double C3955 =
        (C18585 * C18618 + C18611 * (C18611 * C18937 + C18912 * be) +
         C18611 * C18912 * be) /
        C18395;
    const double C4125 =
        (C18585 * C18694 + C18611 * (C18611 * C18946 + C18912 * ae) +
         C18611 * C18912 * ae) /
        C18395;
    const double C3861 = C18585 * C18519 + C18912 * C18726;
    const double C7888 =
        2 * C18611 * C18912 + C18611 * (C18912 + C18920 * C18726);
    const double C339 = C19455 * C328;
    const double C558 = C19466 * C547;
    const double C171 = C151 * C96;
    const double C234 = C214 * C96;
    const double C341 = C325 * C96;
    const double C560 = C544 * C96;
    const double C1572 = C151 * C616;
    const double C1632 = C214 * C616;
    const double C1740 = C325 * C616;
    const double C1967 = C544 * C616;
    const double C2094 = C151 * C1057;
    const double C2154 = C214 * C1057;
    const double C2262 = C325 * C1057;
    const double C2489 = C544 * C1057;
    const double C3518 = C214 * C3393;
    const double C3811 = C544 * C3393;
    const double C5364 = C214 * C3860;
    const double C5693 = C544 * C3860;
    const double C6516 = C151 * C6436;
    const double C6675 = C325 * C6436;
    const double C169 = C19455 * C159;
    const double C167 = C19455 * C154;
    const double C336 = C151 * C154;
    const double C172 = C19455 * C155;
    const double C340 = C151 * C155;
    const double C1569 = C19455 * C679;
    const double C1743 = C151 * C679;
    const double C8458 = C8398 * C679;
    const double C1573 = C19455 * C680;
    const double C1739 = C151 * C680;
    const double C8467 = C8398 * C680;
    const double C2091 = C19455 * C1120;
    const double C2265 = C151 * C1120;
    const double C2095 = C19455 * C1121;
    const double C2261 = C151 * C1121;
    const double C6512 = C19455 * C1122;
    const double C6670 = C151 * C1122;
    const double C7953 = C19455 * C2615;
    const double C8119 = C151 * C2615;
    const double C16130 = C8398 * C2615;
    const double C6517 = C19455 * C6503;
    const double C6674 = C151 * C6503;
    const double C232 = C19466 * C222;
    const double C230 = C19466 * C217;
    const double C555 = C214 * C217;
    const double C235 = C19466 * C218;
    const double C559 = C214 * C218;
    const double C1629 = C19466 * C729;
    const double C1970 = C214 * C729;
    const double C1633 = C19466 * C730;
    const double C1966 = C214 * C730;
    const double C3514 = C19466 * C731;
    const double C3806 = C214 * C731;
    const double C2151 = C19466 * C1170;
    const double C2492 = C214 * C1170;
    const double C11881 = C11775 * C1170;
    const double C2155 = C19466 * C1171;
    const double C2488 = C214 * C1171;
    const double C11890 = C11775 * C1171;
    const double C5361 = C19466 * C2671;
    const double C5696 = C214 * C2671;
    const double C15678 = C11775 * C2671;
    const double C3519 = C19466 * C3505;
    const double C3810 = C214 * C3505;
    const double C5365 = C19466 * C3954;
    const double C5692 = C214 * C3954;
    const double C15687 = C11775 * C3954;
    const double C338 = C151 * C279;
    const double C400 = C214 * C279;
    const double C342 = C151 * C280;
    const double C401 = C214 * C280;
    const double C1745 = C151 * C779;
    const double C1804 = C214 * C779;
    const double C1741 = C151 * C780;
    const double C1806 = C214 * C780;
    const double C3666 = C214 * C781;
    const double C2267 = C151 * C1220;
    const double C2326 = C214 * C1220;
    const double C2263 = C151 * C1221;
    const double C2328 = C214 * C1221;
    const double C6672 = C151 * C1222;
    const double C5530 = C214 * C2727;
    const double C8121 = C151 * C2727;
    const double C6676 = C151 * C6604;
    const double C501 = C151 * C445;
    const double C557 = C214 * C445;
    const double C502 = C151 * C446;
    const double C561 = C214 * C446;
    const double C1911 = C151 * C917;
    const double C1972 = C214 * C917;
    const double C1913 = C151 * C918;
    const double C1968 = C214 * C918;
    const double C3808 = C214 * C919;
    const double C2433 = C151 * C1358;
    const double C2494 = C214 * C1358;
    const double C2435 = C151 * C1359;
    const double C2490 = C214 * C1359;
    const double C6822 = C151 * C1360;
    const double C5698 = C214 * C2889;
    const double C8291 = C151 * C2889;
    const double C3812 = C214 * C3707;
    const double C5694 = C214 * C4124;
    const double C18574 = C18571 + C18562;
    const double C18900 = C18542 + C18898;
    const double C19034 = C18542 + C19032;
    const double C7890 =
        (2 * C18611 * C18896 + C18611 * (C18896 + C19114 * C18726)) / C18395;
    const double C18573 = C18570 + C18558;
    const double C18909 = C18541 + C18907;
    const double C19050 = C18541 + C19048;
    const double C7889 =
        (2 * C18611 * C18905 + C18611 * (C18905 + C19120 * C18726)) / C18395;
    const double C18572 = C18569 * C18396;
    const double C18608 = C18597 + C18606;
    const double C18924 = C18919 + C18558;
    const double C18989 = C18585 * C18986;
    const double C7449 =
        (2 * C18611 * C18599 + C18611 * (C18599 + C18986 * C18726)) / C18395;
    const double C19057 = C18597 + C19055;
    const double C18634 = C18623 + C18632;
    const double C18941 = C18623 + C18939;
    const double C19094 = C18585 * C18995;
    const double C19105 = C18611 * C18995;
    const double C4384 =
        (2 * C18585 * C18625 + C18585 * (C18625 + C18995 * C18663)) / C18395;
    const double C4875 = (C18611 * (C18625 + C18995 * C18663) +
                          (C18537 + C18559 * C18663) * be) /
                         C18395;
    const double C19072 = C19067 + C18558;
    const double C19127 = C18611 * C19124;
    const double C18659 = C18648 + C18657;
    const double C18927 = C18922 + C18562;
    const double C18990 = C18585 * C18988;
    const double C7557 =
        (2 * C18611 * C18650 + C18611 * (C18650 + C18988 * C18726)) / C18395;
    const double C19043 = C18648 + C19042;
    const double C18673 = C18672 * C18396;
    const double C18710 = C18699 + C18708;
    const double C18950 = C18699 + C18948;
    const double C19095 = C18585 * C18999;
    const double C19107 = C18611 * C18999;
    const double C4604 =
        (2 * C18585 * C18701 + C18585 * (C18701 + C18999 * C18663)) / C18395;
    const double C5081 = (C18611 * (C18701 + C18999 * C18663) +
                          (C18537 + C18559 * C18663) * ae) /
                         C18395;
    const double C19075 = C19070 + C18562;
    const double C19128 = C18611 * C19126;
    const double C18736 = C18735 * C18396;
    const double C7958 = C151 * C3866;
    const double C8065 = C19382 * C3865;
    const double C97 = 3 * (C18519 + C18531 * C18520) +
                       C18516 * (2 * C18537 + C18516 * C18566);
    const double C621 = C18519 + C18531 * C18520 + C18566 * C18663;
    const double C1062 = C18519 + C18531 * C18520 + C18566 * C18726;
    const double C1511 = C18585 * (2 * C18537 + C18516 * C18566);
    const double C2033 = C18611 * (2 * C18537 + C18516 * C18566);
    const double C2555 = C18611 * C18585 * C18566;
    const double C6915 = C18585 * C18537 + C18987 * C18726;
    const double C3394 = 3 * (C18519 + C18531 * C18663) +
                         C18585 * (2 * C18912 + C18585 * C18926);
    const double C3862 = C18519 + C18531 * C18663 + C18926 * C18726;
    const double C5235 = C18611 * (2 * C18912 + C18585 * C18926);
    const double C4085 =
        (C18682 + be * C18611 * C18648 + C18611 * (C18651 + C18611 * C18685) +
         ae * (C18937 + C18611 * (C18611 * C18585 * C18630 + C18925) +
               C18611 * C18920 * be) +
         C18585 *
             (ae * (C18623 + C18611 * (C18611 * C18630 + C18558) +
                    C18611 * C18552 * be) +
              C18585 * (C18685 + be * C18611 * C18655 +
                        C18611 * (be * C18655 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18679)))) /
        C18397;
    const double C6437 = 3 * (C18519 + C18531 * C18726) +
                         C18611 * (2 * C19060 + C18611 * C19074);
    const double C7453 = C19455 * C1123;
    const double C7620 = C151 * C1123;
    const double C4388 = C19466 * C732;
    const double C4713 = C214 * C732;
    const double C7622 = C151 * C1223;
    const double C4715 = C214 * C920;
    const double C174 = C19455 * C160;
    const double C1571 = C19455 * C685;
    const double C8462 = C8398 * C685;
    const double C2093 = C19455 * C1126;
    const double C6514 = C19455 * C1128;
    const double C7955 = C19455 * C2618;
    const double C16134 = C8398 * C2618;
    const double C18607 = C18600 + C18605;
    const double C18899 = C18551 + C18897;
    const double C6519 = C19455 * C6505;
    const double C4446 = C19382 * C785;
    const double C9098 = C8396 * C785;
    const double C3575 = C19382 * C787;
    const double C7563 = C19382 * C1226;
    const double C12917 = C8396 * C1226;
    const double C6615 = C19382 * C1228;
    const double C5423 = C19382 * C2730;
    const double C18658 = C18651 + C18656;
    const double C18908 = C18550 + C18906;
    const double C6607 =
        (3 * (C18647 + C18654 * C18726) +
         C18611 * (2 * C19015 + C18611 * (C18654 + std::pow(C18514, 6) * bs[6] *
                                                       C18642 * C18726))) /
        C18397;
    const double C3580 = C19382 * C3566;
    const double C5427 = C19382 * C4001;
    const double C8067 = C19382 * C4002;
    const double C6620 = C19382 * C6606;
    const double C237 = C19466 * C223;
    const double C1631 = C19466 * C735;
    const double C3516 = C19466 * C737;
    const double C2153 = C19466 * C1176;
    const double C11885 = C11775 * C1176;
    const double C5363 = C19466 * C2674;
    const double C15682 = C11775 * C2674;
    const double C18633 = C18626 + C18631;
    const double C19033 = C18551 + C19031;
    const double C8010 =
        (2 * (be * C18896 + C18611 * C19113) + be * (C18896 + C19114 * C18726) +
         C18611 *
             (C19113 + be * C18611 * C19114 +
              C18611 * (be * C19114 + C18611 * C18585 * std::pow(C18514, 6) *
                                          bs[6] * C18617))) /
        C18397;
    const double C3521 = C19466 * C3507;
    const double C5367 = C19466 * C3957;
    const double C15691 = C11775 * C3957;
    const double C17948 = C11775 * C3958;
    const double C402 = C19466 * C393;
    const double C1805 = C19466 * C873;
    const double C3665 = C19466 * C875;
    const double C2327 = C19466 * C1314;
    const double C12047 = C11775 * C1314;
    const double C5531 = C19466 * C2836;
    const double C15844 = C11775 * C2836;
    const double C18940 = C18626 + C18938;
    const double C4551 =
        (2 * (ae * C18625 + C18585 * C18994) + ae * (C18625 + C18995 * C18663) +
         C18585 *
             (C18994 + ae * C18585 * C18995 +
              C18585 * (ae * C18995 + C18585 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18679))) /
        C18397;
    const double C5030 =
        (be * C18650 + C18611 * C18994 +
         ae * (C18611 * C18585 * C18995 + C18987 * be) +
         C18585 *
             (ae * (C18611 * C18995 + C18565) +
              C18585 * (be * C18988 + C18611 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18679))) /
        C18397;
    const double C7176 =
        (ae * (C18625 + C18611 * (C18611 * C18995 + C18565) +
               C18611 * C18559 * be) +
         C18585 *
             (C18994 + be * C18611 * C18988 +
              C18611 * (be * C18988 + C18611 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18679))) /
        C18397;
    const double C7677 =
        (2 * (be * C18650 + C18611 * C18994) + be * (C18650 + C18988 * C18726) +
         C18611 *
             (C18994 + be * C18611 * C18988 +
              C18611 * (be * C18988 + C18611 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18679))) /
        C18397;
    const double C19020 = C18651 + C19019;
    const double C1807 = C19466 * C874;
    const double C4554 = C19466 * C876;
    const double C2329 = C19466 * C1315;
    const double C12052 = C11775 * C1315;
    const double C14257 = C11775 * C1317;
    const double C3668 = C19466 * C3660;
    const double C4608 = C19382 * C923;
    const double C9260 = C8396 * C923;
    const double C3715 = C19382 * C925;
    const double C7732 = C19382 * C1364;
    const double C13083 = C8396 * C1364;
    const double C6774 = C19382 * C1366;
    const double C5587 = C19382 * C2892;
    const double C18709 = C18702 + C18707;
    const double C19049 = C18550 + C19047;
    const double C8236 =
        (2 * (ae * C18905 + C18611 * C19119) + ae * (C18905 + C19120 * C18726) +
         C18611 *
             (C19119 + ae * C18611 * C19120 +
              C18611 * (ae * C19120 + C18611 * C18585 * std::pow(C18514, 6) *
                                          bs[6] * C18693))) /
        C18397;
    const double C3718 = C19382 * C3709;
    const double C5589 = C19382 * C4127;
    const double C8239 = C19382 * C4128;
    const double C6777 = C19382 * C6769;
    const double C503 = C19455 * C494;
    const double C1912 = C19455 * C967;
    const double C8804 = C8398 * C967;
    const double C2434 = C19455 * C1408;
    const double C6821 = C19455 * C1410;
    const double C8292 = C19455 * C2945;
    const double C16474 = C8398 * C2945;
    const double C18949 = C18702 + C18947;
    const double C4660 =
        (2 * (be * C18701 + C18585 * C18998) + be * (C18701 + C18999 * C18663) +
         C18585 *
             (C18998 + be * C18585 * C18999 +
              C18585 * (be * C18999 + C18585 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18716))) /
        C18397;
    const double C7784 =
        (2 * (ae * C18599 + C18611 * C18998) + ae * (C18599 + C18986 * C18726) +
         C18611 *
             (C18998 + ae * C18611 * C18986 +
              C18611 * (ae * C18986 + C18611 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18716))) /
        C18397;
    const double C19056 = C18600 + C19054;
    const double C1914 = C19455 * C968;
    const double C8809 = C8398 * C968;
    const double C10401 = C8398 * C970;
    const double C2436 = C19455 * C1409;
    const double C7787 = C19455 * C1411;
    const double C6824 = C19455 * C6816;
    const double C85 = (2 * C19526 * C19527) / C19399;
    const double C1509 = C19527 / C19399;
    const double C613 = (2 * C19526 * C19529) / C19399;
    const double C1507 = C19529 / C19399;
    const double C1055 = (2 * C19526 * C19530) / C19399;
    const double C2031 = C19530 / C19399;
    const double C18405 = C18393 * C18403;
    const double C3043 = -C18403 / C18395;
    const double C8920 = C8401 * C625;
    const double C8918 = C8401 * C624;
    const double C9099 = C8401 * C779;
    const double C9095 = C8401 * C617;
    const double C9264 = C8401 * C920;
    const double C9261 = C8401 * C917;
    const double C10112 = C8401 * C780;
    const double C10108 = C8401 * C616;
    const double C10330 = C8401 * C918;
    const double C12739 = C8401 * C1066;
    const double C12737 = C8401 * C1065;
    const double C12925 = C8401 * C1223;
    const double C12918 = C8401 * C1220;
    const double C12914 = C8401 * C1058;
    const double C13084 = C8401 * C1358;
    const double C14118 = C8401 * C1221;
    const double C14114 = C8401 * C1057;
    const double C14326 = C8401 * C1359;
    const double C8917 = C8395 * C636;
    const double C9105 = C8395 * C787;
    const double C9101 = C8395 * C628;
    const double C9096 = C8395 * C784;
    const double C9092 = C8395 * C626;
    const double C9263 = C8395 * C925;
    const double C9258 = C8395 * C922;
    const double C10111 = C8395 * C785;
    const double C10107 = C8395 * C624;
    const double C10329 = C8395 * C923;
    const double C11388 = C8395 * C2730;
    const double C11384 = C8395 * C2556;
    const double C11590 = C8395 * C2892;
    const double C12736 = C8395 * C1077;
    const double C12924 = C8395 * C1228;
    const double C12920 = C8395 * C1069;
    const double C12915 = C8395 * C1225;
    const double C12911 = C8395 * C1067;
    const double C13086 = C8395 * C1366;
    const double C13081 = C8395 * C1363;
    const double C14117 = C8395 * C1226;
    const double C14113 = C8395 * C1065;
    const double C14325 = C8395 * C1364;
    const double C87 =
        (((0 - (C18393 * C18394) / C18395) * ae) / C18395 - (0 * be) / C18399) /
            (2 * C18395) +
        ((C18393 * (((C19382 - (C18393 * 2 * C18400) / C18395) * ae) / C18395 -
                    C18394 / C18399) +
          C8395) *
         ae) /
            C18395 +
        (0 * ae) / C18395 - C18400 / C18397;
    const double C18450 = C18425 * C18449;
    const double C8466 = C8454 * C616;
    const double C8463 = C8454 * C625;
    const double C8459 = C8454 * C617;
    const double C8634 = C8454 * C780;
    const double C8632 = C8454 * C680;
    const double C8630 = C8454 * C779;
    const double C8628 = C8454 * C679;
    const double C8808 = C8454 * C918;
    const double C8805 = C8454 * C917;
    const double C10400 = C8454 * C920;
    const double C16142 = C8454 * C3866;
    const double C16135 = C8454 * C2557;
    const double C16131 = C8454 * C2553;
    const double C16300 = C8454 * C2727;
    const double C16298 = C8454 * C2615;
    const double C16475 = C8454 * C2889;
    const double C17873 = C8454 * C3864;
    const double C17869 = C8454 * C3860;
    const double C18305 = C8454 * C4124;
    const double C344 = C332 - C333;
    const double C6678 = C6666 - C6667;
    const double C8469 = C8397 * C159;
    const double C8465 = C8397 * C154;
    const double C8460 = C8397 * C158;
    const double C8456 = C8397 * C153;
    const double C8639 = C8397 * C328;
    const double C8627 = C8397 * C327;
    const double C8807 = C8397 * C493;
    const double C8802 = C8397 * C492;
    const double C9967 = C8397 * C685;
    const double C9963 = C8397 * C679;
    const double C10399 = C8397 * C967;
    const double C10607 = C8397 * C1126;
    const double C10603 = C8397 * C1120;
    const double C11027 = C8397 * C1408;
    const double C16141 = C8397 * C1128;
    const double C16137 = C8397 * C1122;
    const double C16132 = C8397 * C1125;
    const double C16128 = C8397 * C1119;
    const double C16297 = C8397 * C1271;
    const double C16477 = C8397 * C1410;
    const double C16472 = C8397 * C1407;
    const double C17872 = C8397 * C2618;
    const double C17868 = C8397 * C2615;
    const double C18304 = C8397 * C2945;
    const double C3083 =
        (((0 - (C18425 * C18439) / C18395) * ae) / C18395 - (0 * be) / C18399) /
            (2 * C18395) +
        ((C18425 * (((C19455 - (C18425 * 2 * C18441) / C18395) * ae) / C18395 -
                    C18439 / C18399) +
          C8397) *
         ae) /
            C18395 +
        (0 * ae) / C18395 - C18441 / C18397;
    const double C18476 = C18428 * C18475;
    const double C11889 = C11877 * C1057;
    const double C11886 = C11877 * C1066;
    const double C11882 = C11877 * C1058;
    const double C12051 = C11877 * C1221;
    const double C12048 = C11877 * C1220;
    const double C12215 = C11877 * C1359;
    const double C12213 = C11877 * C1171;
    const double C12211 = C11877 * C1358;
    const double C12209 = C11877 * C1170;
    const double C14256 = C11877 * C1223;
    const double C15690 = C11877 * C3864;
    const double C15686 = C11877 * C3860;
    const double C15683 = C11877 * C2557;
    const double C15679 = C11877 * C2553;
    const double C15845 = C11877 * C2727;
    const double C16010 = C11877 * C4124;
    const double C16008 = C11877 * C3954;
    const double C16006 = C11877 * C2889;
    const double C16004 = C11877 * C2671;
    const double C17947 = C11877 * C3866;
    const double C563 = C551 - C552;
    const double C3814 = C3802 - C3803;
    const double C11892 = C11774 * C222;
    const double C11888 = C11774 * C217;
    const double C11883 = C11774 * C221;
    const double C11879 = C11774 * C216;
    const double C12050 = C11774 * C392;
    const double C12045 = C11774 * C391;
    const double C12220 = C11774 * C547;
    const double C12208 = C11774 * C546;
    const double C13396 = C11774 * C735;
    const double C13392 = C11774 * C729;
    const double C13605 = C11774 * C873;
    const double C14043 = C11774 * C1176;
    const double C14039 = C11774 * C1170;
    const double C14255 = C11774 * C1314;
    const double C15689 = C11774 * C737;
    const double C15685 = C11774 * C731;
    const double C15680 = C11774 * C734;
    const double C15676 = C11774 * C728;
    const double C15847 = C11774 * C875;
    const double C15842 = C11774 * C872;
    const double C16003 = C11774 * C1012;
    const double C17946 = C11774 * C2674;
    const double C17942 = C11774 * C2671;
    const double C18166 = C11774 * C2836;
    const double C5822 =
        (((0 - (C18428 * C18465) / C18395) * ae) / C18395 - (0 * be) / C18399) /
            (2 * C18395) +
        ((C18428 * (((C19466 - (C18428 * 2 * C18467) / C18395) * ae) / C18395 -
                    C18465 / C18399) +
          C11774) *
         ae) /
            C18395 +
        (0 * ae) / C18395 - C18467 / C18397;
    const double C105 = (2 * (C18516 * C18529 + C18519 * ae) +
                         C18516 * (C18529 + C18516 * C18548 + C18537 * ae) +
                         (C18519 + C18531 * C18520) * ae) /
                        C18395;
    const double C623 =
        (C18585 * (C18529 + C18516 * C18548 + C18537 * ae)) / C18395;
    const double C631 =
        (C18516 * C18529 + C18519 * ae + C18548 * C18663) / C18395;
    const double C1064 =
        (C18611 * (C18529 + C18516 * C18548 + C18537 * ae)) / C18395;
    const double C1072 =
        (C18516 * C18529 + C18519 * ae + C18548 * C18726) / C18395;
    const double C2559 = (C18611 * C18585 * C18548) / C18395;
    const double C3564 = (2 * (C18585 * C18643 + C18519 * ae) +
                          C18585 * (C18643 + C18585 * C18915 + C18912 * ae) +
                          (C18519 + C18531 * C18663) * ae) /
                         C18395;
    const double C3998 =
        (C18611 * (C18643 + C18585 * C18915 + C18912 * ae)) / C18395;
    const double C3999 =
        (C18585 * C18643 + C18519 * ae + C18915 * C18726) / C18395;
    const double C6767 = (2 * (C18611 * C18694 + C18519 * ae) +
                          C18611 * (C18694 + C18611 * C19063 + C19060 * ae) +
                          (C18519 + C18531 * C18726) * ae) /
                         C18395;
    const double C10893 = C19466 * C2837;
    const double C13607 = C11775 * C2837;
    const double C11029 = C8398 * C2946;
    const double C13741 = C19455 * C2946;
    const double C9965 = C8398 * C682;
    const double C10180 = C8454 * C682;
    const double C4553 = C214 * C782;
    const double C9106 = C8401 * C782;
    const double C10182 = C8454 * C782;
    const double C14041 = C11775 * C1173;
    const double C14462 = C11877 * C1173;
    const double C7786 = C151 * C1361;
    const double C13087 = C8401 * C1361;
    const double C14464 = C11877 * C1361;
    const double C10605 = C8398 * C2616;
    const double C10812 = C8454 * C2616;
    const double C13322 = C19455 * C2616;
    const double C13531 = C151 * C2616;
    const double C10677 = C19466 * C2672;
    const double C11096 = C214 * C2672;
    const double C13394 = C11775 * C2672;
    const double C13808 = C11877 * C2672;
    const double C10814 = C8454 * C2728;
    const double C10892 = C214 * C2728;
    const double C11389 = C8401 * C2728;
    const double C13533 = C151 * C2728;
    const double C13606 = C11877 * C2728;
    const double C11028 = C8454 * C2890;
    const double C11098 = C214 * C2890;
    const double C11591 = C8401 * C2890;
    const double C13740 = C151 * C2890;
    const double C13810 = C11877 * C2890;
    const double C4387 = C214 * C620;
    const double C4714 = C544 * C620;
    const double C9102 = C8401 * C620;
    const double C9964 = C8454 * C620;
    const double C7452 = C151 * C1061;
    const double C7621 = C325 * C1061;
    const double C12921 = C8401 * C1061;
    const double C14040 = C11877 * C1061;
    const double C10604 = C8454 * C2554;
    const double C10676 = C214 * C2554;
    const double C11097 = C544 * C2554;
    const double C11385 = C8401 * C2554;
    const double C13321 = C151 * C2554;
    const double C13393 = C11877 * C2554;
    const double C13532 = C325 * C2554;
    const double C104 = (2 * (C18516 * C18528 + C18519 * be) +
                         C18516 * (C18528 + C18516 * C18547 + C18537 * be) +
                         (C18519 + C18531 * C18520) * be) /
                        C18395;
    const double C622 =
        (C18585 * (C18528 + C18516 * C18547 + C18537 * be)) / C18395;
    const double C630 =
        (C18516 * C18528 + C18519 * be + C18547 * C18663) / C18395;
    const double C1063 =
        (C18611 * (C18528 + C18516 * C18547 + C18537 * be)) / C18395;
    const double C1071 =
        (C18516 * C18528 + C18519 * be + C18547 * C18726) / C18395;
    const double C2558 = (C18611 * C18585 * C18547) / C18395;
    const double C3463 = (2 * (C18585 * C18592 + C18519 * be) +
                          C18585 * (C18592 + C18585 * C18914 + C18912 * be) +
                          (C18519 + C18531 * C18663) * be) /
                         C18395;
    const double C3910 =
        (C18611 * (C18592 + C18585 * C18914 + C18912 * be)) / C18395;
    const double C3911 =
        (C18585 * C18592 + C18519 * be + C18914 * C18726) / C18395;
    const double C6562 = (2 * (C18611 * C18618 + C18519 * be) +
                          C18611 * (C18618 + C18611 * C19062 + C19060 * be) +
                          (C18519 + C18531 * C18726) * be) /
                         C18395;
    const double C18168 = C11775 * C4084;
    const double C111 =
        (2 * (ae * C18528 + be * C18529 + C18516 * C18546) +
         ae * (C18528 + C18516 * C18547 + C18537 * be) +
         be * (C18529 + C18516 * C18548 + C18537 * ae) +
         C18516 * (C18546 + ae * C18547 + be * C18548 +
                   C18516 * (ae * C18541 + be * C18542 +
                             C18516 *
                                 (C18532 * C18533 +
                                  C18520 * bs[5] * std::pow(C18522, 5)) *
                                 C18396))) /
        C18397;
    const double C635 = (ae * C18585 * C18528 + be * C18585 * C18529 +
                         C18516 * C18585 * C18546) /
                        C18397;
    const double C637 =
        ((C18519 + C18520 * C18521 * C18525) * C18396 + C18546 * C18663) /
        C18397;
    const double C1076 = (ae * C18611 * C18528 + be * C18611 * C18529 +
                          C18516 * C18611 * C18546) /
                         C18397;
    const double C1078 =
        ((C18519 + C18520 * C18521 * C18525) * C18396 + C18546 * C18726) /
        C18397;
    const double C2562 = (C18611 * C18585 * C18546) / C18397;
    const double C329 =
        (2 * C18516 * C18668 +
         C18516 *
             (C18668 + (C18552 + C18663 * C18553 * C18554) * C18396 * C18520)) /
        C18397;
    const double C829 = (ae * C18516 * C18592 + be * C18516 * C18643 +
                         C18585 * C18516 * C18668) /
                        C18397;
    const double C831 =
        ((C18519 + C18663 * C18521 * C18525) * C18396 +
         ae * (C18585 * C18592 + C18519 * be) +
         be * (C18585 * C18643 + C18519 * ae) +
         C18585 * (ae * C18592 + be * C18643 + C18585 * C18668)) /
        C18397;
    const double C1270 = (C18611 * C18516 * C18668) / C18397;
    const double C1272 =
        ((C18519 + C18663 * C18521 * C18525) * C18396 + C18668 * C18726) /
        C18397;
    const double C2783 = (ae * C18611 * C18592 + be * C18611 * C18643 +
                          C18585 * C18611 * C18668) /
                         C18397;
    const double C548 =
        (2 * C18516 * C18731 +
         C18516 *
             (C18731 + (C18552 + C18726 * C18553 * C18554) * C18396 * C18520)) /
        C18397;
    const double C1011 = (C18585 * C18516 * C18731) / C18397;
    const double C1013 =
        ((C18519 + C18726 * C18521 * C18525) * C18396 + C18731 * C18663) /
        C18397;
    const double C1452 = (ae * C18516 * C18618 + be * C18516 * C18694 +
                          C18611 * C18516 * C18731) /
                         C18397;
    const double C1454 =
        ((C18519 + C18726 * C18521 * C18525) * C18396 +
         ae * (C18611 * C18618 + C18519 * be) +
         be * (C18611 * C18694 + C18519 * ae) +
         C18611 * (ae * C18618 + be * C18694 + C18611 * C18731)) /
        C18397;
    const double C2998 = (ae * C18585 * C18618 + be * C18585 * C18694 +
                          C18611 * C18585 * C18731) /
                         C18397;
    const double C5533 = C19466 * C4083;
    const double C15849 = C11775 * C4083;
    const double C17944 = C11775 * C3955;
    const double C18373 = C11877 * C3955;
    const double C8293 = C151 * C4125;
    const double C16478 = C8454 * C4125;
    const double C18375 = C11877 * C4125;
    const double C7956 = C151 * C3861;
    const double C8124 = C325 * C3861;
    const double C16138 = C8454 * C3861;
    const double C17943 = C11877 * C3861;
    const double C176 = C169 - C170;
    const double C175 = C167 - C168;
    const double C345 = C336 - C337;
    const double C346 = C340 - C341;
    const double C1748 = C1743 - C1744;
    const double C1747 = C1739 - C1740;
    const double C13970 = C2090 - C2091;
    const double C13968 = C2091 - C2090;
    const double C2270 = C2265 - C2266;
    const double C2269 = C2261 - C2262;
    const double C6520 = C6512 - C6513;
    const double C6679 = C6670 - C6671;
    const double C8127 = C8119 - C8120;
    const double C6680 = C6674 - C6675;
    const double C239 = C232 - C233;
    const double C238 = C230 - C231;
    const double C564 = C555 - C556;
    const double C565 = C559 - C560;
    const double C10038 = C1628 - C1629;
    const double C10036 = C1629 - C1628;
    const double C1975 = C1970 - C1971;
    const double C1974 = C1966 - C1967;
    const double C3522 = C3514 - C3515;
    const double C3815 = C3806 - C3807;
    const double C2497 = C2492 - C2493;
    const double C2496 = C2488 - C2489;
    const double C5701 = C5696 - C5697;
    const double C3816 = C3810 - C3811;
    const double C5700 = C5692 - C5693;
    const double C403 = C399 - C400;
    const double C504 = C500 - C501;
    const double C18577 = C18516 * C18574;
    const double C19086 = C18585 * C18574;
    const double C4264 =
        (2 * C18585 * C18548 + C18585 * (C18548 + C18574 * C18663)) / C18395;
    const double C4771 = (C18611 * (C18548 + C18574 * C18663)) / C18395;
    const double C7383 =
        (2 * C18611 * C18548 + C18611 * (C18548 + C18574 * C18726)) / C18395;
    const double C3959 =
        (C18622 + C18629 * C18663 + be * C18611 * C18900 +
         C18611 *
             (be * C18900 + C18611 * (C18629 + std::pow(C18514, 6) * bs[6] *
                                                   C18617 * C18663))) /
        C18397;
    const double C5358 =
        (be * (2 * C18896 + C18585 * C18900) +
         C18611 * (2 * C18585 * C18629 +
                   C18585 * (C18629 +
                             std::pow(C18514, 6) * bs[6] * C18617 * C18663))) /
        C18397;
    const double C3398 = (3 * (C18529 + C18542 * C18663) +
                          C18585 * (2 * C18896 + C18585 * C18900)) /
                         C18395;
    const double C3868 = (C18529 + C18542 * C18663 + C18900 * C18726) / C18395;
    const double C5237 = (C18611 * (2 * C18896 + C18585 * C18900)) / C18395;
    const double C6441 = (3 * (C18529 + C18542 * C18726) +
                          C18611 * (2 * C19030 + C18611 * C19034)) /
                         C18395;
    const double C18576 = C18516 * C18573;
    const double C19091 = C18585 * C18573;
    const double C4263 =
        (2 * C18585 * C18547 + C18585 * (C18547 + C18573 * C18663)) / C18395;
    const double C4770 = (C18611 * (C18547 + C18573 * C18663)) / C18395;
    const double C7382 =
        (2 * C18611 * C18547 + C18611 * (C18547 + C18573 * C18726)) / C18395;
    const double C4129 =
        (C18698 + C18705 * C18663 + ae * C18611 * C18909 +
         C18611 *
             (ae * C18909 + C18611 * (C18705 + std::pow(C18514, 6) * bs[6] *
                                                   C18693 * C18663))) /
        C18397;
    const double C5418 =
        (2 * (ae * C18611 * C18541 + C18585 * C19015) + ae * C18611 * C18909 +
         C18585 * (C19015 + ae * C18611 * C18585 * C18564 +
                   C18585 * (ae * C18611 * C18564 + C18585 * C18611 *
                                                        std::pow(C18514, 6) *
                                                        bs[6] * C18642))) /
        C18397;
    const double C5584 =
        (ae * (2 * C18905 + C18585 * C18909) +
         C18611 * (2 * C18585 * C18705 +
                   C18585 * (C18705 +
                             std::pow(C18514, 6) * bs[6] * C18693 * C18663))) /
        C18397;
    const double C3397 = (3 * (C18528 + C18541 * C18663) +
                          C18585 * (2 * C18905 + C18585 * C18909)) /
                         C18395;
    const double C3867 = (C18528 + C18541 * C18663 + C18909 * C18726) / C18395;
    const double C5236 = (C18611 * (2 * C18905 + C18585 * C18909)) / C18395;
    const double C8062 =
        (ae * (2 * C19046 + C18611 * C19050) +
         C18585 * (2 * C19015 + C18611 * (C18654 + std::pow(C18514, 6) * bs[6] *
                                                       C18642 * C18726))) /
        C18397;
    const double C6440 = (3 * (C18528 + C18541 * C18726) +
                          C18611 * (2 * C19046 + C18611 * C19050)) /
                         C18395;
    const double C18575 = C18516 * C18572;
    const double C18846 = C18585 * C18572;
    const double C18856 = C18611 * C18572;
    const double C634 =
        (C18585 * C18546 + ae * C18585 * C18547 + be * C18585 * C18548 +
         C18516 * (ae * C18585 * C18541 + be * C18585 * C18542 +
                   C18516 * C18585 * C18572)) /
        C18397;
    const double C638 =
        (ae * (C18528 + C18541 * C18663) + be * (C18529 + C18542 * C18663) +
         C18516 * (C18546 + C18572 * C18663)) /
        C18397;
    const double C639 =
        (C18546 + C18572 * C18663 + ae * (C18547 + C18573 * C18663) +
         be * (C18548 + C18574 * C18663) +
         C18516 * (ae * (C18541 + C18564 * C18663) +
                   be * (C18542 + C18567 * C18663) +
                   C18516 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C1075 =
        (C18611 * C18546 + ae * C18611 * C18547 + be * C18611 * C18548 +
         C18516 * (ae * C18611 * C18541 + be * C18611 * C18542 +
                   C18516 * C18611 * C18572)) /
        C18397;
    const double C1079 =
        (ae * (C18528 + C18541 * C18726) + be * (C18529 + C18542 * C18726) +
         C18516 * (C18546 + C18572 * C18726)) /
        C18397;
    const double C1080 =
        (C18546 + C18572 * C18726 + ae * (C18547 + C18573 * C18726) +
         be * (C18548 + C18574 * C18726) +
         C18516 * (ae * (C18541 + C18564 * C18726) +
                   be * (C18542 + C18567 * C18726) +
                   C18516 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C3399 =
        (2 * C18585 * C18546 + C18585 * (C18546 + C18572 * C18663)) / C18397;
    const double C3869 = (C18611 * (C18546 + C18572 * C18663)) / C18397;
    const double C3871 =
        (C18546 + C18572 * C18663 +
         (C18572 + (C18553 * C18554 + C18520 * bs[6] * std::pow(C18514, 6)) *
                       C18396 * C18663) *
             C18726) /
        C18397;
    const double C4772 = (ae * C18611 * C18909 + be * C18611 * C18900 +
                          C18516 * C18611 *
                              (C18572 + (C18553 * C18554 +
                                         C18520 * bs[6] * std::pow(C18514, 6)) *
                                            C18396 * C18663)) /
                         C18397;
    const double C6442 =
        (2 * C18611 * C18546 + C18611 * (C18546 + C18572 * C18726)) / C18397;
    const double C1412 =
        (C18719 + C18722 * C18520 + ae * C18611 * C18608 +
         C18611 *
             (ae * C18608 + C18611 * (C18722 + std::pow(C18514, 6) * bs[6] *
                                                   C18716 * C18520))) /
        C18397;
    const double C2431 =
        (ae * (2 * C18599 + C18516 * C18608) +
         C18611 * (2 * C18516 * C18722 +
                   C18516 * (C18722 +
                             std::pow(C18514, 6) * bs[6] * C18716 * C18520))) /
        C18397;
    const double C156 = (3 * (C18592 + C18597 * C18520) +
                         C18516 * (2 * C18599 + C18516 * C18608)) /
                        C18395;
    const double C683 =
        (C18592 + C18597 * C18520 + C18585 * (C18585 * C18608 + C18566 * be) +
         C18585 * C18566 * be) /
        C18395;
    const double C1124 = (C18592 + C18597 * C18520 + C18608 * C18726) / C18395;
    const double C1565 = (C18585 * (2 * C18599 + C18516 * C18608) +
                          (2 * C18537 + C18516 * C18566) * be) /
                         C18395;
    const double C2087 = (C18611 * (2 * C18599 + C18516 * C18608)) / C18395;
    const double C2617 = (C18611 * (C18585 * C18608 + C18566 * be)) / C18395;
    const double C18929 = C18585 * C18924;
    const double C7949 =
        (2 * C18611 * C18914 + C18611 * (C18914 + C18924 * C18726)) / C18395;
    const double C18991 = C18989 + C18565;
    const double C6504 = (3 * (C18592 + C18597 * C18726) +
                          C18611 * (2 * C19053 + C18611 * C19057)) /
                         C18395;
    const double C877 =
        (C18682 + C18685 * C18520 + ae * C18585 * C18634 +
         C18585 *
             (ae * C18634 + C18585 * (C18685 + std::pow(C18514, 6) * bs[6] *
                                                   C18679 * C18520))) /
        C18397;
    const double C1802 =
        (ae * (2 * C18625 + C18516 * C18634) +
         C18585 * (2 * C18516 * C18685 +
                   C18516 * (C18685 +
                             std::pow(C18514, 6) * bs[6] * C18679 * C18520))) /
        C18397;
    const double C219 = (3 * (C18618 + C18623 * C18520) +
                         C18516 * (2 * C18625 + C18516 * C18634)) /
                        C18395;
    const double C733 = (C18618 + C18623 * C18520 + C18634 * C18663) / C18395;
    const double C1174 =
        (C18618 + C18623 * C18520 + C18611 * (C18611 * C18634 + C18566 * be) +
         C18611 * C18566 * be) /
        C18395;
    const double C1625 = (C18585 * (2 * C18625 + C18516 * C18634)) / C18395;
    const double C2147 = (C18611 * (2 * C18625 + C18516 * C18634) +
                          (2 * C18537 + C18516 * C18566) * be) /
                         C18395;
    const double C2673 =
        (C18611 * C18585 * C18634 + C18585 * C18566 * be) / C18395;
    const double C3506 = (3 * (C18618 + C18623 * C18663) +
                          C18585 * (2 * C18937 + C18585 * C18941)) /
                         C18395;
    const double C3956 =
        (C18618 + C18623 * C18663 + C18611 * (C18611 * C18941 + C18926 * be) +
         C18611 * C18926 * be) /
        C18395;
    const double C5357 = (C18611 * (2 * C18937 + C18585 * C18941) +
                          (2 * C18912 + C18585 * C18926) * be) /
                         C18395;
    const double C7021 =
        (C18585 * C18625 + C18611 * (C18611 * C19094 + C18987 * be) +
         C18611 * C18987 * be) /
        C18395;
    const double C19108 = C19105 + C18565;
    const double C19077 = C18611 * C19072;
    const double C19129 = C19127 + C18925;
    const double C1318 =
        (C18682 + C18685 * C18520 + be * C18611 * C18659 +
         C18611 *
             (be * C18659 + C18611 * (C18685 + std::pow(C18514, 6) * bs[6] *
                                                   C18679 * C18520))) /
        C18397;
    const double C2324 =
        (be * (2 * C18650 + C18516 * C18659) +
         C18611 * (2 * C18516 * C18685 +
                   C18516 * (C18685 +
                             std::pow(C18514, 6) * bs[6] * C18679 * C18520))) /
        C18397;
    const double C2838 =
        (ae * (C18611 * C18634 + C18566 * be) +
         C18585 *
             (be * C18659 + C18611 * (C18685 + std::pow(C18514, 6) * bs[6] *
                                                   C18679 * C18520))) /
        C18397;
    const double C281 = (3 * (C18643 + C18648 * C18520) +
                         C18516 * (2 * C18650 + C18516 * C18659)) /
                        C18395;
    const double C783 =
        (C18643 + C18648 * C18520 + C18585 * (C18585 * C18659 + C18566 * ae) +
         C18585 * C18566 * ae) /
        C18395;
    const double C1224 = (C18643 + C18648 * C18520 + C18659 * C18726) / C18395;
    const double C1685 = (C18585 * (2 * C18650 + C18516 * C18659) +
                          (2 * C18537 + C18516 * C18566) * ae) /
                         C18395;
    const double C2207 = (C18611 * (2 * C18650 + C18516 * C18659)) / C18395;
    const double C2729 = (C18611 * (C18585 * C18659 + C18566 * ae)) / C18395;
    const double C18930 = C18585 * C18927;
    const double C8061 =
        (2 * C18611 * C18915 + C18611 * (C18915 + C18927 * C18726)) / C18395;
    const double C18992 = C18990 + C18568;
    const double C6605 = (3 * (C18643 + C18648 * C18726) +
                          C18611 * (2 * C19041 + C18611 * C19043)) /
                         C18395;
    const double C18918 = C18585 * C18673;
    const double C18985 = C18516 * C18673;
    const double C19017 = C18611 * C18673;
    const double C330 =
        (3 * (C18668 + C18673 * C18520) +
         C18516 * (2 * C18516 * C18673 +
                   C18516 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C828 =
        (ae * (C18592 + C18597 * C18520) + be * (C18643 + C18648 * C18520) +
         C18585 * (C18668 + C18673 * C18520)) /
        C18397;
    const double C832 =
        (C18516 * C18668 + ae * (C18585 * C18599 + C18537 * be) +
         be * (C18585 * C18650 + C18537 * ae) +
         C18585 * (ae * C18599 + be * C18650 + C18585 * C18516 * C18673)) /
        C18397;
    const double C833 =
        (C18668 + C18673 * C18520 + ae * (C18585 * C18608 + C18566 * be) +
         be * (C18585 * C18659 + C18566 * ae) +
         C18585 * (ae * C18608 + be * C18659 +
                   C18585 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C1269 = (C18611 * (C18668 + C18673 * C18520)) / C18397;
    const double C1273 = (C18516 * C18668 + C18516 * C18673 * C18726) / C18397;
    const double C1274 =
        (C18668 + C18673 * C18520 +
         (C18673 + (C18553 * C18554 + C18663 * bs[6] * std::pow(C18514, 6)) *
                       C18396 * C18520) *
             C18726) /
        C18397;
    const double C1737 =
        (ae * (2 * C18599 + C18516 * C18608) +
         be * (2 * C18650 + C18516 * C18659) +
         C18585 * (2 * C18516 * C18673 +
                   C18516 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C2259 =
        (C18611 * (2 * C18516 * C18673 +
                   C18516 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C2784 = (ae * C18611 * C18599 + be * C18611 * C18650 +
                          C18585 * C18611 * C18516 * C18673) /
                         C18397;
    const double C2785 = (ae * C18611 * C18608 + be * C18611 * C18659 +
                          C18585 * C18611 *
                              (C18673 + (C18553 * C18554 +
                                         C18663 * bs[6] * std::pow(C18514, 6)) *
                                            C18396 * C18520)) /
                         C18397;
    const double C3620 =
        (2 * (ae * C18592 + be * C18643 + C18585 * C18668) +
         ae * (C18592 + C18585 * C18914 + C18912 * be) +
         be * (C18643 + C18585 * C18915 + C18912 * ae) +
         C18585 * (C18668 + ae * C18914 + be * C18915 +
                   C18585 * (C18600 + C18651 + C18585 * C18673))) /
        C18397;
    const double C4042 =
        (C18611 * C18668 + ae * C18611 * C18914 + be * C18611 * C18915 +
         C18585 * (ae * C18611 * C18597 + be * C18611 * C18648 +
                   C18585 * C18611 * C18673)) /
        C18397;
    const double C4043 =
        (ae * (C18592 + C18597 * C18726) + be * (C18643 + C18648 * C18726) +
         C18585 * (C18668 + C18673 * C18726)) /
        C18397;
    const double C4044 =
        (C18668 + C18673 * C18726 + ae * (C18914 + C18924 * C18726) +
         be * (C18915 + C18927 * C18726) +
         C18585 * (ae * (C18597 + C18604 * C18726) +
                   be * (C18648 + C18655 * C18726) +
                   C18585 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C6663 =
        (2 * C18611 * C18668 + C18611 * (C18668 + C18673 * C18726)) / C18397;
    const double C971 =
        (C18719 + C18722 * C18520 + be * C18585 * C18710 +
         C18585 *
             (be * C18710 + C18585 * (C18722 + std::pow(C18514, 6) * bs[6] *
                                                   C18716 * C18520))) /
        C18397;
    const double C1909 =
        (be * (2 * C18701 + C18516 * C18710) +
         C18585 * (2 * C18516 * C18722 +
                   C18516 * (C18722 +
                             std::pow(C18514, 6) * bs[6] * C18716 * C18520))) /
        C18397;
    const double C2947 =
        (ae * (C18585 * C18608 + C18566 * be) +
         C18611 *
             (be * C18710 + C18585 * (C18722 + std::pow(C18514, 6) * bs[6] *
                                                   C18716 * C18520))) /
        C18397;
    const double C447 = (3 * (C18694 + C18699 * C18520) +
                         C18516 * (2 * C18701 + C18516 * C18710)) /
                        C18395;
    const double C921 = (C18694 + C18699 * C18520 + C18710 * C18663) / C18395;
    const double C1362 =
        (C18694 + C18699 * C18520 + C18611 * (C18611 * C18710 + C18566 * ae) +
         C18611 * C18566 * ae) /
        C18395;
    const double C1857 = (C18585 * (2 * C18701 + C18516 * C18710)) / C18395;
    const double C2379 = (C18611 * (2 * C18701 + C18516 * C18710) +
                          (2 * C18537 + C18516 * C18566) * ae) /
                         C18395;
    const double C2891 =
        (C18611 * C18585 * C18710 + C18585 * C18566 * ae) / C18395;
    const double C3708 = (3 * (C18694 + C18699 * C18663) +
                          C18585 * (2 * C18946 + C18585 * C18950)) /
                         C18395;
    const double C4126 =
        (C18694 + C18699 * C18663 + C18611 * (C18611 * C18950 + C18926 * ae) +
         C18611 * C18926 * ae) /
        C18395;
    const double C5583 = (C18611 * (2 * C18946 + C18585 * C18950) +
                          (2 * C18912 + C18585 * C18926) * ae) /
                         C18395;
    const double C7227 =
        (C18585 * C18701 + C18611 * (C18611 * C19095 + C18987 * ae) +
         C18611 * C18987 * ae) /
        C18395;
    const double C19109 = C19107 + C18568;
    const double C19078 = C18611 * C19075;
    const double C19130 = C19128 + C18928;
    const double C19001 = C18516 * C18736;
    const double C19066 = C18611 * C18736;
    const double C19123 = C18585 * C18736;
    const double C549 =
        (3 * (C18731 + C18736 * C18520) +
         C18516 * (2 * C18516 * C18736 +
                   C18516 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C1010 = (C18585 * (C18731 + C18736 * C18520)) / C18397;
    const double C1014 = (C18516 * C18731 + C18516 * C18736 * C18663) / C18397;
    const double C1015 =
        (C18731 + C18736 * C18520 +
         (C18736 + (C18553 * C18554 + C18726 * bs[6] * std::pow(C18514, 6)) *
                       C18396 * C18520) *
             C18663) /
        C18397;
    const double C1451 =
        (ae * (C18618 + C18623 * C18520) + be * (C18694 + C18699 * C18520) +
         C18611 * (C18731 + C18736 * C18520)) /
        C18397;
    const double C1455 =
        (C18516 * C18731 + ae * (C18611 * C18625 + C18537 * be) +
         be * (C18611 * C18701 + C18537 * ae) +
         C18611 * (ae * C18625 + be * C18701 + C18611 * C18516 * C18736)) /
        C18397;
    const double C1456 =
        (C18731 + C18736 * C18520 + ae * (C18611 * C18634 + C18566 * be) +
         be * (C18611 * C18710 + C18566 * ae) +
         C18611 * (ae * C18634 + be * C18710 +
                   C18611 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C1964 =
        (C18585 * (2 * C18516 * C18736 +
                   C18516 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C2486 =
        (ae * (2 * C18625 + C18516 * C18634) +
         be * (2 * C18701 + C18516 * C18710) +
         C18611 * (2 * C18516 * C18736 +
                   C18516 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18520))) /
        C18397;
    const double C2999 = (ae * C18585 * C18625 + be * C18585 * C18701 +
                          C18611 * C18585 * C18516 * C18736) /
                         C18397;
    const double C3000 = (ae * C18585 * C18634 + be * C18585 * C18710 +
                          C18611 * C18585 *
                              (C18736 + (C18553 * C18554 +
                                         C18726 * bs[6] * std::pow(C18514, 6)) *
                                            C18396 * C18520)) /
                         C18397;
    const double C3799 =
        (2 * C18585 * C18731 + C18585 * (C18731 + C18736 * C18663)) / C18397;
    const double C3800 =
        (3 * (C18731 + C18736 * C18663) +
         C18585 * (2 * C18585 * C18736 +
                   C18585 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C4209 =
        (ae * (C18618 + C18623 * C18663) + be * (C18694 + C18699 * C18663) +
         C18611 * (C18731 + C18736 * C18663)) /
        C18397;
    const double C4210 =
        (C18585 * C18731 + ae * (C18611 * C18937 + C18912 * be) +
         be * (C18611 * C18946 + C18912 * ae) +
         C18611 * (ae * C18937 + be * C18946 + C18611 * C18585 * C18736)) /
        C18397;
    const double C4211 =
        (C18731 + C18736 * C18663 + ae * (C18611 * C18941 + C18926 * be) +
         be * (C18611 * C18950 + C18926 * ae) +
         C18611 * (ae * C18941 + be * C18950 +
                   C18611 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C5690 =
        (ae * (2 * C18937 + C18585 * C18941) +
         be * (2 * C18946 + C18585 * C18950) +
         C18611 * (2 * C18585 * C18736 +
                   C18585 * (C18736 + (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C6863 =
        (2 * (ae * C18618 + be * C18694 + C18611 * C18731) +
         ae * (C18618 + C18611 * C19062 + C19060 * be) +
         be * (C18694 + C18611 * C19063 + C19060 * ae) +
         C18611 * (C18731 + ae * C19062 + be * C19063 +
                   C18611 * (C18626 + C18702 + C18611 * C18736))) /
        C18397;
    const double C13971 = C2092 - C2093;
    const double C13969 = C2093 - C2092;
    const double C6521 = C6514 - C6515;
    const double C161 =
        (3 * (C18596 + ae * C18599 + C18516 * C18607) +
         ae * (2 * C18599 + C18516 * C18608) +
         C18516 *
             (2 * C18607 + ae * C18608 +
              C18516 * (C18603 + ae * C18516 * C18604 +
                        C18516 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)))) /
        C18397;
    const double C686 = (be * (C18529 + C18516 * C18548 + C18537 * ae) +
                         C18585 * (C18596 + ae * C18599 + C18516 * C18607)) /
                        C18397;
    const double C688 = (ae * C18592 + C18516 * C18596 + be * C18585 * C18548 +
                         C18585 * (be * C18548 + C18585 * C18607)) /
                        C18397;
    const double C1127 =
        (C18611 * (C18596 + ae * C18599 + C18516 * C18607)) / C18397;
    const double C1129 =
        (ae * C18592 + C18516 * C18596 + C18607 * C18726) / C18397;
    const double C1130 =
        (C18596 + ae * C18599 + C18516 * C18607 +
         (C18603 + ae * C18516 * C18604 +
          C18516 *
              (ae * C18604 + C18516 * std::pow(C18514, 6) * bs[6] * C18591)) *
             C18726) /
        C18397;
    const double C2088 =
        (C18611 *
         (2 * C18607 + ae * C18608 +
          C18516 * (C18603 + ae * C18516 * C18604 +
                    C18516 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18591)))) /
        C18397;
    const double C2619 = (C18611 * (be * C18548 + C18585 * C18607)) / C18397;
    const double C4333 =
        (2 * (be * C18548 + C18585 * C18607) + be * (C18548 + C18574 * C18663) +
         C18585 *
             (C18607 + be * C18585 * C18574 +
              C18585 * (be * C18574 +
                        C18585 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)))) /
        C18397;
    const double C4824 =
        (C18611 *
         (C18607 + be * C18585 * C18574 +
          C18585 * (be * C18574 +
                    C18585 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18591)))) /
        C18397;
    const double C6970 =
        (be * C18548 + C18585 * C18607 +
         (be * C18574 + C18585 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)) *
             C18726) /
        C18397;
    const double C7450 =
        (2 * C18611 * C18607 +
         C18611 * (C18607 + (ae * C18604 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18591) *
                                C18726)) /
        C18397;
    const double C3466 =
        (3 * (C18596 + be * C18896 + C18585 * C18899) +
         be * (2 * C18896 + C18585 * C18900) +
         C18585 *
             (2 * C18899 + be * C18900 +
              C18585 * (C18603 + be * C18585 * C18567 +
                        C18585 * (be * C18567 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)))) /
        C18397;
    const double C3913 =
        (C18611 * (C18596 + be * C18896 + C18585 * C18899)) / C18397;
    const double C3914 =
        (be * C18529 + C18585 * C18596 + C18899 * C18726) / C18397;
    const double C3915 =
        (C18596 + be * C18896 + C18585 * C18899 +
         (C18603 + be * C18585 * C18567 +
          C18585 *
              (be * C18567 + C18585 * std::pow(C18514, 6) * bs[6] * C18591)) *
             C18726) /
        C18397;
    const double C5306 =
        (C18611 *
         (2 * C18899 + be * C18900 +
          C18585 * (C18603 + be * C18585 * C18567 +
                    C18585 * (be * C18567 + C18585 * std::pow(C18514, 6) *
                                                bs[6] * C18591)))) /
        C18397;
    const double C7950 =
        (2 * C18611 * C18899 +
         C18611 * (C18899 + (be * C18567 +
                             C18585 * std::pow(C18514, 6) * bs[6] * C18591) *
                                C18726)) /
        C18397;
    const double C286 =
        (3 * (C18647 + be * C18650 + C18516 * C18658) +
         be * (2 * C18650 + C18516 * C18659) +
         C18516 *
             (2 * C18658 + be * C18659 +
              C18516 * (C18654 + be * C18516 * C18655 +
                        C18516 * (be * C18655 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18642)))) /
        C18397;
    const double C786 = (ae * (C18528 + C18516 * C18547 + C18537 * be) +
                         C18585 * (C18647 + be * C18650 + C18516 * C18658)) /
                        C18397;
    const double C788 = (be * C18643 + C18516 * C18647 + ae * C18585 * C18547 +
                         C18585 * (ae * C18547 + C18585 * C18658)) /
                        C18397;
    const double C1227 =
        (C18611 * (C18647 + be * C18650 + C18516 * C18658)) / C18397;
    const double C1229 =
        (be * C18643 + C18516 * C18647 + C18658 * C18726) / C18397;
    const double C1230 =
        (C18647 + be * C18650 + C18516 * C18658 +
         (C18654 + be * C18516 * C18655 +
          C18516 *
              (be * C18655 + C18516 * std::pow(C18514, 6) * bs[6] * C18642)) *
             C18726) /
        C18397;
    const double C2208 =
        (C18611 *
         (2 * C18658 + be * C18659 +
          C18516 * (C18654 + be * C18516 * C18655 +
                    C18516 * (be * C18655 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18642)))) /
        C18397;
    const double C2731 =
        (ae * C18611 * C18547 + C18585 * C18611 * C18658) / C18397;
    const double C4441 =
        (2 * (ae * C18547 + C18585 * C18658) + ae * (C18547 + C18573 * C18663) +
         C18585 *
             (C18658 + ae * C18585 * C18573 +
              C18585 * (ae * C18573 +
                        C18585 * (be * C18655 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18642)))) /
        C18397;
    const double C4928 =
        (C18611 * C18658 + ae * C18611 * C18585 * C18573 +
         C18585 * (ae * C18611 * C18573 +
                   C18585 * C18611 *
                       (be * C18655 +
                        C18516 * std::pow(C18514, 6) * bs[6] * C18642))) /
        C18397;
    const double C7074 =
        (ae * (C18547 + C18573 * C18726) +
         C18585 * (C18658 + (be * C18655 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18642) *
                                C18726)) /
        C18397;
    const double C7558 =
        (2 * C18611 * C18658 +
         C18611 * (C18658 + (be * C18655 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18642) *
                                C18726)) /
        C18397;
    const double C3567 =
        (3 * (C18647 + ae * C18905 + C18585 * C18908) +
         ae * (2 * C18905 + C18585 * C18909) +
         C18585 *
             (2 * C18908 + ae * C18909 +
              C18585 * (C18654 + ae * C18585 * C18564 +
                        C18585 * (ae * C18564 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18642)))) /
        C18397;
    const double C10039 = C1630 - C1631;
    const double C10037 = C1631 - C1630;
    const double C3523 = C3516 - C3517;
    const double C224 =
        (3 * (C18622 + ae * C18625 + C18516 * C18633) +
         ae * (2 * C18625 + C18516 * C18634) +
         C18516 *
             (2 * C18633 + ae * C18634 +
              C18516 * (C18629 + ae * C18516 * C18630 +
                        C18516 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18617)))) /
        C18397;
    const double C736 =
        (C18585 * (C18622 + ae * C18625 + C18516 * C18633)) / C18397;
    const double C738 =
        (ae * C18618 + C18516 * C18622 + C18633 * C18663) / C18397;
    const double C739 = (C18622 + ae * C18625 + C18516 * C18633 +
                         (C18629 + ae * C18516 * C18630 +
                          C18516 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                      bs[6] * C18617)) *
                             C18663) /
                        C18397;
    const double C1177 = (be * (C18529 + C18516 * C18548 + C18537 * ae) +
                          C18611 * (C18622 + ae * C18625 + C18516 * C18633)) /
                         C18397;
    const double C1179 = (ae * C18618 + C18516 * C18622 + be * C18611 * C18548 +
                          C18611 * (be * C18548 + C18611 * C18633)) /
                         C18397;
    const double C1626 =
        (C18585 *
         (2 * C18633 + ae * C18634 +
          C18516 * (C18629 + ae * C18516 * C18630 +
                    C18516 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18617)))) /
        C18397;
    const double C2675 =
        (be * C18585 * C18548 + C18611 * C18585 * C18633) / C18397;
    const double C4385 =
        (2 * C18585 * C18633 +
         C18585 * (C18633 + (ae * C18630 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18617) *
                                C18663)) /
        C18397;
    const double C4876 =
        (be * (C18548 + C18574 * C18663) +
         C18611 * (C18633 + (ae * C18630 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18617) *
                                C18663)) /
        C18397;
    const double C7506 =
        (2 * (be * C18548 + C18611 * C18633) + be * (C18548 + C18574 * C18726) +
         C18611 *
             (C18633 + be * C18611 * C18574 +
              C18611 * (be * C18574 +
                        C18611 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18617)))) /
        C18397;
    const double C6565 =
        (3 * (C18622 + be * C19030 + C18611 * C19033) +
         be * (2 * C19030 + C18611 * C19034) +
         C18611 *
             (2 * C19033 + be * C19034 +
              C18611 * (C18629 + be * C18611 * C18567 +
                        C18611 * (be * C18567 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18617)))) /
        C18397;
    const double C10261 = C1804 - C1805;
    const double C10260 = C1805 - C1804;
    const double C3669 = C3665 - C3666;
    const double C3661 =
        (3 * (C18682 + ae * C18937 + C18585 * C18940) +
         ae * (2 * C18937 + C18585 * C18941) +
         C18585 *
             (2 * C18940 + ae * C18941 +
              C18585 * (C18685 + ae * C18585 * C18630 +
                        C18585 * (ae * C18630 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18679)))) /
        C18397;
    const double C5528 =
        (2 * (ae * (C18611 * C18623 + C18536) + C18585 * C19020) +
         ae * (C18611 * C18941 + C18926 * be) +
         C18585 *
             (C19020 + ae * (C18611 * C18585 * C18630 + C18925) +
              C18585 * (ae * (C18611 * C18630 + C18558) +
                        C18585 * (be * C18655 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18679)))) /
        C18397;
    const double C6727 =
        (2 * (be * C18643 + C18611 * C18682) + be * (C18643 + C18648 * C18726) +
         C18611 * (C18682 + be * C18611 * C18648 + C18611 * C19020)) /
        C18397;
    const double C6728 =
        (3 * (C18682 + be * C19041 + C18611 * C19020) +
         be * (2 * C19041 + C18611 * C19043) +
         C18611 *
             (2 * C19020 + be * C19043 +
              C18611 * (C18685 + be * C18611 * C18655 +
                        C18611 * (be * C18655 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18679)))) /
        C18397;
    const double C452 =
        (3 * (C18698 + be * C18701 + C18516 * C18709) +
         be * (2 * C18701 + C18516 * C18710) +
         C18516 *
             (2 * C18709 + be * C18710 +
              C18516 * (C18705 + be * C18516 * C18706 +
                        C18516 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18693)))) /
        C18397;
    const double C924 =
        (C18585 * (C18698 + be * C18701 + C18516 * C18709)) / C18397;
    const double C926 =
        (be * C18694 + C18516 * C18698 + C18709 * C18663) / C18397;
    const double C927 = (C18698 + be * C18701 + C18516 * C18709 +
                         (C18705 + be * C18516 * C18706 +
                          C18516 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                      bs[6] * C18693)) *
                             C18663) /
                        C18397;
    const double C1365 = (ae * (C18528 + C18516 * C18547 + C18537 * be) +
                          C18611 * (C18698 + be * C18701 + C18516 * C18709)) /
                         C18397;
    const double C1367 = (be * C18694 + C18516 * C18698 + ae * C18611 * C18547 +
                          C18611 * (ae * C18547 + C18611 * C18709)) /
                         C18397;
    const double C1858 =
        (C18585 *
         (2 * C18709 + be * C18710 +
          C18516 * (C18705 + be * C18516 * C18706 +
                    C18516 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18693)))) /
        C18397;
    const double C2893 =
        (ae * C18585 * C18547 + C18611 * C18585 * C18709) / C18397;
    const double C4605 =
        (2 * C18585 * C18709 +
         C18585 * (C18709 + (be * C18706 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18693) *
                                C18663)) /
        C18397;
    const double C5082 =
        (ae * (C18547 + C18573 * C18663) +
         C18611 * (C18709 + (be * C18706 +
                             C18516 * std::pow(C18514, 6) * bs[6] * C18693) *
                                C18663)) /
        C18397;
    const double C7729 =
        (2 * (ae * C18547 + C18611 * C18709) + ae * (C18547 + C18573 * C18726) +
         C18611 *
             (C18709 + ae * C18611 * C18573 +
              C18611 * (ae * C18573 +
                        C18611 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18693)))) /
        C18397;
    const double C6770 =
        (3 * (C18698 + ae * C19046 + C18611 * C19049) +
         ae * (2 * C19046 + C18611 * C19050) +
         C18611 *
             (2 * C19049 + ae * C19050 +
              C18611 * (C18705 + ae * C18611 * C18564 +
                        C18611 * (ae * C18564 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18693)))) /
        C18397;
    const double C14395 = C2433 - C2434;
    const double C14394 = C2434 - C2433;
    const double C6825 = C6821 - C6822;
    const double C3760 =
        (3 * (C18719 + be * C18946 + C18585 * C18949) +
         be * (2 * C18946 + C18585 * C18950) +
         C18585 *
             (2 * C18949 + be * C18950 +
              C18585 * (C18722 + be * C18585 * C18706 +
                        C18585 * (be * C18706 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18716)))) /
        C18397;
    const double C4168 = (ae * (C18592 + C18585 * C18914 + C18912 * be) +
                          C18611 * (C18719 + be * C18946 + C18585 * C18949)) /
                         C18397;
    const double C4169 = (be * C18694 + C18585 * C18719 + ae * C18611 * C18914 +
                          C18611 * (ae * C18914 + C18611 * C18949)) /
                         C18397;
    const double C8289 =
        (2 * (ae * C18914 + C18611 * C18949) + ae * (C18914 + C18924 * C18726) +
         C18611 *
             (C18949 + ae * C18611 * C18924 +
              C18611 * (ae * C18924 +
                        C18611 * (be * C18706 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18716)))) /
        C18397;
    const double C6817 =
        (3 * (C18719 + ae * C19053 + C18611 * C19056) +
         ae * (2 * C19053 + C18611 * C19057) +
         C18611 *
             (2 * C19056 + ae * C19057 +
              C18611 * (C18722 + ae * C18611 * C18604 +
                        C18611 * (ae * C18604 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18716)))) /
        C18397;
    const double C18406 = C18405 / C18395;
    const double C3412 = C3043 * C3396;
    const double C3410 = C3043 * C3395;
    const double C3408 = C3043 * C629;
    const double C3406 = C3043 * C628;
    const double C3404 = C3043 * C627;
    const double C3402 = C3043 * C626;
    const double C3577 = C3043 * C3393;
    const double C3576 = C3043 * C781;
    const double C3574 = C3043 * C619;
    const double C3572 = C3043 * C778;
    const double C3570 = C3043 * C618;
    const double C3717 = C3043 * C3707;
    const double C3716 = C3043 * C919;
    const double C3713 = C3043 * C916;
    const double C4269 = C3043 * C625;
    const double C4267 = C3043 * C624;
    const double C4449 = C3043 * C782;
    const double C4447 = C3043 * C620;
    const double C4445 = C3043 * C779;
    const double C4443 = C3043 * C617;
    const double C4609 = C3043 * C920;
    const double C4607 = C3043 * C917;
    const double C5246 = C3043 * C2557;
    const double C5244 = C3043 * C2556;
    const double C5242 = C3043 * C3864;
    const double C5240 = C3043 * C3863;
    const double C5424 = C3043 * C3860;
    const double C5422 = C3043 * C2727;
    const double C5420 = C3043 * C2553;
    const double C5588 = C3043 * C4124;
    const double C5586 = C3043 * C2889;
    const double C6455 = C3043 * C6439;
    const double C6453 = C3043 * C6438;
    const double C6451 = C3043 * C1070;
    const double C6449 = C3043 * C1069;
    const double C6447 = C3043 * C1068;
    const double C6445 = C3043 * C1067;
    const double C6619 = C3043 * C6604;
    const double C6617 = C3043 * C6436;
    const double C6616 = C3043 * C1222;
    const double C6614 = C3043 * C1060;
    const double C6612 = C3043 * C1219;
    const double C6610 = C3043 * C1059;
    const double C6775 = C3043 * C1360;
    const double C6773 = C3043 * C1357;
    const double C7388 = C3043 * C1066;
    const double C7386 = C3043 * C1065;
    const double C7566 = C3043 * C1223;
    const double C7564 = C3043 * C1061;
    const double C7562 = C3043 * C1220;
    const double C7560 = C3043 * C1058;
    const double C7733 = C3043 * C1361;
    const double C7731 = C3043 * C1358;
    const double C7895 = C3043 * C3866;
    const double C7893 = C3043 * C3865;
    const double C8064 = C3043 * C3861;
    const double C8238 = C3043 * C4125;
    const double C16805 = C3043 * C2728;
    const double C16803 = C3043 * C2554;
    const double C17005 = C3043 * C2890;
    const double C18451 = C18450 / C18395;
    const double C347 = C344 - C334;
    const double C6681 = C6678 - C6668;
    const double C18477 = C18476 / C18395;
    const double C566 = C563 - C553;
    const double C3817 = C3814 - C3804;
    const double C173 = C151 * C105;
    const double C236 = C214 * C105;
    const double C1574 = C151 * C623;
    const double C1634 = C214 * C623;
    const double C8470 = C8454 * C623;
    const double C9888 = C8401 * C623;
    const double C4273 = C3043 * C631;
    const double C4389 = C214 * C631;
    const double C8924 = C8401 * C631;
    const double C9968 = C8454 * C631;
    const double C2096 = C151 * C1064;
    const double C2156 = C214 * C1064;
    const double C11893 = C11877 * C1064;
    const double C13894 = C8401 * C1064;
    const double C7392 = C3043 * C1072;
    const double C7454 = C151 * C1072;
    const double C12743 = C8401 * C1072;
    const double C14044 = C11877 * C1072;
    const double C10608 = C8454 * C2559;
    const double C10678 = C214 * C2559;
    const double C11173 = C8401 * C2559;
    const double C13323 = C151 * C2559;
    const double C13397 = C11877 * C2559;
    const double C16599 = C3043 * C2559;
    const double C3579 = C3043 * C3564;
    const double C3667 = C214 * C3564;
    const double C5426 = C3043 * C3998;
    const double C5532 = C214 * C3998;
    const double C15848 = C11877 * C3998;
    const double C18091 = C8454 * C3998;
    const double C8066 = C3043 * C3999;
    const double C8125 = C151 * C3999;
    const double C16304 = C8454 * C3999;
    const double C18167 = C11877 * C3999;
    const double C6776 = C3043 * C6767;
    const double C6823 = C151 * C6767;
    const double C4717 = C4713 - C4714;
    const double C7624 = C7620 - C7621;
    const double C11101 = C11096 - C11097;
    const double C13535 = C13531 - C13532;
    const double C9886 = C8401 * C622;
    const double C10109 = C8396 * C622;
    const double C4271 = C3043 * C630;
    const double C4448 = C19382 * C630;
    const double C8922 = C8401 * C630;
    const double C9103 = C8396 * C630;
    const double C13892 = C8401 * C1063;
    const double C14115 = C8396 * C1063;
    const double C7390 = C3043 * C1071;
    const double C7565 = C19382 * C1071;
    const double C12741 = C8401 * C1071;
    const double C12922 = C8396 * C1071;
    const double C11171 = C8401 * C2558;
    const double C11386 = C8396 * C2558;
    const double C16597 = C3043 * C2558;
    const double C16804 = C19382 * C2558;
    const double C17870 = C8398 * C3910;
    const double C18089 = C8454 * C3910;
    const double C7957 = C19455 * C3911;
    const double C8123 = C151 * C3911;
    const double C16139 = C8398 * C3911;
    const double C16302 = C8454 * C3911;
    const double C4270 = C19382 * C635;
    const double C8921 = C8396 * C635;
    const double C9885 = C8395 * C635;
    const double C3409 = C19382 * C637;
    const double C8929 = C8395 * C637;
    const double C7389 = C19382 * C1076;
    const double C12740 = C8396 * C1076;
    const double C13891 = C8395 * C1076;
    const double C6452 = C19382 * C1078;
    const double C12748 = C8395 * C1078;
    const double C5247 = C19382 * C2562;
    const double C11178 = C8395 * C2562;
    const double C343 = C19455 * C329;
    const double C1746 = C19455 * C829;
    const double C8631 = C8398 * C829;
    const double C10187 = C8397 * C829;
    const double C2268 = C19455 * C1270;
    const double C10819 = C8397 * C1270;
    const double C6673 = C19455 * C1272;
    const double C16309 = C8397 * C1272;
    const double C8122 = C19455 * C2783;
    const double C16301 = C8398 * C2783;
    const double C18088 = C8397 * C2783;
    const double C562 = C19466 * C548;
    const double C1973 = C19466 * C1011;
    const double C13815 = C11774 * C1011;
    const double C3809 = C19466 * C1013;
    const double C16015 = C11774 * C1013;
    const double C2495 = C19466 * C1452;
    const double C12212 = C11775 * C1452;
    const double C14469 = C11774 * C1452;
    const double C5699 = C19466 * C2998;
    const double C16007 = C11775 * C2998;
    const double C18380 = C11774 * C2998;
    const double C499 = C175 * C214;
    const double C348 = C345 - C338;
    const double C349 = C346 - C342;
    const double C1750 = C1748 - C1745;
    const double C1749 = C1747 - C1741;
    const double C2272 = C2270 - C2267;
    const double C2271 = C2269 - C2263;
    const double C6522 = C6520 * C3043;
    const double C6682 = C6679 - C6672;
    const double C8129 = C8127 - C8121;
    const double C6683 = C6680 - C6676;
    const double C398 = C238 * C151;
    const double C567 = C564 - C557;
    const double C568 = C565 - C561;
    const double C1977 = C1975 - C1972;
    const double C1976 = C1974 - C1968;
    const double C3524 = C3522 * C3043;
    const double C3818 = C3815 - C3808;
    const double C2499 = C2497 - C2494;
    const double C2498 = C2496 - C2490;
    const double C5703 = C5701 - C5698;
    const double C3819 = C3816 - C3812;
    const double C5702 = C5700 - C5694;
    const double C404 = C403 * C19455;
    const double C505 = C504 * C19466;
    const double C18580 = C18542 + C18577;
    const double C7022 =
        (C18585 * C18633 + be * C18611 * C19086 +
         C18611 *
             (be * C19086 + C18611 * C18585 *
                                (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                   bs[6] * C18617))) /
        C18397;
    const double C6917 = (C18585 * C18548 + C19086 * C18726) / C18395;
    const double C18579 = C18541 + C18576;
    const double C7228 =
        (C18585 * C18709 + ae * C18611 * C19091 +
         C18611 *
             (ae * C19091 + C18611 * C18585 *
                                (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                   bs[6] * C18693))) /
        C18397;
    const double C6916 = (C18585 * C18547 + C19091 * C18726) / C18395;
    const double C18578 = C18555 + C18575;
    const double C2563 =
        (ae * C18611 * C18585 * C18541 + be * C18611 * C18585 * C18542 +
         C18516 * C18611 * C18846) /
        C18397;
    const double C2564 =
        (C18611 * C18846 + ae * C18611 * C18585 * C18573 +
         be * C18611 * C18585 * C18574 +
         C18516 *
             (ae * C18611 * C18585 * C18564 + be * C18611 * C18585 * C18567 +
              C18516 * C18611 * C18585 *
                  (C18553 * C18554 + C18520 * bs[6] * std::pow(C18514, 6)) *
                  C18396)) /
        C18397;
    const double C3400 =
        (3 * (C18546 + C18572 * C18663) +
         C18585 * (2 * C18846 +
                   C18585 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C3870 = (C18585 * C18546 + C18846 * C18726) / C18397;
    const double C4265 =
        (ae * (2 * C18905 + C18585 * C18909) +
         be * (2 * C18896 + C18585 * C18900) +
         C18516 * (2 * C18846 +
                   C18585 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C5238 =
        (C18611 * (2 * C18846 +
                   C18585 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18663))) /
        C18397;
    const double C6918 =
        (ae * (C18905 + C18585 * C18564 * C18726) +
         be * (C18896 + C18585 * C18567 * C18726) +
         C18516 * (C18846 + C18585 *
                                (C18553 * C18554 +
                                 C18520 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18726)) /
        C18397;
    const double C7891 =
        (2 * C18611 * C18846 +
         C18611 * (C18846 + C18585 *
                                (C18553 * C18554 +
                                 C18520 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18726)) /
        C18397;
    const double C6443 =
        (3 * (C18546 + C18572 * C18726) +
         C18611 * (2 * C18856 +
                   C18611 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C7384 =
        (ae * (2 * C19046 + C18611 * C19050) +
         be * (2 * C19030 + C18611 * C19034) +
         C18516 * (2 * C18856 +
                   C18611 * (C18572 + (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C9889 = C8396 * C634;
    const double C4274 = C19382 * C638;
    const double C8925 = C8396 * C638;
    const double C13895 = C8396 * C1075;
    const double C7393 = C19382 * C1079;
    const double C12744 = C8396 * C1079;
    const double C3413 = C19382 * C3399;
    const double C5243 = C19382 * C3869;
    const double C6456 = C19382 * C6442;
    const double C18931 = C18597 + C18929;
    const double C5133 =
        (ae * (C18599 + C18585 * C18991 + C18987 * be) +
         C18611 *
             (C18998 + be * C18585 * C18999 +
              C18585 * (be * C18999 + C18585 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18716))) /
        C18397;
    const double C7279 =
        (be * C18701 + C18585 * C18998 + ae * C18611 * C18991 +
         C18611 *
             (ae * C18991 +
              C18611 * (be * C18999 + C18585 * C18516 * std::pow(C18514, 6) *
                                          bs[6] * C18716))) /
        C18397;
    const double C4332 = (2 * (C18585 * C18599 + C18537 * be) +
                          C18585 * (C18599 + C18585 * C18991 + C18987 * be) +
                          (C18537 + C18559 * C18663) * be) /
                         C18395;
    const double C4823 =
        (C18611 * (C18599 + C18585 * C18991 + C18987 * be)) / C18395;
    const double C6969 =
        (C18585 * C18599 + C18537 * be + C18991 * C18726) / C18395;
    const double C7505 = (2 * (C18611 * C18625 + C18537 * be) +
                          C18611 * (C18625 + C18611 * C19108 + C19106 * be) +
                          (C18537 + C18559 * C18726) * be) /
                         C18395;
    const double C19079 = C18623 + C19077;
    const double C8009 = (2 * (C18611 * C18937 + C18912 * be) +
                          C18611 * (C18937 + C18611 * C19129 + C19125 * be) +
                          (C18912 + C18920 * C18726) * be) /
                         C18395;
    const double C18932 = C18648 + C18930;
    const double C4440 = (2 * (C18585 * C18650 + C18537 * ae) +
                          C18585 * (C18650 + C18585 * C18992 + C18987 * ae) +
                          (C18537 + C18559 * C18663) * ae) /
                         C18395;
    const double C4927 =
        (C18611 * (C18650 + C18585 * C18992 + C18987 * ae)) / C18395;
    const double C7073 =
        (C18585 * C18650 + C18537 * ae + C18992 * C18726) / C18395;
    const double C18923 = C18917 + C18918;
    const double C4500 =
        (2 * (ae * C18599 + be * C18650 + C18585 * C18985) +
         ae * (C18599 + C18585 * C18991 + C18987 * be) +
         be * (C18650 + C18585 * C18992 + C18987 * ae) +
         C18585 * (C18985 + ae * C18991 + be * C18992 +
                   C18585 * (ae * C18986 + be * C18988 +
                             C18585 * C18516 *
                                 (C18553 * C18554 +
                                  C18663 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C4979 =
        (C18611 * C18985 + ae * C18611 * C18991 + be * C18611 * C18992 +
         C18585 *
             (ae * C18611 * C18986 + be * C18611 * C18988 +
              C18585 * C18611 * C18516 *
                  (C18553 * C18554 + C18663 * bs[6] * std::pow(C18514, 6)) *
                  C18396)) /
        C18397;
    const double C7125 =
        (ae * (C18599 + C18986 * C18726) + be * (C18650 + C18988 * C18726) +
         C18585 * (C18985 + C18516 *
                                (C18553 * C18554 +
                                 C18663 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18726)) /
        C18397;
    const double C7617 =
        (2 * C18611 * C18985 +
         C18611 * (C18985 + C18516 *
                                (C18553 * C18554 +
                                 C18663 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18726)) /
        C18397;
    const double C6664 =
        (3 * (C18668 + C18673 * C18726) +
         C18611 * (2 * C19017 +
                   C18611 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C8117 =
        (ae * (2 * C19053 + C18611 * C19057) +
         be * (2 * C19041 + C18611 * C19043) +
         C18585 * (2 * C19017 +
                   C18611 * (C18673 + (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                          C18396 * C18726))) /
        C18397;
    const double C1742 = C19455 * C828;
    const double C8635 = C8398 * C828;
    const double C10183 = C8398 * C832;
    const double C2264 = C19455 * C1269;
    const double C7623 = C19455 * C1273;
    const double C10815 = C8398 * C2784;
    const double C13534 = C19455 * C2784;
    const double C18092 = C8398 * C4042;
    const double C8126 = C19455 * C4043;
    const double C16305 = C8398 * C4043;
    const double C6677 = C19455 * C6663;
    const double C7728 = (2 * (C18611 * C18701 + C18537 * ae) +
                          C18611 * (C18701 + C18611 * C19109 + C19106 * ae) +
                          (C18537 + C18559 * C18726) * ae) /
                         C18395;
    const double C19080 = C18699 + C19078;
    const double C8235 = (2 * (C18611 * C18946 + C18912 * ae) +
                          C18611 * (C18946 + C18611 * C19130 + C19125 * ae) +
                          (C18912 + C18920 * C18726) * ae) /
                         C18395;
    const double C4711 =
        (2 * C18585 * C19001 +
         C18585 * (C19001 + C18516 *
                                (C18553 * C18554 +
                                 C18726 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18663)) /
        C18397;
    const double C5184 =
        (ae * (C18625 + C18995 * C18663) + be * (C18701 + C18999 * C18663) +
         C18611 * (C19001 + C18516 *
                                (C18553 * C18554 +
                                 C18726 * bs[6] * std::pow(C18514, 6)) *
                                C18396 * C18663)) /
        C18397;
    const double C7330 =
        (C18585 * C19001 + ae * (C18611 * C19094 + C18987 * be) +
         be * (C18611 * C19095 + C18987 * ae) +
         C18611 *
             (ae * C19094 + be * C19095 +
              C18611 * C18585 * C18516 *
                  (C18553 * C18554 + C18726 * bs[6] * std::pow(C18514, 6)) *
                  C18396)) /
        C18397;
    const double C7837 =
        (2 * (ae * C18625 + be * C18701 + C18611 * C19001) +
         ae * (C18625 + C18611 * C19108 + C19106 * be) +
         be * (C18701 + C18611 * C19109 + C19106 * ae) +
         C18611 * (C19001 + ae * C19108 + be * C19109 +
                   C18611 * (ae * C18995 + be * C18999 +
                             C18611 * C18516 *
                                 (C18553 * C18554 +
                                  C18726 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C19071 = C19065 + C19066;
    const double C8344 =
        (2 * (ae * C18937 + be * C18946 + C18611 * C19123) +
         ae * (C18937 + C18611 * C19129 + C19125 * be) +
         be * (C18946 + C18611 * C19130 + C19125 * ae) +
         C18611 * (C19123 + ae * C19129 + be * C19130 +
                   C18611 * (ae * C19124 + be * C19126 +
                             C18611 * C18585 *
                                 (C18553 * C18554 +
                                  C18726 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C1969 = C19466 * C1010;
    const double C4716 = C19466 * C1014;
    const double C2491 = C19466 * C1451;
    const double C12216 = C11775 * C1451;
    const double C14465 = C11775 * C1455;
    const double C11099 = C19466 * C2999;
    const double C13811 = C11775 * C2999;
    const double C3813 = C19466 * C3799;
    const double C5695 = C19466 * C4209;
    const double C16011 = C11775 * C4209;
    const double C18376 = C11775 * C4210;
    const double C6523 = C6521 * C19382;
    const double C1575 = C19455 * C686;
    const double C8471 = C8398 * C686;
    const double C9969 = C8398 * C688;
    const double C2097 = C19455 * C1127;
    const double C7455 = C19455 * C1129;
    const double C10609 = C8398 * C2619;
    const double C13324 = C19455 * C2619;
    const double C17874 = C8398 * C3913;
    const double C7959 = C19455 * C3914;
    const double C16143 = C8398 * C3914;
    const double C10113 = C8396 * C786;
    const double C4450 = C19382 * C788;
    const double C9107 = C8396 * C788;
    const double C14119 = C8396 * C1227;
    const double C7567 = C19382 * C1229;
    const double C12926 = C8396 * C1229;
    const double C11390 = C8396 * C2731;
    const double C16806 = C19382 * C2731;
    const double C3525 = C3523 * C19382;
    const double C1635 = C19466 * C736;
    const double C4390 = C19466 * C738;
    const double C2157 = C19466 * C1177;
    const double C11894 = C11775 * C1177;
    const double C14045 = C11775 * C1179;
    const double C10679 = C19466 * C2675;
    const double C13398 = C11775 * C2675;
    const double C10331 = C8396 * C924;
    const double C4610 = C19382 * C926;
    const double C9265 = C8396 * C926;
    const double C14327 = C8396 * C1365;
    const double C7734 = C19382 * C1367;
    const double C13088 = C8396 * C1367;
    const double C11592 = C8396 * C2893;
    const double C17006 = C19382 * C2893;
    const double C18306 = C8398 * C4168;
    const double C8294 = C19455 * C4169;
    const double C16479 = C8398 * C4169;
    const double C18407 = C19382 - C18406;
    const double C3582 = C3575 - C3576;
    const double C3581 = C3573 - C3574;
    const double C3719 = C3715 - C3716;
    const double C18018 = C5422 - C5423;
    const double C18016 = C5423 - C5422;
    const double C18017 = C5420 - C5421;
    const double C18015 = C5421 - C5420;
    const double C18236 = C5586 - C5587;
    const double C18235 = C5587 - C5586;
    const double C6622 = C6615 - C6616;
    const double C6621 = C6613 - C6614;
    const double C6778 = C6774 - C6775;
    const double C18452 = C19455 - C18451;
    const double C350 = C347 + C335;
    const double C6684 = C6681 + C6669;
    const double C18478 = C19466 - C18477;
    const double C569 = C566 + C554;
    const double C3820 = C3817 + C3805;
    const double C4718 = C4717 - C4715;
    const double C7625 = C7624 - C7622;
    const double C11102 = C11101 - C11098;
    const double C13536 = C13535 - C13533;
    const double C8128 = C8123 - C8124;
    const double C351 = C348 + C339;
    const double C352 = C349 + C343;
    const double C1752 = C1750 + C1746;
    const double C2274 = C2272 + C2268;
    const double C6685 = C6682 + C6673;
    const double C8131 = C8129 + C8122;
    const double C570 = C567 + C558;
    const double C571 = C568 + C562;
    const double C1979 = C1977 + C1973;
    const double C3821 = C3818 + C3809;
    const double C2501 = C2499 + C2495;
    const double C5705 = C5703 + C5699;
    const double C405 = C398 + C404;
    const double C506 = C499 + C505;
    const double C18582 = C18580 + C18568;
    const double C18581 = C18579 + C18565;
    const double C11174 = C8396 * C2563;
    const double C16600 = C19382 * C2563;
    const double C7896 = C19382 * C3870;
    const double C18933 = C18931 + C18925;
    const double C19081 = C19079 + C19073;
    const double C18934 = C18932 + C18928;
    const double C1751 = C1749 + C1742;
    const double C2273 = C2271 + C2264;
    const double C6686 = C6683 + C6677;
    const double C19082 = C19080 + C19076;
    const double C1978 = C1976 + C1969;
    const double C2500 = C2498 + C2491;
    const double C3822 = C3819 + C3813;
    const double C5704 = C5702 + C5695;
    const double C6524 = C6522 + C6523;
    const double C3526 = C3524 + C3525;
    const double C18408 = C18407 * C18404;
    const double C89 =
        ((C18407 * ae) / C18395 - C18394 / C18399) / (2 * C18395) +
        ((C18393 * ((0 * ae) / C18395 - C18400 / C18397) + C8396) * ae) /
            C18395;
    const double C8399 = (C18407 * ae) / C18395 - C18394 / C18399;
    const double C3714 = C3581 * C214;
    const double C3720 = C3719 * C19466;
    const double C6624 = C6622 * C19455;
    const double C6623 = C6621 * C151;
    const double C18453 = C18452 * C18404;
    const double C8453 = (C18452 * ae) / C18395 - C18439 / C18399;
    const double C6687 = C6684 * C19382;
    const double C12977 = C6684 * C8395;
    const double C18479 = C18478 * C18404;
    const double C11876 = (C18478 * ae) / C18395 - C18465 / C18399;
    const double C572 = C569 * C19455;
    const double C8860 = C569 * C8397;
    const double C4719 = C4718 + C4716;
    const double C7626 = C7625 + C7623;
    const double C11103 = C11102 + C11099;
    const double C13537 = C13536 + C13534;
    const double C8130 = C8128 - C8125;
    const double C7619 = C2274 * C19382;
    const double C12978 = C2274 * C8396;
    const double C14186 = C2274 * C8395;
    const double C6688 = C6685 * C19382;
    const double C12980 = C6685 * C8395;
    const double C8133 = C8131 * C19382;
    const double C14806 = C8131 * C8395;
    const double C573 = C570 * C19455;
    const double C8863 = C570 * C8397;
    const double C574 = C571 * C19455;
    const double C1981 = C1979 * C19455;
    const double C8861 = C1979 * C8398;
    const double C10469 = C1979 * C8397;
    const double C2503 = C2501 * C19455;
    const double C11100 = C2501 * C8397;
    const double C689 =
        (C18596 + ae * C18599 + C18516 * C18607 + be * C18585 * C18582 +
         C18585 *
             (be * C18582 +
              C18585 * (C18603 + ae * C18516 * C18604 +
                        C18516 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)))) /
        C18397;
    const double C1180 =
        (C18622 + ae * C18625 + C18516 * C18633 + be * C18611 * C18582 +
         C18611 *
             (be * C18582 +
              C18611 * (C18629 + ae * C18516 * C18630 +
                        C18516 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18617)))) /
        C18397;
    const double C1566 =
        (be * (2 * C18548 + C18516 * C18582 + C18566 * ae) +
         C18585 *
             (2 * C18607 + ae * C18608 +
              C18516 * (C18603 + ae * C18516 * C18604 +
                        C18516 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18591)))) /
        C18397;
    const double C2148 =
        (be * (2 * C18548 + C18516 * C18582 + C18566 * ae) +
         C18611 *
             (2 * C18633 + ae * C18634 +
              C18516 * (C18629 + ae * C18516 * C18630 +
                        C18516 * (ae * C18630 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18617)))) /
        C18397;
    const double C2620 =
        (C18611 *
         (be * C18582 +
          C18585 * (C18603 + ae * C18516 * C18604 +
                    C18516 * (ae * C18604 + C18516 * std::pow(C18514, 6) *
                                                bs[6] * C18591)))) /
        C18397;
    const double C2676 =
        (be * C18585 * C18582 +
         C18611 * C18585 *
             (C18629 + ae * C18516 * C18630 +
              C18516 * (ae * C18630 +
                        C18516 * std::pow(C18514, 6) * bs[6] * C18617))) /
        C18397;
    const double C107 = (3 * (C18529 + C18516 * C18548 + C18537 * ae) +
                         C18516 * (2 * C18548 + C18516 * C18582 + C18566 * ae) +
                         (2 * C18537 + C18516 * C18566) * ae) /
                        C18395;
    const double C633 =
        (C18529 + C18516 * C18548 + C18537 * ae + C18582 * C18663) / C18395;
    const double C1074 =
        (C18529 + C18516 * C18548 + C18537 * ae + C18582 * C18726) / C18395;
    const double C1513 =
        (C18585 * (2 * C18548 + C18516 * C18582 + C18566 * ae)) / C18395;
    const double C2035 =
        (C18611 * (2 * C18548 + C18516 * C18582 + C18566 * ae)) / C18395;
    const double C2561 = (C18611 * C18585 * C18582) / C18395;
    const double C112 =
        (3 * (C18546 + ae * C18547 + be * C18548 + C18516 * C18578) +
         ae * (2 * C18547 + C18516 * C18581 + C18566 * be) +
         be * (2 * C18548 + C18516 * C18582 + C18566 * ae) +
         C18516 *
             (2 * C18578 + ae * C18581 + be * C18582 +
              C18516 * (C18572 + ae * C18573 + be * C18574 +
                        C18516 * (ae * C18564 + be * C18567 +
                                  C18516 *
                                      (C18553 * C18554 +
                                       C18520 * bs[6] * std::pow(C18514, 6)) *
                                      C18396)))) /
        C18397;
    const double C789 =
        (C18647 + be * C18650 + C18516 * C18658 + ae * C18585 * C18581 +
         C18585 *
             (ae * C18581 +
              C18585 * (C18654 + be * C18516 * C18655 +
                        C18516 * (be * C18655 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18642)))) /
        C18397;
    const double C1368 =
        (C18698 + be * C18701 + C18516 * C18709 + ae * C18611 * C18581 +
         C18611 *
             (ae * C18581 +
              C18611 * (C18705 + be * C18516 * C18706 +
                        C18516 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18693)))) /
        C18397;
    const double C1514 =
        (2 * (ae * C18585 * C18541 + be * C18585 * C18542 + C18516 * C18846) +
         ae * C18585 * C18581 + be * C18585 * C18582 +
         C18516 * (C18846 + ae * C18585 * C18573 + be * C18585 * C18574 +
                   C18516 * (ae * C18585 * C18564 + be * C18585 * C18567 +
                             C18516 * C18585 *
                                 (C18553 * C18554 +
                                  C18520 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C1686 =
        (ae * (2 * C18547 + C18516 * C18581 + C18566 * be) +
         C18585 *
             (2 * C18658 + be * C18659 +
              C18516 * (C18654 + be * C18516 * C18655 +
                        C18516 * (be * C18655 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18642)))) /
        C18397;
    const double C2036 =
        (2 * (ae * C18611 * C18541 + be * C18611 * C18542 + C18516 * C18856) +
         ae * C18611 * C18581 + be * C18611 * C18582 +
         C18516 * (C18856 + ae * C18611 * C18573 + be * C18611 * C18574 +
                   C18516 * (ae * C18611 * C18564 + be * C18611 * C18567 +
                             C18516 * C18611 *
                                 (C18553 * C18554 +
                                  C18520 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C2380 =
        (ae * (2 * C18547 + C18516 * C18581 + C18566 * be) +
         C18611 *
             (2 * C18709 + be * C18710 +
              C18516 * (C18705 + be * C18516 * C18706 +
                        C18516 * (be * C18706 + C18516 * std::pow(C18514, 6) *
                                                    bs[6] * C18693)))) /
        C18397;
    const double C2732 =
        (ae * C18611 * C18581 +
         C18585 * C18611 *
             (C18654 + be * C18516 * C18655 +
              C18516 * (be * C18655 +
                        C18516 * std::pow(C18514, 6) * bs[6] * C18642))) /
        C18397;
    const double C2894 =
        (ae * C18585 * C18581 +
         C18611 * C18585 *
             (C18705 + be * C18516 * C18706 +
              C18516 * (be * C18706 +
                        C18516 * std::pow(C18514, 6) * bs[6] * C18693))) /
        C18397;
    const double C106 = (3 * (C18528 + C18516 * C18547 + C18537 * be) +
                         C18516 * (2 * C18547 + C18516 * C18581 + C18566 * be) +
                         (2 * C18537 + C18516 * C18566) * be) /
                        C18395;
    const double C632 =
        (C18528 + C18516 * C18547 + C18537 * be + C18581 * C18663) / C18395;
    const double C1073 =
        (C18528 + C18516 * C18547 + C18537 * be + C18581 * C18726) / C18395;
    const double C1512 =
        (C18585 * (2 * C18547 + C18516 * C18581 + C18566 * be)) / C18395;
    const double C2034 =
        (C18611 * (2 * C18547 + C18516 * C18581 + C18566 * be)) / C18395;
    const double C2560 = (C18611 * C18585 * C18581) / C18395;
    const double C4170 =
        (C18719 + be * C18946 + C18585 * C18949 + ae * C18611 * C18933 +
         C18611 *
             (ae * C18933 +
              C18611 * (C18722 + be * C18585 * C18706 +
                        C18585 * (be * C18706 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18716)))) /
        C18397;
    const double C5639 =
        (ae * (2 * C18914 + C18585 * C18933 + C18926 * be) +
         C18611 *
             (2 * C18949 + be * C18950 +
              C18585 * (C18722 + be * C18585 * C18706 +
                        C18585 * (be * C18706 + C18585 * std::pow(C18514, 6) *
                                                    bs[6] * C18716)))) /
        C18397;
    const double C3464 =
        (3 * (C18592 + C18585 * C18914 + C18912 * be) +
         C18585 * (2 * C18914 + C18585 * C18933 + C18926 * be) +
         (2 * C18912 + C18585 * C18926) * be) /
        C18395;
    const double C3912 =
        (C18592 + C18585 * C18914 + C18912 * be + C18933 * C18726) / C18395;
    const double C5305 =
        (C18611 * (2 * C18914 + C18585 * C18933 + C18926 * be)) / C18395;
    const double C8184 =
        (ae * (2 * C19062 + C18611 * C19081 + C19074 * be) +
         C18585 *
             (2 * C19020 + be * C19043 +
              C18611 * (C18685 + be * C18611 * C18655 +
                        C18611 * (be * C18655 + C18611 * std::pow(C18514, 6) *
                                                    bs[6] * C18679)))) /
        C18397;
    const double C6563 =
        (3 * (C18618 + C18611 * C19062 + C19060 * be) +
         C18611 * (2 * C19062 + C18611 * C19081 + C19074 * be) +
         (2 * C19060 + C18611 * C19074) * be) /
        C18395;
    const double C3621 =
        (3 * (C18668 + ae * C18914 + be * C18915 + C18585 * C18923) +
         ae * (2 * C18914 + C18585 * C18933 + C18926 * be) +
         be * (2 * C18915 + C18585 * C18934 + C18926 * ae) +
         C18585 *
             (2 * C18923 + ae * C18933 + be * C18934 +
              C18585 * (C18673 + ae * C18924 + be * C18927 +
                        C18585 * (ae * C18604 + be * C18655 +
                                  C18585 *
                                      (C18553 * C18554 +
                                       C18663 * bs[6] * std::pow(C18514, 6)) *
                                      C18396)))) /
        C18397;
    const double C5477 =
        (2 * (ae * C18611 * C18597 + be * C18611 * C18648 + C18585 * C19017) +
         ae * C18611 * C18933 + be * C18611 * C18934 +
         C18585 * (C19017 + ae * C18611 * C18924 + be * C18611 * C18927 +
                   C18585 * (ae * C18611 * C18604 + be * C18611 * C18655 +
                             C18585 * C18611 *
                                 (C18553 * C18554 +
                                  C18663 * bs[6] * std::pow(C18514, 6)) *
                                 C18396))) /
        C18397;
    const double C3565 =
        (3 * (C18643 + C18585 * C18915 + C18912 * ae) +
         C18585 * (2 * C18915 + C18585 * C18934 + C18926 * ae) +
         (2 * C18912 + C18585 * C18926) * ae) /
        C18395;
    const double C4000 =
        (C18643 + C18585 * C18915 + C18912 * ae + C18934 * C18726) / C18395;
    const double C5417 =
        (C18611 * (2 * C18915 + C18585 * C18934 + C18926 * ae)) / C18395;
    const double C14187 = C2273 * C8396;
    const double C6689 = C6686 * C19382;
    const double C6864 =
        (3 * (C18731 + ae * C19062 + be * C19063 + C18611 * C19071) +
         ae * (2 * C19062 + C18611 * C19081 + C19074 * be) +
         be * (2 * C19063 + C18611 * C19082 + C19074 * ae) +
         C18611 *
             (2 * C19071 + ae * C19081 + be * C19082 +
              C18611 * (C18736 + ae * C19072 + be * C19075 +
                        C18611 * (ae * C18630 + be * C18706 +
                                  C18611 *
                                      (C18553 * C18554 +
                                       C18726 * bs[6] * std::pow(C18514, 6)) *
                                      C18396)))) /
        C18397;
    const double C6768 =
        (3 * (C18694 + C18611 * C19063 + C19060 * ae) +
         C18611 * (2 * C19063 + C18611 * C19082 + C19074 * ae) +
         (2 * C19060 + C18611 * C19074) * ae) /
        C18395;
    const double C1980 = C1978 * C19455;
    const double C8862 = C1978 * C8398;
    const double C2502 = C2500 * C19455;
    const double C18413 = C18393 * C18408;
    const double C88 =
        (ae * -2 * C18394) / (C18397 * 2 * C18395) +
        (((C18393 * ((-4 * C18400) / C18395 - (C18393 * C18408) / C18395) *
           ae) /
              C18395 +
          2 * ((C18407 * ae) / C18395 - C18394 / C18399)) *
         ae) /
            C18395 -
        C18408 / C18399;
    const double C92 = (-C18408 / C18395) / (4 * C18397);
    const double C3044 = -C18408 / C18395;
    const double C8402 = (-C18408 / C18395) / (2 * C18395);
    const double C8928 = C8399 * C629;
    const double C8926 = C8399 * C628;
    const double C8916 = C8399 * C627;
    const double C8914 = C8399 * C626;
    const double C9104 = C8399 * C781;
    const double C9100 = C8399 * C619;
    const double C9097 = C8399 * C778;
    const double C9093 = C8399 * C618;
    const double C9262 = C8399 * C919;
    const double C9259 = C8399 * C916;
    const double C9884 = C8399 * C625;
    const double C9882 = C8399 * C624;
    const double C10110 = C8399 * C779;
    const double C10106 = C8399 * C617;
    const double C10328 = C8399 * C917;
    const double C11177 = C8399 * C2557;
    const double C11175 = C8399 * C2556;
    const double C11387 = C8399 * C2727;
    const double C11383 = C8399 * C2553;
    const double C11589 = C8399 * C2889;
    const double C12747 = C8399 * C1070;
    const double C12745 = C8399 * C1069;
    const double C12735 = C8399 * C1068;
    const double C12733 = C8399 * C1067;
    const double C12923 = C8399 * C1222;
    const double C12919 = C8399 * C1060;
    const double C12916 = C8399 * C1219;
    const double C12912 = C8399 * C1059;
    const double C13085 = C8399 * C1360;
    const double C13082 = C8399 * C1357;
    const double C13890 = C8399 * C1066;
    const double C13888 = C8399 * C1065;
    const double C14116 = C8399 * C1220;
    const double C14112 = C8399 * C1058;
    const double C14324 = C8399 * C1358;
    const double C3721 = C3714 + C3720;
    const double C6625 = C6623 + C6624;
    const double C18456 = C18425 * C18453;
    const double C3200 =
        (ae * -2 * C18439) / (C18397 * 2 * C18395) +
        (((C18425 * ((-4 * C18441) / C18395 - (C18425 * C18453) / C18395) *
           ae) /
              C18395 +
          2 * ((C18452 * ae) / C18395 - C18439 / C18399)) *
         ae) /
            C18395 -
        C18453 / C18399;
    const double C3202 = (-C18453 / C18395) / (4 * C18397);
    const double C8622 = (-C18453 / C18395) / (2 * C18395);
    const double C8468 = C8453 * C103;
    const double C8464 = C8453 * C95;
    const double C8461 = C8453 * C101;
    const double C8457 = C8453 * C94;
    const double C8638 = C8453 * C279;
    const double C8636 = C8453 * C154;
    const double C8626 = C8453 * C278;
    const double C8624 = C8453 * C153;
    const double C8806 = C8453 * C445;
    const double C8803 = C8453 * C444;
    const double C9966 = C8453 * C625;
    const double C9962 = C8453 * C617;
    const double C10186 = C8453 * C779;
    const double C10184 = C8453 * C679;
    const double C10398 = C8453 * C917;
    const double C10606 = C8453 * C1066;
    const double C10602 = C8453 * C1058;
    const double C10818 = C8453 * C1220;
    const double C10816 = C8453 * C1120;
    const double C11026 = C8453 * C1358;
    const double C16140 = C8453 * C1070;
    const double C16136 = C8453 * C1060;
    const double C16133 = C8453 * C1068;
    const double C16129 = C8453 * C1059;
    const double C16308 = C8453 * C1222;
    const double C16306 = C8453 * C1122;
    const double C16296 = C8453 * C1219;
    const double C16294 = C8453 * C1119;
    const double C16476 = C8453 * C1360;
    const double C16473 = C8453 * C1357;
    const double C17871 = C8453 * C2557;
    const double C17867 = C8453 * C2553;
    const double C18087 = C8453 * C2727;
    const double C18085 = C8453 * C2615;
    const double C18303 = C8453 * C2889;
    const double C18482 = C18428 * C18479;
    const double C6053 =
        (ae * -2 * C18465) / (C18397 * 2 * C18395) +
        (((C18428 * ((-4 * C18467) / C18395 - (C18428 * C18479) / C18395) *
           ae) /
              C18395 +
          2 * ((C18478 * ae) / C18395 - C18465 / C18399)) *
         ae) /
            C18395 -
        C18479 / C18399;
    const double C6055 = (-C18479 / C18395) / (4 * C18397);
    const double C12203 = (-C18479 / C18395) / (2 * C18395);
    const double C11891 = C11876 * C103;
    const double C11887 = C11876 * C95;
    const double C11884 = C11876 * C101;
    const double C11880 = C11876 * C94;
    const double C12049 = C11876 * C279;
    const double C12046 = C11876 * C278;
    const double C12219 = C11876 * C445;
    const double C12217 = C11876 * C217;
    const double C12207 = C11876 * C444;
    const double C12205 = C11876 * C216;
    const double C13395 = C11876 * C625;
    const double C13391 = C11876 * C617;
    const double C13604 = C11876 * C779;
    const double C13814 = C11876 * C917;
    const double C13812 = C11876 * C729;
    const double C14042 = C11876 * C1066;
    const double C14038 = C11876 * C1058;
    const double C14254 = C11876 * C1220;
    const double C14468 = C11876 * C1358;
    const double C14466 = C11876 * C1170;
    const double C15688 = C11876 * C629;
    const double C15684 = C11876 * C619;
    const double C15681 = C11876 * C627;
    const double C15677 = C11876 * C618;
    const double C15846 = C11876 * C781;
    const double C15843 = C11876 * C778;
    const double C16014 = C11876 * C919;
    const double C16012 = C11876 * C731;
    const double C16002 = C11876 * C916;
    const double C16000 = C11876 * C728;
    const double C17945 = C11876 * C2557;
    const double C17941 = C11876 * C2553;
    const double C18165 = C11876 * C2727;
    const double C18379 = C11876 * C2889;
    const double C18377 = C11876 * C2671;
    const double C10468 = C4719 * C8398;
    const double C7627 = C7626 * C19382;
    const double C12979 = C7626 * C8396;
    const double C11104 = C11103 * C8398;
    const double C14807 = C13537 * C8396;
    const double C8132 = C8130 + C8126;
    const double C90 =
        (((-4 * C18400) / C18395 - C18413 / C18395) * ae) / C18399 +
        ((2 * ((0 * ae) / C18395 - C18400 / C18397) - C18413 / C18399) * ae) /
            C18395;
    const double C8400 =
        (((-4 * C18400) / C18395 - C18413 / C18395) * ae) / C18395;
    const double C3411 = C3044 * C3393;
    const double C3407 = C3044 * C619;
    const double C3403 = C3044 * C618;
    const double C4272 = C3044 * C620;
    const double C4268 = C3044 * C617;
    const double C5245 = C3044 * C2553;
    const double C5241 = C3044 * C3860;
    const double C6454 = C3044 * C6436;
    const double C6450 = C3044 * C1060;
    const double C6446 = C3044 * C1059;
    const double C7391 = C3044 * C1061;
    const double C7387 = C3044 * C1058;
    const double C7894 = C3044 * C3861;
    const double C16598 = C3044 * C2554;
    const double C8923 = C8402 * C620;
    const double C8919 = C8402 * C617;
    const double C9887 = C8402 * C616;
    const double C11172 = C8402 * C2554;
    const double C12742 = C8402 * C1061;
    const double C12738 = C8402 * C1058;
    const double C13893 = C8402 * C1057;
    const double C3201 =
        (((-4 * C18441) / C18395 - C18456 / C18395) * ae) / C18399 +
        ((2 * ((0 * ae) / C18395 - C18441 / C18397) - C18456 / C18399) * ae) /
            C18395;
    const double C8621 =
        (((-4 * C18441) / C18395 - C18456 / C18395) * ae) / C18395;
    const double C8633 = C8622 * C616;
    const double C8629 = C8622 * C617;
    const double C10181 = C8622 * C620;
    const double C10813 = C8622 * C2554;
    const double C16303 = C8622 * C3861;
    const double C16299 = C8622 * C2553;
    const double C18090 = C8622 * C3860;
    const double C6054 =
        (((-4 * C18467) / C18395 - C18482 / C18395) * ae) / C18399 +
        ((2 * ((0 * ae) / C18395 - C18467 / C18397) - C18482 / C18399) * ae) /
            C18395;
    const double C12202 =
        (((-4 * C18467) / C18395 - C18482 / C18395) * ae) / C18395;
    const double C12214 = C12203 * C1057;
    const double C12210 = C12203 * C1058;
    const double C13809 = C12203 * C2554;
    const double C14463 = C12203 * C1061;
    const double C16009 = C12203 * C3860;
    const double C16005 = C12203 * C2553;
    const double C18374 = C12203 * C3861;
    const double C8134 = C8132 * C19382;
    const double C8927 = C8400 * C619;
    const double C8915 = C8400 * C618;
    const double C9883 = C8400 * C617;
    const double C11176 = C8400 * C2553;
    const double C12746 = C8400 * C1060;
    const double C12734 = C8400 * C1059;
    const double C13889 = C8400 * C1058;
    const double C3416 = C3410 - C3411;
    const double C3415 = C3406 - C3407;
    const double C3414 = C3402 - C3403;
    const double C4276 = C4271 - C4272;
    const double C4275 = C4267 - C4268;
    const double C5249 = C5244 - C5245;
    const double C5248 = C5240 - C5241;
    const double C6459 = C6453 - C6454;
    const double C6458 = C6449 - C6450;
    const double C6457 = C6445 - C6446;
    const double C7395 = C7390 - C7391;
    const double C7394 = C7386 - C7387;
    const double C7897 = C7893 - C7894;
    const double C16601 = C16597 - C16598;
    const double C8932 = C8922 - C8923;
    const double C8931 = C8918 - C8919;
    const double C9891 = C9886 - C9887;
    const double C11179 = C11171 - C11172;
    const double C12751 = C12741 - C12742;
    const double C12750 = C12737 - C12738;
    const double C13897 = C13892 - C13893;
    const double C8637 = C8621 * C95;
    const double C8625 = C8621 * C94;
    const double C10185 = C8621 * C617;
    const double C10817 = C8621 * C1058;
    const double C16307 = C8621 * C1060;
    const double C16295 = C8621 * C1059;
    const double C18086 = C8621 * C2553;
    const double C8642 = C8632 - C8633;
    const double C8641 = C8628 - C8629;
    const double C10188 = C10180 - C10181;
    const double C10820 = C10812 - C10813;
    const double C16312 = C16302 - C16303;
    const double C16311 = C16298 - C16299;
    const double C18094 = C18089 - C18090;
    const double C12218 = C12202 * C95;
    const double C12206 = C12202 * C94;
    const double C13813 = C12202 * C617;
    const double C14467 = C12202 * C1058;
    const double C16013 = C12202 * C619;
    const double C16001 = C12202 * C618;
    const double C18378 = C12202 * C2553;
    const double C12223 = C12213 - C12214;
    const double C12222 = C12209 - C12210;
    const double C13816 = C13808 - C13809;
    const double C14470 = C14462 - C14463;
    const double C16018 = C16008 - C16009;
    const double C16017 = C16004 - C16005;
    const double C18381 = C18373 - C18374;
    const double C8933 = C8926 - C8927;
    const double C8930 = C8914 - C8915;
    const double C9890 = C9882 - C9883;
    const double C11180 = C11175 - C11176;
    const double C12752 = C12745 - C12746;
    const double C12749 = C12733 - C12734;
    const double C13896 = C13888 - C13889;
    const double C3419 = C3416 - C3412;
    const double C3418 = C3415 - C3408;
    const double C3417 = C3414 - C3404;
    const double C4278 = C4276 - C4273;
    const double C4277 = C4275 - C4269;
    const double C5251 = C5249 - C5246;
    const double C5250 = C5248 - C5242;
    const double C6462 = C6459 - C6455;
    const double C6461 = C6458 - C6451;
    const double C6460 = C6457 - C6447;
    const double C7397 = C7395 - C7392;
    const double C7396 = C7394 - C7388;
    const double C7898 = C7897 - C7895;
    const double C16602 = C16601 - C16599;
    const double C8936 = C8932 - C8924;
    const double C8935 = C8931 - C8920;
    const double C9893 = C9891 - C9888;
    const double C11181 = C11179 - C11173;
    const double C12755 = C12751 - C12743;
    const double C12754 = C12750 - C12739;
    const double C13899 = C13897 - C13894;
    const double C8643 = C8636 - C8637;
    const double C8640 = C8624 - C8625;
    const double C10189 = C10184 - C10185;
    const double C10821 = C10816 - C10817;
    const double C16313 = C16306 - C16307;
    const double C16310 = C16294 - C16295;
    const double C18093 = C18085 - C18086;
    const double C8646 = C8642 - C8634;
    const double C8645 = C8641 - C8630;
    const double C10190 = C10188 - C10182;
    const double C10822 = C10820 - C10814;
    const double C16316 = C16312 - C16304;
    const double C16315 = C16311 - C16300;
    const double C18096 = C18094 - C18091;
    const double C12224 = C12217 - C12218;
    const double C12221 = C12205 - C12206;
    const double C13817 = C13812 - C13813;
    const double C14471 = C14466 - C14467;
    const double C16019 = C16012 - C16013;
    const double C16016 = C16000 - C16001;
    const double C18382 = C18377 - C18378;
    const double C12227 = C12223 - C12215;
    const double C12226 = C12222 - C12211;
    const double C13818 = C13816 - C13810;
    const double C14472 = C14470 - C14464;
    const double C16022 = C16018 - C16010;
    const double C16021 = C16017 - C16006;
    const double C18383 = C18381 - C18375;
    const double C8937 = C8933 - C8928;
    const double C8934 = C8930 - C8916;
    const double C9892 = C9890 - C9884;
    const double C11182 = C11180 - C11177;
    const double C12756 = C12752 - C12747;
    const double C12753 = C12749 - C12735;
    const double C13898 = C13896 - C13890;
    const double C3422 = C3419 + C3413;
    const double C3421 = C3418 + C3409;
    const double C3420 = C3417 + C3405;
    const double C4280 = C4278 + C4274;
    const double C4279 = C4277 + C4270;
    const double C5253 = C5251 + C5247;
    const double C5252 = C5250 + C5243;
    const double C6465 = C6462 + C6456;
    const double C6464 = C6461 + C6452;
    const double C6463 = C6460 + C6448;
    const double C7399 = C7397 + C7393;
    const double C7398 = C7396 + C7389;
    const double C7899 = C7898 + C7896;
    const double C16603 = C16602 + C16600;
    const double C8940 = C8936 + C8925;
    const double C8939 = C8935 + C8921;
    const double C9895 = C9893 + C9889;
    const double C11183 = C11181 + C11174;
    const double C12759 = C12755 + C12744;
    const double C12758 = C12754 + C12740;
    const double C13901 = C13899 + C13895;
    const double C8647 = C8643 - C8638;
    const double C8644 = C8640 - C8626;
    const double C10191 = C10189 - C10186;
    const double C10823 = C10821 - C10818;
    const double C16317 = C16313 - C16308;
    const double C16314 = C16310 - C16296;
    const double C18095 = C18093 - C18087;
    const double C8650 = C8646 + C8635;
    const double C8649 = C8645 + C8631;
    const double C10192 = C10190 + C10183;
    const double C10824 = C10822 + C10815;
    const double C16320 = C16316 + C16305;
    const double C16319 = C16315 + C16301;
    const double C18098 = C18096 + C18092;
    const double C12228 = C12224 - C12219;
    const double C12225 = C12221 - C12207;
    const double C13819 = C13817 - C13814;
    const double C14473 = C14471 - C14468;
    const double C16023 = C16019 - C16014;
    const double C16020 = C16016 - C16002;
    const double C18384 = C18382 - C18379;
    const double C12231 = C12227 + C12216;
    const double C12230 = C12226 + C12212;
    const double C13820 = C13818 + C13811;
    const double C14474 = C14472 + C14465;
    const double C16026 = C16022 + C16011;
    const double C16025 = C16021 + C16007;
    const double C18385 = C18383 + C18376;
    const double C8941 = C8937 + C8929;
    const double C8938 = C8934 + C8917;
    const double C9894 = C9892 + C9885;
    const double C11184 = C11182 + C11178;
    const double C12760 = C12756 + C12748;
    const double C12757 = C12753 + C12736;
    const double C13900 = C13898 + C13891;
    const double C3425 = C3422 * C19466;
    const double C3424 = C3421 * C19466;
    const double C15575 = C3421 * C11774;
    const double C3423 = C3420 * C19466;
    const double C15572 = C3420 * C11774;
    const double C4282 = C4280 * C19466;
    const double C4281 = C4279 * C19466;
    const double C16596 = C4279 * C11774;
    const double C5255 = C5253 * C19466;
    const double C15573 = C5253 * C11775;
    const double C17800 = C5253 * C11774;
    const double C5254 = C5252 * C19466;
    const double C15574 = C5252 * C11775;
    const double C17799 = C7899 * C11775;
    const double C16604 = C16603 * C11775;
    const double C8651 = C8647 + C8639;
    const double C8648 = C8644 + C8627;
    const double C10193 = C10191 + C10187;
    const double C10825 = C10823 + C10819;
    const double C16321 = C16317 + C16309;
    const double C16318 = C16314 + C16297;
    const double C18097 = C18095 + C18088;
    const double C12232 = C12228 + C12220;
    const double C12229 = C12225 + C12208;
    const double C13821 = C13819 + C13815;
    const double C14475 = C14473 + C14469;
    const double C16027 = C16023 + C16015;
    const double C16024 = C16020 + C16003;
    const double C18386 = C18384 + C18380;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C19466 * C8397 +
            (C8938 + C8939) * C19466 * C8398) *
               C19430 * C1507 -
           ((C8940 + C8941) * C19466 * C8398 +
            (C8939 + C8938) * C19466 * C8397) *
               C19430 * C1508) *
              C1509 +
          (((C9894 + C9895) * C19466 * C8397 +
            (C8399 * C630 - C8400 * C620 - C8399 * C631 + C8395 * C638 +
             C8401 * C632 - C8402 * C621 - C8401 * C633 + C8396 * C639) *
                C19466 * C8398) *
               C19430 * C1508 -
           ((C9895 + C9894) * C19466 * C8398 +
            (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
             C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
                C19466 * C8397) *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
            (C8456 - C8457 + C8458 - C8459) * C8401 +
            (C8460 - C8461 + C8462 - C8463) * C8396) *
               C19466 * C19430 * C1507 +
           ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C8399 +
            (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                C8395 +
            (C9962 - C9963 + C9964 - C9965) * C8401 +
            (C9966 - C9967 + C9968 - C9969) * C8396) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C8457 - C8456 + C8459 - C8458) * C8399 +
            (C8461 - C8460 + C8463 - C8462) * C8395 +
            (C8464 - C8465 + C8466 - C8467) * C8401 +
            (C8468 - C8469 + C8470 - C8471) * C8396) *
               C19466 * C19430 * C1507 +
           ((C9963 - C9962 + C9965 - C9964) * C8399 +
            (C9967 - C9966 + C9969 - C9968) * C8395 +
            (C8397 * C680 - C8453 * C616 + C8398 * C683 - C8454 * C621) *
                C8401 +
            (C8397 * C686 - C8453 * C623 + C8398 * C689 - C8454 * C633) *
                C8396) *
               C19466 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8399 +
                      (C19466 * C220 - C214 * C99) * C8395 +
                      (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                         C8397 +
                     ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                      C10036 * C8401 + C10037 * C8396) *
                         C8398) *
                        C19430 * C1507 +
                    (((C3511 - C3510) * C8399 + (C3513 - C3512) * C8395 +
                      C10038 * C8401 + C10039 * C8396) *
                         C8397 +
                     ((C3515 - C3514) * C8399 + (C3517 - C3516) * C8395 +
                      (C4387 - C4388) * C8401 + (C4389 - C4390) * C8396) *
                         C8398) *
                        C19430 * C1508) *
                       C1509 +
                   ((((C227 - C226) * C8399 + (C229 - C228) * C8395 +
                      (C231 - C230) * C8401 + (C233 - C232) * C8396) *
                         C8397 +
                     (C10038 * C8399 + C10039 * C8395 +
                      (C1632 - C1633) * C8401 + (C1634 - C1635) * C8396) *
                         C8398) *
                        C19430 * C1507 +
                    ((C10036 * C8399 + C10037 * C8395 +
                      (C1633 - C1632) * C8401 + (C1635 - C1634) * C8396) *
                         C8397 +
                     ((C4388 - C4387) * C8399 + (C4390 - C4389) * C8395 +
                      (C19466 * C733 - C214 * C621) * C8401 +
                      (C19466 * C739 - C214 * C633) * C8396) *
                         C8398) *
                        C19430 * C1508) *
                       C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C8397 +
            (C9092 - C9093 + C9094 - C9095) * C8454 +
            (C9096 - C9097 + C9098 - C9099) * C8398) *
               C19466 * C19430 * C1507 +
           ((C9093 - C9092 + C9095 - C9094) * C8453 +
            (C9097 - C9096 + C9099 - C9098) * C8397 +
            (C9100 - C9101 + C9102 - C9103) * C8454 +
            (C9104 - C9105 + C9106 - C9107) * C8398) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C8453 +
            (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                C8397 +
            (C10106 - C10107 + C10108 - C10109) * C8454 +
            (C10110 - C10111 + C10112 - C10113) * C8398) *
               C19466 * C19430 * C1507 +
           ((C10107 - C10106 + C10109 - C10108) * C8453 +
            (C10111 - C10110 + C10113 - C10112) * C8397 +
            (C8395 * C630 - C8399 * C620 + C8396 * C632 - C8401 * C621) *
                C8454 +
            (C8395 * C788 - C8399 * C782 + C8396 * C789 - C8401 * C783) *
                C8398) *
               C19466 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C8395 +
            (C8648 + C8649) * C8396) *
               C19466 * C19430 * C1507 -
           ((C10192 + C10193) * C8396 +
            (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
             C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
                C8395) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C10193 + C10192) * C8395 +
            (C8453 * C680 - C8621 * C616 - C8453 * C780 + C8397 * C828 +
             C8454 * C683 - C8622 * C621 - C8454 * C783 + C8398 * C833) *
                C8396) *
               C19466 * C19430 * C1508 -
           ((C8650 + C8651) * C8396 + (C8649 + C8648) * C8395) * C19466 *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8453 +
                      (C19466 * C390 - C214 * C277) * C8397 +
                      (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                         C8395 +
                     ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                      C10036 * C8454 + C10260 * C8398) *
                         C8396) *
                        C19430 * C1507 +
                    (((C3511 - C3510) * C8453 + (C3664 - C3663) * C8397 +
                      (C3515 - C3514) * C8454 + (C3666 - C3665) * C8398) *
                         C8395 +
                     (C10038 * C8453 + C10261 * C8397 +
                      (C4387 - C4388) * C8454 + (C4553 - C4554) * C8398) *
                         C8396) *
                        C19430 * C1508) *
                       C1509 +
                   ((((C227 - C226) * C8453 + (C397 - C396) * C8397 +
                      C10038 * C8454 + C10261 * C8398) *
                         C8395 +
                     ((C231 - C230) * C8453 + (C400 - C399) * C8397 +
                      (C1632 - C1633) * C8454 + (C1806 - C1807) * C8398) *
                         C8396) *
                        C19430 * C1507 +
                    ((C10036 * C8453 + C10260 * C8397 +
                      (C4388 - C4387) * C8454 + (C4554 - C4553) * C8398) *
                         C8395 +
                     ((C1633 - C1632) * C8453 + (C1807 - C1806) * C8397 +
                      (C19466 * C733 - C214 * C621) * C8454 +
                      (C19466 * C877 - C214 * C783) * C8398) *
                         C8396) *
                        C19430 * C1508) *
                       C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
             (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                 C19466) *
                C8397 +
            ((C9092 - C9093 + C9094 - C9095) * C214 +
             (C9258 - C9259 + C9260 - C9261) * C19466) *
                C8398) *
               C19430 * C1507 +
           (((C9093 - C9092 + C9095 - C9094) * C214 +
             (C9259 - C9258 + C9261 - C9260) * C19466) *
                C8397 +
            ((C9100 - C9101 + C9102 - C9103) * C214 +
             (C9262 - C9263 + C9264 - C9265) * C19466) *
                C8398) *
               C19430 * C1508) *
              C1509 +
          ((((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C214 +
             (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                 C19466) *
                C8397 +
            ((C10106 - C10107 + C10108 - C10109) * C214 +
             (C10328 - C10329 + C10330 - C10331) * C19466) *
                C8398) *
               C19430 * C1507 +
           (((C10107 - C10106 + C10109 - C10108) * C214 +
             (C10329 - C10328 + C10331 - C10330) * C19466) *
                C8397 +
            ((C8395 * C630 - C8399 * C620 + C8396 * C632 - C8401 * C621) *
                 C214 +
             (C8395 * C926 - C8399 * C920 + C8396 * C927 - C8401 * C921) *
                 C19466) *
                C8398) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
             (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                 C19466) *
                C8395 +
            ((C8456 - C8457 + C8458 - C8459) * C214 +
             (C8802 - C8803 + C8804 - C8805) * C19466) *
                C8396) *
               C19430 * C1507 +
           (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                 C214 +
             (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                 C19466) *
                C8395 +
            ((C9962 - C9963 + C9964 - C9965) * C214 +
             (C10398 - C10399 + C10400 - C10401) * C19466) *
                C8396) *
               C19430 * C1508) *
              C1509 +
          ((((C8457 - C8456 + C8459 - C8458) * C214 +
             (C8803 - C8802 + C8805 - C8804) * C19466) *
                C8395 +
            ((C8464 - C8465 + C8466 - C8467) * C214 +
             (C8806 - C8807 + C8808 - C8809) * C19466) *
                C8396) *
               C19430 * C1507 +
           (((C9963 - C9962 + C9965 - C9964) * C214 +
             (C10399 - C10398 + C10401 - C10400) * C19466) *
                C8395 +
            ((C8397 * C680 - C8453 * C616 + C8398 * C683 - C8454 * C621) *
                 C214 +
             (C8397 * C968 - C8453 * C918 + C8398 * C971 - C8454 * C921) *
                 C19466) *
                C8396) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
             C3820 * C8398) *
                C8395 +
            (C8860 + C8861) * C8396) *
               C19430 * C1507 -
           ((C10468 + C10469) * C8396 +
            (C3821 * C8398 + C3820 * C8397) * C8395) *
               C19430 * C1508) *
              C1509 +
          (((C10469 + C10468) * C8395 +
            (C1978 * C8397 +
             (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) *
                 C8398) *
                C8396) *
               C19430 * C1508 -
           ((C8862 + C8863) * C8396 + (C8861 + C8860) * C8395) * C19430 *
               C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C19466 * C8397 +
            (C8938 + C8939) * C19466 * C8398) *
               C2031 -
           ((C11183 + C11184) * C19466 * C8398 +
            (C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076 +
             C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077) *
                C19466 * C8397) *
               C2032) *
              C1507 +
          (((C11184 + C11183) * C19466 * C8397 +
            (C8399 * C3863 - C8400 * C3860 - C8399 * C3864 + C8395 * C3869 +
             C8401 * C4770 - C8402 * C4769 - C8401 * C4771 + C8396 * C4772) *
                C19466 * C8398) *
               C2032 -
           ((C8940 + C8941) * C19466 * C8398 +
            (C8939 + C8938) * C19466 * C8397) *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
            (C8456 - C8457 + C8458 - C8459) * C8401 +
            (C8460 - C8461 + C8462 - C8463) * C8396) *
               C19466 * C2031 +
           ((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
                C8399 +
            (C8453 * C1068 - C8397 * C1125 + C8454 * C2557 - C8398 * C2618) *
                C8395 +
            (C10602 - C10603 + C10604 - C10605) * C8401 +
            (C10606 - C10607 + C10608 - C10609) * C8396) *
               C19466 * C2032) *
              C1507 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C8399 +
            (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                C8395 +
            (C9962 - C9963 + C9964 - C9965) * C8401 +
            (C9966 - C9967 + C9968 - C9969) * C8396) *
               C19466 * C2031 +
           ((C8397 * C2615 - C8453 * C2553 + C8398 * C3910 - C8454 * C3860) *
                C8399 +
            (C8397 * C2618 - C8453 * C2557 + C8398 * C3913 - C8454 * C3864) *
                C8395 +
            (C8397 * C2616 - C8453 * C2554 + C8398 * C4823 - C8454 * C4769) *
                C8401 +
            (C8397 * C2619 - C8453 * C2559 + C8398 * C4824 - C8454 * C4771) *
                C8396) *
               C19466 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8399 +
                      (C19466 * C220 - C214 * C99) * C8395 +
                      (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                         C8397 +
                     ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                      C10036 * C8401 + C10037 * C8396) *
                         C8398) *
                        C2031 +
                    (((C214 * C1059 - C19466 * C1169) * C8399 +
                      (C214 * C1068 - C19466 * C1175) * C8395 +
                      (C2150 - C2151) * C8401 + (C2152 - C2153) * C8396) *
                         C8397 +
                     ((C5360 - C5361) * C8399 + (C5362 - C5363) * C8395 +
                      (C10676 - C10677) * C8401 + (C10678 - C10679) * C8396) *
                         C8398) *
                        C2032) *
                       C1507 +
                   ((((C3511 - C3510) * C8399 + (C3513 - C3512) * C8395 +
                      C10038 * C8401 + C10039 * C8396) *
                         C8397 +
                     ((C3515 - C3514) * C8399 + (C3517 - C3516) * C8395 +
                      (C4387 - C4388) * C8401 + (C4389 - C4390) * C8396) *
                         C8398) *
                        C2031 +
                    (((C5361 - C5360) * C8399 + (C5363 - C5362) * C8395 +
                      (C10677 - C10676) * C8401 + (C10679 - C10678) * C8396) *
                         C8397 +
                     ((C5365 - C5364) * C8399 + (C5367 - C5366) * C8395 +
                      (C19466 * C4875 - C214 * C4769) * C8401 +
                      (C19466 * C4876 - C214 * C4771) * C8396) *
                         C8398) *
                        C2032) *
                       C1508) *
                  C19404) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C8397 +
            (C9092 - C9093 + C9094 - C9095) * C8454 +
            (C9096 - C9097 + C9098 - C9099) * C8398) *
               C19466 * C2031 +
           ((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
                C8453 +
            (C8399 * C1219 - C8395 * C1225 + C8401 * C1220 - C8396 * C1226) *
                C8397 +
            (C11383 - C11384 + C11385 - C11386) * C8454 +
            (C11387 - C11388 + C11389 - C11390) * C8398) *
               C19466 * C2032) *
              C1507 +
          (((C9093 - C9092 + C9095 - C9094) * C8453 +
            (C9097 - C9096 + C9099 - C9098) * C8397 +
            (C9100 - C9101 + C9102 - C9103) * C8454 +
            (C9104 - C9105 + C9106 - C9107) * C8398) *
               C19466 * C2031 +
           ((C11384 - C11383 + C11386 - C11385) * C8453 +
            (C11388 - C11387 + C11390 - C11389) * C8397 +
            (C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
                C8454 +
            (C8395 * C4001 - C8399 * C3998 + C8396 * C4928 - C8401 * C4927) *
                C8398) *
               C19466 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C8395 +
            (C8648 + C8649) * C8396) *
               C19466 * C2031 -
           ((C10824 + C10825) * C8396 +
            (C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783 +
             C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271) *
                C8395) *
               C19466 * C2032) *
              C1507 +
          (((C8453 * C2615 - C8621 * C2553 - C8453 * C2727 + C8397 * C2783 +
             C8454 * C3910 - C8622 * C3860 - C8454 * C3998 + C8398 * C4042) *
                C8395 +
            (C8453 * C2616 - C8621 * C2554 - C8453 * C2728 + C8397 * C2784 +
             C8454 * C4823 - C8622 * C4769 - C8454 * C4927 + C8398 * C4979) *
                C8396) *
               C19466 * C2032 -
           ((C10192 + C10193) * C8396 +
            (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
             C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
                C8395) *
               C19466 * C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8453 +
                      (C19466 * C390 - C214 * C277) * C8397 +
                      (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                         C8395 +
                     ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                      C10036 * C8454 + C10260 * C8398) *
                         C8396) *
                        C2031 +
                    (((C214 * C1059 - C19466 * C1169) * C8453 +
                      (C214 * C1219 - C19466 * C1313) * C8397 +
                      (C5360 - C5361) * C8454 + (C5530 - C5531) * C8398) *
                         C8395 +
                     ((C2150 - C2151) * C8453 + (C2326 - C2327) * C8397 +
                      (C10676 - C10677) * C8454 + (C10892 - C10893) * C8398) *
                         C8396) *
                        C2032) *
                       C1507 +
                   ((((C3511 - C3510) * C8453 + (C3664 - C3663) * C8397 +
                      (C3515 - C3514) * C8454 + (C3666 - C3665) * C8398) *
                         C8395 +
                     (C10038 * C8453 + C10261 * C8397 +
                      (C4387 - C4388) * C8454 + (C4553 - C4554) * C8398) *
                         C8396) *
                        C2031 +
                    (((C5361 - C5360) * C8453 + (C5531 - C5530) * C8397 +
                      (C5365 - C5364) * C8454 + (C5533 - C5532) * C8398) *
                         C8395 +
                     ((C10677 - C10676) * C8453 + (C10893 - C10892) * C8397 +
                      (C19466 * C4875 - C214 * C4769) * C8454 +
                      (C19466 * C5030 - C214 * C4927) * C8398) *
                         C8396) *
                        C2032) *
                       C1508) *
                  C19404) /
                 (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
             (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                 C19466) *
                C8397 +
            ((C9092 - C9093 + C9094 - C9095) * C214 +
             (C9258 - C9259 + C9260 - C9261) * C19466) *
                C8398) *
               C2031 +
           (((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
                 C214 +
             (C8399 * C1357 - C8395 * C1363 + C8401 * C1358 - C8396 * C1364) *
                 C19466) *
                C8397 +
            ((C11383 - C11384 + C11385 - C11386) * C214 +
             (C11589 - C11590 + C11591 - C11592) * C19466) *
                C8398) *
               C2032) *
              C1507 +
          ((((C9093 - C9092 + C9095 - C9094) * C214 +
             (C9259 - C9258 + C9261 - C9260) * C19466) *
                C8397 +
            ((C9100 - C9101 + C9102 - C9103) * C214 +
             (C9262 - C9263 + C9264 - C9265) * C19466) *
                C8398) *
               C2031 +
           (((C11384 - C11383 + C11386 - C11385) * C214 +
             (C11590 - C11589 + C11592 - C11591) * C19466) *
                C8397 +
            ((C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
                 C214 +
             (C8395 * C4127 - C8399 * C4124 + C8396 * C5082 - C8401 * C5081) *
                 C19466) *
                C8398) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
             (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                 C19466) *
                C8395 +
            ((C8456 - C8457 + C8458 - C8459) * C214 +
             (C8802 - C8803 + C8804 - C8805) * C19466) *
                C8396) *
               C2031 +
           (((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
                 C214 +
             (C8453 * C1357 - C8397 * C1407 + C8454 * C2889 - C8398 * C2945) *
                 C19466) *
                C8395 +
            ((C10602 - C10603 + C10604 - C10605) * C214 +
             (C11026 - C11027 + C11028 - C11029) * C19466) *
                C8396) *
               C2032) *
              C1507 +
          ((((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                 C214 +
             (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                 C19466) *
                C8395 +
            ((C9962 - C9963 + C9964 - C9965) * C214 +
             (C10398 - C10399 + C10400 - C10401) * C19466) *
                C8396) *
               C2031 +
           (((C8397 * C2615 - C8453 * C2553 + C8398 * C3910 - C8454 * C3860) *
                 C214 +
             (C8397 * C2945 - C8453 * C2889 + C8398 * C4168 - C8454 * C4124) *
                 C19466) *
                C8395 +
            ((C8397 * C2616 - C8453 * C2554 + C8398 * C4823 - C8454 * C4769) *
                 C214 +
             (C8397 * C2946 - C8453 * C2890 + C8398 * C5133 - C8454 * C5081) *
                 C19466) *
                C8396) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
             C3820 * C8398) *
                C8395 +
            (C8860 + C8861) * C8396) *
               C2031 -
           ((C11104 + C11100) * C8396 +
            (C5705 * C8398 +
             (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                 C8397) *
                C8395) *
               C2032) *
              C1507 +
          (((C5705 * C8397 + C5704 * C8398) * C8395 +
            (C11103 * C8397 +
             (C214 * C4875 - C544 * C4769 - C214 * C5081 + C19466 * C5184) *
                 C8398) *
                C8396) *
               C2032 -
           ((C10468 + C10469) * C8396 +
            (C3821 * C8398 + C3820 * C8397) * C8395) *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C19466 * C8397 +
           (C8938 + C8939) * C19466 * C8398) *
              C19430 * C612 -
          ((C8940 + C8941) * C19466 * C8398 +
           (C8939 + C8938) * C19466 * C8397) *
              C19430 * C613 +
          ((C8941 + C8940) * C19466 * C8397 +
           (C8399 * C3395 - C8400 * C3393 - C8399 * C3396 + C8395 * C3399 +
            C8401 * C4263 - C8402 * C4262 - C8401 * C4264 + C8396 * C4265) *
               C19466 * C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C19466 * C8397 +
           (C8399 * C626 - C8400 * C618 - C8399 * C627 + C8395 * C636 +
            C8401 * C624 - C8402 * C617 - C8401 * C625 + C8396 * C635) *
               C19466 * C8398) *
              C19430 * C19416 * C84 -
          ((C8401 * C622 - C8402 * C616 - C8401 * C623 + C8396 * C634 +
            C8399 * C624 - C8400 * C617 - C8399 * C625 + C8395 * C635) *
               C19466 * C8398 +
           (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
            C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
               C19466 * C8397) *
              C19430 * C19416 * C85 +
          ((C8399 * C102 - C8400 * C95 - C8399 * C103 + C8395 * C110 +
            C8401 * C104 - C8402 * C96 - C8401 * C105 + C8396 * C111) *
               C19466 * C8397 +
           (C8399 * C622 - C8400 * C616 - C8399 * C623 + C8395 * C634 +
            C8401 * C1512 - C8402 * C1511 - C8401 * C1513 + C8396 * C1514) *
               C19466 * C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C19466 * C8397 +
           (C8938 + C8939) * C19466 * C8398) *
              C1054 -
          ((C8401 * C2558 - C8402 * C2554 - C8401 * C2559 + C8396 * C2563 +
            C8399 * C2556 - C8400 * C2553 - C8399 * C2557 + C8395 * C2562) *
               C19466 * C8398 +
           (C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076 +
            C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077) *
               C19466 * C8397) *
              C1055 +
          ((C8399 * C1069 - C8400 * C1060 - C8399 * C1070 + C8395 * C1078 +
            C8401 * C1071 - C8402 * C1061 - C8401 * C1072 + C8396 * C1079) *
               C19466 * C8397 +
           (C8399 * C3865 - C8400 * C3861 - C8399 * C3866 + C8395 * C3870 +
            C8401 * C6916 - C8402 * C6915 - C8401 * C6917 + C8396 * C6918) *
               C19466 * C8398) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
           (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
           (C8456 - C8457 + C8458 - C8459) * C8401 +
           (C8460 - C8461 + C8462 - C8463) * C8396) *
              C19466 * C19430 * C612 +
          ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) * C8399 +
           (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) * C8395 +
           (C8453 * C617 - C8397 * C679 + C8454 * C620 - C8398 * C682) * C8401 +
           (C8453 * C625 - C8397 * C685 + C8454 * C631 - C8398 * C688) *
               C8396) *
              C19466 * C19430 * C613 +
          ((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
               C8399 +
           (C8397 * C687 - C8453 * C629 + C8398 * C3465 - C8454 * C3396) *
               C8395 +
           (C8397 * C682 - C8453 * C620 + C8398 * C4332 - C8454 * C4262) *
               C8401 +
           (C8397 * C688 - C8453 * C631 + C8398 * C4333 - C8454 * C4264) *
               C8396) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
           (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
           (C8456 - C8457 + C8458 - C8459) * C8401 +
           (C8460 - C8461 + C8462 - C8463) * C8396) *
              C19466 * C19430 * C19416 * C84 +
          ((C8457 - C8456 + C8459 - C8458) * C8399 +
           (C8461 - C8460 + C8463 - C8462) * C8395 +
           (C8464 - C8465 + C8466 - C8467) * C8401 +
           (C8468 - C8469 + C8470 - C8471) * C8396) *
              C19466 * C19430 * C19416 * C85 +
          ((C8465 - C8464 + C8467 - C8466) * C8399 +
           (C8469 - C8468 + C8471 - C8470) * C8395 +
           (C8397 * C155 - C8453 * C96 + C8398 * C1565 - C8454 * C1511) *
               C8401 +
           (C8397 * C160 - C8453 * C105 + C8398 * C1566 - C8454 * C1513) *
               C8396) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
           (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
           (C8456 - C8457 + C8458 - C8459) * C8401 +
           (C8460 - C8461 + C8462 - C8463) * C8396) *
              C19466 * C1054 +
          ((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
               C8399 +
           (C8453 * C1068 - C8397 * C1125 + C8454 * C2557 - C8398 * C2618) *
               C8395 +
           (C8453 * C1058 - C8397 * C1120 + C8454 * C2554 - C8398 * C2616) *
               C8401 +
           (C8453 * C1066 - C8397 * C1126 + C8454 * C2559 - C8398 * C2619) *
               C8396) *
              C19466 * C1055 +
          ((C8397 * C1122 - C8453 * C1060 + C8398 * C3911 - C8454 * C3861) *
               C8399 +
           (C8397 * C1128 - C8453 * C1070 + C8398 * C3914 - C8454 * C3866) *
               C8395 +
           (C8397 * C1123 - C8453 * C1061 + C8398 * C6969 - C8454 * C6915) *
               C8401 +
           (C8397 * C1129 - C8453 * C1072 + C8398 * C6970 - C8454 * C6917) *
               C8396) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8399 +
                     (C19466 * C220 - C214 * C99) * C8395 +
                     (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                        C8397 +
                    ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                     (C1629 - C1628) * C8401 + (C1631 - C1630) * C8396) *
                        C8398) *
                       C19430 * C612 +
                   (((C3511 - C3510) * C8399 + (C3513 - C3512) * C8395 +
                     (C1628 - C1629) * C8401 + (C1630 - C1631) * C8396) *
                        C8397 +
                    ((C3515 - C3514) * C8399 + (C3517 - C3516) * C8395 +
                     (C4387 - C4388) * C8401 + (C4389 - C4390) * C8396) *
                        C8398) *
                       C19430 * C613 +
                   ((C3522 * C8399 + C3523 * C8395 + (C4388 - C4387) * C8401 +
                     (C4390 - C4389) * C8396) *
                        C8397 +
                    ((C3519 - C3518) * C8399 + (C3521 - C3520) * C8395 +
                     (C19466 * C4384 - C214 * C4262) * C8401 +
                     (C19466 * C4385 - C214 * C4264) * C8396) *
                        C8398) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8399 +
                     (C19466 * C220 - C214 * C99) * C8395 +
                     (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                        C8397 +
                    ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                     (C1629 - C1628) * C8401 + (C1631 - C1630) * C8396) *
                        C8398) *
                       C19430 * C19416 * C84 +
                   (((C227 - C226) * C8399 + (C229 - C228) * C8395 +
                     (C231 - C230) * C8401 + (C233 - C232) * C8396) *
                        C8397 +
                    ((C1628 - C1629) * C8399 + (C1630 - C1631) * C8395 +
                     (C1632 - C1633) * C8401 + (C1634 - C1635) * C8396) *
                        C8398) *
                       C19430 * C19416 * C85 +
                   ((C238 * C8399 + C239 * C8395 + (C235 - C234) * C8401 +
                     (C237 - C236) * C8396) *
                        C8397 +
                    ((C1633 - C1632) * C8399 + (C1635 - C1634) * C8395 +
                     (C19466 * C1625 - C214 * C1511) * C8401 +
                     (C19466 * C1626 - C214 * C1513) * C8396) *
                        C8398) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8399 +
                     (C19466 * C220 - C214 * C99) * C8395 +
                     (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                        C8397 +
                    ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                     (C1629 - C1628) * C8401 + (C1631 - C1630) * C8396) *
                        C8398) *
                       C1054 +
                   (((C214 * C1059 - C19466 * C1169) * C8399 +
                     (C214 * C1068 - C19466 * C1175) * C8395 +
                     (C2150 - C2151) * C8401 + (C2152 - C2153) * C8396) *
                        C8397 +
                    ((C5360 - C5361) * C8399 + (C5362 - C5363) * C8395 +
                     (C214 * C2554 - C19466 * C2672) * C8401 +
                     (C214 * C2559 - C19466 * C2675) * C8396) *
                        C8398) *
                       C1055 +
                   (((C19466 * C1172 - C214 * C1060) * C8399 +
                     (C19466 * C1178 - C214 * C1070) * C8395 +
                     (C19466 * C1173 - C214 * C1061) * C8401 +
                     (C19466 * C1179 - C214 * C1072) * C8396) *
                        C8397 +
                    ((C19466 * C3955 - C214 * C3861) * C8399 +
                     (C19466 * C3958 - C214 * C3866) * C8395 +
                     (C19466 * C7021 - C214 * C6915) * C8401 +
                     (C19466 * C7022 - C214 * C6917) * C8396) *
                        C8398) *
                       C1056) *
                  C19416 * C19404) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
           (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) * C8397 +
           (C9092 - C9093 + C9094 - C9095) * C8454 +
           (C9096 - C9097 + C9098 - C9099) * C8398) *
              C19466 * C19430 * C612 +
          ((C9093 - C9092 + C9095 - C9094) * C8453 +
           (C9097 - C9096 + C9099 - C9098) * C8397 +
           (C9100 - C9101 + C9102 - C9103) * C8454 +
           (C9104 - C9105 + C9106 - C9107) * C8398) *
              C19466 * C19430 * C613 +
          ((C9101 - C9100 + C9103 - C9102) * C8453 +
           (C9105 - C9104 + C9107 - C9106) * C8397 +
           (C8395 * C3395 - C8399 * C3393 + C8396 * C4263 - C8401 * C4262) *
               C8454 +
           (C8395 * C3566 - C8399 * C3564 + C8396 * C4441 - C8401 * C4440) *
               C8398) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
           (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) * C8397 +
           (C8395 * C626 - C8399 * C618 + C8396 * C624 - C8401 * C617) * C8454 +
           (C8395 * C784 - C8399 * C778 + C8396 * C785 - C8401 * C779) *
               C8398) *
              C19466 * C19430 * C19416 * C84 +
          ((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C8453 +
           (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) * C8397 +
           (C8399 * C617 - C8395 * C624 + C8401 * C616 - C8396 * C622) * C8454 +
           (C8399 * C779 - C8395 * C785 + C8401 * C780 - C8396 * C786) *
               C8398) *
              C19466 * C19430 * C19416 * C85 +
          ((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C8453 +
           (C8395 * C284 - C8399 * C279 + C8396 * C285 - C8401 * C280) * C8397 +
           (C8395 * C622 - C8399 * C616 + C8396 * C1512 - C8401 * C1511) *
               C8454 +
           (C8395 * C786 - C8399 * C780 + C8396 * C1686 - C8401 * C1685) *
               C8398) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
           (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) * C8397 +
           (C9092 - C9093 + C9094 - C9095) * C8454 +
           (C9096 - C9097 + C9098 - C9099) * C8398) *
              C19466 * C1054 +
          ((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
               C8453 +
           (C8399 * C1219 - C8395 * C1225 + C8401 * C1220 - C8396 * C1226) *
               C8397 +
           (C8399 * C2553 - C8395 * C2556 + C8401 * C2554 - C8396 * C2558) *
               C8454 +
           (C8399 * C2727 - C8395 * C2730 + C8401 * C2728 - C8396 * C2731) *
               C8398) *
              C19466 * C1055 +
          ((C8395 * C1069 - C8399 * C1060 + C8396 * C1071 - C8401 * C1061) *
               C8453 +
           (C8395 * C1228 - C8399 * C1222 + C8396 * C1229 - C8401 * C1223) *
               C8397 +
           (C8395 * C3865 - C8399 * C3861 + C8396 * C6916 - C8401 * C6915) *
               C8454 +
           (C8395 * C4002 - C8399 * C3999 + C8396 * C7074 - C8401 * C7073) *
               C8398) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C8395 +
           (C8648 + C8649) * C8396) *
              C19466 * C19430 * C612 -
          ((C8454 * C682 - C8622 * C620 - C8454 * C782 + C8398 * C832 +
            C8453 * C679 - C8621 * C617 - C8453 * C779 + C8397 * C829) *
               C8396 +
           (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
            C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
               C8395) *
              C19466 * C19430 * C613 +
          ((C8453 * C681 - C8621 * C619 - C8453 * C781 + C8397 * C831 +
            C8454 * C3463 - C8622 * C3393 - C8454 * C3564 + C8398 * C3620) *
               C8395 +
           (C8453 * C682 - C8621 * C620 - C8453 * C782 + C8397 * C832 +
            C8454 * C4332 - C8622 * C4262 - C8454 * C4440 + C8398 * C4500) *
               C8396) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C8395 +
           (C8648 + C8649) * C8396) *
              C19466 * C19430 * C19416 * C84 -
          ((C8650 + C8651) * C8396 + (C8649 + C8648) * C8395) * C19466 *
              C19430 * C19416 * C85 +
          ((C8651 + C8650) * C8395 +
           (C8453 * C155 - C8621 * C96 - C8453 * C280 + C8397 * C329 +
            C8454 * C1565 - C8622 * C1511 - C8454 * C1685 + C8398 * C1737) *
               C8396) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C8395 +
           (C8648 + C8649) * C8396) *
              C19466 * C1054 -
          ((C8454 * C2616 - C8622 * C2554 - C8454 * C2728 + C8398 * C2784 +
            C8453 * C1120 - C8621 * C1058 - C8453 * C1220 + C8397 * C1270) *
               C8396 +
           (C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783 +
            C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271) *
               C8395) *
              C19466 * C1055 +
          ((C8453 * C1122 - C8621 * C1060 - C8453 * C1222 + C8397 * C1272 +
            C8454 * C3911 - C8622 * C3861 - C8454 * C3999 + C8398 * C4043) *
               C8395 +
           (C8453 * C1123 - C8621 * C1061 - C8453 * C1223 + C8397 * C1273 +
            C8454 * C6969 - C8622 * C6915 - C8454 * C7073 + C8398 * C7125) *
               C8396) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8453 +
                     (C19466 * C390 - C214 * C277) * C8397 +
                     (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                        C8395 +
                    ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                     (C1629 - C1628) * C8454 + (C1805 - C1804) * C8398) *
                        C8396) *
                       C19430 * C612 +
                   (((C3511 - C3510) * C8453 + (C3664 - C3663) * C8397 +
                     (C3515 - C3514) * C8454 + (C3666 - C3665) * C8398) *
                        C8395 +
                    ((C1628 - C1629) * C8453 + (C1804 - C1805) * C8397 +
                     (C4387 - C4388) * C8454 + (C4553 - C4554) * C8398) *
                        C8396) *
                       C19430 * C613 +
                   ((C3522 * C8453 + C3669 * C8397 + (C3519 - C3518) * C8454 +
                     (C3668 - C3667) * C8398) *
                        C8395 +
                    ((C4388 - C4387) * C8453 + (C4554 - C4553) * C8397 +
                     (C19466 * C4384 - C214 * C4262) * C8454 +
                     (C19466 * C4551 - C214 * C4440) * C8398) *
                        C8396) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8453 +
                     (C19466 * C390 - C214 * C277) * C8397 +
                     (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                        C8395 +
                    ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                     (C1629 - C1628) * C8454 + (C1805 - C1804) * C8398) *
                        C8396) *
                       C19430 * C19416 * C84 +
                   (((C227 - C226) * C8453 + (C397 - C396) * C8397 +
                     (C1628 - C1629) * C8454 + (C1804 - C1805) * C8398) *
                        C8395 +
                    ((C231 - C230) * C8453 + (C400 - C399) * C8397 +
                     (C1632 - C1633) * C8454 + (C1806 - C1807) * C8398) *
                        C8396) *
                       C19430 * C19416 * C85 +
                   ((C238 * C8453 + C403 * C8397 + (C1633 - C1632) * C8454 +
                     (C1807 - C1806) * C8398) *
                        C8395 +
                    ((C235 - C234) * C8453 + (C402 - C401) * C8397 +
                     (C19466 * C1625 - C214 * C1511) * C8454 +
                     (C19466 * C1802 - C214 * C1685) * C8398) *
                        C8396) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8453 +
                     (C19466 * C390 - C214 * C277) * C8397 +
                     (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                        C8395 +
                    ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                     (C1629 - C1628) * C8454 + (C1805 - C1804) * C8398) *
                        C8396) *
                       C1054 +
                   (((C214 * C1059 - C19466 * C1169) * C8453 +
                     (C214 * C1219 - C19466 * C1313) * C8397 +
                     (C5360 - C5361) * C8454 + (C5530 - C5531) * C8398) *
                        C8395 +
                    ((C2150 - C2151) * C8453 + (C2326 - C2327) * C8397 +
                     (C214 * C2554 - C19466 * C2672) * C8454 +
                     (C214 * C2728 - C19466 * C2837) * C8398) *
                        C8396) *
                       C1055 +
                   (((C19466 * C1172 - C214 * C1060) * C8453 +
                     (C19466 * C1316 - C214 * C1222) * C8397 +
                     (C19466 * C3955 - C214 * C3861) * C8454 +
                     (C19466 * C4084 - C214 * C3999) * C8398) *
                        C8395 +
                    ((C19466 * C1173 - C214 * C1061) * C8453 +
                     (C19466 * C1317 - C214 * C1223) * C8397 +
                     (C19466 * C7021 - C214 * C6915) * C8454 +
                     (C19466 * C7176 - C214 * C7073) * C8398) *
                        C8396) *
                       C1056) *
                  C19416 * C19404) /
                     (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C19466) *
               C8397 +
           ((C9092 - C9093 + C9094 - C9095) * C214 +
            (C9258 - C9259 + C9260 - C9261) * C19466) *
               C8398) *
              C19430 * C612 +
          (((C9093 - C9092 + C9095 - C9094) * C214 +
            (C9259 - C9258 + C9261 - C9260) * C19466) *
               C8397 +
           ((C9100 - C9101 + C9102 - C9103) * C214 +
            (C9262 - C9263 + C9264 - C9265) * C19466) *
               C8398) *
              C19430 * C613 +
          (((C9101 - C9100 + C9103 - C9102) * C214 +
            (C9263 - C9262 + C9265 - C9264) * C19466) *
               C8397 +
           ((C8395 * C3395 - C8399 * C3393 + C8396 * C4263 - C8401 * C4262) *
                C214 +
            (C8395 * C3709 - C8399 * C3707 + C8396 * C4605 - C8401 * C4604) *
                C19466) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C19466) *
               C8397 +
           ((C8395 * C626 - C8399 * C618 + C8396 * C624 - C8401 * C617) * C214 +
            (C8395 * C922 - C8399 * C916 + C8396 * C923 - C8401 * C917) *
                C19466) *
               C8398) *
              C19430 * C19416 * C84 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C214 +
            (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                C19466) *
               C8397 +
           ((C8399 * C617 - C8395 * C624 + C8401 * C616 - C8396 * C622) * C214 +
            (C8399 * C917 - C8395 * C923 + C8401 * C918 - C8396 * C924) *
                C19466) *
               C8398) *
              C19430 * C19416 * C85 +
          (((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C214 +
            (C8395 * C450 - C8399 * C445 + C8396 * C451 - C8401 * C446) *
                C19466) *
               C8397 +
           ((C8395 * C622 - C8399 * C616 + C8396 * C1512 - C8401 * C1511) *
                C214 +
            (C8395 * C924 - C8399 * C918 + C8396 * C1858 - C8401 * C1857) *
                C19466) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C19466) *
               C8397 +
           ((C9092 - C9093 + C9094 - C9095) * C214 +
            (C9258 - C9259 + C9260 - C9261) * C19466) *
               C8398) *
              C1054 +
          (((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
                C214 +
            (C8399 * C1357 - C8395 * C1363 + C8401 * C1358 - C8396 * C1364) *
                C19466) *
               C8397 +
           ((C8399 * C2553 - C8395 * C2556 + C8401 * C2554 - C8396 * C2558) *
                C214 +
            (C8399 * C2889 - C8395 * C2892 + C8401 * C2890 - C8396 * C2893) *
                C19466) *
               C8398) *
              C1055 +
          (((C8395 * C1069 - C8399 * C1060 + C8396 * C1071 - C8401 * C1061) *
                C214 +
            (C8395 * C1366 - C8399 * C1360 + C8396 * C1367 - C8401 * C1361) *
                C19466) *
               C8397 +
           ((C8395 * C3865 - C8399 * C3861 + C8396 * C6916 - C8401 * C6915) *
                C214 +
            (C8395 * C4128 - C8399 * C4125 + C8396 * C7228 - C8401 * C7227) *
                C19466) *
               C8398) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C19466) *
               C8395 +
           ((C8456 - C8457 + C8458 - C8459) * C214 +
            (C8802 - C8803 + C8804 - C8805) * C19466) *
               C8396) *
              C19430 * C612 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) * C214 +
            (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                C19466) *
               C8395 +
           ((C8453 * C617 - C8397 * C679 + C8454 * C620 - C8398 * C682) * C214 +
            (C8453 * C917 - C8397 * C967 + C8454 * C920 - C8398 * C970) *
                C19466) *
               C8396) *
              C19430 * C613 +
          (((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
                C214 +
            (C8397 * C969 - C8453 * C919 + C8398 * C3759 - C8454 * C3707) *
                C19466) *
               C8395 +
           ((C8397 * C682 - C8453 * C620 + C8398 * C4332 - C8454 * C4262) *
                C214 +
            (C8397 * C970 - C8453 * C920 + C8398 * C4660 - C8454 * C4604) *
                C19466) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C19466) *
               C8395 +
           ((C8456 - C8457 + C8458 - C8459) * C214 +
            (C8802 - C8803 + C8804 - C8805) * C19466) *
               C8396) *
              C19430 * C19416 * C84 +
          (((C8457 - C8456 + C8459 - C8458) * C214 +
            (C8803 - C8802 + C8805 - C8804) * C19466) *
               C8395 +
           ((C8464 - C8465 + C8466 - C8467) * C214 +
            (C8806 - C8807 + C8808 - C8809) * C19466) *
               C8396) *
              C19430 * C19416 * C85 +
          (((C8465 - C8464 + C8467 - C8466) * C214 +
            (C8807 - C8806 + C8809 - C8808) * C19466) *
               C8395 +
           ((C8397 * C155 - C8453 * C96 + C8398 * C1565 - C8454 * C1511) *
                C214 +
            (C8397 * C494 - C8453 * C446 + C8398 * C1909 - C8454 * C1857) *
                C19466) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C19466) *
               C8395 +
           ((C8456 - C8457 + C8458 - C8459) * C214 +
            (C8802 - C8803 + C8804 - C8805) * C19466) *
               C8396) *
              C1054 +
          (((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
                C214 +
            (C8453 * C1357 - C8397 * C1407 + C8454 * C2889 - C8398 * C2945) *
                C19466) *
               C8395 +
           ((C8453 * C1058 - C8397 * C1120 + C8454 * C2554 - C8398 * C2616) *
                C214 +
            (C8453 * C1358 - C8397 * C1408 + C8454 * C2890 - C8398 * C2946) *
                C19466) *
               C8396) *
              C1055 +
          (((C8397 * C1122 - C8453 * C1060 + C8398 * C3911 - C8454 * C3861) *
                C214 +
            (C8397 * C1410 - C8453 * C1360 + C8398 * C4169 - C8454 * C4125) *
                C19466) *
               C8395 +
           ((C8397 * C1123 - C8453 * C1061 + C8398 * C6969 - C8454 * C6915) *
                C214 +
            (C8397 * C1411 - C8453 * C1361 + C8398 * C7279 - C8454 * C7227) *
                C19466) *
               C8396) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
            C3820 * C8398) *
               C8395 +
           (C8860 + C8861) * C8396) *
              C19430 * C612 -
          ((C4719 * C8398 + C1979 * C8397) * C8396 +
           (C3821 * C8398 + C3820 * C8397) * C8395) *
              C19430 * C613 +
          ((C3821 * C8397 + C3822 * C8398) * C8395 +
           (C4719 * C8397 +
            (C214 * C4384 - C544 * C4262 - C214 * C4604 + C19466 * C4711) *
                C8398) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
            C3820 * C8398) *
               C8395 +
           (C8860 + C8861) * C8396) *
              C19430 * C19416 * C84 -
          ((C8862 + C8863) * C8396 + (C8861 + C8860) * C8395) * C19430 *
              C19416 * C85 +
          ((C8863 + C8862) * C8395 +
           (C571 * C8397 +
            (C214 * C1625 - C544 * C1511 - C214 * C1857 + C19466 * C1964) *
                C8398) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
            C3820 * C8398) *
               C8395 +
           (C8860 + C8861) * C8396) *
              C1054 -
          (((C214 * C2672 - C544 * C2554 - C214 * C2890 + C19466 * C2999) *
                C8398 +
            C2501 * C8397) *
               C8396 +
           (C5705 * C8398 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C8397) *
               C8395) *
              C1055 +
          (((C214 * C1172 - C544 * C1060 - C214 * C1360 + C19466 * C1454) *
                C8397 +
            (C214 * C3955 - C544 * C3861 - C214 * C4125 + C19466 * C4210) *
                C8398) *
               C8395 +
           ((C214 * C1173 - C544 * C1061 - C214 * C1361 + C19466 * C1455) *
                C8397 +
            (C214 * C7021 - C544 * C6915 - C214 * C7227 + C19466 * C7330) *
                C8398) *
               C8396) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C19466 * C8397 +
            (C8938 + C8939) * C19466 * C8398) *
               C2031 -
           ((C8401 * C2558 - C8402 * C2554 - C8401 * C2559 + C8396 * C2563 +
             C8399 * C2556 - C8400 * C2553 - C8399 * C2557 + C8395 * C2562) *
                C19466 * C8398 +
            (C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076 +
             C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077) *
                C19466 * C8397) *
               C2032) *
              C19416 * C1509 +
          (((C8399 * C1065 - C8400 * C1058 - C8399 * C1066 + C8395 * C1076 +
             C8401 * C1063 - C8402 * C1057 - C8401 * C1064 + C8396 * C1075) *
                C19466 * C8397 +
            (C8399 * C2558 - C8400 * C2554 - C8399 * C2559 + C8395 * C2563 +
             C8401 * C2560 - C8402 * C2555 - C8401 * C2561 + C8396 * C2564) *
                C19466 * C8398) *
               C2032 -
           ((C9895 + C9894) * C19466 * C8398 +
            (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
             C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
                C19466 * C8397) *
               C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
            (C8456 - C8457 + C8458 - C8459) * C8401 +
            (C8460 - C8461 + C8462 - C8463) * C8396) *
               C19466 * C2031 +
           ((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
                C8399 +
            (C8453 * C1068 - C8397 * C1125 + C8454 * C2557 - C8398 * C2618) *
                C8395 +
            (C10602 - C10603 + C10604 - C10605) * C8401 +
            (C10606 - C10607 + C10608 - C10609) * C8396) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C8457 - C8456 + C8459 - C8458) * C8399 +
            (C8461 - C8460 + C8463 - C8462) * C8395 +
            (C8464 - C8465 + C8466 - C8467) * C8401 +
            (C8468 - C8469 + C8470 - C8471) * C8396) *
               C19466 * C2031 +
           ((C10603 - C10602 + C10605 - C10604) * C8399 +
            (C10607 - C10606 + C10609 - C10608) * C8395 +
            (C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
                C8401 +
            (C8397 * C1127 - C8453 * C1064 + C8398 * C2620 - C8454 * C2561) *
                C8396) *
               C19466 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8399 +
                      (C19466 * C220 - C214 * C99) * C8395 +
                      (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                         C8397 +
                     ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                      C10036 * C8401 + C10037 * C8396) *
                         C8398) *
                        C2031 +
                    (((C214 * C1059 - C19466 * C1169) * C8399 +
                      (C214 * C1068 - C19466 * C1175) * C8395 +
                      (C2150 - C2151) * C8401 + (C2152 - C2153) * C8396) *
                         C8397 +
                     ((C5360 - C5361) * C8399 + (C5362 - C5363) * C8395 +
                      (C10676 - C10677) * C8401 + (C10678 - C10679) * C8396) *
                         C8398) *
                        C2032) *
                       C19416 * C1509 +
                   ((((C227 - C226) * C8399 + (C229 - C228) * C8395 +
                      (C231 - C230) * C8401 + (C233 - C232) * C8396) *
                         C8397 +
                     (C10038 * C8399 + C10039 * C8395 +
                      (C1632 - C1633) * C8401 + (C1634 - C1635) * C8396) *
                         C8398) *
                        C2031 +
                    (((C2151 - C2150) * C8399 + (C2153 - C2152) * C8395 +
                      (C2155 - C2154) * C8401 + (C2157 - C2156) * C8396) *
                         C8397 +
                     ((C10677 - C10676) * C8399 + (C10679 - C10678) * C8395 +
                      (C19466 * C2673 - C214 * C2555) * C8401 +
                      (C19466 * C2676 - C214 * C2561) * C8396) *
                         C8398) *
                        C2032) *
                       C19416 * C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C8397 +
            (C9092 - C9093 + C9094 - C9095) * C8454 +
            (C9096 - C9097 + C9098 - C9099) * C8398) *
               C19466 * C2031 +
           ((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
                C8453 +
            (C8399 * C1219 - C8395 * C1225 + C8401 * C1220 - C8396 * C1226) *
                C8397 +
            (C8399 * C2553 - C8395 * C2556 + C8401 * C2554 - C8396 * C2558) *
                C8454 +
            (C8399 * C2727 - C8395 * C2730 + C8401 * C2728 - C8396 * C2731) *
                C8398) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C8453 +
            (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                C8397 +
            (C10106 - C10107 + C10108 - C10109) * C8454 +
            (C10110 - C10111 + C10112 - C10113) * C8398) *
               C19466 * C2031 +
           ((C8395 * C1065 - C8399 * C1058 + C8396 * C1063 - C8401 * C1057) *
                C8453 +
            (C8395 * C1226 - C8399 * C1220 + C8396 * C1227 - C8401 * C1221) *
                C8397 +
            (C8395 * C2558 - C8399 * C2554 + C8396 * C2560 - C8401 * C2555) *
                C8454 +
            (C8395 * C2731 - C8399 * C2728 + C8396 * C2732 - C8401 * C2729) *
                C8398) *
               C19466 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C8395 +
            (C8648 + C8649) * C8396) *
               C19466 * C2031 -
           ((C10824 + C10825) * C8396 +
            (C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783 +
             C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271) *
                C8395) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C10825 + C10824) * C8395 +
            (C8453 * C1121 - C8621 * C1057 - C8453 * C1221 + C8397 * C1269 +
             C8454 * C2617 - C8622 * C2555 - C8454 * C2729 + C8398 * C2785) *
                C8396) *
               C19466 * C2032 -
           ((C8650 + C8651) * C8396 + (C8649 + C8648) * C8395) * C19466 *
               C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19466 * C215 - C214 * C93) * C8453 +
                      (C19466 * C390 - C214 * C277) * C8397 +
                      (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                         C8395 +
                     ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                      C10036 * C8454 + C10260 * C8398) *
                         C8396) *
                        C2031 +
                    (((C214 * C1059 - C19466 * C1169) * C8453 +
                      (C214 * C1219 - C19466 * C1313) * C8397 +
                      (C5360 - C5361) * C8454 + (C5530 - C5531) * C8398) *
                         C8395 +
                     ((C2150 - C2151) * C8453 + (C2326 - C2327) * C8397 +
                      (C10676 - C10677) * C8454 + (C10892 - C10893) * C8398) *
                         C8396) *
                        C2032) *
                       C19416 * C1509 +
                   ((((C227 - C226) * C8453 + (C397 - C396) * C8397 +
                      C10038 * C8454 + C10261 * C8398) *
                         C8395 +
                     ((C231 - C230) * C8453 + (C400 - C399) * C8397 +
                      (C1632 - C1633) * C8454 + (C1806 - C1807) * C8398) *
                         C8396) *
                        C2031 +
                    (((C2151 - C2150) * C8453 + (C2327 - C2326) * C8397 +
                      (C10677 - C10676) * C8454 + (C10893 - C10892) * C8398) *
                         C8395 +
                     ((C2155 - C2154) * C8453 + (C2329 - C2328) * C8397 +
                      (C19466 * C2673 - C214 * C2555) * C8454 +
                      (C19466 * C2838 - C214 * C2729) * C8398) *
                         C8396) *
                        C2032) *
                       C19416 * C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
             (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                 C19466) *
                C8397 +
            ((C9092 - C9093 + C9094 - C9095) * C214 +
             (C9258 - C9259 + C9260 - C9261) * C19466) *
                C8398) *
               C2031 +
           (((C8399 * C1059 - C8395 * C1067 + C8401 * C1058 - C8396 * C1065) *
                 C214 +
             (C8399 * C1357 - C8395 * C1363 + C8401 * C1358 - C8396 * C1364) *
                 C19466) *
                C8397 +
            ((C8399 * C2553 - C8395 * C2556 + C8401 * C2554 - C8396 * C2558) *
                 C214 +
             (C8399 * C2889 - C8395 * C2892 + C8401 * C2890 - C8396 * C2893) *
                 C19466) *
                C8398) *
               C2032) *
              C19416 * C1509 +
          ((((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C214 +
             (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                 C19466) *
                C8397 +
            ((C10106 - C10107 + C10108 - C10109) * C214 +
             (C10328 - C10329 + C10330 - C10331) * C19466) *
                C8398) *
               C2031 +
           (((C8395 * C1065 - C8399 * C1058 + C8396 * C1063 - C8401 * C1057) *
                 C214 +
             (C8395 * C1364 - C8399 * C1358 + C8396 * C1365 - C8401 * C1359) *
                 C19466) *
                C8397 +
            ((C8395 * C2558 - C8399 * C2554 + C8396 * C2560 - C8401 * C2555) *
                 C214 +
             (C8395 * C2893 - C8399 * C2890 + C8396 * C2894 - C8401 * C2891) *
                 C19466) *
                C8398) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
             (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                 C19466) *
                C8395 +
            ((C8456 - C8457 + C8458 - C8459) * C214 +
             (C8802 - C8803 + C8804 - C8805) * C19466) *
                C8396) *
               C2031 +
           (((C8453 * C1059 - C8397 * C1119 + C8454 * C2553 - C8398 * C2615) *
                 C214 +
             (C8453 * C1357 - C8397 * C1407 + C8454 * C2889 - C8398 * C2945) *
                 C19466) *
                C8395 +
            ((C10602 - C10603 + C10604 - C10605) * C214 +
             (C11026 - C11027 + C11028 - C11029) * C19466) *
                C8396) *
               C2032) *
              C19416 * C1509 +
          ((((C8457 - C8456 + C8459 - C8458) * C214 +
             (C8803 - C8802 + C8805 - C8804) * C19466) *
                C8395 +
            ((C8464 - C8465 + C8466 - C8467) * C214 +
             (C8806 - C8807 + C8808 - C8809) * C19466) *
                C8396) *
               C2031 +
           (((C10603 - C10602 + C10605 - C10604) * C214 +
             (C11027 - C11026 + C11029 - C11028) * C19466) *
                C8395 +
            ((C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
                 C214 +
             (C8397 * C1409 - C8453 * C1359 + C8398 * C2947 - C8454 * C2891) *
                 C19466) *
                C8396) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
             C3820 * C8398) *
                C8395 +
            (C8860 + C8861) * C8396) *
               C2031 -
           ((C11104 + C11100) * C8396 +
            (C5705 * C8398 +
             (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                 C8397) *
                C8395) *
               C2032) *
              C19416 * C1509 +
          (((C11100 + C11104) * C8395 +
            (C2500 * C8397 +
             (C214 * C2673 - C544 * C2555 - C214 * C2891 + C19466 * C3000) *
                 C8398) *
                C8396) *
               C2032 -
           ((C8862 + C8863) * C8396 + (C8861 + C8860) * C8395) * C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C19466 * C8397 +
           (C8399 * C626 - C8400 * C618 - C8399 * C627 + C8395 * C636 +
            C8401 * C624 - C8402 * C617 - C8401 * C625 + C8396 * C635) *
               C19466 * C8398) *
              C19430 * C19416 * C84 -
          ((C8401 * C622 - C8402 * C616 - C8401 * C623 + C8396 * C634 +
            C8399 * C624 - C8400 * C617 - C8399 * C625 + C8395 * C635) *
               C19466 * C8398 +
           (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
            C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
               C19466 * C8397) *
              C19430 * C19416 * C85 +
          ((C8399 * C102 - C8400 * C95 - C8399 * C103 + C8395 * C110 +
            C8401 * C104 - C8402 * C96 - C8401 * C105 + C8396 * C111) *
               C19466 * C8397 +
           (C8399 * C622 - C8400 * C616 - C8399 * C623 + C8395 * C634 +
            C8401 * C1512 - C8402 * C1511 - C8401 * C1513 + C8396 * C1514) *
               C19466 * C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C19466 * C8397 +
           (C8938 + C8939) * C19466 * C8398) *
              C19430 * C612 -
          ((C8940 + C8941) * C19466 * C8398 +
           (C8939 + C8938) * C19466 * C8397) *
              C19430 * C613 +
          ((C8941 + C8940) * C19466 * C8397 +
           (C8399 * C3395 - C8400 * C3393 - C8399 * C3396 + C8395 * C3399 +
            C8401 * C4263 - C8402 * C4262 - C8401 * C4264 + C8396 * C4265) *
               C19466 * C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
           (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
           (C8456 - C8457 + C8458 - C8459) * C8401 +
           (C8460 - C8461 + C8462 - C8463) * C8396) *
              C19466 * C19430 * C19416 * C84 +
          ((C8457 - C8456 + C8459 - C8458) * C8399 +
           (C8461 - C8460 + C8463 - C8462) * C8395 +
           (C8464 - C8465 + C8466 - C8467) * C8401 +
           (C8468 - C8469 + C8470 - C8471) * C8396) *
              C19466 * C19430 * C19416 * C85 +
          ((C8465 - C8464 + C8467 - C8466) * C8399 +
           (C8469 - C8468 + C8471 - C8470) * C8395 +
           (C8397 * C155 - C8453 * C96 + C8398 * C1565 - C8454 * C1511) *
               C8401 +
           (C8397 * C160 - C8453 * C105 + C8398 * C1566 - C8454 * C1513) *
               C8396) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C8399 +
           (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) * C8395 +
           (C8456 - C8457 + C8458 - C8459) * C8401 +
           (C8460 - C8461 + C8462 - C8463) * C8396) *
              C19466 * C19430 * C612 +
          ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) * C8399 +
           (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) * C8395 +
           (C8453 * C617 - C8397 * C679 + C8454 * C620 - C8398 * C682) * C8401 +
           (C8453 * C625 - C8397 * C685 + C8454 * C631 - C8398 * C688) *
               C8396) *
              C19466 * C19430 * C613 +
          ((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
               C8399 +
           (C8397 * C687 - C8453 * C629 + C8398 * C3465 - C8454 * C3396) *
               C8395 +
           (C8397 * C682 - C8453 * C620 + C8398 * C4332 - C8454 * C4262) *
               C8401 +
           (C8397 * C688 - C8453 * C631 + C8398 * C4333 - C8454 * C4264) *
               C8396) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8399 +
                     (C19466 * C220 - C214 * C99) * C8395 +
                     (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                        C8397 +
                    ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                     (C1629 - C1628) * C8401 + (C1631 - C1630) * C8396) *
                        C8398) *
                       C19430 * C19416 * C84 +
                   (((C227 - C226) * C8399 + (C229 - C228) * C8395 +
                     (C231 - C230) * C8401 + (C233 - C232) * C8396) *
                        C8397 +
                    ((C1628 - C1629) * C8399 + (C1630 - C1631) * C8395 +
                     (C1632 - C1633) * C8401 + (C1634 - C1635) * C8396) *
                        C8398) *
                       C19430 * C19416 * C85 +
                   ((C238 * C8399 + C239 * C8395 + (C235 - C234) * C8401 +
                     (C237 - C236) * C8396) *
                        C8397 +
                    ((C1633 - C1632) * C8399 + (C1635 - C1634) * C8395 +
                     (C19466 * C1625 - C214 * C1511) * C8401 +
                     (C19466 * C1626 - C214 * C1513) * C8396) *
                        C8398) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8399 +
                     (C19466 * C220 - C214 * C99) * C8395 +
                     (C226 - C227) * C8401 + (C228 - C229) * C8396) *
                        C8397 +
                    ((C3510 - C3511) * C8399 + (C3512 - C3513) * C8395 +
                     (C1629 - C1628) * C8401 + (C1631 - C1630) * C8396) *
                        C8398) *
                       C19430 * C612 +
                   (((C3511 - C3510) * C8399 + (C3513 - C3512) * C8395 +
                     (C1628 - C1629) * C8401 + (C1630 - C1631) * C8396) *
                        C8397 +
                    ((C3515 - C3514) * C8399 + (C3517 - C3516) * C8395 +
                     (C4387 - C4388) * C8401 + (C4389 - C4390) * C8396) *
                        C8398) *
                       C19430 * C613 +
                   ((C3522 * C8399 + C3523 * C8395 + (C4388 - C4387) * C8401 +
                     (C4390 - C4389) * C8396) *
                        C8397 +
                    ((C3519 - C3518) * C8399 + (C3521 - C3520) * C8395 +
                     (C19466 * C4384 - C214 * C4262) * C8401 +
                     (C19466 * C4385 - C214 * C4264) * C8396) *
                        C8398) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
           (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) * C8397 +
           (C8395 * C626 - C8399 * C618 + C8396 * C624 - C8401 * C617) * C8454 +
           (C8395 * C784 - C8399 * C778 + C8396 * C785 - C8401 * C779) *
               C8398) *
              C19466 * C19430 * C19416 * C84 +
          ((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C8453 +
           (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) * C8397 +
           (C8399 * C617 - C8395 * C624 + C8401 * C616 - C8396 * C622) * C8454 +
           (C8399 * C779 - C8395 * C785 + C8401 * C780 - C8396 * C786) *
               C8398) *
              C19466 * C19430 * C19416 * C85 +
          ((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C8453 +
           (C8395 * C284 - C8399 * C279 + C8396 * C285 - C8401 * C280) * C8397 +
           (C8395 * C622 - C8399 * C616 + C8396 * C1512 - C8401 * C1511) *
               C8454 +
           (C8395 * C786 - C8399 * C780 + C8396 * C1686 - C8401 * C1685) *
               C8398) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C8453 +
           (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) * C8397 +
           (C9092 - C9093 + C9094 - C9095) * C8454 +
           (C9096 - C9097 + C9098 - C9099) * C8398) *
              C19466 * C19430 * C612 +
          ((C9093 - C9092 + C9095 - C9094) * C8453 +
           (C9097 - C9096 + C9099 - C9098) * C8397 +
           (C9100 - C9101 + C9102 - C9103) * C8454 +
           (C9104 - C9105 + C9106 - C9107) * C8398) *
              C19466 * C19430 * C613 +
          ((C9101 - C9100 + C9103 - C9102) * C8453 +
           (C9105 - C9104 + C9107 - C9106) * C8397 +
           (C8395 * C3395 - C8399 * C3393 + C8396 * C4263 - C8401 * C4262) *
               C8454 +
           (C8395 * C3566 - C8399 * C3564 + C8396 * C4441 - C8401 * C4440) *
               C8398) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C8395 +
           (C8648 + C8649) * C8396) *
              C19466 * C19430 * C19416 * C84 -
          ((C8650 + C8651) * C8396 + (C8649 + C8648) * C8395) * C19466 *
              C19430 * C19416 * C85 +
          ((C8651 + C8650) * C8395 +
           (C8453 * C155 - C8621 * C96 - C8453 * C280 + C8397 * C329 +
            C8454 * C1565 - C8622 * C1511 - C8454 * C1685 + C8398 * C1737) *
               C8396) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C8395 +
           (C8648 + C8649) * C8396) *
              C19466 * C19430 * C612 -
          ((C8454 * C682 - C8622 * C620 - C8454 * C782 + C8398 * C832 +
            C8453 * C679 - C8621 * C617 - C8453 * C779 + C8397 * C829) *
               C8396 +
           (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
            C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
               C8395) *
              C19466 * C19430 * C613 +
          ((C8453 * C681 - C8621 * C619 - C8453 * C781 + C8397 * C831 +
            C8454 * C3463 - C8622 * C3393 - C8454 * C3564 + C8398 * C3620) *
               C8395 +
           (C8453 * C682 - C8621 * C620 - C8453 * C782 + C8397 * C832 +
            C8454 * C4332 - C8622 * C4262 - C8454 * C4440 + C8398 * C4500) *
               C8396) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8453 +
                     (C19466 * C390 - C214 * C277) * C8397 +
                     (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                        C8395 +
                    ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                     (C1629 - C1628) * C8454 + (C1805 - C1804) * C8398) *
                        C8396) *
                       C19430 * C19416 * C84 +
                   (((C227 - C226) * C8453 + (C397 - C396) * C8397 +
                     (C1628 - C1629) * C8454 + (C1804 - C1805) * C8398) *
                        C8395 +
                    ((C231 - C230) * C8453 + (C400 - C399) * C8397 +
                     (C1632 - C1633) * C8454 + (C1806 - C1807) * C8398) *
                        C8396) *
                       C19430 * C19416 * C85 +
                   ((C238 * C8453 + C403 * C8397 + (C1633 - C1632) * C8454 +
                     (C1807 - C1806) * C8398) *
                        C8395 +
                    ((C235 - C234) * C8453 + (C402 - C401) * C8397 +
                     (C19466 * C1625 - C214 * C1511) * C8454 +
                     (C19466 * C1802 - C214 * C1685) * C8398) *
                        C8396) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19466 * C215 - C214 * C93) * C8453 +
                     (C19466 * C390 - C214 * C277) * C8397 +
                     (C3510 - C3511) * C8454 + (C3663 - C3664) * C8398) *
                        C8395 +
                    ((C226 - C227) * C8453 + (C396 - C397) * C8397 +
                     (C1629 - C1628) * C8454 + (C1805 - C1804) * C8398) *
                        C8396) *
                       C19430 * C612 +
                   (((C3511 - C3510) * C8453 + (C3664 - C3663) * C8397 +
                     (C3515 - C3514) * C8454 + (C3666 - C3665) * C8398) *
                        C8395 +
                    ((C1628 - C1629) * C8453 + (C1804 - C1805) * C8397 +
                     (C4387 - C4388) * C8454 + (C4553 - C4554) * C8398) *
                        C8396) *
                       C19430 * C613 +
                   ((C3522 * C8453 + C3669 * C8397 + (C3519 - C3518) * C8454 +
                     (C3668 - C3667) * C8398) *
                        C8395 +
                    ((C4388 - C4387) * C8453 + (C4554 - C4553) * C8397 +
                     (C19466 * C4384 - C214 * C4262) * C8454 +
                     (C19466 * C4551 - C214 * C4440) * C8398) *
                        C8396) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C19466) *
               C8397 +
           ((C8395 * C626 - C8399 * C618 + C8396 * C624 - C8401 * C617) * C214 +
            (C8395 * C922 - C8399 * C916 + C8396 * C923 - C8401 * C917) *
                C19466) *
               C8398) *
              C19430 * C19416 * C84 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C214 +
            (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                C19466) *
               C8397 +
           ((C8399 * C617 - C8395 * C624 + C8401 * C616 - C8396 * C622) * C214 +
            (C8399 * C917 - C8395 * C923 + C8401 * C918 - C8396 * C924) *
                C19466) *
               C8398) *
              C19430 * C19416 * C85 +
          (((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C214 +
            (C8395 * C450 - C8399 * C445 + C8396 * C451 - C8401 * C446) *
                C19466) *
               C8397 +
           ((C8395 * C622 - C8399 * C616 + C8396 * C1512 - C8401 * C1511) *
                C214 +
            (C8395 * C924 - C8399 * C918 + C8396 * C1858 - C8401 * C1857) *
                C19466) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C214 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C19466) *
               C8397 +
           ((C9092 - C9093 + C9094 - C9095) * C214 +
            (C9258 - C9259 + C9260 - C9261) * C19466) *
               C8398) *
              C19430 * C612 +
          (((C9093 - C9092 + C9095 - C9094) * C214 +
            (C9259 - C9258 + C9261 - C9260) * C19466) *
               C8397 +
           ((C9100 - C9101 + C9102 - C9103) * C214 +
            (C9262 - C9263 + C9264 - C9265) * C19466) *
               C8398) *
              C19430 * C613 +
          (((C9101 - C9100 + C9103 - C9102) * C214 +
            (C9263 - C9262 + C9265 - C9264) * C19466) *
               C8397 +
           ((C8395 * C3395 - C8399 * C3393 + C8396 * C4263 - C8401 * C4262) *
                C214 +
            (C8395 * C3709 - C8399 * C3707 + C8396 * C4605 - C8401 * C4604) *
                C19466) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C19466) *
               C8395 +
           ((C8456 - C8457 + C8458 - C8459) * C214 +
            (C8802 - C8803 + C8804 - C8805) * C19466) *
               C8396) *
              C19430 * C19416 * C84 +
          (((C8457 - C8456 + C8459 - C8458) * C214 +
            (C8803 - C8802 + C8805 - C8804) * C19466) *
               C8395 +
           ((C8464 - C8465 + C8466 - C8467) * C214 +
            (C8806 - C8807 + C8808 - C8809) * C19466) *
               C8396) *
              C19430 * C19416 * C85 +
          (((C8465 - C8464 + C8467 - C8466) * C214 +
            (C8807 - C8806 + C8809 - C8808) * C19466) *
               C8395 +
           ((C8397 * C155 - C8453 * C96 + C8398 * C1565 - C8454 * C1511) *
                C214 +
            (C8397 * C494 - C8453 * C446 + C8398 * C1909 - C8454 * C1857) *
                C19466) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C214 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C19466) *
               C8395 +
           ((C8456 - C8457 + C8458 - C8459) * C214 +
            (C8802 - C8803 + C8804 - C8805) * C19466) *
               C8396) *
              C19430 * C612 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) * C214 +
            (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                C19466) *
               C8395 +
           ((C8453 * C617 - C8397 * C679 + C8454 * C620 - C8398 * C682) * C214 +
            (C8453 * C917 - C8397 * C967 + C8454 * C920 - C8398 * C970) *
                C19466) *
               C8396) *
              C19430 * C613 +
          (((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
                C214 +
            (C8397 * C969 - C8453 * C919 + C8398 * C3759 - C8454 * C3707) *
                C19466) *
               C8395 +
           ((C8397 * C682 - C8453 * C620 + C8398 * C4332 - C8454 * C4262) *
                C214 +
            (C8397 * C970 - C8453 * C920 + C8398 * C4660 - C8454 * C4604) *
                C19466) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
            C3820 * C8398) *
               C8395 +
           (C8860 + C8861) * C8396) *
              C19430 * C19416 * C84 -
          ((C8862 + C8863) * C8396 + (C8861 + C8860) * C8395) * C19430 *
              C19416 * C85 +
          ((C8863 + C8862) * C8395 +
           (C571 * C8397 +
            (C214 * C1625 - C544 * C1511 - C214 * C1857 + C19466 * C1964) *
                C8398) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C8397 +
            C3820 * C8398) *
               C8395 +
           (C8860 + C8861) * C8396) *
              C19430 * C612 -
          ((C4719 * C8398 + C1979 * C8397) * C8396 +
           (C3821 * C8398 + C3820 * C8397) * C8395) *
              C19430 * C613 +
          ((C3821 * C8397 + C3822 * C8398) * C8395 +
           (C4719 * C8397 +
            (C214 * C4384 - C544 * C4262 - C214 * C4604 + C19466 * C4711) *
                C8398) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) *
                 C11774 +
             C6463 * C11775) *
                C8397 +
            (C15572 + C15573) * C8398) *
               C19430 * C1507 -
           ((C15574 + C15575) * C8398 + (C15573 + C15572) * C8397) * C19430 *
               C1508) *
              C1509 +
          (((C16596 + C16604) * C8397 +
            (C4280 * C11774 +
             (C3043 * C4770 - C3044 * C4769 - C3043 * C4771 + C19382 * C4772) *
                 C11775) *
                C8398) *
               C19430 * C1508 -
           ((C16604 + C16596) * C8398 +
            (C7398 * C11775 +
             (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                 C11774) *
                C8397) *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                 C3043 +
             (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                 C19382) *
                C11774 +
            ((C16128 - C16129 + C16130 - C16131) * C3043 +
             (C16132 - C16133 + C16134 - C16135) * C19382) *
                C11775) *
               C19430 * C1507 +
           (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                 C3043 +
             (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                 C19382) *
                C11774 +
            ((C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
                 C3043 +
             (C8453 * C2557 - C8397 * C2618 + C8454 * C3864 - C8398 * C3913) *
                 C19382) *
                C11775) *
               C19430 * C1508) *
              C1509 +
          ((((C8457 - C8456 + C8459 - C8458) * C3043 +
             (C8461 - C8460 + C8463 - C8462) * C19382) *
                C11774 +
            ((C10602 - C10603 + C10604 - C10605) * C3043 +
             (C10606 - C10607 + C10608 - C10609) * C19382) *
                C11775) *
               C19430 * C1507 +
           (((C9963 - C9962 + C9965 - C9964) * C3043 +
             (C9967 - C9966 + C9969 - C9968) * C19382) *
                C11774 +
            ((C8397 * C2616 - C8453 * C2554 + C8398 * C4823 - C8454 * C4769) *
                 C3043 +
             (C8397 * C2619 - C8453 * C2559 + C8398 * C4824 - C8454 * C4771) *
                 C19382) *
                C11775) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C3043 +
             (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                 C19382) *
                C8397 +
            ((C15676 - C15677 + C15678 - C15679) * C3043 +
             (C15680 - C15681 + C15682 - C15683) * C19382) *
                C8398) *
               C19430 * C1507 +
           (((C15677 - C15676 + C15679 - C15678) * C3043 +
             (C15681 - C15680 + C15683 - C15682) * C19382) *
                C8397 +
            ((C15684 - C15685 + C15686 - C15687) * C3043 +
             (C15688 - C15689 + C15690 - C15691) * C19382) *
                C8398) *
               C19430 * C1508) *
              C1509 +
          ((((C11880 - C11879 + C11882 - C11881) * C3043 +
             (C11884 - C11883 + C11886 - C11885) * C19382) *
                C8397 +
            ((C13391 - C13392 + C13393 - C13394) * C3043 +
             (C13395 - C13396 + C13397 - C13398) * C19382) *
                C8398) *
               C19430 * C1507 +
           (((C13392 - C13391 + C13394 - C13393) * C3043 +
             (C13396 - C13395 + C13398 - C13397) * C19382) *
                C8397 +
            ((C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
                 C3043 +
             (C11774 * C738 - C11876 * C631 + C11775 * C4876 - C11877 * C4771) *
                 C19382) *
                C8398) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C8453 +
                      (C19382 * C282 - C3043 * C277) * C8397 +
                      (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                         C11774 +
                     ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                      (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                         C11775) *
                        C19430 * C1507 +
                    (((C3570 - C3569) * C8453 + (C3572 - C3571) * C8397 +
                      (C3574 - C3573) * C8454 + (C3576 - C3575) * C8398) *
                         C11774 +
                     ((C5420 - C5421) * C8453 + (C5422 - C5423) * C8397 +
                      (C5424 - C5425) * C8454 + (C5426 - C5427) * C8398) *
                         C11775) *
                        C19430 * C1508) *
                       C1509 +
                   ((((C3043 * C94 - C19382 * C100) * C8453 +
                      (C3043 * C278 - C19382 * C283) * C8397 +
                      (C4443 - C4444) * C8454 + (C4445 - C4446) * C8398) *
                         C11774 +
                     ((C7560 - C7561) * C8453 + (C7562 - C7563) * C8397 +
                      (C16803 - C16804) * C8454 + (C16805 - C16806) * C8398) *
                         C11775) *
                        C19430 * C1507 +
                    (((C4444 - C4443) * C8453 + (C4446 - C4445) * C8397 +
                      (C4448 - C4447) * C8454 + (C4450 - C4449) * C8398) *
                         C11774 +
                     ((C16804 - C16803) * C8453 + (C16806 - C16805) * C8397 +
                      (C19382 * C4770 - C3043 * C4769) * C8454 +
                      (C19382 * C4928 - C3043 * C4927) * C8398) *
                         C11775) *
                        C19430 * C1508) *
                       C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C19382 * C11774 +
            (C16318 + C16319) * C19382 * C11775) *
               C19430 * C1507 -
           ((C8454 * C3910 - C8622 * C3860 - C8454 * C3998 + C8398 * C4042 +
             C8453 * C2615 - C8621 * C2553 - C8453 * C2727 + C8397 * C2783) *
                C19382 * C11775 +
            (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
             C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
                C19382 * C11774) *
               C19430 * C1508) *
              C1509 +
          (((C10193 + C10192) * C19382 * C11774 +
            (C8453 * C2616 - C8621 * C2554 - C8453 * C2728 + C8397 * C2784 +
             C8454 * C4823 - C8622 * C4769 - C8454 * C4927 + C8398 * C4979) *
                C19382 * C11775) *
               C19430 * C1508 -
           ((C10824 + C10825) * C19382 * C11775 +
            (C8649 + C8648) * C19382 * C11774) *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8453 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C8397 +
            (C15676 - C15677 + C15678 - C15679) * C8454 +
            (C15842 - C15843 + C15844 - C15845) * C8398) *
               C19382 * C19430 * C1507 +
           ((C15677 - C15676 + C15679 - C15678) * C8453 +
            (C15843 - C15842 + C15845 - C15844) * C8397 +
            (C15684 - C15685 + C15686 - C15687) * C8454 +
            (C15846 - C15847 + C15848 - C15849) * C8398) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C11880 - C11879 + C11882 - C11881) * C8453 +
            (C12046 - C12045 + C12048 - C12047) * C8397 +
            (C13391 - C13392 + C13393 - C13394) * C8454 +
            (C13604 - C13605 + C13606 - C13607) * C8398) *
               C19382 * C19430 * C1507 +
           ((C13392 - C13391 + C13394 - C13393) * C8453 +
            (C13605 - C13604 + C13607 - C13606) * C8397 +
            (C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
                C8454 +
            (C11774 * C876 - C11876 * C782 + C11775 * C5030 - C11877 * C4927) *
                C8398) *
               C19382 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C11876 +
                      (C19382 * C448 - C3043 * C443) * C11774 +
                      (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                         C8397 +
                     ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                      (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                         C8398) *
                        C19430 * C1507 +
                    (((C3570 - C3569) * C11876 + (C3713 - C3712) * C11774 +
                      (C5420 - C5421) * C11877 + (C5586 - C5587) * C11775) *
                         C8397 +
                     ((C3574 - C3573) * C11876 + (C3716 - C3715) * C11774 +
                      (C5424 - C5425) * C11877 + (C5588 - C5589) * C11775) *
                         C8398) *
                        C19430 * C1508) *
                       C1509 +
                   ((((C3043 * C94 - C19382 * C100) * C11876 +
                      (C3043 * C444 - C19382 * C449) * C11774 +
                      (C7560 - C7561) * C11877 + (C7731 - C7732) * C11775) *
                         C8397 +
                     ((C4443 - C4444) * C11876 + (C4607 - C4608) * C11774 +
                      (C16803 - C16804) * C11877 + (C17005 - C17006) * C11775) *
                         C8398) *
                        C19430 * C1507 +
                    (((C4444 - C4443) * C11876 + (C4608 - C4607) * C11774 +
                      (C16804 - C16803) * C11877 + (C17006 - C17005) * C11775) *
                         C8397 +
                     ((C4448 - C4447) * C11876 + (C4610 - C4609) * C11774 +
                      (C19382 * C4770 - C3043 * C4769) * C11877 +
                      (C19382 * C5082 - C3043 * C5081) * C11775) *
                         C8398) *
                        C19430 * C1508) *
                       C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                C11876 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C11774 +
            (C16128 - C16129 + C16130 - C16131) * C11877 +
            (C16472 - C16473 + C16474 - C16475) * C11775) *
               C19382 * C19430 * C1507 +
           ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C11876 +
            (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                C11774 +
            (C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
                C11877 +
            (C8453 * C2889 - C8397 * C2945 + C8454 * C4124 - C8398 * C4168) *
                C11775) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C8457 - C8456 + C8459 - C8458) * C11876 +
            (C8803 - C8802 + C8805 - C8804) * C11774 +
            (C10602 - C10603 + C10604 - C10605) * C11877 +
            (C11026 - C11027 + C11028 - C11029) * C11775) *
               C19382 * C19430 * C1507 +
           ((C9963 - C9962 + C9965 - C9964) * C11876 +
            (C10399 - C10398 + C10401 - C10400) * C11774 +
            (C8397 * C2616 - C8453 * C2554 + C8398 * C4823 - C8454 * C4769) *
                C11877 +
            (C8397 * C2946 - C8453 * C2890 + C8398 * C5133 - C8454 * C5081) *
                C11775) *
               C19382 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C11876 * C215 - C12202 * C93 - C11876 * C443 +
                      C11774 * C545 + C11877 * C1169 - C12203 * C1059 -
                      C11877 * C1357 + C11775 * C1453) *
                         C8397 +
                     (C16024 + C16025) * C8398) *
                        C19382 * C19430 * C1507 -
                    ((C16026 + C16027) * C8398 + (C16025 + C16024) * C8397) *
                        C19382 * C19430 * C1508) *
                       C1509 +
                   (((C13821 + C13820) * C8397 +
                     (C11876 * C732 - C12202 * C620 - C11876 * C920 +
                      C11774 * C1014 + C11877 * C4875 - C12203 * C4769 -
                      C11877 * C5081 + C11775 * C5184) *
                         C8398) *
                        C19382 * C19430 * C1508 -
                    ((C13820 + C13821) * C8398 + (C12230 + C12229) * C8397) *
                        C19382 * C19430 * C1507) *
                       C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) *
                 C11774 +
             C6463 * C11775) *
                C8397 +
            (C15572 + C15573) * C8398) *
               C2031 -
           ((C17799 + C17800) * C8398 +
            (C6464 * C11775 + C6463 * C11774) * C8397) *
               C2032) *
              C1507 +
          (((C17800 + C17799) * C8397 +
            (C5252 * C11774 +
             (C3043 * C3867 - C3044 * C3862 - C3043 * C3868 + C19382 * C3871) *
                 C11775) *
                C8398) *
               C2032 -
           ((C15574 + C15575) * C8398 + (C15573 + C15572) * C8397) * C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                 C3043 +
             (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                 C19382) *
                C11774 +
            ((C16128 - C16129 + C16130 - C16131) * C3043 +
             (C16132 - C16133 + C16134 - C16135) * C19382) *
                C11775) *
               C2031 +
           (((C16129 - C16128 + C16131 - C16130) * C3043 +
             (C16133 - C16132 + C16135 - C16134) * C19382) *
                C11774 +
            ((C16136 - C16137 + C16138 - C16139) * C3043 +
             (C16140 - C16141 + C16142 - C16143) * C19382) *
                C11775) *
               C2032) *
              C1507 +
          ((((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                 C3043 +
             (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                 C19382) *
                C11774 +
            ((C17867 - C17868 + C17869 - C17870) * C3043 +
             (C17871 - C17872 + C17873 - C17874) * C19382) *
                C11775) *
               C2031 +
           (((C17868 - C17867 + C17870 - C17869) * C3043 +
             (C17872 - C17871 + C17874 - C17873) * C19382) *
                C11774 +
            ((C8397 * C3911 - C8453 * C3861 + C8398 * C3912 - C8454 * C3862) *
                 C3043 +
             (C8397 * C3914 - C8453 * C3866 + C8398 * C3915 - C8454 * C3868) *
                 C19382) *
                C11775) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C3043 +
             (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                 C19382) *
                C8397 +
            ((C15676 - C15677 + C15678 - C15679) * C3043 +
             (C15680 - C15681 + C15682 - C15683) * C19382) *
                C8398) *
               C2031 +
           (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
              C11775 * C1172) *
                 C3043 +
             (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 -
              C11775 * C1178) *
                 C19382) *
                C8397 +
            ((C17941 - C17942 + C17943 - C17944) * C3043 +
             (C17945 - C17946 + C17947 - C17948) * C19382) *
                C8398) *
               C2032) *
              C1507 +
          ((((C15677 - C15676 + C15679 - C15678) * C3043 +
             (C15681 - C15680 + C15683 - C15682) * C19382) *
                C8397 +
            ((C15684 - C15685 + C15686 - C15687) * C3043 +
             (C15688 - C15689 + C15690 - C15691) * C19382) *
                C8398) *
               C2031 +
           (((C17942 - C17941 + C17944 - C17943) * C3043 +
             (C17946 - C17945 + C17948 - C17947) * C19382) *
                C8397 +
            ((C11774 * C3954 - C11876 * C3860 + C11775 * C3956 -
              C11877 * C3862) *
                 C3043 +
             (C11774 * C3957 - C11876 * C3864 + C11775 * C3959 -
              C11877 * C3868) *
                 C19382) *
                C8398) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C8453 +
                      (C19382 * C282 - C3043 * C277) * C8397 +
                      (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                         C11774 +
                     ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                      C18015 * C8454 + C18016 * C8398) *
                         C11775) *
                        C2031 +
                    (((C6610 - C6609) * C8453 + (C6612 - C6611) * C8397 +
                      C18017 * C8454 + C18018 * C8398) *
                         C11774 +
                     ((C6614 - C6613) * C8453 + (C6616 - C6615) * C8397 +
                      (C8064 - C8065) * C8454 + (C8066 - C8067) * C8398) *
                         C11775) *
                        C2032) *
                       C1507 +
                   ((((C3570 - C3569) * C8453 + (C3572 - C3571) * C8397 +
                      (C3574 - C3573) * C8454 + (C3576 - C3575) * C8398) *
                         C11774 +
                     (C18017 * C8453 + C18018 * C8397 +
                      (C5424 - C5425) * C8454 + (C5426 - C5427) * C8398) *
                         C11775) *
                        C2031 +
                    ((C18015 * C8453 + C18016 * C8397 +
                      (C5425 - C5424) * C8454 + (C5427 - C5426) * C8398) *
                         C11774 +
                     ((C8065 - C8064) * C8453 + (C8067 - C8066) * C8397 +
                      (C19382 * C3867 - C3043 * C3862) * C8454 +
                      (C19382 * C4003 - C3043 * C4000) * C8398) *
                         C11775) *
                        C2032) *
                       C1508) *
                  C19404) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C19382 * C11774 +
            (C16318 + C16319) * C19382 * C11775) *
               C2031 -
           ((C16320 + C16321) * C19382 * C11775 +
            (C16319 + C16318) * C19382 * C11774) *
               C2032) *
              C1507 +
          (((C18097 + C18098) * C19382 * C11774 +
            (C8453 * C3911 - C8621 * C3861 - C8453 * C3999 + C8397 * C4043 +
             C8454 * C3912 - C8622 * C3862 - C8454 * C4000 + C8398 * C4044) *
                C19382 * C11775) *
               C2032 -
           ((C18098 + C18097) * C19382 * C11775 +
            (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
             C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
                C19382 * C11774) *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8453 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C8397 +
            (C15676 - C15677 + C15678 - C15679) * C8454 +
            (C15842 - C15843 + C15844 - C15845) * C8398) *
               C19382 * C2031 +
           ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C8453 +
            (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 -
             C11775 * C1316) *
                C8397 +
            (C17941 - C17942 + C17943 - C17944) * C8454 +
            (C18165 - C18166 + C18167 - C18168) * C8398) *
               C19382 * C2032) *
              C1507 +
          (((C15677 - C15676 + C15679 - C15678) * C8453 +
            (C15843 - C15842 + C15845 - C15844) * C8397 +
            (C15684 - C15685 + C15686 - C15687) * C8454 +
            (C15846 - C15847 + C15848 - C15849) * C8398) *
               C19382 * C2031 +
           ((C17942 - C17941 + C17944 - C17943) * C8453 +
            (C18166 - C18165 + C18168 - C18167) * C8397 +
            (C11774 * C3954 - C11876 * C3860 + C11775 * C3956 -
             C11877 * C3862) *
                C8454 +
            (C11774 * C4083 - C11876 * C3998 + C11775 * C4085 -
             C11877 * C4000) *
                C8398) *
               C19382 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C11876 +
                      (C19382 * C448 - C3043 * C443) * C11774 +
                      (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                         C8397 +
                     ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                      C18015 * C11877 + C18235 * C11775) *
                         C8398) *
                        C2031 +
                    (((C6610 - C6609) * C11876 + (C6773 - C6772) * C11774 +
                      (C6614 - C6613) * C11877 + (C6775 - C6774) * C11775) *
                         C8397 +
                     (C18017 * C11876 + C18236 * C11774 +
                      (C8064 - C8065) * C11877 + (C8238 - C8239) * C11775) *
                         C8398) *
                        C2032) *
                       C1507 +
                   ((((C3570 - C3569) * C11876 + (C3713 - C3712) * C11774 +
                      C18017 * C11877 + C18236 * C11775) *
                         C8397 +
                     ((C3574 - C3573) * C11876 + (C3716 - C3715) * C11774 +
                      (C5424 - C5425) * C11877 + (C5588 - C5589) * C11775) *
                         C8398) *
                        C2031 +
                    ((C18015 * C11876 + C18235 * C11774 +
                      (C8065 - C8064) * C11877 + (C8239 - C8238) * C11775) *
                         C8397 +
                     ((C5425 - C5424) * C11876 + (C5589 - C5588) * C11774 +
                      (C19382 * C3867 - C3043 * C3862) * C11877 +
                      (C19382 * C4129 - C3043 * C4126) * C11775) *
                         C8398) *
                        C2032) *
                       C1508) *
                  C19404) /
                 (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                C11876 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C11774 +
            (C16128 - C16129 + C16130 - C16131) * C11877 +
            (C16472 - C16473 + C16474 - C16475) * C11775) *
               C19382 * C2031 +
           ((C16129 - C16128 + C16131 - C16130) * C11876 +
            (C16473 - C16472 + C16475 - C16474) * C11774 +
            (C16136 - C16137 + C16138 - C16139) * C11877 +
            (C16476 - C16477 + C16478 - C16479) * C11775) *
               C19382 * C2032) *
              C1507 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C11876 +
            (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
                C11774 +
            (C17867 - C17868 + C17869 - C17870) * C11877 +
            (C18303 - C18304 + C18305 - C18306) * C11775) *
               C19382 * C2031 +
           ((C17868 - C17867 + C17870 - C17869) * C11876 +
            (C18304 - C18303 + C18306 - C18305) * C11774 +
            (C8397 * C3911 - C8453 * C3861 + C8398 * C3912 - C8454 * C3862) *
                C11877 +
            (C8397 * C4169 - C8453 * C4125 + C8398 * C4170 - C8454 * C4126) *
                C11775) *
               C19382 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C11876 * C215 - C12202 * C93 - C11876 * C443 +
                      C11774 * C545 + C11877 * C1169 - C12203 * C1059 -
                      C11877 * C1357 + C11775 * C1453) *
                         C8397 +
                     (C16024 + C16025) * C8398) *
                        C19382 * C2031 -
                    ((C18385 + C18386) * C8398 +
                     (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 +
                      C11775 * C1454 + C11876 * C1169 - C12202 * C1059 -
                      C11876 * C1357 + C11774 * C1453) *
                         C8397) *
                        C19382 * C2032) *
                       C1507 +
                   (((C18386 + C18385) * C8397 +
                     (C11876 * C3954 - C12202 * C3860 - C11876 * C4124 +
                      C11774 * C4209 + C11877 * C3956 - C12203 * C3862 -
                      C11877 * C4126 + C11775 * C4211) *
                         C8398) *
                        C19382 * C2032 -
                    ((C16026 + C16027) * C8398 + (C16025 + C16024) * C8397) *
                        C19382 * C2031) *
                       C1508) *
                  C19404) /
                 (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C11774 +
            C6463 * C11775) *
               C8397 +
           (C15572 + C15573) * C8398) *
              C19430 * C612 -
          ((C15574 + C15575) * C8398 + (C15573 + C15572) * C8397) * C19430 *
              C613 +
          ((C15575 + C15574) * C8397 +
           (C3422 * C11774 +
            (C3043 * C5236 - C3044 * C5235 - C3043 * C5237 + C19382 * C5238) *
                C11775) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C11774 +
            C6463 * C11775) *
               C8397 +
           (C3420 * C11774 + C5253 * C11775) * C8398) *
              C19430 * C19416 * C84 -
          (((C3043 * C2558 - C3044 * C2554 - C3043 * C2559 + C19382 * C2563) *
                C11775 +
            C4279 * C11774) *
               C8398 +
           (C7398 * C11775 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C11774) *
               C8397) *
              C19430 * C19416 * C85 +
          (((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
                C11774 +
            (C3043 * C1063 - C3044 * C1057 - C3043 * C1064 + C19382 * C1075) *
                C11775) *
               C8397 +
           ((C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
                C11774 +
            (C3043 * C2560 - C3044 * C2555 - C3043 * C2561 + C19382 * C2564) *
                C11775) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C11774 +
            C6463 * C11775) *
               C8397 +
           (C15572 + C15573) * C8398) *
              C1054 -
          ((C7899 * C11775 + C5253 * C11774) * C8398 +
           (C6464 * C11775 + C6463 * C11774) * C8397) *
              C1055 +
          ((C6464 * C11774 + C6465 * C11775) * C8397 +
           (C7899 * C11774 +
            (C3043 * C7889 - C3044 * C7888 - C3043 * C7890 + C19382 * C7891) *
                C11775) *
               C8398) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C3043 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                C19382) *
               C11774 +
           ((C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
                C3043 +
            (C8397 * C1125 - C8453 * C1068 + C8398 * C2618 - C8454 * C2557) *
                C19382) *
               C11775) *
              C19430 * C612 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C3043 +
            (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                C19382) *
               C11774 +
           ((C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
                C3043 +
            (C8453 * C2557 - C8397 * C2618 + C8454 * C3864 - C8398 * C3913) *
                C19382) *
               C11775) *
              C19430 * C613 +
          (((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
                C3043 +
            (C8397 * C687 - C8453 * C629 + C8398 * C3465 - C8454 * C3396) *
                C19382) *
               C11774 +
           ((C8397 * C3910 - C8453 * C3860 + C8398 * C5305 - C8454 * C5235) *
                C3043 +
            (C8397 * C3913 - C8453 * C3864 + C8398 * C5306 - C8454 * C5237) *
                C19382) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C3043 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                C19382) *
               C11774 +
           ((C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
                C3043 +
            (C8397 * C1125 - C8453 * C1068 + C8398 * C2618 - C8454 * C2557) *
                C19382) *
               C11775) *
              C19430 * C19416 * C84 +
          (((C8457 - C8456 + C8459 - C8458) * C3043 +
            (C8461 - C8460 + C8463 - C8462) * C19382) *
               C11774 +
           ((C10602 - C10603 + C10604 - C10605) * C3043 +
            (C10606 - C10607 + C10608 - C10609) * C19382) *
               C11775) *
              C19430 * C19416 * C85 +
          (((C8465 - C8464 + C8467 - C8466) * C3043 +
            (C8469 - C8468 + C8471 - C8470) * C19382) *
               C11774 +
           ((C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
                C3043 +
            (C8397 * C1127 - C8453 * C1064 + C8398 * C2620 - C8454 * C2561) *
                C19382) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C3043 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                C19382) *
               C11774 +
           ((C16128 - C16129 + C16130 - C16131) * C3043 +
            (C16132 - C16133 + C16134 - C16135) * C19382) *
               C11775) *
              C1054 +
          (((C16129 - C16128 + C16131 - C16130) * C3043 +
            (C16133 - C16132 + C16135 - C16134) * C19382) *
               C11774 +
           ((C16136 - C16137 + C16138 - C16139) * C3043 +
            (C16140 - C16141 + C16142 - C16143) * C19382) *
               C11775) *
              C1055 +
          (((C16137 - C16136 + C16139 - C16138) * C3043 +
            (C16141 - C16140 + C16143 - C16142) * C19382) *
               C11774 +
           ((C8397 * C6503 - C8453 * C6436 + C8398 * C7949 - C8454 * C7888) *
                C3043 +
            (C8397 * C6505 - C8453 * C6439 + C8398 * C7950 - C8454 * C7890) *
                C19382) *
               C11775) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C3043 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C19382) *
               C8397 +
           ((C15676 - C15677 + C15678 - C15679) * C3043 +
            (C15680 - C15681 + C15682 - C15683) * C19382) *
               C8398) *
              C19430 * C612 +
          (((C15677 - C15676 + C15679 - C15678) * C3043 +
            (C15681 - C15680 + C15683 - C15682) * C19382) *
               C8397 +
           ((C15684 - C15685 + C15686 - C15687) * C3043 +
            (C15688 - C15689 + C15690 - C15691) * C19382) *
               C8398) *
              C19430 * C613 +
          (((C15685 - C15684 + C15687 - C15686) * C3043 +
            (C15689 - C15688 + C15691 - C15690) * C19382) *
               C8397 +
           ((C11774 * C3505 - C11876 * C3393 + C11775 * C5357 -
             C11877 * C5235) *
                C3043 +
            (C11774 * C3507 - C11876 * C3396 + C11775 * C5358 -
             C11877 * C5237) *
                C19382) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C3043 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C19382) *
               C8397 +
           ((C11774 * C728 - C11876 * C618 + C11775 * C2671 - C11877 * C2553) *
                C3043 +
            (C11774 * C734 - C11876 * C627 + C11775 * C2674 - C11877 * C2557) *
                C19382) *
               C8398) *
              C19430 * C19416 * C84 +
          (((C11880 - C11879 + C11882 - C11881) * C3043 +
            (C11884 - C11883 + C11886 - C11885) * C19382) *
               C8397 +
           ((C13391 - C13392 + C13393 - C13394) * C3043 +
            (C13395 - C13396 + C13397 - C13398) * C19382) *
               C8398) *
              C19430 * C19416 * C85 +
          (((C11888 - C11887 + C11890 - C11889) * C3043 +
            (C11892 - C11891 + C11894 - C11893) * C19382) *
               C8397 +
           ((C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
                C3043 +
            (C11774 * C736 - C11876 * C623 + C11775 * C2676 - C11877 * C2561) *
                C19382) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C3043 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C19382) *
               C8397 +
           ((C15676 - C15677 + C15678 - C15679) * C3043 +
            (C15680 - C15681 + C15682 - C15683) * C19382) *
               C8398) *
              C1054 +
          (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C3043 +
            (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 -
             C11775 * C1178) *
                C19382) *
               C8397 +
           ((C11876 * C2553 - C11774 * C2671 + C11877 * C3861 -
             C11775 * C3955) *
                C3043 +
            (C11876 * C2557 - C11774 * C2674 + C11877 * C3866 -
             C11775 * C3958) *
                C19382) *
               C8398) *
              C1055 +
          (((C11774 * C1172 - C11876 * C1060 + C11775 * C6562 -
             C11877 * C6436) *
                C3043 +
            (C11774 * C1178 - C11876 * C1070 + C11775 * C6564 -
             C11877 * C6439) *
                C19382) *
               C8397 +
           ((C11774 * C3955 - C11876 * C3861 + C11775 * C8009 -
             C11877 * C7888) *
                C3043 +
            (C11774 * C3958 - C11876 * C3866 + C11775 * C8010 -
             C11877 * C7890) *
                C19382) *
               C8398) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C8453 +
                     (C19382 * C282 - C3043 * C277) * C8397 +
                     (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                        C11774 +
                    ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                     (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                        C11775) *
                       C19430 * C612 +
                   (((C3570 - C3569) * C8453 + (C3572 - C3571) * C8397 +
                     (C3574 - C3573) * C8454 + (C3576 - C3575) * C8398) *
                        C11774 +
                    ((C5420 - C5421) * C8453 + (C5422 - C5423) * C8397 +
                     (C5424 - C5425) * C8454 + (C5426 - C5427) * C8398) *
                        C11775) *
                       C19430 * C613 +
                   ((C3581 * C8453 + C3582 * C8397 + (C3578 - C3577) * C8454 +
                     (C3580 - C3579) * C8398) *
                        C11774 +
                    ((C5425 - C5424) * C8453 + (C5427 - C5426) * C8397 +
                     (C19382 * C5236 - C3043 * C5235) * C8454 +
                     (C19382 * C5418 - C3043 * C5417) * C8398) *
                        C11775) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C8453 +
                     (C19382 * C282 - C3043 * C277) * C8397 +
                     (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                        C11774 +
                    ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                     (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                        C11775) *
                       C19430 * C19416 * C84 +
                   (((C3043 * C94 - C19382 * C100) * C8453 +
                     (C3043 * C278 - C19382 * C283) * C8397 +
                     (C4443 - C4444) * C8454 + (C4445 - C4446) * C8398) *
                        C11774 +
                    ((C7560 - C7561) * C8453 + (C7562 - C7563) * C8397 +
                     (C3043 * C2554 - C19382 * C2558) * C8454 +
                     (C3043 * C2728 - C19382 * C2731) * C8398) *
                        C11775) *
                       C19430 * C19416 * C85 +
                   (((C19382 * C102 - C3043 * C95) * C8453 +
                     (C19382 * C284 - C3043 * C279) * C8397 +
                     (C19382 * C622 - C3043 * C616) * C8454 +
                     (C19382 * C786 - C3043 * C780) * C8398) *
                        C11774 +
                    ((C19382 * C1063 - C3043 * C1057) * C8453 +
                     (C19382 * C1227 - C3043 * C1221) * C8397 +
                     (C19382 * C2560 - C3043 * C2555) * C8454 +
                     (C19382 * C2732 - C3043 * C2729) * C8398) *
                        C11775) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C8453 +
                     (C19382 * C282 - C3043 * C277) * C8397 +
                     (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                        C11774 +
                    ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                     (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                        C11775) *
                       C1054 +
                   (((C6610 - C6609) * C8453 + (C6612 - C6611) * C8397 +
                     (C5420 - C5421) * C8454 + (C5422 - C5423) * C8398) *
                        C11774 +
                    ((C6614 - C6613) * C8453 + (C6616 - C6615) * C8397 +
                     (C8064 - C8065) * C8454 + (C8066 - C8067) * C8398) *
                        C11775) *
                       C1055 +
                   ((C6621 * C8453 + C6622 * C8397 + (C8065 - C8064) * C8454 +
                     (C8067 - C8066) * C8398) *
                        C11774 +
                    ((C6618 - C6617) * C8453 + (C6620 - C6619) * C8397 +
                     (C19382 * C7889 - C3043 * C7888) * C8454 +
                     (C19382 * C8062 - C3043 * C8061) * C8398) *
                        C11775) *
                       C1056) *
                  C19416 * C19404) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C19382 * C11774 +
           (C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271 +
            C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783) *
               C19382 * C11775) *
              C19430 * C612 -
          ((C8454 * C3910 - C8622 * C3860 - C8454 * C3998 + C8398 * C4042 +
            C8453 * C2615 - C8621 * C2553 - C8453 * C2727 + C8397 * C2783) *
               C19382 * C11775 +
           (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
            C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
               C19382 * C11774) *
              C19430 * C613 +
          ((C8453 * C681 - C8621 * C619 - C8453 * C781 + C8397 * C831 +
            C8454 * C3463 - C8622 * C3393 - C8454 * C3564 + C8398 * C3620) *
               C19382 * C11774 +
           (C8453 * C3910 - C8621 * C3860 - C8453 * C3998 + C8397 * C4042 +
            C8454 * C5305 - C8622 * C5235 - C8454 * C5417 + C8398 * C5477) *
               C19382 * C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C19382 * C11774 +
           (C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271 +
            C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783) *
               C19382 * C11775) *
              C19430 * C19416 * C84 -
          ((C10824 + C10825) * C19382 * C11775 +
           (C8649 + C8648) * C19382 * C11774) *
              C19430 * C19416 * C85 +
          ((C8651 + C8650) * C19382 * C11774 +
           (C8453 * C1121 - C8621 * C1057 - C8453 * C1221 + C8397 * C1269 +
            C8454 * C2617 - C8622 * C2555 - C8454 * C2729 + C8398 * C2785) *
               C19382 * C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C19382 * C11774 +
           (C16318 + C16319) * C19382 * C11775) *
              C1054 -
          ((C16320 + C16321) * C19382 * C11775 +
           (C16319 + C16318) * C19382 * C11774) *
              C1055 +
          ((C16321 + C16320) * C19382 * C11774 +
           (C8453 * C6503 - C8621 * C6436 - C8453 * C6604 + C8397 * C6663 +
            C8454 * C7949 - C8622 * C7888 - C8454 * C8061 + C8398 * C8117) *
               C19382 * C11775) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8453 +
           (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
               C8397 +
           (C15676 - C15677 + C15678 - C15679) * C8454 +
           (C15842 - C15843 + C15844 - C15845) * C8398) *
              C19382 * C19430 * C612 +
          ((C15677 - C15676 + C15679 - C15678) * C8453 +
           (C15843 - C15842 + C15845 - C15844) * C8397 +
           (C15684 - C15685 + C15686 - C15687) * C8454 +
           (C15846 - C15847 + C15848 - C15849) * C8398) *
              C19382 * C19430 * C613 +
          ((C15685 - C15684 + C15687 - C15686) * C8453 +
           (C15847 - C15846 + C15849 - C15848) * C8397 +
           (C11774 * C3505 - C11876 * C3393 + C11775 * C5357 - C11877 * C5235) *
               C8454 +
           (C11774 * C3660 - C11876 * C3564 + C11775 * C5528 - C11877 * C5417) *
               C8398) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8453 +
           (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
               C8397 +
           (C11774 * C728 - C11876 * C618 + C11775 * C2671 - C11877 * C2553) *
               C8454 +
           (C11774 * C872 - C11876 * C778 + C11775 * C2836 - C11877 * C2727) *
               C8398) *
              C19382 * C19430 * C19416 * C84 +
          ((C11880 - C11879 + C11882 - C11881) * C8453 +
           (C12046 - C12045 + C12048 - C12047) * C8397 +
           (C13391 - C13392 + C13393 - C13394) * C8454 +
           (C13604 - C13605 + C13606 - C13607) * C8398) *
              C19382 * C19430 * C19416 * C85 +
          ((C11888 - C11887 + C11890 - C11889) * C8453 +
           (C12050 - C12049 + C12052 - C12051) * C8397 +
           (C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
               C8454 +
           (C11774 * C874 - C11876 * C780 + C11775 * C2838 - C11877 * C2729) *
               C8398) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8453 +
           (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
               C8397 +
           (C15676 - C15677 + C15678 - C15679) * C8454 +
           (C15842 - C15843 + C15844 - C15845) * C8398) *
              C19382 * C1054 +
          ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 - C11775 * C1172) *
               C8453 +
           (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 - C11775 * C1316) *
               C8397 +
           (C11876 * C2553 - C11774 * C2671 + C11877 * C3861 - C11775 * C3955) *
               C8454 +
           (C11876 * C2727 - C11774 * C2836 + C11877 * C3999 - C11775 * C4084) *
               C8398) *
              C19382 * C1055 +
          ((C11774 * C1172 - C11876 * C1060 + C11775 * C6562 - C11877 * C6436) *
               C8453 +
           (C11774 * C1316 - C11876 * C1222 + C11775 * C6727 - C11877 * C6604) *
               C8397 +
           (C11774 * C3955 - C11876 * C3861 + C11775 * C8009 - C11877 * C7888) *
               C8454 +
           (C11774 * C4084 - C11876 * C3999 + C11775 * C8184 - C11877 * C8061) *
               C8398) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C11876 +
                     (C19382 * C448 - C3043 * C443) * C11774 +
                     (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                        C8397 +
                    ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                     (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                        C8398) *
                       C19430 * C612 +
                   (((C3570 - C3569) * C11876 + (C3713 - C3712) * C11774 +
                     (C5420 - C5421) * C11877 + (C5586 - C5587) * C11775) *
                        C8397 +
                    ((C3574 - C3573) * C11876 + (C3716 - C3715) * C11774 +
                     (C5424 - C5425) * C11877 + (C5588 - C5589) * C11775) *
                        C8398) *
                       C19430 * C613 +
                   ((C3581 * C11876 + C3719 * C11774 +
                     (C5425 - C5424) * C11877 + (C5589 - C5588) * C11775) *
                        C8397 +
                    ((C3578 - C3577) * C11876 + (C3718 - C3717) * C11774 +
                     (C19382 * C5236 - C3043 * C5235) * C11877 +
                     (C19382 * C5584 - C3043 * C5583) * C11775) *
                        C8398) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C11876 +
                     (C19382 * C448 - C3043 * C443) * C11774 +
                     (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                        C8397 +
                    ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                     (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                        C8398) *
                       C19430 * C19416 * C84 +
                   (((C3043 * C94 - C19382 * C100) * C11876 +
                     (C3043 * C444 - C19382 * C449) * C11774 +
                     (C7560 - C7561) * C11877 + (C7731 - C7732) * C11775) *
                        C8397 +
                    ((C4443 - C4444) * C11876 + (C4607 - C4608) * C11774 +
                     (C3043 * C2554 - C19382 * C2558) * C11877 +
                     (C3043 * C2890 - C19382 * C2893) * C11775) *
                        C8398) *
                       C19430 * C19416 * C85 +
                   (((C19382 * C102 - C3043 * C95) * C11876 +
                     (C19382 * C450 - C3043 * C445) * C11774 +
                     (C19382 * C1063 - C3043 * C1057) * C11877 +
                     (C19382 * C1365 - C3043 * C1359) * C11775) *
                        C8397 +
                    ((C19382 * C622 - C3043 * C616) * C11876 +
                     (C19382 * C924 - C3043 * C918) * C11774 +
                     (C19382 * C2560 - C3043 * C2555) * C11877 +
                     (C19382 * C2894 - C3043 * C2891) * C11775) *
                        C8398) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) +
                 (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C11876 +
                     (C19382 * C448 - C3043 * C443) * C11774 +
                     (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                        C8397 +
                    ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                     (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                        C8398) *
                       C1054 +
                   (((C6610 - C6609) * C11876 + (C6773 - C6772) * C11774 +
                     (C6614 - C6613) * C11877 + (C6775 - C6774) * C11775) *
                        C8397 +
                    ((C5420 - C5421) * C11876 + (C5586 - C5587) * C11774 +
                     (C8064 - C8065) * C11877 + (C8238 - C8239) * C11775) *
                        C8398) *
                       C1055 +
                   ((C6621 * C11876 + C6778 * C11774 +
                     (C6618 - C6617) * C11877 + (C6777 - C6776) * C11775) *
                        C8397 +
                    ((C8065 - C8064) * C11876 + (C8239 - C8238) * C11774 +
                     (C19382 * C7889 - C3043 * C7888) * C11877 +
                     (C19382 * C8236 - C3043 * C8235) * C11775) *
                        C8398) *
                       C1056) *
                  C19416 * C19404) /
                     (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C11876 +
           (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
               C11774 +
           (C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
               C11877 +
           (C8397 * C1407 - C8453 * C1357 + C8398 * C2945 - C8454 * C2889) *
               C11775) *
              C19382 * C19430 * C612 +
          ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
               C11876 +
           (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
               C11774 +
           (C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
               C11877 +
           (C8453 * C2889 - C8397 * C2945 + C8454 * C4124 - C8398 * C4168) *
               C11775) *
              C19382 * C19430 * C613 +
          ((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
               C11876 +
           (C8397 * C969 - C8453 * C919 + C8398 * C3759 - C8454 * C3707) *
               C11774 +
           (C8397 * C3910 - C8453 * C3860 + C8398 * C5305 - C8454 * C5235) *
               C11877 +
           (C8397 * C4168 - C8453 * C4124 + C8398 * C5639 - C8454 * C5583) *
               C11775) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C11876 +
           (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
               C11774 +
           (C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
               C11877 +
           (C8397 * C1407 - C8453 * C1357 + C8398 * C2945 - C8454 * C2889) *
               C11775) *
              C19382 * C19430 * C19416 * C84 +
          ((C8457 - C8456 + C8459 - C8458) * C11876 +
           (C8803 - C8802 + C8805 - C8804) * C11774 +
           (C10602 - C10603 + C10604 - C10605) * C11877 +
           (C11026 - C11027 + C11028 - C11029) * C11775) *
              C19382 * C19430 * C19416 * C85 +
          ((C8465 - C8464 + C8467 - C8466) * C11876 +
           (C8807 - C8806 + C8809 - C8808) * C11774 +
           (C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
               C11877 +
           (C8397 * C1409 - C8453 * C1359 + C8398 * C2947 - C8454 * C2891) *
               C11775) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C11876 +
           (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
               C11774 +
           (C16128 - C16129 + C16130 - C16131) * C11877 +
           (C16472 - C16473 + C16474 - C16475) * C11775) *
              C19382 * C1054 +
          ((C16129 - C16128 + C16131 - C16130) * C11876 +
           (C16473 - C16472 + C16475 - C16474) * C11774 +
           (C16136 - C16137 + C16138 - C16139) * C11877 +
           (C16476 - C16477 + C16478 - C16479) * C11775) *
              C19382 * C1055 +
          ((C16137 - C16136 + C16139 - C16138) * C11876 +
           (C16477 - C16476 + C16479 - C16478) * C11774 +
           (C8397 * C6503 - C8453 * C6436 + C8398 * C7949 - C8454 * C7888) *
               C11877 +
           (C8397 * C6816 - C8453 * C6767 + C8398 * C8289 - C8454 * C8235) *
               C11775) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C8397 +
           (C16024 + C16025) * C8398) *
              C19382 * C19430 * C612 -
          ((C16026 + C16027) * C8398 + (C16025 + C16024) * C8397) * C19382 *
              C19430 * C613 +
          ((C16027 + C16026) * C8397 +
           (C11876 * C3505 - C12202 * C3393 - C11876 * C3707 + C11774 * C3799 +
            C11877 * C5357 - C12203 * C5235 - C11877 * C5583 + C11775 * C5690) *
               C8398) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C8397 +
           (C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012 +
            C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998) *
               C8398) *
              C19382 * C19430 * C19416 * C84 -
          ((C13820 + C13821) * C8398 + (C12230 + C12229) * C8397) * C19382 *
              C19430 * C19416 * C85 +
          ((C12232 + C12231) * C8397 +
           (C11876 * C730 - C12202 * C616 - C11876 * C918 + C11774 * C1010 +
            C11877 * C2673 - C12203 * C2555 - C11877 * C2891 + C11775 * C3000) *
               C8398) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C8397 +
           (C16024 + C16025) * C8398) *
              C19382 * C1054 -
          ((C11877 * C3955 - C12203 * C3861 - C11877 * C4125 + C11775 * C4210 +
            C11876 * C2671 - C12202 * C2553 - C11876 * C2889 + C11774 * C2998) *
               C8398 +
           (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 + C11775 * C1454 +
            C11876 * C1169 - C12202 * C1059 - C11876 * C1357 + C11774 * C1453) *
               C8397) *
              C19382 * C1055 +
          ((C11876 * C1172 - C12202 * C1060 - C11876 * C1360 + C11774 * C1454 +
            C11877 * C6562 - C12203 * C6436 - C11877 * C6767 + C11775 * C6863) *
               C8397 +
           (C11876 * C3955 - C12202 * C3861 - C11876 * C4125 + C11774 * C4210 +
            C11877 * C8009 - C12203 * C7888 - C11877 * C8235 + C11775 * C8344) *
               C8398) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) *
                 C11774 +
             C6463 * C11775) *
                C8397 +
            (C15572 + C15573) * C8398) *
               C2031 -
           ((C7899 * C11775 + C5253 * C11774) * C8398 +
            (C6464 * C11775 + C6463 * C11774) * C8397) *
               C2032) *
              C19416 * C1509 +
          (((C7398 * C11774 + C7399 * C11775) * C8397 +
            (C16603 * C11774 +
             (C3043 * C6916 - C3044 * C6915 - C3043 * C6917 + C19382 * C6918) *
                 C11775) *
                C8398) *
               C2032 -
           ((C16604 + C16596) * C8398 +
            (C7398 * C11775 +
             (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                 C11774) *
                C8397) *
               C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                 C3043 +
             (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                 C19382) *
                C11774 +
            ((C16128 - C16129 + C16130 - C16131) * C3043 +
             (C16132 - C16133 + C16134 - C16135) * C19382) *
                C11775) *
               C2031 +
           (((C16129 - C16128 + C16131 - C16130) * C3043 +
             (C16133 - C16132 + C16135 - C16134) * C19382) *
                C11774 +
            ((C16136 - C16137 + C16138 - C16139) * C3043 +
             (C16140 - C16141 + C16142 - C16143) * C19382) *
                C11775) *
               C2032) *
              C19416 * C1509 +
          ((((C8457 - C8456 + C8459 - C8458) * C3043 +
             (C8461 - C8460 + C8463 - C8462) * C19382) *
                C11774 +
            ((C10602 - C10603 + C10604 - C10605) * C3043 +
             (C10606 - C10607 + C10608 - C10609) * C19382) *
                C11775) *
               C2031 +
           (((C10603 - C10602 + C10605 - C10604) * C3043 +
             (C10607 - C10606 + C10609 - C10608) * C19382) *
                C11774 +
            ((C8397 * C1123 - C8453 * C1061 + C8398 * C6969 - C8454 * C6915) *
                 C3043 +
             (C8397 * C1129 - C8453 * C1072 + C8398 * C6970 - C8454 * C6917) *
                 C19382) *
                C11775) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C3043 +
             (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                 C19382) *
                C8397 +
            ((C15676 - C15677 + C15678 - C15679) * C3043 +
             (C15680 - C15681 + C15682 - C15683) * C19382) *
                C8398) *
               C2031 +
           (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
              C11775 * C1172) *
                 C3043 +
             (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 -
              C11775 * C1178) *
                 C19382) *
                C8397 +
            ((C11876 * C2553 - C11774 * C2671 + C11877 * C3861 -
              C11775 * C3955) *
                 C3043 +
             (C11876 * C2557 - C11774 * C2674 + C11877 * C3866 -
              C11775 * C3958) *
                 C19382) *
                C8398) *
               C2032) *
              C19416 * C1509 +
          ((((C11880 - C11879 + C11882 - C11881) * C3043 +
             (C11884 - C11883 + C11886 - C11885) * C19382) *
                C8397 +
            ((C13391 - C13392 + C13393 - C13394) * C3043 +
             (C13395 - C13396 + C13397 - C13398) * C19382) *
                C8398) *
               C2031 +
           (((C14039 - C14038 + C14041 - C14040) * C3043 +
             (C14043 - C14042 + C14045 - C14044) * C19382) *
                C8397 +
            ((C11774 * C2672 - C11876 * C2554 + C11775 * C7021 -
              C11877 * C6915) *
                 C3043 +
             (C11774 * C2675 - C11876 * C2559 + C11775 * C7022 -
              C11877 * C6917) *
                 C19382) *
                C8398) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C8453 +
                      (C19382 * C282 - C3043 * C277) * C8397 +
                      (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                         C11774 +
                     ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                      (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                         C11775) *
                        C2031 +
                    (((C6610 - C6609) * C8453 + (C6612 - C6611) * C8397 +
                      (C5420 - C5421) * C8454 + (C5422 - C5423) * C8398) *
                         C11774 +
                     ((C6614 - C6613) * C8453 + (C6616 - C6615) * C8397 +
                      (C8064 - C8065) * C8454 + (C8066 - C8067) * C8398) *
                         C11775) *
                        C2032) *
                       C19416 * C1509 +
                   ((((C3043 * C94 - C19382 * C100) * C8453 +
                      (C3043 * C278 - C19382 * C283) * C8397 +
                      (C4443 - C4444) * C8454 + (C4445 - C4446) * C8398) *
                         C11774 +
                     ((C7560 - C7561) * C8453 + (C7562 - C7563) * C8397 +
                      (C16803 - C16804) * C8454 + (C16805 - C16806) * C8398) *
                         C11775) *
                        C2031 +
                    (((C7561 - C7560) * C8453 + (C7563 - C7562) * C8397 +
                      (C16804 - C16803) * C8454 + (C16806 - C16805) * C8398) *
                         C11774 +
                     ((C7565 - C7564) * C8453 + (C7567 - C7566) * C8397 +
                      (C19382 * C6916 - C3043 * C6915) * C8454 +
                      (C19382 * C7074 - C3043 * C7073) * C8398) *
                         C11775) *
                        C2032) *
                       C19416 * C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
             C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
                C19382 * C11774 +
            (C16318 + C16319) * C19382 * C11775) *
               C2031 -
           ((C16320 + C16321) * C19382 * C11775 +
            (C16319 + C16318) * C19382 * C11774) *
               C2032) *
              C19416 * C1509 +
          (((C10825 + C10824) * C19382 * C11774 +
            (C8453 * C1123 - C8621 * C1061 - C8453 * C1223 + C8397 * C1273 +
             C8454 * C6969 - C8622 * C6915 - C8454 * C7073 + C8398 * C7125) *
                C19382 * C11775) *
               C2032 -
           ((C10824 + C10825) * C19382 * C11775 +
            (C8649 + C8648) * C19382 * C11774) *
               C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8453 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C8397 +
            (C15676 - C15677 + C15678 - C15679) * C8454 +
            (C15842 - C15843 + C15844 - C15845) * C8398) *
               C19382 * C2031 +
           ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C8453 +
            (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 -
             C11775 * C1316) *
                C8397 +
            (C11876 * C2553 - C11774 * C2671 + C11877 * C3861 -
             C11775 * C3955) *
                C8454 +
            (C11876 * C2727 - C11774 * C2836 + C11877 * C3999 -
             C11775 * C4084) *
                C8398) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C11880 - C11879 + C11882 - C11881) * C8453 +
            (C12046 - C12045 + C12048 - C12047) * C8397 +
            (C13391 - C13392 + C13393 - C13394) * C8454 +
            (C13604 - C13605 + C13606 - C13607) * C8398) *
               C19382 * C2031 +
           ((C14039 - C14038 + C14041 - C14040) * C8453 +
            (C14255 - C14254 + C14257 - C14256) * C8397 +
            (C11774 * C2672 - C11876 * C2554 + C11775 * C7021 -
             C11877 * C6915) *
                C8454 +
            (C11774 * C2837 - C11876 * C2728 + C11775 * C7176 -
             C11877 * C7073) *
                C8398) *
               C19382 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C19382 * C98 - C3043 * C93) * C11876 +
                      (C19382 * C448 - C3043 * C443) * C11774 +
                      (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                         C8397 +
                     ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                      (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                         C8398) *
                        C2031 +
                    (((C6610 - C6609) * C11876 + (C6773 - C6772) * C11774 +
                      (C6614 - C6613) * C11877 + (C6775 - C6774) * C11775) *
                         C8397 +
                     ((C5420 - C5421) * C11876 + (C5586 - C5587) * C11774 +
                      (C8064 - C8065) * C11877 + (C8238 - C8239) * C11775) *
                         C8398) *
                        C2032) *
                       C19416 * C1509 +
                   ((((C3043 * C94 - C19382 * C100) * C11876 +
                      (C3043 * C444 - C19382 * C449) * C11774 +
                      (C7560 - C7561) * C11877 + (C7731 - C7732) * C11775) *
                         C8397 +
                     ((C4443 - C4444) * C11876 + (C4607 - C4608) * C11774 +
                      (C16803 - C16804) * C11877 + (C17005 - C17006) * C11775) *
                         C8398) *
                        C2031 +
                    (((C7561 - C7560) * C11876 + (C7732 - C7731) * C11774 +
                      (C7565 - C7564) * C11877 + (C7734 - C7733) * C11775) *
                         C8397 +
                     ((C16804 - C16803) * C11876 + (C17006 - C17005) * C11774 +
                      (C19382 * C6916 - C3043 * C6915) * C11877 +
                      (C19382 * C7228 - C3043 * C7227) * C11775) *
                         C8398) *
                        C2032) *
                       C19416 * C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) *
                C11876 +
            (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
                C11774 +
            (C16128 - C16129 + C16130 - C16131) * C11877 +
            (C16472 - C16473 + C16474 - C16475) * C11775) *
               C19382 * C2031 +
           ((C16129 - C16128 + C16131 - C16130) * C11876 +
            (C16473 - C16472 + C16475 - C16474) * C11774 +
            (C16136 - C16137 + C16138 - C16139) * C11877 +
            (C16476 - C16477 + C16478 - C16479) * C11775) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C8457 - C8456 + C8459 - C8458) * C11876 +
            (C8803 - C8802 + C8805 - C8804) * C11774 +
            (C10602 - C10603 + C10604 - C10605) * C11877 +
            (C11026 - C11027 + C11028 - C11029) * C11775) *
               C19382 * C2031 +
           ((C10603 - C10602 + C10605 - C10604) * C11876 +
            (C11027 - C11026 + C11029 - C11028) * C11774 +
            (C8397 * C1123 - C8453 * C1061 + C8398 * C6969 - C8454 * C6915) *
                C11877 +
            (C8397 * C1411 - C8453 * C1361 + C8398 * C7279 - C8454 * C7227) *
                C11775) *
               C19382 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  ((((C11876 * C215 - C12202 * C93 - C11876 * C443 +
                      C11774 * C545 + C11877 * C1169 - C12203 * C1059 -
                      C11877 * C1357 + C11775 * C1453) *
                         C8397 +
                     (C16024 + C16025) * C8398) *
                        C19382 * C2031 -
                    ((C11877 * C3955 - C12203 * C3861 - C11877 * C4125 +
                      C11775 * C4210 + C11876 * C2671 - C12202 * C2553 -
                      C11876 * C2889 + C11774 * C2998) *
                         C8398 +
                     (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 +
                      C11775 * C1454 + C11876 * C1169 - C12202 * C1059 -
                      C11876 * C1357 + C11774 * C1453) *
                         C8397) *
                        C19382 * C2032) *
                       C19416 * C1509 +
                   (((C14475 + C14474) * C8397 +
                     (C11876 * C2672 - C12202 * C2554 - C11876 * C2890 +
                      C11774 * C2999 + C11877 * C7021 - C12203 * C6915 -
                      C11877 * C7227 + C11775 * C7330) *
                         C8398) *
                        C19382 * C2032 -
                    ((C13820 + C13821) * C8398 + (C12230 + C12229) * C8397) *
                        C19382 * C2031) *
                       C19416 * C1510)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C11774 +
            C6463 * C11775) *
               C8397 +
           (C3420 * C11774 + C5253 * C11775) * C8398) *
              C19430 * C19416 * C84 -
          (((C3043 * C2558 - C3044 * C2554 - C3043 * C2559 + C19382 * C2563) *
                C11775 +
            C4279 * C11774) *
               C8398 +
           (C7398 * C11775 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C11774) *
               C8397) *
              C19430 * C19416 * C85 +
          (((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
                C11774 +
            (C3043 * C1063 - C3044 * C1057 - C3043 * C1064 + C19382 * C1075) *
                C11775) *
               C8397 +
           ((C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
                C11774 +
            (C3043 * C2560 - C3044 * C2555 - C3043 * C2561 + C19382 * C2564) *
                C11775) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C11774 +
            C6463 * C11775) *
               C8397 +
           (C15572 + C15573) * C8398) *
              C19430 * C612 -
          ((C15574 + C15575) * C8398 + (C15573 + C15572) * C8397) * C19430 *
              C613 +
          ((C15575 + C15574) * C8397 +
           (C3422 * C11774 +
            (C3043 * C5236 - C3044 * C5235 - C3043 * C5237 + C19382 * C5238) *
                C11775) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C3043 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                C19382) *
               C11774 +
           ((C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
                C3043 +
            (C8397 * C1125 - C8453 * C1068 + C8398 * C2618 - C8454 * C2557) *
                C19382) *
               C11775) *
              C19430 * C19416 * C84 +
          (((C8457 - C8456 + C8459 - C8458) * C3043 +
            (C8461 - C8460 + C8463 - C8462) * C19382) *
               C11774 +
           ((C10602 - C10603 + C10604 - C10605) * C3043 +
            (C10606 - C10607 + C10608 - C10609) * C19382) *
               C11775) *
              C19430 * C19416 * C85 +
          (((C8465 - C8464 + C8467 - C8466) * C3043 +
            (C8469 - C8468 + C8471 - C8470) * C19382) *
               C11774 +
           ((C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
                C3043 +
            (C8397 * C1127 - C8453 * C1064 + C8398 * C2620 - C8454 * C2561) *
                C19382) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C3043 +
            (C8397 * C157 - C8453 * C99 + C8398 * C684 - C8454 * C627) *
                C19382) *
               C11774 +
           ((C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
                C3043 +
            (C8397 * C1125 - C8453 * C1068 + C8398 * C2618 - C8454 * C2557) *
                C19382) *
               C11775) *
              C19430 * C612 +
          (((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
                C3043 +
            (C8453 * C627 - C8397 * C684 + C8454 * C629 - C8398 * C687) *
                C19382) *
               C11774 +
           ((C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
                C3043 +
            (C8453 * C2557 - C8397 * C2618 + C8454 * C3864 - C8398 * C3913) *
                C19382) *
               C11775) *
              C19430 * C613 +
          (((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
                C3043 +
            (C8397 * C687 - C8453 * C629 + C8398 * C3465 - C8454 * C3396) *
                C19382) *
               C11774 +
           ((C8397 * C3910 - C8453 * C3860 + C8398 * C5305 - C8454 * C5235) *
                C3043 +
            (C8397 * C3913 - C8453 * C3864 + C8398 * C5306 - C8454 * C5237) *
                C19382) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C3043 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C19382) *
               C8397 +
           ((C11774 * C728 - C11876 * C618 + C11775 * C2671 - C11877 * C2553) *
                C3043 +
            (C11774 * C734 - C11876 * C627 + C11775 * C2674 - C11877 * C2557) *
                C19382) *
               C8398) *
              C19430 * C19416 * C84 +
          (((C11880 - C11879 + C11882 - C11881) * C3043 +
            (C11884 - C11883 + C11886 - C11885) * C19382) *
               C8397 +
           ((C13391 - C13392 + C13393 - C13394) * C3043 +
            (C13395 - C13396 + C13397 - C13398) * C19382) *
               C8398) *
              C19430 * C19416 * C85 +
          (((C11888 - C11887 + C11890 - C11889) * C3043 +
            (C11892 - C11891 + C11894 - C11893) * C19382) *
               C8397 +
           ((C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
                C3043 +
            (C11774 * C736 - C11876 * C623 + C11775 * C2676 - C11877 * C2561) *
                C19382) *
               C8398) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C3043 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C19382) *
               C8397 +
           ((C15676 - C15677 + C15678 - C15679) * C3043 +
            (C15680 - C15681 + C15682 - C15683) * C19382) *
               C8398) *
              C19430 * C612 +
          (((C15677 - C15676 + C15679 - C15678) * C3043 +
            (C15681 - C15680 + C15683 - C15682) * C19382) *
               C8397 +
           ((C15684 - C15685 + C15686 - C15687) * C3043 +
            (C15688 - C15689 + C15690 - C15691) * C19382) *
               C8398) *
              C19430 * C613 +
          (((C15685 - C15684 + C15687 - C15686) * C3043 +
            (C15689 - C15688 + C15691 - C15690) * C19382) *
               C8397 +
           ((C11774 * C3505 - C11876 * C3393 + C11775 * C5357 -
             C11877 * C5235) *
                C3043 +
            (C11774 * C3507 - C11876 * C3396 + C11775 * C5358 -
             C11877 * C5237) *
                C19382) *
               C8398) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C8453 +
                     (C19382 * C282 - C3043 * C277) * C8397 +
                     (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                        C11774 +
                    ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                     (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                        C11775) *
                       C19430 * C19416 * C84 +
                   (((C3043 * C94 - C19382 * C100) * C8453 +
                     (C3043 * C278 - C19382 * C283) * C8397 +
                     (C4443 - C4444) * C8454 + (C4445 - C4446) * C8398) *
                        C11774 +
                    ((C7560 - C7561) * C8453 + (C7562 - C7563) * C8397 +
                     (C3043 * C2554 - C19382 * C2558) * C8454 +
                     (C3043 * C2728 - C19382 * C2731) * C8398) *
                        C11775) *
                       C19430 * C19416 * C85 +
                   (((C19382 * C102 - C3043 * C95) * C8453 +
                     (C19382 * C284 - C3043 * C279) * C8397 +
                     (C19382 * C622 - C3043 * C616) * C8454 +
                     (C19382 * C786 - C3043 * C780) * C8398) *
                        C11774 +
                    ((C19382 * C1063 - C3043 * C1057) * C8453 +
                     (C19382 * C1227 - C3043 * C1221) * C8397 +
                     (C19382 * C2560 - C3043 * C2555) * C8454 +
                     (C19382 * C2732 - C3043 * C2729) * C8398) *
                        C11775) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C8453 +
                     (C19382 * C282 - C3043 * C277) * C8397 +
                     (C3569 - C3570) * C8454 + (C3571 - C3572) * C8398) *
                        C11774 +
                    ((C6609 - C6610) * C8453 + (C6611 - C6612) * C8397 +
                     (C5421 - C5420) * C8454 + (C5423 - C5422) * C8398) *
                        C11775) *
                       C19430 * C612 +
                   (((C3570 - C3569) * C8453 + (C3572 - C3571) * C8397 +
                     (C3574 - C3573) * C8454 + (C3576 - C3575) * C8398) *
                        C11774 +
                    ((C5420 - C5421) * C8453 + (C5422 - C5423) * C8397 +
                     (C5424 - C5425) * C8454 + (C5426 - C5427) * C8398) *
                        C11775) *
                       C19430 * C613 +
                   ((C3581 * C8453 + C3582 * C8397 + (C3578 - C3577) * C8454 +
                     (C3580 - C3579) * C8398) *
                        C11774 +
                    ((C5425 - C5424) * C8453 + (C5427 - C5426) * C8397 +
                     (C19382 * C5236 - C3043 * C5235) * C8454 +
                     (C19382 * C5418 - C3043 * C5417) * C8398) *
                        C11775) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C19382 * C11774 +
           (C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271 +
            C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783) *
               C19382 * C11775) *
              C19430 * C19416 * C84 -
          ((C10824 + C10825) * C19382 * C11775 +
           (C8649 + C8648) * C19382 * C11774) *
              C19430 * C19416 * C85 +
          ((C8651 + C8650) * C19382 * C11774 +
           (C8453 * C1121 - C8621 * C1057 - C8453 * C1221 + C8397 * C1269 +
            C8454 * C2617 - C8622 * C2555 - C8454 * C2729 + C8398 * C2785) *
               C19382 * C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8453 * C152 - C8621 * C93 - C8453 * C277 + C8397 * C326 +
            C8454 * C678 - C8622 * C618 - C8454 * C778 + C8398 * C830) *
               C19382 * C11774 +
           (C8453 * C1119 - C8621 * C1059 - C8453 * C1219 + C8397 * C1271 +
            C8454 * C2615 - C8622 * C2553 - C8454 * C2727 + C8398 * C2783) *
               C19382 * C11775) *
              C19430 * C612 -
          ((C8454 * C3910 - C8622 * C3860 - C8454 * C3998 + C8398 * C4042 +
            C8453 * C2615 - C8621 * C2553 - C8453 * C2727 + C8397 * C2783) *
               C19382 * C11775 +
           (C8454 * C681 - C8622 * C619 - C8454 * C781 + C8398 * C831 +
            C8453 * C678 - C8621 * C618 - C8453 * C778 + C8397 * C830) *
               C19382 * C11774) *
              C19430 * C613 +
          ((C8453 * C681 - C8621 * C619 - C8453 * C781 + C8397 * C831 +
            C8454 * C3463 - C8622 * C3393 - C8454 * C3564 + C8398 * C3620) *
               C19382 * C11774 +
           (C8453 * C3910 - C8621 * C3860 - C8453 * C3998 + C8397 * C4042 +
            C8454 * C5305 - C8622 * C5235 - C8454 * C5417 + C8398 * C5477) *
               C19382 * C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8453 +
           (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
               C8397 +
           (C11774 * C728 - C11876 * C618 + C11775 * C2671 - C11877 * C2553) *
               C8454 +
           (C11774 * C872 - C11876 * C778 + C11775 * C2836 - C11877 * C2727) *
               C8398) *
              C19382 * C19430 * C19416 * C84 +
          ((C11880 - C11879 + C11882 - C11881) * C8453 +
           (C12046 - C12045 + C12048 - C12047) * C8397 +
           (C13391 - C13392 + C13393 - C13394) * C8454 +
           (C13604 - C13605 + C13606 - C13607) * C8398) *
              C19382 * C19430 * C19416 * C85 +
          ((C11888 - C11887 + C11890 - C11889) * C8453 +
           (C12050 - C12049 + C12052 - C12051) * C8397 +
           (C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
               C8454 +
           (C11774 * C874 - C11876 * C780 + C11775 * C2838 - C11877 * C2729) *
               C8398) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8453 +
           (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
               C8397 +
           (C15676 - C15677 + C15678 - C15679) * C8454 +
           (C15842 - C15843 + C15844 - C15845) * C8398) *
              C19382 * C19430 * C612 +
          ((C15677 - C15676 + C15679 - C15678) * C8453 +
           (C15843 - C15842 + C15845 - C15844) * C8397 +
           (C15684 - C15685 + C15686 - C15687) * C8454 +
           (C15846 - C15847 + C15848 - C15849) * C8398) *
              C19382 * C19430 * C613 +
          ((C15685 - C15684 + C15687 - C15686) * C8453 +
           (C15847 - C15846 + C15849 - C15848) * C8397 +
           (C11774 * C3505 - C11876 * C3393 + C11775 * C5357 - C11877 * C5235) *
               C8454 +
           (C11774 * C3660 - C11876 * C3564 + C11775 * C5528 - C11877 * C5417) *
               C8398) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C11876 +
                     (C19382 * C448 - C3043 * C443) * C11774 +
                     (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                        C8397 +
                    ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                     (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                        C8398) *
                       C19430 * C19416 * C84 +
                   (((C3043 * C94 - C19382 * C100) * C11876 +
                     (C3043 * C444 - C19382 * C449) * C11774 +
                     (C7560 - C7561) * C11877 + (C7731 - C7732) * C11775) *
                        C8397 +
                    ((C4443 - C4444) * C11876 + (C4607 - C4608) * C11774 +
                     (C3043 * C2554 - C19382 * C2558) * C11877 +
                     (C3043 * C2890 - C19382 * C2893) * C11775) *
                        C8398) *
                       C19430 * C19416 * C85 +
                   (((C19382 * C102 - C3043 * C95) * C11876 +
                     (C19382 * C450 - C3043 * C445) * C11774 +
                     (C19382 * C1063 - C3043 * C1057) * C11877 +
                     (C19382 * C1365 - C3043 * C1359) * C11775) *
                        C8397 +
                    ((C19382 * C622 - C3043 * C616) * C11876 +
                     (C19382 * C924 - C3043 * C918) * C11774 +
                     (C19382 * C2560 - C3043 * C2555) * C11877 +
                     (C19382 * C2894 - C3043 * C2891) * C11775) *
                        C8398) *
                       C19430 * C19416 * C86)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                  ((((C19382 * C98 - C3043 * C93) * C11876 +
                     (C19382 * C448 - C3043 * C443) * C11774 +
                     (C6609 - C6610) * C11877 + (C6772 - C6773) * C11775) *
                        C8397 +
                    ((C3569 - C3570) * C11876 + (C3712 - C3713) * C11774 +
                     (C5421 - C5420) * C11877 + (C5587 - C5586) * C11775) *
                        C8398) *
                       C19430 * C612 +
                   (((C3570 - C3569) * C11876 + (C3713 - C3712) * C11774 +
                     (C5420 - C5421) * C11877 + (C5586 - C5587) * C11775) *
                        C8397 +
                    ((C3574 - C3573) * C11876 + (C3716 - C3715) * C11774 +
                     (C5424 - C5425) * C11877 + (C5588 - C5589) * C11775) *
                        C8398) *
                       C19430 * C613 +
                   ((C3581 * C11876 + C3719 * C11774 +
                     (C5425 - C5424) * C11877 + (C5589 - C5588) * C11775) *
                        C8397 +
                    ((C3578 - C3577) * C11876 + (C3718 - C3717) * C11774 +
                     (C19382 * C5236 - C3043 * C5235) * C11877 +
                     (C19382 * C5584 - C3043 * C5583) * C11775) *
                        C8398) *
                       C19430 * C614) *
                  C19404) /
                     (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C11876 +
           (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
               C11774 +
           (C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
               C11877 +
           (C8397 * C1407 - C8453 * C1357 + C8398 * C2945 - C8454 * C2889) *
               C11775) *
              C19382 * C19430 * C19416 * C84 +
          ((C8457 - C8456 + C8459 - C8458) * C11876 +
           (C8803 - C8802 + C8805 - C8804) * C11774 +
           (C10602 - C10603 + C10604 - C10605) * C11877 +
           (C11026 - C11027 + C11028 - C11029) * C11775) *
              C19382 * C19430 * C19416 * C85 +
          ((C8465 - C8464 + C8467 - C8466) * C11876 +
           (C8807 - C8806 + C8809 - C8808) * C11774 +
           (C8397 * C1121 - C8453 * C1057 + C8398 * C2617 - C8454 * C2555) *
               C11877 +
           (C8397 * C1409 - C8453 * C1359 + C8398 * C2947 - C8454 * C2891) *
               C11775) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8397 * C152 - C8453 * C93 + C8398 * C678 - C8454 * C618) * C11876 +
           (C8397 * C491 - C8453 * C443 + C8398 * C966 - C8454 * C916) *
               C11774 +
           (C8397 * C1119 - C8453 * C1059 + C8398 * C2615 - C8454 * C2553) *
               C11877 +
           (C8397 * C1407 - C8453 * C1357 + C8398 * C2945 - C8454 * C2889) *
               C11775) *
              C19382 * C19430 * C612 +
          ((C8453 * C618 - C8397 * C678 + C8454 * C619 - C8398 * C681) *
               C11876 +
           (C8453 * C916 - C8397 * C966 + C8454 * C919 - C8398 * C969) *
               C11774 +
           (C8453 * C2553 - C8397 * C2615 + C8454 * C3860 - C8398 * C3910) *
               C11877 +
           (C8453 * C2889 - C8397 * C2945 + C8454 * C4124 - C8398 * C4168) *
               C11775) *
              C19382 * C19430 * C613 +
          ((C8397 * C681 - C8453 * C619 + C8398 * C3463 - C8454 * C3393) *
               C11876 +
           (C8397 * C969 - C8453 * C919 + C8398 * C3759 - C8454 * C3707) *
               C11774 +
           (C8397 * C3910 - C8453 * C3860 + C8398 * C5305 - C8454 * C5235) *
               C11877 +
           (C8397 * C4168 - C8453 * C4124 + C8398 * C5639 - C8454 * C5583) *
               C11775) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C8397 +
           (C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012 +
            C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998) *
               C8398) *
              C19382 * C19430 * C19416 * C84 -
          ((C13820 + C13821) * C8398 + (C12230 + C12229) * C8397) * C19382 *
              C19430 * C19416 * C85 +
          ((C12232 + C12231) * C8397 +
           (C11876 * C730 - C12202 * C616 - C11876 * C918 + C11774 * C1010 +
            C11877 * C2673 - C12203 * C2555 - C11877 * C2891 + C11775 * C3000) *
               C8398) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C8397 +
           (C16024 + C16025) * C8398) *
              C19382 * C19430 * C612 -
          ((C16026 + C16027) * C8398 + (C16025 + C16024) * C8397) * C19382 *
              C19430 * C613 +
          ((C16027 + C16026) * C8397 +
           (C11876 * C3505 - C12202 * C3393 - C11876 * C3707 + C11774 * C3799 +
            C11877 * C5357 - C12203 * C5235 - C11877 * C5583 + C11775 * C5690) *
               C8398) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C19430 * C1507 -
           (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C1508) *
              C1509 +
          ((C4281 * C3040 + C4282 * C3041 +
            (C3043 * C4263 - C3044 * C4262 - C3043 * C4264 + C19382 * C4265) *
                C19466 * C3042) *
               C19430 * C1508 -
           (C4282 * C3042 + C4281 * C3041 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C19466 * C3040) *
               C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C19430 * C1507 -
           (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
            C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
            C87 * C627 + C77 * C636) *
               C19466 * C19455 * C19430 * C1508) *
              C1509 +
          ((C87 * C624 - C88 * C617 - C87 * C625 + C77 * C635 + C89 * C622 -
            C90 * C616 - C89 * C623 + C78 * C634 + C91 * C1512 - C92 * C1511 -
            C91 * C1513 + C79 * C1514) *
               C19466 * C19455 * C19430 * C1508 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C19466 * C19455 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
            C6463 * C5744 + C6464 * C5745) *
               C19455 * C19430 * C1507 -
           ((C3043 * C3865 - C3044 * C3861 - C3043 * C3866 + C19382 * C3870) *
                C5745 +
            C5253 * C5744 + C3420 * C5743) *
               C19455 * C19430 * C1508) *
              C1509 +
          ((C4279 * C5743 +
            (C3043 * C2558 - C3044 * C2554 - C3043 * C2559 + C19382 * C2563) *
                C5744 +
            (C3043 * C6916 - C3044 * C6915 - C3043 * C6917 + C19382 * C6918) *
                C5745) *
               C19455 * C19430 * C1508 -
           ((C3043 * C1071 - C3044 * C1061 - C3043 * C1072 + C19382 * C1079) *
                C5745 +
            (C3043 * C1065 - C3044 * C1058 - C3043 * C1066 + C19382 * C1076) *
                C5744 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C5743) *
               C19455 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C3043 +
            (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
             C3042 * C687 - C3085 * C629) *
                C19382) *
               C19466 * C19430 * C1507 +
           ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C3043 +
            (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
             C3085 * C3396 - C3042 * C3465) *
                C19382) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C3043 +
            (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
             C3085 * C631 - C3042 * C688) *
                C19382) *
               C19466 * C19430 * C1507 +
           ((C3040 * C679 - C3083 * C617 + C3041 * C682 - C3084 * C620 +
             C3042 * C4332 - C3085 * C4262) *
                C3043 +
            (C3040 * C685 - C3083 * C625 + C3041 * C688 - C3084 * C631 +
             C3042 * C4333 - C3085 * C4264) *
                C19382) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C87 +
            (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C19466 * C19430 * C1507 +
           ((C151 * C618 - C19455 * C678) * C87 +
            (C151 * C627 - C19455 * C684) * C77 + (C1568 - C1569) * C89 +
            (C1570 - C1571) * C78 + (C1572 - C1573) * C91 +
            (C1574 - C1575) * C79) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C19466 * C19430 * C1507 +
           ((C1569 - C1568) * C87 + (C1571 - C1570) * C77 +
            (C1573 - C1572) * C89 + (C1575 - C1574) * C78 +
            (C19455 * C1565 - C151 * C1511) * C91 +
            (C19455 * C1566 - C151 * C1513) * C79) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C3043 +
             (C19455 * C157 - C151 * C99) * C19382) *
                C5743 +
            ((C6508 - C6509) * C3043 + (C6510 - C6511) * C19382) * C5744 +
            C6524 * C5745) *
               C19430 * C1507 +
           (((C151 * C618 - C19455 * C678) * C3043 +
             (C151 * C627 - C19455 * C684) * C19382) *
                C5743 +
            ((C151 * C2553 - C19455 * C2615) * C3043 +
             (C151 * C2557 - C19455 * C2618) * C19382) *
                C5744 +
            ((C151 * C3861 - C19455 * C3911) * C3043 +
             (C151 * C3866 - C19455 * C3914) * C19382) *
                C5745) *
               C19430 * C1508) *
              C1509 +
          ((((C164 - C163) * C3043 + (C166 - C165) * C19382) * C5743 +
            ((C2090 - C2091) * C3043 + (C2092 - C2093) * C19382) * C5744 +
            ((C151 * C1061 - C19455 * C1123) * C3043 +
             (C151 * C1072 - C19455 * C1129) * C19382) *
                C5745) *
               C19430 * C1507 +
           (((C1569 - C1568) * C3043 + (C1571 - C1570) * C19382) * C5743 +
            ((C19455 * C2616 - C151 * C2554) * C3043 +
             (C19455 * C2619 - C151 * C2559) * C19382) *
                C5744 +
            ((C19455 * C6969 - C151 * C6915) * C3043 +
             (C19455 * C6970 - C151 * C6917) * C19382) *
                C5745) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C19430 * C1507 +
           (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
            ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
            ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
               C19430 * C1508) *
              C1509 +
          ((((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
            ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
            ((C4387 - C4388) * C3043 + (C4389 - C4390) * C19382) * C3042) *
               C19430 * C1507 +
           (((C1629 - C1628) * C3043 + (C1631 - C1630) * C19382) * C3040 +
            ((C4388 - C4387) * C3043 + (C4390 - C4389) * C19382) * C3041 +
            ((C19466 * C4384 - C214 * C4262) * C3043 +
             (C19466 * C4385 - C214 * C4264) * C19382) *
                C3042) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C19430 * C1507 +
           ((C214 * C618 - C19466 * C728) * C87 +
            (C214 * C627 - C19466 * C734) * C77 + (C1628 - C1629) * C89 +
            (C1630 - C1631) * C78 + (C1632 - C1633) * C91 +
            (C1634 - C1635) * C79) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C19455 * C19430 * C1507 +
           ((C1629 - C1628) * C87 + (C1631 - C1630) * C77 +
            (C1633 - C1632) * C89 + (C1635 - C1634) * C78 +
            (C19466 * C1625 - C214 * C1511) * C91 +
            (C19466 * C1626 - C214 * C1513) * C79) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C3043 +
            (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
             C5745 * C1178 - C5824 * C1070) *
                C19382) *
               C19455 * C19430 * C1507 +
           ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
             C5824 * C3861 - C5745 * C3955) *
                C3043 +
            (C5822 * C627 - C5743 * C734 + C5823 * C2557 - C5744 * C2674 +
             C5824 * C3866 - C5745 * C3958) *
                C19382) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
             C5824 * C1061 - C5745 * C1173) *
                C3043 +
            (C5822 * C101 - C5743 * C221 + C5823 * C1066 - C5744 * C1176 +
             C5824 * C1072 - C5745 * C1179) *
                C19382) *
               C19455 * C19430 * C1507 +
           ((C5743 * C729 - C5822 * C617 + C5744 * C2672 - C5823 * C2554 +
             C5745 * C7021 - C5824 * C6915) *
                C3043 +
            (C5743 * C735 - C5822 * C625 + C5744 * C2675 - C5823 * C2559 +
             C5745 * C7022 - C5824 * C6917) *
                C19382) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C19430 * C1507 +
           ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
            (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
            (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C3043 * C94 - C19382 * C100) * C3083 +
            (C3043 * C278 - C19382 * C283) * C3040 + (C4443 - C4444) * C3084 +
            (C4445 - C4446) * C3041 + (C4447 - C4448) * C3085 +
            (C4449 - C4450) * C3042) *
               C19466 * C19430 * C1507 +
           ((C4444 - C4443) * C3083 + (C4446 - C4445) * C3040 +
            (C4448 - C4447) * C3084 + (C4450 - C4449) * C3041 +
            (C19382 * C4263 - C3043 * C4262) * C3085 +
            (C19382 * C4441 - C3043 * C4440) * C3042) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C19430 * C1507 +
           ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C151 +
            (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
             C79 * C786) *
                C19455) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C151 +
            (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
             C79 * C285) *
                C19455) *
               C19466 * C19430 * C1507 +
           ((C77 * C624 - C87 * C617 + C78 * C622 - C89 * C616 + C79 * C1512 -
             C91 * C1511) *
                C151 +
            (C77 * C785 - C87 * C779 + C78 * C786 - C89 * C780 + C79 * C1686 -
             C91 * C1685) *
                C19455) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C151 +
             (C19382 * C282 - C3043 * C277) * C19455) *
                C5743 +
            ((C6609 - C6610) * C151 + (C6611 - C6612) * C19455) * C5744 +
            C6625 * C5745) *
               C19430 * C1507 +
           (((C3570 - C3569) * C151 + (C3572 - C3571) * C19455) * C5743 +
            ((C5420 - C5421) * C151 + (C5422 - C5423) * C19455) * C5744 +
            ((C3043 * C3861 - C19382 * C3865) * C151 +
             (C3043 * C3999 - C19382 * C4002) * C19455) *
                C5745) *
               C19430 * C1508) *
              C1509 +
          ((((C3043 * C94 - C19382 * C100) * C151 +
             (C3043 * C278 - C19382 * C283) * C19455) *
                C5743 +
            ((C3043 * C1058 - C19382 * C1065) * C151 +
             (C3043 * C1220 - C19382 * C1226) * C19455) *
                C5744 +
            ((C3043 * C1061 - C19382 * C1071) * C151 +
             (C3043 * C1223 - C19382 * C1229) * C19455) *
                C5745) *
               C19430 * C1507 +
           (((C4444 - C4443) * C151 + (C4446 - C4445) * C19455) * C5743 +
            ((C19382 * C2558 - C3043 * C2554) * C151 +
             (C19382 * C2731 - C3043 * C2728) * C19455) *
                C5744 +
            ((C19382 * C6916 - C3043 * C6915) * C151 +
             (C19382 * C7074 - C3043 * C7073) * C19455) *
                C5745) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C19430 * C1507 -
           (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
            C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
            C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
               C19382 * C19466 * C19430 * C1508) *
              C1509 +
          ((C3083 * C679 - C3200 * C617 - C3083 * C779 + C3040 * C829 +
            C3084 * C682 - C3201 * C620 - C3084 * C782 + C3041 * C832 +
            C3085 * C4332 - C3202 * C4262 - C3085 * C4440 + C3042 * C4500) *
               C19382 * C19466 * C19430 * C1508 -
           (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
            C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
            C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
               C19382 * C19466 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C19430 * C1507 -
           (C1751 * C79 + C1752 * C78 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
               C19466 * C19430 * C1508) *
              C1509 +
          ((C1752 * C77 + C1751 * C78 +
            (C151 * C1565 - C325 * C1511 - C151 * C1685 + C19455 * C1737) *
                C79) *
               C19466 * C19430 * C1508 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
                C5743 +
            C6687 * C5744 + C6688 * C5745) *
               C19430 * C1507 -
           ((C151 * C3911 - C325 * C3861 - C151 * C3999 + C19455 * C4043) *
                C19382 * C5745 +
            (C151 * C2615 - C325 * C2553 - C151 * C2727 + C19455 * C2783) *
                C19382 * C5744 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C19382 *
                C5743) *
               C19430 * C1508) *
              C1509 +
          ((C1752 * C19382 * C5743 +
            (C151 * C2616 - C325 * C2554 - C151 * C2728 + C19455 * C2784) *
                C19382 * C5744 +
            (C151 * C6969 - C325 * C6915 - C151 * C7073 + C19455 * C7125) *
                C19382 * C5745) *
               C19430 * C1508 -
           ((C151 * C1123 - C325 * C1061 - C151 * C1223 + C19455 * C1273) *
                C19382 * C5745 +
            C2274 * C19382 * C5744 + C350 * C19382 * C5743) *
               C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C19430 * C1507 +
           ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
            (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
            (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C227 - C226) * C3083 + (C397 - C396) * C3040 +
            (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
            (C4387 - C4388) * C3085 + (C4553 - C4554) * C3042) *
               C19382 * C19430 * C1507 +
           ((C1629 - C1628) * C3083 + (C1805 - C1804) * C3040 +
            (C4388 - C4387) * C3084 + (C4554 - C4553) * C3041 +
            (C19466 * C4384 - C214 * C4262) * C3085 +
            (C19466 * C4551 - C214 * C4440) * C3042) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C19430 * C1507 +
           (((C214 * C618 - C19466 * C728) * C151 +
             (C214 * C778 - C19466 * C872) * C19455) *
                C77 +
            ((C1628 - C1629) * C151 + (C1804 - C1805) * C19455) * C78 +
            ((C1632 - C1633) * C151 + (C1806 - C1807) * C19455) * C79) *
               C19430 * C1508) *
              C1509 +
          ((((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
               C19430 * C1507 +
           (((C1629 - C1628) * C151 + (C1805 - C1804) * C19455) * C77 +
            ((C1633 - C1632) * C151 + (C1807 - C1806) * C19455) * C78 +
            ((C19466 * C1625 - C214 * C1511) * C151 +
             (C19466 * C1802 - C214 * C1685) * C19455) *
                C79) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C151 +
            (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
             C5745 * C1316 - C5824 * C1222) *
                C19455) *
               C19382 * C19430 * C1507 +
           ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
             C5824 * C3861 - C5745 * C3955) *
                C151 +
            (C5822 * C778 - C5743 * C872 + C5823 * C2727 - C5744 * C2836 +
             C5824 * C3999 - C5745 * C4084) *
                C19455) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
             C5824 * C1061 - C5745 * C1173) *
                C151 +
            (C5822 * C278 - C5743 * C391 + C5823 * C1220 - C5744 * C1314 +
             C5824 * C1223 - C5745 * C1317) *
                C19455) *
               C19382 * C19430 * C1507 +
           ((C5743 * C729 - C5822 * C617 + C5744 * C2672 - C5823 * C2554 +
             C5745 * C7021 - C5824 * C6915) *
                C151 +
            (C5743 * C873 - C5822 * C779 + C5744 * C2837 - C5823 * C2728 +
             C5745 * C7176 - C5824 * C7073) *
                C19455) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C19430 * C1507 +
           (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
            ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
            ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
               C19430 * C1508) *
              C1509 +
          ((((C3043 * C94 - C19382 * C100) * C214 +
             (C3043 * C444 - C19382 * C449) * C19466) *
                C3040 +
            ((C4443 - C4444) * C214 + (C4607 - C4608) * C19466) * C3041 +
            ((C4447 - C4448) * C214 + (C4609 - C4610) * C19466) * C3042) *
               C19430 * C1507 +
           (((C4444 - C4443) * C214 + (C4608 - C4607) * C19466) * C3040 +
            ((C4448 - C4447) * C214 + (C4610 - C4609) * C19466) * C3041 +
            ((C19382 * C4263 - C3043 * C4262) * C214 +
             (C19382 * C4605 - C3043 * C4604) * C19466) *
                C3042) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C19430 * C1507 +
           ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C214 +
            (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
             C79 * C924) *
                C19466) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C19466) *
               C19455 * C19430 * C1507 +
           ((C77 * C624 - C87 * C617 + C78 * C622 - C89 * C616 + C79 * C1512 -
             C91 * C1511) *
                C214 +
            (C77 * C923 - C87 * C917 + C78 * C924 - C89 * C918 + C79 * C1858 -
             C91 * C1857) *
                C19466) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C5822 +
            (C19382 * C448 - C3043 * C443) * C5743 + (C6609 - C6610) * C5823 +
            (C6772 - C6773) * C5744 + C6621 * C5824 + C6778 * C5745) *
               C19455 * C19430 * C1507 +
           ((C3570 - C3569) * C5822 + (C3713 - C3712) * C5743 +
            (C5420 - C5421) * C5823 + (C5586 - C5587) * C5744 +
            (C3043 * C3861 - C19382 * C3865) * C5824 +
            (C3043 * C4125 - C19382 * C4128) * C5745) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C3043 * C94 - C19382 * C100) * C5822 +
            (C3043 * C444 - C19382 * C449) * C5743 +
            (C3043 * C1058 - C19382 * C1065) * C5823 +
            (C3043 * C1358 - C19382 * C1364) * C5744 +
            (C3043 * C1061 - C19382 * C1071) * C5824 +
            (C3043 * C1361 - C19382 * C1367) * C5745) *
               C19455 * C19430 * C1507 +
           ((C4444 - C4443) * C5822 + (C4608 - C4607) * C5743 +
            (C19382 * C2558 - C3043 * C2554) * C5823 +
            (C19382 * C2893 - C3043 * C2890) * C5744 +
            (C19382 * C6916 - C3043 * C6915) * C5824 +
            (C19382 * C7228 - C3043 * C7227) * C5745) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C19430 * C1507 +
           ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C214 +
            (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
             C3085 * C3707 - C3042 * C3759) *
                C19466) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C214 +
            (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
             C3085 * C920 - C3042 * C970) *
                C19466) *
               C19382 * C19430 * C1507 +
           ((C3040 * C679 - C3083 * C617 + C3041 * C682 - C3084 * C620 +
             C3042 * C4332 - C3085 * C4262) *
                C214 +
            (C3040 * C967 - C3083 * C917 + C3041 * C970 - C3084 * C920 +
             C3042 * C4660 - C3085 * C4604) *
                C19466) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C19430 * C1507 +
           (((C151 * C618 - C19455 * C678) * C214 +
             (C151 * C916 - C19455 * C966) * C19466) *
                C77 +
            ((C1568 - C1569) * C214 + (C1911 - C1912) * C19466) * C78 +
            ((C1572 - C1573) * C214 + (C1913 - C1914) * C19466) * C79) *
               C19430 * C1508) *
              C1509 +
          ((((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
               C19430 * C1507 +
           (((C1569 - C1568) * C214 + (C1912 - C1911) * C19466) * C77 +
            ((C1573 - C1572) * C214 + (C1914 - C1913) * C19466) * C78 +
            ((C19455 * C1565 - C151 * C1511) * C214 +
             (C19455 * C1909 - C151 * C1857) * C19466) *
                C79) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C5822 +
            (C19455 * C491 - C151 * C443) * C5743 + (C6508 - C6509) * C5823 +
            (C6819 - C6820) * C5744 + C6520 * C5824 + C6825 * C5745) *
               C19382 * C19430 * C1507 +
           ((C151 * C618 - C19455 * C678) * C5822 +
            (C151 * C916 - C19455 * C966) * C5743 +
            (C151 * C2553 - C19455 * C2615) * C5823 +
            (C151 * C2889 - C19455 * C2945) * C5744 +
            (C151 * C3861 - C19455 * C3911) * C5824 +
            (C151 * C4125 - C19455 * C4169) * C5745) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C164 - C163) * C5822 + (C498 - C497) * C5743 +
            (C2090 - C2091) * C5823 + (C2433 - C2434) * C5744 +
            (C151 * C1061 - C19455 * C1123) * C5824 +
            (C151 * C1361 - C19455 * C1411) * C5745) *
               C19382 * C19430 * C1507 +
           ((C1569 - C1568) * C5822 + (C1912 - C1911) * C5743 +
            (C19455 * C2616 - C151 * C2554) * C5823 +
            (C19455 * C2946 - C151 * C2890) * C5744 +
            (C19455 * C6969 - C151 * C6915) * C5824 +
            (C19455 * C7279 - C151 * C7227) * C5745) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C19430 * C1507 -
           (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
               C1508) *
              C1509 +
          ((C1979 * C3040 + C4719 * C3041 +
            (C214 * C4384 - C544 * C4262 - C214 * C4604 + C19466 * C4711) *
                C3042) *
               C19382 * C19430 * C1508 -
           (C4719 * C3042 + C1979 * C3041 + C569 * C3040) * C19382 * C19430 *
               C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C19430 * C1507 -
           (C1980 * C79 + C1981 * C78 +
            (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) *
                C19455 * C77) *
               C19430 * C1508) *
              C1509 +
          ((C1981 * C77 + C1980 * C78 +
            (C214 * C1625 - C544 * C1511 - C214 * C1857 + C19466 * C1964) *
                C19455 * C79) *
               C19430 * C1508 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
            C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
            C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
               C19455 * C19382 * C19430 * C1507 -
           (C5824 * C3955 - C6055 * C3861 - C5824 * C4125 + C5745 * C4210 +
            C5823 * C2671 - C6054 * C2553 - C5823 * C2889 + C5744 * C2998 +
            C5822 * C728 - C6053 * C618 - C5822 * C916 + C5743 * C1012) *
               C19455 * C19382 * C19430 * C1508) *
              C1509 +
          ((C5822 * C729 - C6053 * C617 - C5822 * C917 + C5743 * C1011 +
            C5823 * C2672 - C6054 * C2554 - C5823 * C2890 + C5744 * C2999 +
            C5824 * C7021 - C6055 * C6915 - C5824 * C7227 + C5745 * C7330) *
               C19455 * C19382 * C19430 * C1508 -
           (C5824 * C1173 - C6055 * C1061 - C5824 * C1361 + C5745 * C1455 +
            C5823 * C1170 - C6054 * C1058 - C5823 * C1358 + C5744 * C1452 +
            C5822 * C216 - C6053 * C94 - C5822 * C444 + C5743 * C546) *
               C19455 * C19382 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C2031 -
           (C5254 * C3042 + C5255 * C3041 +
            (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
                C19466 * C3040) *
               C2032) *
              C1507 +
          ((C5255 * C3040 + C5254 * C3041 +
            (C3043 * C5236 - C3044 * C5235 - C3043 * C5237 + C19382 * C5238) *
                C19466 * C3042) *
               C2032 -
           (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C2031 -
           (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 +
            C89 * C1065 - C90 * C1058 - C89 * C1066 + C78 * C1076 +
            C87 * C1067 - C88 * C1059 - C87 * C1068 + C77 * C1077) *
               C19466 * C19455 * C2032) *
              C1507 +
          ((C87 * C2556 - C88 * C2553 - C87 * C2557 + C77 * C2562 +
            C89 * C2558 - C90 * C2554 - C89 * C2559 + C78 * C2563 +
            C91 * C2560 - C92 * C2555 - C91 * C2561 + C79 * C2564) *
               C19466 * C19455 * C2032 -
           (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
            C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
            C87 * C627 + C77 * C636) *
               C19466 * C19455 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
            C6463 * C5744 + C6464 * C5745) *
               C19455 * C2031 -
           (C6465 * C5745 + C6464 * C5744 + C6463 * C5743) * C19455 * C2032) *
              C1507 +
          ((C5253 * C5743 + C7899 * C5744 +
            (C3043 * C7889 - C3044 * C7888 - C3043 * C7890 + C19382 * C7891) *
                C5745) *
               C19455 * C2032 -
           (C7899 * C5745 + C5253 * C5744 + C3420 * C5743) * C19455 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C3043 +
            (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
             C3042 * C687 - C3085 * C629) *
                C19382) *
               C19466 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C3043 +
            (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 - C3041 * C2618 +
             C3085 * C3864 - C3042 * C3913) *
                C19382) *
               C19466 * C2032) *
              C1507 +
          (((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C3043 +
            (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
             C3085 * C3396 - C3042 * C3465) *
                C19382) *
               C19466 * C2031 +
           ((C3040 * C2615 - C3083 * C2553 + C3041 * C3910 - C3084 * C3860 +
             C3042 * C5305 - C3085 * C5235) *
                C3043 +
            (C3040 * C2618 - C3083 * C2557 + C3041 * C3913 - C3084 * C3864 +
             C3042 * C5306 - C3085 * C5237) *
                C19382) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C87 +
            (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C19466 * C2031 +
           ((C151 * C1059 - C19455 * C1119) * C87 +
            (C151 * C1068 - C19455 * C1125) * C77 + (C2090 - C2091) * C89 +
            (C2092 - C2093) * C78 + (C2094 - C2095) * C91 +
            (C2096 - C2097) * C79) *
               C19466 * C2032) *
              C1507 +
          (((C151 * C618 - C19455 * C678) * C87 +
            (C151 * C627 - C19455 * C684) * C77 + (C1568 - C1569) * C89 +
            (C1570 - C1571) * C78 + (C1572 - C1573) * C91 +
            (C1574 - C1575) * C79) *
               C19466 * C2031 +
           ((C19455 * C2615 - C151 * C2553) * C87 +
            (C19455 * C2618 - C151 * C2557) * C77 +
            (C19455 * C2616 - C151 * C2554) * C89 +
            (C19455 * C2619 - C151 * C2559) * C78 +
            (C19455 * C2617 - C151 * C2555) * C91 +
            (C19455 * C2620 - C151 * C2561) * C79) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C3043 +
             (C19455 * C157 - C151 * C99) * C19382) *
                C5743 +
            ((C6508 - C6509) * C3043 + (C6510 - C6511) * C19382) * C5744 +
            C6524 * C5745) *
               C2031 +
           (((C6509 - C6508) * C3043 + (C6511 - C6510) * C19382) * C5743 +
            ((C6513 - C6512) * C3043 + (C6515 - C6514) * C19382) * C5744 +
            ((C6516 - C6517) * C3043 + (C6518 - C6519) * C19382) * C5745) *
               C2032) *
              C1507 +
          ((((C151 * C618 - C19455 * C678) * C3043 +
             (C151 * C627 - C19455 * C684) * C19382) *
                C5743 +
            ((C7952 - C7953) * C3043 + (C7954 - C7955) * C19382) * C5744 +
            ((C7956 - C7957) * C3043 + (C7958 - C7959) * C19382) * C5745) *
               C2031 +
           (((C7953 - C7952) * C3043 + (C7955 - C7954) * C19382) * C5743 +
            ((C7957 - C7956) * C3043 + (C7959 - C7958) * C19382) * C5744 +
            ((C19455 * C7949 - C151 * C7888) * C3043 +
             (C19455 * C7950 - C151 * C7890) * C19382) *
                C5745) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C3043 +
             (C214 * C1068 - C19466 * C1175) * C19382) *
                C3040 +
            ((C5360 - C5361) * C3043 + (C5362 - C5363) * C19382) * C3041 +
            ((C5364 - C5365) * C3043 + (C5366 - C5367) * C19382) * C3042) *
               C2032) *
              C1507 +
          ((((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
            ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
            ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
               C2031 +
           (((C5361 - C5360) * C3043 + (C5363 - C5362) * C19382) * C3040 +
            ((C5365 - C5364) * C3043 + (C5367 - C5366) * C19382) * C3041 +
            ((C19466 * C5357 - C214 * C5235) * C3043 +
             (C19466 * C5358 - C214 * C5237) * C19382) *
                C3042) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C87 +
            (C214 * C1068 - C19466 * C1175) * C77 + (C2150 - C2151) * C89 +
            (C2152 - C2153) * C78 + (C2154 - C2155) * C91 +
            (C2156 - C2157) * C79) *
               C19455 * C2032) *
              C1507 +
          (((C214 * C618 - C19466 * C728) * C87 +
            (C214 * C627 - C19466 * C734) * C77 + (C1628 - C1629) * C89 +
            (C1630 - C1631) * C78 + (C1632 - C1633) * C91 +
            (C1634 - C1635) * C79) *
               C19455 * C2031 +
           ((C19466 * C2671 - C214 * C2553) * C87 +
            (C19466 * C2674 - C214 * C2557) * C77 +
            (C19466 * C2672 - C214 * C2554) * C89 +
            (C19466 * C2675 - C214 * C2559) * C78 +
            (C19466 * C2673 - C214 * C2555) * C91 +
            (C19466 * C2676 - C214 * C2561) * C79) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C3043 +
            (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
             C5745 * C1178 - C5824 * C1070) *
                C19382) *
               C19455 * C2031 +
           ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
             C5824 * C6436 - C5745 * C6562) *
                C3043 +
            (C5822 * C1068 - C5743 * C1175 + C5823 * C1070 - C5744 * C1178 +
             C5824 * C6439 - C5745 * C6564) *
                C19382) *
               C19455 * C2032) *
              C1507 +
          (((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
             C5824 * C3861 - C5745 * C3955) *
                C3043 +
            (C5822 * C627 - C5743 * C734 + C5823 * C2557 - C5744 * C2674 +
             C5824 * C3866 - C5745 * C3958) *
                C19382) *
               C19455 * C2031 +
           ((C5743 * C2671 - C5822 * C2553 + C5744 * C3955 - C5823 * C3861 +
             C5745 * C8009 - C5824 * C7888) *
                C3043 +
            (C5743 * C2674 - C5822 * C2557 + C5744 * C3958 - C5823 * C3866 +
             C5745 * C8010 - C5824 * C7890) *
                C19382) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C2031 +
           ((C3043 * C1059 - C19382 * C1067) * C3083 +
            (C3043 * C1219 - C19382 * C1225) * C3040 + (C5420 - C5421) * C3084 +
            (C5422 - C5423) * C3041 + (C5424 - C5425) * C3085 +
            (C5426 - C5427) * C3042) *
               C19466 * C2032) *
              C1507 +
          (((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
            (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
            (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
               C19466 * C2031 +
           ((C5421 - C5420) * C3083 + (C5423 - C5422) * C3040 +
            (C5425 - C5424) * C3084 + (C5427 - C5426) * C3041 +
            (C19382 * C5236 - C3043 * C5235) * C3085 +
            (C19382 * C5418 - C3043 * C5417) * C3042) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C151 +
            (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
             C91 * C1221 - C79 * C1227) *
                C19455) *
               C19466 * C2032) *
              C1507 +
          (((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C151 +
            (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
             C79 * C786) *
                C19455) *
               C19466 * C2031 +
           ((C77 * C2556 - C87 * C2553 + C78 * C2558 - C89 * C2554 +
             C79 * C2560 - C91 * C2555) *
                C151 +
            (C77 * C2730 - C87 * C2727 + C78 * C2731 - C89 * C2728 +
             C79 * C2732 - C91 * C2729) *
                C19455) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C151 +
             (C19382 * C282 - C3043 * C277) * C19455) *
                C5743 +
            ((C6609 - C6610) * C151 + (C6611 - C6612) * C19455) * C5744 +
            C6625 * C5745) *
               C2031 +
           (((C6610 - C6609) * C151 + (C6612 - C6611) * C19455) * C5743 +
            ((C6614 - C6613) * C151 + (C6616 - C6615) * C19455) * C5744 +
            ((C6617 - C6618) * C151 + (C6619 - C6620) * C19455) * C5745) *
               C2032) *
              C1507 +
          ((((C3570 - C3569) * C151 + (C3572 - C3571) * C19455) * C5743 +
            ((C5420 - C5421) * C151 + (C5422 - C5423) * C19455) * C5744 +
            ((C8064 - C8065) * C151 + (C8066 - C8067) * C19455) * C5745) *
               C2031 +
           (((C5421 - C5420) * C151 + (C5423 - C5422) * C19455) * C5743 +
            ((C8065 - C8064) * C151 + (C8067 - C8066) * C19455) * C5744 +
            ((C19382 * C7889 - C3043 * C7888) * C151 +
             (C19382 * C8062 - C3043 * C8061) * C19455) *
                C5745) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C2031 -
           (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
            C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
            C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
               C19382 * C19466 * C2032) *
              C1507 +
          ((C3083 * C2615 - C3200 * C2553 - C3083 * C2727 + C3040 * C2783 +
            C3084 * C3910 - C3201 * C3860 - C3084 * C3998 + C3041 * C4042 +
            C3085 * C5305 - C3202 * C5235 - C3085 * C5417 + C3042 * C5477) *
               C19382 * C19466 * C2032 -
           (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
            C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
            C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
               C19382 * C19466 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C2031 -
           (C2273 * C79 + C2274 * C78 +
            (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
                C77) *
               C19466 * C2032) *
              C1507 +
          (((C151 * C2615 - C325 * C2553 - C151 * C2727 + C19455 * C2783) *
                C77 +
            (C151 * C2616 - C325 * C2554 - C151 * C2728 + C19455 * C2784) *
                C78 +
            (C151 * C2617 - C325 * C2555 - C151 * C2729 + C19455 * C2785) *
                C79) *
               C19466 * C2032 -
           (C1751 * C79 + C1752 * C78 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
               C19466 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
                C5743 +
            C6687 * C5744 + C6688 * C5745) *
               C2031 -
           (C6689 * C5745 + C6688 * C5744 + C6687 * C5743) * C2032) *
              C1507 +
          ((C8133 * C5743 + C8134 * C5744 +
            (C151 * C7949 - C325 * C7888 - C151 * C8061 + C19455 * C8117) *
                C19382 * C5745) *
               C2032 -
           (C8134 * C5745 + C8133 * C5744 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C19382 *
                C5743) *
               C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C3083 +
            (C214 * C1219 - C19466 * C1313) * C3040 + (C5360 - C5361) * C3084 +
            (C5530 - C5531) * C3041 + (C5364 - C5365) * C3085 +
            (C5532 - C5533) * C3042) *
               C19382 * C2032) *
              C1507 +
          (((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
            (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
            (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
               C19382 * C2031 +
           ((C5361 - C5360) * C3083 + (C5531 - C5530) * C3040 +
            (C5365 - C5364) * C3084 + (C5533 - C5532) * C3041 +
            (C19466 * C5357 - C214 * C5235) * C3085 +
            (C19466 * C5528 - C214 * C5417) * C3042) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C151 +
             (C214 * C1219 - C19466 * C1313) * C19455) *
                C77 +
            ((C2150 - C2151) * C151 + (C2326 - C2327) * C19455) * C78 +
            ((C2154 - C2155) * C151 + (C2328 - C2329) * C19455) * C79) *
               C2032) *
              C1507 +
          ((((C214 * C618 - C19466 * C728) * C151 +
             (C214 * C778 - C19466 * C872) * C19455) *
                C77 +
            ((C1628 - C1629) * C151 + (C1804 - C1805) * C19455) * C78 +
            ((C1632 - C1633) * C151 + (C1806 - C1807) * C19455) * C79) *
               C2031 +
           (((C19466 * C2671 - C214 * C2553) * C151 +
             (C19466 * C2836 - C214 * C2727) * C19455) *
                C77 +
            ((C19466 * C2672 - C214 * C2554) * C151 +
             (C19466 * C2837 - C214 * C2728) * C19455) *
                C78 +
            ((C19466 * C2673 - C214 * C2555) * C151 +
             (C19466 * C2838 - C214 * C2729) * C19455) *
                C79) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C151 +
            (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
             C5745 * C1316 - C5824 * C1222) *
                C19455) *
               C19382 * C2031 +
           ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
             C5824 * C6436 - C5745 * C6562) *
                C151 +
            (C5822 * C1219 - C5743 * C1313 + C5823 * C1222 - C5744 * C1316 +
             C5824 * C6604 - C5745 * C6727) *
                C19455) *
               C19382 * C2032) *
              C1507 +
          (((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
             C5824 * C3861 - C5745 * C3955) *
                C151 +
            (C5822 * C778 - C5743 * C872 + C5823 * C2727 - C5744 * C2836 +
             C5824 * C3999 - C5745 * C4084) *
                C19455) *
               C19382 * C2031 +
           ((C5743 * C2671 - C5822 * C2553 + C5744 * C3955 - C5823 * C3861 +
             C5745 * C8009 - C5824 * C7888) *
                C151 +
            (C5743 * C2836 - C5822 * C2727 + C5744 * C4084 - C5823 * C3999 +
             C5745 * C8184 - C5824 * C8061) *
                C19455) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C2031 +
           (((C3043 * C1059 - C19382 * C1067) * C214 +
             (C3043 * C1357 - C19382 * C1363) * C19466) *
                C3040 +
            ((C5420 - C5421) * C214 + (C5586 - C5587) * C19466) * C3041 +
            ((C5424 - C5425) * C214 + (C5588 - C5589) * C19466) * C3042) *
               C2032) *
              C1507 +
          ((((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
            ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
            ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
               C2031 +
           (((C5421 - C5420) * C214 + (C5587 - C5586) * C19466) * C3040 +
            ((C5425 - C5424) * C214 + (C5589 - C5588) * C19466) * C3041 +
            ((C19382 * C5236 - C3043 * C5235) * C214 +
             (C19382 * C5584 - C3043 * C5583) * C19466) *
                C3042) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C214 +
            (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
             C91 * C1359 - C79 * C1365) *
                C19466) *
               C19455 * C2032) *
              C1507 +
          (((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C214 +
            (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
             C79 * C924) *
                C19466) *
               C19455 * C2031 +
           ((C77 * C2556 - C87 * C2553 + C78 * C2558 - C89 * C2554 +
             C79 * C2560 - C91 * C2555) *
                C214 +
            (C77 * C2892 - C87 * C2889 + C78 * C2893 - C89 * C2890 +
             C79 * C2894 - C91 * C2891) *
                C19466) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C5822 +
            (C19382 * C448 - C3043 * C443) * C5743 + (C6609 - C6610) * C5823 +
            (C6772 - C6773) * C5744 + C6621 * C5824 + C6778 * C5745) *
               C19455 * C2031 +
           ((C6610 - C6609) * C5822 + (C6773 - C6772) * C5743 +
            (C6614 - C6613) * C5823 + (C6775 - C6774) * C5744 +
            (C6617 - C6618) * C5824 + (C6776 - C6777) * C5745) *
               C19455 * C2032) *
              C1507 +
          (((C3570 - C3569) * C5822 + (C3713 - C3712) * C5743 +
            (C5420 - C5421) * C5823 + (C5586 - C5587) * C5744 +
            (C8064 - C8065) * C5824 + (C8238 - C8239) * C5745) *
               C19455 * C2031 +
           ((C5421 - C5420) * C5822 + (C5587 - C5586) * C5743 +
            (C8065 - C8064) * C5823 + (C8239 - C8238) * C5744 +
            (C19382 * C7889 - C3043 * C7888) * C5824 +
            (C19382 * C8236 - C3043 * C8235) * C5745) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C214 +
            (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
             C3085 * C4124 - C3042 * C4168) *
                C19466) *
               C19382 * C2032) *
              C1507 +
          (((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C214 +
            (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
             C3085 * C3707 - C3042 * C3759) *
                C19466) *
               C19382 * C2031 +
           ((C3040 * C2615 - C3083 * C2553 + C3041 * C3910 - C3084 * C3860 +
             C3042 * C5305 - C3085 * C5235) *
                C214 +
            (C3040 * C2945 - C3083 * C2889 + C3041 * C4168 - C3084 * C4124 +
             C3042 * C5639 - C3085 * C5583) *
                C19466) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C2031 +
           (((C151 * C1059 - C19455 * C1119) * C214 +
             (C151 * C1357 - C19455 * C1407) * C19466) *
                C77 +
            ((C2090 - C2091) * C214 + (C2433 - C2434) * C19466) * C78 +
            ((C2094 - C2095) * C214 + (C2435 - C2436) * C19466) * C79) *
               C2032) *
              C1507 +
          ((((C151 * C618 - C19455 * C678) * C214 +
             (C151 * C916 - C19455 * C966) * C19466) *
                C77 +
            ((C1568 - C1569) * C214 + (C1911 - C1912) * C19466) * C78 +
            ((C1572 - C1573) * C214 + (C1913 - C1914) * C19466) * C79) *
               C2031 +
           (((C19455 * C2615 - C151 * C2553) * C214 +
             (C19455 * C2945 - C151 * C2889) * C19466) *
                C77 +
            ((C19455 * C2616 - C151 * C2554) * C214 +
             (C19455 * C2946 - C151 * C2890) * C19466) *
                C78 +
            ((C19455 * C2617 - C151 * C2555) * C214 +
             (C19455 * C2947 - C151 * C2891) * C19466) *
                C79) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C5822 +
            (C19455 * C491 - C151 * C443) * C5743 + (C6508 - C6509) * C5823 +
            (C6819 - C6820) * C5744 + C6520 * C5824 + C6825 * C5745) *
               C19382 * C2031 +
           ((C6509 - C6508) * C5822 + (C6820 - C6819) * C5743 +
            (C6513 - C6512) * C5823 + (C6822 - C6821) * C5744 +
            (C6516 - C6517) * C5824 + (C6823 - C6824) * C5745) *
               C19382 * C2032) *
              C1507 +
          (((C151 * C618 - C19455 * C678) * C5822 +
            (C151 * C916 - C19455 * C966) * C5743 + (C7952 - C7953) * C5823 +
            (C8291 - C8292) * C5744 + (C7956 - C7957) * C5824 +
            (C8293 - C8294) * C5745) *
               C19382 * C2031 +
           ((C7953 - C7952) * C5822 + (C8292 - C8291) * C5743 +
            (C7957 - C7956) * C5823 + (C8294 - C8293) * C5744 +
            (C19455 * C7949 - C151 * C7888) * C5824 +
            (C19455 * C8289 - C151 * C8235) * C5745) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C2031 -
           (C5704 * C3042 + C5705 * C3041 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C3040) *
               C19382 * C2032) *
              C1507 +
          ((C5705 * C3040 + C5704 * C3041 +
            (C214 * C5357 - C544 * C5235 - C214 * C5583 + C19466 * C5690) *
                C3042) *
               C19382 * C2032 -
           (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C2031 -
           (C2502 * C79 + C2503 * C78 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C19455 * C77) *
               C2032) *
              C1507 +
          (((C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
                C19455 * C77 +
            (C214 * C2672 - C544 * C2554 - C214 * C2890 + C19466 * C2999) *
                C19455 * C78 +
            (C214 * C2673 - C544 * C2555 - C214 * C2891 + C19466 * C3000) *
                C19455 * C79) *
               C2032 -
           (C1980 * C79 + C1981 * C78 +
            (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) *
                C19455 * C77) *
               C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
            C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
            C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
               C19455 * C19382 * C2031 -
           (C5824 * C6562 - C6055 * C6436 - C5824 * C6767 + C5745 * C6863 +
            C5823 * C1172 - C6054 * C1060 - C5823 * C1360 + C5744 * C1454 +
            C5822 * C1169 - C6053 * C1059 - C5822 * C1357 + C5743 * C1453) *
               C19455 * C19382 * C2032) *
              C1507 +
          ((C5822 * C2671 - C6053 * C2553 - C5822 * C2889 + C5743 * C2998 +
            C5823 * C3955 - C6054 * C3861 - C5823 * C4125 + C5744 * C4210 +
            C5824 * C8009 - C6055 * C7888 - C5824 * C8235 + C5745 * C8344) *
               C19455 * C19382 * C2032 -
           (C5824 * C3955 - C6055 * C3861 - C5824 * C4125 + C5745 * C4210 +
            C5823 * C2671 - C6054 * C2553 - C5823 * C2889 + C5744 * C2998 +
            C5822 * C728 - C6053 * C618 - C5822 * C916 + C5743 * C1012) *
               C19455 * C19382 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
               C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
               C91 * C103 + C79 * C110) *
                  C19466 * C19455 * C19430 * C19416 * C84 -
              (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
               C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
               C87 * C101 + C77 * C109) *
                  C19466 * C19455 * C19430 * C19416 * C85 +
              (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
               C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
               C91 * C107 + C79 * C112) *
                  C19466 * C19455 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
               C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
               C91 * C103 + C79 * C110) *
                  C19466 * C19455 * C19430 * C612 -
              (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
               C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
               C87 * C627 + C77 * C636) *
                  C19466 * C19455 * C19430 * C613 +
              (C87 * C628 - C88 * C619 - C87 * C629 + C77 * C637 + C89 * C630 -
               C90 * C620 - C89 * C631 + C78 * C638 + C91 * C632 - C92 * C621 -
               C91 * C633 + C79 * C639) *
                  C19466 * C19455 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C1054 -
          (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 + C89 * C1065 -
           C90 * C1058 - C89 * C1066 + C78 * C1076 + C87 * C1067 - C88 * C1059 -
           C87 * C1068 + C77 * C1077) *
              C19466 * C19455 * C1055 +
          (C87 * C1069 - C88 * C1060 - C87 * C1070 + C77 * C1078 + C89 * C1071 -
           C90 * C1061 - C89 * C1072 + C78 * C1079 + C91 * C1073 - C92 * C1062 -
           C91 * C1074 + C79 * C1080) *
              C19466 * C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           (C3043 * C626 - C3044 * C618 - C3043 * C627 + C19382 * C636) *
               C19466 * C3041 +
           (C3043 * C628 - C3044 * C619 - C3043 * C629 + C19382 * C637) *
               C19466 * C3042) *
              C19430 * C19416 * C84 -
          ((C3043 * C630 - C3044 * C620 - C3043 * C631 + C19382 * C638) *
               C19466 * C3042 +
           (C3043 * C624 - C3044 * C617 - C3043 * C625 + C19382 * C635) *
               C19466 * C3041 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C19466 * C3040) *
              C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
               C19466 * C3040 +
           (C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
               C19466 * C3041 +
           (C3043 * C632 - C3044 * C621 - C3043 * C633 + C19382 * C639) *
               C19466 * C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C19430 * C612 -
          (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C613 +
          (C3424 * C3040 + C3425 * C3041 +
           (C3043 * C3397 - C3044 * C3394 - C3043 * C3398 + C19382 * C3400) *
               C19466 * C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C1054 -
          ((C3043 * C3863 - C3044 * C3860 - C3043 * C3864 + C19382 * C3869) *
               C19466 * C3042 +
           (C3043 * C2556 - C3044 * C2553 - C3043 * C2557 + C19382 * C2562) *
               C19466 * C3041 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C19466 * C3040) *
              C1055 +
          ((C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C19466 * C3040 +
           (C3043 * C3865 - C3044 * C3861 - C3043 * C3866 + C19382 * C3870) *
               C19466 * C3041 +
           (C3043 * C3867 - C3044 * C3862 - C3043 * C3868 + C19382 * C3871) *
               C19466 * C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C5744 +
           (C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C5745) *
              C19455 * C19430 * C19416 * C84 -
          ((C3043 * C1071 - C3044 * C1061 - C3043 * C1072 + C19382 * C1079) *
               C5745 +
           (C3043 * C1065 - C3044 * C1058 - C3043 * C1066 + C19382 * C1076) *
               C5744 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C5743) *
              C19455 * C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) * C5743 +
           (C3043 * C1063 - C3044 * C1057 - C3043 * C1064 + C19382 * C1075) *
               C5744 +
           (C3043 * C1073 - C3044 * C1062 - C3043 * C1074 + C19382 * C1080) *
               C5745) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C5744 +
           (C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C5745) *
              C19455 * C19430 * C612 -
          ((C3043 * C3865 - C3044 * C3861 - C3043 * C3866 + C19382 * C3870) *
               C5745 +
           C5253 * C5744 + C3420 * C5743) *
              C19455 * C19430 * C613 +
          (C3421 * C5743 + C5252 * C5744 +
           (C3043 * C3867 - C3044 * C3862 - C3043 * C3868 + C19382 * C3871) *
               C5745) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
           C6463 * C5744 + C6464 * C5745) *
              C19455 * C1054 -
          (C6465 * C5745 + C6464 * C5744 + C6463 * C5743) * C19455 * C1055 +
          (C6464 * C5743 + C6465 * C5744 +
           (C3043 * C6440 - C3044 * C6437 - C3043 * C6441 + C19382 * C6443) *
               C5745) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C19455 * C152 - C151 * C93) * C87 +
               (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
               (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
                  C19466 * C19430 * C19416 * C84 +
              ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
               (C170 - C169) * C78 + (C171 - C172) * C91 +
               (C173 - C174) * C79) *
                  C19466 * C19430 * C19416 * C85 +
              (C175 * C87 + C176 * C77 + (C172 - C171) * C89 +
               (C174 - C173) * C78 + (C19455 * C156 - C151 * C97) * C91 +
               (C19455 * C161 - C151 * C107) * C79) *
                  C19466 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C19455 * C152 - C151 * C93) * C87 +
               (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
               (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
                  C19466 * C19430 * C612 +
              ((C151 * C618 - C19455 * C678) * C87 +
               (C151 * C627 - C19455 * C684) * C77 +
               (C151 * C617 - C19455 * C679) * C89 +
               (C151 * C625 - C19455 * C685) * C78 +
               (C151 * C616 - C19455 * C680) * C91 +
               (C151 * C623 - C19455 * C686) * C79) *
                  C19466 * C19430 * C613 +
              ((C19455 * C681 - C151 * C619) * C87 +
               (C19455 * C687 - C151 * C629) * C77 +
               (C19455 * C682 - C151 * C620) * C89 +
               (C19455 * C688 - C151 * C631) * C78 +
               (C19455 * C683 - C151 * C621) * C91 +
               (C19455 * C689 - C151 * C633) * C79) *
                  C19466 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C1054 +
          ((C151 * C1059 - C19455 * C1119) * C87 +
           (C151 * C1068 - C19455 * C1125) * C77 +
           (C151 * C1058 - C19455 * C1120) * C89 +
           (C151 * C1066 - C19455 * C1126) * C78 +
           (C151 * C1057 - C19455 * C1121) * C91 +
           (C151 * C1064 - C19455 * C1127) * C79) *
              C19466 * C1055 +
          ((C19455 * C1122 - C151 * C1060) * C87 +
           (C19455 * C1128 - C151 * C1070) * C77 +
           (C19455 * C1123 - C151 * C1061) * C89 +
           (C19455 * C1129 - C151 * C1072) * C78 +
           (C19455 * C1124 - C151 * C1062) * C91 +
           (C19455 * C1130 - C151 * C1074) * C79) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C3043 +
           (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
            C3085 * C631 - C3042 * C688) *
               C19382) *
              C19466 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C3043 +
           (C3040 * C159 - C3083 * C103 + C3041 * C686 - C3084 * C623 +
            C3042 * C689 - C3085 * C633) *
               C19382) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C3043 +
           (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
            C3085 * C3396 - C3042 * C3465) *
               C19382) *
              C19466 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C3043 +
           (C3040 * C687 - C3083 * C629 + C3041 * C3465 - C3084 * C3396 +
            C3042 * C3466 - C3085 * C3398) *
               C19382) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C1054 +
          ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
            C3085 * C3860 - C3042 * C3910) *
               C3043 +
           (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 - C3041 * C2618 +
            C3085 * C3864 - C3042 * C3913) *
               C19382) *
              C19466 * C1055 +
          ((C3040 * C1122 - C3083 * C1060 + C3041 * C3911 - C3084 * C3861 +
            C3042 * C3912 - C3085 * C3862) *
               C3043 +
           (C3040 * C1128 - C3083 * C1070 + C3041 * C3914 - C3084 * C3866 +
            C3042 * C3915 - C3085 * C3868) *
               C19382) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C3043 +
            (C19455 * C157 - C151 * C99) * C19382) *
               C5743 +
           ((C19455 * C1119 - C151 * C1059) * C3043 +
            (C19455 * C1125 - C151 * C1068) * C19382) *
               C5744 +
           ((C19455 * C1122 - C151 * C1060) * C3043 +
            (C19455 * C1128 - C151 * C1070) * C19382) *
               C5745) *
              C19430 * C19416 * C84 +
          (((C164 - C163) * C3043 + (C166 - C165) * C19382) * C5743 +
           ((C2090 - C2091) * C3043 + (C2092 - C2093) * C19382) * C5744 +
           ((C151 * C1061 - C19455 * C1123) * C3043 +
            (C151 * C1072 - C19455 * C1129) * C19382) *
               C5745) *
              C19430 * C19416 * C85 +
          ((C175 * C3043 + C176 * C19382) * C5743 +
           ((C2095 - C2094) * C3043 + (C2097 - C2096) * C19382) * C5744 +
           ((C19455 * C1124 - C151 * C1062) * C3043 +
            (C19455 * C1130 - C151 * C1074) * C19382) *
               C5745) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C3043 +
            (C19455 * C157 - C151 * C99) * C19382) *
               C5743 +
           ((C19455 * C1119 - C151 * C1059) * C3043 +
            (C19455 * C1125 - C151 * C1068) * C19382) *
               C5744 +
           ((C19455 * C1122 - C151 * C1060) * C3043 +
            (C19455 * C1128 - C151 * C1070) * C19382) *
               C5745) *
              C19430 * C612 +
          (((C151 * C618 - C19455 * C678) * C3043 +
            (C151 * C627 - C19455 * C684) * C19382) *
               C5743 +
           ((C151 * C2553 - C19455 * C2615) * C3043 +
            (C151 * C2557 - C19455 * C2618) * C19382) *
               C5744 +
           ((C151 * C3861 - C19455 * C3911) * C3043 +
            (C151 * C3866 - C19455 * C3914) * C19382) *
               C5745) *
              C19430 * C613 +
          (((C19455 * C681 - C151 * C619) * C3043 +
            (C19455 * C687 - C151 * C629) * C19382) *
               C5743 +
           ((C19455 * C3910 - C151 * C3860) * C3043 +
            (C19455 * C3913 - C151 * C3864) * C19382) *
               C5744 +
           ((C19455 * C3912 - C151 * C3862) * C3043 +
            (C19455 * C3915 - C151 * C3868) * C19382) *
               C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C3043 +
            (C19455 * C157 - C151 * C99) * C19382) *
               C5743 +
           ((C6508 - C6509) * C3043 + (C6510 - C6511) * C19382) * C5744 +
           C6524 * C5745) *
              C1054 +
          (((C6509 - C6508) * C3043 + (C6511 - C6510) * C19382) * C5743 +
           ((C6513 - C6512) * C3043 + (C6515 - C6514) * C19382) * C5744 +
           ((C6516 - C6517) * C3043 + (C6518 - C6519) * C19382) * C5745) *
              C1055 +
          (C6524 * C5743 +
           ((C6517 - C6516) * C3043 + (C6519 - C6518) * C19382) * C5744 +
           ((C19455 * C6504 - C151 * C6437) * C3043 +
            (C19455 * C6506 - C151 * C6441) * C19382) *
               C5745) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C19466 * C215 - C214 * C93) * C87 +
               (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
               (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
                  C19455 * C19430 * C19416 * C84 +
              ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
               (C233 - C232) * C78 + (C234 - C235) * C91 +
               (C236 - C237) * C79) *
                  C19455 * C19430 * C19416 * C85 +
              (C238 * C87 + C239 * C77 + (C235 - C234) * C89 +
               (C237 - C236) * C78 + (C19466 * C219 - C214 * C97) * C91 +
               (C19466 * C224 - C214 * C107) * C79) *
                  C19455 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C19466 * C215 - C214 * C93) * C87 +
               (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
               (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
                  C19455 * C19430 * C612 +
              ((C214 * C618 - C19466 * C728) * C87 +
               (C214 * C627 - C19466 * C734) * C77 +
               (C214 * C617 - C19466 * C729) * C89 +
               (C214 * C625 - C19466 * C735) * C78 +
               (C214 * C616 - C19466 * C730) * C91 +
               (C214 * C623 - C19466 * C736) * C79) *
                  C19455 * C19430 * C613 +
              ((C19466 * C731 - C214 * C619) * C87 +
               (C19466 * C737 - C214 * C629) * C77 +
               (C19466 * C732 - C214 * C620) * C89 +
               (C19466 * C738 - C214 * C631) * C78 +
               (C19466 * C733 - C214 * C621) * C91 +
               (C19466 * C739 - C214 * C633) * C79) *
                  C19455 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C1054 +
          ((C214 * C1059 - C19466 * C1169) * C87 +
           (C214 * C1068 - C19466 * C1175) * C77 +
           (C214 * C1058 - C19466 * C1170) * C89 +
           (C214 * C1066 - C19466 * C1176) * C78 +
           (C214 * C1057 - C19466 * C1171) * C91 +
           (C214 * C1064 - C19466 * C1177) * C79) *
              C19455 * C1055 +
          ((C19466 * C1172 - C214 * C1060) * C87 +
           (C19466 * C1178 - C214 * C1070) * C77 +
           (C19466 * C1173 - C214 * C1061) * C89 +
           (C19466 * C1179 - C214 * C1072) * C78 +
           (C19466 * C1174 - C214 * C1062) * C91 +
           (C19466 * C1180 - C214 * C1074) * C79) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C19466 * C728 - C214 * C618) * C3043 +
            (C19466 * C734 - C214 * C627) * C19382) *
               C3041 +
           ((C19466 * C731 - C214 * C619) * C3043 +
            (C19466 * C737 - C214 * C629) * C19382) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
           ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
           ((C214 * C620 - C19466 * C732) * C3043 +
            (C214 * C631 - C19466 * C738) * C19382) *
               C3042) *
              C19430 * C19416 * C85 +
          ((C238 * C3043 + C239 * C19382) * C3040 +
           ((C1633 - C1632) * C3043 + (C1635 - C1634) * C19382) * C3041 +
           ((C19466 * C733 - C214 * C621) * C3043 +
            (C19466 * C739 - C214 * C633) * C19382) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C19430 * C612 +
          (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
           ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
           ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
              C19430 * C613 +
          (C3526 * C3040 +
           ((C3519 - C3518) * C3043 + (C3521 - C3520) * C19382) * C3041 +
           ((C19466 * C3506 - C214 * C3394) * C3043 +
            (C19466 * C3508 - C214 * C3398) * C19382) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C1054 +
          (((C214 * C1059 - C19466 * C1169) * C3043 +
            (C214 * C1068 - C19466 * C1175) * C19382) *
               C3040 +
           ((C214 * C2553 - C19466 * C2671) * C3043 +
            (C214 * C2557 - C19466 * C2674) * C19382) *
               C3041 +
           ((C214 * C3860 - C19466 * C3954) * C3043 +
            (C214 * C3864 - C19466 * C3957) * C19382) *
               C3042) *
              C1055 +
          (((C19466 * C1172 - C214 * C1060) * C3043 +
            (C19466 * C1178 - C214 * C1070) * C19382) *
               C3040 +
           ((C19466 * C3955 - C214 * C3861) * C3043 +
            (C19466 * C3958 - C214 * C3866) * C19382) *
               C3041 +
           ((C19466 * C3956 - C214 * C3862) * C3043 +
            (C19466 * C3959 - C214 * C3868) * C19382) *
               C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C5743 * C215 - C5822 * C93 + C5744 * C1169 -
                                C5823 * C1059 + C5745 * C1172 - C5824 * C1060) *
                                   C3043 +
                               (C5743 * C220 - C5822 * C99 + C5744 * C1175 -
                                C5823 * C1068 + C5745 * C1178 - C5824 * C1070) *
                                   C19382) *
                                  C19455 * C19430 * C19416 * C84 +
                              ((C5822 * C94 - C5743 * C216 + C5823 * C1058 -
                                C5744 * C1170 + C5824 * C1061 - C5745 * C1173) *
                                   C3043 +
                               (C5822 * C101 - C5743 * C221 + C5823 * C1066 -
                                C5744 * C1176 + C5824 * C1072 - C5745 * C1179) *
                                   C19382) *
                                  C19455 * C19430 * C19416 * C85 +
                              ((C5743 * C217 - C5822 * C95 + C5744 * C1171 -
                                C5823 * C1057 + C5745 * C1174 - C5824 * C1062) *
                                   C3043 +
                               (C5743 * C222 - C5822 * C103 + C5744 * C1177 -
                                C5823 * C1064 + C5745 * C1180 - C5824 * C1074) *
                                   C19382) *
                                  C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C3043 +
           (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
            C5745 * C1178 - C5824 * C1070) *
               C19382) *
              C19455 * C19430 * C612 +
          ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
            C5824 * C3861 - C5745 * C3955) *
               C3043 +
           (C5822 * C627 - C5743 * C734 + C5823 * C2557 - C5744 * C2674 +
            C5824 * C3866 - C5745 * C3958) *
               C19382) *
              C19455 * C19430 * C613 +
          ((C5743 * C731 - C5822 * C619 + C5744 * C3954 - C5823 * C3860 +
            C5745 * C3956 - C5824 * C3862) *
               C3043 +
           (C5743 * C737 - C5822 * C629 + C5744 * C3957 - C5823 * C3864 +
            C5745 * C3959 - C5824 * C3868) *
               C19382) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C3043 +
           (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
            C5745 * C1178 - C5824 * C1070) *
               C19382) *
              C19455 * C1054 +
          ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
            C5824 * C6436 - C5745 * C6562) *
               C3043 +
           (C5822 * C1068 - C5743 * C1175 + C5823 * C1070 - C5744 * C1178 +
            C5824 * C6439 - C5745 * C6564) *
               C19382) *
              C19455 * C1055 +
          ((C5743 * C1172 - C5822 * C1060 + C5744 * C6562 - C5823 * C6436 +
            C5745 * C6563 - C5824 * C6437) *
               C3043 +
           (C5743 * C1178 - C5822 * C1070 + C5744 * C6564 - C5823 * C6439 +
            C5745 * C6565 - C5824 * C6441) *
               C19382) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
                C91 * C95) *
                   C151 +
               (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
                C91 * C279) *
                   C19455) *
                  C19466 * C19430 * C19416 * C84 +
              ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
                C79 * C104) *
                   C151 +
               (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
                C79 * C285) *
                   C19455) *
                  C19466 * C19430 * C19416 * C85 +
              ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
                C91 * C97) *
                   C151 +
               (C77 * C284 - C87 * C279 + C78 * C285 - C89 * C280 + C79 * C286 -
                C91 * C281) *
                   C19455) *
                  C19466 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
                C91 * C95) *
                   C151 +
               (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
                C91 * C279) *
                   C19455) *
                  C19466 * C19430 * C612 +
              ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
                C79 * C622) *
                   C151 +
               (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
                C79 * C786) *
                   C19455) *
                  C19466 * C19430 * C613 +
              ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
                C91 * C621) *
                   C151 +
               (C77 * C787 - C87 * C781 + C78 * C788 - C89 * C782 + C79 * C789 -
                C91 * C783) *
                   C19455) *
                  C19466 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C1054 +
          ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
            C91 * C1057 - C79 * C1063) *
               C151 +
           (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
            C91 * C1221 - C79 * C1227) *
               C19455) *
              C19466 * C1055 +
          ((C77 * C1069 - C87 * C1060 + C78 * C1071 - C89 * C1061 +
            C79 * C1073 - C91 * C1062) *
               C151 +
           (C77 * C1228 - C87 * C1222 + C78 * C1229 - C89 * C1223 +
            C79 * C1230 - C91 * C1224) *
               C19455) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 +
           (C19382 * C626 - C3043 * C618) * C3084 +
           (C19382 * C784 - C3043 * C778) * C3041 +
           (C19382 * C628 - C3043 * C619) * C3085 +
           (C19382 * C787 - C3043 * C781) * C3042) *
              C19466 * C19430 * C19416 * C84 +
          ((C3043 * C94 - C19382 * C100) * C3083 +
           (C3043 * C278 - C19382 * C283) * C3040 +
           (C3043 * C617 - C19382 * C624) * C3084 +
           (C3043 * C779 - C19382 * C785) * C3041 +
           (C3043 * C620 - C19382 * C630) * C3085 +
           (C3043 * C782 - C19382 * C788) * C3042) *
              C19466 * C19430 * C19416 * C85 +
          ((C19382 * C102 - C3043 * C95) * C3083 +
           (C19382 * C284 - C3043 * C279) * C3040 +
           (C19382 * C622 - C3043 * C616) * C3084 +
           (C19382 * C786 - C3043 * C780) * C3041 +
           (C19382 * C632 - C3043 * C621) * C3085 +
           (C19382 * C789 - C3043 * C783) * C3042) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C19430 * C612 +
          ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
           (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
           (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
              C19466 * C19430 * C613 +
          (C3581 * C3083 + C3582 * C3040 + (C3578 - C3577) * C3084 +
           (C3580 - C3579) * C3041 + (C19382 * C3397 - C3043 * C3394) * C3085 +
           (C19382 * C3567 - C3043 * C3565) * C3042) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C1054 +
          ((C3043 * C1059 - C19382 * C1067) * C3083 +
           (C3043 * C1219 - C19382 * C1225) * C3040 +
           (C3043 * C2553 - C19382 * C2556) * C3084 +
           (C3043 * C2727 - C19382 * C2730) * C3041 +
           (C3043 * C3860 - C19382 * C3863) * C3085 +
           (C3043 * C3998 - C19382 * C4001) * C3042) *
              C19466 * C1055 +
          ((C19382 * C1069 - C3043 * C1060) * C3083 +
           (C19382 * C1228 - C3043 * C1222) * C3040 +
           (C19382 * C3865 - C3043 * C3861) * C3084 +
           (C19382 * C4002 - C3043 * C3999) * C3041 +
           (C19382 * C3867 - C3043 * C3862) * C3085 +
           (C19382 * C4003 - C3043 * C4000) * C3042) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C19382 * C98 - C3043 * C93) * C151 +
                                (C19382 * C282 - C3043 * C277) * C19455) *
                                   C5743 +
                               ((C19382 * C1067 - C3043 * C1059) * C151 +
                                (C19382 * C1225 - C3043 * C1219) * C19455) *
                                   C5744 +
                               ((C19382 * C1069 - C3043 * C1060) * C151 +
                                (C19382 * C1228 - C3043 * C1222) * C19455) *
                                   C5745) *
                                  C19430 * C19416 * C84 +
                              (((C3043 * C94 - C19382 * C100) * C151 +
                                (C3043 * C278 - C19382 * C283) * C19455) *
                                   C5743 +
                               ((C3043 * C1058 - C19382 * C1065) * C151 +
                                (C3043 * C1220 - C19382 * C1226) * C19455) *
                                   C5744 +
                               ((C3043 * C1061 - C19382 * C1071) * C151 +
                                (C3043 * C1223 - C19382 * C1229) * C19455) *
                                   C5745) *
                                  C19430 * C19416 * C85 +
                              (((C19382 * C102 - C3043 * C95) * C151 +
                                (C19382 * C284 - C3043 * C279) * C19455) *
                                   C5743 +
                               ((C19382 * C1063 - C3043 * C1057) * C151 +
                                (C19382 * C1227 - C3043 * C1221) * C19455) *
                                   C5744 +
                               ((C19382 * C1073 - C3043 * C1062) * C151 +
                                (C19382 * C1230 - C3043 * C1224) * C19455) *
                                   C5745) *
                                  C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C151 +
            (C19382 * C282 - C3043 * C277) * C19455) *
               C5743 +
           ((C19382 * C1067 - C3043 * C1059) * C151 +
            (C19382 * C1225 - C3043 * C1219) * C19455) *
               C5744 +
           ((C19382 * C1069 - C3043 * C1060) * C151 +
            (C19382 * C1228 - C3043 * C1222) * C19455) *
               C5745) *
              C19430 * C612 +
          (((C3570 - C3569) * C151 + (C3572 - C3571) * C19455) * C5743 +
           ((C5420 - C5421) * C151 + (C5422 - C5423) * C19455) * C5744 +
           ((C3043 * C3861 - C19382 * C3865) * C151 +
            (C3043 * C3999 - C19382 * C4002) * C19455) *
               C5745) *
              C19430 * C613 +
          ((C3581 * C151 + C3582 * C19455) * C5743 +
           ((C5425 - C5424) * C151 + (C5427 - C5426) * C19455) * C5744 +
           ((C19382 * C3867 - C3043 * C3862) * C151 +
            (C19382 * C4003 - C3043 * C4000) * C19455) *
               C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C151 +
            (C19382 * C282 - C3043 * C277) * C19455) *
               C5743 +
           ((C6609 - C6610) * C151 + (C6611 - C6612) * C19455) * C5744 +
           C6625 * C5745) *
              C1054 +
          (((C6610 - C6609) * C151 + (C6612 - C6611) * C19455) * C5743 +
           ((C6614 - C6613) * C151 + (C6616 - C6615) * C19455) * C5744 +
           ((C6617 - C6618) * C151 + (C6619 - C6620) * C19455) * C5745) *
              C1055 +
          (C6625 * C5743 +
           ((C6618 - C6617) * C151 + (C6620 - C6619) * C19455) * C5744 +
           ((C19382 * C6440 - C3043 * C6437) * C151 +
            (C19382 * C6607 - C3043 * C6605) * C19455) *
               C5745) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
               C350 * C78 + C351 * C79) *
                  C19466 * C19430 * C19416 * C84 -
              (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 *
                  C19416 * C85 +
              (C351 * C77 + C352 * C78 +
               (C151 * C156 - C325 * C97 - C151 * C281 + C19455 * C330) * C79) *
                  C19466 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
               C350 * C78 + C351 * C79) *
                  C19466 * C19430 * C612 -
              ((C151 * C680 - C325 * C616 - C151 * C780 + C19455 * C828) * C79 +
               (C151 * C679 - C325 * C617 - C151 * C779 + C19455 * C829) * C78 +
               (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) *
                   C77) *
                  C19466 * C19430 * C613 +
              ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C77 +
               (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C78 +
               (C151 * C683 - C325 * C621 - C151 * C783 + C19455 * C833) *
                   C79) *
                  C19466 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C1054 -
          ((C151 * C1121 - C325 * C1057 - C151 * C1221 + C19455 * C1269) * C79 +
           (C151 * C1120 - C325 * C1058 - C151 * C1220 + C19455 * C1270) * C78 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C77) *
              C19466 * C1055 +
          ((C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) * C77 +
           (C151 * C1123 - C325 * C1061 - C151 * C1223 + C19455 * C1273) * C78 +
           (C151 * C1124 - C325 * C1062 - C151 * C1224 + C19455 * C1274) *
               C79) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C19416 * C84 -
          (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
           C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
           C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
              C19382 * C19466 * C19430 * C19416 * C85 +
          (C3083 * C154 - C3200 * C95 - C3083 * C279 + C3040 * C328 +
           C3084 * C680 - C3201 * C616 - C3084 * C780 + C3041 * C828 +
           C3085 * C683 - C3202 * C621 - C3085 * C783 + C3042 * C833) *
              C19382 * C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C612 -
          (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
           C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
           C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
              C19382 * C19466 * C19430 * C613 +
          (C3083 * C681 - C3200 * C619 - C3083 * C781 + C3040 * C831 +
           C3084 * C3463 - C3201 * C3393 - C3084 * C3564 + C3041 * C3620 +
           C3085 * C3464 - C3202 * C3394 - C3085 * C3565 + C3042 * C3621) *
              C19382 * C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C1054 -
          (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
           C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
           C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
              C19382 * C19466 * C1055 +
          (C3083 * C1122 - C3200 * C1060 - C3083 * C1222 + C3040 * C1272 +
           C3084 * C3911 - C3201 * C3861 - C3084 * C3999 + C3041 * C4043 +
           C3085 * C3912 - C3202 * C3862 - C3085 * C4000 + C3042 * C4044) *
              C19382 * C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
               C5743 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C19382 * C5744 +
           (C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) *
               C19382 * C5745) *
              C19430 * C19416 * C84 -
          ((C151 * C1123 - C325 * C1061 - C151 * C1223 + C19455 * C1273) *
               C19382 * C5745 +
           C2274 * C19382 * C5744 + C350 * C19382 * C5743) *
              C19430 * C19416 * C85 +
          (C351 * C19382 * C5743 + C2273 * C19382 * C5744 +
           (C151 * C1124 - C325 * C1062 - C151 * C1224 + C19455 * C1274) *
               C19382 * C5745) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
               C5743 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C19382 * C5744 +
           (C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) *
               C19382 * C5745) *
              C19430 * C612 -
          ((C151 * C3911 - C325 * C3861 - C151 * C3999 + C19455 * C4043) *
               C19382 * C5745 +
           (C151 * C2615 - C325 * C2553 - C151 * C2727 + C19455 * C2783) *
               C19382 * C5744 +
           (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C19382 *
               C5743) *
              C19430 * C613 +
          ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C19382 *
               C5743 +
           (C151 * C3910 - C325 * C3860 - C151 * C3998 + C19455 * C4042) *
               C19382 * C5744 +
           (C151 * C3912 - C325 * C3862 - C151 * C4000 + C19455 * C4044) *
               C19382 * C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
               C5743 +
           C6687 * C5744 + C6688 * C5745) *
              C1054 -
          (C6689 * C5745 + C6688 * C5744 + C6687 * C5743) * C1055 +
          (C6688 * C5743 + C6689 * C5744 +
           (C151 * C6504 - C325 * C6437 - C151 * C6605 + C19455 * C6664) *
               C19382 * C5745) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C19466 * C215 - C214 * C93) * C151 +
                (C19466 * C390 - C214 * C277) * C19455) *
                   C77 +
               ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
               C405 * C79) *
                  C19430 * C19416 * C84 +
              (((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
               ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
               ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
                  C19430 * C19416 * C85 +
              (C405 * C77 +
               ((C235 - C234) * C151 + (C402 - C401) * C19455) * C78 +
               ((C19466 * C219 - C214 * C97) * C151 +
                (C19466 * C394 - C214 * C281) * C19455) *
                   C79) *
                  C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C19466 * C215 - C214 * C93) * C151 +
                (C19466 * C390 - C214 * C277) * C19455) *
                   C77 +
               ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
               C405 * C79) *
                  C19430 * C612 +
              (((C214 * C618 - C19466 * C728) * C151 +
                (C214 * C778 - C19466 * C872) * C19455) *
                   C77 +
               ((C214 * C617 - C19466 * C729) * C151 +
                (C214 * C779 - C19466 * C873) * C19455) *
                   C78 +
               ((C214 * C616 - C19466 * C730) * C151 +
                (C214 * C780 - C19466 * C874) * C19455) *
                   C79) *
                  C19430 * C613 +
              (((C19466 * C731 - C214 * C619) * C151 +
                (C19466 * C875 - C214 * C781) * C19455) *
                   C77 +
               ((C19466 * C732 - C214 * C620) * C151 +
                (C19466 * C876 - C214 * C782) * C19455) *
                   C78 +
               ((C19466 * C733 - C214 * C621) * C151 +
                (C19466 * C877 - C214 * C783) * C19455) *
                   C79) *
                  C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C1054 +
          (((C214 * C1059 - C19466 * C1169) * C151 +
            (C214 * C1219 - C19466 * C1313) * C19455) *
               C77 +
           ((C214 * C1058 - C19466 * C1170) * C151 +
            (C214 * C1220 - C19466 * C1314) * C19455) *
               C78 +
           ((C214 * C1057 - C19466 * C1171) * C151 +
            (C214 * C1221 - C19466 * C1315) * C19455) *
               C79) *
              C1055 +
          (((C19466 * C1172 - C214 * C1060) * C151 +
            (C19466 * C1316 - C214 * C1222) * C19455) *
               C77 +
           ((C19466 * C1173 - C214 * C1061) * C151 +
            (C19466 * C1317 - C214 * C1223) * C19455) *
               C78 +
           ((C19466 * C1174 - C214 * C1062) * C151 +
            (C19466 * C1318 - C214 * C1224) * C19455) *
               C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 +
           (C19466 * C728 - C214 * C618) * C3084 +
           (C19466 * C872 - C214 * C778) * C3041 +
           (C19466 * C731 - C214 * C619) * C3085 +
           (C19466 * C875 - C214 * C781) * C3042) *
              C19382 * C19430 * C19416 * C84 +
          ((C227 - C226) * C3083 + (C397 - C396) * C3040 +
           (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
           (C214 * C620 - C19466 * C732) * C3085 +
           (C214 * C782 - C19466 * C876) * C3042) *
              C19382 * C19430 * C19416 * C85 +
          (C238 * C3083 + C403 * C3040 + (C1633 - C1632) * C3084 +
           (C1807 - C1806) * C3041 + (C19466 * C733 - C214 * C621) * C3085 +
           (C19466 * C877 - C214 * C783) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C19430 * C612 +
          ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
           (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
           (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
              C19382 * C19430 * C613 +
          (C3522 * C3083 + C3669 * C3040 + (C3519 - C3518) * C3084 +
           (C3668 - C3667) * C3041 + (C19466 * C3506 - C214 * C3394) * C3085 +
           (C19466 * C3661 - C214 * C3565) * C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C1054 +
          ((C214 * C1059 - C19466 * C1169) * C3083 +
           (C214 * C1219 - C19466 * C1313) * C3040 +
           (C214 * C2553 - C19466 * C2671) * C3084 +
           (C214 * C2727 - C19466 * C2836) * C3041 +
           (C214 * C3860 - C19466 * C3954) * C3085 +
           (C214 * C3998 - C19466 * C4083) * C3042) *
              C19382 * C1055 +
          ((C19466 * C1172 - C214 * C1060) * C3083 +
           (C19466 * C1316 - C214 * C1222) * C3040 +
           (C19466 * C3955 - C214 * C3861) * C3084 +
           (C19466 * C4084 - C214 * C3999) * C3041 +
           (C19466 * C3956 - C214 * C3862) * C3085 +
           (C19466 * C4085 - C214 * C4000) * C3042) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C5743 * C215 - C5822 * C93 + C5744 * C1169 -
                                C5823 * C1059 + C5745 * C1172 - C5824 * C1060) *
                                   C151 +
                               (C5743 * C390 - C5822 * C277 + C5744 * C1313 -
                                C5823 * C1219 + C5745 * C1316 - C5824 * C1222) *
                                   C19455) *
                                  C19382 * C19430 * C19416 * C84 +
                              ((C5822 * C94 - C5743 * C216 + C5823 * C1058 -
                                C5744 * C1170 + C5824 * C1061 - C5745 * C1173) *
                                   C151 +
                               (C5822 * C278 - C5743 * C391 + C5823 * C1220 -
                                C5744 * C1314 + C5824 * C1223 - C5745 * C1317) *
                                   C19455) *
                                  C19382 * C19430 * C19416 * C85 +
                              ((C5743 * C217 - C5822 * C95 + C5744 * C1171 -
                                C5823 * C1057 + C5745 * C1174 - C5824 * C1062) *
                                   C151 +
                               (C5743 * C392 - C5822 * C279 + C5744 * C1315 -
                                C5823 * C1221 + C5745 * C1318 - C5824 * C1224) *
                                   C19455) *
                                  C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C151 +
           (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
            C5745 * C1316 - C5824 * C1222) *
               C19455) *
              C19382 * C19430 * C612 +
          ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
            C5824 * C3861 - C5745 * C3955) *
               C151 +
           (C5822 * C778 - C5743 * C872 + C5823 * C2727 - C5744 * C2836 +
            C5824 * C3999 - C5745 * C4084) *
               C19455) *
              C19382 * C19430 * C613 +
          ((C5743 * C731 - C5822 * C619 + C5744 * C3954 - C5823 * C3860 +
            C5745 * C3956 - C5824 * C3862) *
               C151 +
           (C5743 * C875 - C5822 * C781 + C5744 * C4083 - C5823 * C3998 +
            C5745 * C4085 - C5824 * C4000) *
               C19455) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C151 +
           (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
            C5745 * C1316 - C5824 * C1222) *
               C19455) *
              C19382 * C1054 +
          ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
            C5824 * C6436 - C5745 * C6562) *
               C151 +
           (C5822 * C1219 - C5743 * C1313 + C5823 * C1222 - C5744 * C1316 +
            C5824 * C6604 - C5745 * C6727) *
               C19455) *
              C19382 * C1055 +
          ((C5743 * C1172 - C5822 * C1060 + C5744 * C6562 - C5823 * C6436 +
            C5745 * C6563 - C5824 * C6437) *
               C151 +
           (C5743 * C1316 - C5822 * C1222 + C5744 * C6727 - C5823 * C6604 +
            C5745 * C6728 - C5824 * C6605) *
               C19455) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
                C91 * C95) *
                   C214 +
               (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
                C91 * C445) *
                   C19466) *
                  C19455 * C19430 * C19416 * C84 +
              ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
                C79 * C104) *
                   C214 +
               (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
                C79 * C451) *
                   C19466) *
                  C19455 * C19430 * C19416 * C85 +
              ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
                C91 * C97) *
                   C214 +
               (C77 * C450 - C87 * C445 + C78 * C451 - C89 * C446 + C79 * C452 -
                C91 * C447) *
                   C19466) *
                  C19455 * C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
                C91 * C95) *
                   C214 +
               (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
                C91 * C445) *
                   C19466) *
                  C19455 * C19430 * C612 +
              ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
                C79 * C622) *
                   C214 +
               (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
                C79 * C924) *
                   C19466) *
                  C19455 * C19430 * C613 +
              ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
                C91 * C621) *
                   C214 +
               (C77 * C925 - C87 * C919 + C78 * C926 - C89 * C920 + C79 * C927 -
                C91 * C921) *
                   C19466) *
                  C19455 * C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C1054 +
          ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
            C91 * C1057 - C79 * C1063) *
               C214 +
           (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
            C91 * C1359 - C79 * C1365) *
               C19466) *
              C19455 * C1055 +
          ((C77 * C1069 - C87 * C1060 + C78 * C1071 - C89 * C1061 +
            C79 * C1073 - C91 * C1062) *
               C214 +
           (C77 * C1366 - C87 * C1360 + C78 * C1367 - C89 * C1361 +
            C79 * C1368 - C91 * C1362) *
               C19466) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C19382 * C626 - C3043 * C618) * C214 +
            (C19382 * C922 - C3043 * C916) * C19466) *
               C3041 +
           ((C19382 * C628 - C3043 * C619) * C214 +
            (C19382 * C925 - C3043 * C919) * C19466) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C3043 * C94 - C19382 * C100) * C214 +
            (C3043 * C444 - C19382 * C449) * C19466) *
               C3040 +
           ((C3043 * C617 - C19382 * C624) * C214 +
            (C3043 * C917 - C19382 * C923) * C19466) *
               C3041 +
           ((C3043 * C620 - C19382 * C630) * C214 +
            (C3043 * C920 - C19382 * C926) * C19466) *
               C3042) *
              C19430 * C19416 * C85 +
          (((C19382 * C102 - C3043 * C95) * C214 +
            (C19382 * C450 - C3043 * C445) * C19466) *
               C3040 +
           ((C19382 * C622 - C3043 * C616) * C214 +
            (C19382 * C924 - C3043 * C918) * C19466) *
               C3041 +
           ((C19382 * C632 - C3043 * C621) * C214 +
            (C19382 * C927 - C3043 * C921) * C19466) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C19430 * C612 +
          (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
           ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
           ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
              C19430 * C613 +
          (C3721 * C3040 +
           ((C3578 - C3577) * C214 + (C3718 - C3717) * C19466) * C3041 +
           ((C19382 * C3397 - C3043 * C3394) * C214 +
            (C19382 * C3710 - C3043 * C3708) * C19466) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C1054 +
          (((C3043 * C1059 - C19382 * C1067) * C214 +
            (C3043 * C1357 - C19382 * C1363) * C19466) *
               C3040 +
           ((C3043 * C2553 - C19382 * C2556) * C214 +
            (C3043 * C2889 - C19382 * C2892) * C19466) *
               C3041 +
           ((C3043 * C3860 - C19382 * C3863) * C214 +
            (C3043 * C4124 - C19382 * C4127) * C19466) *
               C3042) *
              C1055 +
          (((C19382 * C1069 - C3043 * C1060) * C214 +
            (C19382 * C1366 - C3043 * C1360) * C19466) *
               C3040 +
           ((C19382 * C3865 - C3043 * C3861) * C214 +
            (C19382 * C4128 - C3043 * C4125) * C19466) *
               C3041 +
           ((C19382 * C3867 - C3043 * C3862) * C214 +
            (C19382 * C4129 - C3043 * C4126) * C19466) *
               C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C19382 * C98 - C3043 * C93) * C5822 +
                               (C19382 * C448 - C3043 * C443) * C5743 +
                               (C19382 * C1067 - C3043 * C1059) * C5823 +
                               (C19382 * C1363 - C3043 * C1357) * C5744 +
                               (C19382 * C1069 - C3043 * C1060) * C5824 +
                               (C19382 * C1366 - C3043 * C1360) * C5745) *
                                  C19455 * C19430 * C19416 * C84 +
                              ((C3043 * C94 - C19382 * C100) * C5822 +
                               (C3043 * C444 - C19382 * C449) * C5743 +
                               (C3043 * C1058 - C19382 * C1065) * C5823 +
                               (C3043 * C1358 - C19382 * C1364) * C5744 +
                               (C3043 * C1061 - C19382 * C1071) * C5824 +
                               (C3043 * C1361 - C19382 * C1367) * C5745) *
                                  C19455 * C19430 * C19416 * C85 +
                              ((C19382 * C102 - C3043 * C95) * C5822 +
                               (C19382 * C450 - C3043 * C445) * C5743 +
                               (C19382 * C1063 - C3043 * C1057) * C5823 +
                               (C19382 * C1365 - C3043 * C1359) * C5744 +
                               (C19382 * C1073 - C3043 * C1062) * C5824 +
                               (C19382 * C1368 - C3043 * C1362) * C5745) *
                                  C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C5822 +
           (C19382 * C448 - C3043 * C443) * C5743 +
           (C19382 * C1067 - C3043 * C1059) * C5823 +
           (C19382 * C1363 - C3043 * C1357) * C5744 +
           (C19382 * C1069 - C3043 * C1060) * C5824 +
           (C19382 * C1366 - C3043 * C1360) * C5745) *
              C19455 * C19430 * C612 +
          ((C3570 - C3569) * C5822 + (C3713 - C3712) * C5743 +
           (C5420 - C5421) * C5823 + (C5586 - C5587) * C5744 +
           (C3043 * C3861 - C19382 * C3865) * C5824 +
           (C3043 * C4125 - C19382 * C4128) * C5745) *
              C19455 * C19430 * C613 +
          (C3581 * C5822 + C3719 * C5743 + (C5425 - C5424) * C5823 +
           (C5589 - C5588) * C5744 + (C19382 * C3867 - C3043 * C3862) * C5824 +
           (C19382 * C4129 - C3043 * C4126) * C5745) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C5822 +
           (C19382 * C448 - C3043 * C443) * C5743 + (C6609 - C6610) * C5823 +
           (C6772 - C6773) * C5744 + C6621 * C5824 + C6778 * C5745) *
              C19455 * C1054 +
          ((C6610 - C6609) * C5822 + (C6773 - C6772) * C5743 +
           (C6614 - C6613) * C5823 + (C6775 - C6774) * C5744 +
           (C6617 - C6618) * C5824 + (C6776 - C6777) * C5745) *
              C19455 * C1055 +
          (C6621 * C5822 + C6778 * C5743 + (C6618 - C6617) * C5823 +
           (C6777 - C6776) * C5744 + (C19382 * C6440 - C3043 * C6437) * C5824 +
           (C19382 * C6770 - C3043 * C6768) * C5745) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C19455 * C152 - C151 * C93) * C214 +
                (C19455 * C491 - C151 * C443) * C19466) *
                   C77 +
               ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
               C506 * C79) *
                  C19430 * C19416 * C84 +
              (((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
               ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
               ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
                  C19430 * C19416 * C85 +
              (C506 * C77 +
               ((C172 - C171) * C214 + (C503 - C502) * C19466) * C78 +
               ((C19455 * C156 - C151 * C97) * C214 +
                (C19455 * C495 - C151 * C447) * C19466) *
                   C79) *
                  C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C19455 * C152 - C151 * C93) * C214 +
                (C19455 * C491 - C151 * C443) * C19466) *
                   C77 +
               ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
               C506 * C79) *
                  C19430 * C612 +
              (((C151 * C618 - C19455 * C678) * C214 +
                (C151 * C916 - C19455 * C966) * C19466) *
                   C77 +
               ((C151 * C617 - C19455 * C679) * C214 +
                (C151 * C917 - C19455 * C967) * C19466) *
                   C78 +
               ((C151 * C616 - C19455 * C680) * C214 +
                (C151 * C918 - C19455 * C968) * C19466) *
                   C79) *
                  C19430 * C613 +
              (((C19455 * C681 - C151 * C619) * C214 +
                (C19455 * C969 - C151 * C919) * C19466) *
                   C77 +
               ((C19455 * C682 - C151 * C620) * C214 +
                (C19455 * C970 - C151 * C920) * C19466) *
                   C78 +
               ((C19455 * C683 - C151 * C621) * C214 +
                (C19455 * C971 - C151 * C921) * C19466) *
                   C79) *
                  C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C1054 +
          (((C151 * C1059 - C19455 * C1119) * C214 +
            (C151 * C1357 - C19455 * C1407) * C19466) *
               C77 +
           ((C151 * C1058 - C19455 * C1120) * C214 +
            (C151 * C1358 - C19455 * C1408) * C19466) *
               C78 +
           ((C151 * C1057 - C19455 * C1121) * C214 +
            (C151 * C1359 - C19455 * C1409) * C19466) *
               C79) *
              C1055 +
          (((C19455 * C1122 - C151 * C1060) * C214 +
            (C19455 * C1410 - C151 * C1360) * C19466) *
               C77 +
           ((C19455 * C1123 - C151 * C1061) * C214 +
            (C19455 * C1411 - C151 * C1361) * C19466) *
               C78 +
           ((C19455 * C1124 - C151 * C1062) * C214 +
            (C19455 * C1412 - C151 * C1362) * C19466) *
               C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C214 +
           (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
            C3085 * C920 - C3042 * C970) *
               C19466) *
              C19382 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C214 +
           (C3040 * C493 - C3083 * C445 + C3041 * C968 - C3084 * C918 +
            C3042 * C971 - C3085 * C921) *
               C19466) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C214 +
           (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
            C3085 * C3707 - C3042 * C3759) *
               C19466) *
              C19382 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C214 +
           (C3040 * C969 - C3083 * C919 + C3041 * C3759 - C3084 * C3707 +
            C3042 * C3760 - C3085 * C3708) *
               C19466) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C1054 +
          ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
            C3085 * C3860 - C3042 * C3910) *
               C214 +
           (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
            C3085 * C4124 - C3042 * C4168) *
               C19466) *
              C19382 * C1055 +
          ((C3040 * C1122 - C3083 * C1060 + C3041 * C3911 - C3084 * C3861 +
            C3042 * C3912 - C3085 * C3862) *
               C214 +
           (C3040 * C1410 - C3083 * C1360 + C3041 * C4169 - C3084 * C4125 +
            C3042 * C4170 - C3085 * C4126) *
               C19466) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C5822 +
           (C19455 * C491 - C151 * C443) * C5743 +
           (C19455 * C1119 - C151 * C1059) * C5823 +
           (C19455 * C1407 - C151 * C1357) * C5744 +
           (C19455 * C1122 - C151 * C1060) * C5824 +
           (C19455 * C1410 - C151 * C1360) * C5745) *
              C19382 * C19430 * C19416 * C84 +
          ((C164 - C163) * C5822 + (C498 - C497) * C5743 +
           (C2090 - C2091) * C5823 + (C2433 - C2434) * C5744 +
           (C151 * C1061 - C19455 * C1123) * C5824 +
           (C151 * C1361 - C19455 * C1411) * C5745) *
              C19382 * C19430 * C19416 * C85 +
          (C175 * C5822 + C504 * C5743 + (C2095 - C2094) * C5823 +
           (C2436 - C2435) * C5744 + (C19455 * C1124 - C151 * C1062) * C5824 +
           (C19455 * C1412 - C151 * C1362) * C5745) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C5822 +
           (C19455 * C491 - C151 * C443) * C5743 +
           (C19455 * C1119 - C151 * C1059) * C5823 +
           (C19455 * C1407 - C151 * C1357) * C5744 +
           (C19455 * C1122 - C151 * C1060) * C5824 +
           (C19455 * C1410 - C151 * C1360) * C5745) *
              C19382 * C19430 * C612 +
          ((C151 * C618 - C19455 * C678) * C5822 +
           (C151 * C916 - C19455 * C966) * C5743 +
           (C151 * C2553 - C19455 * C2615) * C5823 +
           (C151 * C2889 - C19455 * C2945) * C5744 +
           (C151 * C3861 - C19455 * C3911) * C5824 +
           (C151 * C4125 - C19455 * C4169) * C5745) *
              C19382 * C19430 * C613 +
          ((C19455 * C681 - C151 * C619) * C5822 +
           (C19455 * C969 - C151 * C919) * C5743 +
           (C19455 * C3910 - C151 * C3860) * C5823 +
           (C19455 * C4168 - C151 * C4124) * C5744 +
           (C19455 * C3912 - C151 * C3862) * C5824 +
           (C19455 * C4170 - C151 * C4126) * C5745) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C5822 +
           (C19455 * C491 - C151 * C443) * C5743 + (C6508 - C6509) * C5823 +
           (C6819 - C6820) * C5744 + C6520 * C5824 + C6825 * C5745) *
              C19382 * C1054 +
          ((C6509 - C6508) * C5822 + (C6820 - C6819) * C5743 +
           (C6513 - C6512) * C5823 + (C6822 - C6821) * C5744 +
           (C6516 - C6517) * C5824 + (C6823 - C6824) * C5745) *
              C19382 * C1055 +
          (C6520 * C5822 + C6825 * C5743 + (C6517 - C6516) * C5823 +
           (C6824 - C6823) * C5744 + (C19455 * C6504 - C151 * C6437) * C5824 +
           (C19455 * C6817 - C151 * C6768) * C5745) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) *
                   C19455 * C77 +
               C572 * C78 + C573 * C79) *
                  C19430 * C19416 * C84 -
              (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C19416 * C85 +
              (C573 * C77 + C574 * C78 +
               (C214 * C219 - C544 * C97 - C214 * C447 + C19466 * C549) *
                   C19455 * C79) *
                  C19430 * C19416 * C86) +
         0.5 * std::pow(Pi, 2.5) *
             (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) *
                   C19455 * C77 +
               C572 * C78 + C573 * C79) *
                  C19430 * C612 -
              ((C214 * C730 - C544 * C616 - C214 * C918 + C19466 * C1010) *
                   C19455 * C79 +
               (C214 * C729 - C544 * C617 - C214 * C917 + C19466 * C1011) *
                   C19455 * C78 +
               (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) *
                   C19455 * C77) *
                  C19430 * C613 +
              ((C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) *
                   C19455 * C77 +
               (C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) *
                   C19455 * C78 +
               (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) *
                   C19455 * C79) *
                  C19430 * C614) *
             C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C1054 -
          ((C214 * C1171 - C544 * C1057 - C214 * C1359 + C19466 * C1451) *
               C19455 * C79 +
           (C214 * C1170 - C544 * C1058 - C214 * C1358 + C19466 * C1452) *
               C19455 * C78 +
           (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
               C19455 * C77) *
              C1055 +
          ((C214 * C1172 - C544 * C1060 - C214 * C1360 + C19466 * C1454) *
               C19455 * C77 +
           (C214 * C1173 - C544 * C1061 - C214 * C1361 + C19466 * C1455) *
               C19455 * C78 +
           (C214 * C1174 - C544 * C1062 - C214 * C1362 + C19466 * C1456) *
               C19455 * C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C3041 +
           (C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C3042) *
              C19382 * C19430 * C19416 * C84 -
          ((C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C3042 +
           C1979 * C3041 + C569 * C3040) *
              C19382 * C19430 * C19416 * C85 +
          (C570 * C3040 + C1978 * C3041 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C19430 * C612 -
          (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
              C613 +
          (C3821 * C3040 + C3822 * C3041 +
           (C214 * C3506 - C544 * C3394 - C214 * C3708 + C19466 * C3800) *
               C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C1054 -
          ((C214 * C3954 - C544 * C3860 - C214 * C4124 + C19466 * C4209) *
               C3042 +
           (C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
               C3041 +
           (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
               C3040) *
              C19382 * C1055 +
          ((C214 * C1172 - C544 * C1060 - C214 * C1360 + C19466 * C1454) *
               C3040 +
           (C214 * C3955 - C544 * C3861 - C214 * C4125 + C19466 * C4210) *
               C3041 +
           (C214 * C3956 - C544 * C3862 - C214 * C4126 + C19466 * C4211) *
               C3042) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
           C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
           C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
              C19455 * C19382 * C19430 * C19416 * C84 -
          (C5824 * C1173 - C6055 * C1061 - C5824 * C1361 + C5745 * C1455 +
           C5823 * C1170 - C6054 * C1058 - C5823 * C1358 + C5744 * C1452 +
           C5822 * C216 - C6053 * C94 - C5822 * C444 + C5743 * C546) *
              C19455 * C19382 * C19430 * C19416 * C85 +
          (C5822 * C217 - C6053 * C95 - C5822 * C445 + C5743 * C547 +
           C5823 * C1171 - C6054 * C1057 - C5823 * C1359 + C5744 * C1451 +
           C5824 * C1174 - C6055 * C1062 - C5824 * C1362 + C5745 * C1456) *
              C19455 * C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
           C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
           C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
              C19455 * C19382 * C19430 * C612 -
          (C5824 * C3955 - C6055 * C3861 - C5824 * C4125 + C5745 * C4210 +
           C5823 * C2671 - C6054 * C2553 - C5823 * C2889 + C5744 * C2998 +
           C5822 * C728 - C6053 * C618 - C5822 * C916 + C5743 * C1012) *
              C19455 * C19382 * C19430 * C613 +
          (C5822 * C731 - C6053 * C619 - C5822 * C919 + C5743 * C1013 +
           C5823 * C3954 - C6054 * C3860 - C5823 * C4124 + C5744 * C4209 +
           C5824 * C3956 - C6055 * C3862 - C5824 * C4126 + C5745 * C4211) *
              C19455 * C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
           C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
           C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
              C19455 * C19382 * C1054 -
          (C5824 * C6562 - C6055 * C6436 - C5824 * C6767 + C5745 * C6863 +
           C5823 * C1172 - C6054 * C1060 - C5823 * C1360 + C5744 * C1454 +
           C5822 * C1169 - C6053 * C1059 - C5822 * C1357 + C5743 * C1453) *
              C19455 * C19382 * C1055 +
          (C5822 * C1172 - C6053 * C1060 - C5822 * C1360 + C5743 * C1454 +
           C5823 * C6562 - C6054 * C6436 - C5823 * C6767 + C5744 * C6863 +
           C5824 * C6563 - C6055 * C6437 - C5824 * C6768 + C5745 * C6864) *
              C19455 * C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C2031 -
           ((C3043 * C3863 - C3044 * C3860 - C3043 * C3864 + C19382 * C3869) *
                C19466 * C3042 +
            (C3043 * C2556 - C3044 * C2553 - C3043 * C2557 + C19382 * C2562) *
                C19466 * C3041 +
            (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
                C19466 * C3040) *
               C2032) *
              C19416 * C1509 +
          (((C3043 * C1065 - C3044 * C1058 - C3043 * C1066 + C19382 * C1076) *
                C19466 * C3040 +
            (C3043 * C2558 - C3044 * C2554 - C3043 * C2559 + C19382 * C2563) *
                C19466 * C3041 +
            (C3043 * C4770 - C3044 * C4769 - C3043 * C4771 + C19382 * C4772) *
                C19466 * C3042) *
               C2032 -
           (C4282 * C3042 + C4281 * C3041 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C19466 * C3040) *
               C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C2031 -
           (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 +
            C89 * C1065 - C90 * C1058 - C89 * C1066 + C78 * C1076 +
            C87 * C1067 - C88 * C1059 - C87 * C1068 + C77 * C1077) *
               C19466 * C19455 * C2032) *
              C19416 * C1509 +
          ((C87 * C1065 - C88 * C1058 - C87 * C1066 + C77 * C1076 +
            C89 * C1063 - C90 * C1057 - C89 * C1064 + C78 * C1075 +
            C91 * C2034 - C92 * C2033 - C91 * C2035 + C79 * C2036) *
               C19466 * C19455 * C2032 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C19466 * C19455 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
            C6463 * C5744 + C6464 * C5745) *
               C19455 * C2031 -
           (C6465 * C5745 + C6464 * C5744 + C6463 * C5743) * C19455 * C2032) *
              C19416 * C1509 +
          ((C7398 * C5743 + C7399 * C5744 +
            (C3043 * C7382 - C3044 * C7381 - C3043 * C7383 + C19382 * C7384) *
                C5745) *
               C19455 * C2032 -
           (C7399 * C5745 + C7398 * C5744 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C5743) *
               C19455 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C3043 +
            (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
             C3042 * C687 - C3085 * C629) *
                C19382) *
               C19466 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C3043 +
            (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 - C3041 * C2618 +
             C3085 * C3864 - C3042 * C3913) *
                C19382) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C3043 +
            (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
             C3085 * C631 - C3042 * C688) *
                C19382) *
               C19466 * C2031 +
           ((C3040 * C1120 - C3083 * C1058 + C3041 * C2616 - C3084 * C2554 +
             C3042 * C4823 - C3085 * C4769) *
                C3043 +
            (C3040 * C1126 - C3083 * C1066 + C3041 * C2619 - C3084 * C2559 +
             C3042 * C4824 - C3085 * C4771) *
                C19382) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C87 +
            (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C19466 * C2031 +
           ((C151 * C1059 - C19455 * C1119) * C87 +
            (C151 * C1068 - C19455 * C1125) * C77 + (C2090 - C2091) * C89 +
            (C2092 - C2093) * C78 + (C2094 - C2095) * C91 +
            (C2096 - C2097) * C79) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C19466 * C2031 +
           ((C2091 - C2090) * C87 + (C2093 - C2092) * C77 +
            (C2095 - C2094) * C89 + (C2097 - C2096) * C78 +
            (C19455 * C2087 - C151 * C2033) * C91 +
            (C19455 * C2088 - C151 * C2035) * C79) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C3043 +
             (C19455 * C157 - C151 * C99) * C19382) *
                C5743 +
            ((C6508 - C6509) * C3043 + (C6510 - C6511) * C19382) * C5744 +
            C6524 * C5745) *
               C2031 +
           (((C6509 - C6508) * C3043 + (C6511 - C6510) * C19382) * C5743 +
            ((C6513 - C6512) * C3043 + (C6515 - C6514) * C19382) * C5744 +
            ((C6516 - C6517) * C3043 + (C6518 - C6519) * C19382) * C5745) *
               C2032) *
              C19416 * C1509 +
          ((((C164 - C163) * C3043 + (C166 - C165) * C19382) * C5743 +
            ((C2090 - C2091) * C3043 + (C2092 - C2093) * C19382) * C5744 +
            ((C7452 - C7453) * C3043 + (C7454 - C7455) * C19382) * C5745) *
               C2031 +
           (((C2091 - C2090) * C3043 + (C2093 - C2092) * C19382) * C5743 +
            ((C7453 - C7452) * C3043 + (C7455 - C7454) * C19382) * C5744 +
            ((C19455 * C7449 - C151 * C7381) * C3043 +
             (C19455 * C7450 - C151 * C7383) * C19382) *
                C5745) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C3043 +
             (C214 * C1068 - C19466 * C1175) * C19382) *
                C3040 +
            ((C214 * C2553 - C19466 * C2671) * C3043 +
             (C214 * C2557 - C19466 * C2674) * C19382) *
                C3041 +
            ((C214 * C3860 - C19466 * C3954) * C3043 +
             (C214 * C3864 - C19466 * C3957) * C19382) *
                C3042) *
               C2032) *
              C19416 * C1509 +
          ((((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
            ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
            ((C4387 - C4388) * C3043 + (C4389 - C4390) * C19382) * C3042) *
               C2031 +
           (((C2151 - C2150) * C3043 + (C2153 - C2152) * C19382) * C3040 +
            ((C19466 * C2672 - C214 * C2554) * C3043 +
             (C19466 * C2675 - C214 * C2559) * C19382) *
                C3041 +
            ((C19466 * C4875 - C214 * C4769) * C3043 +
             (C19466 * C4876 - C214 * C4771) * C19382) *
                C3042) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C87 +
            (C214 * C1068 - C19466 * C1175) * C77 + (C2150 - C2151) * C89 +
            (C2152 - C2153) * C78 + (C2154 - C2155) * C91 +
            (C2156 - C2157) * C79) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C19455 * C2031 +
           ((C2151 - C2150) * C87 + (C2153 - C2152) * C77 +
            (C2155 - C2154) * C89 + (C2157 - C2156) * C78 +
            (C19466 * C2147 - C214 * C2033) * C91 +
            (C19466 * C2148 - C214 * C2035) * C79) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C3043 +
            (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
             C5745 * C1178 - C5824 * C1070) *
                C19382) *
               C19455 * C2031 +
           ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
             C5824 * C6436 - C5745 * C6562) *
                C3043 +
            (C5822 * C1068 - C5743 * C1175 + C5823 * C1070 - C5744 * C1178 +
             C5824 * C6439 - C5745 * C6564) *
                C19382) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
             C5824 * C1061 - C5745 * C1173) *
                C3043 +
            (C5822 * C101 - C5743 * C221 + C5823 * C1066 - C5744 * C1176 +
             C5824 * C1072 - C5745 * C1179) *
                C19382) *
               C19455 * C2031 +
           ((C5743 * C1170 - C5822 * C1058 + C5744 * C1173 - C5823 * C1061 +
             C5745 * C7505 - C5824 * C7381) *
                C3043 +
            (C5743 * C1176 - C5822 * C1066 + C5744 * C1179 - C5823 * C1072 +
             C5745 * C7506 - C5824 * C7383) *
                C19382) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C2031 +
           ((C3043 * C1059 - C19382 * C1067) * C3083 +
            (C3043 * C1219 - C19382 * C1225) * C3040 +
            (C3043 * C2553 - C19382 * C2556) * C3084 +
            (C3043 * C2727 - C19382 * C2730) * C3041 +
            (C3043 * C3860 - C19382 * C3863) * C3085 +
            (C3043 * C3998 - C19382 * C4001) * C3042) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C3043 * C94 - C19382 * C100) * C3083 +
            (C3043 * C278 - C19382 * C283) * C3040 + (C4443 - C4444) * C3084 +
            (C4445 - C4446) * C3041 + (C4447 - C4448) * C3085 +
            (C4449 - C4450) * C3042) *
               C19466 * C2031 +
           ((C19382 * C1065 - C3043 * C1058) * C3083 +
            (C19382 * C1226 - C3043 * C1220) * C3040 +
            (C19382 * C2558 - C3043 * C2554) * C3084 +
            (C19382 * C2731 - C3043 * C2728) * C3041 +
            (C19382 * C4770 - C3043 * C4769) * C3085 +
            (C19382 * C4928 - C3043 * C4927) * C3042) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C151 +
            (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
             C91 * C1221 - C79 * C1227) *
                C19455) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C151 +
            (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
             C79 * C285) *
                C19455) *
               C19466 * C2031 +
           ((C77 * C1065 - C87 * C1058 + C78 * C1063 - C89 * C1057 +
             C79 * C2034 - C91 * C2033) *
                C151 +
            (C77 * C1226 - C87 * C1220 + C78 * C1227 - C89 * C1221 +
             C79 * C2208 - C91 * C2207) *
                C19455) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C151 +
             (C19382 * C282 - C3043 * C277) * C19455) *
                C5743 +
            ((C6609 - C6610) * C151 + (C6611 - C6612) * C19455) * C5744 +
            C6625 * C5745) *
               C2031 +
           (((C6610 - C6609) * C151 + (C6612 - C6611) * C19455) * C5743 +
            ((C6614 - C6613) * C151 + (C6616 - C6615) * C19455) * C5744 +
            ((C6617 - C6618) * C151 + (C6619 - C6620) * C19455) * C5745) *
               C2032) *
              C19416 * C1509 +
          ((((C3043 * C94 - C19382 * C100) * C151 +
             (C3043 * C278 - C19382 * C283) * C19455) *
                C5743 +
            ((C7560 - C7561) * C151 + (C7562 - C7563) * C19455) * C5744 +
            ((C7564 - C7565) * C151 + (C7566 - C7567) * C19455) * C5745) *
               C2031 +
           (((C7561 - C7560) * C151 + (C7563 - C7562) * C19455) * C5743 +
            ((C7565 - C7564) * C151 + (C7567 - C7566) * C19455) * C5744 +
            ((C19382 * C7382 - C3043 * C7381) * C151 +
             (C19382 * C7558 - C3043 * C7557) * C19455) *
                C5745) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C2031 -
           (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
            C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
            C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
               C19382 * C19466 * C2032) *
              C19416 * C1509 +
          ((C3083 * C1120 - C3200 * C1058 - C3083 * C1220 + C3040 * C1270 +
            C3084 * C2616 - C3201 * C2554 - C3084 * C2728 + C3041 * C2784 +
            C3085 * C4823 - C3202 * C4769 - C3085 * C4927 + C3042 * C4979) *
               C19382 * C19466 * C2032 -
           (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
            C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
            C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
               C19382 * C19466 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C2031 -
           (C2273 * C79 + C2274 * C78 +
            (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
                C77) *
               C19466 * C2032) *
              C19416 * C1509 +
          ((C2274 * C77 + C2273 * C78 +
            (C151 * C2087 - C325 * C2033 - C151 * C2207 + C19455 * C2259) *
                C79) *
               C19466 * C2032 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
                C5743 +
            C6687 * C5744 + C6688 * C5745) *
               C2031 -
           (C6689 * C5745 + C6688 * C5744 + C6687 * C5743) * C2032) *
              C19416 * C1509 +
          ((C7619 * C5743 + C7627 * C5744 +
            (C151 * C7449 - C325 * C7381 - C151 * C7557 + C19455 * C7617) *
                C19382 * C5745) *
               C2032 -
           (C7627 * C5745 + C7619 * C5744 + C350 * C19382 * C5743) * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C3083 +
            (C214 * C1219 - C19466 * C1313) * C3040 +
            (C214 * C2553 - C19466 * C2671) * C3084 +
            (C214 * C2727 - C19466 * C2836) * C3041 +
            (C214 * C3860 - C19466 * C3954) * C3085 +
            (C214 * C3998 - C19466 * C4083) * C3042) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C227 - C226) * C3083 + (C397 - C396) * C3040 +
            (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
            (C4387 - C4388) * C3085 + (C4553 - C4554) * C3042) *
               C19382 * C2031 +
           ((C2151 - C2150) * C3083 + (C2327 - C2326) * C3040 +
            (C19466 * C2672 - C214 * C2554) * C3084 +
            (C19466 * C2837 - C214 * C2728) * C3041 +
            (C19466 * C4875 - C214 * C4769) * C3085 +
            (C19466 * C5030 - C214 * C4927) * C3042) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C151 +
             (C214 * C1219 - C19466 * C1313) * C19455) *
                C77 +
            ((C2150 - C2151) * C151 + (C2326 - C2327) * C19455) * C78 +
            ((C2154 - C2155) * C151 + (C2328 - C2329) * C19455) * C79) *
               C2032) *
              C19416 * C1509 +
          ((((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
               C2031 +
           (((C2151 - C2150) * C151 + (C2327 - C2326) * C19455) * C77 +
            ((C2155 - C2154) * C151 + (C2329 - C2328) * C19455) * C78 +
            ((C19466 * C2147 - C214 * C2033) * C151 +
             (C19466 * C2324 - C214 * C2207) * C19455) *
                C79) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
             C5745 * C1172 - C5824 * C1060) *
                C151 +
            (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
             C5745 * C1316 - C5824 * C1222) *
                C19455) *
               C19382 * C2031 +
           ((C5822 * C1059 - C5743 * C1169 + C5823 * C1060 - C5744 * C1172 +
             C5824 * C6436 - C5745 * C6562) *
                C151 +
            (C5822 * C1219 - C5743 * C1313 + C5823 * C1222 - C5744 * C1316 +
             C5824 * C6604 - C5745 * C6727) *
                C19455) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
             C5824 * C1061 - C5745 * C1173) *
                C151 +
            (C5822 * C278 - C5743 * C391 + C5823 * C1220 - C5744 * C1314 +
             C5824 * C1223 - C5745 * C1317) *
                C19455) *
               C19382 * C2031 +
           ((C5743 * C1170 - C5822 * C1058 + C5744 * C1173 - C5823 * C1061 +
             C5745 * C7505 - C5824 * C7381) *
                C151 +
            (C5743 * C1314 - C5822 * C1220 + C5744 * C1317 - C5823 * C1223 +
             C5745 * C7677 - C5824 * C7557) *
                C19455) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C2031 +
           (((C3043 * C1059 - C19382 * C1067) * C214 +
             (C3043 * C1357 - C19382 * C1363) * C19466) *
                C3040 +
            ((C3043 * C2553 - C19382 * C2556) * C214 +
             (C3043 * C2889 - C19382 * C2892) * C19466) *
                C3041 +
            ((C3043 * C3860 - C19382 * C3863) * C214 +
             (C3043 * C4124 - C19382 * C4127) * C19466) *
                C3042) *
               C2032) *
              C19416 * C1509 +
          ((((C3043 * C94 - C19382 * C100) * C214 +
             (C3043 * C444 - C19382 * C449) * C19466) *
                C3040 +
            ((C4443 - C4444) * C214 + (C4607 - C4608) * C19466) * C3041 +
            ((C4447 - C4448) * C214 + (C4609 - C4610) * C19466) * C3042) *
               C2031 +
           (((C19382 * C1065 - C3043 * C1058) * C214 +
             (C19382 * C1364 - C3043 * C1358) * C19466) *
                C3040 +
            ((C19382 * C2558 - C3043 * C2554) * C214 +
             (C19382 * C2893 - C3043 * C2890) * C19466) *
                C3041 +
            ((C19382 * C4770 - C3043 * C4769) * C214 +
             (C19382 * C5082 - C3043 * C5081) * C19466) *
                C3042) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C214 +
            (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
             C91 * C1359 - C79 * C1365) *
                C19466) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C19466) *
               C19455 * C2031 +
           ((C77 * C1065 - C87 * C1058 + C78 * C1063 - C89 * C1057 +
             C79 * C2034 - C91 * C2033) *
                C214 +
            (C77 * C1364 - C87 * C1358 + C78 * C1365 - C89 * C1359 +
             C79 * C2380 - C91 * C2379) *
                C19466) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C5822 +
            (C19382 * C448 - C3043 * C443) * C5743 + (C6609 - C6610) * C5823 +
            (C6772 - C6773) * C5744 + C6621 * C5824 + C6778 * C5745) *
               C19455 * C2031 +
           ((C6610 - C6609) * C5822 + (C6773 - C6772) * C5743 +
            (C6614 - C6613) * C5823 + (C6775 - C6774) * C5744 +
            (C6617 - C6618) * C5824 + (C6776 - C6777) * C5745) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C3043 * C94 - C19382 * C100) * C5822 +
            (C3043 * C444 - C19382 * C449) * C5743 + (C7560 - C7561) * C5823 +
            (C7731 - C7732) * C5744 + (C7564 - C7565) * C5824 +
            (C7733 - C7734) * C5745) *
               C19455 * C2031 +
           ((C7561 - C7560) * C5822 + (C7732 - C7731) * C5743 +
            (C7565 - C7564) * C5823 + (C7734 - C7733) * C5744 +
            (C19382 * C7382 - C3043 * C7381) * C5824 +
            (C19382 * C7729 - C3043 * C7728) * C5745) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C214 +
            (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
             C3085 * C4124 - C3042 * C4168) *
                C19466) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C214 +
            (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
             C3085 * C920 - C3042 * C970) *
                C19466) *
               C19382 * C2031 +
           ((C3040 * C1120 - C3083 * C1058 + C3041 * C2616 - C3084 * C2554 +
             C3042 * C4823 - C3085 * C4769) *
                C214 +
            (C3040 * C1408 - C3083 * C1358 + C3041 * C2946 - C3084 * C2890 +
             C3042 * C5133 - C3085 * C5081) *
                C19466) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C2031 +
           (((C151 * C1059 - C19455 * C1119) * C214 +
             (C151 * C1357 - C19455 * C1407) * C19466) *
                C77 +
            ((C2090 - C2091) * C214 + (C2433 - C2434) * C19466) * C78 +
            ((C2094 - C2095) * C214 + (C2435 - C2436) * C19466) * C79) *
               C2032) *
              C19416 * C1509 +
          ((((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
               C2031 +
           (((C2091 - C2090) * C214 + (C2434 - C2433) * C19466) * C77 +
            ((C2095 - C2094) * C214 + (C2436 - C2435) * C19466) * C78 +
            ((C19455 * C2087 - C151 * C2033) * C214 +
             (C19455 * C2431 - C151 * C2379) * C19466) *
                C79) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C5822 +
            (C19455 * C491 - C151 * C443) * C5743 + (C6508 - C6509) * C5823 +
            (C6819 - C6820) * C5744 + C6520 * C5824 + C6825 * C5745) *
               C19382 * C2031 +
           ((C6509 - C6508) * C5822 + (C6820 - C6819) * C5743 +
            (C6513 - C6512) * C5823 + (C6822 - C6821) * C5744 +
            (C6516 - C6517) * C5824 + (C6823 - C6824) * C5745) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C164 - C163) * C5822 + (C498 - C497) * C5743 +
            (C2090 - C2091) * C5823 + (C2433 - C2434) * C5744 +
            (C7452 - C7453) * C5824 + (C7786 - C7787) * C5745) *
               C19382 * C2031 +
           ((C2091 - C2090) * C5822 + (C2434 - C2433) * C5743 +
            (C7453 - C7452) * C5823 + (C7787 - C7786) * C5744 +
            (C19455 * C7449 - C151 * C7381) * C5824 +
            (C19455 * C7784 - C151 * C7728) * C5745) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C2031 -
           ((C214 * C3954 - C544 * C3860 - C214 * C4124 + C19466 * C4209) *
                C3042 +
            (C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
                C3041 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C3040) *
               C19382 * C2032) *
              C19416 * C1509 +
          ((C2501 * C3040 +
            (C214 * C2672 - C544 * C2554 - C214 * C2890 + C19466 * C2999) *
                C3041 +
            (C214 * C4875 - C544 * C4769 - C214 * C5081 + C19466 * C5184) *
                C3042) *
               C19382 * C2032 -
           (C4719 * C3042 + C1979 * C3041 + C569 * C3040) * C19382 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C2031 -
           (C2502 * C79 + C2503 * C78 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C19455 * C77) *
               C2032) *
              C19416 * C1509 +
          ((C2503 * C77 + C2502 * C78 +
            (C214 * C2147 - C544 * C2033 - C214 * C2379 + C19466 * C2486) *
                C19455 * C79) *
               C2032 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
            C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
            C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
               C19455 * C19382 * C2031 -
           (C5824 * C6562 - C6055 * C6436 - C5824 * C6767 + C5745 * C6863 +
            C5823 * C1172 - C6054 * C1060 - C5823 * C1360 + C5744 * C1454 +
            C5822 * C1169 - C6053 * C1059 - C5822 * C1357 + C5743 * C1453) *
               C19455 * C19382 * C2032) *
              C19416 * C1509 +
          ((C5822 * C1170 - C6053 * C1058 - C5822 * C1358 + C5743 * C1452 +
            C5823 * C1173 - C6054 * C1061 - C5823 * C1361 + C5744 * C1455 +
            C5824 * C7505 - C6055 * C7381 - C5824 * C7728 + C5745 * C7837) *
               C19455 * C19382 * C2032 -
           (C5824 * C1173 - C6055 * C1061 - C5824 * C1361 + C5745 * C1455 +
            C5823 * C1170 - C6054 * C1058 - C5823 * C1358 + C5744 * C1452 +
            C5822 * C216 - C6053 * C94 - C5822 * C444 + C5743 * C546) *
               C19455 * C19382 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C612 -
          (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
           C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
           C87 * C627 + C77 * C636) *
              C19466 * C19455 * C19430 * C613 +
          (C87 * C628 - C88 * C619 - C87 * C629 + C77 * C637 + C89 * C630 -
           C90 * C620 - C89 * C631 + C78 * C638 + C91 * C632 - C92 * C621 -
           C91 * C633 + C79 * C639) *
              C19466 * C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C19416 * C84 -
          (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
           C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
           C87 * C101 + C77 * C109) *
              C19466 * C19455 * C19430 * C19416 * C85 +
          (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
           C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
           C91 * C107 + C79 * C112) *
              C19466 * C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           (C3043 * C626 - C3044 * C618 - C3043 * C627 + C19382 * C636) *
               C19466 * C3041 +
           (C3043 * C628 - C3044 * C619 - C3043 * C629 + C19382 * C637) *
               C19466 * C3042) *
              C19430 * C19416 * C84 -
          ((C3043 * C630 - C3044 * C620 - C3043 * C631 + C19382 * C638) *
               C19466 * C3042 +
           (C3043 * C624 - C3044 * C617 - C3043 * C625 + C19382 * C635) *
               C19466 * C3041 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C19466 * C3040) *
              C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
               C19466 * C3040 +
           (C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
               C19466 * C3041 +
           (C3043 * C632 - C3044 * C621 - C3043 * C633 + C19382 * C639) *
               C19466 * C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C19430 * C612 -
          (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C613 +
          (C3424 * C3040 + C3425 * C3041 +
           (C3043 * C3397 - C3044 * C3394 - C3043 * C3398 + C19382 * C3400) *
               C19466 * C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C5744 +
           (C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C5745) *
              C19455 * C19430 * C19416 * C84 -
          ((C3043 * C1071 - C3044 * C1061 - C3043 * C1072 + C19382 * C1079) *
               C5745 +
           (C3043 * C1065 - C3044 * C1058 - C3043 * C1066 + C19382 * C1076) *
               C5744 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C5743) *
              C19455 * C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) * C5743 +
           (C3043 * C1063 - C3044 * C1057 - C3043 * C1064 + C19382 * C1075) *
               C5744 +
           (C3043 * C1073 - C3044 * C1062 - C3043 * C1074 + C19382 * C1080) *
               C5745) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C5743 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C5744 +
           (C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C5745) *
              C19455 * C19430 * C612 -
          ((C3043 * C3865 - C3044 * C3861 - C3043 * C3866 + C19382 * C3870) *
               C5745 +
           C5253 * C5744 + C3420 * C5743) *
              C19455 * C19430 * C613 +
          (C3421 * C5743 + C5252 * C5744 +
           (C3043 * C3867 - C3044 * C3862 - C3043 * C3868 + C19382 * C3871) *
               C5745) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C612 +
          ((C151 * C618 - C19455 * C678) * C87 +
           (C151 * C627 - C19455 * C684) * C77 +
           (C151 * C617 - C19455 * C679) * C89 +
           (C151 * C625 - C19455 * C685) * C78 +
           (C151 * C616 - C19455 * C680) * C91 +
           (C151 * C623 - C19455 * C686) * C79) *
              C19466 * C19430 * C613 +
          ((C19455 * C681 - C151 * C619) * C87 +
           (C19455 * C687 - C151 * C629) * C77 +
           (C19455 * C682 - C151 * C620) * C89 +
           (C19455 * C688 - C151 * C631) * C78 +
           (C19455 * C683 - C151 * C621) * C91 +
           (C19455 * C689 - C151 * C633) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C19416 * C84 +
          ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
           (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
              C19466 * C19430 * C19416 * C85 +
          (C175 * C87 + C176 * C77 + (C172 - C171) * C89 + (C174 - C173) * C78 +
           (C19455 * C156 - C151 * C97) * C91 +
           (C19455 * C161 - C151 * C107) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C3043 +
           (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
            C3085 * C631 - C3042 * C688) *
               C19382) *
              C19466 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C3043 +
           (C3040 * C159 - C3083 * C103 + C3041 * C686 - C3084 * C623 +
            C3042 * C689 - C3085 * C633) *
               C19382) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C3043 +
           (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
            C3085 * C3396 - C3042 * C3465) *
               C19382) *
              C19466 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C3043 +
           (C3040 * C687 - C3083 * C629 + C3041 * C3465 - C3084 * C3396 +
            C3042 * C3466 - C3085 * C3398) *
               C19382) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C3043 +
            (C19455 * C157 - C151 * C99) * C19382) *
               C5743 +
           ((C19455 * C1119 - C151 * C1059) * C3043 +
            (C19455 * C1125 - C151 * C1068) * C19382) *
               C5744 +
           ((C19455 * C1122 - C151 * C1060) * C3043 +
            (C19455 * C1128 - C151 * C1070) * C19382) *
               C5745) *
              C19430 * C19416 * C84 +
          (((C164 - C163) * C3043 + (C166 - C165) * C19382) * C5743 +
           ((C2090 - C2091) * C3043 + (C2092 - C2093) * C19382) * C5744 +
           ((C151 * C1061 - C19455 * C1123) * C3043 +
            (C151 * C1072 - C19455 * C1129) * C19382) *
               C5745) *
              C19430 * C19416 * C85 +
          ((C175 * C3043 + C176 * C19382) * C5743 +
           ((C2095 - C2094) * C3043 + (C2097 - C2096) * C19382) * C5744 +
           ((C19455 * C1124 - C151 * C1062) * C3043 +
            (C19455 * C1130 - C151 * C1074) * C19382) *
               C5745) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C3043 +
            (C19455 * C157 - C151 * C99) * C19382) *
               C5743 +
           ((C19455 * C1119 - C151 * C1059) * C3043 +
            (C19455 * C1125 - C151 * C1068) * C19382) *
               C5744 +
           ((C19455 * C1122 - C151 * C1060) * C3043 +
            (C19455 * C1128 - C151 * C1070) * C19382) *
               C5745) *
              C19430 * C612 +
          (((C151 * C618 - C19455 * C678) * C3043 +
            (C151 * C627 - C19455 * C684) * C19382) *
               C5743 +
           ((C151 * C2553 - C19455 * C2615) * C3043 +
            (C151 * C2557 - C19455 * C2618) * C19382) *
               C5744 +
           ((C151 * C3861 - C19455 * C3911) * C3043 +
            (C151 * C3866 - C19455 * C3914) * C19382) *
               C5745) *
              C19430 * C613 +
          (((C19455 * C681 - C151 * C619) * C3043 +
            (C19455 * C687 - C151 * C629) * C19382) *
               C5743 +
           ((C19455 * C3910 - C151 * C3860) * C3043 +
            (C19455 * C3913 - C151 * C3864) * C19382) *
               C5744 +
           ((C19455 * C3912 - C151 * C3862) * C3043 +
            (C19455 * C3915 - C151 * C3868) * C19382) *
               C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C612 +
          ((C214 * C618 - C19466 * C728) * C87 +
           (C214 * C627 - C19466 * C734) * C77 +
           (C214 * C617 - C19466 * C729) * C89 +
           (C214 * C625 - C19466 * C735) * C78 +
           (C214 * C616 - C19466 * C730) * C91 +
           (C214 * C623 - C19466 * C736) * C79) *
              C19455 * C19430 * C613 +
          ((C19466 * C731 - C214 * C619) * C87 +
           (C19466 * C737 - C214 * C629) * C77 +
           (C19466 * C732 - C214 * C620) * C89 +
           (C19466 * C738 - C214 * C631) * C78 +
           (C19466 * C733 - C214 * C621) * C91 +
           (C19466 * C739 - C214 * C633) * C79) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C19416 * C84 +
          ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
           (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
              C19455 * C19430 * C19416 * C85 +
          (C238 * C87 + C239 * C77 + (C235 - C234) * C89 + (C237 - C236) * C78 +
           (C19466 * C219 - C214 * C97) * C91 +
           (C19466 * C224 - C214 * C107) * C79) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C19466 * C728 - C214 * C618) * C3043 +
            (C19466 * C734 - C214 * C627) * C19382) *
               C3041 +
           ((C19466 * C731 - C214 * C619) * C3043 +
            (C19466 * C737 - C214 * C629) * C19382) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
           ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
           ((C214 * C620 - C19466 * C732) * C3043 +
            (C214 * C631 - C19466 * C738) * C19382) *
               C3042) *
              C19430 * C19416 * C85 +
          ((C238 * C3043 + C239 * C19382) * C3040 +
           ((C1633 - C1632) * C3043 + (C1635 - C1634) * C19382) * C3041 +
           ((C19466 * C733 - C214 * C621) * C3043 +
            (C19466 * C739 - C214 * C633) * C19382) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C19430 * C612 +
          (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
           ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
           ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
              C19430 * C613 +
          (C3526 * C3040 +
           ((C3519 - C3518) * C3043 + (C3521 - C3520) * C19382) * C3041 +
           ((C19466 * C3506 - C214 * C3394) * C3043 +
            (C19466 * C3508 - C214 * C3398) * C19382) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C3043 +
           (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
            C5745 * C1178 - C5824 * C1070) *
               C19382) *
              C19455 * C19430 * C19416 * C84 +
          ((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
            C5824 * C1061 - C5745 * C1173) *
               C3043 +
           (C5822 * C101 - C5743 * C221 + C5823 * C1066 - C5744 * C1176 +
            C5824 * C1072 - C5745 * C1179) *
               C19382) *
              C19455 * C19430 * C19416 * C85 +
          ((C5743 * C217 - C5822 * C95 + C5744 * C1171 - C5823 * C1057 +
            C5745 * C1174 - C5824 * C1062) *
               C3043 +
           (C5743 * C222 - C5822 * C103 + C5744 * C1177 - C5823 * C1064 +
            C5745 * C1180 - C5824 * C1074) *
               C19382) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C3043 +
           (C5743 * C220 - C5822 * C99 + C5744 * C1175 - C5823 * C1068 +
            C5745 * C1178 - C5824 * C1070) *
               C19382) *
              C19455 * C19430 * C612 +
          ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
            C5824 * C3861 - C5745 * C3955) *
               C3043 +
           (C5822 * C627 - C5743 * C734 + C5823 * C2557 - C5744 * C2674 +
            C5824 * C3866 - C5745 * C3958) *
               C19382) *
              C19455 * C19430 * C613 +
          ((C5743 * C731 - C5822 * C619 + C5744 * C3954 - C5823 * C3860 +
            C5745 * C3956 - C5824 * C3862) *
               C3043 +
           (C5743 * C737 - C5822 * C629 + C5744 * C3957 - C5823 * C3864 +
            C5745 * C3959 - C5824 * C3868) *
               C19382) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C151 +
           (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
            C79 * C786) *
               C19455) *
              C19466 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C151 +
           (C77 * C787 - C87 * C781 + C78 * C788 - C89 * C782 + C79 * C789 -
            C91 * C783) *
               C19455) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C151 +
           (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
            C79 * C285) *
               C19455) *
              C19466 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C151 +
           (C77 * C284 - C87 * C279 + C78 * C285 - C89 * C280 + C79 * C286 -
            C91 * C281) *
               C19455) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 +
           (C19382 * C626 - C3043 * C618) * C3084 +
           (C19382 * C784 - C3043 * C778) * C3041 +
           (C19382 * C628 - C3043 * C619) * C3085 +
           (C19382 * C787 - C3043 * C781) * C3042) *
              C19466 * C19430 * C19416 * C84 +
          ((C3043 * C94 - C19382 * C100) * C3083 +
           (C3043 * C278 - C19382 * C283) * C3040 +
           (C3043 * C617 - C19382 * C624) * C3084 +
           (C3043 * C779 - C19382 * C785) * C3041 +
           (C3043 * C620 - C19382 * C630) * C3085 +
           (C3043 * C782 - C19382 * C788) * C3042) *
              C19466 * C19430 * C19416 * C85 +
          ((C19382 * C102 - C3043 * C95) * C3083 +
           (C19382 * C284 - C3043 * C279) * C3040 +
           (C19382 * C622 - C3043 * C616) * C3084 +
           (C19382 * C786 - C3043 * C780) * C3041 +
           (C19382 * C632 - C3043 * C621) * C3085 +
           (C19382 * C789 - C3043 * C783) * C3042) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C19430 * C612 +
          ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
           (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
           (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
              C19466 * C19430 * C613 +
          (C3581 * C3083 + C3582 * C3040 + (C3578 - C3577) * C3084 +
           (C3580 - C3579) * C3041 + (C19382 * C3397 - C3043 * C3394) * C3085 +
           (C19382 * C3567 - C3043 * C3565) * C3042) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C151 +
            (C19382 * C282 - C3043 * C277) * C19455) *
               C5743 +
           ((C19382 * C1067 - C3043 * C1059) * C151 +
            (C19382 * C1225 - C3043 * C1219) * C19455) *
               C5744 +
           ((C19382 * C1069 - C3043 * C1060) * C151 +
            (C19382 * C1228 - C3043 * C1222) * C19455) *
               C5745) *
              C19430 * C19416 * C84 +
          (((C3043 * C94 - C19382 * C100) * C151 +
            (C3043 * C278 - C19382 * C283) * C19455) *
               C5743 +
           ((C3043 * C1058 - C19382 * C1065) * C151 +
            (C3043 * C1220 - C19382 * C1226) * C19455) *
               C5744 +
           ((C3043 * C1061 - C19382 * C1071) * C151 +
            (C3043 * C1223 - C19382 * C1229) * C19455) *
               C5745) *
              C19430 * C19416 * C85 +
          (((C19382 * C102 - C3043 * C95) * C151 +
            (C19382 * C284 - C3043 * C279) * C19455) *
               C5743 +
           ((C19382 * C1063 - C3043 * C1057) * C151 +
            (C19382 * C1227 - C3043 * C1221) * C19455) *
               C5744 +
           ((C19382 * C1073 - C3043 * C1062) * C151 +
            (C19382 * C1230 - C3043 * C1224) * C19455) *
               C5745) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C151 +
            (C19382 * C282 - C3043 * C277) * C19455) *
               C5743 +
           ((C19382 * C1067 - C3043 * C1059) * C151 +
            (C19382 * C1225 - C3043 * C1219) * C19455) *
               C5744 +
           ((C19382 * C1069 - C3043 * C1060) * C151 +
            (C19382 * C1228 - C3043 * C1222) * C19455) *
               C5745) *
              C19430 * C612 +
          (((C3570 - C3569) * C151 + (C3572 - C3571) * C19455) * C5743 +
           ((C5420 - C5421) * C151 + (C5422 - C5423) * C19455) * C5744 +
           ((C3043 * C3861 - C19382 * C3865) * C151 +
            (C3043 * C3999 - C19382 * C4002) * C19455) *
               C5745) *
              C19430 * C613 +
          ((C3581 * C151 + C3582 * C19455) * C5743 +
           ((C5425 - C5424) * C151 + (C5427 - C5426) * C19455) * C5744 +
           ((C19382 * C3867 - C3043 * C3862) * C151 +
            (C19382 * C4003 - C3043 * C4000) * C19455) *
               C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C612 -
          ((C151 * C680 - C325 * C616 - C151 * C780 + C19455 * C828) * C79 +
           (C151 * C679 - C325 * C617 - C151 * C779 + C19455 * C829) * C78 +
           (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
              C19466 * C19430 * C613 +
          ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C77 +
           (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C78 +
           (C151 * C683 - C325 * C621 - C151 * C783 + C19455 * C833) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C19416 * C84 -
          (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 * C19416 *
              C85 +
          (C351 * C77 + C352 * C78 +
           (C151 * C156 - C325 * C97 - C151 * C281 + C19455 * C330) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C19416 * C84 -
          (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
           C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
           C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
              C19382 * C19466 * C19430 * C19416 * C85 +
          (C3083 * C154 - C3200 * C95 - C3083 * C279 + C3040 * C328 +
           C3084 * C680 - C3201 * C616 - C3084 * C780 + C3041 * C828 +
           C3085 * C683 - C3202 * C621 - C3085 * C783 + C3042 * C833) *
              C19382 * C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C612 -
          (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
           C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
           C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
              C19382 * C19466 * C19430 * C613 +
          (C3083 * C681 - C3200 * C619 - C3083 * C781 + C3040 * C831 +
           C3084 * C3463 - C3201 * C3393 - C3084 * C3564 + C3041 * C3620 +
           C3085 * C3464 - C3202 * C3394 - C3085 * C3565 + C3042 * C3621) *
              C19382 * C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
               C5743 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C19382 * C5744 +
           (C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) *
               C19382 * C5745) *
              C19430 * C19416 * C84 -
          ((C151 * C1123 - C325 * C1061 - C151 * C1223 + C19455 * C1273) *
               C19382 * C5745 +
           C2274 * C19382 * C5744 + C350 * C19382 * C5743) *
              C19430 * C19416 * C85 +
          (C351 * C19382 * C5743 + C2273 * C19382 * C5744 +
           (C151 * C1124 - C325 * C1062 - C151 * C1224 + C19455 * C1274) *
               C19382 * C5745) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C19382 *
               C5743 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C19382 * C5744 +
           (C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) *
               C19382 * C5745) *
              C19430 * C612 -
          ((C151 * C3911 - C325 * C3861 - C151 * C3999 + C19455 * C4043) *
               C19382 * C5745 +
           (C151 * C2615 - C325 * C2553 - C151 * C2727 + C19455 * C2783) *
               C19382 * C5744 +
           (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C19382 *
               C5743) *
              C19430 * C613 +
          ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C19382 *
               C5743 +
           (C151 * C3910 - C325 * C3860 - C151 * C3998 + C19455 * C4042) *
               C19382 * C5744 +
           (C151 * C3912 - C325 * C3862 - C151 * C4000 + C19455 * C4044) *
               C19382 * C5745) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C612 +
          (((C214 * C618 - C19466 * C728) * C151 +
            (C214 * C778 - C19466 * C872) * C19455) *
               C77 +
           ((C214 * C617 - C19466 * C729) * C151 +
            (C214 * C779 - C19466 * C873) * C19455) *
               C78 +
           ((C214 * C616 - C19466 * C730) * C151 +
            (C214 * C780 - C19466 * C874) * C19455) *
               C79) *
              C19430 * C613 +
          (((C19466 * C731 - C214 * C619) * C151 +
            (C19466 * C875 - C214 * C781) * C19455) *
               C77 +
           ((C19466 * C732 - C214 * C620) * C151 +
            (C19466 * C876 - C214 * C782) * C19455) *
               C78 +
           ((C19466 * C733 - C214 * C621) * C151 +
            (C19466 * C877 - C214 * C783) * C19455) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
           ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
           ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
              C19430 * C19416 * C85 +
          (C405 * C77 + ((C235 - C234) * C151 + (C402 - C401) * C19455) * C78 +
           ((C19466 * C219 - C214 * C97) * C151 +
            (C19466 * C394 - C214 * C281) * C19455) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 +
           (C19466 * C728 - C214 * C618) * C3084 +
           (C19466 * C872 - C214 * C778) * C3041 +
           (C19466 * C731 - C214 * C619) * C3085 +
           (C19466 * C875 - C214 * C781) * C3042) *
              C19382 * C19430 * C19416 * C84 +
          ((C227 - C226) * C3083 + (C397 - C396) * C3040 +
           (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
           (C214 * C620 - C19466 * C732) * C3085 +
           (C214 * C782 - C19466 * C876) * C3042) *
              C19382 * C19430 * C19416 * C85 +
          (C238 * C3083 + C403 * C3040 + (C1633 - C1632) * C3084 +
           (C1807 - C1806) * C3041 + (C19466 * C733 - C214 * C621) * C3085 +
           (C19466 * C877 - C214 * C783) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C19430 * C612 +
          ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
           (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
           (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
              C19382 * C19430 * C613 +
          (C3522 * C3083 + C3669 * C3040 + (C3519 - C3518) * C3084 +
           (C3668 - C3667) * C3041 + (C19466 * C3506 - C214 * C3394) * C3085 +
           (C19466 * C3661 - C214 * C3565) * C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C151 +
           (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
            C5745 * C1316 - C5824 * C1222) *
               C19455) *
              C19382 * C19430 * C19416 * C84 +
          ((C5822 * C94 - C5743 * C216 + C5823 * C1058 - C5744 * C1170 +
            C5824 * C1061 - C5745 * C1173) *
               C151 +
           (C5822 * C278 - C5743 * C391 + C5823 * C1220 - C5744 * C1314 +
            C5824 * C1223 - C5745 * C1317) *
               C19455) *
              C19382 * C19430 * C19416 * C85 +
          ((C5743 * C217 - C5822 * C95 + C5744 * C1171 - C5823 * C1057 +
            C5745 * C1174 - C5824 * C1062) *
               C151 +
           (C5743 * C392 - C5822 * C279 + C5744 * C1315 - C5823 * C1221 +
            C5745 * C1318 - C5824 * C1224) *
               C19455) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C5743 * C215 - C5822 * C93 + C5744 * C1169 - C5823 * C1059 +
            C5745 * C1172 - C5824 * C1060) *
               C151 +
           (C5743 * C390 - C5822 * C277 + C5744 * C1313 - C5823 * C1219 +
            C5745 * C1316 - C5824 * C1222) *
               C19455) *
              C19382 * C19430 * C612 +
          ((C5822 * C618 - C5743 * C728 + C5823 * C2553 - C5744 * C2671 +
            C5824 * C3861 - C5745 * C3955) *
               C151 +
           (C5822 * C778 - C5743 * C872 + C5823 * C2727 - C5744 * C2836 +
            C5824 * C3999 - C5745 * C4084) *
               C19455) *
              C19382 * C19430 * C613 +
          ((C5743 * C731 - C5822 * C619 + C5744 * C3954 - C5823 * C3860 +
            C5745 * C3956 - C5824 * C3862) *
               C151 +
           (C5743 * C875 - C5822 * C781 + C5744 * C4083 - C5823 * C3998 +
            C5745 * C4085 - C5824 * C4000) *
               C19455) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C214 +
           (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
            C79 * C924) *
               C19466) *
              C19455 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C214 +
           (C77 * C925 - C87 * C919 + C78 * C926 - C89 * C920 + C79 * C927 -
            C91 * C921) *
               C19466) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C214 +
           (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
            C79 * C451) *
               C19466) *
              C19455 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C214 +
           (C77 * C450 - C87 * C445 + C78 * C451 - C89 * C446 + C79 * C452 -
            C91 * C447) *
               C19466) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C19382 * C626 - C3043 * C618) * C214 +
            (C19382 * C922 - C3043 * C916) * C19466) *
               C3041 +
           ((C19382 * C628 - C3043 * C619) * C214 +
            (C19382 * C925 - C3043 * C919) * C19466) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C3043 * C94 - C19382 * C100) * C214 +
            (C3043 * C444 - C19382 * C449) * C19466) *
               C3040 +
           ((C3043 * C617 - C19382 * C624) * C214 +
            (C3043 * C917 - C19382 * C923) * C19466) *
               C3041 +
           ((C3043 * C620 - C19382 * C630) * C214 +
            (C3043 * C920 - C19382 * C926) * C19466) *
               C3042) *
              C19430 * C19416 * C85 +
          (((C19382 * C102 - C3043 * C95) * C214 +
            (C19382 * C450 - C3043 * C445) * C19466) *
               C3040 +
           ((C19382 * C622 - C3043 * C616) * C214 +
            (C19382 * C924 - C3043 * C918) * C19466) *
               C3041 +
           ((C19382 * C632 - C3043 * C621) * C214 +
            (C19382 * C927 - C3043 * C921) * C19466) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C19430 * C612 +
          (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
           ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
           ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
              C19430 * C613 +
          (C3721 * C3040 +
           ((C3578 - C3577) * C214 + (C3718 - C3717) * C19466) * C3041 +
           ((C19382 * C3397 - C3043 * C3394) * C214 +
            (C19382 * C3710 - C3043 * C3708) * C19466) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C5822 +
           (C19382 * C448 - C3043 * C443) * C5743 +
           (C19382 * C1067 - C3043 * C1059) * C5823 +
           (C19382 * C1363 - C3043 * C1357) * C5744 +
           (C19382 * C1069 - C3043 * C1060) * C5824 +
           (C19382 * C1366 - C3043 * C1360) * C5745) *
              C19455 * C19430 * C19416 * C84 +
          ((C3043 * C94 - C19382 * C100) * C5822 +
           (C3043 * C444 - C19382 * C449) * C5743 +
           (C3043 * C1058 - C19382 * C1065) * C5823 +
           (C3043 * C1358 - C19382 * C1364) * C5744 +
           (C3043 * C1061 - C19382 * C1071) * C5824 +
           (C3043 * C1361 - C19382 * C1367) * C5745) *
              C19455 * C19430 * C19416 * C85 +
          ((C19382 * C102 - C3043 * C95) * C5822 +
           (C19382 * C450 - C3043 * C445) * C5743 +
           (C19382 * C1063 - C3043 * C1057) * C5823 +
           (C19382 * C1365 - C3043 * C1359) * C5744 +
           (C19382 * C1073 - C3043 * C1062) * C5824 +
           (C19382 * C1368 - C3043 * C1362) * C5745) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C5822 +
           (C19382 * C448 - C3043 * C443) * C5743 +
           (C19382 * C1067 - C3043 * C1059) * C5823 +
           (C19382 * C1363 - C3043 * C1357) * C5744 +
           (C19382 * C1069 - C3043 * C1060) * C5824 +
           (C19382 * C1366 - C3043 * C1360) * C5745) *
              C19455 * C19430 * C612 +
          ((C3570 - C3569) * C5822 + (C3713 - C3712) * C5743 +
           (C5420 - C5421) * C5823 + (C5586 - C5587) * C5744 +
           (C3043 * C3861 - C19382 * C3865) * C5824 +
           (C3043 * C4125 - C19382 * C4128) * C5745) *
              C19455 * C19430 * C613 +
          (C3581 * C5822 + C3719 * C5743 + (C5425 - C5424) * C5823 +
           (C5589 - C5588) * C5744 + (C19382 * C3867 - C3043 * C3862) * C5824 +
           (C19382 * C4129 - C3043 * C4126) * C5745) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C612 +
          (((C151 * C618 - C19455 * C678) * C214 +
            (C151 * C916 - C19455 * C966) * C19466) *
               C77 +
           ((C151 * C617 - C19455 * C679) * C214 +
            (C151 * C917 - C19455 * C967) * C19466) *
               C78 +
           ((C151 * C616 - C19455 * C680) * C214 +
            (C151 * C918 - C19455 * C968) * C19466) *
               C79) *
              C19430 * C613 +
          (((C19455 * C681 - C151 * C619) * C214 +
            (C19455 * C969 - C151 * C919) * C19466) *
               C77 +
           ((C19455 * C682 - C151 * C620) * C214 +
            (C19455 * C970 - C151 * C920) * C19466) *
               C78 +
           ((C19455 * C683 - C151 * C621) * C214 +
            (C19455 * C971 - C151 * C921) * C19466) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C19416 * C84 +
          (((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
           ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
           ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
              C19430 * C19416 * C85 +
          (C506 * C77 + ((C172 - C171) * C214 + (C503 - C502) * C19466) * C78 +
           ((C19455 * C156 - C151 * C97) * C214 +
            (C19455 * C495 - C151 * C447) * C19466) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C214 +
           (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
            C3085 * C920 - C3042 * C970) *
               C19466) *
              C19382 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C214 +
           (C3040 * C493 - C3083 * C445 + C3041 * C968 - C3084 * C918 +
            C3042 * C971 - C3085 * C921) *
               C19466) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C214 +
           (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
            C3085 * C3707 - C3042 * C3759) *
               C19466) *
              C19382 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C214 +
           (C3040 * C969 - C3083 * C919 + C3041 * C3759 - C3084 * C3707 +
            C3042 * C3760 - C3085 * C3708) *
               C19466) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C5822 +
           (C19455 * C491 - C151 * C443) * C5743 +
           (C19455 * C1119 - C151 * C1059) * C5823 +
           (C19455 * C1407 - C151 * C1357) * C5744 +
           (C19455 * C1122 - C151 * C1060) * C5824 +
           (C19455 * C1410 - C151 * C1360) * C5745) *
              C19382 * C19430 * C19416 * C84 +
          ((C164 - C163) * C5822 + (C498 - C497) * C5743 +
           (C2090 - C2091) * C5823 + (C2433 - C2434) * C5744 +
           (C151 * C1061 - C19455 * C1123) * C5824 +
           (C151 * C1361 - C19455 * C1411) * C5745) *
              C19382 * C19430 * C19416 * C85 +
          (C175 * C5822 + C504 * C5743 + (C2095 - C2094) * C5823 +
           (C2436 - C2435) * C5744 + (C19455 * C1124 - C151 * C1062) * C5824 +
           (C19455 * C1412 - C151 * C1362) * C5745) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C5822 +
           (C19455 * C491 - C151 * C443) * C5743 +
           (C19455 * C1119 - C151 * C1059) * C5823 +
           (C19455 * C1407 - C151 * C1357) * C5744 +
           (C19455 * C1122 - C151 * C1060) * C5824 +
           (C19455 * C1410 - C151 * C1360) * C5745) *
              C19382 * C19430 * C612 +
          ((C151 * C618 - C19455 * C678) * C5822 +
           (C151 * C916 - C19455 * C966) * C5743 +
           (C151 * C2553 - C19455 * C2615) * C5823 +
           (C151 * C2889 - C19455 * C2945) * C5744 +
           (C151 * C3861 - C19455 * C3911) * C5824 +
           (C151 * C4125 - C19455 * C4169) * C5745) *
              C19382 * C19430 * C613 +
          ((C19455 * C681 - C151 * C619) * C5822 +
           (C19455 * C969 - C151 * C919) * C5743 +
           (C19455 * C3910 - C151 * C3860) * C5823 +
           (C19455 * C4168 - C151 * C4124) * C5744 +
           (C19455 * C3912 - C151 * C3862) * C5824 +
           (C19455 * C4170 - C151 * C4126) * C5745) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C612 -
          ((C214 * C730 - C544 * C616 - C214 * C918 + C19466 * C1010) * C19455 *
               C79 +
           (C214 * C729 - C544 * C617 - C214 * C917 + C19466 * C1011) * C19455 *
               C78 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C19455 *
               C77) *
              C19430 * C613 +
          ((C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C19455 *
               C77 +
           (C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C19455 *
               C78 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C19455 *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C19416 * C84 -
          (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C19416 * C85 +
          (C573 * C77 + C574 * C78 +
           (C214 * C219 - C544 * C97 - C214 * C447 + C19466 * C549) * C19455 *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C3041 +
           (C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C3042) *
              C19382 * C19430 * C19416 * C84 -
          ((C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C3042 +
           C1979 * C3041 + C569 * C3040) *
              C19382 * C19430 * C19416 * C85 +
          (C570 * C3040 + C1978 * C3041 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C19430 * C612 -
          (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
              C613 +
          (C3821 * C3040 + C3822 * C3041 +
           (C214 * C3506 - C544 * C3394 - C214 * C3708 + C19466 * C3800) *
               C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
           C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
           C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
              C19455 * C19382 * C19430 * C19416 * C84 -
          (C5824 * C1173 - C6055 * C1061 - C5824 * C1361 + C5745 * C1455 +
           C5823 * C1170 - C6054 * C1058 - C5823 * C1358 + C5744 * C1452 +
           C5822 * C216 - C6053 * C94 - C5822 * C444 + C5743 * C546) *
              C19455 * C19382 * C19430 * C19416 * C85 +
          (C5822 * C217 - C6053 * C95 - C5822 * C445 + C5743 * C547 +
           C5823 * C1171 - C6054 * C1057 - C5823 * C1359 + C5744 * C1451 +
           C5824 * C1174 - C6055 * C1062 - C5824 * C1362 + C5745 * C1456) *
              C19455 * C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C5822 * C215 - C6053 * C93 - C5822 * C443 + C5743 * C545 +
           C5823 * C1169 - C6054 * C1059 - C5823 * C1357 + C5744 * C1453 +
           C5824 * C1172 - C6055 * C1060 - C5824 * C1360 + C5745 * C1454) *
              C19455 * C19382 * C19430 * C612 -
          (C5824 * C3955 - C6055 * C3861 - C5824 * C4125 + C5745 * C4210 +
           C5823 * C2671 - C6054 * C2553 - C5823 * C2889 + C5744 * C2998 +
           C5822 * C728 - C6053 * C618 - C5822 * C916 + C5743 * C1012) *
              C19455 * C19382 * C19430 * C613 +
          (C5822 * C731 - C6053 * C619 - C5822 * C919 + C5743 * C1013 +
           C5823 * C3954 - C6054 * C3860 - C5823 * C4124 + C5744 * C4209 +
           C5824 * C3956 - C6055 * C3862 - C5824 * C4126 + C5745 * C4211) *
              C19455 * C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C11774 +
            (C12757 + C12758) * C11775) *
               C19455 * C19430 * C1507 -
           ((C11183 + C11184) * C11775 + (C8939 + C8938) * C11774) * C19455 *
               C19430 * C1508) *
              C1509 +
          (((C9894 + C9895) * C11774 +
            (C8399 * C2558 - C8400 * C2554 - C8399 * C2559 + C8395 * C2563 +
             C8401 * C2560 - C8402 * C2555 - C8401 * C2561 + C8396 * C2564) *
                C11775) *
               C19455 * C19430 * C1508 -
           ((C8401 * C1063 - C8402 * C1057 - C8401 * C1064 + C8396 * C1075 +
             C8399 * C1065 - C8400 * C1058 - C8399 * C1066 + C8395 * C1076) *
                C11775 +
            (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
             C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
                C11774) *
               C19455 * C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C19455 * C152 - C151 * C93) * C8399 +
                       (C19455 * C157 - C151 * C99) * C8395 +
                       (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                          C11774 +
                      ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                       (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                          C11775) *
                         C19430 * C1507 +
                     (((C151 * C618 - C19455 * C678) * C8399 +
                       (C151 * C627 - C19455 * C684) * C8395 +
                       (C1568 - C1569) * C8401 + (C1570 - C1571) * C8396) *
                          C11774 +
                      ((C7952 - C7953) * C8399 + (C7954 - C7955) * C8395 +
                       (C13321 - C13322) * C8401 + (C13323 - C13324) * C8396) *
                          C11775) *
                         C19430 * C1508) *
                        C1509 +
                    ((((C164 - C163) * C8399 + (C166 - C165) * C8395 +
                       (C168 - C167) * C8401 + (C170 - C169) * C8396) *
                          C11774 +
                      ((C2090 - C2091) * C8399 + (C2092 - C2093) * C8395 +
                       (C2094 - C2095) * C8401 + (C2096 - C2097) * C8396) *
                          C11775) *
                         C19430 * C1507 +
                     (((C1569 - C1568) * C8399 + (C1571 - C1570) * C8395 +
                       (C1573 - C1572) * C8401 + (C1575 - C1574) * C8396) *
                          C11774 +
                      ((C13322 - C13321) * C8399 + (C13324 - C13323) * C8395 +
                       (C19455 * C2617 - C151 * C2555) * C8401 +
                       (C19455 * C2620 - C151 * C2561) * C8396) *
                          C11775) *
                         C19430 * C1508) *
                        C1510)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8399 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C8395 +
            (C11879 - C11880 + C11881 - C11882) * C8401 +
            (C11883 - C11884 + C11885 - C11886) * C8396) *
               C19455 * C19430 * C1507 +
           ((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                C8399 +
            (C11876 * C627 - C11774 * C734 + C11877 * C2557 - C11775 * C2674) *
                C8395 +
            (C13391 - C13392 + C13393 - C13394) * C8401 +
            (C13395 - C13396 + C13397 - C13398) * C8396) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C11880 - C11879 + C11882 - C11881) * C8399 +
            (C11884 - C11883 + C11886 - C11885) * C8395 +
            (C11887 - C11888 + C11889 - C11890) * C8401 +
            (C11891 - C11892 + C11893 - C11894) * C8396) *
               C19455 * C19430 * C1507 +
           ((C13392 - C13391 + C13394 - C13393) * C8399 +
            (C13396 - C13395 + C13398 - C13397) * C8395 +
            (C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
                C8401 +
            (C11774 * C736 - C11876 * C623 + C11775 * C2676 - C11877 * C2561) *
                C8396) *
               C19455 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
             (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                 C19455) *
                C11774 +
            ((C12911 - C12912 + C12913 - C12914) * C151 +
             (C12915 - C12916 + C12917 - C12918) * C19455) *
                C11775) *
               C19430 * C1507 +
           (((C9093 - C9092 + C9095 - C9094) * C151 +
             (C9097 - C9096 + C9099 - C9098) * C19455) *
                C11774 +
            ((C11383 - C11384 + C11385 - C11386) * C151 +
             (C11387 - C11388 + C11389 - C11390) * C19455) *
                C11775) *
               C19430 * C1508) *
              C1509 +
          ((((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C151 +
             (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                 C19455) *
                C11774 +
            ((C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
                 C151 +
             (C8399 * C1220 - C8395 * C1226 + C8401 * C1221 - C8396 * C1227) *
                 C19455) *
                C11775) *
               C19430 * C1507 +
           (((C10107 - C10106 + C10109 - C10108) * C151 +
             (C10111 - C10110 + C10113 - C10112) * C19455) *
                C11774 +
            ((C8395 * C2558 - C8399 * C2554 + C8396 * C2560 - C8401 * C2555) *
                 C151 +
             (C8395 * C2731 - C8399 * C2728 + C8396 * C2732 - C8401 * C2729) *
                 C19455) *
                C11775) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
             C350 * C8396) *
                C11774 +
            (C12977 + C12978) * C11775) *
               C19430 * C1507 -
           ((C13537 * C8396 + C8131 * C8395) * C11775 +
            (C1752 * C8396 +
             (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) *
                 C8395) *
                C11774) *
               C19430 * C1508) *
              C1509 +
          (((C1752 * C8395 + C1751 * C8396) * C11774 +
            (C13537 * C8395 +
             (C151 * C2617 - C325 * C2555 - C151 * C2729 + C19455 * C2785) *
                 C8396) *
                C11775) *
               C19430 * C1508 -
           ((C2273 * C8396 + C2274 * C8395) * C11775 +
            (C351 * C8396 + C350 * C8395) * C11774) *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C151 +
             (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                 C19455) *
                C8395 +
            ((C11879 - C11880 + C11881 - C11882) * C151 +
             (C12045 - C12046 + C12047 - C12048) * C19455) *
                C8396) *
               C19430 * C1507 +
           (((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                 C151 +
             (C11876 * C778 - C11774 * C872 + C11877 * C2727 - C11775 * C2836) *
                 C19455) *
                C8395 +
            ((C13391 - C13392 + C13393 - C13394) * C151 +
             (C13604 - C13605 + C13606 - C13607) * C19455) *
                C8396) *
               C19430 * C1508) *
              C1509 +
          ((((C11880 - C11879 + C11882 - C11881) * C151 +
             (C12046 - C12045 + C12048 - C12047) * C19455) *
                C8395 +
            ((C11887 - C11888 + C11889 - C11890) * C151 +
             (C12049 - C12050 + C12051 - C12052) * C19455) *
                C8396) *
               C19430 * C1507 +
           (((C13392 - C13391 + C13394 - C13393) * C151 +
             (C13605 - C13604 + C13607 - C13606) * C19455) *
                C8395 +
            ((C11774 * C730 - C11876 * C616 + C11775 * C2673 - C11877 * C2555) *
                 C151 +
             (C11774 * C874 - C11876 * C780 + C11775 * C2838 - C11877 * C2729) *
                 C19455) *
                C8396) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C11774 +
            (C12911 - C12912 + C12913 - C12914) * C11877 +
            (C13081 - C13082 + C13083 - C13084) * C11775) *
               C19455 * C19430 * C1507 +
           ((C9093 - C9092 + C9095 - C9094) * C11876 +
            (C9259 - C9258 + C9261 - C9260) * C11774 +
            (C11383 - C11384 + C11385 - C11386) * C11877 +
            (C11589 - C11590 + C11591 - C11592) * C11775) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C11876 +
            (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                C11774 +
            (C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
                C11877 +
            (C8399 * C1358 - C8395 * C1364 + C8401 * C1359 - C8396 * C1365) *
                C11775) *
               C19455 * C19430 * C1507 +
           ((C10107 - C10106 + C10109 - C10108) * C11876 +
            (C10329 - C10328 + C10331 - C10330) * C11774 +
            (C8395 * C2558 - C8399 * C2554 + C8396 * C2560 - C8401 * C2555) *
                C11877 +
            (C8395 * C2893 - C8399 * C2890 + C8396 * C2894 - C8401 * C2891) *
                C11775) *
               C19455 * C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C11876 +
             (C19455 * C491 - C151 * C443) * C11774 + (C6508 - C6509) * C11877 +
             (C6819 - C6820) * C11775) *
                C8395 +
            ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
             (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                C8396) *
               C19430 * C1507 +
           (((C151 * C618 - C19455 * C678) * C11876 +
             (C151 * C916 - C19455 * C966) * C11774 + (C7952 - C7953) * C11877 +
             (C8291 - C8292) * C11775) *
                C8395 +
            ((C1568 - C1569) * C11876 + (C1911 - C1912) * C11774 +
             (C13321 - C13322) * C11877 + (C13740 - C13741) * C11775) *
                C8396) *
               C19430 * C1508) *
              C1509 +
          ((((C164 - C163) * C11876 + (C498 - C497) * C11774 +
             (C2090 - C2091) * C11877 + (C2433 - C2434) * C11775) *
                C8395 +
            ((C168 - C167) * C11876 + (C501 - C500) * C11774 +
             (C2094 - C2095) * C11877 + (C2435 - C2436) * C11775) *
                C8396) *
               C19430 * C1507 +
           (((C1569 - C1568) * C11876 + (C1912 - C1911) * C11774 +
             (C13322 - C13321) * C11877 + (C13741 - C13740) * C11775) *
                C8395 +
            ((C1573 - C1572) * C11876 + (C1914 - C1913) * C11774 +
             (C19455 * C2617 - C151 * C2555) * C11877 +
             (C19455 * C2947 - C151 * C2891) * C11775) *
                C8396) *
               C19430 * C1508) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
             C11877 * C1169 - C12203 * C1059 - C11877 * C1357 +
             C11775 * C1453) *
                C19455 * C8395 +
            (C12229 + C12230) * C19455 * C8396) *
               C19430 * C1507 -
           ((C13820 + C13821) * C19455 * C8396 +
            (C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998 +
             C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012) *
                C19455 * C8395) *
               C19430 * C1508) *
              C1509 +
          (((C13821 + C13820) * C19455 * C8395 +
            (C11876 * C730 - C12202 * C616 - C11876 * C918 + C11774 * C1010 +
             C11877 * C2673 - C12203 * C2555 - C11877 * C2891 +
             C11775 * C3000) *
                C19455 * C8396) *
               C19430 * C1508 -
           ((C12231 + C12232) * C19455 * C8396 +
            (C12230 + C12229) * C19455 * C8395) *
               C19430 * C1507) *
              C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C11774 +
            (C12757 + C12758) * C11775) *
               C19455 * C2031 -
           ((C12759 + C12760) * C11775 + (C12758 + C12757) * C11774) * C19455 *
               C2032) *
              C1507 +
          (((C11184 + C11183) * C11774 +
            (C8399 * C3865 - C8400 * C3861 - C8399 * C3866 + C8395 * C3870 +
             C8401 * C6916 - C8402 * C6915 - C8401 * C6917 + C8396 * C6918) *
                C11775) *
               C19455 * C2032 -
           ((C11183 + C11184) * C11775 + (C8939 + C8938) * C11774) * C19455 *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C19455 * C152 - C151 * C93) * C8399 +
                       (C19455 * C157 - C151 * C99) * C8395 +
                       (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                          C11774 +
                      ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                       C13968 * C8401 + C13969 * C8396) *
                          C11775) *
                         C2031 +
                     (((C6509 - C6508) * C8399 + (C6511 - C6510) * C8395 +
                       C13970 * C8401 + C13971 * C8396) *
                          C11774 +
                      ((C6513 - C6512) * C8399 + (C6515 - C6514) * C8395 +
                       (C7452 - C7453) * C8401 + (C7454 - C7455) * C8396) *
                          C11775) *
                         C2032) *
                        C1507 +
                    ((((C151 * C618 - C19455 * C678) * C8399 +
                       (C151 * C627 - C19455 * C684) * C8395 +
                       (C1568 - C1569) * C8401 + (C1570 - C1571) * C8396) *
                          C11774 +
                      ((C7952 - C7953) * C8399 + (C7954 - C7955) * C8395 +
                       (C13321 - C13322) * C8401 + (C13323 - C13324) * C8396) *
                          C11775) *
                         C2031 +
                     (((C7953 - C7952) * C8399 + (C7955 - C7954) * C8395 +
                       (C13322 - C13321) * C8401 + (C13324 - C13323) * C8396) *
                          C11774 +
                      ((C7957 - C7956) * C8399 + (C7959 - C7958) * C8395 +
                       (C19455 * C6969 - C151 * C6915) * C8401 +
                       (C19455 * C6970 - C151 * C6917) * C8396) *
                          C11775) *
                         C2032) *
                        C1508) *
                   C19404) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8399 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C8395 +
            (C11879 - C11880 + C11881 - C11882) * C8401 +
            (C11883 - C11884 + C11885 - C11886) * C8396) *
               C19455 * C2031 +
           ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C8399 +
            (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 -
             C11775 * C1178) *
                C8395 +
            (C14038 - C14039 + C14040 - C14041) * C8401 +
            (C14042 - C14043 + C14044 - C14045) * C8396) *
               C19455 * C2032) *
              C1507 +
          (((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                C8399 +
            (C11876 * C627 - C11774 * C734 + C11877 * C2557 - C11775 * C2674) *
                C8395 +
            (C13391 - C13392 + C13393 - C13394) * C8401 +
            (C13395 - C13396 + C13397 - C13398) * C8396) *
               C19455 * C2031 +
           ((C11774 * C2671 - C11876 * C2553 + C11775 * C3955 -
             C11877 * C3861) *
                C8399 +
            (C11774 * C2674 - C11876 * C2557 + C11775 * C3958 -
             C11877 * C3866) *
                C8395 +
            (C11774 * C2672 - C11876 * C2554 + C11775 * C7021 -
             C11877 * C6915) *
                C8401 +
            (C11774 * C2675 - C11876 * C2559 + C11775 * C7022 -
             C11877 * C6917) *
                C8396) *
               C19455 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
             (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                 C19455) *
                C11774 +
            ((C12911 - C12912 + C12913 - C12914) * C151 +
             (C12915 - C12916 + C12917 - C12918) * C19455) *
                C11775) *
               C2031 +
           (((C12912 - C12911 + C12914 - C12913) * C151 +
             (C12916 - C12915 + C12918 - C12917) * C19455) *
                C11774 +
            ((C12919 - C12920 + C12921 - C12922) * C151 +
             (C12923 - C12924 + C12925 - C12926) * C19455) *
                C11775) *
               C2032) *
              C1507 +
          ((((C9093 - C9092 + C9095 - C9094) * C151 +
             (C9097 - C9096 + C9099 - C9098) * C19455) *
                C11774 +
            ((C11383 - C11384 + C11385 - C11386) * C151 +
             (C11387 - C11388 + C11389 - C11390) * C19455) *
                C11775) *
               C2031 +
           (((C11384 - C11383 + C11386 - C11385) * C151 +
             (C11388 - C11387 + C11390 - C11389) * C19455) *
                C11774 +
            ((C8395 * C3865 - C8399 * C3861 + C8396 * C6916 - C8401 * C6915) *
                 C151 +
             (C8395 * C4002 - C8399 * C3999 + C8396 * C7074 - C8401 * C7073) *
                 C19455) *
                C11775) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
             C350 * C8396) *
                C11774 +
            (C12977 + C12978) * C11775) *
               C2031 -
           ((C12979 + C12980) * C11775 + (C12978 + C12977) * C11774) * C2032) *
              C1507 +
          (((C14806 + C14807) * C11774 +
            (C8132 * C8395 +
             (C151 * C6969 - C325 * C6915 - C151 * C7073 + C19455 * C7125) *
                 C8396) *
                C11775) *
               C2032 -
           ((C14807 + C14806) * C11775 +
            (C1752 * C8396 +
             (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) *
                 C8395) *
                C11774) *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C151 +
             (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                 C19455) *
                C8395 +
            ((C11879 - C11880 + C11881 - C11882) * C151 +
             (C12045 - C12046 + C12047 - C12048) * C19455) *
                C8396) *
               C2031 +
           (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
              C11775 * C1172) *
                 C151 +
             (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 -
              C11775 * C1316) *
                 C19455) *
                C8395 +
            ((C14038 - C14039 + C14040 - C14041) * C151 +
             (C14254 - C14255 + C14256 - C14257) * C19455) *
                C8396) *
               C2032) *
              C1507 +
          ((((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                 C151 +
             (C11876 * C778 - C11774 * C872 + C11877 * C2727 - C11775 * C2836) *
                 C19455) *
                C8395 +
            ((C13391 - C13392 + C13393 - C13394) * C151 +
             (C13604 - C13605 + C13606 - C13607) * C19455) *
                C8396) *
               C2031 +
           (((C11774 * C2671 - C11876 * C2553 + C11775 * C3955 -
              C11877 * C3861) *
                 C151 +
             (C11774 * C2836 - C11876 * C2727 + C11775 * C4084 -
              C11877 * C3999) *
                 C19455) *
                C8395 +
            ((C11774 * C2672 - C11876 * C2554 + C11775 * C7021 -
              C11877 * C6915) *
                 C151 +
             (C11774 * C2837 - C11876 * C2728 + C11775 * C7176 -
              C11877 * C7073) *
                 C19455) *
                C8396) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C11774 +
            (C12911 - C12912 + C12913 - C12914) * C11877 +
            (C13081 - C13082 + C13083 - C13084) * C11775) *
               C19455 * C2031 +
           ((C12912 - C12911 + C12914 - C12913) * C11876 +
            (C13082 - C13081 + C13084 - C13083) * C11774 +
            (C12919 - C12920 + C12921 - C12922) * C11877 +
            (C13085 - C13086 + C13087 - C13088) * C11775) *
               C19455 * C2032) *
              C1507 +
          (((C9093 - C9092 + C9095 - C9094) * C11876 +
            (C9259 - C9258 + C9261 - C9260) * C11774 +
            (C11383 - C11384 + C11385 - C11386) * C11877 +
            (C11589 - C11590 + C11591 - C11592) * C11775) *
               C19455 * C2031 +
           ((C11384 - C11383 + C11386 - C11385) * C11876 +
            (C11590 - C11589 + C11592 - C11591) * C11774 +
            (C8395 * C3865 - C8399 * C3861 + C8396 * C6916 - C8401 * C6915) *
                C11877 +
            (C8395 * C4128 - C8399 * C4125 + C8396 * C7228 - C8401 * C7227) *
                C11775) *
               C19455 * C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C11876 +
             (C19455 * C491 - C151 * C443) * C11774 + (C6508 - C6509) * C11877 +
             (C6819 - C6820) * C11775) *
                C8395 +
            ((C163 - C164) * C11876 + (C497 - C498) * C11774 + C13968 * C11877 +
             C14394 * C11775) *
                C8396) *
               C2031 +
           (((C6509 - C6508) * C11876 + (C6820 - C6819) * C11774 +
             (C6513 - C6512) * C11877 + (C6822 - C6821) * C11775) *
                C8395 +
            (C13970 * C11876 + C14395 * C11774 + (C7452 - C7453) * C11877 +
             (C7786 - C7787) * C11775) *
                C8396) *
               C2032) *
              C1507 +
          ((((C151 * C618 - C19455 * C678) * C11876 +
             (C151 * C916 - C19455 * C966) * C11774 + (C7952 - C7953) * C11877 +
             (C8291 - C8292) * C11775) *
                C8395 +
            ((C1568 - C1569) * C11876 + (C1911 - C1912) * C11774 +
             (C13321 - C13322) * C11877 + (C13740 - C13741) * C11775) *
                C8396) *
               C2031 +
           (((C7953 - C7952) * C11876 + (C8292 - C8291) * C11774 +
             (C7957 - C7956) * C11877 + (C8294 - C8293) * C11775) *
                C8395 +
            ((C13322 - C13321) * C11876 + (C13741 - C13740) * C11774 +
             (C19455 * C6969 - C151 * C6915) * C11877 +
             (C19455 * C7279 - C151 * C7227) * C11775) *
                C8396) *
               C2032) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
             C11877 * C1169 - C12203 * C1059 - C11877 * C1357 +
             C11775 * C1453) *
                C19455 * C8395 +
            (C12229 + C12230) * C19455 * C8396) *
               C2031 -
           ((C14474 + C14475) * C19455 * C8396 +
            (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 + C11775 * C1454 +
             C11876 * C1169 - C12202 * C1059 - C11876 * C1357 +
             C11774 * C1453) *
                C19455 * C8395) *
               C2032) *
              C1507 +
          (((C11876 * C2671 - C12202 * C2553 - C11876 * C2889 + C11774 * C2998 +
             C11877 * C3955 - C12203 * C3861 - C11877 * C4125 +
             C11775 * C4210) *
                C19455 * C8395 +
            (C11876 * C2672 - C12202 * C2554 - C11876 * C2890 + C11774 * C2999 +
             C11877 * C7021 - C12203 * C6915 - C11877 * C7227 +
             C11775 * C7330) *
                C19455 * C8396) *
               C2032 -
           ((C13820 + C13821) * C19455 * C8396 +
            (C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998 +
             C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012) *
                C19455 * C8395) *
               C2031) *
              C1508) *
         C19404) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C11774 +
           (C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077 +
            C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076) *
               C11775) *
              C19455 * C19430 * C612 -
          ((C11183 + C11184) * C11775 + (C8939 + C8938) * C11774) * C19455 *
              C19430 * C613 +
          ((C8941 + C8940) * C11774 +
           (C8399 * C3863 - C8400 * C3860 - C8399 * C3864 + C8395 * C3869 +
            C8401 * C4770 - C8402 * C4769 - C8401 * C4771 + C8396 * C4772) *
               C11775) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C11774 +
           (C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077 +
            C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076) *
               C11775) *
              C19455 * C19430 * C19416 * C84 -
          ((C8401 * C1063 - C8402 * C1057 - C8401 * C1064 + C8396 * C1075 +
            C8399 * C1065 - C8400 * C1058 - C8399 * C1066 + C8395 * C1076) *
               C11775 +
           (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
            C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
               C11774) *
              C19455 * C19430 * C19416 * C85 +
          ((C8399 * C102 - C8400 * C95 - C8399 * C103 + C8395 * C110 +
            C8401 * C104 - C8402 * C96 - C8401 * C105 + C8396 * C111) *
               C11774 +
           (C8399 * C1063 - C8400 * C1057 - C8399 * C1064 + C8395 * C1075 +
            C8401 * C2034 - C8402 * C2033 - C8401 * C2035 + C8396 * C2036) *
               C11775) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C11774 +
           (C12757 + C12758) * C11775) *
              C19455 * C1054 -
          ((C12759 + C12760) * C11775 + (C12758 + C12757) * C11774) * C19455 *
              C1055 +
          ((C12760 + C12759) * C11774 +
           (C8399 * C6438 - C8400 * C6436 - C8399 * C6439 + C8395 * C6442 +
            C8401 * C7382 - C8402 * C7381 - C8401 * C7383 + C8396 * C7384) *
               C11775) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C8399 +
                      (C19455 * C157 - C151 * C99) * C8395 +
                      (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                         C11774 +
                     ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                      (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                         C11775) *
                        C19430 * C612 +
                    (((C151 * C618 - C19455 * C678) * C8399 +
                      (C151 * C627 - C19455 * C684) * C8395 +
                      (C1568 - C1569) * C8401 + (C1570 - C1571) * C8396) *
                         C11774 +
                     ((C7952 - C7953) * C8399 + (C7954 - C7955) * C8395 +
                      (C151 * C2554 - C19455 * C2616) * C8401 +
                      (C151 * C2559 - C19455 * C2619) * C8396) *
                         C11775) *
                        C19430 * C613 +
                    (((C19455 * C681 - C151 * C619) * C8399 +
                      (C19455 * C687 - C151 * C629) * C8395 +
                      (C19455 * C682 - C151 * C620) * C8401 +
                      (C19455 * C688 - C151 * C631) * C8396) *
                         C11774 +
                     ((C19455 * C3910 - C151 * C3860) * C8399 +
                      (C19455 * C3913 - C151 * C3864) * C8395 +
                      (C19455 * C4823 - C151 * C4769) * C8401 +
                      (C19455 * C4824 - C151 * C4771) * C8396) *
                         C11775) *
                        C19430 * C614) *
                   C19404) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C8399 +
                      (C19455 * C157 - C151 * C99) * C8395 +
                      (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                         C11774 +
                     ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                      (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                         C11775) *
                        C19430 * C19416 * C84 +
                    (((C164 - C163) * C8399 + (C166 - C165) * C8395 +
                      (C168 - C167) * C8401 + (C170 - C169) * C8396) *
                         C11774 +
                     ((C2090 - C2091) * C8399 + (C2092 - C2093) * C8395 +
                      (C2094 - C2095) * C8401 + (C2096 - C2097) * C8396) *
                         C11775) *
                        C19430 * C19416 * C85 +
                    ((C175 * C8399 + C176 * C8395 + (C172 - C171) * C8401 +
                      (C174 - C173) * C8396) *
                         C11774 +
                     ((C2095 - C2094) * C8399 + (C2097 - C2096) * C8395 +
                      (C19455 * C2087 - C151 * C2033) * C8401 +
                      (C19455 * C2088 - C151 * C2035) * C8396) *
                         C11775) *
                        C19430 * C19416 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C8399 +
                      (C19455 * C157 - C151 * C99) * C8395 +
                      (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                         C11774 +
                     ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                      (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                         C11775) *
                        C1054 +
                    (((C6509 - C6508) * C8399 + (C6511 - C6510) * C8395 +
                      (C2090 - C2091) * C8401 + (C2092 - C2093) * C8396) *
                         C11774 +
                     ((C6513 - C6512) * C8399 + (C6515 - C6514) * C8395 +
                      (C7452 - C7453) * C8401 + (C7454 - C7455) * C8396) *
                         C11775) *
                        C1055 +
                    ((C6520 * C8399 + C6521 * C8395 + (C7453 - C7452) * C8401 +
                      (C7455 - C7454) * C8396) *
                         C11774 +
                     ((C6517 - C6516) * C8399 + (C6519 - C6518) * C8395 +
                      (C19455 * C7449 - C151 * C7381) * C8401 +
                      (C19455 * C7450 - C151 * C7383) * C8396) *
                         C11775) *
                        C1056) *
                   C19416 * C19404) /
                      (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8399 +
           (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
               C8395 +
           (C11879 - C11880 + C11881 - C11882) * C8401 +
           (C11883 - C11884 + C11885 - C11886) * C8396) *
              C19455 * C19430 * C612 +
          ((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
               C8399 +
           (C11876 * C627 - C11774 * C734 + C11877 * C2557 - C11775 * C2674) *
               C8395 +
           (C11876 * C617 - C11774 * C729 + C11877 * C2554 - C11775 * C2672) *
               C8401 +
           (C11876 * C625 - C11774 * C735 + C11877 * C2559 - C11775 * C2675) *
               C8396) *
              C19455 * C19430 * C613 +
          ((C11774 * C731 - C11876 * C619 + C11775 * C3954 - C11877 * C3860) *
               C8399 +
           (C11774 * C737 - C11876 * C629 + C11775 * C3957 - C11877 * C3864) *
               C8395 +
           (C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
               C8401 +
           (C11774 * C738 - C11876 * C631 + C11775 * C4876 - C11877 * C4771) *
               C8396) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8399 +
           (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
               C8395 +
           (C11879 - C11880 + C11881 - C11882) * C8401 +
           (C11883 - C11884 + C11885 - C11886) * C8396) *
              C19455 * C19430 * C19416 * C84 +
          ((C11880 - C11879 + C11882 - C11881) * C8399 +
           (C11884 - C11883 + C11886 - C11885) * C8395 +
           (C11887 - C11888 + C11889 - C11890) * C8401 +
           (C11891 - C11892 + C11893 - C11894) * C8396) *
              C19455 * C19430 * C19416 * C85 +
          ((C11888 - C11887 + C11890 - C11889) * C8399 +
           (C11892 - C11891 + C11894 - C11893) * C8395 +
           (C11774 * C218 - C11876 * C96 + C11775 * C2147 - C11877 * C2033) *
               C8401 +
           (C11774 * C223 - C11876 * C105 + C11775 * C2148 - C11877 * C2035) *
               C8396) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8399 +
           (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
               C8395 +
           (C11879 - C11880 + C11881 - C11882) * C8401 +
           (C11883 - C11884 + C11885 - C11886) * C8396) *
              C19455 * C1054 +
          ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 - C11775 * C1172) *
               C8399 +
           (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 - C11775 * C1178) *
               C8395 +
           (C11876 * C1058 - C11774 * C1170 + C11877 * C1061 - C11775 * C1173) *
               C8401 +
           (C11876 * C1066 - C11774 * C1176 + C11877 * C1072 - C11775 * C1179) *
               C8396) *
              C19455 * C1055 +
          ((C11774 * C1172 - C11876 * C1060 + C11775 * C6562 - C11877 * C6436) *
               C8399 +
           (C11774 * C1178 - C11876 * C1070 + C11775 * C6564 - C11877 * C6439) *
               C8395 +
           (C11774 * C1173 - C11876 * C1061 + C11775 * C7505 - C11877 * C7381) *
               C8401 +
           (C11774 * C1179 - C11876 * C1072 + C11775 * C7506 - C11877 * C7383) *
               C8396) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C19455) *
               C11774 +
           ((C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
                C151 +
            (C8395 * C1225 - C8399 * C1219 + C8396 * C1226 - C8401 * C1220) *
                C19455) *
               C11775) *
              C19430 * C612 +
          (((C9093 - C9092 + C9095 - C9094) * C151 +
            (C9097 - C9096 + C9099 - C9098) * C19455) *
               C11774 +
           ((C11383 - C11384 + C11385 - C11386) * C151 +
            (C11387 - C11388 + C11389 - C11390) * C19455) *
               C11775) *
              C19430 * C613 +
          (((C9101 - C9100 + C9103 - C9102) * C151 +
            (C9105 - C9104 + C9107 - C9106) * C19455) *
               C11774 +
           ((C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
                C151 +
            (C8395 * C4001 - C8399 * C3998 + C8396 * C4928 - C8401 * C4927) *
                C19455) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C19455) *
               C11774 +
           ((C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
                C151 +
            (C8395 * C1225 - C8399 * C1219 + C8396 * C1226 - C8401 * C1220) *
                C19455) *
               C11775) *
              C19430 * C19416 * C84 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C151 +
            (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                C19455) *
               C11774 +
           ((C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
                C151 +
            (C8399 * C1220 - C8395 * C1226 + C8401 * C1221 - C8396 * C1227) *
                C19455) *
               C11775) *
              C19430 * C19416 * C85 +
          (((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C151 +
            (C8395 * C284 - C8399 * C279 + C8396 * C285 - C8401 * C280) *
                C19455) *
               C11774 +
           ((C8395 * C1063 - C8399 * C1057 + C8396 * C2034 - C8401 * C2033) *
                C151 +
            (C8395 * C1227 - C8399 * C1221 + C8396 * C2208 - C8401 * C2207) *
                C19455) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C19455) *
               C11774 +
           ((C12911 - C12912 + C12913 - C12914) * C151 +
            (C12915 - C12916 + C12917 - C12918) * C19455) *
               C11775) *
              C1054 +
          (((C12912 - C12911 + C12914 - C12913) * C151 +
            (C12916 - C12915 + C12918 - C12917) * C19455) *
               C11774 +
           ((C12919 - C12920 + C12921 - C12922) * C151 +
            (C12923 - C12924 + C12925 - C12926) * C19455) *
               C11775) *
              C1055 +
          (((C12920 - C12919 + C12922 - C12921) * C151 +
            (C12924 - C12923 + C12926 - C12925) * C19455) *
               C11774 +
           ((C8395 * C6438 - C8399 * C6436 + C8396 * C7382 - C8401 * C7381) *
                C151 +
            (C8395 * C6606 - C8399 * C6604 + C8396 * C7558 - C8401 * C7557) *
                C19455) *
               C11775) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
            C350 * C8396) *
               C11774 +
           (C6684 * C8395 + C2274 * C8396) * C11775) *
              C19430 * C612 -
          (((C151 * C2616 - C325 * C2554 - C151 * C2728 + C19455 * C2784) *
                C8396 +
            C8131 * C8395) *
               C11775 +
           (C1752 * C8396 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C8395) *
               C11774) *
              C19430 * C613 +
          (((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C8395 +
            (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C8396) *
               C11774 +
           ((C151 * C3910 - C325 * C3860 - C151 * C3998 + C19455 * C4042) *
                C8395 +
            (C151 * C4823 - C325 * C4769 - C151 * C4927 + C19455 * C4979) *
                C8396) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
            C350 * C8396) *
               C11774 +
           (C6684 * C8395 + C2274 * C8396) * C11775) *
              C19430 * C19416 * C84 -
          ((C2273 * C8396 + C2274 * C8395) * C11775 +
           (C351 * C8396 + C350 * C8395) * C11774) *
              C19430 * C19416 * C85 +
          ((C351 * C8395 + C352 * C8396) * C11774 +
           (C2273 * C8395 +
            (C151 * C2087 - C325 * C2033 - C151 * C2207 + C19455 * C2259) *
                C8396) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
            C350 * C8396) *
               C11774 +
           (C12977 + C12978) * C11775) *
              C1054 -
          ((C12979 + C12980) * C11775 + (C12978 + C12977) * C11774) * C1055 +
          ((C12980 + C12979) * C11774 +
           (C6686 * C8395 +
            (C151 * C7449 - C325 * C7381 - C151 * C7557 + C19455 * C7617) *
                C8396) *
               C11775) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C151 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C19455) *
               C8395 +
           ((C11879 - C11880 + C11881 - C11882) * C151 +
            (C12045 - C12046 + C12047 - C12048) * C19455) *
               C8396) *
              C19430 * C612 +
          (((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                C151 +
            (C11876 * C778 - C11774 * C872 + C11877 * C2727 - C11775 * C2836) *
                C19455) *
               C8395 +
           ((C11876 * C617 - C11774 * C729 + C11877 * C2554 - C11775 * C2672) *
                C151 +
            (C11876 * C779 - C11774 * C873 + C11877 * C2728 - C11775 * C2837) *
                C19455) *
               C8396) *
              C19430 * C613 +
          (((C11774 * C731 - C11876 * C619 + C11775 * C3954 - C11877 * C3860) *
                C151 +
            (C11774 * C875 - C11876 * C781 + C11775 * C4083 - C11877 * C3998) *
                C19455) *
               C8395 +
           ((C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
                C151 +
            (C11774 * C876 - C11876 * C782 + C11775 * C5030 - C11877 * C4927) *
                C19455) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C151 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C19455) *
               C8395 +
           ((C11879 - C11880 + C11881 - C11882) * C151 +
            (C12045 - C12046 + C12047 - C12048) * C19455) *
               C8396) *
              C19430 * C19416 * C84 +
          (((C11880 - C11879 + C11882 - C11881) * C151 +
            (C12046 - C12045 + C12048 - C12047) * C19455) *
               C8395 +
           ((C11887 - C11888 + C11889 - C11890) * C151 +
            (C12049 - C12050 + C12051 - C12052) * C19455) *
               C8396) *
              C19430 * C19416 * C85 +
          (((C11888 - C11887 + C11890 - C11889) * C151 +
            (C12050 - C12049 + C12052 - C12051) * C19455) *
               C8395 +
           ((C11774 * C218 - C11876 * C96 + C11775 * C2147 - C11877 * C2033) *
                C151 +
            (C11774 * C393 - C11876 * C280 + C11775 * C2324 - C11877 * C2207) *
                C19455) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C151 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C19455) *
               C8395 +
           ((C11879 - C11880 + C11881 - C11882) * C151 +
            (C12045 - C12046 + C12047 - C12048) * C19455) *
               C8396) *
              C1054 +
          (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C151 +
            (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 -
             C11775 * C1316) *
                C19455) *
               C8395 +
           ((C11876 * C1058 - C11774 * C1170 + C11877 * C1061 -
             C11775 * C1173) *
                C151 +
            (C11876 * C1220 - C11774 * C1314 + C11877 * C1223 -
             C11775 * C1317) *
                C19455) *
               C8396) *
              C1055 +
          (((C11774 * C1172 - C11876 * C1060 + C11775 * C6562 -
             C11877 * C6436) *
                C151 +
            (C11774 * C1316 - C11876 * C1222 + C11775 * C6727 -
             C11877 * C6604) *
                C19455) *
               C8395 +
           ((C11774 * C1173 - C11876 * C1061 + C11775 * C7505 -
             C11877 * C7381) *
                C151 +
            (C11774 * C1317 - C11876 * C1223 + C11775 * C7677 -
             C11877 * C7557) *
                C19455) *
               C8396) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
           (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
               C11774 +
           (C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
               C11877 +
           (C8395 * C1363 - C8399 * C1357 + C8396 * C1364 - C8401 * C1358) *
               C11775) *
              C19455 * C19430 * C612 +
          ((C9093 - C9092 + C9095 - C9094) * C11876 +
           (C9259 - C9258 + C9261 - C9260) * C11774 +
           (C11383 - C11384 + C11385 - C11386) * C11877 +
           (C11589 - C11590 + C11591 - C11592) * C11775) *
              C19455 * C19430 * C613 +
          ((C9101 - C9100 + C9103 - C9102) * C11876 +
           (C9263 - C9262 + C9265 - C9264) * C11774 +
           (C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
               C11877 +
           (C8395 * C4127 - C8399 * C4124 + C8396 * C5082 - C8401 * C5081) *
               C11775) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
           (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
               C11774 +
           (C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
               C11877 +
           (C8395 * C1363 - C8399 * C1357 + C8396 * C1364 - C8401 * C1358) *
               C11775) *
              C19455 * C19430 * C19416 * C84 +
          ((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C11876 +
           (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
               C11774 +
           (C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
               C11877 +
           (C8399 * C1358 - C8395 * C1364 + C8401 * C1359 - C8396 * C1365) *
               C11775) *
              C19455 * C19430 * C19416 * C85 +
          ((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C11876 +
           (C8395 * C450 - C8399 * C445 + C8396 * C451 - C8401 * C446) *
               C11774 +
           (C8395 * C1063 - C8399 * C1057 + C8396 * C2034 - C8401 * C2033) *
               C11877 +
           (C8395 * C1365 - C8399 * C1359 + C8396 * C2380 - C8401 * C2379) *
               C11775) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
           (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
               C11774 +
           (C12911 - C12912 + C12913 - C12914) * C11877 +
           (C13081 - C13082 + C13083 - C13084) * C11775) *
              C19455 * C1054 +
          ((C12912 - C12911 + C12914 - C12913) * C11876 +
           (C13082 - C13081 + C13084 - C13083) * C11774 +
           (C12919 - C12920 + C12921 - C12922) * C11877 +
           (C13085 - C13086 + C13087 - C13088) * C11775) *
              C19455 * C1055 +
          ((C12920 - C12919 + C12922 - C12921) * C11876 +
           (C13086 - C13085 + C13088 - C13087) * C11774 +
           (C8395 * C6438 - C8399 * C6436 + C8396 * C7382 - C8401 * C7381) *
               C11877 +
           (C8395 * C6769 - C8399 * C6767 + C8396 * C7729 - C8401 * C7728) *
               C11775) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C11876 +
                      (C19455 * C491 - C151 * C443) * C11774 +
                      (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                         C8395 +
                     ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                      (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                         C8396) *
                        C19430 * C612 +
                    (((C151 * C618 - C19455 * C678) * C11876 +
                      (C151 * C916 - C19455 * C966) * C11774 +
                      (C7952 - C7953) * C11877 + (C8291 - C8292) * C11775) *
                         C8395 +
                     ((C1568 - C1569) * C11876 + (C1911 - C1912) * C11774 +
                      (C151 * C2554 - C19455 * C2616) * C11877 +
                      (C151 * C2890 - C19455 * C2946) * C11775) *
                         C8396) *
                        C19430 * C613 +
                    (((C19455 * C681 - C151 * C619) * C11876 +
                      (C19455 * C969 - C151 * C919) * C11774 +
                      (C19455 * C3910 - C151 * C3860) * C11877 +
                      (C19455 * C4168 - C151 * C4124) * C11775) *
                         C8395 +
                     ((C19455 * C682 - C151 * C620) * C11876 +
                      (C19455 * C970 - C151 * C920) * C11774 +
                      (C19455 * C4823 - C151 * C4769) * C11877 +
                      (C19455 * C5133 - C151 * C5081) * C11775) *
                         C8396) *
                        C19430 * C614) *
                   C19404) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C11876 +
                      (C19455 * C491 - C151 * C443) * C11774 +
                      (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                         C8395 +
                     ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                      (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                         C8396) *
                        C19430 * C19416 * C84 +
                    (((C164 - C163) * C11876 + (C498 - C497) * C11774 +
                      (C2090 - C2091) * C11877 + (C2433 - C2434) * C11775) *
                         C8395 +
                     ((C168 - C167) * C11876 + (C501 - C500) * C11774 +
                      (C2094 - C2095) * C11877 + (C2435 - C2436) * C11775) *
                         C8396) *
                        C19430 * C19416 * C85 +
                    ((C175 * C11876 + C504 * C11774 + (C2095 - C2094) * C11877 +
                      (C2436 - C2435) * C11775) *
                         C8395 +
                     ((C172 - C171) * C11876 + (C503 - C502) * C11774 +
                      (C19455 * C2087 - C151 * C2033) * C11877 +
                      (C19455 * C2431 - C151 * C2379) * C11775) *
                         C8396) *
                        C19430 * C19416 * C86)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C11876 +
                      (C19455 * C491 - C151 * C443) * C11774 +
                      (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                         C8395 +
                     ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                      (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                         C8396) *
                        C1054 +
                    (((C6509 - C6508) * C11876 + (C6820 - C6819) * C11774 +
                      (C6513 - C6512) * C11877 + (C6822 - C6821) * C11775) *
                         C8395 +
                     ((C2090 - C2091) * C11876 + (C2433 - C2434) * C11774 +
                      (C7452 - C7453) * C11877 + (C7786 - C7787) * C11775) *
                         C8396) *
                        C1055 +
                    ((C6520 * C11876 + C6825 * C11774 +
                      (C6517 - C6516) * C11877 + (C6824 - C6823) * C11775) *
                         C8395 +
                     ((C7453 - C7452) * C11876 + (C7787 - C7786) * C11774 +
                      (C19455 * C7449 - C151 * C7381) * C11877 +
                      (C19455 * C7784 - C151 * C7728) * C11775) *
                         C8396) *
                        C1056) *
                   C19416 * C19404) /
                      (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C19455 * C8395 +
           (C12229 + C12230) * C19455 * C8396) *
              C19430 * C612 -
          ((C11877 * C2672 - C12203 * C2554 - C11877 * C2890 + C11775 * C2999 +
            C11876 * C729 - C12202 * C617 - C11876 * C917 + C11774 * C1011) *
               C19455 * C8396 +
           (C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998 +
            C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012) *
               C19455 * C8395) *
              C19430 * C613 +
          ((C11876 * C731 - C12202 * C619 - C11876 * C919 + C11774 * C1013 +
            C11877 * C3954 - C12203 * C3860 - C11877 * C4124 + C11775 * C4209) *
               C19455 * C8395 +
           (C11876 * C732 - C12202 * C620 - C11876 * C920 + C11774 * C1014 +
            C11877 * C4875 - C12203 * C4769 - C11877 * C5081 + C11775 * C5184) *
               C19455 * C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C19455 * C8395 +
           (C12229 + C12230) * C19455 * C8396) *
              C19430 * C19416 * C84 -
          ((C12231 + C12232) * C19455 * C8396 +
           (C12230 + C12229) * C19455 * C8395) *
              C19430 * C19416 * C85 +
          ((C12232 + C12231) * C19455 * C8395 +
           (C11876 * C218 - C12202 * C96 - C11876 * C446 + C11774 * C548 +
            C11877 * C2147 - C12203 * C2033 - C11877 * C2379 + C11775 * C2486) *
               C19455 * C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C19455 * C8395 +
           (C12229 + C12230) * C19455 * C8396) *
              C1054 -
          ((C11877 * C1173 - C12203 * C1061 - C11877 * C1361 + C11775 * C1455 +
            C11876 * C1170 - C12202 * C1058 - C11876 * C1358 + C11774 * C1452) *
               C19455 * C8396 +
           (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 + C11775 * C1454 +
            C11876 * C1169 - C12202 * C1059 - C11876 * C1357 + C11774 * C1453) *
               C19455 * C8395) *
              C1055 +
          ((C11876 * C1172 - C12202 * C1060 - C11876 * C1360 + C11774 * C1454 +
            C11877 * C6562 - C12203 * C6436 - C11877 * C6767 + C11775 * C6863) *
               C19455 * C8395 +
           (C11876 * C1173 - C12202 * C1061 - C11876 * C1361 + C11774 * C1455 +
            C11877 * C7505 - C12203 * C7381 - C11877 * C7728 + C11775 * C7837) *
               C19455 * C8396) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
             C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
                C11774 +
            (C12757 + C12758) * C11775) *
               C19455 * C2031 -
           ((C12759 + C12760) * C11775 + (C12758 + C12757) * C11774) * C19455 *
               C2032) *
              C19416 * C1509 +
          (((C13900 + C13901) * C11774 +
            (C8399 * C1071 - C8400 * C1061 - C8399 * C1072 + C8395 * C1079 +
             C8401 * C1073 - C8402 * C1062 - C8401 * C1074 + C8396 * C1080) *
                C11775) *
               C19455 * C2032 -
           ((C13901 + C13900) * C11775 +
            (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
             C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
                C11774) *
               C19455 * C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C19455 * C152 - C151 * C93) * C8399 +
                       (C19455 * C157 - C151 * C99) * C8395 +
                       (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                          C11774 +
                      ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                       C13968 * C8401 + C13969 * C8396) *
                          C11775) *
                         C2031 +
                     (((C6509 - C6508) * C8399 + (C6511 - C6510) * C8395 +
                       C13970 * C8401 + C13971 * C8396) *
                          C11774 +
                      ((C6513 - C6512) * C8399 + (C6515 - C6514) * C8395 +
                       (C7452 - C7453) * C8401 + (C7454 - C7455) * C8396) *
                          C11775) *
                         C2032) *
                        C19416 * C1509 +
                    ((((C164 - C163) * C8399 + (C166 - C165) * C8395 +
                       (C168 - C167) * C8401 + (C170 - C169) * C8396) *
                          C11774 +
                      (C13970 * C8399 + C13971 * C8395 +
                       (C2094 - C2095) * C8401 + (C2096 - C2097) * C8396) *
                          C11775) *
                         C2031 +
                     ((C13968 * C8399 + C13969 * C8395 +
                       (C2095 - C2094) * C8401 + (C2097 - C2096) * C8396) *
                          C11774 +
                      ((C7453 - C7452) * C8399 + (C7455 - C7454) * C8395 +
                       (C19455 * C1124 - C151 * C1062) * C8401 +
                       (C19455 * C1130 - C151 * C1074) * C8396) *
                          C11775) *
                         C2032) *
                        C19416 * C1510)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C8399 +
            (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
                C8395 +
            (C11879 - C11880 + C11881 - C11882) * C8401 +
            (C11883 - C11884 + C11885 - C11886) * C8396) *
               C19455 * C2031 +
           ((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
             C11775 * C1172) *
                C8399 +
            (C11876 * C1068 - C11774 * C1175 + C11877 * C1070 -
             C11775 * C1178) *
                C8395 +
            (C14038 - C14039 + C14040 - C14041) * C8401 +
            (C14042 - C14043 + C14044 - C14045) * C8396) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C11880 - C11879 + C11882 - C11881) * C8399 +
            (C11884 - C11883 + C11886 - C11885) * C8395 +
            (C11887 - C11888 + C11889 - C11890) * C8401 +
            (C11891 - C11892 + C11893 - C11894) * C8396) *
               C19455 * C2031 +
           ((C14039 - C14038 + C14041 - C14040) * C8399 +
            (C14043 - C14042 + C14045 - C14044) * C8395 +
            (C11774 * C1171 - C11876 * C1057 + C11775 * C1174 -
             C11877 * C1062) *
                C8401 +
            (C11774 * C1177 - C11876 * C1064 + C11775 * C1180 -
             C11877 * C1074) *
                C8396) *
               C19455 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
             (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                 C19455) *
                C11774 +
            ((C12911 - C12912 + C12913 - C12914) * C151 +
             (C12915 - C12916 + C12917 - C12918) * C19455) *
                C11775) *
               C2031 +
           (((C12912 - C12911 + C12914 - C12913) * C151 +
             (C12916 - C12915 + C12918 - C12917) * C19455) *
                C11774 +
            ((C12919 - C12920 + C12921 - C12922) * C151 +
             (C12923 - C12924 + C12925 - C12926) * C19455) *
                C11775) *
               C2032) *
              C19416 * C1509 +
          ((((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C151 +
             (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                 C19455) *
                C11774 +
            ((C14112 - C14113 + C14114 - C14115) * C151 +
             (C14116 - C14117 + C14118 - C14119) * C19455) *
                C11775) *
               C2031 +
           (((C14113 - C14112 + C14115 - C14114) * C151 +
             (C14117 - C14116 + C14119 - C14118) * C19455) *
                C11774 +
            ((C8395 * C1071 - C8399 * C1061 + C8396 * C1073 - C8401 * C1062) *
                 C151 +
             (C8395 * C1229 - C8399 * C1223 + C8396 * C1230 - C8401 * C1224) *
                 C19455) *
                C11775) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
             C350 * C8396) *
                C11774 +
            (C12977 + C12978) * C11775) *
               C2031 -
           ((C12979 + C12980) * C11775 + (C12978 + C12977) * C11774) * C2032) *
              C19416 * C1509 +
          (((C14186 + C14187) * C11774 +
            (C7626 * C8395 +
             (C151 * C1124 - C325 * C1062 - C151 * C1224 + C19455 * C1274) *
                 C8396) *
                C11775) *
               C2032 -
           ((C14187 + C14186) * C11775 +
            (C351 * C8396 + C350 * C8395) * C11774) *
               C2031) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                 C151 +
             (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                 C19455) *
                C8395 +
            ((C11879 - C11880 + C11881 - C11882) * C151 +
             (C12045 - C12046 + C12047 - C12048) * C19455) *
                C8396) *
               C2031 +
           (((C11876 * C1059 - C11774 * C1169 + C11877 * C1060 -
              C11775 * C1172) *
                 C151 +
             (C11876 * C1219 - C11774 * C1313 + C11877 * C1222 -
              C11775 * C1316) *
                 C19455) *
                C8395 +
            ((C14038 - C14039 + C14040 - C14041) * C151 +
             (C14254 - C14255 + C14256 - C14257) * C19455) *
                C8396) *
               C2032) *
              C19416 * C1509 +
          ((((C11880 - C11879 + C11882 - C11881) * C151 +
             (C12046 - C12045 + C12048 - C12047) * C19455) *
                C8395 +
            ((C11887 - C11888 + C11889 - C11890) * C151 +
             (C12049 - C12050 + C12051 - C12052) * C19455) *
                C8396) *
               C2031 +
           (((C14039 - C14038 + C14041 - C14040) * C151 +
             (C14255 - C14254 + C14257 - C14256) * C19455) *
                C8395 +
            ((C11774 * C1171 - C11876 * C1057 + C11775 * C1174 -
              C11877 * C1062) *
                 C151 +
             (C11774 * C1315 - C11876 * C1221 + C11775 * C1318 -
              C11877 * C1224) *
                 C19455) *
                C8396) *
               C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
            (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
                C11774 +
            (C12911 - C12912 + C12913 - C12914) * C11877 +
            (C13081 - C13082 + C13083 - C13084) * C11775) *
               C19455 * C2031 +
           ((C12912 - C12911 + C12914 - C12913) * C11876 +
            (C13082 - C13081 + C13084 - C13083) * C11774 +
            (C12919 - C12920 + C12921 - C12922) * C11877 +
            (C13085 - C13086 + C13087 - C13088) * C11775) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C11876 +
            (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
                C11774 +
            (C14112 - C14113 + C14114 - C14115) * C11877 +
            (C14324 - C14325 + C14326 - C14327) * C11775) *
               C19455 * C2031 +
           ((C14113 - C14112 + C14115 - C14114) * C11876 +
            (C14325 - C14324 + C14327 - C14326) * C11774 +
            (C8395 * C1071 - C8399 * C1061 + C8396 * C1073 - C8401 * C1062) *
                C11877 +
            (C8395 * C1367 - C8399 * C1361 + C8396 * C1368 - C8401 * C1362) *
                C11775) *
               C19455 * C2032) *
              C19416 * C1510)) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C19455 * C152 - C151 * C93) * C11876 +
                       (C19455 * C491 - C151 * C443) * C11774 +
                       (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                          C8395 +
                      ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                       C13968 * C11877 + C14394 * C11775) *
                          C8396) *
                         C2031 +
                     (((C6509 - C6508) * C11876 + (C6820 - C6819) * C11774 +
                       (C6513 - C6512) * C11877 + (C6822 - C6821) * C11775) *
                          C8395 +
                      (C13970 * C11876 + C14395 * C11774 +
                       (C7452 - C7453) * C11877 + (C7786 - C7787) * C11775) *
                          C8396) *
                         C2032) *
                        C19416 * C1509 +
                    ((((C164 - C163) * C11876 + (C498 - C497) * C11774 +
                       C13970 * C11877 + C14395 * C11775) *
                          C8395 +
                      ((C168 - C167) * C11876 + (C501 - C500) * C11774 +
                       (C2094 - C2095) * C11877 + (C2435 - C2436) * C11775) *
                          C8396) *
                         C2031 +
                     ((C13968 * C11876 + C14394 * C11774 +
                       (C7453 - C7452) * C11877 + (C7787 - C7786) * C11775) *
                          C8395 +
                      ((C2095 - C2094) * C11876 + (C2436 - C2435) * C11774 +
                       (C19455 * C1124 - C151 * C1062) * C11877 +
                       (C19455 * C1412 - C151 * C1362) * C11775) *
                          C8396) *
                         C2032) *
                        C19416 * C1510)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   ((((C11876 * C215 - C12202 * C93 - C11876 * C443 +
                       C11774 * C545 + C11877 * C1169 - C12203 * C1059 -
                       C11877 * C1357 + C11775 * C1453) *
                          C19455 * C8395 +
                      (C12229 + C12230) * C19455 * C8396) *
                         C2031 -
                     ((C14474 + C14475) * C19455 * C8396 +
                      (C11877 * C1172 - C12203 * C1060 - C11877 * C1360 +
                       C11775 * C1454 + C11876 * C1169 - C12202 * C1059 -
                       C11876 * C1357 + C11774 * C1453) *
                          C19455 * C8395) *
                         C2032) *
                        C19416 * C1509 +
                    (((C14475 + C14474) * C19455 * C8395 +
                      (C11876 * C1171 - C12202 * C1057 - C11876 * C1359 +
                       C11774 * C1451 + C11877 * C1174 - C12203 * C1062 -
                       C11877 * C1362 + C11775 * C1456) *
                          C19455 * C8396) *
                         C2032 -
                     ((C12231 + C12232) * C19455 * C8396 +
                      (C12230 + C12229) * C19455 * C8395) *
                         C2031) *
                        C19416 * C1510)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C11774 +
           (C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077 +
            C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076) *
               C11775) *
              C19455 * C19430 * C19416 * C84 -
          ((C8401 * C1063 - C8402 * C1057 - C8401 * C1064 + C8396 * C1075 +
            C8399 * C1065 - C8400 * C1058 - C8399 * C1066 + C8395 * C1076) *
               C11775 +
           (C8401 * C102 - C8402 * C95 - C8401 * C103 + C8396 * C110 +
            C8399 * C100 - C8400 * C94 - C8399 * C101 + C8395 * C109) *
               C11774) *
              C19455 * C19430 * C19416 * C85 +
          ((C8399 * C102 - C8400 * C95 - C8399 * C103 + C8395 * C110 +
            C8401 * C104 - C8402 * C96 - C8401 * C105 + C8396 * C111) *
               C11774 +
           (C8399 * C1063 - C8400 * C1057 - C8399 * C1064 + C8395 * C1075 +
            C8401 * C2034 - C8402 * C2033 - C8401 * C2035 + C8396 * C2036) *
               C11775) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8399 * C98 - C8400 * C93 - C8399 * C99 + C8395 * C108 +
            C8401 * C100 - C8402 * C94 - C8401 * C101 + C8396 * C109) *
               C11774 +
           (C8399 * C1067 - C8400 * C1059 - C8399 * C1068 + C8395 * C1077 +
            C8401 * C1065 - C8402 * C1058 - C8401 * C1066 + C8396 * C1076) *
               C11775) *
              C19455 * C19430 * C612 -
          ((C11183 + C11184) * C11775 + (C8939 + C8938) * C11774) * C19455 *
              C19430 * C613 +
          ((C8941 + C8940) * C11774 +
           (C8399 * C3863 - C8400 * C3860 - C8399 * C3864 + C8395 * C3869 +
            C8401 * C4770 - C8402 * C4769 - C8401 * C4771 + C8396 * C4772) *
               C11775) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C8399 +
                      (C19455 * C157 - C151 * C99) * C8395 +
                      (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                         C11774 +
                     ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                      (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                         C11775) *
                        C19430 * C19416 * C84 +
                    (((C164 - C163) * C8399 + (C166 - C165) * C8395 +
                      (C168 - C167) * C8401 + (C170 - C169) * C8396) *
                         C11774 +
                     ((C2090 - C2091) * C8399 + (C2092 - C2093) * C8395 +
                      (C2094 - C2095) * C8401 + (C2096 - C2097) * C8396) *
                         C11775) *
                        C19430 * C19416 * C85 +
                    ((C175 * C8399 + C176 * C8395 + (C172 - C171) * C8401 +
                      (C174 - C173) * C8396) *
                         C11774 +
                     ((C2095 - C2094) * C8399 + (C2097 - C2096) * C8395 +
                      (C19455 * C2087 - C151 * C2033) * C8401 +
                      (C19455 * C2088 - C151 * C2035) * C8396) *
                         C11775) *
                        C19430 * C19416 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C8399 +
                      (C19455 * C157 - C151 * C99) * C8395 +
                      (C163 - C164) * C8401 + (C165 - C166) * C8396) *
                         C11774 +
                     ((C6508 - C6509) * C8399 + (C6510 - C6511) * C8395 +
                      (C2091 - C2090) * C8401 + (C2093 - C2092) * C8396) *
                         C11775) *
                        C19430 * C612 +
                    (((C151 * C618 - C19455 * C678) * C8399 +
                      (C151 * C627 - C19455 * C684) * C8395 +
                      (C1568 - C1569) * C8401 + (C1570 - C1571) * C8396) *
                         C11774 +
                     ((C7952 - C7953) * C8399 + (C7954 - C7955) * C8395 +
                      (C151 * C2554 - C19455 * C2616) * C8401 +
                      (C151 * C2559 - C19455 * C2619) * C8396) *
                         C11775) *
                        C19430 * C613 +
                    (((C19455 * C681 - C151 * C619) * C8399 +
                      (C19455 * C687 - C151 * C629) * C8395 +
                      (C19455 * C682 - C151 * C620) * C8401 +
                      (C19455 * C688 - C151 * C631) * C8396) *
                         C11774 +
                     ((C19455 * C3910 - C151 * C3860) * C8399 +
                      (C19455 * C3913 - C151 * C3864) * C8395 +
                      (C19455 * C4823 - C151 * C4769) * C8401 +
                      (C19455 * C4824 - C151 * C4771) * C8396) *
                         C11775) *
                        C19430 * C614) *
                   C19404) /
                      (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8399 +
           (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
               C8395 +
           (C11879 - C11880 + C11881 - C11882) * C8401 +
           (C11883 - C11884 + C11885 - C11886) * C8396) *
              C19455 * C19430 * C19416 * C84 +
          ((C11880 - C11879 + C11882 - C11881) * C8399 +
           (C11884 - C11883 + C11886 - C11885) * C8395 +
           (C11887 - C11888 + C11889 - C11890) * C8401 +
           (C11891 - C11892 + C11893 - C11894) * C8396) *
              C19455 * C19430 * C19416 * C85 +
          ((C11888 - C11887 + C11890 - C11889) * C8399 +
           (C11892 - C11891 + C11894 - C11893) * C8395 +
           (C11774 * C218 - C11876 * C96 + C11775 * C2147 - C11877 * C2033) *
               C8401 +
           (C11774 * C223 - C11876 * C105 + C11775 * C2148 - C11877 * C2035) *
               C8396) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
               C8399 +
           (C11774 * C220 - C11876 * C99 + C11775 * C1175 - C11877 * C1068) *
               C8395 +
           (C11879 - C11880 + C11881 - C11882) * C8401 +
           (C11883 - C11884 + C11885 - C11886) * C8396) *
              C19455 * C19430 * C612 +
          ((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
               C8399 +
           (C11876 * C627 - C11774 * C734 + C11877 * C2557 - C11775 * C2674) *
               C8395 +
           (C11876 * C617 - C11774 * C729 + C11877 * C2554 - C11775 * C2672) *
               C8401 +
           (C11876 * C625 - C11774 * C735 + C11877 * C2559 - C11775 * C2675) *
               C8396) *
              C19455 * C19430 * C613 +
          ((C11774 * C731 - C11876 * C619 + C11775 * C3954 - C11877 * C3860) *
               C8399 +
           (C11774 * C737 - C11876 * C629 + C11775 * C3957 - C11877 * C3864) *
               C8395 +
           (C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
               C8401 +
           (C11774 * C738 - C11876 * C631 + C11775 * C4876 - C11877 * C4771) *
               C8396) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C19455) *
               C11774 +
           ((C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
                C151 +
            (C8395 * C1225 - C8399 * C1219 + C8396 * C1226 - C8401 * C1220) *
                C19455) *
               C11775) *
              C19430 * C19416 * C84 +
          (((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C151 +
            (C8399 * C278 - C8395 * C283 + C8401 * C279 - C8396 * C284) *
                C19455) *
               C11774 +
           ((C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
                C151 +
            (C8399 * C1220 - C8395 * C1226 + C8401 * C1221 - C8396 * C1227) *
                C19455) *
               C11775) *
              C19430 * C19416 * C85 +
          (((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C151 +
            (C8395 * C284 - C8399 * C279 + C8396 * C285 - C8401 * C280) *
                C19455) *
               C11774 +
           ((C8395 * C1063 - C8399 * C1057 + C8396 * C2034 - C8401 * C2033) *
                C151 +
            (C8395 * C1227 - C8399 * C1221 + C8396 * C2208 - C8401 * C2207) *
                C19455) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C151 +
            (C8395 * C282 - C8399 * C277 + C8396 * C283 - C8401 * C278) *
                C19455) *
               C11774 +
           ((C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
                C151 +
            (C8395 * C1225 - C8399 * C1219 + C8396 * C1226 - C8401 * C1220) *
                C19455) *
               C11775) *
              C19430 * C612 +
          (((C9093 - C9092 + C9095 - C9094) * C151 +
            (C9097 - C9096 + C9099 - C9098) * C19455) *
               C11774 +
           ((C11383 - C11384 + C11385 - C11386) * C151 +
            (C11387 - C11388 + C11389 - C11390) * C19455) *
               C11775) *
              C19430 * C613 +
          (((C9101 - C9100 + C9103 - C9102) * C151 +
            (C9105 - C9104 + C9107 - C9106) * C19455) *
               C11774 +
           ((C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
                C151 +
            (C8395 * C4001 - C8399 * C3998 + C8396 * C4928 - C8401 * C4927) *
                C19455) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
            C350 * C8396) *
               C11774 +
           (C6684 * C8395 + C2274 * C8396) * C11775) *
              C19430 * C19416 * C84 -
          ((C2273 * C8396 + C2274 * C8395) * C11775 +
           (C351 * C8396 + C350 * C8395) * C11774) *
              C19430 * C19416 * C85 +
          ((C351 * C8395 + C352 * C8396) * C11774 +
           (C2273 * C8395 +
            (C151 * C2087 - C325 * C2033 - C151 * C2207 + C19455 * C2259) *
                C8396) *
               C11775) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C8395 +
            C350 * C8396) *
               C11774 +
           (C6684 * C8395 + C2274 * C8396) * C11775) *
              C19430 * C612 -
          (((C151 * C2616 - C325 * C2554 - C151 * C2728 + C19455 * C2784) *
                C8396 +
            C8131 * C8395) *
               C11775 +
           (C1752 * C8396 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C8395) *
               C11774) *
              C19430 * C613 +
          (((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C8395 +
            (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C8396) *
               C11774 +
           ((C151 * C3910 - C325 * C3860 - C151 * C3998 + C19455 * C4042) *
                C8395 +
            (C151 * C4823 - C325 * C4769 - C151 * C4927 + C19455 * C4979) *
                C8396) *
               C11775) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C151 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C19455) *
               C8395 +
           ((C11879 - C11880 + C11881 - C11882) * C151 +
            (C12045 - C12046 + C12047 - C12048) * C19455) *
               C8396) *
              C19430 * C19416 * C84 +
          (((C11880 - C11879 + C11882 - C11881) * C151 +
            (C12046 - C12045 + C12048 - C12047) * C19455) *
               C8395 +
           ((C11887 - C11888 + C11889 - C11890) * C151 +
            (C12049 - C12050 + C12051 - C12052) * C19455) *
               C8396) *
              C19430 * C19416 * C85 +
          (((C11888 - C11887 + C11890 - C11889) * C151 +
            (C12050 - C12049 + C12052 - C12051) * C19455) *
               C8395 +
           ((C11774 * C218 - C11876 * C96 + C11775 * C2147 - C11877 * C2033) *
                C151 +
            (C11774 * C393 - C11876 * C280 + C11775 * C2324 - C11877 * C2207) *
                C19455) *
               C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C11774 * C215 - C11876 * C93 + C11775 * C1169 - C11877 * C1059) *
                C151 +
            (C11774 * C390 - C11876 * C277 + C11775 * C1313 - C11877 * C1219) *
                C19455) *
               C8395 +
           ((C11879 - C11880 + C11881 - C11882) * C151 +
            (C12045 - C12046 + C12047 - C12048) * C19455) *
               C8396) *
              C19430 * C612 +
          (((C11876 * C618 - C11774 * C728 + C11877 * C2553 - C11775 * C2671) *
                C151 +
            (C11876 * C778 - C11774 * C872 + C11877 * C2727 - C11775 * C2836) *
                C19455) *
               C8395 +
           ((C11876 * C617 - C11774 * C729 + C11877 * C2554 - C11775 * C2672) *
                C151 +
            (C11876 * C779 - C11774 * C873 + C11877 * C2728 - C11775 * C2837) *
                C19455) *
               C8396) *
              C19430 * C613 +
          (((C11774 * C731 - C11876 * C619 + C11775 * C3954 - C11877 * C3860) *
                C151 +
            (C11774 * C875 - C11876 * C781 + C11775 * C4083 - C11877 * C3998) *
                C19455) *
               C8395 +
           ((C11774 * C732 - C11876 * C620 + C11775 * C4875 - C11877 * C4769) *
                C151 +
            (C11774 * C876 - C11876 * C782 + C11775 * C5030 - C11877 * C4927) *
                C19455) *
               C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
           (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
               C11774 +
           (C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
               C11877 +
           (C8395 * C1363 - C8399 * C1357 + C8396 * C1364 - C8401 * C1358) *
               C11775) *
              C19455 * C19430 * C19416 * C84 +
          ((C8399 * C94 - C8395 * C100 + C8401 * C95 - C8396 * C102) * C11876 +
           (C8399 * C444 - C8395 * C449 + C8401 * C445 - C8396 * C450) *
               C11774 +
           (C8399 * C1058 - C8395 * C1065 + C8401 * C1057 - C8396 * C1063) *
               C11877 +
           (C8399 * C1358 - C8395 * C1364 + C8401 * C1359 - C8396 * C1365) *
               C11775) *
              C19455 * C19430 * C19416 * C85 +
          ((C8395 * C102 - C8399 * C95 + C8396 * C104 - C8401 * C96) * C11876 +
           (C8395 * C450 - C8399 * C445 + C8396 * C451 - C8401 * C446) *
               C11774 +
           (C8395 * C1063 - C8399 * C1057 + C8396 * C2034 - C8401 * C2033) *
               C11877 +
           (C8395 * C1365 - C8399 * C1359 + C8396 * C2380 - C8401 * C2379) *
               C11775) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8395 * C98 - C8399 * C93 + C8396 * C100 - C8401 * C94) * C11876 +
           (C8395 * C448 - C8399 * C443 + C8396 * C449 - C8401 * C444) *
               C11774 +
           (C8395 * C1067 - C8399 * C1059 + C8396 * C1065 - C8401 * C1058) *
               C11877 +
           (C8395 * C1363 - C8399 * C1357 + C8396 * C1364 - C8401 * C1358) *
               C11775) *
              C19455 * C19430 * C612 +
          ((C9093 - C9092 + C9095 - C9094) * C11876 +
           (C9259 - C9258 + C9261 - C9260) * C11774 +
           (C11383 - C11384 + C11385 - C11386) * C11877 +
           (C11589 - C11590 + C11591 - C11592) * C11775) *
              C19455 * C19430 * C613 +
          ((C9101 - C9100 + C9103 - C9102) * C11876 +
           (C9263 - C9262 + C9265 - C9264) * C11774 +
           (C8395 * C3863 - C8399 * C3860 + C8396 * C4770 - C8401 * C4769) *
               C11877 +
           (C8395 * C4127 - C8399 * C4124 + C8396 * C5082 - C8401 * C5081) *
               C11775) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C11876 +
                      (C19455 * C491 - C151 * C443) * C11774 +
                      (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                         C8395 +
                     ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                      (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                         C8396) *
                        C19430 * C19416 * C84 +
                    (((C164 - C163) * C11876 + (C498 - C497) * C11774 +
                      (C2090 - C2091) * C11877 + (C2433 - C2434) * C11775) *
                         C8395 +
                     ((C168 - C167) * C11876 + (C501 - C500) * C11774 +
                      (C2094 - C2095) * C11877 + (C2435 - C2436) * C11775) *
                         C8396) *
                        C19430 * C19416 * C85 +
                    ((C175 * C11876 + C504 * C11774 + (C2095 - C2094) * C11877 +
                      (C2436 - C2435) * C11775) *
                         C8395 +
                     ((C172 - C171) * C11876 + (C503 - C502) * C11774 +
                      (C19455 * C2087 - C151 * C2033) * C11877 +
                      (C19455 * C2431 - C151 * C2379) * C11775) *
                         C8396) *
                        C19430 * C19416 * C86)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C11876 +
                      (C19455 * C491 - C151 * C443) * C11774 +
                      (C6508 - C6509) * C11877 + (C6819 - C6820) * C11775) *
                         C8395 +
                     ((C163 - C164) * C11876 + (C497 - C498) * C11774 +
                      (C2091 - C2090) * C11877 + (C2434 - C2433) * C11775) *
                         C8396) *
                        C19430 * C612 +
                    (((C151 * C618 - C19455 * C678) * C11876 +
                      (C151 * C916 - C19455 * C966) * C11774 +
                      (C7952 - C7953) * C11877 + (C8291 - C8292) * C11775) *
                         C8395 +
                     ((C1568 - C1569) * C11876 + (C1911 - C1912) * C11774 +
                      (C151 * C2554 - C19455 * C2616) * C11877 +
                      (C151 * C2890 - C19455 * C2946) * C11775) *
                         C8396) *
                        C19430 * C613 +
                    (((C19455 * C681 - C151 * C619) * C11876 +
                      (C19455 * C969 - C151 * C919) * C11774 +
                      (C19455 * C3910 - C151 * C3860) * C11877 +
                      (C19455 * C4168 - C151 * C4124) * C11775) *
                         C8395 +
                     ((C19455 * C682 - C151 * C620) * C11876 +
                      (C19455 * C970 - C151 * C920) * C11774 +
                      (C19455 * C4823 - C151 * C4769) * C11877 +
                      (C19455 * C5133 - C151 * C5081) * C11775) *
                         C8396) *
                        C19430 * C614) *
                   C19404) /
                      (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C19455 * C8395 +
           (C12229 + C12230) * C19455 * C8396) *
              C19430 * C19416 * C84 -
          ((C12231 + C12232) * C19455 * C8396 +
           (C12230 + C12229) * C19455 * C8395) *
              C19430 * C19416 * C85 +
          ((C12232 + C12231) * C19455 * C8395 +
           (C11876 * C218 - C12202 * C96 - C11876 * C446 + C11774 * C548 +
            C11877 * C2147 - C12203 * C2033 - C11877 * C2379 + C11775 * C2486) *
               C19455 * C8396) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C11876 * C215 - C12202 * C93 - C11876 * C443 + C11774 * C545 +
            C11877 * C1169 - C12203 * C1059 - C11877 * C1357 + C11775 * C1453) *
               C19455 * C8395 +
           (C12229 + C12230) * C19455 * C8396) *
              C19430 * C612 -
          ((C11877 * C2672 - C12203 * C2554 - C11877 * C2890 + C11775 * C2999 +
            C11876 * C729 - C12202 * C617 - C11876 * C917 + C11774 * C1011) *
               C19455 * C8396 +
           (C11877 * C2671 - C12203 * C2553 - C11877 * C2889 + C11775 * C2998 +
            C11876 * C728 - C12202 * C618 - C11876 * C916 + C11774 * C1012) *
               C19455 * C8395) *
              C19430 * C613 +
          ((C11876 * C731 - C12202 * C619 - C11876 * C919 + C11774 * C1013 +
            C11877 * C3954 - C12203 * C3860 - C11877 * C4124 + C11775 * C4209) *
               C19455 * C8395 +
           (C11876 * C732 - C12202 * C620 - C11876 * C920 + C11774 * C1014 +
            C11877 * C4875 - C12203 * C4769 - C11877 * C5081 + C11775 * C5184) *
               C19455 * C8396) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C19430 * C1507 -
           (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
            C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
            C87 * C627 + C77 * C636) *
               C19466 * C19455 * C19430 * C1508) *
              C1509 +
          ((C87 * C624 - C88 * C617 - C87 * C625 + C77 * C635 + C89 * C622 -
            C90 * C616 - C89 * C623 + C78 * C634 + C91 * C1512 - C92 * C1511 -
            C91 * C1513 + C79 * C1514) *
               C19466 * C19455 * C19430 * C1508 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C19466 * C19455 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C19430 * C1507 -
           (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C1508) *
              C1509 +
          ((C4281 * C3040 + C4282 * C3041 +
            (C3043 * C4263 - C3044 * C4262 - C3043 * C4264 + C19382 * C4265) *
                C19466 * C3042) *
               C19430 * C1508 -
           (C4282 * C3042 + C4281 * C3041 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C19466 * C3040) *
               C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C87 +
            (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C19466 * C19430 * C1507 +
           ((C151 * C618 - C19455 * C678) * C87 +
            (C151 * C627 - C19455 * C684) * C77 + (C1568 - C1569) * C89 +
            (C1570 - C1571) * C78 + (C1572 - C1573) * C91 +
            (C1574 - C1575) * C79) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C19466 * C19430 * C1507 +
           ((C1569 - C1568) * C87 + (C1571 - C1570) * C77 +
            (C1573 - C1572) * C89 + (C1575 - C1574) * C78 +
            (C19455 * C1565 - C151 * C1511) * C91 +
            (C19455 * C1566 - C151 * C1513) * C79) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C3043 +
            (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
             C3042 * C687 - C3085 * C629) *
                C19382) *
               C19466 * C19430 * C1507 +
           ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C3043 +
            (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
             C3085 * C3396 - C3042 * C3465) *
                C19382) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C3043 +
            (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
             C3085 * C631 - C3042 * C688) *
                C19382) *
               C19466 * C19430 * C1507 +
           ((C3040 * C679 - C3083 * C617 + C3041 * C682 - C3084 * C620 +
             C3042 * C4332 - C3085 * C4262) *
                C3043 +
            (C3040 * C685 - C3083 * C625 + C3041 * C688 - C3084 * C631 +
             C3042 * C4333 - C3085 * C4264) *
                C19382) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C19430 * C1507 +
           ((C214 * C618 - C19466 * C728) * C87 +
            (C214 * C627 - C19466 * C734) * C77 + (C1628 - C1629) * C89 +
            (C1630 - C1631) * C78 + (C1632 - C1633) * C91 +
            (C1634 - C1635) * C79) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C19455 * C19430 * C1507 +
           ((C1629 - C1628) * C87 + (C1631 - C1630) * C77 +
            (C1633 - C1632) * C89 + (C1635 - C1634) * C78 +
            (C19466 * C1625 - C214 * C1511) * C91 +
            (C19466 * C1626 - C214 * C1513) * C79) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C19430 * C1507 +
           (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
            ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
            ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
               C19430 * C1508) *
              C1509 +
          ((((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
            ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
            ((C4387 - C4388) * C3043 + (C4389 - C4390) * C19382) * C3042) *
               C19430 * C1507 +
           (((C1629 - C1628) * C3043 + (C1631 - C1630) * C19382) * C3040 +
            ((C4388 - C4387) * C3043 + (C4390 - C4389) * C19382) * C3041 +
            ((C19466 * C4384 - C214 * C4262) * C3043 +
             (C19466 * C4385 - C214 * C4264) * C19382) *
                C3042) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C19430 * C1507 +
           ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C151 +
            (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
             C79 * C786) *
                C19455) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C151 +
            (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
             C79 * C285) *
                C19455) *
               C19466 * C19430 * C1507 +
           ((C77 * C624 - C87 * C617 + C78 * C622 - C89 * C616 + C79 * C1512 -
             C91 * C1511) *
                C151 +
            (C77 * C785 - C87 * C779 + C78 * C786 - C89 * C780 + C79 * C1686 -
             C91 * C1685) *
                C19455) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C19430 * C1507 +
           ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
            (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
            (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
               C19466 * C19430 * C1508) *
              C1509 +
          (((C3043 * C94 - C19382 * C100) * C3083 +
            (C3043 * C278 - C19382 * C283) * C3040 + (C4443 - C4444) * C3084 +
            (C4445 - C4446) * C3041 + (C4447 - C4448) * C3085 +
            (C4449 - C4450) * C3042) *
               C19466 * C19430 * C1507 +
           ((C4444 - C4443) * C3083 + (C4446 - C4445) * C3040 +
            (C4448 - C4447) * C3084 + (C4450 - C4449) * C3041 +
            (C19382 * C4263 - C3043 * C4262) * C3085 +
            (C19382 * C4441 - C3043 * C4440) * C3042) *
               C19466 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C19430 * C1507 -
           (C1751 * C79 + C1752 * C78 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
               C19466 * C19430 * C1508) *
              C1509 +
          ((C1752 * C77 + C1751 * C78 +
            (C151 * C1565 - C325 * C1511 - C151 * C1685 + C19455 * C1737) *
                C79) *
               C19466 * C19430 * C1508 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C19430 * C1507 -
           (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
            C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
            C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
               C19382 * C19466 * C19430 * C1508) *
              C1509 +
          ((C3083 * C679 - C3200 * C617 - C3083 * C779 + C3040 * C829 +
            C3084 * C682 - C3201 * C620 - C3084 * C782 + C3041 * C832 +
            C3085 * C4332 - C3202 * C4262 - C3085 * C4440 + C3042 * C4500) *
               C19382 * C19466 * C19430 * C1508 -
           (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
            C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
            C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
               C19382 * C19466 * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C19430 * C1507 +
           (((C214 * C618 - C19466 * C728) * C151 +
             (C214 * C778 - C19466 * C872) * C19455) *
                C77 +
            ((C1628 - C1629) * C151 + (C1804 - C1805) * C19455) * C78 +
            ((C1632 - C1633) * C151 + (C1806 - C1807) * C19455) * C79) *
               C19430 * C1508) *
              C1509 +
          ((((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
               C19430 * C1507 +
           (((C1629 - C1628) * C151 + (C1805 - C1804) * C19455) * C77 +
            ((C1633 - C1632) * C151 + (C1807 - C1806) * C19455) * C78 +
            ((C19466 * C1625 - C214 * C1511) * C151 +
             (C19466 * C1802 - C214 * C1685) * C19455) *
                C79) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C19430 * C1507 +
           ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
            (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
            (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C227 - C226) * C3083 + (C397 - C396) * C3040 +
            (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
            (C4387 - C4388) * C3085 + (C4553 - C4554) * C3042) *
               C19382 * C19430 * C1507 +
           ((C1629 - C1628) * C3083 + (C1805 - C1804) * C3040 +
            (C4388 - C4387) * C3084 + (C4554 - C4553) * C3041 +
            (C19466 * C4384 - C214 * C4262) * C3085 +
            (C19466 * C4551 - C214 * C4440) * C3042) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C19430 * C1507 +
           ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C214 +
            (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
             C79 * C924) *
                C19466) *
               C19455 * C19430 * C1508) *
              C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C19466) *
               C19455 * C19430 * C1507 +
           ((C77 * C624 - C87 * C617 + C78 * C622 - C89 * C616 + C79 * C1512 -
             C91 * C1511) *
                C214 +
            (C77 * C923 - C87 * C917 + C78 * C924 - C89 * C918 + C79 * C1858 -
             C91 * C1857) *
                C19466) *
               C19455 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C19430 * C1507 +
           (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
            ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
            ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
               C19430 * C1508) *
              C1509 +
          ((((C3043 * C94 - C19382 * C100) * C214 +
             (C3043 * C444 - C19382 * C449) * C19466) *
                C3040 +
            ((C4443 - C4444) * C214 + (C4607 - C4608) * C19466) * C3041 +
            ((C4447 - C4448) * C214 + (C4609 - C4610) * C19466) * C3042) *
               C19430 * C1507 +
           (((C4444 - C4443) * C214 + (C4608 - C4607) * C19466) * C3040 +
            ((C4448 - C4447) * C214 + (C4610 - C4609) * C19466) * C3041 +
            ((C19382 * C4263 - C3043 * C4262) * C214 +
             (C19382 * C4605 - C3043 * C4604) * C19466) *
                C3042) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C19430 * C1507 +
           (((C151 * C618 - C19455 * C678) * C214 +
             (C151 * C916 - C19455 * C966) * C19466) *
                C77 +
            ((C1568 - C1569) * C214 + (C1911 - C1912) * C19466) * C78 +
            ((C1572 - C1573) * C214 + (C1913 - C1914) * C19466) * C79) *
               C19430 * C1508) *
              C1509 +
          ((((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
               C19430 * C1507 +
           (((C1569 - C1568) * C214 + (C1912 - C1911) * C19466) * C77 +
            ((C1573 - C1572) * C214 + (C1914 - C1913) * C19466) * C78 +
            ((C19455 * C1565 - C151 * C1511) * C214 +
             (C19455 * C1909 - C151 * C1857) * C19466) *
                C79) *
               C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C19430 * C1507 +
           ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C214 +
            (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
             C3085 * C3707 - C3042 * C3759) *
                C19466) *
               C19382 * C19430 * C1508) *
              C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C214 +
            (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
             C3085 * C920 - C3042 * C970) *
                C19466) *
               C19382 * C19430 * C1507 +
           ((C3040 * C679 - C3083 * C617 + C3041 * C682 - C3084 * C620 +
             C3042 * C4332 - C3085 * C4262) *
                C214 +
            (C3040 * C967 - C3083 * C917 + C3041 * C970 - C3084 * C920 +
             C3042 * C4660 - C3085 * C4604) *
                C19466) *
               C19382 * C19430 * C1508) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C19430 * C1507 -
           (C1980 * C79 + C1981 * C78 +
            (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) *
                C19455 * C77) *
               C19430 * C1508) *
              C1509 +
          ((C1981 * C77 + C1980 * C78 +
            (C214 * C1625 - C544 * C1511 - C214 * C1857 + C19466 * C1964) *
                C19455 * C79) *
               C19430 * C1508 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C19430 * C1507 -
           (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
               C1508) *
              C1509 +
          ((C1979 * C3040 + C4719 * C3041 +
            (C214 * C4384 - C544 * C4262 - C214 * C4604 + C19466 * C4711) *
                C3042) *
               C19382 * C19430 * C1508 -
           (C4719 * C3042 + C1979 * C3041 + C569 * C3040) * C19382 * C19430 *
               C1507) *
              C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C2031 -
           (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 +
            C89 * C1065 - C90 * C1058 - C89 * C1066 + C78 * C1076 +
            C87 * C1067 - C88 * C1059 - C87 * C1068 + C77 * C1077) *
               C19466 * C19455 * C2032) *
              C1507 +
          ((C87 * C2556 - C88 * C2553 - C87 * C2557 + C77 * C2562 +
            C89 * C2558 - C90 * C2554 - C89 * C2559 + C78 * C2563 +
            C91 * C2560 - C92 * C2555 - C91 * C2561 + C79 * C2564) *
               C19466 * C19455 * C2032 -
           (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
            C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
            C87 * C627 + C77 * C636) *
               C19466 * C19455 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C2031 -
           (C5254 * C3042 + C5255 * C3041 +
            (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
                C19466 * C3040) *
               C2032) *
              C1507 +
          ((C5255 * C3040 + C5254 * C3041 +
            (C3043 * C5236 - C3044 * C5235 - C3043 * C5237 + C19382 * C5238) *
                C19466 * C3042) *
               C2032 -
           (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C19455 * C152 - C151 * C93) * C87 +
                      (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
                      (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
                         C19466 * C2031 +
                     ((C151 * C1059 - C19455 * C1119) * C87 +
                      (C151 * C1068 - C19455 * C1125) * C77 +
                      (C2090 - C2091) * C89 + (C2092 - C2093) * C78 +
                      (C2094 - C2095) * C91 + (C2096 - C2097) * C79) *
                         C19466 * C2032) *
                        C1507 +
                    (((C151 * C618 - C19455 * C678) * C87 +
                      (C151 * C627 - C19455 * C684) * C77 +
                      (C1568 - C1569) * C89 + (C1570 - C1571) * C78 +
                      (C1572 - C1573) * C91 + (C1574 - C1575) * C79) *
                         C19466 * C2031 +
                     ((C19455 * C2615 - C151 * C2553) * C87 +
                      (C19455 * C2618 - C151 * C2557) * C77 +
                      (C19455 * C2616 - C151 * C2554) * C89 +
                      (C19455 * C2619 - C151 * C2559) * C78 +
                      (C19455 * C2617 - C151 * C2555) * C91 +
                      (C19455 * C2620 - C151 * C2561) * C79) *
                         C19466 * C2032) *
                        C1508) *
                   C19404) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3040 * C152 - C3083 * C93 + C3041 * C678 -
                       C3084 * C618 + C3042 * C681 - C3085 * C619) *
                          C3043 +
                      (C3040 * C157 - C3083 * C99 + C3041 * C684 -
                       C3084 * C627 + C3042 * C687 - C3085 * C629) *
                          C19382) *
                         C19466 * C2031 +
                     ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 -
                       C3041 * C2615 + C3085 * C3860 - C3042 * C3910) *
                          C3043 +
                      (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 -
                       C3041 * C2618 + C3085 * C3864 - C3042 * C3913) *
                          C19382) *
                         C19466 * C2032) *
                        C1507 +
                    (((C3083 * C618 - C3040 * C678 + C3084 * C619 -
                       C3041 * C681 + C3085 * C3393 - C3042 * C3463) *
                          C3043 +
                      (C3083 * C627 - C3040 * C684 + C3084 * C629 -
                       C3041 * C687 + C3085 * C3396 - C3042 * C3465) *
                          C19382) *
                         C19466 * C2031 +
                     ((C3040 * C2615 - C3083 * C2553 + C3041 * C3910 -
                       C3084 * C3860 + C3042 * C5305 - C3085 * C5235) *
                          C3043 +
                      (C3040 * C2618 - C3083 * C2557 + C3041 * C3913 -
                       C3084 * C3864 + C3042 * C5306 - C3085 * C5237) *
                          C19382) *
                         C19466 * C2032) *
                        C1508) *
                   C19404) /
                      (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C87 +
            (C214 * C1068 - C19466 * C1175) * C77 + (C2150 - C2151) * C89 +
            (C2152 - C2153) * C78 + (C2154 - C2155) * C91 +
            (C2156 - C2157) * C79) *
               C19455 * C2032) *
              C1507 +
          (((C214 * C618 - C19466 * C728) * C87 +
            (C214 * C627 - C19466 * C734) * C77 + (C1628 - C1629) * C89 +
            (C1630 - C1631) * C78 + (C1632 - C1633) * C91 +
            (C1634 - C1635) * C79) *
               C19455 * C2031 +
           ((C19466 * C2671 - C214 * C2553) * C87 +
            (C19466 * C2674 - C214 * C2557) * C77 +
            (C19466 * C2672 - C214 * C2554) * C89 +
            (C19466 * C2675 - C214 * C2559) * C78 +
            (C19466 * C2673 - C214 * C2555) * C91 +
            (C19466 * C2676 - C214 * C2561) * C79) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C3043 +
             (C214 * C1068 - C19466 * C1175) * C19382) *
                C3040 +
            ((C5360 - C5361) * C3043 + (C5362 - C5363) * C19382) * C3041 +
            ((C5364 - C5365) * C3043 + (C5366 - C5367) * C19382) * C3042) *
               C2032) *
              C1507 +
          ((((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
            ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
            ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
               C2031 +
           (((C5361 - C5360) * C3043 + (C5363 - C5362) * C19382) * C3040 +
            ((C5365 - C5364) * C3043 + (C5367 - C5366) * C19382) * C3041 +
            ((C19466 * C5357 - C214 * C5235) * C3043 +
             (C19466 * C5358 - C214 * C5237) * C19382) *
                C3042) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C151 +
            (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
             C91 * C1221 - C79 * C1227) *
                C19455) *
               C19466 * C2032) *
              C1507 +
          (((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C151 +
            (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
             C79 * C786) *
                C19455) *
               C19466 * C2031 +
           ((C77 * C2556 - C87 * C2553 + C78 * C2558 - C89 * C2554 +
             C79 * C2560 - C91 * C2555) *
                C151 +
            (C77 * C2730 - C87 * C2727 + C78 * C2731 - C89 * C2728 +
             C79 * C2732 - C91 * C2729) *
                C19455) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C2031 +
           ((C3043 * C1059 - C19382 * C1067) * C3083 +
            (C3043 * C1219 - C19382 * C1225) * C3040 + (C5420 - C5421) * C3084 +
            (C5422 - C5423) * C3041 + (C5424 - C5425) * C3085 +
            (C5426 - C5427) * C3042) *
               C19466 * C2032) *
              C1507 +
          (((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
            (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
            (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
               C19466 * C2031 +
           ((C5421 - C5420) * C3083 + (C5423 - C5422) * C3040 +
            (C5425 - C5424) * C3084 + (C5427 - C5426) * C3041 +
            (C19382 * C5236 - C3043 * C5235) * C3085 +
            (C19382 * C5418 - C3043 * C5417) * C3042) *
               C19466 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C2031 -
           (C2273 * C79 + C2274 * C78 +
            (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
                C77) *
               C19466 * C2032) *
              C1507 +
          (((C151 * C2615 - C325 * C2553 - C151 * C2727 + C19455 * C2783) *
                C77 +
            (C151 * C2616 - C325 * C2554 - C151 * C2728 + C19455 * C2784) *
                C78 +
            (C151 * C2617 - C325 * C2555 - C151 * C2729 + C19455 * C2785) *
                C79) *
               C19466 * C2032 -
           (C1751 * C79 + C1752 * C78 +
            (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
               C19466 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C2031 -
           (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
            C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
            C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
               C19382 * C19466 * C2032) *
              C1507 +
          ((C3083 * C2615 - C3200 * C2553 - C3083 * C2727 + C3040 * C2783 +
            C3084 * C3910 - C3201 * C3860 - C3084 * C3998 + C3041 * C4042 +
            C3085 * C5305 - C3202 * C5235 - C3085 * C5417 + C3042 * C5477) *
               C19382 * C19466 * C2032 -
           (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
            C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
            C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
               C19382 * C19466 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C151 +
             (C214 * C1219 - C19466 * C1313) * C19455) *
                C77 +
            ((C2150 - C2151) * C151 + (C2326 - C2327) * C19455) * C78 +
            ((C2154 - C2155) * C151 + (C2328 - C2329) * C19455) * C79) *
               C2032) *
              C1507 +
          ((((C214 * C618 - C19466 * C728) * C151 +
             (C214 * C778 - C19466 * C872) * C19455) *
                C77 +
            ((C1628 - C1629) * C151 + (C1804 - C1805) * C19455) * C78 +
            ((C1632 - C1633) * C151 + (C1806 - C1807) * C19455) * C79) *
               C2031 +
           (((C19466 * C2671 - C214 * C2553) * C151 +
             (C19466 * C2836 - C214 * C2727) * C19455) *
                C77 +
            ((C19466 * C2672 - C214 * C2554) * C151 +
             (C19466 * C2837 - C214 * C2728) * C19455) *
                C78 +
            ((C19466 * C2673 - C214 * C2555) * C151 +
             (C19466 * C2838 - C214 * C2729) * C19455) *
                C79) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C3083 +
            (C214 * C1219 - C19466 * C1313) * C3040 + (C5360 - C5361) * C3084 +
            (C5530 - C5531) * C3041 + (C5364 - C5365) * C3085 +
            (C5532 - C5533) * C3042) *
               C19382 * C2032) *
              C1507 +
          (((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
            (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
            (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
               C19382 * C2031 +
           ((C5361 - C5360) * C3083 + (C5531 - C5530) * C3040 +
            (C5365 - C5364) * C3084 + (C5533 - C5532) * C3041 +
            (C19466 * C5357 - C214 * C5235) * C3085 +
            (C19466 * C5528 - C214 * C5417) * C3042) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C214 +
            (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
             C91 * C1359 - C79 * C1365) *
                C19466) *
               C19455 * C2032) *
              C1507 +
          (((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
             C79 * C622) *
                C214 +
            (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
             C79 * C924) *
                C19466) *
               C19455 * C2031 +
           ((C77 * C2556 - C87 * C2553 + C78 * C2558 - C89 * C2554 +
             C79 * C2560 - C91 * C2555) *
                C214 +
            (C77 * C2892 - C87 * C2889 + C78 * C2893 - C89 * C2890 +
             C79 * C2894 - C91 * C2891) *
                C19466) *
               C19455 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C2031 +
           (((C3043 * C1059 - C19382 * C1067) * C214 +
             (C3043 * C1357 - C19382 * C1363) * C19466) *
                C3040 +
            ((C5420 - C5421) * C214 + (C5586 - C5587) * C19466) * C3041 +
            ((C5424 - C5425) * C214 + (C5588 - C5589) * C19466) * C3042) *
               C2032) *
              C1507 +
          ((((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
            ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
            ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
               C2031 +
           (((C5421 - C5420) * C214 + (C5587 - C5586) * C19466) * C3040 +
            ((C5425 - C5424) * C214 + (C5589 - C5588) * C19466) * C3041 +
            ((C19382 * C5236 - C3043 * C5235) * C214 +
             (C19382 * C5584 - C3043 * C5583) * C19466) *
                C3042) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C2031 +
           (((C151 * C1059 - C19455 * C1119) * C214 +
             (C151 * C1357 - C19455 * C1407) * C19466) *
                C77 +
            ((C2090 - C2091) * C214 + (C2433 - C2434) * C19466) * C78 +
            ((C2094 - C2095) * C214 + (C2435 - C2436) * C19466) * C79) *
               C2032) *
              C1507 +
          ((((C151 * C618 - C19455 * C678) * C214 +
             (C151 * C916 - C19455 * C966) * C19466) *
                C77 +
            ((C1568 - C1569) * C214 + (C1911 - C1912) * C19466) * C78 +
            ((C1572 - C1573) * C214 + (C1913 - C1914) * C19466) * C79) *
               C2031 +
           (((C19455 * C2615 - C151 * C2553) * C214 +
             (C19455 * C2945 - C151 * C2889) * C19466) *
                C77 +
            ((C19455 * C2616 - C151 * C2554) * C214 +
             (C19455 * C2946 - C151 * C2890) * C19466) *
                C78 +
            ((C19455 * C2617 - C151 * C2555) * C214 +
             (C19455 * C2947 - C151 * C2891) * C19466) *
                C79) *
               C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C214 +
            (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
             C3085 * C4124 - C3042 * C4168) *
                C19466) *
               C19382 * C2032) *
              C1507 +
          (((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
             C3085 * C3393 - C3042 * C3463) *
                C214 +
            (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
             C3085 * C3707 - C3042 * C3759) *
                C19466) *
               C19382 * C2031 +
           ((C3040 * C2615 - C3083 * C2553 + C3041 * C3910 - C3084 * C3860 +
             C3042 * C5305 - C3085 * C5235) *
                C214 +
            (C3040 * C2945 - C3083 * C2889 + C3041 * C4168 - C3084 * C4124 +
             C3042 * C5639 - C3085 * C5583) *
                C19466) *
               C19382 * C2032) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C2031 -
           (C2502 * C79 + C2503 * C78 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C19455 * C77) *
               C2032) *
              C1507 +
          (((C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
                C19455 * C77 +
            (C214 * C2672 - C544 * C2554 - C214 * C2890 + C19466 * C2999) *
                C19455 * C78 +
            (C214 * C2673 - C544 * C2555 - C214 * C2891 + C19466 * C3000) *
                C19455 * C79) *
               C2032 -
           (C1980 * C79 + C1981 * C78 +
            (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) *
                C19455 * C77) *
               C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C2031 -
           (C5704 * C3042 + C5705 * C3041 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C3040) *
               C19382 * C2032) *
              C1507 +
          ((C5705 * C3040 + C5704 * C3041 +
            (C214 * C5357 - C544 * C5235 - C214 * C5583 + C19466 * C5690) *
                C3042) *
               C19382 * C2032 -
           (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C2031) *
              C1508) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C612 -
          (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
           C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
           C87 * C627 + C77 * C636) *
              C19466 * C19455 * C19430 * C613 +
          (C87 * C628 - C88 * C619 - C87 * C629 + C77 * C637 + C89 * C630 -
           C90 * C620 - C89 * C631 + C78 * C638 + C91 * C632 - C92 * C621 -
           C91 * C633 + C79 * C639) *
              C19466 * C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C19416 * C84 -
          (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
           C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
           C87 * C101 + C77 * C109) *
              C19466 * C19455 * C19430 * C19416 * C85 +
          (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
           C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
           C91 * C107 + C79 * C112) *
              C19466 * C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C1054 -
          (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 + C89 * C1065 -
           C90 * C1058 - C89 * C1066 + C78 * C1076 + C87 * C1067 - C88 * C1059 -
           C87 * C1068 + C77 * C1077) *
              C19466 * C19455 * C1055 +
          (C87 * C1069 - C88 * C1060 - C87 * C1070 + C77 * C1078 + C89 * C1071 -
           C90 * C1061 - C89 * C1072 + C78 * C1079 + C91 * C1073 - C92 * C1062 -
           C91 * C1074 + C79 * C1080) *
              C19466 * C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           (C3043 * C626 - C3044 * C618 - C3043 * C627 + C19382 * C636) *
               C19466 * C3041 +
           (C3043 * C628 - C3044 * C619 - C3043 * C629 + C19382 * C637) *
               C19466 * C3042) *
              C19430 * C19416 * C84 -
          ((C3043 * C630 - C3044 * C620 - C3043 * C631 + C19382 * C638) *
               C19466 * C3042 +
           (C3043 * C624 - C3044 * C617 - C3043 * C625 + C19382 * C635) *
               C19466 * C3041 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C19466 * C3040) *
              C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
               C19466 * C3040 +
           (C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
               C19466 * C3041 +
           (C3043 * C632 - C3044 * C621 - C3043 * C633 + C19382 * C639) *
               C19466 * C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C19430 * C612 -
          (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C613 +
          (C3424 * C3040 + C3425 * C3041 +
           (C3043 * C3397 - C3044 * C3394 - C3043 * C3398 + C19382 * C3400) *
               C19466 * C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C1054 -
          ((C3043 * C3863 - C3044 * C3860 - C3043 * C3864 + C19382 * C3869) *
               C19466 * C3042 +
           (C3043 * C2556 - C3044 * C2553 - C3043 * C2557 + C19382 * C2562) *
               C19466 * C3041 +
           (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
               C19466 * C3040) *
              C1055 +
          ((C3043 * C1069 - C3044 * C1060 - C3043 * C1070 + C19382 * C1078) *
               C19466 * C3040 +
           (C3043 * C3865 - C3044 * C3861 - C3043 * C3866 + C19382 * C3870) *
               C19466 * C3041 +
           (C3043 * C3867 - C3044 * C3862 - C3043 * C3868 + C19382 * C3871) *
               C19466 * C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C612 +
          ((C151 * C618 - C19455 * C678) * C87 +
           (C151 * C627 - C19455 * C684) * C77 +
           (C151 * C617 - C19455 * C679) * C89 +
           (C151 * C625 - C19455 * C685) * C78 +
           (C151 * C616 - C19455 * C680) * C91 +
           (C151 * C623 - C19455 * C686) * C79) *
              C19466 * C19430 * C613 +
          ((C19455 * C681 - C151 * C619) * C87 +
           (C19455 * C687 - C151 * C629) * C77 +
           (C19455 * C682 - C151 * C620) * C89 +
           (C19455 * C688 - C151 * C631) * C78 +
           (C19455 * C683 - C151 * C621) * C91 +
           (C19455 * C689 - C151 * C633) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C19416 * C84 +
          ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
           (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
              C19466 * C19430 * C19416 * C85 +
          (C175 * C87 + C176 * C77 + (C172 - C171) * C89 + (C174 - C173) * C78 +
           (C19455 * C156 - C151 * C97) * C91 +
           (C19455 * C161 - C151 * C107) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C1054 +
          ((C151 * C1059 - C19455 * C1119) * C87 +
           (C151 * C1068 - C19455 * C1125) * C77 +
           (C151 * C1058 - C19455 * C1120) * C89 +
           (C151 * C1066 - C19455 * C1126) * C78 +
           (C151 * C1057 - C19455 * C1121) * C91 +
           (C151 * C1064 - C19455 * C1127) * C79) *
              C19466 * C1055 +
          ((C19455 * C1122 - C151 * C1060) * C87 +
           (C19455 * C1128 - C151 * C1070) * C77 +
           (C19455 * C1123 - C151 * C1061) * C89 +
           (C19455 * C1129 - C151 * C1072) * C78 +
           (C19455 * C1124 - C151 * C1062) * C91 +
           (C19455 * C1130 - C151 * C1074) * C79) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C3043 +
           (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
            C3085 * C631 - C3042 * C688) *
               C19382) *
              C19466 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C3043 +
           (C3040 * C159 - C3083 * C103 + C3041 * C686 - C3084 * C623 +
            C3042 * C689 - C3085 * C633) *
               C19382) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C3043 +
           (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
            C3085 * C3396 - C3042 * C3465) *
               C19382) *
              C19466 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C3043 +
           (C3040 * C687 - C3083 * C629 + C3041 * C3465 - C3084 * C3396 +
            C3042 * C3466 - C3085 * C3398) *
               C19382) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C1054 +
          ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
            C3085 * C3860 - C3042 * C3910) *
               C3043 +
           (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 - C3041 * C2618 +
            C3085 * C3864 - C3042 * C3913) *
               C19382) *
              C19466 * C1055 +
          ((C3040 * C1122 - C3083 * C1060 + C3041 * C3911 - C3084 * C3861 +
            C3042 * C3912 - C3085 * C3862) *
               C3043 +
           (C3040 * C1128 - C3083 * C1070 + C3041 * C3914 - C3084 * C3866 +
            C3042 * C3915 - C3085 * C3868) *
               C19382) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C612 +
          ((C214 * C618 - C19466 * C728) * C87 +
           (C214 * C627 - C19466 * C734) * C77 +
           (C214 * C617 - C19466 * C729) * C89 +
           (C214 * C625 - C19466 * C735) * C78 +
           (C214 * C616 - C19466 * C730) * C91 +
           (C214 * C623 - C19466 * C736) * C79) *
              C19455 * C19430 * C613 +
          ((C19466 * C731 - C214 * C619) * C87 +
           (C19466 * C737 - C214 * C629) * C77 +
           (C19466 * C732 - C214 * C620) * C89 +
           (C19466 * C738 - C214 * C631) * C78 +
           (C19466 * C733 - C214 * C621) * C91 +
           (C19466 * C739 - C214 * C633) * C79) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C19416 * C84 +
          ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
           (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
              C19455 * C19430 * C19416 * C85 +
          (C238 * C87 + C239 * C77 + (C235 - C234) * C89 + (C237 - C236) * C78 +
           (C19466 * C219 - C214 * C97) * C91 +
           (C19466 * C224 - C214 * C107) * C79) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C1054 +
          ((C214 * C1059 - C19466 * C1169) * C87 +
           (C214 * C1068 - C19466 * C1175) * C77 +
           (C214 * C1058 - C19466 * C1170) * C89 +
           (C214 * C1066 - C19466 * C1176) * C78 +
           (C214 * C1057 - C19466 * C1171) * C91 +
           (C214 * C1064 - C19466 * C1177) * C79) *
              C19455 * C1055 +
          ((C19466 * C1172 - C214 * C1060) * C87 +
           (C19466 * C1178 - C214 * C1070) * C77 +
           (C19466 * C1173 - C214 * C1061) * C89 +
           (C19466 * C1179 - C214 * C1072) * C78 +
           (C19466 * C1174 - C214 * C1062) * C91 +
           (C19466 * C1180 - C214 * C1074) * C79) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C19466 * C728 - C214 * C618) * C3043 +
            (C19466 * C734 - C214 * C627) * C19382) *
               C3041 +
           ((C19466 * C731 - C214 * C619) * C3043 +
            (C19466 * C737 - C214 * C629) * C19382) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
           ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
           ((C214 * C620 - C19466 * C732) * C3043 +
            (C214 * C631 - C19466 * C738) * C19382) *
               C3042) *
              C19430 * C19416 * C85 +
          ((C238 * C3043 + C239 * C19382) * C3040 +
           ((C1633 - C1632) * C3043 + (C1635 - C1634) * C19382) * C3041 +
           ((C19466 * C733 - C214 * C621) * C3043 +
            (C19466 * C739 - C214 * C633) * C19382) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C19430 * C612 +
          (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
           ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
           ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
              C19430 * C613 +
          (C3526 * C3040 +
           ((C3519 - C3518) * C3043 + (C3521 - C3520) * C19382) * C3041 +
           ((C19466 * C3506 - C214 * C3394) * C3043 +
            (C19466 * C3508 - C214 * C3398) * C19382) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C1054 +
          (((C214 * C1059 - C19466 * C1169) * C3043 +
            (C214 * C1068 - C19466 * C1175) * C19382) *
               C3040 +
           ((C214 * C2553 - C19466 * C2671) * C3043 +
            (C214 * C2557 - C19466 * C2674) * C19382) *
               C3041 +
           ((C214 * C3860 - C19466 * C3954) * C3043 +
            (C214 * C3864 - C19466 * C3957) * C19382) *
               C3042) *
              C1055 +
          (((C19466 * C1172 - C214 * C1060) * C3043 +
            (C19466 * C1178 - C214 * C1070) * C19382) *
               C3040 +
           ((C19466 * C3955 - C214 * C3861) * C3043 +
            (C19466 * C3958 - C214 * C3866) * C19382) *
               C3041 +
           ((C19466 * C3956 - C214 * C3862) * C3043 +
            (C19466 * C3959 - C214 * C3868) * C19382) *
               C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C151 +
           (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
            C79 * C786) *
               C19455) *
              C19466 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C151 +
           (C77 * C787 - C87 * C781 + C78 * C788 - C89 * C782 + C79 * C789 -
            C91 * C783) *
               C19455) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C151 +
           (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
            C79 * C285) *
               C19455) *
              C19466 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C151 +
           (C77 * C284 - C87 * C279 + C78 * C285 - C89 * C280 + C79 * C286 -
            C91 * C281) *
               C19455) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C1054 +
          ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
            C91 * C1057 - C79 * C1063) *
               C151 +
           (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
            C91 * C1221 - C79 * C1227) *
               C19455) *
              C19466 * C1055 +
          ((C77 * C1069 - C87 * C1060 + C78 * C1071 - C89 * C1061 +
            C79 * C1073 - C91 * C1062) *
               C151 +
           (C77 * C1228 - C87 * C1222 + C78 * C1229 - C89 * C1223 +
            C79 * C1230 - C91 * C1224) *
               C19455) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 +
           (C19382 * C626 - C3043 * C618) * C3084 +
           (C19382 * C784 - C3043 * C778) * C3041 +
           (C19382 * C628 - C3043 * C619) * C3085 +
           (C19382 * C787 - C3043 * C781) * C3042) *
              C19466 * C19430 * C19416 * C84 +
          ((C3043 * C94 - C19382 * C100) * C3083 +
           (C3043 * C278 - C19382 * C283) * C3040 +
           (C3043 * C617 - C19382 * C624) * C3084 +
           (C3043 * C779 - C19382 * C785) * C3041 +
           (C3043 * C620 - C19382 * C630) * C3085 +
           (C3043 * C782 - C19382 * C788) * C3042) *
              C19466 * C19430 * C19416 * C85 +
          ((C19382 * C102 - C3043 * C95) * C3083 +
           (C19382 * C284 - C3043 * C279) * C3040 +
           (C19382 * C622 - C3043 * C616) * C3084 +
           (C19382 * C786 - C3043 * C780) * C3041 +
           (C19382 * C632 - C3043 * C621) * C3085 +
           (C19382 * C789 - C3043 * C783) * C3042) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C19430 * C612 +
          ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
           (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
           (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
              C19466 * C19430 * C613 +
          (C3581 * C3083 + C3582 * C3040 + (C3578 - C3577) * C3084 +
           (C3580 - C3579) * C3041 + (C19382 * C3397 - C3043 * C3394) * C3085 +
           (C19382 * C3567 - C3043 * C3565) * C3042) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C1054 +
          ((C3043 * C1059 - C19382 * C1067) * C3083 +
           (C3043 * C1219 - C19382 * C1225) * C3040 +
           (C3043 * C2553 - C19382 * C2556) * C3084 +
           (C3043 * C2727 - C19382 * C2730) * C3041 +
           (C3043 * C3860 - C19382 * C3863) * C3085 +
           (C3043 * C3998 - C19382 * C4001) * C3042) *
              C19466 * C1055 +
          ((C19382 * C1069 - C3043 * C1060) * C3083 +
           (C19382 * C1228 - C3043 * C1222) * C3040 +
           (C19382 * C3865 - C3043 * C3861) * C3084 +
           (C19382 * C4002 - C3043 * C3999) * C3041 +
           (C19382 * C3867 - C3043 * C3862) * C3085 +
           (C19382 * C4003 - C3043 * C4000) * C3042) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C612 -
          ((C151 * C680 - C325 * C616 - C151 * C780 + C19455 * C828) * C79 +
           (C151 * C679 - C325 * C617 - C151 * C779 + C19455 * C829) * C78 +
           (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
              C19466 * C19430 * C613 +
          ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C77 +
           (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C78 +
           (C151 * C683 - C325 * C621 - C151 * C783 + C19455 * C833) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C19416 * C84 -
          (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 * C19416 *
              C85 +
          (C351 * C77 + C352 * C78 +
           (C151 * C156 - C325 * C97 - C151 * C281 + C19455 * C330) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C1054 -
          ((C151 * C1121 - C325 * C1057 - C151 * C1221 + C19455 * C1269) * C79 +
           (C151 * C1120 - C325 * C1058 - C151 * C1220 + C19455 * C1270) * C78 +
           (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
               C77) *
              C19466 * C1055 +
          ((C151 * C1122 - C325 * C1060 - C151 * C1222 + C19455 * C1272) * C77 +
           (C151 * C1123 - C325 * C1061 - C151 * C1223 + C19455 * C1273) * C78 +
           (C151 * C1124 - C325 * C1062 - C151 * C1224 + C19455 * C1274) *
               C79) *
              C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C19416 * C84 -
          (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
           C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
           C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
              C19382 * C19466 * C19430 * C19416 * C85 +
          (C3083 * C154 - C3200 * C95 - C3083 * C279 + C3040 * C328 +
           C3084 * C680 - C3201 * C616 - C3084 * C780 + C3041 * C828 +
           C3085 * C683 - C3202 * C621 - C3085 * C783 + C3042 * C833) *
              C19382 * C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C612 -
          (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
           C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
           C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
              C19382 * C19466 * C19430 * C613 +
          (C3083 * C681 - C3200 * C619 - C3083 * C781 + C3040 * C831 +
           C3084 * C3463 - C3201 * C3393 - C3084 * C3564 + C3041 * C3620 +
           C3085 * C3464 - C3202 * C3394 - C3085 * C3565 + C3042 * C3621) *
              C19382 * C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C1054 -
          (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
           C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
           C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
              C19382 * C19466 * C1055 +
          (C3083 * C1122 - C3200 * C1060 - C3083 * C1222 + C3040 * C1272 +
           C3084 * C3911 - C3201 * C3861 - C3084 * C3999 + C3041 * C4043 +
           C3085 * C3912 - C3202 * C3862 - C3085 * C4000 + C3042 * C4044) *
              C19382 * C19466 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C612 +
          (((C214 * C618 - C19466 * C728) * C151 +
            (C214 * C778 - C19466 * C872) * C19455) *
               C77 +
           ((C214 * C617 - C19466 * C729) * C151 +
            (C214 * C779 - C19466 * C873) * C19455) *
               C78 +
           ((C214 * C616 - C19466 * C730) * C151 +
            (C214 * C780 - C19466 * C874) * C19455) *
               C79) *
              C19430 * C613 +
          (((C19466 * C731 - C214 * C619) * C151 +
            (C19466 * C875 - C214 * C781) * C19455) *
               C77 +
           ((C19466 * C732 - C214 * C620) * C151 +
            (C19466 * C876 - C214 * C782) * C19455) *
               C78 +
           ((C19466 * C733 - C214 * C621) * C151 +
            (C19466 * C877 - C214 * C783) * C19455) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
           ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
           ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
              C19430 * C19416 * C85 +
          (C405 * C77 + ((C235 - C234) * C151 + (C402 - C401) * C19455) * C78 +
           ((C19466 * C219 - C214 * C97) * C151 +
            (C19466 * C394 - C214 * C281) * C19455) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C1054 +
          (((C214 * C1059 - C19466 * C1169) * C151 +
            (C214 * C1219 - C19466 * C1313) * C19455) *
               C77 +
           ((C214 * C1058 - C19466 * C1170) * C151 +
            (C214 * C1220 - C19466 * C1314) * C19455) *
               C78 +
           ((C214 * C1057 - C19466 * C1171) * C151 +
            (C214 * C1221 - C19466 * C1315) * C19455) *
               C79) *
              C1055 +
          (((C19466 * C1172 - C214 * C1060) * C151 +
            (C19466 * C1316 - C214 * C1222) * C19455) *
               C77 +
           ((C19466 * C1173 - C214 * C1061) * C151 +
            (C19466 * C1317 - C214 * C1223) * C19455) *
               C78 +
           ((C19466 * C1174 - C214 * C1062) * C151 +
            (C19466 * C1318 - C214 * C1224) * C19455) *
               C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 +
           (C19466 * C728 - C214 * C618) * C3084 +
           (C19466 * C872 - C214 * C778) * C3041 +
           (C19466 * C731 - C214 * C619) * C3085 +
           (C19466 * C875 - C214 * C781) * C3042) *
              C19382 * C19430 * C19416 * C84 +
          ((C227 - C226) * C3083 + (C397 - C396) * C3040 +
           (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
           (C214 * C620 - C19466 * C732) * C3085 +
           (C214 * C782 - C19466 * C876) * C3042) *
              C19382 * C19430 * C19416 * C85 +
          (C238 * C3083 + C403 * C3040 + (C1633 - C1632) * C3084 +
           (C1807 - C1806) * C3041 + (C19466 * C733 - C214 * C621) * C3085 +
           (C19466 * C877 - C214 * C783) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C19430 * C612 +
          ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
           (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
           (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
              C19382 * C19430 * C613 +
          (C3522 * C3083 + C3669 * C3040 + (C3519 - C3518) * C3084 +
           (C3668 - C3667) * C3041 + (C19466 * C3506 - C214 * C3394) * C3085 +
           (C19466 * C3661 - C214 * C3565) * C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C1054 +
          ((C214 * C1059 - C19466 * C1169) * C3083 +
           (C214 * C1219 - C19466 * C1313) * C3040 +
           (C214 * C2553 - C19466 * C2671) * C3084 +
           (C214 * C2727 - C19466 * C2836) * C3041 +
           (C214 * C3860 - C19466 * C3954) * C3085 +
           (C214 * C3998 - C19466 * C4083) * C3042) *
              C19382 * C1055 +
          ((C19466 * C1172 - C214 * C1060) * C3083 +
           (C19466 * C1316 - C214 * C1222) * C3040 +
           (C19466 * C3955 - C214 * C3861) * C3084 +
           (C19466 * C4084 - C214 * C3999) * C3041 +
           (C19466 * C3956 - C214 * C3862) * C3085 +
           (C19466 * C4085 - C214 * C4000) * C3042) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C214 +
           (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
            C79 * C924) *
               C19466) *
              C19455 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C214 +
           (C77 * C925 - C87 * C919 + C78 * C926 - C89 * C920 + C79 * C927 -
            C91 * C921) *
               C19466) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C214 +
           (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
            C79 * C451) *
               C19466) *
              C19455 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C214 +
           (C77 * C450 - C87 * C445 + C78 * C451 - C89 * C446 + C79 * C452 -
            C91 * C447) *
               C19466) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C1054 +
          ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
            C91 * C1057 - C79 * C1063) *
               C214 +
           (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
            C91 * C1359 - C79 * C1365) *
               C19466) *
              C19455 * C1055 +
          ((C77 * C1069 - C87 * C1060 + C78 * C1071 - C89 * C1061 +
            C79 * C1073 - C91 * C1062) *
               C214 +
           (C77 * C1366 - C87 * C1360 + C78 * C1367 - C89 * C1361 +
            C79 * C1368 - C91 * C1362) *
               C19466) *
              C19455 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C19382 * C626 - C3043 * C618) * C214 +
            (C19382 * C922 - C3043 * C916) * C19466) *
               C3041 +
           ((C19382 * C628 - C3043 * C619) * C214 +
            (C19382 * C925 - C3043 * C919) * C19466) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C3043 * C94 - C19382 * C100) * C214 +
            (C3043 * C444 - C19382 * C449) * C19466) *
               C3040 +
           ((C3043 * C617 - C19382 * C624) * C214 +
            (C3043 * C917 - C19382 * C923) * C19466) *
               C3041 +
           ((C3043 * C620 - C19382 * C630) * C214 +
            (C3043 * C920 - C19382 * C926) * C19466) *
               C3042) *
              C19430 * C19416 * C85 +
          (((C19382 * C102 - C3043 * C95) * C214 +
            (C19382 * C450 - C3043 * C445) * C19466) *
               C3040 +
           ((C19382 * C622 - C3043 * C616) * C214 +
            (C19382 * C924 - C3043 * C918) * C19466) *
               C3041 +
           ((C19382 * C632 - C3043 * C621) * C214 +
            (C19382 * C927 - C3043 * C921) * C19466) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C19430 * C612 +
          (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
           ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
           ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
              C19430 * C613 +
          (C3721 * C3040 +
           ((C3578 - C3577) * C214 + (C3718 - C3717) * C19466) * C3041 +
           ((C19382 * C3397 - C3043 * C3394) * C214 +
            (C19382 * C3710 - C3043 * C3708) * C19466) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C1054 +
          (((C3043 * C1059 - C19382 * C1067) * C214 +
            (C3043 * C1357 - C19382 * C1363) * C19466) *
               C3040 +
           ((C3043 * C2553 - C19382 * C2556) * C214 +
            (C3043 * C2889 - C19382 * C2892) * C19466) *
               C3041 +
           ((C3043 * C3860 - C19382 * C3863) * C214 +
            (C3043 * C4124 - C19382 * C4127) * C19466) *
               C3042) *
              C1055 +
          (((C19382 * C1069 - C3043 * C1060) * C214 +
            (C19382 * C1366 - C3043 * C1360) * C19466) *
               C3040 +
           ((C19382 * C3865 - C3043 * C3861) * C214 +
            (C19382 * C4128 - C3043 * C4125) * C19466) *
               C3041 +
           ((C19382 * C3867 - C3043 * C3862) * C214 +
            (C19382 * C4129 - C3043 * C4126) * C19466) *
               C3042) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C612 +
          (((C151 * C618 - C19455 * C678) * C214 +
            (C151 * C916 - C19455 * C966) * C19466) *
               C77 +
           ((C151 * C617 - C19455 * C679) * C214 +
            (C151 * C917 - C19455 * C967) * C19466) *
               C78 +
           ((C151 * C616 - C19455 * C680) * C214 +
            (C151 * C918 - C19455 * C968) * C19466) *
               C79) *
              C19430 * C613 +
          (((C19455 * C681 - C151 * C619) * C214 +
            (C19455 * C969 - C151 * C919) * C19466) *
               C77 +
           ((C19455 * C682 - C151 * C620) * C214 +
            (C19455 * C970 - C151 * C920) * C19466) *
               C78 +
           ((C19455 * C683 - C151 * C621) * C214 +
            (C19455 * C971 - C151 * C921) * C19466) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C19416 * C84 +
          (((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
           ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
           ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
              C19430 * C19416 * C85 +
          (C506 * C77 + ((C172 - C171) * C214 + (C503 - C502) * C19466) * C78 +
           ((C19455 * C156 - C151 * C97) * C214 +
            (C19455 * C495 - C151 * C447) * C19466) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C1054 +
          (((C151 * C1059 - C19455 * C1119) * C214 +
            (C151 * C1357 - C19455 * C1407) * C19466) *
               C77 +
           ((C151 * C1058 - C19455 * C1120) * C214 +
            (C151 * C1358 - C19455 * C1408) * C19466) *
               C78 +
           ((C151 * C1057 - C19455 * C1121) * C214 +
            (C151 * C1359 - C19455 * C1409) * C19466) *
               C79) *
              C1055 +
          (((C19455 * C1122 - C151 * C1060) * C214 +
            (C19455 * C1410 - C151 * C1360) * C19466) *
               C77 +
           ((C19455 * C1123 - C151 * C1061) * C214 +
            (C19455 * C1411 - C151 * C1361) * C19466) *
               C78 +
           ((C19455 * C1124 - C151 * C1062) * C214 +
            (C19455 * C1412 - C151 * C1362) * C19466) *
               C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C214 +
           (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
            C3085 * C920 - C3042 * C970) *
               C19466) *
              C19382 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C214 +
           (C3040 * C493 - C3083 * C445 + C3041 * C968 - C3084 * C918 +
            C3042 * C971 - C3085 * C921) *
               C19466) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C214 +
           (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
            C3085 * C3707 - C3042 * C3759) *
               C19466) *
              C19382 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C214 +
           (C3040 * C969 - C3083 * C919 + C3041 * C3759 - C3084 * C3707 +
            C3042 * C3760 - C3085 * C3708) *
               C19466) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C1054 +
          ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
            C3085 * C3860 - C3042 * C3910) *
               C214 +
           (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
            C3085 * C4124 - C3042 * C4168) *
               C19466) *
              C19382 * C1055 +
          ((C3040 * C1122 - C3083 * C1060 + C3041 * C3911 - C3084 * C3861 +
            C3042 * C3912 - C3085 * C3862) *
               C214 +
           (C3040 * C1410 - C3083 * C1360 + C3041 * C4169 - C3084 * C4125 +
            C3042 * C4170 - C3085 * C4126) *
               C19466) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C612 -
          ((C214 * C730 - C544 * C616 - C214 * C918 + C19466 * C1010) * C19455 *
               C79 +
           (C214 * C729 - C544 * C617 - C214 * C917 + C19466 * C1011) * C19455 *
               C78 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C19455 *
               C77) *
              C19430 * C613 +
          ((C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C19455 *
               C77 +
           (C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C19455 *
               C78 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C19455 *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C19416 * C84 -
          (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C19416 * C85 +
          (C573 * C77 + C574 * C78 +
           (C214 * C219 - C544 * C97 - C214 * C447 + C19466 * C549) * C19455 *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C1054 -
          ((C214 * C1171 - C544 * C1057 - C214 * C1359 + C19466 * C1451) *
               C19455 * C79 +
           (C214 * C1170 - C544 * C1058 - C214 * C1358 + C19466 * C1452) *
               C19455 * C78 +
           (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
               C19455 * C77) *
              C1055 +
          ((C214 * C1172 - C544 * C1060 - C214 * C1360 + C19466 * C1454) *
               C19455 * C77 +
           (C214 * C1173 - C544 * C1061 - C214 * C1361 + C19466 * C1455) *
               C19455 * C78 +
           (C214 * C1174 - C544 * C1062 - C214 * C1362 + C19466 * C1456) *
               C19455 * C79) *
              C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C3041 +
           (C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C3042) *
              C19382 * C19430 * C19416 * C84 -
          ((C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C3042 +
           C1979 * C3041 + C569 * C3040) *
              C19382 * C19430 * C19416 * C85 +
          (C570 * C3040 + C1978 * C3041 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C19430 * C612 -
          (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
              C613 +
          (C3821 * C3040 + C3822 * C3041 +
           (C214 * C3506 - C544 * C3394 - C214 * C3708 + C19466 * C3800) *
               C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C1054 -
          ((C214 * C3954 - C544 * C3860 - C214 * C4124 + C19466 * C4209) *
               C3042 +
           (C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
               C3041 +
           (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
               C3040) *
              C19382 * C1055 +
          ((C214 * C1172 - C544 * C1060 - C214 * C1360 + C19466 * C1454) *
               C3040 +
           (C214 * C3955 - C544 * C3861 - C214 * C4125 + C19466 * C4210) *
               C3041 +
           (C214 * C3956 - C544 * C3862 - C214 * C4126 + C19466 * C4211) *
               C3042) *
              C19382 * C1056) *
         C19416 * C19404) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
            C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
            C91 * C103 + C79 * C110) *
               C19466 * C19455 * C2031 -
           (C91 * C1063 - C92 * C1057 - C91 * C1064 + C79 * C1075 +
            C89 * C1065 - C90 * C1058 - C89 * C1066 + C78 * C1076 +
            C87 * C1067 - C88 * C1059 - C87 * C1068 + C77 * C1077) *
               C19466 * C19455 * C2032) *
              C19416 * C1509 +
          ((C87 * C1065 - C88 * C1058 - C87 * C1066 + C77 * C1076 +
            C89 * C1063 - C90 * C1057 - C89 * C1064 + C78 * C1075 +
            C91 * C2034 - C92 * C2033 - C91 * C2035 + C79 * C2036) *
               C19466 * C19455 * C2032 -
           (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
            C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
            C87 * C101 + C77 * C109) *
               C19466 * C19455 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
                C3040 +
            C3423 * C3041 + C3424 * C3042) *
               C2031 -
           ((C3043 * C3863 - C3044 * C3860 - C3043 * C3864 + C19382 * C3869) *
                C19466 * C3042 +
            (C3043 * C2556 - C3044 * C2553 - C3043 * C2557 + C19382 * C2562) *
                C19466 * C3041 +
            (C3043 * C1067 - C3044 * C1059 - C3043 * C1068 + C19382 * C1077) *
                C19466 * C3040) *
               C2032) *
              C19416 * C1509 +
          (((C3043 * C1065 - C3044 * C1058 - C3043 * C1066 + C19382 * C1076) *
                C19466 * C3040 +
            (C3043 * C2558 - C3044 * C2554 - C3043 * C2559 + C19382 * C2563) *
                C19466 * C3041 +
            (C3043 * C4770 - C3044 * C4769 - C3043 * C4771 + C19382 * C4772) *
                C19466 * C3042) *
               C2032 -
           (C4282 * C3042 + C4281 * C3041 +
            (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
                C19466 * C3040) *
               C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C87 +
            (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
            (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
               C19466 * C2031 +
           ((C151 * C1059 - C19455 * C1119) * C87 +
            (C151 * C1068 - C19455 * C1125) * C77 + (C2090 - C2091) * C89 +
            (C2092 - C2093) * C78 + (C2094 - C2095) * C91 +
            (C2096 - C2097) * C79) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
            (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
               C19466 * C2031 +
           ((C2091 - C2090) * C87 + (C2093 - C2092) * C77 +
            (C2095 - C2094) * C89 + (C2097 - C2096) * C78 +
            (C19455 * C2087 - C151 * C2033) * C91 +
            (C19455 * C2088 - C151 * C2035) * C79) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C3043 +
            (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
             C3042 * C687 - C3085 * C629) *
                C19382) *
               C19466 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C3043 +
            (C3083 * C1068 - C3040 * C1125 + C3084 * C2557 - C3041 * C2618 +
             C3085 * C3864 - C3042 * C3913) *
                C19382) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C3043 +
            (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
             C3085 * C631 - C3042 * C688) *
                C19382) *
               C19466 * C2031 +
           ((C3040 * C1120 - C3083 * C1058 + C3041 * C2616 - C3084 * C2554 +
             C3042 * C4823 - C3085 * C4769) *
                C3043 +
            (C3040 * C1126 - C3083 * C1066 + C3041 * C2619 - C3084 * C2559 +
             C3042 * C4824 - C3085 * C4771) *
                C19382) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C87 +
            (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
            (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
               C19455 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C87 +
            (C214 * C1068 - C19466 * C1175) * C77 + (C2150 - C2151) * C89 +
            (C2152 - C2153) * C78 + (C2154 - C2155) * C91 +
            (C2156 - C2157) * C79) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
            (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
               C19455 * C2031 +
           ((C2151 - C2150) * C87 + (C2153 - C2152) * C77 +
            (C2155 - C2154) * C89 + (C2157 - C2156) * C78 +
            (C19466 * C2147 - C214 * C2033) * C91 +
            (C19466 * C2148 - C214 * C2035) * C79) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C3043 +
             (C19466 * C220 - C214 * C99) * C19382) *
                C3040 +
            ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
            C3526 * C3042) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C3043 +
             (C214 * C1068 - C19466 * C1175) * C19382) *
                C3040 +
            ((C214 * C2553 - C19466 * C2671) * C3043 +
             (C214 * C2557 - C19466 * C2674) * C19382) *
                C3041 +
            ((C214 * C3860 - C19466 * C3954) * C3043 +
             (C214 * C3864 - C19466 * C3957) * C19382) *
                C3042) *
               C2032) *
              C19416 * C1509 +
          ((((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
            ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
            ((C4387 - C4388) * C3043 + (C4389 - C4390) * C19382) * C3042) *
               C2031 +
           (((C2151 - C2150) * C3043 + (C2153 - C2152) * C19382) * C3040 +
            ((C19466 * C2672 - C214 * C2554) * C3043 +
             (C19466 * C2675 - C214 * C2559) * C19382) *
                C3041 +
            ((C19466 * C4875 - C214 * C4769) * C3043 +
             (C19466 * C4876 - C214 * C4771) * C19382) *
                C3042) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C151 +
            (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
             C91 * C279) *
                C19455) *
               C19466 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C151 +
            (C87 * C1219 - C77 * C1225 + C89 * C1220 - C78 * C1226 +
             C91 * C1221 - C79 * C1227) *
                C19455) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C151 +
            (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
             C79 * C285) *
                C19455) *
               C19466 * C2031 +
           ((C77 * C1065 - C87 * C1058 + C78 * C1063 - C89 * C1057 +
             C79 * C2034 - C91 * C2033) *
                C151 +
            (C77 * C1226 - C87 * C1220 + C78 * C1227 - C89 * C1221 +
             C79 * C2208 - C91 * C2207) *
                C19455) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C3083 +
            (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
            (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
               C19466 * C2031 +
           ((C3043 * C1059 - C19382 * C1067) * C3083 +
            (C3043 * C1219 - C19382 * C1225) * C3040 +
            (C3043 * C2553 - C19382 * C2556) * C3084 +
            (C3043 * C2727 - C19382 * C2730) * C3041 +
            (C3043 * C3860 - C19382 * C3863) * C3085 +
            (C3043 * C3998 - C19382 * C4001) * C3042) *
               C19466 * C2032) *
              C19416 * C1509 +
          (((C3043 * C94 - C19382 * C100) * C3083 +
            (C3043 * C278 - C19382 * C283) * C3040 + (C4443 - C4444) * C3084 +
            (C4445 - C4446) * C3041 + (C4447 - C4448) * C3085 +
            (C4449 - C4450) * C3042) *
               C19466 * C2031 +
           ((C19382 * C1065 - C3043 * C1058) * C3083 +
            (C19382 * C1226 - C3043 * C1220) * C3040 +
            (C19382 * C2558 - C3043 * C2554) * C3084 +
            (C19382 * C2731 - C3043 * C2728) * C3041 +
            (C19382 * C4770 - C3043 * C4769) * C3085 +
            (C19382 * C4928 - C3043 * C4927) * C3042) *
               C19466 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
            C350 * C78 + C351 * C79) *
               C19466 * C2031 -
           (C2273 * C79 + C2274 * C78 +
            (C151 * C1119 - C325 * C1059 - C151 * C1219 + C19455 * C1271) *
                C77) *
               C19466 * C2032) *
              C19416 * C1509 +
          ((C2274 * C77 + C2273 * C78 +
            (C151 * C2087 - C325 * C2033 - C151 * C2207 + C19455 * C2259) *
                C79) *
               C19466 * C2032 -
           (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
            C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
            C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
               C19382 * C19466 * C2031 -
           (C3085 * C3910 - C3202 * C3860 - C3085 * C3998 + C3042 * C4042 +
            C3084 * C2615 - C3201 * C2553 - C3084 * C2727 + C3041 * C2783 +
            C3083 * C1119 - C3200 * C1059 - C3083 * C1219 + C3040 * C1271) *
               C19382 * C19466 * C2032) *
              C19416 * C1509 +
          ((C3083 * C1120 - C3200 * C1058 - C3083 * C1220 + C3040 * C1270 +
            C3084 * C2616 - C3201 * C2554 - C3084 * C2728 + C3041 * C2784 +
            C3085 * C4823 - C3202 * C4769 - C3085 * C4927 + C3042 * C4979) *
               C19382 * C19466 * C2032 -
           (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
            C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
            C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
               C19382 * C19466 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19466 * C215 - C214 * C93) * C151 +
             (C19466 * C390 - C214 * C277) * C19455) *
                C77 +
            ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 +
            C405 * C79) *
               C2031 +
           (((C214 * C1059 - C19466 * C1169) * C151 +
             (C214 * C1219 - C19466 * C1313) * C19455) *
                C77 +
            ((C2150 - C2151) * C151 + (C2326 - C2327) * C19455) * C78 +
            ((C2154 - C2155) * C151 + (C2328 - C2329) * C19455) * C79) *
               C2032) *
              C19416 * C1509 +
          ((((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
            ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
            ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
               C2031 +
           (((C2151 - C2150) * C151 + (C2327 - C2326) * C19455) * C77 +
            ((C2155 - C2154) * C151 + (C2329 - C2328) * C19455) * C78 +
            ((C19466 * C2147 - C214 * C2033) * C151 +
             (C19466 * C2324 - C214 * C2207) * C19455) *
                C79) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3083 +
            (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
            (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
               C19382 * C2031 +
           ((C214 * C1059 - C19466 * C1169) * C3083 +
            (C214 * C1219 - C19466 * C1313) * C3040 +
            (C214 * C2553 - C19466 * C2671) * C3084 +
            (C214 * C2727 - C19466 * C2836) * C3041 +
            (C214 * C3860 - C19466 * C3954) * C3085 +
            (C214 * C3998 - C19466 * C4083) * C3042) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C227 - C226) * C3083 + (C397 - C396) * C3040 +
            (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
            (C4387 - C4388) * C3085 + (C4553 - C4554) * C3042) *
               C19382 * C2031 +
           ((C2151 - C2150) * C3083 + (C2327 - C2326) * C3040 +
            (C19466 * C2672 - C214 * C2554) * C3084 +
            (C19466 * C2837 - C214 * C2728) * C3041 +
            (C19466 * C4875 - C214 * C4769) * C3085 +
            (C19466 * C5030 - C214 * C4927) * C3042) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
             C91 * C95) *
                C214 +
            (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
             C91 * C445) *
                C19466) *
               C19455 * C2031 +
           ((C87 * C1059 - C77 * C1067 + C89 * C1058 - C78 * C1065 +
             C91 * C1057 - C79 * C1063) *
                C214 +
            (C87 * C1357 - C77 * C1363 + C89 * C1358 - C78 * C1364 +
             C91 * C1359 - C79 * C1365) *
                C19466) *
               C19455 * C2032) *
              C19416 * C1509 +
          (((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
             C79 * C104) *
                C214 +
            (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
             C79 * C451) *
                C19466) *
               C19455 * C2031 +
           ((C77 * C1065 - C87 * C1058 + C78 * C1063 - C89 * C1057 +
             C79 * C2034 - C91 * C2033) *
                C214 +
            (C77 * C1364 - C87 * C1358 + C78 * C1365 - C89 * C1359 +
             C79 * C2380 - C91 * C2379) *
                C19466) *
               C19455 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19382 * C98 - C3043 * C93) * C214 +
             (C19382 * C448 - C3043 * C443) * C19466) *
                C3040 +
            ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
            C3721 * C3042) *
               C2031 +
           (((C3043 * C1059 - C19382 * C1067) * C214 +
             (C3043 * C1357 - C19382 * C1363) * C19466) *
                C3040 +
            ((C3043 * C2553 - C19382 * C2556) * C214 +
             (C3043 * C2889 - C19382 * C2892) * C19466) *
                C3041 +
            ((C3043 * C3860 - C19382 * C3863) * C214 +
             (C3043 * C4124 - C19382 * C4127) * C19466) *
                C3042) *
               C2032) *
              C19416 * C1509 +
          ((((C3043 * C94 - C19382 * C100) * C214 +
             (C3043 * C444 - C19382 * C449) * C19466) *
                C3040 +
            ((C4443 - C4444) * C214 + (C4607 - C4608) * C19466) * C3041 +
            ((C4447 - C4448) * C214 + (C4609 - C4610) * C19466) * C3042) *
               C2031 +
           (((C19382 * C1065 - C3043 * C1058) * C214 +
             (C19382 * C1364 - C3043 * C1358) * C19466) *
                C3040 +
            ((C19382 * C2558 - C3043 * C2554) * C214 +
             (C19382 * C2893 - C3043 * C2890) * C19466) *
                C3041 +
            ((C19382 * C4770 - C3043 * C4769) * C214 +
             (C19382 * C5082 - C3043 * C5081) * C19466) *
                C3042) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C19455 * C152 - C151 * C93) * C214 +
             (C19455 * C491 - C151 * C443) * C19466) *
                C77 +
            ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 +
            C506 * C79) *
               C2031 +
           (((C151 * C1059 - C19455 * C1119) * C214 +
             (C151 * C1357 - C19455 * C1407) * C19466) *
                C77 +
            ((C2090 - C2091) * C214 + (C2433 - C2434) * C19466) * C78 +
            ((C2094 - C2095) * C214 + (C2435 - C2436) * C19466) * C79) *
               C2032) *
              C19416 * C1509 +
          ((((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
            ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
            ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
               C2031 +
           (((C2091 - C2090) * C214 + (C2434 - C2433) * C19466) * C77 +
            ((C2095 - C2094) * C214 + (C2436 - C2435) * C19466) * C78 +
            ((C19455 * C2087 - C151 * C2033) * C214 +
             (C19455 * C2431 - C151 * C2379) * C19466) *
                C79) *
               C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
             C3042 * C681 - C3085 * C619) *
                C214 +
            (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
             C3042 * C969 - C3085 * C919) *
                C19466) *
               C19382 * C2031 +
           ((C3083 * C1059 - C3040 * C1119 + C3084 * C2553 - C3041 * C2615 +
             C3085 * C3860 - C3042 * C3910) *
                C214 +
            (C3083 * C1357 - C3040 * C1407 + C3084 * C2889 - C3041 * C2945 +
             C3085 * C4124 - C3042 * C4168) *
                C19466) *
               C19382 * C2032) *
              C19416 * C1509 +
          (((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
             C3085 * C620 - C3042 * C682) *
                C214 +
            (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
             C3085 * C920 - C3042 * C970) *
                C19466) *
               C19382 * C2031 +
           ((C3040 * C1120 - C3083 * C1058 + C3041 * C2616 - C3084 * C2554 +
             C3042 * C4823 - C3085 * C4769) *
                C214 +
            (C3040 * C1408 - C3083 * C1358 + C3041 * C2946 - C3084 * C2890 +
             C3042 * C5133 - C3085 * C5081) *
                C19466) *
               C19382 * C2032) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
                C77 +
            C572 * C78 + C573 * C79) *
               C2031 -
           (C2502 * C79 + C2503 * C78 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C19455 * C77) *
               C2032) *
              C19416 * C1509 +
          ((C2503 * C77 + C2502 * C78 +
            (C214 * C2147 - C544 * C2033 - C214 * C2379 + C19466 * C2486) *
                C19455 * C79) *
               C2032 -
           (C574 * C79 + C573 * C78 + C572 * C77) * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
            C3820 * C3041 + C3821 * C3042) *
               C19382 * C2031 -
           ((C214 * C3954 - C544 * C3860 - C214 * C4124 + C19466 * C4209) *
                C3042 +
            (C214 * C2671 - C544 * C2553 - C214 * C2889 + C19466 * C2998) *
                C3041 +
            (C214 * C1169 - C544 * C1059 - C214 * C1357 + C19466 * C1453) *
                C3040) *
               C19382 * C2032) *
              C19416 * C1509 +
          ((C2501 * C3040 +
            (C214 * C2672 - C544 * C2554 - C214 * C2890 + C19466 * C2999) *
                C3041 +
            (C214 * C4875 - C544 * C4769 - C214 * C5081 + C19466 * C5184) *
                C3042) *
               C19382 * C2032 -
           (C4719 * C3042 + C1979 * C3041 + C569 * C3040) * C19382 * C2031) *
              C19416 * C1510)) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C19416 * C84 -
          (C91 * C104 - C92 * C96 - C91 * C105 + C79 * C111 + C89 * C102 -
           C90 * C95 - C89 * C103 + C78 * C110 + C87 * C100 - C88 * C94 -
           C87 * C101 + C77 * C109) *
              C19466 * C19455 * C19430 * C19416 * C85 +
          (C87 * C102 - C88 * C95 - C87 * C103 + C77 * C110 + C89 * C104 -
           C90 * C96 - C89 * C105 + C78 * C111 + C91 * C106 - C92 * C97 -
           C91 * C107 + C79 * C112) *
              C19466 * C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C87 * C98 - C88 * C93 - C87 * C99 + C77 * C108 + C89 * C100 -
           C90 * C94 - C89 * C101 + C78 * C109 + C91 * C102 - C92 * C95 -
           C91 * C103 + C79 * C110) *
              C19466 * C19455 * C19430 * C612 -
          (C91 * C622 - C92 * C616 - C91 * C623 + C79 * C634 + C89 * C624 -
           C90 * C617 - C89 * C625 + C78 * C635 + C87 * C626 - C88 * C618 -
           C87 * C627 + C77 * C636) *
              C19466 * C19455 * C19430 * C613 +
          (C87 * C628 - C88 * C619 - C87 * C629 + C77 * C637 + C89 * C630 -
           C90 * C620 - C89 * C631 + C78 * C638 + C91 * C632 - C92 * C621 -
           C91 * C633 + C79 * C639) *
              C19466 * C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           (C3043 * C626 - C3044 * C618 - C3043 * C627 + C19382 * C636) *
               C19466 * C3041 +
           (C3043 * C628 - C3044 * C619 - C3043 * C629 + C19382 * C637) *
               C19466 * C3042) *
              C19430 * C19416 * C84 -
          ((C3043 * C630 - C3044 * C620 - C3043 * C631 + C19382 * C638) *
               C19466 * C3042 +
           (C3043 * C624 - C3044 * C617 - C3043 * C625 + C19382 * C635) *
               C19466 * C3041 +
           (C3043 * C100 - C3044 * C94 - C3043 * C101 + C19382 * C109) *
               C19466 * C3040) *
              C19430 * C19416 * C85 +
          ((C3043 * C102 - C3044 * C95 - C3043 * C103 + C19382 * C110) *
               C19466 * C3040 +
           (C3043 * C622 - C3044 * C616 - C3043 * C623 + C19382 * C634) *
               C19466 * C3041 +
           (C3043 * C632 - C3044 * C621 - C3043 * C633 + C19382 * C639) *
               C19466 * C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3043 * C98 - C3044 * C93 - C3043 * C99 + C19382 * C108) * C19466 *
               C3040 +
           C3423 * C3041 + C3424 * C3042) *
              C19430 * C612 -
          (C3425 * C3042 + C3424 * C3041 + C3423 * C3040) * C19430 * C613 +
          (C3424 * C3040 + C3425 * C3041 +
           (C3043 * C3397 - C3044 * C3394 - C3043 * C3398 + C19382 * C3400) *
               C19466 * C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C19416 * C84 +
          ((C164 - C163) * C87 + (C166 - C165) * C77 + (C168 - C167) * C89 +
           (C170 - C169) * C78 + (C171 - C172) * C91 + (C173 - C174) * C79) *
              C19466 * C19430 * C19416 * C85 +
          (C175 * C87 + C176 * C77 + (C172 - C171) * C89 + (C174 - C173) * C78 +
           (C19455 * C156 - C151 * C97) * C91 +
           (C19455 * C161 - C151 * C107) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19455 * C152 - C151 * C93) * C87 +
           (C19455 * C157 - C151 * C99) * C77 + (C163 - C164) * C89 +
           (C165 - C166) * C78 + C175 * C91 + C176 * C79) *
              C19466 * C19430 * C612 +
          ((C151 * C618 - C19455 * C678) * C87 +
           (C151 * C627 - C19455 * C684) * C77 +
           (C151 * C617 - C19455 * C679) * C89 +
           (C151 * C625 - C19455 * C685) * C78 +
           (C151 * C616 - C19455 * C680) * C91 +
           (C151 * C623 - C19455 * C686) * C79) *
              C19466 * C19430 * C613 +
          ((C19455 * C681 - C151 * C619) * C87 +
           (C19455 * C687 - C151 * C629) * C77 +
           (C19455 * C682 - C151 * C620) * C89 +
           (C19455 * C688 - C151 * C631) * C78 +
           (C19455 * C683 - C151 * C621) * C91 +
           (C19455 * C689 - C151 * C633) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C3043 +
           (C3083 * C101 - C3040 * C158 + C3084 * C625 - C3041 * C685 +
            C3085 * C631 - C3042 * C688) *
               C19382) *
              C19466 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C3043 +
           (C3040 * C159 - C3083 * C103 + C3041 * C686 - C3084 * C623 +
            C3042 * C689 - C3085 * C633) *
               C19382) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C3043 +
           (C3040 * C157 - C3083 * C99 + C3041 * C684 - C3084 * C627 +
            C3042 * C687 - C3085 * C629) *
               C19382) *
              C19466 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C3043 +
           (C3083 * C627 - C3040 * C684 + C3084 * C629 - C3041 * C687 +
            C3085 * C3396 - C3042 * C3465) *
               C19382) *
              C19466 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C3043 +
           (C3040 * C687 - C3083 * C629 + C3041 * C3465 - C3084 * C3396 +
            C3042 * C3466 - C3085 * C3398) *
               C19382) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C19416 * C84 +
          ((C227 - C226) * C87 + (C229 - C228) * C77 + (C231 - C230) * C89 +
           (C233 - C232) * C78 + (C234 - C235) * C91 + (C236 - C237) * C79) *
              C19455 * C19430 * C19416 * C85 +
          (C238 * C87 + C239 * C77 + (C235 - C234) * C89 + (C237 - C236) * C78 +
           (C19466 * C219 - C214 * C97) * C91 +
           (C19466 * C224 - C214 * C107) * C79) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C87 +
           (C19466 * C220 - C214 * C99) * C77 + (C226 - C227) * C89 +
           (C228 - C229) * C78 + C238 * C91 + C239 * C79) *
              C19455 * C19430 * C612 +
          ((C214 * C618 - C19466 * C728) * C87 +
           (C214 * C627 - C19466 * C734) * C77 +
           (C214 * C617 - C19466 * C729) * C89 +
           (C214 * C625 - C19466 * C735) * C78 +
           (C214 * C616 - C19466 * C730) * C91 +
           (C214 * C623 - C19466 * C736) * C79) *
              C19455 * C19430 * C613 +
          ((C19466 * C731 - C214 * C619) * C87 +
           (C19466 * C737 - C214 * C629) * C77 +
           (C19466 * C732 - C214 * C620) * C89 +
           (C19466 * C738 - C214 * C631) * C78 +
           (C19466 * C733 - C214 * C621) * C91 +
           (C19466 * C739 - C214 * C633) * C79) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C19466 * C728 - C214 * C618) * C3043 +
            (C19466 * C734 - C214 * C627) * C19382) *
               C3041 +
           ((C19466 * C731 - C214 * C619) * C3043 +
            (C19466 * C737 - C214 * C629) * C19382) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C3043 + (C229 - C228) * C19382) * C3040 +
           ((C1628 - C1629) * C3043 + (C1630 - C1631) * C19382) * C3041 +
           ((C214 * C620 - C19466 * C732) * C3043 +
            (C214 * C631 - C19466 * C738) * C19382) *
               C3042) *
              C19430 * C19416 * C85 +
          ((C238 * C3043 + C239 * C19382) * C3040 +
           ((C1633 - C1632) * C3043 + (C1635 - C1634) * C19382) * C3041 +
           ((C19466 * C733 - C214 * C621) * C3043 +
            (C19466 * C739 - C214 * C633) * C19382) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C3043 +
            (C19466 * C220 - C214 * C99) * C19382) *
               C3040 +
           ((C3510 - C3511) * C3043 + (C3512 - C3513) * C19382) * C3041 +
           C3526 * C3042) *
              C19430 * C612 +
          (((C3511 - C3510) * C3043 + (C3513 - C3512) * C19382) * C3040 +
           ((C3515 - C3514) * C3043 + (C3517 - C3516) * C19382) * C3041 +
           ((C3518 - C3519) * C3043 + (C3520 - C3521) * C19382) * C3042) *
              C19430 * C613 +
          (C3526 * C3040 +
           ((C3519 - C3518) * C3043 + (C3521 - C3520) * C19382) * C3041 +
           ((C19466 * C3506 - C214 * C3394) * C3043 +
            (C19466 * C3508 - C214 * C3398) * C19382) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C151 +
           (C87 * C278 - C77 * C283 + C89 * C279 - C78 * C284 + C91 * C280 -
            C79 * C285) *
               C19455) *
              C19466 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C151 +
           (C77 * C284 - C87 * C279 + C78 * C285 - C89 * C280 + C79 * C286 -
            C91 * C281) *
               C19455) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C151 +
           (C77 * C282 - C87 * C277 + C78 * C283 - C89 * C278 + C79 * C284 -
            C91 * C279) *
               C19455) *
              C19466 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C151 +
           (C87 * C778 - C77 * C784 + C89 * C779 - C78 * C785 + C91 * C780 -
            C79 * C786) *
               C19455) *
              C19466 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C151 +
           (C77 * C787 - C87 * C781 + C78 * C788 - C89 * C782 + C79 * C789 -
            C91 * C783) *
               C19455) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 +
           (C19382 * C626 - C3043 * C618) * C3084 +
           (C19382 * C784 - C3043 * C778) * C3041 +
           (C19382 * C628 - C3043 * C619) * C3085 +
           (C19382 * C787 - C3043 * C781) * C3042) *
              C19466 * C19430 * C19416 * C84 +
          ((C3043 * C94 - C19382 * C100) * C3083 +
           (C3043 * C278 - C19382 * C283) * C3040 +
           (C3043 * C617 - C19382 * C624) * C3084 +
           (C3043 * C779 - C19382 * C785) * C3041 +
           (C3043 * C620 - C19382 * C630) * C3085 +
           (C3043 * C782 - C19382 * C788) * C3042) *
              C19466 * C19430 * C19416 * C85 +
          ((C19382 * C102 - C3043 * C95) * C3083 +
           (C19382 * C284 - C3043 * C279) * C3040 +
           (C19382 * C622 - C3043 * C616) * C3084 +
           (C19382 * C786 - C3043 * C780) * C3041 +
           (C19382 * C632 - C3043 * C621) * C3085 +
           (C19382 * C789 - C3043 * C783) * C3042) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19382 * C98 - C3043 * C93) * C3083 +
           (C19382 * C282 - C3043 * C277) * C3040 + (C3569 - C3570) * C3084 +
           (C3571 - C3572) * C3041 + C3581 * C3085 + C3582 * C3042) *
              C19466 * C19430 * C612 +
          ((C3570 - C3569) * C3083 + (C3572 - C3571) * C3040 +
           (C3574 - C3573) * C3084 + (C3576 - C3575) * C3041 +
           (C3577 - C3578) * C3085 + (C3579 - C3580) * C3042) *
              C19466 * C19430 * C613 +
          (C3581 * C3083 + C3582 * C3040 + (C3578 - C3577) * C3084 +
           (C3580 - C3579) * C3041 + (C19382 * C3397 - C3043 * C3394) * C3085 +
           (C19382 * C3567 - C3043 * C3565) * C3042) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C19416 * C84 -
          (C352 * C79 + C351 * C78 + C350 * C77) * C19466 * C19430 * C19416 *
              C85 +
          (C351 * C77 + C352 * C78 +
           (C151 * C156 - C325 * C97 - C151 * C281 + C19455 * C330) * C79) *
              C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C151 * C152 - C325 * C93 - C151 * C277 + C19455 * C326) * C77 +
           C350 * C78 + C351 * C79) *
              C19466 * C19430 * C612 -
          ((C151 * C680 - C325 * C616 - C151 * C780 + C19455 * C828) * C79 +
           (C151 * C679 - C325 * C617 - C151 * C779 + C19455 * C829) * C78 +
           (C151 * C678 - C325 * C618 - C151 * C778 + C19455 * C830) * C77) *
              C19466 * C19430 * C613 +
          ((C151 * C681 - C325 * C619 - C151 * C781 + C19455 * C831) * C77 +
           (C151 * C682 - C325 * C620 - C151 * C782 + C19455 * C832) * C78 +
           (C151 * C683 - C325 * C621 - C151 * C783 + C19455 * C833) * C79) *
              C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C19416 * C84 -
          (C3085 * C682 - C3202 * C620 - C3085 * C782 + C3042 * C832 +
           C3084 * C679 - C3201 * C617 - C3084 * C779 + C3041 * C829 +
           C3083 * C153 - C3200 * C94 - C3083 * C278 + C3040 * C327) *
              C19382 * C19466 * C19430 * C19416 * C85 +
          (C3083 * C154 - C3200 * C95 - C3083 * C279 + C3040 * C328 +
           C3084 * C680 - C3201 * C616 - C3084 * C780 + C3041 * C828 +
           C3085 * C683 - C3202 * C621 - C3085 * C783 + C3042 * C833) *
              C19382 * C19466 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C3083 * C152 - C3200 * C93 - C3083 * C277 + C3040 * C326 +
           C3084 * C678 - C3201 * C618 - C3084 * C778 + C3041 * C830 +
           C3085 * C681 - C3202 * C619 - C3085 * C781 + C3042 * C831) *
              C19382 * C19466 * C19430 * C612 -
          (C3085 * C3463 - C3202 * C3393 - C3085 * C3564 + C3042 * C3620 +
           C3084 * C681 - C3201 * C619 - C3084 * C781 + C3041 * C831 +
           C3083 * C678 - C3200 * C618 - C3083 * C778 + C3040 * C830) *
              C19382 * C19466 * C19430 * C613 +
          (C3083 * C681 - C3200 * C619 - C3083 * C781 + C3040 * C831 +
           C3084 * C3463 - C3201 * C3393 - C3084 * C3564 + C3041 * C3620 +
           C3085 * C3464 - C3202 * C3394 - C3085 * C3565 + C3042 * C3621) *
              C19382 * C19466 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C19416 * C84 +
          (((C227 - C226) * C151 + (C397 - C396) * C19455) * C77 +
           ((C231 - C230) * C151 + (C400 - C399) * C19455) * C78 +
           ((C234 - C235) * C151 + (C401 - C402) * C19455) * C79) *
              C19430 * C19416 * C85 +
          (C405 * C77 + ((C235 - C234) * C151 + (C402 - C401) * C19455) * C78 +
           ((C19466 * C219 - C214 * C97) * C151 +
            (C19466 * C394 - C214 * C281) * C19455) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19466 * C215 - C214 * C93) * C151 +
            (C19466 * C390 - C214 * C277) * C19455) *
               C77 +
           ((C226 - C227) * C151 + (C396 - C397) * C19455) * C78 + C405 * C79) *
              C19430 * C612 +
          (((C214 * C618 - C19466 * C728) * C151 +
            (C214 * C778 - C19466 * C872) * C19455) *
               C77 +
           ((C214 * C617 - C19466 * C729) * C151 +
            (C214 * C779 - C19466 * C873) * C19455) *
               C78 +
           ((C214 * C616 - C19466 * C730) * C151 +
            (C214 * C780 - C19466 * C874) * C19455) *
               C79) *
              C19430 * C613 +
          (((C19466 * C731 - C214 * C619) * C151 +
            (C19466 * C875 - C214 * C781) * C19455) *
               C77 +
           ((C19466 * C732 - C214 * C620) * C151 +
            (C19466 * C876 - C214 * C782) * C19455) *
               C78 +
           ((C19466 * C733 - C214 * C621) * C151 +
            (C19466 * C877 - C214 * C783) * C19455) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 +
           (C19466 * C728 - C214 * C618) * C3084 +
           (C19466 * C872 - C214 * C778) * C3041 +
           (C19466 * C731 - C214 * C619) * C3085 +
           (C19466 * C875 - C214 * C781) * C3042) *
              C19382 * C19430 * C19416 * C84 +
          ((C227 - C226) * C3083 + (C397 - C396) * C3040 +
           (C1628 - C1629) * C3084 + (C1804 - C1805) * C3041 +
           (C214 * C620 - C19466 * C732) * C3085 +
           (C214 * C782 - C19466 * C876) * C3042) *
              C19382 * C19430 * C19416 * C85 +
          (C238 * C3083 + C403 * C3040 + (C1633 - C1632) * C3084 +
           (C1807 - C1806) * C3041 + (C19466 * C733 - C214 * C621) * C3085 +
           (C19466 * C877 - C214 * C783) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C19466 * C215 - C214 * C93) * C3083 +
           (C19466 * C390 - C214 * C277) * C3040 + (C3510 - C3511) * C3084 +
           (C3663 - C3664) * C3041 + C3522 * C3085 + C3669 * C3042) *
              C19382 * C19430 * C612 +
          ((C3511 - C3510) * C3083 + (C3664 - C3663) * C3040 +
           (C3515 - C3514) * C3084 + (C3666 - C3665) * C3041 +
           (C3518 - C3519) * C3085 + (C3667 - C3668) * C3042) *
              C19382 * C19430 * C613 +
          (C3522 * C3083 + C3669 * C3040 + (C3519 - C3518) * C3084 +
           (C3668 - C3667) * C3041 + (C19466 * C3506 - C214 * C3394) * C3085 +
           (C19466 * C3661 - C214 * C3565) * C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C19416 * C84 +
          ((C87 * C94 - C77 * C100 + C89 * C95 - C78 * C102 + C91 * C96 -
            C79 * C104) *
               C214 +
           (C87 * C444 - C77 * C449 + C89 * C445 - C78 * C450 + C91 * C446 -
            C79 * C451) *
               C19466) *
              C19455 * C19430 * C19416 * C85 +
          ((C77 * C102 - C87 * C95 + C78 * C104 - C89 * C96 + C79 * C106 -
            C91 * C97) *
               C214 +
           (C77 * C450 - C87 * C445 + C78 * C451 - C89 * C446 + C79 * C452 -
            C91 * C447) *
               C19466) *
              C19455 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C77 * C98 - C87 * C93 + C78 * C100 - C89 * C94 + C79 * C102 -
            C91 * C95) *
               C214 +
           (C77 * C448 - C87 * C443 + C78 * C449 - C89 * C444 + C79 * C450 -
            C91 * C445) *
               C19466) *
              C19455 * C19430 * C612 +
          ((C87 * C618 - C77 * C626 + C89 * C617 - C78 * C624 + C91 * C616 -
            C79 * C622) *
               C214 +
           (C87 * C916 - C77 * C922 + C89 * C917 - C78 * C923 + C91 * C918 -
            C79 * C924) *
               C19466) *
              C19455 * C19430 * C613 +
          ((C77 * C628 - C87 * C619 + C78 * C630 - C89 * C620 + C79 * C632 -
            C91 * C621) *
               C214 +
           (C77 * C925 - C87 * C919 + C78 * C926 - C89 * C920 + C79 * C927 -
            C91 * C921) *
               C19466) *
              C19455 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C19382 * C626 - C3043 * C618) * C214 +
            (C19382 * C922 - C3043 * C916) * C19466) *
               C3041 +
           ((C19382 * C628 - C3043 * C619) * C214 +
            (C19382 * C925 - C3043 * C919) * C19466) *
               C3042) *
              C19430 * C19416 * C84 +
          (((C3043 * C94 - C19382 * C100) * C214 +
            (C3043 * C444 - C19382 * C449) * C19466) *
               C3040 +
           ((C3043 * C617 - C19382 * C624) * C214 +
            (C3043 * C917 - C19382 * C923) * C19466) *
               C3041 +
           ((C3043 * C620 - C19382 * C630) * C214 +
            (C3043 * C920 - C19382 * C926) * C19466) *
               C3042) *
              C19430 * C19416 * C85 +
          (((C19382 * C102 - C3043 * C95) * C214 +
            (C19382 * C450 - C3043 * C445) * C19466) *
               C3040 +
           ((C19382 * C622 - C3043 * C616) * C214 +
            (C19382 * C924 - C3043 * C918) * C19466) *
               C3041 +
           ((C19382 * C632 - C3043 * C621) * C214 +
            (C19382 * C927 - C3043 * C921) * C19466) *
               C3042) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19382 * C98 - C3043 * C93) * C214 +
            (C19382 * C448 - C3043 * C443) * C19466) *
               C3040 +
           ((C3569 - C3570) * C214 + (C3712 - C3713) * C19466) * C3041 +
           C3721 * C3042) *
              C19430 * C612 +
          (((C3570 - C3569) * C214 + (C3713 - C3712) * C19466) * C3040 +
           ((C3574 - C3573) * C214 + (C3716 - C3715) * C19466) * C3041 +
           ((C3577 - C3578) * C214 + (C3717 - C3718) * C19466) * C3042) *
              C19430 * C613 +
          (C3721 * C3040 +
           ((C3578 - C3577) * C214 + (C3718 - C3717) * C19466) * C3041 +
           ((C19382 * C3397 - C3043 * C3394) * C214 +
            (C19382 * C3710 - C3043 * C3708) * C19466) *
               C3042) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C19416 * C84 +
          (((C164 - C163) * C214 + (C498 - C497) * C19466) * C77 +
           ((C168 - C167) * C214 + (C501 - C500) * C19466) * C78 +
           ((C171 - C172) * C214 + (C502 - C503) * C19466) * C79) *
              C19430 * C19416 * C85 +
          (C506 * C77 + ((C172 - C171) * C214 + (C503 - C502) * C19466) * C78 +
           ((C19455 * C156 - C151 * C97) * C214 +
            (C19455 * C495 - C151 * C447) * C19466) *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C19455 * C152 - C151 * C93) * C214 +
            (C19455 * C491 - C151 * C443) * C19466) *
               C77 +
           ((C163 - C164) * C214 + (C497 - C498) * C19466) * C78 + C506 * C79) *
              C19430 * C612 +
          (((C151 * C618 - C19455 * C678) * C214 +
            (C151 * C916 - C19455 * C966) * C19466) *
               C77 +
           ((C151 * C617 - C19455 * C679) * C214 +
            (C151 * C917 - C19455 * C967) * C19466) *
               C78 +
           ((C151 * C616 - C19455 * C680) * C214 +
            (C151 * C918 - C19455 * C968) * C19466) *
               C79) *
              C19430 * C613 +
          (((C19455 * C681 - C151 * C619) * C214 +
            (C19455 * C969 - C151 * C919) * C19466) *
               C77 +
           ((C19455 * C682 - C151 * C620) * C214 +
            (C19455 * C970 - C151 * C920) * C19466) *
               C78 +
           ((C19455 * C683 - C151 * C621) * C214 +
            (C19455 * C971 - C151 * C921) * C19466) *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C19416 * C84 +
          ((C3083 * C94 - C3040 * C153 + C3084 * C617 - C3041 * C679 +
            C3085 * C620 - C3042 * C682) *
               C214 +
           (C3083 * C444 - C3040 * C492 + C3084 * C917 - C3041 * C967 +
            C3085 * C920 - C3042 * C970) *
               C19466) *
              C19382 * C19430 * C19416 * C85 +
          ((C3040 * C154 - C3083 * C95 + C3041 * C680 - C3084 * C616 +
            C3042 * C683 - C3085 * C621) *
               C214 +
           (C3040 * C493 - C3083 * C445 + C3041 * C968 - C3084 * C918 +
            C3042 * C971 - C3085 * C921) *
               C19466) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3040 * C152 - C3083 * C93 + C3041 * C678 - C3084 * C618 +
            C3042 * C681 - C3085 * C619) *
               C214 +
           (C3040 * C491 - C3083 * C443 + C3041 * C966 - C3084 * C916 +
            C3042 * C969 - C3085 * C919) *
               C19466) *
              C19382 * C19430 * C612 +
          ((C3083 * C618 - C3040 * C678 + C3084 * C619 - C3041 * C681 +
            C3085 * C3393 - C3042 * C3463) *
               C214 +
           (C3083 * C916 - C3040 * C966 + C3084 * C919 - C3041 * C969 +
            C3085 * C3707 - C3042 * C3759) *
               C19466) *
              C19382 * C19430 * C613 +
          ((C3040 * C681 - C3083 * C619 + C3041 * C3463 - C3084 * C3393 +
            C3042 * C3464 - C3085 * C3394) *
               C214 +
           (C3040 * C969 - C3083 * C919 + C3041 * C3759 - C3084 * C3707 +
            C3042 * C3760 - C3085 * C3708) *
               C19466) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C19416 * C84 -
          (C574 * C79 + C573 * C78 + C572 * C77) * C19430 * C19416 * C85 +
          (C573 * C77 + C574 * C78 +
           (C214 * C219 - C544 * C97 - C214 * C447 + C19466 * C549) * C19455 *
               C79) *
              C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C19455 *
               C77 +
           C572 * C78 + C573 * C79) *
              C19430 * C612 -
          ((C214 * C730 - C544 * C616 - C214 * C918 + C19466 * C1010) * C19455 *
               C79 +
           (C214 * C729 - C544 * C617 - C214 * C917 + C19466 * C1011) * C19455 *
               C78 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C19455 *
               C77) *
              C19430 * C613 +
          ((C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C19455 *
               C77 +
           (C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C19455 *
               C78 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C19455 *
               C79) *
              C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           (C214 * C728 - C544 * C618 - C214 * C916 + C19466 * C1012) * C3041 +
           (C214 * C731 - C544 * C619 - C214 * C919 + C19466 * C1013) * C3042) *
              C19382 * C19430 * C19416 * C84 -
          ((C214 * C732 - C544 * C620 - C214 * C920 + C19466 * C1014) * C3042 +
           C1979 * C3041 + C569 * C3040) *
              C19382 * C19430 * C19416 * C85 +
          (C570 * C3040 + C1978 * C3041 +
           (C214 * C733 - C544 * C621 - C214 * C921 + C19466 * C1015) * C3042) *
              C19382 * C19430 * C19416 * C86)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C214 * C215 - C544 * C93 - C214 * C443 + C19466 * C545) * C3040 +
           C3820 * C3041 + C3821 * C3042) *
              C19382 * C19430 * C612 -
          (C3822 * C3042 + C3821 * C3041 + C3820 * C3040) * C19382 * C19430 *
              C613 +
          (C3821 * C3040 + C3822 * C3041 +
           (C214 * C3506 - C544 * C3394 - C214 * C3708 + C19466 * C3800) *
               C3042) *
              C19382 * C19430 * C614) *
         C19404) /
            (p * q * std::sqrt(p + q));
}
