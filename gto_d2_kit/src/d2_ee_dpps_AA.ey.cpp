/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_dpps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2110_11(const double ae,
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
    const double C27404 = 0 * ae;
    const double C27403 = ae * be;
    const double C27402 = 0 * be;
    const double C27401 = xA - xB;
    const double C27400 = ae + be;
    const double C27399 = 0 * be;
    const double C27464 = yA - yB;
    const double C27467 = zA - zB;
    const double C27517 = 0 * be;
    const double C27548 = 0 * ae;
    const double C27544 = 0 * be;
    const double C27587 = 0 * be;
    const double C27614 = 0 * ae;
    const double C27610 = 0 * be;
    const double C27711 = p + q;
    const double C27710 = p * q;
    const double C27716 = xP - xQ;
    const double C27715 = bs[2];
    const double C27723 = std::pow(ae, 2);
    const double C27721 = bs[3];
    const double C27734 = bs[4];
    const double C27755 = bs[5];
    const double C27786 = yP - yQ;
    const double C27811 = zP - zQ;
    const double C91 = bs[0];
    const double C28537 = ce + de;
    const double C28536 = xC - xD;
    const double C28542 = yC - yD;
    const double C28549 = zC - zD;
    const double C28719 = ce * de;
    const double C27410 = 2 * C27403;
    const double C27407 = -2 * C27402;
    const double C27409 = C27403 * C27401;
    const double C27408 = C27401 * C27402;
    const double C28511 = C27401 * be;
    const double C28510 = C27401 * ae;
    const double C28509 = std::pow(C27401, 2);
    const double C27411 = C27404 / C27400;
    const double C27406 = 2 * C27400;
    const double C27405 = std::pow(C27400, 2);
    const double C27489 = C27403 * C27464;
    const double C28572 = std::pow(C27464, 2);
    const double C28586 = C27464 * be;
    const double C28585 = C27464 * ae;
    const double C27501 = C27403 * C27467;
    const double C28598 = std::pow(C27467, 2);
    const double C28610 = C27467 * be;
    const double C28609 = C27467 * ae;
    const double C27545 = C27464 * C27517;
    const double C27570 = -2 * C27517;
    const double C27553 = C27548 / C27400;
    const double C27611 = C27467 * C27587;
    const double C27636 = -2 * C27587;
    const double C27619 = C27614 / C27400;
    const double C27712 = 2 * C27710;
    const double C27724 = C27716 * ae;
    const double C27720 = std::pow(C27716, 2);
    const double C27789 = C27786 * ae;
    const double C27788 = C27716 * C27786;
    const double C27837 = C27786 * C27716;
    const double C27850 = std::pow(C27786, 2);
    const double C27814 = C27811 * ae;
    const double C27813 = C27716 * C27811;
    const double C27864 = C27786 * C27811;
    const double C27875 = C27811 * C27716;
    const double C27888 = C27811 * C27786;
    const double C27899 = std::pow(C27811, 2);
    const double C28722 = 2 * C28537;
    const double C28721 = std::pow(C28536, 2);
    const double C28720 = std::pow(C28542, 2);
    const double C28718 = std::pow(C28549, 2);
    const double C27413 = ae * C27407;
    const double C27414 = C27408 / C27400;
    const double C28512 = C28509 * C27403;
    const double C28519 = std::pow(C27406, -1);
    const double C28723 = std::pow(C27406, -2);
    const double C27415 = 2 * C27405;
    const double C27412 = C27405 * C27406;
    const double C28717 = 4 * C27405;
    const double C28573 = C28572 * C27403;
    const double C28599 = C28598 * C27403;
    const double C27550 = C27545 / C27400;
    const double C27573 = ae * C27570;
    const double C27616 = C27611 / C27400;
    const double C27639 = ae * C27636;
    const double C27714 = C27712 / C27711;
    const double C101 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C27712 / C27711, 2) -
          (bs[1] * C27712) / C27711) *
         std::pow(ae, 2)) /
        C27405;
    const double C92 = -(C27716 * bs[1] * C27712) / C27711;
    const double C589 = -(C27786 * bs[1] * C27712) / C27711;
    const double C961 = -(C27811 * bs[1] * C27712) / C27711;
    const double C27726 = C27721 * C27724;
    const double C27737 = C27734 * C27724;
    const double C27760 = C27755 * C27724;
    const double C96 = (-(bs[1] * C27724 * C27712) / C27711) / C27400;
    const double C27736 = C27720 * C27734;
    const double C27759 = C27720 * C27755;
    const double C27791 = C27721 * C27789;
    const double C27795 = C27734 * C27789;
    const double C27802 = C27755 * C27789;
    const double C149 = (-(bs[1] * C27789 * C27712) / C27711) / C27400;
    const double C27790 = C27788 * C27723;
    const double C27838 = C27837 * C27723;
    const double C27852 = C27850 * C27734;
    const double C27857 = C27850 * C27755;
    const double C27816 = C27721 * C27814;
    const double C27820 = C27734 * C27814;
    const double C27827 = C27755 * C27814;
    const double C212 = (-(bs[1] * C27814 * C27712) / C27711) / C27400;
    const double C27815 = C27813 * C27723;
    const double C27865 = C27864 * C27723;
    const double C27876 = C27875 * C27723;
    const double C27889 = C27888 * C27723;
    const double C27901 = C27899 * C27734;
    const double C27906 = C27899 * C27755;
    const double C28742 = std::pow(C28722, -1);
    const double C28741 = C28721 * C28719;
    const double C28740 = C28720 * C28719;
    const double C28739 = C28718 * C28719;
    const double C27417 = 0 - C27414;
    const double C28513 = C28512 / C27400;
    const double C27421 = C27402 / C27415;
    const double C27418 = C27399 / C27415;
    const double C27547 = C27517 / C27415;
    const double C27551 = C27544 / C27415;
    const double C27613 = C27587 / C27415;
    const double C27617 = C27610 / C27415;
    const double C28574 = C28573 / C27400;
    const double C28600 = C28599 / C27400;
    const double C27554 = 0 - C27550;
    const double C27620 = 0 - C27616;
    const double C27717 = std::pow(C27714, 2);
    const double C27722 = -C27714;
    const double C27735 = std::pow(C27714, 4);
    const double C27794 = C27734 * C27790;
    const double C27801 = C27755 * C27790;
    const double C27840 = C27734 * C27838;
    const double C27843 = C27755 * C27838;
    const double C27819 = C27734 * C27815;
    const double C27826 = C27755 * C27815;
    const double C27867 = C27734 * C27865;
    const double C27870 = C27755 * C27865;
    const double C27878 = C27734 * C27876;
    const double C27881 = C27755 * C27876;
    const double C27891 = C27734 * C27889;
    const double C27894 = C27755 * C27889;
    const double C28752 = C28741 / C28537;
    const double C28751 = C28740 / C28537;
    const double C28750 = C28739 / C28537;
    const double C27423 = C27417 * ae;
    const double C28514 = -C28513;
    const double C28575 = -C28574;
    const double C28601 = -C28600;
    const double C27557 = C27554 * ae;
    const double C27623 = C27620 * ae;
    const double C27719 = C27715 * C27717;
    const double C102 = (2 * ae * C27717 * C27715 * C27716 * ae +
                         C27716 *
                             (C27715 * C27717 + std::pow(C27716, 2) * bs[3] *
                                                    std::pow(-C27714, 3)) *
                             std::pow(ae, 2)) /
                        C27405;
    const double C154 =
        (C27717 * C27715 * C27716 * (yP - yQ) * C27723) / C27405;
    const double C217 =
        (C27717 * C27715 * C27716 * (zP - zQ) * C27723) / C27405;
    const double C274 = (C27717 * C27715 * C27786 * C27716 * C27723) / C27405;
    const double C314 =
        ((std::pow(C27786, 2) * C27715 * C27717 - (bs[1] * C27712) / C27711) *
         C27723) /
        C27405;
    const double C373 = (C27717 * C27715 * C27786 * C27811 * C27723) / C27405;
    const double C427 = (C27717 * C27715 * C27811 * C27716 * C27723) / C27405;
    const double C466 = (C27717 * C27715 * C27811 * C27786 * C27723) / C27405;
    const double C521 =
        ((std::pow(C27811, 2) * C27715 * C27717 - (bs[1] * C27712) / C27711) *
         C27723) /
        C27405;
    const double C97 = (C27716 * C27717 * C27715 * C27724) / C27400 -
                       (ae * bs[1] * C27712) / (C27711 * C27400);
    const double C150 = (C27716 * C27717 * C27715 * C27789) / C27400;
    const double C213 = (C27716 * C27717 * C27715 * C27814) / C27400;
    const double C593 = (C27786 * C27717 * C27715 * C27724) / C27400;
    const double C639 = (C27786 * C27717 * C27715 * C27789) / C27400 -
                        (ae * bs[1] * C27712) / (C27711 * C27400);
    const double C681 = (C27786 * C27717 * C27715 * C27814) / C27400;
    const double C965 = (C27811 * C27717 * C27715 * C27724) / C27400;
    const double C1011 = (C27811 * C27717 * C27715 * C27789) / C27400;
    const double C1053 = (C27811 * C27717 * C27715 * C27814) / C27400 -
                         (ae * bs[1] * C27712) / (C27711 * C27400);
    const double C27725 = std::pow(C27722, 3);
    const double C27756 = std::pow(C27722, 5);
    const double C27741 = C27735 * C27737;
    const double C27740 = C27736 * C27735;
    const double C27754 = C27734 * C27735;
    const double C27797 = C27735 * C27795;
    const double C27822 = C27735 * C27820;
    const double C27853 = C27852 * C27735;
    const double C27902 = C27901 * C27735;
    const double C27796 = C27735 * C27794;
    const double C27841 = C27735 * C27840;
    const double C27821 = C27735 * C27819;
    const double C27868 = C27735 * C27867;
    const double C27879 = C27735 * C27878;
    const double C27892 = C27735 * C27891;
    const double C28757 = -C28752;
    const double C28756 = -C28751;
    const double C28755 = -C28750;
    const double C27427 = C27423 / C27400;
    const double C28515 = std::exp(C28514);
    const double C28576 = std::exp(C28575);
    const double C28602 = std::exp(C28601);
    const double C27558 = C27557 / C27400;
    const double C27624 = C27623 / C27400;
    const double C27727 = C27719 * ae;
    const double C93 = C27719 * C27720 - (bs[1] * C27712) / C27711;
    const double C588 = C27786 * C27716 * C27719;
    const double C960 = C27811 * C27716 * C27719;
    const double C1927 = C27719 * C27850 - (bs[1] * C27712) / C27711;
    const double C2490 = C27811 * C27786 * C27719;
    const double C4012 = C27719 * C27899 - (bs[1] * C27712) / C27711;
    const double C27728 = C27725 * C27726;
    const double C27733 = C27721 * C27725;
    const double C27792 = C27725 * C27791;
    const double C27817 = C27725 * C27816;
    const double C155 = (ae * C27717 * C27715 * C27786 * ae +
                         C27716 * C27725 * C27721 * C27716 * C27786 * C27723) /
                        C27405;
    const double C218 = (ae * C27717 * C27715 * C27811 * ae +
                         C27716 * C27725 * C27721 * C27716 * C27811 * C27723) /
                        C27405;
    const double C275 = (ae * C27717 * C27715 * C27789 +
                         C27716 * C27725 * C27721 * C27786 * C27716 * C27723) /
                        C27405;
    const double C315 =
        (C27716 * (C27719 + std::pow(C27786, 2) * C27721 * C27725) * C27723) /
        C27405;
    const double C374 =
        (C27716 * C27725 * C27721 * C27786 * C27811 * C27723) / C27405;
    const double C375 =
        (C27725 * C27721 * C27865 + C27735 * C27734 * C27865 * C27720) / C27405;
    const double C428 = (ae * C27717 * C27715 * C27814 +
                         C27716 * C27725 * C27721 * C27811 * C27716 * C27723) /
                        C27405;
    const double C467 =
        (C27716 * C27725 * C27721 * C27811 * C27786 * C27723) / C27405;
    const double C468 =
        (C27725 * C27721 * C27889 + C27735 * C27734 * C27889 * C27720) / C27405;
    const double C522 =
        (C27716 * (C27719 + std::pow(C27811, 2) * C27721 * C27725) * C27723) /
        C27405;
    const double C597 =
        (C27786 * (C27719 + C27720 * C27721 * C27725) * C27723) / C27405;
    const double C643 =
        (ae * C27717 * C27715 * C27724 + C27786 * C27725 * C27721 * C27790) /
        C27405;
    const double C685 = (C27786 * C27725 * C27721 * C27815) / C27405;
    const double C723 =
        (ae * C27717 * C27715 * C27724 + C27786 * C27725 * C27721 * C27838) /
        C27405;
    const double C761 =
        (2 * ae * C27717 * C27715 * C27789 +
         C27786 * (C27719 + C27850 * C27721 * C27725) * C27723) /
        C27405;
    const double C803 =
        (ae * C27717 * C27715 * C27814 + C27786 * C27725 * C27721 * C27865) /
        C27405;
    const double C841 = (C27786 * C27725 * C27721 * C27876) / C27405;
    const double C879 =
        (ae * C27717 * C27715 * C27814 + C27786 * C27725 * C27721 * C27889) /
        C27405;
    const double C917 =
        (C27786 * (C27719 + C27899 * C27721 * C27725) * C27723) / C27405;
    const double C969 =
        (C27811 * (C27719 + C27720 * C27721 * C27725) * C27723) / C27405;
    const double C1015 = (C27811 * C27725 * C27721 * C27790) / C27405;
    const double C1057 =
        (ae * C27717 * C27715 * C27724 + C27811 * C27725 * C27721 * C27815) /
        C27405;
    const double C1095 = (C27811 * C27725 * C27721 * C27838) / C27405;
    const double C1133 =
        (C27811 * (C27719 + C27850 * C27721 * C27725) * C27723) / C27405;
    const double C1175 =
        (ae * C27717 * C27715 * C27789 + C27811 * C27725 * C27721 * C27865) /
        C27405;
    const double C1213 =
        (ae * C27717 * C27715 * C27724 + C27811 * C27725 * C27721 * C27876) /
        C27405;
    const double C1251 =
        (ae * C27717 * C27715 * C27789 + C27811 * C27725 * C27721 * C27889) /
        C27405;
    const double C1289 =
        (2 * ae * C27717 * C27715 * C27814 +
         C27811 * (C27719 + C27899 * C27721 * C27725) * C27723) /
        C27405;
    const double C27765 = C27756 * C27760;
    const double C27764 = C27759 * C27756;
    const double C27804 = C27756 * C27802;
    const double C27803 = C27756 * C27801;
    const double C27829 = C27756 * C27827;
    const double C27828 = C27756 * C27826;
    const double C27844 = C27756 * C27843;
    const double C27858 = C27857 * C27756;
    const double C27871 = C27756 * C27870;
    const double C27882 = C27756 * C27881;
    const double C27895 = C27756 * C27894;
    const double C27907 = C27906 * C27756;
    const double C27744 = C27716 * C27741;
    const double C27753 = ae * C27741;
    const double C28169 = C27786 * C27741;
    const double C28329 = C27811 * C27741;
    const double C27763 = C27754 * C27720;
    const double C27762 = C27716 * C27754;
    const double C27761 = C27754 * ae;
    const double C28184 = C27754 * C27850;
    const double C28183 = C27786 * C27754;
    const double C28352 = C27754 * C27899;
    const double C28351 = C27811 * C27754;
    const double C27800 = ae * C27797;
    const double C27799 = C27716 * C27797;
    const double C28124 = C27786 * C27797;
    const double C28337 = C27811 * C27797;
    const double C27825 = ae * C27822;
    const double C27824 = C27716 * C27822;
    const double C28200 = C27786 * C27822;
    const double C28294 = C27811 * C27822;
    const double C4092 = (C27725 * C27721 * C27790 + C27796 * C27899) / C27405;
    const double C4213 = (C27725 * C27721 * C27838 + C27841 * C27899) / C27405;
    const double C2063 = (C27725 * C27721 * C27815 + C27821 * C27850) / C27405;
    const double C376 =
        (2 * C27716 * C27868 +
         C27716 * (C27868 + C27756 * C27755 * C27865 * C27720)) /
        C27405;
    const double C2314 = (C27725 * C27721 * C27876 + C27879 * C27850) / C27405;
    const double C469 =
        (2 * C27716 * C27892 +
         C27716 * (C27892 + C27756 * C27755 * C27889 * C27720)) /
        C27405;
    const double C28760 = std::exp(C28757);
    const double C28759 = std::exp(C28756);
    const double C28758 = std::exp(C28755);
    const double C27429 = C27427 - C27418;
    const double C6645 = C28515 * C593;
    const double C8444 = C28515 * C965;
    const double C27416 = C27409 * C28515;
    const double C28516 = C28515 * C28510;
    const double C28520 = C28519 * C28515;
    const double C28713 = C28515 / C27406;
    const double C28712 = C28515 * C28511;
    const double C1346 = C28723 * C28515;
    const double C161 = C28576 * C150;
    const double C4095 = C28576 * C1011;
    const double C27490 = C27489 * C28576;
    const double C148 = -(2 * C27403 * (yA - yB) * C28576) / C27400;
    const double C313 =
        -((C28576 - (C27464 * 2 * C27403 * C27464 * C28576) / C27400) *
          C27410) /
        C27400;
    const double C1417 =
        ((C28576 - (C27464 * 2 * C27403 * C27464 * C28576) / C27400) * ae) /
            C27400 -
        (0 * be) / C27415;
    const double C1418 =
        (0 * ae) / C27400 - (C27403 * C27464 * C28576) / C27405;
    const double C28587 = C28576 * C28585;
    const double C28590 = C28519 * C28576;
    const double C28727 = C28576 * C28586;
    const double C28726 = C28576 / C27406;
    const double C4580 = C28723 * C28576;
    const double C224 = C28602 * C213;
    const double C2066 = C28602 * C681;
    const double C27502 = C27501 * C28602;
    const double C211 = -(2 * C27403 * (zA - zB) * C28602) / C27400;
    const double C520 =
        -((C28602 - (C27467 * 2 * C27403 * C27467 * C28602) / C27400) *
          C27410) /
        C27400;
    const double C3109 =
        ((C28602 - (C27467 * 2 * C27403 * C27467 * C28602) / C27400) * ae) /
            C27400 -
        (0 * be) / C27415;
    const double C3110 =
        (0 * ae) / C27400 - (C27403 * C27467 * C28602) / C27405;
    const double C28611 = C28602 * C28609;
    const double C28614 = C28519 * C28602;
    const double C28732 = C28602 * C28610;
    const double C28731 = C28602 / C27406;
    const double C8800 = C28723 * C28602;
    const double C27559 = C27558 - C27551;
    const double C27625 = C27624 - C27617;
    const double C27729 = C27716 * C27728;
    const double C2007 = (C27725 * C27721 * C27790 + ae * C27786 * C27728 +
                          C27786 * (ae * C27728 + C27786 * C27796)) /
                         C27405;
    const double C2128 = (C27725 * C27721 * C27838 + ae * C27786 * C27728 +
                          C27786 * (ae * C27728 + C27786 * C27841)) /
                         C27405;
    const double C2558 = (C27811 * (ae * C27728 + C27786 * C27796)) / C27405;
    const double C2614 =
        (ae * C27786 * C27728 + C27811 * C27786 * C27821) / C27405;
    const double C2667 =
        (ae * C27811 * C27728 + C27786 * C27811 * C27841) / C27405;
    const double C2832 =
        (ae * C27786 * C27728 + C27811 * C27786 * C27879) / C27405;
    const double C4160 = (C27725 * C27721 * C27815 + ae * C27811 * C27728 +
                          C27811 * (ae * C27728 + C27811 * C27821)) /
                         C27405;
    const double C4401 = (C27725 * C27721 * C27876 + ae * C27811 * C27728 +
                          C27811 * (ae * C27728 + C27811 * C27879)) /
                         C27405;
    const double C1930 = (C27717 * C27715 * C27724 + C27728 * C27850) / C27400;
    const double C2493 = (C27811 * C27786 * C27728) / C27400;
    const double C4015 = (C27717 * C27715 * C27724 + C27728 * C27899) / C27400;
    const double C5130 =
        (2 * C27786 * C27728 + C27786 * (C27728 + C27741 * C27850)) / C27400;
    const double C5694 = (C27811 * (C27728 + C27741 * C27850)) / C27400;
    const double C9810 =
        (2 * C27811 * C27728 + C27811 * (C27728 + C27741 * C27899)) / C27400;
    const double C27739 = C27716 * C27733;
    const double C27738 = C27733 * ae;
    const double C27743 = C27733 + C27740;
    const double C27854 = C27733 + C27853;
    const double C27903 = C27733 + C27902;
    const double C28125 = C27786 * C27733;
    const double C28295 = C27811 * C27733;
    const double C316 =
        ((C27719 + C27850 * C27721 * C27725) * C27723 +
         (C27733 + C27850 * C27734 * C27735) * C27723 * C27720) /
        C27405;
    const double C523 =
        ((C27719 + C27899 * C27721 * C27725) * C27723 +
         (C27733 + C27899 * C27734 * C27735) * C27723 * C27720) /
        C27405;
    const double C94 =
        2 * C27716 * C27719 + C27716 * (C27719 + C27733 * C27720);
    const double C587 = C27786 * (C27719 + C27733 * C27720);
    const double C959 = C27811 * (C27719 + C27733 * C27720);
    const double C5128 =
        2 * C27786 * C27719 + C27786 * (C27719 + C27733 * C27850);
    const double C5692 = C27811 * (C27719 + C27733 * C27850);
    const double C9808 =
        2 * C27811 * C27719 + C27811 * (C27719 + C27733 * C27899);
    const double C28020 = C27786 * C27792;
    const double C156 =
        (C27725 * C27721 * C27790 + ae * C27716 * C27792 +
         C27716 * (ae * C27792 + C27716 * C27735 * C27734 * C27790)) /
        C27405;
    const double C157 =
        (2 * (ae * C27792 + C27716 * C27796) + ae * (C27792 + C27797 * C27720) +
         C27716 *
             (C27796 + ae * C27716 * C27797 +
              C27716 * (ae * C27797 + C27716 * C27756 * C27755 * C27790))) /
        C27405;
    const double C276 =
        (C27725 * C27721 * C27838 + ae * C27716 * C27792 +
         C27716 * (ae * C27792 + C27716 * C27735 * C27734 * C27838)) /
        C27405;
    const double C1014 = (C27811 * (ae * C27792 + C27716 * C27796)) / C27405;
    const double C1094 = (C27811 * (ae * C27792 + C27716 * C27841)) / C27405;
    const double C1174 =
        (ae * C27716 * C27792 + C27811 * C27716 * C27868) / C27405;
    const double C1250 =
        (ae * C27716 * C27792 + C27811 * C27716 * C27892) / C27405;
    const double C4348 = (C27725 * C27721 * C27865 + ae * C27811 * C27792 +
                          C27811 * (ae * C27792 + C27811 * C27868)) /
                         C27405;
    const double C4463 = (C27725 * C27721 * C27889 + ae * C27811 * C27792 +
                          C27811 * (ae * C27792 + C27811 * C27892)) /
                         C27405;
    const double C151 = (C27717 * C27715 * C27789 + C27792 * C27720) / C27400;
    const double C152 =
        (2 * C27716 * C27792 + C27716 * (C27792 + C27797 * C27720)) / C27400;
    const double C637 = (C27786 * (C27792 + C27797 * C27720) +
                         (C27719 + C27733 * C27720) * ae) /
                        C27400;
    const double C638 =
        (C27786 * C27716 * C27792 + C27716 * C27719 * ae) / C27400;
    const double C1009 = (C27811 * (C27792 + C27797 * C27720)) / C27400;
    const double C1010 = (C27811 * C27716 * C27792) / C27400;
    const double C4089 = (C27717 * C27715 * C27789 + C27792 * C27899) / C27400;
    const double C9886 =
        (2 * C27811 * C27792 + C27811 * (C27792 + C27797 * C27899)) / C27400;
    const double C28100 = C27811 * C27817;
    const double C219 =
        (C27725 * C27721 * C27815 + ae * C27716 * C27817 +
         C27716 * (ae * C27817 + C27716 * C27735 * C27734 * C27815)) /
        C27405;
    const double C220 =
        (2 * (ae * C27817 + C27716 * C27821) + ae * (C27817 + C27822 * C27720) +
         C27716 *
             (C27821 + ae * C27716 * C27822 +
              C27716 * (ae * C27822 + C27716 * C27756 * C27755 * C27815))) /
        C27405;
    const double C429 =
        (C27725 * C27721 * C27876 + ae * C27716 * C27817 +
         C27716 * (ae * C27817 + C27716 * C27735 * C27734 * C27876)) /
        C27405;
    const double C684 = (C27786 * (ae * C27817 + C27716 * C27821)) / C27405;
    const double C802 =
        (ae * C27716 * C27817 + C27786 * C27716 * C27868) / C27405;
    const double C840 = (C27786 * (ae * C27817 + C27716 * C27879)) / C27405;
    const double C878 =
        (ae * C27716 * C27817 + C27786 * C27716 * C27892) / C27405;
    const double C2258 = (C27725 * C27721 * C27865 + ae * C27786 * C27817 +
                          C27786 * (ae * C27817 + C27786 * C27868)) /
                         C27405;
    const double C2376 = (C27725 * C27721 * C27889 + ae * C27786 * C27817 +
                          C27786 * (ae * C27817 + C27786 * C27892)) /
                         C27405;
    const double C2779 = (ae * (C27811 * C27817 + C27727) +
                          C27786 * (ae * C27792 + C27811 * C27868)) /
                         C27405;
    const double C214 = (C27717 * C27715 * C27814 + C27817 * C27720) / C27400;
    const double C215 =
        (2 * C27716 * C27817 + C27716 * (C27817 + C27822 * C27720)) / C27400;
    const double C679 = (C27786 * (C27817 + C27822 * C27720)) / C27400;
    const double C680 = (C27786 * C27716 * C27817) / C27400;
    const double C1051 = (C27811 * (C27817 + C27822 * C27720) +
                          (C27719 + C27733 * C27720) * ae) /
                         C27400;
    const double C1052 =
        (C27811 * C27716 * C27817 + C27716 * C27719 * ae) / C27400;
    const double C2060 = (C27717 * C27715 * C27814 + C27817 * C27850) / C27400;
    const double C2611 =
        (C27811 * C27786 * C27817 + C27786 * C27719 * ae) / C27400;
    const double C5260 =
        (2 * C27786 * C27817 + C27786 * (C27817 + C27822 * C27850)) / C27400;
    const double C5808 = (C27811 * (C27817 + C27822 * C27850) +
                          (C27719 + C27733 * C27850) * ae) /
                         C27400;
    const double C163 = C28576 * C155;
    const double C226 = C28602 * C218;
    const double C323 = C28576 * C315;
    const double C381 = C28602 * C374;
    const double C384 = C28602 * C375;
    const double C474 = C28576 * C467;
    const double C477 = C28576 * C468;
    const double C530 = C28602 * C522;
    const double C6507 = C28515 * C597;
    const double C2068 = C28602 * C685;
    const double C6647 = C28515 * C723;
    const double C2261 = C28602 * C803;
    const double C6776 = C28515 * C841;
    const double C2432 = C28602 * C917;
    const double C8258 = C28515 * C969;
    const double C4097 = C28576 * C1015;
    const double C8446 = C28515 * C1095;
    const double C4287 = C28576 * C1133;
    const double C8630 = C28515 * C1213;
    const double C4466 = C28576 * C1251;
    const double C27769 = C27716 * C27765;
    const double C28171 = C27765 * C27850;
    const double C28307 = C27786 * C27765;
    const double C28331 = C27765 * C27899;
    const double C27768 = C27754 + C27764;
    const double C27806 = C27804 * C27720;
    const double C28113 = C27716 * C27804;
    const double C28182 = C27786 * C27804;
    const double C28338 = C27804 * C27899;
    const double C27805 = C27716 * C27803;
    const double C28170 = C27786 * C27803;
    const double C9888 =
        (2 * C27811 * C27796 + C27811 * (C27796 + C27803 * C27899)) / C27405;
    const double C12567 =
        (3 * (C27796 + C27803 * C27899) +
         C27811 * (2 * C27811 * C27803 +
                   C27811 * (C27803 +
                             std::pow(C27714, 6) * bs[6] * C27790 * C27899))) /
        C27405;
    const double C27831 = C27829 * C27720;
    const double C28135 = C27716 * C27829;
    const double C28202 = C27829 * C27850;
    const double C28316 = C27786 * C27829;
    const double C28350 = C27811 * C27829;
    const double C27830 = C27716 * C27828;
    const double C28306 = C27786 * C27828;
    const double C28330 = C27811 * C27828;
    const double C5262 =
        (2 * C27786 * C27821 + C27786 * (C27821 + C27828 * C27850)) / C27405;
    const double C5810 = (ae * (C27728 + C27741 * C27850) +
                          C27811 * (C27821 + C27828 * C27850)) /
                         C27405;
    const double C6595 =
        (3 * (C27821 + C27828 * C27850) +
         C27786 * (2 * C27786 * C27828 +
                   C27786 * (C27828 +
                             std::pow(C27714, 6) * bs[6] * C27815 * C27850))) /
        C27405;
    const double C27845 = C27716 * C27844;
    const double C28176 = C27786 * C27844;
    const double C28214 = C27811 * C27844;
    const double C5862 =
        (C27811 * C27841 + ae * C27811 * C27786 * C27741 +
         C27786 * (ae * C27811 * C27741 + C27786 * C27811 * C27844)) /
        C27405;
    const double C8441 = (ae * (C27728 + C27741 * C27899) +
                          C27786 * (C27841 + C27844 * C27899)) /
                         C27405;
    const double C10008 =
        (2 * C27811 * C27841 + C27811 * (C27841 + C27844 * C27899)) / C27405;
    const double C27859 = C27754 + C27858;
    const double C28134 = C27716 * C27871;
    const double C28201 = C27786 * C27871;
    const double C28222 = C27811 * C27871;
    const double C377 =
        (3 * (C27868 + C27871 * C27720) +
         C27716 * (2 * C27716 * C27871 +
                   C27716 * (C27871 +
                             std::pow(C27714, 6) * bs[6] * C27865 * C27720))) /
        C27405;
    const double C801 = (ae * (C27817 + C27822 * C27720) +
                         C27786 * (C27868 + C27871 * C27720)) /
                        C27405;
    const double C1173 = (ae * (C27792 + C27797 * C27720) +
                          C27811 * (C27868 + C27871 * C27720)) /
                         C27405;
    const double C27883 = C27716 * C27882;
    const double C28312 = C27786 * C27882;
    const double C28341 = C27811 * C27882;
    const double C5517 =
        (2 * C27786 * C27879 + C27786 * (C27879 + C27882 * C27850)) / C27405;
    const double C6024 = (ae * (C27728 + C27741 * C27850) +
                          C27811 * (C27879 + C27882 * C27850)) /
                         C27405;
    const double C6772 =
        (3 * (C27879 + C27882 * C27850) +
         C27786 * (2 * C27786 * C27882 +
                   C27786 * (C27882 +
                             std::pow(C27714, 6) * bs[6] * C27876 * C27850))) /
        C27405;
    const double C28140 = C27716 * C27895;
    const double C28207 = C27786 * C27895;
    const double C28344 = C27811 * C27895;
    const double C470 =
        (3 * (C27892 + C27895 * C27720) +
         C27716 * (2 * C27716 * C27895 +
                   C27716 * (C27895 +
                             std::pow(C27714, 6) * bs[6] * C27889 * C27720))) /
        C27405;
    const double C877 = (ae * (C27817 + C27822 * C27720) +
                         C27786 * (C27892 + C27895 * C27720)) /
                        C27405;
    const double C1249 = (ae * (C27792 + C27797 * C27720) +
                          C27811 * (C27892 + C27895 * C27720)) /
                         C27405;
    const double C27908 = C27754 + C27907;
    const double C27758 = 2 * C27753;
    const double C5208 =
        (2 * (ae * C27728 + C27786 * C27796) + ae * (C27728 + C27741 * C27850) +
         C27786 * (C27796 + ae * C27786 * C27741 +
                   C27786 * (C27753 + C27786 * C27803))) /
        C27405;
    const double C5328 =
        (2 * (ae * C27728 + C27786 * C27841) + ae * (C27728 + C27741 * C27850) +
         C27786 * (C27841 + ae * C27786 * C27741 +
                   C27786 * (C27753 + C27786 * C27844))) /
        C27405;
    const double C5756 = (C27811 * (C27796 + ae * C27786 * C27741 +
                                    C27786 * (C27753 + C27786 * C27803))) /
                         C27405;
    const double C9956 =
        (2 * (ae * C27728 + C27811 * C27821) + ae * (C27728 + C27741 * C27899) +
         C27811 * (C27821 + ae * C27811 * C27741 +
                   C27811 * (C27753 + C27811 * C27828))) /
        C27405;
    const double C10199 =
        (2 * (ae * C27728 + C27811 * C27879) + ae * (C27728 + C27741 * C27899) +
         C27811 * (C27879 + ae * C27811 * C27741 +
                   C27811 * (C27753 + C27811 * C27882))) /
        C27405;
    const double C8389 = (C27786 * C27821 + ae * C27811 * C28169 +
                          C27811 * (ae * C28169 + C27811 * C27786 * C27828)) /
                         C27405;
    const double C8440 =
        (C27841 + C27844 * C27899 + ae * (C28169 + C27786 * C27765 * C27899) +
         C27786 * (ae * (C27741 + C27765 * C27899) +
                   C27786 * (C27844 +
                             std::pow(C27714, 6) * bs[6] * C27838 * C27899))) /
        C27405;
    const double C8627 = (C27786 * C27879 + ae * C27811 * C28169 +
                          C27811 * (ae * C28169 + C27811 * C27786 * C27882)) /
                         C27405;
    const double C8253 = (C27786 * C27728 + C28169 * C27899) / C27400;
    const double C27767 = C27733 + C27763;
    const double C27766 = C27762 * ae;
    const double C28114 = C27786 * C27762;
    const double C28285 = C27811 * C27762;
    const double C28188 = C27733 + C28184;
    const double C28187 = C28183 * ae;
    const double C28317 = C27811 * C28183;
    const double C28356 = C27733 + C28352;
    const double C28355 = C28351 * ae;
    const double C28179 = 2 * C27800;
    const double C10263 =
        (2 * (ae * C27792 + C27811 * C27892) + ae * (C27792 + C27797 * C27899) +
         C27811 * (C27892 + ae * C27811 * C27797 +
                   C27811 * (C27800 + C27811 * C27895))) /
        C27405;
    const double C28016 = C27786 * C27799;
    const double C277 =
        (2 * (ae * C27792 + C27716 * C27841) + ae * (C27792 + C27797 * C27720) +
         C27716 * (C27841 + ae * C27799 +
                   C27716 * (C27800 + C27716 * C27756 * C27755 * C27838))) /
        C27405;
    const double C4347 = (C27716 * C27868 + ae * C27811 * C27799 +
                          C27811 * (ae * C27799 + C27811 * C27716 * C27871)) /
                         C27405;
    const double C4462 = (C27716 * C27892 + ae * C27811 * C27799 +
                          C27811 * (ae * C27799 + C27811 * C27716 * C27895)) /
                         C27405;
    const double C4088 = (C27716 * C27792 + C27799 * C27899) / C27400;
    const double C28347 = 2 * C27825;
    const double C5462 =
        (2 * (ae * C27817 + C27786 * C27868) + ae * (C27817 + C27822 * C27850) +
         C27786 * (C27868 + ae * C27786 * C27822 +
                   C27786 * (C27825 + C27786 * C27871))) /
        C27405;
    const double C5581 =
        (2 * (ae * C27817 + C27786 * C27892) + ae * (C27817 + C27822 * C27850) +
         C27786 * (C27892 + ae * C27786 * C27822 +
                   C27786 * (C27825 + C27786 * C27895))) /
        C27405;
    const double C28096 = C27811 * C27824;
    const double C430 =
        (2 * (ae * C27817 + C27716 * C27879) + ae * (C27817 + C27822 * C27720) +
         C27716 * (C27879 + ae * C27824 +
                   C27716 * (C27825 + C27716 * C27756 * C27755 * C27876))) /
        C27405;
    const double C2257 = (C27716 * C27868 + ae * C27786 * C27824 +
                          C27786 * (ae * C27824 + C27786 * C27716 * C27871)) /
                         C27405;
    const double C2375 = (C27716 * C27892 + ae * C27786 * C27824 +
                          C27786 * (ae * C27824 + C27786 * C27716 * C27895)) /
                         C27405;
    const double C2059 = (C27716 * C27817 + C27824 * C27850) / C27400;
    const double C28251 = C27811 * C28200;
    const double C9897 = C28576 * C4092;
    const double C11550 = C28515 * C4213;
    const double C5271 = C28602 * C2063;
    const double C387 = C28602 * C376;
    const double C6779 = C28515 * C2314;
    const double C480 = C28576 * C469;
    const double C81 = -(C28760 * C28536 * de) / C28537;
    const double C82 = C28742 * C28760;
    const double C583 = -(C28759 * C28542 * de) / C28537;
    const double C584 = C28742 * C28759;
    const double C956 = -(C28758 * C28549 * de) / C28537;
    const double C957 = C28742 * C28758;
    const double C27422 = C27416 / C27405;
    const double C27420 = 2 * C27416;
    const double C27419 = -4 * C27416;
    const double C28715 = C28516 / C27415;
    const double C28714 = C28516 * C28511;
    const double C28711 = C28516 / C27400;
    const double C28523 = C28520 * C28511;
    const double C76 = C28520 / C28717;
    const double C12909 = C28520 / C27406;
    const double C1344 = (C28515 * std::pow(C28511, 2)) / C27405 + C28713;
    const double C28736 = C28712 / C27400;
    const double C1345 = (-2 * C28519 * C28712) / C27400;
    const double C27518 = 2 * C27490;
    const double C27549 = C27490 / C27405;
    const double C27571 = -4 * C27490;
    const double C1605 =
        (((-4 * C27490) / C27400 -
          (C27464 * (C28576 - (C27464 * 2 * C27490) / C27400) * C27410) /
              C27400) *
         ae) /
        C27400;
    const double C1606 =
        (-((C28576 - (C27464 * 2 * C27490) / C27400) * C27410) / C27400) /
        C27406;
    const double C164 = C148 * C93;
    const double C162 = C148 * C97;
    const double C160 = C148 * C92;
    const double C322 = C148 * C150;
    const double C320 = C148 * C149;
    const double C473 = C148 * C213;
    const double C766 = C148 * C639;
    const double C1138 = C148 * C1011;
    const double C3048 = C148 * C960;
    const double C4096 = C148 * C965;
    const double C4094 = C148 * C961;
    const double C4465 = C148 * C1053;
    const double C9894 = C148 * C4012;
    const double C324 = C313 * C93;
    const double C321 = C313 * C92;
    const double C3236 = C313 * C960;
    const double C4286 = C313 * C961;
    const double C10088 = C313 * C4012;
    const double C1428 = C1417 * C93;
    const double C1424 = C1417 * C97;
    const double C1420 = C1417 * C92;
    const double C1611 = C1417 * C150;
    const double C1608 = C1417 * C149;
    const double C1800 = C1417 * C213;
    const double C2206 = C1417 * C639;
    const double C2727 = C1417 * C1011;
    const double C11424 = C1417 * C4012;
    const double C11420 = C1417 * C965;
    const double C11416 = C1417 * C961;
    const double C11786 = C1417 * C1053;
    const double C19470 = C1417 * C960;
    const double C1422 = C1418 * C588;
    const double C1609 = C1418 * C639;
    const double C11418 = C1418 * C2490;
    const double C28729 = C28587 / C27415;
    const double C28728 = C28587 * C28586;
    const double C28724 = C28587 / C27400;
    const double C28593 = C28590 * C28586;
    const double C6169 = C28590 / C28717;
    const double C14433 = C28590 / C27406;
    const double C28743 = C28727 / C27400;
    const double C4579 = (-2 * C28519 * C28727) / C27400;
    const double C4578 = (C28576 * std::pow(C28586, 2)) / C27405 + C28726;
    const double C27588 = 2 * C27502;
    const double C27615 = C27502 / C27405;
    const double C27637 = -4 * C27502;
    const double C3471 =
        (((-4 * C27502) / C27400 -
          (C27467 * (C28602 - (C27467 * 2 * C27502) / C27400) * C27410) /
              C27400) *
         ae) /
        C27400;
    const double C3472 =
        (-((C28602 - (C27467 * 2 * C27502) / C27400) * C27410) / C27400) /
        C27406;
    const double C227 = C211 * C93;
    const double C225 = C211 * C97;
    const double C223 = C211 * C92;
    const double C380 = C211 * C150;
    const double C529 = C211 * C213;
    const double C527 = C211 * C212;
    const double C922 = C211 * C681;
    const double C1294 = C211 * C1053;
    const double C1494 = C211 * C588;
    const double C2067 = C211 * C593;
    const double C2065 = C211 * C589;
    const double C2260 = C211 * C639;
    const double C5268 = C211 * C1927;
    const double C531 = C520 * C93;
    const double C528 = C520 * C92;
    const double C1863 = C520 * C588;
    const double C2431 = C520 * C589;
    const double C5635 = C520 * C1927;
    const double C3120 = C3109 * C93;
    const double C3116 = C3109 * C97;
    const double C3112 = C3109 * C92;
    const double C3296 = C3109 * C150;
    const double C3477 = C3109 * C213;
    const double C3474 = C3109 * C212;
    const double C3960 = C3109 * C681;
    const double C4526 = C3109 * C1053;
    const double C7822 = C3109 * C1927;
    const double C7818 = C3109 * C593;
    const double C7814 = C3109 * C589;
    const double C8003 = C3109 * C639;
    const double C16115 = C3109 * C588;
    const double C3114 = C3110 * C960;
    const double C3475 = C3110 * C1053;
    const double C7816 = C3110 * C2490;
    const double C28734 = C28611 / C27415;
    const double C28733 = C28611 * C28610;
    const double C28725 = C28611 / C27400;
    const double C28617 = C28614 * C28610;
    const double C11888 = C28614 / C28717;
    const double C21265 = C28614 / C27406;
    const double C28746 = C28732 / C27400;
    const double C8799 = (-2 * C28519 * C28732) / C27400;
    const double C8798 = (C28602 * std::pow(C28610, 2)) / C27405 + C28731;
    const double C27730 = C27729 + C27727;
    const double C6651 = C28515 * C2128;
    const double C11423 = C28590 * C2558;
    const double C17334 = C28590 * C2558;
    const double C7821 = C28614 * C2614;
    const double C20193 = C28614 * C2614;
    const double C7891 = C28515 * C2667;
    const double C8069 = C28515 * C2832;
    const double C11733 = C28515 * C4401;
    const double C5270 = C211 * C1930;
    const double C6649 = C28515 * C1930;
    const double C7826 = C3109 * C1930;
    const double C7820 = C3110 * C2493;
    const double C7889 = C28515 * C2493;
    const double C11422 = C1418 * C2493;
    const double C9896 = C148 * C4015;
    const double C11428 = C1417 * C4015;
    const double C11548 = C28515 * C4015;
    const double C6603 = C211 * C5130;
    const double C6653 = C28515 * C5130;
    const double C7828 = C3110 * C5694;
    const double C7893 = C28515 * C5694;
    const double C12575 = C148 * C9810;
    const double C12657 = C28515 * C9810;
    const double C27742 = C27739 * ae;
    const double C2610 =
        (C27811 * C27786 * C27824 + C27786 * C27739 * ae) / C27400;
    const double C1926 = C27716 * C27719 + C27739 * C27850;
    const double C2489 = C27811 * C27786 * C27739;
    const double C4011 = C27716 * C27719 + C27739 * C27899;
    const double C5127 =
        2 * C27786 * C27739 + C27786 * (C27739 + C27762 * C27850);
    const double C5691 = C27811 * (C27739 + C27762 * C27850);
    const double C9807 =
        2 * C27811 * C27739 + C27811 * (C27739 + C27762 * C27899);
    const double C27746 = C27744 + C27738;
    const double C28126 = C28124 + C27738;
    const double C28296 = C28294 + C27738;
    const double C27745 = C27743 * C27723;
    const double C27855 = C27854 * C27723;
    const double C27904 = C27903 * C27723;
    const double C28127 = C28125 * ae;
    const double C8251 = C27786 * C27719 + C28125 * C27899;
    const double C11353 =
        2 * C27811 * C28125 + C27811 * (C28125 + C28183 * C27899);
    const double C28297 = C28295 * ae;
    const double C326 = C28576 * C316;
    const double C533 = C28602 * C523;
    const double C168 = C148 * C94;
    const double C231 = C211 * C94;
    const double C327 = C313 * C94;
    const double C534 = C520 * C94;
    const double C1430 = C1418 * C587;
    const double C1498 = C211 * C587;
    const double C1866 = C520 * C587;
    const double C3052 = C148 * C959;
    const double C3122 = C3110 * C959;
    const double C3238 = C313 * C959;
    const double C6601 = C211 * C5128;
    const double C6859 = C520 * C5128;
    const double C7824 = C3110 * C5692;
    const double C12573 = C148 * C9808;
    const double C12701 = C313 * C9808;
    const double C28021 = C28020 + C27727;
    const double C167 = C28576 * C156;
    const double C171 = C28576 * C157;
    const double C3051 = C28576 * C1014;
    const double C10017 = C28520 * C1094;
    const double C17478 = C28520 * C1094;
    const double C3299 = C28614 * C1174;
    const double C18175 = C28614 * C1174;
    const double C3412 = C28576 * C1250;
    const double C10266 = C28576 * C4463;
    const double C165 = C28576 * C151;
    const double C325 = C148 * C151;
    const double C383 = C211 * C151;
    const double C1617 = C1417 * C151;
    const double C3300 = C3109 * C151;
    const double C169 = C28576 * C152;
    const double C328 = C148 * C152;
    const double C386 = C211 * C152;
    const double C1623 = C1417 * C152;
    const double C764 = C148 * C637;
    const double C1431 = C28590 * C637;
    const double C1620 = C1418 * C637;
    const double C1694 = C211 * C637;
    const double C2202 = C1417 * C637;
    const double C12994 = C28590 * C637;
    const double C765 = C148 * C638;
    const double C1423 = C28590 * C638;
    const double C1614 = C1418 * C638;
    const double C1689 = C211 * C638;
    const double C2204 = C1417 * C638;
    const double C12986 = C28590 * C638;
    const double C16335 = C3109 * C638;
    const double C1136 = C148 * C1009;
    const double C2723 = C1417 * C1009;
    const double C3053 = C28576 * C1009;
    const double C3302 = C3110 * C1009;
    const double C1137 = C148 * C1010;
    const double C2725 = C1417 * C1010;
    const double C3049 = C28576 * C1010;
    const double C3298 = C3110 * C1010;
    const double C4292 = C148 * C4089;
    const double C9895 = C28576 * C4089;
    const double C10578 = C1417 * C4089;
    const double C10092 = C148 * C9886;
    const double C11617 = C1417 * C9886;
    const double C12574 = C28576 * C9886;
    const double C28101 = C28100 + C27727;
    const double C230 = C28602 * C219;
    const double C234 = C28602 * C220;
    const double C1497 = C28602 * C684;
    const double C1690 = C28602 * C802;
    const double C5522 = C28520 * C840;
    const double C15330 = C28520 * C840;
    const double C1803 = C28590 * C878;
    const double C13348 = C28590 * C878;
    const double C5465 = C28602 * C2258;
    const double C8006 = C28614 * C2779;
    const double C20401 = C28614 * C2779;
    const double C228 = C28602 * C214;
    const double C476 = C148 * C214;
    const double C532 = C211 * C214;
    const double C1804 = C1417 * C214;
    const double C3483 = C3109 * C214;
    const double C232 = C28602 * C215;
    const double C479 = C148 * C215;
    const double C535 = C211 * C215;
    const double C3489 = C3109 * C215;
    const double C920 = C211 * C679;
    const double C1499 = C28602 * C679;
    const double C1806 = C1418 * C679;
    const double C3956 = C3109 * C679;
    const double C921 = C211 * C680;
    const double C1495 = C28602 * C680;
    const double C1802 = C1418 * C680;
    const double C3958 = C3109 * C680;
    const double C1292 = C211 * C1051;
    const double C3123 = C28614 * C1051;
    const double C3416 = C148 * C1051;
    const double C3486 = C3110 * C1051;
    const double C4522 = C3109 * C1051;
    const double C18009 = C28614 * C1051;
    const double C1293 = C211 * C1052;
    const double C3115 = C28614 * C1052;
    const double C3411 = C148 * C1052;
    const double C3480 = C3110 * C1052;
    const double C4524 = C3109 * C1052;
    const double C18001 = C28614 * C1052;
    const double C19906 = C1417 * C1052;
    const double C2435 = C211 * C2060;
    const double C5269 = C28602 * C2060;
    const double C7646 = C3109 * C2060;
    const double C2942 = C211 * C2611;
    const double C3959 = C3110 * C2611;
    const double C7817 = C28614 * C2611;
    const double C8748 = C3109 * C2611;
    const double C11788 = C1418 * C2611;
    const double C20189 = C28614 * C2611;
    const double C5638 = C211 * C5260;
    const double C6602 = C28602 * C5260;
    const double C8188 = C3109 * C5260;
    const double C6131 = C211 * C5808;
    const double C7647 = C3110 * C5808;
    const double C7825 = C28614 * C5808;
    const double C8746 = C3109 * C5808;
    const double C25105 = C28614 * C5808;
    const double C27772 = C27769 + C27761;
    const double C28173 = C27741 + C28171;
    const double C11354 =
        (2 * C27811 * C28169 + C27811 * (C28169 + C28307 * C27899)) / C27400;
    const double C28333 = C27741 + C28331;
    const double C27771 = C27768 * C27723;
    const double C27808 = C27797 + C27806;
    const double C28115 = C27786 * C28113;
    const double C9885 =
        (2 * C27811 * C27799 + C27811 * (C27799 + C28113 * C27899)) / C27400;
    const double C28186 = C28182 + C27761;
    const double C28339 = C27797 + C28338;
    const double C27807 = C27800 + C27805;
    const double C28172 = C27753 + C28170;
    const double C12576 = C28576 * C9888;
    const double C27833 = C27822 + C27831;
    const double C28263 = C27786 * C28135;
    const double C28284 = C27811 * C28135;
    const double C5259 =
        (2 * C27786 * C27824 + C27786 * (C27824 + C28135 * C27850)) / C27400;
    const double C5807 = (C27811 * (C27824 + C28135 * C27850) +
                          (C27739 + C27762 * C27850) * ae) /
                         C27400;
    const double C28204 = C27822 + C28202;
    const double C28318 = C27811 * C28316;
    const double C28354 = C28350 + C27761;
    const double C27832 = C27825 + C27830;
    const double C11490 =
        (2 * (ae * C28169 + C27811 * C28306) + ae * (C28169 + C28307 * C27899) +
         C27811 *
             (C28306 + ae * C27811 * C28307 +
              C27811 * (ae * C28307 + C27811 * C27786 * std::pow(C27714, 6) *
                                          bs[6] * C27815))) /
        C27405;
    const double C28332 = C27753 + C28330;
    const double C6604 = C28602 * C5262;
    const double C7829 = C28614 * C5810;
    const double C25109 = C28614 * C5810;
    const double C27846 = C27800 + C27845;
    const double C28177 = C27753 + C28176;
    const double C11541 =
        (ae * (2 * C27811 * C27741 + C27811 * (C27741 + C27765 * C27899)) +
         C27786 * (2 * C28214 + C27811 * (C27844 + std::pow(C27714, 6) * bs[6] *
                                                       C27838 * C27899))) /
        C27405;
    const double C12650 =
        (3 * (C27841 + C27844 * C27899) +
         C27811 * (2 * C28214 + C27811 * (C27844 + std::pow(C27714, 6) * bs[6] *
                                                       C27838 * C27899))) /
        C27405;
    const double C7895 = C28515 * C5862;
    const double C11011 = C28515 * C8441;
    const double C12659 = C28515 * C10008;
    const double C27860 = C27859 * C27723;
    const double C5461 =
        (2 * (ae * C27824 + C27786 * C28134) + ae * (C27824 + C28135 * C27850) +
         C27786 *
             (C28134 + ae * C27786 * C28135 +
              C27786 * (ae * C28135 + C27786 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27865))) /
        C27405;
    const double C10146 =
        (2 * (ae * C27799 + C27811 * C28134) + ae * (C27799 + C28113 * C27899) +
         C27811 *
             (C28134 + ae * C27811 * C28113 +
              C27811 * (ae * C28113 + C27811 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27865))) /
        C27405;
    const double C28203 = C27825 + C28201;
    const double C28223 = C27800 + C28222;
    const double C1695 = C28602 * C801;
    const double C3303 = C28614 * C1173;
    const double C18179 = C28614 * C1173;
    const double C27884 = C27825 + C27883;
    const double C11730 =
        (2 * (ae * C28169 + C27811 * C28312) + ae * (C28169 + C28307 * C27899) +
         C27811 *
             (C28312 + ae * C27811 * C28307 +
              C27811 * (ae * C28307 + C27811 * C27786 * std::pow(C27714, 6) *
                                          bs[6] * C27876))) /
        C27405;
    const double C28342 = C27753 + C28341;
    const double C6782 = C28515 * C5517;
    const double C8074 = C28515 * C6024;
    const double C5580 =
        (2 * (ae * C27824 + C27786 * C28140) + ae * (C27824 + C28135 * C27850) +
         C27786 *
             (C28140 + ae * C27786 * C28135 +
              C27786 * (ae * C28135 + C27786 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27889))) /
        C27405;
    const double C10262 =
        (2 * (ae * C27799 + C27811 * C28140) + ae * (C27799 + C28113 * C27899) +
         C27811 *
             (C28140 + ae * C27811 * C28113 +
              C27811 * (ae * C28113 + C27811 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27889))) /
        C27405;
    const double C28208 = C27825 + C28207;
    const double C28345 = C27800 + C28344;
    const double C1807 = C28590 * C877;
    const double C13352 = C28590 * C877;
    const double C3417 = C28576 * C1249;
    const double C27909 = C27908 * C27723;
    const double C6655 = C28515 * C5328;
    const double C8330 = C4580 * C5756;
    const double C12779 = C28515 * C10199;
    const double C10951 = C8800 * C8389;
    const double C11183 = C28515 * C8627;
    const double C11009 = C28515 * C8253;
    const double C11430 = C1418 * C8253;
    const double C27770 = C27767 * ae;
    const double C95 = 3 * (C27719 + C27733 * C27720) +
                       C27716 * (2 * C27739 + C27716 * C27767);
    const double C586 = C27786 * (2 * C27739 + C27716 * C27767);
    const double C958 = C27811 * (2 * C27739 + C27716 * C27767);
    const double C1925 = C27719 + C27733 * C27720 + C27767 * C27850;
    const double C2488 = C27811 * C27786 * C27767;
    const double C4010 = C27719 + C27733 * C27720 + C27767 * C27899;
    const double C9597 =
        (ae * (C27824 + C27811 * (C27811 * C28135 + C27766) +
               C27811 * C27762 * ae) +
         C27786 *
             (C28134 + ae * C27811 * C28113 +
              C27811 * (ae * C28113 + C27811 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27865))) /
        C27405;
    const double C28116 = C28114 * ae;
    const double C9334 = C27786 * C27739 + C28114 * C27899;
    const double C28287 = C28285 * ae;
    const double C28190 = C28188 * ae;
    const double C6502 = 3 * (C27719 + C27733 * C27850) +
                         C27786 * (2 * C28125 + C27786 * C28188);
    const double C6898 = C27811 * (2 * C28125 + C27786 * C28188);
    const double C8250 = C27719 + C27733 * C27850 + C28188 * C27899;
    const double C28319 = C28317 * ae;
    const double C28358 = C28356 * ae;
    const double C12523 = 3 * (C27719 + C27733 * C27899) +
                          C27811 * (2 * C28295 + C27811 * C28356);
    const double C12817 = C28576 * C10263;
    const double C9095 = C8800 * C4347;
    const double C9205 = C28576 * C4462;
    const double C4291 = C148 * C4088;
    const double C8859 = C28576 * C4088;
    const double C10581 = C1417 * C4088;
    const double C6737 = C28602 * C5462;
    const double C4908 = C28602 * C2257;
    const double C5016 = C4580 * C2375;
    const double C2434 = C211 * C2059;
    const double C4720 = C28602 * C2059;
    const double C7649 = C3109 * C2059;
    const double C27426 = C27411 - C27422;
    const double C27425 = C27401 * C27420;
    const double C1354 =
        ((-C27420 / C27400) / C27406 - (0 * be) / C27400) / C27406 -
        (0 * be) / C27400;
    const double C6171 = -C27420 / C27400;
    const double C14437 = (-C27420 / C27400) / C27406 - (0 * be) / C27400;
    const double C27424 = C27419 / C27400;
    const double C28737 = C28714 / C27405;
    const double C5135 = C28711 * C597;
    const double C5343 = C28711 * C2128;
    const double C5339 = C28711 * C1930;
    const double C5335 = C28711 * C723;
    const double C5331 = C28711 * C593;
    const double C5524 = C28711 * C2314;
    const double C5520 = C28711 * C841;
    const double C9815 = C28711 * C969;
    const double C10023 = C28711 * C4213;
    const double C10019 = C28711 * C4015;
    const double C10015 = C28711 * C1095;
    const double C10011 = C28711 * C965;
    const double C10206 = C28711 * C4401;
    const double C10202 = C28711 * C1213;
    const double C23561 = C28711 * C2667;
    const double C23557 = C28711 * C2493;
    const double C23767 = C28711 * C2832;
    const double C28716 = C28523 / C27400;
    const double C1936 = C1344 * C597;
    const double C2137 = C1344 * C723;
    const double C2131 = C1344 * C593;
    const double C2317 = C1344 * C841;
    const double C4021 = C1344 * C969;
    const double C4222 = C1344 * C1095;
    const double C4216 = C1344 * C965;
    const double C4404 = C1344 * C1213;
    const double C14429 = -C28736;
    const double C2319 = C1345 * C840;
    const double C4224 = C1345 * C1094;
    const double C27526 = C27464 * C27518;
    const double C4648 =
        ((-C27517 / C27400) / C27406 -
         ((C28576 - (C27464 * C27518) / C27400) * be) / C27400) /
            C27406 -
        ((C27464 * ((-C27518 / C27400) / C27406 - (0 * be) / C27400) + C28590) *
         be) /
            C27400;
    const double C4649 =
        ((-C27518 / C27400) / C27406 - (0 * be) / C27400) / C27406 -
        (0 * be) / C27400;
    const double C12981 = (-C27518 / C27400) / C27406 - (0 * be) / C27400;
    const double C27556 = C27553 - C27549;
    const double C27574 = C27571 / C27400;
    const double C1616 = C1605 * C93;
    const double C1610 = C1605 * C92;
    const double C11612 = C1605 * C4012;
    const double C11608 = C1605 * C961;
    const double C19692 = C1605 * C960;
    const double C1619 = C1606 * C587;
    const double C1613 = C1606 * C588;
    const double C11610 = C1606 * C2490;
    const double C173 = C162 + C163;
    const double C172 = C160 + C161;
    const double C481 = C473 + C474;
    const double C4103 = C4096 + C4097;
    const double C4102 = C4094 + C4095;
    const double C4467 = C4465 + C4466;
    const double C331 = C321 + C322;
    const double C4293 = C4286 + C1138;
    const double C28744 = C28728 / C27405;
    const double C1433 = C28724 * C156;
    const double C1429 = C28724 * C151;
    const double C1425 = C28724 * C155;
    const double C1421 = C28724 * C150;
    const double C1618 = C28724 * C316;
    const double C1612 = C28724 * C315;
    const double C1805 = C28724 * C468;
    const double C1801 = C28724 * C467;
    const double C11429 = C28724 * C4092;
    const double C11425 = C28724 * C4089;
    const double C11421 = C28724 * C1015;
    const double C11417 = C28724 * C1011;
    const double C11609 = C28724 * C1133;
    const double C11791 = C28724 * C4463;
    const double C11787 = C28724 * C1251;
    const double C19475 = C28724 * C1014;
    const double C19471 = C28724 * C1010;
    const double C19907 = C28724 * C1250;
    const double C28730 = C28593 / C27400;
    const double C14860 = C14433 * C2375;
    const double C25554 = C14433 * C5756;
    const double C12910 = -C28743;
    const double C4654 = C4579 * C638;
    const double C5014 = C4579 * C878;
    const double C8328 = C4579 * C2558;
    const double C4658 = C4578 * C155;
    const double C4652 = C4578 * C150;
    const double C4833 = C4578 * C315;
    const double C5012 = C4578 * C467;
    const double C8326 = C4578 * C1015;
    const double C8320 = C4578 * C1011;
    const double C8508 = C4578 * C1133;
    const double C8685 = C4578 * C1251;
    const double C27596 = C27467 * C27588;
    const double C8914 =
        ((-C27587 / C27400) / C27406 -
         ((C28602 - (C27467 * C27588) / C27400) * be) / C27400) /
            C27406 -
        ((C27467 * ((-C27588 / C27400) / C27406 - (0 * be) / C27400) + C28614) *
         be) /
            C27400;
    const double C8915 =
        ((-C27588 / C27400) / C27406 - (0 * be) / C27400) / C27406 -
        (0 * be) / C27400;
    const double C17996 = (-C27588 / C27400) / C27406 - (0 * be) / C27400;
    const double C27622 = C27619 - C27615;
    const double C27640 = C27637 / C27400;
    const double C3482 = C3471 * C93;
    const double C3476 = C3471 * C92;
    const double C8183 = C3471 * C1927;
    const double C8179 = C3471 * C589;
    const double C16545 = C3471 * C588;
    const double C3485 = C3472 * C959;
    const double C3479 = C3472 * C960;
    const double C8185 = C3472 * C5692;
    const double C8181 = C3472 * C2490;
    const double C236 = C225 + C226;
    const double C235 = C223 + C224;
    const double C388 = C380 + C381;
    const double C2074 = C2067 + C2068;
    const double C2073 = C2065 + C2066;
    const double C2262 = C2260 + C2261;
    const double C538 = C528 + C529;
    const double C2436 = C2431 + C922;
    const double C28747 = C28733 / C27405;
    const double C3125 = C28725 * C219;
    const double C3121 = C28725 * C214;
    const double C3117 = C28725 * C218;
    const double C3113 = C28725 * C213;
    const double C3301 = C28725 * C375;
    const double C3297 = C28725 * C374;
    const double C3484 = C28725 * C523;
    const double C3478 = C28725 * C522;
    const double C7827 = C28725 * C2063;
    const double C7823 = C28725 * C2060;
    const double C7819 = C28725 * C685;
    const double C7815 = C28725 * C681;
    const double C8008 = C28725 * C2258;
    const double C8004 = C28725 * C803;
    const double C8180 = C28725 * C917;
    const double C16120 = C28725 * C684;
    const double C16116 = C28725 * C680;
    const double C16336 = C28725 * C802;
    const double C28735 = C28617 / C27400;
    const double C21545 = C21265 * C4347;
    const double C26560 = C21265 * C8389;
    const double C17890 = -C28746;
    const double C8920 = C8799 * C1052;
    const double C9093 = C8799 * C1174;
    const double C10949 = C8799 * C2614;
    const double C10943 = C8799 * C2611;
    const double C11121 = C8799 * C2779;
    const double C8924 = C8798 * C218;
    const double C8918 = C8798 * C213;
    const double C9091 = C8798 * C374;
    const double C9266 = C8798 * C522;
    const double C10947 = C8798 * C685;
    const double C10941 = C8798 * C681;
    const double C11119 = C8798 * C803;
    const double C11287 = C8798 * C917;
    const double C27731 = ae * C27730;
    const double C98 =
        (C27717 * C27715 * C27724 + C27716 * C27730 + C27716 * C27719 * ae) /
        C27400;
    const double C592 = (C27786 * C27730) / C27400;
    const double C964 = (C27811 * C27730) / C27400;
    const double C5275 = C5270 + C5271;
    const double C7833 = C7820 + C7821;
    const double C11435 = C11422 + C11423;
    const double C9901 = C9896 + C9897;
    const double C28017 = C28016 + C27742;
    const double C28097 = C28096 + C27742;
    const double C2778 = (ae * (C27811 * C27824 + C27742) +
                          C27786 * (ae * C27799 + C27811 * C27716 * C27871)) /
                         C27405;
    const double C2941 = C211 * C2610;
    const double C3957 = C3110 * C2610;
    const double C16118 = C28614 * C2610;
    const double C17840 = C3109 * C2610;
    const double C19551 = C28614 * C2610;
    const double C19908 = C1418 * C2610;
    const double C4719 = C211 * C1926;
    const double C5072 = C520 * C1926;
    const double C16117 = C3110 * C2489;
    const double C16547 = C3472 * C2489;
    const double C19472 = C1418 * C2489;
    const double C19694 = C1606 * C2489;
    const double C8858 = C148 * C4011;
    const double C9035 = C313 * C4011;
    const double C27748 = ae * C27746;
    const double C27747 = C27716 * C27746;
    const double C27757 = 2 * C27746;
    const double C27917 = C27786 * C27746;
    const double C27960 = C27811 * C27746;
    const double C1929 = (C27730 + C27746 * C27850) / C27400;
    const double C4014 = (C27730 + C27746 * C27899) / C27400;
    const double C28129 = ae * C28126;
    const double C28128 = C27786 * C28126;
    const double C28157 = C27811 * C28126;
    const double C28181 = 2 * C28126;
    const double C28299 = ae * C28296;
    const double C28298 = C27811 * C28296;
    const double C28349 = 2 * C28296;
    const double C596 =
        (2 * ae * C27786 * C27728 + C27716 * C27786 * C27745) / C27405;
    const double C968 =
        (2 * ae * C27811 * C27728 + C27716 * C27811 * C27745) / C27405;
    const double C1933 =
        ((C27719 + C27720 * C27721 * C27725) * C27723 + C27745 * C27850) /
        C27405;
    const double C2496 = (C27811 * C27786 * C27745) / C27405;
    const double C4018 =
        ((C27719 + C27720 * C27721 * C27725) * C27723 + C27745 * C27899) /
        C27405;
    const double C317 =
        (2 * C27716 * C27855 +
         C27716 *
             (C27855 + (C27754 + C27850 * C27755 * C27756) * C27723 * C27720)) /
        C27405;
    const double C760 =
        (2 * ae * C27716 * C27792 + C27786 * C27716 * C27855) / C27405;
    const double C1132 = (C27811 * C27716 * C27855) / C27405;
    const double C2720 =
        (2 * ae * C27811 * C27792 + C27786 * C27811 * C27855) / C27405;
    const double C4284 =
        ((C27719 + C27850 * C27721 * C27725) * C27723 + C27855 * C27899) /
        C27405;
    const double C524 =
        (2 * C27716 * C27904 +
         C27716 *
             (C27904 + (C27754 + C27899 * C27755 * C27756) * C27723 * C27720)) /
        C27405;
    const double C916 = (C27786 * C27716 * C27904) / C27405;
    const double C1288 =
        (2 * ae * C27716 * C27817 + C27811 * C27716 * C27904) / C27405;
    const double C2429 =
        ((C27719 + C27899 * C27721 * C27725) * C27723 + C27904 * C27850) /
        C27405;
    const double C2938 =
        (2 * ae * C27786 * C27817 + C27811 * C27786 * C27904) / C27405;
    const double C28252 = C28251 + C28127;
    const double C5972 = (ae * C27792 + C27811 * C27868 +
                          ae * (C27811 * C27786 * C27822 + C28127) +
                          C27786 * (ae * (C27811 * C27822 + C27738) +
                                    C27786 * (C27800 + C27811 * C27871))) /
                         C27405;
    const double C11426 = C1418 * C8251;
    const double C11614 = C1606 * C8251;
    const double C28022 = ae * C28021;
    const double C2004 =
        (C27717 * C27715 * C27789 + C27786 * C28021 + C27786 * C27719 * ae) /
        C27400;
    const double C2555 = (C27811 * C28021) / C27400;
    const double C8315 = (C28021 + C28126 * C27899) / C27400;
    const double C174 = C164 + C165;
    const double C332 = C324 + C325;
    const double C389 = C383 + C384;
    const double C176 = C168 + C169;
    const double C333 = C327 + C328;
    const double C390 = C386 + C387;
    const double C1441 = C1430 + C1431;
    const double C1437 = C1422 + C1423;
    const double C3241 = C3238 + C1136;
    const double C3058 = C3052 + C3053;
    const double C3240 = C3236 + C1137;
    const double C3056 = C3048 + C3049;
    const double C3305 = C3298 + C3299;
    const double C10093 = C10088 + C4292;
    const double C9900 = C9894 + C9895;
    const double C12704 = C12701 + C10092;
    const double C12577 = C12573 + C12574;
    const double C28102 = ae * C28101;
    const double C4157 =
        (C27717 * C27715 * C27814 + C27811 * C28101 + C27811 * C27719 * ae) /
        C27400;
    const double C1696 = C1689 + C1690;
    const double C237 = C227 + C228;
    const double C482 = C476 + C477;
    const double C539 = C531 + C532;
    const double C239 = C231 + C232;
    const double C483 = C479 + C480;
    const double C540 = C534 + C535;
    const double C1869 = C1866 + C920;
    const double C1504 = C1498 + C1499;
    const double C1868 = C1863 + C921;
    const double C1502 = C1494 + C1495;
    const double C1809 = C1802 + C1803;
    const double C3133 = C3122 + C3123;
    const double C3129 = C3114 + C3115;
    const double C3418 = C3411 + C3412;
    const double C5639 = C5635 + C2435;
    const double C5274 = C5268 + C5269;
    const double C7831 = C7816 + C7817;
    const double C6862 = C6859 + C5638;
    const double C6605 = C6601 + C6602;
    const double C7835 = C7824 + C7825;
    const double C27775 = ae * C27772;
    const double C27774 = C27716 * C27772;
    const double C27913 = C27786 * C27772;
    const double C27956 = C27811 * C27772;
    const double C27997 = C27772 * C27850;
    const double C28065 = C27772 * C27899;
    const double C6976 =
        (ae * (2 * C28169 + C27786 * C28173) +
         C27811 * (2 * C27786 * C27828 +
                   C27786 * (C27828 +
                             std::pow(C27714, 6) * bs[6] * C27815 * C27850))) /
        C27405;
    const double C7011 =
        (2 * (ae * C27811 * C27741 + C27786 * C28214) + ae * C27811 * C28173 +
         C27786 * (C28214 + ae * C27811 * C27786 * C27765 +
                   C27786 * (ae * C27811 * C27765 + C27786 * C27811 *
                                                        std::pow(C27714, 6) *
                                                        bs[6] * C27838))) /
        C27405;
    const double C7120 =
        (ae * (2 * C28169 + C27786 * C28173) +
         C27811 * (2 * C27786 * C27882 +
                   C27786 * (C27882 +
                             std::pow(C27714, 6) * bs[6] * C27876 * C27850))) /
        C27405;
    const double C8388 =
        (C27821 + C27828 * C27850 + ae * C27811 * C28173 +
         C27811 *
             (ae * C28173 + C27811 * (C27828 + std::pow(C27714, 6) * bs[6] *
                                                   C27815 * C27850))) /
        C27405;
    const double C8626 =
        (C27879 + C27882 * C27850 + ae * C27811 * C28173 +
         C27811 *
             (ae * C28173 + C27811 * (C27882 + std::pow(C27714, 6) * bs[6] *
                                                   C27876 * C27850))) /
        C27405;
    const double C6503 = (3 * (C27728 + C27741 * C27850) +
                          C27786 * (2 * C28169 + C27786 * C28173)) /
                         C27400;
    const double C6899 = (C27811 * (2 * C28169 + C27786 * C28173)) / C27400;
    const double C8252 = (C27728 + C27741 * C27850 + C28173 * C27899) / C27400;
    const double C12524 = (3 * (C27728 + C27741 * C27899) +
                           C27811 * (2 * C28329 + C27811 * C28333)) /
                          C27400;
    const double C27773 = C27716 * C27771;
    const double C27911 = C27786 * C27771;
    const double C27954 = C27811 * C27771;
    const double C1932 = (2 * ae * (C27728 + C27741 * C27850) +
                          C27716 * (C27745 + C27771 * C27850)) /
                         C27405;
    const double C4017 = (2 * ae * (C27728 + C27741 * C27899) +
                          C27716 * (C27745 + C27771 * C27899)) /
                         C27405;
    const double C5132 =
        (2 * C27786 * C27745 + C27786 * (C27745 + C27771 * C27850)) / C27405;
    const double C5695 = (2 * ae * C27811 * (C27741 + C27765 * C27850) +
                          C27716 * C27811 *
                              (C27771 + (C27755 * C27756 +
                                         C27720 * bs[6] * std::pow(C27714, 6)) *
                                            C27723 * C27850)) /
                         C27405;
    const double C5696 = (C27811 * (C27745 + C27771 * C27850)) / C27405;
    const double C8254 =
        (C27745 + C27771 * C27850 +
         (C27771 + (C27755 * C27756 + C27720 * bs[6] * std::pow(C27714, 6)) *
                       C27723 * C27850) *
             C27899) /
        C27405;
    const double C9812 =
        (2 * C27811 * C27745 + C27811 * (C27745 + C27771 * C27899)) / C27405;
    const double C28012 = C27786 * C27808;
    const double C1172 =
        (ae * (2 * C27799 + C27716 * C27808) +
         C27811 * (2 * C27716 * C27871 +
                   C27716 * (C27871 +
                             std::pow(C27714, 6) * bs[6] * C27865 * C27720))) /
        C27405;
    const double C1248 =
        (ae * (2 * C27799 + C27716 * C27808) +
         C27811 * (2 * C27716 * C27895 +
                   C27716 * (C27895 +
                             std::pow(C27714, 6) * bs[6] * C27889 * C27720))) /
        C27405;
    const double C4346 =
        (C27868 + C27871 * C27720 + ae * C27811 * C27808 +
         C27811 *
             (ae * C27808 + C27811 * (C27871 + std::pow(C27714, 6) * bs[6] *
                                                   C27865 * C27720))) /
        C27405;
    const double C4461 =
        (C27892 + C27895 * C27720 + ae * C27811 * C27808 +
         C27811 *
             (ae * C27808 + C27811 * (C27895 + std::pow(C27714, 6) * bs[6] *
                                                   C27889 * C27720))) /
        C27405;
    const double C153 = (3 * (C27792 + C27797 * C27720) +
                         C27716 * (2 * C27799 + C27716 * C27808)) /
                        C27400;
    const double C636 = (C27786 * (2 * C27799 + C27716 * C27808) +
                         (2 * C27739 + C27716 * C27767) * ae) /
                        C27400;
    const double C1008 = (C27811 * (2 * C27799 + C27716 * C27808)) / C27400;
    const double C4087 = (C27792 + C27797 * C27720 + C27808 * C27899) / C27400;
    const double C28117 = C28115 + C27766;
    const double C10091 = C148 * C9885;
    const double C28191 = ae * C28186;
    const double C28189 = C27786 * C28186;
    const double C28218 = C27811 * C28186;
    const double C28236 = C28186 * C27899;
    const double C12566 = (3 * (C27792 + C27797 * C27899) +
                           C27811 * (2 * C28337 + C27811 * C28339)) /
                          C27400;
    const double C158 =
        (3 * (C27796 + ae * C27799 + C27716 * C27807) +
         ae * (2 * C27799 + C27716 * C27808) +
         C27716 *
             (2 * C27807 + ae * C27808 +
              C27716 * (C27803 + ae * C27716 * C27804 +
                        C27716 * (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C1012 =
        (C27811 *
         (2 * C27807 + ae * C27808 +
          C27716 * (C27803 + ae * C27716 * C27804 +
                    C27716 * (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                bs[6] * C27790)))) /
        C27405;
    const double C1013 =
        (C27811 * (C27796 + ae * C27799 + C27716 * C27807)) / C27405;
    const double C4090 =
        (C27796 + ae * C27799 + C27716 * C27807 +
         (C27803 + ae * C27716 * C27804 +
          C27716 *
              (ae * C27804 + C27716 * std::pow(C27714, 6) * bs[6] * C27790)) *
             C27899) /
        C27405;
    const double C4091 =
        (ae * C27792 + C27716 * C27796 + C27807 * C27899) / C27405;
    const double C9887 =
        (2 * C27811 * C27807 +
         C27811 * (C27807 + (ae * C27804 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27790) *
                                C27899)) /
        C27405;
    const double C6559 =
        (3 * (C27796 + ae * C28169 + C27786 * C28172) +
         ae * (2 * C28169 + C27786 * C28173) +
         C27786 *
             (2 * C28172 + ae * C28173 +
              C27786 * (C27803 + ae * C27786 * C27765 +
                        C27786 * (ae * C27765 + C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C6940 =
        (C27811 *
         (2 * C28172 + ae * C28173 +
          C27786 * (C27803 + ae * C27786 * C27765 +
                    C27786 * (ae * C27765 + C27786 * std::pow(C27714, 6) *
                                                bs[6] * C27790)))) /
        C27405;
    const double C8316 =
        (C27796 + ae * C28169 + C27786 * C28172 +
         (C27803 + ae * C27786 * C27765 +
          C27786 *
              (ae * C27765 + C27786 * std::pow(C27714, 6) * bs[6] * C27790)) *
             C27899) /
        C27405;
    const double C8317 =
        (ae * C27728 + C27786 * C27796 + C28172 * C27899) / C27405;
    const double C11414 =
        (2 * C27811 * C28172 +
         C27811 * (C28172 + (ae * C27765 +
                             C27786 * std::pow(C27714, 6) * bs[6] * C27790) *
                                C27899)) /
        C27405;
    const double C12578 = C12575 + C12576;
    const double C28092 = C27811 * C27833;
    const double C800 =
        (ae * (2 * C27824 + C27716 * C27833) +
         C27786 * (2 * C27716 * C27871 +
                   C27716 * (C27871 +
                             std::pow(C27714, 6) * bs[6] * C27865 * C27720))) /
        C27405;
    const double C876 =
        (ae * (2 * C27824 + C27716 * C27833) +
         C27786 * (2 * C27716 * C27895 +
                   C27716 * (C27895 +
                             std::pow(C27714, 6) * bs[6] * C27889 * C27720))) /
        C27405;
    const double C2256 =
        (C27868 + C27871 * C27720 + ae * C27786 * C27833 +
         C27786 *
             (ae * C27833 + C27786 * (C27871 + std::pow(C27714, 6) * bs[6] *
                                                   C27865 * C27720))) /
        C27405;
    const double C2374 =
        (C27892 + C27895 * C27720 + ae * C27786 * C27833 +
         C27786 *
             (ae * C27833 + C27786 * (C27895 + std::pow(C27714, 6) * bs[6] *
                                                   C27889 * C27720))) /
        C27405;
    const double C216 = (3 * (C27817 + C27822 * C27720) +
                         C27716 * (2 * C27824 + C27716 * C27833)) /
                        C27400;
    const double C678 = (C27786 * (2 * C27824 + C27716 * C27833)) / C27400;
    const double C1050 = (C27811 * (2 * C27824 + C27716 * C27833) +
                          (2 * C27739 + C27716 * C27767) * ae) /
                         C27400;
    const double C2058 = (C27817 + C27822 * C27720 + C27833 * C27850) / C27400;
    const double C2609 =
        (C27811 * C27786 * C27833 + C27786 * C27767 * ae) / C27400;
    const double C28264 = C27811 * C28263;
    const double C28286 = C28284 + C27766;
    const double C5637 = C211 * C5259;
    const double C6130 = C211 * C5807;
    const double C7648 = C3110 * C5807;
    const double C28247 = C27811 * C28204;
    const double C6594 = (3 * (C27817 + C27822 * C27850) +
                          C27786 * (2 * C28200 + C27786 * C28204)) /
                         C27400;
    const double C6975 = (C27811 * (2 * C28200 + C27786 * C28204) +
                          (2 * C28125 + C27786 * C28188) * ae) /
                         C27400;
    const double C28320 = C28318 + C28187;
    const double C28359 = ae * C28354;
    const double C28357 = C27811 * C28354;
    const double C221 =
        (3 * (C27821 + ae * C27824 + C27716 * C27832) +
         ae * (2 * C27824 + C27716 * C27833) +
         C27716 *
             (2 * C27832 + ae * C27833 +
              C27716 * (C27828 + ae * C27716 * C27829 +
                        C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27815)))) /
        C27405;
    const double C682 =
        (C27786 *
         (2 * C27832 + ae * C27833 +
          C27716 * (C27828 + ae * C27716 * C27829 +
                    C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                bs[6] * C27815)))) /
        C27405;
    const double C683 =
        (C27786 * (C27821 + ae * C27824 + C27716 * C27832)) / C27405;
    const double C2061 =
        (C27821 + ae * C27824 + C27716 * C27832 +
         (C27828 + ae * C27716 * C27829 +
          C27716 *
              (ae * C27829 + C27716 * std::pow(C27714, 6) * bs[6] * C27815)) *
             C27850) /
        C27405;
    const double C2062 =
        (ae * C27817 + C27716 * C27821 + C27832 * C27850) / C27405;
    const double C5261 =
        (2 * C27786 * C27832 +
         C27786 * (C27832 + (ae * C27829 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27815) *
                                C27850)) /
        C27405;
    const double C12615 =
        (3 * (C27821 + ae * C28329 + C27811 * C28332) +
         ae * (2 * C28329 + C27811 * C28333) +
         C27811 *
             (2 * C28332 + ae * C28333 +
              C27811 * (C27828 + ae * C27811 * C27765 +
                        C27811 * (ae * C27765 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27815)))) /
        C27405;
    const double C6606 = C6603 + C6604;
    const double C7837 = C7828 + C7829;
    const double C278 =
        (3 * (C27841 + ae * C27799 + C27716 * C27846) +
         ae * (2 * C27799 + C27716 * C27808) +
         C27716 *
             (2 * C27846 + ae * C27808 +
              C27716 * (C27844 + ae * C27716 * C27804 +
                        C27716 * (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27838)))) /
        C27405;
    const double C1092 =
        (C27811 *
         (2 * C27846 + ae * C27808 +
          C27716 * (C27844 + ae * C27716 * C27804 +
                    C27716 * (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                bs[6] * C27838)))) /
        C27405;
    const double C1093 =
        (C27811 * (C27841 + ae * C27799 + C27716 * C27846)) / C27405;
    const double C4211 =
        (C27841 + ae * C27799 + C27716 * C27846 +
         (C27844 + ae * C27716 * C27804 +
          C27716 *
              (ae * C27804 + C27716 * std::pow(C27714, 6) * bs[6] * C27838)) *
             C27899) /
        C27405;
    const double C4212 =
        (ae * C27792 + C27716 * C27841 + C27846 * C27899) / C27405;
    const double C10007 =
        (2 * C27811 * C27846 +
         C27811 * (C27846 + (ae * C27804 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27838) *
                                C27899)) /
        C27405;
    const double C6642 =
        (3 * (C27841 + ae * C28169 + C27786 * C28177) +
         ae * (2 * C28169 + C27786 * C28173) +
         C27786 *
             (2 * C28177 + ae * C28173 +
              C27786 * (C27844 + ae * C27786 * C27765 +
                        C27786 * (ae * C27765 + C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27838)))) /
        C27405;
    const double C28112 = C27716 * C27860;
    const double C28180 = C27786 * C27860;
    const double C28216 = C27811 * C27860;
    const double C318 =
        (3 * (C27855 + C27860 * C27720) +
         C27716 * (2 * C27716 * C27860 +
                   C27716 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C758 =
        (2 * ae * (2 * C27799 + C27716 * C27808) +
         C27786 * (2 * C27716 * C27860 +
                   C27716 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C759 = (2 * ae * (C27792 + C27797 * C27720) +
                         C27786 * (C27855 + C27860 * C27720)) /
                        C27405;
    const double C1130 =
        (C27811 * (2 * C27716 * C27860 +
                   C27716 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C1131 = (C27811 * (C27855 + C27860 * C27720)) / C27405;
    const double C2718 = (2 * ae * C27811 * C27808 +
                          C27786 * C27811 *
                              (C27860 + (C27755 * C27756 +
                                         C27850 * bs[6] * std::pow(C27714, 6)) *
                                            C27723 * C27720)) /
                         C27405;
    const double C2719 =
        (2 * ae * C27811 * C27799 + C27786 * C27811 * C27716 * C27860) / C27405;
    const double C4282 =
        (C27855 + C27860 * C27720 +
         (C27860 + (C27755 * C27756 + C27850 * bs[6] * std::pow(C27714, 6)) *
                       C27723 * C27720) *
             C27899) /
        C27405;
    const double C4283 = (C27716 * C27855 + C27716 * C27860 * C27899) / C27405;
    const double C8505 = (2 * ae * (C27792 + C27797 * C27899) +
                          C27786 * (C27855 + C27860 * C27899)) /
                         C27405;
    const double C10084 =
        (2 * C27811 * C27855 + C27811 * (C27855 + C27860 * C27899)) / C27405;
    const double C6734 =
        (3 * (C27868 + ae * C28200 + C27786 * C28203) +
         ae * (2 * C28200 + C27786 * C28204) +
         C27786 *
             (2 * C28203 + ae * C28204 +
              C27786 * (C27871 + ae * C27786 * C27829 +
                        C27786 * (ae * C27829 + C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27865)))) /
        C27405;
    const double C8574 =
        (C27868 + ae * C27811 * C27797 + C27811 * C28223 +
         ae * (C28200 + C27811 * (C27811 * C27786 * C27829 + C28187) +
               C27811 * C28183 * ae) +
         C27786 *
             (ae * (C27822 + C27811 * (C27811 * C27829 + C27761) +
                    C27811 * C27754 * ae) +
              C27786 * (C27871 + ae * C27811 * C27804 +
                        C27811 * (ae * C27804 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27865)))) /
        C27405;
    const double C8575 =
        (ae * (C27817 + C27811 * (C27811 * C27822 + C27738) +
               C27811 * C27733 * ae) +
         C27786 * (C27868 + ae * C27811 * C27797 + C27811 * C28223)) /
        C27405;
    const double C10147 =
        (2 * (ae * C27792 + C27811 * C27868) + ae * (C27792 + C27797 * C27899) +
         C27811 * (C27868 + ae * C27811 * C27797 + C27811 * C28223)) /
        C27405;
    const double C11679 =
        (ae * (2 * C28296 +
               C27811 * (C27822 + C27811 * (C27811 * C27829 + C27761) +
                         C27811 * C27754 * ae) +
               (C27733 + C27754 * C27899) * ae) +
         C27786 *
             (2 * C28223 + ae * (C27797 + C27804 * C27899) +
              C27811 * (C27871 + ae * C27811 * C27804 +
                        C27811 * (ae * C27804 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27865)))) /
        C27405;
    const double C12741 =
        (3 * (C27868 + ae * C28337 + C27811 * C28223) +
         ae * (2 * C28337 + C27811 * C28339) +
         C27811 *
             (2 * C28223 + ae * C28339 +
              C27811 * (C27871 + ae * C27811 * C27804 +
                        C27811 * (ae * C27804 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27865)))) /
        C27405;
    const double C1697 = C1694 + C1695;
    const double C3307 = C3302 + C3303;
    const double C431 =
        (3 * (C27879 + ae * C27824 + C27716 * C27884) +
         ae * (2 * C27824 + C27716 * C27833) +
         C27716 *
             (2 * C27884 + ae * C27833 +
              C27716 * (C27882 + ae * C27716 * C27829 +
                        C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27876)))) /
        C27405;
    const double C838 =
        (C27786 *
         (2 * C27884 + ae * C27833 +
          C27716 * (C27882 + ae * C27716 * C27829 +
                    C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                bs[6] * C27876)))) /
        C27405;
    const double C839 =
        (C27786 * (C27879 + ae * C27824 + C27716 * C27884)) / C27405;
    const double C2312 =
        (C27879 + ae * C27824 + C27716 * C27884 +
         (C27882 + ae * C27716 * C27829 +
          C27716 *
              (ae * C27829 + C27716 * std::pow(C27714, 6) * bs[6] * C27876)) *
             C27850) /
        C27405;
    const double C2313 =
        (ae * C27817 + C27716 * C27879 + C27884 * C27850) / C27405;
    const double C5516 =
        (2 * C27786 * C27884 +
         C27786 * (C27884 + (ae * C27829 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27876) *
                                C27850)) /
        C27405;
    const double C12776 =
        (3 * (C27879 + ae * C28329 + C27811 * C28342) +
         ae * (2 * C28329 + C27811 * C28333) +
         C27811 *
             (2 * C28342 + ae * C28333 +
              C27811 * (C27882 + ae * C27811 * C27765 +
                        C27811 * (ae * C27765 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27876)))) /
        C27405;
    const double C6822 =
        (3 * (C27892 + ae * C28200 + C27786 * C28208) +
         ae * (2 * C28200 + C27786 * C28204) +
         C27786 *
             (2 * C28208 + ae * C28204 +
              C27786 * (C27895 + ae * C27786 * C27829 +
                        C27786 * (ae * C27829 + C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27889)))) /
        C27405;
    const double C12814 =
        (3 * (C27892 + ae * C28337 + C27811 * C28345) +
         ae * (2 * C28337 + C27811 * C28339) +
         C27811 *
             (2 * C28345 + ae * C28339 +
              C27811 * (C27895 + ae * C27811 * C27804 +
                        C27811 * (ae * C27804 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27889)))) /
        C27405;
    const double C1811 = C1806 + C1807;
    const double C3419 = C3416 + C3417;
    const double C28143 = C27716 * C27909;
    const double C28315 = C27786 * C27909;
    const double C28348 = C27811 * C27909;
    const double C525 =
        (3 * (C27904 + C27909 * C27720) +
         C27716 * (2 * C27716 * C27909 +
                   C27716 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C914 =
        (C27786 * (2 * C27716 * C27909 +
                   C27716 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C915 = (C27786 * (C27904 + C27909 * C27720)) / C27405;
    const double C1286 =
        (2 * ae * (2 * C27824 + C27716 * C27833) +
         C27811 * (2 * C27716 * C27909 +
                   C27716 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C1287 = (2 * ae * (C27817 + C27822 * C27720) +
                          C27811 * (C27904 + C27909 * C27720)) /
                         C27405;
    const double C2427 =
        (C27904 + C27909 * C27720 +
         (C27909 + (C27755 * C27756 + C27899 * bs[6] * std::pow(C27714, 6)) *
                       C27723 * C27720) *
             C27850) /
        C27405;
    const double C2428 = (C27716 * C27904 + C27716 * C27909 * C27850) / C27405;
    const double C2936 = (2 * ae * C27786 * C27833 +
                          C27811 * C27786 *
                              (C27909 + (C27755 * C27756 +
                                         C27899 * bs[6] * std::pow(C27714, 6)) *
                                            C27723 * C27720)) /
                         C27405;
    const double C2937 =
        (2 * ae * C27786 * C27824 + C27811 * C27786 * C27716 * C27909) / C27405;
    const double C5633 =
        (2 * C27786 * C27904 + C27786 * (C27904 + C27909 * C27850)) / C27405;
    const double C6128 = (2 * ae * (C27817 + C27822 * C27850) +
                          C27811 * (C27904 + C27909 * C27850)) /
                         C27405;
    const double C6857 =
        (3 * (C27904 + C27909 * C27850) +
         C27786 * (2 * C27786 * C27909 +
                   C27786 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C7190 =
        (2 * ae * (2 * C28200 + C27786 * C28204) +
         C27811 * (2 * C27786 * C27909 +
                   C27786 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C2777 =
        (ae * (C27811 * C27833 + C27770) +
         C27786 *
             (ae * C27808 + C27811 * (C27871 + std::pow(C27714, 6) * bs[6] *
                                                   C27865 * C27720))) /
        C27405;
    const double C5971 =
        (ae * C27799 + C27811 * C28134 +
         ae * (C27811 * C27786 * C28135 + C28116) +
         C27786 *
             (ae * (C27811 * C28135 + C27766) +
              C27786 * (ae * C28113 + C27811 * C27716 * std::pow(C27714, 6) *
                                          bs[6] * C27865))) /
        C27405;
    const double C7085 =
        (2 * (ae * (C27811 * C27822 + C27738) + C27786 * C28223) +
         ae * (C27811 * C28204 + C28190) +
         C27786 *
             (C28223 + ae * (C27811 * C27786 * C27829 + C28187) +
              C27786 * (ae * (C27811 * C27829 + C27761) +
                        C27786 * (ae * C27804 + C27811 * std::pow(C27714, 6) *
                                                    bs[6] * C27865)))) /
        C27405;
    const double C4587 = C27426 * C97;
    const double C5340 = C27426 * C1926;
    const double C5336 = C27426 * C638;
    const double C5332 = C27426 * C588;
    const double C5525 = C27426 * C2059;
    const double C5521 = C27426 * C680;
    const double C10024 = C27426 * C4088;
    const double C10020 = C27426 * C4011;
    const double C10016 = C27426 * C1010;
    const double C10012 = C27426 * C960;
    const double C10203 = C27426 * C1052;
    const double C23558 = C27426 * C2489;
    const double C23768 = C27426 * C2610;
    const double C90 =
        (C27426 / C27406 - (0 * be) / C27400) / C27406 - (0 * be) / C27400;
    const double C12917 = C27426 / C27406 - (0 * be) / C27400;
    const double C27428 = C27425 / C27400;
    const double C2140 = C1354 * C637;
    const double C2134 = C1354 * C587;
    const double C2320 = C1354 * C679;
    const double C4225 = C1354 * C1009;
    const double C4219 = C1354 * C959;
    const double C4407 = C1354 * C1051;
    const double C6180 = C6171 * C97;
    const double C6176 = C6171 * C5130;
    const double C6175 = C6171 * C1930;
    const double C6174 = C6171 * C593;
    const double C6173 = C6171 * C96;
    const double C6652 = C6171 * C5128;
    const double C6648 = C6171 * C1927;
    const double C6646 = C6171 * C639;
    const double C6644 = C6171 * C589;
    const double C6781 = C6171 * C5260;
    const double C6778 = C6171 * C2060;
    const double C6775 = C6171 * C681;
    const double C6905 = C6171 * C965;
    const double C6904 = C6171 * C2493;
    const double C6903 = C6171 * C5694;
    const double C7892 = C6171 * C5692;
    const double C7888 = C6171 * C2490;
    const double C8073 = C6171 * C5808;
    const double C8068 = C6171 * C2611;
    const double C8261 = C6171 * C4015;
    const double C8260 = C6171 * C8253;
    const double C8445 = C6171 * C1011;
    const double C8443 = C6171 * C961;
    const double C8629 = C6171 * C1053;
    const double C11008 = C6171 * C8251;
    const double C11360 = C6171 * C9810;
    const double C11359 = C6171 * C11354;
    const double C11549 = C6171 * C4089;
    const double C11547 = C6171 * C4012;
    const double C12658 = C6171 * C9886;
    const double C12656 = C6171 * C9808;
    const double C14440 = C14437 * C97;
    const double C15157 = C14437 * C1926;
    const double C15153 = C14437 * C638;
    const double C15149 = C14437 * C588;
    const double C15333 = C14437 * C2059;
    const double C15329 = C14437 * C680;
    const double C16831 = C14437 * C2489;
    const double C17045 = C14437 * C2610;
    const double C17477 = C14437 * C1010;
    const double C17473 = C14437 * C960;
    const double C17697 = C14437 * C1052;
    const double C22414 = C14437 * C4088;
    const double C22410 = C14437 * C4011;
    const double C28749 = C28713 - C28737;
    const double C28738 = C28715 - C28716;
    const double C14968 = C14429 * C597;
    const double C15160 = C14429 * C2128;
    const double C15156 = C14429 * C1930;
    const double C15152 = C14429 * C723;
    const double C15148 = C14429 * C593;
    const double C15332 = C14429 * C2314;
    const double C15328 = C14429 * C841;
    const double C16834 = C14429 * C2667;
    const double C16830 = C14429 * C2493;
    const double C17044 = C14429 * C2832;
    const double C17248 = C14429 * C969;
    const double C17476 = C14429 * C1095;
    const double C17472 = C14429 * C965;
    const double C17696 = C14429 * C1213;
    const double C22413 = C14429 * C4213;
    const double C22409 = C14429 * C4015;
    const double C22575 = C14429 * C4401;
    const double C27527 = C27526 / C27400;
    const double C4653 = C4648 * C588;
    const double C4841 = C4648 * C637;
    const double C4835 = C4648 * C638;
    const double C4829 = C4648 * C639;
    const double C5013 = C4648 * C680;
    const double C8327 = C4648 * C2493;
    const double C8321 = C4648 * C2490;
    const double C8686 = C4648 * C2611;
    const double C4655 = C4649 * C1926;
    const double C5015 = C4649 * C2059;
    const double C8329 = C4649 * C5694;
    const double C8323 = C4649 * C5692;
    const double C8688 = C4649 * C5808;
    const double C12993 = C12981 * C587;
    const double C12985 = C12981 * C588;
    const double C13171 = C12981 * C637;
    const double C13165 = C12981 * C638;
    const double C13160 = C12981 * C639;
    const double C13351 = C12981 * C679;
    const double C13347 = C12981 * C680;
    const double C16039 = C12981 * C2489;
    const double C16475 = C12981 * C2610;
    const double C17333 = C12981 * C2493;
    const double C17329 = C12981 * C2490;
    const double C17769 = C12981 * C2611;
    const double C27008 = C12981 * C8253;
    const double C27004 = C12981 * C8251;
    const double C6217 =
        (C27556 / C27406 - (0 * be) / C27400) / C27406 - (0 * be) / C27400;
    const double C14502 = C27556 / C27406 - (0 * be) / C27400;
    const double C1626 = C1616 + C1617;
    const double C1624 = C1610 + C1611;
    const double C11620 = C11612 + C10578;
    const double C11618 = C11608 + C2727;
    const double C19696 = C19692 + C2725;
    const double C1627 = C1619 + C1620;
    const double C1625 = C1613 + C1614;
    const double C472 = C172 * C211;
    const double C3408 = C172 * C3109;
    const double C484 = C481 * C28602;
    const double C3409 = C481 * C28725;
    const double C9200 = C481 * C8798;
    const double C4105 = C4103 * C1344;
    const double C9891 = C4103 * C28711;
    const double C12570 = C4103 * C28515;
    const double C22301 = C4103 * C14429;
    const double C12569 = C4102 * C6171;
    const double C334 = C331 + C322;
    const double C4294 = C4293 + C1138;
    const double C28753 = C28726 - C28744;
    const double C1440 = C1428 + C1429;
    const double C1438 = C1424 + C1425;
    const double C1436 = C1420 + C1421;
    const double C1810 = C1804 + C1805;
    const double C1808 = C1800 + C1801;
    const double C11438 = C11428 + C11429;
    const double C11436 = C11424 + C11425;
    const double C11434 = C11420 + C11421;
    const double C11432 = C11416 + C11417;
    const double C11794 = C11786 + C11787;
    const double C19478 = C19470 + C19471;
    const double C19910 = C19906 + C19907;
    const double C28745 = C28729 - C28730;
    const double C12996 = C12910 * C156;
    const double C12992 = C12910 * C151;
    const double C12988 = C12910 * C155;
    const double C12984 = C12910 * C150;
    const double C13169 = C12910 * C316;
    const double C13163 = C12910 * C315;
    const double C13350 = C12910 * C468;
    const double C13346 = C12910 * C467;
    const double C16042 = C12910 * C1014;
    const double C16038 = C12910 * C1010;
    const double C16474 = C12910 * C1250;
    const double C17332 = C12910 * C1015;
    const double C17328 = C12910 * C1011;
    const double C17550 = C12910 * C1133;
    const double C17768 = C12910 * C1251;
    const double C27007 = C12910 * C4092;
    const double C27003 = C12910 * C4089;
    const double C27335 = C12910 * C4463;
    const double C4647 =
        ((-(0 * be) / C27400) / C27406 -
         ((0 - (C27464 * C27517) / C27400) * be) / C27400) /
            C27406 -
        ((C27464 * ((-C27517 / C27400) / C27406 -
                    ((C28576 - (C27464 * C27518) / C27400) * be) / C27400) +
          C12910) *
         be) /
            C27400 +
        (-C27518 / C27400) / C27406 - (0 * be) / C27400;
    const double C27597 = C27596 / C27400;
    const double C8919 = C8914 * C960;
    const double C9092 = C8914 * C1010;
    const double C9274 = C8914 * C1051;
    const double C9268 = C8914 * C1052;
    const double C9262 = C8914 * C1053;
    const double C9756 = C8914 * C2611;
    const double C9753 = C8914 * C2610;
    const double C10948 = C8914 * C2493;
    const double C10942 = C8914 * C2490;
    const double C11293 = C8914 * C5808;
    const double C8921 = C8915 * C4011;
    const double C9094 = C8915 * C4088;
    const double C10950 = C8915 * C8253;
    const double C10944 = C8915 * C8251;
    const double C18008 = C17996 * C959;
    const double C18000 = C17996 * C960;
    const double C18178 = C17996 * C1009;
    const double C18174 = C17996 * C1010;
    const double C18356 = C17996 * C1051;
    const double C18350 = C17996 * C1052;
    const double C18345 = C17996 * C1053;
    const double C18826 = C17996 * C2611;
    const double C18824 = C17996 * C2610;
    const double C19550 = C17996 * C2489;
    const double C20192 = C17996 * C2493;
    const double C20188 = C17996 * C2490;
    const double C20608 = C17996 * C5808;
    const double C20606 = C17996 * C5807;
    const double C25108 = C17996 * C5694;
    const double C25104 = C17996 * C5692;
    const double C11961 =
        (C27622 / C27406 - (0 * be) / C27400) / C27406 - (0 * be) / C27400;
    const double C21370 = C27622 / C27406 - (0 * be) / C27400;
    const double C3492 = C3482 + C3483;
    const double C3490 = C3476 + C3477;
    const double C8191 = C8183 + C7646;
    const double C8189 = C8179 + C3960;
    const double C16549 = C16545 + C3958;
    const double C3493 = C3485 + C3486;
    const double C3491 = C3479 + C3480;
    const double C8192 = C8185 + C7647;
    const double C8190 = C8181 + C3959;
    const double C379 = C235 * C148;
    const double C1686 = C235 * C1417;
    const double C391 = C388 * C28576;
    const double C1687 = C388 * C28724;
    const double C4903 = C388 * C4578;
    const double C13238 = C388 * C12910;
    const double C2076 = C2074 * C1344;
    const double C5265 = C2074 * C28711;
    const double C6598 = C2074 * C28515;
    const double C15090 = C2074 * C14429;
    const double C6597 = C2073 * C6171;
    const double C541 = C538 + C529;
    const double C2437 = C2436 + C922;
    const double C28754 = C28731 - C28747;
    const double C3132 = C3120 + C3121;
    const double C3130 = C3116 + C3117;
    const double C3128 = C3112 + C3113;
    const double C3306 = C3300 + C3301;
    const double C3304 = C3296 + C3297;
    const double C7836 = C7826 + C7827;
    const double C7834 = C7822 + C7823;
    const double C7832 = C7818 + C7819;
    const double C7830 = C7814 + C7815;
    const double C8011 = C8003 + C8004;
    const double C16123 = C16115 + C16116;
    const double C16339 = C16335 + C16336;
    const double C28748 = C28734 - C28735;
    const double C18011 = C17890 * C219;
    const double C18007 = C17890 * C214;
    const double C18003 = C17890 * C218;
    const double C17999 = C17890 * C213;
    const double C18177 = C17890 * C375;
    const double C18173 = C17890 * C374;
    const double C18285 = C481 * C17890;
    const double C18354 = C17890 * C523;
    const double C18348 = C17890 * C522;
    const double C19553 = C17890 * C684;
    const double C19549 = C17890 * C680;
    const double C19769 = C17890 * C802;
    const double C20191 = C17890 * C685;
    const double C20187 = C17890 * C681;
    const double C20399 = C17890 * C803;
    const double C20603 = C17890 * C917;
    const double C25107 = C17890 * C2063;
    const double C25103 = C17890 * C2060;
    const double C25268 = C17890 * C2258;
    const double C8913 =
        ((-(0 * be) / C27400) / C27406 -
         ((0 - (C27467 * C27587) / C27400) * be) / C27400) /
            C27406 -
        ((C27467 * ((-C27587 / C27400) / C27406 -
                    ((C28602 - (C27467 * C27588) / C27400) * be) / C27400) +
          C17890) *
         be) /
            C27400 +
        (-C27588 / C27400) / C27406 - (0 * be) / C27400;
    const double C103 =
        ((C27719 + C27720 * C27721 * C27725) * C27723 + C27731 + C27731 +
         C27716 *
             (2 * ae * C27728 +
              C27716 *
                  (C27721 * C27725 + C27720 * bs[4] * std::pow(C27714, 4)) *
                  C27723)) /
        C27405;
    const double C642 =
        (C27731 + C27786 * (ae * C27792 + C27716 * C27796)) / C27405;
    const double C722 =
        (C27731 + C27786 * (ae * C27792 + C27716 * C27841)) / C27405;
    const double C1056 =
        (C27731 + C27811 * (ae * C27817 + C27716 * C27821)) / C27405;
    const double C1212 =
        (C27731 + C27811 * (ae * C27817 + C27716 * C27879)) / C27405;
    const double C166 = C148 * C98;
    const double C229 = C211 * C98;
    const double C1358 = C1354 * C98;
    const double C1432 = C1417 * C98;
    const double C3124 = C3109 * C98;
    const double C4596 = C27426 * C98;
    const double C14449 = C14437 * C98;
    const double C1426 = C1418 * C592;
    const double C1496 = C211 * C592;
    const double C2133 = C1345 * C592;
    const double C4589 = C27426 * C592;
    const double C4659 = C4648 * C592;
    const double C5333 = C28520 * C592;
    const double C6179 = C6171 * C592;
    const double C12989 = C12981 * C592;
    const double C14442 = C14437 * C592;
    const double C15150 = C28520 * C592;
    const double C16119 = C3109 * C592;
    const double C3050 = C148 * C964;
    const double C3118 = C3110 * C964;
    const double C4218 = C1345 * C964;
    const double C5702 = C27426 * C964;
    const double C7245 = C6171 * C964;
    const double C8925 = C8914 * C964;
    const double C10013 = C28520 * C964;
    const double C15493 = C14437 * C964;
    const double C17474 = C28520 * C964;
    const double C18004 = C17996 * C964;
    const double C19474 = C1417 * C964;
    const double C5277 = C5275 * C28711;
    const double C6600 = C5275 * C28515;
    const double C15094 = C5275 * C14429;
    const double C9903 = C9901 * C28711;
    const double C12572 = C9901 * C28515;
    const double C22305 = C9901 * C14429;
    const double C28018 = ae * C28017;
    const double C2003 =
        (C27716 * C27792 + C27786 * C28017 + C27786 * C27739 * ae) / C27400;
    const double C2554 = (C27811 * C28017) / C27400;
    const double C28098 = ae * C28097;
    const double C4156 =
        (C27716 * C27817 + C27811 * C28097 + C27811 * C27739 * ae) / C27400;
    const double C16338 = C28614 * C2778;
    const double C19771 = C28614 * C2778;
    const double C4723 = C4719 + C4720;
    const double C5074 = C5072 + C2434;
    const double C16124 = C16117 + C16118;
    const double C16550 = C16547 + C3957;
    const double C8862 = C8858 + C8859;
    const double C9037 = C9035 + C4291;
    const double C2557 = (C27811 * (C27748 + C27786 * C27807)) / C27405;
    const double C27749 = C27728 + C27747;
    const double C27918 = ae * C27917;
    const double C2492 = (C27811 * C27917) / C27400;
    const double C27961 = ae * C27960;
    const double C4591 = C27426 * C1929;
    const double C4661 = C4649 * C1929;
    const double C4721 = C211 * C1929;
    const double C5341 = C28520 * C1929;
    const double C6178 = C6171 * C1929;
    const double C14444 = C14437 * C1929;
    const double C15158 = C28520 * C1929;
    const double C8803 = C27426 * C4014;
    const double C8860 = C148 * C4014;
    const double C8927 = C8915 * C4014;
    const double C10021 = C28520 * C4014;
    const double C10377 = C6171 * C4014;
    const double C17253 = C14437 * C4014;
    const double C22411 = C28520 * C4014;
    const double C28130 = C27792 + C28128;
    const double C28158 = ae * C28157;
    const double C28300 = C27817 + C28298;
    const double C1938 = C1345 * C596;
    const double C5137 = C28520 * C596;
    const double C14970 = C28520 * C596;
    const double C4023 = C1345 * C968;
    const double C9817 = C28520 * C968;
    const double C17250 = C28520 * C968;
    const double C5139 = C28711 * C1933;
    const double C6509 = C28515 * C1933;
    const double C14972 = C14429 * C1933;
    const double C7702 = C28515 * C2496;
    const double C16622 = C14429 * C2496;
    const double C23349 = C28711 * C2496;
    const double C9819 = C28711 * C4018;
    const double C11358 = C28515 * C4018;
    const double C22239 = C14429 * C4018;
    const double C329 = C28576 * C317;
    const double C1615 = C28590 * C760;
    const double C4836 = C4579 * C760;
    const double C13166 = C28590 * C760;
    const double C3237 = C28576 * C1132;
    const double C16260 = C12910 * C1132;
    const double C19693 = C28724 * C1132;
    const double C8510 = C4579 * C2720;
    const double C11611 = C28590 * C2720;
    const double C17552 = C28590 * C2720;
    const double C10089 = C28576 * C4284;
    const double C11613 = C28724 * C4284;
    const double C27173 = C12910 * C4284;
    const double C536 = C28602 * C524;
    const double C1864 = C28602 * C916;
    const double C16546 = C28725 * C916;
    const double C19979 = C17890 * C916;
    const double C3481 = C28614 * C1288;
    const double C9269 = C8799 * C1288;
    const double C18351 = C28614 * C1288;
    const double C5636 = C28602 * C2429;
    const double C8184 = C28725 * C2429;
    const double C25432 = C17890 * C2429;
    const double C8182 = C28614 * C2938;
    const double C11289 = C8799 * C2938;
    const double C20605 = C28614 * C2938;
    const double C28253 = ae * C28252;
    const double C8387 =
        (C27786 * C27817 + C27811 * C28252 + C27811 * C28125 * ae) / C27400;
    const double C8010 = C28614 * C5972;
    const double C25270 = C28614 * C5972;
    const double C2199 =
        ((C27719 + C27850 * C27721 * C27725) * C27723 + C28022 + C28022 +
         C27786 * (2 * ae * C27792 + C27786 * C27855)) /
        C27405;
    const double C2885 =
        (C28022 + C27811 * (ae * C27817 + C27786 * C27892)) / C27405;
    const double C2205 = C1418 * C2004;
    const double C4830 = C4649 * C2004;
    const double C5410 = C4648 * C2004;
    const double C5464 = C211 * C2004;
    const double C6650 = C6171 * C2004;
    const double C8007 = C3109 * C2004;
    const double C13707 = C12981 * C2004;
    const double C2726 = C1418 * C2555;
    const double C3754 = C148 * C2555;
    const double C5920 = C4648 * C2555;
    const double C7890 = C6171 * C2555;
    const double C8005 = C3110 * C2555;
    const double C8322 = C4579 * C2555;
    const double C11067 = C1417 * C2555;
    const double C11120 = C8914 * C2555;
    const double C11419 = C28590 * C2555;
    const double C14178 = C12981 * C2555;
    const double C17330 = C28590 * C2555;
    const double C20400 = C17996 * C2555;
    const double C8514 = C4648 * C8315;
    const double C9547 = C148 * C8315;
    const double C10579 = C1418 * C8315;
    const double C11010 = C6171 * C8315;
    const double C11065 = C1417 * C8315;
    const double C11122 = C8915 * C8315;
    const double C11427 = C28590 * C8315;
    const double C17555 = C12981 * C8315;
    const double C27005 = C28590 * C8315;
    const double C475 = C174 * C211;
    const double C3413 = C174 * C3109;
    const double C335 = C332 + C325;
    const double C392 = C389 * C28576;
    const double C1692 = C389 * C28724;
    const double C13242 = C389 * C12910;
    const double C478 = C176 * C211;
    const double C336 = C333 + C328;
    const double C393 = C390 * C28576;
    const double C3243 = C3241 + C1136;
    const double C3415 = C3058 * C3110;
    const double C4100 = C3058 * C1354;
    const double C18290 = C3058 * C17996;
    const double C3242 = C3240 + C1137;
    const double C3410 = C3056 * C3110;
    const double C9201 = C3056 * C8914;
    const double C9892 = C3056 * C27426;
    const double C18286 = C3056 * C17996;
    const double C22302 = C3056 * C14437;
    const double C10094 = C10093 + C4292;
    const double C12571 = C9900 * C6171;
    const double C12705 = C12704 + C10092;
    const double C12579 = C12577 * C6171;
    const double C4519 =
        ((C27719 + C27899 * C27721 * C27725) * C27723 + C28102 + C28102 +
         C27811 * (2 * ae * C27817 + C27811 * C27904)) /
        C27405;
    const double C4525 = C3110 * C4157;
    const double C9263 = C8915 * C4157;
    const double C10265 = C148 * C4157;
    const double C10324 = C8914 * C4157;
    const double C11732 = C6171 * C4157;
    const double C11790 = C1417 * C4157;
    const double C19336 = C17996 * C4157;
    const double C1698 = C1696 * C28590;
    const double C4905 = C1696 * C4579;
    const double C13240 = C1696 * C28590;
    const double C382 = C237 * C148;
    const double C1691 = C237 * C1417;
    const double C485 = C482 * C28602;
    const double C3414 = C482 * C28725;
    const double C18289 = C482 * C17890;
    const double C542 = C539 + C532;
    const double C385 = C239 * C148;
    const double C486 = C483 * C28602;
    const double C543 = C540 + C535;
    const double C1871 = C1869 + C920;
    const double C1693 = C1504 * C1418;
    const double C2071 = C1504 * C1354;
    const double C13243 = C1504 * C12981;
    const double C1870 = C1868 + C921;
    const double C1688 = C1502 * C1418;
    const double C4904 = C1502 * C4648;
    const double C5266 = C1502 * C27426;
    const double C13239 = C1502 * C12981;
    const double C15091 = C1502 * C14437;
    const double C3420 = C3418 * C28614;
    const double C9202 = C3418 * C8799;
    const double C18287 = C3418 * C28614;
    const double C5640 = C5639 + C2435;
    const double C6599 = C5274 * C6171;
    const double C6863 = C6862 + C5638;
    const double C6607 = C6605 * C6171;
    const double C9390 =
        (C27748 + C27786 * C27807 +
         (C27775 + C27786 * (ae * C27804 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27790)) *
             C27899) /
        C27405;
    const double C27777 = C27741 + C27774;
    const double C27915 = ae * C27913;
    const double C28036 = C27811 * C27913;
    const double C9335 = (C27917 + C27913 * C27899) / C27400;
    const double C27958 = ae * C27956;
    const double C27998 = C27746 + C27997;
    const double C28066 = C27746 + C28065;
    const double C6512 = C6171 * C6503;
    const double C6902 = C6171 * C6899;
    const double C8259 = C6171 * C8252;
    const double C12529 = C6171 * C12524;
    const double C27776 = C27758 + C27773;
    const double C2495 =
        (2 * ae * C27811 * C27786 * C27741 + C27716 * C27811 * C27911) / C27405;
    const double C5131 =
        (2 * ae * (2 * C27786 * C27741 + C27786 * (C27741 + C27765 * C27850)) +
         C27716 * (2 * C27911 +
                   C27786 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C6504 =
        (3 * (C27745 + C27771 * C27850) +
         C27786 * (2 * C27911 +
                   C27786 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C6900 =
        (C27811 * (2 * C27911 +
                   C27786 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C8255 = (C27786 * C27745 + C27911 * C27899) / C27405;
    const double C9336 =
        (2 * ae * (C28169 + C27786 * C27765 * C27899) +
         C27716 * (C27911 + C27786 *
                                (C27755 * C27756 +
                                 C27720 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27899)) /
        C27405;
    const double C11355 =
        (2 * C27811 * C27911 +
         C27811 * (C27911 + C27786 *
                                (C27755 * C27756 +
                                 C27720 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27899)) /
        C27405;
    const double C9811 =
        (2 * ae * (2 * C27811 * C27741 + C27811 * (C27741 + C27765 * C27899)) +
         C27716 * (2 * C27954 +
                   C27811 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C12525 =
        (3 * (C27745 + C27771 * C27899) +
         C27811 * (2 * C27954 +
                   C27811 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C5141 = C28520 * C1932;
    const double C14974 = C28520 * C1932;
    const double C9821 = C28520 * C4017;
    const double C22241 = C28520 * C4017;
    const double C6511 = C28515 * C5132;
    const double C7705 = C28515 * C5696;
    const double C12528 = C28515 * C9812;
    const double C28013 = C28012 + C27770;
    const double C330 = C148 * C153;
    const double C763 = C148 * C636;
    const double C1622 = C1418 * C636;
    const double C13173 = C12981 * C636;
    const double C1135 = C148 * C1008;
    const double C4290 = C148 * C4087;
    const double C28119 = ae * C28117;
    const double C28118 = C27786 * C28117;
    const double C28154 = C27811 * C28117;
    const double C9389 = (C28017 + C28117 * C27899) / C27400;
    const double C28192 = C27797 + C28189;
    const double C28220 = ae * C28218;
    const double C28237 = C28126 + C28236;
    const double C12703 = C148 * C12566;
    const double C3055 = C28576 * C1013;
    const double C8861 = C28576 * C4091;
    const double C11431 = C28590 * C8317;
    const double C27009 = C28590 * C8317;
    const double C12580 = C12578 * C28515;
    const double C28093 = C28092 + C27770;
    const double C537 = C211 * C216;
    const double C919 = C211 * C678;
    const double C1291 = C211 * C1050;
    const double C3488 = C3110 * C1050;
    const double C18358 = C17996 * C1050;
    const double C2433 = C211 * C2058;
    const double C2940 = C211 * C2609;
    const double C3955 = C3110 * C2609;
    const double C18822 = C17996 * C2609;
    const double C28265 = C28264 + C28116;
    const double C28289 = ae * C28286;
    const double C28288 = C27811 * C28286;
    const double C28248 = C28247 + C28190;
    const double C6861 = C211 * C6594;
    const double C7192 = C211 * C6975;
    const double C8187 = C3110 * C6975;
    const double C25435 = C17996 * C6975;
    const double C28322 = ae * C28320;
    const double C28321 = C27811 * C28320;
    const double C28360 = C27822 + C28357;
    const double C1501 = C28602 * C683;
    const double C4722 = C28602 * C2062;
    const double C6608 = C6606 * C28515;
    const double C4226 = C1346 * C1093;
    const double C19063 = C12909 * C1093;
    const double C10025 = C28520 * C4212;
    const double C22415 = C28520 * C4212;
    const double C9544 =
        (2 * ae * (C27799 + C28113 * C27899) +
         C27786 * (C28112 + C27716 *
                                (C27755 * C27756 +
                                 C27850 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27899)) /
        C27405;
    const double C10083 =
        (2 * C27811 * C28112 +
         C27811 * (C28112 + C27716 *
                                (C27755 * C27756 +
                                 C27850 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27899)) /
        C27405;
    const double C28185 = C28179 + C28180;
    const double C11606 =
        (2 * ae * (2 * C27811 * C27797 + C27811 * (C27797 + C27804 * C27899)) +
         C27786 * (2 * C28216 +
                   C27811 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C12697 =
        (3 * (C27855 + C27860 * C27899) +
         C27811 * (2 * C28216 +
                   C27811 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C1621 = C28590 * C759;
    const double C13172 = C28590 * C759;
    const double C3239 = C28576 * C1131;
    const double C16262 = C28590 * C2719;
    const double C19695 = C28590 * C2719;
    const double C9036 = C28576 * C4283;
    const double C11615 = C28590 * C8505;
    const double C27175 = C28590 * C8505;
    const double C12702 = C28576 * C10084;
    const double C11123 = C8800 * C8575;
    const double C26724 = C21265 * C8575;
    const double C1699 = C1697 * C28590;
    const double C13244 = C1697 * C28590;
    const double C2321 = C1346 * C839;
    const double C13814 = C12909 * C839;
    const double C5526 = C28520 * C2313;
    const double C15334 = C28520 * C2313;
    const double C3421 = C3419 * C28614;
    const double C18291 = C3419 * C28614;
    const double C5632 =
        (2 * C27786 * C28143 +
         C27786 * (C28143 + C27716 *
                                (C27755 * C27756 +
                                 C27899 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27850)) /
        C27405;
    const double C6127 =
        (2 * ae * (C27824 + C28135 * C27850) +
         C27811 * (C28143 + C27716 *
                                (C27755 * C27756 +
                                 C27899 * bs[6] * std::pow(C27714, 6)) *
                                C27723 * C27850)) /
        C27405;
    const double C28353 = C28347 + C28348;
    const double C1867 = C28602 * C915;
    const double C3487 = C28614 * C1287;
    const double C18357 = C28614 * C1287;
    const double C5073 = C28602 * C2428;
    const double C16548 = C28614 * C2937;
    const double C19981 = C28614 * C2937;
    const double C6860 = C28602 * C5633;
    const double C8186 = C28614 * C6128;
    const double C25434 = C28614 * C6128;
    const double C5528 = C5521 + C5522;
    const double C10029 = C10016 + C10017;
    const double C12921 = C12917 * C98;
    const double C13583 = C1504 * C12917;
    const double C13645 = C12917 * C637;
    const double C13639 = C12917 * C587;
    const double C13813 = C12917 * C679;
    const double C18950 = C3058 * C12917;
    const double C19062 = C12917 * C1009;
    const double C19056 = C12917 * C959;
    const double C19227 = C12917 * C1051;
    const double C27430 = C28515 - C27428;
    const double C6660 = C6652 + C6653;
    const double C6658 = C6648 + C6649;
    const double C6657 = C6646 + C6647;
    const double C6656 = C6644 + C6645;
    const double C6785 = C6781 + C6782;
    const double C6784 = C6778 + C6779;
    const double C6783 = C6775 + C6776;
    const double C7898 = C7892 + C7893;
    const double C7896 = C7888 + C7889;
    const double C8076 = C8073 + C8074;
    const double C8075 = C8068 + C8069;
    const double C8452 = C8445 + C8446;
    const double C8451 = C8443 + C8444;
    const double C8631 = C8629 + C8630;
    const double C11012 = C11008 + C11009;
    const double C11554 = C11549 + C11550;
    const double C11553 = C11547 + C11548;
    const double C12661 = C12658 + C12659;
    const double C12660 = C12656 + C12657;
    const double C15336 = C15329 + C15330;
    const double C17482 = C17477 + C17478;
    const double C13462 = C28749 * C597;
    const double C13580 = C2074 * C28749;
    const double C13642 = C28749 * C723;
    const double C13636 = C28749 * C593;
    const double C13810 = C28749 * C841;
    const double C18879 = C28749 * C969;
    const double C18947 = C4103 * C28749;
    const double C19059 = C28749 * C1095;
    const double C19053 = C28749 * C965;
    const double C19224 = C28749 * C1213;
    const double C73 = (C28711 - C28736) / C27406 - (C28749 * C28511) / C27400;
    const double C13464 = C28738 * C596;
    const double C13638 = C28738 * C592;
    const double C13812 = C28738 * C840;
    const double C18881 = C28738 * C968;
    const double C19061 = C28738 * C1094;
    const double C19055 = C28738 * C964;
    const double C74 =
        (2 * C28520 + C28749) / C27406 - (C28738 * C28511) / C27400;
    const double C75 = C28738 / C27406 - C28523 / C27415;
    const double C27528 = C28576 - C27527;
    const double C4664 = C4653 + C4654;
    const double C5018 = C5013 + C5014;
    const double C8335 = C8327 + C8328;
    const double C5019 = C5015 + C5016;
    const double C8336 = C8329 + C8330;
    const double C13004 = C12993 + C12994;
    const double C13000 = C12985 + C12986;
    const double C13356 = C13351 + C13352;
    const double C13354 = C13347 + C13348;
    const double C17338 = C17333 + C17334;
    const double C14514 = C14502 * C1929;
    const double C14508 = C14502 * C1926;
    const double C14677 = C14502 * C2004;
    const double C14859 = C14502 * C2059;
    const double C25553 = C14502 * C5694;
    const double C25547 = C14502 * C5692;
    const double C25889 = C14502 * C5808;
    const double C1630 = C1626 + C1617;
    const double C1628 = C1624 + C1611;
    const double C11624 = C11620 + C10578;
    const double C11622 = C11618 + C2727;
    const double C19698 = C19696 + C2725;
    const double C1631 = C1627 + C1620;
    const double C1629 = C1625 + C1614;
    const double C337 = C334 + C323;
    const double C4295 = C4294 + C4287;
    const double C14511 = C28753 * C155;
    const double C14505 = C28753 * C150;
    const double C14680 = C28753 * C315;
    const double C14750 = C388 * C28753;
    const double C14856 = C28753 * C467;
    const double C25550 = C28753 * C1015;
    const double C25544 = C28753 * C1011;
    const double C25718 = C28753 * C1133;
    const double C25886 = C28753 * C1251;
    const double C6166 =
        (C28724 - C28743) / C27406 - (C28753 * C28586) / C27400;
    const double C14507 = C28745 * C638;
    const double C14683 = C28745 * C760;
    const double C14752 = C1696 * C28745;
    const double C14858 = C28745 * C878;
    const double C25552 = C28745 * C2558;
    const double C25546 = C28745 * C2555;
    const double C25720 = C28745 * C2720;
    const double C6167 =
        (2 * C28590 + C28753) / C27406 - (C28745 * C28586) / C27400;
    const double C6168 = C28745 / C27406 - C28593 / C27415;
    const double C4657 = C4647 * C97;
    const double C4651 = C4647 * C92;
    const double C4842 = C4647 * C151;
    const double C4832 = C4647 * C150;
    const double C4828 = C4647 * C149;
    const double C4902 = C235 * C4647;
    const double C5011 = C4647 * C213;
    const double C5411 = C4647 * C639;
    const double C5408 = C4647 * C638;
    const double C5921 = C4647 * C1011;
    const double C5918 = C4647 * C1010;
    const double C7952 = C4647 * C2555;
    const double C8325 = C4647 * C965;
    const double C8319 = C4647 * C961;
    const double C8515 = C4647 * C4089;
    const double C8684 = C4647 * C1053;
    const double C27598 = C28602 - C27597;
    const double C8930 = C8919 + C8920;
    const double C9097 = C9092 + C9093;
    const double C10956 = C10948 + C10949;
    const double C10953 = C10942 + C10943;
    const double C9098 = C9094 + C9095;
    const double C10957 = C10950 + C10951;
    const double C18019 = C18008 + C18009;
    const double C18015 = C18000 + C18001;
    const double C18183 = C18178 + C18179;
    const double C18181 = C18174 + C18175;
    const double C19557 = C19550 + C19551;
    const double C20197 = C20192 + C20193;
    const double C20195 = C20188 + C20189;
    const double C25113 = C25108 + C25109;
    const double C25111 = C25104 + C25105;
    const double C21382 = C21370 * C4014;
    const double C21376 = C21370 * C4011;
    const double C21544 = C21370 * C4088;
    const double C21710 = C21370 * C4157;
    const double C26559 = C21370 * C8253;
    const double C26553 = C21370 * C8251;
    const double C26723 = C21370 * C8315;
    const double C3496 = C3492 + C3483;
    const double C3494 = C3490 + C3477;
    const double C8195 = C8191 + C7646;
    const double C8193 = C8189 + C3960;
    const double C16551 = C16549 + C3958;
    const double C3497 = C3493 + C3486;
    const double C3495 = C3491 + C3480;
    const double C8196 = C8192 + C7647;
    const double C8194 = C8190 + C3959;
    const double C544 = C541 + C530;
    const double C2438 = C2437 + C2432;
    const double C21379 = C28754 * C218;
    const double C21373 = C28754 * C213;
    const double C21541 = C28754 * C374;
    const double C21650 = C481 * C28754;
    const double C21713 = C28754 * C522;
    const double C26556 = C28754 * C685;
    const double C26550 = C28754 * C681;
    const double C26720 = C28754 * C803;
    const double C26885 = C28754 * C917;
    const double C11885 =
        (C28725 - C28746) / C27406 - (C28754 * C28610) / C27400;
    const double C21375 = C28748 * C1052;
    const double C21543 = C28748 * C1174;
    const double C21652 = C3418 * C28748;
    const double C21716 = C28748 * C1288;
    const double C26558 = C28748 * C2614;
    const double C26552 = C28748 * C2611;
    const double C26722 = C28748 * C2779;
    const double C26887 = C28748 * C2938;
    const double C11886 =
        (2 * C28614 + C28754) / C27406 - (C28748 * C28610) / C27400;
    const double C11887 = C28748 / C27406 - C28617 / C27415;
    const double C8923 = C8913 * C97;
    const double C8917 = C8913 * C92;
    const double C9090 = C8913 * C150;
    const double C9199 = C172 * C8913;
    const double C9275 = C8913 * C214;
    const double C9265 = C8913 * C213;
    const double C9261 = C8913 * C212;
    const double C9757 = C8913 * C681;
    const double C9754 = C8913 * C680;
    const double C10325 = C8913 * C1053;
    const double C10322 = C8913 * C1052;
    const double C10946 = C8913 * C593;
    const double C10940 = C8913 * C589;
    const double C11118 = C8913 * C639;
    const double C11294 = C8913 * C2060;
    const double C11851 = C8913 * C2611;
    const double C1427 = C28590 * C642;
    const double C4660 = C4579 * C642;
    const double C12990 = C28590 * C642;
    const double C14513 = C28745 * C642;
    const double C2139 = C1345 * C722;
    const double C5337 = C28520 * C722;
    const double C13644 = C28738 * C722;
    const double C15154 = C28520 * C722;
    const double C3119 = C28614 * C1056;
    const double C8926 = C8799 * C1056;
    const double C18005 = C28614 * C1056;
    const double C21381 = C28748 * C1056;
    const double C4406 = C1345 * C1212;
    const double C10204 = C28520 * C1212;
    const double C17698 = C28520 * C1212;
    const double C19226 = C28738 * C1212;
    const double C175 = C166 + C167;
    const double C238 = C229 + C230;
    const double C1442 = C1432 + C1433;
    const double C3134 = C3124 + C3125;
    const double C1503 = C1496 + C1497;
    const double C5347 = C5332 + C5333;
    const double C15164 = C15149 + C15150;
    const double C16125 = C16119 + C16120;
    const double C3057 = C3050 + C3051;
    const double C10027 = C10012 + C10013;
    const double C17480 = C17473 + C17474;
    const double C19480 = C19474 + C19475;
    const double C2198 =
        (C27716 * C27855 + C28018 + C28018 +
         C27786 * (2 * ae * C27799 + C27786 * C27716 * C27860)) /
        C27405;
    const double C2884 =
        (C28018 + C27811 * (ae * C27824 + C27786 * C27716 * C27895)) / C27405;
    const double C2203 = C1418 * C2003;
    const double C4656 = C4580 * C2003;
    const double C4838 = C4649 * C2003;
    const double C4907 = C211 * C2003;
    const double C5344 = C27426 * C2003;
    const double C5407 = C4648 * C2003;
    const double C13705 = C12981 * C2003;
    const double C14509 = C14433 * C2003;
    const double C14685 = C14502 * C2003;
    const double C15161 = C14437 * C2003;
    const double C2724 = C1418 * C2554;
    const double C3753 = C148 * C2554;
    const double C5917 = C4648 * C2554;
    const double C14176 = C12981 * C2554;
    const double C16040 = C28590 * C2554;
    const double C16337 = C3110 * C2554;
    const double C16835 = C14437 * C2554;
    const double C19473 = C28590 * C2554;
    const double C19770 = C17996 * C2554;
    const double C20331 = C1417 * C2554;
    const double C23562 = C27426 * C2554;
    const double C4518 =
        (C27716 * C27904 + C28098 + C28098 +
         C27811 * (2 * ae * C27824 + C27811 * C27716 * C27909)) /
        C27405;
    const double C4523 = C3110 * C4156;
    const double C8922 = C8800 * C4156;
    const double C9204 = C148 * C4156;
    const double C9271 = C8915 * C4156;
    const double C10207 = C27426 * C4156;
    const double C10321 = C8914 * C4156;
    const double C19334 = C17996 * C4156;
    const double C21377 = C21265 * C4156;
    const double C21718 = C21370 * C4156;
    const double C22576 = C14437 * C4156;
    const double C4906 = C4723 * C4649;
    const double C5272 = C4723 * C27426;
    const double C14753 = C4723 * C14502;
    const double C15095 = C4723 * C14437;
    const double C5075 = C5074 + C2434;
    const double C16552 = C16550 + C3957;
    const double C9203 = C8862 * C8915;
    const double C9898 = C8862 * C27426;
    const double C21653 = C8862 * C21370;
    const double C22306 = C8862 * C14437;
    const double C9038 = C9037 + C4291;
    const double C16044 = C28590 * C2557;
    const double C19477 = C28590 * C2557;
    const double C27750 = C27749 + C27742;
    const double C595 =
        (C27786 * C27745 + C27918 + C27918 +
         C27716 * (2 * ae * C27786 * C27741 + C27716 * C27911)) /
        C27405;
    const double C2006 = (ae * C27792 + C27716 * C27796 + C27918 +
                          C27786 * (C27748 + C27786 * C27807)) /
                         C27405;
    const double C2127 = (ae * C27792 + C27716 * C27841 + C27918 +
                          C27786 * (C27748 + C27786 * C27846)) /
                         C27405;
    const double C2613 = (C27918 + C27811 * C27786 * C27832) / C27405;
    const double C2831 = (C27918 + C27811 * C27786 * C27884) / C27405;
    const double C5700 = C27426 * C2492;
    const double C7244 = C6171 * C2492;
    const double C15491 = C14437 * C2492;
    const double C16043 = C12981 * C2492;
    const double C16121 = C3110 * C2492;
    const double C16832 = C28520 * C2492;
    const double C19476 = C1418 * C2492;
    const double C19554 = C17996 * C2492;
    const double C23559 = C28520 * C2492;
    const double C967 =
        (C27811 * C27745 + C27961 + C27961 +
         C27716 * (2 * ae * C27811 * C27741 + C27716 * C27954)) /
        C27405;
    const double C2666 = (C27961 + C27786 * C27811 * C27846) / C27405;
    const double C4159 = (ae * C27817 + C27716 * C27821 + C27961 +
                          C27811 * (C27748 + C27811 * C27832)) /
                         C27405;
    const double C4400 = (ae * C27817 + C27716 * C27879 + C27961 +
                          C27811 * (C27748 + C27811 * C27884)) /
                         C27405;
    const double C5351 = C5340 + C5341;
    const double C15168 = C15157 + C15158;
    const double C10031 = C10020 + C10021;
    const double C22417 = C22410 + C22411;
    const double C28131 = C28130 + C28127;
    const double C5914 =
        (C27811 * C27855 + C28158 + C28158 +
         C27786 * (2 * ae * C27811 * C27797 + C27786 * C27811 * C27860)) /
        C27405;
    const double C8682 = (ae * C27817 + C27786 * C27892 + C28158 +
                          C27811 * (C28129 + C27811 * C28208)) /
                         C27405;
    const double C28301 = C28300 + C28297;
    const double C8743 =
        (C27786 * C27904 + C28253 + C28253 +
         C27811 * (2 * ae * C28200 + C27811 * C27786 * C27909)) /
        C27405;
    const double C8747 = C3110 * C8387;
    const double C9755 = C8915 * C8387;
    const double C10945 = C8800 * C8387;
    const double C11182 = C6171 * C8387;
    const double C11792 = C1418 * C8387;
    const double C11850 = C8914 * C8387;
    const double C21212 = C17996 * C8387;
    const double C22185 = C21370 * C8387;
    const double C26554 = C21265 * C8387;
    const double C27336 = C12981 * C8387;
    const double C8687 = C4579 * C2885;
    const double C11789 = C28590 * C2885;
    const double C17770 = C28590 * C2885;
    const double C25888 = C28745 * C2885;
    const double C5466 = C5464 + C5465;
    const double C6659 = C6650 + C6651;
    const double C8013 = C8007 + C8008;
    const double C11619 = C11610 + C2726;
    const double C7897 = C7890 + C7891;
    const double C8012 = C8005 + C8006;
    const double C8332 = C8321 + C8322;
    const double C11125 = C11120 + C11121;
    const double C11433 = C11418 + C11419;
    const double C17336 = C17329 + C17330;
    const double C20403 = C20400 + C20401;
    const double C11621 = C11614 + C10579;
    const double C11013 = C11010 + C11011;
    const double C11437 = C11426 + C11427;
    const double C27011 = C27004 + C27005;
    const double C338 = C335 + C326;
    const double C339 = C336 + C329;
    const double C3244 = C3242 + C3237;
    const double C10095 = C10094 + C10089;
    const double C10267 = C10265 + C10266;
    const double C11734 = C11732 + C11733;
    const double C11796 = C11790 + C11791;
    const double C545 = C542 + C533;
    const double C546 = C543 + C536;
    const double C1872 = C1870 + C1864;
    const double C5641 = C5640 + C5636;
    const double C27778 = C27777 + C27766;
    const double C5755 =
        (C27811 * (C27807 + C27915 +
                   C27786 * (C27775 + C27786 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C28037 = ae * C28036;
    const double C9338 = C27426 * C9335;
    const double C10376 = C6171 * C9335;
    const double C17251 = C14437 * C9335;
    const double C27999 = ae * C27998;
    const double C5129 = (2 * C27917 + C27786 * C27998) / C27400;
    const double C5693 = (C27811 * C27998) / C27400;
    const double C28067 = ae * C28066;
    const double C9809 = (2 * C27960 + C27811 * C28066) / C27400;
    const double C16624 = C28520 * C2495;
    const double C23351 = C28520 * C2495;
    const double C10835 = C28515 * C8255;
    const double C28014 = ae * C28013;
    const double C2002 =
        (C27792 + C27797 * C27720 + C27786 * C28013 + C27786 * C27767 * ae) /
        C27400;
    const double C2553 = (C27811 * C28013) / C27400;
    const double C28120 = C27799 + C28118;
    const double C28155 = ae * C28154;
    const double C9546 = C148 * C9389;
    const double C10580 = C1418 * C9389;
    const double C17553 = C12981 * C9389;
    const double C28193 = C28192 + C28187;
    const double C28238 = ae * C28237;
    const double C11413 = (2 * C28157 + C27811 * C28237) / C27400;
    const double C8863 = C8860 + C8861;
    const double C11439 = C11430 + C11431;
    const double C27013 = C27008 + C27009;
    const double C28094 = ae * C28093;
    const double C4155 =
        (C27817 + C27822 * C27720 + C27811 * C28093 + C27811 * C27767 * ae) /
        C27400;
    const double C28266 = ae * C28265;
    const double C9441 =
        (C27786 * C27824 + C27811 * C28265 + C27811 * C28114 * ae) / C27400;
    const double C28290 = C27824 + C28288;
    const double C28249 = ae * C28248;
    const double C8386 =
        (C27817 + C27822 * C27850 + C27811 * C28248 + C27811 * C28188 * ae) /
        C27400;
    const double C28323 = C28200 + C28321;
    const double C28361 = C28360 + C28355;
    const double C4724 = C4721 + C4722;
    const double C4232 = C4225 + C4226;
    const double C10033 = C10024 + C10025;
    const double C22419 = C22414 + C22415;
    const double C3245 = C3243 + C3239;
    const double C12706 = C12705 + C12702;
    const double C11126 = C11122 + C11123;
    const double C2324 = C2320 + C2321;
    const double C5530 = C5525 + C5526;
    const double C15338 = C15333 + C15334;
    const double C1873 = C1871 + C1867;
    const double C6864 = C6863 + C6860;
    const double C13817 = C13813 + C13814;
    const double C19069 = C19062 + C19063;
    const double C27432 = C27430 * ae;
    const double C27431 = C27430 * C27410;
    const double C1350 =
        ((-C27399 / C27400) / C27406 - (C27417 * be) / C27400) / C27406 -
        ((C27401 * ((-C27402 / C27400) / C27406 - (C27430 * be) / C27400) +
          C14429) *
         be) /
            C27400 +
        (-C27420 / C27400) / C27406 - (0 * be) / C27400;
    const double C1352 =
        ((-C27402 / C27400) / C27406 - (C27430 * be) / C27400) / C27406 -
        ((C27401 * ((-C27420 / C27400) / C27406 - (0 * be) / C27400) + C28520) *
         be) /
            C27400;
    const double C14435 = (-C27402 / C27400) / C27406 - (C27430 * be) / C27400;
    const double C6780 = C6660 * C211;
    const double C6777 = C6658 * C211;
    const double C8070 = C6658 * C3109;
    const double C6774 = C6656 * C211;
    const double C8065 = C6656 * C3109;
    const double C11177 = C6656 * C8913;
    const double C6788 = C6785 * C28602;
    const double C6787 = C6784 * C28602;
    const double C8071 = C6784 * C28725;
    const double C25328 = C6784 * C17890;
    const double C6786 = C6783 * C28602;
    const double C8066 = C6783 * C28725;
    const double C11178 = C6783 * C8798;
    const double C25324 = C6783 * C17890;
    const double C26779 = C6783 * C28754;
    const double C8072 = C7898 * C3110;
    const double C8449 = C7898 * C4649;
    const double C25329 = C7898 * C17996;
    const double C25665 = C7898 * C14502;
    const double C8067 = C7896 * C3110;
    const double C8447 = C7896 * C4648;
    const double C11179 = C7896 * C8914;
    const double C11545 = C7896 * C1418;
    const double C25325 = C7896 * C17996;
    const double C27116 = C7896 * C12981;
    const double C8078 = C8076 * C28614;
    const double C25330 = C8076 * C28614;
    const double C8077 = C8075 * C28614;
    const double C11180 = C8075 * C8799;
    const double C25326 = C8075 * C28614;
    const double C26781 = C8075 * C28748;
    const double C8454 = C8452 * C4578;
    const double C11544 = C8452 * C28724;
    const double C12653 = C8452 * C28576;
    const double C25662 = C8452 * C28753;
    const double C27115 = C8452 * C12910;
    const double C8453 = C8451 * C4647;
    const double C11543 = C8451 * C1417;
    const double C12652 = C8451 * C148;
    const double C11181 = C11012 * C8915;
    const double C11551 = C11012 * C1418;
    const double C26782 = C11012 * C21370;
    const double C27120 = C11012 * C12981;
    const double C11556 = C11554 * C28724;
    const double C12655 = C11554 * C28576;
    const double C27119 = C11554 * C12910;
    const double C11555 = C11553 * C1417;
    const double C12654 = C11553 * C148;
    const double C12663 = C12661 * C28576;
    const double C12662 = C12660 * C148;
    const double C27529 = C27528 * C27410;
    const double C27546 = C27528 * ae;
    const double C12980 = (-C27517 / C27400) / C27406 - (C27528 * be) / C27400;
    const double C14863 = C14859 + C14860;
    const double C25560 = C25553 + C25554;
    const double C1634 = C1630 + C1618;
    const double C1632 = C1628 + C1612;
    const double C11628 = C11624 + C11613;
    const double C11626 = C11622 + C11609;
    const double C19700 = C19698 + C19693;
    const double C1635 = C1631 + C1621;
    const double C1633 = C1629 + C1615;
    const double C4296 = C4295 * C1344;
    const double C10086 = C4295 * C28711;
    const double C12699 = C4295 * C28515;
    const double C19120 = C4295 * C28749;
    const double C22470 = C4295 * C14429;
    const double C4666 = C4657 + C4658;
    const double C4663 = C4651 + C4652;
    const double C5017 = C5011 + C5012;
    const double C8334 = C8325 + C8326;
    const double C8331 = C8319 + C8320;
    const double C8690 = C8684 + C8685;
    const double C27599 = C27598 * C27410;
    const double C27612 = C27598 * ae;
    const double C17995 = (-C27587 / C27400) / C27406 - (C27598 * be) / C27400;
    const double C21548 = C21544 + C21545;
    const double C26566 = C26559 + C26560;
    const double C26727 = C26723 + C26724;
    const double C3500 = C3496 + C3484;
    const double C3498 = C3494 + C3478;
    const double C8199 = C8195 + C8184;
    const double C8197 = C8193 + C8180;
    const double C16553 = C16551 + C16546;
    const double C3501 = C3497 + C3487;
    const double C3499 = C3495 + C3481;
    const double C8200 = C8196 + C8186;
    const double C8198 = C8194 + C8182;
    const double C547 = C544 * C28576;
    const double C1862 = C544 * C28724;
    const double C5070 = C544 * C4578;
    const double C13407 = C544 * C12910;
    const double C14914 = C544 * C28753;
    const double C8932 = C8923 + C8924;
    const double C8929 = C8917 + C8918;
    const double C9096 = C9090 + C9091;
    const double C10955 = C10946 + C10947;
    const double C10952 = C10940 + C10941;
    const double C11124 = C11118 + C11119;
    const double C1439 = C1426 + C1427;
    const double C4667 = C4659 + C4660;
    const double C13002 = C12989 + C12990;
    const double C5349 = C5336 + C5337;
    const double C15166 = C15153 + C15154;
    const double C3131 = C3118 + C3119;
    const double C8933 = C8925 + C8926;
    const double C18017 = C18004 + C18005;
    const double C10210 = C10203 + C10204;
    const double C17700 = C17697 + C17698;
    const double C2070 = C1503 * C1345;
    const double C5267 = C1503 * C28520;
    const double C13582 = C1503 * C28738;
    const double C15092 = C1503 * C28520;
    const double C4099 = C3057 * C1345;
    const double C9893 = C3057 * C28520;
    const double C18949 = C3057 * C28738;
    const double C22303 = C3057 * C28520;
    const double C4839 = C4580 * C2198;
    const double C14686 = C14433 * C2198;
    const double C16476 = C28590 * C2884;
    const double C19909 = C28590 * C2884;
    const double C4665 = C4655 + C4656;
    const double C4909 = C4907 + C4908;
    const double C14518 = C14508 + C14509;
    const double C19697 = C19694 + C2724;
    const double C16046 = C16039 + C16040;
    const double C16340 = C16337 + C16338;
    const double C19479 = C19472 + C19473;
    const double C19773 = C19770 + C19771;
    const double C9272 = C8800 * C4518;
    const double C21719 = C21265 * C4518;
    const double C8931 = C8921 + C8922;
    const double C9206 = C9204 + C9205;
    const double C21386 = C21376 + C21377;
    const double C5076 = C5075 + C5073;
    const double C16554 = C16552 + C16548;
    const double C9039 = C9038 + C9036;
    const double C27751 = ae * C27750;
    const double C99 =
        (2 * C27730 + C27716 * C27750 + (C27719 + C27733 * C27720) * ae) /
        C27400;
    const double C591 = (C27786 * C27750) / C27400;
    const double C963 = (C27811 * C27750) / C27400;
    const double C1940 = C1346 * C595;
    const double C13466 = C12909 * C595;
    const double C4662 = C4580 * C2006;
    const double C14515 = C14433 * C2006;
    const double C5345 = C28520 * C2127;
    const double C15162 = C28520 * C2127;
    const double C16122 = C28614 * C2613;
    const double C19555 = C28614 * C2613;
    const double C17046 = C28520 * C2831;
    const double C23769 = C28520 * C2831;
    const double C16048 = C16043 + C16044;
    const double C16838 = C16831 + C16832;
    const double C19481 = C19476 + C19477;
    const double C23565 = C23558 + C23559;
    const double C4025 = C1346 * C967;
    const double C18883 = C12909 * C967;
    const double C16836 = C28520 * C2666;
    const double C23563 = C28520 * C2666;
    const double C8928 = C8800 * C4159;
    const double C21383 = C21265 * C4159;
    const double C10208 = C28520 * C4400;
    const double C22577 = C28520 * C4400;
    const double C28132 = ae * C28131;
    const double C5206 =
        (2 * C28021 + C27786 * C28131 + (C27719 + C27733 * C27850) * ae) /
        C27400;
    const double C5754 = (C27811 * C28131) / C27400;
    const double C8512 = C4580 * C5914;
    const double C25722 = C14433 * C5914;
    const double C11793 = C28590 * C8682;
    const double C27337 = C28590 * C8682;
    const double C28302 = ae * C28301;
    const double C9954 =
        (2 * C28101 + C27811 * C28301 + (C27719 + C27733 * C27899) * ae) /
        C27400;
    const double C11291 = C8800 * C8743;
    const double C26889 = C21265 * C8743;
    const double C10954 = C10944 + C10945;
    const double C11184 = C11182 + C11183;
    const double C26563 = C26553 + C26554;
    const double C8691 = C8686 + C8687;
    const double C11795 = C11788 + C11789;
    const double C17772 = C17769 + C17770;
    const double C11623 = C11619 + C2726;
    const double C8448 = C7897 * C4579;
    const double C11546 = C7897 * C28590;
    const double C25664 = C7897 * C28745;
    const double C27117 = C7897 * C28590;
    const double C11625 = C11621 + C10579;
    const double C11552 = C11013 * C28590;
    const double C27121 = C11013 * C28590;
    const double C4288 = C3244 * C1345;
    const double C10087 = C3244 * C28520;
    const double C19121 = C3244 * C28738;
    const double C22471 = C3244 * C28520;
    const double C10096 = C10095 * C28711;
    const double C12700 = C10095 * C28515;
    const double C22472 = C10095 * C14429;
    const double C548 = C545 * C28576;
    const double C1865 = C545 * C28724;
    const double C13409 = C545 * C12910;
    const double C549 = C546 * C28576;
    const double C1874 = C1872 * C28590;
    const double C5071 = C1872 * C4579;
    const double C13408 = C1872 * C28590;
    const double C14915 = C1872 * C28745;
    const double C27780 = ae * C27778;
    const double C27779 = C27716 * C27778;
    const double C27912 = C27786 * C27778;
    const double C27955 = C27811 * C27778;
    const double C1928 = (C27750 + C27778 * C27850) / C27400;
    const double C4013 = (C27750 + C27778 * C27899) / C27400;
    const double C2494 =
        (C27811 * C27911 + C28037 + C28037 +
         C27716 *
             (2 * ae * C27811 * C27786 * C27765 +
              C27716 * C27811 * C27786 *
                  (C27755 * C27756 + C27720 * bs[6] * std::pow(C27714, 6)) *
                  C27723)) /
        C27405;
    const double C5861 =
        (C27811 * C27846 + C28037 +
         C27786 * (C27958 + C27786 * C27811 *
                                (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27838))) /
        C27405;
    const double C9442 =
        (C27786 * C27832 + C28037 +
         C27811 * (C27915 + C27811 * C27786 *
                                (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27815))) /
        C27405;
    const double C9648 =
        (C27786 * C27884 + C28037 +
         C27811 * (C27915 + C27811 * C27786 *
                                (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27876))) /
        C27405;
    const double C1931 =
        (C27745 + C27771 * C27850 + C27999 + C27999 +
         C27716 * (2 * ae * (C27741 + C27765 * C27850) +
                   C27716 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C5207 =
        (2 * (C27748 + C27786 * C27807) + C27999 +
         C27786 * (C27807 + C27915 +
                   C27786 * (C27775 + C27786 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C5327 =
        (2 * (C27748 + C27786 * C27846) + C27999 +
         C27786 * (C27846 + C27915 +
                   C27786 * (C27775 + C27786 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27838)))) /
        C27405;
    const double C5809 =
        (C27999 +
         C27811 * (C27832 + (ae * C27829 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27815) *
                                C27850)) /
        C27405;
    const double C6023 =
        (C27999 +
         C27811 * (C27884 + (ae * C27829 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27876) *
                                C27850)) /
        C27405;
    const double C5142 = C27426 * C5129;
    const double C6177 = C6171 * C5129;
    const double C14975 = C14437 * C5129;
    const double C5698 = C27426 * C5693;
    const double C7243 = C6171 * C5693;
    const double C15489 = C14437 * C5693;
    const double C4016 =
        (C27745 + C27771 * C27899 + C28067 + C28067 +
         C27716 * (2 * ae * (C27741 + C27765 * C27899) +
                   C27716 * (C27771 + (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C9493 =
        (C28067 +
         C27786 * (C27846 + (ae * C27804 +
                             C27716 * std::pow(C27714, 6) * bs[6] * C27838) *
                                C27899)) /
        C27405;
    const double C9955 =
        (2 * (C27748 + C27811 * C27832) + C28067 +
         C27811 * (C27832 + C27958 +
                   C27811 * (C27775 + C27811 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27815)))) /
        C27405;
    const double C10198 =
        (2 * (C27748 + C27811 * C27884) + C28067 +
         C27811 * (C27884 + C27958 +
                   C27811 * (C27775 + C27811 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27876)))) /
        C27405;
    const double C9822 = C27426 * C9809;
    const double C11890 = C6171 * C9809;
    const double C22242 = C14437 * C9809;
    const double C2197 =
        (C27855 + C27860 * C27720 + C28014 + C28014 +
         C27786 * (2 * ae * C27808 +
                   C27786 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C2883 =
        (C28014 + C27811 * (ae * C27833 +
                            C27786 * (C27895 + std::pow(C27714, 6) * bs[6] *
                                                   C27889 * C27720))) /
        C27405;
    const double C2201 = C1418 * C2002;
    const double C4840 = C4649 * C2002;
    const double C13703 = C12981 * C2002;
    const double C14687 = C14502 * C2002;
    const double C2722 = C1418 * C2553;
    const double C3752 = C148 * C2553;
    const double C14174 = C12981 * C2553;
    const double C28121 = C28120 + C28116;
    const double C5913 =
        (C27811 * C28112 + C28155 + C28155 +
         C27786 *
             (2 * ae * C27811 * C28113 +
              C27786 * C27811 * C27716 *
                  (C27755 * C27756 + C27850 * bs[6] * std::pow(C27714, 6)) *
                  C27723)) /
        C27405;
    const double C9699 =
        (ae * C27824 + C27786 * C28140 + C28155 +
         C27811 * (C28119 + C27811 * (ae * C28135 + C27786 * C27716 *
                                                        std::pow(C27714, 6) *
                                                        bs[6] * C27889))) /
        C27405;
    const double C28195 = ae * C28193;
    const double C28194 = C27786 * C28193;
    const double C28217 = C27811 * C28193;
    const double C8314 = (C28131 + C28193 * C27899) / C27400;
    const double C8504 =
        (C27855 + C27860 * C27899 + C28238 + C28238 +
         C27786 * (2 * ae * (C27797 + C27804 * C27899) +
                   C27786 * (C27860 + (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27899))) /
        C27405;
    const double C11784 =
        (2 * (C28129 + C27811 * C28208) + C28238 +
         C27811 * (C28208 + C28220 +
                   C27811 * (C28191 + C27811 * (ae * C27829 +
                                                C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27889)))) /
        C27405;
    const double C11616 = C1418 * C11413;
    const double C12349 = C148 * C11413;
    const double C27176 = C12981 * C11413;
    const double C9899 = C8863 * C28520;
    const double C22307 = C8863 * C28520;
    const double C4517 =
        (C27904 + C27909 * C27720 + C28094 + C28094 +
         C27811 * (2 * ae * C27833 +
                   C27811 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27720))) /
        C27405;
    const double C4521 = C3110 * C4155;
    const double C9273 = C8915 * C4155;
    const double C19332 = C17996 * C4155;
    const double C21720 = C21370 * C4155;
    const double C9750 =
        (C27786 * C28143 + C28266 + C28266 +
         C27811 *
             (2 * ae * C28263 +
              C27811 * C27786 * C27716 *
                  (C27755 * C27756 + C27899 * bs[6] * std::pow(C27714, 6)) *
                  C27723)) /
        C27405;
    const double C9752 = C8915 * C9441;
    const double C17839 = C3110 * C9441;
    const double C21210 = C17996 * C9441;
    const double C22182 = C21370 * C9441;
    const double C28291 = C28290 + C28287;
    const double C8742 =
        (C27904 + C27909 * C27850 + C28249 + C28249 +
         C27811 * (2 * ae * C28204 +
                   C27811 * (C27909 + (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                          C27723 * C27850))) /
        C27405;
    const double C8745 = C3110 * C8386;
    const double C11292 = C8915 * C8386;
    const double C25944 = C17996 * C8386;
    const double C26890 = C21370 * C8386;
    const double C28324 = C28323 + C28319;
    const double C28363 = ae * C28361;
    const double C28362 = C27811 * C28361;
    const double C5273 = C4724 * C28520;
    const double C15096 = C4724 * C28520;
    const double C4289 = C3245 * C1346;
    const double C19122 = C3245 * C12909;
    const double C12707 = C12706 * C28515;
    const double C1875 = C1873 * C28590;
    const double C13410 = C1873 * C28590;
    const double C27434 = C27432 / C27400;
    const double C27433 = C27401 * C27431;
    const double C89 = (-C27431 / C27400) / (4 * C27412);
    const double C1353 = (-C27431 / C27400) / (4 * C27405);
    const double C4583 = (-C27431 / C27400) / C27406;
    const double C6170 = -C27431 / C27400;
    const double C12916 = (-C27431 / C27400) / (4 * C27405);
    const double C14436 = (-C27431 / C27400) / C27406;
    const double C1367 = C1350 * C97;
    const double C1364 = C1350 * C592;
    const double C1359 = C1350 * C593;
    const double C1356 = C1350 * C96;
    const double C1943 = C1350 * C1930;
    const double C2075 = C2073 * C1350;
    const double C2136 = C1350 * C639;
    const double C2130 = C1350 * C589;
    const double C2316 = C1350 * C681;
    const double C2503 = C1350 * C965;
    const double C2500 = C1350 * C2493;
    const double C2997 = C1350 * C964;
    const double C4028 = C1350 * C4015;
    const double C4104 = C4102 * C1350;
    const double C4221 = C1350 * C1011;
    const double C4215 = C1350 * C961;
    const double C4403 = C1350 * C1053;
    const double C1366 = C1352 * C98;
    const double C1360 = C1352 * C592;
    const double C1357 = C1352 * C97;
    const double C1942 = C1352 * C1929;
    const double C2069 = C1502 * C1352;
    const double C2138 = C1352 * C638;
    const double C2132 = C1352 * C588;
    const double C2318 = C1352 * C680;
    const double C2502 = C1352 * C964;
    const double C2499 = C1352 * C2492;
    const double C4027 = C1352 * C4014;
    const double C4098 = C3056 * C1352;
    const double C4223 = C1352 * C1010;
    const double C4217 = C1352 * C960;
    const double C4405 = C1352 * C1052;
    const double C14450 = C14435 * C97;
    const double C14448 = C14435 * C592;
    const double C14446 = C14435 * C1929;
    const double C14443 = C14435 * C1930;
    const double C14441 = C14435 * C593;
    const double C14439 = C14435 * C96;
    const double C14976 = C14435 * C5130;
    const double C15093 = C5274 * C14435;
    const double C15089 = C2073 * C14435;
    const double C15159 = C14435 * C2004;
    const double C15155 = C14435 * C1927;
    const double C15151 = C14435 * C639;
    const double C15147 = C14435 * C589;
    const double C15331 = C14435 * C2060;
    const double C15327 = C14435 * C681;
    const double C15494 = C14435 * C965;
    const double C15492 = C14435 * C2493;
    const double C15490 = C14435 * C5694;
    const double C15970 = C14435 * C964;
    const double C15968 = C14435 * C2492;
    const double C16833 = C14435 * C2555;
    const double C16829 = C14435 * C2490;
    const double C17043 = C14435 * C2611;
    const double C17254 = C14435 * C4015;
    const double C17252 = C14435 * C8253;
    const double C17475 = C14435 * C1011;
    const double C17471 = C14435 * C961;
    const double C17695 = C14435 * C1053;
    const double C21268 = C14435 * C4014;
    const double C22243 = C14435 * C9810;
    const double C22304 = C9900 * C14435;
    const double C22300 = C4102 * C14435;
    const double C22412 = C14435 * C4089;
    const double C22408 = C14435 * C4012;
    const double C22574 = C14435 * C4157;
    const double C27532 = C27464 * C27529;
    const double C4824 =
        (-(be * -2 * C27517) / C27405) / C27406 -
        ((2 * ((-C27517 / C27400) / C27406 - (C27528 * be) / C27400) -
          (C27464 * ((-4 * C27490) / C27400 - (C27464 * C27529) / C27400) *
           be) /
              C27400) *
         be) /
            C27400 -
        C27529 / C27415;
    const double C4826 = (-C27529 / C27400) / (4 * C27405);
    const double C6323 = (-C27529 / C27400) / (4 * C27412);
    const double C13157 = (-C27529 / C27400) / C27406;
    const double C14673 = (-C27529 / C27400) / (4 * C27405);
    const double C27552 = C27546 / C27400;
    const double C12995 = C12980 * C98;
    const double C12991 = C12980 * C93;
    const double C12987 = C12980 * C97;
    const double C12983 = C12980 * C92;
    const double C13174 = C12980 * C152;
    const double C13168 = C12980 * C151;
    const double C13162 = C12980 * C150;
    const double C13159 = C12980 * C149;
    const double C13241 = C237 * C12980;
    const double C13237 = C235 * C12980;
    const double C13349 = C12980 * C214;
    const double C13345 = C12980 * C213;
    const double C13708 = C12980 * C639;
    const double C13706 = C12980 * C638;
    const double C13704 = C12980 * C637;
    const double C14179 = C12980 * C1011;
    const double C14177 = C12980 * C1010;
    const double C14175 = C12980 * C1009;
    const double C16041 = C12980 * C964;
    const double C16037 = C12980 * C960;
    const double C16473 = C12980 * C1052;
    const double C16910 = C12980 * C2555;
    const double C16908 = C12980 * C2554;
    const double C17331 = C12980 * C965;
    const double C17327 = C12980 * C961;
    const double C17556 = C12980 * C4089;
    const double C17554 = C12980 * C4088;
    const double C17767 = C12980 * C1053;
    const double C26668 = C12980 * C8315;
    const double C27006 = C12980 * C4015;
    const double C27002 = C12980 * C4012;
    const double C27118 = C11553 * C12980;
    const double C27114 = C8451 * C12980;
    const double C27177 = C12980 * C9886;
    const double C27334 = C12980 * C4157;
    const double C27602 = C27467 * C27599;
    const double C9257 =
        (-(be * -2 * C27587) / C27405) / C27406 -
        ((2 * ((-C27587 / C27400) / C27406 - (C27598 * be) / C27400) -
          (C27467 * ((-4 * C27502) / C27400 - (C27467 * C27599) / C27400) *
           be) /
              C27400) *
         be) /
            C27400 -
        C27599 / C27415;
    const double C9259 = (-C27599 / C27400) / (4 * C27405);
    const double C12169 = (-C27599 / C27400) / (4 * C27412);
    const double C18342 = (-C27599 / C27400) / C27406;
    const double C21706 = (-C27599 / C27400) / (4 * C27405);
    const double C27618 = C27612 / C27400;
    const double C18010 = C17995 * C98;
    const double C18006 = C17995 * C93;
    const double C18002 = C17995 * C97;
    const double C17998 = C17995 * C92;
    const double C18176 = C17995 * C151;
    const double C18172 = C17995 * C150;
    const double C18288 = C174 * C17995;
    const double C18284 = C172 * C17995;
    const double C18359 = C17995 * C215;
    const double C18353 = C17995 * C214;
    const double C18347 = C17995 * C213;
    const double C18344 = C17995 * C212;
    const double C18827 = C17995 * C681;
    const double C18825 = C17995 * C680;
    const double C18823 = C17995 * C679;
    const double C19337 = C17995 * C1053;
    const double C19335 = C17995 * C1052;
    const double C19333 = C17995 * C1051;
    const double C19552 = C17995 * C592;
    const double C19548 = C17995 * C588;
    const double C19768 = C17995 * C638;
    const double C20190 = C17995 * C593;
    const double C20186 = C17995 * C589;
    const double C20398 = C17995 * C639;
    const double C20609 = C17995 * C2060;
    const double C20607 = C17995 * C2059;
    const double C21213 = C17995 * C2611;
    const double C21211 = C17995 * C2610;
    const double C25106 = C17995 * C1930;
    const double C25102 = C17995 * C1927;
    const double C25267 = C17995 * C2004;
    const double C25327 = C6658 * C17995;
    const double C25323 = C6656 * C17995;
    const double C25436 = C17995 * C5260;
    const double C25945 = C17995 * C5808;
    const double C16478 = C16475 + C16476;
    const double C19911 = C19908 + C19909;
    const double C4910 = C4909 * C4580;
    const double C14754 = C4909 * C14433;
    const double C19699 = C19697 + C2724;
    const double C9207 = C9206 * C8800;
    const double C21654 = C9206 * C21265;
    const double C5077 = C5076 * C4580;
    const double C14916 = C5076 * C14433;
    const double C10090 = C9039 * C28520;
    const double C22473 = C9039 * C28520;
    const double C104 =
        (2 * (2 * ae * C27728 + C27716 * C27745) + C27751 + C27751 +
         C27716 * (C27745 + C27748 + C27748 +
                   C27716 * (2 * ae * C27741 +
                             C27716 *
                                 (C27734 * C27735 +
                                  C27720 * bs[5] * std::pow(C27722, 5)) *
                                 C27723))) /
        C27405;
    const double C641 =
        (C27751 + C27786 * (C27796 + ae * C27799 + C27716 * C27807)) / C27405;
    const double C721 =
        (C27751 + C27786 * (C27841 + ae * C27799 + C27716 * C27846)) / C27405;
    const double C1055 =
        (C27751 + C27811 * (C27821 + ae * C27824 + C27716 * C27832)) / C27405;
    const double C1211 =
        (C27751 + C27811 * (C27879 + ae * C27824 + C27716 * C27884)) / C27405;
    const double C110 = C90 * C99;
    const double C170 = C148 * C99;
    const double C233 = C211 * C99;
    const double C1365 = C1354 * C99;
    const double C12928 = C12917 * C99;
    const double C1363 = C1352 * C591;
    const double C1361 = C1354 * C591;
    const double C1434 = C1418 * C591;
    const double C1500 = C211 * C591;
    const double C2135 = C1346 * C591;
    const double C4594 = C27426 * C591;
    const double C12924 = C12917 * C591;
    const double C12997 = C12981 * C591;
    const double C13640 = C12909 * C591;
    const double C14447 = C14437 * C591;
    const double C2501 = C1354 * C963;
    const double C2996 = C1352 * C963;
    const double C3054 = C148 * C963;
    const double C3126 = C3110 * C963;
    const double C4220 = C1346 * C963;
    const double C8806 = C27426 * C963;
    const double C13971 = C12917 * C963;
    const double C15969 = C14437 * C963;
    const double C18012 = C17996 * C963;
    const double C19057 = C12909 * C963;
    const double C4668 = C4661 + C4662;
    const double C14521 = C14514 + C14515;
    const double C5353 = C5344 + C5345;
    const double C15170 = C15161 + C15162;
    const double C16126 = C16121 + C16122;
    const double C19559 = C19554 + C19555;
    const double C17048 = C17045 + C17046;
    const double C23771 = C23768 + C23769;
    const double C16840 = C16835 + C16836;
    const double C23567 = C23562 + C23563;
    const double C8934 = C8927 + C8928;
    const double C21389 = C21382 + C21383;
    const double C10212 = C10207 + C10208;
    const double C22579 = C22576 + C22577;
    const double C5404 =
        (2 * (2 * ae * C27792 + C27786 * C27855) + C28132 + C28132 +
         C27786 * (C27855 + C28129 + C28129 +
                   C27786 * (2 * C27800 + C27786 * C27860))) /
        C27405;
    const double C6076 =
        (C28132 + C27811 * (C27892 + ae * C27786 * C27822 +
                            C27786 * (C27825 + C27786 * C27895))) /
        C27405;
    const double C5409 = C4649 * C5206;
    const double C6328 = C6217 * C5206;
    const double C6654 = C6171 * C5206;
    const double C6736 = C211 * C5206;
    const double C15224 = C14502 * C5206;
    const double C5919 = C4649 * C5754;
    const double C7894 = C6171 * C5754;
    const double C7951 = C4648 * C5754;
    const double C8009 = C3110 * C5754;
    const double C8324 = C4580 * C5754;
    const double C11066 = C1418 * C5754;
    const double C15698 = C14502 * C5754;
    const double C16909 = C12981 * C5754;
    const double C25269 = C17996 * C5754;
    const double C25548 = C14433 * C5754;
    const double C11797 = C11792 + C11793;
    const double C27339 = C27336 + C27337;
    const double C10318 =
        (2 * (2 * ae * C27817 + C27811 * C27904) + C28302 + C28302 +
         C27811 * (C27904 + C28299 + C28299 +
                   C27811 * (2 * C27825 + C27811 * C27909))) /
        C27405;
    const double C10323 = C8915 * C9954;
    const double C12174 = C11961 * C9954;
    const double C12778 = C6171 * C9954;
    const double C12816 = C148 * C9954;
    const double C22683 = C21370 * C9954;
    const double C11185 = C11184 * C8800;
    const double C26783 = C11184 * C21265;
    const double C11627 = C11623 + C11611;
    const double C11629 = C11625 + C11615;
    const double C2556 =
        (C27811 * (C27780 + C27786 * (C27803 + ae * C27716 * C27804 +
                                      C27716 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C27781 = C27757 + C27779;
    const double C27914 = ae * C27912;
    const double C2491 = (C27811 * C27912) / C27400;
    const double C27957 = ae * C27955;
    const double C1941 = C1354 * C1928;
    const double C4592 = C27426 * C1928;
    const double C13467 = C12917 * C1928;
    const double C14445 = C14437 * C1928;
    const double C4026 = C1354 * C4013;
    const double C8804 = C27426 * C4013;
    const double C18884 = C12917 * C4013;
    const double C21267 = C14437 * C4013;
    const double C28122 = ae * C28121;
    const double C5205 =
        (2 * C28017 + C27786 * C28121 + (C27739 + C27762 * C27850) * ae) /
        C27400;
    const double C5753 = (C27811 * C28121) / C27400;
    const double C28196 = C28181 + C28194;
    const double C28219 = ae * C28217;
    const double C8513 = C4649 * C8314;
    const double C11064 = C1418 * C8314;
    const double C25723 = C14502 * C8314;
    const double C26667 = C12981 * C8314;
    const double C28292 = ae * C28291;
    const double C9953 =
        (2 * C28097 + C27811 * C28291 + (C27739 + C27762 * C27899) * ae) /
        C27400;
    const double C28325 = ae * C28324;
    const double C11489 =
        (2 * C28252 + C27811 * C28324 + (C28125 + C28183 * C27899) * ae) /
        C27400;
    const double C28364 = C28349 + C28362;
    const double C27436 = C27434 - C27421;
    const double C27435 = C27433 / C27400;
    const double C1939 = C1353 * C587;
    const double C4024 = C1353 * C959;
    const double C5140 = C4583 * C1926;
    const double C5136 = C4583 * C588;
    const double C9820 = C4583 * C4011;
    const double C9816 = C4583 * C960;
    const double C23350 = C4583 * C2489;
    const double C6510 = C6170 * C5128;
    const double C6508 = C6170 * C1927;
    const double C6506 = C6170 * C589;
    const double C7704 = C6170 * C5692;
    const double C7701 = C6170 * C2490;
    const double C8257 = C6170 * C961;
    const double C10834 = C6170 * C8251;
    const double C11357 = C6170 * C4012;
    const double C12527 = C6170 * C9808;
    const double C13465 = C12916 * C587;
    const double C18882 = C12916 * C959;
    const double C14973 = C14436 * C1926;
    const double C14969 = C14436 * C588;
    const double C16623 = C14436 * C2489;
    const double C17249 = C14436 * C960;
    const double C22240 = C14436 * C4011;
    const double C2145 = C2136 + C2137;
    const double C2142 = C2130 + C2131;
    const double C2322 = C2316 + C2317;
    const double C4230 = C4221 + C4222;
    const double C4227 = C4215 + C4216;
    const double C4409 = C4403 + C4404;
    const double C2146 = C2138 + C2139;
    const double C2143 = C2132 + C2133;
    const double C2323 = C2318 + C2319;
    const double C4231 = C4223 + C4224;
    const double C4228 = C4217 + C4218;
    const double C4410 = C4405 + C4406;
    const double C15169 = C15159 + C15160;
    const double C15167 = C15155 + C15156;
    const double C15165 = C15151 + C15152;
    const double C15163 = C15147 + C15148;
    const double C15337 = C15331 + C15332;
    const double C15335 = C15327 + C15328;
    const double C16839 = C16833 + C16834;
    const double C16837 = C16829 + C16830;
    const double C17047 = C17043 + C17044;
    const double C17481 = C17475 + C17476;
    const double C17479 = C17471 + C17472;
    const double C17699 = C17695 + C17696;
    const double C22418 = C22412 + C22413;
    const double C22416 = C22408 + C22409;
    const double C22578 = C22574 + C22575;
    const double C27572 = C27532 / C27400;
    const double C4825 =
        (-(((-4 * C27490) / C27400 - C27532 / C27400) * be) / C27400) / C27406 -
        ((2 * ((-C27518 / C27400) / C27406 - (0 * be) / C27400) -
          C27532 / C27415) *
         be) /
            C27400;
    const double C4831 = C4824 * C92;
    const double C8507 = C4824 * C961;
    const double C4837 = C4826 * C1926;
    const double C8511 = C4826 * C5692;
    const double C13170 = C13157 * C587;
    const double C13164 = C13157 * C588;
    const double C16261 = C13157 * C2489;
    const double C17551 = C13157 * C2490;
    const double C27174 = C13157 * C8251;
    const double C14684 = C14673 * C1926;
    const double C25721 = C14673 * C5692;
    const double C27555 = C27552 - C27547;
    const double C13005 = C12995 + C12996;
    const double C13003 = C12991 + C12992;
    const double C13001 = C12987 + C12988;
    const double C12999 = C12983 + C12984;
    const double C13355 = C13349 + C13350;
    const double C13353 = C13345 + C13346;
    const double C16047 = C16041 + C16042;
    const double C16045 = C16037 + C16038;
    const double C16477 = C16473 + C16474;
    const double C17337 = C17331 + C17332;
    const double C17335 = C17327 + C17328;
    const double C17771 = C17767 + C17768;
    const double C27012 = C27006 + C27007;
    const double C27010 = C27002 + C27003;
    const double C27338 = C27334 + C27335;
    const double C27638 = C27602 / C27400;
    const double C9258 =
        (-(((-4 * C27502) / C27400 - C27602 / C27400) * be) / C27400) / C27406 -
        ((2 * ((-C27588 / C27400) / C27406 - (0 * be) / C27400) -
          C27602 / C27415) *
         be) /
            C27400;
    const double C9264 = C9257 * C92;
    const double C11286 = C9257 * C589;
    const double C9270 = C9259 * C4011;
    const double C11290 = C9259 * C8251;
    const double C18355 = C18342 * C959;
    const double C18349 = C18342 * C960;
    const double C19980 = C18342 * C2489;
    const double C20604 = C18342 * C2490;
    const double C25433 = C18342 * C5692;
    const double C21717 = C21706 * C4011;
    const double C26888 = C21706 * C8251;
    const double C27621 = C27618 - C27613;
    const double C18020 = C18010 + C18011;
    const double C18018 = C18006 + C18007;
    const double C18016 = C18002 + C18003;
    const double C18014 = C17998 + C17999;
    const double C18182 = C18176 + C18177;
    const double C18180 = C18172 + C18173;
    const double C19558 = C19552 + C19553;
    const double C19556 = C19548 + C19549;
    const double C19772 = C19768 + C19769;
    const double C20196 = C20190 + C20191;
    const double C20194 = C20186 + C20187;
    const double C20402 = C20398 + C20399;
    const double C25112 = C25106 + C25107;
    const double C25110 = C25102 + C25103;
    const double C25271 = C25267 + C25268;
    const double C19701 = C19699 + C19695;
    const double C1435 = C28590 * C641;
    const double C12998 = C28590 * C641;
    const double C2141 = C1346 * C721;
    const double C13646 = C12909 * C721;
    const double C3127 = C28614 * C1055;
    const double C18013 = C28614 * C1055;
    const double C4408 = C1346 * C1211;
    const double C19228 = C12909 * C1211;
    const double C177 = C170 + C171;
    const double C240 = C233 + C234;
    const double C1505 = C1500 + C1501;
    const double C2144 = C2134 + C2135;
    const double C13649 = C13639 + C13640;
    const double C3059 = C3054 + C3055;
    const double C4229 = C4219 + C4220;
    const double C19066 = C19056 + C19057;
    const double C8689 = C4580 * C6076;
    const double C25890 = C14433 * C6076;
    const double C6661 = C6654 + C6655;
    const double C6738 = C6736 + C6737;
    const double C7899 = C7894 + C7895;
    const double C8014 = C8009 + C8010;
    const double C8333 = C8323 + C8324;
    const double C25272 = C25269 + C25270;
    const double C25557 = C25547 + C25548;
    const double C12780 = C12778 + C12779;
    const double C12818 = C12816 + C12817;
    const double C27782 = C27781 + C27770;
    const double C594 =
        (2 * (2 * ae * C27786 * C27741 + C27716 * C27911) + C27914 + C27914 +
         C27716 * (C27911 + C27915 + C27915 +
                   C27716 * (2 * ae * C27786 * C27765 +
                             C27716 * C27786 *
                                 (C27755 * C27756 +
                                  C27720 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C2005 =
        (C27796 + ae * C27799 + C27716 * C27807 + C27914 +
         C27786 * (C27780 + C27786 * (C27803 + ae * C27716 * C27804 +
                                      C27716 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C2126 =
        (C27841 + ae * C27799 + C27716 * C27846 + C27914 +
         C27786 * (C27780 + C27786 * (C27844 + ae * C27716 * C27804 +
                                      C27716 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27838)))) /
        C27405;
    const double C2612 =
        (C27914 + C27811 * C27786 *
                      (C27828 + ae * C27716 * C27829 +
                       C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27815))) /
        C27405;
    const double C2830 =
        (C27914 + C27811 * C27786 *
                      (C27882 + ae * C27716 * C27829 +
                       C27716 * (ae * C27829 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27876))) /
        C27405;
    const double C2498 = C1354 * C2491;
    const double C13968 = C12917 * C2491;
    const double C15967 = C14437 * C2491;
    const double C22752 = C27426 * C2491;
    const double C966 =
        (2 * (2 * ae * C27811 * C27741 + C27716 * C27954) + C27957 + C27957 +
         C27716 * (C27954 + C27958 + C27958 +
                   C27716 * (2 * ae * C27811 * C27765 +
                             C27716 * C27811 *
                                 (C27755 * C27756 +
                                  C27720 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C2665 =
        (C27957 + C27786 * C27811 *
                      (C27844 + ae * C27716 * C27804 +
                       C27716 * (ae * C27804 + C27716 * std::pow(C27714, 6) *
                                                   bs[6] * C27838))) /
        C27405;
    const double C4158 =
        (C27821 + ae * C27824 + C27716 * C27832 + C27957 +
         C27811 * (C27780 + C27811 * (C27828 + ae * C27716 * C27829 +
                                      C27716 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27815)))) /
        C27405;
    const double C4399 =
        (C27879 + ae * C27824 + C27716 * C27884 + C27957 +
         C27811 * (C27780 + C27811 * (C27882 + ae * C27716 * C27829 +
                                      C27716 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27876)))) /
        C27405;
    const double C5403 =
        (2 * (2 * ae * C27799 + C27786 * C28112) + C28122 + C28122 +
         C27786 * (C28112 + C28119 + C28119 +
                   C27786 * (2 * ae * C28113 +
                             C27786 * C27716 *
                                 (C27755 * C27756 +
                                  C27850 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C6075 =
        (C28122 + C27811 * (C28140 + ae * C27786 * C28135 +
                            C27786 * (ae * C28135 + C27786 * C27716 *
                                                        std::pow(C27714, 6) *
                                                        bs[6] * C27889))) /
        C27405;
    const double C5406 = C4649 * C5205;
    const double C6329 = C6217 * C5205;
    const double C15221 = C14502 * C5205;
    const double C5916 = C4649 * C5753;
    const double C15695 = C14502 * C5753;
    const double C16907 = C12981 * C5753;
    const double C20330 = C1418 * C5753;
    const double C28197 = C28196 + C28190;
    const double C7046 =
        (2 * (2 * ae * C27811 * C27797 + C27786 * C28216) + C28219 + C28219 +
         C27786 * (C28216 + C28220 + C28220 +
                   C27786 * (2 * ae * C27811 * C27804 +
                             C27786 * C27811 *
                                 (C27755 * C27756 +
                                  C27850 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C8681 =
        (C27892 + ae * C28200 + C27786 * C28208 + C28219 +
         C27811 * (C28195 + C27811 * (C27895 + ae * C27786 * C27829 +
                                      C27786 * (ae * C27829 +
                                                C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27889)))) /
        C27405;
    const double C10317 =
        (2 * (2 * ae * C27824 + C27811 * C28143) + C28292 + C28292 +
         C27811 * (C28143 + C28289 + C28289 +
                   C27811 * (2 * ae * C28135 +
                             C27811 * C27716 *
                                 (C27755 * C27756 +
                                  C27899 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C10320 = C8915 * C9953;
    const double C12175 = C11961 * C9953;
    const double C22680 = C21370 * C9953;
    const double C11847 =
        (2 * (2 * ae * C28200 + C27811 * C28315) + C28325 + C28325 +
         C27811 * (C28315 + C28322 + C28322 +
                   C27811 * (2 * ae * C28316 +
                             C27811 * C27786 *
                                 (C27755 * C27756 +
                                  C27899 * bs[6] * std::pow(C27714, 6)) *
                                 C27723))) /
        C27405;
    const double C11849 = C8915 * C11489;
    const double C12486 = C11961 * C11489;
    const double C27390 = C21370 * C11489;
    const double C28365 = C28364 + C28358;
    const double C4597 = C27436 * C97;
    const double C4595 = C27436 * C592;
    const double C4593 = C27436 * C1929;
    const double C4590 = C27436 * C1930;
    const double C4588 = C27436 * C593;
    const double C4586 = C27436 * C96;
    const double C5143 = C27436 * C5130;
    const double C5264 = C2073 * C27436;
    const double C5276 = C5274 * C27436;
    const double C5342 = C27436 * C2004;
    const double C5338 = C27436 * C1927;
    const double C5334 = C27436 * C639;
    const double C5330 = C27436 * C589;
    const double C5523 = C27436 * C2060;
    const double C5519 = C27436 * C681;
    const double C5703 = C27436 * C965;
    const double C5701 = C27436 * C2493;
    const double C5699 = C27436 * C5694;
    const double C8807 = C27436 * C964;
    const double C8805 = C27436 * C4014;
    const double C8802 = C27436 * C4015;
    const double C9339 = C27436 * C8253;
    const double C9823 = C27436 * C9810;
    const double C9890 = C4102 * C27436;
    const double C9902 = C9900 * C27436;
    const double C10022 = C27436 * C4089;
    const double C10018 = C27436 * C4012;
    const double C10014 = C27436 * C1011;
    const double C10010 = C27436 * C961;
    const double C10205 = C27436 * C4157;
    const double C10201 = C27436 * C1053;
    const double C22753 = C27436 * C2492;
    const double C23560 = C27436 * C2555;
    const double C23556 = C27436 * C2490;
    const double C23766 = C27436 * C2611;
    const double C84 =
        ((((0 - (C27401 * C27399) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27402 / C27400) /
             C27406 -
         ((C27401 * C27429 + 0) * be) / C27400) /
            C27406 -
        ((C27401 * (C27429 / C27406 -
                    ((C27401 * C27436 + C28711) * be) / C27400 + C27426) +
          C28749) *
         be) /
            C27400 +
        C27436 / C27406 - ((C27401 * C27426 + C28520) * be) / C27400;
    const double C86 = (C27429 / C27406 -
                        ((C27401 * C27436 + C28711) * be) / C27400 + C27426) /
                           C27406 -
                       ((C27401 * (C27436 / C27406 -
                                   ((C27401 * C27426 + C28520) * be) / C27400) +
                         C28738) *
                        be) /
                           C27400 +
                       2 * (C27426 / C27406 - (0 * be) / C27400);
    const double C88 =
        (C27436 / C27406 - ((C27401 * C27426 + C28520) * be) / C27400) /
            C27406 -
        ((C27401 * (C27426 / C27406 - (0 * be) / C27400) + C12909) * be) /
            C27400;
    const double C12913 =
        C27429 / C27406 - ((C27401 * C27436 + C28711) * be) / C27400 + C27426;
    const double C12915 =
        C27436 / C27406 - ((C27401 * C27426 + C28520) * be) / C27400;
    const double C27437 = C27424 - C27435;
    const double C1946 = C1939 + C1361;
    const double C4031 = C4024 + C2501;
    const double C5147 = C5140 + C4591;
    const double C5145 = C5136 + C4589;
    const double C9827 = C9820 + C8803;
    const double C9825 = C9816 + C5702;
    const double C23353 = C23350 + C5700;
    const double C6515 = C6510 + C6176;
    const double C6514 = C6508 + C6175;
    const double C6513 = C6506 + C6174;
    const double C7707 = C7704 + C6903;
    const double C7706 = C7701 + C6904;
    const double C8262 = C8257 + C6905;
    const double C10836 = C10834 + C8260;
    const double C11361 = C11357 + C8261;
    const double C12530 = C12527 + C11360;
    const double C13472 = C13465 + C12924;
    const double C18889 = C18882 + C13971;
    const double C14980 = C14973 + C14444;
    const double C14978 = C14969 + C14442;
    const double C16626 = C16623 + C15491;
    const double C17256 = C17249 + C15493;
    const double C22245 = C22240 + C17253;
    const double C27575 = C27574 - C27572;
    const double C4834 = C4825 * C588;
    const double C8509 = C4825 * C2490;
    const double C4843 = C4831 + C4832;
    const double C8516 = C8507 + C5921;
    const double C4845 = C4837 + C4838;
    const double C8518 = C8511 + C5919;
    const double C13178 = C13170 + C13171;
    const double C13176 = C13164 + C13165;
    const double C16264 = C16261 + C14176;
    const double C17558 = C17551 + C14178;
    const double C27179 = C27174 + C17555;
    const double C14692 = C14684 + C14685;
    const double C25728 = C25721 + C15698;
    const double C6214 =
        ((((0 - (C27464 * C27544) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27517 / C27400) /
             C27406 -
         ((C27464 * C27559 + 0) * be) / C27400) /
            C27406 -
        ((C27464 * (C27559 / C27406 -
                    ((C27464 * C27555 + C28724) * be) / C27400 + C27556) +
          C28753) *
         be) /
            C27400 +
        C27555 / C27406 - ((C27464 * C27556 + C28590) * be) / C27400;
    const double C6215 =
        (C27559 / C27406 - ((C27464 * C27555 + C28724) * be) / C27400 +
         C27556) /
            C27406 -
        ((C27464 *
              (C27555 / C27406 - ((C27464 * C27556 + C28590) * be) / C27400) +
          C28745) *
         be) /
            C27400 +
        2 * (C27556 / C27406 - (0 * be) / C27400);
    const double C6216 =
        (C27555 / C27406 - ((C27464 * C27556 + C28590) * be) / C27400) /
            C27406 -
        ((C27464 * (C27556 / C27406 - (0 * be) / C27400) + C14433) * be) /
            C27400;
    const double C14500 =
        C27559 / C27406 - ((C27464 * C27555 + C28724) * be) / C27400 + C27556;
    const double C14501 =
        C27555 / C27406 - ((C27464 * C27556 + C28590) * be) / C27400;
    const double C27641 = C27640 - C27638;
    const double C9267 = C9258 * C960;
    const double C11288 = C9258 * C2490;
    const double C9276 = C9264 + C9265;
    const double C11295 = C11286 + C9757;
    const double C9278 = C9270 + C9271;
    const double C11297 = C11290 + C9755;
    const double C18363 = C18355 + C18356;
    const double C18361 = C18349 + C18350;
    const double C19983 = C19980 + C18824;
    const double C20611 = C20604 + C18826;
    const double C25438 = C25433 + C20608;
    const double C21725 = C21717 + C21718;
    const double C26895 = C26888 + C22185;
    const double C11958 =
        ((((0 - (C27467 * C27610) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27587 / C27400) /
             C27406 -
         ((C27467 * C27625 + 0) * be) / C27400) /
            C27406 -
        ((C27467 * (C27625 / C27406 -
                    ((C27467 * C27621 + C28725) * be) / C27400 + C27622) +
          C28754) *
         be) /
            C27400 +
        C27621 / C27406 - ((C27467 * C27622 + C28614) * be) / C27400;
    const double C11959 =
        (C27625 / C27406 - ((C27467 * C27621 + C28725) * be) / C27400 +
         C27622) /
            C27406 -
        ((C27467 *
              (C27621 / C27406 - ((C27467 * C27622 + C28614) * be) / C27400) +
          C28748) *
         be) /
            C27400 +
        2 * (C27622 / C27406 - (0 * be) / C27400);
    const double C11960 =
        (C27621 / C27406 - ((C27467 * C27622 + C28614) * be) / C27400) /
            C27406 -
        ((C27467 * (C27622 / C27406 - (0 * be) / C27400) + C21265) * be) /
            C27400;
    const double C21368 =
        C27625 / C27406 - ((C27467 * C27621 + C28725) * be) / C27400 + C27622;
    const double C21369 =
        C27621 / C27406 - ((C27467 * C27622 + C28614) * be) / C27400;
    const double C1443 = C1434 + C1435;
    const double C13006 = C12997 + C12998;
    const double C2147 = C2140 + C2141;
    const double C13652 = C13645 + C13646;
    const double C3135 = C3126 + C3127;
    const double C18021 = C18012 + C18013;
    const double C4411 = C4407 + C4408;
    const double C19231 = C19227 + C19228;
    const double C2072 = C1505 * C1346;
    const double C13584 = C1505 * C12909;
    const double C4101 = C3059 * C1346;
    const double C18951 = C3059 * C12909;
    const double C8692 = C8688 + C8689;
    const double C25893 = C25889 + C25890;
    const double C8450 = C7899 * C4580;
    const double C25666 = C7899 * C14433;
    const double C27783 = ae * C27782;
    const double C100 =
        (3 * C27750 + C27716 * C27782 + (2 * C27739 + C27716 * C27767) * ae) /
        C27400;
    const double C590 = (C27786 * C27782) / C27400;
    const double C962 = (C27811 * C27782) / C27400;
    const double C28198 = ae * C28197;
    const double C6558 =
        (3 * C28131 + C27786 * C28197 + (2 * C28125 + C27786 * C28188) * ae) /
        C27400;
    const double C6939 = (C27811 * C28197) / C27400;
    const double C28366 = ae * C28365;
    const double C12614 =
        (3 * C28301 + C27811 * C28365 + (2 * C28295 + C27811 * C28356) * ae) /
        C27400;
    const double C5352 = C5342 + C5343;
    const double C5350 = C5338 + C5339;
    const double C5348 = C5334 + C5335;
    const double C5346 = C5330 + C5331;
    const double C5529 = C5523 + C5524;
    const double C5527 = C5519 + C5520;
    const double C10032 = C10022 + C10023;
    const double C10030 = C10018 + C10019;
    const double C10028 = C10014 + C10015;
    const double C10026 = C10010 + C10011;
    const double C10211 = C10205 + C10206;
    const double C10209 = C10201 + C10202;
    const double C23566 = C23560 + C23561;
    const double C23564 = C23556 + C23557;
    const double C23770 = C23766 + C23767;
    const double C114 = C84 * C97;
    const double C107 = C84 * C96;
    const double C602 = C84 * C593;
    const double C974 = C84 * C965;
    const double C113 = C86 * C98;
    const double C108 = C86 * C97;
    const double C601 = C86 * C592;
    const double C973 = C86 * C964;
    const double C112 = C88 * C99;
    const double C109 = C88 * C98;
    const double C600 = C88 * C591;
    const double C972 = C88 * C963;
    const double C12930 = C12913 * C97;
    const double C12927 = C12913 * C592;
    const double C12922 = C12913 * C593;
    const double C12919 = C12913 * C96;
    const double C13469 = C12913 * C1930;
    const double C13579 = C2073 * C12913;
    const double C13641 = C12913 * C639;
    const double C13635 = C12913 * C589;
    const double C13809 = C12913 * C681;
    const double C13973 = C12913 * C965;
    const double C13970 = C12913 * C2493;
    const double C17895 = C12913 * C964;
    const double C18886 = C12913 * C4015;
    const double C18946 = C4102 * C12913;
    const double C19058 = C12913 * C1011;
    const double C19052 = C12913 * C961;
    const double C19223 = C12913 * C1053;
    const double C12929 = C12915 * C98;
    const double C12926 = C12915 * C591;
    const double C12923 = C12915 * C592;
    const double C12920 = C12915 * C97;
    const double C13468 = C12915 * C1929;
    const double C13581 = C1502 * C12915;
    const double C13643 = C12915 * C638;
    const double C13637 = C12915 * C588;
    const double C13811 = C12915 * C680;
    const double C13972 = C12915 * C964;
    const double C13969 = C12915 * C2492;
    const double C17894 = C12915 * C963;
    const double C18885 = C12915 * C4014;
    const double C18948 = C3056 * C12915;
    const double C19060 = C12915 * C1010;
    const double C19054 = C12915 * C960;
    const double C19225 = C12915 * C1052;
    const double C27438 = C27437 * ae;
    const double C1349 =
        (-(be * C27407) / C27405) / C27406 -
        ((2 * ((-C27402 / C27400) / C27406 - (C27430 * be) / C27400) -
          (C27401 * C27437 * be) / C27400) *
         be) /
            C27400 -
        C27431 / C27415;
    const double C1351 =
        (-(C27437 * be) / C27400) / C27406 -
        ((2 * ((-C27420 / C27400) / C27406 - (0 * be) / C27400) -
          C27433 / C27415) *
         be) /
            C27400;
    const double C14434 = -(C27437 * be) / C27400;
    const double C1949 = C1946 + C1361;
    const double C4034 = C4031 + C2501;
    const double C5151 = C5147 + C4591;
    const double C5149 = C5145 + C4589;
    const double C9831 = C9827 + C8803;
    const double C9829 = C9825 + C5702;
    const double C23355 = C23353 + C5700;
    const double C6518 = C6515 + C6176;
    const double C6517 = C6514 + C6175;
    const double C6516 = C6513 + C6174;
    const double C7709 = C7707 + C6903;
    const double C7708 = C7706 + C6904;
    const double C8263 = C8262 + C6905;
    const double C10837 = C10836 + C8260;
    const double C11362 = C11361 + C8261;
    const double C12531 = C12530 + C11360;
    const double C13475 = C13472 + C12924;
    const double C18892 = C18889 + C13971;
    const double C14984 = C14980 + C14444;
    const double C14982 = C14978 + C14442;
    const double C16628 = C16626 + C15491;
    const double C17258 = C17256 + C15493;
    const double C22247 = C22245 + C17253;
    const double C27576 = C27575 * ae;
    const double C13156 = -(C27575 * be) / C27400;
    const double C4844 = C4834 + C4835;
    const double C8517 = C8509 + C5920;
    const double C4846 = C4843 + C4832;
    const double C8519 = C8516 + C5921;
    const double C4848 = C4845 + C4838;
    const double C8521 = C8518 + C5919;
    const double C13182 = C13178 + C13171;
    const double C13180 = C13176 + C13165;
    const double C16266 = C16264 + C14176;
    const double C17560 = C17558 + C14178;
    const double C27181 = C27179 + C17555;
    const double C14695 = C14692 + C14685;
    const double C25731 = C25728 + C15698;
    const double C6332 = C6214 * C150;
    const double C6325 = C6214 * C149;
    const double C6700 = C6214 * C639;
    const double C7051 = C6214 * C1011;
    const double C6331 = C6215 * C638;
    const double C6326 = C6215 * C639;
    const double C6699 = C6215 * C2004;
    const double C7050 = C6215 * C2555;
    const double C6330 = C6216 * C2003;
    const double C6327 = C6216 * C2004;
    const double C6698 = C6216 * C5206;
    const double C7049 = C6216 * C5754;
    const double C14510 = C14500 * C97;
    const double C14504 = C14500 * C92;
    const double C14689 = C14500 * C151;
    const double C14679 = C14500 * C150;
    const double C14675 = C14500 * C149;
    const double C14749 = C235 * C14500;
    const double C14855 = C14500 * C213;
    const double C15226 = C14500 * C639;
    const double C15223 = C14500 * C638;
    const double C15700 = C14500 * C1011;
    const double C15697 = C14500 * C1010;
    const double C25216 = C14500 * C2555;
    const double C25549 = C14500 * C965;
    const double C25543 = C14500 * C961;
    const double C25661 = C8451 * C14500;
    const double C25725 = C14500 * C4089;
    const double C25885 = C14500 * C1053;
    const double C14512 = C14501 * C592;
    const double C14506 = C14501 * C588;
    const double C14688 = C14501 * C637;
    const double C14682 = C14501 * C638;
    const double C14676 = C14501 * C639;
    const double C14751 = C1502 * C14501;
    const double C14857 = C14501 * C680;
    const double C15225 = C14501 * C2004;
    const double C15222 = C14501 * C2003;
    const double C15699 = C14501 * C2555;
    const double C15696 = C14501 * C2554;
    const double C25215 = C14501 * C5754;
    const double C25551 = C14501 * C2493;
    const double C25545 = C14501 * C2490;
    const double C25663 = C7896 * C14501;
    const double C25724 = C14501 * C8315;
    const double C25887 = C14501 * C2611;
    const double C27642 = C27641 * ae;
    const double C18341 = -(C27641 * be) / C27400;
    const double C9277 = C9267 + C9268;
    const double C11296 = C11288 + C9756;
    const double C9279 = C9276 + C9265;
    const double C11298 = C11295 + C9757;
    const double C9281 = C9278 + C9271;
    const double C11300 = C11297 + C9755;
    const double C18367 = C18363 + C18356;
    const double C18365 = C18361 + C18350;
    const double C19985 = C19983 + C18824;
    const double C20613 = C20611 + C18826;
    const double C25440 = C25438 + C20608;
    const double C21728 = C21725 + C21718;
    const double C26898 = C26895 + C22185;
    const double C12178 = C11958 * C213;
    const double C12171 = C11958 * C212;
    const double C12489 = C11958 * C681;
    const double C12857 = C11958 * C1053;
    const double C12177 = C11959 * C1052;
    const double C12172 = C11959 * C1053;
    const double C12488 = C11959 * C2611;
    const double C12856 = C11959 * C4157;
    const double C12176 = C11960 * C4156;
    const double C12173 = C11960 * C4157;
    const double C12487 = C11960 * C8387;
    const double C12855 = C11960 * C9954;
    const double C21378 = C21368 * C97;
    const double C21372 = C21368 * C92;
    const double C21540 = C21368 * C150;
    const double C21649 = C172 * C21368;
    const double C21722 = C21368 * C214;
    const double C21712 = C21368 * C213;
    const double C21708 = C21368 * C212;
    const double C22187 = C21368 * C681;
    const double C22184 = C21368 * C680;
    const double C22685 = C21368 * C1053;
    const double C22682 = C21368 * C1052;
    const double C26555 = C21368 * C593;
    const double C26549 = C21368 * C589;
    const double C26719 = C21368 * C639;
    const double C26778 = C6656 * C21368;
    const double C26892 = C21368 * C2060;
    const double C27392 = C21368 * C2611;
    const double C21380 = C21369 * C964;
    const double C21374 = C21369 * C960;
    const double C21542 = C21369 * C1010;
    const double C21651 = C3056 * C21369;
    const double C21721 = C21369 * C1051;
    const double C21715 = C21369 * C1052;
    const double C21709 = C21369 * C1053;
    const double C22186 = C21369 * C2611;
    const double C22183 = C21369 * C2610;
    const double C22684 = C21369 * C4157;
    const double C22681 = C21369 * C4156;
    const double C26557 = C21369 * C2493;
    const double C26551 = C21369 * C2490;
    const double C26721 = C21369 * C2555;
    const double C26780 = C7896 * C21369;
    const double C26891 = C21369 * C5808;
    const double C27391 = C21369 * C8387;
    const double C105 =
        (3 * (C27745 + C27748 + C27748 + C27716 * C27776) + C27783 + C27783 +
         C27716 *
             (2 * C27776 + C27780 + C27780 +
              C27716 * (C27771 + C27775 + C27775 +
                        C27716 * (2 * ae * C27765 +
                                  C27716 *
                                      (C27755 * C27756 +
                                       C27720 * bs[6] * std::pow(C27714, 6)) *
                                      C27723)))) /
        C27405;
    const double C640 =
        (C27783 + C27786 * (2 * C27807 + ae * C27808 +
                            C27716 * (C27803 + ae * C27716 * C27804 +
                                      C27716 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27790)))) /
        C27405;
    const double C720 =
        (C27783 + C27786 * (2 * C27846 + ae * C27808 +
                            C27716 * (C27844 + ae * C27716 * C27804 +
                                      C27716 * (ae * C27804 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27838)))) /
        C27405;
    const double C1054 =
        (C27783 + C27811 * (2 * C27832 + ae * C27833 +
                            C27716 * (C27828 + ae * C27716 * C27829 +
                                      C27716 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27815)))) /
        C27405;
    const double C1210 =
        (C27783 + C27811 * (2 * C27884 + ae * C27833 +
                            C27716 * (C27882 + ae * C27716 * C27829 +
                                      C27716 * (ae * C27829 +
                                                C27716 * std::pow(C27714, 6) *
                                                    bs[6] * C27876)))) /
        C27405;
    const double C111 = C90 * C100;
    const double C599 = C90 * C590;
    const double C1362 = C1354 * C590;
    const double C12925 = C12917 * C590;
    const double C971 = C90 * C962;
    const double C2995 = C1354 * C962;
    const double C17893 = C12917 * C962;
    const double C6695 =
        (3 * (C27855 + C28129 + C28129 + C27786 * C28185) + C28198 + C28198 +
         C27786 *
             (2 * C28185 + C28195 + C28195 +
              C27786 * (C27860 + C28191 + C28191 +
                        C27786 * (2 * ae * C27804 +
                                  C27786 *
                                      (C27755 * C27756 +
                                       C27850 * bs[6] * std::pow(C27714, 6)) *
                                      C27723)))) /
        C27405;
    const double C7155 =
        (C28198 + C27811 * (2 * C28208 + ae * C28204 +
                            C27786 * (C27895 + ae * C27786 * C27829 +
                                      C27786 * (ae * C27829 +
                                                C27786 * std::pow(C27714, 6) *
                                                    bs[6] * C27889)))) /
        C27405;
    const double C6697 = C6217 * C6558;
    const double C7048 = C6217 * C6939;
    const double C7950 = C4649 * C6939;
    const double C25214 = C14502 * C6939;
    const double C12852 =
        (3 * (C27904 + C28299 + C28299 + C27811 * C28353) + C28366 + C28366 +
         C27811 *
             (2 * C28353 + C28363 + C28363 +
              C27811 * (C27909 + C28359 + C28359 +
                        C27811 * (2 * ae * C27829 +
                                  C27811 *
                                      (C27755 * C27756 +
                                       C27899 * bs[6] * std::pow(C27714, 6)) *
                                      C27723)))) /
        C27405;
    const double C12854 = C11961 * C12614;
    const double C13650 = C13641 + C13642;
    const double C13647 = C13635 + C13636;
    const double C13815 = C13809 + C13810;
    const double C19067 = C19058 + C19059;
    const double C19064 = C19052 + C19053;
    const double C19229 = C19223 + C19224;
    const double C13651 = C13643 + C13644;
    const double C13648 = C13637 + C13638;
    const double C13816 = C13811 + C13812;
    const double C19068 = C19060 + C19061;
    const double C19065 = C19054 + C19055;
    const double C19230 = C19225 + C19226;
    const double C83 =
        ((ae * -2 * C27399) / C27412 -
         (((C27401 * C27413) / C27405 + 2 * C27429) * be) / C27400) /
            C27406 -
        ((C27401 * (C27413 / C27412 -
                    (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
                    C27431 / C27415) +
          2 * (C27429 / C27406 - ((C27401 * C27436 + C28711) * be) / C27400 +
               C27426)) *
         be) /
            C27400 +
        C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400;
    const double C85 =
        (C27413 / C27412 -
         (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
         C27431 / C27415) /
            C27406 -
        ((C27401 * (C27438 / C27415 -
                    ((2 * C27426 - C27433 / C27415) * be) / C27400) +
          2 * (C27436 / C27406 - ((C27401 * C27426 + C28520) * be) / C27400)) *
         be) /
            C27400 +
        (-2 * C27431) / (C27400 * 4 * C27405);
    const double C87 =
        (C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400) /
            C27406 -
        ((2 * (C27426 / C27406 - (0 * be) / C27400) -
          C27433 / (C27400 * 4 * C27405)) *
         be) /
            C27400;
    const double C4581 = C27438 / C27400;
    const double C12912 =
        C27413 / C27412 -
        (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
        C27431 / C27415;
    const double C12914 =
        C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400;
    const double C1935 = C1349 * C589;
    const double C4020 = C1349 * C961;
    const double C1937 = C1351 * C588;
    const double C4022 = C1351 * C960;
    const double C14971 = C14434 * C1927;
    const double C14967 = C14434 * C589;
    const double C16621 = C14434 * C2490;
    const double C17247 = C14434 * C961;
    const double C22238 = C14434 * C4012;
    const double C1952 = C1949 + C1940;
    const double C4037 = C4034 + C4025;
    const double C5155 = C5151 + C5141;
    const double C5153 = C5149 + C5137;
    const double C9835 = C9831 + C9821;
    const double C9833 = C9829 + C9817;
    const double C23357 = C23355 + C23351;
    const double C6521 = C6518 + C6511;
    const double C6520 = C6517 + C6509;
    const double C6519 = C6516 + C6507;
    const double C7711 = C7709 + C7705;
    const double C7710 = C7708 + C7702;
    const double C8264 = C8263 + C8258;
    const double C10838 = C10837 + C10835;
    const double C11363 = C11362 + C11358;
    const double C12532 = C12531 + C12528;
    const double C13478 = C13475 + C13466;
    const double C18895 = C18892 + C18883;
    const double C14988 = C14984 + C14974;
    const double C14986 = C14982 + C14970;
    const double C16630 = C16628 + C16624;
    const double C17260 = C17258 + C17250;
    const double C22249 = C22247 + C22241;
    const double C6320 =
        ((ae * -2 * C27544) / C27412 -
         (((C27464 * C27573) / C27405 + 2 * C27559) * be) / C27400) /
            C27406 -
        ((C27464 * (C27573 / C27412 -
                    (((C27464 * C27576) / C27400 + 2 * C27555) * be) / C27400 -
                    C27529 / C27415) +
          2 * (C27559 / C27406 - ((C27464 * C27555 + C28724) * be) / C27400 +
               C27556)) *
         be) /
            C27400 +
        C27576 / C27415 - ((2 * C27556 - C27532 / C27415) * be) / C27400;
    const double C6321 =
        (C27573 / C27412 -
         (((C27464 * C27576) / C27400 + 2 * C27555) * be) / C27400 -
         C27529 / C27415) /
            C27406 -
        ((C27464 * (C27576 / C27415 -
                    ((2 * C27556 - C27532 / C27415) * be) / C27400) +
          2 * (C27555 / C27406 - ((C27464 * C27556 + C28590) * be) / C27400)) *
         be) /
            C27400 +
        (-2 * C27529) / (C27400 * 4 * C27405);
    const double C6322 =
        (C27576 / C27415 - ((2 * C27556 - C27532 / C27415) * be) / C27400) /
            C27406 -
        ((2 * (C27556 / C27406 - (0 * be) / C27400) -
          C27532 / (C27400 * 4 * C27405)) *
         be) /
            C27400;
    const double C14671 =
        C27573 / C27412 -
        (((C27464 * C27576) / C27400 + 2 * C27555) * be) / C27400 -
        C27529 / C27415;
    const double C14672 =
        C27576 / C27415 - ((2 * C27556 - C27532 / C27415) * be) / C27400;
    const double C13167 = C13156 * C93;
    const double C13161 = C13156 * C92;
    const double C16259 = C13156 * C960;
    const double C17549 = C13156 * C961;
    const double C27172 = C13156 * C4012;
    const double C4847 = C4844 + C4835;
    const double C8520 = C8517 + C5920;
    const double C4849 = C4846 + C4833;
    const double C8522 = C8519 + C8508;
    const double C4851 = C4848 + C4839;
    const double C8524 = C8521 + C8512;
    const double C13186 = C13182 + C13172;
    const double C13184 = C13180 + C13166;
    const double C16268 = C16266 + C16262;
    const double C17562 = C17560 + C17552;
    const double C27183 = C27181 + C27175;
    const double C14698 = C14695 + C14686;
    const double C25734 = C25731 + C25722;
    const double C14519 = C14510 + C14511;
    const double C14516 = C14504 + C14505;
    const double C14861 = C14855 + C14856;
    const double C25558 = C25549 + C25550;
    const double C25555 = C25543 + C25544;
    const double C25891 = C25885 + C25886;
    const double C14520 = C14512 + C14513;
    const double C14517 = C14506 + C14507;
    const double C14862 = C14857 + C14858;
    const double C25559 = C25551 + C25552;
    const double C25556 = C25545 + C25546;
    const double C25892 = C25887 + C25888;
    const double C12166 =
        ((ae * -2 * C27610) / C27412 -
         (((C27467 * C27639) / C27405 + 2 * C27625) * be) / C27400) /
            C27406 -
        ((C27467 * (C27639 / C27412 -
                    (((C27467 * C27642) / C27400 + 2 * C27621) * be) / C27400 -
                    C27599 / C27415) +
          2 * (C27625 / C27406 - ((C27467 * C27621 + C28725) * be) / C27400 +
               C27622)) *
         be) /
            C27400 +
        C27642 / C27415 - ((2 * C27622 - C27602 / C27415) * be) / C27400;
    const double C12167 =
        (C27639 / C27412 -
         (((C27467 * C27642) / C27400 + 2 * C27621) * be) / C27400 -
         C27599 / C27415) /
            C27406 -
        ((C27467 * (C27642 / C27415 -
                    ((2 * C27622 - C27602 / C27415) * be) / C27400) +
          2 * (C27621 / C27406 - ((C27467 * C27622 + C28614) * be) / C27400)) *
         be) /
            C27400 +
        (-2 * C27599) / (C27400 * 4 * C27405);
    const double C12168 =
        (C27642 / C27415 - ((2 * C27622 - C27602 / C27415) * be) / C27400) /
            C27406 -
        ((2 * (C27622 / C27406 - (0 * be) / C27400) -
          C27602 / (C27400 * 4 * C27405)) *
         be) /
            C27400;
    const double C21704 =
        C27639 / C27412 -
        (((C27467 * C27642) / C27400 + 2 * C27621) * be) / C27400 -
        C27599 / C27415;
    const double C21705 =
        C27642 / C27415 - ((2 * C27622 - C27602 / C27415) * be) / C27400;
    const double C18352 = C18341 * C93;
    const double C18346 = C18341 * C92;
    const double C19978 = C18341 * C588;
    const double C20602 = C18341 * C589;
    const double C25431 = C18341 * C1927;
    const double C9280 = C9277 + C9268;
    const double C11299 = C11296 + C9756;
    const double C9282 = C9279 + C9266;
    const double C11301 = C11298 + C11287;
    const double C9284 = C9281 + C9272;
    const double C11303 = C11300 + C11291;
    const double C18371 = C18367 + C18357;
    const double C18369 = C18365 + C18351;
    const double C19987 = C19985 + C19981;
    const double C20615 = C20613 + C20605;
    const double C25442 = C25440 + C25434;
    const double C21731 = C21728 + C21719;
    const double C26901 = C26898 + C26889;
    const double C21387 = C21378 + C21379;
    const double C21384 = C21372 + C21373;
    const double C21546 = C21540 + C21541;
    const double C26564 = C26555 + C26556;
    const double C26561 = C26549 + C26550;
    const double C26725 = C26719 + C26720;
    const double C21388 = C21380 + C21381;
    const double C21385 = C21374 + C21375;
    const double C21547 = C21542 + C21543;
    const double C26565 = C26557 + C26558;
    const double C26562 = C26551 + C26552;
    const double C26726 = C26721 + C26722;
    const double C5138 = C4581 * C1927;
    const double C5134 = C4581 * C589;
    const double C9818 = C4581 * C4012;
    const double C9814 = C4581 * C961;
    const double C23348 = C4581 * C2490;
    const double C13461 = C12912 * C589;
    const double C18878 = C12912 * C961;
    const double C13463 = C12914 * C588;
    const double C18880 = C12914 * C960;
    const double C1944 = C1935 + C1359;
    const double C4029 = C4020 + C2503;
    const double C1945 = C1937 + C1360;
    const double C4030 = C4022 + C2502;
    const double C14979 = C14971 + C14443;
    const double C14977 = C14967 + C14441;
    const double C16625 = C16621 + C15492;
    const double C17255 = C17247 + C15494;
    const double C22244 = C22238 + C17254;
    const double C6524 = C6521 * C28602;
    const double C6523 = C6520 * C28602;
    const double C7703 = C6520 * C28725;
    const double C25000 = C6520 * C17890;
    const double C6522 = C6519 * C28602;
    const double C7700 = C6519 * C28725;
    const double C10832 = C6519 * C8798;
    const double C24998 = C6519 * C17890;
    const double C26446 = C6519 * C28754;
    const double C7713 = C7711 * C28614;
    const double C25001 = C7711 * C28614;
    const double C7712 = C7710 * C28614;
    const double C10833 = C7710 * C8799;
    const double C24999 = C7710 * C28614;
    const double C26447 = C7710 * C28748;
    const double C10839 = C10838 * C8800;
    const double C26448 = C10838 * C21265;
    const double C14678 = C14671 * C92;
    const double C25717 = C14671 * C961;
    const double C14681 = C14672 * C588;
    const double C25719 = C14672 * C2490;
    const double C13177 = C13167 + C13168;
    const double C13175 = C13161 + C13162;
    const double C16263 = C16259 + C14177;
    const double C17557 = C17549 + C14179;
    const double C27178 = C27172 + C17556;
    const double C4850 = C4847 + C4836;
    const double C8523 = C8520 + C8510;
    const double C21711 = C21704 * C92;
    const double C26884 = C21704 * C589;
    const double C21714 = C21705 * C960;
    const double C26886 = C21705 * C2490;
    const double C18362 = C18352 + C18353;
    const double C18360 = C18346 + C18347;
    const double C19982 = C19978 + C18825;
    const double C20610 = C20602 + C18827;
    const double C25437 = C25431 + C20609;
    const double C9283 = C9280 + C9269;
    const double C11302 = C11299 + C11289;
    const double C5146 = C5138 + C4590;
    const double C5144 = C5134 + C4588;
    const double C9826 = C9818 + C8802;
    const double C9824 = C9814 + C5703;
    const double C23352 = C23348 + C5701;
    const double C13470 = C13461 + C12922;
    const double C18887 = C18878 + C13973;
    const double C13471 = C13463 + C12923;
    const double C18888 = C18880 + C13972;
    const double C1947 = C1944 + C1359;
    const double C4032 = C4029 + C2503;
    const double C1948 = C1945 + C1360;
    const double C4033 = C4030 + C2502;
    const double C14983 = C14979 + C14443;
    const double C14981 = C14977 + C14441;
    const double C16627 = C16625 + C15492;
    const double C17257 = C17255 + C15494;
    const double C22246 = C22244 + C17254;
    const double C14690 = C14678 + C14679;
    const double C25726 = C25717 + C15700;
    const double C14691 = C14681 + C14682;
    const double C25727 = C25719 + C15699;
    const double C13181 = C13177 + C13168;
    const double C13179 = C13175 + C13162;
    const double C16265 = C16263 + C14177;
    const double C17559 = C17557 + C14179;
    const double C27180 = C27178 + C17556;
    const double C21723 = C21711 + C21712;
    const double C26893 = C26884 + C22187;
    const double C21724 = C21714 + C21715;
    const double C26894 = C26886 + C22186;
    const double C18366 = C18362 + C18353;
    const double C18364 = C18360 + C18347;
    const double C19984 = C19982 + C18825;
    const double C20612 = C20610 + C18827;
    const double C25439 = C25437 + C20609;
    const double C5150 = C5146 + C4590;
    const double C5148 = C5144 + C4588;
    const double C9830 = C9826 + C8802;
    const double C9828 = C9824 + C5703;
    const double C23354 = C23352 + C5701;
    const double C13473 = C13470 + C12922;
    const double C18890 = C18887 + C13973;
    const double C13474 = C13471 + C12923;
    const double C18891 = C18888 + C13972;
    const double C1950 = C1947 + C1936;
    const double C4035 = C4032 + C4021;
    const double C1951 = C1948 + C1938;
    const double C4036 = C4033 + C4023;
    const double C14987 = C14983 + C14972;
    const double C14985 = C14981 + C14968;
    const double C16629 = C16627 + C16622;
    const double C17259 = C17257 + C17248;
    const double C22248 = C22246 + C22239;
    const double C14693 = C14690 + C14679;
    const double C25729 = C25726 + C15700;
    const double C14694 = C14691 + C14682;
    const double C25730 = C25727 + C15699;
    const double C13185 = C13181 + C13169;
    const double C13183 = C13179 + C13163;
    const double C16267 = C16265 + C16260;
    const double C17561 = C17559 + C17550;
    const double C27182 = C27180 + C27173;
    const double C21726 = C21723 + C21712;
    const double C26896 = C26893 + C22187;
    const double C21727 = C21724 + C21715;
    const double C26897 = C26894 + C22186;
    const double C18370 = C18366 + C18354;
    const double C18368 = C18364 + C18348;
    const double C19986 = C19984 + C19979;
    const double C20614 = C20612 + C20603;
    const double C25441 = C25439 + C25432;
    const double C5154 = C5150 + C5139;
    const double C5152 = C5148 + C5135;
    const double C9834 = C9830 + C9819;
    const double C9832 = C9828 + C9815;
    const double C23356 = C23354 + C23349;
    const double C13476 = C13473 + C13462;
    const double C18893 = C18890 + C18879;
    const double C13477 = C13474 + C13464;
    const double C18894 = C18891 + C18881;
    const double C14696 = C14693 + C14680;
    const double C25732 = C25729 + C25718;
    const double C14697 = C14694 + C14683;
    const double C25733 = C25730 + C25720;
    const double C21729 = C21726 + C21713;
    const double C26899 = C26896 + C26885;
    const double C21730 = C21727 + C21716;
    const double C26900 = C26897 + C26887;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                     C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                     C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                        C28602 * C12910 +
                    (C12912 * C589 + C12922 + C12922 + C28749 * C597 +
                     C12914 * C588 + C12923 + C12923 + C28738 * C596 +
                     C12916 * C587 + C12924 + C12924 + C12909 * C595) *
                        C28602 * C28590) *
                       C28758 * C28759 * C81 -
                   ((C12916 * C586 + C12925 + C12925 + C12909 * C594 +
                     C12914 * C587 + C12926 + C12926 + C28738 * C595 +
                     C12912 * C588 + C12927 + C12927 + C28749 * C596) *
                        C28602 * C28590 +
                    (C12916 * C94 + C12928 + C12928 + C12909 * C104 +
                     C12914 * C93 + C12929 + C12929 + C28738 * C103 +
                     C12912 * C92 + C12930 + C12930 + C28749 * C102) *
                        C28602 * C12910) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C12913 +
           (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
               C28749 +
           (C12999 + C13000) * C12915 + (C13001 + C13002) * C28738 +
           (C13003 + C13004) * C12917 + (C13005 + C13006) * C12909) *
              C28602 * C28758 * C28759 * C81 -
          ((C12981 * C590 + C28590 * C640 + C12980 * C99 + C12910 * C157) *
               C12909 +
           (C12981 * C586 + C28590 * C636 + C12980 * C94 + C12910 * C152) *
               C12917 +
           (C13006 + C13005) * C28738 + (C13004 + C13003) * C12915 +
           (C13002 + C13001) * C28749 + (C13000 + C12999) * C12913) *
              C28602 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28602 * C212) * C12913 +
                     (C211 * C96 + C28602 * C217) * C28749 + C235 * C12915 +
                     C236 * C28738 + C237 * C12917 + C238 * C12909) *
                        C12910 +
                    (C2073 * C12913 + C2074 * C28749 + C1502 * C12915 +
                     C1503 * C28738 + C1504 * C12917 + C1505 * C12909) *
                        C28590) *
                       C28758 * C28759 * C81 -
                   (((C211 * C590 + C28602 * C682) * C12909 +
                     (C211 * C586 + C28602 * C678) * C12917 + C1505 * C28738 +
                     C1504 * C12915 + C1503 * C28749 + C1502 * C12913) *
                        C28590 +
                    (C240 * C12909 + C239 * C12917 + C238 * C28738 +
                     C237 * C12915 + C236 * C28749 + C235 * C12913) *
                        C12910) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12913 * C91 + C28749 * C96 + C12915 * C92 + C28738 * C97 +
                     C12917 * C93 + C12909 * C98) *
                        C12980 +
                    (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                     C28738 * C275 + C12917 * C151 + C12909 * C276) *
                        C12910 +
                    (C12913 * C589 + C28749 * C593 + C12915 * C588 +
                     C28738 * C592 + C12917 * C587 + C12909 * C591) *
                        C12981 +
                    (C12913 * C639 + C28749 * C723 + C12915 * C638 +
                     C28738 * C722 + C12917 * C637 + C12909 * C721) *
                        C28590) *
                       C28602 * C28758 * C28759 * C81 -
                   ((C12917 * C636 + C12909 * C720 + C12915 * C637 +
                     C28738 * C721 + C12913 * C638 + C28749 * C722) *
                        C28590 +
                    (C12917 * C586 + C12909 * C590 + C12915 * C587 +
                     C28738 * C591 + C12913 * C588 + C28749 * C592) *
                        C12981 +
                    (C12917 * C152 + C12909 * C277 + C12915 * C151 +
                     C28738 * C276 + C12913 * C150 + C28749 * C275) *
                        C12910 +
                    (C12917 * C94 + C12909 * C99 + C12915 * C93 + C28738 * C98 +
                     C12913 * C92 + C28749 * C97) *
                        C12980) *
                       C28602 * C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                     C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                        C28749 +
                    (C13183 + C13184) * C28738 + (C13185 + C13186) * C12909) *
                       C28602 * C28758 * C28759 * C81 -
                   ((C13157 * C586 + C13173 + C13173 + C28590 * C758 +
                     C13156 * C94 + C13174 + C13174 + C12910 * C317) *
                        C12909 +
                    (C13186 + C13185) * C28738 + (C13184 + C13183) * C28749) *
                       C28602 * C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28602 * C212) * C12980 +
                     (C211 * C149 + C28602 * C373) * C12910 + C2073 * C12981 +
                     C2262 * C28590) *
                        C28749 +
                    (C13237 + C13238 + C13239 + C13240) * C28738 +
                    (C13241 + C13242 + C13243 + C13244) * C12909) *
                       C28758 * C28759 * C81 -
                   (((C211 * C636 + C28602 * C800) * C28590 +
                     (C211 * C586 + C28602 * C678) * C12981 + C390 * C12910 +
                     C239 * C12980) *
                        C12909 +
                    (C13244 + C13243 + C13242 + C13241) * C28738 +
                    (C13240 + C13239 + C13238 + C13237) * C28749) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C211 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C28602) *
                        C12910 +
                    ((C12913 * C589 + C28749 * C593 + C12915 * C588 +
                      C28738 * C592 + C12917 * C587 + C12909 * C591) *
                         C211 +
                     (C12913 * C681 + C28749 * C841 + C12915 * C680 +
                      C28738 * C840 + C12917 * C679 + C12909 * C839) *
                         C28602) *
                        C28590) *
                       C28758 * C28759 * C81 -
                   (((C12917 * C678 + C12909 * C838 + C12915 * C679 +
                      C28738 * C839 + C12913 * C680 + C28749 * C840) *
                         C28602 +
                     (C12917 * C586 + C12909 * C590 + C12915 * C587 +
                      C28738 * C591 + C12913 * C588 + C28749 * C592) *
                         C211) *
                        C28590 +
                    ((C12917 * C215 + C12909 * C430 + C12915 * C214 +
                      C28738 * C429 + C12913 * C213 + C28749 * C428) *
                         C28602 +
                     (C12917 * C94 + C12909 * C99 + C12915 * C93 +
                      C28738 * C98 + C12913 * C92 + C28749 * C97) *
                         C211) *
                        C12910) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C211 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28602) *
               C28749 +
           ((C12999 + C13000) * C211 + (C13353 + C13354) * C28602) * C28738 +
           ((C13003 + C13004) * C211 + (C13355 + C13356) * C28602) * C12909) *
              C28758 * C28759 * C81 -
          (((C12981 * C678 + C28590 * C876 + C12980 * C215 + C12910 * C469) *
                C28602 +
            (C12981 * C586 + C28590 * C636 + C12980 * C94 + C12910 * C152) *
                C211) *
               C12909 +
           ((C13356 + C13355) * C28602 + (C13004 + C13003) * C211) * C28738 +
           ((C13354 + C13353) * C28602 + (C13000 + C12999) * C211) * C28749) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28602 * C521) * C12910 +
                     C2438 * C28590) *
                        C28749 +
                    (C13407 + C13408) * C28738 + (C13409 + C13410) * C12909) *
                       C28758 * C28759 * C81 -
                   (((C520 * C586 + C919 + C919 + C28602 * C914) * C28590 +
                     C546 * C12910) *
                        C12909 +
                    (C13410 + C13409) * C28738 + (C13408 + C13407) * C28749) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                     C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                     C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                        C28602 * C12910 +
                    (C13476 + C13477 + C13478) * C28602 * C28590) *
                       C28758 * C583 -
                   ((C12916 * C1925 + C13467 + C13467 + C12909 * C1931 +
                     C12914 * C1926 + C13468 + C13468 + C28738 * C1932 +
                     C12912 * C1927 + C13469 + C13469 + C28749 * C1933) *
                        C28602 * C28590 +
                    (C13478 + C13477 + C13476) * C28602 * C12910) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C12913 +
           (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
               C28749 +
           (C12999 + C13000) * C12915 + (C13001 + C13002) * C28738 +
           (C13003 + C13004) * C12917 + (C13005 + C13006) * C12909) *
              C28602 * C28758 * C583 -
          ((C12981 * C1928 + C28590 * C2005 + C12980 * C591 + C12910 * C641) *
               C12909 +
           (C12981 * C1925 + C28590 * C2002 + C12980 * C587 + C12910 * C637) *
               C12917 +
           (C12981 * C1929 + C28590 * C2006 + C12980 * C592 + C12910 * C642) *
               C28738 +
           (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
               C12915 +
           (C12981 * C1930 + C28590 * C2007 + C12980 * C593 + C12910 * C643) *
               C28749 +
           (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
               C12913) *
              C28602 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C12913 +
            (C211 * C96 + C28602 * C217) * C28749 + C235 * C12915 +
            C236 * C28738 + C237 * C12917 + C238 * C12909) *
               C12910 +
           (C13579 + C13580 + C13581 + C13582 + C13583 + C13584) * C28590) *
              C28758 * C583 -
          (((C211 * C1928 + C28602 * C2061) * C12909 +
            (C211 * C1925 + C28602 * C2058) * C12917 + C4724 * C28738 +
            C4723 * C12915 + C5275 * C28749 + C5274 * C12913) *
               C28590 +
           (C13584 + C13583 + C13582 + C13581 + C13580 + C13579) * C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12913 * C91 + C28749 * C96 + C12915 * C92 + C28738 * C97 +
                     C12917 * C93 + C12909 * C98) *
                        C12980 +
                    (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                     C28738 * C275 + C12917 * C151 + C12909 * C276) *
                        C12910 +
                    (C13647 + C13648 + C13649) * C12981 +
                    (C13650 + C13651 + C13652) * C28590) *
                       C28602 * C28758 * C583 -
                   ((C12917 * C2002 + C12909 * C2126 + C12915 * C2003 +
                     C28738 * C2127 + C12913 * C2004 + C28749 * C2128) *
                        C28590 +
                    (C12917 * C1925 + C12909 * C1928 + C12915 * C1926 +
                     C28738 * C1929 + C12913 * C1927 + C28749 * C1930) *
                        C12981 +
                    (C13652 + C13651 + C13650) * C12910 +
                    (C13649 + C13648 + C13647) * C12980) *
                       C28602 * C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                     C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                        C28749 +
                    (C13183 + C13184) * C28738 + (C13185 + C13186) * C12909) *
                       C28602 * C28758 * C583 -
                   ((C13157 * C1925 + C13703 + C13703 + C28590 * C2197 +
                     C13156 * C587 + C13704 + C13704 + C12910 * C759) *
                        C12909 +
                    (C13157 * C1926 + C13705 + C13705 + C28590 * C2198 +
                     C13156 * C588 + C13706 + C13706 + C12910 * C760) *
                        C28738 +
                    (C13157 * C1927 + C13707 + C13707 + C28590 * C2199 +
                     C13156 * C589 + C13708 + C13708 + C12910 * C761) *
                        C28749) *
                       C28602 * C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C12980 +
            (C211 * C149 + C28602 * C373) * C12910 + C2073 * C12981 +
            C2262 * C28590) *
               C28749 +
           (C13237 + C13238 + C13239 + C13240) * C28738 +
           (C13241 + C13242 + C13243 + C13244) * C12909) *
              C28758 * C583 -
          (((C211 * C2002 + C28602 * C2256) * C28590 +
            (C211 * C1925 + C28602 * C2058) * C12981 + C1697 * C12910 +
            C1504 * C12980) *
               C12909 +
           (C4909 * C28590 + C4723 * C12981 + C1696 * C12910 + C1502 * C12980) *
               C28738 +
           (C5466 * C28590 + C5274 * C12981 + C2262 * C12910 + C2073 * C12980) *
               C28749) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C211 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C28602) *
                        C12910 +
                    ((C13647 + C13648 + C13649) * C211 +
                     (C13815 + C13816 + C13817) * C28602) *
                        C28590) *
                       C28758 * C583 -
                   (((C12917 * C2058 + C12909 * C2312 + C12915 * C2059 +
                      C28738 * C2313 + C12913 * C2060 + C28749 * C2314) *
                         C28602 +
                     (C12917 * C1925 + C12909 * C1928 + C12915 * C1926 +
                      C28738 * C1929 + C12913 * C1927 + C28749 * C1930) *
                         C211) *
                        C28590 +
                    ((C13817 + C13816 + C13815) * C28602 +
                     (C13649 + C13648 + C13647) * C211) *
                        C12910) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C211 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28602) *
               C28749 +
           ((C12999 + C13000) * C211 + (C13353 + C13354) * C28602) * C28738 +
           ((C13003 + C13004) * C211 + (C13355 + C13356) * C28602) * C12909) *
              C28758 * C583 -
          (((C12981 * C2058 + C28590 * C2374 + C12980 * C679 + C12910 * C877) *
                C28602 +
            (C12981 * C1925 + C28590 * C2002 + C12980 * C587 + C12910 * C637) *
                C211) *
               C12909 +
           ((C12981 * C2059 + C28590 * C2375 + C12980 * C680 + C12910 * C878) *
                C28602 +
            (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
                C211) *
               C28738 +
           ((C12981 * C2060 + C28590 * C2376 + C12980 * C681 + C12910 * C879) *
                C28602 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C211) *
               C28749) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28602 * C521) * C12910 +
                     C2438 * C28590) *
                        C28749 +
                    (C13407 + C13408) * C28738 + (C13409 + C13410) * C12909) *
                       C28758 * C583 -
                   (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C28590 +
                     C1873 * C12910) *
                        C12909 +
                    (C5076 * C28590 + C1872 * C12910) * C28738 +
                    (C5641 * C28590 + C2438 * C12910) * C28749) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                     C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                     C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                        C28602 * C12910 +
                    (C13476 + C13477 + C13478) * C28602 * C28590) *
                       C956 -
                   ((C12916 * C2488 + C13968 + C13968 + C12909 * C2494 +
                     C12914 * C2489 + C13969 + C13969 + C28738 * C2495 +
                     C12912 * C2490 + C13970 + C13970 + C28749 * C2496) *
                        C28602 * C28590 +
                    (C12916 * C959 + C13971 + C13971 + C12909 * C967 +
                     C12914 * C960 + C13972 + C13972 + C28738 * C968 +
                     C12912 * C961 + C13973 + C13973 + C28749 * C969) *
                        C28602 * C12910) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C12913 +
           (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
               C28749 +
           (C12999 + C13000) * C12915 + (C13001 + C13002) * C28738 +
           (C13003 + C13004) * C12917 + (C13005 + C13006) * C12909) *
              C28602 * C956 -
          ((C12981 * C2491 + C28590 * C2556 + C12980 * C963 + C12910 * C1013) *
               C12909 +
           (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
               C12917 +
           (C12981 * C2492 + C28590 * C2557 + C12980 * C964 + C12910 * C1014) *
               C28738 +
           (C12981 * C2489 + C28590 * C2554 + C12980 * C960 + C12910 * C1010) *
               C12915 +
           (C12981 * C2493 + C28590 * C2558 + C12980 * C965 + C12910 * C1015) *
               C28749 +
           (C12981 * C2490 + C28590 * C2555 + C12980 * C961 + C12910 * C1011) *
               C12913) *
              C28602 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C12913 +
            (C211 * C96 + C28602 * C217) * C28749 + C235 * C12915 +
            C236 * C28738 + C237 * C12917 + C238 * C12909) *
               C12910 +
           (C13579 + C13580 + C13581 + C13582 + C13583 + C13584) * C28590) *
              C956 -
          (((C211 * C2491 + C28602 * C2612) * C12909 +
            (C211 * C2488 + C28602 * C2609) * C12917 +
            (C211 * C2492 + C28602 * C2613) * C28738 +
            (C211 * C2489 + C28602 * C2610) * C12915 +
            (C211 * C2493 + C28602 * C2614) * C28749 +
            (C211 * C2490 + C28602 * C2611) * C12913) *
               C28590 +
           ((C211 * C963 + C28602 * C1055) * C12909 +
            (C211 * C959 + C28602 * C1051) * C12917 +
            (C211 * C964 + C28602 * C1056) * C28738 +
            (C211 * C960 + C28602 * C1052) * C12915 +
            (C211 * C965 + C28602 * C1057) * C28749 +
            (C211 * C961 + C28602 * C1053) * C12913) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C12913 * C91 + C28749 * C96 + C12915 * C92 + C28738 * C97 +
                     C12917 * C93 + C12909 * C98) *
                        C12980 +
                    (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                     C28738 * C275 + C12917 * C151 + C12909 * C276) *
                        C12910 +
                    (C13647 + C13648 + C13649) * C12981 +
                    (C13650 + C13651 + C13652) * C28590) *
                       C28602 * C956 -
                   ((C12917 * C2553 + C12909 * C2665 + C12915 * C2554 +
                     C28738 * C2666 + C12913 * C2555 + C28749 * C2667) *
                        C28590 +
                    (C12917 * C2488 + C12909 * C2491 + C12915 * C2489 +
                     C28738 * C2492 + C12913 * C2490 + C28749 * C2493) *
                        C12981 +
                    (C12917 * C1009 + C12909 * C1093 + C12915 * C1010 +
                     C28738 * C1094 + C12913 * C1011 + C28749 * C1095) *
                        C12910 +
                    (C12917 * C959 + C12909 * C963 + C12915 * C960 +
                     C28738 * C964 + C12913 * C961 + C28749 * C965) *
                        C12980) *
                       C28602 * C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                     C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                        C28749 +
                    (C13183 + C13184) * C28738 + (C13185 + C13186) * C12909) *
                       C28602 * C956 -
                   ((C13157 * C2488 + C14174 + C14174 + C28590 * C2718 +
                     C13156 * C959 + C14175 + C14175 + C12910 * C1131) *
                        C12909 +
                    (C13157 * C2489 + C14176 + C14176 + C28590 * C2719 +
                     C13156 * C960 + C14177 + C14177 + C12910 * C1132) *
                        C28738 +
                    (C13157 * C2490 + C14178 + C14178 + C28590 * C2720 +
                     C13156 * C961 + C14179 + C14179 + C12910 * C1133) *
                        C28749) *
                       C28602 * C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28602 * C212) * C12980 +
                     (C211 * C149 + C28602 * C373) * C12910 + C2073 * C12981 +
                     C2262 * C28590) *
                        C28749 +
                    (C13237 + C13238 + C13239 + C13240) * C28738 +
                    (C13241 + C13242 + C13243 + C13244) * C12909) *
                       C956 -
                   (((C211 * C2553 + C28602 * C2777) * C28590 +
                     (C211 * C2488 + C28602 * C2609) * C12981 +
                     (C211 * C1009 + C28602 * C1173) * C12910 +
                     (C211 * C959 + C28602 * C1051) * C12980) *
                        C12909 +
                    ((C211 * C2554 + C28602 * C2778) * C28590 +
                     (C211 * C2489 + C28602 * C2610) * C12981 +
                     (C211 * C1010 + C28602 * C1174) * C12910 +
                     (C211 * C960 + C28602 * C1052) * C12980) *
                        C28738 +
                    ((C211 * C2555 + C28602 * C2779) * C28590 +
                     (C211 * C2490 + C28602 * C2611) * C12981 +
                     (C211 * C1011 + C28602 * C1175) * C12910 +
                     (C211 * C961 + C28602 * C1053) * C12980) *
                        C28749) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C211 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C28602) *
                        C12910 +
                    ((C13647 + C13648 + C13649) * C211 +
                     (C13815 + C13816 + C13817) * C28602) *
                        C28590) *
                       C956 -
                   (((C12917 * C2609 + C12909 * C2830 + C12915 * C2610 +
                      C28738 * C2831 + C12913 * C2611 + C28749 * C2832) *
                         C28602 +
                     (C12917 * C2488 + C12909 * C2491 + C12915 * C2489 +
                      C28738 * C2492 + C12913 * C2490 + C28749 * C2493) *
                         C211) *
                        C28590 +
                    ((C12917 * C1051 + C12909 * C1211 + C12915 * C1052 +
                      C28738 * C1212 + C12913 * C1053 + C28749 * C1213) *
                         C28602 +
                     (C12917 * C959 + C12909 * C963 + C12915 * C960 +
                      C28738 * C964 + C12913 * C961 + C28749 * C965) *
                         C211) *
                        C12910) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C211 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28602) *
               C28749 +
           ((C12999 + C13000) * C211 + (C13353 + C13354) * C28602) * C28738 +
           ((C13003 + C13004) * C211 + (C13355 + C13356) * C28602) * C12909) *
              C956 -
          (((C12981 * C2609 + C28590 * C2883 + C12980 * C1051 +
             C12910 * C1249) *
                C28602 +
            (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
                C211) *
               C12909 +
           ((C12981 * C2610 + C28590 * C2884 + C12980 * C1052 +
             C12910 * C1250) *
                C28602 +
            (C12981 * C2489 + C28590 * C2554 + C12980 * C960 + C12910 * C1010) *
                C211) *
               C28738 +
           ((C12981 * C2611 + C28590 * C2885 + C12980 * C1053 +
             C12910 * C1251) *
                C28602 +
            (C12981 * C2490 + C28590 * C2555 + C12980 * C961 + C12910 * C1011) *
                C211) *
               C28749) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28602 * C521) * C12910 +
                     C2438 * C28590) *
                        C28749 +
                    (C13407 + C13408) * C28738 + (C13409 + C13410) * C12909) *
                       C956 -
                   (((C520 * C2488 + C2940 + C2940 + C28602 * C2936) * C28590 +
                     (C520 * C959 + C1292 + C1292 + C28602 * C1287) * C12910) *
                        C12909 +
                    ((C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C28590 +
                     (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C12910) *
                        C28738 +
                    ((C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C28590 +
                     (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C12910) *
                        C28749) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                     C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                        C28602 * C28753 +
                    (C14434 * C589 + C14441 + C14441 + C14429 * C597 +
                     C14436 * C588 + C14442 + C14442 + C28520 * C596) *
                        C28602 * C28745 +
                    (C14434 * C1927 + C14443 + C14443 + C14429 * C1933 +
                     C14436 * C1926 + C14444 + C14444 + C28520 * C1932) *
                        C28602 * C14433) *
                       C28758 * C28759 * C81 -
                   ((C14436 * C1925 + C14445 + C14445 + C28520 * C1931 +
                     C14434 * C1926 + C14446 + C14446 + C14429 * C1932) *
                        C28602 * C14433 +
                    (C14436 * C587 + C14447 + C14447 + C28520 * C595 +
                     C14434 * C588 + C14448 + C14448 + C14429 * C596) *
                        C28602 * C28745 +
                    (C14436 * C93 + C14449 + C14449 + C28520 * C103 +
                     C14434 * C92 + C14450 + C14450 + C14429 * C102) *
                        C28602 * C28753) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                     C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                        C14435 +
                    (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                     C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                        C14429 +
                    (C14516 + C14517 + C14518) * C14437 +
                    (C14519 + C14520 + C14521) * C28520) *
                       C28602 * C28758 * C28759 * C81 -
                   ((C14502 * C1928 + C14433 * C2005 + C14501 * C591 +
                     C28745 * C641 + C14500 * C98 + C28753 * C156) *
                        C28520 +
                    (C14502 * C1925 + C14433 * C2002 + C14501 * C587 +
                     C28745 * C637 + C14500 * C93 + C28753 * C151) *
                        C14437 +
                    (C14521 + C14520 + C14519) * C14429 +
                    (C14518 + C14517 + C14516) * C14435) *
                       C28602 * C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C14435 +
            (C211 * C96 + C28602 * C217) * C14429 + C235 * C14437 +
            C236 * C28520) *
               C28753 +
           (C2073 * C14435 + C2074 * C14429 + C1502 * C14437 + C1503 * C28520) *
               C28745 +
           (C5274 * C14435 + C5275 * C14429 + C4723 * C14437 + C4724 * C28520) *
               C14433) *
              C28758 * C28759 * C81 -
          (((C211 * C1928 + C28602 * C2061) * C28520 +
            (C211 * C1925 + C28602 * C2058) * C14437 + C4724 * C14429 +
            C4723 * C14435) *
               C14433 +
           (C1505 * C28520 + C1504 * C14437 + C1503 * C14429 + C1502 * C14435) *
               C28745 +
           (C238 * C28520 + C237 * C14437 + C236 * C14429 + C235 * C14435) *
               C28753) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C14500 +
           (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
               C28753 +
           (C14435 * C589 + C14429 * C593 + C14437 * C588 + C28520 * C592) *
               C14501 +
           (C14435 * C639 + C14429 * C723 + C14437 * C638 + C28520 * C722) *
               C28745 +
           (C14435 * C1927 + C14429 * C1930 + C14437 * C1926 + C28520 * C1929) *
               C14502 +
           (C14435 * C2004 + C14429 * C2128 + C14437 * C2003 + C28520 * C2127) *
               C14433) *
              C28602 * C28758 * C28759 * C81 -
          ((C14437 * C2002 + C28520 * C2126 + C14435 * C2003 + C14429 * C2127) *
               C14433 +
           (C14437 * C1925 + C28520 * C1928 + C14435 * C1926 + C14429 * C1929) *
               C14502 +
           (C14437 * C637 + C28520 * C721 + C14435 * C638 + C14429 * C722) *
               C28745 +
           (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
               C14501 +
           (C14437 * C151 + C28520 * C276 + C14435 * C150 + C14429 * C275) *
               C28753 +
           (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
               C14500) *
              C28602 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                     C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                     C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                        C14429 +
                    (C14696 + C14697 + C14698) * C28520) *
                       C28602 * C28758 * C28759 * C81 -
                   ((C14673 * C1925 + C14687 + C14687 + C14433 * C2197 +
                     C14672 * C587 + C14688 + C14688 + C28745 * C759 +
                     C14671 * C93 + C14689 + C14689 + C28753 * C316) *
                        C28520 +
                    (C14698 + C14697 + C14696) * C14429) *
                       C28602 * C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C14500 +
            (C211 * C149 + C28602 * C373) * C28753 + C2073 * C14501 +
            C2262 * C28745 + C5274 * C14502 + C5466 * C14433) *
               C14429 +
           (C14749 + C14750 + C14751 + C14752 + C14753 + C14754) * C28520) *
              C28758 * C28759 * C81 -
          (((C211 * C2002 + C28602 * C2256) * C14433 +
            (C211 * C1925 + C28602 * C2058) * C14502 + C1697 * C28745 +
            C1504 * C14501 + C389 * C28753 + C237 * C14500) *
               C28520 +
           (C14754 + C14753 + C14752 + C14751 + C14750 + C14749) * C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C211 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28602) *
               C28753 +
           ((C14435 * C589 + C14429 * C593 + C14437 * C588 + C28520 * C592) *
                C211 +
            (C14435 * C681 + C14429 * C841 + C14437 * C680 + C28520 * C840) *
                C28602) *
               C28745 +
           ((C14435 * C1927 + C14429 * C1930 + C14437 * C1926 +
             C28520 * C1929) *
                C211 +
            (C14435 * C2060 + C14429 * C2314 + C14437 * C2059 +
             C28520 * C2313) *
                C28602) *
               C14433) *
              C28758 * C28759 * C81 -
          (((C14437 * C2058 + C28520 * C2312 + C14435 * C2059 +
             C14429 * C2313) *
                C28602 +
            (C14437 * C1925 + C28520 * C1928 + C14435 * C1926 +
             C14429 * C1929) *
                C211) *
               C14433 +
           ((C14437 * C679 + C28520 * C839 + C14435 * C680 + C14429 * C840) *
                C28602 +
            (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
                C211) *
               C28745 +
           ((C14437 * C214 + C28520 * C429 + C14435 * C213 + C14429 * C428) *
                C28602 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C211) *
               C28753) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C211 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C28602) *
                        C14429 +
                    ((C14516 + C14517 + C14518) * C211 +
                     (C14861 + C14862 + C14863) * C28602) *
                        C28520) *
                       C28758 * C28759 * C81 -
                   (((C14502 * C2058 + C14433 * C2374 + C14501 * C679 +
                      C28745 * C877 + C14500 * C214 + C28753 * C468) *
                         C28602 +
                     (C14502 * C1925 + C14433 * C2002 + C14501 * C587 +
                      C28745 * C637 + C14500 * C93 + C28753 * C151) *
                         C211) *
                        C28520 +
                    ((C14863 + C14862 + C14861) * C28602 +
                     (C14518 + C14517 + C14516) * C211) *
                        C14429) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28753 +
                     C2438 * C28745 + C5641 * C14433) *
                        C14429 +
                    (C14914 + C14915 + C14916) * C28520) *
                       C28758 * C28759 * C81 -
                   (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C14433 +
                     C1873 * C28745 + C545 * C28753) *
                        C28520 +
                    (C14916 + C14915 + C14914) * C14429) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                     C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                        C28602 * C28753 +
                    (C14985 + C14986) * C28602 * C28745 +
                    (C14987 + C14988) * C28602 * C14433) *
                       C28758 * C583 -
                   ((C14436 * C5127 + C14975 + C14975 + C28520 * C5131 +
                     C14434 * C5128 + C14976 + C14976 + C14429 * C5132) *
                        C28602 * C14433 +
                    (C14988 + C14987) * C28602 * C28745 +
                    (C14986 + C14985) * C28602 * C28753) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                     C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                        C14435 +
                    (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                     C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                        C14429 +
                    (C14516 + C14517 + C14518) * C14437 +
                    (C14519 + C14520 + C14521) * C28520) *
                       C28602 * C28758 * C583 -
                   ((C14502 * C5129 + C14433 * C5207 + C14501 * C1929 +
                     C28745 * C2006 + C14500 * C592 + C28753 * C642) *
                        C28520 +
                    (C14502 * C5127 + C14433 * C5205 + C14501 * C1926 +
                     C28745 * C2003 + C14500 * C588 + C28753 * C638) *
                        C14437 +
                    (C14502 * C5130 + C14433 * C5208 + C14501 * C1930 +
                     C28745 * C2007 + C14500 * C593 + C28753 * C643) *
                        C14429 +
                    (C14502 * C5128 + C14433 * C5206 + C14501 * C1927 +
                     C28745 * C2004 + C14500 * C589 + C28753 * C639) *
                        C14435) *
                       C28602 * C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexz[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28602 * C212) * C14435 +
                     (C211 * C96 + C28602 * C217) * C14429 + C235 * C14437 +
                     C236 * C28520) *
                        C28753 +
                    (C15089 + C15090 + C15091 + C15092) * C28745 +
                    (C15093 + C15094 + C15095 + C15096) * C14433) *
                       C28758 * C583 -
                   (((C211 * C5129 + C28602 * C5261) * C28520 +
                     (C211 * C5127 + C28602 * C5259) * C14437 + C6606 * C14429 +
                     C6605 * C14435) *
                        C14433 +
                    (C15096 + C15095 + C15094 + C15093) * C28745 +
                    (C15092 + C15091 + C15090 + C15089) * C28753) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C14500 +
           (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
               C28753 +
           (C15163 + C15164) * C14501 + (C15165 + C15166) * C28745 +
           (C15167 + C15168) * C14502 + (C15169 + C15170) * C14433) *
              C28602 * C28758 * C583 -
          ((C14437 * C5205 + C28520 * C5327 + C14435 * C5206 + C14429 * C5328) *
               C14433 +
           (C14437 * C5127 + C28520 * C5129 + C14435 * C5128 + C14429 * C5130) *
               C14502 +
           (C15170 + C15169) * C28745 + (C15168 + C15167) * C14501 +
           (C15166 + C15165) * C28753 + (C15164 + C15163) * C14500) *
              C28602 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                     C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                     C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                        C14429 +
                    (C14696 + C14697 + C14698) * C28520) *
                       C28602 * C28758 * C583 -
                   ((C14673 * C5127 + C15221 + C15221 + C14433 * C5403 +
                     C14672 * C1926 + C15222 + C15222 + C28745 * C2198 +
                     C14671 * C588 + C15223 + C15223 + C28753 * C760) *
                        C28520 +
                    (C14673 * C5128 + C15224 + C15224 + C14433 * C5404 +
                     C14672 * C1927 + C15225 + C15225 + C28745 * C2199 +
                     C14671 * C589 + C15226 + C15226 + C28753 * C761) *
                        C14429) *
                       C28602 * C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C14500 +
            (C211 * C149 + C28602 * C373) * C28753 + C2073 * C14501 +
            C2262 * C28745 + C5274 * C14502 + C5466 * C14433) *
               C14429 +
           (C14749 + C14750 + C14751 + C14752 + C14753 + C14754) * C28520) *
              C28758 * C583 -
          (((C211 * C5205 + C28602 * C5461) * C14433 +
            (C211 * C5127 + C28602 * C5259) * C14502 + C4909 * C28745 +
            C4723 * C14501 + C1696 * C28753 + C1502 * C14500) *
               C28520 +
           (C6738 * C14433 + C6605 * C14502 + C5466 * C28745 + C5274 * C14501 +
            C2262 * C28753 + C2073 * C14500) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C211 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28602) *
               C28753 +
           ((C15163 + C15164) * C211 + (C15335 + C15336) * C28602) * C28745 +
           ((C15167 + C15168) * C211 + (C15337 + C15338) * C28602) * C14433) *
              C28758 * C583 -
          (((C14437 * C5259 + C28520 * C5516 + C14435 * C5260 +
             C14429 * C5517) *
                C28602 +
            (C14437 * C5127 + C28520 * C5129 + C14435 * C5128 +
             C14429 * C5130) *
                C211) *
               C14433 +
           ((C15338 + C15337) * C28602 + (C15168 + C15167) * C211) * C28745 +
           ((C15336 + C15335) * C28602 + (C15164 + C15163) * C211) * C28753) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C211 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C28602) *
                        C14429 +
                    ((C14516 + C14517 + C14518) * C211 +
                     (C14861 + C14862 + C14863) * C28602) *
                        C28520) *
                       C28758 * C583 -
                   (((C14502 * C5259 + C14433 * C5580 + C14501 * C2059 +
                      C28745 * C2375 + C14500 * C680 + C28753 * C878) *
                         C28602 +
                     (C14502 * C5127 + C14433 * C5205 + C14501 * C1926 +
                      C28745 * C2003 + C14500 * C588 + C28753 * C638) *
                         C211) *
                        C28520 +
                    ((C14502 * C5260 + C14433 * C5581 + C14501 * C2060 +
                      C28745 * C2376 + C14500 * C681 + C28753 * C879) *
                         C28602 +
                     (C14502 * C5128 + C14433 * C5206 + C14501 * C1927 +
                      C28745 * C2004 + C14500 * C589 + C28753 * C639) *
                         C211) *
                        C14429) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28753 +
            C2438 * C28745 + C5641 * C14433) *
               C14429 +
           (C14914 + C14915 + C14916) * C28520) *
              C28758 * C583 -
          (((C520 * C5127 + C5637 + C5637 + C28602 * C5632) * C14433 +
            C5076 * C28745 + C1872 * C28753) *
               C28520 +
           (C6864 * C14433 + C5641 * C28745 + C2438 * C28753) * C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                     C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                        C28602 * C28753 +
                    (C14985 + C14986) * C28602 * C28745 +
                    (C14987 + C14988) * C28602 * C14433) *
                       C956 -
                   ((C14436 * C5691 + C15489 + C15489 + C28520 * C5695 +
                     C14434 * C5692 + C15490 + C15490 + C14429 * C5696) *
                        C28602 * C14433 +
                    (C14436 * C2489 + C15491 + C15491 + C28520 * C2495 +
                     C14434 * C2490 + C15492 + C15492 + C14429 * C2496) *
                        C28602 * C28745 +
                    (C14436 * C960 + C15493 + C15493 + C28520 * C968 +
                     C14434 * C961 + C15494 + C15494 + C14429 * C969) *
                        C28602 * C28753) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                     C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                        C14435 +
                    (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                     C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                        C14429 +
                    (C14516 + C14517 + C14518) * C14437 +
                    (C14519 + C14520 + C14521) * C28520) *
                       C28602 * C956 -
                   ((C14502 * C5693 + C14433 * C5755 + C14501 * C2492 +
                     C28745 * C2557 + C14500 * C964 + C28753 * C1014) *
                        C28520 +
                    (C14502 * C5691 + C14433 * C5753 + C14501 * C2489 +
                     C28745 * C2554 + C14500 * C960 + C28753 * C1010) *
                        C14437 +
                    (C14502 * C5694 + C14433 * C5756 + C14501 * C2493 +
                     C28745 * C2558 + C14500 * C965 + C28753 * C1015) *
                        C14429 +
                    (C14502 * C5692 + C14433 * C5754 + C14501 * C2490 +
                     C28745 * C2555 + C14500 * C961 + C28753 * C1011) *
                        C14435) *
                       C28602 * C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28602 * C212) * C14435 +
                     (C211 * C96 + C28602 * C217) * C14429 + C235 * C14437 +
                     C236 * C28520) *
                        C28753 +
                    (C15089 + C15090 + C15091 + C15092) * C28745 +
                    (C15093 + C15094 + C15095 + C15096) * C14433) *
                       C956 -
                   (((C211 * C5693 + C28602 * C5809) * C28520 +
                     (C211 * C5691 + C28602 * C5807) * C14437 +
                     (C211 * C5694 + C28602 * C5810) * C14429 +
                     (C211 * C5692 + C28602 * C5808) * C14435) *
                        C14433 +
                    ((C211 * C2492 + C28602 * C2613) * C28520 +
                     (C211 * C2489 + C28602 * C2610) * C14437 +
                     (C211 * C2493 + C28602 * C2614) * C14429 +
                     (C211 * C2490 + C28602 * C2611) * C14435) *
                        C28745 +
                    ((C211 * C964 + C28602 * C1056) * C28520 +
                     (C211 * C960 + C28602 * C1052) * C14437 +
                     (C211 * C965 + C28602 * C1057) * C14429 +
                     (C211 * C961 + C28602 * C1053) * C14435) *
                        C28753) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C14500 +
           (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
               C28753 +
           (C15163 + C15164) * C14501 + (C15165 + C15166) * C28745 +
           (C15167 + C15168) * C14502 + (C15169 + C15170) * C14433) *
              C28602 * C956 -
          ((C14437 * C5753 + C28520 * C5861 + C14435 * C5754 + C14429 * C5862) *
               C14433 +
           (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 + C14429 * C5694) *
               C14502 +
           (C14437 * C2554 + C28520 * C2666 + C14435 * C2555 + C14429 * C2667) *
               C28745 +
           (C14437 * C2489 + C28520 * C2492 + C14435 * C2490 + C14429 * C2493) *
               C14501 +
           (C14437 * C1010 + C28520 * C1094 + C14435 * C1011 + C14429 * C1095) *
               C28753 +
           (C14437 * C960 + C28520 * C964 + C14435 * C961 + C14429 * C965) *
               C14500) *
              C28602 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                     C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                     C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                        C14429 +
                    (C14696 + C14697 + C14698) * C28520) *
                       C28602 * C956 -
                   ((C14673 * C5691 + C15695 + C15695 + C14433 * C5913 +
                     C14672 * C2489 + C15696 + C15696 + C28745 * C2719 +
                     C14671 * C960 + C15697 + C15697 + C28753 * C1132) *
                        C28520 +
                    (C14673 * C5692 + C15698 + C15698 + C14433 * C5914 +
                     C14672 * C2490 + C15699 + C15699 + C28745 * C2720 +
                     C14671 * C961 + C15700 + C15700 + C28753 * C1133) *
                        C14429) *
                       C28602 * C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C14500 +
            (C211 * C149 + C28602 * C373) * C28753 + C2073 * C14501 +
            C2262 * C28745 + C5274 * C14502 + C5466 * C14433) *
               C14429 +
           (C14749 + C14750 + C14751 + C14752 + C14753 + C14754) * C28520) *
              C956 -
          (((C211 * C5753 + C28602 * C5971) * C14433 +
            (C211 * C5691 + C28602 * C5807) * C14502 +
            (C211 * C2554 + C28602 * C2778) * C28745 +
            (C211 * C2489 + C28602 * C2610) * C14501 +
            (C211 * C1010 + C28602 * C1174) * C28753 +
            (C211 * C960 + C28602 * C1052) * C14500) *
               C28520 +
           ((C211 * C5754 + C28602 * C5972) * C14433 +
            (C211 * C5692 + C28602 * C5808) * C14502 +
            (C211 * C2555 + C28602 * C2779) * C28745 +
            (C211 * C2490 + C28602 * C2611) * C14501 +
            (C211 * C1011 + C28602 * C1175) * C28753 +
            (C211 * C961 + C28602 * C1053) * C14500) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C211 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28602) *
               C28753 +
           ((C15163 + C15164) * C211 + (C15335 + C15336) * C28602) * C28745 +
           ((C15167 + C15168) * C211 + (C15337 + C15338) * C28602) * C14433) *
              C956 -
          (((C14437 * C5807 + C28520 * C6023 + C14435 * C5808 +
             C14429 * C6024) *
                C28602 +
            (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 +
             C14429 * C5694) *
                C211) *
               C14433 +
           ((C14437 * C2610 + C28520 * C2831 + C14435 * C2611 +
             C14429 * C2832) *
                C28602 +
            (C14437 * C2489 + C28520 * C2492 + C14435 * C2490 +
             C14429 * C2493) *
                C211) *
               C28745 +
           ((C14437 * C1052 + C28520 * C1212 + C14435 * C1053 +
             C14429 * C1213) *
                C28602 +
            (C14437 * C960 + C28520 * C964 + C14435 * C961 + C14429 * C965) *
                C211) *
               C28753) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C211 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C28602) *
                        C14429 +
                    ((C14516 + C14517 + C14518) * C211 +
                     (C14861 + C14862 + C14863) * C28602) *
                        C28520) *
                       C956 -
                   (((C14502 * C5807 + C14433 * C6075 + C14501 * C2610 +
                      C28745 * C2884 + C14500 * C1052 + C28753 * C1250) *
                         C28602 +
                     (C14502 * C5691 + C14433 * C5753 + C14501 * C2489 +
                      C28745 * C2554 + C14500 * C960 + C28753 * C1010) *
                         C211) *
                        C28520 +
                    ((C14502 * C5808 + C14433 * C6076 + C14501 * C2611 +
                      C28745 * C2885 + C14500 * C1053 + C28753 * C1251) *
                         C28602 +
                     (C14502 * C5692 + C14433 * C5754 + C14501 * C2490 +
                      C28745 * C2555 + C14500 * C961 + C28753 * C1011) *
                         C211) *
                        C14429) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eezz[5] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28753 +
                     C2438 * C28745 + C5641 * C14433) *
                        C14429 +
                    (C14914 + C14915 + C14916) * C28520) *
                       C956 -
                   (((C520 * C5691 + C6130 + C6130 + C28602 * C6127) * C14433 +
                     (C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C28745 +
                     (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C28753) *
                        C28520 +
                    ((C520 * C5692 + C6131 + C6131 + C28602 * C6128) * C14433 +
                     (C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C28745 +
                     (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C28753) *
                        C14429) *
                       C957) *
                  C28759 * C28760) /
                 (p * q * std::sqrt(p + q));
    d2eexx[6] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                      C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                         C28725 +
                     (C14434 * C961 + C15494 + C15494 + C14429 * C969 +
                      C14436 * C960 + C15493 + C15493 + C28520 * C968) *
                         C28614) *
                        C12910 +
                    ((C14985 + C14986) * C28725 +
                     (C14434 * C2490 + C15492 + C15492 + C14429 * C2496 +
                      C14436 * C2489 + C15491 + C15491 + C28520 * C2495) *
                         C28614) *
                        C28590) *
                       C28758 * C28759 * C81 -
                   (((C14436 * C2488 + C15967 + C15967 + C28520 * C2494 +
                      C14434 * C2489 + C15968 + C15968 + C14429 * C2495) *
                         C28614 +
                     (C14436 * C587 + C14447 + C14447 + C28520 * C595 +
                      C14434 * C588 + C14448 + C14448 + C14429 * C596) *
                         C28725) *
                        C28590 +
                    ((C14436 * C959 + C15969 + C15969 + C28520 * C967 +
                      C14434 * C960 + C15970 + C15970 + C14429 * C968) *
                         C28614 +
                     (C14436 * C93 + C14449 + C14449 + C28520 * C103 +
                      C14434 * C92 + C14450 + C14450 + C14429 * C102) *
                         C28725) *
                        C12910) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C14435 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C14429 +
            (C12999 + C13000) * C14437 + (C13001 + C13002) * C28520) *
               C28725 +
           ((C12980 * C961 + C12910 * C1011 + C12981 * C2490 + C28590 * C2555) *
                C14435 +
            (C12980 * C965 + C12910 * C1015 + C12981 * C2493 + C28590 * C2558) *
                C14429 +
            (C16045 + C16046) * C14437 + (C16047 + C16048) * C28520) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C12981 * C2491 + C28590 * C2556 + C12980 * C963 + C12910 * C1013) *
                C28520 +
            (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
                C14437 +
            (C16048 + C16047) * C14429 + (C16046 + C16045) * C14435) *
               C28614 +
           ((C13006 + C13005) * C28520 + (C13004 + C13003) * C14437 +
            (C13002 + C13001) * C14429 + (C13000 + C12999) * C14435) *
               C28725) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C14435 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C14429 +
            (C3128 + C3129) * C14437 + (C3130 + C3131) * C28520) *
               C12910 +
           ((C7830 + C7831) * C14435 + (C7832 + C7833) * C14429 +
            (C16123 + C16124) * C14437 + (C16125 + C16126) * C28520) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C3110 * C2491 + C28614 * C2612 + C3109 * C591 + C28725 * C683) *
                C28520 +
            (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
                C14437 +
            (C16126 + C16125) * C14429 + (C16124 + C16123) * C14435) *
               C28590 +
           ((C3135 + C3134) * C28520 + (C3133 + C3132) * C14437 +
            (C3131 + C3130) * C14429 + (C3129 + C3128) * C14435) *
               C12910) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C12980 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C12910 +
            (C15163 + C15164) * C12981 + (C15165 + C15166) * C28590) *
               C28725 +
           ((C14435 * C961 + C14429 * C965 + C14437 * C960 + C28520 * C964) *
                C12980 +
            (C14435 * C1011 + C14429 * C1095 + C14437 * C1010 +
             C28520 * C1094) *
                C12910 +
            (C14435 * C2490 + C14429 * C2493 + C14437 * C2489 +
             C28520 * C2492) *
                C12981 +
            (C14435 * C2555 + C14429 * C2667 + C14437 * C2554 +
             C28520 * C2666) *
                C28590) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C14437 * C2553 + C28520 * C2665 + C14435 * C2554 +
             C14429 * C2666) *
                C28590 +
            (C14437 * C2488 + C28520 * C2491 + C14435 * C2489 +
             C14429 * C2492) *
                C12981 +
            (C14437 * C1009 + C28520 * C1093 + C14435 * C1010 +
             C14429 * C1094) *
                C12910 +
            (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
                C12980) *
               C28614 +
           ((C14437 * C637 + C28520 * C721 + C14435 * C638 + C14429 * C722) *
                C28590 +
            (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
                C12981 +
            (C14437 * C151 + C28520 * C276 + C14435 * C150 + C14429 * C275) *
                C12910 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C12980) *
               C28725) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 + C13157 * C589 +
             C13160 + C13160 + C28590 * C761) *
                C14429 +
            (C13183 + C13184) * C28520) *
               C28725 +
           ((C13156 * C961 + C14179 + C14179 + C12910 * C1133 + C13157 * C2490 +
             C14178 + C14178 + C28590 * C2720) *
                C14429 +
            (C16267 + C16268) * C28520) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C13157 * C2488 + C14174 + C14174 + C28590 * C2718 + C13156 * C959 +
             C14175 + C14175 + C12910 * C1131) *
                C28520 +
            (C16268 + C16267) * C14429) *
               C28614 +
           ((C13186 + C13185) * C28520 + (C13184 + C13183) * C14429) * C28725) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C12980 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C12910 +
            (C7830 + C7831) * C12981 + (C8011 + C8012) * C28590) *
               C14429 +
           ((C3128 + C3129) * C12980 + (C3304 + C3305) * C12910 +
            (C16123 + C16124) * C12981 + (C16339 + C16340) * C28590) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C3110 * C2553 + C28614 * C2777 + C3109 * C637 + C28725 * C801) *
                C28590 +
            (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
                C12981 +
            (C3307 + C3306) * C12910 + (C3133 + C3132) * C12980) *
               C28520 +
           ((C16340 + C16339) * C28590 + (C16124 + C16123) * C12981 +
            (C3305 + C3304) * C12910 + (C3129 + C3128) * C12980) *
               C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C3109 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28725 +
            (C14435 * C961 + C14429 * C965 + C14437 * C960 + C28520 * C964) *
                C3110 +
            (C14435 * C1053 + C14429 * C1213 + C14437 * C1052 +
             C28520 * C1212) *
                C28614) *
               C12910 +
           ((C15163 + C15164) * C3109 + (C15335 + C15336) * C28725 +
            (C14435 * C2490 + C14429 * C2493 + C14437 * C2489 +
             C28520 * C2492) *
                C3110 +
            (C14435 * C2611 + C14429 * C2832 + C14437 * C2610 +
             C28520 * C2831) *
                C28614) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C14437 * C2609 + C28520 * C2830 + C14435 * C2610 +
             C14429 * C2831) *
                C28614 +
            (C14437 * C2488 + C28520 * C2491 + C14435 * C2489 +
             C14429 * C2492) *
                C3110 +
            (C14437 * C679 + C28520 * C839 + C14435 * C680 + C14429 * C840) *
                C28725 +
            (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
                C3109) *
               C28590 +
           ((C14437 * C1051 + C28520 * C1211 + C14435 * C1052 +
             C14429 * C1212) *
                C28614 +
            (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
                C3110 +
            (C14437 * C214 + C28520 * C429 + C14435 * C213 + C14429 * C428) *
                C28725 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C3109) *
               C12910) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C3109 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28725 +
            (C12980 * C961 + C12910 * C1011 + C12981 * C2490 + C28590 * C2555) *
                C3110 +
            (C12980 * C1053 + C12910 * C1251 + C12981 * C2611 +
             C28590 * C2885) *
                C28614) *
               C14429 +
           ((C12999 + C13000) * C3109 + (C13353 + C13354) * C28725 +
            (C16045 + C16046) * C3110 + (C16477 + C16478) * C28614) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C12981 * C2609 + C28590 * C2883 + C12980 * C1051 +
             C12910 * C1249) *
                C28614 +
            (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
                C3110 +
            (C13356 + C13355) * C28725 + (C13004 + C13003) * C3109) *
               C28520 +
           ((C16478 + C16477) * C28614 + (C16046 + C16045) * C3110 +
            (C13354 + C13353) * C28725 + (C13000 + C12999) * C3109) *
               C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3471 * C91 + C3474 + C3474 + C28725 * C521 + C3472 * C961 +
             C3475 + C3475 + C28614 * C1289) *
                C12910 +
            (C8197 + C8198) * C28590) *
               C14429 +
           ((C3498 + C3499) * C12910 + (C16553 + C16554) * C28590) * C28520) *
              C28758 * C28759 * C81 -
          (((C3472 * C2488 + C3955 + C3955 + C28614 * C2936 + C3471 * C587 +
             C3956 + C3956 + C28725 * C915) *
                C28590 +
            (C3501 + C3500) * C12910) *
               C28520 +
           ((C16554 + C16553) * C28590 + (C3499 + C3498) * C12910) * C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 + C14436 * C92 +
             C14440 + C14440 + C28520 * C102) *
                C28725 +
            (C14434 * C961 + C15494 + C15494 + C14429 * C969 + C14436 * C960 +
             C15493 + C15493 + C28520 * C968) *
                C28614) *
               C12910 +
           ((C14985 + C14986) * C28725 + (C16629 + C16630) * C28614) * C28590) *
              C28758 * C583 -
          (((C14436 * C5691 + C15489 + C15489 + C28520 * C5695 +
             C14434 * C5692 + C15490 + C15490 + C14429 * C5696) *
                C28614 +
            (C14988 + C14987) * C28725) *
               C28590 +
           ((C16630 + C16629) * C28614 + (C14986 + C14985) * C28725) * C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C14435 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C14429 +
            (C12999 + C13000) * C14437 + (C13001 + C13002) * C28520) *
               C28725 +
           ((C12980 * C961 + C12910 * C1011 + C12981 * C2490 + C28590 * C2555) *
                C14435 +
            (C12980 * C965 + C12910 * C1015 + C12981 * C2493 + C28590 * C2558) *
                C14429 +
            (C16045 + C16046) * C14437 + (C16047 + C16048) * C28520) *
               C28614) *
              C28758 * C583 -
          (((C12981 * C5693 + C28590 * C5755 + C12980 * C2492 +
             C12910 * C2557) *
                C28520 +
            (C12981 * C5691 + C28590 * C5753 + C12980 * C2489 +
             C12910 * C2554) *
                C14437 +
            (C12981 * C5694 + C28590 * C5756 + C12980 * C2493 +
             C12910 * C2558) *
                C14429 +
            (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 +
             C12910 * C2555) *
                C14435) *
               C28614 +
           ((C12981 * C1929 + C28590 * C2006 + C12980 * C592 + C12910 * C642) *
                C28520 +
            (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
                C14437 +
            (C12981 * C1930 + C28590 * C2007 + C12980 * C593 + C12910 * C643) *
                C14429 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C14435) *
               C28725) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C14435 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C14429 +
            (C3128 + C3129) * C14437 + (C3130 + C3131) * C28520) *
               C12910 +
           ((C7830 + C7831) * C14435 + (C7832 + C7833) * C14429 +
            (C16123 + C16124) * C14437 + (C16125 + C16126) * C28520) *
               C28590) *
              C28758 * C583 -
          (((C3110 * C5693 + C28614 * C5809 + C3109 * C1929 + C28725 * C2062) *
                C28520 +
            (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
                C14437 +
            (C7837 + C7836) * C14429 + (C7835 + C7834) * C14435) *
               C28590 +
           ((C16126 + C16125) * C28520 + (C16124 + C16123) * C14437 +
            (C7833 + C7832) * C14429 + (C7831 + C7830) * C14435) *
               C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C12980 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C12910 +
            (C15163 + C15164) * C12981 + (C15165 + C15166) * C28590) *
               C28725 +
           ((C14435 * C961 + C14429 * C965 + C14437 * C960 + C28520 * C964) *
                C12980 +
            (C14435 * C1011 + C14429 * C1095 + C14437 * C1010 +
             C28520 * C1094) *
                C12910 +
            (C16837 + C16838) * C12981 + (C16839 + C16840) * C28590) *
               C28614) *
              C28758 * C583 -
          (((C14437 * C5753 + C28520 * C5861 + C14435 * C5754 +
             C14429 * C5862) *
                C28590 +
            (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 +
             C14429 * C5694) *
                C12981 +
            (C16840 + C16839) * C12910 + (C16838 + C16837) * C12980) *
               C28614 +
           ((C15170 + C15169) * C28590 + (C15168 + C15167) * C12981 +
            (C15166 + C15165) * C12910 + (C15164 + C15163) * C12980) *
               C28725) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[7] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                      C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                         C14429 +
                     (C13183 + C13184) * C28520) *
                        C28725 +
                    ((C13156 * C961 + C14179 + C14179 + C12910 * C1133 +
                      C13157 * C2490 + C14178 + C14178 + C28590 * C2720) *
                         C14429 +
                     (C16267 + C16268) * C28520) *
                        C28614) *
                       C28758 * C583 -
                   (((C13157 * C5691 + C16907 + C16907 + C28590 * C5913 +
                      C13156 * C2489 + C16908 + C16908 + C12910 * C2719) *
                         C28520 +
                     (C13157 * C5692 + C16909 + C16909 + C28590 * C5914 +
                      C13156 * C2490 + C16910 + C16910 + C12910 * C2720) *
                         C14429) *
                        C28614 +
                    ((C13157 * C1926 + C13705 + C13705 + C28590 * C2198 +
                      C13156 * C588 + C13706 + C13706 + C12910 * C760) *
                         C28520 +
                     (C13157 * C1927 + C13707 + C13707 + C28590 * C2199 +
                      C13156 * C589 + C13708 + C13708 + C12910 * C761) *
                         C14429) *
                        C28725) *
                       C28758 * C584) *
                  C28760) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C12980 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C12910 +
            (C7830 + C7831) * C12981 + (C8011 + C8012) * C28590) *
               C14429 +
           ((C3128 + C3129) * C12980 + (C3304 + C3305) * C12910 +
            (C16123 + C16124) * C12981 + (C16339 + C16340) * C28590) *
               C28520) *
              C28758 * C583 -
          (((C3110 * C5753 + C28614 * C5971 + C3109 * C2003 + C28725 * C2257) *
                C28590 +
            (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
                C12981 +
            (C16340 + C16339) * C12910 + (C16124 + C16123) * C12980) *
               C28520 +
           ((C8014 + C8013) * C28590 + (C7835 + C7834) * C12981 +
            (C8012 + C8011) * C12910 + (C7831 + C7830) * C12980) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C3109 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28725 +
            (C14435 * C961 + C14429 * C965 + C14437 * C960 + C28520 * C964) *
                C3110 +
            (C14435 * C1053 + C14429 * C1213 + C14437 * C1052 +
             C28520 * C1212) *
                C28614) *
               C12910 +
           ((C15163 + C15164) * C3109 + (C15335 + C15336) * C28725 +
            (C16837 + C16838) * C3110 + (C17047 + C17048) * C28614) *
               C28590) *
              C28758 * C583 -
          (((C14437 * C5807 + C28520 * C6023 + C14435 * C5808 +
             C14429 * C6024) *
                C28614 +
            (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 +
             C14429 * C5694) *
                C3110 +
            (C15338 + C15337) * C28725 + (C15168 + C15167) * C3109) *
               C28590 +
           ((C17048 + C17047) * C28614 + (C16838 + C16837) * C3110 +
            (C15336 + C15335) * C28725 + (C15164 + C15163) * C3109) *
               C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C3109 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28725 +
            (C12980 * C961 + C12910 * C1011 + C12981 * C2490 + C28590 * C2555) *
                C3110 +
            (C12980 * C1053 + C12910 * C1251 + C12981 * C2611 +
             C28590 * C2885) *
                C28614) *
               C14429 +
           ((C12999 + C13000) * C3109 + (C13353 + C13354) * C28725 +
            (C16045 + C16046) * C3110 + (C16477 + C16478) * C28614) *
               C28520) *
              C28758 * C583 -
          (((C12981 * C5807 + C28590 * C6075 + C12980 * C2610 +
             C12910 * C2884) *
                C28614 +
            (C12981 * C5691 + C28590 * C5753 + C12980 * C2489 +
             C12910 * C2554) *
                C3110 +
            (C12981 * C2059 + C28590 * C2375 + C12980 * C680 + C12910 * C878) *
                C28725 +
            (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
                C3109) *
               C28520 +
           ((C12981 * C5808 + C28590 * C6076 + C12980 * C2611 +
             C12910 * C2885) *
                C28614 +
            (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 +
             C12910 * C2555) *
                C3110 +
            (C12981 * C2060 + C28590 * C2376 + C12980 * C681 + C12910 * C879) *
                C28725 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C3109) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3471 * C91 + C3474 + C3474 + C28725 * C521 + C3472 * C961 +
             C3475 + C3475 + C28614 * C1289) *
                C12910 +
            (C8197 + C8198) * C28590) *
               C14429 +
           ((C3498 + C3499) * C12910 + (C16553 + C16554) * C28590) * C28520) *
              C28758 * C583 -
          (((C3472 * C5691 + C7648 + C7648 + C28614 * C6127 + C3471 * C1926 +
             C7649 + C7649 + C28725 * C2428) *
                C28590 +
            (C16554 + C16553) * C12910) *
               C28520 +
           ((C8200 + C8199) * C28590 + (C8198 + C8197) * C12910) * C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 + C14436 * C92 +
             C14440 + C14440 + C28520 * C102) *
                C28725 +
            (C17259 + C17260) * C28614) *
               C12910 +
           ((C14985 + C14986) * C28725 + (C16629 + C16630) * C28614) * C28590) *
              C956 -
          (((C14436 * C9334 + C17251 + C17251 + C28520 * C9336 +
             C14434 * C8251 + C17252 + C17252 + C14429 * C8255) *
                C28614 +
            (C16630 + C16629) * C28725) *
               C28590 +
           ((C14436 * C4011 + C17253 + C17253 + C28520 * C4017 +
             C14434 * C4012 + C17254 + C17254 + C14429 * C4018) *
                C28614 +
            (C17260 + C17259) * C28725) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C14435 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C14429 +
            (C12999 + C13000) * C14437 + (C13001 + C13002) * C28520) *
               C28725 +
           ((C17335 + C17336) * C14435 + (C17337 + C17338) * C14429 +
            (C16045 + C16046) * C14437 + (C16047 + C16048) * C28520) *
               C28614) *
              C956 -
          (((C12981 * C9335 + C28590 * C9390 + C12980 * C4014 +
             C12910 * C4091) *
                C28520 +
            (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 +
             C12910 * C4088) *
                C14437 +
            (C12981 * C8253 + C28590 * C8317 + C12980 * C4015 +
             C12910 * C4092) *
                C14429 +
            (C12981 * C8251 + C28590 * C8315 + C12980 * C4012 +
             C12910 * C4089) *
                C14435) *
               C28614 +
           ((C16048 + C16047) * C28520 + (C16046 + C16045) * C14437 +
            (C17338 + C17337) * C14429 + (C17336 + C17335) * C14435) *
               C28725) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C14435 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C14429 +
            (C3128 + C3129) * C14437 + (C3130 + C3131) * C28520) *
               C12910 +
           ((C7830 + C7831) * C14435 + (C7832 + C7833) * C14429 +
            (C16123 + C16124) * C14437 + (C16125 + C16126) * C28520) *
               C28590) *
              C956 -
          (((C3110 * C9335 + C28614 * C9442 + C3109 * C2492 + C28725 * C2613) *
                C28520 +
            (C3110 * C9334 + C28614 * C9441 + C3109 * C2489 + C28725 * C2610) *
                C14437 +
            (C3110 * C8253 + C28614 * C8389 + C3109 * C2493 + C28725 * C2614) *
                C14429 +
            (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
                C14435) *
               C28590 +
           ((C3110 * C4014 + C28614 * C4159 + C3109 * C964 + C28725 * C1056) *
                C28520 +
            (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
                C14437 +
            (C3110 * C4015 + C28614 * C4160 + C3109 * C965 + C28725 * C1057) *
                C14429 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C14435) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C12980 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C12910 +
            (C15163 + C15164) * C12981 + (C15165 + C15166) * C28590) *
               C28725 +
           ((C17479 + C17480) * C12980 + (C17481 + C17482) * C12910 +
            (C16837 + C16838) * C12981 + (C16839 + C16840) * C28590) *
               C28614) *
              C956 -
          (((C14437 * C9389 + C28520 * C9493 + C14435 * C8315 +
             C14429 * C8441) *
                C28590 +
            (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 +
             C14429 * C8253) *
                C12981 +
            (C14437 * C4088 + C28520 * C4212 + C14435 * C4089 +
             C14429 * C4213) *
                C12910 +
            (C14437 * C4011 + C28520 * C4014 + C14435 * C4012 +
             C14429 * C4015) *
                C12980) *
               C28614 +
           ((C16840 + C16839) * C28590 + (C16838 + C16837) * C12981 +
            (C17482 + C17481) * C12910 + (C17480 + C17479) * C12980) *
               C28725) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 + C13157 * C589 +
             C13160 + C13160 + C28590 * C761) *
                C14429 +
            (C13183 + C13184) * C28520) *
               C28725 +
           ((C17561 + C17562) * C14429 + (C16267 + C16268) * C28520) * C28614) *
              C956 -
          (((C13157 * C9334 + C17553 + C17553 + C28590 * C9544 +
             C13156 * C4011 + C17554 + C17554 + C12910 * C4283) *
                C28520 +
            (C13157 * C8251 + C17555 + C17555 + C28590 * C8505 +
             C13156 * C4012 + C17556 + C17556 + C12910 * C4284) *
                C14429) *
               C28614 +
           ((C16268 + C16267) * C28520 + (C17562 + C17561) * C14429) * C28725) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C12980 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C12910 +
            (C7830 + C7831) * C12981 + (C8011 + C8012) * C28590) *
               C14429 +
           ((C3128 + C3129) * C12980 + (C3304 + C3305) * C12910 +
            (C16123 + C16124) * C12981 + (C16339 + C16340) * C28590) *
               C28520) *
              C956 -
          (((C3110 * C9389 + C28614 * C9597 + C3109 * C2554 + C28725 * C2778) *
                C28590 +
            (C3110 * C9334 + C28614 * C9441 + C3109 * C2489 + C28725 * C2610) *
                C12981 +
            (C3110 * C4088 + C28614 * C4347 + C3109 * C1010 + C28725 * C1174) *
                C12910 +
            (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
                C12980) *
               C28520 +
           ((C3110 * C8315 + C28614 * C8575 + C3109 * C2555 + C28725 * C2779) *
                C28590 +
            (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
                C12981 +
            (C3110 * C4089 + C28614 * C4348 + C3109 * C1011 + C28725 * C1175) *
                C12910 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C12980) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C3109 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C28725 +
            (C17479 + C17480) * C3110 + (C17699 + C17700) * C28614) *
               C12910 +
           ((C15163 + C15164) * C3109 + (C15335 + C15336) * C28725 +
            (C16837 + C16838) * C3110 + (C17047 + C17048) * C28614) *
               C28590) *
              C956 -
          (((C14437 * C9441 + C28520 * C9648 + C14435 * C8387 +
             C14429 * C8627) *
                C28614 +
            (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 +
             C14429 * C8253) *
                C3110 +
            (C17048 + C17047) * C28725 + (C16838 + C16837) * C3109) *
               C28590 +
           ((C14437 * C4156 + C28520 * C4400 + C14435 * C4157 +
             C14429 * C4401) *
                C28614 +
            (C14437 * C4011 + C28520 * C4014 + C14435 * C4012 +
             C14429 * C4015) *
                C3110 +
            (C17700 + C17699) * C28725 + (C17480 + C17479) * C3109) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C3109 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C28725 +
            (C17335 + C17336) * C3110 + (C17771 + C17772) * C28614) *
               C14429 +
           ((C12999 + C13000) * C3109 + (C13353 + C13354) * C28725 +
            (C16045 + C16046) * C3110 + (C16477 + C16478) * C28614) *
               C28520) *
              C956 -
          (((C12981 * C9441 + C28590 * C9699 + C12980 * C4156 +
             C12910 * C4462) *
                C28614 +
            (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 +
             C12910 * C4088) *
                C3110 +
            (C16478 + C16477) * C28725 + (C16046 + C16045) * C3109) *
               C28520 +
           ((C12981 * C8387 + C28590 * C8682 + C12980 * C4157 +
             C12910 * C4463) *
                C28614 +
            (C12981 * C8251 + C28590 * C8315 + C12980 * C4012 +
             C12910 * C4089) *
                C3110 +
            (C17772 + C17771) * C28725 + (C17336 + C17335) * C3109) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3471 * C91 + C3474 + C3474 + C28725 * C521 + C3472 * C961 +
             C3475 + C3475 + C28614 * C1289) *
                C12910 +
            (C8197 + C8198) * C28590) *
               C14429 +
           ((C3498 + C3499) * C12910 + (C16553 + C16554) * C28590) * C28520) *
              C956 -
          (((C3472 * C9334 + C17839 + C17839 + C28614 * C9750 + C3471 * C2489 +
             C17840 + C17840 + C28725 * C2937) *
                C28590 +
            (C3472 * C4011 + C4523 + C4523 + C28614 * C4518 + C3471 * C960 +
             C4524 + C4524 + C28725 * C1288) *
                C12910) *
               C28520 +
           ((C3472 * C8251 + C8747 + C8747 + C28614 * C8743 + C3471 * C2490 +
             C8748 + C8748 + C28725 * C2938) *
                C28590 +
            (C3472 * C4012 + C4525 + C4525 + C28614 * C4519 + C3471 * C961 +
             C4526 + C4526 + C28725 * C1289) *
                C12910) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C17890 +
                     (C9832 + C9833) * C28614) *
                        C12910 +
                    ((C5152 + C5153) * C17890 +
                     (C4581 * C2490 + C5701 + C5701 + C28711 * C2496 +
                      C4583 * C2489 + C5700 + C5700 + C28520 * C2495) *
                         C28614) *
                        C28590) *
                       C28758 * C28759 * C81 -
                   (((C4583 * C2488 + C22752 + C22752 + C28520 * C2494 +
                      C4581 * C2489 + C22753 + C22753 + C28711 * C2495) *
                         C28614 +
                     (C4583 * C587 + C4594 + C4594 + C28520 * C595 +
                      C4581 * C588 + C4595 + C4595 + C28711 * C596) *
                         C17890) *
                        C28590 +
                    ((C4583 * C959 + C8806 + C8806 + C28520 * C967 +
                      C4581 * C960 + C8807 + C8807 + C28711 * C968) *
                         C28614 +
                     (C4583 * C93 + C4596 + C4596 + C28520 * C103 +
                      C4581 * C92 + C4597 + C4597 + C28711 * C102) *
                         C17890) *
                        C12910) *
                       C28758 * C28759 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C27436 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28711 +
            (C12999 + C13000) * C27426 + (C13001 + C13002) * C28520) *
               C17890 +
           ((C17335 + C17336) * C27436 + (C17337 + C17338) * C28711 +
            (C16045 + C16046) * C27426 + (C16047 + C16048) * C28520) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C12981 * C2491 + C28590 * C2556 + C12980 * C963 + C12910 * C1013) *
                C28520 +
            (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
                C27426 +
            (C16048 + C16047) * C28711 + (C16046 + C16045) * C27436) *
               C28614 +
           ((C13006 + C13005) * C28520 + (C13004 + C13003) * C27426 +
            (C13002 + C13001) * C28711 + (C13000 + C12999) * C27436) *
               C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C27436 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28711 +
            (C18014 + C18015) * C27426 + (C18016 + C18017) * C28520) *
               C12910 +
           ((C20194 + C20195) * C27436 + (C20196 + C20197) * C28711 +
            (C19556 + C19557) * C27426 + (C19558 + C19559) * C28520) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C17996 * C2491 + C28614 * C2612 + C17995 * C591 + C17890 * C683) *
                C28520 +
            (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
                C27426 +
            (C19559 + C19558) * C28711 + (C19557 + C19556) * C27436) *
               C28590 +
           ((C18021 + C18020) * C28520 + (C18019 + C18018) * C27426 +
            (C18017 + C18016) * C28711 + (C18015 + C18014) * C27436) *
               C12910) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C12980 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C12910 +
            (C5346 + C5347) * C12981 + (C5348 + C5349) * C28590) *
               C17890 +
           ((C10026 + C10027) * C12980 + (C10028 + C10029) * C12910 +
            (C27436 * C2490 + C28711 * C2493 + C27426 * C2489 +
             C28520 * C2492) *
                C12981 +
            (C27436 * C2555 + C28711 * C2667 + C27426 * C2554 +
             C28520 * C2666) *
                C28590) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C27426 * C2553 + C28520 * C2665 + C27436 * C2554 +
             C28711 * C2666) *
                C28590 +
            (C27426 * C2488 + C28520 * C2491 + C27436 * C2489 +
             C28711 * C2492) *
                C12981 +
            (C27426 * C1009 + C28520 * C1093 + C27436 * C1010 +
             C28711 * C1094) *
                C12910 +
            (C27426 * C959 + C28520 * C963 + C27436 * C960 + C28711 * C964) *
                C12980) *
               C28614 +
           ((C27426 * C637 + C28520 * C721 + C27436 * C638 + C28711 * C722) *
                C28590 +
            (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
                C12981 +
            (C27426 * C151 + C28520 * C276 + C27436 * C150 + C28711 * C275) *
                C12910 +
            (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
                C12980) *
               C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 + C13157 * C589 +
             C13160 + C13160 + C28590 * C761) *
                C28711 +
            (C13183 + C13184) * C28520) *
               C17890 +
           ((C17561 + C17562) * C28711 + (C16267 + C16268) * C28520) * C28614) *
              C28758 * C28759 * C81 -
          (((C13157 * C2488 + C14174 + C14174 + C28590 * C2718 + C13156 * C959 +
             C14175 + C14175 + C12910 * C1131) *
                C28520 +
            (C16268 + C16267) * C28711) *
               C28614 +
           ((C13186 + C13185) * C28520 + (C13184 + C13183) * C28711) * C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C12980 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C12910 +
            (C20194 + C20195) * C12981 + (C20402 + C20403) * C28590) *
               C28711 +
           ((C18014 + C18015) * C12980 + (C18180 + C18181) * C12910 +
            (C19556 + C19557) * C12981 + (C19772 + C19773) * C28590) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C17996 * C2553 + C28614 * C2777 + C17995 * C637 + C17890 * C801) *
                C28590 +
            (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
                C12981 +
            (C18183 + C18182) * C12910 + (C18019 + C18018) * C12980) *
               C28520 +
           ((C19773 + C19772) * C28590 + (C19557 + C19556) * C12981 +
            (C18181 + C18180) * C12910 + (C18015 + C18014) * C12980) *
               C28711) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C17995 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C17890 +
            (C10026 + C10027) * C17996 + (C10209 + C10210) * C28614) *
               C12910 +
           ((C5346 + C5347) * C17995 + (C5527 + C5528) * C17890 +
            (C27436 * C2490 + C28711 * C2493 + C27426 * C2489 +
             C28520 * C2492) *
                C17996 +
            (C27436 * C2611 + C28711 * C2832 + C27426 * C2610 +
             C28520 * C2831) *
                C28614) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C27426 * C2609 + C28520 * C2830 + C27436 * C2610 +
             C28711 * C2831) *
                C28614 +
            (C27426 * C2488 + C28520 * C2491 + C27436 * C2489 +
             C28711 * C2492) *
                C17996 +
            (C27426 * C679 + C28520 * C839 + C27436 * C680 + C28711 * C840) *
                C17890 +
            (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
                C17995) *
               C28590 +
           ((C27426 * C1051 + C28520 * C1211 + C27436 * C1052 +
             C28711 * C1212) *
                C28614 +
            (C27426 * C959 + C28520 * C963 + C27436 * C960 + C28711 * C964) *
                C17996 +
            (C27426 * C214 + C28520 * C429 + C27436 * C213 + C28711 * C428) *
                C17890 +
            (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
                C17995) *
               C12910) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C17995 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C17890 +
            (C17335 + C17336) * C17996 + (C17771 + C17772) * C28614) *
               C28711 +
           ((C12999 + C13000) * C17995 + (C13353 + C13354) * C17890 +
            (C16045 + C16046) * C17996 + (C16477 + C16478) * C28614) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C12981 * C2609 + C28590 * C2883 + C12980 * C1051 +
             C12910 * C1249) *
                C28614 +
            (C12981 * C2488 + C28590 * C2553 + C12980 * C959 + C12910 * C1009) *
                C17996 +
            (C13356 + C13355) * C17890 + (C13004 + C13003) * C17995) *
               C28520 +
           ((C16478 + C16477) * C28614 + (C16046 + C16045) * C17996 +
            (C13354 + C13353) * C17890 + (C13000 + C12999) * C17995) *
               C28711) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C12910 +
            (C20614 + C20615) * C28590) *
               C28711 +
           ((C18368 + C18369) * C12910 + (C19986 + C19987) * C28590) * C28520) *
              C28758 * C28759 * C81 -
          (((C18342 * C2488 + C18822 + C18822 + C28614 * C2936 + C18341 * C587 +
             C18823 + C18823 + C17890 * C915) *
                C28590 +
            (C18371 + C18370) * C12910) *
               C28520 +
           ((C19987 + C19986) * C28590 + (C18369 + C18368) * C12910) * C28711) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4581 * C91 + C4586 + C4586 + C28711 * C101 + C4583 * C92 + C4587 +
             C4587 + C28520 * C102) *
                C17890 +
            (C9832 + C9833) * C28614) *
               C12910 +
           ((C5152 + C5153) * C17890 + (C23356 + C23357) * C28614) * C28590) *
              C28758 * C583 -
          (((C4583 * C5691 + C5698 + C5698 + C28520 * C5695 + C4581 * C5692 +
             C5699 + C5699 + C28711 * C5696) *
                C28614 +
            (C5155 + C5154) * C17890) *
               C28590 +
           ((C23357 + C23356) * C28614 + (C5153 + C5152) * C17890) * C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C27436 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28711 +
            (C12999 + C13000) * C27426 + (C13001 + C13002) * C28520) *
               C17890 +
           ((C17335 + C17336) * C27436 + (C17337 + C17338) * C28711 +
            (C16045 + C16046) * C27426 + (C16047 + C16048) * C28520) *
               C28614) *
              C28758 * C583 -
          (((C12981 * C5693 + C28590 * C5755 + C12980 * C2492 +
             C12910 * C2557) *
                C28520 +
            (C12981 * C5691 + C28590 * C5753 + C12980 * C2489 +
             C12910 * C2554) *
                C27426 +
            (C12981 * C5694 + C28590 * C5756 + C12980 * C2493 +
             C12910 * C2558) *
                C28711 +
            (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 +
             C12910 * C2555) *
                C27436) *
               C28614 +
           ((C12981 * C1929 + C28590 * C2006 + C12980 * C592 + C12910 * C642) *
                C28520 +
            (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
                C27426 +
            (C12981 * C1930 + C28590 * C2007 + C12980 * C593 + C12910 * C643) *
                C28711 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C27436) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C27436 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28711 +
            (C18014 + C18015) * C27426 + (C18016 + C18017) * C28520) *
               C12910 +
           ((C20194 + C20195) * C27436 + (C20196 + C20197) * C28711 +
            (C19556 + C19557) * C27426 + (C19558 + C19559) * C28520) *
               C28590) *
              C28758 * C583 -
          (((C17996 * C5693 + C28614 * C5809 + C17995 * C1929 +
             C17890 * C2062) *
                C28520 +
            (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 +
             C17890 * C2059) *
                C27426 +
            (C17996 * C5694 + C28614 * C5810 + C17995 * C1930 +
             C17890 * C2063) *
                C28711 +
            (C17996 * C5692 + C28614 * C5808 + C17995 * C1927 +
             C17890 * C2060) *
                C27436) *
               C28590 +
           ((C19559 + C19558) * C28520 + (C19557 + C19556) * C27426 +
            (C20197 + C20196) * C28711 + (C20195 + C20194) * C27436) *
               C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C12980 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C12910 +
            (C5346 + C5347) * C12981 + (C5348 + C5349) * C28590) *
               C17890 +
           ((C10026 + C10027) * C12980 + (C10028 + C10029) * C12910 +
            (C23564 + C23565) * C12981 + (C23566 + C23567) * C28590) *
               C28614) *
              C28758 * C583 -
          (((C27426 * C5753 + C28520 * C5861 + C27436 * C5754 +
             C28711 * C5862) *
                C28590 +
            (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 +
             C28711 * C5694) *
                C12981 +
            (C23567 + C23566) * C12910 + (C23565 + C23564) * C12980) *
               C28614 +
           ((C5353 + C5352) * C28590 + (C5351 + C5350) * C12981 +
            (C5349 + C5348) * C12910 + (C5347 + C5346) * C12980) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 + C13157 * C589 +
             C13160 + C13160 + C28590 * C761) *
                C28711 +
            (C13183 + C13184) * C28520) *
               C17890 +
           ((C17561 + C17562) * C28711 + (C16267 + C16268) * C28520) * C28614) *
              C28758 * C583 -
          (((C13157 * C5691 + C16907 + C16907 + C28590 * C5913 +
             C13156 * C2489 + C16908 + C16908 + C12910 * C2719) *
                C28520 +
            (C13157 * C5692 + C16909 + C16909 + C28590 * C5914 +
             C13156 * C2490 + C16910 + C16910 + C12910 * C2720) *
                C28711) *
               C28614 +
           ((C13157 * C1926 + C13705 + C13705 + C28590 * C2198 + C13156 * C588 +
             C13706 + C13706 + C12910 * C760) *
                C28520 +
            (C13157 * C1927 + C13707 + C13707 + C28590 * C2199 + C13156 * C589 +
             C13708 + C13708 + C12910 * C761) *
                C28711) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C12980 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C12910 +
            (C20194 + C20195) * C12981 + (C20402 + C20403) * C28590) *
               C28711 +
           ((C18014 + C18015) * C12980 + (C18180 + C18181) * C12910 +
            (C19556 + C19557) * C12981 + (C19772 + C19773) * C28590) *
               C28520) *
              C28758 * C583 -
          (((C17996 * C5753 + C28614 * C5971 + C17995 * C2003 +
             C17890 * C2257) *
                C28590 +
            (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 +
             C17890 * C2059) *
                C12981 +
            (C19773 + C19772) * C12910 + (C19557 + C19556) * C12980) *
               C28520 +
           ((C17996 * C5754 + C28614 * C5972 + C17995 * C2004 +
             C17890 * C2258) *
                C28590 +
            (C17996 * C5692 + C28614 * C5808 + C17995 * C1927 +
             C17890 * C2060) *
                C12981 +
            (C20403 + C20402) * C12910 + (C20195 + C20194) * C12980) *
               C28711) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C17995 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C17890 +
            (C10026 + C10027) * C17996 + (C10209 + C10210) * C28614) *
               C12910 +
           ((C5346 + C5347) * C17995 + (C5527 + C5528) * C17890 +
            (C23564 + C23565) * C17996 + (C23770 + C23771) * C28614) *
               C28590) *
              C28758 * C583 -
          (((C27426 * C5807 + C28520 * C6023 + C27436 * C5808 +
             C28711 * C6024) *
                C28614 +
            (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 +
             C28711 * C5694) *
                C17996 +
            (C5530 + C5529) * C17890 + (C5351 + C5350) * C17995) *
               C28590 +
           ((C23771 + C23770) * C28614 + (C23565 + C23564) * C17996 +
            (C5528 + C5527) * C17890 + (C5347 + C5346) * C17995) *
               C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C17995 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C17890 +
            (C17335 + C17336) * C17996 + (C17771 + C17772) * C28614) *
               C28711 +
           ((C12999 + C13000) * C17995 + (C13353 + C13354) * C17890 +
            (C16045 + C16046) * C17996 + (C16477 + C16478) * C28614) *
               C28520) *
              C28758 * C583 -
          (((C12981 * C5807 + C28590 * C6075 + C12980 * C2610 +
             C12910 * C2884) *
                C28614 +
            (C12981 * C5691 + C28590 * C5753 + C12980 * C2489 +
             C12910 * C2554) *
                C17996 +
            (C12981 * C2059 + C28590 * C2375 + C12980 * C680 + C12910 * C878) *
                C17890 +
            (C12981 * C1926 + C28590 * C2003 + C12980 * C588 + C12910 * C638) *
                C17995) *
               C28520 +
           ((C12981 * C5808 + C28590 * C6076 + C12980 * C2611 +
             C12910 * C2885) *
                C28614 +
            (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 +
             C12910 * C2555) *
                C17996 +
            (C12981 * C2060 + C28590 * C2376 + C12980 * C681 + C12910 * C879) *
                C17890 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C17995) *
               C28711) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C12910 +
            (C20614 + C20615) * C28590) *
               C28711 +
           ((C18368 + C18369) * C12910 + (C19986 + C19987) * C28590) * C28520) *
              C28758 * C583 -
          (((C18342 * C5691 + C20606 + C20606 + C28614 * C6127 +
             C18341 * C1926 + C20607 + C20607 + C17890 * C2428) *
                C28590 +
            (C19987 + C19986) * C12910) *
               C28520 +
           ((C18342 * C5692 + C20608 + C20608 + C28614 * C6128 +
             C18341 * C1927 + C20609 + C20609 + C17890 * C2429) *
                C28590 +
            (C20615 + C20614) * C12910) *
               C28711) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4581 * C91 + C4586 + C4586 + C28711 * C101 + C4583 * C92 + C4587 +
             C4587 + C28520 * C102) *
                C17890 +
            (C9832 + C9833) * C28614) *
               C12910 +
           ((C5152 + C5153) * C17890 + (C23356 + C23357) * C28614) * C28590) *
              C956 -
          (((C4583 * C9334 + C9338 + C9338 + C28520 * C9336 + C4581 * C8251 +
             C9339 + C9339 + C28711 * C8255) *
                C28614 +
            (C23357 + C23356) * C17890) *
               C28590 +
           ((C9835 + C9834) * C28614 + (C9833 + C9832) * C17890) * C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C27436 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28711 +
            (C12999 + C13000) * C27426 + (C13001 + C13002) * C28520) *
               C17890 +
           ((C17335 + C17336) * C27436 + (C17337 + C17338) * C28711 +
            (C16045 + C16046) * C27426 + (C16047 + C16048) * C28520) *
               C28614) *
              C956 -
          (((C12981 * C9335 + C28590 * C9390 + C12980 * C4014 +
             C12910 * C4091) *
                C28520 +
            (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 +
             C12910 * C4088) *
                C27426 +
            (C12981 * C8253 + C28590 * C8317 + C12980 * C4015 +
             C12910 * C4092) *
                C28711 +
            (C12981 * C8251 + C28590 * C8315 + C12980 * C4012 +
             C12910 * C4089) *
                C27436) *
               C28614 +
           ((C16048 + C16047) * C28520 + (C16046 + C16045) * C27426 +
            (C17338 + C17337) * C28711 + (C17336 + C17335) * C27436) *
               C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C27436 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28711 +
            (C18014 + C18015) * C27426 + (C18016 + C18017) * C28520) *
               C12910 +
           ((C20194 + C20195) * C27436 + (C20196 + C20197) * C28711 +
            (C19556 + C19557) * C27426 + (C19558 + C19559) * C28520) *
               C28590) *
              C956 -
          (((C17996 * C9335 + C28614 * C9442 + C17995 * C2492 +
             C17890 * C2613) *
                C28520 +
            (C17996 * C9334 + C28614 * C9441 + C17995 * C2489 +
             C17890 * C2610) *
                C27426 +
            (C17996 * C8253 + C28614 * C8389 + C17995 * C2493 +
             C17890 * C2614) *
                C28711 +
            (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 +
             C17890 * C2611) *
                C27436) *
               C28590 +
           ((C17996 * C4014 + C28614 * C4159 + C17995 * C964 + C17890 * C1056) *
                C28520 +
            (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
                C27426 +
            (C17996 * C4015 + C28614 * C4160 + C17995 * C965 + C17890 * C1057) *
                C28711 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C27436) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C12980 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C12910 +
            (C5346 + C5347) * C12981 + (C5348 + C5349) * C28590) *
               C17890 +
           ((C10026 + C10027) * C12980 + (C10028 + C10029) * C12910 +
            (C23564 + C23565) * C12981 + (C23566 + C23567) * C28590) *
               C28614) *
              C956 -
          (((C27426 * C9389 + C28520 * C9493 + C27436 * C8315 +
             C28711 * C8441) *
                C28590 +
            (C27426 * C9334 + C28520 * C9335 + C27436 * C8251 +
             C28711 * C8253) *
                C12981 +
            (C10033 + C10032) * C12910 + (C10031 + C10030) * C12980) *
               C28614 +
           ((C23567 + C23566) * C28590 + (C23565 + C23564) * C12981 +
            (C10029 + C10028) * C12910 + (C10027 + C10026) * C12980) *
               C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13156 * C91 + C13159 + C13159 + C12910 * C314 + C13157 * C589 +
             C13160 + C13160 + C28590 * C761) *
                C28711 +
            (C13183 + C13184) * C28520) *
               C17890 +
           ((C17561 + C17562) * C28711 + (C16267 + C16268) * C28520) * C28614) *
              C956 -
          (((C13157 * C9334 + C17553 + C17553 + C28590 * C9544 +
             C13156 * C4011 + C17554 + C17554 + C12910 * C4283) *
                C28520 +
            (C13157 * C8251 + C17555 + C17555 + C28590 * C8505 +
             C13156 * C4012 + C17556 + C17556 + C12910 * C4284) *
                C28711) *
               C28614 +
           ((C16268 + C16267) * C28520 + (C17562 + C17561) * C28711) * C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C12980 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C12910 +
            (C20194 + C20195) * C12981 + (C20402 + C20403) * C28590) *
               C28711 +
           ((C18014 + C18015) * C12980 + (C18180 + C18181) * C12910 +
            (C19556 + C19557) * C12981 + (C19772 + C19773) * C28590) *
               C28520) *
              C956 -
          (((C17996 * C9389 + C28614 * C9597 + C17995 * C2554 +
             C17890 * C2778) *
                C28590 +
            (C17996 * C9334 + C28614 * C9441 + C17995 * C2489 +
             C17890 * C2610) *
                C12981 +
            (C17996 * C4088 + C28614 * C4347 + C17995 * C1010 +
             C17890 * C1174) *
                C12910 +
            (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
                C12980) *
               C28520 +
           ((C17996 * C8315 + C28614 * C8575 + C17995 * C2555 +
             C17890 * C2779) *
                C28590 +
            (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 +
             C17890 * C2611) *
                C12981 +
            (C17996 * C4089 + C28614 * C4348 + C17995 * C1011 +
             C17890 * C1175) *
                C12910 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C12980) *
               C28711) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) *
                C17995 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C17890 +
            (C10026 + C10027) * C17996 + (C10209 + C10210) * C28614) *
               C12910 +
           ((C5346 + C5347) * C17995 + (C5527 + C5528) * C17890 +
            (C23564 + C23565) * C17996 + (C23770 + C23771) * C28614) *
               C28590) *
              C956 -
          (((C27426 * C9441 + C28520 * C9648 + C27436 * C8387 +
             C28711 * C8627) *
                C28614 +
            (C27426 * C9334 + C28520 * C9335 + C27436 * C8251 +
             C28711 * C8253) *
                C17996 +
            (C23771 + C23770) * C17890 + (C23565 + C23564) * C17995) *
               C28590 +
           ((C10212 + C10211) * C28614 + (C10031 + C10030) * C17996 +
            (C10210 + C10209) * C17890 + (C10027 + C10026) * C17995) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C17995 +
            (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
                C17890 +
            (C17335 + C17336) * C17996 + (C17771 + C17772) * C28614) *
               C28711 +
           ((C12999 + C13000) * C17995 + (C13353 + C13354) * C17890 +
            (C16045 + C16046) * C17996 + (C16477 + C16478) * C28614) *
               C28520) *
              C956 -
          (((C12981 * C9441 + C28590 * C9699 + C12980 * C4156 +
             C12910 * C4462) *
                C28614 +
            (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 +
             C12910 * C4088) *
                C17996 +
            (C16478 + C16477) * C17890 + (C16046 + C16045) * C17995) *
               C28520 +
           ((C12981 * C8387 + C28590 * C8682 + C12980 * C4157 +
             C12910 * C4463) *
                C28614 +
            (C12981 * C8251 + C28590 * C8315 + C12980 * C4012 +
             C12910 * C4089) *
                C17996 +
            (C17772 + C17771) * C17890 + (C17336 + C17335) * C17995) *
               C28711) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C12910 +
            (C20614 + C20615) * C28590) *
               C28711 +
           ((C18368 + C18369) * C12910 + (C19986 + C19987) * C28590) * C28520) *
              C956 -
          (((C18342 * C9334 + C21210 + C21210 + C28614 * C9750 +
             C18341 * C2489 + C21211 + C21211 + C17890 * C2937) *
                C28590 +
            (C18342 * C4011 + C19334 + C19334 + C28614 * C4518 + C18341 * C960 +
             C19335 + C19335 + C17890 * C1288) *
                C12910) *
               C28520 +
           ((C18342 * C8251 + C21212 + C21212 + C28614 * C8743 +
             C18341 * C2490 + C21213 + C21213 + C17890 * C2938) *
                C28590 +
            (C18342 * C4012 + C19336 + C19336 + C28614 * C4519 + C18341 * C961 +
             C19337 + C19337 + C17890 * C1289) *
                C12910) *
               C28711) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C17890 +
            C8264 * C28614) *
               C28753 +
           (C6519 * C17890 + C7710 * C28614) * C28745 +
           (C6520 * C17890 + C7711 * C28614) * C14433) *
              C28758 * C28759 * C81 -
          (((C6170 * C5691 + C7243 + C7243 + C28515 * C5695) * C28614 +
            (C6170 * C1926 + C6178 + C6178 + C28515 * C1932) * C17890) *
               C14433 +
           ((C6170 * C2489 + C7244 + C7244 + C28515 * C2495) * C28614 +
            (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C17890) *
               C28745 +
           ((C6170 * C960 + C7245 + C7245 + C28515 * C968) * C28614 +
            (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C17890) *
               C28753) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                       C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                          C6171 +
                      (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                       C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                          C28515) *
                         C17890 +
                     ((C14500 * C961 + C28753 * C1011 + C14501 * C2490 +
                       C28745 * C2555 + C14502 * C5692 + C14433 * C5754) *
                          C6171 +
                      (C14500 * C965 + C28753 * C1015 + C14501 * C2493 +
                       C28745 * C2558 + C14502 * C5694 + C14433 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C14502 * C5693 + C14433 * C5755 + C14501 * C2492 +
                       C28745 * C2557 + C14500 * C964 + C28753 * C1014) *
                          C28515 +
                      (C14502 * C5691 + C14433 * C5753 + C14501 * C2489 +
                       C28745 * C2554 + C14500 * C960 + C28753 * C1010) *
                          C6171) *
                         C28614 +
                     ((C14521 + C14520 + C14519) * C28515 +
                      (C14518 + C14517 + C14516) * C6171) *
                         C17890) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C6171 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28515) *
               C28753 +
           ((C20194 + C20195) * C6171 + (C20196 + C20197) * C28515) * C28745 +
           ((C17995 * C1927 + C17890 * C2060 + C17996 * C5692 +
             C28614 * C5808) *
                C6171 +
            (C17995 * C1930 + C17890 * C2063 + C17996 * C5694 +
             C28614 * C5810) *
                C28515) *
               C14433) *
              C28758 * C28759 * C81 -
          (((C17996 * C5693 + C28614 * C5809 + C17995 * C1929 +
             C17890 * C2062) *
                C28515 +
            (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 +
             C17890 * C2059) *
                C6171) *
               C14433 +
           ((C19559 + C19558) * C28515 + (C19557 + C19556) * C6171) * C28745 +
           ((C18017 + C18016) * C28515 + (C18015 + C18014) * C6171) * C28753) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C14500 +
                      (C6171 * C149 + C28515 * C274) * C28753 + C6656 * C14501 +
                      C6657 * C28745 + C6658 * C14502 + C6659 * C14433) *
                         C17890 +
                     (C8451 * C14500 + C8452 * C28753 + C7896 * C14501 +
                      C7897 * C28745 + C7898 * C14502 + C7899 * C14433) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C5753 + C28515 * C5861) * C14433 +
                      (C6171 * C5691 + C28515 * C5693) * C14502 +
                      (C6171 * C2554 + C28515 * C2666) * C28745 +
                      (C6171 * C2489 + C28515 * C2492) * C14501 +
                      (C6171 * C1010 + C28515 * C1094) * C28753 +
                      (C6171 * C960 + C28515 * C964) * C14500) *
                         C28614 +
                     ((C6171 * C2003 + C28515 * C2127) * C14433 +
                      (C6171 * C1926 + C28515 * C1929) * C14502 +
                      (C6171 * C638 + C28515 * C722) * C28745 +
                      (C6171 * C588 + C28515 * C592) * C14501 +
                      (C6171 * C150 + C28515 * C275) * C28753 +
                      (C6171 * C92 + C28515 * C97) * C14500) *
                         C17890) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                      C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                      C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                         C28515 * C17890 +
                     (C14671 * C961 + C15700 + C15700 + C28753 * C1133 +
                      C14672 * C2490 + C15699 + C15699 + C28745 * C2720 +
                      C14673 * C5692 + C15698 + C15698 + C14433 * C5914) *
                         C28515 * C28614) *
                        C28758 * C28759 * C81 -
                    ((C14673 * C5691 + C15695 + C15695 + C14433 * C5913 +
                      C14672 * C2489 + C15696 + C15696 + C28745 * C2719 +
                      C14671 * C960 + C15697 + C15697 + C28753 * C1132) *
                         C28515 * C28614 +
                     (C14698 + C14697 + C14696) * C28515 * C17890) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C14500 +
           (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
               C28753 +
           (C20194 + C20195) * C14501 + (C20402 + C20403) * C28745 +
           (C17995 * C1927 + C17890 * C2060 + C17996 * C5692 + C28614 * C5808) *
               C14502 +
           (C17995 * C2004 + C17890 * C2258 + C17996 * C5754 + C28614 * C5972) *
               C14433) *
              C28515 * C28758 * C28759 * C81 -
          ((C17996 * C5753 + C28614 * C5971 + C17995 * C2003 + C17890 * C2257) *
               C14433 +
           (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 + C17890 * C2059) *
               C14502 +
           (C19773 + C19772) * C28745 + (C19557 + C19556) * C14501 +
           (C18181 + C18180) * C28753 + (C18015 + C18014) * C14500) *
              C28515 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C17995 +
            (C6171 * C212 + C28515 * C427) * C17890 + C8451 * C17996 +
            C8631 * C28614) *
               C28753 +
           (C6656 * C17995 + C6783 * C17890 + C7896 * C17996 + C8075 * C28614) *
               C28745 +
           (C6658 * C17995 + C6784 * C17890 + C7898 * C17996 + C8076 * C28614) *
               C14433) *
              C28758 * C28759 * C81 -
          (((C6171 * C5807 + C28515 * C6023) * C28614 +
            (C6171 * C5691 + C28515 * C5693) * C17996 +
            (C6171 * C2059 + C28515 * C2313) * C17890 +
            (C6171 * C1926 + C28515 * C1929) * C17995) *
               C14433 +
           ((C6171 * C2610 + C28515 * C2831) * C28614 +
            (C6171 * C2489 + C28515 * C2492) * C17996 +
            (C6171 * C680 + C28515 * C840) * C17890 +
            (C6171 * C588 + C28515 * C592) * C17995) *
               C28745 +
           ((C6171 * C1052 + C28515 * C1212) * C28614 +
            (C6171 * C960 + C28515 * C964) * C17996 +
            (C6171 * C213 + C28515 * C428) * C17890 +
            (C6171 * C92 + C28515 * C97) * C17995) *
               C28753) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C17995 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C17890 +
                     (C14500 * C961 + C28753 * C1011 + C14501 * C2490 +
                      C28745 * C2555 + C14502 * C5692 + C14433 * C5754) *
                         C17996 +
                     (C14500 * C1053 + C28753 * C1251 + C14501 * C2611 +
                      C28745 * C2885 + C14502 * C5808 + C14433 * C6076) *
                         C28614) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C14502 * C5807 + C14433 * C6075 + C14501 * C2610 +
                      C28745 * C2884 + C14500 * C1052 + C28753 * C1250) *
                         C28614 +
                     (C14502 * C5691 + C14433 * C5753 + C14501 * C2489 +
                      C28745 * C2554 + C14500 * C960 + C28753 * C1010) *
                         C17996 +
                     (C14863 + C14862 + C14861) * C17890 +
                     (C14518 + C14517 + C14516) * C17995) *
                        C28515 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28753 +
                     (C20614 + C20615) * C28745 +
                     (C18341 * C1927 + C20609 + C20609 + C17890 * C2429 +
                      C18342 * C5692 + C20608 + C20608 + C28614 * C6128) *
                         C14433) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C18342 * C5691 + C20606 + C20606 + C28614 * C6127 +
                      C18341 * C1926 + C20607 + C20607 + C17890 * C2428) *
                         C14433 +
                     (C19987 + C19986) * C28745 + (C18369 + C18368) * C28753) *
                        C28515 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C17890 +
            C8264 * C28614) *
               C28753 +
           (C24998 + C24999) * C28745 + (C25000 + C25001) * C14433) *
              C28758 * C583 -
          (((C6170 * C6898 + C6902 + C6902 + C28515 * C6900) * C28614 +
            C6521 * C17890) *
               C14433 +
           (C25001 + C25000) * C28745 + (C24999 + C24998) * C28753) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                       C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                          C6171 +
                      (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                       C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                          C28515) *
                         C17890 +
                     ((C14500 * C961 + C28753 * C1011 + C14501 * C2490 +
                       C28745 * C2555 + C14502 * C5692 + C14433 * C5754) *
                          C6171 +
                      (C14500 * C965 + C28753 * C1015 + C14501 * C2493 +
                       C28745 * C2558 + C14502 * C5694 + C14433 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C583 -
                    (((C14502 * C6899 + C14433 * C6940 + C14501 * C5694 +
                       C28745 * C5756 + C14500 * C2493 + C28753 * C2558) *
                          C28515 +
                      (C14502 * C6898 + C14433 * C6939 + C14501 * C5692 +
                       C28745 * C5754 + C14500 * C2490 + C28753 * C2555) *
                          C6171) *
                         C28614 +
                     ((C14502 * C5130 + C14433 * C5208 + C14501 * C1930 +
                       C28745 * C2007 + C14500 * C593 + C28753 * C643) *
                          C28515 +
                      (C14502 * C5128 + C14433 * C5206 + C14501 * C1927 +
                       C28745 * C2004 + C14500 * C589 + C28753 * C639) *
                          C6171) *
                         C17890) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C6171 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28515) *
               C28753 +
           ((C20194 + C20195) * C6171 + (C20196 + C20197) * C28515) * C28745 +
           ((C25110 + C25111) * C6171 + (C25112 + C25113) * C28515) * C14433) *
              C28758 * C583 -
          (((C17996 * C6899 + C28614 * C6976 + C17995 * C5130 +
             C17890 * C5262) *
                C28515 +
            (C17996 * C6898 + C28614 * C6975 + C17995 * C5128 +
             C17890 * C5260) *
                C6171) *
               C14433 +
           ((C25113 + C25112) * C28515 + (C25111 + C25110) * C6171) * C28745 +
           ((C20197 + C20196) * C28515 + (C20195 + C20194) * C6171) * C28753) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C14500 +
            (C6171 * C149 + C28515 * C274) * C28753 + C6656 * C14501 +
            C6657 * C28745 + C6658 * C14502 + C6659 * C14433) *
               C17890 +
           (C8451 * C14500 + C8452 * C28753 + C7896 * C14501 + C7897 * C28745 +
            C7898 * C14502 + C7899 * C14433) *
               C28614) *
              C28758 * C583 -
          (((C6171 * C6939 + C28515 * C7011) * C14433 +
            (C6171 * C6898 + C28515 * C6899) * C14502 + C7899 * C28745 +
            C7898 * C14501 + C7897 * C28753 + C7896 * C14500) *
               C28614 +
           (C6661 * C14433 + C6660 * C14502 + C6659 * C28745 + C6658 * C14501 +
            C6657 * C28753 + C6656 * C14500) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                      C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                      C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                         C28515 * C17890 +
                     (C14671 * C961 + C15700 + C15700 + C28753 * C1133 +
                      C14672 * C2490 + C15699 + C15699 + C28745 * C2720 +
                      C14673 * C5692 + C15698 + C15698 + C14433 * C5914) *
                         C28515 * C28614) *
                        C28758 * C583 -
                    ((C14673 * C6898 + C25214 + C25214 + C14433 * C7046 +
                      C14672 * C5692 + C25215 + C25215 + C28745 * C5914 +
                      C14671 * C2490 + C25216 + C25216 + C28753 * C2720) *
                         C28515 * C28614 +
                     (C14673 * C5128 + C15224 + C15224 + C14433 * C5404 +
                      C14672 * C1927 + C15225 + C15225 + C28745 * C2199 +
                      C14671 * C589 + C15226 + C15226 + C28753 * C761) *
                         C28515 * C17890) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C14500 +
           (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
               C28753 +
           (C20194 + C20195) * C14501 + (C20402 + C20403) * C28745 +
           (C25110 + C25111) * C14502 + (C25271 + C25272) * C14433) *
              C28515 * C28758 * C583 -
          ((C17996 * C6939 + C28614 * C7085 + C17995 * C5206 + C17890 * C5462) *
               C14433 +
           (C17996 * C6898 + C28614 * C6975 + C17995 * C5128 + C17890 * C5260) *
               C14502 +
           (C25272 + C25271) * C28745 + (C25111 + C25110) * C14501 +
           (C20403 + C20402) * C28753 + (C20195 + C20194) * C14500) *
              C28515 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C17995 +
                      (C6171 * C212 + C28515 * C427) * C17890 + C8451 * C17996 +
                      C8631 * C28614) *
                         C28753 +
                     (C25323 + C25324 + C25325 + C25326) * C28745 +
                     (C25327 + C25328 + C25329 + C25330) * C14433) *
                        C28758 * C583 -
                    (((C6171 * C6975 + C28515 * C7120) * C28614 +
                      (C6171 * C6898 + C28515 * C6899) * C17996 +
                      C6785 * C17890 + C6660 * C17995) *
                         C14433 +
                     (C25330 + C25329 + C25328 + C25327) * C28745 +
                     (C25326 + C25325 + C25324 + C25323) * C28753) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezy[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C17995 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C17890 +
                     (C14500 * C961 + C28753 * C1011 + C14501 * C2490 +
                      C28745 * C2555 + C14502 * C5692 + C14433 * C5754) *
                         C17996 +
                     (C14500 * C1053 + C28753 * C1251 + C14501 * C2611 +
                      C28745 * C2885 + C14502 * C5808 + C14433 * C6076) *
                         C28614) *
                        C28515 * C28758 * C583 -
                    ((C14502 * C6975 + C14433 * C7155 + C14501 * C5808 +
                      C28745 * C6076 + C14500 * C2611 + C28753 * C2885) *
                         C28614 +
                     (C14502 * C6898 + C14433 * C6939 + C14501 * C5692 +
                      C28745 * C5754 + C14500 * C2490 + C28753 * C2555) *
                         C17996 +
                     (C14502 * C5260 + C14433 * C5581 + C14501 * C2060 +
                      C28745 * C2376 + C14500 * C681 + C28753 * C879) *
                         C17890 +
                     (C14502 * C5128 + C14433 * C5206 + C14501 * C1927 +
                      C28745 * C2004 + C14500 * C589 + C28753 * C639) *
                         C17995) *
                        C28515 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezz[13] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28753 +
                     (C20614 + C20615) * C28745 + (C25441 + C25442) * C14433) *
                        C28515 * C28758 * C583 -
                    ((C18342 * C6898 + C25435 + C25435 + C28614 * C7190 +
                      C18341 * C5128 + C25436 + C25436 + C17890 * C5633) *
                         C14433 +
                     (C25442 + C25441) * C28745 + (C20615 + C20614) * C28753) *
                        C28515 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C17890 +
            C8264 * C28614) *
               C28753 +
           (C24998 + C24999) * C28745 + (C25000 + C25001) * C14433) *
              C956 -
          (((C6170 * C8250 + C8259 + C8259 + C28515 * C8254) * C28614 +
            C7711 * C17890) *
               C14433 +
           (C10838 * C28614 + C7710 * C17890) * C28745 +
           (C11363 * C28614 + C8264 * C17890) * C28753) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                       C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                          C6171 +
                      (C14500 * C96 + C28753 * C154 + C14501 * C593 +
                       C28745 * C643 + C14502 * C1930 + C14433 * C2007) *
                          C28515) *
                         C17890 +
                     ((C25555 + C25556 + C25557) * C6171 +
                      (C25558 + C25559 + C25560) * C28515) *
                         C28614) *
                        C956 -
                    (((C14502 * C8252 + C14433 * C8316 + C14501 * C8253 +
                       C28745 * C8317 + C14500 * C4015 + C28753 * C4092) *
                          C28515 +
                      (C14502 * C8250 + C14433 * C8314 + C14501 * C8251 +
                       C28745 * C8315 + C14500 * C4012 + C28753 * C4089) *
                          C6171) *
                         C28614 +
                     ((C25560 + C25559 + C25558) * C28515 +
                      (C25557 + C25556 + C25555) * C6171) *
                         C17890) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C6171 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C28515) *
               C28753 +
           ((C20194 + C20195) * C6171 + (C20196 + C20197) * C28515) * C28745 +
           ((C25110 + C25111) * C6171 + (C25112 + C25113) * C28515) * C14433) *
              C956 -
          (((C17996 * C8252 + C28614 * C8388 + C17995 * C5694 +
             C17890 * C5810) *
                C28515 +
            (C17996 * C8250 + C28614 * C8386 + C17995 * C5692 +
             C17890 * C5808) *
                C6171) *
               C14433 +
           ((C17996 * C8253 + C28614 * C8389 + C17995 * C2493 +
             C17890 * C2614) *
                C28515 +
            (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 +
             C17890 * C2611) *
                C6171) *
               C28745 +
           ((C17996 * C4015 + C28614 * C4160 + C17995 * C965 + C17890 * C1057) *
                C28515 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C6171) *
               C28753) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C14500 +
            (C6171 * C149 + C28515 * C274) * C28753 + C6656 * C14501 +
            C6657 * C28745 + C6658 * C14502 + C6659 * C14433) *
               C17890 +
           (C25661 + C25662 + C25663 + C25664 + C25665 + C25666) * C28614) *
              C956 -
          (((C6171 * C8314 + C28515 * C8440) * C14433 +
            (C6171 * C8250 + C28515 * C8252) * C14502 + C11013 * C28745 +
            C11012 * C14501 + C11554 * C28753 + C11553 * C14500) *
               C28614 +
           (C25666 + C25665 + C25664 + C25663 + C25662 + C25661) * C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14671 * C91 + C14675 + C14675 + C28753 * C314 +
                      C14672 * C589 + C14676 + C14676 + C28745 * C761 +
                      C14673 * C1927 + C14677 + C14677 + C14433 * C2199) *
                         C28515 * C17890 +
                     (C25732 + C25733 + C25734) * C28515 * C28614) *
                        C956 -
                    ((C14673 * C8250 + C25723 + C25723 + C14433 * C8504 +
                      C14672 * C8251 + C25724 + C25724 + C28745 * C8505 +
                      C14671 * C4012 + C25725 + C25725 + C28753 * C4284) *
                         C28515 * C28614 +
                     (C25734 + C25733 + C25732) * C28515 * C17890) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C14500 +
           (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
               C28753 +
           (C20194 + C20195) * C14501 + (C20402 + C20403) * C28745 +
           (C25110 + C25111) * C14502 + (C25271 + C25272) * C14433) *
              C28515 * C956 -
          ((C17996 * C8314 + C28614 * C8574 + C17995 * C5754 + C17890 * C5972) *
               C14433 +
           (C17996 * C8250 + C28614 * C8386 + C17995 * C5692 + C17890 * C5808) *
               C14502 +
           (C17996 * C8315 + C28614 * C8575 + C17995 * C2555 + C17890 * C2779) *
               C28745 +
           (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 + C17890 * C2611) *
               C14501 +
           (C17996 * C4089 + C28614 * C4348 + C17995 * C1011 + C17890 * C1175) *
               C28753 +
           (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
               C14500) *
              C28515 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C17995 +
                      (C6171 * C212 + C28515 * C427) * C17890 + C8451 * C17996 +
                      C8631 * C28614) *
                         C28753 +
                     (C25323 + C25324 + C25325 + C25326) * C28745 +
                     (C25327 + C25328 + C25329 + C25330) * C14433) *
                        C956 -
                    (((C6171 * C8386 + C28515 * C8626) * C28614 +
                      (C6171 * C8250 + C28515 * C8252) * C17996 +
                      C8076 * C17890 + C7898 * C17995) *
                         C14433 +
                     (C11184 * C28614 + C11012 * C17996 + C8075 * C17890 +
                      C7896 * C17995) *
                         C28745 +
                     (C11734 * C28614 + C11553 * C17996 + C8631 * C17890 +
                      C8451 * C17995) *
                         C28753) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezy[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14500 * C91 + C28753 * C149 + C14501 * C589 +
                      C28745 * C639 + C14502 * C1927 + C14433 * C2004) *
                         C17995 +
                     (C14500 * C212 + C28753 * C466 + C14501 * C681 +
                      C28745 * C879 + C14502 * C2060 + C14433 * C2376) *
                         C17890 +
                     (C25555 + C25556 + C25557) * C17996 +
                     (C25891 + C25892 + C25893) * C28614) *
                        C28515 * C956 -
                    ((C14502 * C8386 + C14433 * C8681 + C14501 * C8387 +
                      C28745 * C8682 + C14500 * C4157 + C28753 * C4463) *
                         C28614 +
                     (C14502 * C8250 + C14433 * C8314 + C14501 * C8251 +
                      C28745 * C8315 + C14500 * C4012 + C28753 * C4089) *
                         C17996 +
                     (C25893 + C25892 + C25891) * C17890 +
                     (C25557 + C25556 + C25555) * C17995) *
                        C28515 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezz[14] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28753 +
                     (C20614 + C20615) * C28745 + (C25441 + C25442) * C14433) *
                        C28515 * C956 -
                    ((C18342 * C8250 + C25944 + C25944 + C28614 * C8742 +
                      C18341 * C5692 + C25945 + C25945 + C17890 * C6128) *
                         C14433 +
                     (C18342 * C8251 + C21212 + C21212 + C28614 * C8743 +
                      C18341 * C2490 + C21213 + C21213 + C17890 * C2938) *
                         C28745 +
                     (C18342 * C4012 + C19336 + C19336 + C28614 * C4519 +
                      C18341 * C961 + C19337 + C19337 + C17890 * C1289) *
                         C28753) *
                        C28515 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28754 +
            C8264 * C28748 + C11363 * C21265) *
               C12910 +
           (C6519 * C28754 + C7710 * C28748 + C10838 * C21265) * C28590) *
              C28758 * C28759 * C81 -
          (((C6170 * C9334 + C10376 + C10376 + C28515 * C9336) * C21265 +
            (C6170 * C2489 + C7244 + C7244 + C28515 * C2495) * C28748 +
            (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C28754) *
               C28590 +
           ((C6170 * C4011 + C10377 + C10377 + C28515 * C4017) * C21265 +
            (C6170 * C960 + C7245 + C7245 + C28515 * C968) * C28748 +
            (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C28754) *
               C12910) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C6171 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28515) *
               C28754 +
           ((C17335 + C17336) * C6171 + (C17337 + C17338) * C28515) * C28748 +
           ((C12980 * C4012 + C12910 * C4089 + C12981 * C8251 +
             C28590 * C8315) *
                C6171 +
            (C12980 * C4015 + C12910 * C4092 + C12981 * C8253 +
             C28590 * C8317) *
                C28515) *
               C21265) *
              C28758 * C28759 * C81 -
          (((C12981 * C9335 + C28590 * C9390 + C12980 * C4014 +
             C12910 * C4091) *
                C28515 +
            (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 +
             C12910 * C4088) *
                C6171) *
               C21265 +
           ((C16048 + C16047) * C28515 + (C16046 + C16045) * C6171) * C28748 +
           ((C13002 + C13001) * C28515 + (C13000 + C12999) * C6171) * C28754) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C6171 +
                      (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                       C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                          C28515) *
                         C12910 +
                     ((C21368 * C589 + C28754 * C681 + C21369 * C2490 +
                       C28748 * C2611 + C21370 * C8251 + C21265 * C8387) *
                          C6171 +
                      (C21368 * C593 + C28754 * C685 + C21369 * C2493 +
                       C28748 * C2614 + C21370 * C8253 + C21265 * C8389) *
                          C28515) *
                         C28590) *
                        C28758 * C28759 * C81 -
                    (((C21370 * C9335 + C21265 * C9442 + C21369 * C2492 +
                       C28748 * C2613 + C21368 * C592 + C28754 * C684) *
                          C28515 +
                      (C21370 * C9334 + C21265 * C9441 + C21369 * C2489 +
                       C28748 * C2610 + C21368 * C588 + C28754 * C680) *
                          C6171) *
                         C28590 +
                     ((C21389 + C21388 + C21387) * C28515 +
                      (C21386 + C21385 + C21384) * C6171) *
                         C12910) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C12980 +
            (C6171 * C149 + C28515 * C274) * C12910 + C6656 * C12981 +
            C6657 * C28590) *
               C28754 +
           (C8451 * C12980 + C8452 * C12910 + C7896 * C12981 + C7897 * C28590) *
               C28748 +
           (C11553 * C12980 + C11554 * C12910 + C11012 * C12981 +
            C11013 * C28590) *
               C21265) *
              C28758 * C28759 * C81 -
          (((C6171 * C9389 + C28515 * C9493) * C28590 +
            (C6171 * C9334 + C28515 * C9335) * C12981 +
            (C6171 * C4088 + C28515 * C4212) * C12910 +
            (C6171 * C4011 + C28515 * C4014) * C12980) *
               C21265 +
           ((C6171 * C2554 + C28515 * C2666) * C28590 +
            (C6171 * C2489 + C28515 * C2492) * C12981 +
            (C6171 * C1010 + C28515 * C1094) * C12910 +
            (C6171 * C960 + C28515 * C964) * C12980) *
               C28748 +
           ((C6171 * C638 + C28515 * C722) * C28590 +
            (C6171 * C588 + C28515 * C592) * C12981 +
            (C6171 * C150 + C28515 * C275) * C12910 +
            (C6171 * C92 + C28515 * C97) * C12980) *
               C28754) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                      C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                         C28515 * C28754 +
                     (C17561 + C17562) * C28515 * C28748 +
                     (C13156 * C4012 + C17556 + C17556 + C12910 * C4284 +
                      C13157 * C8251 + C17555 + C17555 + C28590 * C8505) *
                         C28515 * C21265) *
                        C28758 * C28759 * C81 -
                    ((C13157 * C9334 + C17553 + C17553 + C28590 * C9544 +
                      C13156 * C4011 + C17554 + C17554 + C12910 * C4283) *
                         C28515 * C21265 +
                     (C16268 + C16267) * C28515 * C28748 +
                     (C13184 + C13183) * C28515 * C28754) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C12980 +
                     (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                      C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                         C12910 +
                     (C21368 * C589 + C28754 * C681 + C21369 * C2490 +
                      C28748 * C2611 + C21370 * C8251 + C21265 * C8387) *
                         C12981 +
                     (C21368 * C639 + C28754 * C803 + C21369 * C2555 +
                      C28748 * C2779 + C21370 * C8315 + C21265 * C8575) *
                         C28590) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C21370 * C9389 + C21265 * C9597 + C21369 * C2554 +
                      C28748 * C2778 + C21368 * C638 + C28754 * C802) *
                         C28590 +
                     (C21370 * C9334 + C21265 * C9441 + C21369 * C2489 +
                      C28748 * C2610 + C21368 * C588 + C28754 * C680) *
                         C12981 +
                     (C21548 + C21547 + C21546) * C12910 +
                     (C21386 + C21385 + C21384) * C12980) *
                        C28515 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C21368 +
                      (C6171 * C212 + C28515 * C427) * C28754 + C8451 * C21369 +
                      C8631 * C28748 + C11553 * C21370 + C11734 * C21265) *
                         C12910 +
                     (C6656 * C21368 + C6783 * C28754 + C7896 * C21369 +
                      C8075 * C28748 + C11012 * C21370 + C11184 * C21265) *
                         C28590) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C9441 + C28515 * C9648) * C21265 +
                      (C6171 * C9334 + C28515 * C9335) * C21370 +
                      (C6171 * C2610 + C28515 * C2831) * C28748 +
                      (C6171 * C2489 + C28515 * C2492) * C21369 +
                      (C6171 * C680 + C28515 * C840) * C28754 +
                      (C6171 * C588 + C28515 * C592) * C21368) *
                         C28590 +
                     ((C6171 * C4156 + C28515 * C4400) * C21265 +
                      (C6171 * C4011 + C28515 * C4014) * C21370 +
                      (C6171 * C1052 + C28515 * C1212) * C28748 +
                      (C6171 * C960 + C28515 * C964) * C21369 +
                      (C6171 * C213 + C28515 * C428) * C28754 +
                      (C6171 * C92 + C28515 * C97) * C21368) *
                         C12910) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C21368 +
           (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
               C28754 +
           (C17335 + C17336) * C21369 + (C17771 + C17772) * C28748 +
           (C12980 * C4012 + C12910 * C4089 + C12981 * C8251 + C28590 * C8315) *
               C21370 +
           (C12980 * C4157 + C12910 * C4463 + C12981 * C8387 + C28590 * C8682) *
               C21265) *
              C28515 * C28758 * C28759 * C81 -
          ((C12981 * C9441 + C28590 * C9699 + C12980 * C4156 + C12910 * C4462) *
               C21265 +
           (C12981 * C9334 + C28590 * C9389 + C12980 * C4011 + C12910 * C4088) *
               C21370 +
           (C16478 + C16477) * C28748 + (C16046 + C16045) * C21369 +
           (C13354 + C13353) * C28754 + (C13000 + C12999) * C21368) *
              C28515 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C12910 +
                     (C21704 * C589 + C22187 + C22187 + C28754 * C917 +
                      C21705 * C2490 + C22186 + C22186 + C28748 * C2938 +
                      C21706 * C8251 + C22185 + C22185 + C21265 * C8743) *
                         C28590) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C21706 * C9334 + C22182 + C22182 + C21265 * C9750 +
                      C21705 * C2489 + C22183 + C22183 + C28748 * C2937 +
                      C21704 * C588 + C22184 + C22184 + C28754 * C916) *
                         C28590 +
                     (C21731 + C21730 + C21729) * C12910) *
                        C28515 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28754 +
            C8264 * C28748 + C11363 * C21265) *
               C12910 +
           (C26446 + C26447 + C26448) * C28590) *
              C28758 * C583 -
          (((C6170 * C8250 + C8259 + C8259 + C28515 * C8254) * C21265 +
            C7711 * C28748 + C6520 * C28754) *
               C28590 +
           (C26448 + C26447 + C26446) * C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C6171 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28515) *
               C28754 +
           ((C17335 + C17336) * C6171 + (C17337 + C17338) * C28515) * C28748 +
           ((C12980 * C4012 + C12910 * C4089 + C12981 * C8251 +
             C28590 * C8315) *
                C6171 +
            (C12980 * C4015 + C12910 * C4092 + C12981 * C8253 +
             C28590 * C8317) *
                C28515) *
               C21265) *
              C28758 * C583 -
          (((C12981 * C8252 + C28590 * C8316 + C12980 * C8253 +
             C12910 * C8317) *
                C28515 +
            (C12981 * C8250 + C28590 * C8314 + C12980 * C8251 +
             C12910 * C8315) *
                C6171) *
               C21265 +
           ((C12981 * C5694 + C28590 * C5756 + C12980 * C2493 +
             C12910 * C2558) *
                C28515 +
            (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 +
             C12910 * C2555) *
                C6171) *
               C28748 +
           ((C12981 * C1930 + C28590 * C2007 + C12980 * C593 + C12910 * C643) *
                C28515 +
            (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
                C6171) *
               C28754) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C6171 +
                      (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                       C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                          C28515) *
                         C12910 +
                     ((C26561 + C26562 + C26563) * C6171 +
                      (C26564 + C26565 + C26566) * C28515) *
                         C28590) *
                        C28758 * C583 -
                    (((C21370 * C8252 + C21265 * C8388 + C21369 * C5694 +
                       C28748 * C5810 + C21368 * C1930 + C28754 * C2063) *
                          C28515 +
                      (C21370 * C8250 + C21265 * C8386 + C21369 * C5692 +
                       C28748 * C5808 + C21368 * C1927 + C28754 * C2060) *
                          C6171) *
                         C28590 +
                     ((C26566 + C26565 + C26564) * C28515 +
                      (C26563 + C26562 + C26561) * C6171) *
                         C12910) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C12980 +
            (C6171 * C149 + C28515 * C274) * C12910 + C6656 * C12981 +
            C6657 * C28590) *
               C28754 +
           (C8451 * C12980 + C8452 * C12910 + C7896 * C12981 + C7897 * C28590) *
               C28748 +
           (C11553 * C12980 + C11554 * C12910 + C11012 * C12981 +
            C11013 * C28590) *
               C21265) *
              C28758 * C583 -
          (((C6171 * C8314 + C28515 * C8440) * C28590 +
            (C6171 * C8250 + C28515 * C8252) * C12981 + C11013 * C12910 +
            C11012 * C12980) *
               C21265 +
           (C7899 * C28590 + C7898 * C12981 + C7897 * C12910 + C7896 * C12980) *
               C28748 +
           (C6659 * C28590 + C6658 * C12981 + C6657 * C12910 + C6656 * C12980) *
               C28754) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                      C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                         C28515 * C28754 +
                     (C17561 + C17562) * C28515 * C28748 +
                     (C13156 * C4012 + C17556 + C17556 + C12910 * C4284 +
                      C13157 * C8251 + C17555 + C17555 + C28590 * C8505) *
                         C28515 * C21265) *
                        C28758 * C583 -
                    ((C13157 * C8250 + C26667 + C26667 + C28590 * C8504 +
                      C13156 * C8251 + C26668 + C26668 + C12910 * C8505) *
                         C28515 * C21265 +
                     (C13157 * C5692 + C16909 + C16909 + C28590 * C5914 +
                      C13156 * C2490 + C16910 + C16910 + C12910 * C2720) *
                         C28515 * C28748 +
                     (C13157 * C1927 + C13707 + C13707 + C28590 * C2199 +
                      C13156 * C589 + C13708 + C13708 + C12910 * C761) *
                         C28515 * C28754) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C12980 +
                     (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                      C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                         C12910 +
                     (C26561 + C26562 + C26563) * C12981 +
                     (C26725 + C26726 + C26727) * C28590) *
                        C28515 * C28758 * C583 -
                    ((C21370 * C8314 + C21265 * C8574 + C21369 * C5754 +
                      C28748 * C5972 + C21368 * C2004 + C28754 * C2258) *
                         C28590 +
                     (C21370 * C8250 + C21265 * C8386 + C21369 * C5692 +
                      C28748 * C5808 + C21368 * C1927 + C28754 * C2060) *
                         C12981 +
                     (C26727 + C26726 + C26725) * C12910 +
                     (C26563 + C26562 + C26561) * C12980) *
                        C28515 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C21368 +
            (C6171 * C212 + C28515 * C427) * C28754 + C8451 * C21369 +
            C8631 * C28748 + C11553 * C21370 + C11734 * C21265) *
               C12910 +
           (C26778 + C26779 + C26780 + C26781 + C26782 + C26783) * C28590) *
              C28758 * C583 -
          (((C6171 * C8386 + C28515 * C8626) * C21265 +
            (C6171 * C8250 + C28515 * C8252) * C21370 + C8076 * C28748 +
            C7898 * C21369 + C6784 * C28754 + C6658 * C21368) *
               C28590 +
           (C26783 + C26782 + C26781 + C26780 + C26779 + C26778) * C12910) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C21368 +
           (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
               C28754 +
           (C17335 + C17336) * C21369 + (C17771 + C17772) * C28748 +
           (C12980 * C4012 + C12910 * C4089 + C12981 * C8251 + C28590 * C8315) *
               C21370 +
           (C12980 * C4157 + C12910 * C4463 + C12981 * C8387 + C28590 * C8682) *
               C21265) *
              C28515 * C28758 * C583 -
          ((C12981 * C8386 + C28590 * C8681 + C12980 * C8387 + C12910 * C8682) *
               C21265 +
           (C12981 * C8250 + C28590 * C8314 + C12980 * C8251 + C12910 * C8315) *
               C21370 +
           (C12981 * C5808 + C28590 * C6076 + C12980 * C2611 + C12910 * C2885) *
               C28748 +
           (C12981 * C5692 + C28590 * C5754 + C12980 * C2490 + C12910 * C2555) *
               C21369 +
           (C12981 * C2060 + C28590 * C2376 + C12980 * C681 + C12910 * C879) *
               C28754 +
           (C12981 * C1927 + C28590 * C2004 + C12980 * C589 + C12910 * C639) *
               C21368) *
              C28515 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C12910 +
                     (C26899 + C26900 + C26901) * C28590) *
                        C28515 * C28758 * C583 -
                    ((C21706 * C8250 + C26890 + C26890 + C21265 * C8742 +
                      C21705 * C5692 + C26891 + C26891 + C28748 * C6128 +
                      C21704 * C1927 + C26892 + C26892 + C28754 * C2429) *
                         C28590 +
                     (C26901 + C26900 + C26899) * C12910) *
                        C28515 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28754 +
            C8264 * C28748 + C11363 * C21265) *
               C12910 +
           (C26446 + C26447 + C26448) * C28590) *
              C956 -
          (((C6170 * C11353 + C11359 + C11359 + C28515 * C11355) * C21265 +
            C10838 * C28748 + C7710 * C28754) *
               C28590 +
           (C12532 * C21265 + C11363 * C28748 + C8264 * C28754) * C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
                C6171 +
            (C12980 * C96 + C12910 * C154 + C12981 * C593 + C28590 * C643) *
                C28515) *
               C28754 +
           ((C17335 + C17336) * C6171 + (C17337 + C17338) * C28515) * C28748 +
           ((C27010 + C27011) * C6171 + (C27012 + C27013) * C28515) * C21265) *
              C956 -
          (((C12981 * C11354 + C28590 * C11414 + C12980 * C9810 +
             C12910 * C9888) *
                C28515 +
            (C12981 * C11353 + C28590 * C11413 + C12980 * C9808 +
             C12910 * C9886) *
                C6171) *
               C21265 +
           ((C27013 + C27012) * C28515 + (C27011 + C27010) * C6171) * C28748 +
           ((C17338 + C17337) * C28515 + (C17336 + C17335) * C6171) * C28754) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C6171 +
                      (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                       C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                          C28515) *
                         C12910 +
                     ((C26561 + C26562 + C26563) * C6171 +
                      (C26564 + C26565 + C26566) * C28515) *
                         C28590) *
                        C956 -
                    (((C21370 * C11354 + C21265 * C11490 + C21369 * C8253 +
                       C28748 * C8389 + C21368 * C2493 + C28754 * C2614) *
                          C28515 +
                      (C21370 * C11353 + C21265 * C11489 + C21369 * C8251 +
                       C28748 * C8387 + C21368 * C2490 + C28754 * C2611) *
                          C6171) *
                         C28590 +
                     ((C21370 * C9810 + C21265 * C9956 + C21369 * C4015 +
                       C28748 * C4160 + C21368 * C965 + C28754 * C1057) *
                          C28515 +
                      (C21370 * C9808 + C21265 * C9954 + C21369 * C4012 +
                       C28748 * C4157 + C21368 * C961 + C28754 * C1053) *
                          C6171) *
                         C12910) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C12980 +
                      (C6171 * C149 + C28515 * C274) * C12910 + C6656 * C12981 +
                      C6657 * C28590) *
                         C28754 +
                     (C27114 + C27115 + C27116 + C27117) * C28748 +
                     (C27118 + C27119 + C27120 + C27121) * C21265) *
                        C956 -
                    (((C6171 * C11413 + C28515 * C11541) * C28590 +
                      (C6171 * C11353 + C28515 * C11354) * C12981 +
                      C12661 * C12910 + C12660 * C12980) *
                         C21265 +
                     (C27121 + C27120 + C27119 + C27118) * C28748 +
                     (C27117 + C27116 + C27115 + C27114) * C28754) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13156 * C91 + C13159 + C13159 + C12910 * C314 +
                      C13157 * C589 + C13160 + C13160 + C28590 * C761) *
                         C28515 * C28754 +
                     (C17561 + C17562) * C28515 * C28748 +
                     (C27182 + C27183) * C28515 * C21265) *
                        C956 -
                    ((C13157 * C11353 + C27176 + C27176 + C28590 * C11606 +
                      C13156 * C9808 + C27177 + C27177 + C12910 * C10084) *
                         C28515 * C21265 +
                     (C27183 + C27182) * C28515 * C28748 +
                     (C17562 + C17561) * C28515 * C28754) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C12980 +
                     (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                      C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                         C12910 +
                     (C26561 + C26562 + C26563) * C12981 +
                     (C26725 + C26726 + C26727) * C28590) *
                        C28515 * C956 -
                    ((C21370 * C11413 + C21265 * C11679 + C21369 * C8315 +
                      C28748 * C8575 + C21368 * C2555 + C28754 * C2779) *
                         C28590 +
                     (C21370 * C11353 + C21265 * C11489 + C21369 * C8251 +
                      C28748 * C8387 + C21368 * C2490 + C28754 * C2611) *
                         C12981 +
                     (C21370 * C9886 + C21265 * C10147 + C21369 * C4089 +
                      C28748 * C4348 + C21368 * C1011 + C28754 * C1175) *
                         C12910 +
                     (C21370 * C9808 + C21265 * C9954 + C21369 * C4012 +
                      C28748 * C4157 + C21368 * C961 + C28754 * C1053) *
                         C12980) *
                        C28515 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C21368 +
            (C6171 * C212 + C28515 * C427) * C28754 + C8451 * C21369 +
            C8631 * C28748 + C11553 * C21370 + C11734 * C21265) *
               C12910 +
           (C26778 + C26779 + C26780 + C26781 + C26782 + C26783) * C28590) *
              C956 -
          (((C6171 * C11489 + C28515 * C11730) * C21265 +
            (C6171 * C11353 + C28515 * C11354) * C21370 + C11184 * C28748 +
            C11012 * C21369 + C8075 * C28754 + C7896 * C21368) *
               C28590 +
           (C12780 * C21265 + C12660 * C21370 + C11734 * C28748 +
            C11553 * C21369 + C8631 * C28754 + C8451 * C21368) *
               C12910) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12980 * C91 + C12910 * C149 + C12981 * C589 + C28590 * C639) *
               C21368 +
           (C12980 * C212 + C12910 * C466 + C12981 * C681 + C28590 * C879) *
               C28754 +
           (C17335 + C17336) * C21369 + (C17771 + C17772) * C28748 +
           (C27010 + C27011) * C21370 + (C27338 + C27339) * C21265) *
              C28515 * C956 -
          ((C12981 * C11489 + C28590 * C11784 + C12980 * C9954 +
            C12910 * C10263) *
               C21265 +
           (C12981 * C11353 + C28590 * C11413 + C12980 * C9808 +
            C12910 * C9886) *
               C21370 +
           (C27339 + C27338) * C28748 + (C27011 + C27010) * C21369 +
           (C17772 + C17771) * C28754 + (C17336 + C17335) * C21368) *
              C28515 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C12910 +
                     (C26899 + C26900 + C26901) * C28590) *
                        C28515 * C956 -
                    ((C21706 * C11353 + C27390 + C27390 + C21265 * C11847 +
                      C21705 * C8251 + C27391 + C27391 + C28748 * C8743 +
                      C21704 * C2490 + C27392 + C27392 + C28754 * C2938) *
                         C28590 +
                     (C21706 * C9808 + C22683 + C22683 + C21265 * C10318 +
                      C21705 * C4012 + C22684 + C22684 + C28748 * C4519 +
                      C21704 * C961 + C22685 + C22685 + C28754 * C1289) *
                         C12910) *
                        C28515 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[18] += (-std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C4581 * C589 + C4588 + C4588 + C28711 * C597 +
                      C4583 * C588 + C4589 + C4589 + C28520 * C596) *
                         C28602 * C4579 +
                     (C4581 * C1927 + C4590 + C4590 + C28711 * C1933 +
                      C4583 * C1926 + C4591 + C4591 + C28520 * C1932) *
                         C28602 * C4580) *
                        C28758 * C28759 * C81 -
                    ((C4583 * C1925 + C4592 + C4592 + C28520 * C1931 +
                      C4581 * C1926 + C4593 + C4593 + C28711 * C1932) *
                         C28602 * C4580 +
                     (C4583 * C587 + C4594 + C4594 + C28520 * C595 +
                      C4581 * C588 + C4595 + C4595 + C28711 * C596) *
                         C28602 * C4579 +
                     (C4583 * C93 + C4596 + C4596 + C28520 * C103 +
                      C4581 * C92 + C4597 + C4597 + C28711 * C102) *
                         C28602 * C4578) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C28758 * C28759 * C81 -
                    (C89 * C95 + C111 + C111 + C76 * C105 + C87 * C94 + C112 +
                     C112 + C75 * C104 + C85 * C93 + C113 + C113 + C74 * C103 +
                     C83 * C92 + C114 + C114 + C73 * C102) *
                        C28602 * C28576 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C8798 +
                     (C4581 * C961 + C5703 + C5703 + C28711 * C969 +
                      C4583 * C960 + C5702 + C5702 + C28520 * C968) *
                         C8799 +
                     (C4581 * C4012 + C8802 + C8802 + C28711 * C4018 +
                      C4583 * C4011 + C8803 + C8803 + C28520 * C4017) *
                         C8800) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C4583 * C4010 + C8804 + C8804 + C28520 * C4016 +
                      C4581 * C4011 + C8805 + C8805 + C28711 * C4017) *
                         C8800 +
                     (C4583 * C959 + C8806 + C8806 + C28520 * C967 +
                      C4581 * C960 + C8807 + C8807 + C28711 * C968) *
                         C8799 +
                     (C4583 * C93 + C4596 + C4596 + C28520 * C103 +
                      C4581 * C92 + C4597 + C4597 + C28711 * C102) *
                         C8798) *
                        C28576 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (-std::pow(Pi, 2.5) * (((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                                 C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                                    C27436 +
                                (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                                 C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                                    C28711 +
                                (C4663 + C4664 + C4665) * C27426 +
                                (C4666 + C4667 + C4668) * C28520) *
                                   C28602 * C28758 * C28759 * C81 -
                               ((C4649 * C1928 + C4580 * C2005 + C4648 * C591 +
                                 C4579 * C641 + C4647 * C98 + C4578 * C156) *
                                    C28520 +
                                (C4649 * C1925 + C4580 * C2002 + C4648 * C587 +
                                 C4579 * C637 + C4647 * C93 + C4578 * C151) *
                                    C27426 +
                                (C4668 + C4667 + C4666) * C28711 +
                                (C4665 + C4664 + C4663) * C27436) *
                                   C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C28758 * C28759 * C81 -
          ((C148 * C100 + C28576 * C158) * C76 +
           (C148 * C95 + C28576 * C153) * C90 + C177 * C75 + C176 * C88 +
           C175 * C74 + C174 * C86 + C173 * C73 + C172 * C84) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C27436 +
            (C148 * C96 + C28576 * C154) * C28711 + C172 * C27426 +
            C173 * C28520) *
               C8798 +
           (C4102 * C27436 + C4103 * C28711 + C3056 * C27426 + C3057 * C28520) *
               C8799 +
           ((C148 * C4012 + C28576 * C4089) * C27436 +
            (C148 * C4015 + C28576 * C4092) * C28711 + C8862 * C27426 +
            C8863 * C28520) *
               C8800) *
              C28758 * C28759 * C81 -
          (((C148 * C4013 + C28576 * C4090) * C28520 +
            (C148 * C4010 + C28576 * C4087) * C27426 + C8863 * C28711 +
            C8862 * C27436) *
               C8800 +
           (C3059 * C28520 + C3058 * C27426 + C3057 * C28711 + C3056 * C27436) *
               C8799 +
           (C175 * C28520 + C174 * C27426 + C173 * C28711 + C172 * C27436) *
               C8798) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C2073 * C27436 + C2074 * C28711 + C1502 * C27426 + C1503 * C28520) *
               C4579 +
           ((C211 * C1927 + C28602 * C2060) * C27436 +
            (C211 * C1930 + C28602 * C2063) * C28711 + C4723 * C27426 +
            C4724 * C28520) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C211 * C1928 + C28602 * C2061) * C28520 +
            (C211 * C1925 + C28602 * C2058) * C27426 + C4724 * C28711 +
            C4723 * C27436) *
               C4580 +
           (C1505 * C28520 + C1504 * C27426 + C1503 * C28711 + C1502 * C27436) *
               C4579 +
           (C238 * C28520 + C237 * C27426 + C236 * C28711 + C235 * C27436) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C28758 * C28759 * C81 -
          ((C211 * C100 + C28602 * C221) * C76 +
           (C211 * C95 + C28602 * C216) * C90 + C240 * C75 + C239 * C88 +
           C238 * C74 + C237 * C86 + C236 * C73 + C235 * C84) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
            C8915 * C4012 + C8800 * C4157) *
               C27436 +
           (C8913 * C96 + C8798 * C217 + C8914 * C965 + C8799 * C1057 +
            C8915 * C4015 + C8800 * C4160) *
               C28711 +
           (C8929 + C8930 + C8931) * C27426 +
           (C8932 + C8933 + C8934) * C28520) *
              C28576 * C28758 * C28759 * C81 -
          ((C8915 * C4013 + C8800 * C4158 + C8914 * C963 + C8799 * C1055 +
            C8913 * C98 + C8798 * C219) *
               C28520 +
           (C8915 * C4010 + C8800 * C4155 + C8914 * C959 + C8799 * C1051 +
            C8913 * C93 + C8798 * C214) *
               C27426 +
           (C8934 + C8933 + C8932) * C28711 +
           (C8931 + C8930 + C8929) * C27436) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (-std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C27436 * C589 + C28711 * C593 + C27426 * C588 + C28520 * C592) *
               C4648 +
           (C27436 * C639 + C28711 * C723 + C27426 * C638 + C28520 * C722) *
               C4579 +
           (C27436 * C1927 + C28711 * C1930 + C27426 * C1926 + C28520 * C1929) *
               C4649 +
           (C27436 * C2004 + C28711 * C2128 + C27426 * C2003 + C28520 * C2127) *
               C4580) *
              C28602 * C28758 * C28759 * C81 -
          ((C27426 * C2002 + C28520 * C2126 + C27436 * C2003 + C28711 * C2127) *
               C4580 +
           (C27426 * C1925 + C28520 * C1928 + C27436 * C1926 + C28711 * C1929) *
               C4649 +
           (C27426 * C637 + C28520 * C721 + C27436 * C638 + C28711 * C722) *
               C4579 +
           (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
               C4648 +
           (C27426 * C151 + C28520 * C276 + C27436 * C150 + C28711 * C275) *
               C4578 +
           (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
               C4647) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C28758 * C28759 * C81 -
          ((C90 * C153 + C76 * C278 + C88 * C152 + C75 * C277 + C86 * C151 +
            C74 * C276 + C84 * C150 + C73 * C275) *
               C28576 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C148) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C148 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C28576) *
               C8798 +
           ((C27436 * C961 + C28711 * C965 + C27426 * C960 + C28520 * C964) *
                C148 +
            (C27436 * C1011 + C28711 * C1095 + C27426 * C1010 +
             C28520 * C1094) *
                C28576) *
               C8799 +
           ((C27436 * C4012 + C28711 * C4015 + C27426 * C4011 +
             C28520 * C4014) *
                C148 +
            (C27436 * C4089 + C28711 * C4213 + C27426 * C4088 +
             C28520 * C4212) *
                C28576) *
               C8800) *
              C28758 * C28759 * C81 -
          (((C27426 * C4087 + C28520 * C4211 + C27436 * C4088 +
             C28711 * C4212) *
                C28576 +
            (C27426 * C4010 + C28520 * C4013 + C27436 * C4011 +
             C28711 * C4014) *
                C148) *
               C8800 +
           ((C27426 * C1009 + C28520 * C1093 + C27436 * C1010 +
             C28711 * C1094) *
                C28576 +
            (C27426 * C959 + C28520 * C963 + C27436 * C960 + C28711 * C964) *
                C148) *
               C8799 +
           ((C27426 * C151 + C28520 * C276 + C27436 * C150 + C28711 * C275) *
                C28576 +
            (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
                C148) *
               C8798) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[18] += (-std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28711 +
                     (C4849 + C4850 + C4851) * C28520) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C4826 * C1925 + C4840 + C4840 + C4580 * C2197 +
                      C4825 * C587 + C4841 + C4841 + C4579 * C759 +
                      C4824 * C93 + C4842 + C4842 + C4578 * C316) *
                         C28520 +
                     (C4851 + C4850 + C4849) * C28711) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C313 * C95 + C330 + C330 + C28576 * C318) * C76 +
                     C339 * C75 + C338 * C74 + C337 * C73) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28711 +
                      C337 * C28520) *
                         C8798 +
                     (C4295 * C28711 + C3244 * C28520) * C8799 +
                     ((C313 * C4012 + C4292 + C4292 + C28576 * C4284) * C28711 +
                      C9039 * C28520) *
                         C8800) *
                        C28758 * C28759 * C81 -
                    (((C313 * C4010 + C4290 + C4290 + C28576 * C4282) * C28520 +
                      C9039 * C28711) *
                         C8800 +
                     (C3245 * C28520 + C3244 * C28711) * C8799 +
                     (C338 * C28520 + C337 * C28711) * C8798) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + (C211 * C1927 + C28602 * C2060) * C4649 +
            (C211 * C2004 + C28602 * C2258) * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C28758 * C28759 * C81 -
          (((C211 * C2002 + C28602 * C2256) * C4580 +
            (C211 * C1925 + C28602 * C2058) * C4649 + C1697 * C4579 +
            C1504 * C4648 + C389 * C4578 + C237 * C4647) *
               C28520 +
           (C4910 + C4906 + C4905 + C4904 + C4903 + C4902) * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28758 * C28759 * C81 -
          (((C211 * C153 + C28602 * C377) * C28576 +
            (C211 * C95 + C28602 * C216) * C148) *
               C76 +
           (C393 + C385) * C75 + (C392 + C382) * C74 + (C391 + C379) * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
             C8915 * C4012 + C8800 * C4157) *
                C148 +
            (C8913 * C149 + C8798 * C373 + C8914 * C1011 + C8799 * C1175 +
             C8915 * C4089 + C8800 * C4348) *
                C28576) *
               C28711 +
           ((C8929 + C8930 + C8931) * C148 + (C9096 + C9097 + C9098) * C28576) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C8915 * C4087 + C8800 * C4346 + C8914 * C1009 + C8799 * C1173 +
             C8913 * C151 + C8798 * C375) *
                C28576 +
            (C8915 * C4010 + C8800 * C4155 + C8914 * C959 + C8799 * C1051 +
             C8913 * C93 + C8798 * C214) *
                C148) *
               C28520 +
           ((C9098 + C9097 + C9096) * C28576 + (C8931 + C8930 + C8929) * C148) *
               C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C27436 * C589 + C28711 * C593 + C27426 * C588 + C28520 * C592) *
                C211 +
            (C27436 * C681 + C28711 * C841 + C27426 * C680 + C28520 * C840) *
                C28602) *
               C4579 +
           ((C27436 * C1927 + C28711 * C1930 + C27426 * C1926 +
             C28520 * C1929) *
                C211 +
            (C27436 * C2060 + C28711 * C2314 + C27426 * C2059 +
             C28520 * C2313) *
                C28602) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C27426 * C2058 + C28520 * C2312 + C27436 * C2059 +
             C28711 * C2313) *
                C28602 +
            (C27426 * C1925 + C28520 * C1928 + C27436 * C1926 +
             C28711 * C1929) *
                C211) *
               C4580 +
           ((C27426 * C679 + C28520 * C839 + C27436 * C680 + C28711 * C840) *
                C28602 +
            (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
                C211) *
               C4579 +
           ((C27426 * C214 + C28520 * C429 + C27436 * C213 + C28711 * C428) *
                C28602 +
            (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
                C211) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C28758 * C28759 * C81 -
          ((C90 * C216 + C76 * C431 + C88 * C215 + C75 * C430 + C86 * C214 +
            C74 * C429 + C84 * C213 + C73 * C428) *
               C28602 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C211) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C8913 +
           (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
               C8798 +
           (C27436 * C961 + C28711 * C965 + C27426 * C960 + C28520 * C964) *
               C8914 +
           (C27436 * C1053 + C28711 * C1213 + C27426 * C1052 + C28520 * C1212) *
               C8799 +
           (C27436 * C4012 + C28711 * C4015 + C27426 * C4011 + C28520 * C4014) *
               C8915 +
           (C27436 * C4157 + C28711 * C4401 + C27426 * C4156 + C28520 * C4400) *
               C8800) *
              C28576 * C28758 * C28759 * C81 -
          ((C27426 * C4155 + C28520 * C4399 + C27436 * C4156 + C28711 * C4400) *
               C8800 +
           (C27426 * C4010 + C28520 * C4013 + C27436 * C4011 + C28711 * C4014) *
               C8915 +
           (C27426 * C1051 + C28520 * C1211 + C27436 * C1052 + C28711 * C1212) *
               C8799 +
           (C27426 * C959 + C28520 * C963 + C27436 * C960 + C28711 * C964) *
               C8914 +
           (C27426 * C214 + C28520 * C429 + C27436 * C213 + C28711 * C428) *
               C8798 +
           (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
               C8913) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C4649 * C2058 + C4580 * C2374 + C4648 * C679 + C4579 * C877 +
             C4647 * C214 + C4578 * C468) *
                C28602 +
            (C4649 * C1925 + C4580 * C2002 + C4648 * C587 + C4579 * C637 +
             C4647 * C93 + C4578 * C151) *
                C211) *
               C28520 +
           ((C5019 + C5018 + C5017) * C28602 + (C4665 + C4664 + C4663) * C211) *
               C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28758 * C28759 * C81 -
          (((C148 * C216 + C28576 * C470) * C28602 +
            (C148 * C95 + C28576 * C153) * C211) *
               C76 +
           (C486 + C478) * C75 + (C485 + C475) * C74 + (C484 + C472) * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C8913 +
            (C148 * C212 + C28576 * C466) * C8798 + C4102 * C8914 +
            C4467 * C8799 + (C148 * C4012 + C28576 * C4089) * C8915 +
            (C148 * C4157 + C28576 * C4463) * C8800) *
               C28711 +
           (C9199 + C9200 + C9201 + C9202 + C9203 + C9207) * C28520) *
              C28758 * C28759 * C81 -
          (((C148 * C4155 + C28576 * C4461) * C8800 +
            (C148 * C4010 + C28576 * C4087) * C8915 + C3419 * C8799 +
            C3058 * C8914 + C482 * C8798 + C174 * C8913) *
               C28520 +
           (C9207 + C9203 + C9202 + C9201 + C9200 + C9199) * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (-std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            (C520 * C1927 + C2435 + C2435 + C28602 * C2429) * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C28758 * C28759 * C81 -
          (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C4580 +
            C1873 * C4579 + C545 * C4578) *
               C28520 +
           (C5077 + C5071 + C5070) * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28758 * C28759 * C81 -
          ((C520 * C95 + C537 + C537 + C28602 * C525) * C28576 * C76 +
           C549 * C75 + C548 * C74 + C547 * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9257 * C91 + C9261 + C9261 + C8798 * C521 + C9258 * C961 + C9262 +
            C9262 + C8799 * C1289 + C9259 * C4012 + C9263 + C9263 +
            C8800 * C4519) *
               C28576 * C28711 +
           (C9282 + C9283 + C9284) * C28576 * C28520) *
              C28758 * C28759 * C81 -
          ((C9259 * C4010 + C9273 + C9273 + C8800 * C4517 + C9258 * C959 +
            C9274 + C9274 + C8799 * C1287 + C9257 * C93 + C9275 + C9275 +
            C8798 * C523) *
               C28576 * C28520 +
           (C9284 + C9283 + C9282) * C28576 * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[19] += (-std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C5152 + C5153) * C28602 * C4579 +
                     (C5154 + C5155) * C28602 * C4580) *
                        C28758 * C583 -
                    ((C4583 * C5127 + C5142 + C5142 + C28520 * C5131 +
                      C4581 * C5128 + C5143 + C5143 + C28711 * C5132) *
                         C28602 * C4580 +
                     (C5155 + C5154) * C28602 * C4579 +
                     (C5153 + C5152) * C28602 * C4578) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C28758 * C583 -
                    (C89 * C586 + C599 + C599 + C76 * C594 + C87 * C587 + C600 +
                     C600 + C75 * C595 + C85 * C588 + C601 + C601 + C74 * C596 +
                     C83 * C589 + C602 + C602 + C73 * C597) *
                        C28602 * C28576 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C8798 +
                     (C4581 * C961 + C5703 + C5703 + C28711 * C969 +
                      C4583 * C960 + C5702 + C5702 + C28520 * C968) *
                         C8799 +
                     (C4581 * C4012 + C8802 + C8802 + C28711 * C4018 +
                      C4583 * C4011 + C8803 + C8803 + C28520 * C4017) *
                         C8800) *
                        C28576 * C28758 * C583 -
                    ((C4583 * C9334 + C9338 + C9338 + C28520 * C9336 +
                      C4581 * C8251 + C9339 + C9339 + C28711 * C8255) *
                         C8800 +
                     (C4583 * C2489 + C5700 + C5700 + C28520 * C2495 +
                      C4581 * C2490 + C5701 + C5701 + C28711 * C2496) *
                         C8799 +
                     (C5153 + C5152) * C8798) *
                        C28576 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (-std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C27436 +
           (C4647 * C96 + C4578 * C154 + C4648 * C593 + C4579 * C643 +
            C4649 * C1930 + C4580 * C2007) *
               C28711 +
           (C4663 + C4664 + C4665) * C27426 +
           (C4666 + C4667 + C4668) * C28520) *
              C28602 * C28758 * C583 -
          ((C4649 * C5129 + C4580 * C5207 + C4648 * C1929 + C4579 * C2006 +
            C4647 * C592 + C4578 * C642) *
               C28520 +
           (C4649 * C5127 + C4580 * C5205 + C4648 * C1926 + C4579 * C2003 +
            C4647 * C588 + C4578 * C638) *
               C27426 +
           (C4649 * C5130 + C4580 * C5208 + C4648 * C1930 + C4579 * C2007 +
            C4647 * C593 + C4578 * C643) *
               C28711 +
           (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 + C4579 * C2004 +
            C4647 * C589 + C4578 * C639) *
               C27436) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C28758 * C583 -
          ((C148 * C590 + C28576 * C640) * C76 +
           (C148 * C586 + C28576 * C636) * C90 +
           (C148 * C591 + C28576 * C641) * C75 +
           (C148 * C587 + C28576 * C637) * C88 +
           (C148 * C592 + C28576 * C642) * C74 +
           (C148 * C588 + C28576 * C638) * C86 +
           (C148 * C593 + C28576 * C643) * C73 +
           (C148 * C589 + C28576 * C639) * C84) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C27436 +
            (C148 * C96 + C28576 * C154) * C28711 + C172 * C27426 +
            C173 * C28520) *
               C8798 +
           (C4102 * C27436 + C4103 * C28711 + C3056 * C27426 + C3057 * C28520) *
               C8799 +
           ((C148 * C4012 + C28576 * C4089) * C27436 +
            (C148 * C4015 + C28576 * C4092) * C28711 + C8862 * C27426 +
            C8863 * C28520) *
               C8800) *
              C28758 * C583 -
          (((C148 * C9335 + C28576 * C9390) * C28520 +
            (C148 * C9334 + C28576 * C9389) * C27426 +
            (C148 * C8253 + C28576 * C8317) * C28711 +
            (C148 * C8251 + C28576 * C8315) * C27436) *
               C8800 +
           ((C148 * C2492 + C28576 * C2557) * C28520 +
            (C148 * C2489 + C28576 * C2554) * C27426 +
            (C148 * C2493 + C28576 * C2558) * C28711 +
            (C148 * C2490 + C28576 * C2555) * C27436) *
               C8799 +
           ((C148 * C592 + C28576 * C642) * C28520 +
            (C148 * C588 + C28576 * C638) * C27426 +
            (C148 * C593 + C28576 * C643) * C28711 +
            (C148 * C589 + C28576 * C639) * C27436) *
               C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C5264 + C5265 + C5266 + C5267) * C4579 +
           (C5276 + C5277 + C5272 + C5273) * C4580) *
              C28758 * C583 -
          (((C211 * C5129 + C28602 * C5261) * C28520 +
            (C211 * C5127 + C28602 * C5259) * C27426 +
            (C211 * C5130 + C28602 * C5262) * C28711 +
            (C211 * C5128 + C28602 * C5260) * C27436) *
               C4580 +
           (C5273 + C5272 + C5277 + C5276) * C4579 +
           (C5267 + C5266 + C5265 + C5264) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C28758 * C583 -
          ((C211 * C590 + C28602 * C682) * C76 +
           (C211 * C586 + C28602 * C678) * C90 +
           (C211 * C591 + C28602 * C683) * C75 +
           (C211 * C587 + C28602 * C679) * C88 +
           (C211 * C592 + C28602 * C684) * C74 +
           (C211 * C588 + C28602 * C680) * C86 +
           (C211 * C593 + C28602 * C685) * C73 +
           (C211 * C589 + C28602 * C681) * C84) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
            C8915 * C4012 + C8800 * C4157) *
               C27436 +
           (C8913 * C96 + C8798 * C217 + C8914 * C965 + C8799 * C1057 +
            C8915 * C4015 + C8800 * C4160) *
               C28711 +
           (C8929 + C8930 + C8931) * C27426 +
           (C8932 + C8933 + C8934) * C28520) *
              C28576 * C28758 * C583 -
          ((C8915 * C9335 + C8800 * C9442 + C8914 * C2492 + C8799 * C2613 +
            C8913 * C592 + C8798 * C684) *
               C28520 +
           (C8915 * C9334 + C8800 * C9441 + C8914 * C2489 + C8799 * C2610 +
            C8913 * C588 + C8798 * C680) *
               C27426 +
           (C8915 * C8253 + C8800 * C8389 + C8914 * C2493 + C8799 * C2614 +
            C8913 * C593 + C8798 * C685) *
               C28711 +
           (C8915 * C8251 + C8800 * C8387 + C8914 * C2490 + C8799 * C2611 +
            C8913 * C589 + C8798 * C681) *
               C27436) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (-std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C5346 + C5347) * C4648 + (C5348 + C5349) * C4579 +
           (C5350 + C5351) * C4649 + (C5352 + C5353) * C4580) *
              C28602 * C28758 * C583 -
          ((C27426 * C5205 + C28520 * C5327 + C27436 * C5206 + C28711 * C5328) *
               C4580 +
           (C27426 * C5127 + C28520 * C5129 + C27436 * C5128 + C28711 * C5130) *
               C4649 +
           (C5353 + C5352) * C4579 + (C5351 + C5350) * C4648 +
           (C5349 + C5348) * C4578 + (C5347 + C5346) * C4647) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C28758 * C583 -
          ((C90 * C636 + C76 * C720 + C88 * C637 + C75 * C721 + C86 * C638 +
            C74 * C722 + C84 * C639 + C73 * C723) *
               C28576 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C148) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C148 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C28576) *
               C8798 +
           ((C27436 * C961 + C28711 * C965 + C27426 * C960 + C28520 * C964) *
                C148 +
            (C27436 * C1011 + C28711 * C1095 + C27426 * C1010 +
             C28520 * C1094) *
                C28576) *
               C8799 +
           ((C27436 * C4012 + C28711 * C4015 + C27426 * C4011 +
             C28520 * C4014) *
                C148 +
            (C27436 * C4089 + C28711 * C4213 + C27426 * C4088 +
             C28520 * C4212) *
                C28576) *
               C8800) *
              C28758 * C583 -
          (((C27426 * C9389 + C28520 * C9493 + C27436 * C8315 +
             C28711 * C8441) *
                C28576 +
            (C27426 * C9334 + C28520 * C9335 + C27436 * C8251 +
             C28711 * C8253) *
                C148) *
               C8800 +
           ((C27426 * C2554 + C28520 * C2666 + C27436 * C2555 +
             C28711 * C2667) *
                C28576 +
            (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 +
             C28711 * C2493) *
                C148) *
               C8799 +
           ((C5349 + C5348) * C28576 + (C5347 + C5346) * C148) * C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (-std::pow(Pi, 2.5) *
         (((C4824 * C91 + C4828 + C4828 + C4578 * C314 + C4825 * C589 + C4829 +
            C4829 + C4579 * C761 + C4826 * C1927 + C4830 + C4830 +
            C4580 * C2199) *
               C28711 +
           (C4849 + C4850 + C4851) * C28520) *
              C28602 * C28758 * C583 -
          ((C4826 * C5127 + C5406 + C5406 + C4580 * C5403 + C4825 * C1926 +
            C5407 + C5407 + C4579 * C2198 + C4824 * C588 + C5408 + C5408 +
            C4578 * C760) *
               C28520 +
           (C4826 * C5128 + C5409 + C5409 + C4580 * C5404 + C4825 * C1927 +
            C5410 + C5410 + C4579 * C2199 + C4824 * C589 + C5411 + C5411 +
            C4578 * C761) *
               C28711) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 + C337 * C74 +
           C338 * C75 + C339 * C76) *
              C28602 * C28758 * C583 -
          ((C313 * C586 + C763 + C763 + C28576 * C758) * C76 +
           (C313 * C587 + C764 + C764 + C28576 * C759) * C75 +
           (C313 * C588 + C765 + C765 + C28576 * C760) * C74 +
           (C313 * C589 + C766 + C766 + C28576 * C761) * C73) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28711 +
            C337 * C28520) *
               C8798 +
           (C4295 * C28711 + C3244 * C28520) * C8799 +
           ((C313 * C4012 + C4292 + C4292 + C28576 * C4284) * C28711 +
            C9039 * C28520) *
               C8800) *
              C28758 * C583 -
          (((C313 * C9334 + C9546 + C9546 + C28576 * C9544) * C28520 +
            (C313 * C8251 + C9547 + C9547 + C28576 * C8505) * C28711) *
               C8800 +
           ((C313 * C2489 + C3753 + C3753 + C28576 * C2719) * C28520 +
            (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C28711) *
               C8799 +
           ((C313 * C588 + C765 + C765 + C28576 * C760) * C28520 +
            (C313 * C589 + C766 + C766 + C28576 * C761) * C28711) *
               C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + C5274 * C4649 + C5466 * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C28758 * C583 -
          (((C211 * C5205 + C28602 * C5461) * C4580 +
            (C211 * C5127 + C28602 * C5259) * C4649 + C4909 * C4579 +
            C4723 * C4648 + C1696 * C4578 + C1502 * C4647) *
               C28520 +
           ((C211 * C5206 + C28602 * C5462) * C4580 +
            (C211 * C5128 + C28602 * C5260) * C4649 + C5466 * C4579 +
            C5274 * C4648 + C2262 * C4578 + C2073 * C4647) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28758 * C583 -
          (((C211 * C636 + C28602 * C800) * C28576 +
            (C211 * C586 + C28602 * C678) * C148) *
               C76 +
           ((C211 * C637 + C28602 * C801) * C28576 +
            (C211 * C587 + C28602 * C679) * C148) *
               C75 +
           ((C211 * C638 + C28602 * C802) * C28576 +
            (C211 * C588 + C28602 * C680) * C148) *
               C74 +
           ((C211 * C639 + C28602 * C803) * C28576 +
            (C211 * C589 + C28602 * C681) * C148) *
               C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
             C8915 * C4012 + C8800 * C4157) *
                C148 +
            (C8913 * C149 + C8798 * C373 + C8914 * C1011 + C8799 * C1175 +
             C8915 * C4089 + C8800 * C4348) *
                C28576) *
               C28711 +
           ((C8929 + C8930 + C8931) * C148 + (C9096 + C9097 + C9098) * C28576) *
               C28520) *
              C28758 * C583 -
          (((C8915 * C9389 + C8800 * C9597 + C8914 * C2554 + C8799 * C2778 +
             C8913 * C638 + C8798 * C802) *
                C28576 +
            (C8915 * C9334 + C8800 * C9441 + C8914 * C2489 + C8799 * C2610 +
             C8913 * C588 + C8798 * C680) *
                C148) *
               C28520 +
           ((C8915 * C8315 + C8800 * C8575 + C8914 * C2555 + C8799 * C2779 +
             C8913 * C639 + C8798 * C803) *
                C28576 +
            (C8915 * C8251 + C8800 * C8387 + C8914 * C2490 + C8799 * C2611 +
             C8913 * C589 + C8798 * C681) *
                C148) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C5346 + C5347) * C211 + (C5527 + C5528) * C28602) * C4579 +
           ((C5350 + C5351) * C211 + (C5529 + C5530) * C28602) * C4580) *
              C28758 * C583 -
          (((C27426 * C5259 + C28520 * C5516 + C27436 * C5260 +
             C28711 * C5517) *
                C28602 +
            (C27426 * C5127 + C28520 * C5129 + C27436 * C5128 +
             C28711 * C5130) *
                C211) *
               C4580 +
           ((C5530 + C5529) * C28602 + (C5351 + C5350) * C211) * C4579 +
           ((C5528 + C5527) * C28602 + (C5347 + C5346) * C211) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C28758 * C583 -
          ((C90 * C678 + C76 * C838 + C88 * C679 + C75 * C839 + C86 * C680 +
            C74 * C840 + C84 * C681 + C73 * C841) *
               C28602 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C211) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C8913 +
           (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
               C8798 +
           (C27436 * C961 + C28711 * C965 + C27426 * C960 + C28520 * C964) *
               C8914 +
           (C27436 * C1053 + C28711 * C1213 + C27426 * C1052 + C28520 * C1212) *
               C8799 +
           (C27436 * C4012 + C28711 * C4015 + C27426 * C4011 + C28520 * C4014) *
               C8915 +
           (C27436 * C4157 + C28711 * C4401 + C27426 * C4156 + C28520 * C4400) *
               C8800) *
              C28576 * C28758 * C583 -
          ((C27426 * C9441 + C28520 * C9648 + C27436 * C8387 + C28711 * C8627) *
               C8800 +
           (C27426 * C9334 + C28520 * C9335 + C27436 * C8251 + C28711 * C8253) *
               C8915 +
           (C27426 * C2610 + C28520 * C2831 + C27436 * C2611 + C28711 * C2832) *
               C8799 +
           (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 + C28711 * C2493) *
               C8914 +
           (C5528 + C5527) * C8798 + (C5347 + C5346) * C8913) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C28758 * C583 -
          (((C4649 * C5259 + C4580 * C5580 + C4648 * C2059 + C4579 * C2375 +
             C4647 * C680 + C4578 * C878) *
                C28602 +
            (C4649 * C5127 + C4580 * C5205 + C4648 * C1926 + C4579 * C2003 +
             C4647 * C588 + C4578 * C638) *
                C211) *
               C28520 +
           ((C4649 * C5260 + C4580 * C5581 + C4648 * C2060 + C4579 * C2376 +
             C4647 * C681 + C4578 * C879) *
                C28602 +
            (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 + C4579 * C2004 +
             C4647 * C589 + C4578 * C639) *
                C211) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28758 * C583 -
          (((C148 * C678 + C28576 * C876) * C28602 +
            (C148 * C586 + C28576 * C636) * C211) *
               C76 +
           ((C148 * C679 + C28576 * C877) * C28602 +
            (C148 * C587 + C28576 * C637) * C211) *
               C75 +
           ((C148 * C680 + C28576 * C878) * C28602 +
            (C148 * C588 + C28576 * C638) * C211) *
               C74 +
           ((C148 * C681 + C28576 * C879) * C28602 +
            (C148 * C589 + C28576 * C639) * C211) *
               C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C8913 +
            (C148 * C212 + C28576 * C466) * C8798 + C4102 * C8914 +
            C4467 * C8799 + (C148 * C4012 + C28576 * C4089) * C8915 +
            (C148 * C4157 + C28576 * C4463) * C8800) *
               C28711 +
           (C9199 + C9200 + C9201 + C9202 + C9203 + C9207) * C28520) *
              C28758 * C583 -
          (((C148 * C9441 + C28576 * C9699) * C8800 +
            (C148 * C9334 + C28576 * C9389) * C8915 +
            (C148 * C2610 + C28576 * C2884) * C8799 +
            (C148 * C2489 + C28576 * C2554) * C8914 +
            (C148 * C680 + C28576 * C878) * C8798 +
            (C148 * C588 + C28576 * C638) * C8913) *
               C28520 +
           ((C148 * C8387 + C28576 * C8682) * C8800 +
            (C148 * C8251 + C28576 * C8315) * C8915 +
            (C148 * C2611 + C28576 * C2885) * C8799 +
            (C148 * C2490 + C28576 * C2555) * C8914 +
            (C148 * C681 + C28576 * C879) * C8798 +
            (C148 * C589 + C28576 * C639) * C8913) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (-std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            C5641 * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C28758 * C583 -
          (((C520 * C5127 + C5637 + C5637 + C28602 * C5632) * C4580 +
            C5076 * C4579 + C1872 * C4578) *
               C28520 +
           ((C520 * C5128 + C5638 + C5638 + C28602 * C5633) * C4580 +
            C5641 * C4579 + C2438 * C4578) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28758 * C583 -
          ((C520 * C586 + C919 + C919 + C28602 * C914) * C28576 * C76 +
           (C520 * C587 + C920 + C920 + C28602 * C915) * C28576 * C75 +
           (C520 * C588 + C921 + C921 + C28602 * C916) * C28576 * C74 +
           (C520 * C589 + C922 + C922 + C28602 * C917) * C28576 * C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9257 * C91 + C9261 + C9261 + C8798 * C521 + C9258 * C961 + C9262 +
            C9262 + C8799 * C1289 + C9259 * C4012 + C9263 + C9263 +
            C8800 * C4519) *
               C28576 * C28711 +
           (C9282 + C9283 + C9284) * C28576 * C28520) *
              C28758 * C583 -
          ((C9259 * C9334 + C9752 + C9752 + C8800 * C9750 + C9258 * C2489 +
            C9753 + C9753 + C8799 * C2937 + C9257 * C588 + C9754 + C9754 +
            C8798 * C916) *
               C28576 * C28520 +
           (C9259 * C8251 + C9755 + C9755 + C8800 * C8743 + C9258 * C2490 +
            C9756 + C9756 + C8799 * C2938 + C9257 * C589 + C9757 + C9757 +
            C8798 * C917) *
               C28576 * C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] += (-std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C5152 + C5153) * C28602 * C4579 +
                     (C5154 + C5155) * C28602 * C4580) *
                        C956 -
                    ((C4583 * C5691 + C5698 + C5698 + C28520 * C5695 +
                      C4581 * C5692 + C5699 + C5699 + C28711 * C5696) *
                         C28602 * C4580 +
                     (C4583 * C2489 + C5700 + C5700 + C28520 * C2495 +
                      C4581 * C2490 + C5701 + C5701 + C28711 * C2496) *
                         C28602 * C4579 +
                     (C4583 * C960 + C5702 + C5702 + C28520 * C968 +
                      C4581 * C961 + C5703 + C5703 + C28711 * C969) *
                         C28602 * C4578) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C956 -
                    (C89 * C958 + C971 + C971 + C76 * C966 + C87 * C959 + C972 +
                     C972 + C75 * C967 + C85 * C960 + C973 + C973 + C74 * C968 +
                     C83 * C961 + C974 + C974 + C73 * C969) *
                        C28602 * C28576 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C8798 +
                     (C9832 + C9833) * C8799 + (C9834 + C9835) * C8800) *
                        C28576 * C956 -
                    ((C4583 * C9807 + C9822 + C9822 + C28520 * C9811 +
                      C4581 * C9808 + C9823 + C9823 + C28711 * C9812) *
                         C8800 +
                     (C9835 + C9834) * C8799 + (C9833 + C9832) * C8798) *
                        C28576 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (-std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C27436 +
           (C4647 * C96 + C4578 * C154 + C4648 * C593 + C4579 * C643 +
            C4649 * C1930 + C4580 * C2007) *
               C28711 +
           (C4663 + C4664 + C4665) * C27426 +
           (C4666 + C4667 + C4668) * C28520) *
              C28602 * C956 -
          ((C4649 * C5693 + C4580 * C5755 + C4648 * C2492 + C4579 * C2557 +
            C4647 * C964 + C4578 * C1014) *
               C28520 +
           (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
            C4647 * C960 + C4578 * C1010) *
               C27426 +
           (C4649 * C5694 + C4580 * C5756 + C4648 * C2493 + C4579 * C2558 +
            C4647 * C965 + C4578 * C1015) *
               C28711 +
           (C4649 * C5692 + C4580 * C5754 + C4648 * C2490 + C4579 * C2555 +
            C4647 * C961 + C4578 * C1011) *
               C27436) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C956 -
          ((C148 * C962 + C28576 * C1012) * C76 +
           (C148 * C958 + C28576 * C1008) * C90 +
           (C148 * C963 + C28576 * C1013) * C75 +
           (C148 * C959 + C28576 * C1009) * C88 +
           (C148 * C964 + C28576 * C1014) * C74 +
           (C148 * C960 + C28576 * C1010) * C86 +
           (C148 * C965 + C28576 * C1015) * C73 +
           (C148 * C961 + C28576 * C1011) * C84) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C27436 +
            (C148 * C96 + C28576 * C154) * C28711 + C172 * C27426 +
            C173 * C28520) *
               C8798 +
           (C9890 + C9891 + C9892 + C9893) * C8799 +
           (C9902 + C9903 + C9898 + C9899) * C8800) *
              C956 -
          (((C148 * C9809 + C28576 * C9887) * C28520 +
            (C148 * C9807 + C28576 * C9885) * C27426 +
            (C148 * C9810 + C28576 * C9888) * C28711 +
            (C148 * C9808 + C28576 * C9886) * C27436) *
               C8800 +
           (C9899 + C9898 + C9903 + C9902) * C8799 +
           (C9893 + C9892 + C9891 + C9890) * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C5264 + C5265 + C5266 + C5267) * C4579 +
           (C5276 + C5277 + C5272 + C5273) * C4580) *
              C956 -
          (((C211 * C5693 + C28602 * C5809) * C28520 +
            (C211 * C5691 + C28602 * C5807) * C27426 +
            (C211 * C5694 + C28602 * C5810) * C28711 +
            (C211 * C5692 + C28602 * C5808) * C27436) *
               C4580 +
           ((C211 * C2492 + C28602 * C2613) * C28520 +
            (C211 * C2489 + C28602 * C2610) * C27426 +
            (C211 * C2493 + C28602 * C2614) * C28711 +
            (C211 * C2490 + C28602 * C2611) * C27436) *
               C4579 +
           ((C211 * C964 + C28602 * C1056) * C28520 +
            (C211 * C960 + C28602 * C1052) * C27426 +
            (C211 * C965 + C28602 * C1057) * C28711 +
            (C211 * C961 + C28602 * C1053) * C27436) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C956 -
          ((C211 * C962 + C28602 * C1054) * C76 +
           (C211 * C958 + C28602 * C1050) * C90 +
           (C211 * C963 + C28602 * C1055) * C75 +
           (C211 * C959 + C28602 * C1051) * C88 +
           (C211 * C964 + C28602 * C1056) * C74 +
           (C211 * C960 + C28602 * C1052) * C86 +
           (C211 * C965 + C28602 * C1057) * C73 +
           (C211 * C961 + C28602 * C1053) * C84) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
            C8915 * C4012 + C8800 * C4157) *
               C27436 +
           (C8913 * C96 + C8798 * C217 + C8914 * C965 + C8799 * C1057 +
            C8915 * C4015 + C8800 * C4160) *
               C28711 +
           (C8929 + C8930 + C8931) * C27426 +
           (C8932 + C8933 + C8934) * C28520) *
              C28576 * C956 -
          ((C8915 * C9809 + C8800 * C9955 + C8914 * C4014 + C8799 * C4159 +
            C8913 * C964 + C8798 * C1056) *
               C28520 +
           (C8915 * C9807 + C8800 * C9953 + C8914 * C4011 + C8799 * C4156 +
            C8913 * C960 + C8798 * C1052) *
               C27426 +
           (C8915 * C9810 + C8800 * C9956 + C8914 * C4015 + C8799 * C4160 +
            C8913 * C965 + C8798 * C1057) *
               C28711 +
           (C8915 * C9808 + C8800 * C9954 + C8914 * C4012 + C8799 * C4157 +
            C8913 * C961 + C8798 * C1053) *
               C27436) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (-std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C5346 + C5347) * C4648 + (C5348 + C5349) * C4579 +
           (C5350 + C5351) * C4649 + (C5352 + C5353) * C4580) *
              C28602 * C956 -
          ((C27426 * C5753 + C28520 * C5861 + C27436 * C5754 + C28711 * C5862) *
               C4580 +
           (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 + C28711 * C5694) *
               C4649 +
           (C27426 * C2554 + C28520 * C2666 + C27436 * C2555 + C28711 * C2667) *
               C4579 +
           (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 + C28711 * C2493) *
               C4648 +
           (C27426 * C1010 + C28520 * C1094 + C27436 * C1011 + C28711 * C1095) *
               C4578 +
           (C27426 * C960 + C28520 * C964 + C27436 * C961 + C28711 * C965) *
               C4647) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C956 -
          ((C90 * C1008 + C76 * C1092 + C88 * C1009 + C75 * C1093 +
            C86 * C1010 + C74 * C1094 + C84 * C1011 + C73 * C1095) *
               C28576 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C148) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C148 +
            (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
                C28576) *
               C8798 +
           ((C10026 + C10027) * C148 + (C10028 + C10029) * C28576) * C8799 +
           ((C10030 + C10031) * C148 + (C10032 + C10033) * C28576) * C8800) *
              C956 -
          (((C27426 * C9885 + C28520 * C10007 + C27436 * C9886 +
             C28711 * C10008) *
                C28576 +
            (C27426 * C9807 + C28520 * C9809 + C27436 * C9808 +
             C28711 * C9810) *
                C148) *
               C8800 +
           ((C10033 + C10032) * C28576 + (C10031 + C10030) * C148) * C8799 +
           ((C10029 + C10028) * C28576 + (C10027 + C10026) * C148) * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] +=
        (-std::pow(Pi, 2.5) *
         (((C4824 * C91 + C4828 + C4828 + C4578 * C314 + C4825 * C589 + C4829 +
            C4829 + C4579 * C761 + C4826 * C1927 + C4830 + C4830 +
            C4580 * C2199) *
               C28711 +
           (C4849 + C4850 + C4851) * C28520) *
              C28602 * C956 -
          ((C4826 * C5691 + C5916 + C5916 + C4580 * C5913 + C4825 * C2489 +
            C5917 + C5917 + C4579 * C2719 + C4824 * C960 + C5918 + C5918 +
            C4578 * C1132) *
               C28520 +
           (C4826 * C5692 + C5919 + C5919 + C4580 * C5914 + C4825 * C2490 +
            C5920 + C5920 + C4579 * C2720 + C4824 * C961 + C5921 + C5921 +
            C4578 * C1133) *
               C28711) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 + C337 * C74 +
           C338 * C75 + C339 * C76) *
              C28602 * C956 -
          ((C313 * C958 + C1135 + C1135 + C28576 * C1130) * C76 +
           (C313 * C959 + C1136 + C1136 + C28576 * C1131) * C75 +
           (C313 * C960 + C1137 + C1137 + C28576 * C1132) * C74 +
           (C313 * C961 + C1138 + C1138 + C28576 * C1133) * C73) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28711 +
            C337 * C28520) *
               C8798 +
           (C10086 + C10087) * C8799 + (C10096 + C10090) * C8800) *
              C956 -
          (((C313 * C9807 + C10091 + C10091 + C28576 * C10083) * C28520 +
            (C313 * C9808 + C10092 + C10092 + C28576 * C10084) * C28711) *
               C8800 +
           (C10090 + C10096) * C8799 + (C10087 + C10086) * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + C5274 * C4649 + C5466 * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C956 -
          (((C211 * C5753 + C28602 * C5971) * C4580 +
            (C211 * C5691 + C28602 * C5807) * C4649 +
            (C211 * C2554 + C28602 * C2778) * C4579 +
            (C211 * C2489 + C28602 * C2610) * C4648 +
            (C211 * C1010 + C28602 * C1174) * C4578 +
            (C211 * C960 + C28602 * C1052) * C4647) *
               C28520 +
           ((C211 * C5754 + C28602 * C5972) * C4580 +
            (C211 * C5692 + C28602 * C5808) * C4649 +
            (C211 * C2555 + C28602 * C2779) * C4579 +
            (C211 * C2490 + C28602 * C2611) * C4648 +
            (C211 * C1011 + C28602 * C1175) * C4578 +
            (C211 * C961 + C28602 * C1053) * C4647) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C956 -
          (((C211 * C1008 + C28602 * C1172) * C28576 +
            (C211 * C958 + C28602 * C1050) * C148) *
               C76 +
           ((C211 * C1009 + C28602 * C1173) * C28576 +
            (C211 * C959 + C28602 * C1051) * C148) *
               C75 +
           ((C211 * C1010 + C28602 * C1174) * C28576 +
            (C211 * C960 + C28602 * C1052) * C148) *
               C74 +
           ((C211 * C1011 + C28602 * C1175) * C28576 +
            (C211 * C961 + C28602 * C1053) * C148) *
               C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
             C8915 * C4012 + C8800 * C4157) *
                C148 +
            (C8913 * C149 + C8798 * C373 + C8914 * C1011 + C8799 * C1175 +
             C8915 * C4089 + C8800 * C4348) *
                C28576) *
               C28711 +
           ((C8929 + C8930 + C8931) * C148 + (C9096 + C9097 + C9098) * C28576) *
               C28520) *
              C956 -
          (((C8915 * C9885 + C8800 * C10146 + C8914 * C4088 + C8799 * C4347 +
             C8913 * C1010 + C8798 * C1174) *
                C28576 +
            (C8915 * C9807 + C8800 * C9953 + C8914 * C4011 + C8799 * C4156 +
             C8913 * C960 + C8798 * C1052) *
                C148) *
               C28520 +
           ((C8915 * C9886 + C8800 * C10147 + C8914 * C4089 + C8799 * C4348 +
             C8913 * C1011 + C8798 * C1175) *
                C28576 +
            (C8915 * C9808 + C8800 * C9954 + C8914 * C4012 + C8799 * C4157 +
             C8913 * C961 + C8798 * C1053) *
                C148) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C5346 + C5347) * C211 + (C5527 + C5528) * C28602) * C4579 +
           ((C5350 + C5351) * C211 + (C5529 + C5530) * C28602) * C4580) *
              C956 -
          (((C27426 * C5807 + C28520 * C6023 + C27436 * C5808 +
             C28711 * C6024) *
                C28602 +
            (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 +
             C28711 * C5694) *
                C211) *
               C4580 +
           ((C27426 * C2610 + C28520 * C2831 + C27436 * C2611 +
             C28711 * C2832) *
                C28602 +
            (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 +
             C28711 * C2493) *
                C211) *
               C4579 +
           ((C27426 * C1052 + C28520 * C1212 + C27436 * C1053 +
             C28711 * C1213) *
                C28602 +
            (C27426 * C960 + C28520 * C964 + C27436 * C961 + C28711 * C965) *
                C211) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C956 -
          ((C90 * C1050 + C76 * C1210 + C88 * C1051 + C75 * C1211 +
            C86 * C1052 + C74 * C1212 + C84 * C1053 + C73 * C1213) *
               C28602 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C211) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C8913 +
           (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
               C8798 +
           (C10026 + C10027) * C8914 + (C10209 + C10210) * C8799 +
           (C10030 + C10031) * C8915 + (C10211 + C10212) * C8800) *
              C28576 * C956 -
          ((C27426 * C9953 + C28520 * C10198 + C27436 * C9954 +
            C28711 * C10199) *
               C8800 +
           (C27426 * C9807 + C28520 * C9809 + C27436 * C9808 + C28711 * C9810) *
               C8915 +
           (C10212 + C10211) * C8799 + (C10031 + C10030) * C8914 +
           (C10210 + C10209) * C8798 + (C10027 + C10026) * C8913) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C956 -
          (((C4649 * C5807 + C4580 * C6075 + C4648 * C2610 + C4579 * C2884 +
             C4647 * C1052 + C4578 * C1250) *
                C28602 +
            (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
             C4647 * C960 + C4578 * C1010) *
                C211) *
               C28520 +
           ((C4649 * C5808 + C4580 * C6076 + C4648 * C2611 + C4579 * C2885 +
             C4647 * C1053 + C4578 * C1251) *
                C28602 +
            (C4649 * C5692 + C4580 * C5754 + C4648 * C2490 + C4579 * C2555 +
             C4647 * C961 + C4578 * C1011) *
                C211) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C956 -
          (((C148 * C1050 + C28576 * C1248) * C28602 +
            (C148 * C958 + C28576 * C1008) * C211) *
               C76 +
           ((C148 * C1051 + C28576 * C1249) * C28602 +
            (C148 * C959 + C28576 * C1009) * C211) *
               C75 +
           ((C148 * C1052 + C28576 * C1250) * C28602 +
            (C148 * C960 + C28576 * C1010) * C211) *
               C74 +
           ((C148 * C1053 + C28576 * C1251) * C28602 +
            (C148 * C961 + C28576 * C1011) * C211) *
               C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C8913 +
            (C148 * C212 + C28576 * C466) * C8798 + C4102 * C8914 +
            C4467 * C8799 + C9900 * C8915 + C10267 * C8800) *
               C28711 +
           (C9199 + C9200 + C9201 + C9202 + C9203 + C9207) * C28520) *
              C956 -
          (((C148 * C9953 + C28576 * C10262) * C8800 +
            (C148 * C9807 + C28576 * C9885) * C8915 + C9206 * C8799 +
            C8862 * C8914 + C3418 * C8798 + C3056 * C8913) *
               C28520 +
           ((C148 * C9954 + C28576 * C10263) * C8800 +
            (C148 * C9808 + C28576 * C9886) * C8915 + C10267 * C8799 +
            C9900 * C8914 + C4467 * C8798 + C4102 * C8913) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (-std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            C5641 * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C956 -
          (((C520 * C5691 + C6130 + C6130 + C28602 * C6127) * C4580 +
            (C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C4579 +
            (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C4578) *
               C28520 +
           ((C520 * C5692 + C6131 + C6131 + C28602 * C6128) * C4580 +
            (C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C4579 +
            (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C4578) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C956 -
          ((C520 * C958 + C1291 + C1291 + C28602 * C1286) * C28576 * C76 +
           (C520 * C959 + C1292 + C1292 + C28602 * C1287) * C28576 * C75 +
           (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C28576 * C74 +
           (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C28576 * C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9257 * C91 + C9261 + C9261 + C8798 * C521 + C9258 * C961 + C9262 +
            C9262 + C8799 * C1289 + C9259 * C4012 + C9263 + C9263 +
            C8800 * C4519) *
               C28576 * C28711 +
           (C9282 + C9283 + C9284) * C28576 * C28520) *
              C956 -
          ((C9259 * C9807 + C10320 + C10320 + C8800 * C10317 + C9258 * C4011 +
            C10321 + C10321 + C8799 * C4518 + C9257 * C960 + C10322 + C10322 +
            C8798 * C1288) *
               C28576 * C28520 +
           (C9259 * C9808 + C10323 + C10323 + C8800 * C10318 + C9258 * C4012 +
            C10324 + C10324 + C8799 * C4519 + C9257 * C961 + C10325 + C10325 +
            C8798 * C1289) *
               C28576 * C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (-std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           (C6170 * C589 + C6174 + C6174 + C28515 * C597) * C28602 * C6167 +
           (C6170 * C1927 + C6175 + C6175 + C28515 * C1933) * C28602 * C6168 +
           (C6170 * C5128 + C6176 + C6176 + C28515 * C5132) * C28602 * C6169) *
              C28758 * C28759 * C81 -
          ((C6170 * C5127 + C6177 + C6177 + C28515 * C5131) * C28602 * C6169 +
           (C6170 * C1926 + C6178 + C6178 + C28515 * C1932) * C28602 * C6168 +
           (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C28602 * C6167 +
           (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C28602 * C6166) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1349 * C589 + C1359 + C1359 + C1344 * C597 + C1351 * C588 + C1360 +
            C1360 + C1345 * C596 + C1353 * C587 + C1361 + C1361 +
            C1346 * C595) *
               C28602 * C28590) *
              C28758 * C28759 * C81 -
          ((C1353 * C586 + C1362 + C1362 + C1346 * C594 + C1351 * C587 + C1363 +
            C1363 + C1345 * C595 + C1349 * C588 + C1364 + C1364 +
            C1344 * C596) *
               C28602 * C28590 +
           (C1353 * C94 + C1365 + C1365 + C1346 * C104 + C1351 * C93 + C1366 +
            C1366 + C1345 * C103 + C1349 * C92 + C1367 + C1367 + C1344 * C102) *
               C28602 * C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C8798 +
            C8264 * C8799 +
            (C6170 * C4012 + C8261 + C8261 + C28515 * C4018) * C8800) *
               C28724 +
           (C6519 * C8798 + C7710 * C8799 +
            (C6170 * C8251 + C8260 + C8260 + C28515 * C8255) * C8800) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C6170 * C9334 + C10376 + C10376 + C28515 * C9336) * C8800 +
            (C6170 * C2489 + C7244 + C7244 + C28515 * C2495) * C8799 +
            (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C8798) *
               C28590 +
           ((C6170 * C4011 + C10377 + C10377 + C28515 * C4017) * C8800 +
            (C6170 * C960 + C7245 + C7245 + C28515 * C968) * C8799 +
            (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C8798) *
               C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C28758 * C28759 * C81 -
          ((C6217 * C5129 + C6169 * C5207 + C6216 * C1929 + C6168 * C2006 +
            C6215 * C592 + C6167 * C642 + C6214 * C97 + C6166 * C155) *
               C28515 +
           (C6217 * C5127 + C6169 * C5205 + C6216 * C1926 + C6168 * C2003 +
            C6215 * C588 + C6167 * C638 + C6214 * C92 + C6166 * C150) *
               C6171) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C28758 * C28759 * C81 -
          ((C1418 * C590 + C28590 * C640 + C1417 * C99 + C28724 * C157) *
               C1346 +
           (C1418 * C586 + C28590 * C636 + C1417 * C94 + C28724 * C152) *
               C1354 +
           (C1443 + C1442) * C1345 + (C1441 + C1440) * C1352 +
           (C1439 + C1438) * C1344 + (C1437 + C1436) * C1350) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C6171 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C28515) *
               C8798 +
           ((C1417 * C961 + C28724 * C1011 + C1418 * C2490 + C28590 * C2555) *
                C6171 +
            (C1417 * C965 + C28724 * C1015 + C1418 * C2493 + C28590 * C2558) *
                C28515) *
               C8799 +
           ((C1417 * C4012 + C28724 * C4089 + C1418 * C8251 + C28590 * C8315) *
                C6171 +
            (C1417 * C4015 + C28724 * C4092 + C1418 * C8253 + C28590 * C8317) *
                C28515) *
               C8800) *
              C28758 * C28759 * C81 -
          (((C1418 * C9335 + C28590 * C9390 + C1417 * C4014 + C28724 * C4091) *
                C28515 +
            (C1418 * C9334 + C28590 * C9389 + C1417 * C4011 + C28724 * C4088) *
                C6171) *
               C8800 +
           ((C1418 * C2492 + C28590 * C2557 + C1417 * C964 + C28724 * C1014) *
                C28515 +
            (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
                C6171) *
               C8799 +
           ((C1439 + C1438) * C28515 + (C1437 + C1436) * C6171) * C8798) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (-std::pow(Pi, 2.5) * ((((C211 * C91 + C28602 * C212) * C6171 +
                                 (C211 * C96 + C28602 * C217) * C28515) *
                                    C6166 +
                                (C2073 * C6171 + C2074 * C28515) * C6167 +
                                (C5274 * C6171 + C5275 * C28515) * C6168 +
                                ((C211 * C5128 + C28602 * C5260) * C6171 +
                                 (C211 * C5130 + C28602 * C5262) * C28515) *
                                    C6169) *
                                   C28758 * C28759 * C81 -
                               (((C211 * C5129 + C28602 * C5261) * C28515 +
                                 (C211 * C5127 + C28602 * C5259) * C6171) *
                                    C6169 +
                                (C4724 * C28515 + C4723 * C6171) * C6168 +
                                (C1503 * C28515 + C1502 * C6171) * C6167 +
                                (C236 * C28515 + C235 * C6171) * C6166) *
                                   C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C1350 +
            (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 + C236 * C1345 +
            C237 * C1354 + C238 * C1346) *
               C28724 +
           ((C211 * C589 + C28602 * C681) * C1350 +
            (C211 * C593 + C28602 * C685) * C1344 + C1502 * C1352 +
            C1503 * C1345 + C1504 * C1354 + C1505 * C1346) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C211 * C590 + C28602 * C682) * C1346 +
            (C211 * C586 + C28602 * C678) * C1354 + C1505 * C1345 +
            C1504 * C1352 + C1503 * C1344 + C1502 * C1350) *
               C28590 +
           (C240 * C1346 + C239 * C1354 + C238 * C1345 + C237 * C1352 +
            C236 * C1344 + C235 * C1350) *
               C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
             C8915 * C4012 + C8800 * C4157) *
                C6171 +
            (C8913 * C96 + C8798 * C217 + C8914 * C965 + C8799 * C1057 +
             C8915 * C4015 + C8800 * C4160) *
                C28515) *
               C28724 +
           ((C8913 * C589 + C8798 * C681 + C8914 * C2490 + C8799 * C2611 +
             C8915 * C8251 + C8800 * C8387) *
                C6171 +
            (C8913 * C593 + C8798 * C685 + C8914 * C2493 + C8799 * C2614 +
             C8915 * C8253 + C8800 * C8389) *
                C28515) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C8915 * C9335 + C8800 * C9442 + C8914 * C2492 + C8799 * C2613 +
             C8913 * C592 + C8798 * C684) *
                C28515 +
            (C8915 * C9334 + C8800 * C9441 + C8914 * C2489 + C8799 * C2610 +
             C8913 * C588 + C8798 * C680) *
                C6171) *
               C28590 +
           ((C8934 + C8933 + C8932) * C28515 +
            (C8931 + C8930 + C8929) * C6171) *
               C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) * (((C6171 * C91 + C28515 * C96) * C6214 +
                                (C6171 * C149 + C28515 * C274) * C6166 +
                                (C6171 * C589 + C28515 * C593) * C6215 +
                                (C6171 * C639 + C28515 * C723) * C6167 +
                                (C6171 * C1927 + C28515 * C1930) * C6216 +
                                (C6171 * C2004 + C28515 * C2128) * C6168 +
                                (C6171 * C5128 + C28515 * C5130) * C6217 +
                                (C6171 * C5206 + C28515 * C5328) * C6169) *
                                   C28602 * C28758 * C28759 * C81 -
                               ((C6171 * C5205 + C28515 * C5327) * C6169 +
                                (C6171 * C5127 + C28515 * C5129) * C6217 +
                                (C6171 * C2003 + C28515 * C2127) * C6168 +
                                (C6171 * C1926 + C28515 * C1929) * C6216 +
                                (C6171 * C638 + C28515 * C722) * C6167 +
                                (C6171 * C588 + C28515 * C592) * C6215 +
                                (C6171 * C150 + C28515 * C275) * C6166 +
                                (C6171 * C92 + C28515 * C97) * C6214) *
                                   C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C1350 * C91 + C1344 * C96 + C1352 * C92 +
                                C1345 * C97 + C1354 * C93 + C1346 * C98) *
                                   C1417 +
                               (C1350 * C149 + C1344 * C274 + C1352 * C150 +
                                C1345 * C275 + C1354 * C151 + C1346 * C276) *
                                   C28724 +
                               (C1350 * C589 + C1344 * C593 + C1352 * C588 +
                                C1345 * C592 + C1354 * C587 + C1346 * C591) *
                                   C1418 +
                               (C1350 * C639 + C1344 * C723 + C1352 * C638 +
                                C1345 * C722 + C1354 * C637 + C1346 * C721) *
                                   C28590) *
                                  C28602 * C28758 * C28759 * C81 -
                              ((C1354 * C636 + C1346 * C720 + C1352 * C637 +
                                C1345 * C721 + C1350 * C638 + C1344 * C722) *
                                   C28590 +
                               (C1354 * C586 + C1346 * C590 + C1352 * C587 +
                                C1345 * C591 + C1350 * C588 + C1344 * C592) *
                                   C1418 +
                               (C1354 * C152 + C1346 * C277 + C1352 * C151 +
                                C1345 * C276 + C1350 * C150 + C1344 * C275) *
                                   C28724 +
                               (C1354 * C94 + C1346 * C99 + C1352 * C93 +
                                C1345 * C98 + C1350 * C92 + C1344 * C97) *
                                   C1417) *
                                  C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C1417 +
            (C6171 * C149 + C28515 * C274) * C28724 + C6656 * C1418 +
            C6657 * C28590) *
               C8798 +
           (C8451 * C1417 + C8452 * C28724 + C7896 * C1418 + C7897 * C28590) *
               C8799 +
           ((C6171 * C4012 + C28515 * C4015) * C1417 +
            (C6171 * C4089 + C28515 * C4213) * C28724 +
            (C6171 * C8251 + C28515 * C8253) * C1418 +
            (C6171 * C8315 + C28515 * C8441) * C28590) *
               C8800) *
              C28758 * C28759 * C81 -
          (((C6171 * C9389 + C28515 * C9493) * C28590 +
            (C6171 * C9334 + C28515 * C9335) * C1418 +
            (C6171 * C4088 + C28515 * C4212) * C28724 +
            (C6171 * C4011 + C28515 * C4014) * C1417) *
               C8800 +
           ((C6171 * C2554 + C28515 * C2666) * C28590 +
            (C6171 * C2489 + C28515 * C2492) * C1418 +
            (C6171 * C1010 + C28515 * C1094) * C28724 +
            (C6171 * C960 + C28515 * C964) * C1417) *
               C8799 +
           ((C6171 * C638 + C28515 * C722) * C28590 +
            (C6171 * C588 + C28515 * C592) * C1418 +
            (C6171 * C150 + C28515 * C275) * C28724 +
            (C6171 * C92 + C28515 * C97) * C1417) *
               C8798) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C28758 * C28759 * C81 -
          (C6323 * C5127 + C6329 + C6329 + C6169 * C5403 + C6322 * C1926 +
           C6330 + C6330 + C6168 * C2198 + C6321 * C588 + C6331 + C6331 +
           C6167 * C760 + C6320 * C92 + C6332 + C6332 + C6166 * C315) *
              C28515 * C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C28758 * C28759 * C81 -
          ((C1606 * C586 + C1622 + C1622 + C28590 * C758 + C1605 * C94 + C1623 +
            C1623 + C28724 * C317) *
               C1346 +
           (C1635 + C1634) * C1345 + (C1633 + C1632) * C1344) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C28515 * C8798 +
           (C1605 * C961 + C2727 + C2727 + C28724 * C1133 + C1606 * C2490 +
            C2726 + C2726 + C28590 * C2720) *
               C28515 * C8799 +
           (C1605 * C4012 + C10578 + C10578 + C28724 * C4284 + C1606 * C8251 +
            C10579 + C10579 + C28590 * C8505) *
               C28515 * C8800) *
              C28758 * C28759 * C81 -
          ((C1606 * C9334 + C10580 + C10580 + C28590 * C9544 + C1605 * C4011 +
            C10581 + C10581 + C28724 * C4283) *
               C28515 * C8800 +
           (C1606 * C2489 + C2724 + C2724 + C28590 * C2719 + C1605 * C960 +
            C2725 + C2725 + C28724 * C1132) *
               C28515 * C8799 +
           (C1633 + C1632) * C28515 * C8798) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (-std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C6214 +
           (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
           C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
           (C211 * C5128 + C28602 * C5260) * C6217 +
           (C211 * C5206 + C28602 * C5462) * C6169) *
              C28515 * C28758 * C28759 * C81 -
          ((C211 * C5205 + C28602 * C5461) * C6169 +
           (C211 * C5127 + C28602 * C5259) * C6217 + C4909 * C6168 +
           C4723 * C6216 + C1696 * C6167 + C1502 * C6215 + C388 * C6166 +
           C235 * C6214) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C211 * C91 + C28602 * C212) * C1417 +
                                (C211 * C149 + C28602 * C373) * C28724 +
                                (C211 * C589 + C28602 * C681) * C1418 +
                                (C211 * C639 + C28602 * C803) * C28590) *
                                   C1344 +
                               (C1686 + C1687 + C1688 + C1698) * C1345 +
                               (C1691 + C1692 + C1693 + C1699) * C1346) *
                                  C28758 * C28759 * C81 -
                              (((C211 * C636 + C28602 * C800) * C28590 +
                                (C211 * C586 + C28602 * C678) * C1418 +
                                C390 * C28724 + C239 * C1417) *
                                   C1346 +
                               (C1699 + C1693 + C1692 + C1691) * C1345 +
                               (C1698 + C1688 + C1687 + C1686) * C1344) *
                                  C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C8913 * C91 + C8798 * C212 + C8914 * C961 + C8799 * C1053 +
            C8915 * C4012 + C8800 * C4157) *
               C1417 +
           (C8913 * C149 + C8798 * C373 + C8914 * C1011 + C8799 * C1175 +
            C8915 * C4089 + C8800 * C4348) *
               C28724 +
           (C8913 * C589 + C8798 * C681 + C8914 * C2490 + C8799 * C2611 +
            C8915 * C8251 + C8800 * C8387) *
               C1418 +
           (C8913 * C639 + C8798 * C803 + C8914 * C2555 + C8799 * C2779 +
            C8915 * C8315 + C8800 * C8575) *
               C28590) *
              C28515 * C28758 * C28759 * C81 -
          ((C8915 * C9389 + C8800 * C9597 + C8914 * C2554 + C8799 * C2778 +
            C8913 * C638 + C8798 * C802) *
               C28590 +
           (C8915 * C9334 + C8800 * C9441 + C8914 * C2489 + C8799 * C2610 +
            C8913 * C588 + C8798 * C680) *
               C1418 +
           (C9098 + C9097 + C9096) * C28724 + (C8931 + C8930 + C8929) * C1417) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) * ((((C6171 * C91 + C28515 * C96) * C211 +
                                 (C6171 * C212 + C28515 * C427) * C28602) *
                                    C6166 +
                                ((C6171 * C589 + C28515 * C593) * C211 +
                                 (C6171 * C681 + C28515 * C841) * C28602) *
                                    C6167 +
                                ((C6171 * C1927 + C28515 * C1930) * C211 +
                                 (C6171 * C2060 + C28515 * C2314) * C28602) *
                                    C6168 +
                                ((C6171 * C5128 + C28515 * C5130) * C211 +
                                 (C6171 * C5260 + C28515 * C5517) * C28602) *
                                    C6169) *
                                   C28758 * C28759 * C81 -
                               (((C6171 * C5259 + C28515 * C5516) * C28602 +
                                 (C6171 * C5127 + C28515 * C5129) * C211) *
                                    C6169 +
                                ((C6171 * C2059 + C28515 * C2313) * C28602 +
                                 (C6171 * C1926 + C28515 * C1929) * C211) *
                                    C6168 +
                                ((C6171 * C680 + C28515 * C840) * C28602 +
                                 (C6171 * C588 + C28515 * C592) * C211) *
                                    C6167 +
                                ((C6171 * C213 + C28515 * C428) * C28602 +
                                 (C6171 * C92 + C28515 * C97) * C211) *
                                    C6166) *
                                   C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C1350 * C91 + C1344 * C96 + C1352 * C92 +
                                 C1345 * C97 + C1354 * C93 + C1346 * C98) *
                                    C211 +
                                (C1350 * C212 + C1344 * C427 + C1352 * C213 +
                                 C1345 * C428 + C1354 * C214 + C1346 * C429) *
                                    C28602) *
                                   C28724 +
                               ((C1350 * C589 + C1344 * C593 + C1352 * C588 +
                                 C1345 * C592 + C1354 * C587 + C1346 * C591) *
                                    C211 +
                                (C1350 * C681 + C1344 * C841 + C1352 * C680 +
                                 C1345 * C840 + C1354 * C679 + C1346 * C839) *
                                    C28602) *
                                   C28590) *
                                  C28758 * C28759 * C81 -
                              (((C1354 * C678 + C1346 * C838 + C1352 * C679 +
                                 C1345 * C839 + C1350 * C680 + C1344 * C840) *
                                    C28602 +
                                (C1354 * C586 + C1346 * C590 + C1352 * C587 +
                                 C1345 * C591 + C1350 * C588 + C1344 * C592) *
                                    C211) *
                                   C28590 +
                               ((C1354 * C215 + C1346 * C430 + C1352 * C214 +
                                 C1345 * C429 + C1350 * C213 + C1344 * C428) *
                                    C28602 +
                                (C1354 * C94 + C1346 * C99 + C1352 * C93 +
                                 C1345 * C98 + C1350 * C92 + C1344 * C97) *
                                    C211) *
                                   C28724) *
                                  C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C8913 +
            (C6171 * C212 + C28515 * C427) * C8798 + C8451 * C8914 +
            C8631 * C8799 + (C6171 * C4012 + C28515 * C4015) * C8915 +
            (C6171 * C4157 + C28515 * C4401) * C8800) *
               C28724 +
           (C6656 * C8913 + C6783 * C8798 + C7896 * C8914 + C8075 * C8799 +
            (C6171 * C8251 + C28515 * C8253) * C8915 +
            (C6171 * C8387 + C28515 * C8627) * C8800) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C6171 * C9441 + C28515 * C9648) * C8800 +
            (C6171 * C9334 + C28515 * C9335) * C8915 +
            (C6171 * C2610 + C28515 * C2831) * C8799 +
            (C6171 * C2489 + C28515 * C2492) * C8914 +
            (C6171 * C680 + C28515 * C840) * C8798 +
            (C6171 * C588 + C28515 * C592) * C8913) *
               C28590 +
           ((C6171 * C4156 + C28515 * C4400) * C8800 +
            (C6171 * C4011 + C28515 * C4014) * C8915 +
            (C6171 * C1052 + C28515 * C1212) * C8799 +
            (C6171 * C960 + C28515 * C964) * C8914 +
            (C6171 * C213 + C28515 * C428) * C8798 +
            (C6171 * C92 + C28515 * C97) * C8913) *
               C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C28758 * C28759 * C81 -
          ((C6217 * C5259 + C6169 * C5580 + C6216 * C2059 + C6168 * C2375 +
            C6215 * C680 + C6167 * C878 + C6214 * C213 + C6166 * C467) *
               C28602 +
           (C6217 * C5127 + C6169 * C5205 + C6216 * C1926 + C6168 * C2003 +
            C6215 * C588 + C6167 * C638 + C6214 * C92 + C6166 * C150) *
               C211) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C28758 * C28759 * C81 -
          (((C1418 * C678 + C28590 * C876 + C1417 * C215 + C28724 * C469) *
                C28602 +
            (C1418 * C586 + C28590 * C636 + C1417 * C94 + C28724 * C152) *
                C211) *
               C1346 +
           ((C1811 + C1810) * C28602 + (C1441 + C1440) * C211) * C1345 +
           ((C1809 + C1808) * C28602 + (C1437 + C1436) * C211) * C1344) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C8913 +
           (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
               C8798 +
           (C1417 * C961 + C28724 * C1011 + C1418 * C2490 + C28590 * C2555) *
               C8914 +
           (C1417 * C1053 + C28724 * C1251 + C1418 * C2611 + C28590 * C2885) *
               C8799 +
           (C1417 * C4012 + C28724 * C4089 + C1418 * C8251 + C28590 * C8315) *
               C8915 +
           (C1417 * C4157 + C28724 * C4463 + C1418 * C8387 + C28590 * C8682) *
               C8800) *
              C28515 * C28758 * C28759 * C81 -
          ((C1418 * C9441 + C28590 * C9699 + C1417 * C4156 + C28724 * C4462) *
               C8800 +
           (C1418 * C9334 + C28590 * C9389 + C1417 * C4011 + C28724 * C4088) *
               C8915 +
           (C1418 * C2610 + C28590 * C2884 + C1417 * C1052 + C28724 * C1250) *
               C8799 +
           (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
               C8914 +
           (C1809 + C1808) * C8798 + (C1437 + C1436) * C8913) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] += (-std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 +
                     (C520 * C5128 + C5638 + C5638 + C28602 * C5633) * C6169) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C520 * C5127 + C5637 + C5637 + C28602 * C5632) * C6169 +
                     C5076 * C6168 + C1872 * C6167 + C544 * C6166) *
                        C28515 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      (C520 * C589 + C922 + C922 + C28602 * C917) * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C28758 * C28759 * C81 -
                    (((C520 * C586 + C919 + C919 + C28602 * C914) * C28590 +
                      C546 * C28724) *
                         C1346 +
                     (C1875 + C1865) * C1345 + (C1874 + C1862) * C1344) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C9257 * C91 + C9261 + C9261 + C8798 * C521 +
                      C9258 * C961 + C9262 + C9262 + C8799 * C1289 +
                      C9259 * C4012 + C9263 + C9263 + C8800 * C4519) *
                         C28724 +
                     (C9257 * C589 + C9757 + C9757 + C8798 * C917 +
                      C9258 * C2490 + C9756 + C9756 + C8799 * C2938 +
                      C9259 * C8251 + C9755 + C9755 + C8800 * C8743) *
                         C28590) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C9259 * C9334 + C9752 + C9752 + C8800 * C9750 +
                      C9258 * C2489 + C9753 + C9753 + C8799 * C2937 +
                      C9257 * C588 + C9754 + C9754 + C8798 * C916) *
                         C28590 +
                     (C9284 + C9283 + C9282) * C28724) *
                        C28515 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           C6522 * C6167 + C6523 * C6168 + C6524 * C6169) *
              C28758 * C583 -
          ((C6170 * C6502 + C6512 + C6512 + C28515 * C6504) * C28602 * C6169 +
           C6524 * C6168 + C6523 * C6167 + C6522 * C6166) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1950 + C1951 + C1952) * C28602 * C28590) *
              C28758 * C583 -
          ((C1353 * C1925 + C1941 + C1941 + C1346 * C1931 + C1351 * C1926 +
            C1942 + C1942 + C1345 * C1932 + C1349 * C1927 + C1943 + C1943 +
            C1344 * C1933) *
               C28602 * C28590 +
           (C1952 + C1951 + C1950) * C28602 * C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C8798 +
            C8264 * C8799 +
            (C6170 * C4012 + C8261 + C8261 + C28515 * C4018) * C8800) *
               C28724 +
           (C10832 + C10833 + C10839) * C28590) *
              C28758 * C583 -
          (((C6170 * C8250 + C8259 + C8259 + C28515 * C8254) * C8800 +
            C7711 * C8799 + C6520 * C8798) *
               C28590 +
           (C10839 + C10833 + C10832) * C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C28758 * C583 -
          ((C6217 * C6503 + C6169 * C6559 + C6216 * C5130 + C6168 * C5208 +
            C6215 * C1930 + C6167 * C2007 + C6214 * C593 + C6166 * C643) *
               C28515 +
           (C6217 * C6502 + C6169 * C6558 + C6216 * C5128 + C6168 * C5206 +
            C6215 * C1927 + C6167 * C2004 + C6214 * C589 + C6166 * C639) *
               C6171) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C28758 * C583 -
          ((C1418 * C1928 + C28590 * C2005 + C1417 * C591 + C28724 * C641) *
               C1346 +
           (C1418 * C1925 + C28590 * C2002 + C1417 * C587 + C28724 * C637) *
               C1354 +
           (C1418 * C1929 + C28590 * C2006 + C1417 * C592 + C28724 * C642) *
               C1345 +
           (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
               C1352 +
           (C1418 * C1930 + C28590 * C2007 + C1417 * C593 + C28724 * C643) *
               C1344 +
           (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
               C1350) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C6171 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C28515) *
               C8798 +
           ((C1417 * C961 + C28724 * C1011 + C1418 * C2490 + C28590 * C2555) *
                C6171 +
            (C1417 * C965 + C28724 * C1015 + C1418 * C2493 + C28590 * C2558) *
                C28515) *
               C8799 +
           ((C1417 * C4012 + C28724 * C4089 + C1418 * C8251 + C28590 * C8315) *
                C6171 +
            (C1417 * C4015 + C28724 * C4092 + C1418 * C8253 + C28590 * C8317) *
                C28515) *
               C8800) *
              C28758 * C583 -
          (((C1418 * C8252 + C28590 * C8316 + C1417 * C8253 + C28724 * C8317) *
                C28515 +
            (C1418 * C8250 + C28590 * C8314 + C1417 * C8251 + C28724 * C8315) *
                C6171) *
               C8800 +
           ((C1418 * C5694 + C28590 * C5756 + C1417 * C2493 + C28724 * C2558) *
                C28515 +
            (C1418 * C5692 + C28590 * C5754 + C1417 * C2490 + C28724 * C2555) *
                C6171) *
               C8799 +
           ((C1418 * C1930 + C28590 * C2007 + C1417 * C593 + C28724 * C643) *
                C28515 +
            (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
                C6171) *
               C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C6171 +
                      (C211 * C96 + C28602 * C217) * C28515) *
                         C6166 +
                     (C6597 + C6598) * C6167 + (C6599 + C6600) * C6168 +
                     (C6607 + C6608) * C6169) *
                        C28758 * C583 -
                    (((C211 * C6503 + C28602 * C6595) * C28515 +
                      (C211 * C6502 + C28602 * C6594) * C6171) *
                         C6169 +
                     (C6608 + C6607) * C6168 + (C6600 + C6599) * C6167 +
                     (C6598 + C6597) * C6166) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1350 +
                      (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 +
                      C236 * C1345 + C237 * C1354 + C238 * C1346) *
                         C28724 +
                     (C2075 + C2076 + C2069 + C2070 + C2071 + C2072) * C28590) *
                        C28758 * C583 -
                    (((C211 * C1928 + C28602 * C2061) * C1346 +
                      (C211 * C1925 + C28602 * C2058) * C1354 +
                      (C211 * C1929 + C28602 * C2062) * C1345 +
                      (C211 * C1926 + C28602 * C2059) * C1352 +
                      (C211 * C1930 + C28602 * C2063) * C1344 +
                      (C211 * C1927 + C28602 * C2060) * C1350) *
                         C28590 +
                     (C2072 + C2071 + C2070 + C2069 + C2076 + C2075) * C28724) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8913 * C91 + C8798 * C212 + C8914 * C961 +
                       C8799 * C1053 + C8915 * C4012 + C8800 * C4157) *
                          C6171 +
                      (C8913 * C96 + C8798 * C217 + C8914 * C965 +
                       C8799 * C1057 + C8915 * C4015 + C8800 * C4160) *
                          C28515) *
                         C28724 +
                     ((C10952 + C10953 + C10954) * C6171 +
                      (C10955 + C10956 + C10957) * C28515) *
                         C28590) *
                        C28758 * C583 -
                    (((C8915 * C8252 + C8800 * C8388 + C8914 * C5694 +
                       C8799 * C5810 + C8913 * C1930 + C8798 * C2063) *
                          C28515 +
                      (C8915 * C8250 + C8800 * C8386 + C8914 * C5692 +
                       C8799 * C5808 + C8913 * C1927 + C8798 * C2060) *
                          C6171) *
                         C28590 +
                     ((C10957 + C10956 + C10955) * C28515 +
                      (C10954 + C10953 + C10952) * C6171) *
                         C28724) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C6214 +
           (C6171 * C149 + C28515 * C274) * C6166 + C6656 * C6215 +
           C6657 * C6167 + C6658 * C6216 + C6659 * C6168 + C6660 * C6217 +
           C6661 * C6169) *
              C28602 * C28758 * C583 -
          ((C6171 * C6558 + C28515 * C6642) * C6169 +
           (C6171 * C6502 + C28515 * C6503) * C6217 + C6661 * C6168 +
           C6660 * C6216 + C6659 * C6167 + C6658 * C6215 + C6657 * C6166 +
           C6656 * C6214) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C1417 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
            C1354 * C151 + C1346 * C276) *
               C28724 +
           (C2142 + C2143 + C2144) * C1418 + (C2145 + C2146 + C2147) * C28590) *
              C28602 * C28758 * C583 -
          ((C1354 * C2002 + C1346 * C2126 + C1352 * C2003 + C1345 * C2127 +
            C1350 * C2004 + C1344 * C2128) *
               C28590 +
           (C1354 * C1925 + C1346 * C1928 + C1352 * C1926 + C1345 * C1929 +
            C1350 * C1927 + C1344 * C1930) *
               C1418 +
           (C2147 + C2146 + C2145) * C28724 + (C2144 + C2143 + C2142) * C1417) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C1417 +
            (C6171 * C149 + C28515 * C274) * C28724 + C6656 * C1418 +
            C6657 * C28590) *
               C8798 +
           (C8451 * C1417 + C8452 * C28724 + C7896 * C1418 + C7897 * C28590) *
               C8799 +
           ((C6171 * C4012 + C28515 * C4015) * C1417 +
            (C6171 * C4089 + C28515 * C4213) * C28724 + C11012 * C1418 +
            C11013 * C28590) *
               C8800) *
              C28758 * C583 -
          (((C6171 * C8314 + C28515 * C8440) * C28590 +
            (C6171 * C8250 + C28515 * C8252) * C1418 + C11013 * C28724 +
            C11012 * C1417) *
               C8800 +
           (C7899 * C28590 + C7898 * C1418 + C7897 * C28724 + C7896 * C1417) *
               C8799 +
           (C6659 * C28590 + C6658 * C1418 + C6657 * C28724 + C6656 * C1417) *
               C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C28758 * C583 -
          (C6323 * C6502 + C6697 + C6697 + C6169 * C6695 + C6322 * C5128 +
           C6698 + C6698 + C6168 * C5404 + C6321 * C1927 + C6699 + C6699 +
           C6167 * C2199 + C6320 * C589 + C6700 + C6700 + C6166 * C761) *
              C28515 * C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C28758 * C583 -
          ((C1606 * C1925 + C2201 + C2201 + C28590 * C2197 + C1605 * C587 +
            C2202 + C2202 + C28724 * C759) *
               C1346 +
           (C1606 * C1926 + C2203 + C2203 + C28590 * C2198 + C1605 * C588 +
            C2204 + C2204 + C28724 * C760) *
               C1345 +
           (C1606 * C1927 + C2205 + C2205 + C28590 * C2199 + C1605 * C589 +
            C2206 + C2206 + C28724 * C761) *
               C1344) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C28515 * C8798 +
           (C1605 * C961 + C2727 + C2727 + C28724 * C1133 + C1606 * C2490 +
            C2726 + C2726 + C28590 * C2720) *
               C28515 * C8799 +
           (C1605 * C4012 + C10578 + C10578 + C28724 * C4284 + C1606 * C8251 +
            C10579 + C10579 + C28590 * C8505) *
               C28515 * C8800) *
              C28758 * C583 -
          ((C1606 * C8250 + C11064 + C11064 + C28590 * C8504 + C1605 * C8251 +
            C11065 + C11065 + C28724 * C8505) *
               C28515 * C8800 +
           (C1606 * C5692 + C11066 + C11066 + C28590 * C5914 + C1605 * C2490 +
            C11067 + C11067 + C28724 * C2720) *
               C28515 * C8799 +
           (C1606 * C1927 + C2205 + C2205 + C28590 * C2199 + C1605 * C589 +
            C2206 + C2206 + C28724 * C761) *
               C28515 * C8798) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] += (-std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28602 * C212) * C6214 +
                     (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
                     C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
                     C6605 * C6217 + C6738 * C6169) *
                        C28515 * C28758 * C583 -
                    ((C211 * C6558 + C28602 * C6734) * C6169 +
                     (C211 * C6502 + C28602 * C6594) * C6217 + C6738 * C6168 +
                     C6605 * C6216 + C5466 * C6167 + C5274 * C6215 +
                     C2262 * C6166 + C2073 * C6214) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1417 +
                      (C211 * C149 + C28602 * C373) * C28724 + C2073 * C1418 +
                      C2262 * C28590) *
                         C1344 +
                     (C1686 + C1687 + C1688 + C1698) * C1345 +
                     (C1691 + C1692 + C1693 + C1699) * C1346) *
                        C28758 * C583 -
                    (((C211 * C2002 + C28602 * C2256) * C28590 +
                      (C211 * C1925 + C28602 * C2058) * C1418 + C1697 * C28724 +
                      C1504 * C1417) *
                         C1346 +
                     ((C211 * C2003 + C28602 * C2257) * C28590 +
                      (C211 * C1926 + C28602 * C2059) * C1418 + C1696 * C28724 +
                      C1502 * C1417) *
                         C1345 +
                     ((C211 * C2004 + C28602 * C2258) * C28590 +
                      (C211 * C1927 + C28602 * C2060) * C1418 + C2262 * C28724 +
                      C2073 * C1417) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8913 * C91 + C8798 * C212 + C8914 * C961 +
                      C8799 * C1053 + C8915 * C4012 + C8800 * C4157) *
                         C1417 +
                     (C8913 * C149 + C8798 * C373 + C8914 * C1011 +
                      C8799 * C1175 + C8915 * C4089 + C8800 * C4348) *
                         C28724 +
                     (C10952 + C10953 + C10954) * C1418 +
                     (C11124 + C11125 + C11126) * C28590) *
                        C28515 * C28758 * C583 -
                    ((C8915 * C8314 + C8800 * C8574 + C8914 * C5754 +
                      C8799 * C5972 + C8913 * C2004 + C8798 * C2258) *
                         C28590 +
                     (C8915 * C8250 + C8800 * C8386 + C8914 * C5692 +
                      C8799 * C5808 + C8913 * C1927 + C8798 * C2060) *
                         C1418 +
                     (C11126 + C11125 + C11124) * C28724 +
                     (C10954 + C10953 + C10952) * C1417) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C211 +
            (C6171 * C212 + C28515 * C427) * C28602) *
               C6166 +
           (C6774 + C6786) * C6167 + (C6777 + C6787) * C6168 +
           (C6780 + C6788) * C6169) *
              C28758 * C583 -
          (((C6171 * C6594 + C28515 * C6772) * C28602 +
            (C6171 * C6502 + C28515 * C6503) * C211) *
               C6169 +
           (C6788 + C6780) * C6168 + (C6787 + C6777) * C6167 +
           (C6786 + C6774) * C6166) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
             C1354 * C214 + C1346 * C429) *
                C28602) *
               C28724 +
           ((C2142 + C2143 + C2144) * C211 + (C2322 + C2323 + C2324) * C28602) *
               C28590) *
              C28758 * C583 -
          (((C1354 * C2058 + C1346 * C2312 + C1352 * C2059 + C1345 * C2313 +
             C1350 * C2060 + C1344 * C2314) *
                C28602 +
            (C1354 * C1925 + C1346 * C1928 + C1352 * C1926 + C1345 * C1929 +
             C1350 * C1927 + C1344 * C1930) *
                C211) *
               C28590 +
           ((C2324 + C2323 + C2322) * C28602 + (C2144 + C2143 + C2142) * C211) *
               C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C8913 +
            (C6171 * C212 + C28515 * C427) * C8798 + C8451 * C8914 +
            C8631 * C8799 + (C6171 * C4012 + C28515 * C4015) * C8915 +
            (C6171 * C4157 + C28515 * C4401) * C8800) *
               C28724 +
           (C11177 + C11178 + C11179 + C11180 + C11181 + C11185) * C28590) *
              C28758 * C583 -
          (((C6171 * C8386 + C28515 * C8626) * C8800 +
            (C6171 * C8250 + C28515 * C8252) * C8915 + C8076 * C8799 +
            C7898 * C8914 + C6784 * C8798 + C6658 * C8913) *
               C28590 +
           (C11185 + C11181 + C11180 + C11179 + C11178 + C11177) * C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C28758 * C583 -
          ((C6217 * C6594 + C6169 * C6822 + C6216 * C5260 + C6168 * C5581 +
            C6215 * C2060 + C6167 * C2376 + C6214 * C681 + C6166 * C879) *
               C28602 +
           (C6217 * C6502 + C6169 * C6558 + C6216 * C5128 + C6168 * C5206 +
            C6215 * C1927 + C6167 * C2004 + C6214 * C589 + C6166 * C639) *
               C211) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C28758 * C583 -
          (((C1418 * C2058 + C28590 * C2374 + C1417 * C679 + C28724 * C877) *
                C28602 +
            (C1418 * C1925 + C28590 * C2002 + C1417 * C587 + C28724 * C637) *
                C211) *
               C1346 +
           ((C1418 * C2059 + C28590 * C2375 + C1417 * C680 + C28724 * C878) *
                C28602 +
            (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
                C211) *
               C1345 +
           ((C1418 * C2060 + C28590 * C2376 + C1417 * C681 + C28724 * C879) *
                C28602 +
            (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
                C211) *
               C1344) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C8913 +
           (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
               C8798 +
           (C1417 * C961 + C28724 * C1011 + C1418 * C2490 + C28590 * C2555) *
               C8914 +
           (C1417 * C1053 + C28724 * C1251 + C1418 * C2611 + C28590 * C2885) *
               C8799 +
           (C1417 * C4012 + C28724 * C4089 + C1418 * C8251 + C28590 * C8315) *
               C8915 +
           (C1417 * C4157 + C28724 * C4463 + C1418 * C8387 + C28590 * C8682) *
               C8800) *
              C28515 * C28758 * C583 -
          ((C1418 * C8386 + C28590 * C8681 + C1417 * C8387 + C28724 * C8682) *
               C8800 +
           (C1418 * C8250 + C28590 * C8314 + C1417 * C8251 + C28724 * C8315) *
               C8915 +
           (C1418 * C5808 + C28590 * C6076 + C1417 * C2611 + C28724 * C2885) *
               C8799 +
           (C1418 * C5692 + C28590 * C5754 + C1417 * C2490 + C28724 * C2555) *
               C8914 +
           (C1418 * C2060 + C28590 * C2376 + C1417 * C681 + C28724 * C879) *
               C8798 +
           (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
               C8913) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] += (-std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 + C6864 * C6169) *
                        C28515 * C28758 * C583 -
                    ((C520 * C6502 + C6861 + C6861 + C28602 * C6857) * C6169 +
                     C6864 * C6168 + C5641 * C6167 + C2438 * C6166) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      C2438 * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C28758 * C583 -
                    (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C28590 +
                      C1873 * C28724) *
                         C1346 +
                     ((C520 * C1926 + C2434 + C2434 + C28602 * C2428) * C28590 +
                      C1872 * C28724) *
                         C1345 +
                     ((C520 * C1927 + C2435 + C2435 + C28602 * C2429) * C28590 +
                      C2438 * C28724) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C9257 * C91 + C9261 + C9261 + C8798 * C521 +
                      C9258 * C961 + C9262 + C9262 + C8799 * C1289 +
                      C9259 * C4012 + C9263 + C9263 + C8800 * C4519) *
                         C28724 +
                     (C11301 + C11302 + C11303) * C28590) *
                        C28515 * C28758 * C583 -
                    ((C9259 * C8250 + C11292 + C11292 + C8800 * C8742 +
                      C9258 * C5692 + C11293 + C11293 + C8799 * C6128 +
                      C9257 * C1927 + C11294 + C11294 + C8798 * C2429) *
                         C28590 +
                     (C11303 + C11302 + C11301) * C28724) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           C6522 * C6167 + C6523 * C6168 + C6524 * C6169) *
              C956 -
          ((C6170 * C6898 + C6902 + C6902 + C28515 * C6900) * C28602 * C6169 +
           (C6170 * C5692 + C6903 + C6903 + C28515 * C5696) * C28602 * C6168 +
           (C6170 * C2490 + C6904 + C6904 + C28515 * C2496) * C28602 * C6167 +
           (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28602 * C6166) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1950 + C1951 + C1952) * C28602 * C28590) *
              C956 -
          ((C1353 * C2488 + C2498 + C2498 + C1346 * C2494 + C1351 * C2489 +
            C2499 + C2499 + C1345 * C2495 + C1349 * C2490 + C2500 + C2500 +
            C1344 * C2496) *
               C28602 * C28590 +
           (C1353 * C959 + C2501 + C2501 + C1346 * C967 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1349 * C961 + C2503 + C2503 +
            C1344 * C969) *
               C28602 * C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C8798 +
            C8264 * C8799 + C11363 * C8800) *
               C28724 +
           (C10832 + C10833 + C10839) * C28590) *
              C956 -
          (((C6170 * C11353 + C11359 + C11359 + C28515 * C11355) * C8800 +
            C10838 * C8799 + C7710 * C8798) *
               C28590 +
           ((C6170 * C9808 + C11360 + C11360 + C28515 * C9812) * C8800 +
            C11363 * C8799 + C8264 * C8798) *
               C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C956 -
          ((C6217 * C6899 + C6169 * C6940 + C6216 * C5694 + C6168 * C5756 +
            C6215 * C2493 + C6167 * C2558 + C6214 * C965 + C6166 * C1015) *
               C28515 +
           (C6217 * C6898 + C6169 * C6939 + C6216 * C5692 + C6168 * C5754 +
            C6215 * C2490 + C6167 * C2555 + C6214 * C961 + C6166 * C1011) *
               C6171) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C956 -
          ((C1418 * C2491 + C28590 * C2556 + C1417 * C963 + C28724 * C1013) *
               C1346 +
           (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
               C1354 +
           (C1418 * C2492 + C28590 * C2557 + C1417 * C964 + C28724 * C1014) *
               C1345 +
           (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
               C1352 +
           (C1418 * C2493 + C28590 * C2558 + C1417 * C965 + C28724 * C1015) *
               C1344 +
           (C1418 * C2490 + C28590 * C2555 + C1417 * C961 + C28724 * C1011) *
               C1350) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C6171 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C28515) *
               C8798 +
           ((C11432 + C11433) * C6171 + (C11434 + C11435) * C28515) * C8799 +
           ((C11436 + C11437) * C6171 + (C11438 + C11439) * C28515) * C8800) *
              C956 -
          (((C1418 * C11354 + C28590 * C11414 + C1417 * C9810 +
             C28724 * C9888) *
                C28515 +
            (C1418 * C11353 + C28590 * C11413 + C1417 * C9808 +
             C28724 * C9886) *
                C6171) *
               C8800 +
           ((C11439 + C11438) * C28515 + (C11437 + C11436) * C6171) * C8799 +
           ((C11435 + C11434) * C28515 + (C11433 + C11432) * C6171) * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] += (-std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C6171 +
                      (C211 * C96 + C28602 * C217) * C28515) *
                         C6166 +
                     (C6597 + C6598) * C6167 + (C6599 + C6600) * C6168 +
                     (C6607 + C6608) * C6169) *
                        C956 -
                    (((C211 * C6899 + C28602 * C6976) * C28515 +
                      (C211 * C6898 + C28602 * C6975) * C6171) *
                         C6169 +
                     ((C211 * C5694 + C28602 * C5810) * C28515 +
                      (C211 * C5692 + C28602 * C5808) * C6171) *
                         C6168 +
                     ((C211 * C2493 + C28602 * C2614) * C28515 +
                      (C211 * C2490 + C28602 * C2611) * C6171) *
                         C6167 +
                     ((C211 * C965 + C28602 * C1057) * C28515 +
                      (C211 * C961 + C28602 * C1053) * C6171) *
                         C6166) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1350 +
                      (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 +
                      C236 * C1345 + C237 * C1354 + C238 * C1346) *
                         C28724 +
                     (C2075 + C2076 + C2069 + C2070 + C2071 + C2072) * C28590) *
                        C956 -
                    (((C211 * C2491 + C28602 * C2612) * C1346 +
                      (C211 * C2488 + C28602 * C2609) * C1354 +
                      (C211 * C2492 + C28602 * C2613) * C1345 +
                      (C211 * C2489 + C28602 * C2610) * C1352 +
                      (C211 * C2493 + C28602 * C2614) * C1344 +
                      (C211 * C2490 + C28602 * C2611) * C1350) *
                         C28590 +
                     ((C211 * C963 + C28602 * C1055) * C1346 +
                      (C211 * C959 + C28602 * C1051) * C1354 +
                      (C211 * C964 + C28602 * C1056) * C1345 +
                      (C211 * C960 + C28602 * C1052) * C1352 +
                      (C211 * C965 + C28602 * C1057) * C1344 +
                      (C211 * C961 + C28602 * C1053) * C1350) *
                         C28724) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C8913 * C91 + C8798 * C212 + C8914 * C961 +
                       C8799 * C1053 + C8915 * C4012 + C8800 * C4157) *
                          C6171 +
                      (C8913 * C96 + C8798 * C217 + C8914 * C965 +
                       C8799 * C1057 + C8915 * C4015 + C8800 * C4160) *
                          C28515) *
                         C28724 +
                     ((C10952 + C10953 + C10954) * C6171 +
                      (C10955 + C10956 + C10957) * C28515) *
                         C28590) *
                        C956 -
                    (((C8915 * C11354 + C8800 * C11490 + C8914 * C8253 +
                       C8799 * C8389 + C8913 * C2493 + C8798 * C2614) *
                          C28515 +
                      (C8915 * C11353 + C8800 * C11489 + C8914 * C8251 +
                       C8799 * C8387 + C8913 * C2490 + C8798 * C2611) *
                          C6171) *
                         C28590 +
                     ((C8915 * C9810 + C8800 * C9956 + C8914 * C4015 +
                       C8799 * C4160 + C8913 * C965 + C8798 * C1057) *
                          C28515 +
                      (C8915 * C9808 + C8800 * C9954 + C8914 * C4012 +
                       C8799 * C4157 + C8913 * C961 + C8798 * C1053) *
                          C6171) *
                         C28724) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C6214 +
           (C6171 * C149 + C28515 * C274) * C6166 + C6656 * C6215 +
           C6657 * C6167 + C6658 * C6216 + C6659 * C6168 + C6660 * C6217 +
           C6661 * C6169) *
              C28602 * C956 -
          ((C6171 * C6939 + C28515 * C7011) * C6169 +
           (C6171 * C6898 + C28515 * C6899) * C6217 +
           (C6171 * C5754 + C28515 * C5862) * C6168 +
           (C6171 * C5692 + C28515 * C5694) * C6216 +
           (C6171 * C2555 + C28515 * C2667) * C6167 +
           (C6171 * C2490 + C28515 * C2493) * C6215 +
           (C6171 * C1011 + C28515 * C1095) * C6166 +
           (C6171 * C961 + C28515 * C965) * C6214) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C1417 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
            C1354 * C151 + C1346 * C276) *
               C28724 +
           (C2142 + C2143 + C2144) * C1418 + (C2145 + C2146 + C2147) * C28590) *
              C28602 * C956 -
          ((C1354 * C2553 + C1346 * C2665 + C1352 * C2554 + C1345 * C2666 +
            C1350 * C2555 + C1344 * C2667) *
               C28590 +
           (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
            C1350 * C2490 + C1344 * C2493) *
               C1418 +
           (C1354 * C1009 + C1346 * C1093 + C1352 * C1010 + C1345 * C1094 +
            C1350 * C1011 + C1344 * C1095) *
               C28724 +
           (C1354 * C959 + C1346 * C963 + C1352 * C960 + C1345 * C964 +
            C1350 * C961 + C1344 * C965) *
               C1417) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C1417 +
            (C6171 * C149 + C28515 * C274) * C28724 + C6656 * C1418 +
            C6657 * C28590) *
               C8798 +
           (C11543 + C11544 + C11545 + C11546) * C8799 +
           (C11555 + C11556 + C11551 + C11552) * C8800) *
              C956 -
          (((C6171 * C11413 + C28515 * C11541) * C28590 +
            (C6171 * C11353 + C28515 * C11354) * C1418 +
            (C6171 * C9886 + C28515 * C10008) * C28724 +
            (C6171 * C9808 + C28515 * C9810) * C1417) *
               C8800 +
           (C11552 + C11551 + C11556 + C11555) * C8799 +
           (C11546 + C11545 + C11544 + C11543) * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C956 -
          (C6323 * C6898 + C7048 + C7048 + C6169 * C7046 + C6322 * C5692 +
           C7049 + C7049 + C6168 * C5914 + C6321 * C2490 + C7050 + C7050 +
           C6167 * C2720 + C6320 * C961 + C7051 + C7051 + C6166 * C1133) *
              C28515 * C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C956 -
          ((C1606 * C2488 + C2722 + C2722 + C28590 * C2718 + C1605 * C959 +
            C2723 + C2723 + C28724 * C1131) *
               C1346 +
           (C1606 * C2489 + C2724 + C2724 + C28590 * C2719 + C1605 * C960 +
            C2725 + C2725 + C28724 * C1132) *
               C1345 +
           (C1606 * C2490 + C2726 + C2726 + C28590 * C2720 + C1605 * C961 +
            C2727 + C2727 + C28724 * C1133) *
               C1344) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C28515 * C8798 +
           (C11626 + C11627) * C28515 * C8799 +
           (C11628 + C11629) * C28515 * C8800) *
              C956 -
          ((C1606 * C11353 + C11616 + C11616 + C28590 * C11606 + C1605 * C9808 +
            C11617 + C11617 + C28724 * C10084) *
               C28515 * C8800 +
           (C11629 + C11628) * C28515 * C8799 +
           (C11627 + C11626) * C28515 * C8798) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (-std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28602 * C212) * C6214 +
                     (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
                     C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
                     C6605 * C6217 + C6738 * C6169) *
                        C28515 * C956 -
                    ((C211 * C6939 + C28602 * C7085) * C6169 +
                     (C211 * C6898 + C28602 * C6975) * C6217 +
                     (C211 * C5754 + C28602 * C5972) * C6168 +
                     (C211 * C5692 + C28602 * C5808) * C6216 +
                     (C211 * C2555 + C28602 * C2779) * C6167 +
                     (C211 * C2490 + C28602 * C2611) * C6215 +
                     (C211 * C1011 + C28602 * C1175) * C6166 +
                     (C211 * C961 + C28602 * C1053) * C6214) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1417 +
                      (C211 * C149 + C28602 * C373) * C28724 + C2073 * C1418 +
                      C2262 * C28590) *
                         C1344 +
                     (C1686 + C1687 + C1688 + C1698) * C1345 +
                     (C1691 + C1692 + C1693 + C1699) * C1346) *
                        C956 -
                    (((C211 * C2553 + C28602 * C2777) * C28590 +
                      (C211 * C2488 + C28602 * C2609) * C1418 +
                      (C211 * C1009 + C28602 * C1173) * C28724 +
                      (C211 * C959 + C28602 * C1051) * C1417) *
                         C1346 +
                     ((C211 * C2554 + C28602 * C2778) * C28590 +
                      (C211 * C2489 + C28602 * C2610) * C1418 +
                      (C211 * C1010 + C28602 * C1174) * C28724 +
                      (C211 * C960 + C28602 * C1052) * C1417) *
                         C1345 +
                     ((C211 * C2555 + C28602 * C2779) * C28590 +
                      (C211 * C2490 + C28602 * C2611) * C1418 +
                      (C211 * C1011 + C28602 * C1175) * C28724 +
                      (C211 * C961 + C28602 * C1053) * C1417) *
                         C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C8913 * C91 + C8798 * C212 + C8914 * C961 +
                      C8799 * C1053 + C8915 * C4012 + C8800 * C4157) *
                         C1417 +
                     (C8913 * C149 + C8798 * C373 + C8914 * C1011 +
                      C8799 * C1175 + C8915 * C4089 + C8800 * C4348) *
                         C28724 +
                     (C10952 + C10953 + C10954) * C1418 +
                     (C11124 + C11125 + C11126) * C28590) *
                        C28515 * C956 -
                    ((C8915 * C11413 + C8800 * C11679 + C8914 * C8315 +
                      C8799 * C8575 + C8913 * C2555 + C8798 * C2779) *
                         C28590 +
                     (C8915 * C11353 + C8800 * C11489 + C8914 * C8251 +
                      C8799 * C8387 + C8913 * C2490 + C8798 * C2611) *
                         C1418 +
                     (C8915 * C9886 + C8800 * C10147 + C8914 * C4089 +
                      C8799 * C4348 + C8913 * C1011 + C8798 * C1175) *
                         C28724 +
                     (C8915 * C9808 + C8800 * C9954 + C8914 * C4012 +
                      C8799 * C4157 + C8913 * C961 + C8798 * C1053) *
                         C1417) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C211 +
            (C6171 * C212 + C28515 * C427) * C28602) *
               C6166 +
           (C6774 + C6786) * C6167 + (C6777 + C6787) * C6168 +
           (C6780 + C6788) * C6169) *
              C956 -
          (((C6171 * C6975 + C28515 * C7120) * C28602 +
            (C6171 * C6898 + C28515 * C6899) * C211) *
               C6169 +
           ((C6171 * C5808 + C28515 * C6024) * C28602 +
            (C6171 * C5692 + C28515 * C5694) * C211) *
               C6168 +
           ((C6171 * C2611 + C28515 * C2832) * C28602 +
            (C6171 * C2490 + C28515 * C2493) * C211) *
               C6167 +
           ((C6171 * C1053 + C28515 * C1213) * C28602 +
            (C6171 * C961 + C28515 * C965) * C211) *
               C6166) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
             C1354 * C214 + C1346 * C429) *
                C28602) *
               C28724 +
           ((C2142 + C2143 + C2144) * C211 + (C2322 + C2323 + C2324) * C28602) *
               C28590) *
              C956 -
          (((C1354 * C2609 + C1346 * C2830 + C1352 * C2610 + C1345 * C2831 +
             C1350 * C2611 + C1344 * C2832) *
                C28602 +
            (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
             C1350 * C2490 + C1344 * C2493) *
                C211) *
               C28590 +
           ((C1354 * C1051 + C1346 * C1211 + C1352 * C1052 + C1345 * C1212 +
             C1350 * C1053 + C1344 * C1213) *
                C28602 +
            (C1354 * C959 + C1346 * C963 + C1352 * C960 + C1345 * C964 +
             C1350 * C961 + C1344 * C965) *
                C211) *
               C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C8913 +
            (C6171 * C212 + C28515 * C427) * C8798 + C8451 * C8914 +
            C8631 * C8799 + C11553 * C8915 + C11734 * C8800) *
               C28724 +
           (C11177 + C11178 + C11179 + C11180 + C11181 + C11185) * C28590) *
              C956 -
          (((C6171 * C11489 + C28515 * C11730) * C8800 +
            (C6171 * C11353 + C28515 * C11354) * C8915 + C11184 * C8799 +
            C11012 * C8914 + C8075 * C8798 + C7896 * C8913) *
               C28590 +
           ((C6171 * C9954 + C28515 * C10199) * C8800 +
            (C6171 * C9808 + C28515 * C9810) * C8915 + C11734 * C8799 +
            C11553 * C8914 + C8631 * C8798 + C8451 * C8913) *
               C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C956 -
          ((C6217 * C6975 + C6169 * C7155 + C6216 * C5808 + C6168 * C6076 +
            C6215 * C2611 + C6167 * C2885 + C6214 * C1053 + C6166 * C1251) *
               C28602 +
           (C6217 * C6898 + C6169 * C6939 + C6216 * C5692 + C6168 * C5754 +
            C6215 * C2490 + C6167 * C2555 + C6214 * C961 + C6166 * C1011) *
               C211) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C956 -
          (((C1418 * C2609 + C28590 * C2883 + C1417 * C1051 + C28724 * C1249) *
                C28602 +
            (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
                C211) *
               C1346 +
           ((C1418 * C2610 + C28590 * C2884 + C1417 * C1052 + C28724 * C1250) *
                C28602 +
            (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
                C211) *
               C1345 +
           ((C1418 * C2611 + C28590 * C2885 + C1417 * C1053 + C28724 * C1251) *
                C28602 +
            (C1418 * C2490 + C28590 * C2555 + C1417 * C961 + C28724 * C1011) *
                C211) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C8913 +
           (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
               C8798 +
           (C11432 + C11433) * C8914 + (C11794 + C11795) * C8799 +
           (C11436 + C11437) * C8915 + (C11796 + C11797) * C8800) *
              C28515 * C956 -
          ((C1418 * C11489 + C28590 * C11784 + C1417 * C9954 +
            C28724 * C10263) *
               C8800 +
           (C1418 * C11353 + C28590 * C11413 + C1417 * C9808 + C28724 * C9886) *
               C8915 +
           (C11797 + C11796) * C8799 + (C11437 + C11436) * C8914 +
           (C11795 + C11794) * C8798 + (C11433 + C11432) * C8913) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] += (-std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 + C6864 * C6169) *
                        C28515 * C956 -
                    ((C520 * C6898 + C7192 + C7192 + C28602 * C7190) * C6169 +
                     (C520 * C5692 + C6131 + C6131 + C28602 * C6128) * C6168 +
                     (C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C6167 +
                     (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C6166) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      C2438 * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C956 -
                    (((C520 * C2488 + C2940 + C2940 + C28602 * C2936) * C28590 +
                      (C520 * C959 + C1292 + C1292 + C28602 * C1287) * C28724) *
                         C1346 +
                     ((C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C28590 +
                      (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C28724) *
                         C1345 +
                     ((C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C28590 +
                      (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C28724) *
                         C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C9257 * C91 + C9261 + C9261 + C8798 * C521 +
                      C9258 * C961 + C9262 + C9262 + C8799 * C1289 +
                      C9259 * C4012 + C9263 + C9263 + C8800 * C4519) *
                         C28724 +
                     (C11301 + C11302 + C11303) * C28590) *
                        C28515 * C956 -
                    ((C9259 * C11353 + C11849 + C11849 + C8800 * C11847 +
                      C9258 * C8251 + C11850 + C11850 + C8799 * C8743 +
                      C9257 * C2490 + C11851 + C11851 + C8798 * C2938) *
                         C28590 +
                     (C9259 * C9808 + C10323 + C10323 + C8800 * C10318 +
                      C9258 * C4012 + C10324 + C10324 + C8799 * C4519 +
                      C9257 * C961 + C10325 + C10325 + C8798 * C1289) *
                         C28724) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28614) *
               C4578 +
           (C6519 * C28725 +
            (C6170 * C2490 + C6904 + C6904 + C28515 * C2496) * C28614) *
               C4579 +
           (C6520 * C28725 +
            (C6170 * C5692 + C6903 + C6903 + C28515 * C5696) * C28614) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C6170 * C5691 + C7243 + C7243 + C28515 * C5695) * C28614 +
            (C6170 * C1926 + C6178 + C6178 + C28515 * C1932) * C28725) *
               C4580 +
           ((C6170 * C2489 + C7244 + C7244 + C28515 * C2495) * C28614 +
            (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C28725) *
               C4579 +
           ((C6170 * C960 + C7245 + C7245 + C28515 * C968) * C28614 +
            (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C28725) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C1349 * C961 + C2503 + C2503 + C1344 * C969 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1353 * C959 + C2501 + C2501 +
            C1346 * C967) *
               C28614) *
              C28576 * C28758 * C28759 * C81 -
          ((C1353 * C958 + C2995 + C2995 + C1346 * C966 + C1351 * C959 + C2996 +
            C2996 + C1345 * C967 + C1349 * C960 + C2997 + C2997 +
            C1344 * C968) *
               C28614 +
           (C1353 * C94 + C1365 + C1365 + C1346 * C104 + C1351 * C93 + C1366 +
            C1366 + C1345 * C103 + C1349 * C92 + C1367 + C1367 + C1344 * C102) *
               C28725) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C11885 +
           C8264 * C11886 + C11363 * C11887 +
           (C6170 * C9808 + C11360 + C11360 + C28515 * C9812) * C11888) *
              C28576 * C28758 * C28759 * C81 -
          ((C6170 * C9807 + C11890 + C11890 + C28515 * C9811) * C11888 +
           (C6170 * C4011 + C10377 + C10377 + C28515 * C4017) * C11887 +
           (C6170 * C960 + C7245 + C7245 + C28515 * C968) * C11886 +
           (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C11885) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[24] += (-std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                       C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                          C6171 +
                      (C4647 * C965 + C4578 * C1015 + C4648 * C2493 +
                       C4579 * C2558 + C4649 * C5694 + C4580 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C4649 * C5693 + C4580 * C5755 + C4648 * C2492 +
                       C4579 * C2557 + C4647 * C964 + C4578 * C1014) *
                          C28515 +
                      (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 +
                       C4579 * C2554 + C4647 * C960 + C4578 * C1010) *
                          C6171) *
                         C28614 +
                     ((C4668 + C4667 + C4666) * C28515 +
                      (C4665 + C4664 + C4663) * C6171) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     ((C148 * C961 + C28576 * C1011) * C1350 +
                      (C148 * C965 + C28576 * C1015) * C1344 + C3056 * C1352 +
                      C3057 * C1345 + C3058 * C1354 + C3059 * C1346) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C148 * C962 + C28576 * C1012) * C1346 +
                      (C148 * C958 + C28576 * C1008) * C1354 + C3059 * C1345 +
                      C3058 * C1352 + C3057 * C1344 + C3056 * C1350) *
                         C28614 +
                     (C177 * C1346 + C176 * C1354 + C175 * C1345 +
                      C174 * C1352 + C173 * C1344 + C172 * C1350) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C6171 +
                      (C148 * C96 + C28576 * C154) * C28515) *
                         C11885 +
                     (C4102 * C6171 + C4103 * C28515) * C11886 +
                     (C9900 * C6171 + C9901 * C28515) * C11887 +
                     ((C148 * C9808 + C28576 * C9886) * C6171 +
                      (C148 * C9810 + C28576 * C9888) * C28515) *
                         C11888) *
                        C28758 * C28759 * C81 -
                    (((C148 * C9809 + C28576 * C9887) * C28515 +
                      (C148 * C9807 + C28576 * C9885) * C6171) *
                         C11888 +
                     (C8863 * C28515 + C8862 * C6171) * C11887 +
                     (C3057 * C28515 + C3056 * C6171) * C11886 +
                     (C173 * C28515 + C172 * C6171) * C11885) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (-std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C3109 * C589 + C28725 * C681 + C3110 * C2490 + C28614 * C2611) *
                C6171 +
            (C3109 * C593 + C28725 * C685 + C3110 * C2493 + C28614 * C2614) *
                C28515) *
               C4579 +
           ((C3109 * C1927 + C28725 * C2060 + C3110 * C5692 + C28614 * C5808) *
                C6171 +
            (C3109 * C1930 + C28725 * C2063 + C3110 * C5694 + C28614 * C5810) *
                C28515) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C3110 * C5693 + C28614 * C5809 + C3109 * C1929 + C28725 * C2062) *
                C28515 +
            (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
                C6171) *
               C4580 +
           ((C3110 * C2492 + C28614 * C2613 + C3109 * C592 + C28725 * C684) *
                C28515 +
            (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
                C6171) *
               C4579 +
           ((C3131 + C3130) * C28515 + (C3129 + C3128) * C6171) * C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C28758 * C28759 * C81 -
          ((C3110 * C962 + C28614 * C1054 + C3109 * C99 + C28725 * C220) *
               C1346 +
           (C3110 * C958 + C28614 * C1050 + C3109 * C94 + C28725 * C215) *
               C1354 +
           (C3135 + C3134) * C1345 + (C3133 + C3132) * C1352 +
           (C3131 + C3130) * C1344 + (C3129 + C3128) * C1350) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C6171 +
           (C11958 * C96 + C11885 * C217 + C11959 * C965 + C11886 * C1057 +
            C11960 * C4015 + C11887 * C4160 + C11961 * C9810 + C11888 * C9956) *
               C28515) *
              C28576 * C28758 * C28759 * C81 -
          ((C11961 * C9809 + C11888 * C9955 + C11960 * C4014 + C11887 * C4159 +
            C11959 * C964 + C11886 * C1056 + C11958 * C97 + C11885 * C218) *
               C28515 +
           (C11961 * C9807 + C11888 * C9953 + C11960 * C4011 + C11887 * C4156 +
            C11959 * C960 + C11886 * C1052 + C11958 * C92 + C11885 * C213) *
               C6171) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[24] += (-std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C4647 +
                      (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
                      C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
                         C28725 +
                     ((C6171 * C961 + C28515 * C965) * C4647 +
                      (C6171 * C1011 + C28515 * C1095) * C4578 +
                      (C6171 * C2490 + C28515 * C2493) * C4648 +
                      (C6171 * C2555 + C28515 * C2667) * C4579 +
                      (C6171 * C5692 + C28515 * C5694) * C4649 +
                      (C6171 * C5754 + C28515 * C5862) * C4580) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C5753 + C28515 * C5861) * C4580 +
                      (C6171 * C5691 + C28515 * C5693) * C4649 +
                      (C6171 * C2554 + C28515 * C2666) * C4579 +
                      (C6171 * C2489 + C28515 * C2492) * C4648 +
                      (C6171 * C1010 + C28515 * C1094) * C4578 +
                      (C6171 * C960 + C28515 * C964) * C4647) *
                         C28614 +
                     ((C6171 * C2003 + C28515 * C2127) * C4580 +
                      (C6171 * C1926 + C28515 * C1929) * C4649 +
                      (C6171 * C638 + C28515 * C722) * C4579 +
                      (C6171 * C588 + C28515 * C592) * C4648 +
                      (C6171 * C150 + C28515 * C275) * C4578 +
                      (C6171 * C92 + C28515 * C97) * C4647) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
                       C1354 * C93 + C1346 * C98) *
                          C148 +
                      (C1350 * C149 + C1344 * C274 + C1352 * C150 +
                       C1345 * C275 + C1354 * C151 + C1346 * C276) *
                          C28576) *
                         C28725 +
                     ((C1350 * C961 + C1344 * C965 + C1352 * C960 +
                       C1345 * C964 + C1354 * C959 + C1346 * C963) *
                          C148 +
                      (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 +
                       C1345 * C1094 + C1354 * C1009 + C1346 * C1093) *
                          C28576) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C1354 * C1008 + C1346 * C1092 + C1352 * C1009 +
                       C1345 * C1093 + C1350 * C1010 + C1344 * C1094) *
                          C28576 +
                      (C1354 * C958 + C1346 * C962 + C1352 * C959 +
                       C1345 * C963 + C1350 * C960 + C1344 * C964) *
                          C148) *
                         C28614 +
                     ((C1354 * C152 + C1346 * C277 + C1352 * C151 +
                       C1345 * C276 + C1350 * C150 + C1344 * C275) *
                          C28576 +
                      (C1354 * C94 + C1346 * C99 + C1352 * C93 + C1345 * C98 +
                       C1350 * C92 + C1344 * C97) *
                          C148) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C148 +
                      (C6171 * C149 + C28515 * C274) * C28576) *
                         C11885 +
                     (C8451 * C148 + C8452 * C28576) * C11886 +
                     (C11553 * C148 + C11554 * C28576) * C11887 +
                     ((C6171 * C9808 + C28515 * C9810) * C148 +
                      (C6171 * C9886 + C28515 * C10008) * C28576) *
                         C11888) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C9885 + C28515 * C10007) * C28576 +
                      (C6171 * C9807 + C28515 * C9809) * C148) *
                         C11888 +
                     ((C6171 * C4088 + C28515 * C4212) * C28576 +
                      (C6171 * C4011 + C28515 * C4014) * C148) *
                         C11887 +
                     ((C6171 * C1010 + C28515 * C1094) * C28576 +
                      (C6171 * C960 + C28515 * C964) * C148) *
                         C11886 +
                     ((C6171 * C150 + C28515 * C275) * C28576 +
                      (C6171 * C92 + C28515 * C97) * C148) *
                         C11885) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (-std::pow(Pi, 2.5) *
         (((C4824 * C91 + C4828 + C4828 + C4578 * C314 + C4825 * C589 + C4829 +
            C4829 + C4579 * C761 + C4826 * C1927 + C4830 + C4830 +
            C4580 * C2199) *
               C28515 * C28725 +
           (C4824 * C961 + C5921 + C5921 + C4578 * C1133 + C4825 * C2490 +
            C5920 + C5920 + C4579 * C2720 + C4826 * C5692 + C5919 + C5919 +
            C4580 * C5914) *
               C28515 * C28614) *
              C28758 * C28759 * C81 -
          ((C4826 * C5691 + C5916 + C5916 + C4580 * C5913 + C4825 * C2489 +
            C5917 + C5917 + C4579 * C2719 + C4824 * C960 + C5918 + C5918 +
            C4578 * C1132) *
               C28515 * C28614 +
           (C4851 + C4850 + C4849) * C28515 * C28725) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 + C337 * C1345 +
            C338 * C1346) *
               C28725 +
           ((C313 * C961 + C1138 + C1138 + C28576 * C1133) * C1344 +
            C3244 * C1345 + C3245 * C1346) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C313 * C958 + C1135 + C1135 + C28576 * C1130) * C1346 +
            C3245 * C1345 + C3244 * C1344) *
               C28614 +
           (C339 * C1346 + C338 * C1345 + C337 * C1344) * C28725) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28576 * C314) * C28515 * C11885 +
           C4295 * C28515 * C11886 + C10095 * C28515 * C11887 +
           (C313 * C9808 + C10092 + C10092 + C28576 * C10084) * C28515 *
               C11888) *
              C28758 * C28759 * C81 -
          ((C313 * C9807 + C10091 + C10091 + C28576 * C10083) * C28515 *
               C11888 +
           C9039 * C28515 * C11887 + C3244 * C28515 * C11886 +
           C337 * C28515 * C11885) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (-std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C3109 * C589 + C28725 * C681 + C3110 * C2490 + C28614 * C2611) *
               C4648 +
           (C3109 * C639 + C28725 * C803 + C3110 * C2555 + C28614 * C2779) *
               C4579 +
           (C3109 * C1927 + C28725 * C2060 + C3110 * C5692 + C28614 * C5808) *
               C4649 +
           (C3109 * C2004 + C28725 * C2258 + C3110 * C5754 + C28614 * C5972) *
               C4580) *
              C28515 * C28758 * C28759 * C81 -
          ((C3110 * C5753 + C28614 * C5971 + C3109 * C2003 + C28725 * C2257) *
               C4580 +
           (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
               C4649 +
           (C3110 * C2554 + C28614 * C2778 + C3109 * C638 + C28725 * C802) *
               C4579 +
           (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
               C4648 +
           (C3305 + C3304) * C4578 + (C3129 + C3128) * C4647) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C28758 * C28759 * C81 -
          (((C3110 * C1008 + C28614 * C1172 + C3109 * C152 + C28725 * C376) *
                C28576 +
            (C3110 * C958 + C28614 * C1050 + C3109 * C94 + C28725 * C215) *
                C148) *
               C1346 +
           ((C3307 + C3306) * C28576 + (C3133 + C3132) * C148) * C1345 +
           ((C3305 + C3304) * C28576 + (C3129 + C3128) * C148) * C1344) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C148 +
           (C11958 * C149 + C11885 * C373 + C11959 * C1011 + C11886 * C1175 +
            C11960 * C4089 + C11887 * C4348 + C11961 * C9886 +
            C11888 * C10147) *
               C28576) *
              C28515 * C28758 * C28759 * C81 -
          ((C11961 * C9885 + C11888 * C10146 + C11960 * C4088 + C11887 * C4347 +
            C11959 * C1010 + C11886 * C1174 + C11958 * C150 + C11885 * C374) *
               C28576 +
           (C11961 * C9807 + C11888 * C9953 + C11960 * C4011 + C11887 * C4156 +
            C11959 * C960 + C11886 * C1052 + C11958 * C92 + C11885 * C213) *
               C148) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (-std::pow(Pi, 2.5) * ((((C6171 * C91 + C28515 * C96) * C3109 +
                                 (C6171 * C212 + C28515 * C427) * C28725 +
                                 (C6171 * C961 + C28515 * C965) * C3110 +
                                 (C6171 * C1053 + C28515 * C1213) * C28614) *
                                    C4578 +
                                (C6656 * C3109 + C6783 * C28725 +
                                 (C6171 * C2490 + C28515 * C2493) * C3110 +
                                 (C6171 * C2611 + C28515 * C2832) * C28614) *
                                    C4579 +
                                (C6658 * C3109 + C6784 * C28725 +
                                 (C6171 * C5692 + C28515 * C5694) * C3110 +
                                 (C6171 * C5808 + C28515 * C6024) * C28614) *
                                    C4580) *
                                   C28758 * C28759 * C81 -
                               (((C6171 * C5807 + C28515 * C6023) * C28614 +
                                 (C6171 * C5691 + C28515 * C5693) * C3110 +
                                 (C6171 * C2059 + C28515 * C2313) * C28725 +
                                 (C6171 * C1926 + C28515 * C1929) * C3109) *
                                    C4580 +
                                ((C6171 * C2610 + C28515 * C2831) * C28614 +
                                 (C6171 * C2489 + C28515 * C2492) * C3110 +
                                 (C6171 * C680 + C28515 * C840) * C28725 +
                                 (C6171 * C588 + C28515 * C592) * C3109) *
                                    C4579 +
                                ((C6171 * C1052 + C28515 * C1212) * C28614 +
                                 (C6171 * C960 + C28515 * C964) * C3110 +
                                 (C6171 * C213 + C28515 * C428) * C28725 +
                                 (C6171 * C92 + C28515 * C97) * C3109) *
                                    C4578) *
                                   C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C1350 * C91 + C1344 * C96 + C1352 * C92 +
                                C1345 * C97 + C1354 * C93 + C1346 * C98) *
                                   C3109 +
                               (C1350 * C212 + C1344 * C427 + C1352 * C213 +
                                C1345 * C428 + C1354 * C214 + C1346 * C429) *
                                   C28725 +
                               (C1350 * C961 + C1344 * C965 + C1352 * C960 +
                                C1345 * C964 + C1354 * C959 + C1346 * C963) *
                                   C3110 +
                               (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 +
                                C1345 * C1212 + C1354 * C1051 + C1346 * C1211) *
                                   C28614) *
                                  C28576 * C28758 * C28759 * C81 -
                              ((C1354 * C1050 + C1346 * C1210 + C1352 * C1051 +
                                C1345 * C1211 + C1350 * C1052 + C1344 * C1212) *
                                   C28614 +
                               (C1354 * C958 + C1346 * C962 + C1352 * C959 +
                                C1345 * C963 + C1350 * C960 + C1344 * C964) *
                                   C3110 +
                               (C1354 * C215 + C1346 * C430 + C1352 * C214 +
                                C1345 * C429 + C1350 * C213 + C1344 * C428) *
                                   C28725 +
                               (C1354 * C94 + C1346 * C99 + C1352 * C93 +
                                C1345 * C98 + C1350 * C92 + C1344 * C97) *
                                   C3109) *
                                  C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C11958 +
           (C6171 * C212 + C28515 * C427) * C11885 + C8451 * C11959 +
           C8631 * C11886 + C11553 * C11960 + C11734 * C11887 +
           (C6171 * C9808 + C28515 * C9810) * C11961 +
           (C6171 * C9954 + C28515 * C10199) * C11888) *
              C28576 * C28758 * C28759 * C81 -
          ((C6171 * C9953 + C28515 * C10198) * C11888 +
           (C6171 * C9807 + C28515 * C9809) * C11961 +
           (C6171 * C4156 + C28515 * C4400) * C11887 +
           (C6171 * C4011 + C28515 * C4014) * C11960 +
           (C6171 * C1052 + C28515 * C1212) * C11886 +
           (C6171 * C960 + C28515 * C964) * C11959 +
           (C6171 * C213 + C28515 * C428) * C11885 +
           (C6171 * C92 + C28515 * C97) * C11958) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (-std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C3109 +
           (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
            C4649 * C2060 + C4580 * C2376) *
               C28725 +
           (C4647 * C961 + C4578 * C1011 + C4648 * C2490 + C4579 * C2555 +
            C4649 * C5692 + C4580 * C5754) *
               C3110 +
           (C4647 * C1053 + C4578 * C1251 + C4648 * C2611 + C4579 * C2885 +
            C4649 * C5808 + C4580 * C6076) *
               C28614) *
              C28515 * C28758 * C28759 * C81 -
          ((C4649 * C5807 + C4580 * C6075 + C4648 * C2610 + C4579 * C2884 +
            C4647 * C1052 + C4578 * C1250) *
               C28614 +
           (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
            C4647 * C960 + C4578 * C1010) *
               C3110 +
           (C5019 + C5018 + C5017) * C28725 + (C4665 + C4664 + C4663) * C3109) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C148 * C91 + C28576 * C149) * C3109 +
                                (C148 * C212 + C28576 * C466) * C28725 +
                                (C148 * C961 + C28576 * C1011) * C3110 +
                                (C148 * C1053 + C28576 * C1251) * C28614) *
                                   C1344 +
                               (C3408 + C3409 + C3410 + C3420) * C1345 +
                               (C3413 + C3414 + C3415 + C3421) * C1346) *
                                  C28758 * C28759 * C81 -
                              (((C148 * C1050 + C28576 * C1248) * C28614 +
                                (C148 * C958 + C28576 * C1008) * C3110 +
                                C483 * C28725 + C176 * C3109) *
                                   C1346 +
                               (C3421 + C3415 + C3414 + C3413) * C1345 +
                               (C3420 + C3410 + C3409 + C3408) * C1344) *
                                  C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C11958 +
           (C148 * C212 + C28576 * C466) * C11885 + C4102 * C11959 +
           C4467 * C11886 + C9900 * C11960 + C10267 * C11887 +
           (C148 * C9808 + C28576 * C9886) * C11961 +
           (C148 * C9954 + C28576 * C10263) * C11888) *
              C28515 * C28758 * C28759 * C81 -
          ((C148 * C9953 + C28576 * C10262) * C11888 +
           (C148 * C9807 + C28576 * C9885) * C11961 + C9206 * C11887 +
           C8862 * C11960 + C3418 * C11886 + C3056 * C11959 + C481 * C11885 +
           C172 * C11958) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (-std::pow(Pi, 2.5) *
         (((C3471 * C91 + C3474 + C3474 + C28725 * C521 + C3472 * C961 + C3475 +
            C3475 + C28614 * C1289) *
               C4578 +
           (C3471 * C589 + C3960 + C3960 + C28725 * C917 + C3472 * C2490 +
            C3959 + C3959 + C28614 * C2938) *
               C4579 +
           (C3471 * C1927 + C7646 + C7646 + C28725 * C2429 + C3472 * C5692 +
            C7647 + C7647 + C28614 * C6128) *
               C4580) *
              C28515 * C28758 * C28759 * C81 -
          ((C3472 * C5691 + C7648 + C7648 + C28614 * C6127 + C3471 * C1926 +
            C7649 + C7649 + C28725 * C2428) *
               C4580 +
           (C3472 * C2489 + C3957 + C3957 + C28614 * C2937 + C3471 * C588 +
            C3958 + C3958 + C28725 * C916) *
               C4579 +
           (C3499 + C3498) * C4578) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                                C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                                   C28576 * C1344 +
                               (C3498 + C3499) * C28576 * C1345 +
                               (C3500 + C3501) * C28576 * C1346) *
                                  C28758 * C28759 * C81 -
                              ((C3472 * C958 + C3488 + C3488 + C28614 * C1286 +
                                C3471 * C94 + C3489 + C3489 + C28725 * C524) *
                                   C28576 * C1346 +
                               (C3501 + C3500) * C28576 * C1345 +
                               (C3499 + C3498) * C28576 * C1344) *
                                  C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C12166 * C91 + C12171 + C12171 + C11885 * C521 + C12167 * C961 +
           C12172 + C12172 + C11886 * C1289 + C12168 * C4012 + C12173 + C12173 +
           C11887 * C4519 + C12169 * C9808 + C12174 + C12174 +
           C11888 * C10318) *
              C28576 * C28515 * C28758 * C28759 * C81 -
          (C12169 * C9807 + C12175 + C12175 + C11888 * C10317 + C12168 * C4011 +
           C12176 + C12176 + C11887 * C4518 + C12167 * C960 + C12177 + C12177 +
           C11886 * C1288 + C12166 * C92 + C12178 + C12178 + C11885 * C522) *
              C28576 * C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28614) *
               C4578 +
           (C7700 + C7712) * C4579 + (C7703 + C7713) * C4580) *
              C28758 * C583 -
          (((C6170 * C6898 + C6902 + C6902 + C28515 * C6900) * C28614 +
            C6521 * C28725) *
               C4580 +
           (C7713 + C7703) * C4579 + (C7712 + C7700) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C1349 * C961 + C2503 + C2503 + C1344 * C969 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1353 * C959 + C2501 + C2501 +
            C1346 * C967) *
               C28614) *
              C28576 * C28758 * C583 -
          ((C1353 * C2488 + C2498 + C2498 + C1346 * C2494 + C1351 * C2489 +
            C2499 + C2499 + C1345 * C2495 + C1349 * C2490 + C2500 + C2500 +
            C1344 * C2496) *
               C28614 +
           (C1952 + C1951 + C1950) * C28725) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C11885 +
           C8264 * C11886 + C11363 * C11887 +
           (C6170 * C9808 + C11360 + C11360 + C28515 * C9812) * C11888) *
              C28576 * C28758 * C583 -
          ((C6170 * C11353 + C11359 + C11359 + C28515 * C11355) * C11888 +
           C10838 * C11887 + C7710 * C11886 + C6519 * C11885) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[25] += (-std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                       C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                          C6171 +
                      (C4647 * C965 + C4578 * C1015 + C4648 * C2493 +
                       C4579 * C2558 + C4649 * C5694 + C4580 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C583 -
                    (((C4649 * C6899 + C4580 * C6940 + C4648 * C5694 +
                       C4579 * C5756 + C4647 * C2493 + C4578 * C2558) *
                          C28515 +
                      (C4649 * C6898 + C4580 * C6939 + C4648 * C5692 +
                       C4579 * C5754 + C4647 * C2490 + C4578 * C2555) *
                          C6171) *
                         C28614 +
                     ((C4649 * C5130 + C4580 * C5208 + C4648 * C1930 +
                       C4579 * C2007 + C4647 * C593 + C4578 * C643) *
                          C28515 +
                      (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 +
                       C4579 * C2004 + C4647 * C589 + C4578 * C639) *
                          C6171) *
                         C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     ((C148 * C961 + C28576 * C1011) * C1350 +
                      (C148 * C965 + C28576 * C1015) * C1344 + C3056 * C1352 +
                      C3057 * C1345 + C3058 * C1354 + C3059 * C1346) *
                         C28614) *
                        C28758 * C583 -
                    (((C148 * C2491 + C28576 * C2556) * C1346 +
                      (C148 * C2488 + C28576 * C2553) * C1354 +
                      (C148 * C2492 + C28576 * C2557) * C1345 +
                      (C148 * C2489 + C28576 * C2554) * C1352 +
                      (C148 * C2493 + C28576 * C2558) * C1344 +
                      (C148 * C2490 + C28576 * C2555) * C1350) *
                         C28614 +
                     ((C148 * C591 + C28576 * C641) * C1346 +
                      (C148 * C587 + C28576 * C637) * C1354 +
                      (C148 * C592 + C28576 * C642) * C1345 +
                      (C148 * C588 + C28576 * C638) * C1352 +
                      (C148 * C593 + C28576 * C643) * C1344 +
                      (C148 * C589 + C28576 * C639) * C1350) *
                         C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C6171 +
                      (C148 * C96 + C28576 * C154) * C28515) *
                         C11885 +
                     (C4102 * C6171 + C4103 * C28515) * C11886 +
                     (C9900 * C6171 + C9901 * C28515) * C11887 +
                     ((C148 * C9808 + C28576 * C9886) * C6171 +
                      (C148 * C9810 + C28576 * C9888) * C28515) *
                         C11888) *
                        C28758 * C583 -
                    (((C148 * C11354 + C28576 * C11414) * C28515 +
                      (C148 * C11353 + C28576 * C11413) * C6171) *
                         C11888 +
                     ((C148 * C8253 + C28576 * C8317) * C28515 +
                      (C148 * C8251 + C28576 * C8315) * C6171) *
                         C11887 +
                     ((C148 * C2493 + C28576 * C2558) * C28515 +
                      (C148 * C2490 + C28576 * C2555) * C6171) *
                         C11886 +
                     ((C148 * C593 + C28576 * C643) * C28515 +
                      (C148 * C589 + C28576 * C639) * C6171) *
                         C11885) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C7830 + C7831) * C6171 + (C7832 + C7833) * C28515) * C4579 +
           ((C7834 + C7835) * C6171 + (C7836 + C7837) * C28515) * C4580) *
              C28758 * C583 -
          (((C3110 * C6899 + C28614 * C6976 + C3109 * C5130 + C28725 * C5262) *
                C28515 +
            (C3110 * C6898 + C28614 * C6975 + C3109 * C5128 + C28725 * C5260) *
                C6171) *
               C4580 +
           ((C7837 + C7836) * C28515 + (C7835 + C7834) * C6171) * C4579 +
           ((C7833 + C7832) * C28515 + (C7831 + C7830) * C6171) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C28758 * C583 -
          ((C3110 * C2491 + C28614 * C2612 + C3109 * C591 + C28725 * C683) *
               C1346 +
           (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
               C1354 +
           (C3110 * C2492 + C28614 * C2613 + C3109 * C592 + C28725 * C684) *
               C1345 +
           (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
               C1352 +
           (C3110 * C2493 + C28614 * C2614 + C3109 * C593 + C28725 * C685) *
               C1344 +
           (C3110 * C2490 + C28614 * C2611 + C3109 * C589 + C28725 * C681) *
               C1350) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C6171 +
           (C11958 * C96 + C11885 * C217 + C11959 * C965 + C11886 * C1057 +
            C11960 * C4015 + C11887 * C4160 + C11961 * C9810 + C11888 * C9956) *
               C28515) *
              C28576 * C28758 * C583 -
          ((C11961 * C11354 + C11888 * C11490 + C11960 * C8253 +
            C11887 * C8389 + C11959 * C2493 + C11886 * C2614 + C11958 * C593 +
            C11885 * C685) *
               C28515 +
           (C11961 * C11353 + C11888 * C11489 + C11960 * C8251 +
            C11887 * C8387 + C11959 * C2490 + C11886 * C2611 + C11958 * C589 +
            C11885 * C681) *
               C6171) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C4647 +
            (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
            C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
               C28725 +
           ((C6171 * C961 + C28515 * C965) * C4647 +
            (C6171 * C1011 + C28515 * C1095) * C4578 + C7896 * C4648 +
            C7897 * C4579 + C7898 * C4649 + C7899 * C4580) *
               C28614) *
              C28758 * C583 -
          (((C6171 * C6939 + C28515 * C7011) * C4580 +
            (C6171 * C6898 + C28515 * C6899) * C4649 + C7899 * C4579 +
            C7898 * C4648 + C7897 * C4578 + C7896 * C4647) *
               C28614 +
           (C6661 * C4580 + C6660 * C4649 + C6659 * C4579 + C6658 * C4648 +
            C6657 * C4578 + C6656 * C4647) *
               C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
             C1354 * C151 + C1346 * C276) *
                C28576) *
               C28725 +
           ((C1350 * C961 + C1344 * C965 + C1352 * C960 + C1345 * C964 +
             C1354 * C959 + C1346 * C963) *
                C148 +
            (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 + C1345 * C1094 +
             C1354 * C1009 + C1346 * C1093) *
                C28576) *
               C28614) *
              C28758 * C583 -
          (((C1354 * C2553 + C1346 * C2665 + C1352 * C2554 + C1345 * C2666 +
             C1350 * C2555 + C1344 * C2667) *
                C28576 +
            (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
             C1350 * C2490 + C1344 * C2493) *
                C148) *
               C28614 +
           ((C2147 + C2146 + C2145) * C28576 + (C2144 + C2143 + C2142) * C148) *
               C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C148 +
            (C6171 * C149 + C28515 * C274) * C28576) *
               C11885 +
           (C8451 * C148 + C8452 * C28576) * C11886 +
           (C11553 * C148 + C11554 * C28576) * C11887 +
           ((C6171 * C9808 + C28515 * C9810) * C148 +
            (C6171 * C9886 + C28515 * C10008) * C28576) *
               C11888) *
              C28758 * C583 -
          (((C6171 * C11413 + C28515 * C11541) * C28576 +
            (C6171 * C11353 + C28515 * C11354) * C148) *
               C11888 +
           (C11013 * C28576 + C11012 * C148) * C11887 +
           (C7897 * C28576 + C7896 * C148) * C11886 +
           (C6657 * C28576 + C6656 * C148) * C11885) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (-std::pow(Pi, 2.5) *
         (((C4824 * C91 + C4828 + C4828 + C4578 * C314 + C4825 * C589 + C4829 +
            C4829 + C4579 * C761 + C4826 * C1927 + C4830 + C4830 +
            C4580 * C2199) *
               C28515 * C28725 +
           (C4824 * C961 + C5921 + C5921 + C4578 * C1133 + C4825 * C2490 +
            C5920 + C5920 + C4579 * C2720 + C4826 * C5692 + C5919 + C5919 +
            C4580 * C5914) *
               C28515 * C28614) *
              C28758 * C583 -
          ((C4826 * C6898 + C7950 + C7950 + C4580 * C7046 + C4825 * C5692 +
            C7951 + C7951 + C4579 * C5914 + C4824 * C2490 + C7952 + C7952 +
            C4578 * C2720) *
               C28515 * C28614 +
           (C4826 * C5128 + C5409 + C5409 + C4580 * C5404 + C4825 * C1927 +
            C5410 + C5410 + C4579 * C2199 + C4824 * C589 + C5411 + C5411 +
            C4578 * C761) *
               C28515 * C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 + C337 * C1345 +
            C338 * C1346) *
               C28725 +
           ((C313 * C961 + C1138 + C1138 + C28576 * C1133) * C1344 +
            C3244 * C1345 + C3245 * C1346) *
               C28614) *
              C28758 * C583 -
          (((C313 * C2488 + C3752 + C3752 + C28576 * C2718) * C1346 +
            (C313 * C2489 + C3753 + C3753 + C28576 * C2719) * C1345 +
            (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C1344) *
               C28614 +
           ((C313 * C587 + C764 + C764 + C28576 * C759) * C1346 +
            (C313 * C588 + C765 + C765 + C28576 * C760) * C1345 +
            (C313 * C589 + C766 + C766 + C28576 * C761) * C1344) *
               C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28576 * C314) * C28515 * C11885 +
           C4295 * C28515 * C11886 + C10095 * C28515 * C11887 +
           (C313 * C9808 + C10092 + C10092 + C28576 * C10084) * C28515 *
               C11888) *
              C28758 * C583 -
          ((C313 * C11353 + C12349 + C12349 + C28576 * C11606) * C28515 *
               C11888 +
           (C313 * C8251 + C9547 + C9547 + C28576 * C8505) * C28515 * C11887 +
           (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C28515 * C11886 +
           (C313 * C589 + C766 + C766 + C28576 * C761) * C28515 * C11885) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (-std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C7830 + C7831) * C4648 + (C8011 + C8012) * C4579 +
           (C7834 + C7835) * C4649 + (C8013 + C8014) * C4580) *
              C28515 * C28758 * C583 -
          ((C3110 * C6939 + C28614 * C7085 + C3109 * C5206 + C28725 * C5462) *
               C4580 +
           (C3110 * C6898 + C28614 * C6975 + C3109 * C5128 + C28725 * C5260) *
               C4649 +
           (C8014 + C8013) * C4579 + (C7835 + C7834) * C4648 +
           (C8012 + C8011) * C4578 + (C7831 + C7830) * C4647) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C28758 * C583 -
          (((C3110 * C2553 + C28614 * C2777 + C3109 * C637 + C28725 * C801) *
                C28576 +
            (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
                C148) *
               C1346 +
           ((C3110 * C2554 + C28614 * C2778 + C3109 * C638 + C28725 * C802) *
                C28576 +
            (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
                C148) *
               C1345 +
           ((C3110 * C2555 + C28614 * C2779 + C3109 * C639 + C28725 * C803) *
                C28576 +
            (C3110 * C2490 + C28614 * C2611 + C3109 * C589 + C28725 * C681) *
                C148) *
               C1344) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C148 +
           (C11958 * C149 + C11885 * C373 + C11959 * C1011 + C11886 * C1175 +
            C11960 * C4089 + C11887 * C4348 + C11961 * C9886 +
            C11888 * C10147) *
               C28576) *
              C28515 * C28758 * C583 -
          ((C11961 * C11413 + C11888 * C11679 + C11960 * C8315 +
            C11887 * C8575 + C11959 * C2555 + C11886 * C2779 + C11958 * C639 +
            C11885 * C803) *
               C28576 +
           (C11961 * C11353 + C11888 * C11489 + C11960 * C8251 +
            C11887 * C8387 + C11959 * C2490 + C11886 * C2611 + C11958 * C589 +
            C11885 * C681) *
               C148) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C3109 +
            (C6171 * C212 + C28515 * C427) * C28725 +
            (C6171 * C961 + C28515 * C965) * C3110 +
            (C6171 * C1053 + C28515 * C1213) * C28614) *
               C4578 +
           (C8065 + C8066 + C8067 + C8077) * C4579 +
           (C8070 + C8071 + C8072 + C8078) * C4580) *
              C28758 * C583 -
          (((C6171 * C6975 + C28515 * C7120) * C28614 +
            (C6171 * C6898 + C28515 * C6899) * C3110 + C6785 * C28725 +
            C6660 * C3109) *
               C4580 +
           (C8078 + C8072 + C8071 + C8070) * C4579 +
           (C8077 + C8067 + C8066 + C8065) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C3109 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
            C1354 * C214 + C1346 * C429) *
               C28725 +
           (C1350 * C961 + C1344 * C965 + C1352 * C960 + C1345 * C964 +
            C1354 * C959 + C1346 * C963) *
               C3110 +
           (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 + C1345 * C1212 +
            C1354 * C1051 + C1346 * C1211) *
               C28614) *
              C28576 * C28758 * C583 -
          ((C1354 * C2609 + C1346 * C2830 + C1352 * C2610 + C1345 * C2831 +
            C1350 * C2611 + C1344 * C2832) *
               C28614 +
           (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
            C1350 * C2490 + C1344 * C2493) *
               C3110 +
           (C2324 + C2323 + C2322) * C28725 + (C2144 + C2143 + C2142) * C3109) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C11958 +
           (C6171 * C212 + C28515 * C427) * C11885 + C8451 * C11959 +
           C8631 * C11886 + C11553 * C11960 + C11734 * C11887 +
           (C6171 * C9808 + C28515 * C9810) * C11961 +
           (C6171 * C9954 + C28515 * C10199) * C11888) *
              C28576 * C28758 * C583 -
          ((C6171 * C11489 + C28515 * C11730) * C11888 +
           (C6171 * C11353 + C28515 * C11354) * C11961 + C11184 * C11887 +
           C11012 * C11960 + C8075 * C11886 + C7896 * C11959 + C6783 * C11885 +
           C6656 * C11958) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[25] += (-std::pow(Pi, 2.5) *
                   (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
                      C4649 * C1927 + C4580 * C2004) *
                         C3109 +
                     (C4647 * C212 + C4578 * C466 + C4648 * C681 +
                      C4579 * C879 + C4649 * C2060 + C4580 * C2376) *
                         C28725 +
                     (C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                      C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                         C3110 +
                     (C4647 * C1053 + C4578 * C1251 + C4648 * C2611 +
                      C4579 * C2885 + C4649 * C5808 + C4580 * C6076) *
                         C28614) *
                        C28515 * C28758 * C583 -
                    ((C4649 * C6975 + C4580 * C7155 + C4648 * C5808 +
                      C4579 * C6076 + C4647 * C2611 + C4578 * C2885) *
                         C28614 +
                     (C4649 * C6898 + C4580 * C6939 + C4648 * C5692 +
                      C4579 * C5754 + C4647 * C2490 + C4578 * C2555) *
                         C3110 +
                     (C4649 * C5260 + C4580 * C5581 + C4648 * C2060 +
                      C4579 * C2376 + C4647 * C681 + C4578 * C879) *
                         C28725 +
                     (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 +
                      C4579 * C2004 + C4647 * C589 + C4578 * C639) *
                         C3109) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C3109 +
                      (C148 * C212 + C28576 * C466) * C28725 +
                      (C148 * C961 + C28576 * C1011) * C3110 +
                      (C148 * C1053 + C28576 * C1251) * C28614) *
                         C1344 +
                     (C3408 + C3409 + C3410 + C3420) * C1345 +
                     (C3413 + C3414 + C3415 + C3421) * C1346) *
                        C28758 * C583 -
                    (((C148 * C2609 + C28576 * C2883) * C28614 +
                      (C148 * C2488 + C28576 * C2553) * C3110 +
                      (C148 * C679 + C28576 * C877) * C28725 +
                      (C148 * C587 + C28576 * C637) * C3109) *
                         C1346 +
                     ((C148 * C2610 + C28576 * C2884) * C28614 +
                      (C148 * C2489 + C28576 * C2554) * C3110 +
                      (C148 * C680 + C28576 * C878) * C28725 +
                      (C148 * C588 + C28576 * C638) * C3109) *
                         C1345 +
                     ((C148 * C2611 + C28576 * C2885) * C28614 +
                      (C148 * C2490 + C28576 * C2555) * C3110 +
                      (C148 * C681 + C28576 * C879) * C28725 +
                      (C148 * C589 + C28576 * C639) * C3109) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C148 * C91 + C28576 * C149) * C11958 +
                     (C148 * C212 + C28576 * C466) * C11885 + C4102 * C11959 +
                     C4467 * C11886 + C9900 * C11960 + C10267 * C11887 +
                     (C148 * C9808 + C28576 * C9886) * C11961 +
                     (C148 * C9954 + C28576 * C10263) * C11888) *
                        C28515 * C28758 * C583 -
                    ((C148 * C11489 + C28576 * C11784) * C11888 +
                     (C148 * C11353 + C28576 * C11413) * C11961 +
                     (C148 * C8387 + C28576 * C8682) * C11887 +
                     (C148 * C8251 + C28576 * C8315) * C11960 +
                     (C148 * C2611 + C28576 * C2885) * C11886 +
                     (C148 * C2490 + C28576 * C2555) * C11959 +
                     (C148 * C681 + C28576 * C879) * C11885 +
                     (C148 * C589 + C28576 * C639) * C11958) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezz[25] += (-std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C4578 +
                     (C8197 + C8198) * C4579 + (C8199 + C8200) * C4580) *
                        C28515 * C28758 * C583 -
                    ((C3472 * C6898 + C8187 + C8187 + C28614 * C7190 +
                      C3471 * C5128 + C8188 + C8188 + C28725 * C5633) *
                         C4580 +
                     (C8200 + C8199) * C4579 + (C8198 + C8197) * C4578) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C28576 * C1344 +
                     (C3498 + C3499) * C28576 * C1345 +
                     (C3500 + C3501) * C28576 * C1346) *
                        C28758 * C583 -
                    ((C3472 * C2488 + C3955 + C3955 + C28614 * C2936 +
                      C3471 * C587 + C3956 + C3956 + C28725 * C915) *
                         C28576 * C1346 +
                     (C3472 * C2489 + C3957 + C3957 + C28614 * C2937 +
                      C3471 * C588 + C3958 + C3958 + C28725 * C916) *
                         C28576 * C1345 +
                     (C3472 * C2490 + C3959 + C3959 + C28614 * C2938 +
                      C3471 * C589 + C3960 + C3960 + C28725 * C917) *
                         C28576 * C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C12166 * C91 + C12171 + C12171 + C11885 * C521 +
                     C12167 * C961 + C12172 + C12172 + C11886 * C1289 +
                     C12168 * C4012 + C12173 + C12173 + C11887 * C4519 +
                     C12169 * C9808 + C12174 + C12174 + C11888 * C10318) *
                        C28576 * C28515 * C28758 * C583 -
                    (C12169 * C11353 + C12486 + C12486 + C11888 * C11847 +
                     C12168 * C8251 + C12487 + C12487 + C11887 * C8743 +
                     C12167 * C2490 + C12488 + C12488 + C11886 * C2938 +
                     C12166 * C589 + C12489 + C12489 + C11885 * C917) *
                        C28576 * C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            C8264 * C28614) *
               C4578 +
           (C7700 + C7712) * C4579 + (C7703 + C7713) * C4580) *
              C956 -
          (((C6170 * C8250 + C8259 + C8259 + C28515 * C8254) * C28614 +
            C7711 * C28725) *
               C4580 +
           ((C6170 * C8251 + C8260 + C8260 + C28515 * C8255) * C28614 +
            C7710 * C28725) *
               C4579 +
           ((C6170 * C4012 + C8261 + C8261 + C28515 * C4018) * C28614 +
            C8264 * C28725) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C4035 + C4036 + C4037) * C28614) *
              C28576 * C956 -
          ((C1353 * C4010 + C4026 + C4026 + C1346 * C4016 + C1351 * C4011 +
            C4027 + C4027 + C1345 * C4017 + C1349 * C4012 + C4028 + C4028 +
            C1344 * C4018) *
               C28614 +
           (C4037 + C4036 + C4035) * C28725) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C11885 +
           C8264 * C11886 + C11363 * C11887 + C12532 * C11888) *
              C28576 * C956 -
          ((C6170 * C12523 + C12529 + C12529 + C28515 * C12525) * C11888 +
           C12532 * C11887 + C11363 * C11886 + C8264 * C11885) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[26] += (-std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C8331 + C8332 + C8333) * C6171 +
                      (C8334 + C8335 + C8336) * C28515) *
                         C28614) *
                        C956 -
                    (((C4649 * C8252 + C4580 * C8316 + C4648 * C8253 +
                       C4579 * C8317 + C4647 * C4015 + C4578 * C4092) *
                          C28515 +
                      (C4649 * C8250 + C4580 * C8314 + C4648 * C8251 +
                       C4579 * C8315 + C4647 * C4012 + C4578 * C4089) *
                          C6171) *
                         C28614 +
                     ((C8336 + C8335 + C8334) * C28515 +
                      (C8333 + C8332 + C8331) * C6171) *
                         C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     (C4104 + C4105 + C4098 + C4099 + C4100 + C4101) * C28614) *
                        C956 -
                    (((C148 * C4013 + C28576 * C4090) * C1346 +
                      (C148 * C4010 + C28576 * C4087) * C1354 +
                      (C148 * C4014 + C28576 * C4091) * C1345 +
                      (C148 * C4011 + C28576 * C4088) * C1352 +
                      (C148 * C4015 + C28576 * C4092) * C1344 +
                      (C148 * C4012 + C28576 * C4089) * C1350) *
                         C28614 +
                     (C4101 + C4100 + C4099 + C4098 + C4105 + C4104) * C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C6171 +
                      (C148 * C96 + C28576 * C154) * C28515) *
                         C11885 +
                     (C12569 + C12570) * C11886 + (C12571 + C12572) * C11887 +
                     (C12579 + C12580) * C11888) *
                        C956 -
                    (((C148 * C12524 + C28576 * C12567) * C28515 +
                      (C148 * C12523 + C28576 * C12566) * C6171) *
                         C11888 +
                     (C12580 + C12579) * C11887 + (C12572 + C12571) * C11886 +
                     (C12570 + C12569) * C11885) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C7830 + C7831) * C6171 + (C7832 + C7833) * C28515) * C4579 +
           ((C7834 + C7835) * C6171 + (C7836 + C7837) * C28515) * C4580) *
              C956 -
          (((C3110 * C8252 + C28614 * C8388 + C3109 * C5694 + C28725 * C5810) *
                C28515 +
            (C3110 * C8250 + C28614 * C8386 + C3109 * C5692 + C28725 * C5808) *
                C6171) *
               C4580 +
           ((C3110 * C8253 + C28614 * C8389 + C3109 * C2493 + C28725 * C2614) *
                C28515 +
            (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
                C6171) *
               C4579 +
           ((C3110 * C4015 + C28614 * C4160 + C3109 * C965 + C28725 * C1057) *
                C28515 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C6171) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C956 -
          ((C3110 * C4013 + C28614 * C4158 + C3109 * C963 + C28725 * C1055) *
               C1346 +
           (C3110 * C4010 + C28614 * C4155 + C3109 * C959 + C28725 * C1051) *
               C1354 +
           (C3110 * C4014 + C28614 * C4159 + C3109 * C964 + C28725 * C1056) *
               C1345 +
           (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
               C1352 +
           (C3110 * C4015 + C28614 * C4160 + C3109 * C965 + C28725 * C1057) *
               C1344 +
           (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
               C1350) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C6171 +
           (C11958 * C96 + C11885 * C217 + C11959 * C965 + C11886 * C1057 +
            C11960 * C4015 + C11887 * C4160 + C11961 * C9810 + C11888 * C9956) *
               C28515) *
              C28576 * C956 -
          ((C11961 * C12524 + C11888 * C12615 + C11960 * C9810 +
            C11887 * C9956 + C11959 * C4015 + C11886 * C4160 + C11958 * C965 +
            C11885 * C1057) *
               C28515 +
           (C11961 * C12523 + C11888 * C12614 + C11960 * C9808 +
            C11887 * C9954 + C11959 * C4012 + C11886 * C4157 + C11958 * C961 +
            C11885 * C1053) *
               C6171) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C4647 +
            (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
            C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
               C28725 +
           (C8453 + C8454 + C8447 + C8448 + C8449 + C8450) * C28614) *
              C956 -
          (((C6171 * C8314 + C28515 * C8440) * C4580 +
            (C6171 * C8250 + C28515 * C8252) * C4649 +
            (C6171 * C8315 + C28515 * C8441) * C4579 +
            (C6171 * C8251 + C28515 * C8253) * C4648 +
            (C6171 * C4089 + C28515 * C4213) * C4578 +
            (C6171 * C4012 + C28515 * C4015) * C4647) *
               C28614 +
           (C8450 + C8449 + C8448 + C8447 + C8454 + C8453) * C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
             C1354 * C151 + C1346 * C276) *
                C28576) *
               C28725 +
           ((C4227 + C4228 + C4229) * C148 + (C4230 + C4231 + C4232) * C28576) *
               C28614) *
              C956 -
          (((C1354 * C4087 + C1346 * C4211 + C1352 * C4088 + C1345 * C4212 +
             C1350 * C4089 + C1344 * C4213) *
                C28576 +
            (C1354 * C4010 + C1346 * C4013 + C1352 * C4011 + C1345 * C4014 +
             C1350 * C4012 + C1344 * C4015) *
                C148) *
               C28614 +
           ((C4232 + C4231 + C4230) * C28576 + (C4229 + C4228 + C4227) * C148) *
               C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C148 +
            (C6171 * C149 + C28515 * C274) * C28576) *
               C11885 +
           (C12652 + C12653) * C11886 + (C12654 + C12655) * C11887 +
           (C12662 + C12663) * C11888) *
              C956 -
          (((C6171 * C12566 + C28515 * C12650) * C28576 +
            (C6171 * C12523 + C28515 * C12524) * C148) *
               C11888 +
           (C12663 + C12662) * C11887 + (C12655 + C12654) * C11886 +
           (C12653 + C12652) * C11885) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4824 * C91 + C4828 + C4828 + C4578 * C314 + C4825 * C589 + C4829 +
            C4829 + C4579 * C761 + C4826 * C1927 + C4830 + C4830 +
            C4580 * C2199) *
               C28515 * C28725 +
           (C8522 + C8523 + C8524) * C28515 * C28614) *
              C956 -
          ((C4826 * C8250 + C8513 + C8513 + C4580 * C8504 + C4825 * C8251 +
            C8514 + C8514 + C4579 * C8505 + C4824 * C4012 + C8515 + C8515 +
            C4578 * C4284) *
               C28515 * C28614 +
           (C8524 + C8523 + C8522) * C28515 * C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 + C337 * C1345 +
            C338 * C1346) *
               C28725 +
           (C4296 + C4288 + C4289) * C28614) *
              C956 -
          (((C313 * C4010 + C4290 + C4290 + C28576 * C4282) * C1346 +
            (C313 * C4011 + C4291 + C4291 + C28576 * C4283) * C1345 +
            (C313 * C4012 + C4292 + C4292 + C28576 * C4284) * C1344) *
               C28614 +
           (C4289 + C4288 + C4296) * C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28576 * C314) * C28515 * C11885 +
           C12699 * C11886 + C12700 * C11887 + C12707 * C11888) *
              C956 -
          ((C313 * C12523 + C12703 + C12703 + C28576 * C12697) * C28515 *
               C11888 +
           C12707 * C11887 + C12700 * C11886 + C12699 * C11885) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (-std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C7830 + C7831) * C4648 + (C8011 + C8012) * C4579 +
           (C7834 + C7835) * C4649 + (C8013 + C8014) * C4580) *
              C28515 * C956 -
          ((C3110 * C8314 + C28614 * C8574 + C3109 * C5754 + C28725 * C5972) *
               C4580 +
           (C3110 * C8250 + C28614 * C8386 + C3109 * C5692 + C28725 * C5808) *
               C4649 +
           (C3110 * C8315 + C28614 * C8575 + C3109 * C2555 + C28725 * C2779) *
               C4579 +
           (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
               C4648 +
           (C3110 * C4089 + C28614 * C4348 + C3109 * C1011 + C28725 * C1175) *
               C4578 +
           (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
               C4647) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C956 -
          (((C3110 * C4087 + C28614 * C4346 + C3109 * C1009 + C28725 * C1173) *
                C28576 +
            (C3110 * C4010 + C28614 * C4155 + C3109 * C959 + C28725 * C1051) *
                C148) *
               C1346 +
           ((C3110 * C4088 + C28614 * C4347 + C3109 * C1010 + C28725 * C1174) *
                C28576 +
            (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
                C148) *
               C1345 +
           ((C3110 * C4089 + C28614 * C4348 + C3109 * C1011 + C28725 * C1175) *
                C28576 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C148) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11958 * C91 + C11885 * C212 + C11959 * C961 + C11886 * C1053 +
            C11960 * C4012 + C11887 * C4157 + C11961 * C9808 + C11888 * C9954) *
               C148 +
           (C11958 * C149 + C11885 * C373 + C11959 * C1011 + C11886 * C1175 +
            C11960 * C4089 + C11887 * C4348 + C11961 * C9886 +
            C11888 * C10147) *
               C28576) *
              C28515 * C956 -
          ((C11961 * C12566 + C11888 * C12741 + C11960 * C9886 +
            C11887 * C10147 + C11959 * C4089 + C11886 * C4348 + C11958 * C1011 +
            C11885 * C1175) *
               C28576 +
           (C11961 * C12523 + C11888 * C12614 + C11960 * C9808 +
            C11887 * C9954 + C11959 * C4012 + C11886 * C4157 + C11958 * C961 +
            C11885 * C1053) *
               C148) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (-std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C3109 +
            (C6171 * C212 + C28515 * C427) * C28725 + C8451 * C3110 +
            C8631 * C28614) *
               C4578 +
           (C8065 + C8066 + C8067 + C8077) * C4579 +
           (C8070 + C8071 + C8072 + C8078) * C4580) *
              C956 -
          (((C6171 * C8386 + C28515 * C8626) * C28614 +
            (C6171 * C8250 + C28515 * C8252) * C3110 + C8076 * C28725 +
            C7898 * C3109) *
               C4580 +
           ((C6171 * C8387 + C28515 * C8627) * C28614 +
            (C6171 * C8251 + C28515 * C8253) * C3110 + C8075 * C28725 +
            C7896 * C3109) *
               C4579 +
           ((C6171 * C4157 + C28515 * C4401) * C28614 +
            (C6171 * C4012 + C28515 * C4015) * C3110 + C8631 * C28725 +
            C8451 * C3109) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C3109 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
            C1354 * C214 + C1346 * C429) *
               C28725 +
           (C4227 + C4228 + C4229) * C3110 + (C4409 + C4410 + C4411) * C28614) *
              C28576 * C956 -
          ((C1354 * C4155 + C1346 * C4399 + C1352 * C4156 + C1345 * C4400 +
            C1350 * C4157 + C1344 * C4401) *
               C28614 +
           (C1354 * C4010 + C1346 * C4013 + C1352 * C4011 + C1345 * C4014 +
            C1350 * C4012 + C1344 * C4015) *
               C3110 +
           (C4411 + C4410 + C4409) * C28725 + (C4229 + C4228 + C4227) * C3109) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C11958 +
           (C6171 * C212 + C28515 * C427) * C11885 + C8451 * C11959 +
           C8631 * C11886 + C11553 * C11960 + C11734 * C11887 +
           C12660 * C11961 + C12780 * C11888) *
              C28576 * C956 -
          ((C6171 * C12614 + C28515 * C12776) * C11888 +
           (C6171 * C12523 + C28515 * C12524) * C11961 + C12780 * C11887 +
           C12660 * C11960 + C11734 * C11886 + C11553 * C11959 +
           C8631 * C11885 + C8451 * C11958) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (-std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C3109 +
           (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
            C4649 * C2060 + C4580 * C2376) *
               C28725 +
           (C8331 + C8332 + C8333) * C3110 + (C8690 + C8691 + C8692) * C28614) *
              C28515 * C956 -
          ((C4649 * C8386 + C4580 * C8681 + C4648 * C8387 + C4579 * C8682 +
            C4647 * C4157 + C4578 * C4463) *
               C28614 +
           (C4649 * C8250 + C4580 * C8314 + C4648 * C8251 + C4579 * C8315 +
            C4647 * C4012 + C4578 * C4089) *
               C3110 +
           (C8692 + C8691 + C8690) * C28725 + (C8333 + C8332 + C8331) * C3109) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C3109 +
            (C148 * C212 + C28576 * C466) * C28725 + C4102 * C3110 +
            C4467 * C28614) *
               C1344 +
           (C3408 + C3409 + C3410 + C3420) * C1345 +
           (C3413 + C3414 + C3415 + C3421) * C1346) *
              C956 -
          (((C148 * C4155 + C28576 * C4461) * C28614 +
            (C148 * C4010 + C28576 * C4087) * C3110 + C3419 * C28725 +
            C3058 * C3109) *
               C1346 +
           ((C148 * C4156 + C28576 * C4462) * C28614 +
            (C148 * C4011 + C28576 * C4088) * C3110 + C3418 * C28725 +
            C3056 * C3109) *
               C1345 +
           ((C148 * C4157 + C28576 * C4463) * C28614 +
            (C148 * C4012 + C28576 * C4089) * C3110 + C4467 * C28725 +
            C4102 * C3109) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C11958 +
           (C148 * C212 + C28576 * C466) * C11885 + C4102 * C11959 +
           C4467 * C11886 + C9900 * C11960 + C10267 * C11887 + C12577 * C11961 +
           C12818 * C11888) *
              C28515 * C956 -
          ((C148 * C12614 + C28576 * C12814) * C11888 +
           (C148 * C12523 + C28576 * C12566) * C11961 + C12818 * C11887 +
           C12577 * C11960 + C10267 * C11886 + C9900 * C11959 + C4467 * C11885 +
           C4102 * C11958) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[26] += (-std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C4578 +
                     (C8197 + C8198) * C4579 + (C8199 + C8200) * C4580) *
                        C28515 * C956 -
                    ((C3472 * C8250 + C8745 + C8745 + C28614 * C8742 +
                      C3471 * C5692 + C8746 + C8746 + C28725 * C6128) *
                         C4580 +
                     (C3472 * C8251 + C8747 + C8747 + C28614 * C8743 +
                      C3471 * C2490 + C8748 + C8748 + C28725 * C2938) *
                         C4579 +
                     (C3472 * C4012 + C4525 + C4525 + C28614 * C4519 +
                      C3471 * C961 + C4526 + C4526 + C28725 * C1289) *
                         C4578) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C28576 * C1344 +
                     (C3498 + C3499) * C28576 * C1345 +
                     (C3500 + C3501) * C28576 * C1346) *
                        C956 -
                    ((C3472 * C4010 + C4521 + C4521 + C28614 * C4517 +
                      C3471 * C959 + C4522 + C4522 + C28725 * C1287) *
                         C28576 * C1346 +
                     (C3472 * C4011 + C4523 + C4523 + C28614 * C4518 +
                      C3471 * C960 + C4524 + C4524 + C28725 * C1288) *
                         C28576 * C1345 +
                     (C3472 * C4012 + C4525 + C4525 + C28614 * C4519 +
                      C3471 * C961 + C4526 + C4526 + C28725 * C1289) *
                         C28576 * C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((C12166 * C91 + C12171 + C12171 + C11885 * C521 +
                     C12167 * C961 + C12172 + C12172 + C11886 * C1289 +
                     C12168 * C4012 + C12173 + C12173 + C11887 * C4519 +
                     C12169 * C9808 + C12174 + C12174 + C11888 * C10318) *
                        C28576 * C28515 * C956 -
                    (C12169 * C12523 + C12854 + C12854 + C11888 * C12852 +
                     C12168 * C9808 + C12855 + C12855 + C11887 * C10318 +
                     C12167 * C4012 + C12856 + C12856 + C11886 * C4519 +
                     C12166 * C961 + C12857 + C12857 + C11885 * C1289) *
                        C28576 * C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                      C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                      C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                         C17890 +
                     (C12912 * C961 + C13973 + C13973 + C28749 * C969 +
                      C12914 * C960 + C13972 + C13972 + C28738 * C968 +
                      C12916 * C959 + C13971 + C13971 + C12909 * C967) *
                         C28614) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C12916 * C958 + C17893 + C17893 + C12909 * C966 +
                      C12914 * C959 + C17894 + C17894 + C28738 * C967 +
                      C12912 * C960 + C17895 + C17895 + C28749 * C968) *
                         C28614 +
                     (C12916 * C94 + C12928 + C12928 + C12909 * C104 +
                      C12914 * C93 + C12929 + C12929 + C28738 * C103 +
                      C12912 * C92 + C12930 + C12930 + C28749 * C102) *
                         C17890) *
                        C28576 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C12913 +
                      (C148 * C96 + C28576 * C154) * C28749 + C172 * C12915 +
                      C173 * C28738 + C174 * C12917 + C175 * C12909) *
                         C17890 +
                     (C4102 * C12913 + C4103 * C28749 + C3056 * C12915 +
                      C3057 * C28738 + C3058 * C12917 + C3059 * C12909) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C148 * C962 + C28576 * C1012) * C12909 +
                      (C148 * C958 + C28576 * C1008) * C12917 + C3059 * C28738 +
                      C3058 * C12915 + C3057 * C28749 + C3056 * C12913) *
                         C28614 +
                     (C177 * C12909 + C176 * C12917 + C175 * C28738 +
                      C174 * C12915 + C173 * C28749 + C172 * C12913) *
                         C17890) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C12913 +
           (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
               C28749 +
           (C18014 + C18015) * C12915 + (C18016 + C18017) * C28738 +
           (C18018 + C18019) * C12917 + (C18020 + C18021) * C12909) *
              C28576 * C28758 * C28759 * C81 -
          ((C17996 * C962 + C28614 * C1054 + C17995 * C99 + C17890 * C220) *
               C12909 +
           (C17996 * C958 + C28614 * C1050 + C17995 * C94 + C17890 * C215) *
               C12917 +
           (C18021 + C18020) * C28738 + (C18019 + C18018) * C12915 +
           (C18017 + C18016) * C28749 + (C18015 + C18014) * C12913) *
              C28576 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                       C28738 * C97 + C12917 * C93 + C12909 * C98) *
                          C148 +
                      (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                       C28738 * C275 + C12917 * C151 + C12909 * C276) *
                          C28576) *
                         C17890 +
                     ((C12913 * C961 + C28749 * C965 + C12915 * C960 +
                       C28738 * C964 + C12917 * C959 + C12909 * C963) *
                          C148 +
                      (C12913 * C1011 + C28749 * C1095 + C12915 * C1010 +
                       C28738 * C1094 + C12917 * C1009 + C12909 * C1093) *
                          C28576) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C12917 * C1008 + C12909 * C1092 + C12915 * C1009 +
                       C28738 * C1093 + C12913 * C1010 + C28749 * C1094) *
                          C28576 +
                      (C12917 * C958 + C12909 * C962 + C12915 * C959 +
                       C28738 * C963 + C12913 * C960 + C28749 * C964) *
                          C148) *
                         C28614 +
                     ((C12917 * C152 + C12909 * C277 + C12915 * C151 +
                       C28738 * C276 + C12913 * C150 + C28749 * C275) *
                          C28576 +
                      (C12917 * C94 + C12909 * C99 + C12915 * C93 +
                       C28738 * C98 + C12913 * C92 + C28749 * C97) *
                          C148) *
                         C17890) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28749 +
            C337 * C28738 + C338 * C12909) *
               C17890 +
           (C4295 * C28749 + C3244 * C28738 + C3245 * C12909) * C28614) *
              C28758 * C28759 * C81 -
          (((C313 * C958 + C1135 + C1135 + C28576 * C1130) * C12909 +
            C3245 * C28738 + C3244 * C28749) *
               C28614 +
           (C339 * C12909 + C338 * C28738 + C337 * C28749) * C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[27] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C148 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28576) *
               C28749 +
           ((C18014 + C18015) * C148 + (C18180 + C18181) * C28576) * C28738 +
           ((C18018 + C18019) * C148 + (C18182 + C18183) * C28576) * C12909) *
              C28758 * C28759 * C81 -
          (((C17996 * C1008 + C28614 * C1172 + C17995 * C152 + C17890 * C376) *
                C28576 +
            (C17996 * C958 + C28614 * C1050 + C17995 * C94 + C17890 * C215) *
                C148) *
               C12909 +
           ((C18183 + C18182) * C28576 + (C18019 + C18018) * C148) * C28738 +
           ((C18181 + C18180) * C28576 + (C18015 + C18014) * C148) * C28749) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C17995 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C17890 +
                     (C12913 * C961 + C28749 * C965 + C12915 * C960 +
                      C28738 * C964 + C12917 * C959 + C12909 * C963) *
                         C17996 +
                     (C12913 * C1053 + C28749 * C1213 + C12915 * C1052 +
                      C28738 * C1212 + C12917 * C1051 + C12909 * C1211) *
                         C28614) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C12917 * C1050 + C12909 * C1210 + C12915 * C1051 +
                      C28738 * C1211 + C12913 * C1052 + C28749 * C1212) *
                         C28614 +
                     (C12917 * C958 + C12909 * C962 + C12915 * C959 +
                      C28738 * C963 + C12913 * C960 + C28749 * C964) *
                         C17996 +
                     (C12917 * C215 + C12909 * C430 + C12915 * C214 +
                      C28738 * C429 + C12913 * C213 + C28749 * C428) *
                         C17890 +
                     (C12917 * C94 + C12909 * C99 + C12915 * C93 +
                      C28738 * C98 + C12913 * C92 + C28749 * C97) *
                         C17995) *
                        C28576 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C17995 +
                      (C148 * C212 + C28576 * C466) * C17890 + C4102 * C17996 +
                      C4467 * C28614) *
                         C28749 +
                     (C18284 + C18285 + C18286 + C18287) * C28738 +
                     (C18288 + C18289 + C18290 + C18291) * C12909) *
                        C28758 * C28759 * C81 -
                    (((C148 * C1050 + C28576 * C1248) * C28614 +
                      (C148 * C958 + C28576 * C1008) * C17996 + C483 * C17890 +
                      C176 * C17995) *
                         C12909 +
                     (C18291 + C18290 + C18289 + C18288) * C28738 +
                     (C18287 + C18286 + C18285 + C18284) * C28749) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[27] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28576 * C28749 +
                     (C18368 + C18369) * C28576 * C28738 +
                     (C18370 + C18371) * C28576 * C12909) *
                        C28758 * C28759 * C81 -
                    ((C18342 * C958 + C18358 + C18358 + C28614 * C1286 +
                      C18341 * C94 + C18359 + C18359 + C17890 * C524) *
                         C28576 * C12909 +
                     (C18371 + C18370) * C28576 * C28738 +
                     (C18369 + C18368) * C28576 * C28749) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                      C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                      C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                         C17890 +
                     (C12912 * C961 + C13973 + C13973 + C28749 * C969 +
                      C12914 * C960 + C13972 + C13972 + C28738 * C968 +
                      C12916 * C959 + C13971 + C13971 + C12909 * C967) *
                         C28614) *
                        C28576 * C28758 * C583 -
                    ((C12916 * C2488 + C13968 + C13968 + C12909 * C2494 +
                      C12914 * C2489 + C13969 + C13969 + C28738 * C2495 +
                      C12912 * C2490 + C13970 + C13970 + C28749 * C2496) *
                         C28614 +
                     (C13478 + C13477 + C13476) * C17890) *
                        C28576 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexy[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C12913 +
                      (C148 * C96 + C28576 * C154) * C28749 + C172 * C12915 +
                      C173 * C28738 + C174 * C12917 + C175 * C12909) *
                         C17890 +
                     (C4102 * C12913 + C4103 * C28749 + C3056 * C12915 +
                      C3057 * C28738 + C3058 * C12917 + C3059 * C12909) *
                         C28614) *
                        C28758 * C583 -
                    (((C148 * C2491 + C28576 * C2556) * C12909 +
                      (C148 * C2488 + C28576 * C2553) * C12917 +
                      (C148 * C2492 + C28576 * C2557) * C28738 +
                      (C148 * C2489 + C28576 * C2554) * C12915 +
                      (C148 * C2493 + C28576 * C2558) * C28749 +
                      (C148 * C2490 + C28576 * C2555) * C12913) *
                         C28614 +
                     ((C148 * C591 + C28576 * C641) * C12909 +
                      (C148 * C587 + C28576 * C637) * C12917 +
                      (C148 * C592 + C28576 * C642) * C28738 +
                      (C148 * C588 + C28576 * C638) * C12915 +
                      (C148 * C593 + C28576 * C643) * C28749 +
                      (C148 * C589 + C28576 * C639) * C12913) *
                         C17890) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C12913 +
           (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
               C28749 +
           (C18014 + C18015) * C12915 + (C18016 + C18017) * C28738 +
           (C18018 + C18019) * C12917 + (C18020 + C18021) * C12909) *
              C28576 * C28758 * C583 -
          ((C17996 * C2491 + C28614 * C2612 + C17995 * C591 + C17890 * C683) *
               C12909 +
           (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
               C12917 +
           (C17996 * C2492 + C28614 * C2613 + C17995 * C592 + C17890 * C684) *
               C28738 +
           (C17996 * C2489 + C28614 * C2610 + C17995 * C588 + C17890 * C680) *
               C12915 +
           (C17996 * C2493 + C28614 * C2614 + C17995 * C593 + C17890 * C685) *
               C28749 +
           (C17996 * C2490 + C28614 * C2611 + C17995 * C589 + C17890 * C681) *
               C12913) *
              C28576 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                       C28738 * C97 + C12917 * C93 + C12909 * C98) *
                          C148 +
                      (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                       C28738 * C275 + C12917 * C151 + C12909 * C276) *
                          C28576) *
                         C17890 +
                     ((C12913 * C961 + C28749 * C965 + C12915 * C960 +
                       C28738 * C964 + C12917 * C959 + C12909 * C963) *
                          C148 +
                      (C12913 * C1011 + C28749 * C1095 + C12915 * C1010 +
                       C28738 * C1094 + C12917 * C1009 + C12909 * C1093) *
                          C28576) *
                         C28614) *
                        C28758 * C583 -
                    (((C12917 * C2553 + C12909 * C2665 + C12915 * C2554 +
                       C28738 * C2666 + C12913 * C2555 + C28749 * C2667) *
                          C28576 +
                      (C12917 * C2488 + C12909 * C2491 + C12915 * C2489 +
                       C28738 * C2492 + C12913 * C2490 + C28749 * C2493) *
                          C148) *
                         C28614 +
                     ((C13652 + C13651 + C13650) * C28576 +
                      (C13649 + C13648 + C13647) * C148) *
                         C17890) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28749 +
            C337 * C28738 + C338 * C12909) *
               C17890 +
           (C4295 * C28749 + C3244 * C28738 + C3245 * C12909) * C28614) *
              C28758 * C583 -
          (((C313 * C2488 + C3752 + C3752 + C28576 * C2718) * C12909 +
            (C313 * C2489 + C3753 + C3753 + C28576 * C2719) * C28738 +
            (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C28749) *
               C28614 +
           ((C313 * C587 + C764 + C764 + C28576 * C759) * C12909 +
            (C313 * C588 + C765 + C765 + C28576 * C760) * C28738 +
            (C313 * C589 + C766 + C766 + C28576 * C761) * C28749) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C148 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28576) *
               C28749 +
           ((C18014 + C18015) * C148 + (C18180 + C18181) * C28576) * C28738 +
           ((C18018 + C18019) * C148 + (C18182 + C18183) * C28576) * C12909) *
              C28758 * C583 -
          (((C17996 * C2553 + C28614 * C2777 + C17995 * C637 + C17890 * C801) *
                C28576 +
            (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
                C148) *
               C12909 +
           ((C17996 * C2554 + C28614 * C2778 + C17995 * C638 + C17890 * C802) *
                C28576 +
            (C17996 * C2489 + C28614 * C2610 + C17995 * C588 + C17890 * C680) *
                C148) *
               C28738 +
           ((C17996 * C2555 + C28614 * C2779 + C17995 * C639 + C17890 * C803) *
                C28576 +
            (C17996 * C2490 + C28614 * C2611 + C17995 * C589 + C17890 * C681) *
                C148) *
               C28749) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C17995 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C17890 +
                     (C12913 * C961 + C28749 * C965 + C12915 * C960 +
                      C28738 * C964 + C12917 * C959 + C12909 * C963) *
                         C17996 +
                     (C12913 * C1053 + C28749 * C1213 + C12915 * C1052 +
                      C28738 * C1212 + C12917 * C1051 + C12909 * C1211) *
                         C28614) *
                        C28576 * C28758 * C583 -
                    ((C12917 * C2609 + C12909 * C2830 + C12915 * C2610 +
                      C28738 * C2831 + C12913 * C2611 + C28749 * C2832) *
                         C28614 +
                     (C12917 * C2488 + C12909 * C2491 + C12915 * C2489 +
                      C28738 * C2492 + C12913 * C2490 + C28749 * C2493) *
                         C17996 +
                     (C13817 + C13816 + C13815) * C17890 +
                     (C13649 + C13648 + C13647) * C17995) *
                        C28576 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezy[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C17995 +
                      (C148 * C212 + C28576 * C466) * C17890 + C4102 * C17996 +
                      C4467 * C28614) *
                         C28749 +
                     (C18284 + C18285 + C18286 + C18287) * C28738 +
                     (C18288 + C18289 + C18290 + C18291) * C12909) *
                        C28758 * C583 -
                    (((C148 * C2609 + C28576 * C2883) * C28614 +
                      (C148 * C2488 + C28576 * C2553) * C17996 +
                      (C148 * C679 + C28576 * C877) * C17890 +
                      (C148 * C587 + C28576 * C637) * C17995) *
                         C12909 +
                     ((C148 * C2610 + C28576 * C2884) * C28614 +
                      (C148 * C2489 + C28576 * C2554) * C17996 +
                      (C148 * C680 + C28576 * C878) * C17890 +
                      (C148 * C588 + C28576 * C638) * C17995) *
                         C28738 +
                     ((C148 * C2611 + C28576 * C2885) * C28614 +
                      (C148 * C2490 + C28576 * C2555) * C17996 +
                      (C148 * C681 + C28576 * C879) * C17890 +
                      (C148 * C589 + C28576 * C639) * C17995) *
                         C28749) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezz[28] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28576 * C28749 +
                     (C18368 + C18369) * C28576 * C28738 +
                     (C18370 + C18371) * C28576 * C12909) *
                        C28758 * C583 -
                    ((C18342 * C2488 + C18822 + C18822 + C28614 * C2936 +
                      C18341 * C587 + C18823 + C18823 + C17890 * C915) *
                         C28576 * C12909 +
                     (C18342 * C2489 + C18824 + C18824 + C28614 * C2937 +
                      C18341 * C588 + C18825 + C18825 + C17890 * C916) *
                         C28576 * C28738 +
                     (C18342 * C2490 + C18826 + C18826 + C28614 * C2938 +
                      C18341 * C589 + C18827 + C18827 + C17890 * C917) *
                         C28576 * C28749) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12912 * C91 + C12919 + C12919 + C28749 * C101 +
                      C12914 * C92 + C12920 + C12920 + C28738 * C102 +
                      C12916 * C93 + C12921 + C12921 + C12909 * C103) *
                         C17890 +
                     (C18893 + C18894 + C18895) * C28614) *
                        C28576 * C956 -
                    ((C12916 * C4010 + C18884 + C18884 + C12909 * C4016 +
                      C12914 * C4011 + C18885 + C18885 + C28738 * C4017 +
                      C12912 * C4012 + C18886 + C18886 + C28749 * C4018) *
                         C28614 +
                     (C18895 + C18894 + C18893) * C17890) *
                        C28576 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C12913 +
            (C148 * C96 + C28576 * C154) * C28749 + C172 * C12915 +
            C173 * C28738 + C174 * C12917 + C175 * C12909) *
               C17890 +
           (C18946 + C18947 + C18948 + C18949 + C18950 + C18951) * C28614) *
              C956 -
          (((C148 * C4013 + C28576 * C4090) * C12909 +
            (C148 * C4010 + C28576 * C4087) * C12917 + C8863 * C28738 +
            C8862 * C12915 + C9901 * C28749 + C9900 * C12913) *
               C28614 +
           (C18951 + C18950 + C18949 + C18948 + C18947 + C18946) * C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
               C12913 +
           (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
               C28749 +
           (C18014 + C18015) * C12915 + (C18016 + C18017) * C28738 +
           (C18018 + C18019) * C12917 + (C18020 + C18021) * C12909) *
              C28576 * C956 -
          ((C17996 * C4013 + C28614 * C4158 + C17995 * C963 + C17890 * C1055) *
               C12909 +
           (C17996 * C4010 + C28614 * C4155 + C17995 * C959 + C17890 * C1051) *
               C12917 +
           (C17996 * C4014 + C28614 * C4159 + C17995 * C964 + C17890 * C1056) *
               C28738 +
           (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
               C12915 +
           (C17996 * C4015 + C28614 * C4160 + C17995 * C965 + C17890 * C1057) *
               C28749 +
           (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
               C12913) *
              C28576 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                       C28738 * C97 + C12917 * C93 + C12909 * C98) *
                          C148 +
                      (C12913 * C149 + C28749 * C274 + C12915 * C150 +
                       C28738 * C275 + C12917 * C151 + C12909 * C276) *
                          C28576) *
                         C17890 +
                     ((C19064 + C19065 + C19066) * C148 +
                      (C19067 + C19068 + C19069) * C28576) *
                         C28614) *
                        C956 -
                    (((C12917 * C4087 + C12909 * C4211 + C12915 * C4088 +
                       C28738 * C4212 + C12913 * C4089 + C28749 * C4213) *
                          C28576 +
                      (C12917 * C4010 + C12909 * C4013 + C12915 * C4011 +
                       C28738 * C4014 + C12913 * C4012 + C28749 * C4015) *
                          C148) *
                         C28614 +
                     ((C19069 + C19068 + C19067) * C28576 +
                      (C19066 + C19065 + C19064) * C148) *
                         C17890) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C28749 +
                      C337 * C28738 + C338 * C12909) *
                         C17890 +
                     (C19120 + C19121 + C19122) * C28614) *
                        C956 -
                    (((C313 * C4010 + C4290 + C4290 + C28576 * C4282) * C12909 +
                      C9039 * C28738 + C10095 * C28749) *
                         C28614 +
                     (C19122 + C19121 + C19120) * C17890) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C148 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28576) *
               C28749 +
           ((C18014 + C18015) * C148 + (C18180 + C18181) * C28576) * C28738 +
           ((C18018 + C18019) * C148 + (C18182 + C18183) * C28576) * C12909) *
              C956 -
          (((C17996 * C4087 + C28614 * C4346 + C17995 * C1009 +
             C17890 * C1173) *
                C28576 +
            (C17996 * C4010 + C28614 * C4155 + C17995 * C959 + C17890 * C1051) *
                C148) *
               C12909 +
           ((C17996 * C4088 + C28614 * C4347 + C17995 * C1010 +
             C17890 * C1174) *
                C28576 +
            (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
                C148) *
               C28738 +
           ((C17996 * C4089 + C28614 * C4348 + C17995 * C1011 +
             C17890 * C1175) *
                C28576 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C148) *
               C28749) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C12913 * C91 + C28749 * C96 + C12915 * C92 +
                      C28738 * C97 + C12917 * C93 + C12909 * C98) *
                         C17995 +
                     (C12913 * C212 + C28749 * C427 + C12915 * C213 +
                      C28738 * C428 + C12917 * C214 + C12909 * C429) *
                         C17890 +
                     (C19064 + C19065 + C19066) * C17996 +
                     (C19229 + C19230 + C19231) * C28614) *
                        C28576 * C956 -
                    ((C12917 * C4155 + C12909 * C4399 + C12915 * C4156 +
                      C28738 * C4400 + C12913 * C4157 + C28749 * C4401) *
                         C28614 +
                     (C12917 * C4010 + C12909 * C4013 + C12915 * C4011 +
                      C28738 * C4014 + C12913 * C4012 + C28749 * C4015) *
                         C17996 +
                     (C19231 + C19230 + C19229) * C17890 +
                     (C19066 + C19065 + C19064) * C17995) *
                        C28576 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezy[29] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C17995 +
            (C148 * C212 + C28576 * C466) * C17890 + C4102 * C17996 +
            C4467 * C28614) *
               C28749 +
           (C18284 + C18285 + C18286 + C18287) * C28738 +
           (C18288 + C18289 + C18290 + C18291) * C12909) *
              C956 -
          (((C148 * C4155 + C28576 * C4461) * C28614 +
            (C148 * C4010 + C28576 * C4087) * C17996 + C3419 * C17890 +
            C3058 * C17995) *
               C12909 +
           (C9206 * C28614 + C8862 * C17996 + C3418 * C17890 + C3056 * C17995) *
               C28738 +
           (C10267 * C28614 + C9900 * C17996 + C4467 * C17890 +
            C4102 * C17995) *
               C28749) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[29] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C18341 * C91 + C18344 + C18344 + C17890 * C521 +
                      C18342 * C961 + C18345 + C18345 + C28614 * C1289) *
                         C28576 * C28749 +
                     (C18368 + C18369) * C28576 * C28738 +
                     (C18370 + C18371) * C28576 * C12909) *
                        C956 -
                    ((C18342 * C4010 + C19332 + C19332 + C28614 * C4517 +
                      C18341 * C959 + C19333 + C19333 + C17890 * C1287) *
                         C28576 * C12909 +
                     (C18342 * C4011 + C19334 + C19334 + C28614 * C4518 +
                      C18341 * C960 + C19335 + C19335 + C17890 * C1288) *
                         C28576 * C28738 +
                     (C18342 * C4012 + C19336 + C19336 + C28614 * C4519 +
                      C18341 * C961 + C19337 + C19337 + C17890 * C1289) *
                         C28576 * C28749) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 + C14436 * C92 +
             C14440 + C14440 + C28520 * C102) *
                C17890 +
            (C17259 + C17260) * C28614) *
               C28724 +
           ((C14985 + C14986) * C17890 + (C16629 + C16630) * C28614) * C28590) *
              C28758 * C28759 * C81 -
          (((C14436 * C2488 + C15967 + C15967 + C28520 * C2494 +
             C14434 * C2489 + C15968 + C15968 + C14429 * C2495) *
                C28614 +
            (C14436 * C587 + C14447 + C14447 + C28520 * C595 + C14434 * C588 +
             C14448 + C14448 + C14429 * C596) *
                C17890) *
               C28590 +
           ((C14436 * C959 + C15969 + C15969 + C28520 * C967 + C14434 * C960 +
             C15970 + C15970 + C14429 * C968) *
                C28614 +
            (C14436 * C93 + C14449 + C14449 + C28520 * C103 + C14434 * C92 +
             C14450 + C14450 + C14429 * C102) *
                C17890) *
               C28724) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C14435 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C14429 +
            (C1436 + C1437) * C14437 + (C1438 + C1439) * C28520) *
               C17890 +
           ((C11432 + C11433) * C14435 + (C11434 + C11435) * C14429 +
            (C19478 + C19479) * C14437 + (C19480 + C19481) * C28520) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C1418 * C2491 + C28590 * C2556 + C1417 * C963 + C28724 * C1013) *
                C28520 +
            (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
                C14437 +
            (C19481 + C19480) * C14429 + (C19479 + C19478) * C14435) *
               C28614 +
           ((C1443 + C1442) * C28520 + (C1441 + C1440) * C14437 +
            (C1439 + C1438) * C14429 + (C1437 + C1436) * C14435) *
               C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C14435 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C14429 +
            (C18014 + C18015) * C14437 + (C18016 + C18017) * C28520) *
               C28724 +
           ((C17995 * C589 + C17890 * C681 + C17996 * C2490 + C28614 * C2611) *
                C14435 +
            (C17995 * C593 + C17890 * C685 + C17996 * C2493 + C28614 * C2614) *
                C14429 +
            (C19556 + C19557) * C14437 + (C19558 + C19559) * C28520) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C17996 * C2491 + C28614 * C2612 + C17995 * C591 + C17890 * C683) *
                C28520 +
            (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
                C14437 +
            (C19559 + C19558) * C14429 + (C19557 + C19556) * C14435) *
               C28590 +
           ((C18021 + C18020) * C28520 + (C18019 + C18018) * C14437 +
            (C18017 + C18016) * C14429 + (C18015 + C18014) * C14435) *
               C28724) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C1417 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28724 +
            (C15163 + C15164) * C1418 + (C15165 + C15166) * C28590) *
               C17890 +
           ((C17479 + C17480) * C1417 + (C17481 + C17482) * C28724 +
            (C16837 + C16838) * C1418 + (C16839 + C16840) * C28590) *
               C28614) *
              C28758 * C28759 * C81 -
          (((C14437 * C2553 + C28520 * C2665 + C14435 * C2554 +
             C14429 * C2666) *
                C28590 +
            (C14437 * C2488 + C28520 * C2491 + C14435 * C2489 +
             C14429 * C2492) *
                C1418 +
            (C14437 * C1009 + C28520 * C1093 + C14435 * C1010 +
             C14429 * C1094) *
                C28724 +
            (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
                C1417) *
               C28614 +
           ((C14437 * C637 + C28520 * C721 + C14435 * C638 + C14429 * C722) *
                C28590 +
            (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
                C1418 +
            (C14437 * C151 + C28520 * C276 + C14435 * C150 + C14429 * C275) *
                C28724 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C1417) *
               C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 +
             C1609 + C1609 + C28590 * C761) *
                C14429 +
            (C1632 + C1633) * C28520) *
               C17890 +
           ((C11626 + C11627) * C14429 + (C19700 + C19701) * C28520) * C28614) *
              C28758 * C28759 * C81 -
          (((C1606 * C2488 + C2722 + C2722 + C28590 * C2718 + C1605 * C959 +
             C2723 + C2723 + C28724 * C1131) *
                C28520 +
            (C19701 + C19700) * C14429) *
               C28614 +
           ((C1635 + C1634) * C28520 + (C1633 + C1632) * C14429) * C17890) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C1417 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28724 +
            (C17995 * C589 + C17890 * C681 + C17996 * C2490 + C28614 * C2611) *
                C1418 +
            (C17995 * C639 + C17890 * C803 + C17996 * C2555 + C28614 * C2779) *
                C28590) *
               C14429 +
           ((C18014 + C18015) * C1417 + (C18180 + C18181) * C28724 +
            (C19556 + C19557) * C1418 + (C19772 + C19773) * C28590) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C17996 * C2553 + C28614 * C2777 + C17995 * C637 + C17890 * C801) *
                C28590 +
            (C17996 * C2488 + C28614 * C2609 + C17995 * C587 + C17890 * C679) *
                C1418 +
            (C18183 + C18182) * C28724 + (C18019 + C18018) * C1417) *
               C28520 +
           ((C19773 + C19772) * C28590 + (C19557 + C19556) * C1418 +
            (C18181 + C18180) * C28724 + (C18015 + C18014) * C1417) *
               C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C17995 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C17890 +
            (C17479 + C17480) * C17996 + (C17699 + C17700) * C28614) *
               C28724 +
           ((C15163 + C15164) * C17995 + (C15335 + C15336) * C17890 +
            (C16837 + C16838) * C17996 + (C17047 + C17048) * C28614) *
               C28590) *
              C28758 * C28759 * C81 -
          (((C14437 * C2609 + C28520 * C2830 + C14435 * C2610 +
             C14429 * C2831) *
                C28614 +
            (C14437 * C2488 + C28520 * C2491 + C14435 * C2489 +
             C14429 * C2492) *
                C17996 +
            (C14437 * C679 + C28520 * C839 + C14435 * C680 + C14429 * C840) *
                C17890 +
            (C14437 * C587 + C28520 * C591 + C14435 * C588 + C14429 * C592) *
                C17995) *
               C28590 +
           ((C14437 * C1051 + C28520 * C1211 + C14435 * C1052 +
             C14429 * C1212) *
                C28614 +
            (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
                C17996 +
            (C14437 * C214 + C28520 * C429 + C14435 * C213 + C14429 * C428) *
                C17890 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C17995) *
               C28724) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C17995 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C17890 +
            (C11432 + C11433) * C17996 + (C11794 + C11795) * C28614) *
               C14429 +
           ((C1436 + C1437) * C17995 + (C1808 + C1809) * C17890 +
            (C19478 + C19479) * C17996 + (C19910 + C19911) * C28614) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C1418 * C2609 + C28590 * C2883 + C1417 * C1051 + C28724 * C1249) *
                C28614 +
            (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
                C17996 +
            (C1811 + C1810) * C17890 + (C1441 + C1440) * C17995) *
               C28520 +
           ((C19911 + C19910) * C28614 + (C19479 + C19478) * C17996 +
            (C1809 + C1808) * C17890 + (C1437 + C1436) * C17995) *
               C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C28724 +
            (C18341 * C589 + C18827 + C18827 + C17890 * C917 + C18342 * C2490 +
             C18826 + C18826 + C28614 * C2938) *
                C28590) *
               C14429 +
           ((C18368 + C18369) * C28724 + (C19986 + C19987) * C28590) * C28520) *
              C28758 * C28759 * C81 -
          (((C18342 * C2488 + C18822 + C18822 + C28614 * C2936 + C18341 * C587 +
             C18823 + C18823 + C17890 * C915) *
                C28590 +
            (C18371 + C18370) * C28724) *
               C28520 +
           ((C19987 + C19986) * C28590 + (C18369 + C18368) * C28724) * C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 + C14436 * C92 +
             C14440 + C14440 + C28520 * C102) *
                C17890 +
            (C17259 + C17260) * C28614) *
               C28724 +
           ((C14985 + C14986) * C17890 + (C16629 + C16630) * C28614) * C28590) *
              C28758 * C583 -
          (((C14436 * C5691 + C15489 + C15489 + C28520 * C5695 +
             C14434 * C5692 + C15490 + C15490 + C14429 * C5696) *
                C28614 +
            (C14988 + C14987) * C17890) *
               C28590 +
           ((C16630 + C16629) * C28614 + (C14986 + C14985) * C17890) * C28724) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C14435 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C14429 +
            (C1436 + C1437) * C14437 + (C1438 + C1439) * C28520) *
               C17890 +
           ((C11432 + C11433) * C14435 + (C11434 + C11435) * C14429 +
            (C19478 + C19479) * C14437 + (C19480 + C19481) * C28520) *
               C28614) *
              C28758 * C583 -
          (((C1418 * C5693 + C28590 * C5755 + C1417 * C2492 + C28724 * C2557) *
                C28520 +
            (C1418 * C5691 + C28590 * C5753 + C1417 * C2489 + C28724 * C2554) *
                C14437 +
            (C1418 * C5694 + C28590 * C5756 + C1417 * C2493 + C28724 * C2558) *
                C14429 +
            (C1418 * C5692 + C28590 * C5754 + C1417 * C2490 + C28724 * C2555) *
                C14435) *
               C28614 +
           ((C1418 * C1929 + C28590 * C2006 + C1417 * C592 + C28724 * C642) *
                C28520 +
            (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
                C14437 +
            (C1418 * C1930 + C28590 * C2007 + C1417 * C593 + C28724 * C643) *
                C14429 +
            (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
                C14435) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C14435 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C14429 +
            (C18014 + C18015) * C14437 + (C18016 + C18017) * C28520) *
               C28724 +
           ((C20194 + C20195) * C14435 + (C20196 + C20197) * C14429 +
            (C19556 + C19557) * C14437 + (C19558 + C19559) * C28520) *
               C28590) *
              C28758 * C583 -
          (((C17996 * C5693 + C28614 * C5809 + C17995 * C1929 +
             C17890 * C2062) *
                C28520 +
            (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 +
             C17890 * C2059) *
                C14437 +
            (C17996 * C5694 + C28614 * C5810 + C17995 * C1930 +
             C17890 * C2063) *
                C14429 +
            (C17996 * C5692 + C28614 * C5808 + C17995 * C1927 +
             C17890 * C2060) *
                C14435) *
               C28590 +
           ((C19559 + C19558) * C28520 + (C19557 + C19556) * C14437 +
            (C20197 + C20196) * C14429 + (C20195 + C20194) * C14435) *
               C28724) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C1417 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28724 +
            (C15163 + C15164) * C1418 + (C15165 + C15166) * C28590) *
               C17890 +
           ((C17479 + C17480) * C1417 + (C17481 + C17482) * C28724 +
            (C16837 + C16838) * C1418 + (C16839 + C16840) * C28590) *
               C28614) *
              C28758 * C583 -
          (((C14437 * C5753 + C28520 * C5861 + C14435 * C5754 +
             C14429 * C5862) *
                C28590 +
            (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 +
             C14429 * C5694) *
                C1418 +
            (C16840 + C16839) * C28724 + (C16838 + C16837) * C1417) *
               C28614 +
           ((C15170 + C15169) * C28590 + (C15168 + C15167) * C1418 +
            (C15166 + C15165) * C28724 + (C15164 + C15163) * C1417) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 +
             C1609 + C1609 + C28590 * C761) *
                C14429 +
            (C1632 + C1633) * C28520) *
               C17890 +
           ((C11626 + C11627) * C14429 + (C19700 + C19701) * C28520) * C28614) *
              C28758 * C583 -
          (((C1606 * C5691 + C20330 + C20330 + C28590 * C5913 + C1605 * C2489 +
             C20331 + C20331 + C28724 * C2719) *
                C28520 +
            (C1606 * C5692 + C11066 + C11066 + C28590 * C5914 + C1605 * C2490 +
             C11067 + C11067 + C28724 * C2720) *
                C14429) *
               C28614 +
           ((C1606 * C1926 + C2203 + C2203 + C28590 * C2198 + C1605 * C588 +
             C2204 + C2204 + C28724 * C760) *
                C28520 +
            (C1606 * C1927 + C2205 + C2205 + C28590 * C2199 + C1605 * C589 +
             C2206 + C2206 + C28724 * C761) *
                C14429) *
               C17890) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C1417 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28724 +
            (C20194 + C20195) * C1418 + (C20402 + C20403) * C28590) *
               C14429 +
           ((C18014 + C18015) * C1417 + (C18180 + C18181) * C28724 +
            (C19556 + C19557) * C1418 + (C19772 + C19773) * C28590) *
               C28520) *
              C28758 * C583 -
          (((C17996 * C5753 + C28614 * C5971 + C17995 * C2003 +
             C17890 * C2257) *
                C28590 +
            (C17996 * C5691 + C28614 * C5807 + C17995 * C1926 +
             C17890 * C2059) *
                C1418 +
            (C19773 + C19772) * C28724 + (C19557 + C19556) * C1417) *
               C28520 +
           ((C17996 * C5754 + C28614 * C5972 + C17995 * C2004 +
             C17890 * C2258) *
                C28590 +
            (C17996 * C5692 + C28614 * C5808 + C17995 * C1927 +
             C17890 * C2060) *
                C1418 +
            (C20403 + C20402) * C28724 + (C20195 + C20194) * C1417) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C17995 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C17890 +
            (C17479 + C17480) * C17996 + (C17699 + C17700) * C28614) *
               C28724 +
           ((C15163 + C15164) * C17995 + (C15335 + C15336) * C17890 +
            (C16837 + C16838) * C17996 + (C17047 + C17048) * C28614) *
               C28590) *
              C28758 * C583 -
          (((C14437 * C5807 + C28520 * C6023 + C14435 * C5808 +
             C14429 * C6024) *
                C28614 +
            (C14437 * C5691 + C28520 * C5693 + C14435 * C5692 +
             C14429 * C5694) *
                C17996 +
            (C15338 + C15337) * C17890 + (C15168 + C15167) * C17995) *
               C28590 +
           ((C17048 + C17047) * C28614 + (C16838 + C16837) * C17996 +
            (C15336 + C15335) * C17890 + (C15164 + C15163) * C17995) *
               C28724) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C17995 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C17890 +
            (C11432 + C11433) * C17996 + (C11794 + C11795) * C28614) *
               C14429 +
           ((C1436 + C1437) * C17995 + (C1808 + C1809) * C17890 +
            (C19478 + C19479) * C17996 + (C19910 + C19911) * C28614) *
               C28520) *
              C28758 * C583 -
          (((C1418 * C5807 + C28590 * C6075 + C1417 * C2610 + C28724 * C2884) *
                C28614 +
            (C1418 * C5691 + C28590 * C5753 + C1417 * C2489 + C28724 * C2554) *
                C17996 +
            (C1418 * C2059 + C28590 * C2375 + C1417 * C680 + C28724 * C878) *
                C17890 +
            (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
                C17995) *
               C28520 +
           ((C1418 * C5808 + C28590 * C6076 + C1417 * C2611 + C28724 * C2885) *
                C28614 +
            (C1418 * C5692 + C28590 * C5754 + C1417 * C2490 + C28724 * C2555) *
                C17996 +
            (C1418 * C2060 + C28590 * C2376 + C1417 * C681 + C28724 * C879) *
                C17890 +
            (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
                C17995) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C28724 +
            (C20614 + C20615) * C28590) *
               C14429 +
           ((C18368 + C18369) * C28724 + (C19986 + C19987) * C28590) * C28520) *
              C28758 * C583 -
          (((C18342 * C5691 + C20606 + C20606 + C28614 * C6127 +
             C18341 * C1926 + C20607 + C20607 + C17890 * C2428) *
                C28590 +
            (C19987 + C19986) * C28724) *
               C28520 +
           ((C18342 * C5692 + C20608 + C20608 + C28614 * C6128 +
             C18341 * C1927 + C20609 + C20609 + C17890 * C2429) *
                C28590 +
            (C20615 + C20614) * C28724) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14434 * C91 + C14439 + C14439 + C14429 * C101 + C14436 * C92 +
             C14440 + C14440 + C28520 * C102) *
                C17890 +
            (C17259 + C17260) * C28614) *
               C28724 +
           ((C14985 + C14986) * C17890 + (C16629 + C16630) * C28614) * C28590) *
              C956 -
          (((C14436 * C9334 + C17251 + C17251 + C28520 * C9336 +
             C14434 * C8251 + C17252 + C17252 + C14429 * C8255) *
                C28614 +
            (C16630 + C16629) * C17890) *
               C28590 +
           ((C14436 * C4011 + C17253 + C17253 + C28520 * C4017 +
             C14434 * C4012 + C17254 + C17254 + C14429 * C4018) *
                C28614 +
            (C17260 + C17259) * C17890) *
               C28724) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C14435 +
            (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
                C14429 +
            (C1436 + C1437) * C14437 + (C1438 + C1439) * C28520) *
               C17890 +
           ((C11432 + C11433) * C14435 + (C11434 + C11435) * C14429 +
            (C19478 + C19479) * C14437 + (C19480 + C19481) * C28520) *
               C28614) *
              C956 -
          (((C1418 * C9335 + C28590 * C9390 + C1417 * C4014 + C28724 * C4091) *
                C28520 +
            (C1418 * C9334 + C28590 * C9389 + C1417 * C4011 + C28724 * C4088) *
                C14437 +
            (C11439 + C11438) * C14429 + (C11437 + C11436) * C14435) *
               C28614 +
           ((C19481 + C19480) * C28520 + (C19479 + C19478) * C14437 +
            (C11435 + C11434) * C14429 + (C11433 + C11432) * C14435) *
               C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C14435 +
            (C17995 * C96 + C17890 * C217 + C17996 * C965 + C28614 * C1057) *
                C14429 +
            (C18014 + C18015) * C14437 + (C18016 + C18017) * C28520) *
               C28724 +
           ((C20194 + C20195) * C14435 + (C20196 + C20197) * C14429 +
            (C19556 + C19557) * C14437 + (C19558 + C19559) * C28520) *
               C28590) *
              C956 -
          (((C17996 * C9335 + C28614 * C9442 + C17995 * C2492 +
             C17890 * C2613) *
                C28520 +
            (C17996 * C9334 + C28614 * C9441 + C17995 * C2489 +
             C17890 * C2610) *
                C14437 +
            (C17996 * C8253 + C28614 * C8389 + C17995 * C2493 +
             C17890 * C2614) *
                C14429 +
            (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 +
             C17890 * C2611) *
                C14435) *
               C28590 +
           ((C17996 * C4014 + C28614 * C4159 + C17995 * C964 + C17890 * C1056) *
                C28520 +
            (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
                C14437 +
            (C17996 * C4015 + C28614 * C4160 + C17995 * C965 + C17890 * C1057) *
                C14429 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C14435) *
               C28724) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C1417 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28724 +
            (C15163 + C15164) * C1418 + (C15165 + C15166) * C28590) *
               C17890 +
           ((C17479 + C17480) * C1417 + (C17481 + C17482) * C28724 +
            (C16837 + C16838) * C1418 + (C16839 + C16840) * C28590) *
               C28614) *
              C956 -
          (((C14437 * C9389 + C28520 * C9493 + C14435 * C8315 +
             C14429 * C8441) *
                C28590 +
            (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 +
             C14429 * C8253) *
                C1418 +
            (C14437 * C4088 + C28520 * C4212 + C14435 * C4089 +
             C14429 * C4213) *
                C28724 +
            (C14437 * C4011 + C28520 * C4014 + C14435 * C4012 +
             C14429 * C4015) *
                C1417) *
               C28614 +
           ((C16840 + C16839) * C28590 + (C16838 + C16837) * C1418 +
            (C17482 + C17481) * C28724 + (C17480 + C17479) * C1417) *
               C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 +
             C1609 + C1609 + C28590 * C761) *
                C14429 +
            (C1632 + C1633) * C28520) *
               C17890 +
           ((C11626 + C11627) * C14429 + (C19700 + C19701) * C28520) * C28614) *
              C956 -
          (((C1606 * C9334 + C10580 + C10580 + C28590 * C9544 + C1605 * C4011 +
             C10581 + C10581 + C28724 * C4283) *
                C28520 +
            (C11629 + C11628) * C14429) *
               C28614 +
           ((C19701 + C19700) * C28520 + (C11627 + C11626) * C14429) * C17890) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C17995 * C91 + C17890 * C212 + C17996 * C961 + C28614 * C1053) *
                C1417 +
            (C17995 * C149 + C17890 * C373 + C17996 * C1011 + C28614 * C1175) *
                C28724 +
            (C20194 + C20195) * C1418 + (C20402 + C20403) * C28590) *
               C14429 +
           ((C18014 + C18015) * C1417 + (C18180 + C18181) * C28724 +
            (C19556 + C19557) * C1418 + (C19772 + C19773) * C28590) *
               C28520) *
              C956 -
          (((C17996 * C9389 + C28614 * C9597 + C17995 * C2554 +
             C17890 * C2778) *
                C28590 +
            (C17996 * C9334 + C28614 * C9441 + C17995 * C2489 +
             C17890 * C2610) *
                C1418 +
            (C17996 * C4088 + C28614 * C4347 + C17995 * C1010 +
             C17890 * C1174) *
                C28724 +
            (C17996 * C4011 + C28614 * C4156 + C17995 * C960 + C17890 * C1052) *
                C1417) *
               C28520 +
           ((C17996 * C8315 + C28614 * C8575 + C17995 * C2555 +
             C17890 * C2779) *
                C28590 +
            (C17996 * C8251 + C28614 * C8387 + C17995 * C2490 +
             C17890 * C2611) *
                C1418 +
            (C17996 * C4089 + C28614 * C4348 + C17995 * C1011 +
             C17890 * C1175) *
                C28724 +
            (C17996 * C4012 + C28614 * C4157 + C17995 * C961 + C17890 * C1053) *
                C1417) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
                C17995 +
            (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
                C17890 +
            (C17479 + C17480) * C17996 + (C17699 + C17700) * C28614) *
               C28724 +
           ((C15163 + C15164) * C17995 + (C15335 + C15336) * C17890 +
            (C16837 + C16838) * C17996 + (C17047 + C17048) * C28614) *
               C28590) *
              C956 -
          (((C14437 * C9441 + C28520 * C9648 + C14435 * C8387 +
             C14429 * C8627) *
                C28614 +
            (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 +
             C14429 * C8253) *
                C17996 +
            (C17048 + C17047) * C17890 + (C16838 + C16837) * C17995) *
               C28590 +
           ((C14437 * C4156 + C28520 * C4400 + C14435 * C4157 +
             C14429 * C4401) *
                C28614 +
            (C14437 * C4011 + C28520 * C4014 + C14435 * C4012 +
             C14429 * C4015) *
                C17996 +
            (C17700 + C17699) * C17890 + (C17480 + C17479) * C17995) *
               C28724) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C17995 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C17890 +
            (C11432 + C11433) * C17996 + (C11794 + C11795) * C28614) *
               C14429 +
           ((C1436 + C1437) * C17995 + (C1808 + C1809) * C17890 +
            (C19478 + C19479) * C17996 + (C19910 + C19911) * C28614) *
               C28520) *
              C956 -
          (((C1418 * C9441 + C28590 * C9699 + C1417 * C4156 + C28724 * C4462) *
                C28614 +
            (C1418 * C9334 + C28590 * C9389 + C1417 * C4011 + C28724 * C4088) *
                C17996 +
            (C19911 + C19910) * C17890 + (C19479 + C19478) * C17995) *
               C28520 +
           ((C11797 + C11796) * C28614 + (C11437 + C11436) * C17996 +
            (C11795 + C11794) * C17890 + (C11433 + C11432) * C17995) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18341 * C91 + C18344 + C18344 + C17890 * C521 + C18342 * C961 +
             C18345 + C18345 + C28614 * C1289) *
                C28724 +
            (C20614 + C20615) * C28590) *
               C14429 +
           ((C18368 + C18369) * C28724 + (C19986 + C19987) * C28590) * C28520) *
              C956 -
          (((C18342 * C9334 + C21210 + C21210 + C28614 * C9750 +
             C18341 * C2489 + C21211 + C21211 + C17890 * C2937) *
                C28590 +
            (C18342 * C4011 + C19334 + C19334 + C28614 * C4518 + C18341 * C960 +
             C19335 + C19335 + C17890 * C1288) *
                C28724) *
               C28520 +
           ((C18342 * C8251 + C21212 + C21212 + C28614 * C8743 +
             C18341 * C2490 + C21213 + C21213 + C17890 * C2938) *
                C28590 +
            (C18342 * C4012 + C19336 + C19336 + C28614 * C4519 + C18341 * C961 +
             C19337 + C19337 + C17890 * C1289) *
                C28724) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eexx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                      C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                         C28754 +
                     (C17259 + C17260) * C28748 +
                     (C14434 * C4012 + C17254 + C17254 + C14429 * C4018 +
                      C14436 * C4011 + C17253 + C17253 + C28520 * C4017) *
                         C21265) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C14436 * C4010 + C21267 + C21267 + C28520 * C4016 +
                      C14434 * C4011 + C21268 + C21268 + C14429 * C4017) *
                         C21265 +
                     (C14436 * C959 + C15969 + C15969 + C28520 * C967 +
                      C14434 * C960 + C15970 + C15970 + C14429 * C968) *
                         C28748 +
                     (C14436 * C93 + C14449 + C14449 + C28520 * C103 +
                      C14434 * C92 + C14450 + C14450 + C14429 * C102) *
                         C28754) *
                        C28576 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C14435 +
            (C148 * C96 + C28576 * C154) * C14429 + C172 * C14437 +
            C173 * C28520) *
               C28754 +
           (C4102 * C14435 + C4103 * C14429 + C3056 * C14437 + C3057 * C28520) *
               C28748 +
           (C9900 * C14435 + C9901 * C14429 + C8862 * C14437 + C8863 * C28520) *
               C21265) *
              C28758 * C28759 * C81 -
          (((C148 * C4013 + C28576 * C4090) * C28520 +
            (C148 * C4010 + C28576 * C4087) * C14437 + C8863 * C14429 +
            C8862 * C14435) *
               C21265 +
           (C3059 * C28520 + C3058 * C14437 + C3057 * C14429 + C3056 * C14435) *
               C28748 +
           (C175 * C28520 + C174 * C14437 + C173 * C14429 + C172 * C14435) *
               C28754) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C14435 +
                     (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                      C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                         C14429 +
                     (C21384 + C21385 + C21386) * C14437 +
                     (C21387 + C21388 + C21389) * C28520) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C21370 * C4013 + C21265 * C4158 + C21369 * C963 +
                      C28748 * C1055 + C21368 * C98 + C28754 * C219) *
                         C28520 +
                     (C21370 * C4010 + C21265 * C4155 + C21369 * C959 +
                      C28748 * C1051 + C21368 * C93 + C28754 * C214) *
                         C14437 +
                     (C21389 + C21388 + C21387) * C14429 +
                     (C21386 + C21385 + C21384) * C14435) *
                        C28576 * C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C148 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28576) *
               C28754 +
           ((C17479 + C17480) * C148 + (C17481 + C17482) * C28576) * C28748 +
           ((C14435 * C4012 + C14429 * C4015 + C14437 * C4011 +
             C28520 * C4014) *
                C148 +
            (C14435 * C4089 + C14429 * C4213 + C14437 * C4088 +
             C28520 * C4212) *
                C28576) *
               C21265) *
              C28758 * C28759 * C81 -
          (((C14437 * C4087 + C28520 * C4211 + C14435 * C4088 +
             C14429 * C4212) *
                C28576 +
            (C14437 * C4010 + C28520 * C4013 + C14435 * C4011 +
             C14429 * C4014) *
                C148) *
               C21265 +
           ((C14437 * C1009 + C28520 * C1093 + C14435 * C1010 +
             C14429 * C1094) *
                C28576 +
            (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
                C148) *
               C28748 +
           ((C14437 * C151 + C28520 * C276 + C14435 * C150 + C14429 * C275) *
                C28576 +
            (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
                C148) *
               C28754) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C14429 +
                      C337 * C28520) *
                         C28754 +
                     (C4295 * C14429 + C3244 * C28520) * C28748 +
                     (C10095 * C14429 + C9039 * C28520) * C21265) *
                        C28758 * C28759 * C81 -
                    (((C313 * C4010 + C4290 + C4290 + C28576 * C4282) * C28520 +
                      C9039 * C14429) *
                         C21265 +
                     (C3245 * C28520 + C3244 * C14429) * C28748 +
                     (C338 * C28520 + C337 * C14429) * C28754) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C148 +
                      (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                       C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                          C28576) *
                         C14429 +
                     ((C21384 + C21385 + C21386) * C148 +
                      (C21546 + C21547 + C21548) * C28576) *
                         C28520) *
                        C28758 * C28759 * C81 -
                    (((C21370 * C4087 + C21265 * C4346 + C21369 * C1009 +
                       C28748 * C1173 + C21368 * C151 + C28754 * C375) *
                          C28576 +
                      (C21370 * C4010 + C21265 * C4155 + C21369 * C959 +
                       C28748 * C1051 + C21368 * C93 + C28754 * C214) *
                          C148) *
                         C28520 +
                     ((C21548 + C21547 + C21546) * C28576 +
                      (C21386 + C21385 + C21384) * C148) *
                         C14429) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C21368 +
           (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
               C28754 +
           (C17479 + C17480) * C21369 + (C17699 + C17700) * C28748 +
           (C14435 * C4012 + C14429 * C4015 + C14437 * C4011 + C28520 * C4014) *
               C21370 +
           (C14435 * C4157 + C14429 * C4401 + C14437 * C4156 + C28520 * C4400) *
               C21265) *
              C28576 * C28758 * C28759 * C81 -
          ((C14437 * C4155 + C28520 * C4399 + C14435 * C4156 + C14429 * C4400) *
               C21265 +
           (C14437 * C4010 + C28520 * C4013 + C14435 * C4011 + C14429 * C4014) *
               C21370 +
           (C14437 * C1051 + C28520 * C1211 + C14435 * C1052 + C14429 * C1212) *
               C28748 +
           (C14437 * C959 + C28520 * C963 + C14435 * C960 + C14429 * C964) *
               C21369 +
           (C14437 * C214 + C28520 * C429 + C14435 * C213 + C14429 * C428) *
               C28754 +
           (C14437 * C93 + C28520 * C98 + C14435 * C92 + C14429 * C97) *
               C21368) *
              C28576 * C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C21368 +
            (C148 * C212 + C28576 * C466) * C28754 + C4102 * C21369 +
            C4467 * C28748 + C9900 * C21370 + C10267 * C21265) *
               C14429 +
           (C21649 + C21650 + C21651 + C21652 + C21653 + C21654) * C28520) *
              C28758 * C28759 * C81 -
          (((C148 * C4155 + C28576 * C4461) * C21265 +
            (C148 * C4010 + C28576 * C4087) * C21370 + C3419 * C28748 +
            C3058 * C21369 + C482 * C28754 + C174 * C21368) *
               C28520 +
           (C21654 + C21653 + C21652 + C21651 + C21650 + C21649) * C14429) *
              C28758 * C28759 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C28576 * C14429 +
                     (C21729 + C21730 + C21731) * C28576 * C28520) *
                        C28758 * C28759 * C81 -
                    ((C21706 * C4010 + C21720 + C21720 + C21265 * C4517 +
                      C21705 * C959 + C21721 + C21721 + C28748 * C1287 +
                      C21704 * C93 + C21722 + C21722 + C28754 * C523) *
                         C28576 * C28520 +
                     (C21731 + C21730 + C21729) * C28576 * C14429) *
                        C28758 * C28759 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                      C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                         C28754 +
                     (C17259 + C17260) * C28748 +
                     (C14434 * C4012 + C17254 + C17254 + C14429 * C4018 +
                      C14436 * C4011 + C17253 + C17253 + C28520 * C4017) *
                         C21265) *
                        C28576 * C28758 * C583 -
                    ((C14436 * C9334 + C17251 + C17251 + C28520 * C9336 +
                      C14434 * C8251 + C17252 + C17252 + C14429 * C8255) *
                         C21265 +
                     (C16630 + C16629) * C28748 + (C14986 + C14985) * C28754) *
                        C28576 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C14435 +
            (C148 * C96 + C28576 * C154) * C14429 + C172 * C14437 +
            C173 * C28520) *
               C28754 +
           (C4102 * C14435 + C4103 * C14429 + C3056 * C14437 + C3057 * C28520) *
               C28748 +
           (C9900 * C14435 + C9901 * C14429 + C8862 * C14437 + C8863 * C28520) *
               C21265) *
              C28758 * C583 -
          (((C148 * C9335 + C28576 * C9390) * C28520 +
            (C148 * C9334 + C28576 * C9389) * C14437 +
            (C148 * C8253 + C28576 * C8317) * C14429 +
            (C148 * C8251 + C28576 * C8315) * C14435) *
               C21265 +
           ((C148 * C2492 + C28576 * C2557) * C28520 +
            (C148 * C2489 + C28576 * C2554) * C14437 +
            (C148 * C2493 + C28576 * C2558) * C14429 +
            (C148 * C2490 + C28576 * C2555) * C14435) *
               C28748 +
           ((C148 * C592 + C28576 * C642) * C28520 +
            (C148 * C588 + C28576 * C638) * C14437 +
            (C148 * C593 + C28576 * C643) * C14429 +
            (C148 * C589 + C28576 * C639) * C14435) *
               C28754) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eexz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C14435 +
                     (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                      C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                         C14429 +
                     (C21384 + C21385 + C21386) * C14437 +
                     (C21387 + C21388 + C21389) * C28520) *
                        C28576 * C28758 * C583 -
                    ((C21370 * C9335 + C21265 * C9442 + C21369 * C2492 +
                      C28748 * C2613 + C21368 * C592 + C28754 * C684) *
                         C28520 +
                     (C21370 * C9334 + C21265 * C9441 + C21369 * C2489 +
                      C28748 * C2610 + C21368 * C588 + C28754 * C680) *
                         C14437 +
                     (C21370 * C8253 + C21265 * C8389 + C21369 * C2493 +
                      C28748 * C2614 + C21368 * C593 + C28754 * C685) *
                         C14429 +
                     (C21370 * C8251 + C21265 * C8387 + C21369 * C2490 +
                      C28748 * C2611 + C21368 * C589 + C28754 * C681) *
                         C14435) *
                        C28576 * C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C148 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28576) *
               C28754 +
           ((C17479 + C17480) * C148 + (C17481 + C17482) * C28576) * C28748 +
           ((C14435 * C4012 + C14429 * C4015 + C14437 * C4011 +
             C28520 * C4014) *
                C148 +
            (C14435 * C4089 + C14429 * C4213 + C14437 * C4088 +
             C28520 * C4212) *
                C28576) *
               C21265) *
              C28758 * C583 -
          (((C14437 * C9389 + C28520 * C9493 + C14435 * C8315 +
             C14429 * C8441) *
                C28576 +
            (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 +
             C14429 * C8253) *
                C148) *
               C21265 +
           ((C16840 + C16839) * C28576 + (C16838 + C16837) * C148) * C28748 +
           ((C15166 + C15165) * C28576 + (C15164 + C15163) * C148) * C28754) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C14429 +
            C337 * C28520) *
               C28754 +
           (C4295 * C14429 + C3244 * C28520) * C28748 +
           (C10095 * C14429 + C9039 * C28520) * C21265) *
              C28758 * C583 -
          (((C313 * C9334 + C9546 + C9546 + C28576 * C9544) * C28520 +
            (C313 * C8251 + C9547 + C9547 + C28576 * C8505) * C14429) *
               C21265 +
           ((C313 * C2489 + C3753 + C3753 + C28576 * C2719) * C28520 +
            (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C14429) *
               C28748 +
           ((C313 * C588 + C765 + C765 + C28576 * C760) * C28520 +
            (C313 * C589 + C766 + C766 + C28576 * C761) * C14429) *
               C28754) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C148 +
                      (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                       C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                          C28576) *
                         C14429 +
                     ((C21384 + C21385 + C21386) * C148 +
                      (C21546 + C21547 + C21548) * C28576) *
                         C28520) *
                        C28758 * C583 -
                    (((C21370 * C9389 + C21265 * C9597 + C21369 * C2554 +
                       C28748 * C2778 + C21368 * C638 + C28754 * C802) *
                          C28576 +
                      (C21370 * C9334 + C21265 * C9441 + C21369 * C2489 +
                       C28748 * C2610 + C21368 * C588 + C28754 * C680) *
                          C148) *
                         C28520 +
                     ((C21370 * C8315 + C21265 * C8575 + C21369 * C2555 +
                       C28748 * C2779 + C21368 * C639 + C28754 * C803) *
                          C28576 +
                      (C21370 * C8251 + C21265 * C8387 + C21369 * C2490 +
                       C28748 * C2611 + C21368 * C589 + C28754 * C681) *
                          C148) *
                         C14429) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C21368 +
           (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
               C28754 +
           (C17479 + C17480) * C21369 + (C17699 + C17700) * C28748 +
           (C14435 * C4012 + C14429 * C4015 + C14437 * C4011 + C28520 * C4014) *
               C21370 +
           (C14435 * C4157 + C14429 * C4401 + C14437 * C4156 + C28520 * C4400) *
               C21265) *
              C28576 * C28758 * C583 -
          ((C14437 * C9441 + C28520 * C9648 + C14435 * C8387 + C14429 * C8627) *
               C21265 +
           (C14437 * C9334 + C28520 * C9335 + C14435 * C8251 + C14429 * C8253) *
               C21370 +
           (C17048 + C17047) * C28748 + (C16838 + C16837) * C21369 +
           (C15336 + C15335) * C28754 + (C15164 + C15163) * C21368) *
              C28576 * C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C21368 +
            (C148 * C212 + C28576 * C466) * C28754 + C4102 * C21369 +
            C4467 * C28748 + C9900 * C21370 + C10267 * C21265) *
               C14429 +
           (C21649 + C21650 + C21651 + C21652 + C21653 + C21654) * C28520) *
              C28758 * C583 -
          (((C148 * C9441 + C28576 * C9699) * C21265 +
            (C148 * C9334 + C28576 * C9389) * C21370 +
            (C148 * C2610 + C28576 * C2884) * C28748 +
            (C148 * C2489 + C28576 * C2554) * C21369 +
            (C148 * C680 + C28576 * C878) * C28754 +
            (C148 * C588 + C28576 * C638) * C21368) *
               C28520 +
           ((C148 * C8387 + C28576 * C8682) * C21265 +
            (C148 * C8251 + C28576 * C8315) * C21370 +
            (C148 * C2611 + C28576 * C2885) * C28748 +
            (C148 * C2490 + C28576 * C2555) * C21369 +
            (C148 * C681 + C28576 * C879) * C28754 +
            (C148 * C589 + C28576 * C639) * C21368) *
               C14429) *
              C28758 * C584) *
         C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C28576 * C14429 +
                     (C21729 + C21730 + C21731) * C28576 * C28520) *
                        C28758 * C583 -
                    ((C21706 * C9334 + C22182 + C22182 + C21265 * C9750 +
                      C21705 * C2489 + C22183 + C22183 + C28748 * C2937 +
                      C21704 * C588 + C22184 + C22184 + C28754 * C916) *
                         C28576 * C28520 +
                     (C21706 * C8251 + C22185 + C22185 + C21265 * C8743 +
                      C21705 * C2490 + C22186 + C22186 + C28748 * C2938 +
                      C21704 * C589 + C22187 + C22187 + C28754 * C917) *
                         C28576 * C14429) *
                        C28758 * C584) *
                   C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14434 * C91 + C14439 + C14439 + C14429 * C101 +
                      C14436 * C92 + C14440 + C14440 + C28520 * C102) *
                         C28754 +
                     (C17259 + C17260) * C28748 + (C22248 + C22249) * C21265) *
                        C28576 * C956 -
                    ((C14436 * C9807 + C22242 + C22242 + C28520 * C9811 +
                      C14434 * C9808 + C22243 + C22243 + C14429 * C9812) *
                         C21265 +
                     (C22249 + C22248) * C28748 + (C17260 + C17259) * C28754) *
                        C28576 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C14435 +
                      (C148 * C96 + C28576 * C154) * C14429 + C172 * C14437 +
                      C173 * C28520) *
                         C28754 +
                     (C22300 + C22301 + C22302 + C22303) * C28748 +
                     (C22304 + C22305 + C22306 + C22307) * C21265) *
                        C956 -
                    (((C148 * C9809 + C28576 * C9887) * C28520 +
                      (C148 * C9807 + C28576 * C9885) * C14437 +
                      C12578 * C14429 + C12577 * C14435) *
                         C21265 +
                     (C22307 + C22306 + C22305 + C22304) * C28748 +
                     (C22303 + C22302 + C22301 + C22300) * C28754) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                      C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                         C14435 +
                     (C21368 * C96 + C28754 * C217 + C21369 * C965 +
                      C28748 * C1057 + C21370 * C4015 + C21265 * C4160) *
                         C14429 +
                     (C21384 + C21385 + C21386) * C14437 +
                     (C21387 + C21388 + C21389) * C28520) *
                        C28576 * C956 -
                    ((C21370 * C9809 + C21265 * C9955 + C21369 * C4014 +
                      C28748 * C4159 + C21368 * C964 + C28754 * C1056) *
                         C28520 +
                     (C21370 * C9807 + C21265 * C9953 + C21369 * C4011 +
                      C28748 * C4156 + C21368 * C960 + C28754 * C1052) *
                         C14437 +
                     (C21370 * C9810 + C21265 * C9956 + C21369 * C4015 +
                      C28748 * C4160 + C21368 * C965 + C28754 * C1057) *
                         C14429 +
                     (C21370 * C9808 + C21265 * C9954 + C21369 * C4012 +
                      C28748 * C4157 + C21368 * C961 + C28754 * C1053) *
                         C14435) *
                        C28576 * C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) * C148 +
            (C14435 * C149 + C14429 * C274 + C14437 * C150 + C28520 * C275) *
                C28576) *
               C28754 +
           ((C17479 + C17480) * C148 + (C17481 + C17482) * C28576) * C28748 +
           ((C22416 + C22417) * C148 + (C22418 + C22419) * C28576) * C21265) *
              C956 -
          (((C14437 * C9885 + C28520 * C10007 + C14435 * C9886 +
             C14429 * C10008) *
                C28576 +
            (C14437 * C9807 + C28520 * C9809 + C14435 * C9808 +
             C14429 * C9810) *
                C148) *
               C21265 +
           ((C22419 + C22418) * C28576 + (C22417 + C22416) * C148) * C28748 +
           ((C17482 + C17481) * C28576 + (C17480 + C17479) * C148) * C28754) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28576 * C314) * C14429 +
            C337 * C28520) *
               C28754 +
           (C22470 + C22471) * C28748 + (C22472 + C22473) * C21265) *
              C956 -
          (((C313 * C9807 + C10091 + C10091 + C28576 * C10083) * C28520 +
            C12706 * C14429) *
               C21265 +
           (C22473 + C22472) * C28748 + (C22471 + C22470) * C28754) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eeyz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C21368 * C91 + C28754 * C212 + C21369 * C961 +
                       C28748 * C1053 + C21370 * C4012 + C21265 * C4157) *
                          C148 +
                      (C21368 * C149 + C28754 * C373 + C21369 * C1011 +
                       C28748 * C1175 + C21370 * C4089 + C21265 * C4348) *
                          C28576) *
                         C14429 +
                     ((C21384 + C21385 + C21386) * C148 +
                      (C21546 + C21547 + C21548) * C28576) *
                         C28520) *
                        C956 -
                    (((C21370 * C9885 + C21265 * C10146 + C21369 * C4088 +
                       C28748 * C4347 + C21368 * C1010 + C28754 * C1174) *
                          C28576 +
                      (C21370 * C9807 + C21265 * C9953 + C21369 * C4011 +
                       C28748 * C4156 + C21368 * C960 + C28754 * C1052) *
                          C148) *
                         C28520 +
                     ((C21370 * C9886 + C21265 * C10147 + C21369 * C4089 +
                       C28748 * C4348 + C21368 * C1011 + C28754 * C1175) *
                          C28576 +
                      (C21370 * C9808 + C21265 * C9954 + C21369 * C4012 +
                       C28748 * C4157 + C21368 * C961 + C28754 * C1053) *
                          C148) *
                         C14429) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eezx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C14435 * C91 + C14429 * C96 + C14437 * C92 + C28520 * C97) *
               C21368 +
           (C14435 * C212 + C14429 * C427 + C14437 * C213 + C28520 * C428) *
               C28754 +
           (C17479 + C17480) * C21369 + (C17699 + C17700) * C28748 +
           (C22416 + C22417) * C21370 + (C22578 + C22579) * C21265) *
              C28576 * C956 -
          ((C14437 * C9953 + C28520 * C10198 + C14435 * C9954 +
            C14429 * C10199) *
               C21265 +
           (C14437 * C9807 + C28520 * C9809 + C14435 * C9808 + C14429 * C9810) *
               C21370 +
           (C22579 + C22578) * C28748 + (C22417 + C22416) * C21369 +
           (C17700 + C17699) * C28754 + (C17480 + C17479) * C21368) *
              C28576 * C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C21368 +
            (C148 * C212 + C28576 * C466) * C28754 + C4102 * C21369 +
            C4467 * C28748 + C9900 * C21370 + C10267 * C21265) *
               C14429 +
           (C21649 + C21650 + C21651 + C21652 + C21653 + C21654) * C28520) *
              C956 -
          (((C148 * C9953 + C28576 * C10262) * C21265 +
            (C148 * C9807 + C28576 * C9885) * C21370 + C9206 * C28748 +
            C8862 * C21369 + C3418 * C28754 + C3056 * C21368) *
               C28520 +
           (C12818 * C21265 + C12577 * C21370 + C10267 * C28748 +
            C9900 * C21369 + C4467 * C28754 + C4102 * C21368) *
               C14429) *
              C957) *
         C28759 * C28760) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C21704 * C91 + C21708 + C21708 + C28754 * C521 +
                      C21705 * C961 + C21709 + C21709 + C28748 * C1289 +
                      C21706 * C4012 + C21710 + C21710 + C21265 * C4519) *
                         C28576 * C14429 +
                     (C21729 + C21730 + C21731) * C28576 * C28520) *
                        C956 -
                    ((C21706 * C9807 + C22680 + C22680 + C21265 * C10317 +
                      C21705 * C4011 + C22681 + C22681 + C28748 * C4518 +
                      C21704 * C960 + C22682 + C22682 + C28754 * C1288) *
                         C28576 * C28520 +
                     (C21706 * C9808 + C22683 + C22683 + C21265 * C10318 +
                      C21705 * C4012 + C22684 + C22684 + C28748 * C4519 +
                      C21704 * C961 + C22685 + C22685 + C28754 * C1289) *
                         C28576 * C14429) *
                        C957) *
                   C28759 * C28760) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C28758 * C28759 * C81 -
                    (C89 * C95 + C111 + C111 + C76 * C105 + C87 * C94 + C112 +
                     C112 + C75 * C104 + C85 * C93 + C113 + C113 + C74 * C103 +
                     C83 * C92 + C114 + C114 + C73 * C102) *
                        C28602 * C28576 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C4581 * C589 + C4588 + C4588 + C28711 * C597 +
                      C4583 * C588 + C4589 + C4589 + C28520 * C596) *
                         C28602 * C4579 +
                     (C4581 * C1927 + C4590 + C4590 + C28711 * C1933 +
                      C4583 * C1926 + C4591 + C4591 + C28520 * C1932) *
                         C28602 * C4580) *
                        C28758 * C28759 * C81 -
                    ((C4583 * C1925 + C4592 + C4592 + C28520 * C1931 +
                      C4581 * C1926 + C4593 + C4593 + C28711 * C1932) *
                         C28602 * C4580 +
                     (C4583 * C587 + C4594 + C4594 + C28520 * C595 +
                      C4581 * C588 + C4595 + C4595 + C28711 * C596) *
                         C28602 * C4579 +
                     (C4583 * C93 + C4596 + C4596 + C28520 * C103 +
                      C4581 * C92 + C4597 + C4597 + C28711 * C102) *
                         C28602 * C4578) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C28758 * C28759 * C81 -
          ((C148 * C100 + C28576 * C158) * C76 +
           (C148 * C95 + C28576 * C153) * C90 + C177 * C75 + C176 * C88 +
           C175 * C74 + C174 * C86 + C173 * C73 + C172 * C84) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C27436 +
           (C4647 * C96 + C4578 * C154 + C4648 * C593 + C4579 * C643 +
            C4649 * C1930 + C4580 * C2007) *
               C28711 +
           (C4663 + C4664 + C4665) * C27426 +
           (C4666 + C4667 + C4668) * C28520) *
              C28602 * C28758 * C28759 * C81 -
          ((C4649 * C1928 + C4580 * C2005 + C4648 * C591 + C4579 * C641 +
            C4647 * C98 + C4578 * C156) *
               C28520 +
           (C4649 * C1925 + C4580 * C2002 + C4648 * C587 + C4579 * C637 +
            C4647 * C93 + C4578 * C151) *
               C27426 +
           (C4668 + C4667 + C4666) * C28711 +
           (C4665 + C4664 + C4663) * C27436) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C28758 * C28759 * C81 -
          ((C211 * C100 + C28602 * C221) * C76 +
           (C211 * C95 + C28602 * C216) * C90 + C240 * C75 + C239 * C88 +
           C238 * C74 + C237 * C86 + C236 * C73 + C235 * C84) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C2073 * C27436 + C2074 * C28711 + C1502 * C27426 + C1503 * C28520) *
               C4579 +
           ((C211 * C1927 + C28602 * C2060) * C27436 +
            (C211 * C1930 + C28602 * C2063) * C28711 + C4723 * C27426 +
            C4724 * C28520) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C211 * C1928 + C28602 * C2061) * C28520 +
            (C211 * C1925 + C28602 * C2058) * C27426 + C4724 * C28711 +
            C4723 * C27436) *
               C4580 +
           (C1505 * C28520 + C1504 * C27426 + C1503 * C28711 + C1502 * C27436) *
               C4579 +
           (C238 * C28520 + C237 * C27426 + C236 * C28711 + C235 * C27436) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C28758 * C28759 * C81 -
          ((C90 * C153 + C76 * C278 + C88 * C152 + C75 * C277 + C86 * C151 +
            C74 * C276 + C84 * C150 + C73 * C275) *
               C28576 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C148) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C27436 * C589 + C28711 * C593 + C27426 * C588 + C28520 * C592) *
               C4648 +
           (C27436 * C639 + C28711 * C723 + C27426 * C638 + C28520 * C722) *
               C4579 +
           (C27436 * C1927 + C28711 * C1930 + C27426 * C1926 + C28520 * C1929) *
               C4649 +
           (C27436 * C2004 + C28711 * C2128 + C27426 * C2003 + C28520 * C2127) *
               C4580) *
              C28602 * C28758 * C28759 * C81 -
          ((C27426 * C2002 + C28520 * C2126 + C27436 * C2003 + C28711 * C2127) *
               C4580 +
           (C27426 * C1925 + C28520 * C1928 + C27436 * C1926 + C28711 * C1929) *
               C4649 +
           (C27426 * C637 + C28520 * C721 + C27436 * C638 + C28711 * C722) *
               C4579 +
           (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
               C4648 +
           (C27426 * C151 + C28520 * C276 + C27436 * C150 + C28711 * C275) *
               C4578 +
           (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
               C4647) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[36] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C313 * C95 + C330 + C330 + C28576 * C318) * C76 +
                     C339 * C75 + C338 * C74 + C337 * C73) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28711 +
                     (C4849 + C4850 + C4851) * C28520) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C4826 * C1925 + C4840 + C4840 + C4580 * C2197 +
                      C4825 * C587 + C4841 + C4841 + C4579 * C759 +
                      C4824 * C93 + C4842 + C4842 + C4578 * C316) *
                         C28520 +
                     (C4851 + C4850 + C4849) * C28711) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28758 * C28759 * C81 -
          (((C211 * C153 + C28602 * C377) * C28576 +
            (C211 * C95 + C28602 * C216) * C148) *
               C76 +
           (C393 + C385) * C75 + (C392 + C382) * C74 + (C391 + C379) * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + (C211 * C1927 + C28602 * C2060) * C4649 +
            (C211 * C2004 + C28602 * C2258) * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C28758 * C28759 * C81 -
          (((C211 * C2002 + C28602 * C2256) * C4580 +
            (C211 * C1925 + C28602 * C2058) * C4649 + C1697 * C4579 +
            C1504 * C4648 + C389 * C4578 + C237 * C4647) *
               C28520 +
           (C4910 + C4906 + C4905 + C4904 + C4903 + C4902) * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C28758 * C28759 * C81 -
          ((C90 * C216 + C76 * C431 + C88 * C215 + C75 * C430 + C86 * C214 +
            C74 * C429 + C84 * C213 + C73 * C428) *
               C28602 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C211) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C27436 * C589 + C28711 * C593 + C27426 * C588 + C28520 * C592) *
                C211 +
            (C27436 * C681 + C28711 * C841 + C27426 * C680 + C28520 * C840) *
                C28602) *
               C4579 +
           ((C27436 * C1927 + C28711 * C1930 + C27426 * C1926 +
             C28520 * C1929) *
                C211 +
            (C27436 * C2060 + C28711 * C2314 + C27426 * C2059 +
             C28520 * C2313) *
                C28602) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C27426 * C2058 + C28520 * C2312 + C27436 * C2059 +
             C28711 * C2313) *
                C28602 +
            (C27426 * C1925 + C28520 * C1928 + C27436 * C1926 +
             C28711 * C1929) *
                C211) *
               C4580 +
           ((C27426 * C679 + C28520 * C839 + C27436 * C680 + C28711 * C840) *
                C28602 +
            (C27426 * C587 + C28520 * C591 + C27436 * C588 + C28711 * C592) *
                C211) *
               C4579 +
           ((C27426 * C214 + C28520 * C429 + C27436 * C213 + C28711 * C428) *
                C28602 +
            (C27426 * C93 + C28520 * C98 + C27436 * C92 + C28711 * C97) *
                C211) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28758 * C28759 * C81 -
          (((C148 * C216 + C28576 * C470) * C28602 +
            (C148 * C95 + C28576 * C153) * C211) *
               C76 +
           (C486 + C478) * C75 + (C485 + C475) * C74 + (C484 + C472) * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C28758 * C28759 * C81 -
          (((C4649 * C2058 + C4580 * C2374 + C4648 * C679 + C4579 * C877 +
             C4647 * C214 + C4578 * C468) *
                C28602 +
            (C4649 * C1925 + C4580 * C2002 + C4648 * C587 + C4579 * C637 +
             C4647 * C93 + C4578 * C151) *
                C211) *
               C28520 +
           ((C5019 + C5018 + C5017) * C28602 + (C4665 + C4664 + C4663) * C211) *
               C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28758 * C28759 * C81 -
          ((C520 * C95 + C537 + C537 + C28602 * C525) * C28576 * C76 +
           C549 * C75 + C548 * C74 + C547 * C73) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            (C520 * C1927 + C2435 + C2435 + C28602 * C2429) * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C28758 * C28759 * C81 -
          (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C4580 +
            C1873 * C4579 + C545 * C4578) *
               C28520 +
           (C5077 + C5071 + C5070) * C28711) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C28758 * C583 -
                    (C89 * C586 + C599 + C599 + C76 * C594 + C87 * C587 + C600 +
                     C600 + C75 * C595 + C85 * C588 + C601 + C601 + C74 * C596 +
                     C83 * C589 + C602 + C602 + C73 * C597) *
                        C28602 * C28576 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C5152 + C5153) * C28602 * C4579 +
                     (C5154 + C5155) * C28602 * C4580) *
                        C28758 * C583 -
                    ((C4583 * C5127 + C5142 + C5142 + C28520 * C5131 +
                      C4581 * C5128 + C5143 + C5143 + C28711 * C5132) *
                         C28602 * C4580 +
                     (C5155 + C5154) * C28602 * C4579 +
                     (C5153 + C5152) * C28602 * C4578) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C28758 * C583 -
          ((C148 * C590 + C28576 * C640) * C76 +
           (C148 * C586 + C28576 * C636) * C90 +
           (C148 * C591 + C28576 * C641) * C75 +
           (C148 * C587 + C28576 * C637) * C88 +
           (C148 * C592 + C28576 * C642) * C74 +
           (C148 * C588 + C28576 * C638) * C86 +
           (C148 * C593 + C28576 * C643) * C73 +
           (C148 * C589 + C28576 * C639) * C84) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C27436 +
           (C4647 * C96 + C4578 * C154 + C4648 * C593 + C4579 * C643 +
            C4649 * C1930 + C4580 * C2007) *
               C28711 +
           (C4663 + C4664 + C4665) * C27426 +
           (C4666 + C4667 + C4668) * C28520) *
              C28602 * C28758 * C583 -
          ((C4649 * C5129 + C4580 * C5207 + C4648 * C1929 + C4579 * C2006 +
            C4647 * C592 + C4578 * C642) *
               C28520 +
           (C4649 * C5127 + C4580 * C5205 + C4648 * C1926 + C4579 * C2003 +
            C4647 * C588 + C4578 * C638) *
               C27426 +
           (C4649 * C5130 + C4580 * C5208 + C4648 * C1930 + C4579 * C2007 +
            C4647 * C593 + C4578 * C643) *
               C28711 +
           (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 + C4579 * C2004 +
            C4647 * C589 + C4578 * C639) *
               C27436) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C28758 * C583 -
          ((C211 * C590 + C28602 * C682) * C76 +
           (C211 * C586 + C28602 * C678) * C90 +
           (C211 * C591 + C28602 * C683) * C75 +
           (C211 * C587 + C28602 * C679) * C88 +
           (C211 * C592 + C28602 * C684) * C74 +
           (C211 * C588 + C28602 * C680) * C86 +
           (C211 * C593 + C28602 * C685) * C73 +
           (C211 * C589 + C28602 * C681) * C84) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C5264 + C5265 + C5266 + C5267) * C4579 +
           (C5276 + C5277 + C5272 + C5273) * C4580) *
              C28758 * C583 -
          (((C211 * C5129 + C28602 * C5261) * C28520 +
            (C211 * C5127 + C28602 * C5259) * C27426 +
            (C211 * C5130 + C28602 * C5262) * C28711 +
            (C211 * C5128 + C28602 * C5260) * C27436) *
               C4580 +
           (C5273 + C5272 + C5277 + C5276) * C4579 +
           (C5267 + C5266 + C5265 + C5264) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C28758 * C583 -
          ((C90 * C636 + C76 * C720 + C88 * C637 + C75 * C721 + C86 * C638 +
            C74 * C722 + C84 * C639 + C73 * C723) *
               C28576 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C148) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C5346 + C5347) * C4648 + (C5348 + C5349) * C4579 +
           (C5350 + C5351) * C4649 + (C5352 + C5353) * C4580) *
              C28602 * C28758 * C583 -
          ((C27426 * C5205 + C28520 * C5327 + C27436 * C5206 + C28711 * C5328) *
               C4580 +
           (C27426 * C5127 + C28520 * C5129 + C27436 * C5128 + C28711 * C5130) *
               C4649 +
           (C5353 + C5352) * C4579 + (C5351 + C5350) * C4648 +
           (C5349 + C5348) * C4578 + (C5347 + C5346) * C4647) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28602 * C28758 * C583 -
                    ((C313 * C586 + C763 + C763 + C28576 * C758) * C76 +
                     (C313 * C587 + C764 + C764 + C28576 * C759) * C75 +
                     (C313 * C588 + C765 + C765 + C28576 * C760) * C74 +
                     (C313 * C589 + C766 + C766 + C28576 * C761) * C73) *
                        C28602 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28711 +
                     (C4849 + C4850 + C4851) * C28520) *
                        C28602 * C28758 * C583 -
                    ((C4826 * C5127 + C5406 + C5406 + C4580 * C5403 +
                      C4825 * C1926 + C5407 + C5407 + C4579 * C2198 +
                      C4824 * C588 + C5408 + C5408 + C4578 * C760) *
                         C28520 +
                     (C4826 * C5128 + C5409 + C5409 + C4580 * C5404 +
                      C4825 * C1927 + C5410 + C5410 + C4579 * C2199 +
                      C4824 * C589 + C5411 + C5411 + C4578 * C761) *
                         C28711) *
                        C28602 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28758 * C583 -
          (((C211 * C636 + C28602 * C800) * C28576 +
            (C211 * C586 + C28602 * C678) * C148) *
               C76 +
           ((C211 * C637 + C28602 * C801) * C28576 +
            (C211 * C587 + C28602 * C679) * C148) *
               C75 +
           ((C211 * C638 + C28602 * C802) * C28576 +
            (C211 * C588 + C28602 * C680) * C148) *
               C74 +
           ((C211 * C639 + C28602 * C803) * C28576 +
            (C211 * C589 + C28602 * C681) * C148) *
               C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + C5274 * C4649 + C5466 * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C28758 * C583 -
          (((C211 * C5205 + C28602 * C5461) * C4580 +
            (C211 * C5127 + C28602 * C5259) * C4649 + C4909 * C4579 +
            C4723 * C4648 + C1696 * C4578 + C1502 * C4647) *
               C28520 +
           ((C211 * C5206 + C28602 * C5462) * C4580 +
            (C211 * C5128 + C28602 * C5260) * C4649 + C5466 * C4579 +
            C5274 * C4648 + C2262 * C4578 + C2073 * C4647) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C28758 * C583 -
          ((C90 * C678 + C76 * C838 + C88 * C679 + C75 * C839 + C86 * C680 +
            C74 * C840 + C84 * C681 + C73 * C841) *
               C28602 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C211) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C5346 + C5347) * C211 + (C5527 + C5528) * C28602) * C4579 +
           ((C5350 + C5351) * C211 + (C5529 + C5530) * C28602) * C4580) *
              C28758 * C583 -
          (((C27426 * C5259 + C28520 * C5516 + C27436 * C5260 +
             C28711 * C5517) *
                C28602 +
            (C27426 * C5127 + C28520 * C5129 + C27436 * C5128 +
             C28711 * C5130) *
                C211) *
               C4580 +
           ((C5530 + C5529) * C28602 + (C5351 + C5350) * C211) * C4579 +
           ((C5528 + C5527) * C28602 + (C5347 + C5346) * C211) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28758 * C583 -
          (((C148 * C678 + C28576 * C876) * C28602 +
            (C148 * C586 + C28576 * C636) * C211) *
               C76 +
           ((C148 * C679 + C28576 * C877) * C28602 +
            (C148 * C587 + C28576 * C637) * C211) *
               C75 +
           ((C148 * C680 + C28576 * C878) * C28602 +
            (C148 * C588 + C28576 * C638) * C211) *
               C74 +
           ((C148 * C681 + C28576 * C879) * C28602 +
            (C148 * C589 + C28576 * C639) * C211) *
               C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C28758 * C583 -
          (((C4649 * C5259 + C4580 * C5580 + C4648 * C2059 + C4579 * C2375 +
             C4647 * C680 + C4578 * C878) *
                C28602 +
            (C4649 * C5127 + C4580 * C5205 + C4648 * C1926 + C4579 * C2003 +
             C4647 * C588 + C4578 * C638) *
                C211) *
               C28520 +
           ((C4649 * C5260 + C4580 * C5581 + C4648 * C2060 + C4579 * C2376 +
             C4647 * C681 + C4578 * C879) *
                C28602 +
            (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 + C4579 * C2004 +
             C4647 * C589 + C4578 * C639) *
                C211) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28758 * C583 -
          ((C520 * C586 + C919 + C919 + C28602 * C914) * C28576 * C76 +
           (C520 * C587 + C920 + C920 + C28602 * C915) * C28576 * C75 +
           (C520 * C588 + C921 + C921 + C28602 * C916) * C28576 * C74 +
           (C520 * C589 + C922 + C922 + C28602 * C917) * C28576 * C73) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            C5641 * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C28758 * C583 -
          (((C520 * C5127 + C5637 + C5637 + C28602 * C5632) * C4580 +
            C5076 * C4579 + C1872 * C4578) *
               C28520 +
           ((C520 * C5128 + C5638 + C5638 + C28602 * C5633) * C4580 +
            C5641 * C4579 + C2438 * C4578) *
               C28711) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28602 * C28576 * C956 -
                    (C89 * C958 + C971 + C971 + C76 * C966 + C87 * C959 + C972 +
                     C972 + C75 * C967 + C85 * C960 + C973 + C973 + C74 * C968 +
                     C83 * C961 + C974 + C974 + C73 * C969) *
                        C28602 * C28576 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4581 * C91 + C4586 + C4586 + C28711 * C101 +
                      C4583 * C92 + C4587 + C4587 + C28520 * C102) *
                         C28602 * C4578 +
                     (C5152 + C5153) * C28602 * C4579 +
                     (C5154 + C5155) * C28602 * C4580) *
                        C956 -
                    ((C4583 * C5691 + C5698 + C5698 + C28520 * C5695 +
                      C4581 * C5692 + C5699 + C5699 + C28711 * C5696) *
                         C28602 * C4580 +
                     (C4583 * C2489 + C5700 + C5700 + C28520 * C2495 +
                      C4581 * C2490 + C5701 + C5701 + C28711 * C2496) *
                         C28602 * C4579 +
                     (C4583 * C960 + C5702 + C5702 + C28520 * C968 +
                      C4581 * C961 + C5703 + C5703 + C28711 * C969) *
                         C28602 * C4578) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28576 * C149) * C84 +
           (C148 * C96 + C28576 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28602 * C956 -
          ((C148 * C962 + C28576 * C1012) * C76 +
           (C148 * C958 + C28576 * C1008) * C90 +
           (C148 * C963 + C28576 * C1013) * C75 +
           (C148 * C959 + C28576 * C1009) * C88 +
           (C148 * C964 + C28576 * C1014) * C74 +
           (C148 * C960 + C28576 * C1010) * C86 +
           (C148 * C965 + C28576 * C1015) * C73 +
           (C148 * C961 + C28576 * C1011) * C84) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C27436 +
           (C4647 * C96 + C4578 * C154 + C4648 * C593 + C4579 * C643 +
            C4649 * C1930 + C4580 * C2007) *
               C28711 +
           (C4663 + C4664 + C4665) * C27426 +
           (C4666 + C4667 + C4668) * C28520) *
              C28602 * C956 -
          ((C4649 * C5693 + C4580 * C5755 + C4648 * C2492 + C4579 * C2557 +
            C4647 * C964 + C4578 * C1014) *
               C28520 +
           (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
            C4647 * C960 + C4578 * C1010) *
               C27426 +
           (C4649 * C5694 + C4580 * C5756 + C4648 * C2493 + C4579 * C2558 +
            C4647 * C965 + C4578 * C1015) *
               C28711 +
           (C4649 * C5692 + C4580 * C5754 + C4648 * C2490 + C4579 * C2555 +
            C4647 * C961 + C4578 * C1011) *
               C27436) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28602 * C212) * C84 +
           (C211 * C96 + C28602 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28576 * C956 -
          ((C211 * C962 + C28602 * C1054) * C76 +
           (C211 * C958 + C28602 * C1050) * C90 +
           (C211 * C963 + C28602 * C1055) * C75 +
           (C211 * C959 + C28602 * C1051) * C88 +
           (C211 * C964 + C28602 * C1056) * C74 +
           (C211 * C960 + C28602 * C1052) * C86 +
           (C211 * C965 + C28602 * C1057) * C73 +
           (C211 * C961 + C28602 * C1053) * C84) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C27436 +
            (C211 * C96 + C28602 * C217) * C28711 + C235 * C27426 +
            C236 * C28520) *
               C4578 +
           (C5264 + C5265 + C5266 + C5267) * C4579 +
           (C5276 + C5277 + C5272 + C5273) * C4580) *
              C956 -
          (((C211 * C5693 + C28602 * C5809) * C28520 +
            (C211 * C5691 + C28602 * C5807) * C27426 +
            (C211 * C5694 + C28602 * C5810) * C28711 +
            (C211 * C5692 + C28602 * C5808) * C27436) *
               C4580 +
           ((C211 * C2492 + C28602 * C2613) * C28520 +
            (C211 * C2489 + C28602 * C2610) * C27426 +
            (C211 * C2493 + C28602 * C2614) * C28711 +
            (C211 * C2490 + C28602 * C2611) * C27436) *
               C4579 +
           ((C211 * C964 + C28602 * C1056) * C28520 +
            (C211 * C960 + C28602 * C1052) * C27426 +
            (C211 * C965 + C28602 * C1057) * C28711 +
            (C211 * C961 + C28602 * C1053) * C27436) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28576) *
              C28602 * C956 -
          ((C90 * C1008 + C76 * C1092 + C88 * C1009 + C75 * C1093 +
            C86 * C1010 + C74 * C1094 + C84 * C1011 + C73 * C1095) *
               C28576 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C148) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C4647 +
           (C27436 * C149 + C28711 * C274 + C27426 * C150 + C28520 * C275) *
               C4578 +
           (C5346 + C5347) * C4648 + (C5348 + C5349) * C4579 +
           (C5350 + C5351) * C4649 + (C5352 + C5353) * C4580) *
              C28602 * C956 -
          ((C27426 * C5753 + C28520 * C5861 + C27436 * C5754 + C28711 * C5862) *
               C4580 +
           (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 + C28711 * C5694) *
               C4649 +
           (C27426 * C2554 + C28520 * C2666 + C27436 * C2555 + C28711 * C2667) *
               C4579 +
           (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 + C28711 * C2493) *
               C4648 +
           (C27426 * C1010 + C28520 * C1094 + C27436 * C1011 + C28711 * C1095) *
               C4578 +
           (C27426 * C960 + C28520 * C964 + C27436 * C961 + C28711 * C965) *
               C4647) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[38] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28576 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28602 * C956 -
                    ((C313 * C958 + C1135 + C1135 + C28576 * C1130) * C76 +
                     (C313 * C959 + C1136 + C1136 + C28576 * C1131) * C75 +
                     (C313 * C960 + C1137 + C1137 + C28576 * C1132) * C74 +
                     (C313 * C961 + C1138 + C1138 + C28576 * C1133) * C73) *
                        C28602 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28711 +
                     (C4849 + C4850 + C4851) * C28520) *
                        C28602 * C956 -
                    ((C4826 * C5691 + C5916 + C5916 + C4580 * C5913 +
                      C4825 * C2489 + C5917 + C5917 + C4579 * C2719 +
                      C4824 * C960 + C5918 + C5918 + C4578 * C1132) *
                         C28520 +
                     (C4826 * C5692 + C5919 + C5919 + C4580 * C5914 +
                      C4825 * C2490 + C5920 + C5920 + C4579 * C2720 +
                      C4824 * C961 + C5921 + C5921 + C4578 * C1133) *
                         C28711) *
                        C28602 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C148 +
            (C211 * C149 + C28602 * C373) * C28576) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C956 -
          (((C211 * C1008 + C28602 * C1172) * C28576 +
            (C211 * C958 + C28602 * C1050) * C148) *
               C76 +
           ((C211 * C1009 + C28602 * C1173) * C28576 +
            (C211 * C959 + C28602 * C1051) * C148) *
               C75 +
           ((C211 * C1010 + C28602 * C1174) * C28576 +
            (C211 * C960 + C28602 * C1052) * C148) *
               C74 +
           ((C211 * C1011 + C28602 * C1175) * C28576 +
            (C211 * C961 + C28602 * C1053) * C148) *
               C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28602 * C212) * C4647 +
            (C211 * C149 + C28602 * C373) * C4578 + C2073 * C4648 +
            C2262 * C4579 + C5274 * C4649 + C5466 * C4580) *
               C28711 +
           (C4902 + C4903 + C4904 + C4905 + C4906 + C4910) * C28520) *
              C956 -
          (((C211 * C5753 + C28602 * C5971) * C4580 +
            (C211 * C5691 + C28602 * C5807) * C4649 +
            (C211 * C2554 + C28602 * C2778) * C4579 +
            (C211 * C2489 + C28602 * C2610) * C4648 +
            (C211 * C1010 + C28602 * C1174) * C4578 +
            (C211 * C960 + C28602 * C1052) * C4647) *
               C28520 +
           ((C211 * C5754 + C28602 * C5972) * C4580 +
            (C211 * C5692 + C28602 * C5808) * C4649 +
            (C211 * C2555 + C28602 * C2779) * C4579 +
            (C211 * C2490 + C28602 * C2611) * C4648 +
            (C211 * C1011 + C28602 * C1175) * C4578 +
            (C211 * C961 + C28602 * C1053) * C4647) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28602) *
              C28576 * C956 -
          ((C90 * C1050 + C76 * C1210 + C88 * C1051 + C75 * C1211 +
            C86 * C1052 + C74 * C1212 + C84 * C1053 + C73 * C1213) *
               C28602 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C211) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28711 * C96 + C27426 * C92 + C28520 * C97) * C211 +
            (C27436 * C212 + C28711 * C427 + C27426 * C213 + C28520 * C428) *
                C28602) *
               C4578 +
           ((C5346 + C5347) * C211 + (C5527 + C5528) * C28602) * C4579 +
           ((C5350 + C5351) * C211 + (C5529 + C5530) * C28602) * C4580) *
              C956 -
          (((C27426 * C5807 + C28520 * C6023 + C27436 * C5808 +
             C28711 * C6024) *
                C28602 +
            (C27426 * C5691 + C28520 * C5693 + C27436 * C5692 +
             C28711 * C5694) *
                C211) *
               C4580 +
           ((C27426 * C2610 + C28520 * C2831 + C27436 * C2611 +
             C28711 * C2832) *
                C28602 +
            (C27426 * C2489 + C28520 * C2492 + C27436 * C2490 +
             C28711 * C2493) *
                C211) *
               C4579 +
           ((C27426 * C1052 + C28520 * C1212 + C27436 * C1053 +
             C28711 * C1213) *
                C28602 +
            (C27426 * C960 + C28520 * C964 + C27436 * C961 + C28711 * C965) *
                C211) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C211 +
            (C148 * C212 + C28576 * C466) * C28602) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C956 -
          (((C148 * C1050 + C28576 * C1248) * C28602 +
            (C148 * C958 + C28576 * C1008) * C211) *
               C76 +
           ((C148 * C1051 + C28576 * C1249) * C28602 +
            (C148 * C959 + C28576 * C1009) * C211) *
               C75 +
           ((C148 * C1052 + C28576 * C1250) * C28602 +
            (C148 * C960 + C28576 * C1010) * C211) *
               C74 +
           ((C148 * C1053 + C28576 * C1251) * C28602 +
            (C148 * C961 + C28576 * C1011) * C211) *
               C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
             C4649 * C1927 + C4580 * C2004) *
                C211 +
            (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
             C4649 * C2060 + C4580 * C2376) *
                C28602) *
               C28711 +
           ((C4663 + C4664 + C4665) * C211 + (C5017 + C5018 + C5019) * C28602) *
               C28520) *
              C956 -
          (((C4649 * C5807 + C4580 * C6075 + C4648 * C2610 + C4579 * C2884 +
             C4647 * C1052 + C4578 * C1250) *
                C28602 +
            (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
             C4647 * C960 + C4578 * C1010) *
                C211) *
               C28520 +
           ((C4649 * C5808 + C4580 * C6076 + C4648 * C2611 + C4579 * C2885 +
             C4647 * C1053 + C4578 * C1251) *
                C28602 +
            (C4649 * C5692 + C4580 * C5754 + C4648 * C2490 + C4579 * C2555 +
             C4647 * C961 + C4578 * C1011) *
                C211) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28602 * C521) * C28576 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C956 -
          ((C520 * C958 + C1291 + C1291 + C28602 * C1286) * C28576 * C76 +
           (C520 * C959 + C1292 + C1292 + C28602 * C1287) * C28576 * C75 +
           (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C28576 * C74 +
           (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C28576 * C73) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28602 * C521) * C4578 + C2438 * C4579 +
            C5641 * C4580) *
               C28711 +
           (C5070 + C5071 + C5077) * C28520) *
              C956 -
          (((C520 * C5691 + C6130 + C6130 + C28602 * C6127) * C4580 +
            (C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C4579 +
            (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C4578) *
               C28520 +
           ((C520 * C5692 + C6131 + C6131 + C28602 * C6128) * C4580 +
            (C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C4579 +
            (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C4578) *
               C28711) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1349 * C589 + C1359 + C1359 + C1344 * C597 + C1351 * C588 + C1360 +
            C1360 + C1345 * C596 + C1353 * C587 + C1361 + C1361 +
            C1346 * C595) *
               C28602 * C28590) *
              C28758 * C28759 * C81 -
          ((C1353 * C586 + C1362 + C1362 + C1346 * C594 + C1351 * C587 + C1363 +
            C1363 + C1345 * C595 + C1349 * C588 + C1364 + C1364 +
            C1344 * C596) *
               C28602 * C28590 +
           (C1353 * C94 + C1365 + C1365 + C1346 * C104 + C1351 * C93 + C1366 +
            C1366 + C1345 * C103 + C1349 * C92 + C1367 + C1367 + C1344 * C102) *
               C28602 * C28724) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           (C6170 * C589 + C6174 + C6174 + C28515 * C597) * C28602 * C6167 +
           (C6170 * C1927 + C6175 + C6175 + C28515 * C1933) * C28602 * C6168 +
           (C6170 * C5128 + C6176 + C6176 + C28515 * C5132) * C28602 * C6169) *
              C28758 * C28759 * C81 -
          ((C6170 * C5127 + C6177 + C6177 + C28515 * C5131) * C28602 * C6169 +
           (C6170 * C1926 + C6178 + C6178 + C28515 * C1932) * C28602 * C6168 +
           (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C28602 * C6167 +
           (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C28602 * C6166) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C28758 * C28759 * C81 -
          ((C1418 * C590 + C28590 * C640 + C1417 * C99 + C28724 * C157) *
               C1346 +
           (C1418 * C586 + C28590 * C636 + C1417 * C94 + C28724 * C152) *
               C1354 +
           (C1443 + C1442) * C1345 + (C1441 + C1440) * C1352 +
           (C1439 + C1438) * C1344 + (C1437 + C1436) * C1350) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C28758 * C28759 * C81 -
          ((C6217 * C5129 + C6169 * C5207 + C6216 * C1929 + C6168 * C2006 +
            C6215 * C592 + C6167 * C642 + C6214 * C97 + C6166 * C155) *
               C28515 +
           (C6217 * C5127 + C6169 * C5205 + C6216 * C1926 + C6168 * C2003 +
            C6215 * C588 + C6167 * C638 + C6214 * C92 + C6166 * C150) *
               C6171) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1350 +
                      (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 +
                      C236 * C1345 + C237 * C1354 + C238 * C1346) *
                         C28724 +
                     ((C211 * C589 + C28602 * C681) * C1350 +
                      (C211 * C593 + C28602 * C685) * C1344 + C1502 * C1352 +
                      C1503 * C1345 + C1504 * C1354 + C1505 * C1346) *
                         C28590) *
                        C28758 * C28759 * C81 -
                    (((C211 * C590 + C28602 * C682) * C1346 +
                      (C211 * C586 + C28602 * C678) * C1354 + C1505 * C1345 +
                      C1504 * C1352 + C1503 * C1344 + C1502 * C1350) *
                         C28590 +
                     (C240 * C1346 + C239 * C1354 + C238 * C1345 +
                      C237 * C1352 + C236 * C1344 + C235 * C1350) *
                         C28724) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C6171 +
                      (C211 * C96 + C28602 * C217) * C28515) *
                         C6166 +
                     (C2073 * C6171 + C2074 * C28515) * C6167 +
                     (C5274 * C6171 + C5275 * C28515) * C6168 +
                     ((C211 * C5128 + C28602 * C5260) * C6171 +
                      (C211 * C5130 + C28602 * C5262) * C28515) *
                         C6169) *
                        C28758 * C28759 * C81 -
                    (((C211 * C5129 + C28602 * C5261) * C28515 +
                      (C211 * C5127 + C28602 * C5259) * C6171) *
                         C6169 +
                     (C4724 * C28515 + C4723 * C6171) * C6168 +
                     (C1503 * C28515 + C1502 * C6171) * C6167 +
                     (C236 * C28515 + C235 * C6171) * C6166) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
                      C1354 * C93 + C1346 * C98) *
                         C1417 +
                     (C1350 * C149 + C1344 * C274 + C1352 * C150 +
                      C1345 * C275 + C1354 * C151 + C1346 * C276) *
                         C28724 +
                     (C1350 * C589 + C1344 * C593 + C1352 * C588 +
                      C1345 * C592 + C1354 * C587 + C1346 * C591) *
                         C1418 +
                     (C1350 * C639 + C1344 * C723 + C1352 * C638 +
                      C1345 * C722 + C1354 * C637 + C1346 * C721) *
                         C28590) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C1354 * C636 + C1346 * C720 + C1352 * C637 +
                      C1345 * C721 + C1350 * C638 + C1344 * C722) *
                         C28590 +
                     (C1354 * C586 + C1346 * C590 + C1352 * C587 +
                      C1345 * C591 + C1350 * C588 + C1344 * C592) *
                         C1418 +
                     (C1354 * C152 + C1346 * C277 + C1352 * C151 +
                      C1345 * C276 + C1350 * C150 + C1344 * C275) *
                         C28724 +
                     (C1354 * C94 + C1346 * C99 + C1352 * C93 + C1345 * C98 +
                      C1350 * C92 + C1344 * C97) *
                         C1417) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C6171 * C91 + C28515 * C96) * C6214 +
                     (C6171 * C149 + C28515 * C274) * C6166 +
                     (C6171 * C589 + C28515 * C593) * C6215 +
                     (C6171 * C639 + C28515 * C723) * C6167 +
                     (C6171 * C1927 + C28515 * C1930) * C6216 +
                     (C6171 * C2004 + C28515 * C2128) * C6168 +
                     (C6171 * C5128 + C28515 * C5130) * C6217 +
                     (C6171 * C5206 + C28515 * C5328) * C6169) *
                        C28602 * C28758 * C28759 * C81 -
                    ((C6171 * C5205 + C28515 * C5327) * C6169 +
                     (C6171 * C5127 + C28515 * C5129) * C6217 +
                     (C6171 * C2003 + C28515 * C2127) * C6168 +
                     (C6171 * C1926 + C28515 * C1929) * C6216 +
                     (C6171 * C638 + C28515 * C722) * C6167 +
                     (C6171 * C588 + C28515 * C592) * C6215 +
                     (C6171 * C150 + C28515 * C275) * C6166 +
                     (C6171 * C92 + C28515 * C97) * C6214) *
                        C28602 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C28758 * C28759 * C81 -
          ((C1606 * C586 + C1622 + C1622 + C28590 * C758 + C1605 * C94 + C1623 +
            C1623 + C28724 * C317) *
               C1346 +
           (C1635 + C1634) * C1345 + (C1633 + C1632) * C1344) *
              C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C28758 * C28759 * C81 -
          (C6323 * C5127 + C6329 + C6329 + C6169 * C5403 + C6322 * C1926 +
           C6330 + C6330 + C6168 * C2198 + C6321 * C588 + C6331 + C6331 +
           C6167 * C760 + C6320 * C92 + C6332 + C6332 + C6166 * C315) *
              C28515 * C28602 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1417 +
                      (C211 * C149 + C28602 * C373) * C28724 +
                      (C211 * C589 + C28602 * C681) * C1418 +
                      (C211 * C639 + C28602 * C803) * C28590) *
                         C1344 +
                     (C1686 + C1687 + C1688 + C1698) * C1345 +
                     (C1691 + C1692 + C1693 + C1699) * C1346) *
                        C28758 * C28759 * C81 -
                    (((C211 * C636 + C28602 * C800) * C28590 +
                      (C211 * C586 + C28602 * C678) * C1418 + C390 * C28724 +
                      C239 * C1417) *
                         C1346 +
                     (C1699 + C1693 + C1692 + C1691) * C1345 +
                     (C1698 + C1688 + C1687 + C1686) * C1344) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28602 * C212) * C6214 +
                     (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
                     C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
                     (C211 * C5128 + C28602 * C5260) * C6217 +
                     (C211 * C5206 + C28602 * C5462) * C6169) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C211 * C5205 + C28602 * C5461) * C6169 +
                     (C211 * C5127 + C28602 * C5259) * C6217 + C4909 * C6168 +
                     C4723 * C6216 + C1696 * C6167 + C1502 * C6215 +
                     C388 * C6166 + C235 * C6214) *
                        C28515 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
                       C1354 * C93 + C1346 * C98) *
                          C211 +
                      (C1350 * C212 + C1344 * C427 + C1352 * C213 +
                       C1345 * C428 + C1354 * C214 + C1346 * C429) *
                          C28602) *
                         C28724 +
                     ((C1350 * C589 + C1344 * C593 + C1352 * C588 +
                       C1345 * C592 + C1354 * C587 + C1346 * C591) *
                          C211 +
                      (C1350 * C681 + C1344 * C841 + C1352 * C680 +
                       C1345 * C840 + C1354 * C679 + C1346 * C839) *
                          C28602) *
                         C28590) *
                        C28758 * C28759 * C81 -
                    (((C1354 * C678 + C1346 * C838 + C1352 * C679 +
                       C1345 * C839 + C1350 * C680 + C1344 * C840) *
                          C28602 +
                      (C1354 * C586 + C1346 * C590 + C1352 * C587 +
                       C1345 * C591 + C1350 * C588 + C1344 * C592) *
                          C211) *
                         C28590 +
                     ((C1354 * C215 + C1346 * C430 + C1352 * C214 +
                       C1345 * C429 + C1350 * C213 + C1344 * C428) *
                          C28602 +
                      (C1354 * C94 + C1346 * C99 + C1352 * C93 + C1345 * C98 +
                       C1350 * C92 + C1344 * C97) *
                          C211) *
                         C28724) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C211 +
                      (C6171 * C212 + C28515 * C427) * C28602) *
                         C6166 +
                     ((C6171 * C589 + C28515 * C593) * C211 +
                      (C6171 * C681 + C28515 * C841) * C28602) *
                         C6167 +
                     ((C6171 * C1927 + C28515 * C1930) * C211 +
                      (C6171 * C2060 + C28515 * C2314) * C28602) *
                         C6168 +
                     ((C6171 * C5128 + C28515 * C5130) * C211 +
                      (C6171 * C5260 + C28515 * C5517) * C28602) *
                         C6169) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C5259 + C28515 * C5516) * C28602 +
                      (C6171 * C5127 + C28515 * C5129) * C211) *
                         C6169 +
                     ((C6171 * C2059 + C28515 * C2313) * C28602 +
                      (C6171 * C1926 + C28515 * C1929) * C211) *
                         C6168 +
                     ((C6171 * C680 + C28515 * C840) * C28602 +
                      (C6171 * C588 + C28515 * C592) * C211) *
                         C6167 +
                     ((C6171 * C213 + C28515 * C428) * C28602 +
                      (C6171 * C92 + C28515 * C97) * C211) *
                         C6166) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[39] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C28758 * C28759 * C81 -
          (((C1418 * C678 + C28590 * C876 + C1417 * C215 + C28724 * C469) *
                C28602 +
            (C1418 * C586 + C28590 * C636 + C1417 * C94 + C28724 * C152) *
                C211) *
               C1346 +
           ((C1811 + C1810) * C28602 + (C1441 + C1440) * C211) * C1345 +
           ((C1809 + C1808) * C28602 + (C1437 + C1436) * C211) * C1344) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C28758 * C28759 * C81 -
          ((C6217 * C5259 + C6169 * C5580 + C6216 * C2059 + C6168 * C2375 +
            C6215 * C680 + C6167 * C878 + C6214 * C213 + C6166 * C467) *
               C28602 +
           (C6217 * C5127 + C6169 * C5205 + C6216 * C1926 + C6168 * C2003 +
            C6215 * C588 + C6167 * C638 + C6214 * C92 + C6166 * C150) *
               C211) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[39] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      (C520 * C589 + C922 + C922 + C28602 * C917) * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C28758 * C28759 * C81 -
                    (((C520 * C586 + C919 + C919 + C28602 * C914) * C28590 +
                      C546 * C28724) *
                         C1346 +
                     (C1875 + C1865) * C1345 + (C1874 + C1862) * C1344) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 +
                     (C520 * C5128 + C5638 + C5638 + C28602 * C5633) * C6169) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C520 * C5127 + C5637 + C5637 + C28602 * C5632) * C6169 +
                     C5076 * C6168 + C1872 * C6167 + C544 * C6166) *
                        C28515 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1950 + C1951 + C1952) * C28602 * C28590) *
              C28758 * C583 -
          ((C1353 * C1925 + C1941 + C1941 + C1346 * C1931 + C1351 * C1926 +
            C1942 + C1942 + C1345 * C1932 + C1349 * C1927 + C1943 + C1943 +
            C1344 * C1933) *
               C28602 * C28590 +
           (C1952 + C1951 + C1950) * C28602 * C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           C6522 * C6167 + C6523 * C6168 + C6524 * C6169) *
              C28758 * C583 -
          ((C6170 * C6502 + C6512 + C6512 + C28515 * C6504) * C28602 * C6169 +
           C6524 * C6168 + C6523 * C6167 + C6522 * C6166) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C28758 * C583 -
          ((C1418 * C1928 + C28590 * C2005 + C1417 * C591 + C28724 * C641) *
               C1346 +
           (C1418 * C1925 + C28590 * C2002 + C1417 * C587 + C28724 * C637) *
               C1354 +
           (C1418 * C1929 + C28590 * C2006 + C1417 * C592 + C28724 * C642) *
               C1345 +
           (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
               C1352 +
           (C1418 * C1930 + C28590 * C2007 + C1417 * C593 + C28724 * C643) *
               C1344 +
           (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
               C1350) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C28758 * C583 -
          ((C6217 * C6503 + C6169 * C6559 + C6216 * C5130 + C6168 * C5208 +
            C6215 * C1930 + C6167 * C2007 + C6214 * C593 + C6166 * C643) *
               C28515 +
           (C6217 * C6502 + C6169 * C6558 + C6216 * C5128 + C6168 * C5206 +
            C6215 * C1927 + C6167 * C2004 + C6214 * C589 + C6166 * C639) *
               C6171) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1350 +
                      (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 +
                      C236 * C1345 + C237 * C1354 + C238 * C1346) *
                         C28724 +
                     (C2075 + C2076 + C2069 + C2070 + C2071 + C2072) * C28590) *
                        C28758 * C583 -
                    (((C211 * C1928 + C28602 * C2061) * C1346 +
                      (C211 * C1925 + C28602 * C2058) * C1354 +
                      (C211 * C1929 + C28602 * C2062) * C1345 +
                      (C211 * C1926 + C28602 * C2059) * C1352 +
                      (C211 * C1930 + C28602 * C2063) * C1344 +
                      (C211 * C1927 + C28602 * C2060) * C1350) *
                         C28590 +
                     (C2072 + C2071 + C2070 + C2069 + C2076 + C2075) * C28724) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C6171 +
                      (C211 * C96 + C28602 * C217) * C28515) *
                         C6166 +
                     (C6597 + C6598) * C6167 + (C6599 + C6600) * C6168 +
                     (C6607 + C6608) * C6169) *
                        C28758 * C583 -
                    (((C211 * C6503 + C28602 * C6595) * C28515 +
                      (C211 * C6502 + C28602 * C6594) * C6171) *
                         C6169 +
                     (C6608 + C6607) * C6168 + (C6600 + C6599) * C6167 +
                     (C6598 + C6597) * C6166) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C1417 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
            C1354 * C151 + C1346 * C276) *
               C28724 +
           (C2142 + C2143 + C2144) * C1418 + (C2145 + C2146 + C2147) * C28590) *
              C28602 * C28758 * C583 -
          ((C1354 * C2002 + C1346 * C2126 + C1352 * C2003 + C1345 * C2127 +
            C1350 * C2004 + C1344 * C2128) *
               C28590 +
           (C1354 * C1925 + C1346 * C1928 + C1352 * C1926 + C1345 * C1929 +
            C1350 * C1927 + C1344 * C1930) *
               C1418 +
           (C2147 + C2146 + C2145) * C28724 + (C2144 + C2143 + C2142) * C1417) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C6214 +
           (C6171 * C149 + C28515 * C274) * C6166 + C6656 * C6215 +
           C6657 * C6167 + C6658 * C6216 + C6659 * C6168 + C6660 * C6217 +
           C6661 * C6169) *
              C28602 * C28758 * C583 -
          ((C6171 * C6558 + C28515 * C6642) * C6169 +
           (C6171 * C6502 + C28515 * C6503) * C6217 + C6661 * C6168 +
           C6660 * C6216 + C6659 * C6167 + C6658 * C6215 + C6657 * C6166 +
           C6656 * C6214) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C28758 * C583 -
          ((C1606 * C1925 + C2201 + C2201 + C28590 * C2197 + C1605 * C587 +
            C2202 + C2202 + C28724 * C759) *
               C1346 +
           (C1606 * C1926 + C2203 + C2203 + C28590 * C2198 + C1605 * C588 +
            C2204 + C2204 + C28724 * C760) *
               C1345 +
           (C1606 * C1927 + C2205 + C2205 + C28590 * C2199 + C1605 * C589 +
            C2206 + C2206 + C28724 * C761) *
               C1344) *
              C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C28758 * C583 -
          (C6323 * C6502 + C6697 + C6697 + C6169 * C6695 + C6322 * C5128 +
           C6698 + C6698 + C6168 * C5404 + C6321 * C1927 + C6699 + C6699 +
           C6167 * C2199 + C6320 * C589 + C6700 + C6700 + C6166 * C761) *
              C28515 * C28602 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1417 +
                      (C211 * C149 + C28602 * C373) * C28724 + C2073 * C1418 +
                      C2262 * C28590) *
                         C1344 +
                     (C1686 + C1687 + C1688 + C1698) * C1345 +
                     (C1691 + C1692 + C1693 + C1699) * C1346) *
                        C28758 * C583 -
                    (((C211 * C2002 + C28602 * C2256) * C28590 +
                      (C211 * C1925 + C28602 * C2058) * C1418 + C1697 * C28724 +
                      C1504 * C1417) *
                         C1346 +
                     ((C211 * C2003 + C28602 * C2257) * C28590 +
                      (C211 * C1926 + C28602 * C2059) * C1418 + C1696 * C28724 +
                      C1502 * C1417) *
                         C1345 +
                     ((C211 * C2004 + C28602 * C2258) * C28590 +
                      (C211 * C1927 + C28602 * C2060) * C1418 + C2262 * C28724 +
                      C2073 * C1417) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28602 * C212) * C6214 +
                     (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
                     C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
                     C6605 * C6217 + C6738 * C6169) *
                        C28515 * C28758 * C583 -
                    ((C211 * C6558 + C28602 * C6734) * C6169 +
                     (C211 * C6502 + C28602 * C6594) * C6217 + C6738 * C6168 +
                     C6605 * C6216 + C5466 * C6167 + C5274 * C6215 +
                     C2262 * C6166 + C2073 * C6214) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezx[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
             C1354 * C214 + C1346 * C429) *
                C28602) *
               C28724 +
           ((C2142 + C2143 + C2144) * C211 + (C2322 + C2323 + C2324) * C28602) *
               C28590) *
              C28758 * C583 -
          (((C1354 * C2058 + C1346 * C2312 + C1352 * C2059 + C1345 * C2313 +
             C1350 * C2060 + C1344 * C2314) *
                C28602 +
            (C1354 * C1925 + C1346 * C1928 + C1352 * C1926 + C1345 * C1929 +
             C1350 * C1927 + C1344 * C1930) *
                C211) *
               C28590 +
           ((C2324 + C2323 + C2322) * C28602 + (C2144 + C2143 + C2142) * C211) *
               C28724) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C211 +
            (C6171 * C212 + C28515 * C427) * C28602) *
               C6166 +
           (C6774 + C6786) * C6167 + (C6777 + C6787) * C6168 +
           (C6780 + C6788) * C6169) *
              C28758 * C583 -
          (((C6171 * C6594 + C28515 * C6772) * C28602 +
            (C6171 * C6502 + C28515 * C6503) * C211) *
               C6169 +
           (C6788 + C6780) * C6168 + (C6787 + C6777) * C6167 +
           (C6786 + C6774) * C6166) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[40] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C28758 * C583 -
          (((C1418 * C2058 + C28590 * C2374 + C1417 * C679 + C28724 * C877) *
                C28602 +
            (C1418 * C1925 + C28590 * C2002 + C1417 * C587 + C28724 * C637) *
                C211) *
               C1346 +
           ((C1418 * C2059 + C28590 * C2375 + C1417 * C680 + C28724 * C878) *
                C28602 +
            (C1418 * C1926 + C28590 * C2003 + C1417 * C588 + C28724 * C638) *
                C211) *
               C1345 +
           ((C1418 * C2060 + C28590 * C2376 + C1417 * C681 + C28724 * C879) *
                C28602 +
            (C1418 * C1927 + C28590 * C2004 + C1417 * C589 + C28724 * C639) *
                C211) *
               C1344) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C28758 * C583 -
          ((C6217 * C6594 + C6169 * C6822 + C6216 * C5260 + C6168 * C5581 +
            C6215 * C2060 + C6167 * C2376 + C6214 * C681 + C6166 * C879) *
               C28602 +
           (C6217 * C6502 + C6169 * C6558 + C6216 * C5128 + C6168 * C5206 +
            C6215 * C1927 + C6167 * C2004 + C6214 * C589 + C6166 * C639) *
               C211) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[40] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      C2438 * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C28758 * C583 -
                    (((C520 * C1925 + C2433 + C2433 + C28602 * C2427) * C28590 +
                      C1873 * C28724) *
                         C1346 +
                     ((C520 * C1926 + C2434 + C2434 + C28602 * C2428) * C28590 +
                      C1872 * C28724) *
                         C1345 +
                     ((C520 * C1927 + C2435 + C2435 + C28602 * C2429) * C28590 +
                      C2438 * C28724) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 + C6864 * C6169) *
                        C28515 * C28758 * C583 -
                    ((C520 * C6502 + C6861 + C6861 + C28602 * C6857) * C6169 +
                     C6864 * C6168 + C5641 * C6167 + C2438 * C6166) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28602 * C28724 +
           (C1950 + C1951 + C1952) * C28602 * C28590) *
              C956 -
          ((C1353 * C2488 + C2498 + C2498 + C1346 * C2494 + C1351 * C2489 +
            C2499 + C2499 + C1345 * C2495 + C1349 * C2490 + C2500 + C2500 +
            C1344 * C2496) *
               C28602 * C28590 +
           (C1353 * C959 + C2501 + C2501 + C1346 * C967 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1349 * C961 + C2503 + C2503 +
            C1344 * C969) *
               C28602 * C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28602 * C6166 +
           C6522 * C6167 + C6523 * C6168 + C6524 * C6169) *
              C956 -
          ((C6170 * C6898 + C6902 + C6902 + C28515 * C6900) * C28602 * C6169 +
           (C6170 * C5692 + C6903 + C6903 + C28515 * C5696) * C28602 * C6168 +
           (C6170 * C2490 + C6904 + C6904 + C28515 * C2496) * C28602 * C6167 +
           (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28602 * C6166) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
               C1350 +
           (C1417 * C96 + C28724 * C154 + C1418 * C593 + C28590 * C643) *
               C1344 +
           (C1436 + C1437) * C1352 + (C1438 + C1439) * C1345 +
           (C1440 + C1441) * C1354 + (C1442 + C1443) * C1346) *
              C28602 * C956 -
          ((C1418 * C2491 + C28590 * C2556 + C1417 * C963 + C28724 * C1013) *
               C1346 +
           (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
               C1354 +
           (C1418 * C2492 + C28590 * C2557 + C1417 * C964 + C28724 * C1014) *
               C1345 +
           (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
               C1352 +
           (C1418 * C2493 + C28590 * C2558 + C1417 * C965 + C28724 * C1015) *
               C1344 +
           (C1418 * C2490 + C28590 * C2555 + C1417 * C961 + C28724 * C1011) *
               C1350) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C6171 +
           (C6214 * C96 + C6166 * C154 + C6215 * C593 + C6167 * C643 +
            C6216 * C1930 + C6168 * C2007 + C6217 * C5130 + C6169 * C5208) *
               C28515) *
              C28602 * C956 -
          ((C6217 * C6899 + C6169 * C6940 + C6216 * C5694 + C6168 * C5756 +
            C6215 * C2493 + C6167 * C2558 + C6214 * C965 + C6166 * C1015) *
               C28515 +
           (C6217 * C6898 + C6169 * C6939 + C6216 * C5692 + C6168 * C5754 +
            C6215 * C2490 + C6167 * C2555 + C6214 * C961 + C6166 * C1011) *
               C6171) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexz[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1350 +
                      (C211 * C96 + C28602 * C217) * C1344 + C235 * C1352 +
                      C236 * C1345 + C237 * C1354 + C238 * C1346) *
                         C28724 +
                     (C2075 + C2076 + C2069 + C2070 + C2071 + C2072) * C28590) *
                        C956 -
                    (((C211 * C2491 + C28602 * C2612) * C1346 +
                      (C211 * C2488 + C28602 * C2609) * C1354 +
                      (C211 * C2492 + C28602 * C2613) * C1345 +
                      (C211 * C2489 + C28602 * C2610) * C1352 +
                      (C211 * C2493 + C28602 * C2614) * C1344 +
                      (C211 * C2490 + C28602 * C2611) * C1350) *
                         C28590 +
                     ((C211 * C963 + C28602 * C1055) * C1346 +
                      (C211 * C959 + C28602 * C1051) * C1354 +
                      (C211 * C964 + C28602 * C1056) * C1345 +
                      (C211 * C960 + C28602 * C1052) * C1352 +
                      (C211 * C965 + C28602 * C1057) * C1344 +
                      (C211 * C961 + C28602 * C1053) * C1350) *
                         C28724) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C6171 +
                      (C211 * C96 + C28602 * C217) * C28515) *
                         C6166 +
                     (C6597 + C6598) * C6167 + (C6599 + C6600) * C6168 +
                     (C6607 + C6608) * C6169) *
                        C956 -
                    (((C211 * C6899 + C28602 * C6976) * C28515 +
                      (C211 * C6898 + C28602 * C6975) * C6171) *
                         C6169 +
                     ((C211 * C5694 + C28602 * C5810) * C28515 +
                      (C211 * C5692 + C28602 * C5808) * C6171) *
                         C6168 +
                     ((C211 * C2493 + C28602 * C2614) * C28515 +
                      (C211 * C2490 + C28602 * C2611) * C6171) *
                         C6167 +
                     ((C211 * C965 + C28602 * C1057) * C28515 +
                      (C211 * C961 + C28602 * C1053) * C6171) *
                         C6166) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C1417 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
            C1354 * C151 + C1346 * C276) *
               C28724 +
           (C2142 + C2143 + C2144) * C1418 + (C2145 + C2146 + C2147) * C28590) *
              C28602 * C956 -
          ((C1354 * C2553 + C1346 * C2665 + C1352 * C2554 + C1345 * C2666 +
            C1350 * C2555 + C1344 * C2667) *
               C28590 +
           (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
            C1350 * C2490 + C1344 * C2493) *
               C1418 +
           (C1354 * C1009 + C1346 * C1093 + C1352 * C1010 + C1345 * C1094 +
            C1350 * C1011 + C1344 * C1095) *
               C28724 +
           (C1354 * C959 + C1346 * C963 + C1352 * C960 + C1345 * C964 +
            C1350 * C961 + C1344 * C965) *
               C1417) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6171 * C91 + C28515 * C96) * C6214 +
           (C6171 * C149 + C28515 * C274) * C6166 + C6656 * C6215 +
           C6657 * C6167 + C6658 * C6216 + C6659 * C6168 + C6660 * C6217 +
           C6661 * C6169) *
              C28602 * C956 -
          ((C6171 * C6939 + C28515 * C7011) * C6169 +
           (C6171 * C6898 + C28515 * C6899) * C6217 +
           (C6171 * C5754 + C28515 * C5862) * C6168 +
           (C6171 * C5692 + C28515 * C5694) * C6216 +
           (C6171 * C2555 + C28515 * C2667) * C6167 +
           (C6171 * C2490 + C28515 * C2493) * C6215 +
           (C6171 * C1011 + C28515 * C1095) * C6166 +
           (C6171 * C961 + C28515 * C965) * C6214) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1605 * C91 + C1608 + C1608 + C28724 * C314 + C1606 * C589 + C1609 +
            C1609 + C28590 * C761) *
               C1344 +
           (C1632 + C1633) * C1345 + (C1634 + C1635) * C1346) *
              C28602 * C956 -
          ((C1606 * C2488 + C2722 + C2722 + C28590 * C2718 + C1605 * C959 +
            C2723 + C2723 + C28724 * C1131) *
               C1346 +
           (C1606 * C2489 + C2724 + C2724 + C28590 * C2719 + C1605 * C960 +
            C2725 + C2725 + C28724 * C1132) *
               C1345 +
           (C1606 * C2490 + C2726 + C2726 + C28590 * C2720 + C1605 * C961 +
            C2727 + C2727 + C28724 * C1133) *
               C1344) *
              C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6320 * C91 + C6325 + C6325 + C6166 * C314 + C6321 * C589 + C6326 +
           C6326 + C6167 * C761 + C6322 * C1927 + C6327 + C6327 +
           C6168 * C2199 + C6323 * C5128 + C6328 + C6328 + C6169 * C5404) *
              C28515 * C28602 * C956 -
          (C6323 * C6898 + C7048 + C7048 + C6169 * C7046 + C6322 * C5692 +
           C7049 + C7049 + C6168 * C5914 + C6321 * C2490 + C7050 + C7050 +
           C6167 * C2720 + C6320 * C961 + C7051 + C7051 + C6166 * C1133) *
              C28515 * C28602 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyz[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28602 * C212) * C1417 +
                      (C211 * C149 + C28602 * C373) * C28724 + C2073 * C1418 +
                      C2262 * C28590) *
                         C1344 +
                     (C1686 + C1687 + C1688 + C1698) * C1345 +
                     (C1691 + C1692 + C1693 + C1699) * C1346) *
                        C956 -
                    (((C211 * C2553 + C28602 * C2777) * C28590 +
                      (C211 * C2488 + C28602 * C2609) * C1418 +
                      (C211 * C1009 + C28602 * C1173) * C28724 +
                      (C211 * C959 + C28602 * C1051) * C1417) *
                         C1346 +
                     ((C211 * C2554 + C28602 * C2778) * C28590 +
                      (C211 * C2489 + C28602 * C2610) * C1418 +
                      (C211 * C1010 + C28602 * C1174) * C28724 +
                      (C211 * C960 + C28602 * C1052) * C1417) *
                         C1345 +
                     ((C211 * C2555 + C28602 * C2779) * C28590 +
                      (C211 * C2490 + C28602 * C2611) * C1418 +
                      (C211 * C1011 + C28602 * C1175) * C28724 +
                      (C211 * C961 + C28602 * C1053) * C1417) *
                         C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28602 * C212) * C6214 +
                     (C211 * C149 + C28602 * C373) * C6166 + C2073 * C6215 +
                     C2262 * C6167 + C5274 * C6216 + C5466 * C6168 +
                     C6605 * C6217 + C6738 * C6169) *
                        C28515 * C956 -
                    ((C211 * C6939 + C28602 * C7085) * C6169 +
                     (C211 * C6898 + C28602 * C6975) * C6217 +
                     (C211 * C5754 + C28602 * C5972) * C6168 +
                     (C211 * C5692 + C28602 * C5808) * C6216 +
                     (C211 * C2555 + C28602 * C2779) * C6167 +
                     (C211 * C2490 + C28602 * C2611) * C6215 +
                     (C211 * C1011 + C28602 * C1175) * C6166 +
                     (C211 * C961 + C28602 * C1053) * C6214) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezx[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
             C1354 * C214 + C1346 * C429) *
                C28602) *
               C28724 +
           ((C2142 + C2143 + C2144) * C211 + (C2322 + C2323 + C2324) * C28602) *
               C28590) *
              C956 -
          (((C1354 * C2609 + C1346 * C2830 + C1352 * C2610 + C1345 * C2831 +
             C1350 * C2611 + C1344 * C2832) *
                C28602 +
            (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
             C1350 * C2490 + C1344 * C2493) *
                C211) *
               C28590 +
           ((C1354 * C1051 + C1346 * C1211 + C1352 * C1052 + C1345 * C1212 +
             C1350 * C1053 + C1344 * C1213) *
                C28602 +
            (C1354 * C959 + C1346 * C963 + C1352 * C960 + C1345 * C964 +
             C1350 * C961 + C1344 * C965) *
                C211) *
               C28724) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C211 +
            (C6171 * C212 + C28515 * C427) * C28602) *
               C6166 +
           (C6774 + C6786) * C6167 + (C6777 + C6787) * C6168 +
           (C6780 + C6788) * C6169) *
              C956 -
          (((C6171 * C6975 + C28515 * C7120) * C28602 +
            (C6171 * C6898 + C28515 * C6899) * C211) *
               C6169 +
           ((C6171 * C5808 + C28515 * C6024) * C28602 +
            (C6171 * C5692 + C28515 * C5694) * C211) *
               C6168 +
           ((C6171 * C2611 + C28515 * C2832) * C28602 +
            (C6171 * C2490 + C28515 * C2493) * C211) *
               C6167 +
           ((C6171 * C1053 + C28515 * C1213) * C28602 +
            (C6171 * C961 + C28515 * C965) * C211) *
               C6166) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[41] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1417 * C91 + C28724 * C149 + C1418 * C589 + C28590 * C639) *
                C211 +
            (C1417 * C212 + C28724 * C466 + C1418 * C681 + C28590 * C879) *
                C28602) *
               C1344 +
           ((C1436 + C1437) * C211 + (C1808 + C1809) * C28602) * C1345 +
           ((C1440 + C1441) * C211 + (C1810 + C1811) * C28602) * C1346) *
              C956 -
          (((C1418 * C2609 + C28590 * C2883 + C1417 * C1051 + C28724 * C1249) *
                C28602 +
            (C1418 * C2488 + C28590 * C2553 + C1417 * C959 + C28724 * C1009) *
                C211) *
               C1346 +
           ((C1418 * C2610 + C28590 * C2884 + C1417 * C1052 + C28724 * C1250) *
                C28602 +
            (C1418 * C2489 + C28590 * C2554 + C1417 * C960 + C28724 * C1010) *
                C211) *
               C1345 +
           ((C1418 * C2611 + C28590 * C2885 + C1417 * C1053 + C28724 * C1251) *
                C28602 +
            (C1418 * C2490 + C28590 * C2555 + C1417 * C961 + C28724 * C1011) *
                C211) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6214 * C91 + C6166 * C149 + C6215 * C589 + C6167 * C639 +
            C6216 * C1927 + C6168 * C2004 + C6217 * C5128 + C6169 * C5206) *
               C211 +
           (C6214 * C212 + C6166 * C466 + C6215 * C681 + C6167 * C879 +
            C6216 * C2060 + C6168 * C2376 + C6217 * C5260 + C6169 * C5581) *
               C28602) *
              C28515 * C956 -
          ((C6217 * C6975 + C6169 * C7155 + C6216 * C5808 + C6168 * C6076 +
            C6215 * C2611 + C6167 * C2885 + C6214 * C1053 + C6166 * C1251) *
               C28602 +
           (C6217 * C6898 + C6169 * C6939 + C6216 * C5692 + C6168 * C5754 +
            C6215 * C2490 + C6167 * C2555 + C6214 * C961 + C6166 * C1011) *
               C211) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[41] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28602 * C521) * C28724 +
                      C2438 * C28590) *
                         C1344 +
                     (C1862 + C1874) * C1345 + (C1865 + C1875) * C1346) *
                        C956 -
                    (((C520 * C2488 + C2940 + C2940 + C28602 * C2936) * C28590 +
                      (C520 * C959 + C1292 + C1292 + C28602 * C1287) * C28724) *
                         C1346 +
                     ((C520 * C2489 + C2941 + C2941 + C28602 * C2937) * C28590 +
                      (C520 * C960 + C1293 + C1293 + C28602 * C1288) * C28724) *
                         C1345 +
                     ((C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C28590 +
                      (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C28724) *
                         C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28602 * C521) * C6166 +
                     C2438 * C6167 + C5641 * C6168 + C6864 * C6169) *
                        C28515 * C956 -
                    ((C520 * C6898 + C7192 + C7192 + C28602 * C7190) * C6169 +
                     (C520 * C5692 + C6131 + C6131 + C28602 * C6128) * C6168 +
                     (C520 * C2490 + C2942 + C2942 + C28602 * C2938) * C6167 +
                     (C520 * C961 + C1294 + C1294 + C28602 * C1289) * C6166) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C1349 * C961 + C2503 + C2503 + C1344 * C969 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1353 * C959 + C2501 + C2501 +
            C1346 * C967) *
               C28614) *
              C28576 * C28758 * C28759 * C81 -
          ((C1353 * C958 + C2995 + C2995 + C1346 * C966 + C1351 * C959 + C2996 +
            C2996 + C1345 * C967 + C1349 * C960 + C2997 + C2997 +
            C1344 * C968) *
               C28614 +
           (C1353 * C94 + C1365 + C1365 + C1346 * C104 + C1351 * C93 + C1366 +
            C1366 + C1345 * C103 + C1349 * C92 + C1367 + C1367 + C1344 * C102) *
               C28725) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28614) *
               C4578 +
           (C6519 * C28725 +
            (C6170 * C2490 + C6904 + C6904 + C28515 * C2496) * C28614) *
               C4579 +
           (C6520 * C28725 +
            (C6170 * C5692 + C6903 + C6903 + C28515 * C5696) * C28614) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C6170 * C5691 + C7243 + C7243 + C28515 * C5695) * C28614 +
            (C6170 * C1926 + C6178 + C6178 + C28515 * C1932) * C28725) *
               C4580 +
           ((C6170 * C2489 + C7244 + C7244 + C28515 * C2495) * C28614 +
            (C6170 * C588 + C6179 + C6179 + C28515 * C596) * C28725) *
               C4579 +
           ((C6170 * C960 + C7245 + C7245 + C28515 * C968) * C28614 +
            (C6170 * C92 + C6180 + C6180 + C28515 * C102) * C28725) *
               C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     ((C148 * C961 + C28576 * C1011) * C1350 +
                      (C148 * C965 + C28576 * C1015) * C1344 + C3056 * C1352 +
                      C3057 * C1345 + C3058 * C1354 + C3059 * C1346) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C148 * C962 + C28576 * C1012) * C1346 +
                      (C148 * C958 + C28576 * C1008) * C1354 + C3059 * C1345 +
                      C3058 * C1352 + C3057 * C1344 + C3056 * C1350) *
                         C28614 +
                     (C177 * C1346 + C176 * C1354 + C175 * C1345 +
                      C174 * C1352 + C173 * C1344 + C172 * C1350) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                       C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                          C6171 +
                      (C4647 * C965 + C4578 * C1015 + C4648 * C2493 +
                       C4579 * C2558 + C4649 * C5694 + C4580 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C4649 * C5693 + C4580 * C5755 + C4648 * C2492 +
                       C4579 * C2557 + C4647 * C964 + C4578 * C1014) *
                          C28515 +
                      (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 +
                       C4579 * C2554 + C4647 * C960 + C4578 * C1010) *
                          C6171) *
                         C28614 +
                     ((C4668 + C4667 + C4666) * C28515 +
                      (C4665 + C4664 + C4663) * C6171) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C28758 * C28759 * C81 -
          ((C3110 * C962 + C28614 * C1054 + C3109 * C99 + C28725 * C220) *
               C1346 +
           (C3110 * C958 + C28614 * C1050 + C3109 * C94 + C28725 * C215) *
               C1354 +
           (C3135 + C3134) * C1345 + (C3133 + C3132) * C1352 +
           (C3131 + C3130) * C1344 + (C3129 + C3128) * C1350) *
              C28576 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C3109 * C589 + C28725 * C681 + C3110 * C2490 + C28614 * C2611) *
                C6171 +
            (C3109 * C593 + C28725 * C685 + C3110 * C2493 + C28614 * C2614) *
                C28515) *
               C4579 +
           ((C3109 * C1927 + C28725 * C2060 + C3110 * C5692 + C28614 * C5808) *
                C6171 +
            (C3109 * C1930 + C28725 * C2063 + C3110 * C5694 + C28614 * C5810) *
                C28515) *
               C4580) *
              C28758 * C28759 * C81 -
          (((C3110 * C5693 + C28614 * C5809 + C3109 * C1929 + C28725 * C2062) *
                C28515 +
            (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
                C6171) *
               C4580 +
           ((C3110 * C2492 + C28614 * C2613 + C3109 * C592 + C28725 * C684) *
                C28515 +
            (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
                C6171) *
               C4579 +
           ((C3131 + C3130) * C28515 + (C3129 + C3128) * C6171) * C4578) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
                       C1354 * C93 + C1346 * C98) *
                          C148 +
                      (C1350 * C149 + C1344 * C274 + C1352 * C150 +
                       C1345 * C275 + C1354 * C151 + C1346 * C276) *
                          C28576) *
                         C28725 +
                     ((C1350 * C961 + C1344 * C965 + C1352 * C960 +
                       C1345 * C964 + C1354 * C959 + C1346 * C963) *
                          C148 +
                      (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 +
                       C1345 * C1094 + C1354 * C1009 + C1346 * C1093) *
                          C28576) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C1354 * C1008 + C1346 * C1092 + C1352 * C1009 +
                       C1345 * C1093 + C1350 * C1010 + C1344 * C1094) *
                          C28576 +
                      (C1354 * C958 + C1346 * C962 + C1352 * C959 +
                       C1345 * C963 + C1350 * C960 + C1344 * C964) *
                          C148) *
                         C28614 +
                     ((C1354 * C152 + C1346 * C277 + C1352 * C151 +
                       C1345 * C276 + C1350 * C150 + C1344 * C275) *
                          C28576 +
                      (C1354 * C94 + C1346 * C99 + C1352 * C93 + C1345 * C98 +
                       C1350 * C92 + C1344 * C97) *
                          C148) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C4647 +
                      (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
                      C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
                         C28725 +
                     ((C6171 * C961 + C28515 * C965) * C4647 +
                      (C6171 * C1011 + C28515 * C1095) * C4578 +
                      (C6171 * C2490 + C28515 * C2493) * C4648 +
                      (C6171 * C2555 + C28515 * C2667) * C4579 +
                      (C6171 * C5692 + C28515 * C5694) * C4649 +
                      (C6171 * C5754 + C28515 * C5862) * C4580) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C5753 + C28515 * C5861) * C4580 +
                      (C6171 * C5691 + C28515 * C5693) * C4649 +
                      (C6171 * C2554 + C28515 * C2666) * C4579 +
                      (C6171 * C2489 + C28515 * C2492) * C4648 +
                      (C6171 * C1010 + C28515 * C1094) * C4578 +
                      (C6171 * C960 + C28515 * C964) * C4647) *
                         C28614 +
                     ((C6171 * C2003 + C28515 * C2127) * C4580 +
                      (C6171 * C1926 + C28515 * C1929) * C4649 +
                      (C6171 * C638 + C28515 * C722) * C4579 +
                      (C6171 * C588 + C28515 * C592) * C4648 +
                      (C6171 * C150 + C28515 * C275) * C4578 +
                      (C6171 * C92 + C28515 * C97) * C4647) *
                         C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 +
                      C337 * C1345 + C338 * C1346) *
                         C28725 +
                     ((C313 * C961 + C1138 + C1138 + C28576 * C1133) * C1344 +
                      C3244 * C1345 + C3245 * C1346) *
                         C28614) *
                        C28758 * C28759 * C81 -
                    (((C313 * C958 + C1135 + C1135 + C28576 * C1130) * C1346 +
                      C3245 * C1345 + C3244 * C1344) *
                         C28614 +
                     (C339 * C1346 + C338 * C1345 + C337 * C1344) * C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28515 * C28725 +
                     (C4824 * C961 + C5921 + C5921 + C4578 * C1133 +
                      C4825 * C2490 + C5920 + C5920 + C4579 * C2720 +
                      C4826 * C5692 + C5919 + C5919 + C4580 * C5914) *
                         C28515 * C28614) *
                        C28758 * C28759 * C81 -
                    ((C4826 * C5691 + C5916 + C5916 + C4580 * C5913 +
                      C4825 * C2489 + C5917 + C5917 + C4579 * C2719 +
                      C4824 * C960 + C5918 + C5918 + C4578 * C1132) *
                         C28515 * C28614 +
                     (C4851 + C4850 + C4849) * C28515 * C28725) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C28758 * C28759 * C81 -
          (((C3110 * C1008 + C28614 * C1172 + C3109 * C152 + C28725 * C376) *
                C28576 +
            (C3110 * C958 + C28614 * C1050 + C3109 * C94 + C28725 * C215) *
                C148) *
               C1346 +
           ((C3307 + C3306) * C28576 + (C3133 + C3132) * C148) * C1345 +
           ((C3305 + C3304) * C28576 + (C3129 + C3128) * C148) * C1344) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C3109 * C589 + C28725 * C681 + C3110 * C2490 + C28614 * C2611) *
               C4648 +
           (C3109 * C639 + C28725 * C803 + C3110 * C2555 + C28614 * C2779) *
               C4579 +
           (C3109 * C1927 + C28725 * C2060 + C3110 * C5692 + C28614 * C5808) *
               C4649 +
           (C3109 * C2004 + C28725 * C2258 + C3110 * C5754 + C28614 * C5972) *
               C4580) *
              C28515 * C28758 * C28759 * C81 -
          ((C3110 * C5753 + C28614 * C5971 + C3109 * C2003 + C28725 * C2257) *
               C4580 +
           (C3110 * C5691 + C28614 * C5807 + C3109 * C1926 + C28725 * C2059) *
               C4649 +
           (C3110 * C2554 + C28614 * C2778 + C3109 * C638 + C28725 * C802) *
               C4579 +
           (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
               C4648 +
           (C3305 + C3304) * C4578 + (C3129 + C3128) * C4647) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
                      C1354 * C93 + C1346 * C98) *
                         C3109 +
                     (C1350 * C212 + C1344 * C427 + C1352 * C213 +
                      C1345 * C428 + C1354 * C214 + C1346 * C429) *
                         C28725 +
                     (C1350 * C961 + C1344 * C965 + C1352 * C960 +
                      C1345 * C964 + C1354 * C959 + C1346 * C963) *
                         C3110 +
                     (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 +
                      C1345 * C1212 + C1354 * C1051 + C1346 * C1211) *
                         C28614) *
                        C28576 * C28758 * C28759 * C81 -
                    ((C1354 * C1050 + C1346 * C1210 + C1352 * C1051 +
                      C1345 * C1211 + C1350 * C1052 + C1344 * C1212) *
                         C28614 +
                     (C1354 * C958 + C1346 * C962 + C1352 * C959 +
                      C1345 * C963 + C1350 * C960 + C1344 * C964) *
                         C3110 +
                     (C1354 * C215 + C1346 * C430 + C1352 * C214 +
                      C1345 * C429 + C1350 * C213 + C1344 * C428) *
                         C28725 +
                     (C1354 * C94 + C1346 * C99 + C1352 * C93 + C1345 * C98 +
                      C1350 * C92 + C1344 * C97) *
                         C3109) *
                        C28576 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C6171 * C91 + C28515 * C96) * C3109 +
                      (C6171 * C212 + C28515 * C427) * C28725 +
                      (C6171 * C961 + C28515 * C965) * C3110 +
                      (C6171 * C1053 + C28515 * C1213) * C28614) *
                         C4578 +
                     (C6656 * C3109 + C6783 * C28725 +
                      (C6171 * C2490 + C28515 * C2493) * C3110 +
                      (C6171 * C2611 + C28515 * C2832) * C28614) *
                         C4579 +
                     (C6658 * C3109 + C6784 * C28725 +
                      (C6171 * C5692 + C28515 * C5694) * C3110 +
                      (C6171 * C5808 + C28515 * C6024) * C28614) *
                         C4580) *
                        C28758 * C28759 * C81 -
                    (((C6171 * C5807 + C28515 * C6023) * C28614 +
                      (C6171 * C5691 + C28515 * C5693) * C3110 +
                      (C6171 * C2059 + C28515 * C2313) * C28725 +
                      (C6171 * C1926 + C28515 * C1929) * C3109) *
                         C4580 +
                     ((C6171 * C2610 + C28515 * C2831) * C28614 +
                      (C6171 * C2489 + C28515 * C2492) * C3110 +
                      (C6171 * C680 + C28515 * C840) * C28725 +
                      (C6171 * C588 + C28515 * C592) * C3109) *
                         C4579 +
                     ((C6171 * C1052 + C28515 * C1212) * C28614 +
                      (C6171 * C960 + C28515 * C964) * C3110 +
                      (C6171 * C213 + C28515 * C428) * C28725 +
                      (C6171 * C92 + C28515 * C97) * C3109) *
                         C4578) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C3109 +
            (C148 * C212 + C28576 * C466) * C28725 +
            (C148 * C961 + C28576 * C1011) * C3110 +
            (C148 * C1053 + C28576 * C1251) * C28614) *
               C1344 +
           (C3408 + C3409 + C3410 + C3420) * C1345 +
           (C3413 + C3414 + C3415 + C3421) * C1346) *
              C28758 * C28759 * C81 -
          (((C148 * C1050 + C28576 * C1248) * C28614 +
            (C148 * C958 + C28576 * C1008) * C3110 + C483 * C28725 +
            C176 * C3109) *
               C1346 +
           (C3421 + C3415 + C3414 + C3413) * C1345 +
           (C3420 + C3410 + C3409 + C3408) * C1344) *
              C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C3109 +
           (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
            C4649 * C2060 + C4580 * C2376) *
               C28725 +
           (C4647 * C961 + C4578 * C1011 + C4648 * C2490 + C4579 * C2555 +
            C4649 * C5692 + C4580 * C5754) *
               C3110 +
           (C4647 * C1053 + C4578 * C1251 + C4648 * C2611 + C4579 * C2885 +
            C4649 * C5808 + C4580 * C6076) *
               C28614) *
              C28515 * C28758 * C28759 * C81 -
          ((C4649 * C5807 + C4580 * C6075 + C4648 * C2610 + C4579 * C2884 +
            C4647 * C1052 + C4578 * C1250) *
               C28614 +
           (C4649 * C5691 + C4580 * C5753 + C4648 * C2489 + C4579 * C2554 +
            C4647 * C960 + C4578 * C1010) *
               C3110 +
           (C5019 + C5018 + C5017) * C28725 + (C4665 + C4664 + C4663) * C3109) *
              C28515 * C28758 * C28759 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C28576 * C1344 +
                     (C3498 + C3499) * C28576 * C1345 +
                     (C3500 + C3501) * C28576 * C1346) *
                        C28758 * C28759 * C81 -
                    ((C3472 * C958 + C3488 + C3488 + C28614 * C1286 +
                      C3471 * C94 + C3489 + C3489 + C28725 * C524) *
                         C28576 * C1346 +
                     (C3501 + C3500) * C28576 * C1345 +
                     (C3499 + C3498) * C28576 * C1344) *
                        C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C4578 +
                     (C3471 * C589 + C3960 + C3960 + C28725 * C917 +
                      C3472 * C2490 + C3959 + C3959 + C28614 * C2938) *
                         C4579 +
                     (C3471 * C1927 + C7646 + C7646 + C28725 * C2429 +
                      C3472 * C5692 + C7647 + C7647 + C28614 * C6128) *
                         C4580) *
                        C28515 * C28758 * C28759 * C81 -
                    ((C3472 * C5691 + C7648 + C7648 + C28614 * C6127 +
                      C3471 * C1926 + C7649 + C7649 + C28725 * C2428) *
                         C4580 +
                     (C3472 * C2489 + C3957 + C3957 + C28614 * C2937 +
                      C3471 * C588 + C3958 + C3958 + C28725 * C916) *
                         C4579 +
                     (C3499 + C3498) * C4578) *
                        C28515 * C28758 * C28759 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C1349 * C961 + C2503 + C2503 + C1344 * C969 + C1351 * C960 + C2502 +
            C2502 + C1345 * C968 + C1353 * C959 + C2501 + C2501 +
            C1346 * C967) *
               C28614) *
              C28576 * C28758 * C583 -
          ((C1353 * C2488 + C2498 + C2498 + C1346 * C2494 + C1351 * C2489 +
            C2499 + C2499 + C1345 * C2495 + C1349 * C2490 + C2500 + C2500 +
            C1344 * C2496) *
               C28614 +
           (C1952 + C1951 + C1950) * C28725) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            (C6170 * C961 + C6905 + C6905 + C28515 * C969) * C28614) *
               C4578 +
           (C7700 + C7712) * C4579 + (C7703 + C7713) * C4580) *
              C28758 * C583 -
          (((C6170 * C6898 + C6902 + C6902 + C28515 * C6900) * C28614 +
            C6521 * C28725) *
               C4580 +
           (C7713 + C7703) * C4579 + (C7712 + C7700) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     ((C148 * C961 + C28576 * C1011) * C1350 +
                      (C148 * C965 + C28576 * C1015) * C1344 + C3056 * C1352 +
                      C3057 * C1345 + C3058 * C1354 + C3059 * C1346) *
                         C28614) *
                        C28758 * C583 -
                    (((C148 * C2491 + C28576 * C2556) * C1346 +
                      (C148 * C2488 + C28576 * C2553) * C1354 +
                      (C148 * C2492 + C28576 * C2557) * C1345 +
                      (C148 * C2489 + C28576 * C2554) * C1352 +
                      (C148 * C2493 + C28576 * C2558) * C1344 +
                      (C148 * C2490 + C28576 * C2555) * C1350) *
                         C28614 +
                     ((C148 * C591 + C28576 * C641) * C1346 +
                      (C148 * C587 + C28576 * C637) * C1354 +
                      (C148 * C592 + C28576 * C642) * C1345 +
                      (C148 * C588 + C28576 * C638) * C1352 +
                      (C148 * C593 + C28576 * C643) * C1344 +
                      (C148 * C589 + C28576 * C639) * C1350) *
                         C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                       C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                          C6171 +
                      (C4647 * C965 + C4578 * C1015 + C4648 * C2493 +
                       C4579 * C2558 + C4649 * C5694 + C4580 * C5756) *
                          C28515) *
                         C28614) *
                        C28758 * C583 -
                    (((C4649 * C6899 + C4580 * C6940 + C4648 * C5694 +
                       C4579 * C5756 + C4647 * C2493 + C4578 * C2558) *
                          C28515 +
                      (C4649 * C6898 + C4580 * C6939 + C4648 * C5692 +
                       C4579 * C5754 + C4647 * C2490 + C4578 * C2555) *
                          C6171) *
                         C28614 +
                     ((C4649 * C5130 + C4580 * C5208 + C4648 * C1930 +
                       C4579 * C2007 + C4647 * C593 + C4578 * C643) *
                          C28515 +
                      (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 +
                       C4579 * C2004 + C4647 * C589 + C4578 * C639) *
                          C6171) *
                         C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C28758 * C583 -
          ((C3110 * C2491 + C28614 * C2612 + C3109 * C591 + C28725 * C683) *
               C1346 +
           (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
               C1354 +
           (C3110 * C2492 + C28614 * C2613 + C3109 * C592 + C28725 * C684) *
               C1345 +
           (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
               C1352 +
           (C3110 * C2493 + C28614 * C2614 + C3109 * C593 + C28725 * C685) *
               C1344 +
           (C3110 * C2490 + C28614 * C2611 + C3109 * C589 + C28725 * C681) *
               C1350) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C7830 + C7831) * C6171 + (C7832 + C7833) * C28515) * C4579 +
           ((C7834 + C7835) * C6171 + (C7836 + C7837) * C28515) * C4580) *
              C28758 * C583 -
          (((C3110 * C6899 + C28614 * C6976 + C3109 * C5130 + C28725 * C5262) *
                C28515 +
            (C3110 * C6898 + C28614 * C6975 + C3109 * C5128 + C28725 * C5260) *
                C6171) *
               C4580 +
           ((C7837 + C7836) * C28515 + (C7835 + C7834) * C6171) * C4579 +
           ((C7833 + C7832) * C28515 + (C7831 + C7830) * C6171) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
             C1354 * C151 + C1346 * C276) *
                C28576) *
               C28725 +
           ((C1350 * C961 + C1344 * C965 + C1352 * C960 + C1345 * C964 +
             C1354 * C959 + C1346 * C963) *
                C148 +
            (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 + C1345 * C1094 +
             C1354 * C1009 + C1346 * C1093) *
                C28576) *
               C28614) *
              C28758 * C583 -
          (((C1354 * C2553 + C1346 * C2665 + C1352 * C2554 + C1345 * C2666 +
             C1350 * C2555 + C1344 * C2667) *
                C28576 +
            (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
             C1350 * C2490 + C1344 * C2493) *
                C148) *
               C28614 +
           ((C2147 + C2146 + C2145) * C28576 + (C2144 + C2143 + C2142) * C148) *
               C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C4647 +
            (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
            C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
               C28725 +
           ((C6171 * C961 + C28515 * C965) * C4647 +
            (C6171 * C1011 + C28515 * C1095) * C4578 + C7896 * C4648 +
            C7897 * C4579 + C7898 * C4649 + C7899 * C4580) *
               C28614) *
              C28758 * C583 -
          (((C6171 * C6939 + C28515 * C7011) * C4580 +
            (C6171 * C6898 + C28515 * C6899) * C4649 + C7899 * C4579 +
            C7898 * C4648 + C7897 * C4578 + C7896 * C4647) *
               C28614 +
           (C6661 * C4580 + C6660 * C4649 + C6659 * C4579 + C6658 * C4648 +
            C6657 * C4578 + C6656 * C4647) *
               C28725) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 +
                      C337 * C1345 + C338 * C1346) *
                         C28725 +
                     ((C313 * C961 + C1138 + C1138 + C28576 * C1133) * C1344 +
                      C3244 * C1345 + C3245 * C1346) *
                         C28614) *
                        C28758 * C583 -
                    (((C313 * C2488 + C3752 + C3752 + C28576 * C2718) * C1346 +
                      (C313 * C2489 + C3753 + C3753 + C28576 * C2719) * C1345 +
                      (C313 * C2490 + C3754 + C3754 + C28576 * C2720) * C1344) *
                         C28614 +
                     ((C313 * C587 + C764 + C764 + C28576 * C759) * C1346 +
                      (C313 * C588 + C765 + C765 + C28576 * C760) * C1345 +
                      (C313 * C589 + C766 + C766 + C28576 * C761) * C1344) *
                         C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28515 * C28725 +
                     (C4824 * C961 + C5921 + C5921 + C4578 * C1133 +
                      C4825 * C2490 + C5920 + C5920 + C4579 * C2720 +
                      C4826 * C5692 + C5919 + C5919 + C4580 * C5914) *
                         C28515 * C28614) *
                        C28758 * C583 -
                    ((C4826 * C6898 + C7950 + C7950 + C4580 * C7046 +
                      C4825 * C5692 + C7951 + C7951 + C4579 * C5914 +
                      C4824 * C2490 + C7952 + C7952 + C4578 * C2720) *
                         C28515 * C28614 +
                     (C4826 * C5128 + C5409 + C5409 + C4580 * C5404 +
                      C4825 * C1927 + C5410 + C5410 + C4579 * C2199 +
                      C4824 * C589 + C5411 + C5411 + C4578 * C761) *
                         C28515 * C28725) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C28758 * C583 -
          (((C3110 * C2553 + C28614 * C2777 + C3109 * C637 + C28725 * C801) *
                C28576 +
            (C3110 * C2488 + C28614 * C2609 + C3109 * C587 + C28725 * C679) *
                C148) *
               C1346 +
           ((C3110 * C2554 + C28614 * C2778 + C3109 * C638 + C28725 * C802) *
                C28576 +
            (C3110 * C2489 + C28614 * C2610 + C3109 * C588 + C28725 * C680) *
                C148) *
               C1345 +
           ((C3110 * C2555 + C28614 * C2779 + C3109 * C639 + C28725 * C803) *
                C28576 +
            (C3110 * C2490 + C28614 * C2611 + C3109 * C589 + C28725 * C681) *
                C148) *
               C1344) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C7830 + C7831) * C4648 + (C8011 + C8012) * C4579 +
           (C7834 + C7835) * C4649 + (C8013 + C8014) * C4580) *
              C28515 * C28758 * C583 -
          ((C3110 * C6939 + C28614 * C7085 + C3109 * C5206 + C28725 * C5462) *
               C4580 +
           (C3110 * C6898 + C28614 * C6975 + C3109 * C5128 + C28725 * C5260) *
               C4649 +
           (C8014 + C8013) * C4579 + (C7835 + C7834) * C4648 +
           (C8012 + C8011) * C4578 + (C7831 + C7830) * C4647) *
              C28515 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C3109 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
            C1354 * C214 + C1346 * C429) *
               C28725 +
           (C1350 * C961 + C1344 * C965 + C1352 * C960 + C1345 * C964 +
            C1354 * C959 + C1346 * C963) *
               C3110 +
           (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 + C1345 * C1212 +
            C1354 * C1051 + C1346 * C1211) *
               C28614) *
              C28576 * C28758 * C583 -
          ((C1354 * C2609 + C1346 * C2830 + C1352 * C2610 + C1345 * C2831 +
            C1350 * C2611 + C1344 * C2832) *
               C28614 +
           (C1354 * C2488 + C1346 * C2491 + C1352 * C2489 + C1345 * C2492 +
            C1350 * C2490 + C1344 * C2493) *
               C3110 +
           (C2324 + C2323 + C2322) * C28725 + (C2144 + C2143 + C2142) * C3109) *
              C28576 * C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C3109 +
            (C6171 * C212 + C28515 * C427) * C28725 +
            (C6171 * C961 + C28515 * C965) * C3110 +
            (C6171 * C1053 + C28515 * C1213) * C28614) *
               C4578 +
           (C8065 + C8066 + C8067 + C8077) * C4579 +
           (C8070 + C8071 + C8072 + C8078) * C4580) *
              C28758 * C583 -
          (((C6171 * C6975 + C28515 * C7120) * C28614 +
            (C6171 * C6898 + C28515 * C6899) * C3110 + C6785 * C28725 +
            C6660 * C3109) *
               C4580 +
           (C8078 + C8072 + C8071 + C8070) * C4579 +
           (C8077 + C8067 + C8066 + C8065) * C4578) *
              C28758 * C584) *
         C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C3109 +
                      (C148 * C212 + C28576 * C466) * C28725 +
                      (C148 * C961 + C28576 * C1011) * C3110 +
                      (C148 * C1053 + C28576 * C1251) * C28614) *
                         C1344 +
                     (C3408 + C3409 + C3410 + C3420) * C1345 +
                     (C3413 + C3414 + C3415 + C3421) * C1346) *
                        C28758 * C583 -
                    (((C148 * C2609 + C28576 * C2883) * C28614 +
                      (C148 * C2488 + C28576 * C2553) * C3110 +
                      (C148 * C679 + C28576 * C877) * C28725 +
                      (C148 * C587 + C28576 * C637) * C3109) *
                         C1346 +
                     ((C148 * C2610 + C28576 * C2884) * C28614 +
                      (C148 * C2489 + C28576 * C2554) * C3110 +
                      (C148 * C680 + C28576 * C878) * C28725 +
                      (C148 * C588 + C28576 * C638) * C3109) *
                         C1345 +
                     ((C148 * C2611 + C28576 * C2885) * C28614 +
                      (C148 * C2490 + C28576 * C2555) * C3110 +
                      (C148 * C681 + C28576 * C879) * C28725 +
                      (C148 * C589 + C28576 * C639) * C3109) *
                         C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
                      C4649 * C1927 + C4580 * C2004) *
                         C3109 +
                     (C4647 * C212 + C4578 * C466 + C4648 * C681 +
                      C4579 * C879 + C4649 * C2060 + C4580 * C2376) *
                         C28725 +
                     (C4647 * C961 + C4578 * C1011 + C4648 * C2490 +
                      C4579 * C2555 + C4649 * C5692 + C4580 * C5754) *
                         C3110 +
                     (C4647 * C1053 + C4578 * C1251 + C4648 * C2611 +
                      C4579 * C2885 + C4649 * C5808 + C4580 * C6076) *
                         C28614) *
                        C28515 * C28758 * C583 -
                    ((C4649 * C6975 + C4580 * C7155 + C4648 * C5808 +
                      C4579 * C6076 + C4647 * C2611 + C4578 * C2885) *
                         C28614 +
                     (C4649 * C6898 + C4580 * C6939 + C4648 * C5692 +
                      C4579 * C5754 + C4647 * C2490 + C4578 * C2555) *
                         C3110 +
                     (C4649 * C5260 + C4580 * C5581 + C4648 * C2060 +
                      C4579 * C2376 + C4647 * C681 + C4578 * C879) *
                         C28725 +
                     (C4649 * C5128 + C4580 * C5206 + C4648 * C1927 +
                      C4579 * C2004 + C4647 * C589 + C4578 * C639) *
                         C3109) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eezz[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C28576 * C1344 +
                     (C3498 + C3499) * C28576 * C1345 +
                     (C3500 + C3501) * C28576 * C1346) *
                        C28758 * C583 -
                    ((C3472 * C2488 + C3955 + C3955 + C28614 * C2936 +
                      C3471 * C587 + C3956 + C3956 + C28725 * C915) *
                         C28576 * C1346 +
                     (C3472 * C2489 + C3957 + C3957 + C28614 * C2937 +
                      C3471 * C588 + C3958 + C3958 + C28725 * C916) *
                         C28576 * C1345 +
                     (C3472 * C2490 + C3959 + C3959 + C28614 * C2938 +
                      C3471 * C589 + C3960 + C3960 + C28725 * C917) *
                         C28576 * C1344) *
                        C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C4578 +
                     (C8197 + C8198) * C4579 + (C8199 + C8200) * C4580) *
                        C28515 * C28758 * C583 -
                    ((C3472 * C6898 + C8187 + C8187 + C28614 * C7190 +
                      C3471 * C5128 + C8188 + C8188 + C28725 * C5633) *
                         C4580 +
                     (C8200 + C8199) * C4579 + (C8198 + C8197) * C4578) *
                        C28515 * C28758 * C584) *
                   C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1349 * C91 + C1356 + C1356 + C1344 * C101 + C1351 * C92 + C1357 +
            C1357 + C1345 * C102 + C1353 * C93 + C1358 + C1358 + C1346 * C103) *
               C28725 +
           (C4035 + C4036 + C4037) * C28614) *
              C28576 * C956 -
          ((C1353 * C4010 + C4026 + C4026 + C1346 * C4016 + C1351 * C4011 +
            C4027 + C4027 + C1345 * C4017 + C1349 * C4012 + C4028 + C4028 +
            C1344 * C4018) *
               C28614 +
           (C4037 + C4036 + C4035) * C28725) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6170 * C91 + C6173 + C6173 + C28515 * C101) * C28725 +
            C8264 * C28614) *
               C4578 +
           (C7700 + C7712) * C4579 + (C7703 + C7713) * C4580) *
              C956 -
          (((C6170 * C8250 + C8259 + C8259 + C28515 * C8254) * C28614 +
            C7711 * C28725) *
               C4580 +
           ((C6170 * C8251 + C8260 + C8260 + C28515 * C8255) * C28614 +
            C7710 * C28725) *
               C4579 +
           ((C6170 * C4012 + C8261 + C8261 + C28515 * C4018) * C28614 +
            C8264 * C28725) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28576 * C149) * C1350 +
                      (C148 * C96 + C28576 * C154) * C1344 + C172 * C1352 +
                      C173 * C1345 + C174 * C1354 + C175 * C1346) *
                         C28725 +
                     (C4104 + C4105 + C4098 + C4099 + C4100 + C4101) * C28614) *
                        C956 -
                    (((C148 * C4013 + C28576 * C4090) * C1346 +
                      (C148 * C4010 + C28576 * C4087) * C1354 +
                      (C148 * C4014 + C28576 * C4091) * C1345 +
                      (C148 * C4011 + C28576 * C4088) * C1352 +
                      (C148 * C4015 + C28576 * C4092) * C1344 +
                      (C148 * C4012 + C28576 * C4089) * C1350) *
                         C28614 +
                     (C4101 + C4100 + C4099 + C4098 + C4105 + C4104) * C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C4647 * C91 + C4578 * C149 + C4648 * C589 +
                       C4579 * C639 + C4649 * C1927 + C4580 * C2004) *
                          C6171 +
                      (C4647 * C96 + C4578 * C154 + C4648 * C593 +
                       C4579 * C643 + C4649 * C1930 + C4580 * C2007) *
                          C28515) *
                         C28725 +
                     ((C8331 + C8332 + C8333) * C6171 +
                      (C8334 + C8335 + C8336) * C28515) *
                         C28614) *
                        C956 -
                    (((C4649 * C8252 + C4580 * C8316 + C4648 * C8253 +
                       C4579 * C8317 + C4647 * C4015 + C4578 * C4092) *
                          C28515 +
                      (C4649 * C8250 + C4580 * C8314 + C4648 * C8251 +
                       C4579 * C8315 + C4647 * C4012 + C4578 * C4089) *
                          C6171) *
                         C28614 +
                     ((C8336 + C8335 + C8334) * C28515 +
                      (C8333 + C8332 + C8331) * C6171) *
                         C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C1350 +
           (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
               C1344 +
           (C3128 + C3129) * C1352 + (C3130 + C3131) * C1345 +
           (C3132 + C3133) * C1354 + (C3134 + C3135) * C1346) *
              C28576 * C956 -
          ((C3110 * C4013 + C28614 * C4158 + C3109 * C963 + C28725 * C1055) *
               C1346 +
           (C3110 * C4010 + C28614 * C4155 + C3109 * C959 + C28725 * C1051) *
               C1354 +
           (C3110 * C4014 + C28614 * C4159 + C3109 * C964 + C28725 * C1056) *
               C1345 +
           (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
               C1352 +
           (C3110 * C4015 + C28614 * C4160 + C3109 * C965 + C28725 * C1057) *
               C1344 +
           (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
               C1350) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C6171 +
            (C3109 * C96 + C28725 * C217 + C3110 * C965 + C28614 * C1057) *
                C28515) *
               C4578 +
           ((C7830 + C7831) * C6171 + (C7832 + C7833) * C28515) * C4579 +
           ((C7834 + C7835) * C6171 + (C7836 + C7837) * C28515) * C4580) *
              C956 -
          (((C3110 * C8252 + C28614 * C8388 + C3109 * C5694 + C28725 * C5810) *
                C28515 +
            (C3110 * C8250 + C28614 * C8386 + C3109 * C5692 + C28725 * C5808) *
                C6171) *
               C4580 +
           ((C3110 * C8253 + C28614 * C8389 + C3109 * C2493 + C28725 * C2614) *
                C28515 +
            (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
                C6171) *
               C4579 +
           ((C3110 * C4015 + C28614 * C4160 + C3109 * C965 + C28725 * C1057) *
                C28515 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C6171) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
             C1354 * C93 + C1346 * C98) *
                C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C1345 * C275 +
             C1354 * C151 + C1346 * C276) *
                C28576) *
               C28725 +
           ((C4227 + C4228 + C4229) * C148 + (C4230 + C4231 + C4232) * C28576) *
               C28614) *
              C956 -
          (((C1354 * C4087 + C1346 * C4211 + C1352 * C4088 + C1345 * C4212 +
             C1350 * C4089 + C1344 * C4213) *
                C28576 +
            (C1354 * C4010 + C1346 * C4013 + C1352 * C4011 + C1345 * C4014 +
             C1350 * C4012 + C1344 * C4015) *
                C148) *
               C28614 +
           ((C4232 + C4231 + C4230) * C28576 + (C4229 + C4228 + C4227) * C148) *
               C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C4647 +
            (C6171 * C149 + C28515 * C274) * C4578 + C6656 * C4648 +
            C6657 * C4579 + C6658 * C4649 + C6659 * C4580) *
               C28725 +
           (C8453 + C8454 + C8447 + C8448 + C8449 + C8450) * C28614) *
              C956 -
          (((C6171 * C8314 + C28515 * C8440) * C4580 +
            (C6171 * C8250 + C28515 * C8252) * C4649 +
            (C6171 * C8315 + C28515 * C8441) * C4579 +
            (C6171 * C8251 + C28515 * C8253) * C4648 +
            (C6171 * C4089 + C28515 * C4213) * C4578 +
            (C6171 * C4012 + C28515 * C4015) * C4647) *
               C28614 +
           (C8450 + C8449 + C8448 + C8447 + C8454 + C8453) * C28725) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28576 * C314) * C1344 +
                      C337 * C1345 + C338 * C1346) *
                         C28725 +
                     (C4296 + C4288 + C4289) * C28614) *
                        C956 -
                    (((C313 * C4010 + C4290 + C4290 + C28576 * C4282) * C1346 +
                      (C313 * C4011 + C4291 + C4291 + C28576 * C4283) * C1345 +
                      (C313 * C4012 + C4292 + C4292 + C28576 * C4284) * C1344) *
                         C28614 +
                     (C4289 + C4288 + C4296) * C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C4824 * C91 + C4828 + C4828 + C4578 * C314 +
                      C4825 * C589 + C4829 + C4829 + C4579 * C761 +
                      C4826 * C1927 + C4830 + C4830 + C4580 * C2199) *
                         C28515 * C28725 +
                     (C8522 + C8523 + C8524) * C28515 * C28614) *
                        C956 -
                    ((C4826 * C8250 + C8513 + C8513 + C4580 * C8504 +
                      C4825 * C8251 + C8514 + C8514 + C4579 * C8505 +
                      C4824 * C4012 + C8515 + C8515 + C4578 * C4284) *
                         C28515 * C28614 +
                     (C8524 + C8523 + C8522) * C28515 * C28725) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
                C148 +
            (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
                C28576) *
               C1344 +
           ((C3128 + C3129) * C148 + (C3304 + C3305) * C28576) * C1345 +
           ((C3132 + C3133) * C148 + (C3306 + C3307) * C28576) * C1346) *
              C956 -
          (((C3110 * C4087 + C28614 * C4346 + C3109 * C1009 + C28725 * C1173) *
                C28576 +
            (C3110 * C4010 + C28614 * C4155 + C3109 * C959 + C28725 * C1051) *
                C148) *
               C1346 +
           ((C3110 * C4088 + C28614 * C4347 + C3109 * C1010 + C28725 * C1174) *
                C28576 +
            (C3110 * C4011 + C28614 * C4156 + C3109 * C960 + C28725 * C1052) *
                C148) *
               C1345 +
           ((C3110 * C4089 + C28614 * C4348 + C3109 * C1011 + C28725 * C1175) *
                C28576 +
            (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
                C148) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3109 * C91 + C28725 * C212 + C3110 * C961 + C28614 * C1053) *
               C4647 +
           (C3109 * C149 + C28725 * C373 + C3110 * C1011 + C28614 * C1175) *
               C4578 +
           (C7830 + C7831) * C4648 + (C8011 + C8012) * C4579 +
           (C7834 + C7835) * C4649 + (C8013 + C8014) * C4580) *
              C28515 * C956 -
          ((C3110 * C8314 + C28614 * C8574 + C3109 * C5754 + C28725 * C5972) *
               C4580 +
           (C3110 * C8250 + C28614 * C8386 + C3109 * C5692 + C28725 * C5808) *
               C4649 +
           (C3110 * C8315 + C28614 * C8575 + C3109 * C2555 + C28725 * C2779) *
               C4579 +
           (C3110 * C8251 + C28614 * C8387 + C3109 * C2490 + C28725 * C2611) *
               C4648 +
           (C3110 * C4089 + C28614 * C4348 + C3109 * C1011 + C28725 * C1175) *
               C4578 +
           (C3110 * C4012 + C28614 * C4157 + C3109 * C961 + C28725 * C1053) *
               C4647) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C1345 * C97 +
            C1354 * C93 + C1346 * C98) *
               C3109 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C1345 * C428 +
            C1354 * C214 + C1346 * C429) *
               C28725 +
           (C4227 + C4228 + C4229) * C3110 + (C4409 + C4410 + C4411) * C28614) *
              C28576 * C956 -
          ((C1354 * C4155 + C1346 * C4399 + C1352 * C4156 + C1345 * C4400 +
            C1350 * C4157 + C1344 * C4401) *
               C28614 +
           (C1354 * C4010 + C1346 * C4013 + C1352 * C4011 + C1345 * C4014 +
            C1350 * C4012 + C1344 * C4015) *
               C3110 +
           (C4411 + C4410 + C4409) * C28725 + (C4229 + C4228 + C4227) * C3109) *
              C28576 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C6171 * C91 + C28515 * C96) * C3109 +
            (C6171 * C212 + C28515 * C427) * C28725 + C8451 * C3110 +
            C8631 * C28614) *
               C4578 +
           (C8065 + C8066 + C8067 + C8077) * C4579 +
           (C8070 + C8071 + C8072 + C8078) * C4580) *
              C956 -
          (((C6171 * C8386 + C28515 * C8626) * C28614 +
            (C6171 * C8250 + C28515 * C8252) * C3110 + C8076 * C28725 +
            C7898 * C3109) *
               C4580 +
           ((C6171 * C8387 + C28515 * C8627) * C28614 +
            (C6171 * C8251 + C28515 * C8253) * C3110 + C8075 * C28725 +
            C7896 * C3109) *
               C4579 +
           ((C6171 * C4157 + C28515 * C4401) * C28614 +
            (C6171 * C4012 + C28515 * C4015) * C3110 + C8631 * C28725 +
            C8451 * C3109) *
               C4578) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28576 * C149) * C3109 +
            (C148 * C212 + C28576 * C466) * C28725 + C4102 * C3110 +
            C4467 * C28614) *
               C1344 +
           (C3408 + C3409 + C3410 + C3420) * C1345 +
           (C3413 + C3414 + C3415 + C3421) * C1346) *
              C956 -
          (((C148 * C4155 + C28576 * C4461) * C28614 +
            (C148 * C4010 + C28576 * C4087) * C3110 + C3419 * C28725 +
            C3058 * C3109) *
               C1346 +
           ((C148 * C4156 + C28576 * C4462) * C28614 +
            (C148 * C4011 + C28576 * C4088) * C3110 + C3418 * C28725 +
            C3056 * C3109) *
               C1345 +
           ((C148 * C4157 + C28576 * C4463) * C28614 +
            (C148 * C4012 + C28576 * C4089) * C3110 + C4467 * C28725 +
            C4102 * C3109) *
               C1344) *
              C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C4647 * C91 + C4578 * C149 + C4648 * C589 + C4579 * C639 +
            C4649 * C1927 + C4580 * C2004) *
               C3109 +
           (C4647 * C212 + C4578 * C466 + C4648 * C681 + C4579 * C879 +
            C4649 * C2060 + C4580 * C2376) *
               C28725 +
           (C8331 + C8332 + C8333) * C3110 + (C8690 + C8691 + C8692) * C28614) *
              C28515 * C956 -
          ((C4649 * C8386 + C4580 * C8681 + C4648 * C8387 + C4579 * C8682 +
            C4647 * C4157 + C4578 * C4463) *
               C28614 +
           (C4649 * C8250 + C4580 * C8314 + C4648 * C8251 + C4579 * C8315 +
            C4647 * C4012 + C4578 * C4089) *
               C3110 +
           (C8692 + C8691 + C8690) * C28725 + (C8333 + C8332 + C8331) * C3109) *
              C28515 * C957) *
         C28759 * C28760) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C28576 * C1344 +
                     (C3498 + C3499) * C28576 * C1345 +
                     (C3500 + C3501) * C28576 * C1346) *
                        C956 -
                    ((C3472 * C4010 + C4521 + C4521 + C28614 * C4517 +
                      C3471 * C959 + C4522 + C4522 + C28725 * C1287) *
                         C28576 * C1346 +
                     (C3472 * C4011 + C4523 + C4523 + C28614 * C4518 +
                      C3471 * C960 + C4524 + C4524 + C28725 * C1288) *
                         C28576 * C1345 +
                     (C3472 * C4012 + C4525 + C4525 + C28614 * C4519 +
                      C3471 * C961 + C4526 + C4526 + C28725 * C1289) *
                         C28576 * C1344) *
                        C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3471 * C91 + C3474 + C3474 + C28725 * C521 +
                      C3472 * C961 + C3475 + C3475 + C28614 * C1289) *
                         C4578 +
                     (C8197 + C8198) * C4579 + (C8199 + C8200) * C4580) *
                        C28515 * C956 -
                    ((C3472 * C8250 + C8745 + C8745 + C28614 * C8742 +
                      C3471 * C5692 + C8746 + C8746 + C28725 * C6128) *
                         C4580 +
                     (C3472 * C8251 + C8747 + C8747 + C28614 * C8743 +
                      C3471 * C2490 + C8748 + C8748 + C28725 * C2938) *
                         C4579 +
                     (C3472 * C4012 + C4525 + C4525 + C28614 * C4519 +
                      C3471 * C961 + C4526 + C4526 + C28725 * C1289) *
                         C4578) *
                        C28515 * C957) *
                   C28759 * C28760) /
                      (p * q * std::sqrt(p + q));
}
