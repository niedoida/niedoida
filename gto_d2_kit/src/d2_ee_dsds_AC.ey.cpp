/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_dsds_AC.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_2020_13(const double ae,
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
    const double C18519 = ae * be;
    const double C18518 = 0 * be;
    const double C18517 = xA - xB;
    const double C18516 = ae + be;
    const double C18538 = ce * de;
    const double C18537 = 0 * de;
    const double C18536 = xC - xD;
    const double C18535 = ce + de;
    const double C18565 = 0 * de;
    const double C18564 = yC - yD;
    const double C18581 = 0 * de;
    const double C18580 = zC - zD;
    const double C18611 = 0 * be;
    const double C18610 = yA - yB;
    const double C18627 = 0 * be;
    const double C18626 = zA - zB;
    const double C18650 = p + q;
    const double C18649 = p * q;
    const double C18655 = xP - xQ;
    const double C18654 = bs[2];
    const double C18664 = ae * ce;
    const double C18660 = bs[3];
    const double C18673 = bs[4];
    const double C18694 = bs[5];
    const double C18731 = yP - yQ;
    const double C18761 = zP - zQ;
    const double C93 = bs[0];
    const double C18521 = C18519 * C18517;
    const double C19573 = std::pow(C18517, 2);
    const double C19734 = C18517 * be;
    const double C18520 = 2 * C18516;
    const double C19735 = std::pow(C18516, 2);
    const double C18540 = C18538 * C18536;
    const double C19584 = std::pow(C18536, 2);
    const double C19738 = C18536 * de;
    const double C18539 = 2 * C18535;
    const double C18656 = C18535 * C18516;
    const double C19739 = std::pow(C18535, 2);
    const double C18566 = C18538 * C18564;
    const double C19605 = std::pow(C18564, 2);
    const double C19742 = C18564 * de;
    const double C18582 = C18538 * C18580;
    const double C19616 = std::pow(C18580, 2);
    const double C19743 = C18580 * de;
    const double C18612 = C18519 * C18610;
    const double C19641 = std::pow(C18610, 2);
    const double C19744 = C18610 * be;
    const double C18628 = C18519 * C18626;
    const double C19652 = std::pow(C18626, 2);
    const double C19745 = C18626 * be;
    const double C18651 = 2 * C18649;
    const double C18665 = C18655 * ae;
    const double C18663 = std::pow(C18655, 2);
    const double C18661 = C18655 * ce;
    const double C18734 = C18655 * C18731;
    const double C18733 = C18731 * ce;
    const double C18793 = C18731 * C18655;
    const double C18792 = C18731 * ae;
    const double C18821 = std::pow(C18731, 2);
    const double C18764 = C18655 * C18761;
    const double C18763 = C18761 * ce;
    const double C18835 = C18731 * C18761;
    const double C18848 = C18761 * C18655;
    const double C18847 = C18761 * ae;
    const double C18876 = C18761 * C18731;
    const double C18888 = std::pow(C18761, 2);
    const double C19574 = C19573 * C18519;
    const double C19737 = std::pow(C18520, -2);
    const double C19736 = std::pow(C18520, -1);
    const double C19585 = C19584 * C18538;
    const double C19741 = std::pow(C18539, -2);
    const double C19740 = std::pow(C18539, -1);
    const double C19606 = C19605 * C18538;
    const double C19617 = C19616 * C18538;
    const double C19642 = C19641 * C18519;
    const double C19653 = C19652 * C18519;
    const double C18653 = C18651 / C18650;
    const double C108 =
        (-((std::pow(xP - xQ, 2) * bs[2] * std::pow(C18651 / C18650, 2) -
            (bs[1] * C18651) / C18650) *
           ae * ce) /
         C18535) /
        C18516;
    const double C94 = -(C18655 * bs[1] * C18651) / C18650;
    const double C628 = -(C18731 * bs[1] * C18651) / C18650;
    const double C1072 = -(C18761 * bs[1] * C18651) / C18650;
    const double C18668 = C18660 * C18665;
    const double C18679 = C18673 * C18665;
    const double C18703 = C18694 * C18665;
    const double C98 = (-(bs[1] * C18665 * C18651) / C18650) / C18516;
    const double C18675 = C18663 * C18673;
    const double C18698 = C18663 * C18694;
    const double C18667 = C18660 * C18661;
    const double C18676 = C18673 * C18661;
    const double C18699 = C18694 * C18661;
    const double C101 = (bs[1] * C18661 * C18651) / (C18650 * C18535);
    const double C18736 = C18734 * ae;
    const double C18735 = C18660 * C18733;
    const double C18741 = C18673 * C18733;
    const double C18748 = C18694 * C18733;
    const double C152 = (bs[1] * C18733 * C18651) / (C18650 * C18535);
    const double C18795 = C18793 * ae;
    const double C18794 = C18660 * C18792;
    const double C18800 = C18673 * C18792;
    const double C18807 = C18694 * C18792;
    const double C250 = (-(bs[1] * C18792 * C18651) / C18650) / C18516;
    const double C18823 = C18821 * C18673;
    const double C18828 = C18821 * C18694;
    const double C18766 = C18764 * ae;
    const double C18765 = C18660 * C18763;
    const double C18771 = C18673 * C18763;
    const double C18778 = C18694 * C18763;
    const double C201 = (bs[1] * C18763 * C18651) / (C18650 * C18535);
    const double C18836 = C18835 * ae;
    const double C18850 = C18848 * ae;
    const double C18849 = C18660 * C18847;
    const double C18855 = C18673 * C18847;
    const double C18862 = C18694 * C18847;
    const double C437 = (-(bs[1] * C18847 * C18651) / C18650) / C18516;
    const double C18877 = C18876 * ae;
    const double C18890 = C18888 * C18673;
    const double C18895 = C18888 * C18694;
    const double C19575 = C19574 / C18516;
    const double C19586 = C19585 / C18535;
    const double C19607 = C19606 / C18535;
    const double C19618 = C19617 / C18535;
    const double C19643 = C19642 / C18516;
    const double C19654 = C19653 / C18516;
    const double C18657 = std::pow(C18653, 2);
    const double C18659 = -C18653;
    const double C18674 = std::pow(C18653, 4);
    const double C18738 = C18736 * ce;
    const double C18797 = C18795 * ce;
    const double C18768 = C18766 * ce;
    const double C18837 = C18836 * ce;
    const double C18852 = C18850 * ce;
    const double C18878 = C18877 * ce;
    const double C19576 = -C19575;
    const double C19587 = -C19586;
    const double C19608 = -C19607;
    const double C19619 = -C19618;
    const double C19644 = -C19643;
    const double C19655 = -C19654;
    const double C18662 = C18654 * C18657;
    const double C109 =
        (-(C18657 * C18654 * C18655 * ae * ce) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18655 * ce) / C18656 -
        (C18655 *
         (C18654 * C18657 +
          std::pow(C18655, 2) * bs[3] * std::pow(-C18653, 3)) *
         ae * ce) /
            C18656;
    const double C157 =
        (-(C18657 * C18654 * C18655 * (yP - yQ) * ae * ce) / C18535) / C18516;
    const double C206 =
        (-(C18657 * C18654 * C18655 * (zP - zQ) * ae * ce) / C18535) / C18516;
    const double C255 =
        (-(C18657 * C18654 * C18731 * C18655 * ae * ce) / C18535) / C18516;
    const double C316 =
        (-((std::pow(C18731, 2) * C18654 * C18657 - (bs[1] * C18651) / C18650) *
           C18664) /
         C18535) /
        C18516;
    const double C376 =
        (-(C18657 * C18654 * C18731 * C18761 * ae * ce) / C18535) / C18516;
    const double C442 =
        (-(C18657 * C18654 * C18761 * C18655 * ae * ce) / C18535) / C18516;
    const double C503 =
        (-(C18657 * C18654 * C18761 * C18731 * ae * ce) / C18535) / C18516;
    const double C562 =
        (-((std::pow(C18761, 2) * C18654 * C18657 - (bs[1] * C18651) / C18650) *
           C18664) /
         C18535) /
        C18516;
    const double C99 = (C18655 * C18657 * C18654 * C18665) / C18516 -
                       (ae * bs[1] * C18651) / (C18650 * C18516);
    const double C102 = (ce * bs[1] * C18651) / (C18650 * C18535) -
                        (C18655 * C18657 * C18654 * C18661) / C18535;
    const double C153 = -(C18655 * C18657 * C18654 * C18733) / C18535;
    const double C202 = -(C18655 * C18657 * C18654 * C18763) / C18535;
    const double C251 = (C18655 * C18657 * C18654 * C18792) / C18516;
    const double C438 = (C18655 * C18657 * C18654 * C18847) / C18516;
    const double C634 = -(C18731 * C18657 * C18654 * C18661) / C18535;
    const double C637 = (C18731 * C18657 * C18654 * C18665) / C18516;
    const double C693 = (ce * bs[1] * C18651) / (C18650 * C18535) -
                        (C18731 * C18657 * C18654 * C18733) / C18535;
    const double C743 = -(C18731 * C18657 * C18654 * C18763) / C18535;
    const double C793 = (C18731 * C18657 * C18654 * C18792) / C18516 -
                        (ae * bs[1] * C18651) / (C18650 * C18516);
    const double C931 = (C18731 * C18657 * C18654 * C18847) / C18516;
    const double C1078 = -(C18761 * C18657 * C18654 * C18661) / C18535;
    const double C1081 = (C18761 * C18657 * C18654 * C18665) / C18516;
    const double C1134 = -(C18761 * C18657 * C18654 * C18733) / C18535;
    const double C1187 = (ce * bs[1] * C18651) / (C18650 * C18535) -
                         (C18761 * C18657 * C18654 * C18763) / C18535;
    const double C1237 = (C18761 * C18657 * C18654 * C18792) / C18516;
    const double C1375 = (C18761 * C18657 * C18654 * C18847) / C18516 -
                         (ae * bs[1] * C18651) / (C18650 * C18516);
    const double C18666 = std::pow(C18659, 3);
    const double C18695 = std::pow(C18659, 5);
    const double C18683 = C18674 * C18679;
    const double C18682 = C18674 * C18676;
    const double C18681 = C18675 * C18674;
    const double C18693 = C18673 * C18674;
    const double C18743 = C18674 * C18741;
    const double C18773 = C18674 * C18771;
    const double C18802 = C18674 * C18800;
    const double C18824 = C18823 * C18674;
    const double C18857 = C18674 * C18855;
    const double C18891 = C18890 * C18674;
    const double C18740 = C18673 * C18738;
    const double C18746 = C18694 * C18738;
    const double C18799 = C18673 * C18797;
    const double C18805 = C18694 * C18797;
    const double C18770 = C18673 * C18768;
    const double C18776 = C18694 * C18768;
    const double C18839 = C18673 * C18837;
    const double C18842 = C18694 * C18837;
    const double C18854 = C18673 * C18852;
    const double C18860 = C18694 * C18852;
    const double C18880 = C18673 * C18878;
    const double C18883 = C18694 * C18878;
    const double C19577 = std::exp(C19576);
    const double C19588 = std::exp(C19587);
    const double C19609 = std::exp(C19608);
    const double C19620 = std::exp(C19619);
    const double C19645 = std::exp(C19644);
    const double C19656 = std::exp(C19655);
    const double C95 = C18662 * C18663 - (bs[1] * C18651) / C18650;
    const double C627 = C18731 * C18655 * C18662;
    const double C629 = C18662 * C18821 - (bs[1] * C18651) / C18650;
    const double C1071 = C18761 * C18655 * C18662;
    const double C1073 = C18662 * C18888 - (bs[1] * C18651) / C18650;
    const double C2611 = C18761 * C18731 * C18662;
    const double C18670 = C18666 * C18668;
    const double C18669 = C18666 * C18667;
    const double C18672 = C18660 * C18666;
    const double C18737 = C18666 * C18735;
    const double C18767 = C18666 * C18765;
    const double C18796 = C18666 * C18794;
    const double C18851 = C18666 * C18849;
    const double C158 =
        (-(C18655 * C18666 * C18660 * C18655 * C18731 * ae * ce) / C18535) /
            C18516 -
        (ae * C18657 * C18654 * C18731 * ce) / C18656;
    const double C207 =
        (-(C18655 * C18666 * C18660 * C18655 * C18761 * ae * ce) / C18535) /
            C18516 -
        (ae * C18657 * C18654 * C18761 * ce) / C18656;
    const double C256 =
        (-(C18655 * C18666 * C18660 * C18731 * C18655 * ae * ce) / C18535) /
            C18516 -
        (C18657 * C18654 * C18731 * ae * ce) / C18656;
    const double C317 =
        (-(C18655 * (C18662 + std::pow(C18731, 2) * C18660 * C18666) * C18664) /
         C18535) /
        C18516;
    const double C377 =
        (-(C18655 * C18666 * C18660 * C18731 * C18761 * ae * ce) / C18535) /
        C18516;
    const double C378 =
        (-(C18674 * C18673 * C18837 * C18663) / C18535) / C18516 -
        (C18666 * C18660 * C18837) / C18656;
    const double C443 =
        (-(C18655 * C18666 * C18660 * C18761 * C18655 * ae * ce) / C18535) /
            C18516 -
        (C18657 * C18654 * C18761 * ae * ce) / C18656;
    const double C504 =
        (-(C18655 * C18666 * C18660 * C18761 * C18731 * ae * ce) / C18535) /
        C18516;
    const double C505 =
        (-(C18674 * C18673 * C18878 * C18663) / C18535) / C18516 -
        (C18666 * C18660 * C18878) / C18656;
    const double C563 =
        (-(C18655 * (C18662 + std::pow(C18761, 2) * C18660 * C18666) * C18664) /
         C18535) /
        C18516;
    const double C646 =
        (-(C18731 * (C18662 + C18663 * C18660 * C18666) * C18664) / C18535) /
        C18516;
    const double C699 =
        (-(C18731 * C18666 * C18660 * C18738) / C18535) / C18516 -
        (C18657 * C18654 * C18665 * ce) / C18656;
    const double C749 =
        (-(C18731 * C18666 * C18660 * C18768) / C18535) / C18516;
    const double C799 =
        (-(C18731 * C18666 * C18660 * C18797) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18661) / C18656;
    const double C841 =
        (-(C18657 * C18654 * C18792 * ce) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18733) / C18656 -
        (C18731 * (C18662 + C18821 * C18660 * C18666) * C18664) / C18656;
    const double C887 =
        (-(C18731 * C18666 * C18660 * C18837) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18763) / C18656;
    const double C937 =
        (-(C18731 * C18666 * C18660 * C18852) / C18535) / C18516;
    const double C979 =
        (-(C18731 * C18666 * C18660 * C18878) / C18535) / C18516 -
        (C18657 * C18654 * C18847 * ce) / C18656;
    const double C1025 =
        (-(C18731 * (C18662 + C18888 * C18660 * C18666) * C18664) / C18535) /
        C18516;
    const double C1090 =
        (-(C18761 * (C18662 + C18663 * C18660 * C18666) * C18664) / C18535) /
        C18516;
    const double C1140 =
        (-(C18761 * C18666 * C18660 * C18738) / C18535) / C18516;
    const double C1193 =
        (-(C18761 * C18666 * C18660 * C18768) / C18535) / C18516 -
        (C18657 * C18654 * C18665 * ce) / C18656;
    const double C1243 =
        (-(C18761 * C18666 * C18660 * C18797) / C18535) / C18516;
    const double C1287 =
        (-(C18761 * (C18662 + C18821 * C18660 * C18666) * C18664) / C18535) /
        C18516;
    const double C1329 =
        (-(C18761 * C18666 * C18660 * C18837) / C18535) / C18516 -
        (C18657 * C18654 * C18792 * ce) / C18656;
    const double C1381 =
        (-(C18761 * C18666 * C18660 * C18852) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18661) / C18656;
    const double C1425 =
        (-(C18761 * C18666 * C18660 * C18878) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18733) / C18656;
    const double C1467 =
        (-(C18657 * C18654 * C18847 * ce) / C18535) / C18516 -
        (ae * C18657 * C18654 * C18763) / C18656 -
        (C18761 * (C18662 + C18888 * C18660 * C18666) * C18664) / C18656;
    const double C18710 = C18695 * C18703;
    const double C18707 = C18695 * C18699;
    const double C18706 = C18698 * C18695;
    const double C18751 = C18695 * C18748;
    const double C18781 = C18695 * C18778;
    const double C18810 = C18695 * C18807;
    const double C18829 = C18828 * C18695;
    const double C18865 = C18695 * C18862;
    const double C18896 = C18895 * C18695;
    const double C18686 = C18655 * C18683;
    const double C18691 = C18683 * ce;
    const double C19058 = C18731 * C18683;
    const double C19212 = C18761 * C18683;
    const double C18685 = C18655 * C18682;
    const double C18692 = ae * C18682;
    const double C19071 = C18731 * C18682;
    const double C19231 = C18761 * C18682;
    const double C18704 = C18693 * ae;
    const double C18702 = C18693 * C18663;
    const double C18701 = C18655 * C18693;
    const double C18700 = C18693 * ce;
    const double C19090 = C18693 * C18821;
    const double C19089 = C18731 * C18693;
    const double C19260 = C18693 * C18888;
    const double C19259 = C18761 * C18693;
    const double C18747 = ae * C18743;
    const double C18745 = C18655 * C18743;
    const double C19080 = C18731 * C18743;
    const double C19241 = C18761 * C18743;
    const double C18777 = ae * C18773;
    const double C18775 = C18655 * C18773;
    const double C19110 = C18731 * C18773;
    const double C19250 = C18761 * C18773;
    const double C18806 = C18802 * ce;
    const double C18804 = C18655 * C18802;
    const double C19082 = C18731 * C18802;
    const double C19226 = C18761 * C18802;
    const double C18861 = C18857 * ce;
    const double C18859 = C18655 * C18857;
    const double C19122 = C18731 * C18857;
    const double C19252 = C18761 * C18857;
    const double C18742 = C18674 * C18740;
    const double C18749 = C18695 * C18746;
    const double C18801 = C18674 * C18799;
    const double C18808 = C18695 * C18805;
    const double C18772 = C18674 * C18770;
    const double C18779 = C18695 * C18776;
    const double C18840 = C18674 * C18839;
    const double C18843 = C18695 * C18842;
    const double C18856 = C18674 * C18854;
    const double C18863 = C18695 * C18860;
    const double C18881 = C18674 * C18880;
    const double C18884 = C18695 * C18883;
    const double C3457 = C19577 * C637;
    const double C6541 = C19577 * C1081;
    const double C18522 = C18521 * C19577;
    const double C19746 = C19577 * C19734;
    const double C77 =
        (C19577 * std::pow(C19734, 2)) / C19735 + C19577 / C18520;
    const double C79 = C19737 * C19577;
    const double C8534 = C19736 * C19577;
    const double C18541 = C18540 * C19588;
    const double C19747 = C19588 * C19738;
    const double C80 =
        (C19588 * std::pow(C19738, 2)) / C19739 + C19588 / C18539;
    const double C82 = C19741 * C19588;
    const double C1524 = C19740 * C19588;
    const double C18567 = C18566 * C19609;
    const double C151 = -(2 * C18538 * (yC - yD) * C19609) / C18535;
    const double C19748 = C19609 * C19742;
    const double C622 =
        (C19609 * std::pow(C19742, 2)) / C19739 + C19609 / C18539;
    const double C624 = C19741 * C19609;
    const double C1526 = C19740 * C19609;
    const double C18583 = C18582 * C19620;
    const double C200 = -(2 * C18538 * (zC - zD) * C19620) / C18535;
    const double C19749 = C19620 * C19743;
    const double C1067 =
        (C19620 * std::pow(C19743, 2)) / C19739 + C19620 / C18539;
    const double C1069 = C19741 * C19620;
    const double C2070 = C19740 * C19620;
    const double C262 = C19645 * C251;
    const double C6719 = C19645 * C1237;
    const double C18613 = C18612 * C19645;
    const double C249 = -(2 * C18519 * (yA - yB) * C19645) / C18516;
    const double C19750 = C19645 * C19744;
    const double C3098 =
        (C19645 * std::pow(C19744, 2)) / C19735 + C19645 / C18520;
    const double C3100 = C19737 * C19645;
    const double C8536 = C19736 * C19645;
    const double C449 = C19656 * C438;
    const double C3755 = C19656 * C931;
    const double C18629 = C18628 * C19656;
    const double C436 = -(2 * C18519 * (zA - zB) * C19656) / C18516;
    const double C19751 = C19656 * C19745;
    const double C5841 =
        (C19656 * std::pow(C19745, 2)) / C19735 + C19656 / C18520;
    const double C5843 = C19737 * C19656;
    const double C11904 = C19736 * C19656;
    const double C100 =
        (C18657 * C18654 * C18665 + C18655 * (C18655 * C18670 + C18662 * ae) +
         C18655 * C18662 * ae) /
        C18516;
    const double C636 = (C18731 * (C18655 * C18670 + C18662 * ae)) / C18516;
    const double C638 = (C18657 * C18654 * C18665 + C18670 * C18821) / C18516;
    const double C1080 = (C18761 * (C18655 * C18670 + C18662 * ae)) / C18516;
    const double C1082 = (C18657 * C18654 * C18665 + C18670 * C18888) / C18516;
    const double C2614 = (C18761 * C18731 * C18670) / C18516;
    const double C3450 =
        (2 * C18731 * C18670 + C18731 * (C18670 + C18683 * C18821)) / C18516;
    const double C3927 = (C18761 * (C18670 + C18683 * C18821)) / C18516;
    const double C6534 =
        (2 * C18761 * C18670 + C18761 * (C18670 + C18683 * C18888)) / C18516;
    const double C110 =
        (-(ae * (C18655 * C18669 + C18662 * ce)) / C18535) / C18516 -
        ((C18662 + C18663 * C18660 * C18666) * C18664) / C18656 -
        ((C18655 * C18670 + C18662 * ae) * ce) / C18656 +
        C18655 * ((-(C18670 * ce) / C18535) / C18516 - (ae * C18669) / C18656 -
                  (C18655 *
                   (C18660 * C18666 + C18663 * bs[4] * std::pow(C18653, 4)) *
                   C18664) /
                      C18656);
    const double C103 = -(C18655 * (C18655 * C18669 + C18662 * ce) +
                          C18657 * C18654 * C18661 + C18655 * C18662 * ce) /
                        C18535;
    const double C633 = -(C18731 * (C18655 * C18669 + C18662 * ce)) / C18535;
    const double C641 = -(C18669 * C18821 + C18657 * C18654 * C18661) / C18535;
    const double C1077 = -(C18761 * (C18655 * C18669 + C18662 * ce)) / C18535;
    const double C1085 = -(C18669 * C18888 + C18657 * C18654 * C18661) / C18535;
    const double C2617 = -(C18761 * C18731 * C18669) / C18535;
    const double C3449 = (-2 * C18731 * C18669) / C18535 -
                         (C18731 * (C18682 * C18821 + C18669)) / C18535;
    const double C3926 = -(C18761 * (C18682 * C18821 + C18669)) / C18535;
    const double C6533 = (-2 * C18761 * C18669) / C18535 -
                         (C18761 * (C18682 * C18888 + C18669)) / C18535;
    const double C18680 = C18672 * ae;
    const double C18678 = C18655 * C18672;
    const double C18677 = C18672 * ce;
    const double C18684 = C18672 + C18681;
    const double C18825 = C18672 + C18824;
    const double C18892 = C18672 + C18891;
    const double C19081 = C18731 * C18672;
    const double C19251 = C18761 * C18672;
    const double C318 =
        (-((C18672 + C18821 * C18673 * C18674) * C18664 * C18663) / C18535) /
            C18516 -
        ((C18662 + C18821 * C18660 * C18666) * C18664) / C18656;
    const double C564 =
        (-((C18672 + C18888 * C18673 * C18674) * C18664 * C18663) / C18535) /
            C18516 -
        ((C18662 + C18888 * C18660 * C18666) * C18664) / C18656;
    const double C96 =
        2 * C18655 * C18662 + C18655 * (C18662 + C18672 * C18663);
    const double C626 = C18731 * (C18662 + C18672 * C18663);
    const double C1070 = C18761 * (C18662 + C18672 * C18663);
    const double C3447 =
        2 * C18731 * C18662 + C18731 * (C18662 + C18672 * C18821);
    const double C3923 = C18761 * (C18662 + C18672 * C18821);
    const double C6531 =
        2 * C18761 * C18662 + C18761 * (C18662 + C18672 * C18888);
    const double C159 =
        (-(ae * C18655 * C18737) / C18535) / C18516 -
        (C18666 * C18660 * C18738) / C18656 +
        C18655 * ((-(C18655 * C18674 * C18673 * C18738) / C18535) / C18516 -
                  (ae * C18737) / C18656);
    const double C154 = -(C18737 * C18663 + C18657 * C18654 * C18733) / C18535;
    const double C155 = (-2 * C18655 * C18737) / C18535 -
                        (C18655 * (C18743 * C18663 + C18737)) / C18535;
    const double C691 = -(C18731 * (C18743 * C18663 + C18737) +
                          (C18662 + C18672 * C18663) * ce) /
                        C18535;
    const double C692 =
        -(C18731 * C18655 * C18737 + C18655 * C18662 * ce) / C18535;
    const double C694 = -(C18731 * (C18731 * C18737 + C18662 * ce) +
                          C18657 * C18654 * C18733 + C18731 * C18662 * ce) /
                        C18535;
    const double C1132 = -(C18761 * (C18743 * C18663 + C18737)) / C18535;
    const double C1133 = -(C18761 * C18655 * C18737) / C18535;
    const double C1135 = -(C18737 * C18888 + C18657 * C18654 * C18733) / C18535;
    const double C2673 = -(C18761 * (C18731 * C18737 + C18662 * ce)) / C18535;
    const double C6603 = (-2 * C18761 * C18737) / C18535 -
                         (C18761 * (C18743 * C18888 + C18737)) / C18535;
    const double C208 =
        (-(ae * C18655 * C18767) / C18535) / C18516 -
        (C18666 * C18660 * C18768) / C18656 +
        C18655 * ((-(C18655 * C18674 * C18673 * C18768) / C18535) / C18516 -
                  (ae * C18767) / C18656);
    const double C203 = -(C18767 * C18663 + C18657 * C18654 * C18763) / C18535;
    const double C204 = (-2 * C18655 * C18767) / C18535 -
                        (C18655 * (C18773 * C18663 + C18767)) / C18535;
    const double C741 = -(C18731 * (C18773 * C18663 + C18767)) / C18535;
    const double C742 = -(C18731 * C18655 * C18767) / C18535;
    const double C744 = -(C18767 * C18821 + C18657 * C18654 * C18763) / C18535;
    const double C1185 = -(C18761 * (C18773 * C18663 + C18767) +
                           (C18662 + C18672 * C18663) * ce) /
                         C18535;
    const double C1186 =
        -(C18761 * C18655 * C18767 + C18655 * C18662 * ce) / C18535;
    const double C1188 = -(C18761 * (C18761 * C18767 + C18662 * ce) +
                           C18657 * C18654 * C18763 + C18761 * C18662 * ce) /
                         C18535;
    const double C2729 =
        -(C18761 * C18731 * C18767 + C18731 * C18662 * ce) / C18535;
    const double C3569 = (-2 * C18731 * C18767) / C18535 -
                         (C18731 * (C18773 * C18821 + C18767)) / C18535;
    const double C4018 = -(C18761 * (C18773 * C18821 + C18767) +
                           (C18662 + C18672 * C18821) * ce) /
                         C18535;
    const double C257 =
        (-(C18655 * C18796 * ce) / C18535) / C18516 -
        (C18666 * C18660 * C18797) / C18656 +
        C18655 * ((-(C18655 * C18674 * C18673 * C18797) / C18535) / C18516 -
                  (C18796 * ce) / C18656);
    const double C252 = (C18657 * C18654 * C18792 + C18796 * C18663) / C18516;
    const double C253 =
        (2 * C18655 * C18796 + C18655 * (C18796 + C18802 * C18663)) / C18516;
    const double C791 = (C18731 * (C18796 + C18802 * C18663) +
                         (C18662 + C18672 * C18663) * ae) /
                        C18516;
    const double C792 =
        (C18731 * C18655 * C18796 + C18655 * C18662 * ae) / C18516;
    const double C794 =
        (C18657 * C18654 * C18792 + C18731 * (C18731 * C18796 + C18662 * ae) +
         C18731 * C18662 * ae) /
        C18516;
    const double C1235 = (C18761 * (C18796 + C18802 * C18663)) / C18516;
    const double C1236 = (C18761 * C18655 * C18796) / C18516;
    const double C1238 = (C18657 * C18654 * C18792 + C18796 * C18888) / C18516;
    const double C2785 = (C18761 * (C18731 * C18796 + C18662 * ae)) / C18516;
    const double C6713 =
        (2 * C18761 * C18796 + C18761 * (C18796 + C18802 * C18888)) / C18516;
    const double C444 =
        (-(C18655 * C18851 * ce) / C18535) / C18516 -
        (C18666 * C18660 * C18852) / C18656 +
        C18655 * ((-(C18655 * C18674 * C18673 * C18852) / C18535) / C18516 -
                  (C18851 * ce) / C18656);
    const double C439 = (C18657 * C18654 * C18847 + C18851 * C18663) / C18516;
    const double C440 =
        (2 * C18655 * C18851 + C18655 * (C18851 + C18857 * C18663)) / C18516;
    const double C929 = (C18731 * (C18851 + C18857 * C18663)) / C18516;
    const double C930 = (C18731 * C18655 * C18851) / C18516;
    const double C932 = (C18657 * C18654 * C18847 + C18851 * C18821) / C18516;
    const double C1373 = (C18761 * (C18851 + C18857 * C18663) +
                          (C18662 + C18672 * C18663) * ae) /
                         C18516;
    const double C1374 =
        (C18761 * C18655 * C18851 + C18655 * C18662 * ae) / C18516;
    const double C1376 =
        (C18657 * C18654 * C18847 + C18761 * (C18761 * C18851 + C18662 * ae) +
         C18761 * C18662 * ae) /
        C18516;
    const double C2947 =
        (C18761 * C18731 * C18851 + C18731 * C18662 * ae) / C18516;
    const double C3749 =
        (2 * C18731 * C18851 + C18731 * (C18851 + C18857 * C18821)) / C18516;
    const double C4187 = (C18761 * (C18851 + C18857 * C18821) +
                          (C18662 + C18672 * C18821) * ae) /
                         C18516;
    const double C264 = C19645 * C256;
    const double C324 = C19645 * C317;
    const double C384 = C19645 * C377;
    const double C387 = C19645 * C378;
    const double C451 = C19656 * C443;
    const double C511 = C19656 * C504;
    const double C514 = C19656 * C505;
    const double C570 = C19656 * C563;
    const double C3459 = C19577 * C646;
    const double C3524 = C19577 * C699;
    const double C3576 = C19577 * C749;
    const double C3757 = C19656 * C937;
    const double C3821 = C19656 * C979;
    const double C3871 = C19656 * C1025;
    const double C6543 = C19577 * C1090;
    const double C6610 = C19577 * C1140;
    const double C6668 = C19577 * C1193;
    const double C6721 = C19645 * C1243;
    const double C6785 = C19645 * C1287;
    const double C6840 = C19645 * C1329;
    const double C18715 = C18655 * C18710;
    const double C19061 = C18710 * C18821;
    const double C19214 = C18710 * C18888;
    const double C19309 = C18731 * C18710;
    const double C18714 = C18655 * C18707;
    const double C19073 = C18707 * C18821;
    const double C19233 = C18707 * C18888;
    const double C19315 = C18731 * C18707;
    const double C18713 = C18693 + C18706;
    const double C18753 = C18751 * C18663;
    const double C19088 = C18731 * C18751;
    const double C19165 = C18655 * C18751;
    const double C19243 = C18751 * C18888;
    const double C18783 = C18781 * C18663;
    const double C19112 = C18781 * C18821;
    const double C19174 = C18655 * C18781;
    const double C19258 = C18761 * C18781;
    const double C19319 = C18731 * C18781;
    const double C18812 = C18810 * C18663;
    const double C19091 = C18731 * C18810;
    const double C19167 = C18655 * C18810;
    const double C19227 = C18810 * C18888;
    const double C18830 = C18693 + C18829;
    const double C18867 = C18865 * C18663;
    const double C19124 = C18865 * C18821;
    const double C19178 = C18655 * C18865;
    const double C19261 = C18761 * C18865;
    const double C19321 = C18731 * C18865;
    const double C18897 = C18693 + C18896;
    const double C18696 = C18691 / C18535;
    const double C19060 = C18691 / C18656;
    const double C3928 = (C18731 * C18670 + C19058 * C18888) / C18516;
    const double C18697 = C18692 / C18656;
    const double C3929 = -(C19071 * C18888 + C18731 * C18669) / C18535;
    const double C18709 = C18672 + C18702;
    const double C18711 = C18701 * ae;
    const double C18708 = C18701 * ce;
    const double C19166 = C18731 * C18701;
    const double C19301 = C18761 * C18701;
    const double C19096 = C18672 + C19090;
    const double C19098 = C19089 * ae;
    const double C19095 = C19089 * ce;
    const double C19320 = C18761 * C19089;
    const double C19266 = C18672 + C19260;
    const double C19268 = C19259 * ae;
    const double C19265 = C19259 * ce;
    const double C18750 = C18747 / C18656;
    const double C1136 = -(C18745 * C18888 + C18655 * C18737) / C18535;
    const double C18780 = C18777 / C18656;
    const double C745 = -(C18775 * C18821 + C18655 * C18767) / C18535;
    const double C18809 = C18806 / C18656;
    const double C19086 = C18806 / C18535;
    const double C1239 = (C18655 * C18796 + C18804 * C18888) / C18516;
    const double C18864 = C18861 / C18656;
    const double C19256 = C18861 / C18535;
    const double C933 = (C18655 * C18851 + C18859 * C18821) / C18516;
    const double C160 =
        2 * ((-(C18655 * C18742) / C18535) / C18516 - (ae * C18737) / C18656) -
        (ae * (C18743 * C18663 + C18737)) / C18656 +
        C18655 *
            ((-(ae * C18655 * C18743) / C18535) / C18516 - C18742 / C18656 +
             C18655 *
                 ((-(C18655 * C18695 * C18694 * C18738) / C18535) / C18516 -
                  (ae * C18743) / C18656));
    const double C698 = C18731 * ((-(C18655 * C18742) / C18535) / C18516 -
                                  (ae * C18737) / C18656) -
                        ((C18655 * C18670 + C18662 * ae) * ce) / C18656;
    const double C700 = (-(C18731 * C18670 * ce) / C18535) / C18516 -
                        (C18666 * C18660 * C18738) / C18656 +
                        C18731 * ((-(C18731 * C18742) / C18535) / C18516 -
                                  (C18670 * ce) / C18656);
    const double C1139 = C18761 * ((-(C18655 * C18742) / C18535) / C18516 -
                                   (ae * C18737) / C18656);
    const double C1141 = (-(C18742 * C18888) / C18535) / C18516 -
                         (C18666 * C18660 * C18738) / C18656;
    const double C2676 = C18761 * ((-(C18731 * C18742) / C18535) / C18516 -
                                   (C18670 * ce) / C18656);
    const double C18752 = C18655 * C18749;
    const double C19059 = C18731 * C18749;
    const double C3520 =
        2 * ((-(C18731 * C18742) / C18535) / C18516 - (C18670 * ce) / C18656) -
        ((C18670 + C18683 * C18821) * ce) / C18656 +
        C18731 *
            ((-(C18731 * C18683 * ce) / C18535) / C18516 - C18742 / C18656 +
             C18731 *
                 ((-(C18731 * C18749) / C18535) / C18516 - C18691 / C18656));
    const double C6605 =
        (-2 * C18761 * C18742) / C18656 +
        C18761 * ((-(C18749 * C18888) / C18535) / C18516 - C18742 / C18656);
    const double C6606 =
        3 * ((-(C18749 * C18888) / C18535) / C18516 - C18742 / C18656) +
        C18761 * ((-2 * C18761 * C18749) / C18656 +
                  C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18738 * C18888) /
                             C18535) /
                                C18516 -
                            C18749 / C18656));
    const double C258 =
        2 * ((-(C18655 * C18801) / C18535) / C18516 - (C18796 * ce) / C18656) -
        ((C18796 + C18802 * C18663) * ce) / C18656 +
        C18655 *
            ((-(C18655 * C18802 * ce) / C18535) / C18516 - C18801 / C18656 +
             C18655 *
                 ((-(C18655 * C18695 * C18694 * C18797) / C18535) / C18516 -
                  (C18802 * ce) / C18656));
    const double C798 = C18731 * ((-(C18655 * C18801) / C18535) / C18516 -
                                  (C18796 * ce) / C18656) -
                        (ae * (C18655 * C18669 + C18662 * ce)) / C18656;
    const double C800 = (-(ae * C18731 * C18669) / C18535) / C18516 -
                        (C18666 * C18660 * C18797) / C18656 +
                        C18731 * ((-(C18731 * C18801) / C18535) / C18516 -
                                  (ae * C18669) / C18656);
    const double C1242 = C18761 * ((-(C18655 * C18801) / C18535) / C18516 -
                                   (C18796 * ce) / C18656);
    const double C1244 = (-(C18801 * C18888) / C18535) / C18516 -
                         (C18666 * C18660 * C18797) / C18656;
    const double C2788 = (-(C18731 * C18761 * C18801) / C18535) / C18516 -
                         (ae * C18761 * C18669) / C18656;
    const double C18811 = C18655 * C18808;
    const double C19072 = C18731 * C18808;
    const double C19194 = C18761 * C18808;
    const double C4064 =
        (-(ae * C18761 * C19071) / C18535) / C18516 -
        (C18761 * C18801) / C18656 +
        C18731 * ((-(C18731 * C18761 * C18808) / C18535) / C18516 -
                  (ae * C18761 * C18682) / C18656);
    const double C4065 =
        C18731 * ((-(C18808 * C18888) / C18535) / C18516 - C18801 / C18656) -
        (ae * (C18682 * C18888 + C18669)) / C18656;
    const double C4066 =
        (-(C18808 * C18888) / C18535) / C18516 - C18801 / C18656 -
        (ae * (C18731 * C18707 * C18888 + C19071)) / C18656 +
        C18731 * (C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18797 * C18888) /
                             C18535) /
                                C18516 -
                            C18808 / C18656) -
                  (ae * (C18707 * C18888 + C18682)) / C18656);
    const double C6715 =
        (-2 * C18761 * C18801) / C18656 +
        C18761 * ((-(C18808 * C18888) / C18535) / C18516 - C18801 / C18656);
    const double C209 =
        2 * ((-(C18655 * C18772) / C18535) / C18516 - (ae * C18767) / C18656) -
        (ae * (C18773 * C18663 + C18767)) / C18656 +
        C18655 *
            ((-(ae * C18655 * C18773) / C18535) / C18516 - C18772 / C18656 +
             C18655 *
                 ((-(C18655 * C18695 * C18694 * C18768) / C18535) / C18516 -
                  (ae * C18773) / C18656));
    const double C748 = C18731 * ((-(C18655 * C18772) / C18535) / C18516 -
                                  (ae * C18767) / C18656);
    const double C750 = (-(C18772 * C18821) / C18535) / C18516 -
                        (C18666 * C18660 * C18768) / C18656;
    const double C1192 = C18761 * ((-(C18655 * C18772) / C18535) / C18516 -
                                   (ae * C18767) / C18656) -
                         ((C18655 * C18670 + C18662 * ae) * ce) / C18656;
    const double C1194 = (-(C18761 * C18670 * ce) / C18535) / C18516 -
                         (C18666 * C18660 * C18768) / C18656 +
                         C18761 * ((-(C18761 * C18772) / C18535) / C18516 -
                                   (C18670 * ce) / C18656);
    const double C2732 = (-(C18761 * C18731 * C18772) / C18535) / C18516 -
                         (C18731 * C18670 * ce) / C18656;
    const double C18782 = C18655 * C18779;
    const double C19213 = C18761 * C18779;
    const double C19308 = C18731 * C18779;
    const double C3571 =
        (-2 * C18731 * C18772) / C18656 +
        C18731 * ((-(C18779 * C18821) / C18535) / C18516 - C18772 / C18656);
    const double C3572 =
        3 * ((-(C18779 * C18821) / C18535) / C18516 - C18772 / C18656) +
        C18731 * ((-2 * C18731 * C18779) / C18656 +
                  C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18768 * C18821) /
                             C18535) /
                                C18516 -
                            C18779 / C18656));
    const double C4020 =
        (-(C18761 * C19058 * ce) / C18535) / C18516 -
        (C18731 * C18772) / C18656 +
        C18761 * ((-(C18761 * C18731 * C18779) / C18535) / C18516 -
                  (C19058 * ce) / C18656);
    const double C4021 =
        C18761 * ((-(C18779 * C18821) / C18535) / C18516 - C18772 / C18656) -
        ((C18670 + C18683 * C18821) * ce) / C18656;
    const double C379 =
        (-2 * C18655 * C18840) / C18656 +
        C18655 * ((-(C18695 * C18694 * C18837 * C18663) / C18535) / C18516 -
                  C18840 / C18656);
    const double C886 = (-(C18731 * C18655 * C18840) / C18535) / C18516 -
                        (ae * C18655 * C18767) / C18656;
    const double C888 = (-(ae * C18731 * C18767) / C18535) / C18516 -
                        (C18666 * C18660 * C18837) / C18656 +
                        C18731 * ((-(C18731 * C18840) / C18535) / C18516 -
                                  (ae * C18767) / C18656);
    const double C1330 = (-(C18761 * C18796 * ce) / C18535) / C18516 -
                         (C18666 * C18660 * C18837) / C18656 +
                         C18761 * ((-(C18761 * C18840) / C18535) / C18516 -
                                   (C18796 * ce) / C18656);
    const double C1331 = (-(C18761 * C18655 * C18840) / C18535) / C18516 -
                         (C18655 * C18796 * ce) / C18656;
    const double C2894 = C18731 * ((-(C18761 * C18840) / C18535) / C18516 -
                                   (C18796 * ce) / C18656) -
                         (ae * (C18761 * C18767 + C18662 * ce)) / C18656;
    const double C19111 = C18731 * C18843;
    const double C19173 = C18655 * C18843;
    const double C19198 = C18761 * C18843;
    const double C380 =
        3 * ((-(C18843 * C18663) / C18535) / C18516 - C18840 / C18656) +
        C18655 * ((-2 * C18655 * C18843) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656));
    const double C885 =
        C18731 * ((-(C18843 * C18663) / C18535) / C18516 - C18840 / C18656) -
        (ae * (C18773 * C18663 + C18767)) / C18656;
    const double C889 =
        (-(ae * C18731 * C18775) / C18535) / C18516 -
        (C18655 * C18840) / C18656 +
        C18731 * ((-(C18731 * C18655 * C18843) / C18535) / C18516 -
                  (ae * C18775) / C18656);
    const double C1332 =
        (-(C18761 * C18804 * ce) / C18535) / C18516 -
        (C18655 * C18840) / C18656 +
        C18761 * ((-(C18761 * C18655 * C18843) / C18535) / C18516 -
                  (C18804 * ce) / C18656);
    const double C1333 =
        C18761 * ((-(C18843 * C18663) / C18535) / C18516 - C18840 / C18656) -
        ((C18796 + C18802 * C18663) * ce) / C18656;
    const double C445 =
        2 * ((-(C18655 * C18856) / C18535) / C18516 - (C18851 * ce) / C18656) -
        ((C18851 + C18857 * C18663) * ce) / C18656 +
        C18655 *
            ((-(C18655 * C18857 * ce) / C18535) / C18516 - C18856 / C18656 +
             C18655 *
                 ((-(C18655 * C18695 * C18694 * C18852) / C18535) / C18516 -
                  (C18857 * ce) / C18656));
    const double C936 = C18731 * ((-(C18655 * C18856) / C18535) / C18516 -
                                  (C18851 * ce) / C18656);
    const double C938 = (-(C18856 * C18821) / C18535) / C18516 -
                        (C18666 * C18660 * C18852) / C18656;
    const double C1380 = C18761 * ((-(C18655 * C18856) / C18535) / C18516 -
                                   (C18851 * ce) / C18656) -
                         (ae * (C18655 * C18669 + C18662 * ce)) / C18656;
    const double C1382 = (-(ae * C18761 * C18669) / C18535) / C18516 -
                         (C18666 * C18660 * C18852) / C18656 +
                         C18761 * ((-(C18761 * C18856) / C18535) / C18516 -
                                   (ae * C18669) / C18656);
    const double C2950 = (-(C18761 * C18731 * C18856) / C18535) / C18516 -
                         (ae * C18731 * C18669) / C18656;
    const double C18866 = C18655 * C18863;
    const double C19232 = C18761 * C18863;
    const double C19314 = C18731 * C18863;
    const double C3751 =
        (-2 * C18731 * C18856) / C18656 +
        C18731 * ((-(C18863 * C18821) / C18535) / C18516 - C18856 / C18656);
    const double C3752 =
        3 * ((-(C18863 * C18821) / C18535) / C18516 - C18856 / C18656) +
        C18731 * ((-2 * C18731 * C18863) / C18656 +
                  C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18852 * C18821) /
                             C18535) /
                                C18516 -
                            C18863 / C18656));
    const double C4190 =
        C18761 * ((-(C18863 * C18821) / C18535) / C18516 - C18856 / C18656) -
        (ae * (C18682 * C18821 + C18669)) / C18656;
    const double C4191 =
        (-(ae * C18761 * C19071) / C18535) / C18516 -
        (C18731 * C18856) / C18656 +
        C18761 * ((-(C18761 * C18731 * C18863) / C18535) / C18516 -
                  (ae * C19071) / C18656);
    const double C506 =
        (-2 * C18655 * C18881) / C18656 +
        C18655 * ((-(C18695 * C18694 * C18878 * C18663) / C18535) / C18516 -
                  C18881 / C18656);
    const double C980 = (-(C18731 * C18851 * ce) / C18535) / C18516 -
                        (C18666 * C18660 * C18878) / C18656 +
                        C18731 * ((-(C18731 * C18881) / C18535) / C18516 -
                                  (C18851 * ce) / C18656);
    const double C981 = (-(C18731 * C18655 * C18881) / C18535) / C18516 -
                        (C18655 * C18851 * ce) / C18656;
    const double C1424 = (-(C18761 * C18655 * C18881) / C18535) / C18516 -
                         (ae * C18655 * C18737) / C18656;
    const double C1426 = (-(ae * C18761 * C18737) / C18535) / C18516 -
                         (C18666 * C18660 * C18878) / C18656 +
                         C18761 * ((-(C18761 * C18881) / C18535) / C18516 -
                                   (ae * C18737) / C18656);
    const double C3003 = C18761 * ((-(C18731 * C18881) / C18535) / C18516 -
                                   (C18851 * ce) / C18656) -
                         (ae * (C18731 * C18737 + C18662 * ce)) / C18656;
    const double C19123 = C18731 * C18884;
    const double C19177 = C18655 * C18884;
    const double C19242 = C18761 * C18884;
    const double C507 =
        3 * ((-(C18884 * C18663) / C18535) / C18516 - C18881 / C18656) +
        C18655 * ((-2 * C18655 * C18884) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656));
    const double C982 =
        (-(C18731 * C18859 * ce) / C18535) / C18516 -
        (C18655 * C18881) / C18656 +
        C18731 * ((-(C18731 * C18655 * C18884) / C18535) / C18516 -
                  (C18859 * ce) / C18656);
    const double C983 =
        C18731 * ((-(C18884 * C18663) / C18535) / C18516 - C18881 / C18656) -
        ((C18851 + C18857 * C18663) * ce) / C18656;
    const double C1423 =
        C18761 * ((-(C18884 * C18663) / C18535) / C18516 - C18881 / C18656) -
        (ae * (C18743 * C18663 + C18737)) / C18656;
    const double C1427 =
        (-(ae * C18761 * C18745) / C18535) / C18516 -
        (C18655 * C18881) / C18656 +
        C18761 * ((-(C18761 * C18655 * C18884) / C18535) / C18516 -
                  (ae * C18745) / C18656);
    const double C18523 = 2 * C18522;
    const double C78 = (-2 * C19736 * C19746) / C18516;
    const double C8533 = -C19746 / C18516;
    const double C18542 = 2 * C18541;
    const double C81 = (-2 * C19740 * C19747) / C18535;
    const double C1523 = -C19747 / C18535;
    const double C18568 = 2 * C18567;
    const double C623 = (-2 * C19740 * C19748) / C18535;
    const double C1525 = -C19748 / C18535;
    const double C18584 = 2 * C18583;
    const double C1068 = (-2 * C19740 * C19749) / C18535;
    const double C2069 = -C19749 / C18535;
    const double C18614 = 2 * C18613;
    const double C265 = C249 * C95;
    const double C263 = C249 * C102;
    const double C261 = C249 * C94;
    const double C323 = C249 * C153;
    const double C383 = C249 * C202;
    const double C1692 = C249 * C627;
    const double C2234 = C249 * C1071;
    const double C6722 = C249 * C1073;
    const double C6720 = C249 * C1078;
    const double C6718 = C249 * C1072;
    const double C6784 = C249 * C1134;
    const double C6839 = C249 * C1187;
    const double C8192 = C249 * C2611;
    const double C3099 = (-2 * C19736 * C19750) / C18516;
    const double C8535 = -C19750 / C18516;
    const double C18630 = 2 * C18629;
    const double C452 = C436 * C95;
    const double C450 = C436 * C102;
    const double C448 = C436 * C94;
    const double C510 = C436 * C153;
    const double C569 = C436 * C202;
    const double C1882 = C436 * C627;
    const double C2424 = C436 * C1071;
    const double C3758 = C436 * C629;
    const double C3756 = C436 * C634;
    const double C3754 = C436 * C628;
    const double C3820 = C436 * C693;
    const double C3870 = C436 * C743;
    const double C5672 = C436 * C2611;
    const double C5842 = (-2 * C19736 * C19751) / C18516;
    const double C11903 = -C19751 / C18516;
    const double C4333 = C19577 * C636;
    const double C9047 = C8534 * C636;
    const double C3461 = C19577 * C638;
    const double C7493 = C19577 * C1080;
    const double C12863 = C8534 * C1080;
    const double C6545 = C19577 * C1082;
    const double C5327 = C19577 * C2614;
    const double C3467 = C19577 * C3450;
    const double C5323 = C19577 * C3927;
    const double C6551 = C19577 * C6534;
    const double C267 = C249 * C103;
    const double C454 = C436 * C103;
    const double C1694 = C249 * C633;
    const double C1884 = C436 * C633;
    const double C3760 = C436 * C641;
    const double C2236 = C249 * C1077;
    const double C2426 = C436 * C1077;
    const double C6724 = C249 * C1085;
    const double C5670 = C436 * C2617;
    const double C8194 = C249 * C2617;
    const double C3762 = C436 * C3449;
    const double C5666 = C436 * C3926;
    const double C6726 = C249 * C6533;
    const double C18689 = C18686 + C18680;
    const double C19084 = C19082 + C18680;
    const double C19254 = C19252 + C18680;
    const double C2895 =
        C18731 * ((-(C18761 * C18655 * C18843) / C18535) / C18516 -
                  (C18804 * ce) / C18656) -
        (ae * (C18761 * C18775 + C18678 * ce)) / C18656;
    const double C3004 =
        C18761 * ((-(C18731 * C18655 * C18884) / C18535) / C18516 -
                  (C18859 * ce) / C18656) -
        (ae * (C18731 * C18745 + C18678 * ce)) / C18656;
    const double C695 = -(C18731 * (C18731 * C18745 + C18678 * ce) +
                          C18655 * C18737 + C18731 * C18678 * ce) /
                        C18535;
    const double C795 =
        (C18655 * C18796 + C18731 * (C18731 * C18804 + C18678 * ae) +
         C18731 * C18678 * ae) /
        C18516;
    const double C1189 = -(C18761 * (C18761 * C18775 + C18678 * ce) +
                           C18655 * C18767 + C18761 * C18678 * ce) /
                         C18535;
    const double C1377 =
        (C18655 * C18851 + C18761 * (C18761 * C18859 + C18678 * ae) +
         C18761 * C18678 * ae) /
        C18516;
    const double C2674 = -(C18761 * (C18731 * C18745 + C18678 * ce)) / C18535;
    const double C2730 =
        -(C18761 * C18731 * C18775 + C18731 * C18678 * ce) / C18535;
    const double C2786 = (C18761 * (C18731 * C18804 + C18678 * ae)) / C18516;
    const double C2948 =
        (C18761 * C18731 * C18859 + C18731 * C18678 * ae) / C18516;
    const double C630 = C18655 * C18662 + C18678 * C18821;
    const double C1074 = C18655 * C18662 + C18678 * C18888;
    const double C2612 = C18761 * C18731 * C18678;
    const double C4325 =
        2 * C18731 * C18678 + C18731 * (C18678 + C18701 * C18821);
    const double C4849 = C18761 * (C18678 + C18701 * C18821);
    const double C7485 =
        2 * C18761 * C18678 + C18761 * (C18678 + C18701 * C18888);
    const double C18688 = C18685 + C18677;
    const double C19083 = C19080 + C18677;
    const double C19253 = C19250 + C18677;
    const double C18687 = C18684 * C18664;
    const double C18826 = C18825 * C18664;
    const double C18893 = C18892 * C18664;
    const double C4017 = -(C18761 * (C18761 * C19110 + C19081 * ce) +
                           C18731 * C18767 + C18761 * C19081 * ce) /
                         C18535;
    const double C4188 =
        (C18731 * C18851 + C18761 * (C18761 * C19122 + C19081 * ae) +
         C18761 * C19081 * ae) /
        C18516;
    const double C3924 = C18731 * C18662 + C19081 * C18888;
    const double C8009 =
        2 * C18761 * C19081 + C18761 * (C19081 + C19089 * C18888);
    const double C327 = C19645 * C318;
    const double C573 = C19656 * C564;
    const double C269 = C249 * C96;
    const double C456 = C436 * C96;
    const double C1696 = C249 * C626;
    const double C1886 = C436 * C626;
    const double C2238 = C249 * C1070;
    const double C2428 = C436 * C1070;
    const double C3764 = C436 * C3447;
    const double C5668 = C436 * C3923;
    const double C6728 = C249 * C6531;
    const double C326 = C249 * C154;
    const double C513 = C436 * C154;
    const double C328 = C249 * C155;
    const double C515 = C436 * C155;
    const double C1763 = C249 * C691;
    const double C1953 = C436 * C691;
    const double C1758 = C249 * C692;
    const double C1948 = C436 * C692;
    const double C3822 = C436 * C694;
    const double C2301 = C249 * C1132;
    const double C2491 = C436 * C1132;
    const double C2298 = C249 * C1133;
    const double C2488 = C436 * C1133;
    const double C6787 = C249 * C1135;
    const double C5733 = C436 * C2673;
    const double C8262 = C249 * C2673;
    const double C6789 = C249 * C6603;
    const double C386 = C249 * C203;
    const double C572 = C436 * C203;
    const double C388 = C249 * C204;
    const double C574 = C436 * C204;
    const double C1820 = C249 * C741;
    const double C2010 = C436 * C741;
    const double C1823 = C249 * C742;
    const double C2013 = C436 * C742;
    const double C3873 = C436 * C744;
    const double C2366 = C249 * C1185;
    const double C2556 = C436 * C1185;
    const double C2361 = C249 * C1186;
    const double C2551 = C436 * C1186;
    const double C6841 = C249 * C1188;
    const double C5793 = C436 * C2729;
    const double C8324 = C249 * C2729;
    const double C3875 = C436 * C3569;
    const double C5798 = C436 * C4018;
    const double C268 = C19645 * C257;
    const double C266 = C19645 * C252;
    const double C270 = C19645 * C253;
    const double C1697 = C19645 * C791;
    const double C8703 = C8536 * C791;
    const double C1693 = C19645 * C792;
    const double C8693 = C8536 * C792;
    const double C2239 = C19645 * C1235;
    const double C2235 = C19645 * C1236;
    const double C6723 = C19645 * C1238;
    const double C8193 = C19645 * C2785;
    const double C16355 = C8536 * C2785;
    const double C6729 = C19645 * C6713;
    const double C455 = C19656 * C444;
    const double C453 = C19656 * C439;
    const double C457 = C19656 * C440;
    const double C1887 = C19656 * C929;
    const double C1883 = C19656 * C930;
    const double C3759 = C19656 * C932;
    const double C2429 = C19656 * C1373;
    const double C12223 = C11904 * C1373;
    const double C2425 = C19656 * C1374;
    const double C12213 = C11904 * C1374;
    const double C5673 = C19656 * C2947;
    const double C16003 = C11904 * C2947;
    const double C3765 = C19656 * C3749;
    const double C5669 = C19656 * C4187;
    const double C16013 = C11904 * C4187;
    const double C18719 = C18715 + C18704;
    const double C19063 = C18683 + C19061;
    const double C19216 = C18683 + C19214;
    const double C8010 =
        (2 * C18761 * C19058 + C18761 * (C19058 + C19309 * C18888)) / C18516;
    const double C18718 = C18714 + C18700;
    const double C19075 = C19073 + C18682;
    const double C19235 = C19233 + C18682;
    const double C8011 = (-2 * C18761 * C19071) / C18535 -
                         (C18761 * (C19315 * C18888 + C19071)) / C18535;
    const double C18717 = C18713 * C18664;
    const double C18755 = C18753 + C18743;
    const double C19094 = C19088 + C18700;
    const double C19168 = C18731 * C19165;
    const double C7559 = (-2 * C18761 * C18745) / C18535 -
                         (C18761 * (C19165 * C18888 + C18745)) / C18535;
    const double C19245 = C19243 + C18743;
    const double C18785 = C18783 + C18773;
    const double C19114 = C19112 + C18773;
    const double C19289 = C18731 * C19174;
    const double C19300 = C18761 * C19174;
    const double C4457 = (-2 * C18731 * C18775) / C18535 -
                         (C18731 * (C19174 * C18821 + C18775)) / C18535;
    const double C4955 = -(C18761 * (C19174 * C18821 + C18775) +
                           (C18678 + C18701 * C18821) * ce) /
                         C18535;
    const double C19264 = C19258 + C18700;
    const double C19322 = C18761 * C19319;
    const double C18814 = C18802 + C18812;
    const double C19097 = C19091 + C18704;
    const double C19169 = C18731 * C19167;
    const double C7679 =
        (2 * C18761 * C18804 + C18761 * (C18804 + C19167 * C18888)) / C18516;
    const double C19228 = C18802 + C19227;
    const double C18831 = C18830 * C18664;
    const double C18869 = C18857 + C18867;
    const double C19126 = C18857 + C19124;
    const double C19290 = C18731 * C19178;
    const double C19302 = C18761 * C19178;
    const double C4673 =
        (2 * C18731 * C18859 + C18731 * (C18859 + C19178 * C18821)) / C18516;
    const double C5161 = (C18761 * (C18859 + C19178 * C18821) +
                          (C18678 + C18701 * C18821) * ae) /
                         C18516;
    const double C19267 = C19261 + C18704;
    const double C19323 = C18761 * C19321;
    const double C18898 = C18897 * C18664;
    const double C18705 = -C18696;
    const double C6664 =
        2 * ((-(C18761 * C18772) / C18535) / C18516 - (C18670 * ce) / C18656) -
        ((C18670 + C18683 * C18888) * ce) / C18656 +
        C18761 *
            ((-(C18761 * C18683 * ce) / C18535) / C18516 - C18772 / C18656 +
             C18761 * ((-(C18761 * C18779) / C18535) / C18516 - C19060));
    const double C8015 = C19577 * C3928;
    const double C3629 =
        2 * ((-(C18731 * C18801) / C18535) / C18516 - (ae * C18669) / C18656) -
        (ae * (C18682 * C18821 + C18669)) / C18656 +
        C18731 *
            ((-(ae * C18731 * C18682) / C18535) / C18516 - C18801 / C18656 +
             C18731 * ((-(C18731 * C18808) / C18535) / C18516 - C18697));
    const double C6887 =
        2 * ((-(C18761 * C18856) / C18535) / C18516 - (ae * C18669) / C18656) -
        (ae * (C18682 * C18888 + C18669)) / C18656 +
        C18761 *
            ((-(ae * C18761 * C18682) / C18535) / C18516 - C18856 / C18656 +
             C18761 * ((-(C18761 * C18863) / C18535) / C18516 - C18697));
    const double C8198 = C249 * C3929;
    const double C97 = 3 * (C18662 + C18672 * C18663) +
                       C18655 * (2 * C18678 + C18655 * C18709);
    const double C631 = C18662 + C18672 * C18663 + C18709 * C18821;
    const double C1075 = C18662 + C18672 * C18663 + C18709 * C18888;
    const double C1529 = C18731 * (2 * C18678 + C18655 * C18709);
    const double C2071 = C18761 * (2 * C18678 + C18655 * C18709);
    const double C2613 = C18761 * C18731 * C18709;
    const double C7019 = C18731 * C18678 + C19166 * C18888;
    const double C3448 = 3 * (C18662 + C18672 * C18821) +
                         C18731 * (2 * C19081 + C18731 * C19096);
    const double C3925 = C18662 + C18672 * C18821 + C19096 * C18888;
    const double C5315 = C18761 * (2 * C19081 + C18731 * C19096);
    const double C6532 = 3 * (C18662 + C18672 * C18888) +
                         C18761 * (2 * C19251 + C18761 * C19266);
    const double C6927 =
        2 * ((-(C18761 * C18881) / C18535) / C18516 - (ae * C18737) / C18656) -
        (ae * (C18743 * C18888 + C18737)) / C18656 +
        C18761 *
            ((-(ae * C18761 * C18743) / C18535) / C18516 - C18881 / C18656 +
             C18761 * ((-(C18761 * C18884) / C18535) / C18516 - C18750));
    const double C7747 = C249 * C1136;
    const double C3709 =
        2 * ((-(C18731 * C18840) / C18535) / C18516 - (ae * C18767) / C18656) -
        (ae * (C18773 * C18821 + C18767)) / C18656 +
        C18731 *
            ((-(ae * C18731 * C18773) / C18535) / C18516 - C18840 / C18656 +
             C18731 * ((-(C18731 * C18843) / C18535) / C18516 - C18780));
    const double C4796 = C436 * C745;
    const double C4146 =
        (-(C18761 * C18840) / C18535) / C18516 - (C18796 * ce) / C18656 -
        (ae * (C18761 * C19110 + C19081 * ce)) / C18656 +
        C18731 * (C18731 * ((-(C18761 * C18843) / C18535) / C18516 - C18809) -
                  (ae * (C18761 * C18773 + C18677)) / C18656);
    const double C4147 =
        C18731 *
            ((-(C18761 * C18802 * ce) / C18535) / C18516 - C18840 / C18656 +
             C18761 * ((-(C18761 * C18843) / C18535) / C18516 - C18809)) -
        (ae * (C18761 * (C18761 * C18773 + C18677) + C18767 +
               C18761 * C18672 * ce)) /
            C18656;
    const double C4148 =
        (-(C18761 * C18802 * ce) / C18535) / C18516 - C18840 / C18656 +
        C18761 * ((-(C18761 * C18843) / C18535) / C18516 - C18809) -
        (ae * (C18761 * (C18761 * C18731 * C18781 + C19095) + C19110 +
               C18761 * C19089 * ce)) /
            C18656 +
        C18731 *
            (C18731 *
                 ((-(C18761 * C18810 * ce) / C18535) / C18516 -
                  C18843 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18837) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)) -
             (ae * (C18761 * (C18761 * C18781 + C18700) + C18773 +
                    C18761 * C18693 * ce)) /
                 C18656);
    const double C19092 = -C19086;
    const double C7689 = C19645 * C1239;
    const double C3817 =
        2 * ((-(C18731 * C18881) / C18535) / C18516 - (C18851 * ce) / C18656) -
        ((C18851 + C18857 * C18821) * ce) / C18656 +
        C18731 *
            ((-(C18731 * C18857 * ce) / C18535) / C18516 - C18881 / C18656 +
             C18731 * ((-(C18731 * C18884) / C18535) / C18516 - C18864));
    const double C19262 = -C19256;
    const double C4683 = C19656 * C933;
    const double C4403 = C19577 * C698;
    const double C9119 = C8534 * C698;
    const double C3526 = C19577 * C700;
    const double C7566 = C19577 * C1139;
    const double C12937 = C8534 * C1139;
    const double C6613 = C19577 * C1141;
    const double C5389 = C19577 * C2676;
    const double C18754 = C18752 / C18535;
    const double C19062 = C19059 / C18535;
    const double C3528 = C19577 * C3520;
    const double C6615 = C19577 * C6605;
    const double C272 = C19645 * C258;
    const double C1695 = C19645 * C798;
    const double C8697 = C8536 * C798;
    const double C2237 = C19645 * C1242;
    const double C6725 = C19645 * C1244;
    const double C8195 = C19645 * C2788;
    const double C16359 = C8536 * C2788;
    const double C18813 = C18811 / C18535;
    const double C19074 = C19072 / C18535;
    const double C6716 =
        3 * ((-(C18808 * C18888) / C18535) / C18516 - C18801 / C18656) +
        C18761 * ((-2 * C19194) / C18656 +
                  C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18797 * C18888) /
                             C18535) /
                                C18516 -
                            C18808 / C18656));
    const double C18139 = C8536 * C4064;
    const double C8199 = C19645 * C4065;
    const double C16361 = C8536 * C4065;
    const double C6727 = C19645 * C6715;
    const double C4462 = C19577 * C748;
    const double C9183 = C8534 * C748;
    const double C3579 = C19577 * C750;
    const double C7625 = C19577 * C1192;
    const double C12997 = C8534 * C1192;
    const double C6670 = C19577 * C1194;
    const double C5450 = C19577 * C2732;
    const double C18784 = C18782 / C18535;
    const double C19215 = C19213 / C18535;
    const double C8135 =
        2 * ((-(C18761 * C19308) / C18535) / C18516 - (C19058 * ce) / C18656) -
        ((C19058 + C19309 * C18888) * ce) / C18656 +
        C18761 *
            ((-(C18761 * C19309 * ce) / C18535) / C18516 - C19308 / C18656 +
             C18761 *
                 ((-(C18761 * C18731 * std::pow(C18653, 6) * bs[6] * C18768) /
                   C18535) /
                      C18516 -
                  (C19309 * ce) / C18656));
    const double C3581 = C19577 * C3571;
    const double C8138 = C19577 * C4020;
    const double C5455 = C19577 * C4021;
    const double C389 = C19645 * C379;
    const double C1824 = C19645 * C886;
    const double C8831 = C8536 * C886;
    const double C6842 = C19645 * C1330;
    const double C2362 = C19645 * C1331;
    const double C8325 = C19645 * C2894;
    const double C16489 = C8536 * C2894;
    const double C19113 = C19111 / C18535;
    const double C4622 =
        2 * ((-(C18731 * C19173) / C18535) / C18516 - (ae * C18775) / C18656) -
        (ae * (C19174 * C18821 + C18775)) / C18656 +
        C18731 *
            ((-(ae * C18731 * C19174) / C18535) / C18516 - C19173 / C18656 +
             C18731 *
                 ((-(C18731 * C18655 * std::pow(C18653, 6) * bs[6] * C18837) /
                   C18535) /
                      C18516 -
                  (ae * C19174) / C18656));
    const double C5110 =
        (-(C18761 * C19173) / C18535) / C18516 - (C18804 * ce) / C18656 -
        (ae * (C18761 * C18731 * C19174 + C19166 * ce)) / C18656 +
        C18731 *
            (C18731 *
                 ((-(C18761 * C18655 * std::pow(C18653, 6) * bs[6] * C18837) /
                   C18535) /
                      C18516 -
                  (C19167 * ce) / C18656) -
             (ae * (C18761 * C19174 + C18708)) / C18656);
    const double C7280 =
        C18731 *
            ((-(C18761 * C19167 * ce) / C18535) / C18516 - C19173 / C18656 +
             C18761 *
                 ((-(C18761 * C18655 * std::pow(C18653, 6) * bs[6] * C18837) /
                   C18535) /
                      C18516 -
                  (C19167 * ce) / C18656)) -
        (ae * (C18761 * (C18761 * C19174 + C18708) + C18775 +
               C18761 * C18701 * ce)) /
            C18656;
    const double C7801 =
        2 * ((-(C18761 * C19173) / C18535) / C18516 - (C18804 * ce) / C18656) -
        ((C18804 + C19167 * C18888) * ce) / C18656 +
        C18761 *
            ((-(C18761 * C19167 * ce) / C18535) / C18516 - C19173 / C18656 +
             C18761 *
                 ((-(C18761 * C18655 * std::pow(C18653, 6) * bs[6] * C18837) /
                   C18535) /
                      C18516 -
                  (C19167 * ce) / C18656));
    const double C19199 = C19198 / C18535;
    const double C1821 = C19645 * C885;
    const double C8833 = C8536 * C885;
    const double C10385 = C8536 * C889;
    const double C7804 = C19645 * C1332;
    const double C2367 = C19645 * C1333;
    const double C459 = C19656 * C445;
    const double C1885 = C19656 * C936;
    const double C3761 = C19656 * C938;
    const double C2427 = C19656 * C1380;
    const double C12217 = C11904 * C1380;
    const double C5671 = C19656 * C2950;
    const double C16007 = C11904 * C2950;
    const double C18868 = C18866 / C18535;
    const double C19234 = C19232 / C18535;
    const double C8380 =
        2 * ((-(C18761 * C19314) / C18535) / C18516 - (ae * C19071) / C18656) -
        (ae * (C19315 * C18888 + C19071)) / C18656 +
        C18761 *
            ((-(ae * C18761 * C19315) / C18535) / C18516 - C19314 / C18656 +
             C18761 *
                 ((-(C18761 * C18731 * std::pow(C18653, 6) * bs[6] * C18852) /
                   C18535) /
                      C18516 -
                  (ae * C19315) / C18656));
    const double C3763 = C19656 * C3751;
    const double C5667 = C19656 * C4190;
    const double C16009 = C11904 * C4190;
    const double C18355 = C11904 * C4191;
    const double C516 = C19656 * C506;
    const double C3823 = C19656 * C980;
    const double C1949 = C19656 * C981;
    const double C2489 = C19656 * C1424;
    const double C12289 = C11904 * C1424;
    const double C5734 = C19656 * C3003;
    const double C16075 = C11904 * C3003;
    const double C19125 = C19123 / C18535;
    const double C4739 =
        2 * ((-(C18731 * C19177) / C18535) / C18516 - (C18859 * ce) / C18656) -
        ((C18859 + C19178 * C18821) * ce) / C18656 +
        C18731 *
            ((-(C18731 * C19178 * ce) / C18535) / C18516 - C19177 / C18656 +
             C18731 *
                 ((-(C18731 * C18655 * std::pow(C18653, 6) * bs[6] * C18878) /
                   C18535) /
                      C18516 -
                  (C19178 * ce) / C18656));
    const double C7907 =
        2 * ((-(C18761 * C19177) / C18535) / C18516 - (ae * C18745) / C18656) -
        (ae * (C19165 * C18888 + C18745)) / C18656 +
        C18761 *
            ((-(ae * C18761 * C19165) / C18535) / C18516 - C19177 / C18656 +
             C18761 *
                 ((-(C18761 * C18655 * std::pow(C18653, 6) * bs[6] * C18878) /
                   C18535) /
                      C18516 -
                  (ae * C19165) / C18656));
    const double C19244 = C19242 / C18535;
    const double C4742 = C19656 * C982;
    const double C1954 = C19656 * C983;
    const double C2492 = C19656 * C1423;
    const double C12291 = C11904 * C1423;
    const double C14525 = C11904 * C1427;
    const double C88 =
        ((-C18518 / C18516) / C18520 -
         ((C19577 - (C18517 * C18523) / C18516) * be) / C18516) /
            C18520 -
        ((C18517 * ((-C18523 / C18516) / C18520 - (0 * be) / C18516) + C8534) *
         be) /
            C18516;
    const double C89 =
        ((-C18523 / C18516) / C18520 - (0 * be) / C18516) / C18520 -
        (0 * be) / C18516;
    const double C3101 = -C18523 / C18516;
    const double C8537 = (-C18518 / C18516) / C18520 -
                         ((C19577 - (C18517 * C18523) / C18516) * be) / C18516;
    const double C8538 = (-C18523 / C18516) / C18520 - (0 * be) / C18516;
    const double C9059 = C8533 * C638;
    const double C9049 = C8533 * C646;
    const double C9045 = C8533 * C637;
    const double C9123 = C8533 * C700;
    const double C9121 = C8533 * C699;
    const double C9187 = C8533 * C750;
    const double C9181 = C8533 * C749;
    const double C10015 = C8533 * C636;
    const double C10091 = C8533 * C698;
    const double C10163 = C8533 * C748;
    const double C11307 = C8533 * C2614;
    const double C11379 = C8533 * C2676;
    const double C11453 = C8533 * C2732;
    const double C12875 = C8533 * C1082;
    const double C12865 = C8533 * C1090;
    const double C12861 = C8533 * C1081;
    const double C12941 = C8533 * C1141;
    const double C12935 = C8533 * C1140;
    const double C13001 = C8533 * C1194;
    const double C12999 = C8533 * C1193;
    const double C14017 = C8533 * C1080;
    const double C14095 = C8533 * C1139;
    const double C14165 = C8533 * C1192;
    const double C87 =
        ((-(0 * be) / C18516) / C18520 -
         ((0 - (C18517 * C18518) / C18516) * be) / C18516) /
            C18520 -
        ((C18517 * ((-C18518 / C18516) / C18520 -
                    ((C19577 - (C18517 * C18523) / C18516) * be) / C18516) +
          C8533) *
         be) /
            C18516 +
        (-C18523 / C18516) / C18520 - (0 * be) / C18516;
    const double C91 =
        ((-C18537 / C18535) / C18539 -
         ((C19588 - (C18536 * C18542) / C18535) * de) / C18535) /
            C18539 -
        ((C18536 * ((-C18542 / C18535) / C18539 - (0 * de) / C18535) + C1524) *
         de) /
            C18535;
    const double C92 =
        ((-C18542 / C18535) / C18539 - (0 * de) / C18535) / C18539 -
        (0 * de) / C18535;
    const double C625 = -C18542 / C18535;
    const double C1527 = (-C18537 / C18535) / C18539 -
                         ((C19588 - (C18536 * C18542) / C18535) * de) / C18535;
    const double C1528 = (-C18542 / C18535) / C18539 - (0 * de) / C18535;
    const double C90 =
        ((-(0 * de) / C18535) / C18539 -
         ((0 - (C18536 * C18537) / C18535) * de) / C18535) /
            C18539 -
        ((C18536 * ((-C18537 / C18535) / C18539 -
                    ((C19588 - (C18536 * C18542) / C18535) * de) / C18535) +
          C1523) *
         de) /
            C18535 +
        (-C18542 / C18535) / C18539 - (0 * de) / C18535;
    const double C689 =
        ((-C18565 / C18535) / C18539 -
         ((C19609 - (C18564 * C18568) / C18535) * de) / C18535) /
            C18539 -
        ((C18564 * ((-C18568 / C18535) / C18539 - (0 * de) / C18535) + C1526) *
         de) /
            C18535;
    const double C690 =
        ((-C18568 / C18535) / C18539 - (0 * de) / C18535) / C18539 -
        (0 * de) / C18535;
    const double C1583 = (-C18565 / C18535) / C18539 -
                         ((C19609 - (C18564 * C18568) / C18535) * de) / C18535;
    const double C1584 = (-C18568 / C18535) / C18539 - (0 * de) / C18535;
    const double C688 =
        ((-(0 * de) / C18535) / C18539 -
         ((0 - (C18564 * C18565) / C18535) * de) / C18535) /
            C18539 -
        ((C18564 * ((-C18565 / C18535) / C18539 -
                    ((C19609 - (C18564 * C18568) / C18535) * de) / C18535) +
          C1525) *
         de) /
            C18535 +
        (-C18568 / C18535) / C18539 - (0 * de) / C18535;
    const double C1183 =
        ((-C18581 / C18535) / C18539 -
         ((C19620 - (C18580 * C18584) / C18535) * de) / C18535) /
            C18539 -
        ((C18580 * ((-C18584 / C18535) / C18539 - (0 * de) / C18535) + C2070) *
         de) /
            C18535;
    const double C1184 =
        ((-C18584 / C18535) / C18539 - (0 * de) / C18535) / C18539 -
        (0 * de) / C18535;
    const double C2177 = (-C18581 / C18535) / C18539 -
                         ((C19620 - (C18580 * C18584) / C18535) * de) / C18535;
    const double C2178 = (-C18584 / C18535) / C18539 - (0 * de) / C18535;
    const double C1182 =
        ((-(0 * de) / C18535) / C18539 -
         ((0 - (C18580 * C18581) / C18535) * de) / C18535) /
            C18539 -
        ((C18580 * ((-C18581 / C18535) / C18539 -
                    ((C19620 - (C18580 * C18584) / C18535) * de) / C18535) +
          C2069) *
         de) /
            C18535 +
        (-C18584 / C18535) / C18539 - (0 * de) / C18535;
    const double C3217 =
        ((-C18611 / C18516) / C18520 -
         ((C19645 - (C18610 * C18614) / C18516) * be) / C18516) /
            C18520 -
        ((C18610 * ((-C18614 / C18516) / C18520 - (0 * be) / C18516) + C8536) *
         be) /
            C18516;
    const double C3218 =
        ((-C18614 / C18516) / C18520 - (0 * be) / C18516) / C18520 -
        (0 * be) / C18516;
    const double C8689 = (-C18611 / C18516) / C18520 -
                         ((C19645 - (C18610 * C18614) / C18516) * be) / C18516;
    const double C8690 = (-C18614 / C18516) / C18520 - (0 * be) / C18516;
    const double C274 = C263 + C264;
    const double C273 = C261 + C262;
    const double C331 = C323 + C324;
    const double C391 = C383 + C384;
    const double C6731 = C6720 + C6721;
    const double C6730 = C6718 + C6719;
    const double C6792 = C6784 + C6785;
    const double C6845 = C6839 + C6840;
    const double C8705 = C8535 * C257;
    const double C8701 = C8535 * C252;
    const double C8699 = C8535 * C256;
    const double C8695 = C8535 * C251;
    const double C8773 = C8535 * C318;
    const double C8767 = C8535 * C317;
    const double C8835 = C8535 * C378;
    const double C8829 = C8535 * C377;
    const double C10239 = C8535 * C798;
    const double C10235 = C8535 * C792;
    const double C10387 = C8535 * C886;
    const double C10867 = C8535 * C1242;
    const double C10863 = C8535 * C1236;
    const double C11015 = C8535 * C1331;
    const double C16367 = C8535 * C1238;
    const double C16363 = C8535 * C1244;
    const double C16357 = C8535 * C1243;
    const double C16353 = C8535 * C1237;
    const double C16427 = C8535 * C1287;
    const double C16493 = C8535 * C1330;
    const double C16491 = C8535 * C1329;
    const double C18137 = C8535 * C2788;
    const double C18133 = C8535 * C2785;
    const double C18283 = C8535 * C2894;
    const double C3216 =
        ((-(0 * be) / C18516) / C18520 -
         ((0 - (C18610 * C18611) / C18516) * be) / C18516) /
            C18520 -
        ((C18610 * ((-C18611 / C18516) / C18520 -
                    ((C19645 - (C18610 * C18614) / C18516) * be) / C18516) +
          C8535) *
         be) /
            C18516 +
        (-C18614 / C18516) / C18520 - (0 * be) / C18516;
    const double C6073 =
        ((-C18627 / C18516) / C18520 -
         ((C19656 - (C18626 * C18630) / C18516) * be) / C18516) /
            C18520 -
        ((C18626 * ((-C18630 / C18516) / C18520 - (0 * be) / C18516) + C11904) *
         be) /
            C18516;
    const double C6074 =
        ((-C18630 / C18516) / C18520 - (0 * be) / C18516) / C18520 -
        (0 * be) / C18516;
    const double C12209 = (-C18627 / C18516) / C18520 -
                          ((C19656 - (C18626 * C18630) / C18516) * be) / C18516;
    const double C12210 = (-C18630 / C18516) / C18520 - (0 * be) / C18516;
    const double C461 = C450 + C451;
    const double C460 = C448 + C449;
    const double C518 = C510 + C511;
    const double C577 = C569 + C570;
    const double C3767 = C3756 + C3757;
    const double C3766 = C3754 + C3755;
    const double C3826 = C3820 + C3821;
    const double C3878 = C3870 + C3871;
    const double C12225 = C11903 * C444;
    const double C12221 = C11903 * C439;
    const double C12219 = C11903 * C443;
    const double C12215 = C11903 * C438;
    const double C12293 = C11903 * C505;
    const double C12287 = C11903 * C504;
    const double C12355 = C11903 * C564;
    const double C12349 = C11903 * C563;
    const double C13797 = C11903 * C936;
    const double C13793 = C11903 * C930;
    const double C13873 = C11903 * C981;
    const double C14449 = C11903 * C1380;
    const double C14445 = C11903 * C1374;
    const double C14523 = C11903 * C1424;
    const double C16015 = C11903 * C932;
    const double C16011 = C11903 * C938;
    const double C16005 = C11903 * C937;
    const double C16001 = C11903 * C931;
    const double C16079 = C11903 * C980;
    const double C16077 = C11903 * C979;
    const double C16137 = C11903 * C1025;
    const double C18361 = C11903 * C2947;
    const double C18357 = C11903 * C2950;
    const double C18433 = C11903 * C3003;
    const double C6072 =
        ((-(0 * be) / C18516) / C18520 -
         ((0 - (C18626 * C18627) / C18516) * be) / C18516) /
            C18520 -
        ((C18626 * ((-C18627 / C18516) / C18520 -
                    ((C19656 - (C18626 * C18630) / C18516) * be) / C18516) +
          C11903) *
         be) /
            C18516 +
        (-C18630 / C18516) / C18520 - (0 * be) / C18516;
    const double C104 = (2 * (C18655 * C18670 + C18662 * ae) +
                         C18655 * (C18670 + C18655 * C18689 + C18678 * ae) +
                         (C18662 + C18672 * C18663) * ae) /
                        C18516;
    const double C635 =
        (C18731 * (C18670 + C18655 * C18689 + C18678 * ae)) / C18516;
    const double C639 =
        (C18655 * C18670 + C18662 * ae + C18689 * C18821) / C18516;
    const double C1079 =
        (C18761 * (C18670 + C18655 * C18689 + C18678 * ae)) / C18516;
    const double C1083 =
        (C18655 * C18670 + C18662 * ae + C18689 * C18888) / C18516;
    const double C2615 = (C18761 * C18731 * C18689) / C18516;
    const double C3627 = (2 * (C18731 * C18796 + C18662 * ae) +
                          C18731 * (C18796 + C18731 * C19084 + C19081 * ae) +
                          (C18662 + C18672 * C18821) * ae) /
                         C18516;
    const double C4061 =
        (C18761 * (C18796 + C18731 * C19084 + C19081 * ae)) / C18516;
    const double C4062 =
        (C18731 * C18796 + C18662 * ae + C19084 * C18888) / C18516;
    const double C6885 = (2 * (C18761 * C18851 + C18662 * ae) +
                          C18761 * (C18851 + C18761 * C19254 + C19251 * ae) +
                          (C18662 + C18672 * C18888) * ae) /
                         C18516;
    const double C11013 = C8536 * C2895;
    const double C13722 = C19645 * C2895;
    const double C11158 = C19656 * C3004;
    const double C13871 = C11904 * C3004;
    const double C4741 = C436 * C695;
    const double C10237 = C8536 * C795;
    const double C7803 = C249 * C1189;
    const double C14447 = C11904 * C1377;
    const double C11157 = C436 * C2674;
    const double C13651 = C249 * C2674;
    const double C11230 = C436 * C2730;
    const double C13721 = C249 * C2730;
    const double C10865 = C8536 * C2786;
    const double C13577 = C19645 * C2786;
    const double C11085 = C19656 * C2948;
    const double C13795 = C11904 * C2948;
    const double C4682 = C436 * C630;
    const double C7688 = C249 * C1074;
    const double C11084 = C436 * C2612;
    const double C13576 = C249 * C2612;
    const double C105 =
        (-2 * (C18655 * C18669 + C18662 * ce)) / C18535 -
        (C18655 * (C18655 * C18688 + C18669 + C18678 * ce)) / C18535 -
        ((C18662 + C18672 * C18663) * ce) / C18535;
    const double C632 =
        -(C18731 * (C18655 * C18688 + C18669 + C18678 * ce)) / C18535;
    const double C642 =
        -(C18688 * C18821 + C18655 * C18669 + C18662 * ce) / C18535;
    const double C1076 =
        -(C18761 * (C18655 * C18688 + C18669 + C18678 * ce)) / C18535;
    const double C1086 =
        -(C18688 * C18888 + C18655 * C18669 + C18662 * ce) / C18535;
    const double C2618 = -(C18761 * C18731 * C18688) / C18535;
    const double C3518 =
        (-2 * (C18731 * C18737 + C18662 * ce)) / C18535 -
        (C18731 * (C18731 * C19083 + C18737 + C19081 * ce)) / C18535 -
        ((C18662 + C18672 * C18821) * ce) / C18535;
    const double C3973 =
        -(C18761 * (C18731 * C19083 + C18737 + C19081 * ce)) / C18535;
    const double C3974 =
        -(C19083 * C18888 + C18731 * C18737 + C18662 * ce) / C18535;
    const double C6662 =
        (-2 * (C18761 * C18767 + C18662 * ce)) / C18535 -
        (C18761 * (C18761 * C19253 + C18767 + C19251 * ce)) / C18535 -
        ((C18662 + C18672 * C18888) * ce) / C18535;
    const double C111 =
        2 * ((-(C18670 * ce) / C18535) / C18516 - (ae * C18669) / C18656 -
             (C18655 * C18687) / C18656) -
        (ae * (C18655 * C18688 + C18669 + C18678 * ce)) / C18656 -
        ((C18670 + C18655 * C18689 + C18678 * ae) * ce) / C18656 +
        C18655 *
            ((-(ae * C18688) / C18535) / C18516 - C18687 / C18656 -
             (C18689 * ce) / C18656 +
             C18655 *
                 ((-(C18683 * ce) / C18535) / C18516 - (ae * C18682) / C18656 -
                  (C18655 *
                   (C18673 * C18674 + C18663 * bs[5] * std::pow(C18659, 5)) *
                   C18664) /
                      C18656));
    const double C645 = (-(C18731 * C18670 * ce) / C18535) / C18516 -
                        (ae * C18731 * C18669) / C18656 -
                        (C18655 * C18731 * C18687) / C18656;
    const double C647 = (-(C18687 * C18821) / C18535) / C18516 -
                        ((C18662 + C18663 * C18660 * C18666) * C18664) / C18656;
    const double C1089 = (-(C18761 * C18670 * ce) / C18535) / C18516 -
                         (ae * C18761 * C18669) / C18656 -
                         (C18655 * C18761 * C18687) / C18656;
    const double C1091 =
        (-(C18687 * C18888) / C18535) / C18516 -
        ((C18662 + C18663 * C18660 * C18666) * C18664) / C18656;
    const double C2620 = (-(C18761 * C18731 * C18687) / C18535) / C18516;
    const double C319 =
        (-2 * C18655 * C18826) / C18656 +
        C18655 * ((-((C18693 + C18821 * C18694 * C18695) * C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18826 / C18656);
    const double C842 =
        (-(ae * (C18731 * C18737 + C18662 * ce)) / C18535) / C18516 -
        ((C18662 + C18821 * C18660 * C18666) * C18664) / C18656 -
        ((C18731 * C18796 + C18662 * ae) * ce) / C18656 +
        C18731 * ((-(C18796 * ce) / C18535) / C18516 - (ae * C18737) / C18656 -
                  (C18731 * C18826) / C18656);
    const double C843 = (-(C18655 * C18796 * ce) / C18535) / C18516 -
                        (ae * C18655 * C18737) / C18656 -
                        (C18731 * C18655 * C18826) / C18656;
    const double C1286 = (-(C18761 * C18655 * C18826) / C18535) / C18516;
    const double C1288 =
        (-(C18826 * C18888) / C18535) / C18516 -
        ((C18662 + C18821 * C18660 * C18666) * C18664) / C18656;
    const double C2841 = (-(C18761 * C18796 * ce) / C18535) / C18516 -
                         (ae * C18761 * C18737) / C18656 -
                         (C18731 * C18761 * C18826) / C18656;
    const double C565 =
        (-2 * C18655 * C18893) / C18656 +
        C18655 * ((-((C18693 + C18888 * C18694 * C18695) * C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18893 / C18656);
    const double C1024 = (-(C18731 * C18655 * C18893) / C18535) / C18516;
    const double C1026 =
        (-(C18893 * C18821) / C18535) / C18516 -
        ((C18662 + C18888 * C18660 * C18666) * C18664) / C18656;
    const double C1468 =
        (-(ae * (C18761 * C18767 + C18662 * ce)) / C18535) / C18516 -
        ((C18662 + C18888 * C18660 * C18666) * C18664) / C18656 -
        ((C18761 * C18851 + C18662 * ae) * ce) / C18656 +
        C18761 * ((-(C18851 * ce) / C18535) / C18516 - (ae * C18767) / C18656 -
                  (C18761 * C18893) / C18656);
    const double C1469 = (-(C18655 * C18851 * ce) / C18535) / C18516 -
                         (ae * C18655 * C18767) / C18656 -
                         (C18761 * C18655 * C18893) / C18656;
    const double C3056 = (-(C18731 * C18851 * ce) / C18535) / C18516 -
                         (ae * C18731 * C18767) / C18656 -
                         (C18761 * C18731 * C18893) / C18656;
    const double C8326 = C249 * C4017;
    const double C18359 = C11904 * C4188;
    const double C8196 = C249 * C3924;
    const double C332 = C326 + C327;
    const double C519 = C513 + C514;
    const double C392 = C386 + C387;
    const double C578 = C572 + C573;
    const double C276 = C267 + C268;
    const double C275 = C265 + C266;
    const double C277 = C269 + C270;
    const double C1702 = C1696 + C1697;
    const double C1700 = C1692 + C1693;
    const double C2244 = C2238 + C2239;
    const double C2242 = C2234 + C2235;
    const double C6732 = C6722 + C6723;
    const double C8200 = C8192 + C8193;
    const double C6735 = C6728 + C6729;
    const double C463 = C454 + C455;
    const double C462 = C452 + C453;
    const double C464 = C456 + C457;
    const double C1892 = C1886 + C1887;
    const double C1890 = C1882 + C1883;
    const double C3768 = C3758 + C3759;
    const double C2434 = C2428 + C2429;
    const double C2432 = C2424 + C2425;
    const double C5677 = C5672 + C5673;
    const double C3771 = C3764 + C3765;
    const double C5675 = C5668 + C5669;
    const double C18722 = C18655 * C18719;
    const double C19281 = C18731 * C18719;
    const double C4326 =
        (2 * C18731 * C18689 + C18731 * (C18689 + C18719 * C18821)) / C18516;
    const double C4850 = (C18761 * (C18689 + C18719 * C18821)) / C18516;
    const double C7486 =
        (2 * C18761 * C18689 + C18761 * (C18689 + C18719 * C18888)) / C18516;
    const double C4022 =
        (-(C18779 * C18821) / C18535) / C18516 - C18772 / C18656 -
        (C18761 * C19063 * ce) / C18656 +
        C18761 * (C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18768 * C18821) /
                             C18535) /
                                C18516 -
                            C18779 / C18656) -
                  (C19063 * ce) / C18656);
    const double C5444 =
        C18761 * ((-2 * C18731 * C18779) / C18656 +
                  C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18768 * C18821) /
                             C18535) /
                                C18516 -
                            C18779 / C18656)) -
        ((2 * C19058 + C18731 * C19063) * ce) / C18656;
    const double C3451 = (3 * (C18670 + C18683 * C18821) +
                          C18731 * (2 * C19058 + C18731 * C19063)) /
                         C18516;
    const double C3930 = (C18670 + C18683 * C18821 + C19063 * C18888) / C18516;
    const double C5316 = (C18761 * (2 * C19058 + C18731 * C19063)) / C18516;
    const double C6535 = (3 * (C18670 + C18683 * C18888) +
                          C18761 * (2 * C19212 + C18761 * C19216)) /
                         C18516;
    const double C18721 = C18655 * C18718;
    const double C19286 = C18731 * C18718;
    const double C4327 = (-2 * C18731 * C18688) / C18535 -
                         (C18731 * (C18718 * C18821 + C18688)) / C18535;
    const double C4851 = -(C18761 * (C18718 * C18821 + C18688)) / C18535;
    const double C7487 = (-2 * C18761 * C18688) / C18535 -
                         (C18761 * (C18718 * C18888 + C18688)) / C18535;
    const double C4192 =
        (-(C18863 * C18821) / C18535) / C18516 - C18856 / C18656 -
        (ae * C18761 * C19075) / C18656 +
        C18761 * (C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18852 * C18821) /
                             C18535) /
                                C18516 -
                            C18863 / C18656) -
                  (ae * C19075) / C18656);
    const double C5510 =
        2 * ((-(C18731 * C19194) / C18535) / C18516 -
             (ae * C18761 * C18682) / C18656) -
        (ae * C18761 * C19075) / C18656 +
        C18731 *
            ((-(ae * C18761 * C18731 * C18707) / C18535) / C18516 -
             C19194 / C18656 +
             C18731 *
                 ((-(C18731 * C18761 * std::pow(C18653, 6) * bs[6] * C18797) /
                   C18535) /
                      C18516 -
                  (ae * C18761 * C18707) / C18656));
    const double C5664 =
        (((-2 * C19071) / C18535 - (C18731 * C19075) / C18535) * ae) / C18516 +
        C18761 * ((-2 * C18731 * C18863) / C18656 +
                  C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18852 * C18821) /
                             C18535) /
                                C18516 -
                            C18863 / C18656));
    const double C3452 =
        (-3 * (C18682 * C18821 + C18669)) / C18535 +
        C18731 * ((-2 * C19071) / C18535 - (C18731 * C19075) / C18535);
    const double C3931 = -(C19075 * C18888 + C18682 * C18821 + C18669) / C18535;
    const double C5317 =
        C18761 * ((-2 * C19071) / C18535 - (C18731 * C19075) / C18535);
    const double C8190 =
        (((-2 * C19231) / C18535 - (C18761 * C19235) / C18535) * ae) / C18516 +
        C18731 * ((-2 * C19194) / C18656 +
                  C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18797 * C18888) /
                             C18535) /
                                C18516 -
                            C18808 / C18656));
    const double C6536 =
        (-3 * (C18682 * C18888 + C18669)) / C18535 +
        C18761 * ((-2 * C19231) / C18535 - (C18761 * C19235) / C18535);
    const double C18720 = C18655 * C18717;
    const double C19008 = C18731 * C18717;
    const double C19018 = C18761 * C18717;
    const double C644 = (-(ae * C18731 * C18688) / C18535) / C18516 -
                        (C18731 * C18687) / C18656 -
                        (C18731 * C18689 * ce) / C18656 +
                        C18655 * ((-(C18731 * C18683 * ce) / C18535) / C18516 -
                                  (ae * C18731 * C18682) / C18656 -
                                  (C18655 * C18731 * C18717) / C18656);
    const double C648 =
        (-((C18670 + C18683 * C18821) * ce) / C18535) / C18516 -
        (ae * (C18682 * C18821 + C18669)) / C18656 +
        C18655 * ((-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656);
    const double C649 =
        (-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656 -
        (ae * (C18718 * C18821 + C18688)) / C18656 -
        ((C18689 + C18719 * C18821) * ce) / C18656 +
        C18655 *
            ((-((C18683 + C18710 * C18821) * ce) / C18535) / C18516 -
             (ae * (C18707 * C18821 + C18682)) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C1088 = (-(ae * C18761 * C18688) / C18535) / C18516 -
                         (C18761 * C18687) / C18656 -
                         (C18761 * C18689 * ce) / C18656 +
                         C18655 * ((-(C18761 * C18683 * ce) / C18535) / C18516 -
                                   (ae * C18761 * C18682) / C18656 -
                                   (C18655 * C18761 * C18717) / C18656);
    const double C1092 =
        (-((C18670 + C18683 * C18888) * ce) / C18535) / C18516 -
        (ae * (C18682 * C18888 + C18669)) / C18656 +
        C18655 * ((-(C18717 * C18888) / C18535) / C18516 - C18687 / C18656);
    const double C1093 =
        (-(C18717 * C18888) / C18535) / C18516 - C18687 / C18656 -
        (ae * (C18718 * C18888 + C18688)) / C18656 -
        ((C18689 + C18719 * C18888) * ce) / C18656 +
        C18655 *
            ((-((C18683 + C18710 * C18888) * ce) / C18535) / C18516 -
             (ae * (C18707 * C18888 + C18682)) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C3453 =
        (-2 * C18731 * C18687) / C18656 +
        C18731 * ((-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656);
    const double C3932 =
        C18761 * ((-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656);
    const double C3934 =
        (-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656 +
        ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) * C18664 *
            C18821) /
          C18535) /
             C18516 -
         C18717 / C18656) *
            C18888;
    const double C4852 =
        (-(C18761 * C19063 * ce) / C18535) / C18516 -
        (ae * C18761 * C19075) / C18656 +
        C18655 * C18761 *
            ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                C18664 * C18821) /
              C18535) /
                 C18516 -
             C18717 / C18656);
    const double C6537 =
        (-2 * C18761 * C18687) / C18656 +
        C18761 * ((-(C18717 * C18888) / C18535) / C18516 - C18687 / C18656);
    const double C1428 =
        (-(C18884 * C18663) / C18535) / C18516 - C18881 / C18656 -
        (ae * C18761 * C18755) / C18656 +
        C18761 * (C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656) -
                  (ae * C18755) / C18656);
    const double C2485 =
        (((-2 * C18745) / C18535 - (C18655 * C18755) / C18535) * ae) / C18516 +
        C18761 * ((-2 * C18655 * C18884) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656));
    const double C156 =
        (-3 * (C18743 * C18663 + C18737)) / C18535 +
        C18655 * ((-2 * C18745) / C18535 - (C18655 * C18755) / C18535);
    const double C696 = -(C18731 * (C18731 * C18755 + C18709 * ce) +
                          C18743 * C18663 + C18737 + C18731 * C18709 * ce) /
                        C18535;
    const double C1137 = -(C18755 * C18888 + C18743 * C18663 + C18737) / C18535;
    const double C1585 =
        C18731 * ((-2 * C18745) / C18535 - (C18655 * C18755) / C18535) -
        ((2 * C18678 + C18655 * C18709) * ce) / C18535;
    const double C2125 =
        C18761 * ((-2 * C18745) / C18535 - (C18655 * C18755) / C18535);
    const double C2675 = -(C18761 * (C18731 * C18755 + C18709 * ce)) / C18535;
    const double C19100 = C18731 * C19094;
    const double C8071 = (-2 * C18761 * C19083) / C18535 -
                         (C18761 * (C19094 * C18888 + C19083)) / C18535;
    const double C19170 = C19168 + C18708;
    const double C6604 =
        (-3 * (C18743 * C18888 + C18737)) / C18535 +
        C18761 * ((-2 * C19241) / C18535 - (C18761 * C19245) / C18535);
    const double C890 =
        (-(C18843 * C18663) / C18535) / C18516 - C18840 / C18656 -
        (ae * C18731 * C18785) / C18656 +
        C18731 * (C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656) -
                  (ae * C18785) / C18656);
    const double C1818 =
        (((-2 * C18775) / C18535 - (C18655 * C18785) / C18535) * ae) / C18516 +
        C18731 * ((-2 * C18655 * C18843) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656));
    const double C205 =
        (-3 * (C18773 * C18663 + C18767)) / C18535 +
        C18655 * ((-2 * C18775) / C18535 - (C18655 * C18785) / C18535);
    const double C746 = -(C18785 * C18821 + C18773 * C18663 + C18767) / C18535;
    const double C1190 = -(C18761 * (C18761 * C18785 + C18709 * ce) +
                           C18773 * C18663 + C18767 + C18761 * C18709 * ce) /
                         C18535;
    const double C1637 =
        C18731 * ((-2 * C18775) / C18535 - (C18655 * C18785) / C18535);
    const double C2179 =
        C18761 * ((-2 * C18775) / C18535 - (C18655 * C18785) / C18535) -
        ((2 * C18678 + C18655 * C18709) * ce) / C18535;
    const double C2731 =
        -(C18761 * C18731 * C18785 + C18731 * C18709 * ce) / C18535;
    const double C3570 =
        (-3 * (C18773 * C18821 + C18767)) / C18535 +
        C18731 * ((-2 * C19110) / C18535 - (C18731 * C19114) / C18535);
    const double C4019 = -(C18761 * (C18761 * C19114 + C19096 * ce) +
                           C18773 * C18821 + C18767 + C18761 * C19096 * ce) /
                         C18535;
    const double C5443 =
        C18761 * ((-2 * C19110) / C18535 - (C18731 * C19114) / C18535) -
        ((2 * C19081 + C18731 * C19096) * ce) / C18535;
    const double C7125 = -(C18761 * (C18761 * C19289 + C19166 * ce) +
                           C18731 * C18775 + C18761 * C19166 * ce) /
                         C18535;
    const double C19303 = C19300 + C18708;
    const double C19270 = C18761 * C19264;
    const double C19324 = C19322 + C19095;
    const double C1334 =
        (-(C18843 * C18663) / C18535) / C18516 - C18840 / C18656 -
        (C18761 * C18814 * ce) / C18656 +
        C18761 * (C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656) -
                  (C18814 * ce) / C18656);
    const double C2356 =
        C18761 * ((-2 * C18655 * C18843) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656)) -
        ((2 * C18804 + C18655 * C18814) * ce) / C18656;
    const double C2896 =
        C18731 * (C18761 * ((-(std::pow(C18653, 6) * bs[6] * C18837 * C18663) /
                             C18535) /
                                C18516 -
                            C18843 / C18656) -
                  (C18814 * ce) / C18656) -
        (ae * (C18761 * C18785 + C18709 * ce)) / C18656;
    const double C254 = (3 * (C18796 + C18802 * C18663) +
                         C18655 * (2 * C18804 + C18655 * C18814)) /
                        C18516;
    const double C796 =
        (C18796 + C18802 * C18663 + C18731 * (C18731 * C18814 + C18709 * ae) +
         C18731 * C18709 * ae) /
        C18516;
    const double C1240 = (C18796 + C18802 * C18663 + C18814 * C18888) / C18516;
    const double C1689 = (C18731 * (2 * C18804 + C18655 * C18814) +
                          (2 * C18678 + C18655 * C18709) * ae) /
                         C18516;
    const double C2231 = (C18761 * (2 * C18804 + C18655 * C18814)) / C18516;
    const double C2787 = (C18761 * (C18731 * C18814 + C18709 * ae)) / C18516;
    const double C19101 = C18731 * C19097;
    const double C8189 =
        (2 * C18761 * C19084 + C18761 * (C19084 + C19097 * C18888)) / C18516;
    const double C19171 = C19169 + C18711;
    const double C6714 = (3 * (C18796 + C18802 * C18888) +
                          C18761 * (2 * C19226 + C18761 * C19228)) /
                         C18516;
    const double C19087 = C18731 * C18831;
    const double C19164 = C18655 * C18831;
    const double C19196 = C18761 * C18831;
    const double C320 =
        3 * ((-(C18831 * C18663) / C18535) / C18516 - C18826 / C18656) +
        C18655 *
            ((-2 * C18655 * C18831) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C844 =
        (-(ae * (C18731 * C18745 + C18678 * ce)) / C18535) / C18516 -
        (C18655 * C18826) / C18656 -
        ((C18731 * C18804 + C18678 * ae) * ce) / C18656 +
        C18731 * ((-(C18804 * ce) / C18535) / C18516 - (ae * C18745) / C18656 -
                  (C18731 * C18655 * C18831) / C18656);
    const double C845 =
        (-((C18796 + C18802 * C18663) * ce) / C18535) / C18516 -
        (ae * (C18743 * C18663 + C18737)) / C18656 +
        C18731 * ((-(C18831 * C18663) / C18535) / C18516 - C18826 / C18656);
    const double C846 =
        (-(C18831 * C18663) / C18535) / C18516 - C18826 / C18656 -
        (ae * (C18731 * C18755 + C18709 * ce)) / C18656 -
        ((C18731 * C18814 + C18709 * ae) * ce) / C18656 +
        C18731 *
            ((-(C18814 * ce) / C18535) / C18516 - (ae * C18755) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C1285 =
        C18761 * ((-(C18831 * C18663) / C18535) / C18516 - C18826 / C18656);
    const double C1289 = (-(C18655 * C18831 * C18888) / C18535) / C18516 -
                         (C18655 * C18826) / C18656;
    const double C1290 =
        (-(C18831 * C18663) / C18535) / C18516 - C18826 / C18656 +
        ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) * C18664 *
            C18663) /
          C18535) /
             C18516 -
         C18831 / C18656) *
            C18888;
    const double C1753 =
        (((-2 * C18745) / C18535 - (C18655 * C18755) / C18535) * ae) / C18516 -
        ((2 * C18804 + C18655 * C18814) * ce) / C18656 +
        C18731 *
            ((-2 * C18655 * C18831) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C2295 =
        C18761 *
        ((-2 * C18655 * C18831) / C18656 +
         C18655 * ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                      C18664 * C18663) /
                    C18535) /
                       C18516 -
                   C18831 / C18656));
    const double C2842 = (-(C18761 * C18804 * ce) / C18535) / C18516 -
                         (ae * C18761 * C18745) / C18656 -
                         (C18731 * C18761 * C18655 * C18831) / C18656;
    const double C2843 =
        (-(C18761 * C18814 * ce) / C18535) / C18516 -
        (ae * C18761 * C18755) / C18656 +
        C18731 * C18761 *
            ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                C18664 * C18663) /
              C18535) /
                 C18516 -
             C18831 / C18656);
    const double C3669 =
        2 * ((-(C18796 * ce) / C18535) / C18516 - (ae * C18737) / C18656 -
             (C18731 * C18826) / C18656) -
        (ae * (C18731 * C19083 + C18737 + C19081 * ce)) / C18656 -
        ((C18796 + C18731 * C19084 + C19081 * ae) * ce) / C18656 +
        C18731 * ((-(ae * C19083) / C18535) / C18516 - C18826 / C18656 -
                  (C19084 * ce) / C18656 +
                  C18731 * ((-C18806 / C18535) / C18516 - C18750 -
                            (C18731 * C18831) / C18656));
    const double C4105 = (-(ae * C18761 * C19083) / C18535) / C18516 -
                         (C18761 * C18826) / C18656 -
                         (C18761 * C19084 * ce) / C18656 +
                         C18731 * ((-(C18761 * C18802 * ce) / C18535) / C18516 -
                                   (ae * C18761 * C18743) / C18656 -
                                   (C18731 * C18761 * C18831) / C18656);
    const double C4106 =
        (-((C18796 + C18802 * C18888) * ce) / C18535) / C18516 -
        (ae * (C18743 * C18888 + C18737)) / C18656 +
        C18731 * ((-(C18831 * C18888) / C18535) / C18516 - C18826 / C18656);
    const double C4107 =
        (-(C18831 * C18888) / C18535) / C18516 - C18826 / C18656 -
        (ae * (C19094 * C18888 + C19083)) / C18656 -
        ((C19084 + C19097 * C18888) * ce) / C18656 +
        C18731 *
            ((-((C18802 + C18810 * C18888) * ce) / C18535) / C18516 -
             (ae * (C18751 * C18888 + C18743)) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C6780 =
        (-2 * C18761 * C18826) / C18656 +
        C18761 * ((-(C18831 * C18888) / C18535) / C18516 - C18826 / C18656);
    const double C984 =
        (-(C18884 * C18663) / C18535) / C18516 - C18881 / C18656 -
        (C18731 * C18869 * ce) / C18656 +
        C18731 * (C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656) -
                  (C18869 * ce) / C18656);
    const double C1943 =
        C18731 * ((-2 * C18655 * C18884) / C18656 +
                  C18655 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656)) -
        ((2 * C18859 + C18655 * C18869) * ce) / C18656;
    const double C3005 =
        C18761 * (C18731 * ((-(std::pow(C18653, 6) * bs[6] * C18878 * C18663) /
                             C18535) /
                                C18516 -
                            C18884 / C18656) -
                  (C18869 * ce) / C18656) -
        (ae * (C18731 * C18755 + C18709 * ce)) / C18656;
    const double C441 = (3 * (C18851 + C18857 * C18663) +
                         C18655 * (2 * C18859 + C18655 * C18869)) /
                        C18516;
    const double C934 = (C18851 + C18857 * C18663 + C18869 * C18821) / C18516;
    const double C1378 =
        (C18851 + C18857 * C18663 + C18761 * (C18761 * C18869 + C18709 * ae) +
         C18761 * C18709 * ae) /
        C18516;
    const double C1879 = (C18731 * (2 * C18859 + C18655 * C18869)) / C18516;
    const double C2421 = (C18761 * (2 * C18859 + C18655 * C18869) +
                          (2 * C18678 + C18655 * C18709) * ae) /
                         C18516;
    const double C2949 =
        (C18761 * C18731 * C18869 + C18731 * C18709 * ae) / C18516;
    const double C3750 = (3 * (C18851 + C18857 * C18821) +
                          C18731 * (2 * C19122 + C18731 * C19126)) /
                         C18516;
    const double C4189 =
        (C18851 + C18857 * C18821 + C18761 * (C18761 * C19126 + C19096 * ae) +
         C18761 * C19096 * ae) /
        C18516;
    const double C5663 = (C18761 * (2 * C19122 + C18731 * C19126) +
                          (2 * C19081 + C18731 * C19096) * ae) /
                         C18516;
    const double C7331 =
        (C18731 * C18859 + C18761 * (C18761 * C19290 + C19166 * ae) +
         C18761 * C19166 * ae) /
        C18516;
    const double C19304 = C19302 + C18711;
    const double C19271 = C18761 * C19267;
    const double C19325 = C19323 + C19098;
    const double C19180 = C18655 * C18898;
    const double C19257 = C18761 * C18898;
    const double C19318 = C18731 * C18898;
    const double C566 =
        3 * ((-(C18898 * C18663) / C18535) / C18516 - C18893 / C18656) +
        C18655 *
            ((-2 * C18655 * C18898) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C1023 =
        C18731 * ((-(C18898 * C18663) / C18535) / C18516 - C18893 / C18656);
    const double C1027 = (-(C18655 * C18898 * C18821) / C18535) / C18516 -
                         (C18655 * C18893) / C18656;
    const double C1028 =
        (-(C18898 * C18663) / C18535) / C18516 - C18893 / C18656 +
        ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) * C18664 *
            C18663) /
          C18535) /
             C18516 -
         C18898 / C18656) *
            C18821;
    const double C1470 =
        (-(ae * (C18761 * C18775 + C18678 * ce)) / C18535) / C18516 -
        (C18655 * C18893) / C18656 -
        ((C18761 * C18859 + C18678 * ae) * ce) / C18656 +
        C18761 * ((-(C18859 * ce) / C18535) / C18516 - (ae * C18775) / C18656 -
                  (C18761 * C18655 * C18898) / C18656);
    const double C1471 =
        (-((C18851 + C18857 * C18663) * ce) / C18535) / C18516 -
        (ae * (C18773 * C18663 + C18767)) / C18656 +
        C18761 * ((-(C18898 * C18663) / C18535) / C18516 - C18893 / C18656);
    const double C1472 =
        (-(C18898 * C18663) / C18535) / C18516 - C18893 / C18656 -
        (ae * (C18761 * C18785 + C18709 * ce)) / C18656 -
        ((C18761 * C18869 + C18709 * ae) * ce) / C18656 +
        C18761 *
            ((-(C18869 * ce) / C18535) / C18516 - (ae * C18785) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C2008 =
        C18731 *
        ((-2 * C18655 * C18898) / C18656 +
         C18655 * ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                      C18664 * C18663) /
                    C18535) /
                       C18516 -
                   C18898 / C18656));
    const double C2546 =
        (((-2 * C18775) / C18535 - (C18655 * C18785) / C18535) * ae) / C18516 -
        ((2 * C18859 + C18655 * C18869) * ce) / C18656 +
        C18761 *
            ((-2 * C18655 * C18898) / C18656 +
             C18655 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18663) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C3057 = (-(C18731 * C18859 * ce) / C18535) / C18516 -
                         (ae * C18731 * C18775) / C18656 -
                         (C18761 * C18731 * C18655 * C18898) / C18656;
    const double C3058 =
        (-(C18731 * C18869 * ce) / C18535) / C18516 -
        (ae * C18731 * C18785) / C18656 +
        C18761 * C18731 *
            ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                C18664 * C18663) /
              C18535) /
                 C18516 -
             C18898 / C18656);
    const double C3866 =
        (-2 * C18731 * C18893) / C18656 +
        C18731 * ((-(C18898 * C18821) / C18535) / C18516 - C18893 / C18656);
    const double C3867 =
        3 * ((-(C18898 * C18821) / C18535) / C18516 - C18893 / C18656) +
        C18731 *
            ((-2 * C18731 * C18898) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C4272 =
        (-(ae * (C18761 * C19110 + C19081 * ce)) / C18535) / C18516 -
        (C18731 * C18893) / C18656 -
        ((C18761 * C19122 + C19081 * ae) * ce) / C18656 +
        C18761 * ((-(C19122 * ce) / C18535) / C18516 - (ae * C19110) / C18656 -
                  (C18761 * C18731 * C18898) / C18656);
    const double C4273 =
        (-((C18851 + C18857 * C18821) * ce) / C18535) / C18516 -
        (ae * (C18773 * C18821 + C18767)) / C18656 +
        C18761 * ((-(C18898 * C18821) / C18535) / C18516 - C18893 / C18656);
    const double C4274 =
        (-(C18898 * C18821) / C18535) / C18516 - C18893 / C18656 -
        (ae * (C18761 * C19114 + C19096 * ce)) / C18656 -
        ((C18761 * C19126 + C19096 * ae) * ce) / C18656 +
        C18761 *
            ((-(C19126 * ce) / C18535) / C18516 - (ae * C19114) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C5788 =
        (((-2 * C19110) / C18535 - (C18731 * C19114) / C18535) * ae) / C18516 -
        ((2 * C19122 + C18731 * C19126) * ce) / C18656 +
        C18761 *
            ((-2 * C18731 * C18898) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18898 / C18656));
    const double C6967 =
        2 * ((-(C18851 * ce) / C18535) / C18516 - (ae * C18767) / C18656 -
             (C18761 * C18893) / C18656) -
        (ae * (C18761 * C19253 + C18767 + C19251 * ce)) / C18656 -
        ((C18851 + C18761 * C19254 + C19251 * ae) * ce) / C18656 +
        C18761 * ((-(ae * C19253) / C18535) / C18516 - C18893 / C18656 -
                  (C19254 * ce) / C18656 +
                  C18761 * ((-C18861 / C18535) / C18516 - C18780 -
                            (C18761 * C18898) / C18656));
    const double C18712 = C18705 / C18516;
    const double C6672 = C19577 * C6664;
    const double C18285 = C8536 * C4146;
    const double C8327 = C19645 * C4147;
    const double C16495 = C8536 * C4147;
    const double C19099 = C19092 / C18516;
    const double C3825 = C19656 * C3817;
    const double C19269 = C19262 / C18516;
    const double C18756 = -C18754;
    const double C19064 = -C19062;
    const double C1701 = C1694 + C1695;
    const double C2243 = C2236 + C2237;
    const double C6733 = C6724 + C6725;
    const double C8201 = C8194 + C8195;
    const double C18815 = -C18813;
    const double C19076 = -C19074;
    const double C8203 = C8198 + C8199;
    const double C6734 = C6726 + C6727;
    const double C18786 = -C18784;
    const double C19217 = -C19215;
    const double C393 = C388 + C389;
    const double C1827 = C1823 + C1824;
    const double C6846 = C6841 + C6842;
    const double C2368 = C2361 + C2362;
    const double C8328 = C8324 + C8325;
    const double C19115 = -C19113;
    const double C19200 = -C19199;
    const double C1826 = C1820 + C1821;
    const double C2369 = C2366 + C2367;
    const double C1891 = C1884 + C1885;
    const double C3769 = C3760 + C3761;
    const double C2433 = C2426 + C2427;
    const double C5676 = C5670 + C5671;
    const double C18870 = -C18868;
    const double C19236 = -C19234;
    const double C3770 = C3762 + C3763;
    const double C5674 = C5666 + C5667;
    const double C520 = C515 + C516;
    const double C3827 = C3822 + C3823;
    const double C1955 = C1948 + C1949;
    const double C2493 = C2488 + C2489;
    const double C5737 = C5733 + C5734;
    const double C19127 = -C19125;
    const double C19246 = -C19244;
    const double C1956 = C1953 + C1954;
    const double C2494 = C2491 + C2492;
    const double C3466 = C3101 * C3447;
    const double C3464 = C3101 * C3449;
    const double C3462 = C3101 * C641;
    const double C3460 = C3101 * C629;
    const double C3458 = C3101 * C634;
    const double C3456 = C3101 * C628;
    const double C3525 = C3101 * C694;
    const double C3523 = C3101 * C693;
    const double C3580 = C3101 * C3569;
    const double C3578 = C3101 * C744;
    const double C3575 = C3101 * C743;
    const double C4338 = C3101 * C630;
    const double C4334 = C3101 * C633;
    const double C4332 = C3101 * C627;
    const double C4404 = C3101 * C695;
    const double C4402 = C3101 * C692;
    const double C4464 = C3101 * C745;
    const double C4461 = C3101 * C742;
    const double C5326 = C3101 * C2611;
    const double C5324 = C3101 * C2617;
    const double C5322 = C3101 * C3923;
    const double C5320 = C3101 * C3926;
    const double C5388 = C3101 * C2673;
    const double C5454 = C3101 * C4018;
    const double C5449 = C3101 * C2729;
    const double C6550 = C3101 * C6531;
    const double C6548 = C3101 * C6533;
    const double C6546 = C3101 * C1085;
    const double C6544 = C3101 * C1073;
    const double C6542 = C3101 * C1078;
    const double C6540 = C3101 * C1072;
    const double C6614 = C3101 * C6603;
    const double C6612 = C3101 * C1135;
    const double C6609 = C3101 * C1134;
    const double C6669 = C3101 * C1188;
    const double C6667 = C3101 * C1187;
    const double C7498 = C3101 * C1074;
    const double C7494 = C3101 * C1077;
    const double C7492 = C3101 * C1071;
    const double C7565 = C3101 * C1133;
    const double C7562 = C3101 * C1136;
    const double C7626 = C3101 * C1189;
    const double C7624 = C3101 * C1186;
    const double C8016 = C3101 * C3929;
    const double C8014 = C3101 * C3924;
    const double C8137 = C3101 * C4017;
    const double C16718 = C3101 * C2612;
    const double C16792 = C3101 * C2674;
    const double C16862 = C3101 * C2730;
    const double C9058 = C8537 * C629;
    const double C9054 = C8537 * C641;
    const double C9048 = C8537 * C634;
    const double C9044 = C8537 * C628;
    const double C9122 = C8537 * C694;
    const double C9120 = C8537 * C693;
    const double C9186 = C8537 * C744;
    const double C9180 = C8537 * C743;
    const double C10018 = C8537 * C633;
    const double C10014 = C8537 * C627;
    const double C10090 = C8537 * C692;
    const double C10162 = C8537 * C742;
    const double C11306 = C8537 * C2611;
    const double C11302 = C8537 * C2617;
    const double C11378 = C8537 * C2673;
    const double C11452 = C8537 * C2729;
    const double C12874 = C8537 * C1073;
    const double C12870 = C8537 * C1085;
    const double C12864 = C8537 * C1078;
    const double C12860 = C8537 * C1072;
    const double C12940 = C8537 * C1135;
    const double C12934 = C8537 * C1134;
    const double C13000 = C8537 * C1188;
    const double C12998 = C8537 * C1187;
    const double C14020 = C8537 * C1077;
    const double C14016 = C8537 * C1071;
    const double C14094 = C8537 * C1133;
    const double C14164 = C8537 * C1186;
    const double C9056 = C8538 * C630;
    const double C9050 = C8538 * C633;
    const double C9046 = C8538 * C627;
    const double C9124 = C8538 * C695;
    const double C9118 = C8538 * C692;
    const double C9184 = C8538 * C745;
    const double C9182 = C8538 * C742;
    const double C10012 = C8538 * C626;
    const double C10092 = C8538 * C691;
    const double C10164 = C8538 * C741;
    const double C11304 = C8538 * C2612;
    const double C11380 = C8538 * C2674;
    const double C11450 = C8538 * C2730;
    const double C12872 = C8538 * C1074;
    const double C12866 = C8538 * C1077;
    const double C12862 = C8538 * C1071;
    const double C12938 = C8538 * C1136;
    const double C12936 = C8538 * C1133;
    const double C13002 = C8538 * C1189;
    const double C12996 = C8538 * C1186;
    const double C14014 = C8538 * C1070;
    const double C14092 = C8538 * C1132;
    const double C14166 = C8538 * C1185;
    const double C8704 = C8689 * C103;
    const double C8700 = C8689 * C95;
    const double C8698 = C8689 * C102;
    const double C8694 = C8689 * C94;
    const double C8772 = C8689 * C154;
    const double C8766 = C8689 * C153;
    const double C8834 = C8689 * C203;
    const double C8828 = C8689 * C202;
    const double C10238 = C8689 * C633;
    const double C10234 = C8689 * C627;
    const double C10314 = C8689 * C692;
    const double C10386 = C8689 * C742;
    const double C10866 = C8689 * C1077;
    const double C10862 = C8689 * C1071;
    const double C10940 = C8689 * C1133;
    const double C11014 = C8689 * C1186;
    const double C16366 = C8689 * C1073;
    const double C16362 = C8689 * C1085;
    const double C16356 = C8689 * C1078;
    const double C16352 = C8689 * C1072;
    const double C16432 = C8689 * C1135;
    const double C16426 = C8689 * C1134;
    const double C16492 = C8689 * C1188;
    const double C16490 = C8689 * C1187;
    const double C18136 = C8689 * C2617;
    const double C18132 = C8689 * C2611;
    const double C18212 = C8689 * C2673;
    const double C18282 = C8689 * C2729;
    const double C8702 = C8690 * C626;
    const double C8696 = C8690 * C633;
    const double C8692 = C8690 * C627;
    const double C8770 = C8690 * C691;
    const double C8768 = C8690 * C692;
    const double C8832 = C8690 * C741;
    const double C8830 = C8690 * C742;
    const double C10236 = C8690 * C630;
    const double C10312 = C8690 * C695;
    const double C10384 = C8690 * C745;
    const double C10864 = C8690 * C2612;
    const double C10942 = C8690 * C2674;
    const double C11012 = C8690 * C2730;
    const double C16364 = C8690 * C3924;
    const double C16360 = C8690 * C3929;
    const double C16358 = C8690 * C2617;
    const double C16354 = C8690 * C2611;
    const double C16428 = C8690 * C2673;
    const double C16494 = C8690 * C4017;
    const double C16488 = C8690 * C2729;
    const double C18138 = C8690 * C3926;
    const double C18134 = C8690 * C3923;
    const double C18284 = C8690 * C4018;
    const double C322 = C273 * C151;
    const double C382 = C273 * C200;
    const double C1755 = C273 * C1583;
    const double C2358 = C273 * C2177;
    const double C334 = C331 * C19609;
    const double C1756 = C331 * C1525;
    const double C394 = C391 * C19620;
    const double C2359 = C391 * C2069;
    const double C6737 = C6731 * C19588;
    const double C7683 = C6731 * C1523;
    const double C6736 = C6730 * C625;
    const double C6783 = C6730 * C151;
    const double C7682 = C6730 * C1527;
    const double C8259 = C6730 * C1583;
    const double C6795 = C6792 * C19609;
    const double C8260 = C6792 * C1525;
    const double C12224 = C12209 * C103;
    const double C12220 = C12209 * C95;
    const double C12218 = C12209 * C102;
    const double C12214 = C12209 * C94;
    const double C12292 = C12209 * C154;
    const double C12286 = C12209 * C153;
    const double C12354 = C12209 * C203;
    const double C12348 = C12209 * C202;
    const double C13796 = C12209 * C633;
    const double C13792 = C12209 * C627;
    const double C13872 = C12209 * C692;
    const double C13944 = C12209 * C742;
    const double C14448 = C12209 * C1077;
    const double C14444 = C12209 * C1071;
    const double C14522 = C12209 * C1133;
    const double C14596 = C12209 * C1186;
    const double C16014 = C12209 * C629;
    const double C16010 = C12209 * C641;
    const double C16004 = C12209 * C634;
    const double C16000 = C12209 * C628;
    const double C16078 = C12209 * C694;
    const double C16076 = C12209 * C693;
    const double C16142 = C12209 * C744;
    const double C16136 = C12209 * C743;
    const double C18360 = C12209 * C2611;
    const double C18356 = C12209 * C2617;
    const double C18432 = C12209 * C2673;
    const double C18506 = C12209 * C2729;
    const double C12222 = C12210 * C1070;
    const double C12216 = C12210 * C1077;
    const double C12212 = C12210 * C1071;
    const double C12290 = C12210 * C1132;
    const double C12288 = C12210 * C1133;
    const double C12352 = C12210 * C1185;
    const double C12350 = C12210 * C1186;
    const double C13794 = C12210 * C2612;
    const double C13870 = C12210 * C2674;
    const double C13942 = C12210 * C2730;
    const double C14446 = C12210 * C1074;
    const double C14524 = C12210 * C1136;
    const double C14594 = C12210 * C1189;
    const double C16012 = C12210 * C3923;
    const double C16008 = C12210 * C3926;
    const double C16006 = C12210 * C2617;
    const double C16002 = C12210 * C2611;
    const double C16074 = C12210 * C2673;
    const double C16140 = C12210 * C4018;
    const double C16138 = C12210 * C2729;
    const double C18358 = C12210 * C3924;
    const double C18354 = C12210 * C3929;
    const double C18504 = C12210 * C4017;
    const double C509 = C460 * C151;
    const double C568 = C460 * C200;
    const double C1945 = C460 * C1583;
    const double C2548 = C460 * C2177;
    const double C521 = C518 * C19609;
    const double C1946 = C518 * C1525;
    const double C580 = C577 * C19620;
    const double C2549 = C577 * C2069;
    const double C3773 = C3767 * C19588;
    const double C4677 = C3767 * C1523;
    const double C3772 = C3766 * C625;
    const double C3869 = C3766 * C200;
    const double C4676 = C3766 * C1527;
    const double C5790 = C3766 * C2177;
    const double C3881 = C3878 * C19620;
    const double C5791 = C3878 * C2069;
    const double C10013 = C8534 * C635;
    const double C4339 = C19577 * C639;
    const double C9057 = C8534 * C639;
    const double C14015 = C8534 * C1079;
    const double C7499 = C19577 * C1083;
    const double C12873 = C8534 * C1083;
    const double C11305 = C8534 * C2615;
    const double C16719 = C19577 * C2615;
    const double C18135 = C8536 * C4061;
    const double C8197 = C19645 * C4062;
    const double C16365 = C8536 * C4062;
    const double C4743 = C4741 + C4742;
    const double C7805 = C7803 + C7804;
    const double C11159 = C11157 + C11158;
    const double C13724 = C13721 + C13722;
    const double C4686 = C4682 + C4683;
    const double C7692 = C7688 + C7689;
    const double C11088 = C11084 + C11085;
    const double C13580 = C13576 + C13577;
    const double C271 = C249 * C105;
    const double C458 = C436 * C105;
    const double C1698 = C249 * C632;
    const double C1888 = C436 * C632;
    const double C8706 = C8690 * C632;
    const double C10016 = C8538 * C632;
    const double C4340 = C3101 * C642;
    const double C4684 = C436 * C642;
    const double C9052 = C8538 * C642;
    const double C10240 = C8690 * C642;
    const double C2240 = C249 * C1076;
    const double C2430 = C436 * C1076;
    const double C12226 = C12210 * C1076;
    const double C14018 = C8538 * C1076;
    const double C7500 = C3101 * C1086;
    const double C7690 = C249 * C1086;
    const double C12868 = C8538 * C1086;
    const double C14450 = C12210 * C1086;
    const double C10868 = C8690 * C2618;
    const double C11086 = C436 * C2618;
    const double C11300 = C8538 * C2618;
    const double C13578 = C249 * C2618;
    const double C13798 = C12210 * C2618;
    const double C16720 = C3101 * C2618;
    const double C3527 = C3101 * C3518;
    const double C3824 = C436 * C3518;
    const double C5390 = C3101 * C3973;
    const double C5735 = C436 * C3973;
    const double C16080 = C12210 * C3973;
    const double C18210 = C8690 * C3973;
    const double C8081 = C3101 * C3974;
    const double C8267 = C249 * C3974;
    const double C16430 = C8690 * C3974;
    const double C18434 = C12210 * C3974;
    const double C6671 = C3101 * C6662;
    const double C6843 = C249 * C6662;
    const double C4335 = C19577 * C645;
    const double C9051 = C8534 * C645;
    const double C10019 = C8533 * C645;
    const double C3463 = C19577 * C647;
    const double C9055 = C8533 * C647;
    const double C7495 = C19577 * C1089;
    const double C12867 = C8534 * C1089;
    const double C14021 = C8533 * C1089;
    const double C6547 = C19577 * C1091;
    const double C12871 = C8533 * C1091;
    const double C5325 = C19577 * C2620;
    const double C11303 = C8533 * C2620;
    const double C329 = C19645 * C319;
    const double C1759 = C19645 * C843;
    const double C8769 = C8536 * C843;
    const double C10315 = C8535 * C843;
    const double C2299 = C19645 * C1286;
    const double C10941 = C8535 * C1286;
    const double C6788 = C19645 * C1288;
    const double C16433 = C8535 * C1288;
    const double C8263 = C19645 * C2841;
    const double C16429 = C8536 * C2841;
    const double C18213 = C8535 * C2841;
    const double C575 = C19656 * C565;
    const double C2014 = C19656 * C1024;
    const double C13945 = C11903 * C1024;
    const double C3874 = C19656 * C1026;
    const double C16143 = C11903 * C1026;
    const double C2552 = C19656 * C1469;
    const double C12351 = C11904 * C1469;
    const double C14597 = C11903 * C1469;
    const double C5794 = C19656 * C3056;
    const double C16139 = C11904 * C3056;
    const double C18507 = C11903 * C3056;
    const double C335 = C332 * C19609;
    const double C1761 = C332 * C1525;
    const double C522 = C519 * C19609;
    const double C1951 = C519 * C1525;
    const double C395 = C392 * C19620;
    const double C2364 = C392 * C2069;
    const double C581 = C578 * C19620;
    const double C2554 = C578 * C2069;
    const double C325 = C275 * C151;
    const double C385 = C275 * C200;
    const double C1760 = C275 * C1583;
    const double C2363 = C275 * C2177;
    const double C330 = C277 * C151;
    const double C390 = C277 * C200;
    const double C1762 = C1702 * C1584;
    const double C1822 = C1702 * C200;
    const double C1757 = C1700 * C1584;
    const double C1825 = C1700 * C200;
    const double C2300 = C2244 * C151;
    const double C2365 = C2244 * C2178;
    const double C12159 = C2244 * C200;
    const double C14238 = C2244 * C1528;
    const double C2297 = C2242 * C151;
    const double C2360 = C2242 * C2178;
    const double C7684 = C2242 * C1528;
    const double C12156 = C2242 * C200;
    const double C13058 = C2242 * C625;
    const double C13648 = C2242 * C1583;
    const double C14236 = C2242 * C1527;
    const double C14374 = C2242 * C2177;
    const double C6738 = C6732 * C625;
    const double C6786 = C6732 * C151;
    const double C7686 = C6732 * C1527;
    const double C8264 = C6732 * C1583;
    const double C8204 = C8200 * C625;
    const double C8261 = C8200 * C1584;
    const double C6741 = C6735 * C625;
    const double C6791 = C6735 * C151;
    const double C512 = C462 * C151;
    const double C571 = C462 * C200;
    const double C1950 = C462 * C1583;
    const double C2553 = C462 * C2177;
    const double C517 = C464 * C151;
    const double C576 = C464 * C200;
    const double C1952 = C1892 * C1584;
    const double C2012 = C1892 * C200;
    const double C8943 = C1892 * C151;
    const double C10458 = C1892 * C1528;
    const double C1947 = C1890 * C1584;
    const double C2015 = C1890 * C200;
    const double C4678 = C1890 * C1528;
    const double C8940 = C1890 * C151;
    const double C9392 = C1890 * C625;
    const double C10456 = C1890 * C1527;
    const double C10526 = C1890 * C1583;
    const double C11227 = C1890 * C2177;
    const double C3774 = C3768 * C625;
    const double C3872 = C3768 * C200;
    const double C4680 = C3768 * C1527;
    const double C5795 = C3768 * C2177;
    const double C2490 = C2434 * C151;
    const double C2555 = C2434 * C2178;
    const double C2487 = C2432 * C151;
    const double C2550 = C2432 * C2178;
    const double C5681 = C5677 * C625;
    const double C5792 = C5677 * C2178;
    const double C3777 = C3771 * C625;
    const double C3877 = C3771 * C200;
    const double C5679 = C5675 * C625;
    const double C5797 = C5675 * C2178;
    const double C18725 = C18683 + C18722;
    const double C7020 = (C18731 * C18689 + C19281 * C18888) / C18516;
    const double C18724 = C18721 + C18682;
    const double C7021 = -(C19286 * C18888 + C18731 * C18688) / C18535;
    const double C18723 = C18720 / C18656;
    const double C2621 = (-(C18761 * C18731 * C18683 * ce) / C18535) / C18516 -
                         (ae * C18761 * C18731 * C18682) / C18656 -
                         (C18655 * C18761 * C19008) / C18656;
    const double C2622 =
        (-(ae * C18761 * C18731 * C18718) / C18535) / C18516 -
        (C18761 * C19008) / C18656 - (C18761 * C18731 * C18719 * ce) / C18656 +
        C18655 * ((-(C18761 * C18731 * C18710 * ce) / C18535) / C18516 -
                  (ae * C18761 * C18731 * C18707) / C18656 -
                  (C18655 * C18761 * C18731 *
                   (C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656);
    const double C3454 =
        3 * ((-(C18717 * C18821) / C18535) / C18516 - C18687 / C18656) +
        C18731 *
            ((-2 * C19008) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C3933 =
        (-(C19008 * C18888) / C18535) / C18516 - (C18731 * C18687) / C18656;
    const double C4328 =
        (((-2 * C19071) / C18535 - (C18731 * C19075) / C18535) * ae) / C18516 -
        ((2 * C19058 + C18731 * C19063) * ce) / C18656 +
        C18655 *
            ((-2 * C19008) / C18656 +
             C18731 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C5318 =
        C18761 *
        ((-2 * C19008) / C18656 +
         C18731 * ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                      C18664 * C18821) /
                    C18535) /
                       C18516 -
                   C18717 / C18656));
    const double C7022 =
        (-((C19058 + C18731 * C18710 * C18888) * ce) / C18535) / C18516 -
        (ae * (C18731 * C18707 * C18888 + C19071)) / C18656 +
        C18655 * ((-(C18731 *
                     (C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C19008 / C18656);
    const double C8012 =
        (-2 * C18761 * C19008) / C18656 +
        C18761 * ((-(C18731 *
                     (C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C19008 / C18656);
    const double C6538 =
        3 * ((-(C18717 * C18888) / C18535) / C18516 - C18687 / C18656) +
        C18761 *
            ((-2 * C19018) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C7488 =
        (((-2 * C19231) / C18535 - (C18761 * C19235) / C18535) * ae) / C18516 -
        ((2 * C19212 + C18761 * C19216) * ce) / C18656 +
        C18655 *
            ((-2 * C19018) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18717 / C18656));
    const double C10017 = C8534 * C644;
    const double C4341 = C19577 * C648;
    const double C9053 = C8534 * C648;
    const double C14019 = C8534 * C1088;
    const double C7501 = C19577 * C1092;
    const double C12869 = C8534 * C1092;
    const double C3465 = C19577 * C3453;
    const double C5321 = C19577 * C3932;
    const double C6549 = C19577 * C6537;
    const double C19103 = C19100 + C18743;
    const double C5213 =
        C18761 *
            ((-(C18731 * C19178 * ce) / C18535) / C18516 - C19177 / C18656 +
             C18731 *
                 ((-(C18731 * C18655 * std::pow(C18653, 6) * bs[6] * C18878) /
                   C18535) /
                      C18516 -
                  (C19178 * ce) / C18656)) -
        (ae * (C18731 * C19170 + C18745 + C19166 * ce)) / C18656;
    const double C7383 =
        (-(C18731 * C19177) / C18535) / C18516 - (C18859 * ce) / C18656 -
        (ae * C18761 * C19170) / C18656 +
        C18761 *
            (C18761 *
                 ((-(C18731 * C18655 * std::pow(C18653, 6) * bs[6] * C18878) /
                   C18535) /
                      C18516 -
                  (C19178 * ce) / C18656) -
             (ae * C19170) / C18656);
    const double C4399 =
        (-2 * (C18731 * C18745 + C18678 * ce)) / C18535 -
        (C18731 * (C18731 * C19170 + C18745 + C19166 * ce)) / C18535 -
        ((C18678 + C18701 * C18821) * ce) / C18535;
    const double C4903 =
        -(C18761 * (C18731 * C19170 + C18745 + C19166 * ce)) / C18535;
    const double C7073 =
        -(C19170 * C18888 + C18731 * C18745 + C18678 * ce) / C18535;
    const double C7621 =
        (-2 * (C18761 * C18775 + C18678 * ce)) / C18535 -
        (C18761 * (C18761 * C19303 + C18775 + C19301 * ce)) / C18535 -
        ((C18678 + C18701 * C18888) * ce) / C18535;
    const double C19273 = C19270 + C18773;
    const double C8134 =
        (-2 * (C18761 * C19110 + C19081 * ce)) / C18535 -
        (C18761 * (C18761 * C19324 + C19110 + C19320 * ce)) / C18535 -
        ((C19081 + C19089 * C18888) * ce) / C18535;
    const double C19104 = C18802 + C19101;
    const double C4519 = (2 * (C18731 * C18804 + C18678 * ae) +
                          C18731 * (C18804 + C18731 * C19171 + C19166 * ae) +
                          (C18678 + C18701 * C18821) * ae) /
                         C18516;
    const double C5007 =
        (C18761 * (C18804 + C18731 * C19171 + C19166 * ae)) / C18516;
    const double C7177 =
        (C18731 * C18804 + C18678 * ae + C19171 * C18888) / C18516;
    const double C19093 = C19087 / C18656;
    const double C4571 =
        2 * ((-(C18804 * ce) / C18535) / C18516 - (ae * C18745) / C18656 -
             (C18731 * C19164) / C18656) -
        (ae * (C18731 * C19170 + C18745 + C19166 * ce)) / C18656 -
        ((C18804 + C18731 * C19171 + C19166 * ae) * ce) / C18656 +
        C18731 *
            ((-(ae * C19170) / C18535) / C18516 - C19164 / C18656 -
             (C19171 * ce) / C18656 +
             C18731 *
                 ((-(C19167 * ce) / C18535) / C18516 - (ae * C19165) / C18656 -
                  (C18731 * C18655 *
                   (C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C5059 =
        (-(ae * C18761 * C19170) / C18535) / C18516 -
        (C18761 * C19164) / C18656 - (C18761 * C19171 * ce) / C18656 +
        C18731 * ((-(C18761 * C19167 * ce) / C18535) / C18516 -
                  (ae * C18761 * C19165) / C18656 -
                  (C18731 * C18761 * C18655 *
                   (C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656);
    const double C7229 =
        (-((C18804 + C19167 * C18888) * ce) / C18535) / C18516 -
        (ae * (C19165 * C18888 + C18745)) / C18656 +
        C18731 * ((-(C18655 *
                     (C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C19164 / C18656);
    const double C7745 =
        (-2 * C18761 * C19164) / C18656 +
        C18761 * ((-(C18655 *
                     (C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C19164 / C18656);
    const double C6781 =
        3 * ((-(C18831 * C18888) / C18535) / C18516 - C18826 / C18656) +
        C18761 *
            ((-2 * C19196) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C8257 =
        (((-2 * C19241) / C18535 - (C18761 * C19245) / C18535) * ae) / C18516 -
        ((2 * C19226 + C18761 * C19228) * ce) / C18656 +
        C18731 *
            ((-2 * C19196) / C18656 +
             C18761 *
                 ((-((C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18888) /
                   C18535) /
                      C18516 -
                  C18831 / C18656));
    const double C10313 = C8536 * C844;
    const double C1764 = C19645 * C845;
    const double C8771 = C8536 * C845;
    const double C2302 = C19645 * C1285;
    const double C7748 = C19645 * C1289;
    const double C10943 = C8536 * C2842;
    const double C13652 = C19645 * C2842;
    const double C18211 = C8536 * C4105;
    const double C8268 = C19645 * C4106;
    const double C16431 = C8536 * C4106;
    const double C6790 = C19645 * C6780;
    const double C7855 = (2 * (C18761 * C18859 + C18678 * ae) +
                          C18761 * (C18859 + C18761 * C19304 + C19301 * ae) +
                          (C18678 + C18701 * C18888) * ae) /
                         C18516;
    const double C19274 = C18857 + C19271;
    const double C8379 = (2 * (C18761 * C19122 + C19081 * ae) +
                          C18761 * (C19122 + C18761 * C19325 + C19320 * ae) +
                          (C19081 + C19089 * C18888) * ae) /
                         C18516;
    const double C4793 =
        (-2 * C18731 * C19180) / C18656 +
        C18731 * ((-(C18655 *
                     (C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C19180 / C18656);
    const double C5264 =
        (-((C18859 + C19178 * C18821) * ce) / C18535) / C18516 -
        (ae * (C19174 * C18821 + C18775)) / C18656 +
        C18761 * ((-(C18655 *
                     (C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                     C18664 * C18821) /
                   C18535) /
                      C18516 -
                  C19180 / C18656);
    const double C7434 =
        (-(ae * (C18761 * C19289 + C19166 * ce)) / C18535) / C18516 -
        (C18731 * C19180) / C18656 -
        ((C18761 * C19290 + C19166 * ae) * ce) / C18656 +
        C18761 * ((-(C19290 * ce) / C18535) / C18516 - (ae * C19289) / C18656 -
                  (C18761 * C18731 * C18655 *
                   (C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656);
    const double C7958 =
        2 * ((-(C18859 * ce) / C18535) / C18516 - (ae * C18775) / C18656 -
             (C18761 * C19180) / C18656) -
        (ae * (C18761 * C19303 + C18775 + C19301 * ce)) / C18656 -
        ((C18859 + C18761 * C19304 + C19301 * ae) * ce) / C18656 +
        C18761 *
            ((-(ae * C19303) / C18535) / C18516 - C19180 / C18656 -
             (C19304 * ce) / C18656 +
             C18761 *
                 ((-(C19178 * ce) / C18535) / C18516 - (ae * C19174) / C18656 -
                  (C18761 * C18655 *
                   (C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C19263 = C19257 / C18656;
    const double C8482 =
        2 * ((-(C19122 * ce) / C18535) / C18516 - (ae * C19110) / C18656 -
             (C18761 * C19318) / C18656) -
        (ae * (C18761 * C19324 + C19110 + C19320 * ce)) / C18656 -
        ((C19122 + C18761 * C19325 + C19320 * ae) * ce) / C18656 +
        C18761 *
            ((-(ae * C19324) / C18535) / C18516 - C19318 / C18656 -
             (C19325 * ce) / C18656 +
             C18761 *
                 ((-(C19321 * ce) / C18535) / C18516 - (ae * C19319) / C18656 -
                  (C18761 * C18731 *
                   (C18694 * C18695 + C18888 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C2011 = C19656 * C1023;
    const double C4797 = C19656 * C1027;
    const double C14595 = C11904 * C1470;
    const double C2557 = C19656 * C1471;
    const double C12353 = C11904 * C1471;
    const double C11231 = C19656 * C3057;
    const double C13943 = C11904 * C3057;
    const double C3876 = C19656 * C3866;
    const double C18505 = C11904 * C4272;
    const double C5799 = C19656 * C4273;
    const double C16141 = C11904 * C4273;
    const double C18716 = C18712 - C18697;
    const double C8329 = C8326 + C8327;
    const double C19102 = C19099 - C18750;
    const double C19272 = C19269 - C18780;
    const double C18757 = C18756 / C18516;
    const double C19065 = C19064 / C18516;
    const double C7685 = C2243 * C1524;
    const double C13059 = C2243 * C19588;
    const double C14237 = C2243 * C1523;
    const double C6739 = C6733 * C19588;
    const double C7687 = C6733 * C1523;
    const double C8205 = C8201 * C19588;
    const double C18816 = C18815 / C18516;
    const double C19077 = C19076 / C18516;
    const double C8207 = C8203 * C19588;
    const double C6740 = C6734 * C19588;
    const double C18787 = C18786 / C18516;
    const double C19218 = C19217 / C18516;
    const double C396 = C393 * C19620;
    const double C1829 = C1827 * C19620;
    const double C2370 = C2368 * C2070;
    const double C12157 = C2368 * C19620;
    const double C14375 = C2368 * C2069;
    const double C19116 = C19115 / C18516;
    const double C19201 = C19200 / C18516;
    const double C1828 = C1826 * C19620;
    const double C2371 = C2369 * C2070;
    const double C12158 = C2369 * C19620;
    const double C4679 = C1891 * C1524;
    const double C9393 = C1891 * C19588;
    const double C10457 = C1891 * C1523;
    const double C3775 = C3769 * C19588;
    const double C4681 = C3769 * C1523;
    const double C5680 = C5676 * C19588;
    const double C18871 = C18870 / C18516;
    const double C19237 = C19236 / C18516;
    const double C3776 = C3770 * C19588;
    const double C5678 = C5674 * C19588;
    const double C523 = C520 * C19609;
    const double C1957 = C1955 * C1526;
    const double C8941 = C1955 * C19609;
    const double C10527 = C1955 * C1525;
    const double C2495 = C2493 * C19609;
    const double C19128 = C19127 / C18516;
    const double C19247 = C19246 / C18516;
    const double C1958 = C1956 * C1526;
    const double C8942 = C1956 * C19609;
    const double C2496 = C2494 * C19609;
    const double C3473 = C3466 + C3467;
    const double C3470 = C3460 + C3461;
    const double C3469 = C3458 + C3459;
    const double C3468 = C3456 + C3457;
    const double C3530 = C3525 + C3526;
    const double C3529 = C3523 + C3524;
    const double C3585 = C3580 + C3581;
    const double C3584 = C3578 + C3579;
    const double C3583 = C3575 + C3576;
    const double C4342 = C4332 + C4333;
    const double C4406 = C4402 + C4403;
    const double C4466 = C4461 + C4462;
    const double C5331 = C5326 + C5327;
    const double C5329 = C5322 + C5323;
    const double C5392 = C5388 + C5389;
    const double C5457 = C5454 + C5455;
    const double C5456 = C5449 + C5450;
    const double C6557 = C6550 + C6551;
    const double C6554 = C6544 + C6545;
    const double C6553 = C6542 + C6543;
    const double C6552 = C6540 + C6541;
    const double C6619 = C6614 + C6615;
    const double C6618 = C6612 + C6613;
    const double C6617 = C6609 + C6610;
    const double C6674 = C6669 + C6670;
    const double C6673 = C6667 + C6668;
    const double C7502 = C7492 + C7493;
    const double C7569 = C7565 + C7566;
    const double C7628 = C7624 + C7625;
    const double C8018 = C8014 + C8015;
    const double C8139 = C8137 + C8138;
    const double C9067 = C9058 + C9059;
    const double C9062 = C9048 + C9049;
    const double C9060 = C9044 + C9045;
    const double C9128 = C9122 + C9123;
    const double C9127 = C9120 + C9121;
    const double C9191 = C9186 + C9187;
    const double C9188 = C9180 + C9181;
    const double C10021 = C10014 + C10015;
    const double C10094 = C10090 + C10091;
    const double C10166 = C10162 + C10163;
    const double C11311 = C11306 + C11307;
    const double C11382 = C11378 + C11379;
    const double C11455 = C11452 + C11453;
    const double C12883 = C12874 + C12875;
    const double C12878 = C12864 + C12865;
    const double C12876 = C12860 + C12861;
    const double C12945 = C12940 + C12941;
    const double C12942 = C12934 + C12935;
    const double C13006 = C13000 + C13001;
    const double C13005 = C12998 + C12999;
    const double C14023 = C14016 + C14017;
    const double C14097 = C14094 + C14095;
    const double C14168 = C14164 + C14165;
    const double C9061 = C9046 + C9047;
    const double C9126 = C9118 + C9119;
    const double C9189 = C9182 + C9183;
    const double C12877 = C12862 + C12863;
    const double C12943 = C12936 + C12937;
    const double C13004 = C12996 + C12997;
    const double C8714 = C8704 + C8705;
    const double C8712 = C8700 + C8701;
    const double C8711 = C8698 + C8699;
    const double C8709 = C8694 + C8695;
    const double C8777 = C8772 + C8773;
    const double C8774 = C8766 + C8767;
    const double C8839 = C8834 + C8835;
    const double C8836 = C8828 + C8829;
    const double C10244 = C10238 + C10239;
    const double C10242 = C10234 + C10235;
    const double C10389 = C10386 + C10387;
    const double C10872 = C10866 + C10867;
    const double C10870 = C10862 + C10863;
    const double C11017 = C11014 + C11015;
    const double C16375 = C16366 + C16367;
    const double C16373 = C16362 + C16363;
    const double C16370 = C16356 + C16357;
    const double C16368 = C16352 + C16353;
    const double C16434 = C16426 + C16427;
    const double C16498 = C16492 + C16493;
    const double C16497 = C16490 + C16491;
    const double C18142 = C18136 + C18137;
    const double C18140 = C18132 + C18133;
    const double C18286 = C18282 + C18283;
    const double C8713 = C8702 + C8703;
    const double C8710 = C8696 + C8697;
    const double C8708 = C8692 + C8693;
    const double C8838 = C8832 + C8833;
    const double C8837 = C8830 + C8831;
    const double C10243 = C10236 + C10237;
    const double C10388 = C10384 + C10385;
    const double C10871 = C10864 + C10865;
    const double C11016 = C11012 + C11013;
    const double C16372 = C16360 + C16361;
    const double C16371 = C16358 + C16359;
    const double C16369 = C16354 + C16355;
    const double C16499 = C16494 + C16495;
    const double C16496 = C16488 + C16489;
    const double C18143 = C18138 + C18139;
    const double C18287 = C18284 + C18285;
    const double C12234 = C12224 + C12225;
    const double C12232 = C12220 + C12221;
    const double C12231 = C12218 + C12219;
    const double C12229 = C12214 + C12215;
    const double C12297 = C12292 + C12293;
    const double C12294 = C12286 + C12287;
    const double C12359 = C12354 + C12355;
    const double C12356 = C12348 + C12349;
    const double C13802 = C13796 + C13797;
    const double C13800 = C13792 + C13793;
    const double C13875 = C13872 + C13873;
    const double C14454 = C14448 + C14449;
    const double C14452 = C14444 + C14445;
    const double C14526 = C14522 + C14523;
    const double C16023 = C16014 + C16015;
    const double C16021 = C16010 + C16011;
    const double C16018 = C16004 + C16005;
    const double C16016 = C16000 + C16001;
    const double C16084 = C16078 + C16079;
    const double C16083 = C16076 + C16077;
    const double C16144 = C16136 + C16137;
    const double C18365 = C18360 + C18361;
    const double C18363 = C18356 + C18357;
    const double C18436 = C18432 + C18433;
    const double C12233 = C12222 + C12223;
    const double C12230 = C12216 + C12217;
    const double C12228 = C12212 + C12213;
    const double C12296 = C12290 + C12291;
    const double C12295 = C12288 + C12289;
    const double C13801 = C13794 + C13795;
    const double C13874 = C13870 + C13871;
    const double C14453 = C14446 + C14447;
    const double C14527 = C14524 + C14525;
    const double C16022 = C16012 + C16013;
    const double C16020 = C16008 + C16009;
    const double C16019 = C16006 + C16007;
    const double C16017 = C16002 + C16003;
    const double C16082 = C16074 + C16075;
    const double C18364 = C18358 + C18359;
    const double C18362 = C18354 + C18355;
    const double C10020 = C10012 + C10013;
    const double C4344 = C4338 + C4339;
    const double C9066 = C9056 + C9057;
    const double C14022 = C14014 + C14015;
    const double C7504 = C7498 + C7499;
    const double C12882 = C12872 + C12873;
    const double C11310 = C11304 + C11305;
    const double C16722 = C16718 + C16719;
    const double C18141 = C18134 + C18135;
    const double C8202 = C8196 + C8197;
    const double C16374 = C16364 + C16365;
    const double C10529 = C4743 * C1526;
    const double C14377 = C7805 * C2070;
    const double C11160 = C11159 * C19609;
    const double C13725 = C13724 * C19620;
    const double C4688 = C4686 * C1528;
    const double C4795 = C4686 * C200;
    const double C9395 = C4686 * C625;
    const double C10528 = C4686 * C1584;
    const double C7694 = C7692 * C1528;
    const double C7749 = C7692 * C151;
    const double C13061 = C7692 * C625;
    const double C14376 = C7692 * C2178;
    const double C11156 = C11088 * C151;
    const double C11229 = C11088 * C2178;
    const double C11721 = C11088 * C625;
    const double C13650 = C13580 * C1584;
    const double C13723 = C13580 * C200;
    const double C14864 = C13580 * C625;
    const double C278 = C271 + C272;
    const double C465 = C458 + C459;
    const double C3531 = C3527 + C3528;
    const double C3828 = C3824 + C3825;
    const double C6675 = C6671 + C6672;
    const double C4343 = C4334 + C4335;
    const double C9063 = C9050 + C9051;
    const double C10023 = C10018 + C10019;
    const double C3471 = C3462 + C3463;
    const double C9065 = C9054 + C9055;
    const double C7503 = C7494 + C7495;
    const double C12879 = C12866 + C12867;
    const double C14025 = C14020 + C14021;
    const double C6555 = C6546 + C6547;
    const double C12881 = C12870 + C12871;
    const double C5330 = C5324 + C5325;
    const double C11309 = C11302 + C11303;
    const double C333 = C328 + C329;
    const double C1765 = C1758 + C1759;
    const double C8775 = C8768 + C8769;
    const double C10317 = C10314 + C10315;
    const double C2303 = C2298 + C2299;
    const double C10944 = C10940 + C10941;
    const double C6793 = C6787 + C6788;
    const double C16437 = C16432 + C16433;
    const double C8269 = C8262 + C8263;
    const double C16435 = C16428 + C16429;
    const double C18215 = C18212 + C18213;
    const double C579 = C574 + C575;
    const double C2017 = C2013 + C2014;
    const double C13947 = C13944 + C13945;
    const double C3879 = C3873 + C3874;
    const double C16147 = C16142 + C16143;
    const double C2558 = C2551 + C2552;
    const double C12357 = C12350 + C12351;
    const double C14599 = C14596 + C14597;
    const double C5800 = C5793 + C5794;
    const double C16145 = C16138 + C16139;
    const double C18509 = C18506 + C18507;
    const double C337 = C325 + C335;
    const double C397 = C385 + C395;
    const double C524 = C512 + C522;
    const double C583 = C571 + C581;
    const double C18728 = C18725 + C18711;
    const double C18727 = C18724 + C18708;
    const double C11301 = C8534 * C2621;
    const double C16721 = C19577 * C2621;
    const double C8017 = C19577 * C3933;
    const double C10022 = C10016 + C10017;
    const double C4345 = C4340 + C4341;
    const double C9064 = C9052 + C9053;
    const double C14024 = C14018 + C14019;
    const double C7505 = C7500 + C7501;
    const double C12880 = C12868 + C12869;
    const double C3472 = C3464 + C3465;
    const double C5328 = C5320 + C5321;
    const double C6556 = C6548 + C6549;
    const double C19106 = C19103 + C19095;
    const double C19276 = C19273 + C19265;
    const double C19107 = C19104 + C19098;
    const double C10316 = C10312 + C10313;
    const double C1766 = C1763 + C1764;
    const double C8776 = C8770 + C8771;
    const double C2304 = C2301 + C2302;
    const double C7750 = C7747 + C7748;
    const double C10945 = C10942 + C10943;
    const double C13653 = C13651 + C13652;
    const double C18214 = C18210 + C18211;
    const double C8270 = C8267 + C8268;
    const double C16436 = C16430 + C16431;
    const double C6794 = C6789 + C6790;
    const double C19277 = C19274 + C19268;
    const double C2016 = C2010 + C2011;
    const double C4798 = C4796 + C4797;
    const double C14598 = C14594 + C14595;
    const double C2559 = C2556 + C2557;
    const double C12358 = C12352 + C12353;
    const double C11232 = C11230 + C11231;
    const double C13946 = C13942 + C13943;
    const double C3880 = C3875 + C3876;
    const double C18508 = C18504 + C18505;
    const double C5801 = C5798 + C5799;
    const double C16146 = C16140 + C16141;
    const double C18726 = C18716 - C18723;
    const double C19105 = C19102 - C19093;
    const double C19275 = C19272 - C19263;
    const double C18758 = C18757 - C18750;
    const double C19066 = C19065 - C19060;
    const double C6742 = C6738 + C6739;
    const double C18817 = C18816 - C18809;
    const double C19078 = C19077 - C18697;
    const double C18788 = C18787 - C18780;
    const double C19219 = C19218 - C19060;
    const double C19117 = C19116 - C18780;
    const double C19202 = C19201 - C18809;
    const double C3778 = C3774 + C3775;
    const double C18872 = C18871 - C18864;
    const double C19238 = C19237 - C18697;
    const double C19129 = C19128 - C18864;
    const double C19248 = C19247 - C18750;
    const double C3479 = C3473 * C625;
    const double C3582 = C3473 * C200;
    const double C3476 = C3470 * C625;
    const double C3577 = C3470 * C200;
    const double C4336 = C3470 * C1527;
    const double C5451 = C3470 * C2177;
    const double C3475 = C3469 * C19588;
    const double C4331 = C3469 * C1523;
    const double C3474 = C3468 * C625;
    const double C3574 = C3468 * C200;
    const double C4330 = C3468 * C1527;
    const double C5446 = C3468 * C2177;
    const double C3588 = C3585 * C19620;
    const double C3587 = C3584 * C19620;
    const double C5452 = C3584 * C2069;
    const double C3586 = C3583 * C19620;
    const double C5447 = C3583 * C2069;
    const double C4346 = C4342 * C1528;
    const double C4460 = C4342 * C200;
    const double C4468 = C4466 * C19620;
    const double C5335 = C5331 * C625;
    const double C5448 = C5331 * C2178;
    const double C8076 = C5331 * C1584;
    const double C15796 = C5331 * C200;
    const double C16248 = C5331 * C151;
    const double C16716 = C5331 * C1527;
    const double C17992 = C5331 * C1583;
    const double C18062 = C5331 * C2177;
    const double C5333 = C5329 * C625;
    const double C5453 = C5329 * C2178;
    const double C15799 = C5329 * C200;
    const double C17994 = C5329 * C1584;
    const double C8077 = C5392 * C1526;
    const double C16249 = C5392 * C19609;
    const double C17993 = C5392 * C1525;
    const double C5459 = C5457 * C2070;
    const double C15798 = C5457 * C19620;
    const double C5458 = C5456 * C2070;
    const double C15797 = C5456 * C19620;
    const double C18063 = C5456 * C2069;
    const double C6563 = C6557 * C625;
    const double C6616 = C6557 * C151;
    const double C6560 = C6554 * C625;
    const double C6611 = C6554 * C151;
    const double C7496 = C6554 * C1527;
    const double C8078 = C6554 * C1583;
    const double C6559 = C6553 * C19588;
    const double C7491 = C6553 * C1523;
    const double C6558 = C6552 * C625;
    const double C6608 = C6552 * C151;
    const double C7490 = C6552 * C1527;
    const double C8074 = C6552 * C1583;
    const double C6622 = C6619 * C19609;
    const double C6621 = C6618 * C19609;
    const double C8079 = C6618 * C1525;
    const double C6620 = C6617 * C19609;
    const double C8075 = C6617 * C1525;
    const double C7506 = C7502 * C1528;
    const double C7567 = C7502 * C151;
    const double C7571 = C7569 * C19609;
    const double C8020 = C8018 * C625;
    const double C8080 = C8018 * C1584;
    const double C16251 = C8018 * C151;
    const double C18064 = C8018 * C2178;
    const double C18065 = C8139 * C2070;
    const double C4348 = C4344 * C1528;
    const double C4463 = C4344 * C200;
    const double C7508 = C7504 * C1528;
    const double C7564 = C7504 * C151;
    const double C16724 = C16722 * C1528;
    const double C16861 = C16722 * C200;
    const double C17395 = C16722 * C151;
    const double C8206 = C8202 * C625;
    const double C8266 = C8202 * C1584;
    const double C4347 = C4343 * C1524;
    const double C3477 = C3471 * C19588;
    const double C4337 = C3471 * C1523;
    const double C7507 = C7503 * C1524;
    const double C6561 = C6555 * C19588;
    const double C7497 = C6555 * C1523;
    const double C5334 = C5330 * C19588;
    const double C16717 = C5330 * C1523;
    const double C336 = C333 * C19609;
    const double C1767 = C1765 * C1526;
    const double C2305 = C2303 * C19609;
    const double C13649 = C2303 * C1525;
    const double C6796 = C6793 * C19609;
    const double C8265 = C6793 * C1525;
    const double C8271 = C8269 * C1526;
    const double C582 = C579 * C19620;
    const double C2019 = C2017 * C19620;
    const double C11228 = C2017 * C2069;
    const double C3882 = C3879 * C19620;
    const double C5796 = C3879 * C2069;
    const double C2560 = C2558 * C2070;
    const double C5802 = C5800 * C2070;
    const double C338 = C337 * C19656;
    const double C398 = C397 * C19656;
    const double C2678 =
        C18761 *
        (C18731 *
             ((-(ae * C18655 * C18751) / C18535) / C18516 - C18749 / C18656 +
              C18655 *
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (ae * C18751) / C18656)) -
         (C18728 * ce) / C18656);
    const double C2734 =
        C18761 * C18731 *
            ((-(ae * C18655 * C18781) / C18535) / C18516 - C18779 / C18656 +
             C18655 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                      C18516 -
                  (ae * C18781) / C18656)) -
        (C18731 * C18728 * ce) / C18656;
    const double C106 = (3 * (C18670 + C18655 * C18689 + C18678 * ae) +
                         C18655 * (2 * C18689 + C18655 * C18728 + C18709 * ae) +
                         (2 * C18678 + C18655 * C18709) * ae) /
                        C18516;
    const double C640 =
        (C18670 + C18655 * C18689 + C18678 * ae + C18728 * C18821) / C18516;
    const double C1084 =
        (C18670 + C18655 * C18689 + C18678 * ae + C18728 * C18888) / C18516;
    const double C1530 =
        (C18731 * (2 * C18689 + C18655 * C18728 + C18709 * ae)) / C18516;
    const double C2072 =
        (C18761 * (2 * C18689 + C18655 * C18728 + C18709 * ae)) / C18516;
    const double C2616 = (C18761 * C18731 * C18728) / C18516;
    const double C1532 =
        2 * ((-(C18731 * C18683 * ce) / C18535) / C18516 -
             (ae * C18731 * C18682) / C18656 - (C18655 * C19008) / C18656) -
        (ae * C18731 * C18727) / C18656 - (C18731 * C18728 * ce) / C18656 +
        C18655 *
            ((-(ae * C18731 * C18718) / C18535) / C18516 - C19008 / C18656 -
             (C18731 * C18719 * ce) / C18656 +
             C18655 *
                 ((-(C18731 * C18710 * ce) / C18535) / C18516 -
                  (ae * C18731 * C18707) / C18656 -
                  (C18655 * C18731 *
                   (C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C2074 =
        2 * ((-(C18761 * C18683 * ce) / C18535) / C18516 -
             (ae * C18761 * C18682) / C18656 - (C18655 * C19018) / C18656) -
        (ae * C18761 * C18727) / C18656 - (C18761 * C18728 * ce) / C18656 +
        C18655 *
            ((-(ae * C18761 * C18718) / C18535) / C18516 - C19018 / C18656 -
             (C18761 * C18719 * ce) / C18656 +
             C18655 *
                 ((-(C18761 * C18710 * ce) / C18535) / C18516 -
                  (ae * C18761 * C18707) / C18656 -
                  (C18655 * C18761 *
                   (C18694 * C18695 + C18663 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C2790 =
        C18731 * C18761 *
            ((-(C18655 * C18810 * ce) / C18535) / C18516 - C18808 / C18656 +
             C18655 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                      C18516 -
                  (C18810 * ce) / C18656)) -
        (ae * C18761 * C18727) / C18656;
    const double C2952 =
        C18761 * C18731 *
            ((-(C18655 * C18865 * ce) / C18535) / C18516 - C18863 / C18656 +
             C18655 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                      C18516 -
                  (C18865 * ce) / C18656)) -
        (ae * C18731 * C18727) / C18656;
    const double C107 =
        (-3 * (C18655 * C18688 + C18669 + C18678 * ce)) / C18535 +
        C18655 * ((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
                  (C18709 * ce) / C18535) -
        ((2 * C18678 + C18655 * C18709) * ce) / C18535;
    const double C643 =
        -(C18727 * C18821 + C18655 * C18688 + C18669 + C18678 * ce) / C18535;
    const double C1087 =
        -(C18727 * C18888 + C18655 * C18688 + C18669 + C18678 * ce) / C18535;
    const double C1531 =
        C18731 * ((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
                  (C18709 * ce) / C18535);
    const double C2073 =
        C18761 * ((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
                  (C18709 * ce) / C18535);
    const double C2619 = -(C18761 * C18731 * C18727) / C18535;
    const double C11308 = C11300 + C11301;
    const double C16723 = C16720 + C16721;
    const double C8019 = C8016 + C8017;
    const double C4349 = C4345 * C1524;
    const double C7509 = C7505 * C1524;
    const double C3478 = C3472 * C19588;
    const double C5332 = C5328 * C19588;
    const double C6562 = C6556 * C19588;
    const double C3519 =
        (-3 * (C18731 * C19083 + C18737 + C19081 * ce)) / C18535 +
        C18731 * ((-2 * C19083) / C18535 - (C18731 * C19106) / C18535 -
                  (C19096 * ce) / C18535) -
        ((2 * C19081 + C18731 * C19096) * ce) / C18535;
    const double C3975 =
        -(C19106 * C18888 + C18731 * C19083 + C18737 + C19081 * ce) / C18535;
    const double C5385 =
        C18761 * ((-2 * C19083) / C18535 - (C18731 * C19106) / C18535 -
                  (C19096 * ce) / C18535);
    const double C6663 =
        (-3 * (C18761 * C19253 + C18767 + C19251 * ce)) / C18535 +
        C18761 * ((-2 * C19253) / C18535 - (C18761 * C19276) / C18535 -
                  (C19266 * ce) / C18535) -
        ((2 * C19251 + C18761 * C19266) * ce) / C18535;
    const double C5561 =
        2 * ((-(C18761 * C18802 * ce) / C18535) / C18516 -
             (ae * C18761 * C18743) / C18656 - (C18731 * C19196) / C18656) -
        (ae * C18761 * C19106) / C18656 - (C18761 * C19107 * ce) / C18656 +
        C18731 *
            ((-(ae * C18761 * C19094) / C18535) / C18516 - C19196 / C18656 -
             (C18761 * C19097 * ce) / C18656 +
             C18731 *
                 ((-(C18761 * C18810 * ce) / C18535) / C18516 -
                  (ae * C18761 * C18751) / C18656 -
                  (C18731 * C18761 *
                   (C18694 * C18695 + C18821 * bs[6] * std::pow(C18653, 6)) *
                   C18664) /
                      C18656));
    const double C3628 =
        (3 * (C18796 + C18731 * C19084 + C19081 * ae) +
         C18731 * (2 * C19084 + C18731 * C19107 + C19096 * ae) +
         (2 * C19081 + C18731 * C19096) * ae) /
        C18516;
    const double C4063 =
        (C18796 + C18731 * C19084 + C19081 * ae + C19107 * C18888) / C18516;
    const double C5509 =
        (C18761 * (2 * C19084 + C18731 * C19107 + C19096 * ae)) / C18516;
    const double C1768 = C1766 * C1526;
    const double C2306 = C2304 * C19609;
    const double C7751 = C7750 * C19609;
    const double C13654 = C13653 * C1526;
    const double C8272 = C8270 * C1526;
    const double C6797 = C6794 * C19609;
    const double C6886 =
        (3 * (C18851 + C18761 * C19254 + C19251 * ae) +
         C18761 * (2 * C19254 + C18761 * C19277 + C19266 * ae) +
         (2 * C19251 + C18761 * C19266) * ae) /
        C18516;
    const double C2018 = C2016 * C19620;
    const double C4799 = C4798 * C19620;
    const double C2561 = C2559 * C2070;
    const double C11233 = C11232 * C2070;
    const double C3883 = C3880 * C19620;
    const double C5803 = C5801 * C2070;
    const double C112 =
        3 * ((-(ae * C18688) / C18535) / C18516 - C18687 / C18656 -
             (C18689 * ce) / C18656 + C18655 * C18726) +
        (((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
          (C18709 * ce) / C18535) *
         ae) /
            C18516 -
        ((2 * C18689 + C18655 * C18728 + C18709 * ae) * ce) / C18656 +
        C18655 * (2 * C18726 - (ae * C18727) / C18656 - (C18728 * ce) / C18656 +
                  C18655 * ((-(ae * C18718) / C18535) / C18516 -
                            C18717 / C18656 - (C18719 * ce) / C18656 +
                            C18655 * ((-(C18710 * ce) / C18535) / C18516 -
                                      (ae * C18707) / C18656 -
                                      (C18655 *
                                       (C18694 * C18695 +
                                        C18663 * bs[6] * std::pow(C18653, 6)) *
                                       C18664) /
                                          C18656)));
    const double C3670 =
        3 * ((-(ae * C19083) / C18535) / C18516 - C18826 / C18656 -
             (C19084 * ce) / C18656 + C18731 * C19105) +
        (((-2 * C19083) / C18535 - (C18731 * C19106) / C18535 -
          (C19096 * ce) / C18535) *
         ae) /
            C18516 -
        ((2 * C19084 + C18731 * C19107 + C19096 * ae) * ce) / C18656 +
        C18731 * (2 * C19105 - (ae * C19106) / C18656 - (C19107 * ce) / C18656 +
                  C18731 * ((-(ae * C19094) / C18535) / C18516 -
                            C18831 / C18656 - (C19097 * ce) / C18656 +
                            C18731 * ((-(C18810 * ce) / C18535) / C18516 -
                                      (ae * C18751) / C18656 -
                                      (C18731 *
                                       (C18694 * C18695 +
                                        C18821 * bs[6] * std::pow(C18653, 6)) *
                                       C18664) /
                                          C18656)));
    const double C6968 =
        3 * ((-(ae * C19253) / C18535) / C18516 - C18893 / C18656 -
             (C19254 * ce) / C18656 + C18761 * C19275) +
        (((-2 * C19253) / C18535 - (C18761 * C19276) / C18535 -
          (C19266 * ce) / C18535) *
         ae) /
            C18516 -
        ((2 * C19254 + C18761 * C19277 + C19266 * ae) * ce) / C18656 +
        C18761 * (2 * C19275 - (ae * C19276) / C18656 - (C19277 * ce) / C18656 +
                  C18761 * ((-(ae * C19264) / C18535) / C18516 -
                            C18898 / C18656 - (C19267 * ce) / C18656 +
                            C18761 * ((-(C18865 * ce) / C18535) / C18516 -
                                      (ae * C18781) / C18656 -
                                      (C18761 *
                                       (C18694 * C18695 +
                                        C18888 * bs[6] * std::pow(C18653, 6)) *
                                       C18664) /
                                          C18656)));
    const double C161 =
        3 * ((-(ae * C18745) / C18535) / C18516 - C18742 / C18656 +
             C18655 * C18758) +
        (((-2 * C18745) / C18535 - (C18655 * C18755) / C18535) * ae) / C18516 +
        C18655 *
            (2 * C18758 - (ae * C18755) / C18656 +
             C18655 *
                 ((-(ae * C18655 * C18751) / C18535) / C18516 -
                  C18749 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) /
                             C18535) /
                                C18516 -
                            (ae * C18751) / C18656)));
    const double C697 =
        C18731 * ((-(ae * C18745) / C18535) / C18516 - C18742 / C18656 +
                  C18655 * C18758) -
        ((C18670 + C18655 * C18689 + C18678 * ae) * ce) / C18656;
    const double C701 = (-(C18655 * C18742) / C18535) / C18516 -
                        (ae * C18737) / C18656 -
                        (C18731 * C18689 * ce) / C18656 +
                        C18731 * (C18731 * C18758 - (C18689 * ce) / C18656);
    const double C702 =
        (-(ae * C18745) / C18535) / C18516 - C18742 / C18656 + C18655 * C18758 -
        (C18731 * C18728 * ce) / C18656 +
        C18731 *
            (C18731 *
                 ((-(ae * C18655 * C18751) / C18535) / C18516 -
                  C18749 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) /
                             C18535) /
                                C18516 -
                            (ae * C18751) / C18656)) -
             (C18728 * ce) / C18656);
    const double C1138 = C18761 * ((-(ae * C18745) / C18535) / C18516 -
                                   C18742 / C18656 + C18655 * C18758);
    const double C1142 = (-(C18655 * C18742) / C18535) / C18516 -
                         (ae * C18737) / C18656 + C18758 * C18888;
    const double C1143 =
        (-(ae * C18745) / C18535) / C18516 - C18742 / C18656 + C18655 * C18758 +
        ((-(ae * C18655 * C18751) / C18535) / C18516 - C18749 / C18656 +
         C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (ae * C18751) / C18656)) *
            C18888;
    const double C1586 =
        C18731 *
            (2 * C18758 - (ae * C18755) / C18656 +
             C18655 *
                 ((-(ae * C18655 * C18751) / C18535) / C18516 -
                  C18749 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) /
                             C18535) /
                                C18516 -
                            (ae * C18751) / C18656))) -
        ((2 * C18689 + C18655 * C18728 + C18709 * ae) * ce) / C18656;
    const double C2126 =
        C18761 *
        (2 * C18758 - (ae * C18755) / C18656 +
         C18655 *
             ((-(ae * C18655 * C18751) / C18535) / C18516 - C18749 / C18656 +
              C18655 *
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (ae * C18751) / C18656)));
    const double C2677 = C18761 * (C18731 * C18758 - (C18689 * ce) / C18656);
    const double C4400 =
        2 * (C18731 * C18758 - (C18689 * ce) / C18656) -
        ((C18689 + C18719 * C18821) * ce) / C18656 +
        C18731 *
            (C18758 - (C18731 * C18719 * ce) / C18656 +
             C18731 *
                 (C18731 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) /
                             C18535) /
                                C18516 -
                            (ae * C18751) / C18656) -
                  (C18719 * ce) / C18656));
    const double C4904 =
        C18761 *
        (C18758 - (C18731 * C18719 * ce) / C18656 +
         C18731 * (C18731 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) /
                              C18535) /
                                 C18516 -
                             (ae * C18751) / C18656) -
                   (C18719 * ce) / C18656));
    const double C7074 =
        C18731 * C18758 - (C18689 * ce) / C18656 +
        (C18731 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (ae * C18751) / C18656) -
         (C18719 * ce) / C18656) *
            C18888;
    const double C7560 =
        2 * C18761 * C18758 +
        C18761 * (C18758 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (ae * C18751) / C18656) *
                      C18888);
    const double C3521 =
        3 * ((-(C19058 * ce) / C18535) / C18516 - C18742 / C18656 +
             C18731 * C19066) -
        ((2 * C19058 + C18731 * C19063) * ce) / C18656 +
        C18731 *
            (2 * C19066 - (C19063 * ce) / C18656 +
             C18731 *
                 ((-(C18731 * C18710 * ce) / C18535) / C18516 -
                  C18749 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18738) /
                             C18535) /
                                C18516 -
                            (C18710 * ce) / C18656)));
    const double C3976 = C18761 * ((-(C19058 * ce) / C18535) / C18516 -
                                   C18742 / C18656 + C18731 * C19066);
    const double C3977 = (-(C18731 * C18742) / C18535) / C18516 -
                         (C18670 * ce) / C18656 + C19066 * C18888;
    const double C3978 =
        (-(C19058 * ce) / C18535) / C18516 - C18742 / C18656 + C18731 * C19066 +
        ((-(C18731 * C18710 * ce) / C18535) / C18516 - C18749 / C18656 +
         C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (C18710 * ce) / C18656)) *
            C18888;
    const double C5386 =
        C18761 *
        (2 * C19066 - (C19063 * ce) / C18656 +
         C18731 *
             ((-(C18731 * C18710 * ce) / C18535) / C18516 - C18749 / C18656 +
              C18731 *
                  ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (C18710 * ce) / C18656)));
    const double C8072 =
        2 * C18761 * C19066 +
        C18761 * (C19066 +
                  ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18738) / C18535) /
                       C18516 -
                   (C18710 * ce) / C18656) *
                      C18888);
    const double C259 =
        3 * ((-(C18804 * ce) / C18535) / C18516 - C18801 / C18656 +
             C18655 * C18817) -
        ((2 * C18804 + C18655 * C18814) * ce) / C18656 +
        C18655 *
            (2 * C18817 - (C18814 * ce) / C18656 +
             C18655 *
                 ((-(C18655 * C18810 * ce) / C18535) / C18516 -
                  C18808 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)));
    const double C797 =
        C18731 * ((-(C18804 * ce) / C18535) / C18516 - C18801 / C18656 +
                  C18655 * C18817) -
        (ae * (C18655 * C18688 + C18669 + C18678 * ce)) / C18656;
    const double C801 = (-(C18655 * C18801) / C18535) / C18516 -
                        (C18796 * ce) / C18656 -
                        (ae * C18731 * C18688) / C18656 +
                        C18731 * (C18731 * C18817 - (ae * C18688) / C18656);
    const double C802 =
        (-(C18804 * ce) / C18535) / C18516 - C18801 / C18656 + C18655 * C18817 -
        (ae * C18731 * C18727) / C18656 +
        C18731 *
            (C18731 *
                 ((-(C18655 * C18810 * ce) / C18535) / C18516 -
                  C18808 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)) -
             (ae * C18727) / C18656);
    const double C1241 = C18761 * ((-(C18804 * ce) / C18535) / C18516 -
                                   C18801 / C18656 + C18655 * C18817);
    const double C1245 = (-(C18655 * C18801) / C18535) / C18516 -
                         (C18796 * ce) / C18656 + C18817 * C18888;
    const double C1246 =
        (-(C18804 * ce) / C18535) / C18516 - C18801 / C18656 + C18655 * C18817 +
        ((-(C18655 * C18810 * ce) / C18535) / C18516 - C18808 / C18656 +
         C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                       C18516 -
                   (C18810 * ce) / C18656)) *
            C18888;
    const double C1690 =
        (((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
          (C18709 * ce) / C18535) *
         ae) /
            C18516 +
        C18731 *
            (2 * C18817 - (C18814 * ce) / C18656 +
             C18655 *
                 ((-(C18655 * C18810 * ce) / C18535) / C18516 -
                  C18808 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)));
    const double C2232 =
        C18761 *
        (2 * C18817 - (C18814 * ce) / C18656 +
         C18655 *
             ((-(C18655 * C18810 * ce) / C18535) / C18516 - C18808 / C18656 +
              C18655 *
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                       C18516 -
                   (C18810 * ce) / C18656)));
    const double C2789 =
        C18731 * C18761 * C18817 - (ae * C18761 * C18688) / C18656;
    const double C4520 =
        2 * (C18731 * C18817 - (ae * C18688) / C18656) -
        (ae * (C18718 * C18821 + C18688)) / C18656 +
        C18731 *
            (C18817 - (ae * C18731 * C18718) / C18656 +
             C18731 *
                 (C18731 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656) -
                  (ae * C18718) / C18656));
    const double C5008 =
        C18761 * C18817 - (ae * C18761 * C18731 * C18718) / C18656 +
        C18731 *
            (C18731 * C18761 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                      C18516 -
                  (C18810 * ce) / C18656) -
             (ae * C18761 * C18718) / C18656);
    const double C7178 =
        C18731 * (C18817 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                       C18516 -
                   (C18810 * ce) / C18656) *
                      C18888) -
        (ae * (C18718 * C18888 + C18688)) / C18656;
    const double C7680 =
        2 * C18761 * C18817 +
        C18761 * (C18817 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18797) / C18535) /
                       C18516 -
                   (C18810 * ce) / C18656) *
                      C18888);
    const double C3630 =
        3 * ((-(ae * C19071) / C18535) / C18516 - C18801 / C18656 +
             C18731 * C19078) +
        (((-2 * C19071) / C18535 - (C18731 * C19075) / C18535) * ae) / C18516 +
        C18731 *
            (2 * C19078 - (ae * C19075) / C18656 +
             C18731 *
                 ((-(ae * C18731 * C18707) / C18535) / C18516 -
                  C18808 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18797) /
                             C18535) /
                                C18516 -
                            (ae * C18707) / C18656)));
    const double C210 =
        3 * ((-(ae * C18775) / C18535) / C18516 - C18772 / C18656 +
             C18655 * C18788) +
        (((-2 * C18775) / C18535 - (C18655 * C18785) / C18535) * ae) / C18516 +
        C18655 *
            (2 * C18788 - (ae * C18785) / C18656 +
             C18655 *
                 ((-(ae * C18655 * C18781) / C18535) / C18516 -
                  C18779 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) /
                             C18535) /
                                C18516 -
                            (ae * C18781) / C18656)));
    const double C747 = C18731 * ((-(ae * C18775) / C18535) / C18516 -
                                  C18772 / C18656 + C18655 * C18788);
    const double C751 = (-(C18655 * C18772) / C18535) / C18516 -
                        (ae * C18767) / C18656 + C18788 * C18821;
    const double C752 =
        (-(ae * C18775) / C18535) / C18516 - C18772 / C18656 + C18655 * C18788 +
        ((-(ae * C18655 * C18781) / C18535) / C18516 - C18779 / C18656 +
         C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                       C18516 -
                   (ae * C18781) / C18656)) *
            C18821;
    const double C1191 =
        C18761 * ((-(ae * C18775) / C18535) / C18516 - C18772 / C18656 +
                  C18655 * C18788) -
        ((C18670 + C18655 * C18689 + C18678 * ae) * ce) / C18656;
    const double C1195 = (-(C18655 * C18772) / C18535) / C18516 -
                         (ae * C18767) / C18656 -
                         (C18761 * C18689 * ce) / C18656 +
                         C18761 * (C18761 * C18788 - (C18689 * ce) / C18656);
    const double C1196 =
        (-(ae * C18775) / C18535) / C18516 - C18772 / C18656 + C18655 * C18788 -
        (C18761 * C18728 * ce) / C18656 +
        C18761 *
            (C18761 *
                 ((-(ae * C18655 * C18781) / C18535) / C18516 -
                  C18779 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) /
                             C18535) /
                                C18516 -
                            (ae * C18781) / C18656)) -
             (C18728 * ce) / C18656);
    const double C1638 =
        C18731 *
        (2 * C18788 - (ae * C18785) / C18656 +
         C18655 *
             ((-(ae * C18655 * C18781) / C18535) / C18516 - C18779 / C18656 +
              C18655 *
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                       C18516 -
                   (ae * C18781) / C18656)));
    const double C2180 =
        C18761 *
            (2 * C18788 - (ae * C18785) / C18656 +
             C18655 *
                 ((-(ae * C18655 * C18781) / C18535) / C18516 -
                  C18779 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) /
                             C18535) /
                                C18516 -
                            (ae * C18781) / C18656))) -
        ((2 * C18689 + C18655 * C18728 + C18709 * ae) * ce) / C18656;
    const double C2733 =
        C18761 * C18731 * C18788 - (C18731 * C18689 * ce) / C18656;
    const double C4458 =
        2 * C18731 * C18788 +
        C18731 * (C18788 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                       C18516 -
                   (ae * C18781) / C18656) *
                      C18821);
    const double C4956 =
        C18761 * (C18788 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                       C18516 -
                   (ae * C18781) / C18656) *
                      C18821) -
        ((C18689 + C18719 * C18821) * ce) / C18656;
    const double C7126 =
        C18731 * C18788 - (C18761 * C19281 * ce) / C18656 +
        C18761 *
            (C18761 * C18731 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) / C18535) /
                      C18516 -
                  (ae * C18781) / C18656) -
             (C19281 * ce) / C18656);
    const double C7622 =
        2 * (C18761 * C18788 - (C18689 * ce) / C18656) -
        ((C18689 + C18719 * C18888) * ce) / C18656 +
        C18761 *
            (C18788 - (C18761 * C18719 * ce) / C18656 +
             C18761 *
                 (C18761 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18768) /
                             C18535) /
                                C18516 -
                            (ae * C18781) / C18656) -
                  (C18719 * ce) / C18656));
    const double C6665 =
        3 * ((-(C19212 * ce) / C18535) / C18516 - C18772 / C18656 +
             C18761 * C19219) -
        ((2 * C19212 + C18761 * C19216) * ce) / C18656 +
        C18761 *
            (2 * C19219 - (C19216 * ce) / C18656 +
             C18761 *
                 ((-(C18761 * C18710 * ce) / C18535) / C18516 -
                  C18779 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18768) /
                             C18535) /
                                C18516 -
                            (C18710 * ce) / C18656)));
    const double C3710 =
        3 * ((-(ae * C19110) / C18535) / C18516 - C18840 / C18656 +
             C18731 * C19117) +
        (((-2 * C19110) / C18535 - (C18731 * C19114) / C18535) * ae) / C18516 +
        C18731 *
            (2 * C19117 - (ae * C19114) / C18656 +
             C18731 *
                 ((-(ae * C18731 * C18781) / C18535) / C18516 -
                  C18843 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18837) /
                             C18535) /
                                C18516 -
                            (ae * C18781) / C18656)));
    const double C5612 =
        2 * (C18731 * C19202 - (ae * (C18761 * C18773 + C18677)) / C18656) -
        (ae * (C18761 * C19114 + C19096 * ce)) / C18656 +
        C18731 *
            (C19202 - (ae * (C18761 * C18731 * C18781 + C19095)) / C18656 +
             C18731 *
                 (C18731 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18837) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656) -
                  (ae * (C18761 * C18781 + C18700)) / C18656));
    const double C6836 =
        2 * ((-(C18761 * C18840) / C18535) / C18516 - (C18796 * ce) / C18656) -
        ((C18796 + C18802 * C18888) * ce) / C18656 +
        C18761 * ((-(C18761 * C18802 * ce) / C18535) / C18516 -
                  C18840 / C18656 + C18761 * C19202);
    const double C6837 =
        3 * ((-(C19226 * ce) / C18535) / C18516 - C18840 / C18656 +
             C18761 * C19202) -
        ((2 * C19226 + C18761 * C19228) * ce) / C18656 +
        C18761 *
            (2 * C19202 - (C19228 * ce) / C18656 +
             C18761 *
                 ((-(C18761 * C18810 * ce) / C18535) / C18516 -
                  C18843 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18837) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)));
    const double C8322 =
        (((-2 * C19253) / C18535 - (C18761 * C19276) / C18535 -
          (C19266 * ce) / C18535) *
         ae) /
            C18516 +
        C18731 *
            (2 * C19202 - (C19228 * ce) / C18656 +
             C18761 *
                 ((-(C18761 * C18810 * ce) / C18535) / C18516 -
                  C18843 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18837) /
                             C18535) /
                                C18516 -
                            (C18810 * ce) / C18656)));
    const double C3779 = C3778 * C19577;
    const double C446 =
        3 * ((-(C18859 * ce) / C18535) / C18516 - C18856 / C18656 +
             C18655 * C18872) -
        ((2 * C18859 + C18655 * C18869) * ce) / C18656 +
        C18655 *
            (2 * C18872 - (C18869 * ce) / C18656 +
             C18655 *
                 ((-(C18655 * C18865 * ce) / C18535) / C18516 -
                  C18863 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)));
    const double C935 = C18731 * ((-(C18859 * ce) / C18535) / C18516 -
                                  C18856 / C18656 + C18655 * C18872);
    const double C939 = (-(C18655 * C18856) / C18535) / C18516 -
                        (C18851 * ce) / C18656 + C18872 * C18821;
    const double C940 =
        (-(C18859 * ce) / C18535) / C18516 - C18856 / C18656 + C18655 * C18872 +
        ((-(C18655 * C18865 * ce) / C18535) / C18516 - C18863 / C18656 +
         C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                       C18516 -
                   (C18865 * ce) / C18656)) *
            C18821;
    const double C1379 =
        C18761 * ((-(C18859 * ce) / C18535) / C18516 - C18856 / C18656 +
                  C18655 * C18872) -
        (ae * (C18655 * C18688 + C18669 + C18678 * ce)) / C18656;
    const double C1383 = (-(C18655 * C18856) / C18535) / C18516 -
                         (C18851 * ce) / C18656 -
                         (ae * C18761 * C18688) / C18656 +
                         C18761 * (C18761 * C18872 - (ae * C18688) / C18656);
    const double C1384 =
        (-(C18859 * ce) / C18535) / C18516 - C18856 / C18656 + C18655 * C18872 -
        (ae * C18761 * C18727) / C18656 +
        C18761 *
            (C18761 *
                 ((-(C18655 * C18865 * ce) / C18535) / C18516 -
                  C18863 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)) -
             (ae * C18727) / C18656);
    const double C1880 =
        C18731 *
        (2 * C18872 - (C18869 * ce) / C18656 +
         C18655 *
             ((-(C18655 * C18865 * ce) / C18535) / C18516 - C18863 / C18656 +
              C18655 *
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                       C18516 -
                   (C18865 * ce) / C18656)));
    const double C2422 =
        (((-2 * C18688) / C18535 - (C18655 * C18727) / C18535 -
          (C18709 * ce) / C18535) *
         ae) /
            C18516 +
        C18761 *
            (2 * C18872 - (C18869 * ce) / C18656 +
             C18655 *
                 ((-(C18655 * C18865 * ce) / C18535) / C18516 -
                  C18863 / C18656 +
                  C18655 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)));
    const double C2951 =
        C18761 * C18731 * C18872 - (ae * C18731 * C18688) / C18656;
    const double C4674 =
        2 * C18731 * C18872 +
        C18731 * (C18872 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                       C18516 -
                   (C18865 * ce) / C18656) *
                      C18821);
    const double C5162 =
        C18761 * (C18872 +
                  ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                       C18516 -
                   (C18865 * ce) / C18656) *
                      C18821) -
        (ae * (C18718 * C18821 + C18688)) / C18656;
    const double C7332 =
        C18731 * C18872 - (ae * C18761 * C19286) / C18656 +
        C18761 *
            (C18761 * C18731 *
                 ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) / C18535) /
                      C18516 -
                  (C18865 * ce) / C18656) -
             (ae * C19286) / C18656);
    const double C7856 =
        2 * (C18761 * C18872 - (ae * C18688) / C18656) -
        (ae * (C18718 * C18888 + C18688)) / C18656 +
        C18761 *
            (C18872 - (ae * C18761 * C18718) / C18656 +
             C18761 *
                 (C18761 * ((-(C18655 * std::pow(C18653, 6) * bs[6] * C18852) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656) -
                  (ae * C18718) / C18656));
    const double C6888 =
        3 * ((-(ae * C19231) / C18535) / C18516 - C18856 / C18656 +
             C18761 * C19238) +
        (((-2 * C19231) / C18535 - (C18761 * C19235) / C18535) * ae) / C18516 +
        C18761 *
            (2 * C19238 - (ae * C19235) / C18656 +
             C18761 *
                 ((-(ae * C18761 * C18707) / C18535) / C18516 -
                  C18863 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18852) /
                             C18535) /
                                C18516 -
                            (ae * C18707) / C18656)));
    const double C3818 =
        3 * ((-(C19122 * ce) / C18535) / C18516 - C18881 / C18656 +
             C18731 * C19129) -
        ((2 * C19122 + C18731 * C19126) * ce) / C18656 +
        C18731 *
            (2 * C19129 - (C19126 * ce) / C18656 +
             C18731 *
                 ((-(C18731 * C18865 * ce) / C18535) / C18516 -
                  C18884 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18878) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)));
    const double C4231 =
        C18761 * ((-(C19122 * ce) / C18535) / C18516 - C18881 / C18656 +
                  C18731 * C19129) -
        (ae * (C18731 * C19083 + C18737 + C19081 * ce)) / C18656;
    const double C4232 = (-(C18731 * C18881) / C18535) / C18516 -
                         (C18851 * ce) / C18656 -
                         (ae * C18761 * C19083) / C18656 +
                         C18761 * (C18761 * C19129 - (ae * C19083) / C18656);
    const double C4233 =
        (-(C19122 * ce) / C18535) / C18516 - C18881 / C18656 + C18731 * C19129 -
        (ae * C18761 * C19106) / C18656 +
        C18761 *
            (C18761 *
                 ((-(C18731 * C18865 * ce) / C18535) / C18516 -
                  C18884 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18878) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)) -
             (ae * C19106) / C18656);
    const double C5731 =
        (((-2 * C19083) / C18535 - (C18731 * C19106) / C18535 -
          (C19096 * ce) / C18535) *
         ae) /
            C18516 +
        C18761 *
            (2 * C19129 - (C19126 * ce) / C18656 +
             C18731 *
                 ((-(C18731 * C18865 * ce) / C18535) / C18516 -
                  C18884 / C18656 +
                  C18731 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18878) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656)));
    const double C8431 =
        2 * (C18761 * C19129 - (ae * C19083) / C18656) -
        (ae * (C19094 * C18888 + C19083)) / C18656 +
        C18761 *
            (C19129 - (ae * C18761 * C19094) / C18656 +
             C18761 *
                 (C18761 * ((-(C18731 * std::pow(C18653, 6) * bs[6] * C18878) /
                             C18535) /
                                C18516 -
                            (C18865 * ce) / C18656) -
                  (ae * C19094) / C18656));
    const double C6928 =
        3 * ((-(ae * C19241) / C18535) / C18516 - C18881 / C18656 +
             C18761 * C19248) +
        (((-2 * C19241) / C18535 - (C18761 * C19245) / C18535) * ae) / C18516 +
        C18761 *
            (2 * C19248 - (ae * C19245) / C18656 +
             C18761 *
                 ((-(ae * C18761 * C18751) / C18535) / C18516 -
                  C18884 / C18656 +
                  C18761 * ((-(C18761 * std::pow(C18653, 6) * bs[6] * C18878) /
                             C18535) /
                                C18516 -
                            (ae * C18751) / C18656)));
    const double C3589 = C3577 + C3587;
    const double C6623 = C6611 + C6621;
    const double C3480 = C3476 + C3477;
    const double C6564 = C6560 + C6561;
    const double C17925 = C5334 + C5335;
    const double C17924 = C5335 + C5334;
    const double C14307 = C2305 + C2297;
    const double C14306 = C2297 + C2305;
    const double C6798 = C6786 + C6796;
    const double C10597 = C2019 + C2015;
    const double C10596 = C2015 + C2019;
    const double C3884 = C3872 + C3882;
    const double C16725 = C16723 * C1524;
    const double C8021 = C8019 * C19588;
    const double C10093 = C8534 * C697;
    const double C4405 = C19577 * C701;
    const double C9125 = C8534 * C701;
    const double C14093 = C8534 * C1138;
    const double C7563 = C19577 * C1142;
    const double C12939 = C8534 * C1142;
    const double C11381 = C8534 * C2677;
    const double C16793 = C19577 * C2677;
    const double C5391 = C19577 * C3976;
    const double C8082 = C19577 * C3977;
    const double C1699 = C19645 * C797;
    const double C8707 = C8536 * C797;
    const double C10241 = C8536 * C801;
    const double C2241 = C19645 * C1241;
    const double C7691 = C19645 * C1245;
    const double C10869 = C8536 * C2789;
    const double C13579 = C19645 * C2789;
    const double C10165 = C8534 * C747;
    const double C4465 = C19577 * C751;
    const double C9185 = C8534 * C751;
    const double C14167 = C8534 * C1191;
    const double C7627 = C19577 * C1195;
    const double C13003 = C8534 * C1195;
    const double C11451 = C8534 * C2733;
    const double C16863 = C19577 * C2733;
    const double C6844 = C19645 * C6836;
    const double C1889 = C19656 * C935;
    const double C4685 = C19656 * C939;
    const double C2431 = C19656 * C1379;
    const double C12227 = C11904 * C1379;
    const double C14451 = C11904 * C1383;
    const double C11087 = C19656 * C2951;
    const double C13799 = C11904 * C2951;
    const double C5736 = C19656 * C4231;
    const double C16081 = C11904 * C4231;
    const double C18435 = C11904 * C4232;
    const double C6624 = C6623 * C19645;
    const double C6565 = C6564 * C19645;
    const double C3885 = C3884 * C19577;
    const double C10095 = C10092 + C10093;
    const double C4407 = C4404 + C4405;
    const double C9129 = C9124 + C9125;
    const double C14096 = C14092 + C14093;
    const double C7568 = C7562 + C7563;
    const double C12944 = C12938 + C12939;
    const double C11383 = C11380 + C11381;
    const double C16794 = C16792 + C16793;
    const double C5393 = C5390 + C5391;
    const double C8083 = C8081 + C8082;
    const double C1703 = C1698 + C1699;
    const double C8715 = C8706 + C8707;
    const double C10245 = C10240 + C10241;
    const double C2245 = C2240 + C2241;
    const double C7693 = C7690 + C7691;
    const double C10873 = C10868 + C10869;
    const double C13581 = C13578 + C13579;
    const double C10167 = C10164 + C10165;
    const double C4467 = C4464 + C4465;
    const double C9190 = C9184 + C9185;
    const double C14169 = C14166 + C14167;
    const double C7629 = C7626 + C7627;
    const double C13007 = C13002 + C13003;
    const double C11454 = C11450 + C11451;
    const double C16864 = C16862 + C16863;
    const double C6847 = C6843 + C6844;
    const double C1893 = C1888 + C1889;
    const double C4687 = C4684 + C4685;
    const double C2435 = C2430 + C2431;
    const double C12235 = C12226 + C12227;
    const double C14455 = C14450 + C14451;
    const double C11089 = C11086 + C11087;
    const double C13803 = C13798 + C13799;
    const double C5738 = C5735 + C5736;
    const double C16085 = C16080 + C16081;
    const double C18437 = C18434 + C18435;
    const double C7570 = C7568 * C19609;
    const double C17394 = C16794 * C19609;
    const double C17995 = C5393 * C1526;
    const double C8084 = C8083 * C1526;
    const double C16250 = C8083 * C19609;
    const double C14239 = C2245 * C1524;
    const double C7695 = C7693 * C1524;
    const double C13060 = C7693 * C19588;
    const double C14865 = C13581 * C19588;
    const double C4469 = C4467 * C19620;
    const double C16865 = C16864 * C19620;
    const double C10459 = C1893 * C1524;
    const double C4689 = C4687 * C1524;
    const double C9394 = C4687 * C19588;
    const double C11720 = C11089 * C19588;
    d2eexx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1527 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C1523 -
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1528 -
            (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) *
                C1524) *
               C8535 +
           ((C9060 + C9061) * C1527 + (C9062 + C9063) * C1523 -
            (C10020 + C10021) * C1528 - (C10022 + C10023) * C1524) *
               C8536) *
              C19656 * C19620 * C1525 +
          (((C10021 + C10020) * C1528 -
            ((C9063 + C9062) * C1523 + (C9061 + C9060) * C1527) +
            (C10023 + C10022) * C1524) *
               C8535 +
           ((C8537 * C630 + C8533 * C639 + C8538 * C631 + C8534 * C640) *
                C1528 -
            ((C9064 + C9065) * C1523 + (C9066 + C9067) * C1527) +
            (C8537 * C642 + C8533 * C648 + C8538 * C643 + C8534 * C649) *
                C1524) *
               C8536) *
              C19656 * C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1583 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C1525 -
            (C9061 + C9060) * C1584 - (C9126 + C9127) * C1526) *
               C8535 +
           ((C9060 + C9061) * C1583 + (C9127 + C9126) * C1525 -
            (C9066 + C9067) * C1584 - (C9129 + C9128) * C1526) *
               C8536) *
              C19656 * C1523 +
          (((C10021 + C10020) * C1584 -
            ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                 C1525 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1583) +
            (C10094 + C10095) * C1526) *
               C8535 +
           ((C8537 * C630 + C8533 * C639 + C8538 * C631 + C8534 * C640) *
                C1584 -
            ((C10095 + C10094) * C1525 + (C10020 + C10021) * C1583) +
            (C8537 * C695 + C8533 * C701 + C8538 * C696 + C8534 * C702) *
                C1526) *
               C8536) *
              C19656 * C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
             (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                 C19620) *
                C8535 +
            ((C9060 + C9061) * C200 + (C9188 + C9189) * C19620) * C8536) *
               C19656 * C1525 -
           (((C9190 + C9191) * C19620 + (C9066 + C9067) * C200) * C8536 +
            ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C8535) *
               C19656 * C1526) *
              C1523 +
          ((((C10021 + C10020) * C200 + (C10166 + C10167) * C19620) * C8535 +
            ((C8537 * C630 + C8533 * C639 + C8538 * C631 + C8534 * C640) *
                 C200 +
             (C8537 * C745 + C8533 * C751 + C8538 * C746 + C8534 * C752) *
                 C19620) *
                C8536) *
               C19656 * C1526 -
           (((C10167 + C10166) * C19620 + (C10020 + C10021) * C200) * C8536 +
            ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                 C19620 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
                C8535) *
               C19656 * C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1527 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C1523 -
            (C8708 + C8709) * C1528 - (C8710 + C8711) * C1524) *
               C19656 * C8533 +
           ((C8709 + C8708) * C1527 + (C8711 + C8710) * C1523 -
            (C8713 + C8712) * C1528 - (C8715 + C8714) * C1524) *
               C19656 * C8534) *
              C19620 * C1525 +
          (((C10242 + C10243) * C1528 -
            ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                 C1523 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C1527) +
            (C10244 + C10245) * C1524) *
               C19656 * C8533 +
           ((C8689 * C626 + C8535 * C791 + C8690 * C631 + C8536 * C796) *
                C1528 -
            ((C10245 + C10244) * C1523 + (C10243 + C10242) * C1527) +
            (C8689 * C632 + C8535 * C797 + C8690 * C643 + C8536 * C802) *
                C1524) *
               C19656 * C8534) *
              C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1583 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C1525 -
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C1584 -
            (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) *
                C1526) *
               C19656 * C8533 +
           ((C8709 + C8708) * C1583 + (C8774 + C8775) * C1525 -
            (C10243 + C10242) * C1584 - (C10316 + C10317) * C1526) *
               C19656 * C8534) *
              C1523 +
          (((C10242 + C10243) * C1584 -
            ((C8775 + C8774) * C1525 + (C8708 + C8709) * C1583) +
            (C10317 + C10316) * C1526) *
               C19656 * C8533 +
           ((C8689 * C626 + C8535 * C791 + C8690 * C631 + C8536 * C796) *
                C1584 -
            ((C8776 + C8777) * C1525 + (C8713 + C8712) * C1583) +
            (C8689 * C691 + C8535 * C845 + C8690 * C696 + C8536 * C846) *
                C1526) *
               C19656 * C8534) *
              C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eeyz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
             (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                 C19620) *
                C19656 * C8533 +
            ((C8709 + C8708) * C200 + (C8836 + C8837) * C19620) * C19656 *
                C8534) *
               C1525 -
           (((C10388 + C10389) * C19620 + (C10243 + C10242) * C200) * C19656 *
                C8534 +
            ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                 C19620 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C200) *
                C19656 * C8533) *
               C1526) *
              C1523 +
          ((((C10242 + C10243) * C200 + (C10389 + C10388) * C19620) * C19656 *
                C8533 +
            ((C8689 * C626 + C8535 * C791 + C8690 * C631 + C8536 * C796) *
                 C200 +
             (C8689 * C741 + C8535 * C885 + C8690 * C746 + C8536 * C890) *
                 C19620) *
                C19656 * C8534) *
               C1526 -
           (((C8838 + C8839) * C19620 + (C8713 + C8712) * C200) * C19656 *
                C8534 +
            ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C19656 *
                C8533) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C1527 +
             (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
             C461 * C1524) *
                C8533 +
            (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) *
                C8534) *
               C8535 +
           ((C4676 + C4677 - C4678 - C4679) * C8533 +
            (C10456 + C10457 - C10458 - C10459) * C8534) *
               C8536) *
              C19620 * C1525 +
          (((C4678 - (C4677 + C4676) + C4679) * C8533 +
            (C10458 - (C10457 + C10456) + C10459) * C8534) *
               C8535 +
           ((C4688 - (C4681 + C4680) + C4689) * C8533 +
            ((C436 * C631 + C19656 * C934) * C1528 -
             (C4687 * C1523 + C4686 * C1527) +
             (C436 * C643 + C19656 * C940) * C1524) *
                C8534) *
               C8536) *
              C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C1583 +
             (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
             C3826 * C1526) *
                C8533 +
            (C1945 + C1946 - C1947 - C1957) * C8534) *
               C8535 +
           ((C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
                C8533 +
            (C10526 + C10527 - C10528 - C10529) * C8534) *
               C8536) *
              C1523 +
          (((C1947 - (C1946 + C1945) + C1957) * C8533 +
            (C1952 - (C1951 + C1950) + C1958) * C8534) *
               C8535 +
           ((C10528 - (C10527 + C10526) + C10529) * C8533 +
            ((C436 * C631 + C19656 * C934) * C1584 -
             (C1956 * C1525 + C1892 * C1583) +
             (C436 * C696 + C19656 * C984) * C1526) *
                C8534) *
               C8536) *
              C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C436 * C93 + C19656 * C437) * C200 +
              (C436 * C201 + C19656 * C562) * C19620) *
                 C8533 +
             (C568 + C580) * C8534) *
                C8535 +
            ((C3869 + C3881) * C8533 + C10596 * C8534) * C8536) *
               C1525 -
           (((C4799 + C4795) * C8534 + (C3882 + C3872) * C8533) * C8536 +
            (C10597 * C8534 + (C3881 + C3869) * C8533) * C8535) *
               C1526) *
              C1523 +
          (((C10596 * C8533 + (C2012 + C2018) * C8534) * C8535 +
            ((C4795 + C4799) * C8533 +
             ((C436 * C631 + C19656 * C934) * C200 +
              (C436 * C746 + C19656 * C1028) * C19620) *
                 C8534) *
                C8536) *
               C1526 -
           (((C2018 + C2012) * C8534 + C10597 * C8533) * C8536 +
            ((C581 + C571) * C8534 + (C580 + C568) * C8533) * C8535) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eexx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
             (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                 C19588) *
                C8535 +
            ((C9060 + C9061) * C625 + (C9062 + C9063) * C19588) * C8536) *
               C19656 * C2069 -
           (((C11308 + C11309) * C19588 + (C11310 + C11311) * C625) * C8536 +
            ((C8538 * C1077 + C8534 * C1089 + C8537 * C1078 + C8533 * C1090) *
                 C19588 +
             (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                 C625) *
                C8535) *
               C19656 * C2070) *
              C1525 +
          ((((C11311 + C11310) * C625 + (C11309 + C11308) * C19588) * C8535 +
            ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                 C625 +
             (C8537 * C3926 + C8533 * C3932 + C8538 * C4851 + C8534 * C4852) *
                 C19588) *
                C8536) *
               C19656 * C2070 -
           (((C9064 + C9065) * C19588 + (C9066 + C9067) * C625) * C8536 +
            ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C8535) *
               C19656 * C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1583 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C1525 -
            (C9061 + C9060) * C1584 - (C9126 + C9127) * C1526) *
               C8535 +
           ((C9060 + C9061) * C1583 + (C9127 + C9126) * C1525 -
            (C9066 + C9067) * C1584 - (C9129 + C9128) * C1526) *
               C8536) *
              C19656 * C19588 * C2069 +
          (((C11311 + C11310) * C1584 -
            ((C8538 * C1133 + C8534 * C1139 + C8537 * C1134 + C8533 * C1140) *
                 C1525 +
             (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                 C1583) +
            (C11382 + C11383) * C1526) *
               C8535 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C1584 -
            ((C11383 + C11382) * C1525 + (C11310 + C11311) * C1583) +
            (C8537 * C3973 + C8533 * C3976 + C8538 * C4903 + C8534 * C4904) *
                C1526) *
               C8536) *
              C19656 * C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C2177 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C2069 -
            (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                C2178 -
            (C8538 * C1186 + C8534 * C1192 + C8537 * C1187 + C8533 * C1193) *
                C2070) *
               C8535 +
           ((C9060 + C9061) * C2177 + (C9188 + C9189) * C2069 -
            (C11310 + C11311) * C2178 - (C11454 + C11455) * C2070) *
               C8536) *
              C19656 * C1525 +
          (((C11311 + C11310) * C2178 -
            ((C9189 + C9188) * C2069 + (C9061 + C9060) * C2177) +
            (C11455 + C11454) * C2070) *
               C8535 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C2178 -
            ((C9190 + C9191) * C2069 + (C9066 + C9067) * C2177) +
            (C8537 * C4018 + C8533 * C4021 + C8538 * C4955 + C8534 * C4956) *
                C2070) *
               C8536) *
              C19656 * C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
             (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                 C19588) *
                C19656 * C8533 +
            ((C8709 + C8708) * C625 + (C8711 + C8710) * C19588) * C19656 *
                C8534) *
               C2069 -
           (((C10873 + C10872) * C19588 + (C10871 + C10870) * C625) * C19656 *
                C8534 +
            ((C8690 * C2617 + C8536 * C2788 + C8689 * C1078 + C8535 * C1243) *
                 C19588 +
             (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                 C625) *
                C19656 * C8533) *
               C2070) *
              C1525 +
          ((((C8689 * C2611 + C8535 * C2785 + C8690 * C3923 + C8536 * C4061) *
                 C625 +
             (C8689 * C2617 + C8535 * C2788 + C8690 * C3926 + C8536 * C4064) *
                 C19588) *
                C19656 * C8533 +
            ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                 C625 +
             (C8689 * C2618 + C8535 * C2789 + C8690 * C4851 + C8536 * C5008) *
                 C19588) *
                C19656 * C8534) *
               C2070 -
           (((C10245 + C10244) * C19588 + (C10243 + C10242) * C625) * C19656 *
                C8534 +
            ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                 C19588 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C625) *
                C19656 * C8533) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1583 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C1525 -
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C1584 -
            (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) *
                C1526) *
               C19656 * C8533 +
           ((C8709 + C8708) * C1583 + (C8774 + C8775) * C1525 -
            (C10243 + C10242) * C1584 - (C10316 + C10317) * C1526) *
               C19656 * C8534) *
              C19588 * C2069 +
          (((C8689 * C2611 + C8535 * C2785 + C8690 * C3923 + C8536 * C4061) *
                C1584 -
            ((C8690 * C2673 + C8536 * C2841 + C8689 * C1134 + C8535 * C1287) *
                 C1525 +
             (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                 C1583) +
            (C8689 * C2673 + C8535 * C2841 + C8690 * C3973 + C8536 * C4105) *
                C1526) *
               C19656 * C8533 +
           ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                C1584 -
            ((C10945 + C10944) * C1525 + (C10871 + C10870) * C1583) +
            (C8689 * C2674 + C8535 * C2842 + C8690 * C4903 + C8536 * C5059) *
                C1526) *
               C19656 * C8534) *
              C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C2177 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C2069 -
            (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                C2178 -
            (C8690 * C2729 + C8536 * C2894 + C8689 * C1187 + C8535 * C1329) *
                C2070) *
               C19656 * C8533 +
           ((C8709 + C8708) * C2177 + (C8836 + C8837) * C2069 -
            (C10871 + C10870) * C2178 - (C11016 + C11017) * C2070) *
               C19656 * C8534) *
              C1525 +
          (((C8689 * C2611 + C8535 * C2785 + C8690 * C3923 + C8536 * C4061) *
                C2178 -
            ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                 C2069 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C2177) +
            (C8689 * C2729 + C8535 * C2894 + C8690 * C4018 + C8536 * C4146) *
                C2070) *
               C19656 * C8533 +
           ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                C2178 -
            ((C10388 + C10389) * C2069 + (C10243 + C10242) * C2177) +
            (C8689 * C2730 + C8535 * C2895 + C8690 * C4955 + C8536 * C5110) *
                C2070) *
               C19656 * C8534) *
              C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C436 * C93 + C19656 * C437) * C625 +
              (C436 * C101 + C19656 * C442) * C19588) *
                 C8533 +
             (C460 * C625 + C461 * C19588) * C8534) *
                C8535 +
            ((C3772 + C3773) * C8533 + (C9392 + C9393) * C8534) * C8536) *
               C2069 -
           (((C11720 + C11721) * C8534 + (C5680 + C5681) * C8533) * C8536 +
            ((C2433 * C19588 + C2432 * C625) * C8534 +
             ((C436 * C1078 + C19656 * C1381) * C19588 +
              (C436 * C1072 + C19656 * C1375) * C625) *
                 C8533) *
                C8535) *
               C2070) *
              C1525 +
          ((((C5681 + C5680) * C8533 + (C11721 + C11720) * C8534) * C8535 +
            ((C5679 + C5678) * C8533 +
             ((C436 * C4849 + C19656 * C5161) * C625 +
              (C436 * C4851 + C19656 * C5162) * C19588) *
                 C8534) *
                C8536) *
               C2070 -
           (((C9394 + C9395) * C8534 + (C3775 + C3774) * C8533) * C8536 +
            ((C9393 + C9392) * C8534 + (C3773 + C3772) * C8533) * C8535) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C1583 +
             (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
             C3826 * C1526) *
                C8533 +
            (C1945 + C1946 - C1947 - C1957) * C8534) *
               C8535 +
           ((C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
                C8533 +
            (C10526 + C10527 - C10528 - C10529) * C8534) *
               C8536) *
              C19588 * C2069 +
          (((C5677 * C1584 -
             ((C436 * C1134 + C19656 * C1425) * C1525 +
              (C436 * C1072 + C19656 * C1375) * C1583) +
             C5737 * C1526) *
                C8533 +
            (C11088 * C1584 - (C2493 * C1525 + C2432 * C1583) +
             C11159 * C1526) *
                C8534) *
               C8535 +
           ((C5675 * C1584 - (C5737 * C1525 + C5677 * C1583) + C5738 * C1526) *
                C8533 +
            ((C436 * C4849 + C19656 * C5161) * C1584 -
             (C11159 * C1525 + C11088 * C1583) +
             (C436 * C4903 + C19656 * C5213) * C1526) *
                C8534) *
               C8536) *
              C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C8533 +
                     (C2548 + C2549 - C2550 - C2560) * C8534) *
                        C8535 +
                    ((C5790 + C5791 - C5792 - C5802) * C8533 +
                     (C11227 + C11228 - C11229 - C11233) * C8534) *
                        C8536) *
                       C1525 +
                   (((C5792 - (C5791 + C5790) + C5802) * C8533 +
                     (C11229 - (C11228 + C11227) + C11233) * C8534) *
                        C8535 +
                    ((C5797 - (C5796 + C5795) + C5803) * C8533 +
                     ((C436 * C4849 + C19656 * C5161) * C2178 -
                      (C4798 * C2069 + C4686 * C2177) +
                      (C436 * C4955 + C19656 * C5264) * C2070) *
                         C8534) *
                        C8536) *
                       C1526) *
                  C19588) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C8535 +
           ((C9060 + C9061) * C625 + (C9062 + C9063) * C19588) * C8536) *
              C19656 * C19620 * C622 -
          (((C9064 + C9065) * C19588 + (C9066 + C9067) * C625) * C8536 +
           ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C8535) *
              C19656 * C19620 * C623 +
          (((C9067 + C9066) * C625 + (C9065 + C9064) * C19588) * C8535 +
           ((C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
                C625 +
            (C8537 * C3449 + C8533 * C3453 + C8538 * C4327 + C8534 * C4328) *
                C19588) *
               C8536) *
              C19656 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C90 +
           (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) * C80 -
           (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C91 -
           (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) * C81 +
           (C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C92 +
           (C8537 * C103 + C8533 * C110 + C8538 * C105 + C8534 * C111) * C82) *
              C8535 +
          ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C90 +
           (C8537 * C634 + C8533 * C646 + C8538 * C633 + C8534 * C645) * C80 -
           (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) * C91 -
           (C8538 * C632 + C8534 * C644 + C8537 * C633 + C8533 * C645) * C81 +
           (C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) * C92 +
           (C8537 * C632 + C8533 * C644 + C8538 * C1531 + C8534 * C1532) *
               C82) *
              C8536) *
         C19656 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C8535 +
           ((C9060 + C9061) * C625 + (C9062 + C9063) * C19588) * C8536) *
              C19656 * C1067 -
          (((C8538 * C2618 + C8534 * C2621 + C8537 * C2617 + C8533 * C2620) *
                C19588 +
            (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
                C625) *
               C8536 +
           ((C8538 * C1077 + C8534 * C1089 + C8537 * C1078 + C8533 * C1090) *
                C19588 +
            (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                C625) *
               C8535) *
              C19656 * C1068 +
          (((C8537 * C1073 + C8533 * C1082 + C8538 * C1074 + C8534 * C1083) *
                C625 +
            (C8537 * C1085 + C8533 * C1091 + C8538 * C1086 + C8534 * C1092) *
                C19588) *
               C8535 +
           ((C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
                C625 +
            (C8537 * C3929 + C8533 * C3933 + C8538 * C7021 + C8534 * C7022) *
                C19588) *
               C8536) *
              C19656 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C688 +
           (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) * C622 -
           (C9061 + C9060) * C689 - (C9126 + C9127) * C623 +
           (C9067 + C9066) * C690 + (C9128 + C9129) * C624) *
              C8535 +
          ((C9060 + C9061) * C688 + (C9127 + C9126) * C622 -
           (C9066 + C9067) * C689 - (C9129 + C9128) * C623 +
           (C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
               C690 +
           (C8537 * C3518 + C8533 * C3520 + C8538 * C4399 + C8534 * C4400) *
               C624) *
              C8536) *
         C19656 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C8535 +
           ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C151 +
            (C8537 * C693 + C8533 * C699 + C8538 * C692 + C8534 * C698) *
                C19609) *
               C8536) *
              C19656 * C80 -
          (((C8538 * C691 + C8534 * C697 + C8537 * C692 + C8533 * C698) *
                C19609 +
            (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) *
                C151) *
               C8536 +
           ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                C19609 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
               C8535) *
              C19656 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C151 +
            (C8537 * C154 + C8533 * C159 + C8538 * C155 + C8534 * C160) *
                C19609) *
               C8535 +
           ((C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) *
                C151 +
            (C8537 * C691 + C8533 * C697 + C8538 * C1585 + C8534 * C1586) *
                C19609) *
               C8536) *
              C19656 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C8535 +
           ((C9060 + C9061) * C151 + (C9127 + C9126) * C19609) * C8536) *
              C19656 * C19588 * C1067 -
          (((C8538 * C2674 + C8534 * C2677 + C8537 * C2673 + C8533 * C2676) *
                C19609 +
            (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
                C151) *
               C8536 +
           ((C8538 * C1133 + C8534 * C1139 + C8537 * C1134 + C8533 * C1140) *
                C19609 +
            (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                C151) *
               C8535) *
              C19656 * C19588 * C1068 +
          (((C8537 * C1073 + C8533 * C1082 + C8538 * C1074 + C8534 * C1083) *
                C151 +
            (C8537 * C1135 + C8533 * C1141 + C8538 * C1136 + C8534 * C1142) *
                C19609) *
               C8535 +
           ((C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
                C151 +
            (C8537 * C3974 + C8533 * C3977 + C8538 * C7073 + C8534 * C7074) *
                C19609) *
               C8536) *
              C19656 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eexz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C8535 +
           ((C9060 + C9061) * C200 + (C9188 + C9189) * C19620) * C8536) *
              C19656 * C622 -
          (((C9190 + C9191) * C19620 + (C9066 + C9067) * C200) * C8536 +
           ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C8535) *
              C19656 * C623 +
          (((C9067 + C9066) * C200 + (C9191 + C9190) * C19620) * C8535 +
           ((C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
                C200 +
            (C8537 * C3569 + C8533 * C3571 + C8538 * C4457 + C8534 * C4458) *
                C19620) *
               C8536) *
              C19656 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C8535 +
           ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C200 +
            (C8537 * C743 + C8533 * C749 + C8538 * C742 + C8534 * C748) *
                C19620) *
               C8536) *
              C19656 * C19609 * C80 -
          (((C8538 * C741 + C8534 * C747 + C8537 * C742 + C8533 * C748) *
                C19620 +
            (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) *
                C200) *
               C8536 +
           ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                C19620 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
               C8535) *
              C19656 * C19609 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C200 +
            (C8537 * C203 + C8533 * C208 + C8538 * C204 + C8534 * C209) *
                C19620) *
               C8535 +
           ((C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) *
                C200 +
            (C8537 * C741 + C8533 * C747 + C8538 * C1637 + C8534 * C1638) *
                C19620) *
               C8536) *
              C19656 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1182 +
           (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) * C1067 -
           (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
               C1183 -
           (C8538 * C1186 + C8534 * C1192 + C8537 * C1187 + C8533 * C1193) *
               C1068 +
           (C8537 * C1073 + C8533 * C1082 + C8538 * C1074 + C8534 * C1083) *
               C1184 +
           (C8537 * C1188 + C8533 * C1194 + C8538 * C1189 + C8534 * C1195) *
               C1069) *
              C8535 +
          ((C9060 + C9061) * C1182 + (C9188 + C9189) * C1067 -
           (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
               C1183 -
           (C8538 * C2730 + C8534 * C2733 + C8537 * C2729 + C8533 * C2732) *
               C1068 +
           (C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
               C1184 +
           (C8537 * C4017 + C8533 * C4020 + C8538 * C7125 + C8534 * C7126) *
               C1069) *
              C8536) *
         C19656 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C19656 * C8533 +
           ((C8709 + C8708) * C625 + (C8711 + C8710) * C19588) * C19656 *
               C8534) *
              C19620 * C622 -
          (((C8690 * C642 + C8536 * C801 + C8689 * C633 + C8535 * C798) *
                C19588 +
            (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) *
                C625) *
               C19656 * C8534 +
           ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                C19588 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C625) *
               C19656 * C8533) *
              C19620 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C625 +
            (C8689 * C641 + C8535 * C800 + C8690 * C3449 + C8536 * C3629) *
                C19588) *
               C19656 * C8533 +
           ((C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
                C625 +
            (C8689 * C642 + C8535 * C801 + C8690 * C4327 + C8536 * C4520) *
                C19588) *
               C19656 * C8534) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C90 +
           (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) * C80 -
           (C8708 + C8709) * C91 - (C8710 + C8711) * C81 +
           (C8712 + C8713) * C92 + (C8714 + C8715) * C82) *
              C19656 * C8533 +
          ((C8709 + C8708) * C90 + (C8711 + C8710) * C80 -
           (C8713 + C8712) * C91 - (C8715 + C8714) * C81 +
           (C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) * C92 +
           (C8689 * C105 + C8535 * C258 + C8690 * C1531 + C8536 * C1690) *
               C82) *
              C19656 * C8534) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C19656 * C8533 +
           ((C8709 + C8708) * C625 + (C8711 + C8710) * C19588) * C19656 *
               C8534) *
              C1067 -
          (((C8690 * C2618 + C8536 * C2789 + C8689 * C1077 + C8535 * C1242) *
                C19588 +
            (C8690 * C2612 + C8536 * C2786 + C8689 * C1071 + C8535 * C1236) *
                C625) *
               C19656 * C8534 +
           ((C8690 * C2617 + C8536 * C2788 + C8689 * C1078 + C8535 * C1243) *
                C19588 +
            (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                C625) *
               C19656 * C8533) *
              C1068 +
          (((C8689 * C1073 + C8535 * C1238 + C8690 * C3924 + C8536 * C4062) *
                C625 +
            (C8689 * C1085 + C8535 * C1244 + C8690 * C3929 + C8536 * C4065) *
                C19588) *
               C19656 * C8533 +
           ((C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
                C625 +
            (C8689 * C1086 + C8535 * C1245 + C8690 * C7021 + C8536 * C7178) *
                C19588) *
               C19656 * C8534) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C688 +
           (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) * C622 -
           (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) * C689 -
           (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) * C623 +
           (C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
               C690 +
           (C8689 * C694 + C8535 * C842 + C8690 * C3518 + C8536 * C3669) *
               C624) *
              C19656 * C8533 +
          ((C8709 + C8708) * C688 + (C8774 + C8775) * C622 -
           (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) * C689 -
           (C8690 * C695 + C8536 * C844 + C8689 * C692 + C8535 * C843) * C623 +
           (C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
               C690 +
           (C8689 * C695 + C8535 * C844 + C8690 * C4399 + C8536 * C4571) *
               C624) *
              C19656 * C8534) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C19656 * C8533 +
           ((C8709 + C8708) * C151 + (C8774 + C8775) * C19609) * C19656 *
               C8534) *
              C80 -
          (((C8776 + C8777) * C19609 + (C8713 + C8712) * C151) * C19656 *
               C8534 +
           ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C19656 *
               C8533) *
              C81 +
          (((C8712 + C8713) * C151 + (C8777 + C8776) * C19609) * C19656 *
               C8533 +
           ((C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) *
                C151 +
            (C8689 * C155 + C8535 * C319 + C8690 * C1585 + C8536 * C1753) *
                C19609) *
               C19656 * C8534) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C19656 * C8533 +
           ((C8709 + C8708) * C151 + (C8774 + C8775) * C19609) * C19656 *
               C8534) *
              C19588 * C1067 -
          (((C8690 * C2674 + C8536 * C2842 + C8689 * C1133 + C8535 * C1286) *
                C19609 +
            (C8690 * C2612 + C8536 * C2786 + C8689 * C1071 + C8535 * C1236) *
                C151) *
               C19656 * C8534 +
           ((C8690 * C2673 + C8536 * C2841 + C8689 * C1134 + C8535 * C1287) *
                C19609 +
            (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                C151) *
               C19656 * C8533) *
              C19588 * C1068 +
          (((C8689 * C1073 + C8535 * C1238 + C8690 * C3924 + C8536 * C4062) *
                C151 +
            (C8689 * C1135 + C8535 * C1288 + C8690 * C3974 + C8536 * C4106) *
                C19609) *
               C19656 * C8533 +
           ((C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
                C151 +
            (C8689 * C1136 + C8535 * C1289 + C8690 * C7073 + C8536 * C7229) *
                C19609) *
               C19656 * C8534) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C19656 * C8533 +
           ((C8709 + C8708) * C200 + (C8836 + C8837) * C19620) * C19656 *
               C8534) *
              C622 -
          (((C8690 * C745 + C8536 * C889 + C8689 * C742 + C8535 * C886) *
                C19620 +
            (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) *
                C200) *
               C19656 * C8534 +
           ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                C19620 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C200) *
               C19656 * C8533) *
              C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C200 +
            (C8689 * C744 + C8535 * C888 + C8690 * C3569 + C8536 * C3709) *
                C19620) *
               C19656 * C8533 +
           ((C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
                C200 +
            (C8689 * C745 + C8535 * C889 + C8690 * C4457 + C8536 * C4622) *
                C19620) *
               C19656 * C8534) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C19656 * C8533 +
           ((C8709 + C8708) * C200 + (C8836 + C8837) * C19620) * C19656 *
               C8534) *
              C19609 * C80 -
          (((C8838 + C8839) * C19620 + (C8713 + C8712) * C200) * C19656 *
               C8534 +
           ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C19656 *
               C8533) *
              C19609 * C81 +
          (((C8712 + C8713) * C200 + (C8839 + C8838) * C19620) * C19656 *
               C8533 +
           ((C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) *
                C200 +
            (C8689 * C204 + C8535 * C379 + C8690 * C1637 + C8536 * C1818) *
                C19620) *
               C19656 * C8534) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1182 +
           (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) * C1067 -
           (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
               C1183 -
           (C8690 * C2729 + C8536 * C2894 + C8689 * C1187 + C8535 * C1329) *
               C1068 +
           (C8689 * C1073 + C8535 * C1238 + C8690 * C3924 + C8536 * C4062) *
               C1184 +
           (C8689 * C1188 + C8535 * C1330 + C8690 * C4017 + C8536 * C4147) *
               C1069) *
              C19656 * C8533 +
          ((C8709 + C8708) * C1182 + (C8836 + C8837) * C1067 -
           (C8690 * C2612 + C8536 * C2786 + C8689 * C1071 + C8535 * C1236) *
               C1183 -
           (C8690 * C2730 + C8536 * C2895 + C8689 * C1186 + C8535 * C1331) *
               C1068 +
           (C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
               C1184 +
           (C8689 * C1189 + C8535 * C1332 + C8690 * C7125 + C8536 * C7280) *
               C1069) *
              C19656 * C8534) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C625 +
             (C436 * C101 + C19656 * C442) * C19588) *
                C8533 +
            (C460 * C625 + C461 * C19588) * C8534) *
               C8535 +
           ((C3772 + C3773) * C8533 + (C9392 + C9393) * C8534) * C8536) *
              C19620 * C622 -
          (((C9394 + C9395) * C8534 + (C3775 + C3774) * C8533) * C8536 +
           ((C9393 + C9392) * C8534 + (C3773 + C3772) * C8533) * C8535) *
              C19620 * C623 +
          ((C3778 * C8533 + (C9395 + C9394) * C8534) * C8535 +
           ((C3777 + C3776) * C8533 +
            ((C436 * C4325 + C19656 * C4673) * C625 +
             (C436 * C4327 + C19656 * C4674) * C19588) *
                C8534) *
               C8536) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C90 +
            (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
            C462 * C92 + C463 * C82) *
               C8533 +
           (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
            C465 * C82) *
               C8534) *
              C8535 +
          ((C3766 * C90 + C3767 * C80 - C1890 * C91 - C1891 * C81 +
            C1892 * C92 + C1893 * C82) *
               C8533 +
           (C1890 * C90 + C1891 * C80 - C1892 * C91 - C1893 * C81 +
            (C436 * C1529 + C19656 * C1879) * C92 +
            (C436 * C1531 + C19656 * C1880) * C82) *
               C8534) *
              C8536) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C625 +
             (C436 * C101 + C19656 * C442) * C19588) *
                C8533 +
            (C460 * C625 + C461 * C19588) * C8534) *
               C8535 +
           ((C3772 + C3773) * C8533 + (C9392 + C9393) * C8534) * C8536) *
              C1067 -
          ((((C436 * C2618 + C19656 * C2951) * C19588 +
             (C436 * C2612 + C19656 * C2948) * C625) *
                C8534 +
            (C5680 + C5681) * C8533) *
               C8536 +
           ((C2433 * C19588 + C2432 * C625) * C8534 +
            ((C436 * C1078 + C19656 * C1381) * C19588 +
             (C436 * C1072 + C19656 * C1375) * C625) *
                C8533) *
               C8535) *
              C1068 +
          ((((C436 * C1073 + C19656 * C1376) * C625 +
             (C436 * C1085 + C19656 * C1382) * C19588) *
                C8533 +
            ((C436 * C1074 + C19656 * C1377) * C625 +
             (C436 * C1086 + C19656 * C1383) * C19588) *
                C8534) *
               C8535 +
           (((C436 * C3924 + C19656 * C4188) * C625 +
             (C436 * C3929 + C19656 * C4191) * C19588) *
                C8533 +
            ((C436 * C7019 + C19656 * C7331) * C625 +
             (C436 * C7021 + C19656 * C7332) * C19588) *
                C8534) *
               C8536) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C688 +
            (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
            C3768 * C690 + C3827 * C624) *
               C8533 +
           (C460 * C688 + C518 * C622 - C1890 * C689 - C1955 * C623 +
            C4686 * C690 + C4743 * C624) *
               C8534) *
              C8535 +
          ((C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
            C3771 * C690 + C3828 * C624) *
               C8533 +
           (C1890 * C688 + C1955 * C622 - C4686 * C689 - C4743 * C623 +
            (C436 * C4325 + C19656 * C4673) * C690 +
            (C436 * C4399 + C19656 * C4739) * C624) *
               C8534) *
              C8536) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C8533 +
            (C509 + C521) * C8534) *
               C8535 +
           ((C3766 * C151 + C3826 * C19609) * C8533 + (C8940 + C8941) * C8534) *
               C8536) *
              C80 -
          (((C8942 + C8943) * C8534 + (C8941 + C8940) * C8533) * C8536 +
           ((C522 + C512) * C8534 + (C521 + C509) * C8533) * C8535) *
              C81 +
          ((C524 * C8533 + (C517 + C523) * C8534) * C8535 +
           ((C8943 + C8942) * C8533 +
            ((C436 * C1529 + C19656 * C1879) * C151 +
             (C436 * C1585 + C19656 * C1943) * C19609) *
                C8534) *
               C8536) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C8533 +
            (C509 + C521) * C8534) *
               C8535 +
           ((C3766 * C151 + C3826 * C19609) * C8533 + (C8940 + C8941) * C8534) *
               C8536) *
              C19588 * C1067 -
          ((((C436 * C2674 + C19656 * C3004) * C19609 +
             (C436 * C2612 + C19656 * C2948) * C151) *
                C8534 +
            (C5737 * C19609 + C5677 * C151) * C8533) *
               C8536 +
           ((C2495 + C2487) * C8534 +
            ((C436 * C1134 + C19656 * C1425) * C19609 +
             (C436 * C1072 + C19656 * C1375) * C151) *
                C8533) *
               C8535) *
              C19588 * C1068 +
          ((((C436 * C1073 + C19656 * C1376) * C151 +
             (C436 * C1135 + C19656 * C1426) * C19609) *
                C8533 +
            ((C436 * C1074 + C19656 * C1377) * C151 +
             (C436 * C1136 + C19656 * C1427) * C19609) *
                C8534) *
               C8535 +
           (((C436 * C3924 + C19656 * C4188) * C151 +
             (C436 * C3974 + C19656 * C4232) * C19609) *
                C8533 +
            ((C436 * C7019 + C19656 * C7331) * C151 +
             (C436 * C7073 + C19656 * C7383) * C19609) *
                C8534) *
               C8536) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eezz[2] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C8533 +
            (C568 + C580) * C8534) *
               C8535 +
           ((C3869 + C3881) * C8533 + (C2015 + C2019) * C8534) * C8536) *
              C622 -
          (((C4799 + C4795) * C8534 + (C3882 + C3872) * C8533) * C8536 +
           ((C2019 + C2015) * C8534 + (C3881 + C3869) * C8533) * C8535) *
              C623 +
          ((C3884 * C8533 + (C4795 + C4799) * C8534) * C8535 +
           ((C3877 + C3883) * C8533 +
            ((C436 * C4325 + C19656 * C4673) * C200 +
             (C436 * C4457 + C19656 * C4793) * C19620) *
                C8534) *
               C8536) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C8533 +
            (C568 + C580) * C8534) *
               C8535 +
           ((C3869 + C3881) * C8533 + (C2015 + C2019) * C8534) * C8536) *
              C19609 * C80 -
          (((C2018 + C2012) * C8534 + (C2019 + C2015) * C8533) * C8536 +
           ((C581 + C571) * C8534 + (C580 + C568) * C8533) * C8535) *
              C19609 * C81 +
          ((C583 * C8533 + (C576 + C582) * C8534) * C8535 +
           ((C2012 + C2018) * C8533 +
            ((C436 * C1529 + C19656 * C1879) * C200 +
             (C436 * C1637 + C19656 * C2008) * C19620) *
                C8534) *
               C8536) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1182 +
            (C436 * C201 + C19656 * C562) * C1067 -
            (C436 * C1072 + C19656 * C1375) * C1183 -
            (C436 * C1187 + C19656 * C1467) * C1068 +
            (C436 * C1073 + C19656 * C1376) * C1184 +
            (C436 * C1188 + C19656 * C1468) * C1069) *
               C8533 +
           (C460 * C1182 + C577 * C1067 - C2432 * C1183 - C2558 * C1068 +
            (C436 * C1074 + C19656 * C1377) * C1184 +
            (C436 * C1189 + C19656 * C1470) * C1069) *
               C8534) *
              C8535 +
          ((C3766 * C1182 + C3878 * C1067 - C5677 * C1183 - C5800 * C1068 +
            (C436 * C3924 + C19656 * C4188) * C1184 +
            (C436 * C4017 + C19656 * C4272) * C1069) *
               C8533 +
           (C1890 * C1182 + C2017 * C1067 -
            (C436 * C2612 + C19656 * C2948) * C1183 -
            (C436 * C2730 + C19656 * C3057) * C1068 +
            (C436 * C7019 + C19656 * C7331) * C1184 +
            (C436 * C7125 + C19656 * C7434) * C1069) *
               C8534) *
              C8536) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1527 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C1523 -
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1528 -
            (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) *
                C1524) *
               C8535 +
           ((C9060 + C9061) * C1527 + (C9062 + C9063) * C1523 -
            (C10020 + C10021) * C1528 - (C10022 + C10023) * C1524) *
               C8536) *
              C19656 * C2069 +
          (((C8537 * C1071 + C8533 * C1080 + C8538 * C1070 + C8534 * C1079) *
                C1528 -
            ((C8538 * C1077 + C8534 * C1089 + C8537 * C1078 + C8533 * C1090) *
                 C1523 +
             (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                 C1527) +
            (C8537 * C1077 + C8533 * C1089 + C8538 * C1076 + C8534 * C1088) *
                C1524) *
               C8535 +
           ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                C1528 -
            ((C8538 * C2618 + C8534 * C2621 + C8537 * C2617 + C8533 * C2620) *
                 C1523 +
             (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
                 C1527) +
            (C8537 * C2618 + C8533 * C2621 + C8538 * C2619 + C8534 * C2622) *
                C1524) *
               C8536) *
              C19656 * C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
             (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                 C19609) *
                C8535 +
            ((C9060 + C9061) * C151 + (C9127 + C9126) * C19609) * C8536) *
               C19656 * C1523 -
           (((C10095 + C10094) * C19609 + (C10020 + C10021) * C151) * C8536 +
            ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                 C19609 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
                C8535) *
               C19656 * C1524) *
              C2069 +
          ((((C8537 * C1071 + C8533 * C1080 + C8538 * C1070 + C8534 * C1079) *
                 C151 +
             (C8537 * C1133 + C8533 * C1139 + C8538 * C1132 + C8534 * C1138) *
                 C19609) *
                C8535 +
            ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                 C151 +
             (C8537 * C2674 + C8533 * C2677 + C8538 * C2675 + C8534 * C2678) *
                 C19609) *
                C8536) *
               C19656 * C1524 -
           (((C8538 * C2674 + C8534 * C2677 + C8537 * C2673 + C8533 * C2676) *
                 C19609 +
             (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
                 C151) *
                C8536 +
            ((C8538 * C1133 + C8534 * C1139 + C8537 * C1134 + C8533 * C1140) *
                 C19609 +
             (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                 C151) *
                C8535) *
               C19656 * C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C2177 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C2069 -
            (C8538 * C1071 + C8534 * C1080 + C8537 * C1072 + C8533 * C1081) *
                C2178 -
            (C8538 * C1186 + C8534 * C1192 + C8537 * C1187 + C8533 * C1193) *
                C2070) *
               C8535 +
           ((C9060 + C9061) * C2177 + (C9188 + C9189) * C2069 -
            (C8538 * C2612 + C8534 * C2615 + C8537 * C2611 + C8533 * C2614) *
                C2178 -
            (C8538 * C2730 + C8534 * C2733 + C8537 * C2729 + C8533 * C2732) *
                C2070) *
               C8536) *
              C19656 * C19609 * C1523 +
          (((C8537 * C1071 + C8533 * C1080 + C8538 * C1070 + C8534 * C1079) *
                C2178 -
            ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                 C2069 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C2177) +
            (C8537 * C1186 + C8533 * C1192 + C8538 * C1185 + C8534 * C1191) *
                C2070) *
               C8535 +
           ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                C2178 -
            ((C10167 + C10166) * C2069 + (C10020 + C10021) * C2177) +
            (C8537 * C2730 + C8533 * C2733 + C8538 * C2731 + C8534 * C2734) *
                C2070) *
               C8536) *
              C19656 * C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1527 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C1523 -
            (C8708 + C8709) * C1528 - (C8710 + C8711) * C1524) *
               C19656 * C8533 +
           ((C8709 + C8708) * C1527 + (C8711 + C8710) * C1523 -
            (C8713 + C8712) * C1528 - (C8715 + C8714) * C1524) *
               C19656 * C8534) *
              C2069 +
          (((C10870 + C10871) * C1528 -
            ((C8690 * C2617 + C8536 * C2788 + C8689 * C1078 + C8535 * C1243) *
                 C1523 +
             (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                 C1527) +
            (C10872 + C10873) * C1524) *
               C19656 * C8533 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C1528 -
            ((C10873 + C10872) * C1523 + (C10871 + C10870) * C1527) +
            (C8689 * C1076 + C8535 * C1241 + C8690 * C2619 + C8536 * C2790) *
                C1524) *
               C19656 * C8534) *
              C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
             (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                 C19609) *
                C19656 * C8533 +
            ((C8709 + C8708) * C151 + (C8774 + C8775) * C19609) * C19656 *
                C8534) *
               C1523 -
           (((C8776 + C8777) * C19609 + (C8713 + C8712) * C151) * C19656 *
                C8534 +
            ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C19656 *
                C8533) *
               C1524) *
              C2069 +
          ((((C10870 + C10871) * C151 + (C10944 + C10945) * C19609) * C19656 *
                C8533 +
            ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                 C151 +
             (C8689 * C1132 + C8535 * C1285 + C8690 * C2675 + C8536 * C2843) *
                 C19609) *
                C19656 * C8534) *
               C1524 -
           (((C10945 + C10944) * C19609 + (C10871 + C10870) * C151) * C19656 *
                C8534 +
            ((C8690 * C2673 + C8536 * C2841 + C8689 * C1134 + C8535 * C1287) *
                 C19609 +
             (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                 C151) *
                C19656 * C8533) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C2177 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C2069 -
            (C8690 * C2611 + C8536 * C2785 + C8689 * C1072 + C8535 * C1237) *
                C2178 -
            (C8690 * C2729 + C8536 * C2894 + C8689 * C1187 + C8535 * C1329) *
                C2070) *
               C19656 * C8533 +
           ((C8709 + C8708) * C2177 + (C8836 + C8837) * C2069 -
            (C10871 + C10870) * C2178 - (C11016 + C11017) * C2070) *
               C19656 * C8534) *
              C19609 * C1523 +
          (((C10870 + C10871) * C2178 -
            ((C8837 + C8836) * C2069 + (C8708 + C8709) * C2177) +
            (C11017 + C11016) * C2070) *
               C19656 * C8533 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C2178 -
            ((C8838 + C8839) * C2069 + (C8713 + C8712) * C2177) +
            (C8689 * C1185 + C8535 * C1333 + C8690 * C2731 + C8536 * C2896) *
                C2070) *
               C19656 * C8534) *
              C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C1527 +
             (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
             C461 * C1524) *
                C8533 +
            (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) *
                C8534) *
               C8535 +
           ((C4676 + C4677 - C4678 - C4679) * C8533 +
            (C10456 + C10457 - C10458 - C10459) * C8534) *
               C8536) *
              C2069 +
          (((C2432 * C1528 -
             ((C436 * C1078 + C19656 * C1381) * C1523 +
              (C436 * C1072 + C19656 * C1375) * C1527) +
             C2433 * C1524) *
                C8533 +
            (C2434 * C1528 - (C2433 * C1523 + C2432 * C1527) + C2435 * C1524) *
                C8534) *
               C8535 +
           ((C11088 * C1528 - (C5676 * C1523 + C5677 * C1527) +
             C11089 * C1524) *
                C8533 +
            ((C436 * C2613 + C19656 * C2949) * C1528 -
             (C11089 * C1523 + C11088 * C1527) +
             (C436 * C2619 + C19656 * C2952) * C1524) *
                C8534) *
               C8536) *
              C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C436 * C93 + C19656 * C437) * C151 +
              (C436 * C152 + C19656 * C503) * C19609) *
                 C8533 +
             (C509 + C521) * C8534) *
                C8535 +
            ((C3766 * C151 + C3826 * C19609) * C8533 +
             (C8940 + C8941) * C8534) *
                C8536) *
               C1523 -
           (((C8942 + C8943) * C8534 + (C8941 + C8940) * C8533) * C8536 +
            ((C522 + C512) * C8534 + (C521 + C509) * C8533) * C8535) *
               C1524) *
              C2069 +
          ((((C2487 + C2495) * C8533 + (C2490 + C2496) * C8534) * C8535 +
            ((C11156 + C11160) * C8533 +
             ((C436 * C2613 + C19656 * C2949) * C151 +
              (C436 * C2675 + C19656 * C3005) * C19609) *
                 C8534) *
                C8536) *
               C1524 -
           (((C11160 + C11156) * C8534 +
             (C5737 * C19609 + C5677 * C151) * C8533) *
                C8536 +
            ((C2495 + C2487) * C8534 +
             ((C436 * C1134 + C19656 * C1425) * C19609 +
              (C436 * C1072 + C19656 * C1375) * C151) *
                 C8533) *
                C8535) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C8533 +
                     (C2548 + C2549 - C2550 - C2560) * C8534) *
                        C8535 +
                    ((C5790 + C5791 - C5792 - C5802) * C8533 +
                     (C11227 + C11228 - C11229 - C11233) * C8534) *
                        C8536) *
                       C19609 * C1523 +
                   (((C2550 - (C2549 + C2548) + C2560) * C8533 +
                     (C2555 - (C2554 + C2553) + C2561) * C8534) *
                        C8535 +
                    ((C11229 - (C11228 + C11227) + C11233) * C8533 +
                     ((C436 * C2613 + C19656 * C2949) * C2178 -
                      (C2016 * C2069 + C1892 * C2177) +
                      (C436 * C2731 + C19656 * C3058) * C2070) *
                         C8534) *
                        C8536) *
                       C19609 * C1524)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C90 +
           (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) * C80 -
           (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C91 -
           (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) * C81 +
           (C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C92 +
           (C8537 * C103 + C8533 * C110 + C8538 * C105 + C8534 * C111) * C82) *
              C8535 +
          ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C90 +
           (C8537 * C634 + C8533 * C646 + C8538 * C633 + C8534 * C645) * C80 -
           (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) * C91 -
           (C8538 * C632 + C8534 * C644 + C8537 * C633 + C8533 * C645) * C81 +
           (C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) * C92 +
           (C8537 * C632 + C8533 * C644 + C8538 * C1531 + C8534 * C1532) *
               C82) *
              C8536) *
         C19656 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C8535 +
           ((C9060 + C9061) * C625 + (C9062 + C9063) * C19588) * C8536) *
              C19656 * C19620 * C622 -
          (((C9064 + C9065) * C19588 + (C9066 + C9067) * C625) * C8536 +
           ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C8535) *
              C19656 * C19620 * C623 +
          (((C9067 + C9066) * C625 + (C9065 + C9064) * C19588) * C8535 +
           ((C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
                C625 +
            (C8537 * C3449 + C8533 * C3453 + C8538 * C4327 + C8534 * C4328) *
                C19588) *
               C8536) *
              C19656 * C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C8535 +
           ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C151 +
            (C8537 * C693 + C8533 * C699 + C8538 * C692 + C8534 * C698) *
                C19609) *
               C8536) *
              C19656 * C80 -
          (((C8538 * C691 + C8534 * C697 + C8537 * C692 + C8533 * C698) *
                C19609 +
            (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) *
                C151) *
               C8536 +
           ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                C19609 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
               C8535) *
              C19656 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C151 +
            (C8537 * C154 + C8533 * C159 + C8538 * C155 + C8534 * C160) *
                C19609) *
               C8535 +
           ((C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) *
                C151 +
            (C8537 * C691 + C8533 * C697 + C8538 * C1585 + C8534 * C1586) *
                C19609) *
               C8536) *
              C19656 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C688 +
           (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) * C622 -
           (C9061 + C9060) * C689 - (C9126 + C9127) * C623 +
           (C9067 + C9066) * C690 + (C9128 + C9129) * C624) *
              C8535 +
          ((C9060 + C9061) * C688 + (C9127 + C9126) * C622 -
           (C9066 + C9067) * C689 - (C9129 + C9128) * C623 +
           (C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
               C690 +
           (C8537 * C3518 + C8533 * C3520 + C8538 * C4399 + C8534 * C4400) *
               C624) *
              C8536) *
         C19656 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C8535 +
           ((C8537 * C628 + C8533 * C637 + C8538 * C627 + C8534 * C636) * C200 +
            (C8537 * C743 + C8533 * C749 + C8538 * C742 + C8534 * C748) *
                C19620) *
               C8536) *
              C19656 * C19609 * C80 -
          (((C8538 * C741 + C8534 * C747 + C8537 * C742 + C8533 * C748) *
                C19620 +
            (C8538 * C626 + C8534 * C635 + C8537 * C627 + C8533 * C636) *
                C200) *
               C8536 +
           ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                C19620 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
               C8535) *
              C19656 * C19609 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C200 +
            (C8537 * C203 + C8533 * C208 + C8538 * C204 + C8534 * C209) *
                C19620) *
               C8535 +
           ((C8537 * C626 + C8533 * C635 + C8538 * C1529 + C8534 * C1530) *
                C200 +
            (C8537 * C741 + C8533 * C747 + C8538 * C1637 + C8534 * C1638) *
                C19620) *
               C8536) *
              C19656 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C8535 +
           ((C9060 + C9061) * C200 + (C9188 + C9189) * C19620) * C8536) *
              C19656 * C622 -
          (((C9190 + C9191) * C19620 + (C9066 + C9067) * C200) * C8536 +
           ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C8535) *
              C19656 * C623 +
          (((C9067 + C9066) * C200 + (C9191 + C9190) * C19620) * C8535 +
           ((C8537 * C3447 + C8533 * C3450 + C8538 * C4325 + C8534 * C4326) *
                C200 +
            (C8537 * C3569 + C8533 * C3571 + C8538 * C4457 + C8534 * C4458) *
                C19620) *
               C8536) *
              C19656 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C90 +
           (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) * C80 -
           (C8708 + C8709) * C91 - (C8710 + C8711) * C81 +
           (C8712 + C8713) * C92 + (C8714 + C8715) * C82) *
              C19656 * C8533 +
          ((C8709 + C8708) * C90 + (C8711 + C8710) * C80 -
           (C8713 + C8712) * C91 - (C8715 + C8714) * C81 +
           (C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) * C92 +
           (C8689 * C105 + C8535 * C258 + C8690 * C1531 + C8536 * C1690) *
               C82) *
              C19656 * C8534) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C19656 * C8533 +
           ((C8709 + C8708) * C625 + (C8711 + C8710) * C19588) * C19656 *
               C8534) *
              C19620 * C622 -
          (((C8690 * C642 + C8536 * C801 + C8689 * C633 + C8535 * C798) *
                C19588 +
            (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) *
                C625) *
               C19656 * C8534 +
           ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                C19588 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C625) *
               C19656 * C8533) *
              C19620 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C625 +
            (C8689 * C641 + C8535 * C800 + C8690 * C3449 + C8536 * C3629) *
                C19588) *
               C19656 * C8533 +
           ((C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
                C625 +
            (C8689 * C642 + C8535 * C801 + C8690 * C4327 + C8536 * C4520) *
                C19588) *
               C19656 * C8534) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C19656 * C8533 +
           ((C8709 + C8708) * C151 + (C8774 + C8775) * C19609) * C19656 *
               C8534) *
              C80 -
          (((C8776 + C8777) * C19609 + (C8713 + C8712) * C151) * C19656 *
               C8534 +
           ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C19656 *
               C8533) *
              C81 +
          (((C8712 + C8713) * C151 + (C8777 + C8776) * C19609) * C19656 *
               C8533 +
           ((C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) *
                C151 +
            (C8689 * C155 + C8535 * C319 + C8690 * C1585 + C8536 * C1753) *
                C19609) *
               C19656 * C8534) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C688 +
           (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) * C622 -
           (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) * C689 -
           (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) * C623 +
           (C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
               C690 +
           (C8689 * C694 + C8535 * C842 + C8690 * C3518 + C8536 * C3669) *
               C624) *
              C19656 * C8533 +
          ((C8709 + C8708) * C688 + (C8774 + C8775) * C622 -
           (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) * C689 -
           (C8690 * C695 + C8536 * C844 + C8689 * C692 + C8535 * C843) * C623 +
           (C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
               C690 +
           (C8689 * C695 + C8535 * C844 + C8690 * C4399 + C8536 * C4571) *
               C624) *
              C19656 * C8534) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C19656 * C8533 +
           ((C8709 + C8708) * C200 + (C8836 + C8837) * C19620) * C19656 *
               C8534) *
              C19609 * C80 -
          (((C8838 + C8839) * C19620 + (C8713 + C8712) * C200) * C19656 *
               C8534 +
           ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C19656 *
               C8533) *
              C19609 * C81 +
          (((C8712 + C8713) * C200 + (C8839 + C8838) * C19620) * C19656 *
               C8533 +
           ((C8689 * C96 + C8535 * C253 + C8690 * C1529 + C8536 * C1689) *
                C200 +
            (C8689 * C204 + C8535 * C379 + C8690 * C1637 + C8536 * C1818) *
                C19620) *
               C19656 * C8534) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C19656 * C8533 +
           ((C8709 + C8708) * C200 + (C8836 + C8837) * C19620) * C19656 *
               C8534) *
              C622 -
          (((C8690 * C745 + C8536 * C889 + C8689 * C742 + C8535 * C886) *
                C19620 +
            (C8690 * C630 + C8536 * C795 + C8689 * C627 + C8535 * C792) *
                C200) *
               C19656 * C8534 +
           ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                C19620 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C200) *
               C19656 * C8533) *
              C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C200 +
            (C8689 * C744 + C8535 * C888 + C8690 * C3569 + C8536 * C3709) *
                C19620) *
               C19656 * C8533 +
           ((C8689 * C630 + C8535 * C795 + C8690 * C4325 + C8536 * C4519) *
                C200 +
            (C8689 * C745 + C8535 * C889 + C8690 * C4457 + C8536 * C4622) *
                C19620) *
               C19656 * C8534) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C90 +
            (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
            C462 * C92 + C463 * C82) *
               C8533 +
           (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
            C465 * C82) *
               C8534) *
              C8535 +
          ((C3766 * C90 + C3767 * C80 - C1890 * C91 - C1891 * C81 +
            C1892 * C92 + C1893 * C82) *
               C8533 +
           (C1890 * C90 + C1891 * C80 - C1892 * C91 - C1893 * C81 +
            (C436 * C1529 + C19656 * C1879) * C92 +
            (C436 * C1531 + C19656 * C1880) * C82) *
               C8534) *
              C8536) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C625 +
             (C436 * C101 + C19656 * C442) * C19588) *
                C8533 +
            (C460 * C625 + C461 * C19588) * C8534) *
               C8535 +
           ((C3772 + C3773) * C8533 + (C9392 + C9393) * C8534) * C8536) *
              C19620 * C622 -
          (((C9394 + C9395) * C8534 + (C3775 + C3774) * C8533) * C8536 +
           ((C9393 + C9392) * C8534 + (C3773 + C3772) * C8533) * C8535) *
              C19620 * C623 +
          ((C3778 * C8533 + (C9395 + C9394) * C8534) * C8535 +
           ((C3777 + C3776) * C8533 +
            ((C436 * C4325 + C19656 * C4673) * C625 +
             (C436 * C4327 + C19656 * C4674) * C19588) *
                C8534) *
               C8536) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C8533 +
            (C509 + C521) * C8534) *
               C8535 +
           ((C3766 * C151 + C3826 * C19609) * C8533 + (C8940 + C8941) * C8534) *
               C8536) *
              C80 -
          (((C8942 + C8943) * C8534 + (C8941 + C8940) * C8533) * C8536 +
           ((C522 + C512) * C8534 + (C521 + C509) * C8533) * C8535) *
              C81 +
          ((C524 * C8533 + (C517 + C523) * C8534) * C8535 +
           ((C8943 + C8942) * C8533 +
            ((C436 * C1529 + C19656 * C1879) * C151 +
             (C436 * C1585 + C19656 * C1943) * C19609) *
                C8534) *
               C8536) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C688 +
            (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
            C3768 * C690 + C3827 * C624) *
               C8533 +
           (C460 * C688 + C518 * C622 - C1890 * C689 - C1955 * C623 +
            C4686 * C690 + C4743 * C624) *
               C8534) *
              C8535 +
          ((C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
            C3771 * C690 + C3828 * C624) *
               C8533 +
           (C1890 * C688 + C1955 * C622 - C4686 * C689 - C4743 * C623 +
            (C436 * C4325 + C19656 * C4673) * C690 +
            (C436 * C4399 + C19656 * C4739) * C624) *
               C8534) *
              C8536) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C8533 +
            (C568 + C580) * C8534) *
               C8535 +
           ((C3869 + C3881) * C8533 + (C2015 + C2019) * C8534) * C8536) *
              C19609 * C80 -
          (((C2018 + C2012) * C8534 + (C2019 + C2015) * C8533) * C8536 +
           ((C581 + C571) * C8534 + (C580 + C568) * C8533) * C8535) *
              C19609 * C81 +
          ((C583 * C8533 + (C576 + C582) * C8534) * C8535 +
           ((C2012 + C2018) * C8533 +
            ((C436 * C1529 + C19656 * C1879) * C200 +
             (C436 * C1637 + C19656 * C2008) * C19620) *
                C8534) *
               C8536) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C8533 +
            (C568 + C580) * C8534) *
               C8535 +
           ((C3869 + C3881) * C8533 + (C2015 + C2019) * C8534) * C8536) *
              C622 -
          (((C4799 + C4795) * C8534 + (C3882 + C3872) * C8533) * C8536 +
           ((C2019 + C2015) * C8534 + (C3881 + C3869) * C8533) * C8535) *
              C623 +
          ((C3884 * C8533 + (C4795 + C4799) * C8534) * C8535 +
           ((C3877 + C3883) * C8533 +
            ((C436 * C4325 + C19656 * C4673) * C200 +
             (C436 * C4457 + C19656 * C4793) * C19620) *
                C8534) *
               C8536) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[5] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C8535 +
                     (C4330 + C4331 - C4346 - C4347) * C8536) *
                        C11903 +
                    ((C7490 + C7491 - C7506 - C7507) * C8535 +
                     (C16716 + C16717 - C16724 - C16725) * C8536) *
                        C11904) *
                       C19620 * C1525 +
                   (((C4346 - (C4331 + C4330) + C4347) * C8535 +
                     (C4348 - (C4337 + C4336) + C4349) * C8536) *
                        C11903 +
                    ((C16724 - (C16717 + C16716) + C16725) * C8535 +
                     ((C3101 * C4849 + C19577 * C4850) * C1528 -
                      (C5328 * C1523 + C5329 * C1527) +
                      (C3101 * C4851 + C19577 * C4852) * C1524) *
                         C8536) *
                        C11904) *
                       C19620 * C1526)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C1583 +
             (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
             C3529 * C1526) *
                C8535 +
            (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
                C8536) *
               C11903 +
           ((C8074 + C8075 - C8076 - C8077) * C8535 +
            (C5331 * C1583 + C5392 * C1525 - C5329 * C1584 - C5393 * C1526) *
                C8536) *
               C11904) *
              C1523 +
          (((C4342 * C1584 -
             ((C3101 * C153 + C19577 * C158) * C1525 +
              (C3101 * C94 + C19577 * C99) * C1583) +
             C4406 * C1526) *
                C8535 +
            (C4344 * C1584 - (C4406 * C1525 + C4342 * C1583) + C4407 * C1526) *
                C8536) *
               C11903 +
           ((C16722 * C1584 - (C7569 * C1525 + C7502 * C1583) +
             C16794 * C1526) *
                C8535 +
            ((C3101 * C4849 + C19577 * C4850) * C1584 -
             (C16794 * C1525 + C16722 * C1583) +
             (C3101 * C4903 + C19577 * C4904) * C1526) *
                C8536) *
               C11904) *
              C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C3101 * C93 + C19577 * C98) * C200 +
              (C3101 * C201 + C19577 * C206) * C19620) *
                 C8535 +
             (C3574 + C3586) * C8536) *
                C11903 +
            ((C6552 * C200 + C6673 * C19620) * C8535 +
             (C15796 + C15797) * C8536) *
                C11904) *
               C1525 -
           (((C15798 + C15799) * C8536 + (C15797 + C15796) * C8535) * C11904 +
            ((C3587 + C3577) * C8536 + (C3586 + C3574) * C8535) * C11903) *
               C1526) *
              C1523 +
          ((((C4460 + C4468) * C8535 + (C4463 + C4469) * C8536) * C11903 +
            ((C16861 + C16865) * C8535 +
             ((C3101 * C4849 + C19577 * C4850) * C200 +
              (C3101 * C4955 + C19577 * C4956) * C19620) *
                 C8536) *
                C11904) *
               C1526 -
           (((C16865 + C16861) * C8536 +
             (C7628 * C19620 + C7502 * C200) * C8535) *
                C11904 +
            ((C4468 + C4460) * C8536 +
             ((C3101 * C202 + C19577 * C207) * C19620 +
              (C3101 * C94 + C19577 * C99) * C200) *
                 C8535) *
                C11903) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1527 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C1523 -
            (C8708 + C8709) * C1528 - (C8710 + C8711) * C1524) *
               C11903 +
           ((C16368 + C16369) * C1527 + (C16370 + C16371) * C1523 -
            (C10871 + C10870) * C1528 - (C10873 + C10872) * C1524) *
               C11904) *
              C19577 * C19620 * C1525 +
          (((C10242 + C10243) * C1528 -
            ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                 C1523 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C1527) +
            (C10244 + C10245) * C1524) *
               C11903 +
           ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                C1528 -
            ((C8690 * C3926 + C8536 * C4064 + C8689 * C2617 + C8535 * C2788) *
                 C1523 +
             (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                 C1527) +
            (C8689 * C2618 + C8535 * C2789 + C8690 * C4851 + C8536 * C5008) *
                C1524) *
               C11904) *
              C19577 * C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1583 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C1525 -
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C1584 -
            (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) *
                C1526) *
               C11903 +
           ((C16368 + C16369) * C1583 + (C16434 + C16435) * C1525 -
            (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                C1584 -
            (C8690 * C3973 + C8536 * C4105 + C8689 * C2673 + C8535 * C2841) *
                C1526) *
               C11904) *
              C19577 * C1523 +
          (((C10242 + C10243) * C1584 -
            ((C8775 + C8774) * C1525 + (C8708 + C8709) * C1583) +
            (C10317 + C10316) * C1526) *
               C11903 +
           ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                C1584 -
            ((C10945 + C10944) * C1525 + (C10871 + C10870) * C1583) +
            (C8689 * C2674 + C8535 * C2842 + C8690 * C4903 + C8536 * C5059) *
                C1526) *
               C11904) *
              C19577 * C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
             (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                 C19620) *
                C11903 +
            ((C16368 + C16369) * C200 + (C16497 + C16496) * C19620) * C11904) *
               C19577 * C1525 -
           (((C8690 * C4018 + C8536 * C4146 + C8689 * C2729 + C8535 * C2894) *
                 C19620 +
             (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                 C200) *
                C11904 +
            ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                 C19620 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C200) *
                C11903) *
               C19577 * C1526) *
              C1523 +
          ((((C10242 + C10243) * C200 + (C10389 + C10388) * C19620) * C11903 +
            ((C8689 * C2612 + C8535 * C2786 + C8690 * C4849 + C8536 * C5007) *
                 C200 +
             (C8689 * C2730 + C8535 * C2895 + C8690 * C4955 + C8536 * C5110) *
                 C19620) *
                C11904) *
               C19577 * C1526 -
           (((C11016 + C11017) * C19620 + (C10871 + C10870) * C200) * C11904 +
            ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C11903) *
               C19577 * C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1527 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C1523 -
            (C12228 + C12229) * C1528 - (C12230 + C12231) * C1524) *
               C19577 * C8535 +
           ((C16016 + C16017) * C1527 + (C16018 + C16019) * C1523 -
            (C13801 + C13800) * C1528 - (C13803 + C13802) * C1524) *
               C19577 * C8536) *
              C19620 * C1525 +
          (((C13800 + C13801) * C1528 -
            ((C16019 + C16018) * C1523 + (C16017 + C16016) * C1527) +
            (C13802 + C13803) * C1524) *
               C19577 * C8535 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C1528 -
            ((C16020 + C16021) * C1523 + (C16022 + C16023) * C1527) +
            (C12209 * C642 + C11903 * C939 + C12210 * C4851 + C11904 * C5162) *
                C1524) *
               C19577 * C8536) *
              C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1583 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C1525 -
            (C16017 + C16016) * C1584 - (C16082 + C16083) * C1526) *
               C19577 * C8535 +
           ((C16016 + C16017) * C1583 + (C16083 + C16082) * C1525 -
            (C16022 + C16023) * C1584 - (C16085 + C16084) * C1526) *
               C19577 * C8536) *
              C1523 +
          (((C13800 + C13801) * C1584 -
            ((C12295 + C12294) * C1525 + (C12228 + C12229) * C1583) +
            (C13875 + C13874) * C1526) *
               C19577 * C8535 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C1584 -
            ((C13874 + C13875) * C1525 + (C13801 + C13800) * C1583) +
            (C12209 * C695 + C11903 * C982 + C12210 * C4903 + C11904 * C5213) *
                C1526) *
               C19577 * C8536) *
              C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C200 +
             (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                 C19620) *
                C19577 * C8535 +
            ((C16016 + C16017) * C200 + (C16144 + C16145) * C19620) * C19577 *
                C8536) *
               C1525 -
           (((C16146 + C16147) * C19620 + (C16022 + C16023) * C200) * C19577 *
                C8536 +
            ((C16145 + C16144) * C19620 + (C16017 + C16016) * C200) * C19577 *
                C8535) *
               C1526) *
              C1523 +
          ((((C13800 + C13801) * C200 + (C13947 + C13946) * C19620) * C19577 *
                C8535 +
            ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                 C200 +
             (C12209 * C745 + C11903 * C1027 + C12210 * C4955 +
              C11904 * C5264) *
                 C19620) *
                C19577 * C8536) *
               C1526 -
           (((C13946 + C13947) * C19620 + (C13801 + C13800) * C200) * C19577 *
                C8536 +
            ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C19577 *
                C8535) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C3101 * C93 + C19577 * C98) * C625 +
              (C3101 * C101 + C19577 * C108) * C19588) *
                 C8535 +
             (C3474 + C3475) * C8536) *
                C11903 +
            ((C6558 + C6559) * C8535 + C17924 * C8536) * C11904) *
               C2069 -
           (((C8021 + C8020) * C8536 + (C6561 + C6560) * C8535) * C11904 +
            (C17925 * C8536 + (C6559 + C6558) * C8535) * C11903) *
               C2070) *
              C1525 +
          (((C17924 * C8535 + (C5333 + C5332) * C8536) * C11903 +
            ((C8020 + C8021) * C8535 +
             ((C3101 * C3925 + C19577 * C3930) * C625 +
              (C3101 * C3931 + C19577 * C3934) * C19588) *
                 C8536) *
                C11904) *
               C2070 -
           (((C5332 + C5333) * C8536 + C17925 * C8535) * C11904 +
            ((C3477 + C3476) * C8536 + (C3475 + C3474) * C8535) * C11903) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C1583 +
             (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
             C3529 * C1526) *
                C8535 +
            (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
                C8536) *
               C11903 +
           ((C8074 + C8075 - C8076 - C8077) * C8535 +
            (C17992 + C17993 - C17994 - C17995) * C8536) *
               C11904) *
              C19588 * C2069 +
          (((C8076 - (C8075 + C8074) + C8077) * C8535 +
            (C17994 - (C17993 + C17992) + C17995) * C8536) *
               C11903 +
           ((C8080 - (C8079 + C8078) + C8084) * C8535 +
            ((C3101 * C3925 + C19577 * C3930) * C1584 -
             (C8083 * C1525 + C8018 * C1583) +
             (C3101 * C3975 + C19577 * C3978) * C1526) *
                C8536) *
               C11904) *
              C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C2177 +
             (C3101 * C201 + C19577 * C206) * C2069 - C6552 * C2178 -
             C6673 * C2070) *
                C8535 +
            (C5446 + C5447 - C5448 - C5458) * C8536) *
               C11903 +
           ((C6552 * C2177 + C6673 * C2069 - C6554 * C2178 - C6674 * C2070) *
                C8535 +
            (C18062 + C18063 - C18064 - C18065) * C8536) *
               C11904) *
              C1525 +
          (((C5448 - (C5447 + C5446) + C5458) * C8535 +
            (C5453 - (C5452 + C5451) + C5459) * C8536) *
               C11903 +
           ((C18064 - (C18063 + C18062) + C18065) * C8535 +
            ((C3101 * C3925 + C19577 * C3930) * C2178 -
             (C5457 * C2069 + C5329 * C2177) +
             (C3101 * C4019 + C19577 * C4022) * C2070) *
                C8536) *
               C11904) *
              C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
             (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                 C19588) *
                C11903 +
            ((C16368 + C16369) * C625 + (C16370 + C16371) * C19588) * C11904) *
               C19577 * C2069 -
           (((C16372 + C16373) * C19588 + (C16374 + C16375) * C625) * C11904 +
            ((C16371 + C16370) * C19588 + (C16369 + C16368) * C625) * C11903) *
               C19577 * C2070) *
              C1525 +
          ((((C18140 + C18141) * C625 + (C18142 + C18143) * C19588) * C11903 +
            ((C8689 * C3924 + C8535 * C4062 + C8690 * C3925 + C8536 * C4063) *
                 C625 +
             (C8689 * C3929 + C8535 * C4065 + C8690 * C3931 + C8536 * C4066) *
                 C19588) *
                C11904) *
               C19577 * C2070 -
           (((C18143 + C18142) * C19588 + (C18141 + C18140) * C625) * C11904 +
            ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                 C19588 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C625) *
                C11903) *
               C19577 * C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1583 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C1525 -
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C1584 -
            (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) *
                C1526) *
               C11903 +
           ((C16368 + C16369) * C1583 + (C16434 + C16435) * C1525 -
            (C18141 + C18140) * C1584 - (C18214 + C18215) * C1526) *
               C11904) *
              C19577 * C19588 * C2069 +
          (((C18140 + C18141) * C1584 -
            ((C16435 + C16434) * C1525 + (C16369 + C16368) * C1583) +
            (C18215 + C18214) * C1526) *
               C11903 +
           ((C8689 * C3924 + C8535 * C4062 + C8690 * C3925 + C8536 * C4063) *
                C1584 -
            ((C16436 + C16437) * C1525 + (C16374 + C16375) * C1583) +
            (C8689 * C3974 + C8535 * C4106 + C8690 * C3975 + C8536 * C4107) *
                C1526) *
               C11904) *
              C19577 * C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C2177 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C2069 -
            (C16369 + C16368) * C2178 - (C16496 + C16497) * C2070) *
               C11903 +
           ((C16368 + C16369) * C2177 + (C16497 + C16496) * C2069 -
            (C16374 + C16375) * C2178 - (C16499 + C16498) * C2070) *
               C11904) *
              C19577 * C1525 +
          (((C18140 + C18141) * C2178 -
            ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                 C2069 +
             (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                 C2177) +
            (C18286 + C18287) * C2070) *
               C11903 +
           ((C8689 * C3924 + C8535 * C4062 + C8690 * C3925 + C8536 * C4063) *
                C2178 -
            ((C18287 + C18286) * C2069 + (C18141 + C18140) * C2177) +
            (C8689 * C4017 + C8535 * C4147 + C8690 * C4019 + C8536 * C4148) *
                C2070) *
               C11904) *
              C19577 * C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C625 +
             (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                 C19588) *
                C19577 * C8535 +
            ((C16016 + C16017) * C625 + (C16018 + C16019) * C19588) * C19577 *
                C8536) *
               C2069 -
           (((C18362 + C18363) * C19588 + (C18364 + C18365) * C625) * C19577 *
                C8536 +
            ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
              C11903 * C1381) *
                 C19588 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C625) *
                C19577 * C8535) *
               C2070) *
              C1525 +
          ((((C18365 + C18364) * C625 + (C18363 + C18362) * C19588) * C19577 *
                C8535 +
            ((C12209 * C3923 + C11903 * C4187 + C12210 * C3925 +
              C11904 * C4189) *
                 C625 +
             (C12209 * C3926 + C11903 * C4190 + C12210 * C3931 +
              C11904 * C4192) *
                 C19588) *
                C19577 * C8536) *
               C2070 -
           (((C16020 + C16021) * C19588 + (C16022 + C16023) * C625) * C19577 *
                C8536 +
            ((C16019 + C16018) * C19588 + (C16017 + C16016) * C625) * C19577 *
                C8535) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1583 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C1525 -
            (C16017 + C16016) * C1584 - (C16082 + C16083) * C1526) *
               C19577 * C8535 +
           ((C16016 + C16017) * C1583 + (C16083 + C16082) * C1525 -
            (C16022 + C16023) * C1584 - (C16085 + C16084) * C1526) *
               C19577 * C8536) *
              C19588 * C2069 +
          (((C18365 + C18364) * C1584 -
            ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
              C11903 * C1425) *
                 C1525 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C1583) +
            (C18436 + C18437) * C1526) *
               C19577 * C8535 +
           ((C12209 * C3923 + C11903 * C4187 + C12210 * C3925 +
             C11904 * C4189) *
                C1584 -
            ((C18437 + C18436) * C1525 + (C18364 + C18365) * C1583) +
            (C12209 * C3973 + C11903 * C4231 + C12210 * C3975 +
             C11904 * C4233) *
                C1526) *
               C19577 * C8536) *
              C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[6] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C2177 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C2069 -
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C2178 -
            (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 +
             C11903 * C1467) *
                C2070) *
               C19577 * C8535 +
           ((C16016 + C16017) * C2177 + (C16144 + C16145) * C2069 -
            (C18364 + C18365) * C2178 - (C18508 + C18509) * C2070) *
               C19577 * C8536) *
              C1525 +
          (((C18365 + C18364) * C2178 -
            ((C16145 + C16144) * C2069 + (C16017 + C16016) * C2177) +
            (C18509 + C18508) * C2070) *
               C19577 * C8535 +
           ((C12209 * C3923 + C11903 * C4187 + C12210 * C3925 +
             C11904 * C4189) *
                C2178 -
            ((C16146 + C16147) * C2069 + (C16022 + C16023) * C2177) +
            (C12209 * C4018 + C11903 * C4273 + C12210 * C4019 +
             C11904 * C4274) *
                C2070) *
               C19577 * C8536) *
              C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eexx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C625 +
             (C3101 * C101 + C19577 * C108) * C19588) *
                C8535 +
            (C3474 + C3475) * C8536) *
               C11903 +
           ((C6558 + C6559) * C8535 + (C5335 + C5334) * C8536) * C11904) *
              C19620 * C622 -
          (((C5332 + C5333) * C8536 + (C5334 + C5335) * C8535) * C11904 +
           ((C3477 + C3476) * C8536 + (C3475 + C3474) * C8535) * C11903) *
              C19620 * C623 +
          ((C3480 * C8535 + (C3479 + C3478) * C8536) * C11903 +
           ((C5333 + C5332) * C8535 +
            ((C3101 * C5315 + C19577 * C5316) * C625 +
             (C3101 * C5317 + C19577 * C5318) * C19588) *
                C8536) *
               C11904) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C90 +
            (C3101 * C101 + C19577 * C108) * C80 -
            (C3101 * C94 + C19577 * C99) * C91 -
            (C3101 * C102 + C19577 * C109) * C81 +
            (C3101 * C95 + C19577 * C100) * C92 +
            (C3101 * C103 + C19577 * C110) * C82) *
               C8535 +
           (C3468 * C90 + C3469 * C80 - C4342 * C91 - C4343 * C81 +
            (C3101 * C626 + C19577 * C635) * C92 +
            (C3101 * C632 + C19577 * C644) * C82) *
               C8536) *
              C11903 +
          ((C6552 * C90 + C6553 * C80 - C7502 * C91 - C7503 * C81 +
            (C3101 * C1070 + C19577 * C1079) * C92 +
            (C3101 * C1076 + C19577 * C1088) * C82) *
               C8535 +
           (C5331 * C90 + C5330 * C80 - (C3101 * C2612 + C19577 * C2615) * C91 -
            (C3101 * C2618 + C19577 * C2621) * C81 +
            (C3101 * C2613 + C19577 * C2616) * C92 +
            (C3101 * C2619 + C19577 * C2622) * C82) *
               C8536) *
              C11904) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C625 +
             (C3101 * C101 + C19577 * C108) * C19588) *
                C8535 +
            (C3474 + C3475) * C8536) *
               C11903 +
           ((C6558 + C6559) * C8535 + (C5335 + C5334) * C8536) * C11904) *
              C1067 -
          (((C8021 + C8020) * C8536 + (C6561 + C6560) * C8535) * C11904 +
           ((C5334 + C5335) * C8536 + (C6559 + C6558) * C8535) * C11903) *
              C1068 +
          ((C6564 * C8535 + (C8020 + C8021) * C8536) * C11903 +
           ((C6563 + C6562) * C8535 +
            ((C3101 * C8009 + C19577 * C8010) * C625 +
             (C3101 * C8011 + C19577 * C8012) * C19588) *
                C8536) *
               C11904) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C688 +
            (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
            C3529 * C623 + C3470 * C690 + C3530 * C624) *
               C8535 +
           (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
            C3473 * C690 + C3531 * C624) *
               C8536) *
              C11903 +
          ((C6552 * C688 + C6617 * C622 - C5331 * C689 - C5392 * C623 +
            C5329 * C690 + C5393 * C624) *
               C8535 +
           (C5331 * C688 + C5392 * C622 - C5329 * C689 - C5393 * C623 +
            (C3101 * C5315 + C19577 * C5316) * C690 +
            (C3101 * C5385 + C19577 * C5386) * C624) *
               C8536) *
              C11904) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C151 +
             (C3101 * C152 + C19577 * C157) * C19609) *
                C8535 +
            (C3468 * C151 + C3529 * C19609) * C8536) *
               C11903 +
           ((C6608 + C6620) * C8535 + (C5331 * C151 + C5392 * C19609) * C8536) *
               C11904) *
              C80 -
          ((((C3101 * C2674 + C19577 * C2677) * C19609 +
             (C3101 * C2612 + C19577 * C2615) * C151) *
                C8536 +
            (C7571 + C7567) * C8535) *
               C11904 +
           ((C4406 * C19609 + C4342 * C151) * C8536 +
            ((C3101 * C153 + C19577 * C158) * C19609 +
             (C3101 * C94 + C19577 * C99) * C151) *
                C8535) *
               C11903) *
              C81 +
          ((((C3101 * C95 + C19577 * C100) * C151 +
             (C3101 * C154 + C19577 * C159) * C19609) *
                C8535 +
            ((C3101 * C626 + C19577 * C635) * C151 +
             (C3101 * C691 + C19577 * C697) * C19609) *
                C8536) *
               C11903 +
           (((C3101 * C1070 + C19577 * C1079) * C151 +
             (C3101 * C1132 + C19577 * C1138) * C19609) *
                C8535 +
            ((C3101 * C2613 + C19577 * C2616) * C151 +
             (C3101 * C2675 + C19577 * C2678) * C19609) *
                C8536) *
               C11904) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C151 +
             (C3101 * C152 + C19577 * C157) * C19609) *
                C8535 +
            (C3468 * C151 + C3529 * C19609) * C8536) *
               C11903 +
           ((C6608 + C6620) * C8535 + (C16248 + C16249) * C8536) * C11904) *
              C19588 * C1067 -
          (((C16250 + C16251) * C8536 + (C6621 + C6611) * C8535) * C11904 +
           ((C16249 + C16248) * C8536 + (C6620 + C6608) * C8535) * C11903) *
              C19588 * C1068 +
          ((C6623 * C8535 + (C16251 + C16250) * C8536) * C11903 +
           ((C6616 + C6622) * C8535 +
            ((C3101 * C8009 + C19577 * C8010) * C151 +
             (C3101 * C8071 + C19577 * C8072) * C19609) *
                C8536) *
               C11904) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C200 +
             (C3101 * C201 + C19577 * C206) * C19620) *
                C8535 +
            (C3574 + C3586) * C8536) *
               C11903 +
           ((C6552 * C200 + C6673 * C19620) * C8535 +
            (C15796 + C15797) * C8536) *
               C11904) *
              C622 -
          (((C15798 + C15799) * C8536 + (C15797 + C15796) * C8535) * C11904 +
           ((C3587 + C3577) * C8536 + (C3586 + C3574) * C8535) * C11903) *
              C623 +
          ((C3589 * C8535 + (C3582 + C3588) * C8536) * C11903 +
           ((C15799 + C15798) * C8535 +
            ((C3101 * C5315 + C19577 * C5316) * C200 +
             (C3101 * C5443 + C19577 * C5444) * C19620) *
                C8536) *
               C11904) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C200 +
             (C3101 * C201 + C19577 * C206) * C19620) *
                C8535 +
            (C3574 + C3586) * C8536) *
               C11903 +
           ((C6552 * C200 + C6673 * C19620) * C8535 +
            (C5331 * C200 + C5456 * C19620) * C8536) *
               C11904) *
              C19609 * C80 -
          ((((C3101 * C2730 + C19577 * C2733) * C19620 +
             (C3101 * C2612 + C19577 * C2615) * C200) *
                C8536 +
            (C7628 * C19620 + C7502 * C200) * C8535) *
               C11904 +
           ((C4468 + C4460) * C8536 + ((C3101 * C202 + C19577 * C207) * C19620 +
                                       (C3101 * C94 + C19577 * C99) * C200) *
                                          C8535) *
               C11903) *
              C19609 * C81 +
          ((((C3101 * C95 + C19577 * C100) * C200 +
             (C3101 * C203 + C19577 * C208) * C19620) *
                C8535 +
            ((C3101 * C626 + C19577 * C635) * C200 +
             (C3101 * C741 + C19577 * C747) * C19620) *
                C8536) *
               C11903 +
           (((C3101 * C1070 + C19577 * C1079) * C200 +
             (C3101 * C1185 + C19577 * C1191) * C19620) *
                C8535 +
            ((C3101 * C2613 + C19577 * C2616) * C200 +
             (C3101 * C2731 + C19577 * C2734) * C19620) *
                C8536) *
               C11904) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1182 +
            (C3101 * C201 + C19577 * C206) * C1067 - C6552 * C1183 -
            C6673 * C1068 + C6554 * C1184 + C6674 * C1069) *
               C8535 +
           (C3468 * C1182 + C3583 * C1067 - C5331 * C1183 - C5456 * C1068 +
            C8018 * C1184 + C8139 * C1069) *
               C8536) *
              C11903 +
          ((C6552 * C1182 + C6673 * C1067 - C6554 * C1183 - C6674 * C1068 +
            C6557 * C1184 + C6675 * C1069) *
               C8535 +
           (C5331 * C1182 + C5456 * C1067 - C8018 * C1183 - C8139 * C1068 +
            (C3101 * C8009 + C19577 * C8010) * C1184 +
            (C3101 * C8134 + C19577 * C8135) * C1069) *
               C8536) *
              C11904) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C625 +
            (C8689 * C1078 + C8535 * C1243 + C8690 * C2617 + C8536 * C2788) *
                C19588) *
               C11904) *
              C19577 * C19620 * C622 -
          (((C8690 * C3926 + C8536 * C4064 + C8689 * C2617 + C8535 * C2788) *
                C19588 +
            (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                C625) *
               C11904 +
           ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                C19588 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C625) *
               C11903) *
              C19577 * C19620 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C625 +
            (C8689 * C641 + C8535 * C800 + C8690 * C3449 + C8536 * C3629) *
                C19588) *
               C11903 +
           ((C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
                C625 +
            (C8689 * C3926 + C8535 * C4064 + C8690 * C5317 + C8536 * C5510) *
                C19588) *
               C11904) *
              C19577 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C90 +
           (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) * C80 -
           (C8708 + C8709) * C91 - (C8710 + C8711) * C81 +
           (C8712 + C8713) * C92 + (C8714 + C8715) * C82) *
              C11903 +
          ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
               C90 +
           (C8689 * C1078 + C8535 * C1243 + C8690 * C2617 + C8536 * C2788) *
               C80 -
           (C10871 + C10870) * C91 - (C10873 + C10872) * C81 +
           (C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
               C92 +
           (C8689 * C1076 + C8535 * C1241 + C8690 * C2619 + C8536 * C2790) *
               C82) *
              C11904) *
         C19577 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C11903 +
           ((C16368 + C16369) * C625 + (C16370 + C16371) * C19588) * C11904) *
              C19577 * C1067 -
          (((C16372 + C16373) * C19588 + (C16374 + C16375) * C625) * C11904 +
           ((C16371 + C16370) * C19588 + (C16369 + C16368) * C625) * C11903) *
              C19577 * C1068 +
          (((C16375 + C16374) * C625 + (C16373 + C16372) * C19588) * C11903 +
           ((C8689 * C6531 + C8535 * C6713 + C8690 * C8009 + C8536 * C8189) *
                C625 +
            (C8689 * C6533 + C8535 * C6715 + C8690 * C8011 + C8536 * C8190) *
                C19588) *
               C11904) *
              C19577 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C688 +
           (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) * C622 -
           (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) * C689 -
           (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) * C623 +
           (C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
               C690 +
           (C8689 * C694 + C8535 * C842 + C8690 * C3518 + C8536 * C3669) *
               C624) *
              C11903 +
          ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
               C688 +
           (C8689 * C1134 + C8535 * C1287 + C8690 * C2673 + C8536 * C2841) *
               C622 -
           (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
               C689 -
           (C8690 * C3973 + C8536 * C4105 + C8689 * C2673 + C8535 * C2841) *
               C623 +
           (C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
               C690 +
           (C8689 * C3973 + C8535 * C4105 + C8690 * C5385 + C8536 * C5561) *
               C624) *
              C11904) *
         C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C151 +
            (C8689 * C1134 + C8535 * C1287 + C8690 * C2673 + C8536 * C2841) *
                C19609) *
               C11904) *
              C19577 * C80 -
          (((C10945 + C10944) * C19609 + (C10871 + C10870) * C151) * C11904 +
           ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C11903) *
              C19577 * C81 +
          (((C8712 + C8713) * C151 + (C8777 + C8776) * C19609) * C11903 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C151 +
            (C8689 * C1132 + C8535 * C1285 + C8690 * C2675 + C8536 * C2843) *
                C19609) *
               C11904) *
              C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C11903 +
           ((C16368 + C16369) * C151 + (C16434 + C16435) * C19609) * C11904) *
              C19577 * C19588 * C1067 -
          (((C16436 + C16437) * C19609 + (C16374 + C16375) * C151) * C11904 +
           ((C16435 + C16434) * C19609 + (C16369 + C16368) * C151) * C11903) *
              C19577 * C19588 * C1068 +
          (((C16375 + C16374) * C151 + (C16437 + C16436) * C19609) * C11903 +
           ((C8689 * C6531 + C8535 * C6713 + C8690 * C8009 + C8536 * C8189) *
                C151 +
            (C8689 * C6603 + C8535 * C6780 + C8690 * C8071 + C8536 * C8257) *
                C19609) *
               C11904) *
              C19577 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C200 +
            (C8689 * C1187 + C8535 * C1329 + C8690 * C2729 + C8536 * C2894) *
                C19620) *
               C11904) *
              C19577 * C622 -
          (((C8690 * C4018 + C8536 * C4146 + C8689 * C2729 + C8535 * C2894) *
                C19620 +
            (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                C200) *
               C11904 +
           ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                C19620 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C200) *
               C11903) *
              C19577 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C200 +
            (C8689 * C744 + C8535 * C888 + C8690 * C3569 + C8536 * C3709) *
                C19620) *
               C11903 +
           ((C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
                C200 +
            (C8689 * C4018 + C8535 * C4146 + C8690 * C5443 + C8536 * C5612) *
                C19620) *
               C11904) *
              C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C200 +
            (C8689 * C1187 + C8535 * C1329 + C8690 * C2729 + C8536 * C2894) *
                C19620) *
               C11904) *
              C19577 * C19609 * C80 -
          (((C11016 + C11017) * C19620 + (C10871 + C10870) * C200) * C11904 +
           ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C11903) *
              C19577 * C19609 * C81 +
          (((C8712 + C8713) * C200 + (C8839 + C8838) * C19620) * C11903 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C200 +
            (C8689 * C1185 + C8535 * C1333 + C8690 * C2731 + C8536 * C2896) *
                C19620) *
               C11904) *
              C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1182 +
           (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) * C1067 -
           (C16369 + C16368) * C1183 - (C16496 + C16497) * C1068 +
           (C16375 + C16374) * C1184 + (C16498 + C16499) * C1069) *
              C11903 +
          ((C16368 + C16369) * C1182 + (C16497 + C16496) * C1067 -
           (C16374 + C16375) * C1183 - (C16499 + C16498) * C1068 +
           (C8689 * C6531 + C8535 * C6713 + C8690 * C8009 + C8536 * C8189) *
               C1184 +
           (C8689 * C6662 + C8535 * C6836 + C8690 * C8134 + C8536 * C8322) *
               C1069) *
              C11904) *
         C19577 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C19577 * C8535 +
           ((C16016 + C16017) * C625 + (C16018 + C16019) * C19588) * C19577 *
               C8536) *
              C19620 * C622 -
          (((C16020 + C16021) * C19588 + (C16022 + C16023) * C625) * C19577 *
               C8536 +
           ((C16019 + C16018) * C19588 + (C16017 + C16016) * C625) * C19577 *
               C8535) *
              C19620 * C623 +
          (((C16023 + C16022) * C625 + (C16021 + C16020) * C19588) * C19577 *
               C8535 +
           ((C12209 * C3447 + C11903 * C3749 + C12210 * C5315 +
             C11904 * C5663) *
                C625 +
            (C12209 * C3449 + C11903 * C3751 + C12210 * C5317 +
             C11904 * C5664) *
                C19588) *
               C19577 * C8536) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C90 +
           (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
               C80 -
           (C12228 + C12229) * C91 - (C12230 + C12231) * C81 +
           (C12232 + C12233) * C92 + (C12234 + C12235) * C82) *
              C19577 * C8535 +
          ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
               C90 +
           (C12209 * C634 + C11903 * C937 + C12210 * C2617 + C11904 * C2950) *
               C80 -
           (C13801 + C13800) * C91 - (C13803 + C13802) * C81 +
           (C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
               C92 +
           (C12209 * C632 + C11903 * C935 + C12210 * C2619 + C11904 * C2952) *
               C82) *
              C19577 * C8536) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C19577 * C8535 +
           ((C16016 + C16017) * C625 + (C16018 + C16019) * C19588) * C19577 *
               C8536) *
              C1067 -
          (((C12210 * C3929 + C11904 * C4191 + C12209 * C2617 +
             C11903 * C2950) *
                C19588 +
            (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 +
             C11903 * C2947) *
                C625) *
               C19577 * C8536 +
           ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
             C11903 * C1381) *
                C19588 +
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C625) *
               C19577 * C8535) *
              C1068 +
          (((C12209 * C1073 + C11903 * C1376 + C12210 * C6531 +
             C11904 * C6885) *
                C625 +
            (C12209 * C1085 + C11903 * C1382 + C12210 * C6533 +
             C11904 * C6887) *
                C19588) *
               C19577 * C8535 +
           ((C12209 * C3924 + C11903 * C4188 + C12210 * C8009 +
             C11904 * C8379) *
                C625 +
            (C12209 * C3929 + C11903 * C4191 + C12210 * C8011 +
             C11904 * C8380) *
                C19588) *
               C19577 * C8536) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C688 +
           (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
               C622 -
           (C16017 + C16016) * C689 - (C16082 + C16083) * C623 +
           (C16023 + C16022) * C690 + (C16084 + C16085) * C624) *
              C19577 * C8535 +
          ((C16016 + C16017) * C688 + (C16083 + C16082) * C622 -
           (C16022 + C16023) * C689 - (C16085 + C16084) * C623 +
           (C12209 * C3447 + C11903 * C3749 + C12210 * C5315 + C11904 * C5663) *
               C690 +
           (C12209 * C3518 + C11903 * C3817 + C12210 * C5385 + C11904 * C5731) *
               C624) *
              C19577 * C8536) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C19577 * C8535 +
           ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
                C151 +
            (C12209 * C693 + C11903 * C979 + C12210 * C2673 + C11904 * C3003) *
                C19609) *
               C19577 * C8536) *
              C80 -
          (((C13874 + C13875) * C19609 + (C13801 + C13800) * C151) * C19577 *
               C8536 +
           ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C19577 *
               C8535) *
              C81 +
          (((C12232 + C12233) * C151 + (C12297 + C12296) * C19609) * C19577 *
               C8535 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C151 +
            (C12209 * C691 + C11903 * C983 + C12210 * C2675 + C11904 * C3005) *
                C19609) *
               C19577 * C8536) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C19577 * C8535 +
           ((C16016 + C16017) * C151 + (C16083 + C16082) * C19609) * C19577 *
               C8536) *
              C19588 * C1067 -
          (((C12210 * C3974 + C11904 * C4232 + C12209 * C2673 +
             C11903 * C3003) *
                C19609 +
            (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 +
             C11903 * C2947) *
                C151) *
               C19577 * C8536 +
           ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
             C11903 * C1425) *
                C19609 +
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C151) *
               C19577 * C8535) *
              C19588 * C1068 +
          (((C12209 * C1073 + C11903 * C1376 + C12210 * C6531 +
             C11904 * C6885) *
                C151 +
            (C12209 * C1135 + C11903 * C1426 + C12210 * C6603 +
             C11904 * C6927) *
                C19609) *
               C19577 * C8535 +
           ((C12209 * C3924 + C11903 * C4188 + C12210 * C8009 +
             C11904 * C8379) *
                C151 +
            (C12209 * C3974 + C11903 * C4232 + C12210 * C8071 +
             C11904 * C8431) *
                C19609) *
               C19577 * C8536) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C19577 * C8535 +
           ((C16016 + C16017) * C200 + (C16144 + C16145) * C19620) * C19577 *
               C8536) *
              C622 -
          (((C16146 + C16147) * C19620 + (C16022 + C16023) * C200) * C19577 *
               C8536 +
           ((C16145 + C16144) * C19620 + (C16017 + C16016) * C200) * C19577 *
               C8535) *
              C623 +
          (((C16023 + C16022) * C200 + (C16147 + C16146) * C19620) * C19577 *
               C8535 +
           ((C12209 * C3447 + C11903 * C3749 + C12210 * C5315 +
             C11904 * C5663) *
                C200 +
            (C12209 * C3569 + C11903 * C3866 + C12210 * C5443 +
             C11904 * C5788) *
                C19620) *
               C19577 * C8536) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C19577 * C8535 +
           ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
                C200 +
            (C12209 * C743 + C11903 * C1025 + C12210 * C2729 + C11904 * C3056) *
                C19620) *
               C19577 * C8536) *
              C19609 * C80 -
          (((C13946 + C13947) * C19620 + (C13801 + C13800) * C200) * C19577 *
               C8536 +
           ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C19577 *
               C8535) *
              C19609 * C81 +
          (((C12232 + C12233) * C200 + (C12359 + C12358) * C19620) * C19577 *
               C8535 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C200 +
            (C12209 * C741 + C11903 * C1023 + C12210 * C2731 + C11904 * C3058) *
                C19620) *
               C19577 * C8536) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C1182 +
           (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
               C1067 -
           (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 + C11903 * C1375) *
               C1183 -
           (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 + C11903 * C1467) *
               C1068 +
           (C12209 * C1073 + C11903 * C1376 + C12210 * C6531 + C11904 * C6885) *
               C1184 +
           (C12209 * C1188 + C11903 * C1468 + C12210 * C6662 + C11904 * C6967) *
               C1069) *
              C19577 * C8535 +
          ((C16016 + C16017) * C1182 + (C16144 + C16145) * C1067 -
           (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 + C11903 * C2947) *
               C1183 -
           (C12210 * C4017 + C11904 * C4272 + C12209 * C2729 + C11903 * C3056) *
               C1068 +
           (C12209 * C3924 + C11903 * C4188 + C12210 * C8009 + C11904 * C8379) *
               C1184 +
           (C12209 * C4017 + C11903 * C4272 + C12210 * C8134 + C11904 * C8482) *
               C1069) *
              C19577 * C8536) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                  (((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C8535 +
                     (C4330 + C4331 - C4346 - C4347) * C8536) *
                        C11903 +
                    ((C7490 + C7491 - C7506 - C7507) * C8535 +
                     (C16716 + C16717 - C16724 - C16725) * C8536) *
                        C11904) *
                       C2069 +
                   (((C7506 - (C7491 + C7490) + C7507) * C8535 +
                     (C16724 - (C16717 + C16716) + C16725) * C8536) *
                        C11903 +
                    ((C7508 - (C7497 + C7496) + C7509) * C8535 +
                     ((C3101 * C7019 + C19577 * C7020) * C1528 -
                      (C8019 * C1523 + C8018 * C1527) +
                      (C3101 * C7021 + C19577 * C7022) * C1524) *
                         C8536) *
                        C11904) *
                       C2070) *
                  C19609) /
                 (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C3101 * C93 + C19577 * C98) * C151 +
              (C3101 * C152 + C19577 * C157) * C19609) *
                 C8535 +
             (C3468 * C151 + C3529 * C19609) * C8536) *
                C11903 +
            ((C6608 + C6620) * C8535 + (C16248 + C16249) * C8536) * C11904) *
               C1523 -
           (((C17394 + C17395) * C8536 + (C7571 + C7567) * C8535) * C11904 +
            ((C4406 * C19609 + C4342 * C151) * C8536 +
             ((C3101 * C153 + C19577 * C158) * C19609 +
              (C3101 * C94 + C19577 * C99) * C151) *
                 C8535) *
                C11903) *
               C1524) *
              C2069 +
          ((((C7567 + C7571) * C8535 + (C17395 + C17394) * C8536) * C11903 +
            ((C7564 + C7570) * C8535 +
             ((C3101 * C7019 + C19577 * C7020) * C151 +
              (C3101 * C7073 + C19577 * C7074) * C19609) *
                 C8536) *
                C11904) *
               C1524 -
           (((C16250 + C16251) * C8536 + (C6621 + C6611) * C8535) * C11904 +
            ((C16249 + C16248) * C8536 + (C6620 + C6608) * C8535) * C11903) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C2177 +
             (C3101 * C201 + C19577 * C206) * C2069 - C6552 * C2178 -
             C6673 * C2070) *
                C8535 +
            (C5446 + C5447 - C5448 - C5458) * C8536) *
               C11903 +
           ((C6552 * C2177 + C6673 * C2069 - C6554 * C2178 - C6674 * C2070) *
                C8535 +
            (C5331 * C2177 + C5456 * C2069 - C8018 * C2178 - C8139 * C2070) *
                C8536) *
               C11904) *
              C19609 * C1523 +
          (((C7502 * C2178 -
             ((C3101 * C202 + C19577 * C207) * C2069 +
              (C3101 * C94 + C19577 * C99) * C2177) +
             C7628 * C2070) *
                C8535 +
            (C16722 * C2178 - (C4466 * C2069 + C4342 * C2177) +
             C16864 * C2070) *
                C8536) *
               C11903 +
           ((C7504 * C2178 - (C7628 * C2069 + C7502 * C2177) + C7629 * C2070) *
                C8535 +
            ((C3101 * C7019 + C19577 * C7020) * C2178 -
             (C16864 * C2069 + C16722 * C2177) +
             (C3101 * C7125 + C19577 * C7126) * C2070) *
                C8536) *
               C11904) *
              C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C1527 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C1523 -
            (C8708 + C8709) * C1528 - (C8710 + C8711) * C1524) *
               C11903 +
           ((C16368 + C16369) * C1527 + (C16370 + C16371) * C1523 -
            (C10871 + C10870) * C1528 - (C10873 + C10872) * C1524) *
               C11904) *
              C19577 * C2069 +
          (((C10870 + C10871) * C1528 -
            ((C16371 + C16370) * C1523 + (C16369 + C16368) * C1527) +
            (C10872 + C10873) * C1524) *
               C11903 +
           ((C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
                C1528 -
            ((C16372 + C16373) * C1523 + (C16374 + C16375) * C1527) +
            (C8689 * C1086 + C8535 * C1245 + C8690 * C7021 + C8536 * C7178) *
                C1524) *
               C11904) *
              C19577 * C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eeyy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
             (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                 C19609) *
                C11903 +
            ((C16368 + C16369) * C151 + (C16434 + C16435) * C19609) * C11904) *
               C19577 * C1523 -
           (((C10945 + C10944) * C19609 + (C10871 + C10870) * C151) * C11904 +
            ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C11903) *
               C19577 * C1524) *
              C2069 +
          ((((C10870 + C10871) * C151 + (C10944 + C10945) * C19609) * C11903 +
            ((C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
                 C151 +
             (C8689 * C1136 + C8535 * C1289 + C8690 * C7073 + C8536 * C7229) *
                 C19609) *
                C11904) *
               C19577 * C1524 -
           (((C16436 + C16437) * C19609 + (C16374 + C16375) * C151) * C11904 +
            ((C16435 + C16434) * C19609 + (C16369 + C16368) * C151) * C11903) *
               C19577 * C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C2177 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C2069 -
            (C16369 + C16368) * C2178 - (C16496 + C16497) * C2070) *
               C11903 +
           ((C16368 + C16369) * C2177 + (C16497 + C16496) * C2069 -
            (C16374 + C16375) * C2178 - (C16499 + C16498) * C2070) *
               C11904) *
              C19577 * C19609 * C1523 +
          (((C10870 + C10871) * C2178 -
            ((C8837 + C8836) * C2069 + (C8708 + C8709) * C2177) +
            (C11017 + C11016) * C2070) *
               C11903 +
           ((C8689 * C1074 + C8535 * C1239 + C8690 * C7019 + C8536 * C7177) *
                C2178 -
            ((C11016 + C11017) * C2069 + (C10871 + C10870) * C2177) +
            (C8689 * C1189 + C8535 * C1332 + C8690 * C7125 + C8536 * C7280) *
                C2070) *
               C11904) *
              C19577 * C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1527 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C1523 -
            (C12228 + C12229) * C1528 - (C12230 + C12231) * C1524) *
               C19577 * C8535 +
           ((C16016 + C16017) * C1527 + (C16018 + C16019) * C1523 -
            (C13801 + C13800) * C1528 - (C13803 + C13802) * C1524) *
               C19577 * C8536) *
              C2069 +
          (((C14452 + C14453) * C1528 -
            ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
              C11903 * C1381) *
                 C1523 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C1527) +
            (C14454 + C14455) * C1524) *
               C19577 * C8535 +
           ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
             C11904 * C7331) *
                C1528 -
            ((C12210 * C3929 + C11904 * C4191 + C12209 * C2617 +
              C11903 * C2950) *
                 C1523 +
             (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 +
              C11903 * C2947) *
                 C1527) +
            (C12209 * C2618 + C11903 * C2951 + C12210 * C7021 +
             C11904 * C7332) *
                C1524) *
               C19577 * C8536) *
              C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C151 +
             (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                 C19609) *
                C19577 * C8535 +
            ((C16016 + C16017) * C151 + (C16083 + C16082) * C19609) * C19577 *
                C8536) *
               C1523 -
           (((C13874 + C13875) * C19609 + (C13801 + C13800) * C151) * C19577 *
                C8536 +
            ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C19577 *
                C8535) *
               C1524) *
              C2069 +
          ((((C14452 + C14453) * C151 + (C14526 + C14527) * C19609) * C19577 *
                C8535 +
            ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
              C11904 * C7331) *
                 C151 +
             (C12209 * C2674 + C11903 * C3004 + C12210 * C7073 +
              C11904 * C7383) *
                 C19609) *
                C19577 * C8536) *
               C1524 -
           (((C12210 * C3974 + C11904 * C4232 + C12209 * C2673 +
              C11903 * C3003) *
                 C19609 +
             (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 +
              C11903 * C2947) *
                 C151) *
                C19577 * C8536 +
            ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
              C11903 * C1425) *
                 C19609 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C151) *
                C19577 * C8535) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C2177 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C2069 -
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C2178 -
            (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 +
             C11903 * C1467) *
                C2070) *
               C19577 * C8535 +
           ((C16016 + C16017) * C2177 + (C16144 + C16145) * C2069 -
            (C12210 * C3924 + C11904 * C4188 + C12209 * C2611 +
             C11903 * C2947) *
                C2178 -
            (C12210 * C4017 + C11904 * C4272 + C12209 * C2729 +
             C11903 * C3056) *
                C2070) *
               C19577 * C8536) *
              C19609 * C1523 +
          (((C14452 + C14453) * C2178 -
            ((C12357 + C12356) * C2069 + (C12228 + C12229) * C2177) +
            (C14599 + C14598) * C2070) *
               C19577 * C8535 +
           ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
             C11904 * C7331) *
                C2178 -
            ((C13946 + C13947) * C2069 + (C13801 + C13800) * C2177) +
            (C12209 * C2730 + C11903 * C3057 + C12210 * C7125 +
             C11904 * C7434) *
                C2070) *
               C19577 * C8536) *
              C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eexx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C90 +
            (C3101 * C101 + C19577 * C108) * C80 -
            (C3101 * C94 + C19577 * C99) * C91 -
            (C3101 * C102 + C19577 * C109) * C81 +
            (C3101 * C95 + C19577 * C100) * C92 +
            (C3101 * C103 + C19577 * C110) * C82) *
               C8535 +
           (C3468 * C90 + C3469 * C80 - C4342 * C91 - C4343 * C81 +
            (C3101 * C626 + C19577 * C635) * C92 +
            (C3101 * C632 + C19577 * C644) * C82) *
               C8536) *
              C11903 +
          ((C6552 * C90 + C6553 * C80 - C7502 * C91 - C7503 * C81 +
            (C3101 * C1070 + C19577 * C1079) * C92 +
            (C3101 * C1076 + C19577 * C1088) * C82) *
               C8535 +
           (C5331 * C90 + C5330 * C80 - (C3101 * C2612 + C19577 * C2615) * C91 -
            (C3101 * C2618 + C19577 * C2621) * C81 +
            (C3101 * C2613 + C19577 * C2616) * C92 +
            (C3101 * C2619 + C19577 * C2622) * C82) *
               C8536) *
              C11904) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C625 +
             (C3101 * C101 + C19577 * C108) * C19588) *
                C8535 +
            (C3474 + C3475) * C8536) *
               C11903 +
           ((C6558 + C6559) * C8535 + (C5335 + C5334) * C8536) * C11904) *
              C19620 * C622 -
          (((C5332 + C5333) * C8536 + (C5334 + C5335) * C8535) * C11904 +
           ((C3477 + C3476) * C8536 + (C3475 + C3474) * C8535) * C11903) *
              C19620 * C623 +
          ((C3480 * C8535 + (C3479 + C3478) * C8536) * C11903 +
           ((C5333 + C5332) * C8535 +
            ((C3101 * C5315 + C19577 * C5316) * C625 +
             (C3101 * C5317 + C19577 * C5318) * C19588) *
                C8536) *
               C11904) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eexy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C151 +
             (C3101 * C152 + C19577 * C157) * C19609) *
                C8535 +
            (C3468 * C151 + C3529 * C19609) * C8536) *
               C11903 +
           ((C6608 + C6620) * C8535 + (C5331 * C151 + C5392 * C19609) * C8536) *
               C11904) *
              C80 -
          ((((C3101 * C2674 + C19577 * C2677) * C19609 +
             (C3101 * C2612 + C19577 * C2615) * C151) *
                C8536 +
            (C7571 + C7567) * C8535) *
               C11904 +
           ((C4406 * C19609 + C4342 * C151) * C8536 +
            ((C3101 * C153 + C19577 * C158) * C19609 +
             (C3101 * C94 + C19577 * C99) * C151) *
                C8535) *
               C11903) *
              C81 +
          ((((C3101 * C95 + C19577 * C100) * C151 +
             (C3101 * C154 + C19577 * C159) * C19609) *
                C8535 +
            ((C3101 * C626 + C19577 * C635) * C151 +
             (C3101 * C691 + C19577 * C697) * C19609) *
                C8536) *
               C11903 +
           (((C3101 * C1070 + C19577 * C1079) * C151 +
             (C3101 * C1132 + C19577 * C1138) * C19609) *
                C8535 +
            ((C3101 * C2613 + C19577 * C2616) * C151 +
             (C3101 * C2675 + C19577 * C2678) * C19609) *
                C8536) *
               C11904) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C688 +
            (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
            C3529 * C623 + C3470 * C690 + C3530 * C624) *
               C8535 +
           (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
            C3473 * C690 + C3531 * C624) *
               C8536) *
              C11903 +
          ((C6552 * C688 + C6617 * C622 - C5331 * C689 - C5392 * C623 +
            C5329 * C690 + C5393 * C624) *
               C8535 +
           (C5331 * C688 + C5392 * C622 - C5329 * C689 - C5393 * C623 +
            (C3101 * C5315 + C19577 * C5316) * C690 +
            (C3101 * C5385 + C19577 * C5386) * C624) *
               C8536) *
              C11904) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C200 +
             (C3101 * C201 + C19577 * C206) * C19620) *
                C8535 +
            (C3574 + C3586) * C8536) *
               C11903 +
           ((C6552 * C200 + C6673 * C19620) * C8535 +
            (C5331 * C200 + C5456 * C19620) * C8536) *
               C11904) *
              C19609 * C80 -
          ((((C3101 * C2730 + C19577 * C2733) * C19620 +
             (C3101 * C2612 + C19577 * C2615) * C200) *
                C8536 +
            (C7628 * C19620 + C7502 * C200) * C8535) *
               C11904 +
           ((C4468 + C4460) * C8536 + ((C3101 * C202 + C19577 * C207) * C19620 +
                                       (C3101 * C94 + C19577 * C99) * C200) *
                                          C8535) *
               C11903) *
              C19609 * C81 +
          ((((C3101 * C95 + C19577 * C100) * C200 +
             (C3101 * C203 + C19577 * C208) * C19620) *
                C8535 +
            ((C3101 * C626 + C19577 * C635) * C200 +
             (C3101 * C741 + C19577 * C747) * C19620) *
                C8536) *
               C11903 +
           (((C3101 * C1070 + C19577 * C1079) * C200 +
             (C3101 * C1185 + C19577 * C1191) * C19620) *
                C8535 +
            ((C3101 * C2613 + C19577 * C2616) * C200 +
             (C3101 * C2731 + C19577 * C2734) * C19620) *
                C8536) *
               C11904) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3101 * C93 + C19577 * C98) * C200 +
             (C3101 * C201 + C19577 * C206) * C19620) *
                C8535 +
            (C3574 + C3586) * C8536) *
               C11903 +
           ((C6552 * C200 + C6673 * C19620) * C8535 +
            (C15796 + C15797) * C8536) *
               C11904) *
              C622 -
          (((C15798 + C15799) * C8536 + (C15797 + C15796) * C8535) * C11904 +
           ((C3587 + C3577) * C8536 + (C3586 + C3574) * C8535) * C11903) *
              C623 +
          ((C3589 * C8535 + (C3582 + C3588) * C8536) * C11903 +
           ((C15799 + C15798) * C8535 +
            ((C3101 * C5315 + C19577 * C5316) * C200 +
             (C3101 * C5443 + C19577 * C5444) * C19620) *
                C8536) *
               C11904) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C90 +
           (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) * C80 -
           (C8708 + C8709) * C91 - (C8710 + C8711) * C81 +
           (C8712 + C8713) * C92 + (C8714 + C8715) * C82) *
              C11903 +
          ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
               C90 +
           (C8689 * C1078 + C8535 * C1243 + C8690 * C2617 + C8536 * C2788) *
               C80 -
           (C10871 + C10870) * C91 - (C10873 + C10872) * C81 +
           (C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
               C92 +
           (C8689 * C1076 + C8535 * C1241 + C8690 * C2619 + C8536 * C2790) *
               C82) *
              C11904) *
         C19577 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C625 +
            (C8689 * C101 + C8535 * C255 + C8690 * C634 + C8536 * C799) *
                C19588) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C625 +
            (C8689 * C1078 + C8535 * C1243 + C8690 * C2617 + C8536 * C2788) *
                C19588) *
               C11904) *
              C19577 * C19620 * C622 -
          (((C8690 * C3926 + C8536 * C4064 + C8689 * C2617 + C8535 * C2788) *
                C19588 +
            (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                C625) *
               C11904 +
           ((C8690 * C641 + C8536 * C800 + C8689 * C634 + C8535 * C799) *
                C19588 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C625) *
               C11903) *
              C19577 * C19620 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C625 +
            (C8689 * C641 + C8535 * C800 + C8690 * C3449 + C8536 * C3629) *
                C19588) *
               C11903 +
           ((C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
                C625 +
            (C8689 * C3926 + C8535 * C4064 + C8690 * C5317 + C8536 * C5510) *
                C19588) *
               C11904) *
              C19577 * C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C151 +
            (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) *
                C19609) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C151 +
            (C8689 * C1134 + C8535 * C1287 + C8690 * C2673 + C8536 * C2841) *
                C19609) *
               C11904) *
              C19577 * C80 -
          (((C10945 + C10944) * C19609 + (C10871 + C10870) * C151) * C11904 +
           ((C8775 + C8774) * C19609 + (C8708 + C8709) * C151) * C11903) *
              C19577 * C81 +
          (((C8712 + C8713) * C151 + (C8777 + C8776) * C19609) * C11903 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C151 +
            (C8689 * C1132 + C8535 * C1285 + C8690 * C2675 + C8536 * C2843) *
                C19609) *
               C11904) *
              C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C688 +
           (C8689 * C152 + C8535 * C316 + C8690 * C693 + C8536 * C841) * C622 -
           (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) * C689 -
           (C8690 * C694 + C8536 * C842 + C8689 * C693 + C8535 * C841) * C623 +
           (C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
               C690 +
           (C8689 * C694 + C8535 * C842 + C8690 * C3518 + C8536 * C3669) *
               C624) *
              C11903 +
          ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
               C688 +
           (C8689 * C1134 + C8535 * C1287 + C8690 * C2673 + C8536 * C2841) *
               C622 -
           (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
               C689 -
           (C8690 * C3973 + C8536 * C4105 + C8689 * C2673 + C8535 * C2841) *
               C623 +
           (C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
               C690 +
           (C8689 * C3973 + C8535 * C4105 + C8690 * C5385 + C8536 * C5561) *
               C624) *
              C11904) *
         C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C200 +
            (C8689 * C1187 + C8535 * C1329 + C8690 * C2729 + C8536 * C2894) *
                C19620) *
               C11904) *
              C19577 * C19609 * C80 -
          (((C11016 + C11017) * C19620 + (C10871 + C10870) * C200) * C11904 +
           ((C8837 + C8836) * C19620 + (C8708 + C8709) * C200) * C11903) *
              C19577 * C19609 * C81 +
          (((C8712 + C8713) * C200 + (C8839 + C8838) * C19620) * C11903 +
           ((C8689 * C1070 + C8535 * C1235 + C8690 * C2613 + C8536 * C2787) *
                C200 +
            (C8689 * C1185 + C8535 * C1333 + C8690 * C2731 + C8536 * C2896) *
                C19620) *
               C11904) *
              C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8689 * C93 + C8535 * C250 + C8690 * C628 + C8536 * C793) * C200 +
            (C8689 * C201 + C8535 * C376 + C8690 * C743 + C8536 * C887) *
                C19620) *
               C11903 +
           ((C8689 * C1072 + C8535 * C1237 + C8690 * C2611 + C8536 * C2785) *
                C200 +
            (C8689 * C1187 + C8535 * C1329 + C8690 * C2729 + C8536 * C2894) *
                C19620) *
               C11904) *
              C19577 * C622 -
          (((C8690 * C4018 + C8536 * C4146 + C8689 * C2729 + C8535 * C2894) *
                C19620 +
            (C8690 * C3923 + C8536 * C4061 + C8689 * C2611 + C8535 * C2785) *
                C200) *
               C11904 +
           ((C8690 * C744 + C8536 * C888 + C8689 * C743 + C8535 * C887) *
                C19620 +
            (C8690 * C629 + C8536 * C794 + C8689 * C628 + C8535 * C793) *
                C200) *
               C11903) *
              C19577 * C623 +
          (((C8689 * C629 + C8535 * C794 + C8690 * C3447 + C8536 * C3627) *
                C200 +
            (C8689 * C744 + C8535 * C888 + C8690 * C3569 + C8536 * C3709) *
                C19620) *
               C11903 +
           ((C8689 * C3923 + C8535 * C4061 + C8690 * C5315 + C8536 * C5509) *
                C200 +
            (C8689 * C4018 + C8535 * C4146 + C8690 * C5443 + C8536 * C5612) *
                C19620) *
               C11904) *
              C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C90 +
           (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
               C80 -
           (C12228 + C12229) * C91 - (C12230 + C12231) * C81 +
           (C12232 + C12233) * C92 + (C12234 + C12235) * C82) *
              C19577 * C8535 +
          ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
               C90 +
           (C12209 * C634 + C11903 * C937 + C12210 * C2617 + C11904 * C2950) *
               C80 -
           (C13801 + C13800) * C91 - (C13803 + C13802) * C81 +
           (C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
               C92 +
           (C12209 * C632 + C11903 * C935 + C12210 * C2619 + C11904 * C2952) *
               C82) *
              C19577 * C8536) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C19577 * C8535 +
           ((C16016 + C16017) * C625 + (C16018 + C16019) * C19588) * C19577 *
               C8536) *
              C19620 * C622 -
          (((C16020 + C16021) * C19588 + (C16022 + C16023) * C625) * C19577 *
               C8536 +
           ((C16019 + C16018) * C19588 + (C16017 + C16016) * C625) * C19577 *
               C8535) *
              C19620 * C623 +
          (((C16023 + C16022) * C625 + (C16021 + C16020) * C19588) * C19577 *
               C8535 +
           ((C12209 * C3447 + C11903 * C3749 + C12210 * C5315 +
             C11904 * C5663) *
                C625 +
            (C12209 * C3449 + C11903 * C3751 + C12210 * C5317 +
             C11904 * C5664) *
                C19588) *
               C19577 * C8536) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eezy[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C19577 * C8535 +
           ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
                C151 +
            (C12209 * C693 + C11903 * C979 + C12210 * C2673 + C11904 * C3003) *
                C19609) *
               C19577 * C8536) *
              C80 -
          (((C13874 + C13875) * C19609 + (C13801 + C13800) * C151) * C19577 *
               C8536 +
           ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C19577 *
               C8535) *
              C81 +
          (((C12232 + C12233) * C151 + (C12297 + C12296) * C19609) * C19577 *
               C8535 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C151 +
            (C12209 * C691 + C11903 * C983 + C12210 * C2675 + C11904 * C3005) *
                C19609) *
               C19577 * C8536) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C688 +
           (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
               C622 -
           (C16017 + C16016) * C689 - (C16082 + C16083) * C623 +
           (C16023 + C16022) * C690 + (C16084 + C16085) * C624) *
              C19577 * C8535 +
          ((C16016 + C16017) * C688 + (C16083 + C16082) * C622 -
           (C16022 + C16023) * C689 - (C16085 + C16084) * C623 +
           (C12209 * C3447 + C11903 * C3749 + C12210 * C5315 + C11904 * C5663) *
               C690 +
           (C12209 * C3518 + C11903 * C3817 + C12210 * C5385 + C11904 * C5731) *
               C624) *
              C19577 * C8536) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[9] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C19577 * C8535 +
           ((C12209 * C628 + C11903 * C931 + C12210 * C2611 + C11904 * C2947) *
                C200 +
            (C12209 * C743 + C11903 * C1025 + C12210 * C2729 + C11904 * C3056) *
                C19620) *
               C19577 * C8536) *
              C19609 * C80 -
          (((C13946 + C13947) * C19620 + (C13801 + C13800) * C200) * C19577 *
               C8536 +
           ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C19577 *
               C8535) *
              C19609 * C81 +
          (((C12232 + C12233) * C200 + (C12359 + C12358) * C19620) * C19577 *
               C8535 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C200 +
            (C12209 * C741 + C11903 * C1023 + C12210 * C2731 + C11904 * C3058) *
                C19620) *
               C19577 * C8536) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C19577 * C8535 +
           ((C16016 + C16017) * C200 + (C16144 + C16145) * C19620) * C19577 *
               C8536) *
              C622 -
          (((C16146 + C16147) * C19620 + (C16022 + C16023) * C200) * C19577 *
               C8536 +
           ((C16145 + C16144) * C19620 + (C16017 + C16016) * C200) * C19577 *
               C8535) *
              C623 +
          (((C16023 + C16022) * C200 + (C16147 + C16146) * C19620) * C19577 *
               C8535 +
           ((C12209 * C3447 + C11903 * C3749 + C12210 * C5315 +
             C11904 * C5663) *
                C200 +
            (C12209 * C3569 + C11903 * C3866 + C12210 * C5443 +
             C11904 * C5788) *
                C19620) *
               C19577 * C8536) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C3098 +
                     (C4330 + C4331 - C4346 - C4347) * C3099 +
                     (C4336 + C4337 - C4348 - C4349) * C3100) *
                        C19656 * C19620 * C1525 +
                    ((C4346 - (C4331 + C4330) + C4347) * C3098 +
                     (C4348 - (C4337 + C4336) + C4349) * C3099 +
                     ((C3101 * C4325 + C19577 * C4326) * C1528 -
                      (C3472 * C1523 + C3473 * C1527) +
                      (C3101 * C4327 + C19577 * C4328) * C1524) *
                         C3100) *
                        C19656 * C19620 * C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C1527 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C1523 -
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C1528 -
                     (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                      C87 * C102 + C77 * C109) *
                         C1524) *
                        C19645 * C19656 * C19620 * C1525 +
                    ((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 +
                      C89 * C1529 + C79 * C1530) *
                         C1528 -
                     ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                       C87 * C634 + C77 * C646) *
                          C1523 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C1527) +
                     (C87 * C633 + C77 * C645 + C88 * C632 + C78 * C644 +
                      C89 * C1531 + C79 * C1532) *
                         C1524) *
                        C19645 * C19656 * C19620 * C1526)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C19645 * C5841 +
                     (C6552 * C1527 + C6553 * C1523 -
                      (C3101 * C1071 + C19577 * C1080) * C1528 -
                      (C3101 * C1077 + C19577 * C1089) * C1524) *
                         C19645 * C5842 +
                     (C6554 * C1527 + C6555 * C1523 -
                      (C3101 * C1074 + C19577 * C1083) * C1528 -
                      (C3101 * C1086 + C19577 * C1092) * C1524) *
                         C19645 * C5843) *
                        C19620 * C1525 +
                    ((C4346 - (C4331 + C4330) + C4347) * C19645 * C5841 +
                     ((C3101 * C2612 + C19577 * C2615) * C1528 -
                      (C5330 * C1523 + C5331 * C1527) +
                      (C3101 * C2618 + C19577 * C2621) * C1524) *
                         C19645 * C5842 +
                     ((C3101 * C7019 + C19577 * C7020) * C1528 -
                      ((C3101 * C3929 + C19577 * C3933) * C1523 +
                       (C3101 * C3924 + C19577 * C3928) * C1527) +
                      (C3101 * C7021 + C19577 * C7022) * C1524) *
                         C19645 * C5843) *
                        C19620 * C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C3098 +
           (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
               C3099 +
           (C3470 * C1583 + C3530 * C1525 - C3473 * C1584 - C3531 * C1526) *
               C3100) *
              C19656 * C1523 +
          ((C4342 * C1584 -
            ((C3101 * C153 + C19577 * C158) * C1525 +
             (C3101 * C94 + C19577 * C99) * C1583) +
            C4406 * C1526) *
               C3098 +
           (C4344 * C1584 - (C4406 * C1525 + C4342 * C1583) + C4407 * C1526) *
               C3099 +
           ((C3101 * C4325 + C19577 * C4326) * C1584 -
            (C4407 * C1525 + C4344 * C1583) +
            (C3101 * C4399 + C19577 * C4400) * C1526) *
               C3100) *
              C19656 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C1583 +
           (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
            C79 * C159) *
               C1525 -
           (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
            C77 * C637) *
               C1584 -
           (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 + C87 * C693 +
            C77 * C699) *
               C1526) *
              C19645 * C19656 * C1523 +
          ((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 + C89 * C1529 +
            C79 * C1530) *
               C1584 -
           ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 + C87 * C153 +
             C77 * C158) *
                C1525 +
            (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
             C77 * C99) *
                C1583) +
           (C87 * C692 + C77 * C698 + C88 * C691 + C78 * C697 + C89 * C1585 +
            C79 * C1586) *
               C1526) *
              C19645 * C19656 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C19645 * C5841 +
           (C6552 * C1583 + C6617 * C1525 - C5331 * C1584 - C5392 * C1526) *
               C19645 * C5842 +
           (C6554 * C1583 + C6618 * C1525 -
            (C3101 * C3924 + C19577 * C3928) * C1584 -
            (C3101 * C3974 + C19577 * C3977) * C1526) *
               C19645 * C5843) *
              C1523 +
          ((C4342 * C1584 -
            ((C3101 * C153 + C19577 * C158) * C1525 +
             (C3101 * C94 + C19577 * C99) * C1583) +
            C4406 * C1526) *
               C19645 * C5841 +
           ((C3101 * C2612 + C19577 * C2615) * C1584 -
            ((C3101 * C1133 + C19577 * C1139) * C1525 +
             (C3101 * C1071 + C19577 * C1080) * C1583) +
            (C3101 * C2674 + C19577 * C2677) * C1526) *
               C19645 * C5842 +
           ((C3101 * C7019 + C19577 * C7020) * C1584 -
            ((C3101 * C1136 + C19577 * C1142) * C1525 +
             (C3101 * C1074 + C19577 * C1083) * C1583) +
            (C3101 * C7073 + C19577 * C7074) * C1526) *
               C19645 * C5843) *
              C1524) *
         C19620) /
            (p * q * std::sqrt(p + q));
    d2eexz[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C200 +
                       (C3101 * C201 + C19577 * C206) * C19620) *
                          C3098 +
                      (C3574 + C3586) * C3099 + C3589 * C3100) *
                         C19656 * C1525 -
                     ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
                      (C3586 + C3574) * C3098) *
                         C19656 * C1526) *
                        C1523 +
                    (((C4460 + C4468) * C3098 + (C4463 + C4469) * C3099 +
                      ((C3101 * C4325 + C19577 * C4326) * C200 +
                       (C3101 * C4457 + C19577 * C4458) * C19620) *
                          C3100) *
                         C19656 * C1526 -
                     ((C4469 + C4463) * C3100 + (C4468 + C4460) * C3099 +
                      ((C3101 * C202 + C19577 * C207) * C19620 +
                       (C3101 * C94 + C19577 * C99) * C200) *
                          C3098) *
                         C19656 * C1525) *
                        C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C200 +
                      (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                       C89 * C203 + C79 * C208) *
                          C19620) *
                         C19645 * C19656 * C1525 -
                     ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                       C87 * C743 + C77 * C749) *
                          C19620 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C200) *
                         C19645 * C19656 * C1526) *
                        C1523 +
                    (((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 +
                       C89 * C1529 + C79 * C1530) *
                          C200 +
                      (C87 * C742 + C77 * C748 + C88 * C741 + C78 * C747 +
                       C89 * C1637 + C79 * C1638) *
                          C19620) *
                         C19645 * C19656 * C1526 -
                     ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                       C87 * C202 + C77 * C207) *
                          C19620 +
                      (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                       C87 * C94 + C77 * C99) *
                          C200) *
                         C19645 * C19656 * C1525) *
                        C1524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C200 +
                       (C3101 * C201 + C19577 * C206) * C19620) *
                          C19645 * C5841 +
                      (C6552 * C200 + C6673 * C19620) * C19645 * C5842 +
                      (C6554 * C200 + C6674 * C19620) * C19645 * C5843) *
                         C1525 -
                     (((C3101 * C4017 + C19577 * C4020) * C19620 +
                       (C3101 * C3924 + C19577 * C3928) * C200) *
                          C19645 * C5843 +
                      (C5456 * C19620 + C5331 * C200) * C19645 * C5842 +
                      (C3586 + C3574) * C19645 * C5841) *
                         C1526) *
                        C1523 +
                    (((C4460 + C4468) * C19645 * C5841 +
                      ((C3101 * C2612 + C19577 * C2615) * C200 +
                       (C3101 * C2730 + C19577 * C2733) * C19620) *
                          C19645 * C5842 +
                      ((C3101 * C7019 + C19577 * C7020) * C200 +
                       (C3101 * C7125 + C19577 * C7126) * C19620) *
                          C19645 * C5843) *
                         C1526 -
                     (((C3101 * C1189 + C19577 * C1195) * C19620 +
                       (C3101 * C1074 + C19577 * C1083) * C200) *
                          C19645 * C5843 +
                      ((C3101 * C1186 + C19577 * C1192) * C19620 +
                       (C3101 * C1071 + C19577 * C1080) * C200) *
                          C19645 * C5842 +
                      ((C3101 * C202 + C19577 * C207) * C19620 +
                       (C3101 * C94 + C19577 * C99) * C200) *
                          C19645 * C5841) *
                         C1525) *
                        C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C1527 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C1523 -
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C1528 -
           (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
            C3216 * C102 + C3098 * C256) *
               C1524) *
              C19656 * C19577 * C19620 * C1525 +
          ((C3216 * C627 + C3098 * C792 + C3217 * C630 + C3099 * C795 +
            C3218 * C4325 + C3100 * C4519) *
               C1528 -
           ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 + C3099 * C800 +
             C3216 * C634 + C3098 * C799) *
                C1523 +
            (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
             C3216 * C628 + C3098 * C793) *
                C1527) +
           (C3216 * C633 + C3098 * C798 + C3217 * C642 + C3099 * C801 +
            C3218 * C4327 + C3100 * C4520) *
               C1524) *
              C19656 * C19577 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C19656 * C77 +
           (C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
               C19656 * C78 +
           (C275 * C1527 + C276 * C1523 - C277 * C1528 - C278 * C1524) *
               C19656 * C79) *
              C19620 * C1525 +
          ((C1700 * C1528 -
            ((C249 * C634 + C19645 * C799) * C1523 +
             (C249 * C628 + C19645 * C793) * C1527) +
            C1701 * C1524) *
               C19656 * C77 +
           (C1702 * C1528 - (C1701 * C1523 + C1700 * C1527) + C1703 * C1524) *
               C19656 * C78 +
           ((C249 * C1529 + C19645 * C1689) * C1528 -
            (C1703 * C1523 + C1702 * C1527) +
            (C249 * C1531 + C19645 * C1690) * C1524) *
               C19656 * C79) *
              C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C5841 +
           (C6730 * C1527 + C6731 * C1523 - C2242 * C1528 - C2243 * C1524) *
               C5842 +
           (C6732 * C1527 + C6733 * C1523 -
            (C249 * C1074 + C19645 * C1239) * C1528 -
            (C249 * C1086 + C19645 * C1245) * C1524) *
               C5843) *
              C19577 * C19620 * C1525 +
          ((C1700 * C1528 -
            ((C249 * C634 + C19645 * C799) * C1523 +
             (C249 * C628 + C19645 * C793) * C1527) +
            C1701 * C1524) *
               C5841 +
           ((C249 * C2612 + C19645 * C2786) * C1528 -
            ((C249 * C2617 + C19645 * C2788) * C1523 +
             (C249 * C2611 + C19645 * C2785) * C1527) +
            (C249 * C2618 + C19645 * C2789) * C1524) *
               C5842 +
           ((C249 * C7019 + C19645 * C7177) * C1528 -
            ((C249 * C3929 + C19645 * C4065) * C1523 +
             (C249 * C3924 + C19645 * C4062) * C1527) +
            (C249 * C7021 + C19645 * C7178) * C1524) *
               C5843) *
              C19577 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[10] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C1583 +
                     (C3216 * C152 + C3098 * C316 + C3217 * C693 +
                      C3099 * C841 + C3218 * C694 + C3100 * C842) *
                         C1525 -
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C1584 -
                     (C3218 * C3518 + C3100 * C3669 + C3217 * C694 +
                      C3099 * C842 + C3216 * C693 + C3098 * C841) *
                         C1526) *
                        C19656 * C19577 * C1523 +
                    ((C3216 * C627 + C3098 * C792 + C3217 * C630 +
                      C3099 * C795 + C3218 * C4325 + C3100 * C4519) *
                         C1584 -
                     ((C3218 * C695 + C3100 * C844 + C3217 * C692 +
                       C3099 * C843 + C3216 * C153 + C3098 * C317) *
                          C1525 +
                      (C3218 * C630 + C3100 * C795 + C3217 * C627 +
                       C3099 * C792 + C3216 * C94 + C3098 * C251) *
                          C1583) +
                     (C3216 * C692 + C3098 * C843 + C3217 * C695 +
                      C3099 * C844 + C3218 * C4399 + C3100 * C4571) *
                         C1526) *
                        C19656 * C19577 * C1524) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C19656 * C77 +
                     (C1755 + C1756 - C1757 - C1767) * C19656 * C78 +
                     (C1760 + C1761 - C1762 - C1768) * C19656 * C79) *
                        C1523 +
                    ((C1757 - (C1756 + C1755) + C1767) * C19656 * C77 +
                     (C1762 - (C1761 + C1760) + C1768) * C19656 * C78 +
                     ((C249 * C1529 + C19645 * C1689) * C1584 -
                      (C333 * C1525 + C277 * C1583) +
                      (C249 * C1585 + C19645 * C1753) * C1526) *
                         C19656 * C79) *
                        C1524) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C5841 +
                     (C6730 * C1583 + C6792 * C1525 -
                      (C249 * C2611 + C19645 * C2785) * C1584 -
                      (C249 * C2673 + C19645 * C2841) * C1526) *
                         C5842 +
                     (C6732 * C1583 + C6793 * C1525 -
                      (C249 * C3924 + C19645 * C4062) * C1584 -
                      (C249 * C3974 + C19645 * C4106) * C1526) *
                         C5843) *
                        C19577 * C1523 +
                    ((C1757 - (C1756 + C1755) + C1767) * C5841 +
                     ((C249 * C2612 + C19645 * C2786) * C1584 -
                      (C2303 * C1525 + C2242 * C1583) +
                      (C249 * C2674 + C19645 * C2842) * C1526) *
                         C5842 +
                     ((C249 * C7019 + C19645 * C7177) * C1584 -
                      ((C249 * C1136 + C19645 * C1289) * C1525 +
                       (C249 * C1074 + C19645 * C1239) * C1583) +
                      (C249 * C7073 + C19645 * C7229) * C1526) *
                         C5843) *
                        C19577 * C1524) *
                   C19620) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
             C3218 * C629 + C3100 * C794) *
                C200 +
            (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
             C3218 * C744 + C3100 * C888) *
                C19620) *
               C19656 * C19577 * C1525 -
           ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
             C3216 * C743 + C3098 * C887) *
                C19620 +
            (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
             C3216 * C628 + C3098 * C793) *
                C200) *
               C19656 * C19577 * C1526) *
              C1523 +
          (((C3216 * C627 + C3098 * C792 + C3217 * C630 + C3099 * C795 +
             C3218 * C4325 + C3100 * C4519) *
                C200 +
            (C3216 * C742 + C3098 * C886 + C3217 * C745 + C3099 * C889 +
             C3218 * C4457 + C3100 * C4622) *
                C19620) *
               C19656 * C19577 * C1526 -
           ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
             C3216 * C202 + C3098 * C377) *
                C19620 +
            (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
             C3216 * C94 + C3098 * C251) *
                C200) *
               C19656 * C19577 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C19656 * C77 +
            (C382 + C394) * C19656 * C78 + C398 * C79) *
               C1525 -
           ((C1828 + C1822) * C19656 * C79 + (C1829 + C1825) * C19656 * C78 +
            ((C249 * C743 + C19645 * C887) * C19620 +
             (C249 * C628 + C19645 * C793) * C200) *
                C19656 * C77) *
               C1526) *
              C1523 +
          (((C1825 + C1829) * C19656 * C77 + (C1822 + C1828) * C19656 * C78 +
            ((C249 * C1529 + C19645 * C1689) * C200 +
             (C249 * C1637 + C19645 * C1818) * C19620) *
                C19656 * C79) *
               C1526 -
           ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
            (C394 + C382) * C19656 * C77) *
               C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C5841 +
            (C6730 * C200 + C6845 * C19620) * C5842 +
            (C6732 * C200 + C6846 * C19620) * C5843) *
               C19577 * C1525 -
           (((C249 * C4017 + C19645 * C4147) * C19620 +
             (C249 * C3924 + C19645 * C4062) * C200) *
                C5843 +
            ((C249 * C2729 + C19645 * C2894) * C19620 +
             (C249 * C2611 + C19645 * C2785) * C200) *
                C5842 +
            ((C249 * C743 + C19645 * C887) * C19620 +
             (C249 * C628 + C19645 * C793) * C200) *
                C5841) *
               C19577 * C1526) *
              C1523 +
          (((C1825 + C1829) * C5841 +
            ((C249 * C2612 + C19645 * C2786) * C200 +
             (C249 * C2730 + C19645 * C2895) * C19620) *
                C5842 +
            ((C249 * C7019 + C19645 * C7177) * C200 +
             (C249 * C7125 + C19645 * C7280) * C19620) *
                C5843) *
               C19577 * C1526 -
           (((C249 * C1189 + C19645 * C1332) * C19620 +
             (C249 * C1074 + C19645 * C1239) * C200) *
                C5843 +
            (C2368 * C19620 + C2242 * C200) * C5842 + (C394 + C382) * C5841) *
               C19577 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C19577 * C3098 +
           (C4676 + C4677 - C4678 - C4679) * C19577 * C3099 +
           (C4680 + C4681 - C4688 - C4689) * C19577 * C3100) *
              C19620 * C1525 +
          ((C4678 - (C4677 + C4676) + C4679) * C19577 * C3098 +
           (C4688 - (C4681 + C4680) + C4689) * C19577 * C3099 +
           ((C436 * C4325 + C19656 * C4673) * C1528 -
            (C3770 * C1523 + C3771 * C1527) +
            (C436 * C4327 + C19656 * C4674) * C1524) *
               C19577 * C3100) *
              C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C77 +
           (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) * C78 +
           (C462 * C1527 + C463 * C1523 - C464 * C1528 - C465 * C1524) * C79) *
              C19645 * C19620 * C1525 +
          ((C1890 * C1528 -
            ((C436 * C634 + C19656 * C937) * C1523 +
             (C436 * C628 + C19656 * C931) * C1527) +
            C1891 * C1524) *
               C77 +
           (C1892 * C1528 - (C1891 * C1523 + C1890 * C1527) + C1893 * C1524) *
               C78 +
           ((C436 * C1529 + C19656 * C1879) * C1528 -
            (C1893 * C1523 + C1892 * C1527) +
            (C436 * C1531 + C19656 * C1880) * C1524) *
               C79) *
              C19645 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C1527 +
           (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
            C6074 * C1085 + C5843 * C1382) *
               C1523 -
           (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
            C6072 * C94 + C5841 * C438) *
               C1528 -
           (C6074 * C1086 + C5843 * C1383 + C6073 * C1077 + C5842 * C1380 +
            C6072 * C102 + C5841 * C443) *
               C1524) *
              C19577 * C19645 * C19620 * C1525 +
          ((C6072 * C627 + C5841 * C930 + C6073 * C2612 + C5842 * C2948 +
            C6074 * C7019 + C5843 * C7331) *
               C1528 -
           ((C6074 * C3929 + C5843 * C4191 + C6073 * C2617 + C5842 * C2950 +
             C6072 * C634 + C5841 * C937) *
                C1523 +
            (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
             C6072 * C628 + C5841 * C931) *
                C1527) +
           (C6072 * C633 + C5841 * C936 + C6073 * C2618 + C5842 * C2951 +
            C6074 * C7021 + C5843 * C7332) *
               C1524) *
              C19577 * C19645 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q));
    d2eezy[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
            C3826 * C1526) *
               C19577 * C3098 +
           (C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
               C19577 * C3099 +
           (C3768 * C1583 + C3827 * C1525 - C3771 * C1584 - C3828 * C1526) *
               C19577 * C3100) *
              C1523 +
          ((C1947 - (C1946 + C1945) + C1957) * C19577 * C3098 +
           (C4686 * C1584 - (C1955 * C1525 + C1890 * C1583) + C4743 * C1526) *
               C19577 * C3099 +
           ((C436 * C4325 + C19656 * C4673) * C1584 -
            (C4743 * C1525 + C4686 * C1583) +
            (C436 * C4399 + C19656 * C4739) * C1526) *
               C19577 * C3100) *
              C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 -
            (C436 * C628 + C19656 * C931) * C1584 -
            (C436 * C693 + C19656 * C979) * C1526) *
               C77 +
           (C1945 + C1946 - C1947 - C1957) * C78 +
           (C1950 + C1951 - C1952 - C1958) * C79) *
              C19645 * C1523 +
          ((C1947 - (C1946 + C1945) + C1957) * C77 +
           (C1952 - (C1951 + C1950) + C1958) * C78 +
           ((C436 * C1529 + C19656 * C1879) * C1584 -
            (C520 * C1525 + C464 * C1583) +
            (C436 * C1585 + C19656 * C1943) * C1526) *
               C79) *
              C19645 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C1583 +
           (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
            C6074 * C1135 + C5843 * C1426) *
               C1525 -
           (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
            C6072 * C628 + C5841 * C931) *
               C1584 -
           (C6074 * C3974 + C5843 * C4232 + C6073 * C2673 + C5842 * C3003 +
            C6072 * C693 + C5841 * C979) *
               C1526) *
              C19577 * C19645 * C1523 +
          ((C6072 * C627 + C5841 * C930 + C6073 * C2612 + C5842 * C2948 +
            C6074 * C7019 + C5843 * C7331) *
               C1584 -
           ((C6074 * C1136 + C5843 * C1427 + C6073 * C1133 + C5842 * C1424 +
             C6072 * C153 + C5841 * C504) *
                C1525 +
            (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
             C6072 * C94 + C5841 * C438) *
                C1583) +
           (C6072 * C692 + C5841 * C981 + C6073 * C2674 + C5842 * C3004 +
            C6074 * C7073 + C5843 * C7383) *
               C1526) *
              C19577 * C19645 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[10] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C19577 * C3098 +
            (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
               C1525 -
           ((C3883 + C3877) * C19577 * C3100 +
            (C3882 + C3872) * C19577 * C3099 +
            (C3881 + C3869) * C19577 * C3098) *
               C1526) *
              C1523 +
          (((C2015 + C2019) * C19577 * C3098 +
            (C4795 + C4799) * C19577 * C3099 +
            ((C436 * C4325 + C19656 * C4673) * C200 +
             (C436 * C4457 + C19656 * C4793) * C19620) *
                C19577 * C3100) *
               C1526 -
           ((C4799 + C4795) * C19577 * C3100 +
            (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
               C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C77 +
            (C568 + C580) * C78 + C583 * C79) *
               C19645 * C1525 -
           ((C2018 + C2012) * C79 + (C2019 + C2015) * C78 +
            ((C436 * C743 + C19656 * C1025) * C19620 +
             (C436 * C628 + C19656 * C931) * C200) *
                C77) *
               C19645 * C1526) *
              C1523 +
          (((C2015 + C2019) * C77 + (C2012 + C2018) * C78 +
            ((C436 * C1529 + C19656 * C1879) * C200 +
             (C436 * C1637 + C19656 * C2008) * C19620) *
                C79) *
               C19645 * C1526 -
           ((C582 + C576) * C79 + (C581 + C571) * C78 + (C580 + C568) * C77) *
               C19645 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
             C6074 * C1073 + C5843 * C1376) *
                C200 +
            (C6072 * C201 + C5841 * C562 + C6073 * C1187 + C5842 * C1467 +
             C6074 * C1188 + C5843 * C1468) *
                C19620) *
               C19577 * C19645 * C1525 -
           ((C6074 * C4017 + C5843 * C4272 + C6073 * C2729 + C5842 * C3056 +
             C6072 * C743 + C5841 * C1025) *
                C19620 +
            (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
             C6072 * C628 + C5841 * C931) *
                C200) *
               C19577 * C19645 * C1526) *
              C1523 +
          (((C6072 * C627 + C5841 * C930 + C6073 * C2612 + C5842 * C2948 +
             C6074 * C7019 + C5843 * C7331) *
                C200 +
            (C6072 * C742 + C5841 * C1024 + C6073 * C2730 + C5842 * C3057 +
             C6074 * C7125 + C5843 * C7434) *
                C19620) *
               C19577 * C19645 * C1526 -
           ((C6074 * C1189 + C5843 * C1470 + C6073 * C1186 + C5842 * C1469 +
             C6072 * C202 + C5841 * C563) *
                C19620 +
            (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
             C6072 * C94 + C5841 * C438) *
                C200) *
               C19577 * C19645 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q));
    d2eexx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C625 +
                       (C3101 * C101 + C19577 * C108) * C19588) *
                          C3098 +
                      (C3474 + C3475) * C3099 + C3480 * C3100) *
                         C19656 * C2069 -
                     ((C5332 + C5333) * C3100 + (C5334 + C5335) * C3099 +
                      ((C3101 * C1078 + C19577 * C1090) * C19588 +
                       (C3101 * C1072 + C19577 * C1081) * C625) *
                          C3098) *
                         C19656 * C2070) *
                        C1525 +
                    (((C5335 + C5334) * C3098 + (C5333 + C5332) * C3099 +
                      ((C3101 * C5315 + C19577 * C5316) * C625 +
                       (C3101 * C5317 + C19577 * C5318) * C19588) *
                          C3100) *
                         C19656 * C2070 -
                     ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
                      (C3475 + C3474) * C3098) *
                         C19656 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C625 +
                      (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                       C89 * C103 + C79 * C110) *
                          C19588) *
                         C19645 * C19656 * C2069 -
                     ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
                       C87 * C1078 + C77 * C1090) *
                          C19588 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C625) *
                         C19645 * C19656 * C2070) *
                        C1525 +
                    (((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
                       C89 * C2613 + C79 * C2616) *
                          C625 +
                      (C87 * C2617 + C77 * C2620 + C88 * C2618 + C78 * C2621 +
                       C89 * C2619 + C79 * C2622) *
                          C19588) *
                         C19645 * C19656 * C2070 -
                     ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                       C87 * C634 + C77 * C646) *
                          C19588 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C625) *
                         C19645 * C19656 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C625 +
                       (C3101 * C101 + C19577 * C108) * C19588) *
                          C19645 * C5841 +
                      (C6558 + C6559) * C19645 * C5842 + C6565 * C5843) *
                         C2069 -
                     ((C6562 + C6563) * C19645 * C5843 +
                      (C6561 + C6560) * C19645 * C5842 +
                      (C6559 + C6558) * C19645 * C5841) *
                         C2070) *
                        C1525 +
                    (((C5335 + C5334) * C19645 * C5841 +
                      (C8020 + C8021) * C19645 * C5842 +
                      ((C3101 * C8009 + C19577 * C8010) * C625 +
                       (C3101 * C8011 + C19577 * C8012) * C19588) *
                          C19645 * C5843) *
                         C2070 -
                     ((C8021 + C8020) * C19645 * C5843 +
                      (C5334 + C5335) * C19645 * C5842 +
                      (C3475 + C3474) * C19645 * C5841) *
                         C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C3098 +
           (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
               C3099 +
           (C3470 * C1583 + C3530 * C1525 - C3473 * C1584 - C3531 * C1526) *
               C3100) *
              C19656 * C19588 * C2069 +
          ((C5331 * C1584 -
            ((C3101 * C1134 + C19577 * C1140) * C1525 +
             (C3101 * C1072 + C19577 * C1081) * C1583) +
            C5392 * C1526) *
               C3098 +
           (C5329 * C1584 - (C5392 * C1525 + C5331 * C1583) + C5393 * C1526) *
               C3099 +
           ((C3101 * C5315 + C19577 * C5316) * C1584 -
            (C5393 * C1525 + C5329 * C1583) +
            (C3101 * C5385 + C19577 * C5386) * C1526) *
               C3100) *
              C19656 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C1583 +
           (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
            C79 * C159) *
               C1525 -
           (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
            C77 * C637) *
               C1584 -
           (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 + C87 * C693 +
            C77 * C699) *
               C1526) *
              C19645 * C19656 * C19588 * C2069 +
          ((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
            C89 * C2613 + C79 * C2616) *
               C1584 -
           ((C89 * C1132 + C79 * C1138 + C88 * C1133 + C78 * C1139 +
             C87 * C1134 + C77 * C1140) *
                C1525 +
            (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
             C87 * C1072 + C77 * C1081) *
                C1583) +
           (C87 * C2673 + C77 * C2676 + C88 * C2674 + C78 * C2677 +
            C89 * C2675 + C79 * C2678) *
               C1526) *
              C19645 * C19656 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C19645 * C5841 +
           (C8074 + C8075 - C8076 - C8077) * C19645 * C5842 +
           (C8078 + C8079 - C8080 - C8084) * C19645 * C5843) *
              C19588 * C2069 +
          ((C8076 - (C8075 + C8074) + C8077) * C19645 * C5841 +
           (C8080 - (C8079 + C8078) + C8084) * C19645 * C5842 +
           ((C3101 * C8009 + C19577 * C8010) * C1584 -
            (C6619 * C1525 + C6557 * C1583) +
            (C3101 * C8071 + C19577 * C8072) * C1526) *
               C19645 * C5843) *
              C19588 * C2070)) /
            (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C2177 +
            (C3101 * C201 + C19577 * C206) * C2069 -
            (C3101 * C1072 + C19577 * C1081) * C2178 -
            (C3101 * C1187 + C19577 * C1193) * C2070) *
               C3098 +
           (C5446 + C5447 - C5448 - C5458) * C3099 +
           (C5451 + C5452 - C5453 - C5459) * C3100) *
              C19656 * C1525 +
          ((C5448 - (C5447 + C5446) + C5458) * C3098 +
           (C5453 - (C5452 + C5451) + C5459) * C3099 +
           ((C3101 * C5315 + C19577 * C5316) * C2178 -
            (C3585 * C2069 + C3473 * C2177) +
            (C3101 * C5443 + C19577 * C5444) * C2070) *
               C3100) *
              C19656 * C1526) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C2177 +
           (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 + C89 * C203 +
            C79 * C208) *
               C2069 -
           (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
            C87 * C1072 + C77 * C1081) *
               C2178 -
           (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 +
            C87 * C1187 + C77 * C1193) *
               C2070) *
              C19645 * C19656 * C1525 +
          ((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
            C89 * C2613 + C79 * C2616) *
               C2178 -
           ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 + C87 * C743 +
             C77 * C749) *
                C2069 +
            (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
             C77 * C637) *
                C2177) +
           (C87 * C2729 + C77 * C2732 + C88 * C2730 + C78 * C2733 +
            C89 * C2731 + C79 * C2734) *
               C2070) *
              C19645 * C19656 * C1526) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C2177 +
            (C3101 * C201 + C19577 * C206) * C2069 - C6552 * C2178 -
            C6673 * C2070) *
               C19645 * C5841 +
           (C6552 * C2177 + C6673 * C2069 - C6554 * C2178 - C6674 * C2070) *
               C19645 * C5842 +
           (C6554 * C2177 + C6674 * C2069 - C6557 * C2178 - C6675 * C2070) *
               C19645 * C5843) *
              C1525 +
          ((C5448 - (C5447 + C5446) + C5458) * C19645 * C5841 +
           (C8018 * C2178 - (C5456 * C2069 + C5331 * C2177) + C8139 * C2070) *
               C19645 * C5842 +
           ((C3101 * C8009 + C19577 * C8010) * C2178 -
            (C8139 * C2069 + C8018 * C2177) +
            (C3101 * C8134 + C19577 * C8135) * C2070) *
               C19645 * C5843) *
              C1526) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3216 * C93 + C3098 * C250 + C3217 * C628 +
                       C3099 * C793 + C3218 * C629 + C3100 * C794) *
                          C625 +
                      (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                       C3099 * C799 + C3218 * C641 + C3100 * C800) *
                          C19588) *
                         C19656 * C19577 * C2069 -
                     ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 +
                       C3099 * C2788 + C3216 * C1078 + C3098 * C1243) *
                          C19588 +
                      (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                       C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                          C625) *
                         C19656 * C19577 * C2070) *
                        C1525 +
                    (((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 +
                       C3099 * C4061 + C3218 * C5315 + C3100 * C5509) *
                          C625 +
                      (C3216 * C2617 + C3098 * C2788 + C3217 * C3926 +
                       C3099 * C4064 + C3218 * C5317 + C3100 * C5510) *
                          C19588) *
                         C19656 * C19577 * C2070 -
                     ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 +
                       C3099 * C800 + C3216 * C634 + C3098 * C799) *
                          C19588 +
                      (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                       C3099 * C794 + C3216 * C628 + C3098 * C793) *
                          C625) *
                         C19656 * C19577 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C249 * C93 + C19645 * C250) * C625 +
                       (C249 * C101 + C19645 * C255) * C19588) *
                          C19656 * C77 +
                      (C273 * C625 + C274 * C19588) * C19656 * C78 +
                      (C275 * C625 + C276 * C19588) * C19656 * C79) *
                         C2069 -
                     ((C2245 * C19588 + C2244 * C625) * C19656 * C79 +
                      (C2243 * C19588 + C2242 * C625) * C19656 * C78 +
                      ((C249 * C1078 + C19645 * C1243) * C19588 +
                       (C249 * C1072 + C19645 * C1237) * C625) *
                          C19656 * C77) *
                         C2070) *
                        C1525 +
                    ((((C249 * C2611 + C19645 * C2785) * C625 +
                       (C249 * C2617 + C19645 * C2788) * C19588) *
                          C19656 * C77 +
                      ((C249 * C2612 + C19645 * C2786) * C625 +
                       (C249 * C2618 + C19645 * C2789) * C19588) *
                          C19656 * C78 +
                      ((C249 * C2613 + C19645 * C2787) * C625 +
                       (C249 * C2619 + C19645 * C2790) * C19588) *
                          C19656 * C79) *
                         C2070 -
                     ((C1703 * C19588 + C1702 * C625) * C19656 * C79 +
                      (C1701 * C19588 + C1700 * C625) * C19656 * C78 +
                      ((C249 * C634 + C19645 * C799) * C19588 +
                       (C249 * C628 + C19645 * C793) * C625) *
                          C19656 * C77) *
                         C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C249 * C93 + C19645 * C250) * C625 +
                       (C249 * C101 + C19645 * C255) * C19588) *
                          C5841 +
                      (C6736 + C6737) * C5842 + C6742 * C5843) *
                         C19577 * C2069 -
                     ((C6740 + C6741) * C5843 + (C6739 + C6738) * C5842 +
                      (C6737 + C6736) * C5841) *
                         C19577 * C2070) *
                        C1525 +
                    (((C8204 + C8205) * C5841 + (C8206 + C8207) * C5842 +
                      ((C249 * C8009 + C19645 * C8189) * C625 +
                       (C249 * C8011 + C19645 * C8190) * C19588) *
                          C5843) *
                         C19577 * C2070 -
                     ((C8207 + C8206) * C5843 + (C8205 + C8204) * C5842 +
                      ((C249 * C634 + C19645 * C799) * C19588 +
                       (C249 * C628 + C19645 * C793) * C625) *
                          C5841) *
                         C19577 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C1583 +
                     (C3216 * C152 + C3098 * C316 + C3217 * C693 +
                      C3099 * C841 + C3218 * C694 + C3100 * C842) *
                         C1525 -
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C1584 -
                     (C3218 * C3518 + C3100 * C3669 + C3217 * C694 +
                      C3099 * C842 + C3216 * C693 + C3098 * C841) *
                         C1526) *
                        C19656 * C19577 * C19588 * C2069 +
                    ((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 +
                      C3099 * C4061 + C3218 * C5315 + C3100 * C5509) *
                         C1584 -
                     ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 +
                       C3099 * C2841 + C3216 * C1134 + C3098 * C1287) *
                          C1525 +
                      (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                       C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                          C1583) +
                     (C3216 * C2673 + C3098 * C2841 + C3217 * C3973 +
                      C3099 * C4105 + C3218 * C5385 + C3100 * C5561) *
                         C1526) *
                        C19656 * C19577 * C19588 * C2070)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C19656 * C77 +
                     (C1755 + C1756 - C1757 - C1767) * C19656 * C78 +
                     (C1760 + C1761 - C1762 - C1768) * C19656 * C79) *
                        C19588 * C2069 +
                    (((C249 * C2611 + C19645 * C2785) * C1584 -
                      ((C249 * C1134 + C19645 * C1287) * C1525 +
                       (C249 * C1072 + C19645 * C1237) * C1583) +
                      (C249 * C2673 + C19645 * C2841) * C1526) *
                         C19656 * C77 +
                     ((C249 * C2612 + C19645 * C2786) * C1584 -
                      (C2303 * C1525 + C2242 * C1583) +
                      (C249 * C2674 + C19645 * C2842) * C1526) *
                         C19656 * C78 +
                     ((C249 * C2613 + C19645 * C2787) * C1584 -
                      (C2304 * C1525 + C2244 * C1583) +
                      (C249 * C2675 + C19645 * C2843) * C1526) *
                         C19656 * C79) *
                        C19588 * C2070)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C5841 +
                     (C8259 + C8260 - C8261 - C8271) * C5842 +
                     (C8264 + C8265 - C8266 - C8272) * C5843) *
                        C19577 * C19588 * C2069 +
                    ((C8261 - (C8260 + C8259) + C8271) * C5841 +
                     (C8266 - (C8265 + C8264) + C8272) * C5842 +
                     ((C249 * C8009 + C19645 * C8189) * C1584 -
                      (C6794 * C1525 + C6735 * C1583) +
                      (C249 * C8071 + C19645 * C8257) * C1526) *
                         C5843) *
                        C19577 * C19588 * C2070)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C2177 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C2069 -
           (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
            C3216 * C1072 + C3098 * C1237) *
               C2178 -
           (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 + C3099 * C2894 +
            C3216 * C1187 + C3098 * C1329) *
               C2070) *
              C19656 * C19577 * C1525 +
          ((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 + C3099 * C4061 +
            C3218 * C5315 + C3100 * C5509) *
               C2178 -
           ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
             C3216 * C743 + C3098 * C887) *
                C2069 +
            (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
             C3216 * C628 + C3098 * C793) *
                C2177) +
           (C3216 * C2729 + C3098 * C2894 + C3217 * C4018 + C3099 * C4146 +
            C3218 * C5443 + C3100 * C5612) *
               C2070) *
              C19656 * C19577 * C1526) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C2177 +
            (C249 * C201 + C19645 * C376) * C2069 -
            (C249 * C1072 + C19645 * C1237) * C2178 -
            (C249 * C1187 + C19645 * C1329) * C2070) *
               C19656 * C77 +
           (C2358 + C2359 - C2360 - C2370) * C19656 * C78 +
           (C2363 + C2364 - C2365 - C2371) * C19656 * C79) *
              C1525 +
          (((C249 * C2611 + C19645 * C2785) * C2178 -
            ((C249 * C743 + C19645 * C887) * C2069 +
             (C249 * C628 + C19645 * C793) * C2177) +
            (C249 * C2729 + C19645 * C2894) * C2070) *
               C19656 * C77 +
           ((C249 * C2612 + C19645 * C2786) * C2178 -
            (C1827 * C2069 + C1700 * C2177) +
            (C249 * C2730 + C19645 * C2895) * C2070) *
               C19656 * C78 +
           ((C249 * C2613 + C19645 * C2787) * C2178 -
            (C1826 * C2069 + C1702 * C2177) +
            (C249 * C2731 + C19645 * C2896) * C2070) *
               C19656 * C79) *
              C1526) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C2177 +
            (C249 * C201 + C19645 * C376) * C2069 - C6730 * C2178 -
            C6845 * C2070) *
               C5841 +
           (C6730 * C2177 + C6845 * C2069 - C6732 * C2178 - C6846 * C2070) *
               C5842 +
           (C6732 * C2177 + C6846 * C2069 - C6735 * C2178 - C6847 * C2070) *
               C5843) *
              C19577 * C1525 +
          ((C8200 * C2178 -
            ((C249 * C743 + C19645 * C887) * C2069 +
             (C249 * C628 + C19645 * C793) * C2177) +
            C8328 * C2070) *
               C5841 +
           (C8202 * C2178 - (C8328 * C2069 + C8200 * C2177) + C8329 * C2070) *
               C5842 +
           ((C249 * C8009 + C19645 * C8189) * C2178 -
            (C8329 * C2069 + C8202 * C2177) +
            (C249 * C8134 + C19645 * C8322) * C2070) *
               C5843) *
              C19577 * C1526) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C436 * C93 + C19656 * C437) * C625 +
                       (C436 * C101 + C19656 * C442) * C19588) *
                          C19577 * C3098 +
                      (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
                         C2069 -
                     ((C5678 + C5679) * C19577 * C3100 +
                      (C5680 + C5681) * C19577 * C3099 +
                      ((C436 * C1078 + C19656 * C1381) * C19588 +
                       (C436 * C1072 + C19656 * C1375) * C625) *
                          C19577 * C3098) *
                         C2070) *
                        C1525 +
                    (((C5681 + C5680) * C19577 * C3098 +
                      (C5679 + C5678) * C19577 * C3099 +
                      ((C436 * C5315 + C19656 * C5663) * C625 +
                       (C436 * C5317 + C19656 * C5664) * C19588) *
                          C19577 * C3100) *
                         C2070 -
                     ((C3776 + C3777) * C19577 * C3100 +
                      (C3775 + C3774) * C19577 * C3099 +
                      (C3773 + C3772) * C19577 * C3098) *
                         C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C436 * C93 + C19656 * C437) * C625 +
                       (C436 * C101 + C19656 * C442) * C19588) *
                          C77 +
                      (C460 * C625 + C461 * C19588) * C78 +
                      (C462 * C625 + C463 * C19588) * C79) *
                         C19645 * C2069 -
                     ((C2435 * C19588 + C2434 * C625) * C79 +
                      (C2433 * C19588 + C2432 * C625) * C78 +
                      ((C436 * C1078 + C19656 * C1381) * C19588 +
                       (C436 * C1072 + C19656 * C1375) * C625) *
                          C77) *
                         C19645 * C2070) *
                        C1525 +
                    ((((C436 * C2611 + C19656 * C2947) * C625 +
                       (C436 * C2617 + C19656 * C2950) * C19588) *
                          C77 +
                      ((C436 * C2612 + C19656 * C2948) * C625 +
                       (C436 * C2618 + C19656 * C2951) * C19588) *
                          C78 +
                      ((C436 * C2613 + C19656 * C2949) * C625 +
                       (C436 * C2619 + C19656 * C2952) * C19588) *
                          C79) *
                         C19645 * C2070 -
                     ((C1893 * C19588 + C1892 * C625) * C79 +
                      (C1891 * C19588 + C1890 * C625) * C78 +
                      ((C436 * C634 + C19656 * C937) * C19588 +
                       (C436 * C628 + C19656 * C931) * C625) *
                          C77) *
                         C19645 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C6072 * C93 + C5841 * C437 + C6073 * C1072 +
                       C5842 * C1375 + C6074 * C1073 + C5843 * C1376) *
                          C625 +
                      (C6072 * C101 + C5841 * C442 + C6073 * C1078 +
                       C5842 * C1381 + C6074 * C1085 + C5843 * C1382) *
                          C19588) *
                         C19577 * C19645 * C2069 -
                     ((C6074 * C6533 + C5843 * C6887 + C6073 * C1085 +
                       C5842 * C1382 + C6072 * C1078 + C5841 * C1381) *
                          C19588 +
                      (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 +
                       C5842 * C1376 + C6072 * C1072 + C5841 * C1375) *
                          C625) *
                         C19577 * C19645 * C2070) *
                        C1525 +
                    (((C6072 * C2611 + C5841 * C2947 + C6073 * C3924 +
                       C5842 * C4188 + C6074 * C8009 + C5843 * C8379) *
                          C625 +
                      (C6072 * C2617 + C5841 * C2950 + C6073 * C3929 +
                       C5842 * C4191 + C6074 * C8011 + C5843 * C8380) *
                          C19588) *
                         C19577 * C19645 * C2070 -
                     ((C6074 * C3929 + C5843 * C4191 + C6073 * C2617 +
                       C5842 * C2950 + C6072 * C634 + C5841 * C937) *
                          C19588 +
                      (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 +
                       C5842 * C2947 + C6072 * C628 + C5841 * C931) *
                          C625) *
                         C19577 * C19645 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
            C3826 * C1526) *
               C19577 * C3098 +
           (C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
               C19577 * C3099 +
           (C3768 * C1583 + C3827 * C1525 - C3771 * C1584 - C3828 * C1526) *
               C19577 * C3100) *
              C19588 * C2069 +
          ((C5677 * C1584 -
            ((C436 * C1134 + C19656 * C1425) * C1525 +
             (C436 * C1072 + C19656 * C1375) * C1583) +
            C5737 * C1526) *
               C19577 * C3098 +
           (C5675 * C1584 - (C5737 * C1525 + C5677 * C1583) + C5738 * C1526) *
               C19577 * C3099 +
           ((C436 * C5315 + C19656 * C5663) * C1584 -
            (C5738 * C1525 + C5675 * C1583) +
            (C436 * C5385 + C19656 * C5731) * C1526) *
               C19577 * C3100) *
              C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 -
            (C436 * C628 + C19656 * C931) * C1584 -
            (C436 * C693 + C19656 * C979) * C1526) *
               C77 +
           (C1945 + C1946 - C1947 - C1957) * C78 +
           (C1950 + C1951 - C1952 - C1958) * C79) *
              C19645 * C19588 * C2069 +
          (((C436 * C2611 + C19656 * C2947) * C1584 -
            ((C436 * C1134 + C19656 * C1425) * C1525 +
             (C436 * C1072 + C19656 * C1375) * C1583) +
            (C436 * C2673 + C19656 * C3003) * C1526) *
               C77 +
           ((C436 * C2612 + C19656 * C2948) * C1584 -
            (C2493 * C1525 + C2432 * C1583) +
            (C436 * C2674 + C19656 * C3004) * C1526) *
               C78 +
           ((C436 * C2613 + C19656 * C2949) * C1584 -
            (C2494 * C1525 + C2434 * C1583) +
            (C436 * C2675 + C19656 * C3005) * C1526) *
               C79) *
              C19645 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C1583 +
           (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
            C6074 * C1135 + C5843 * C1426) *
               C1525 -
           (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
            C6072 * C628 + C5841 * C931) *
               C1584 -
           (C6074 * C3974 + C5843 * C4232 + C6073 * C2673 + C5842 * C3003 +
            C6072 * C693 + C5841 * C979) *
               C1526) *
              C19577 * C19645 * C19588 * C2069 +
          ((C6072 * C2611 + C5841 * C2947 + C6073 * C3924 + C5842 * C4188 +
            C6074 * C8009 + C5843 * C8379) *
               C1584 -
           ((C6074 * C6603 + C5843 * C6927 + C6073 * C1135 + C5842 * C1426 +
             C6072 * C1134 + C5841 * C1425) *
                C1525 +
            (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
             C6072 * C1072 + C5841 * C1375) *
                C1583) +
           (C6072 * C2673 + C5841 * C3003 + C6073 * C3974 + C5842 * C4232 +
            C6074 * C8071 + C5843 * C8431) *
               C1526) *
              C19577 * C19645 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q));
    d2eezz[11] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C19577 * C3098 +
                     (C5790 + C5791 - C5792 - C5802) * C19577 * C3099 +
                     (C5795 + C5796 - C5797 - C5803) * C19577 * C3100) *
                        C1525 +
                    ((C5792 - (C5791 + C5790) + C5802) * C19577 * C3098 +
                     (C5797 - (C5796 + C5795) + C5803) * C19577 * C3099 +
                     ((C436 * C5315 + C19656 * C5663) * C2178 -
                      (C3880 * C2069 + C3771 * C2177) +
                      (C436 * C5443 + C19656 * C5788) * C2070) *
                         C19577 * C3100) *
                        C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C77 +
                     (C2548 + C2549 - C2550 - C2560) * C78 +
                     (C2553 + C2554 - C2555 - C2561) * C79) *
                        C19645 * C1525 +
                    (((C436 * C2611 + C19656 * C2947) * C2178 -
                      ((C436 * C743 + C19656 * C1025) * C2069 +
                       (C436 * C628 + C19656 * C931) * C2177) +
                      (C436 * C2729 + C19656 * C3056) * C2070) *
                         C77 +
                     ((C436 * C2612 + C19656 * C2948) * C2178 -
                      (C2017 * C2069 + C1890 * C2177) +
                      (C436 * C2730 + C19656 * C3057) * C2070) *
                         C78 +
                     ((C436 * C2613 + C19656 * C2949) * C2178 -
                      (C2016 * C2069 + C1892 * C2177) +
                      (C436 * C2731 + C19656 * C3058) * C2070) *
                         C79) *
                        C19645 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6072 * C93 + C5841 * C437 + C6073 * C1072 +
                      C5842 * C1375 + C6074 * C1073 + C5843 * C1376) *
                         C2177 +
                     (C6072 * C201 + C5841 * C562 + C6073 * C1187 +
                      C5842 * C1467 + C6074 * C1188 + C5843 * C1468) *
                         C2069 -
                     (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 +
                      C5842 * C1376 + C6072 * C1072 + C5841 * C1375) *
                         C2178 -
                     (C6074 * C6662 + C5843 * C6967 + C6073 * C1188 +
                      C5842 * C1468 + C6072 * C1187 + C5841 * C1467) *
                         C2070) *
                        C19577 * C19645 * C1525 +
                    ((C6072 * C2611 + C5841 * C2947 + C6073 * C3924 +
                      C5842 * C4188 + C6074 * C8009 + C5843 * C8379) *
                         C2178 -
                     ((C6074 * C4017 + C5843 * C4272 + C6073 * C2729 +
                       C5842 * C3056 + C6072 * C743 + C5841 * C1025) *
                          C2069 +
                      (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 +
                       C5842 * C2947 + C6072 * C628 + C5841 * C931) *
                          C2177) +
                     (C6072 * C2729 + C5841 * C3056 + C6073 * C4017 +
                      C5842 * C4272 + C6074 * C8134 + C5843 * C8482) *
                         C2070) *
                        C19577 * C19645 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eexx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
               C79 * C100) *
                  C90 +
              (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 + C89 * C103 +
               C79 * C110) *
                  C80 -
              (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
               C77 * C99) *
                  C91 -
              (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 + C87 * C102 +
               C77 * C109) *
                  C81 +
              (C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 + C89 * C97 +
               C79 * C106) *
                  C92 +
              (C87 * C103 + C77 * C110 + C88 * C105 + C78 * C111 + C89 * C107 +
               C79 * C112) *
                  C82) *
             C19645 * C19656 * C19620 * C19609 +
         0.5 * std::pow(Pi, 2.5) *
             (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                C79 * C100) *
                   C625 +
               (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 + C89 * C103 +
                C79 * C110) *
                   C19588) *
                  C19645 * C19656 * C19620 * C622 -
              ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 + C87 * C634 +
                C77 * C646) *
                   C19588 +
               (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
                C77 * C637) *
                   C625) *
                  C19645 * C19656 * C19620 * C623 +
              ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 + C89 * C631 +
                C79 * C640) *
                   C625 +
               (C87 * C641 + C77 * C647 + C88 * C642 + C78 * C648 + C89 * C643 +
                C79 * C649) *
                   C19588) *
                  C19645 * C19656 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C625 +
           (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 + C89 * C103 +
            C79 * C110) *
               C19588) *
              C19645 * C19656 * C1067 -
          ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
            C87 * C1078 + C77 * C1090) *
               C19588 +
           (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
            C87 * C1072 + C77 * C1081) *
               C625) *
              C19645 * C19656 * C1068 +
          ((C87 * C1073 + C77 * C1082 + C88 * C1074 + C78 * C1083 +
            C89 * C1075 + C79 * C1084) *
               C625 +
           (C87 * C1085 + C77 * C1091 + C88 * C1086 + C78 * C1092 +
            C89 * C1087 + C79 * C1093) *
               C19588) *
              C19645 * C19656 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C90 +
           (C3101 * C101 + C19577 * C108) * C80 -
           (C3101 * C94 + C19577 * C99) * C91 -
           (C3101 * C102 + C19577 * C109) * C81 +
           (C3101 * C95 + C19577 * C100) * C92 +
           (C3101 * C103 + C19577 * C110) * C82) *
              C3098 +
          ((C3101 * C628 + C19577 * C637) * C90 +
           (C3101 * C634 + C19577 * C646) * C80 -
           (C3101 * C627 + C19577 * C636) * C91 -
           (C3101 * C633 + C19577 * C645) * C81 +
           (C3101 * C626 + C19577 * C635) * C92 +
           (C3101 * C632 + C19577 * C644) * C82) *
              C3099 +
          ((C3101 * C629 + C19577 * C638) * C90 +
           (C3101 * C641 + C19577 * C647) * C80 -
           (C3101 * C630 + C19577 * C639) * C91 -
           (C3101 * C642 + C19577 * C648) * C81 +
           (C3101 * C631 + C19577 * C640) * C92 +
           (C3101 * C643 + C19577 * C649) * C82) *
              C3100) *
         C19656 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C625 +
            (C3101 * C101 + C19577 * C108) * C19588) *
               C3098 +
           (C3474 + C3475) * C3099 + C3480 * C3100) *
              C19656 * C19620 * C622 -
          ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
           (C3475 + C3474) * C3098) *
              C19656 * C19620 * C623 +
          (C3480 * C3098 + (C3479 + C3478) * C3099 +
           ((C3101 * C3448 + C19577 * C3451) * C625 +
            (C3101 * C3452 + C19577 * C3454) * C19588) *
               C3100) *
              C19656 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C625 +
            (C3101 * C101 + C19577 * C108) * C19588) *
               C3098 +
           (C3474 + C3475) * C3099 + C3480 * C3100) *
              C19656 * C1067 -
          (((C3101 * C3926 + C19577 * C3932) * C19588 +
            (C3101 * C3923 + C19577 * C3927) * C625) *
               C3100 +
           ((C3101 * C2617 + C19577 * C2620) * C19588 +
            (C3101 * C2611 + C19577 * C2614) * C625) *
               C3099 +
           ((C3101 * C1078 + C19577 * C1090) * C19588 +
            (C3101 * C1072 + C19577 * C1081) * C625) *
               C3098) *
              C19656 * C1068 +
          (((C3101 * C1073 + C19577 * C1082) * C625 +
            (C3101 * C1085 + C19577 * C1091) * C19588) *
               C3098 +
           ((C3101 * C3924 + C19577 * C3928) * C625 +
            (C3101 * C3929 + C19577 * C3933) * C19588) *
               C3099 +
           ((C3101 * C3925 + C19577 * C3930) * C625 +
            (C3101 * C3931 + C19577 * C3934) * C19588) *
               C3100) *
              C19656 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C90 +
           (C3101 * C101 + C19577 * C108) * C80 -
           (C3101 * C94 + C19577 * C99) * C91 -
           (C3101 * C102 + C19577 * C109) * C81 +
           (C3101 * C95 + C19577 * C100) * C92 +
           (C3101 * C103 + C19577 * C110) * C82) *
              C19645 * C5841 +
          ((C3101 * C1072 + C19577 * C1081) * C90 +
           (C3101 * C1078 + C19577 * C1090) * C80 -
           (C3101 * C1071 + C19577 * C1080) * C91 -
           (C3101 * C1077 + C19577 * C1089) * C81 +
           (C3101 * C1070 + C19577 * C1079) * C92 +
           (C3101 * C1076 + C19577 * C1088) * C82) *
              C19645 * C5842 +
          ((C3101 * C1073 + C19577 * C1082) * C90 +
           (C3101 * C1085 + C19577 * C1091) * C80 -
           (C3101 * C1074 + C19577 * C1083) * C91 -
           (C3101 * C1086 + C19577 * C1092) * C81 +
           (C3101 * C1075 + C19577 * C1084) * C92 +
           (C3101 * C1087 + C19577 * C1093) * C82) *
              C19645 * C5843) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C625 +
            (C3101 * C101 + C19577 * C108) * C19588) *
               C19645 * C5841 +
           ((C3101 * C1072 + C19577 * C1081) * C625 +
            (C3101 * C1078 + C19577 * C1090) * C19588) *
               C19645 * C5842 +
           ((C3101 * C1073 + C19577 * C1082) * C625 +
            (C3101 * C1085 + C19577 * C1091) * C19588) *
               C19645 * C5843) *
              C19620 * C622 -
          (((C3101 * C3929 + C19577 * C3933) * C19588 +
            (C3101 * C3924 + C19577 * C3928) * C625) *
               C19645 * C5843 +
           (C5334 + C5335) * C19645 * C5842 +
           (C3475 + C3474) * C19645 * C5841) *
              C19620 * C623 +
          (C3480 * C19645 * C5841 + (C5333 + C5332) * C19645 * C5842 +
           ((C3101 * C3925 + C19577 * C3930) * C625 +
            (C3101 * C3931 + C19577 * C3934) * C19588) *
               C19645 * C5843) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C625 +
            (C3101 * C101 + C19577 * C108) * C19588) *
               C19645 * C5841 +
           (C6558 + C6559) * C19645 * C5842 + C6565 * C5843) *
              C1067 -
          ((C6562 + C6563) * C19645 * C5843 + (C6561 + C6560) * C19645 * C5842 +
           (C6559 + C6558) * C19645 * C5841) *
              C1068 +
          (C6565 * C5841 + (C6563 + C6562) * C19645 * C5842 +
           ((C3101 * C6532 + C19577 * C6535) * C625 +
            (C3101 * C6536 + C19577 * C6538) * C19588) *
               C19645 * C5843) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                C79 * C100) *
                   C151 +
               (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
                C79 * C159) *
                   C19609) *
                  C19645 * C19656 * C80 -
              ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 + C87 * C153 +
                C77 * C158) *
                   C19609 +
               (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
                C77 * C99) *
                   C151) *
                  C19645 * C19656 * C81 +
              ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 + C89 * C97 +
                C79 * C106) *
                   C151 +
               (C87 * C154 + C77 * C159 + C88 * C155 + C78 * C160 + C89 * C156 +
                C79 * C161) *
                   C19609) *
                  C19645 * C19656 * C82) *
             C19620 +
         0.5 * std::pow(Pi, 2.5) *
             ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
               C79 * C100) *
                  C688 +
              (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
               C79 * C159) *
                  C622 -
              (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
               C77 * C637) *
                  C689 -
              (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 + C87 * C693 +
               C77 * C699) *
                  C623 +
              (C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 + C89 * C631 +
               C79 * C640) *
                  C690 +
              (C87 * C694 + C77 * C700 + C88 * C695 + C78 * C701 + C89 * C696 +
               C79 * C702) *
                  C624) *
             C19645 * C19656 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                                C89 * C95 + C79 * C100) *
                                   C151 +
                               (C87 * C152 + C77 * C157 + C88 * C153 +
                                C78 * C158 + C89 * C154 + C79 * C159) *
                                   C19609) *
                                  C19645 * C19656 * C19588 * C1067 -
                              ((C89 * C1132 + C79 * C1138 + C88 * C1133 +
                                C78 * C1139 + C87 * C1134 + C77 * C1140) *
                                   C19609 +
                               (C89 * C1070 + C79 * C1079 + C88 * C1071 +
                                C78 * C1080 + C87 * C1072 + C77 * C1081) *
                                   C151) *
                                  C19645 * C19656 * C19588 * C1068 +
                              ((C87 * C1073 + C77 * C1082 + C88 * C1074 +
                                C78 * C1083 + C89 * C1075 + C79 * C1084) *
                                   C151 +
                               (C87 * C1135 + C77 * C1141 + C88 * C1136 +
                                C78 * C1142 + C89 * C1137 + C79 * C1143) *
                                   C19609) *
                                  C19645 * C19656 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C151 +
            (C3101 * C152 + C19577 * C157) * C19609) *
               C3098 +
           ((C3101 * C628 + C19577 * C637) * C151 +
            (C3101 * C693 + C19577 * C699) * C19609) *
               C3099 +
           ((C3101 * C629 + C19577 * C638) * C151 +
            (C3101 * C694 + C19577 * C700) * C19609) *
               C3100) *
              C19656 * C80 -
          (((C3101 * C695 + C19577 * C701) * C19609 +
            (C3101 * C630 + C19577 * C639) * C151) *
               C3100 +
           ((C3101 * C692 + C19577 * C698) * C19609 +
            (C3101 * C627 + C19577 * C636) * C151) *
               C3099 +
           ((C3101 * C153 + C19577 * C158) * C19609 +
            (C3101 * C94 + C19577 * C99) * C151) *
               C3098) *
              C19656 * C81 +
          (((C3101 * C95 + C19577 * C100) * C151 +
            (C3101 * C154 + C19577 * C159) * C19609) *
               C3098 +
           ((C3101 * C626 + C19577 * C635) * C151 +
            (C3101 * C691 + C19577 * C697) * C19609) *
               C3099 +
           ((C3101 * C631 + C19577 * C640) * C151 +
            (C3101 * C696 + C19577 * C702) * C19609) *
               C3100) *
              C19656 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C688 +
           (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 - C3529 * C623 +
           C3470 * C690 + C3530 * C624) *
              C3098 +
          (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
           C3473 * C690 + C3531 * C624) *
              C3099 +
          (C3470 * C688 + C3530 * C622 - C3473 * C689 - C3531 * C623 +
           (C3101 * C3448 + C19577 * C3451) * C690 +
           (C3101 * C3519 + C19577 * C3521) * C624) *
              C3100) *
         C19656 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C3101 * C93 + C19577 * C98) * C151 +
                                (C3101 * C152 + C19577 * C157) * C19609) *
                                   C3098 +
                               (C3468 * C151 + C3529 * C19609) * C3099 +
                               (C3470 * C151 + C3530 * C19609) * C3100) *
                                  C19656 * C19588 * C1067 -
                              (((C3101 * C3973 + C19577 * C3976) * C19609 +
                                (C3101 * C3923 + C19577 * C3927) * C151) *
                                   C3100 +
                               ((C3101 * C2673 + C19577 * C2676) * C19609 +
                                (C3101 * C2611 + C19577 * C2614) * C151) *
                                   C3099 +
                               ((C3101 * C1134 + C19577 * C1140) * C19609 +
                                (C3101 * C1072 + C19577 * C1081) * C151) *
                                   C3098) *
                                  C19656 * C19588 * C1068 +
                              (((C3101 * C1073 + C19577 * C1082) * C151 +
                                (C3101 * C1135 + C19577 * C1141) * C19609) *
                                   C3098 +
                               ((C3101 * C3924 + C19577 * C3928) * C151 +
                                (C3101 * C3974 + C19577 * C3977) * C19609) *
                                   C3099 +
                               ((C3101 * C3925 + C19577 * C3930) * C151 +
                                (C3101 * C3975 + C19577 * C3978) * C19609) *
                                   C3100) *
                                  C19656 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C151 +
            (C3101 * C152 + C19577 * C157) * C19609) *
               C19645 * C5841 +
           ((C3101 * C1072 + C19577 * C1081) * C151 +
            (C3101 * C1134 + C19577 * C1140) * C19609) *
               C19645 * C5842 +
           ((C3101 * C1073 + C19577 * C1082) * C151 +
            (C3101 * C1135 + C19577 * C1141) * C19609) *
               C19645 * C5843) *
              C80 -
          (((C3101 * C1136 + C19577 * C1142) * C19609 +
            (C3101 * C1074 + C19577 * C1083) * C151) *
               C19645 * C5843 +
           ((C3101 * C1133 + C19577 * C1139) * C19609 +
            (C3101 * C1071 + C19577 * C1080) * C151) *
               C19645 * C5842 +
           ((C3101 * C153 + C19577 * C158) * C19609 +
            (C3101 * C94 + C19577 * C99) * C151) *
               C19645 * C5841) *
              C81 +
          (((C3101 * C95 + C19577 * C100) * C151 +
            (C3101 * C154 + C19577 * C159) * C19609) *
               C19645 * C5841 +
           ((C3101 * C1070 + C19577 * C1079) * C151 +
            (C3101 * C1132 + C19577 * C1138) * C19609) *
               C19645 * C5842 +
           ((C3101 * C1075 + C19577 * C1084) * C151 +
            (C3101 * C1137 + C19577 * C1143) * C19609) *
               C19645 * C5843) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C688 +
           (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 - C3529 * C623 +
           C3470 * C690 + C3530 * C624) *
              C19645 * C5841 +
          ((C3101 * C1072 + C19577 * C1081) * C688 +
           (C3101 * C1134 + C19577 * C1140) * C622 - C5331 * C689 -
           C5392 * C623 + C5329 * C690 + C5393 * C624) *
              C19645 * C5842 +
          ((C3101 * C1073 + C19577 * C1082) * C688 +
           (C3101 * C1135 + C19577 * C1141) * C622 -
           (C3101 * C3924 + C19577 * C3928) * C689 -
           (C3101 * C3974 + C19577 * C3977) * C623 +
           (C3101 * C3925 + C19577 * C3930) * C690 +
           (C3101 * C3975 + C19577 * C3978) * C624) *
              C19645 * C5843) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C151 +
            (C3101 * C152 + C19577 * C157) * C19609) *
               C19645 * C5841 +
           (C6608 + C6620) * C19645 * C5842 + C6624 * C5843) *
              C19588 * C1067 -
          ((C6622 + C6616) * C19645 * C5843 + (C6621 + C6611) * C19645 * C5842 +
           (C6620 + C6608) * C19645 * C5841) *
              C19588 * C1068 +
          (C6624 * C5841 + (C6616 + C6622) * C19645 * C5842 +
           ((C3101 * C6532 + C19577 * C6535) * C151 +
            (C3101 * C6604 + C19577 * C6606) * C19609) *
               C19645 * C5843) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                C79 * C100) *
                   C200 +
               (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 + C89 * C203 +
                C79 * C208) *
                   C19620) *
                  C19645 * C19656 * C19609 * C80 -
              ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 + C87 * C202 +
                C77 * C207) *
                   C19620 +
               (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
                C77 * C99) *
                   C200) *
                  C19645 * C19656 * C19609 * C81 +
              ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 + C89 * C97 +
                C79 * C106) *
                   C200 +
               (C87 * C203 + C77 * C208 + C88 * C204 + C78 * C209 + C89 * C205 +
                C79 * C210) *
                   C19620) *
                  C19645 * C19656 * C19609 * C82) +
         0.5 * std::pow(Pi, 2.5) *
             (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                C79 * C100) *
                   C200 +
               (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 + C89 * C203 +
                C79 * C208) *
                   C19620) *
                  C19645 * C19656 * C622 -
              ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 + C87 * C743 +
                C77 * C749) *
                   C19620 +
               (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
                C77 * C637) *
                   C200) *
                  C19645 * C19656 * C623 +
              ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 + C89 * C631 +
                C79 * C640) *
                   C200 +
               (C87 * C744 + C77 * C750 + C88 * C745 + C78 * C751 + C89 * C746 +
                C79 * C752) *
                   C19620) *
                  C19645 * C19656 * C624) *
             C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
           C79 * C100) *
              C1182 +
          (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 + C89 * C203 +
           C79 * C208) *
              C1067 -
          (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 + C87 * C1072 +
           C77 * C1081) *
              C1183 -
          (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 + C87 * C1187 +
           C77 * C1193) *
              C1068 +
          (C87 * C1073 + C77 * C1082 + C88 * C1074 + C78 * C1083 + C89 * C1075 +
           C79 * C1084) *
              C1184 +
          (C87 * C1188 + C77 * C1194 + C88 * C1189 + C78 * C1195 + C89 * C1190 +
           C79 * C1196) *
              C1069) *
         C19645 * C19656 * C19609 * C19588) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C200 +
            (C3101 * C201 + C19577 * C206) * C19620) *
               C3098 +
           ((C3101 * C628 + C19577 * C637) * C200 +
            (C3101 * C743 + C19577 * C749) * C19620) *
               C3099 +
           ((C3101 * C629 + C19577 * C638) * C200 +
            (C3101 * C744 + C19577 * C750) * C19620) *
               C3100) *
              C19656 * C19609 * C80 -
          (((C3101 * C745 + C19577 * C751) * C19620 +
            (C3101 * C630 + C19577 * C639) * C200) *
               C3100 +
           ((C3101 * C742 + C19577 * C748) * C19620 +
            (C3101 * C627 + C19577 * C636) * C200) *
               C3099 +
           ((C3101 * C202 + C19577 * C207) * C19620 +
            (C3101 * C94 + C19577 * C99) * C200) *
               C3098) *
              C19656 * C19609 * C81 +
          (((C3101 * C95 + C19577 * C100) * C200 +
            (C3101 * C203 + C19577 * C208) * C19620) *
               C3098 +
           ((C3101 * C626 + C19577 * C635) * C200 +
            (C3101 * C741 + C19577 * C747) * C19620) *
               C3099 +
           ((C3101 * C631 + C19577 * C640) * C200 +
            (C3101 * C746 + C19577 * C752) * C19620) *
               C3100) *
              C19656 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C200 +
            (C3101 * C201 + C19577 * C206) * C19620) *
               C3098 +
           (C3574 + C3586) * C3099 + C3589 * C3100) *
              C19656 * C622 -
          ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
           (C3586 + C3574) * C3098) *
              C19656 * C623 +
          (C3589 * C3098 + (C3582 + C3588) * C3099 +
           ((C3101 * C3448 + C19577 * C3451) * C200 +
            (C3101 * C3570 + C19577 * C3572) * C19620) *
               C3100) *
              C19656 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C1182 +
           (C3101 * C201 + C19577 * C206) * C1067 -
           (C3101 * C1072 + C19577 * C1081) * C1183 -
           (C3101 * C1187 + C19577 * C1193) * C1068 +
           (C3101 * C1073 + C19577 * C1082) * C1184 +
           (C3101 * C1188 + C19577 * C1194) * C1069) *
              C3098 +
          (C3468 * C1182 + C3583 * C1067 -
           (C3101 * C2611 + C19577 * C2614) * C1183 -
           (C3101 * C2729 + C19577 * C2732) * C1068 +
           (C3101 * C3924 + C19577 * C3928) * C1184 +
           (C3101 * C4017 + C19577 * C4020) * C1069) *
              C3099 +
          (C3470 * C1182 + C3584 * C1067 -
           (C3101 * C3923 + C19577 * C3927) * C1183 -
           (C3101 * C4018 + C19577 * C4021) * C1068 +
           (C3101 * C3925 + C19577 * C3930) * C1184 +
           (C3101 * C4019 + C19577 * C4022) * C1069) *
              C3100) *
         C19656 * C19609 * C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C3101 * C93 + C19577 * C98) * C200 +
                                (C3101 * C201 + C19577 * C206) * C19620) *
                                   C19645 * C5841 +
                               ((C3101 * C1072 + C19577 * C1081) * C200 +
                                (C3101 * C1187 + C19577 * C1193) * C19620) *
                                   C19645 * C5842 +
                               ((C3101 * C1073 + C19577 * C1082) * C200 +
                                (C3101 * C1188 + C19577 * C1194) * C19620) *
                                   C19645 * C5843) *
                                  C19609 * C80 -
                              (((C3101 * C1189 + C19577 * C1195) * C19620 +
                                (C3101 * C1074 + C19577 * C1083) * C200) *
                                   C19645 * C5843 +
                               ((C3101 * C1186 + C19577 * C1192) * C19620 +
                                (C3101 * C1071 + C19577 * C1080) * C200) *
                                   C19645 * C5842 +
                               ((C3101 * C202 + C19577 * C207) * C19620 +
                                (C3101 * C94 + C19577 * C99) * C200) *
                                   C19645 * C5841) *
                                  C19609 * C81 +
                              (((C3101 * C95 + C19577 * C100) * C200 +
                                (C3101 * C203 + C19577 * C208) * C19620) *
                                   C19645 * C5841 +
                               ((C3101 * C1070 + C19577 * C1079) * C200 +
                                (C3101 * C1185 + C19577 * C1191) * C19620) *
                                   C19645 * C5842 +
                               ((C3101 * C1075 + C19577 * C1084) * C200 +
                                (C3101 * C1190 + C19577 * C1196) * C19620) *
                                   C19645 * C5843) *
                                  C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C200 +
            (C3101 * C201 + C19577 * C206) * C19620) *
               C19645 * C5841 +
           ((C3101 * C1072 + C19577 * C1081) * C200 +
            (C3101 * C1187 + C19577 * C1193) * C19620) *
               C19645 * C5842 +
           ((C3101 * C1073 + C19577 * C1082) * C200 +
            (C3101 * C1188 + C19577 * C1194) * C19620) *
               C19645 * C5843) *
              C622 -
          (((C3101 * C4017 + C19577 * C4020) * C19620 +
            (C3101 * C3924 + C19577 * C3928) * C200) *
               C19645 * C5843 +
           (C5456 * C19620 + C5331 * C200) * C19645 * C5842 +
           (C3586 + C3574) * C19645 * C5841) *
              C623 +
          (C3589 * C19645 * C5841 +
           (C5329 * C200 + C5457 * C19620) * C19645 * C5842 +
           ((C3101 * C3925 + C19577 * C3930) * C200 +
            (C3101 * C4019 + C19577 * C4022) * C19620) *
               C19645 * C5843) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3101 * C93 + C19577 * C98) * C1182 +
           (C3101 * C201 + C19577 * C206) * C1067 - C6552 * C1183 -
           C6673 * C1068 + C6554 * C1184 + C6674 * C1069) *
              C19645 * C5841 +
          (C6552 * C1182 + C6673 * C1067 - C6554 * C1183 - C6674 * C1068 +
           C6557 * C1184 + C6675 * C1069) *
              C19645 * C5842 +
          (C6554 * C1182 + C6674 * C1067 - C6557 * C1183 - C6675 * C1068 +
           (C3101 * C6532 + C19577 * C6535) * C1184 +
           (C3101 * C6663 + C19577 * C6665) * C1069) *
              C19645 * C5843) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C249 * C93 + C19645 * C250) * C90 +
               (C249 * C101 + C19645 * C255) * C80 - C273 * C91 - C274 * C81 +
               C275 * C92 + C276 * C82) *
                  C19656 * C77 +
              (C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 + C277 * C92 +
               C278 * C82) *
                  C19656 * C78 +
              (C275 * C90 + C276 * C80 - C277 * C91 - C278 * C81 +
               (C249 * C97 + C19645 * C254) * C92 +
               (C249 * C107 + C19645 * C259) * C82) *
                  C19656 * C79) *
             C19620 * C19609 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C249 * C93 + C19645 * C250) * C625 +
                (C249 * C101 + C19645 * C255) * C19588) *
                   C19656 * C77 +
               (C273 * C625 + C274 * C19588) * C19656 * C78 +
               (C275 * C625 + C276 * C19588) * C19656 * C79) *
                  C19620 * C622 -
              (((C249 * C632 + C19645 * C797) * C19588 +
                (C249 * C626 + C19645 * C791) * C625) *
                   C19656 * C79 +
               ((C249 * C633 + C19645 * C798) * C19588 +
                (C249 * C627 + C19645 * C792) * C625) *
                   C19656 * C78 +
               ((C249 * C634 + C19645 * C799) * C19588 +
                (C249 * C628 + C19645 * C793) * C625) *
                   C19656 * C77) *
                  C19620 * C623 +
              (((C249 * C629 + C19645 * C794) * C625 +
                (C249 * C641 + C19645 * C800) * C19588) *
                   C19656 * C77 +
               ((C249 * C630 + C19645 * C795) * C625 +
                (C249 * C642 + C19645 * C801) * C19588) *
                   C19656 * C78 +
               ((C249 * C631 + C19645 * C796) * C625 +
                (C249 * C643 + C19645 * C802) * C19588) *
                   C19656 * C79) *
                  C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C625 +
            (C249 * C101 + C19645 * C255) * C19588) *
               C19656 * C77 +
           (C273 * C625 + C274 * C19588) * C19656 * C78 +
           (C275 * C625 + C276 * C19588) * C19656 * C79) *
              C1067 -
          (((C249 * C1076 + C19645 * C1241) * C19588 +
            (C249 * C1070 + C19645 * C1235) * C625) *
               C19656 * C79 +
           ((C249 * C1077 + C19645 * C1242) * C19588 +
            (C249 * C1071 + C19645 * C1236) * C625) *
               C19656 * C78 +
           ((C249 * C1078 + C19645 * C1243) * C19588 +
            (C249 * C1072 + C19645 * C1237) * C625) *
               C19656 * C77) *
              C1068 +
          (((C249 * C1073 + C19645 * C1238) * C625 +
            (C249 * C1085 + C19645 * C1244) * C19588) *
               C19656 * C77 +
           ((C249 * C1074 + C19645 * C1239) * C625 +
            (C249 * C1086 + C19645 * C1245) * C19588) *
               C19656 * C78 +
           ((C249 * C1075 + C19645 * C1240) * C625 +
            (C249 * C1087 + C19645 * C1246) * C19588) *
               C19656 * C79) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C90 +
          (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
           C3218 * C641 + C3100 * C800) *
              C80 -
          (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
           C3216 * C94 + C3098 * C251) *
              C91 -
          (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
           C3216 * C102 + C3098 * C256) *
              C81 +
          (C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
           C3218 * C631 + C3100 * C796) *
              C92 +
          (C3216 * C103 + C3098 * C257 + C3217 * C632 + C3099 * C797 +
           C3218 * C643 + C3100 * C802) *
              C82) *
         C19656 * C19577 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C625 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C19588) *
              C19656 * C19577 * C19620 * C622 -
          ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 + C3099 * C800 +
            C3216 * C634 + C3098 * C799) *
               C19588 +
           (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
            C3216 * C628 + C3098 * C793) *
               C625) *
              C19656 * C19577 * C19620 * C623 +
          ((C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
            C3218 * C3448 + C3100 * C3628) *
               C625 +
           (C3216 * C641 + C3098 * C800 + C3217 * C3449 + C3099 * C3629 +
            C3218 * C3452 + C3100 * C3630) *
               C19588) *
              C19656 * C19577 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C625 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C19588) *
              C19656 * C19577 * C1067 -
          ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 + C3099 * C2788 +
            C3216 * C1078 + C3098 * C1243) *
               C19588 +
           (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
            C3216 * C1072 + C3098 * C1237) *
               C625) *
              C19656 * C19577 * C1068 +
          ((C3216 * C1073 + C3098 * C1238 + C3217 * C3924 + C3099 * C4062 +
            C3218 * C3925 + C3100 * C4063) *
               C625 +
           (C3216 * C1085 + C3098 * C1244 + C3217 * C3929 + C3099 * C4065 +
            C3218 * C3931 + C3100 * C4066) *
               C19588) *
              C19656 * C19577 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C90 +
           (C249 * C101 + C19645 * C255) * C80 - C273 * C91 - C274 * C81 +
           C275 * C92 + C276 * C82) *
              C5841 +
          ((C249 * C1072 + C19645 * C1237) * C90 +
           (C249 * C1078 + C19645 * C1243) * C80 - C2242 * C91 - C2243 * C81 +
           C2244 * C92 + C2245 * C82) *
              C5842 +
          ((C249 * C1073 + C19645 * C1238) * C90 +
           (C249 * C1085 + C19645 * C1244) * C80 -
           (C249 * C1074 + C19645 * C1239) * C91 -
           (C249 * C1086 + C19645 * C1245) * C81 +
           (C249 * C1075 + C19645 * C1240) * C92 +
           (C249 * C1087 + C19645 * C1246) * C82) *
              C5843) *
         C19577 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C249 * C93 + C19645 * C250) * C625 +
                                (C249 * C101 + C19645 * C255) * C19588) *
                                   C5841 +
                               ((C249 * C1072 + C19645 * C1237) * C625 +
                                (C249 * C1078 + C19645 * C1243) * C19588) *
                                   C5842 +
                               ((C249 * C1073 + C19645 * C1238) * C625 +
                                (C249 * C1085 + C19645 * C1244) * C19588) *
                                   C5843) *
                                  C19577 * C19620 * C622 -
                              (((C249 * C3929 + C19645 * C4065) * C19588 +
                                (C249 * C3924 + C19645 * C4062) * C625) *
                                   C5843 +
                               ((C249 * C2617 + C19645 * C2788) * C19588 +
                                (C249 * C2611 + C19645 * C2785) * C625) *
                                   C5842 +
                               ((C249 * C634 + C19645 * C799) * C19588 +
                                (C249 * C628 + C19645 * C793) * C625) *
                                   C5841) *
                                  C19577 * C19620 * C623 +
                              (((C249 * C629 + C19645 * C794) * C625 +
                                (C249 * C641 + C19645 * C800) * C19588) *
                                   C5841 +
                               ((C249 * C3923 + C19645 * C4061) * C625 +
                                (C249 * C3926 + C19645 * C4064) * C19588) *
                                   C5842 +
                               ((C249 * C3925 + C19645 * C4063) * C625 +
                                (C249 * C3931 + C19645 * C4066) * C19588) *
                                   C5843) *
                                  C19577 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C625 +
            (C249 * C101 + C19645 * C255) * C19588) *
               C5841 +
           (C6736 + C6737) * C5842 + C6742 * C5843) *
              C19577 * C1067 -
          ((C6740 + C6741) * C5843 + (C6739 + C6738) * C5842 +
           (C6737 + C6736) * C5841) *
              C19577 * C1068 +
          (C6742 * C5841 + (C6741 + C6740) * C5842 +
           ((C249 * C6532 + C19645 * C6714) * C625 +
            (C249 * C6536 + C19645 * C6716) * C19588) *
               C5843) *
              C19577 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C249 * C93 + C19645 * C250) * C151 +
                (C249 * C152 + C19645 * C316) * C19609) *
                   C19656 * C77 +
               (C322 + C334) * C19656 * C78 + C338 * C79) *
                  C80 -
              ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
               (C334 + C322) * C19656 * C77) *
                  C81 +
              (C338 * C77 + (C330 + C336) * C19656 * C78 +
               ((C249 * C97 + C19645 * C254) * C151 +
                (C249 * C156 + C19645 * C320) * C19609) *
                   C19656 * C79) *
                  C82) *
             C19620 +
         0.5 * std::pow(Pi, 2.5) *
             (((C249 * C93 + C19645 * C250) * C688 +
               (C249 * C152 + C19645 * C316) * C622 -
               (C249 * C628 + C19645 * C793) * C689 -
               (C249 * C693 + C19645 * C841) * C623 +
               (C249 * C629 + C19645 * C794) * C690 +
               (C249 * C694 + C19645 * C842) * C624) *
                  C19656 * C77 +
              (C273 * C688 + C331 * C622 -
               (C249 * C627 + C19645 * C792) * C689 -
               (C249 * C692 + C19645 * C843) * C623 +
               (C249 * C630 + C19645 * C795) * C690 +
               (C249 * C695 + C19645 * C844) * C624) *
                  C19656 * C78 +
              (C275 * C688 + C332 * C622 -
               (C249 * C626 + C19645 * C791) * C689 -
               (C249 * C691 + C19645 * C845) * C623 +
               (C249 * C631 + C19645 * C796) * C690 +
               (C249 * C696 + C19645 * C846) * C624) *
                  C19656 * C79) *
             C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C249 * C93 + C19645 * C250) * C151 +
                                (C249 * C152 + C19645 * C316) * C19609) *
                                   C19656 * C77 +
                               (C322 + C334) * C19656 * C78 + C338 * C79) *
                                  C19588 * C1067 -
                              (((C249 * C1132 + C19645 * C1285) * C19609 +
                                (C249 * C1070 + C19645 * C1235) * C151) *
                                   C19656 * C79 +
                               ((C249 * C1133 + C19645 * C1286) * C19609 +
                                (C249 * C1071 + C19645 * C1236) * C151) *
                                   C19656 * C78 +
                               ((C249 * C1134 + C19645 * C1287) * C19609 +
                                (C249 * C1072 + C19645 * C1237) * C151) *
                                   C19656 * C77) *
                                  C19588 * C1068 +
                              (((C249 * C1073 + C19645 * C1238) * C151 +
                                (C249 * C1135 + C19645 * C1288) * C19609) *
                                   C19656 * C77 +
                               ((C249 * C1074 + C19645 * C1239) * C151 +
                                (C249 * C1136 + C19645 * C1289) * C19609) *
                                   C19656 * C78 +
                               ((C249 * C1075 + C19645 * C1240) * C151 +
                                (C249 * C1137 + C19645 * C1290) * C19609) *
                                   C19656 * C79) *
                                  C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C151 +
           (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
            C3218 * C694 + C3100 * C842) *
               C19609) *
              C19656 * C19577 * C80 -
          ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
            C3216 * C153 + C3098 * C317) *
               C19609 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C151) *
              C19656 * C19577 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C151 +
           (C3216 * C154 + C3098 * C318 + C3217 * C691 + C3099 * C845 +
            C3218 * C696 + C3100 * C846) *
               C19609) *
              C19656 * C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C688 +
          (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
           C3218 * C694 + C3100 * C842) *
              C622 -
          (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
           C3216 * C628 + C3098 * C793) *
              C689 -
          (C3218 * C3518 + C3100 * C3669 + C3217 * C694 + C3099 * C842 +
           C3216 * C693 + C3098 * C841) *
              C623 +
          (C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
           C3218 * C3448 + C3100 * C3628) *
              C690 +
          (C3216 * C694 + C3098 * C842 + C3217 * C3518 + C3099 * C3669 +
           C3218 * C3519 + C3100 * C3670) *
              C624) *
         C19656 * C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C3216 * C93 + C3098 * C250 + C3217 * C628 +
                                C3099 * C793 + C3218 * C629 + C3100 * C794) *
                                   C151 +
                               (C3216 * C152 + C3098 * C316 + C3217 * C693 +
                                C3099 * C841 + C3218 * C694 + C3100 * C842) *
                                   C19609) *
                                  C19656 * C19577 * C19588 * C1067 -
                              ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 +
                                C3099 * C2841 + C3216 * C1134 + C3098 * C1287) *
                                   C19609 +
                               (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                                C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                                   C151) *
                                  C19656 * C19577 * C19588 * C1068 +
                              ((C3216 * C1073 + C3098 * C1238 + C3217 * C3924 +
                                C3099 * C4062 + C3218 * C3925 + C3100 * C4063) *
                                   C151 +
                               (C3216 * C1135 + C3098 * C1288 + C3217 * C3974 +
                                C3099 * C4106 + C3218 * C3975 + C3100 * C4107) *
                                   C19609) *
                                  C19656 * C19577 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C151 +
            (C249 * C1134 + C19645 * C1287) * C19609) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C151 +
            (C249 * C1135 + C19645 * C1288) * C19609) *
               C5843) *
              C19577 * C80 -
          (((C249 * C1136 + C19645 * C1289) * C19609 +
            (C249 * C1074 + C19645 * C1239) * C151) *
               C5843 +
           (C2305 + C2297) * C5842 + (C334 + C322) * C5841) *
              C19577 * C81 +
          (C337 * C5841 + (C2300 + C2306) * C5842 +
           ((C249 * C1075 + C19645 * C1240) * C151 +
            (C249 * C1137 + C19645 * C1290) * C19609) *
               C5843) *
              C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C688 +
           (C249 * C152 + C19645 * C316) * C622 -
           (C249 * C628 + C19645 * C793) * C689 -
           (C249 * C693 + C19645 * C841) * C623 +
           (C249 * C629 + C19645 * C794) * C690 +
           (C249 * C694 + C19645 * C842) * C624) *
              C5841 +
          ((C249 * C1072 + C19645 * C1237) * C688 +
           (C249 * C1134 + C19645 * C1287) * C622 -
           (C249 * C2611 + C19645 * C2785) * C689 -
           (C249 * C2673 + C19645 * C2841) * C623 +
           (C249 * C3923 + C19645 * C4061) * C690 +
           (C249 * C3973 + C19645 * C4105) * C624) *
              C5842 +
          ((C249 * C1073 + C19645 * C1238) * C688 +
           (C249 * C1135 + C19645 * C1288) * C622 -
           (C249 * C3924 + C19645 * C4062) * C689 -
           (C249 * C3974 + C19645 * C4106) * C623 +
           (C249 * C3925 + C19645 * C4063) * C690 +
           (C249 * C3975 + C19645 * C4107) * C624) *
              C5843) *
         C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C5841 +
           (C6783 + C6795) * C5842 + C6798 * C5843) *
              C19577 * C19588 * C1067 -
          ((C6797 + C6791) * C5843 + (C6796 + C6786) * C5842 +
           (C6795 + C6783) * C5841) *
              C19577 * C19588 * C1068 +
          (C6798 * C5841 + (C6791 + C6797) * C5842 +
           ((C249 * C6532 + C19645 * C6714) * C151 +
            (C249 * C6604 + C19645 * C6781) * C19609) *
               C5843) *
              C19577 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C249 * C93 + C19645 * C250) * C200 +
                (C249 * C201 + C19645 * C376) * C19620) *
                   C19656 * C77 +
               (C382 + C394) * C19656 * C78 + C398 * C79) *
                  C19609 * C80 -
              ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
               (C394 + C382) * C19656 * C77) *
                  C19609 * C81 +
              (C398 * C77 + (C390 + C396) * C19656 * C78 +
               ((C249 * C97 + C19645 * C254) * C200 +
                (C249 * C205 + C19645 * C380) * C19620) *
                   C19656 * C79) *
                  C19609 * C82) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C249 * C93 + C19645 * C250) * C200 +
                (C249 * C201 + C19645 * C376) * C19620) *
                   C19656 * C77 +
               (C382 + C394) * C19656 * C78 + C398 * C79) *
                  C622 -
              (((C249 * C741 + C19645 * C885) * C19620 +
                (C249 * C626 + C19645 * C791) * C200) *
                   C19656 * C79 +
               ((C249 * C742 + C19645 * C886) * C19620 +
                (C249 * C627 + C19645 * C792) * C200) *
                   C19656 * C78 +
               ((C249 * C743 + C19645 * C887) * C19620 +
                (C249 * C628 + C19645 * C793) * C200) *
                   C19656 * C77) *
                  C623 +
              (((C249 * C629 + C19645 * C794) * C200 +
                (C249 * C744 + C19645 * C888) * C19620) *
                   C19656 * C77 +
               ((C249 * C630 + C19645 * C795) * C200 +
                (C249 * C745 + C19645 * C889) * C19620) *
                   C19656 * C78 +
               ((C249 * C631 + C19645 * C796) * C200 +
                (C249 * C746 + C19645 * C890) * C19620) *
                   C19656 * C79) *
                  C624) *
             C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C1182 +
           (C249 * C201 + C19645 * C376) * C1067 -
           (C249 * C1072 + C19645 * C1237) * C1183 -
           (C249 * C1187 + C19645 * C1329) * C1068 +
           (C249 * C1073 + C19645 * C1238) * C1184 +
           (C249 * C1188 + C19645 * C1330) * C1069) *
              C19656 * C77 +
          (C273 * C1182 + C391 * C1067 -
           (C249 * C1071 + C19645 * C1236) * C1183 -
           (C249 * C1186 + C19645 * C1331) * C1068 +
           (C249 * C1074 + C19645 * C1239) * C1184 +
           (C249 * C1189 + C19645 * C1332) * C1069) *
              C19656 * C78 +
          (C275 * C1182 + C392 * C1067 -
           (C249 * C1070 + C19645 * C1235) * C1183 -
           (C249 * C1185 + C19645 * C1333) * C1068 +
           (C249 * C1075 + C19645 * C1240) * C1184 +
           (C249 * C1190 + C19645 * C1334) * C1069) *
              C19656 * C79) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C19609 * C80 -
          ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
            C3216 * C202 + C3098 * C377) *
               C19620 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C200) *
              C19656 * C19577 * C19609 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C200 +
           (C3216 * C203 + C3098 * C378 + C3217 * C741 + C3099 * C885 +
            C3218 * C746 + C3100 * C890) *
               C19620) *
              C19656 * C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C622 -
          ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
            C3216 * C743 + C3098 * C887) *
               C19620 +
           (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
            C3216 * C628 + C3098 * C793) *
               C200) *
              C19656 * C19577 * C623 +
          ((C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
            C3218 * C3448 + C3100 * C3628) *
               C200 +
           (C3216 * C744 + C3098 * C888 + C3217 * C3569 + C3099 * C3709 +
            C3218 * C3570 + C3100 * C3710) *
               C19620) *
              C19656 * C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C1182 +
          (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
           C3218 * C744 + C3100 * C888) *
              C1067 -
          (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
           C3216 * C1072 + C3098 * C1237) *
              C1183 -
          (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 + C3099 * C2894 +
           C3216 * C1187 + C3098 * C1329) *
              C1068 +
          (C3216 * C1073 + C3098 * C1238 + C3217 * C3924 + C3099 * C4062 +
           C3218 * C3925 + C3100 * C4063) *
              C1184 +
          (C3216 * C1188 + C3098 * C1330 + C3217 * C4017 + C3099 * C4147 +
           C3218 * C4019 + C3100 * C4148) *
              C1069) *
         C19656 * C19577 * C19609 * C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C200 +
            (C249 * C1187 + C19645 * C1329) * C19620) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C200 +
            (C249 * C1188 + C19645 * C1330) * C19620) *
               C5843) *
              C19577 * C19609 * C80 -
          (((C249 * C1189 + C19645 * C1332) * C19620 +
            (C249 * C1074 + C19645 * C1239) * C200) *
               C5843 +
           (C2368 * C19620 + C2242 * C200) * C5842 + (C394 + C382) * C5841) *
              C19577 * C19609 * C81 +
          (C397 * C5841 + (C2244 * C200 + C2369 * C19620) * C5842 +
           ((C249 * C1075 + C19645 * C1240) * C200 +
            (C249 * C1190 + C19645 * C1334) * C19620) *
               C5843) *
              C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C200 +
            (C249 * C1187 + C19645 * C1329) * C19620) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C200 +
            (C249 * C1188 + C19645 * C1330) * C19620) *
               C5843) *
              C19577 * C622 -
          (((C249 * C4017 + C19645 * C4147) * C19620 +
            (C249 * C3924 + C19645 * C4062) * C200) *
               C5843 +
           ((C249 * C2729 + C19645 * C2894) * C19620 +
            (C249 * C2611 + C19645 * C2785) * C200) *
               C5842 +
           ((C249 * C743 + C19645 * C887) * C19620 +
            (C249 * C628 + C19645 * C793) * C200) *
               C5841) *
              C19577 * C623 +
          (((C249 * C629 + C19645 * C794) * C200 +
            (C249 * C744 + C19645 * C888) * C19620) *
               C5841 +
           ((C249 * C3923 + C19645 * C4061) * C200 +
            (C249 * C4018 + C19645 * C4146) * C19620) *
               C5842 +
           ((C249 * C3925 + C19645 * C4063) * C200 +
            (C249 * C4019 + C19645 * C4148) * C19620) *
               C5843) *
              C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C1182 +
           (C249 * C201 + C19645 * C376) * C1067 - C6730 * C1183 -
           C6845 * C1068 + C6732 * C1184 + C6846 * C1069) *
              C5841 +
          (C6730 * C1182 + C6845 * C1067 - C6732 * C1183 - C6846 * C1068 +
           C6735 * C1184 + C6847 * C1069) *
              C5842 +
          (C6732 * C1182 + C6846 * C1067 - C6735 * C1183 - C6847 * C1068 +
           (C249 * C6532 + C19645 * C6714) * C1184 +
           (C249 * C6663 + C19645 * C6837) * C1069) *
              C5843) *
         C19577 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             (((C436 * C93 + C19656 * C437) * C90 +
               (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
               C462 * C92 + C463 * C82) *
                  C77 +
              (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
               C465 * C82) *
                  C78 +
              (C462 * C90 + C463 * C80 - C464 * C91 - C465 * C81 +
               (C436 * C97 + C19656 * C441) * C92 +
               (C436 * C107 + C19656 * C446) * C82) *
                  C79) *
             C19645 * C19620 * C19609 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C436 * C93 + C19656 * C437) * C625 +
                (C436 * C101 + C19656 * C442) * C19588) *
                   C77 +
               (C460 * C625 + C461 * C19588) * C78 +
               (C462 * C625 + C463 * C19588) * C79) *
                  C19645 * C19620 * C622 -
              (((C436 * C632 + C19656 * C935) * C19588 +
                (C436 * C626 + C19656 * C929) * C625) *
                   C79 +
               ((C436 * C633 + C19656 * C936) * C19588 +
                (C436 * C627 + C19656 * C930) * C625) *
                   C78 +
               ((C436 * C634 + C19656 * C937) * C19588 +
                (C436 * C628 + C19656 * C931) * C625) *
                   C77) *
                  C19645 * C19620 * C623 +
              (((C436 * C629 + C19656 * C932) * C625 +
                (C436 * C641 + C19656 * C938) * C19588) *
                   C77 +
               ((C436 * C630 + C19656 * C933) * C625 +
                (C436 * C642 + C19656 * C939) * C19588) *
                   C78 +
               ((C436 * C631 + C19656 * C934) * C625 +
                (C436 * C643 + C19656 * C940) * C19588) *
                   C79) *
                  C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C77 +
           (C460 * C625 + C461 * C19588) * C78 +
           (C462 * C625 + C463 * C19588) * C79) *
              C19645 * C1067 -
          (((C436 * C1076 + C19656 * C1379) * C19588 +
            (C436 * C1070 + C19656 * C1373) * C625) *
               C79 +
           ((C436 * C1077 + C19656 * C1380) * C19588 +
            (C436 * C1071 + C19656 * C1374) * C625) *
               C78 +
           ((C436 * C1078 + C19656 * C1381) * C19588 +
            (C436 * C1072 + C19656 * C1375) * C625) *
               C77) *
              C19645 * C1068 +
          (((C436 * C1073 + C19656 * C1376) * C625 +
            (C436 * C1085 + C19656 * C1382) * C19588) *
               C77 +
           ((C436 * C1074 + C19656 * C1377) * C625 +
            (C436 * C1086 + C19656 * C1383) * C19588) *
               C78 +
           ((C436 * C1075 + C19656 * C1378) * C625 +
            (C436 * C1087 + C19656 * C1384) * C19588) *
               C79) *
              C19645 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C19577 * C3098 +
          ((C436 * C628 + C19656 * C931) * C90 +
           (C436 * C634 + C19656 * C937) * C80 - C1890 * C91 - C1891 * C81 +
           C1892 * C92 + C1893 * C82) *
              C19577 * C3099 +
          ((C436 * C629 + C19656 * C932) * C90 +
           (C436 * C641 + C19656 * C938) * C80 -
           (C436 * C630 + C19656 * C933) * C91 -
           (C436 * C642 + C19656 * C939) * C81 +
           (C436 * C631 + C19656 * C934) * C92 +
           (C436 * C643 + C19656 * C940) * C82) *
              C19577 * C3100) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C19620 * C622 -
          ((C3776 + C3777) * C19577 * C3100 + (C3775 + C3774) * C19577 * C3099 +
           (C3773 + C3772) * C19577 * C3098) *
              C19620 * C623 +
          (C3779 * C3098 + (C3777 + C3776) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C625 +
            (C436 * C3452 + C19656 * C3752) * C19588) *
               C19577 * C3100) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C1067 -
          (((C436 * C3926 + C19656 * C4190) * C19588 +
            (C436 * C3923 + C19656 * C4187) * C625) *
               C19577 * C3100 +
           ((C436 * C2617 + C19656 * C2950) * C19588 +
            (C436 * C2611 + C19656 * C2947) * C625) *
               C19577 * C3099 +
           ((C436 * C1078 + C19656 * C1381) * C19588 +
            (C436 * C1072 + C19656 * C1375) * C625) *
               C19577 * C3098) *
              C1068 +
          (((C436 * C1073 + C19656 * C1376) * C625 +
            (C436 * C1085 + C19656 * C1382) * C19588) *
               C19577 * C3098 +
           ((C436 * C3924 + C19656 * C4188) * C625 +
            (C436 * C3929 + C19656 * C4191) * C19588) *
               C19577 * C3099 +
           ((C436 * C3925 + C19656 * C4189) * C625 +
            (C436 * C3931 + C19656 * C4192) * C19588) *
               C19577 * C3100) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
           C6074 * C1073 + C5843 * C1376) *
              C90 +
          (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
           C6074 * C1085 + C5843 * C1382) *
              C80 -
          (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
           C6072 * C94 + C5841 * C438) *
              C91 -
          (C6074 * C1086 + C5843 * C1383 + C6073 * C1077 + C5842 * C1380 +
           C6072 * C102 + C5841 * C443) *
              C81 +
          (C6072 * C95 + C5841 * C439 + C6073 * C1070 + C5842 * C1373 +
           C6074 * C1075 + C5843 * C1378) *
              C92 +
          (C6072 * C103 + C5841 * C444 + C6073 * C1076 + C5842 * C1379 +
           C6074 * C1087 + C5843 * C1384) *
              C82) *
         C19577 * C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6072 * C93 + C5841 * C437 + C6073 * C1072 +
                                C5842 * C1375 + C6074 * C1073 + C5843 * C1376) *
                                   C625 +
                               (C6072 * C101 + C5841 * C442 + C6073 * C1078 +
                                C5842 * C1381 + C6074 * C1085 + C5843 * C1382) *
                                   C19588) *
                                  C19577 * C19645 * C19620 * C622 -
                              ((C6074 * C3929 + C5843 * C4191 + C6073 * C2617 +
                                C5842 * C2950 + C6072 * C634 + C5841 * C937) *
                                   C19588 +
                               (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 +
                                C5842 * C2947 + C6072 * C628 + C5841 * C931) *
                                   C625) *
                                  C19577 * C19645 * C19620 * C623 +
                              ((C6072 * C629 + C5841 * C932 + C6073 * C3923 +
                                C5842 * C4187 + C6074 * C3925 + C5843 * C4189) *
                                   C625 +
                               (C6072 * C641 + C5841 * C938 + C6073 * C3926 +
                                C5842 * C4190 + C6074 * C3931 + C5843 * C4192) *
                                   C19588) *
                                  C19577 * C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C625 +
           (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
            C6074 * C1085 + C5843 * C1382) *
               C19588) *
              C19577 * C19645 * C1067 -
          ((C6074 * C6533 + C5843 * C6887 + C6073 * C1085 + C5842 * C1382 +
            C6072 * C1078 + C5841 * C1381) *
               C19588 +
           (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
            C6072 * C1072 + C5841 * C1375) *
               C625) *
              C19577 * C19645 * C1068 +
          ((C6072 * C1073 + C5841 * C1376 + C6073 * C6531 + C5842 * C6885 +
            C6074 * C6532 + C5843 * C6886) *
               C625 +
           (C6072 * C1085 + C5841 * C1382 + C6073 * C6533 + C5842 * C6887 +
            C6074 * C6536 + C5843 * C6888) *
               C19588) *
              C19577 * C19645 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C436 * C93 + C19656 * C437) * C151 +
                (C436 * C152 + C19656 * C503) * C19609) *
                   C77 +
               (C509 + C521) * C78 + C524 * C79) *
                  C19645 * C80 -
              ((C523 + C517) * C79 + (C522 + C512) * C78 +
               (C521 + C509) * C77) *
                  C19645 * C81 +
              (C524 * C77 + (C517 + C523) * C78 +
               ((C436 * C97 + C19656 * C441) * C151 +
                (C436 * C156 + C19656 * C507) * C19609) *
                   C79) *
                  C19645 * C82) *
             C19620 +
         0.5 * std::pow(Pi, 2.5) *
             (((C436 * C93 + C19656 * C437) * C688 +
               (C436 * C152 + C19656 * C503) * C622 -
               (C436 * C628 + C19656 * C931) * C689 -
               (C436 * C693 + C19656 * C979) * C623 +
               (C436 * C629 + C19656 * C932) * C690 +
               (C436 * C694 + C19656 * C980) * C624) *
                  C77 +
              (C460 * C688 + C518 * C622 -
               (C436 * C627 + C19656 * C930) * C689 -
               (C436 * C692 + C19656 * C981) * C623 +
               (C436 * C630 + C19656 * C933) * C690 +
               (C436 * C695 + C19656 * C982) * C624) *
                  C78 +
              (C462 * C688 + C519 * C622 -
               (C436 * C626 + C19656 * C929) * C689 -
               (C436 * C691 + C19656 * C983) * C623 +
               (C436 * C631 + C19656 * C934) * C690 +
               (C436 * C696 + C19656 * C984) * C624) *
                  C79) *
             C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C436 * C93 + C19656 * C437) * C151 +
                                (C436 * C152 + C19656 * C503) * C19609) *
                                   C77 +
                               (C509 + C521) * C78 + C524 * C79) *
                                  C19645 * C19588 * C1067 -
                              (((C436 * C1132 + C19656 * C1423) * C19609 +
                                (C436 * C1070 + C19656 * C1373) * C151) *
                                   C79 +
                               ((C436 * C1133 + C19656 * C1424) * C19609 +
                                (C436 * C1071 + C19656 * C1374) * C151) *
                                   C78 +
                               ((C436 * C1134 + C19656 * C1425) * C19609 +
                                (C436 * C1072 + C19656 * C1375) * C151) *
                                   C77) *
                                  C19645 * C19588 * C1068 +
                              (((C436 * C1073 + C19656 * C1376) * C151 +
                                (C436 * C1135 + C19656 * C1426) * C19609) *
                                   C77 +
                               ((C436 * C1074 + C19656 * C1377) * C151 +
                                (C436 * C1136 + C19656 * C1427) * C19609) *
                                   C78 +
                               ((C436 * C1075 + C19656 * C1378) * C151 +
                                (C436 * C1137 + C19656 * C1428) * C19609) *
                                   C79) *
                                  C19645 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C151 +
            (C436 * C693 + C19656 * C979) * C19609) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C151 +
            (C436 * C694 + C19656 * C980) * C19609) *
               C19577 * C3100) *
              C80 -
          (((C436 * C695 + C19656 * C982) * C19609 +
            (C436 * C630 + C19656 * C933) * C151) *
               C19577 * C3100 +
           (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
           (C521 + C509) * C19577 * C3098) *
              C81 +
          (C524 * C19577 * C3098 +
           (C1892 * C151 + C1956 * C19609) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C151 +
            (C436 * C696 + C19656 * C984) * C19609) *
               C19577 * C3100) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
           C3768 * C690 + C3827 * C624) *
              C19577 * C3098 +
          (C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
           C3771 * C690 + C3828 * C624) *
              C19577 * C3099 +
          (C3768 * C688 + C3827 * C622 - C3771 * C689 - C3828 * C623 +
           (C436 * C3448 + C19656 * C3750) * C690 +
           (C436 * C3519 + C19656 * C3818) * C624) *
              C19577 * C3100) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           (C3766 * C151 + C3826 * C19609) * C19577 * C3099 +
           (C3768 * C151 + C3827 * C19609) * C19577 * C3100) *
              C19588 * C1067 -
          (((C436 * C3973 + C19656 * C4231) * C19609 +
            (C436 * C3923 + C19656 * C4187) * C151) *
               C19577 * C3100 +
           ((C436 * C2673 + C19656 * C3003) * C19609 +
            (C436 * C2611 + C19656 * C2947) * C151) *
               C19577 * C3099 +
           ((C436 * C1134 + C19656 * C1425) * C19609 +
            (C436 * C1072 + C19656 * C1375) * C151) *
               C19577 * C3098) *
              C19588 * C1068 +
          (((C436 * C1073 + C19656 * C1376) * C151 +
            (C436 * C1135 + C19656 * C1426) * C19609) *
               C19577 * C3098 +
           ((C436 * C3924 + C19656 * C4188) * C151 +
            (C436 * C3974 + C19656 * C4232) * C19609) *
               C19577 * C3099 +
           ((C436 * C3925 + C19656 * C4189) * C151 +
            (C436 * C3975 + C19656 * C4233) * C19609) *
               C19577 * C3100) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C151 +
           (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
            C6074 * C1135 + C5843 * C1426) *
               C19609) *
              C19577 * C19645 * C80 -
          ((C6074 * C1136 + C5843 * C1427 + C6073 * C1133 + C5842 * C1424 +
            C6072 * C153 + C5841 * C504) *
               C19609 +
           (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
            C6072 * C94 + C5841 * C438) *
               C151) *
              C19577 * C19645 * C81 +
          ((C6072 * C95 + C5841 * C439 + C6073 * C1070 + C5842 * C1373 +
            C6074 * C1075 + C5843 * C1378) *
               C151 +
           (C6072 * C154 + C5841 * C505 + C6073 * C1132 + C5842 * C1423 +
            C6074 * C1137 + C5843 * C1428) *
               C19609) *
              C19577 * C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
           C6074 * C1073 + C5843 * C1376) *
              C688 +
          (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
           C6074 * C1135 + C5843 * C1426) *
              C622 -
          (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
           C6072 * C628 + C5841 * C931) *
              C689 -
          (C6074 * C3974 + C5843 * C4232 + C6073 * C2673 + C5842 * C3003 +
           C6072 * C693 + C5841 * C979) *
              C623 +
          (C6072 * C629 + C5841 * C932 + C6073 * C3923 + C5842 * C4187 +
           C6074 * C3925 + C5843 * C4189) *
              C690 +
          (C6072 * C694 + C5841 * C980 + C6073 * C3973 + C5842 * C4231 +
           C6074 * C3975 + C5843 * C4233) *
              C624) *
         C19577 * C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C151 +
           (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
            C6074 * C1135 + C5843 * C1426) *
               C19609) *
              C19577 * C19645 * C19588 * C1067 -
          ((C6074 * C6603 + C5843 * C6927 + C6073 * C1135 + C5842 * C1426 +
            C6072 * C1134 + C5841 * C1425) *
               C19609 +
           (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
            C6072 * C1072 + C5841 * C1375) *
               C151) *
              C19577 * C19645 * C19588 * C1068 +
          ((C6072 * C1073 + C5841 * C1376 + C6073 * C6531 + C5842 * C6885 +
            C6074 * C6532 + C5843 * C6886) *
               C151 +
           (C6072 * C1135 + C5841 * C1426 + C6073 * C6603 + C5842 * C6927 +
            C6074 * C6604 + C5843 * C6928) *
               C19609) *
              C19577 * C19645 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] +=
        (0.5 * std::pow(Pi, 2.5) *
             ((((C436 * C93 + C19656 * C437) * C200 +
                (C436 * C201 + C19656 * C562) * C19620) *
                   C77 +
               (C568 + C580) * C78 + C583 * C79) *
                  C19645 * C19609 * C80 -
              ((C582 + C576) * C79 + (C581 + C571) * C78 +
               (C580 + C568) * C77) *
                  C19645 * C19609 * C81 +
              (C583 * C77 + (C576 + C582) * C78 +
               ((C436 * C97 + C19656 * C441) * C200 +
                (C436 * C205 + C19656 * C566) * C19620) *
                   C79) *
                  C19645 * C19609 * C82) +
         0.5 * std::pow(Pi, 2.5) *
             ((((C436 * C93 + C19656 * C437) * C200 +
                (C436 * C201 + C19656 * C562) * C19620) *
                   C77 +
               (C568 + C580) * C78 + C583 * C79) *
                  C19645 * C622 -
              (((C436 * C741 + C19656 * C1023) * C19620 +
                (C436 * C626 + C19656 * C929) * C200) *
                   C79 +
               ((C436 * C742 + C19656 * C1024) * C19620 +
                (C436 * C627 + C19656 * C930) * C200) *
                   C78 +
               ((C436 * C743 + C19656 * C1025) * C19620 +
                (C436 * C628 + C19656 * C931) * C200) *
                   C77) *
                  C19645 * C623 +
              (((C436 * C629 + C19656 * C932) * C200 +
                (C436 * C744 + C19656 * C1026) * C19620) *
                   C77 +
               ((C436 * C630 + C19656 * C933) * C200 +
                (C436 * C745 + C19656 * C1027) * C19620) *
                   C78 +
               ((C436 * C631 + C19656 * C934) * C200 +
                (C436 * C746 + C19656 * C1028) * C19620) *
                   C79) *
                  C19645 * C624) *
             C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C1182 +
           (C436 * C201 + C19656 * C562) * C1067 -
           (C436 * C1072 + C19656 * C1375) * C1183 -
           (C436 * C1187 + C19656 * C1467) * C1068 +
           (C436 * C1073 + C19656 * C1376) * C1184 +
           (C436 * C1188 + C19656 * C1468) * C1069) *
              C77 +
          (C460 * C1182 + C577 * C1067 -
           (C436 * C1071 + C19656 * C1374) * C1183 -
           (C436 * C1186 + C19656 * C1469) * C1068 +
           (C436 * C1074 + C19656 * C1377) * C1184 +
           (C436 * C1189 + C19656 * C1470) * C1069) *
              C78 +
          (C462 * C1182 + C578 * C1067 -
           (C436 * C1070 + C19656 * C1373) * C1183 -
           (C436 * C1185 + C19656 * C1471) * C1068 +
           (C436 * C1075 + C19656 * C1378) * C1184 +
           (C436 * C1190 + C19656 * C1472) * C1069) *
              C79) *
         C19645 * C19609 * C19588) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C200 +
            (C436 * C743 + C19656 * C1025) * C19620) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C19577 * C3100) *
              C19609 * C80 -
          (((C436 * C745 + C19656 * C1027) * C19620 +
            (C436 * C630 + C19656 * C933) * C200) *
               C19577 * C3100 +
           (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
              C19609 * C81 +
          (C583 * C19577 * C3098 + (C2012 + C2018) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C19577 * C3100) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
              C622 -
          ((C3883 + C3877) * C19577 * C3100 + (C3882 + C3872) * C19577 * C3099 +
           (C3881 + C3869) * C19577 * C3098) *
              C623 +
          (C3885 * C3098 + (C3877 + C3883) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C200 +
            (C436 * C3570 + C19656 * C3867) * C19620) *
               C19577 * C3100) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C1182 +
           (C436 * C201 + C19656 * C562) * C1067 -
           (C436 * C1072 + C19656 * C1375) * C1183 -
           (C436 * C1187 + C19656 * C1467) * C1068 +
           (C436 * C1073 + C19656 * C1376) * C1184 +
           (C436 * C1188 + C19656 * C1468) * C1069) *
              C19577 * C3098 +
          (C3766 * C1182 + C3878 * C1067 -
           (C436 * C2611 + C19656 * C2947) * C1183 -
           (C436 * C2729 + C19656 * C3056) * C1068 +
           (C436 * C3924 + C19656 * C4188) * C1184 +
           (C436 * C4017 + C19656 * C4272) * C1069) *
              C19577 * C3099 +
          (C3768 * C1182 + C3879 * C1067 -
           (C436 * C3923 + C19656 * C4187) * C1183 -
           (C436 * C4018 + C19656 * C4273) * C1068 +
           (C436 * C3925 + C19656 * C4189) * C1184 +
           (C436 * C4019 + C19656 * C4274) * C1069) *
              C19577 * C3100) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C6072 * C93 + C5841 * C437 + C6073 * C1072 +
                                C5842 * C1375 + C6074 * C1073 + C5843 * C1376) *
                                   C200 +
                               (C6072 * C201 + C5841 * C562 + C6073 * C1187 +
                                C5842 * C1467 + C6074 * C1188 + C5843 * C1468) *
                                   C19620) *
                                  C19577 * C19645 * C19609 * C80 -
                              ((C6074 * C1189 + C5843 * C1470 + C6073 * C1186 +
                                C5842 * C1469 + C6072 * C202 + C5841 * C563) *
                                   C19620 +
                               (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 +
                                C5842 * C1374 + C6072 * C94 + C5841 * C438) *
                                   C200) *
                                  C19577 * C19645 * C19609 * C81 +
                              ((C6072 * C95 + C5841 * C439 + C6073 * C1070 +
                                C5842 * C1373 + C6074 * C1075 + C5843 * C1378) *
                                   C200 +
                               (C6072 * C203 + C5841 * C564 + C6073 * C1185 +
                                C5842 * C1471 + C6074 * C1190 + C5843 * C1472) *
                                   C19620) *
                                  C19577 * C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C200 +
           (C6072 * C201 + C5841 * C562 + C6073 * C1187 + C5842 * C1467 +
            C6074 * C1188 + C5843 * C1468) *
               C19620) *
              C19577 * C19645 * C622 -
          ((C6074 * C4017 + C5843 * C4272 + C6073 * C2729 + C5842 * C3056 +
            C6072 * C743 + C5841 * C1025) *
               C19620 +
           (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
            C6072 * C628 + C5841 * C931) *
               C200) *
              C19577 * C19645 * C623 +
          ((C6072 * C629 + C5841 * C932 + C6073 * C3923 + C5842 * C4187 +
            C6074 * C3925 + C5843 * C4189) *
               C200 +
           (C6072 * C744 + C5841 * C1026 + C6073 * C4018 + C5842 * C4273 +
            C6074 * C4019 + C5843 * C4274) *
               C19620) *
              C19577 * C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
           C6074 * C1073 + C5843 * C1376) *
              C1182 +
          (C6072 * C201 + C5841 * C562 + C6073 * C1187 + C5842 * C1467 +
           C6074 * C1188 + C5843 * C1468) *
              C1067 -
          (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
           C6072 * C1072 + C5841 * C1375) *
              C1183 -
          (C6074 * C6662 + C5843 * C6967 + C6073 * C1188 + C5842 * C1468 +
           C6072 * C1187 + C5841 * C1467) *
              C1068 +
          (C6072 * C1073 + C5841 * C1376 + C6073 * C6531 + C5842 * C6885 +
           C6074 * C6532 + C5843 * C6886) *
              C1184 +
          (C6072 * C1188 + C5841 * C1468 + C6073 * C6662 + C5842 * C6967 +
           C6074 * C6663 + C5843 * C6968) *
              C1069) *
         C19577 * C19645 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C3098 +
                     (C4330 + C4331 - C4346 - C4347) * C3099 +
                     (C4336 + C4337 - C4348 - C4349) * C3100) *
                        C19656 * C2069 +
                    (((C3101 * C1071 + C19577 * C1080) * C1528 -
                      ((C3101 * C1078 + C19577 * C1090) * C1523 +
                       (C3101 * C1072 + C19577 * C1081) * C1527) +
                      (C3101 * C1077 + C19577 * C1089) * C1524) *
                         C3098 +
                     ((C3101 * C2612 + C19577 * C2615) * C1528 -
                      ((C3101 * C2617 + C19577 * C2620) * C1523 +
                       (C3101 * C2611 + C19577 * C2614) * C1527) +
                      (C3101 * C2618 + C19577 * C2621) * C1524) *
                         C3099 +
                     ((C3101 * C4849 + C19577 * C4850) * C1528 -
                      ((C3101 * C3926 + C19577 * C3932) * C1523 +
                       (C3101 * C3923 + C19577 * C3927) * C1527) +
                      (C3101 * C4851 + C19577 * C4852) * C1524) *
                         C3100) *
                        C19656 * C2070) *
                   C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C1527 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C1523 -
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C1528 -
                     (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                      C87 * C102 + C77 * C109) *
                         C1524) *
                        C19645 * C19656 * C2069 +
                    ((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
                      C89 * C2071 + C79 * C2072) *
                         C1528 -
                     ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
                       C87 * C1078 + C77 * C1090) *
                          C1523 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C1527) +
                     (C87 * C1077 + C77 * C1089 + C88 * C1076 + C78 * C1088 +
                      C89 * C2073 + C79 * C2074) *
                         C1524) *
                        C19645 * C19656 * C2070) *
                   C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C19645 * C5841 +
                     (C7490 + C7491 - C7506 - C7507) * C19645 * C5842 +
                     (C7496 + C7497 - C7508 - C7509) * C19645 * C5843) *
                        C2069 +
                    ((C7506 - (C7491 + C7490) + C7507) * C19645 * C5841 +
                     (C7508 - (C7497 + C7496) + C7509) * C19645 * C5842 +
                     ((C3101 * C7485 + C19577 * C7486) * C1528 -
                      (C6556 * C1523 + C6557 * C1527) +
                      (C3101 * C7487 + C19577 * C7488) * C1524) *
                         C19645 * C5843) *
                        C2070) *
                   C19609) /
                      (p * q * std::sqrt(p + q));
    d2eexy[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C151 +
                       (C3101 * C152 + C19577 * C157) * C19609) *
                          C3098 +
                      (C3468 * C151 + C3529 * C19609) * C3099 +
                      (C3470 * C151 + C3530 * C19609) * C3100) *
                         C19656 * C1523 -
                     ((C4407 * C19609 + C4344 * C151) * C3100 +
                      (C4406 * C19609 + C4342 * C151) * C3099 +
                      ((C3101 * C153 + C19577 * C158) * C19609 +
                       (C3101 * C94 + C19577 * C99) * C151) *
                          C3098) *
                         C19656 * C1524) *
                        C2069 +
                    ((((C3101 * C1071 + C19577 * C1080) * C151 +
                       (C3101 * C1133 + C19577 * C1139) * C19609) *
                          C3098 +
                      ((C3101 * C2612 + C19577 * C2615) * C151 +
                       (C3101 * C2674 + C19577 * C2677) * C19609) *
                          C3099 +
                      ((C3101 * C4849 + C19577 * C4850) * C151 +
                       (C3101 * C4903 + C19577 * C4904) * C19609) *
                          C3100) *
                         C19656 * C1524 -
                     (((C3101 * C3973 + C19577 * C3976) * C19609 +
                       (C3101 * C3923 + C19577 * C3927) * C151) *
                          C3100 +
                      ((C3101 * C2673 + C19577 * C2676) * C19609 +
                       (C3101 * C2611 + C19577 * C2614) * C151) *
                          C3099 +
                      ((C3101 * C1134 + C19577 * C1140) * C19609 +
                       (C3101 * C1072 + C19577 * C1081) * C151) *
                          C3098) *
                         C19656 * C1523) *
                        C2070)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C151 +
                      (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                       C89 * C154 + C79 * C159) *
                          C19609) *
                         C19645 * C19656 * C1523 -
                     ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 +
                       C87 * C153 + C77 * C158) *
                          C19609 +
                      (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                       C87 * C94 + C77 * C99) *
                          C151) *
                         C19645 * C19656 * C1524) *
                        C2069 +
                    (((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
                       C89 * C2071 + C79 * C2072) *
                          C151 +
                      (C87 * C1133 + C77 * C1139 + C88 * C1132 + C78 * C1138 +
                       C89 * C2125 + C79 * C2126) *
                          C19609) *
                         C19645 * C19656 * C1524 -
                     ((C89 * C1132 + C79 * C1138 + C88 * C1133 + C78 * C1139 +
                       C87 * C1134 + C77 * C1140) *
                          C19609 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C151) *
                         C19645 * C19656 * C1523) *
                        C2070)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C151 +
                       (C3101 * C152 + C19577 * C157) * C19609) *
                          C19645 * C5841 +
                      (C6608 + C6620) * C19645 * C5842 + C6624 * C5843) *
                         C1523 -
                     ((C7570 + C7564) * C19645 * C5843 +
                      (C7571 + C7567) * C19645 * C5842 +
                      ((C3101 * C153 + C19577 * C158) * C19609 +
                       (C3101 * C94 + C19577 * C99) * C151) *
                          C19645 * C5841) *
                         C1524) *
                        C2069 +
                    (((C7567 + C7571) * C19645 * C5841 +
                      (C7564 + C7570) * C19645 * C5842 +
                      ((C3101 * C7485 + C19577 * C7486) * C151 +
                       (C3101 * C7559 + C19577 * C7560) * C19609) *
                          C19645 * C5843) *
                         C1524 -
                     ((C6622 + C6616) * C19645 * C5843 +
                      (C6621 + C6611) * C19645 * C5842 +
                      (C6620 + C6608) * C19645 * C5841) *
                         C1523) *
                        C2070)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C2177 +
            (C3101 * C201 + C19577 * C206) * C2069 -
            (C3101 * C1072 + C19577 * C1081) * C2178 -
            (C3101 * C1187 + C19577 * C1193) * C2070) *
               C3098 +
           (C3468 * C2177 + C3583 * C2069 -
            (C3101 * C2611 + C19577 * C2614) * C2178 -
            (C3101 * C2729 + C19577 * C2732) * C2070) *
               C3099 +
           (C3470 * C2177 + C3584 * C2069 -
            (C3101 * C3923 + C19577 * C3927) * C2178 -
            (C3101 * C4018 + C19577 * C4021) * C2070) *
               C3100) *
              C19656 * C19609 * C1523 +
          (((C3101 * C1071 + C19577 * C1080) * C2178 -
            ((C3101 * C202 + C19577 * C207) * C2069 +
             (C3101 * C94 + C19577 * C99) * C2177) +
            (C3101 * C1186 + C19577 * C1192) * C2070) *
               C3098 +
           ((C3101 * C2612 + C19577 * C2615) * C2178 -
            (C4466 * C2069 + C4342 * C2177) +
            (C3101 * C2730 + C19577 * C2733) * C2070) *
               C3099 +
           ((C3101 * C4849 + C19577 * C4850) * C2178 -
            (C4467 * C2069 + C4344 * C2177) +
            (C3101 * C4955 + C19577 * C4956) * C2070) *
               C3100) *
              C19656 * C19609 * C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C2177 +
           (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 + C89 * C203 +
            C79 * C208) *
               C2069 -
           (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
            C87 * C1072 + C77 * C1081) *
               C2178 -
           (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 +
            C87 * C1187 + C77 * C1193) *
               C2070) *
              C19645 * C19656 * C19609 * C1523 +
          ((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
            C89 * C2071 + C79 * C2072) *
               C2178 -
           ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 + C87 * C202 +
             C77 * C207) *
                C2069 +
            (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
             C77 * C99) *
                C2177) +
           (C87 * C1186 + C77 * C1192 + C88 * C1185 + C78 * C1191 +
            C89 * C2179 + C79 * C2180) *
               C2070) *
              C19645 * C19656 * C19609 * C1524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C2177 +
            (C3101 * C201 + C19577 * C206) * C2069 - C6552 * C2178 -
            C6673 * C2070) *
               C19645 * C5841 +
           (C6552 * C2177 + C6673 * C2069 - C6554 * C2178 - C6674 * C2070) *
               C19645 * C5842 +
           (C6554 * C2177 + C6674 * C2069 - C6557 * C2178 - C6675 * C2070) *
               C19645 * C5843) *
              C19609 * C1523 +
          ((C7502 * C2178 -
            ((C3101 * C202 + C19577 * C207) * C2069 +
             (C3101 * C94 + C19577 * C99) * C2177) +
            C7628 * C2070) *
               C19645 * C5841 +
           (C7504 * C2178 - (C7628 * C2069 + C7502 * C2177) + C7629 * C2070) *
               C19645 * C5842 +
           ((C3101 * C7485 + C19577 * C7486) * C2178 -
            (C7629 * C2069 + C7504 * C2177) +
            (C3101 * C7621 + C19577 * C7622) * C2070) *
               C19645 * C5843) *
              C19609 * C1524)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C1527 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C1523 -
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C1528 -
           (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
            C3216 * C102 + C3098 * C256) *
               C1524) *
              C19656 * C19577 * C2069 +
          ((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 + C3099 * C2786 +
            C3218 * C4849 + C3100 * C5007) *
               C1528 -
           ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 + C3099 * C2788 +
             C3216 * C1078 + C3098 * C1243) *
                C1523 +
            (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
             C3216 * C1072 + C3098 * C1237) *
                C1527) +
           (C3216 * C1077 + C3098 * C1242 + C3217 * C2618 + C3099 * C2789 +
            C3218 * C4851 + C3100 * C5008) *
               C1524) *
              C19656 * C19577 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C19656 * C77 +
           (C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
               C19656 * C78 +
           (C275 * C1527 + C276 * C1523 - C277 * C1528 - C278 * C1524) *
               C19656 * C79) *
              C2069 +
          ((C2242 * C1528 -
            ((C249 * C1078 + C19645 * C1243) * C1523 +
             (C249 * C1072 + C19645 * C1237) * C1527) +
            C2243 * C1524) *
               C19656 * C77 +
           (C2244 * C1528 - (C2243 * C1523 + C2242 * C1527) + C2245 * C1524) *
               C19656 * C78 +
           ((C249 * C2071 + C19645 * C2231) * C1528 -
            (C2245 * C1523 + C2244 * C1527) +
            (C249 * C2073 + C19645 * C2232) * C1524) *
               C19656 * C79) *
              C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C5841 +
           (C7682 + C7683 - C7684 - C7685) * C5842 +
           (C7686 + C7687 - C7694 - C7695) * C5843) *
              C19577 * C2069 +
          ((C7684 - (C7683 + C7682) + C7685) * C5841 +
           (C7694 - (C7687 + C7686) + C7695) * C5842 +
           ((C249 * C7485 + C19645 * C7679) * C1528 -
            (C6734 * C1523 + C6735 * C1527) +
            (C249 * C7487 + C19645 * C7680) * C1524) *
               C5843) *
              C19577 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
             C3218 * C629 + C3100 * C794) *
                C151 +
            (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
             C3218 * C694 + C3100 * C842) *
                C19609) *
               C19656 * C19577 * C1523 -
           ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
             C3216 * C153 + C3098 * C317) *
                C19609 +
            (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
             C3216 * C94 + C3098 * C251) *
                C151) *
               C19656 * C19577 * C1524) *
              C2069 +
          (((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 + C3099 * C2786 +
             C3218 * C4849 + C3100 * C5007) *
                C151 +
            (C3216 * C1133 + C3098 * C1286 + C3217 * C2674 + C3099 * C2842 +
             C3218 * C4903 + C3100 * C5059) *
                C19609) *
               C19656 * C19577 * C1524 -
           ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 + C3099 * C2841 +
             C3216 * C1134 + C3098 * C1287) *
                C19609 +
            (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
             C3216 * C1072 + C3098 * C1237) *
                C151) *
               C19656 * C19577 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C19656 * C77 +
            (C322 + C334) * C19656 * C78 + C338 * C79) *
               C1523 -
           ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
            (C334 + C322) * C19656 * C77) *
               C1524) *
              C2069 +
          (((C2297 + C2305) * C19656 * C77 + (C2300 + C2306) * C19656 * C78 +
            ((C249 * C2071 + C19645 * C2231) * C151 +
             (C249 * C2125 + C19645 * C2295) * C19609) *
                C19656 * C79) *
               C1524 -
           ((C2306 + C2300) * C19656 * C79 + (C2305 + C2297) * C19656 * C78 +
            ((C249 * C1134 + C19645 * C1287) * C19609 +
             (C249 * C1072 + C19645 * C1237) * C151) *
                C19656 * C77) *
               C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C5841 +
            (C6783 + C6795) * C5842 + C6798 * C5843) *
               C19577 * C1523 -
           ((C7751 + C7749) * C5843 + (C2305 + C2297) * C5842 +
            (C334 + C322) * C5841) *
               C19577 * C1524) *
              C2069 +
          (((C2297 + C2305) * C5841 + (C7749 + C7751) * C5842 +
            ((C249 * C7485 + C19645 * C7679) * C151 +
             (C249 * C7559 + C19645 * C7745) * C19609) *
                C5843) *
               C19577 * C1524 -
           ((C6797 + C6791) * C5843 + (C6796 + C6786) * C5842 +
            (C6795 + C6783) * C5841) *
               C19577 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C2177 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C2069 -
           (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
            C3216 * C1072 + C3098 * C1237) *
               C2178 -
           (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 + C3099 * C2894 +
            C3216 * C1187 + C3098 * C1329) *
               C2070) *
              C19656 * C19577 * C19609 * C1523 +
          ((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 + C3099 * C2786 +
            C3218 * C4849 + C3100 * C5007) *
               C2178 -
           ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
             C3216 * C202 + C3098 * C377) *
                C2069 +
            (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
             C3216 * C94 + C3098 * C251) *
                C2177) +
           (C3216 * C1186 + C3098 * C1331 + C3217 * C2730 + C3099 * C2895 +
            C3218 * C4955 + C3100 * C5110) *
               C2070) *
              C19656 * C19577 * C19609 * C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C2177 +
            (C249 * C201 + C19645 * C376) * C2069 -
            (C249 * C1072 + C19645 * C1237) * C2178 -
            (C249 * C1187 + C19645 * C1329) * C2070) *
               C19656 * C77 +
           (C2358 + C2359 - C2360 - C2370) * C19656 * C78 +
           (C2363 + C2364 - C2365 - C2371) * C19656 * C79) *
              C19609 * C1523 +
          ((C2360 - (C2359 + C2358) + C2370) * C19656 * C77 +
           (C2365 - (C2364 + C2363) + C2371) * C19656 * C78 +
           ((C249 * C2071 + C19645 * C2231) * C2178 -
            (C393 * C2069 + C277 * C2177) +
            (C249 * C2179 + C19645 * C2356) * C2070) *
               C19656 * C79) *
              C19609 * C1524)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C2177 +
            (C249 * C201 + C19645 * C376) * C2069 - C6730 * C2178 -
            C6845 * C2070) *
               C5841 +
           (C6730 * C2177 + C6845 * C2069 - C6732 * C2178 - C6846 * C2070) *
               C5842 +
           (C6732 * C2177 + C6846 * C2069 - C6735 * C2178 - C6847 * C2070) *
               C5843) *
              C19577 * C19609 * C1523 +
          ((C2360 - (C2359 + C2358) + C2370) * C5841 +
           (C7692 * C2178 - (C2368 * C2069 + C2242 * C2177) + C7805 * C2070) *
               C5842 +
           ((C249 * C7485 + C19645 * C7679) * C2178 -
            (C7805 * C2069 + C7692 * C2177) +
            (C249 * C7621 + C19645 * C7801) * C2070) *
               C5843) *
              C19577 * C19609 * C1524)) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C19577 * C3098 +
           (C4676 + C4677 - C4678 - C4679) * C19577 * C3099 +
           (C4680 + C4681 - C4688 - C4689) * C19577 * C3100) *
              C2069 +
          ((C2432 * C1528 -
            ((C436 * C1078 + C19656 * C1381) * C1523 +
             (C436 * C1072 + C19656 * C1375) * C1527) +
            C2433 * C1524) *
               C19577 * C3098 +
           ((C436 * C2612 + C19656 * C2948) * C1528 -
            ((C436 * C2617 + C19656 * C2950) * C1523 +
             (C436 * C2611 + C19656 * C2947) * C1527) +
            (C436 * C2618 + C19656 * C2951) * C1524) *
               C19577 * C3099 +
           ((C436 * C4849 + C19656 * C5161) * C1528 -
            ((C436 * C3926 + C19656 * C4190) * C1523 +
             (C436 * C3923 + C19656 * C4187) * C1527) +
            (C436 * C4851 + C19656 * C5162) * C1524) *
               C19577 * C3100) *
              C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C77 +
           (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) * C78 +
           (C462 * C1527 + C463 * C1523 - C464 * C1528 - C465 * C1524) * C79) *
              C19645 * C2069 +
          ((C2432 * C1528 -
            ((C436 * C1078 + C19656 * C1381) * C1523 +
             (C436 * C1072 + C19656 * C1375) * C1527) +
            C2433 * C1524) *
               C77 +
           (C2434 * C1528 - (C2433 * C1523 + C2432 * C1527) + C2435 * C1524) *
               C78 +
           ((C436 * C2071 + C19656 * C2421) * C1528 -
            (C2435 * C1523 + C2434 * C1527) +
            (C436 * C2073 + C19656 * C2422) * C1524) *
               C79) *
              C19645 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C1527 +
           (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
            C6074 * C1085 + C5843 * C1382) *
               C1523 -
           (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
            C6072 * C94 + C5841 * C438) *
               C1528 -
           (C6074 * C1086 + C5843 * C1383 + C6073 * C1077 + C5842 * C1380 +
            C6072 * C102 + C5841 * C443) *
               C1524) *
              C19577 * C19645 * C2069 +
          ((C6072 * C1071 + C5841 * C1374 + C6073 * C1074 + C5842 * C1377 +
            C6074 * C7485 + C5843 * C7855) *
               C1528 -
           ((C6074 * C6533 + C5843 * C6887 + C6073 * C1085 + C5842 * C1382 +
             C6072 * C1078 + C5841 * C1381) *
                C1523 +
            (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
             C6072 * C1072 + C5841 * C1375) *
                C1527) +
           (C6072 * C1077 + C5841 * C1380 + C6073 * C1086 + C5842 * C1383 +
            C6074 * C7487 + C5843 * C7856) *
               C1524) *
              C19577 * C19645 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C19577 * C3098 +
            (C3766 * C151 + C3826 * C19609) * C19577 * C3099 +
            (C3768 * C151 + C3827 * C19609) * C19577 * C3100) *
               C1523 -
           ((C4743 * C19609 + C4686 * C151) * C19577 * C3100 +
            (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
            (C521 + C509) * C19577 * C3098) *
               C1524) *
              C2069 +
          (((C2487 + C2495) * C19577 * C3098 +
            ((C436 * C2612 + C19656 * C2948) * C151 +
             (C436 * C2674 + C19656 * C3004) * C19609) *
                C19577 * C3099 +
            ((C436 * C4849 + C19656 * C5161) * C151 +
             (C436 * C4903 + C19656 * C5213) * C19609) *
                C19577 * C3100) *
               C1524 -
           (((C436 * C3973 + C19656 * C4231) * C19609 +
             (C436 * C3923 + C19656 * C4187) * C151) *
                C19577 * C3100 +
            ((C436 * C2673 + C19656 * C3003) * C19609 +
             (C436 * C2611 + C19656 * C2947) * C151) *
                C19577 * C3099 +
            ((C436 * C1134 + C19656 * C1425) * C19609 +
             (C436 * C1072 + C19656 * C1375) * C151) *
                C19577 * C3098) *
               C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C77 +
            (C509 + C521) * C78 + C524 * C79) *
               C19645 * C1523 -
           ((C523 + C517) * C79 + (C522 + C512) * C78 + (C521 + C509) * C77) *
               C19645 * C1524) *
              C2069 +
          (((C2487 + C2495) * C77 + (C2490 + C2496) * C78 +
            ((C436 * C2071 + C19656 * C2421) * C151 +
             (C436 * C2125 + C19656 * C2485) * C19609) *
                C79) *
               C19645 * C1524 -
           ((C2496 + C2490) * C79 + (C2495 + C2487) * C78 +
            ((C436 * C1134 + C19656 * C1425) * C19609 +
             (C436 * C1072 + C19656 * C1375) * C151) *
                C77) *
               C19645 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
             C6074 * C1073 + C5843 * C1376) *
                C151 +
            (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
             C6074 * C1135 + C5843 * C1426) *
                C19609) *
               C19577 * C19645 * C1523 -
           ((C6074 * C1136 + C5843 * C1427 + C6073 * C1133 + C5842 * C1424 +
             C6072 * C153 + C5841 * C504) *
                C19609 +
            (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
             C6072 * C94 + C5841 * C438) *
                C151) *
               C19577 * C19645 * C1524) *
              C2069 +
          (((C6072 * C1071 + C5841 * C1374 + C6073 * C1074 + C5842 * C1377 +
             C6074 * C7485 + C5843 * C7855) *
                C151 +
            (C6072 * C1133 + C5841 * C1424 + C6073 * C1136 + C5842 * C1427 +
             C6074 * C7559 + C5843 * C7907) *
                C19609) *
               C19577 * C19645 * C1524 -
           ((C6074 * C6603 + C5843 * C6927 + C6073 * C1135 + C5842 * C1426 +
             C6072 * C1134 + C5841 * C1425) *
                C19609 +
            (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 + C5842 * C1376 +
             C6072 * C1072 + C5841 * C1375) *
                C151) *
               C19577 * C19645 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] += (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C19577 * C3098 +
                     (C3766 * C2177 + C3878 * C2069 -
                      (C436 * C2611 + C19656 * C2947) * C2178 -
                      (C436 * C2729 + C19656 * C3056) * C2070) *
                         C19577 * C3099 +
                     (C3768 * C2177 + C3879 * C2069 -
                      (C436 * C3923 + C19656 * C4187) * C2178 -
                      (C436 * C4018 + C19656 * C4273) * C2070) *
                         C19577 * C3100) *
                        C19609 * C1523 +
                    ((C2550 - (C2549 + C2548) + C2560) * C19577 * C3098 +
                     ((C436 * C2612 + C19656 * C2948) * C2178 -
                      (C2017 * C2069 + C1890 * C2177) +
                      (C436 * C2730 + C19656 * C3057) * C2070) *
                         C19577 * C3099 +
                     ((C436 * C4849 + C19656 * C5161) * C2178 -
                      (C4798 * C2069 + C4686 * C2177) +
                      (C436 * C4955 + C19656 * C5264) * C2070) *
                         C19577 * C3100) *
                        C19609 * C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C77 +
                     (C2548 + C2549 - C2550 - C2560) * C78 +
                     (C2553 + C2554 - C2555 - C2561) * C79) *
                        C19645 * C19609 * C1523 +
                    ((C2550 - (C2549 + C2548) + C2560) * C77 +
                     (C2555 - (C2554 + C2553) + C2561) * C78 +
                     ((C436 * C2071 + C19656 * C2421) * C2178 -
                      (C579 * C2069 + C464 * C2177) +
                      (C436 * C2179 + C19656 * C2546) * C2070) *
                         C79) *
                        C19645 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6072 * C93 + C5841 * C437 + C6073 * C1072 +
                      C5842 * C1375 + C6074 * C1073 + C5843 * C1376) *
                         C2177 +
                     (C6072 * C201 + C5841 * C562 + C6073 * C1187 +
                      C5842 * C1467 + C6074 * C1188 + C5843 * C1468) *
                         C2069 -
                     (C6074 * C6531 + C5843 * C6885 + C6073 * C1073 +
                      C5842 * C1376 + C6072 * C1072 + C5841 * C1375) *
                         C2178 -
                     (C6074 * C6662 + C5843 * C6967 + C6073 * C1188 +
                      C5842 * C1468 + C6072 * C1187 + C5841 * C1467) *
                         C2070) *
                        C19577 * C19645 * C19609 * C1523 +
                    ((C6072 * C1071 + C5841 * C1374 + C6073 * C1074 +
                      C5842 * C1377 + C6074 * C7485 + C5843 * C7855) *
                         C2178 -
                     ((C6074 * C1189 + C5843 * C1470 + C6073 * C1186 +
                       C5842 * C1469 + C6072 * C202 + C5841 * C563) *
                          C2069 +
                      (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 +
                       C5842 * C1374 + C6072 * C94 + C5841 * C438) *
                          C2177) +
                     (C6072 * C1186 + C5841 * C1469 + C6073 * C1189 +
                      C5842 * C1470 + C6074 * C7621 + C5843 * C7958) *
                         C2070) *
                        C19577 * C19645 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C625 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C19588) *
                        C19645 * C19656 * C19620 * C622 -
                    ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                      C87 * C634 + C77 * C646) *
                         C19588 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C625) *
                        C19645 * C19656 * C19620 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C625 +
                     (C87 * C641 + C77 * C647 + C88 * C642 + C78 * C648 +
                      C89 * C643 + C79 * C649) *
                         C19588) *
                        C19645 * C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C90 +
                    (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                     C89 * C103 + C79 * C110) *
                        C80 -
                    (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                     C87 * C94 + C77 * C99) *
                        C91 -
                    (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                     C87 * C102 + C77 * C109) *
                        C81 +
                    (C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                     C89 * C97 + C79 * C106) *
                        C92 +
                    (C87 * C103 + C77 * C110 + C88 * C105 + C78 * C111 +
                     C89 * C107 + C79 * C112) *
                        C82) *
                   C19645 * C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C90 +
                     (C3101 * C101 + C19577 * C108) * C80 -
                     (C3101 * C94 + C19577 * C99) * C91 -
                     (C3101 * C102 + C19577 * C109) * C81 +
                     (C3101 * C95 + C19577 * C100) * C92 +
                     (C3101 * C103 + C19577 * C110) * C82) *
                        C3098 +
                    ((C3101 * C628 + C19577 * C637) * C90 +
                     (C3101 * C634 + C19577 * C646) * C80 -
                     (C3101 * C627 + C19577 * C636) * C91 -
                     (C3101 * C633 + C19577 * C645) * C81 +
                     (C3101 * C626 + C19577 * C635) * C92 +
                     (C3101 * C632 + C19577 * C644) * C82) *
                        C3099 +
                    ((C3101 * C629 + C19577 * C638) * C90 +
                     (C3101 * C641 + C19577 * C647) * C80 -
                     (C3101 * C630 + C19577 * C639) * C91 -
                     (C3101 * C642 + C19577 * C648) * C81 +
                     (C3101 * C631 + C19577 * C640) * C92 +
                     (C3101 * C643 + C19577 * C649) * C82) *
                        C3100) *
                   C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C625 +
                      (C3101 * C101 + C19577 * C108) * C19588) *
                         C3098 +
                     (C3474 + C3475) * C3099 + C3480 * C3100) *
                        C19656 * C19620 * C622 -
                    ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
                     (C3475 + C3474) * C3098) *
                        C19656 * C19620 * C623 +
                    (C3480 * C3098 + (C3479 + C3478) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C625 +
                      (C3101 * C3452 + C19577 * C3454) * C19588) *
                         C3100) *
                        C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C90 +
                     (C3101 * C101 + C19577 * C108) * C80 -
                     (C3101 * C94 + C19577 * C99) * C91 -
                     (C3101 * C102 + C19577 * C109) * C81 +
                     (C3101 * C95 + C19577 * C100) * C92 +
                     (C3101 * C103 + C19577 * C110) * C82) *
                        C19645 * C5841 +
                    ((C3101 * C1072 + C19577 * C1081) * C90 +
                     (C3101 * C1078 + C19577 * C1090) * C80 -
                     (C3101 * C1071 + C19577 * C1080) * C91 -
                     (C3101 * C1077 + C19577 * C1089) * C81 +
                     (C3101 * C1070 + C19577 * C1079) * C92 +
                     (C3101 * C1076 + C19577 * C1088) * C82) *
                        C19645 * C5842 +
                    ((C3101 * C1073 + C19577 * C1082) * C90 +
                     (C3101 * C1085 + C19577 * C1091) * C80 -
                     (C3101 * C1074 + C19577 * C1083) * C91 -
                     (C3101 * C1086 + C19577 * C1092) * C81 +
                     (C3101 * C1075 + C19577 * C1084) * C92 +
                     (C3101 * C1087 + C19577 * C1093) * C82) *
                        C19645 * C5843) *
                   C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C625 +
                      (C3101 * C101 + C19577 * C108) * C19588) *
                         C19645 * C5841 +
                     ((C3101 * C1072 + C19577 * C1081) * C625 +
                      (C3101 * C1078 + C19577 * C1090) * C19588) *
                         C19645 * C5842 +
                     ((C3101 * C1073 + C19577 * C1082) * C625 +
                      (C3101 * C1085 + C19577 * C1091) * C19588) *
                         C19645 * C5843) *
                        C19620 * C622 -
                    (((C3101 * C3929 + C19577 * C3933) * C19588 +
                      (C3101 * C3924 + C19577 * C3928) * C625) *
                         C19645 * C5843 +
                     (C5334 + C5335) * C19645 * C5842 +
                     (C3475 + C3474) * C19645 * C5841) *
                        C19620 * C623 +
                    (C3480 * C19645 * C5841 + (C5333 + C5332) * C19645 * C5842 +
                     ((C3101 * C3925 + C19577 * C3930) * C625 +
                      (C3101 * C3931 + C19577 * C3934) * C19588) *
                         C19645 * C5843) *
                        C19620 * C624)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C688 +
                    (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                     C89 * C154 + C79 * C159) *
                        C622 -
                    (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                     C87 * C628 + C77 * C637) *
                        C689 -
                    (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 +
                     C87 * C693 + C77 * C699) *
                        C623 +
                    (C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                     C89 * C631 + C79 * C640) *
                        C690 +
                    (C87 * C694 + C77 * C700 + C88 * C695 + C78 * C701 +
                     C89 * C696 + C79 * C702) *
                        C624) *
                   C19645 * C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C151 +
                     (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                      C89 * C154 + C79 * C159) *
                         C19609) *
                        C19645 * C19656 * C80 -
                    ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 +
                      C87 * C153 + C77 * C158) *
                         C19609 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C151) *
                        C19645 * C19656 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C151 +
                     (C87 * C154 + C77 * C159 + C88 * C155 + C78 * C160 +
                      C89 * C156 + C79 * C161) *
                         C19609) *
                        C19645 * C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C151 +
                      (C3101 * C152 + C19577 * C157) * C19609) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C151 +
                      (C3101 * C693 + C19577 * C699) * C19609) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C151 +
                      (C3101 * C694 + C19577 * C700) * C19609) *
                         C3100) *
                        C19656 * C80 -
                    (((C3101 * C695 + C19577 * C701) * C19609 +
                      (C3101 * C630 + C19577 * C639) * C151) *
                         C3100 +
                     ((C3101 * C692 + C19577 * C698) * C19609 +
                      (C3101 * C627 + C19577 * C636) * C151) *
                         C3099 +
                     ((C3101 * C153 + C19577 * C158) * C19609 +
                      (C3101 * C94 + C19577 * C99) * C151) *
                         C3098) *
                        C19656 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C151 +
                      (C3101 * C154 + C19577 * C159) * C19609) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C151 +
                      (C3101 * C691 + C19577 * C697) * C19609) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C151 +
                      (C3101 * C696 + C19577 * C702) * C19609) *
                         C3100) *
                        C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C688 +
                     (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
                     C3529 * C623 + C3470 * C690 + C3530 * C624) *
                        C3098 +
                    (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
                     C3473 * C690 + C3531 * C624) *
                        C3099 +
                    (C3470 * C688 + C3530 * C622 - C3473 * C689 - C3531 * C623 +
                     (C3101 * C3448 + C19577 * C3451) * C690 +
                     (C3101 * C3519 + C19577 * C3521) * C624) *
                        C3100) *
                   C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C151 +
                      (C3101 * C152 + C19577 * C157) * C19609) *
                         C19645 * C5841 +
                     ((C3101 * C1072 + C19577 * C1081) * C151 +
                      (C3101 * C1134 + C19577 * C1140) * C19609) *
                         C19645 * C5842 +
                     ((C3101 * C1073 + C19577 * C1082) * C151 +
                      (C3101 * C1135 + C19577 * C1141) * C19609) *
                         C19645 * C5843) *
                        C80 -
                    (((C3101 * C1136 + C19577 * C1142) * C19609 +
                      (C3101 * C1074 + C19577 * C1083) * C151) *
                         C19645 * C5843 +
                     ((C3101 * C1133 + C19577 * C1139) * C19609 +
                      (C3101 * C1071 + C19577 * C1080) * C151) *
                         C19645 * C5842 +
                     ((C3101 * C153 + C19577 * C158) * C19609 +
                      (C3101 * C94 + C19577 * C99) * C151) *
                         C19645 * C5841) *
                        C81 +
                    (((C3101 * C95 + C19577 * C100) * C151 +
                      (C3101 * C154 + C19577 * C159) * C19609) *
                         C19645 * C5841 +
                     ((C3101 * C1070 + C19577 * C1079) * C151 +
                      (C3101 * C1132 + C19577 * C1138) * C19609) *
                         C19645 * C5842 +
                     ((C3101 * C1075 + C19577 * C1084) * C151 +
                      (C3101 * C1137 + C19577 * C1143) * C19609) *
                         C19645 * C5843) *
                        C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C688 +
                     (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
                     C3529 * C623 + C3470 * C690 + C3530 * C624) *
                        C19645 * C5841 +
                    ((C3101 * C1072 + C19577 * C1081) * C688 +
                     (C3101 * C1134 + C19577 * C1140) * C622 - C5331 * C689 -
                     C5392 * C623 + C5329 * C690 + C5393 * C624) *
                        C19645 * C5842 +
                    ((C3101 * C1073 + C19577 * C1082) * C688 +
                     (C3101 * C1135 + C19577 * C1141) * C622 -
                     (C3101 * C3924 + C19577 * C3928) * C689 -
                     (C3101 * C3974 + C19577 * C3977) * C623 +
                     (C3101 * C3925 + C19577 * C3930) * C690 +
                     (C3101 * C3975 + C19577 * C3978) * C624) *
                        C19645 * C5843) *
                   C19588 * C19620) /
                      (p * q * std::sqrt(p + q));
    d2eexz[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C622 -
                    ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                      C87 * C743 + C77 * C749) *
                         C19620 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C200) *
                        C19645 * C19656 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C200 +
                     (C87 * C744 + C77 * C750 + C88 * C745 + C78 * C751 +
                      C89 * C746 + C79 * C752) *
                         C19620) *
                        C19645 * C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C19609 * C80 -
                    ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                      C87 * C202 + C77 * C207) *
                         C19620 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C200) *
                        C19645 * C19656 * C19609 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C200 +
                     (C87 * C203 + C77 * C208 + C88 * C204 + C78 * C209 +
                      C89 * C205 + C79 * C210) *
                         C19620) *
                        C19645 * C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C200 +
                      (C3101 * C743 + C19577 * C749) * C19620) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C200 +
                      (C3101 * C744 + C19577 * C750) * C19620) *
                         C3100) *
                        C19656 * C19609 * C80 -
                    (((C3101 * C745 + C19577 * C751) * C19620 +
                      (C3101 * C630 + C19577 * C639) * C200) *
                         C3100 +
                     ((C3101 * C742 + C19577 * C748) * C19620 +
                      (C3101 * C627 + C19577 * C636) * C200) *
                         C3099 +
                     ((C3101 * C202 + C19577 * C207) * C19620 +
                      (C3101 * C94 + C19577 * C99) * C200) *
                         C3098) *
                        C19656 * C19609 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C200 +
                      (C3101 * C203 + C19577 * C208) * C19620) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C200 +
                      (C3101 * C741 + C19577 * C747) * C19620) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C200 +
                      (C3101 * C746 + C19577 * C752) * C19620) *
                         C3100) *
                        C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     (C3574 + C3586) * C3099 + C3589 * C3100) *
                        C19656 * C622 -
                    ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
                     (C3586 + C3574) * C3098) *
                        C19656 * C623 +
                    (C3589 * C3098 + (C3582 + C3588) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C200 +
                      (C3101 * C3570 + C19577 * C3572) * C19620) *
                         C3100) *
                        C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C19645 * C5841 +
                     ((C3101 * C1072 + C19577 * C1081) * C200 +
                      (C3101 * C1187 + C19577 * C1193) * C19620) *
                         C19645 * C5842 +
                     ((C3101 * C1073 + C19577 * C1082) * C200 +
                      (C3101 * C1188 + C19577 * C1194) * C19620) *
                         C19645 * C5843) *
                        C19609 * C80 -
                    (((C3101 * C1189 + C19577 * C1195) * C19620 +
                      (C3101 * C1074 + C19577 * C1083) * C200) *
                         C19645 * C5843 +
                     ((C3101 * C1186 + C19577 * C1192) * C19620 +
                      (C3101 * C1071 + C19577 * C1080) * C200) *
                         C19645 * C5842 +
                     ((C3101 * C202 + C19577 * C207) * C19620 +
                      (C3101 * C94 + C19577 * C99) * C200) *
                         C19645 * C5841) *
                        C19609 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C200 +
                      (C3101 * C203 + C19577 * C208) * C19620) *
                         C19645 * C5841 +
                     ((C3101 * C1070 + C19577 * C1079) * C200 +
                      (C3101 * C1185 + C19577 * C1191) * C19620) *
                         C19645 * C5842 +
                     ((C3101 * C1075 + C19577 * C1084) * C200 +
                      (C3101 * C1190 + C19577 * C1196) * C19620) *
                         C19645 * C5843) *
                        C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C19645 * C5841 +
                     ((C3101 * C1072 + C19577 * C1081) * C200 +
                      (C3101 * C1187 + C19577 * C1193) * C19620) *
                         C19645 * C5842 +
                     ((C3101 * C1073 + C19577 * C1082) * C200 +
                      (C3101 * C1188 + C19577 * C1194) * C19620) *
                         C19645 * C5843) *
                        C622 -
                    (((C3101 * C4017 + C19577 * C4020) * C19620 +
                      (C3101 * C3924 + C19577 * C3928) * C200) *
                         C19645 * C5843 +
                     (C5456 * C19620 + C5331 * C200) * C19645 * C5842 +
                     (C3586 + C3574) * C19645 * C5841) *
                        C623 +
                    (C3589 * C19645 * C5841 +
                     (C5329 * C200 + C5457 * C19620) * C19645 * C5842 +
                     ((C3101 * C3925 + C19577 * C3930) * C200 +
                      (C3101 * C4019 + C19577 * C4022) * C19620) *
                         C19645 * C5843) *
                        C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[14] += (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C625 +
                      (C249 * C101 + C19645 * C255) * C19588) *
                         C19656 * C77 +
                     (C273 * C625 + C274 * C19588) * C19656 * C78 +
                     (C275 * C625 + C276 * C19588) * C19656 * C79) *
                        C19620 * C622 -
                    (((C249 * C632 + C19645 * C797) * C19588 +
                      (C249 * C626 + C19645 * C791) * C625) *
                         C19656 * C79 +
                     ((C249 * C633 + C19645 * C798) * C19588 +
                      (C249 * C627 + C19645 * C792) * C625) *
                         C19656 * C78 +
                     ((C249 * C634 + C19645 * C799) * C19588 +
                      (C249 * C628 + C19645 * C793) * C625) *
                         C19656 * C77) *
                        C19620 * C623 +
                    (((C249 * C629 + C19645 * C794) * C625 +
                      (C249 * C641 + C19645 * C800) * C19588) *
                         C19656 * C77 +
                     ((C249 * C630 + C19645 * C795) * C625 +
                      (C249 * C642 + C19645 * C801) * C19588) *
                         C19656 * C78 +
                     ((C249 * C631 + C19645 * C796) * C625 +
                      (C249 * C643 + C19645 * C802) * C19588) *
                         C19656 * C79) *
                        C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C249 * C93 + C19645 * C250) * C90 +
                     (C249 * C101 + C19645 * C255) * C80 - C273 * C91 -
                     C274 * C81 + C275 * C92 + C276 * C82) *
                        C19656 * C77 +
                    (C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 +
                     C277 * C92 + C278 * C82) *
                        C19656 * C78 +
                    (C275 * C90 + C276 * C80 - C277 * C91 - C278 * C81 +
                     (C249 * C97 + C19645 * C254) * C92 +
                     (C249 * C107 + C19645 * C259) * C82) *
                        C19656 * C79) *
                   C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                     C3218 * C629 + C3100 * C794) *
                        C90 +
                    (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
                     C3218 * C641 + C3100 * C800) *
                        C80 -
                    (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
                     C3216 * C94 + C3098 * C251) *
                        C91 -
                    (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
                     C3216 * C102 + C3098 * C256) *
                        C81 +
                    (C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
                     C3218 * C631 + C3100 * C796) *
                        C92 +
                    (C3216 * C103 + C3098 * C257 + C3217 * C632 + C3099 * C797 +
                     C3218 * C643 + C3100 * C802) *
                        C82) *
                   C19656 * C19577 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C625 +
                     (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                      C3099 * C799 + C3218 * C641 + C3100 * C800) *
                         C19588) *
                        C19656 * C19577 * C19620 * C622 -
                    ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 +
                      C3099 * C800 + C3216 * C634 + C3098 * C799) *
                         C19588 +
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C625) *
                        C19656 * C19577 * C19620 * C623 +
                    ((C3216 * C629 + C3098 * C794 + C3217 * C3447 +
                      C3099 * C3627 + C3218 * C3448 + C3100 * C3628) *
                         C625 +
                     (C3216 * C641 + C3098 * C800 + C3217 * C3449 +
                      C3099 * C3629 + C3218 * C3452 + C3100 * C3630) *
                         C19588) *
                        C19656 * C19577 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C249 * C93 + C19645 * C250) * C90 +
                     (C249 * C101 + C19645 * C255) * C80 - C273 * C91 -
                     C274 * C81 + C275 * C92 + C276 * C82) *
                        C5841 +
                    ((C249 * C1072 + C19645 * C1237) * C90 +
                     (C249 * C1078 + C19645 * C1243) * C80 - C2242 * C91 -
                     C2243 * C81 + C2244 * C92 + C2245 * C82) *
                        C5842 +
                    ((C249 * C1073 + C19645 * C1238) * C90 +
                     (C249 * C1085 + C19645 * C1244) * C80 -
                     (C249 * C1074 + C19645 * C1239) * C91 -
                     (C249 * C1086 + C19645 * C1245) * C81 +
                     (C249 * C1075 + C19645 * C1240) * C92 +
                     (C249 * C1087 + C19645 * C1246) * C82) *
                        C5843) *
                   C19577 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C625 +
                      (C249 * C101 + C19645 * C255) * C19588) *
                         C5841 +
                     ((C249 * C1072 + C19645 * C1237) * C625 +
                      (C249 * C1078 + C19645 * C1243) * C19588) *
                         C5842 +
                     ((C249 * C1073 + C19645 * C1238) * C625 +
                      (C249 * C1085 + C19645 * C1244) * C19588) *
                         C5843) *
                        C19577 * C19620 * C622 -
                    (((C249 * C3929 + C19645 * C4065) * C19588 +
                      (C249 * C3924 + C19645 * C4062) * C625) *
                         C5843 +
                     ((C249 * C2617 + C19645 * C2788) * C19588 +
                      (C249 * C2611 + C19645 * C2785) * C625) *
                         C5842 +
                     ((C249 * C634 + C19645 * C799) * C19588 +
                      (C249 * C628 + C19645 * C793) * C625) *
                         C5841) *
                        C19577 * C19620 * C623 +
                    (((C249 * C629 + C19645 * C794) * C625 +
                      (C249 * C641 + C19645 * C800) * C19588) *
                         C5841 +
                     ((C249 * C3923 + C19645 * C4061) * C625 +
                      (C249 * C3926 + C19645 * C4064) * C19588) *
                         C5842 +
                     ((C249 * C3925 + C19645 * C4063) * C625 +
                      (C249 * C3931 + C19645 * C4066) * C19588) *
                         C5843) *
                        C19577 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C688 +
           (C249 * C152 + C19645 * C316) * C622 -
           (C249 * C628 + C19645 * C793) * C689 -
           (C249 * C693 + C19645 * C841) * C623 +
           (C249 * C629 + C19645 * C794) * C690 +
           (C249 * C694 + C19645 * C842) * C624) *
              C19656 * C77 +
          (C273 * C688 + C331 * C622 - (C249 * C627 + C19645 * C792) * C689 -
           (C249 * C692 + C19645 * C843) * C623 +
           (C249 * C630 + C19645 * C795) * C690 +
           (C249 * C695 + C19645 * C844) * C624) *
              C19656 * C78 +
          (C275 * C688 + C332 * C622 - (C249 * C626 + C19645 * C791) * C689 -
           (C249 * C691 + C19645 * C845) * C623 +
           (C249 * C631 + C19645 * C796) * C690 +
           (C249 * C696 + C19645 * C846) * C624) *
              C19656 * C79) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C19656 * C77 +
           (C322 + C334) * C19656 * C78 + C338 * C79) *
              C80 -
          ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
           (C334 + C322) * C19656 * C77) *
              C81 +
          (C338 * C77 + (C330 + C336) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C151 +
            (C249 * C156 + C19645 * C320) * C19609) *
               C19656 * C79) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C151 +
           (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
            C3218 * C694 + C3100 * C842) *
               C19609) *
              C19656 * C19577 * C80 -
          ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
            C3216 * C153 + C3098 * C317) *
               C19609 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C151) *
              C19656 * C19577 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C151 +
           (C3216 * C154 + C3098 * C318 + C3217 * C691 + C3099 * C845 +
            C3218 * C696 + C3100 * C846) *
               C19609) *
              C19656 * C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C688 +
          (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
           C3218 * C694 + C3100 * C842) *
              C622 -
          (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
           C3216 * C628 + C3098 * C793) *
              C689 -
          (C3218 * C3518 + C3100 * C3669 + C3217 * C694 + C3099 * C842 +
           C3216 * C693 + C3098 * C841) *
              C623 +
          (C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
           C3218 * C3448 + C3100 * C3628) *
              C690 +
          (C3216 * C694 + C3098 * C842 + C3217 * C3518 + C3099 * C3669 +
           C3218 * C3519 + C3100 * C3670) *
              C624) *
         C19656 * C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C151 +
            (C249 * C1134 + C19645 * C1287) * C19609) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C151 +
            (C249 * C1135 + C19645 * C1288) * C19609) *
               C5843) *
              C19577 * C80 -
          (((C249 * C1136 + C19645 * C1289) * C19609 +
            (C249 * C1074 + C19645 * C1239) * C151) *
               C5843 +
           (C2305 + C2297) * C5842 + (C334 + C322) * C5841) *
              C19577 * C81 +
          (C337 * C5841 + (C2300 + C2306) * C5842 +
           ((C249 * C1075 + C19645 * C1240) * C151 +
            (C249 * C1137 + C19645 * C1290) * C19609) *
               C5843) *
              C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C688 +
           (C249 * C152 + C19645 * C316) * C622 -
           (C249 * C628 + C19645 * C793) * C689 -
           (C249 * C693 + C19645 * C841) * C623 +
           (C249 * C629 + C19645 * C794) * C690 +
           (C249 * C694 + C19645 * C842) * C624) *
              C5841 +
          ((C249 * C1072 + C19645 * C1237) * C688 +
           (C249 * C1134 + C19645 * C1287) * C622 -
           (C249 * C2611 + C19645 * C2785) * C689 -
           (C249 * C2673 + C19645 * C2841) * C623 +
           (C249 * C3923 + C19645 * C4061) * C690 +
           (C249 * C3973 + C19645 * C4105) * C624) *
              C5842 +
          ((C249 * C1073 + C19645 * C1238) * C688 +
           (C249 * C1135 + C19645 * C1288) * C622 -
           (C249 * C3924 + C19645 * C4062) * C689 -
           (C249 * C3974 + C19645 * C4106) * C623 +
           (C249 * C3925 + C19645 * C4063) * C690 +
           (C249 * C3975 + C19645 * C4107) * C624) *
              C5843) *
         C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C622 -
          (((C249 * C741 + C19645 * C885) * C19620 +
            (C249 * C626 + C19645 * C791) * C200) *
               C19656 * C79 +
           ((C249 * C742 + C19645 * C886) * C19620 +
            (C249 * C627 + C19645 * C792) * C200) *
               C19656 * C78 +
           ((C249 * C743 + C19645 * C887) * C19620 +
            (C249 * C628 + C19645 * C793) * C200) *
               C19656 * C77) *
              C623 +
          (((C249 * C629 + C19645 * C794) * C200 +
            (C249 * C744 + C19645 * C888) * C19620) *
               C19656 * C77 +
           ((C249 * C630 + C19645 * C795) * C200 +
            (C249 * C745 + C19645 * C889) * C19620) *
               C19656 * C78 +
           ((C249 * C631 + C19645 * C796) * C200 +
            (C249 * C746 + C19645 * C890) * C19620) *
               C19656 * C79) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C19609 * C80 -
          ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
           (C394 + C382) * C19656 * C77) *
              C19609 * C81 +
          (C398 * C77 + (C390 + C396) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C200 +
            (C249 * C205 + C19645 * C380) * C19620) *
               C19656 * C79) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C19609 * C80 -
          ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
            C3216 * C202 + C3098 * C377) *
               C19620 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C200) *
              C19656 * C19577 * C19609 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C200 +
           (C3216 * C203 + C3098 * C378 + C3217 * C741 + C3099 * C885 +
            C3218 * C746 + C3100 * C890) *
               C19620) *
              C19656 * C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C622 -
          ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
            C3216 * C743 + C3098 * C887) *
               C19620 +
           (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
            C3216 * C628 + C3098 * C793) *
               C200) *
              C19656 * C19577 * C623 +
          ((C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
            C3218 * C3448 + C3100 * C3628) *
               C200 +
           (C3216 * C744 + C3098 * C888 + C3217 * C3569 + C3099 * C3709 +
            C3218 * C3570 + C3100 * C3710) *
               C19620) *
              C19656 * C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C200 +
            (C249 * C1187 + C19645 * C1329) * C19620) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C200 +
            (C249 * C1188 + C19645 * C1330) * C19620) *
               C5843) *
              C19577 * C19609 * C80 -
          (((C249 * C1189 + C19645 * C1332) * C19620 +
            (C249 * C1074 + C19645 * C1239) * C200) *
               C5843 +
           (C2368 * C19620 + C2242 * C200) * C5842 + (C394 + C382) * C5841) *
              C19577 * C19609 * C81 +
          (C397 * C5841 + (C2244 * C200 + C2369 * C19620) * C5842 +
           ((C249 * C1075 + C19645 * C1240) * C200 +
            (C249 * C1190 + C19645 * C1334) * C19620) *
               C5843) *
              C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C5841 +
           ((C249 * C1072 + C19645 * C1237) * C200 +
            (C249 * C1187 + C19645 * C1329) * C19620) *
               C5842 +
           ((C249 * C1073 + C19645 * C1238) * C200 +
            (C249 * C1188 + C19645 * C1330) * C19620) *
               C5843) *
              C19577 * C622 -
          (((C249 * C4017 + C19645 * C4147) * C19620 +
            (C249 * C3924 + C19645 * C4062) * C200) *
               C5843 +
           ((C249 * C2729 + C19645 * C2894) * C19620 +
            (C249 * C2611 + C19645 * C2785) * C200) *
               C5842 +
           ((C249 * C743 + C19645 * C887) * C19620 +
            (C249 * C628 + C19645 * C793) * C200) *
               C5841) *
              C19577 * C623 +
          (((C249 * C629 + C19645 * C794) * C200 +
            (C249 * C744 + C19645 * C888) * C19620) *
               C5841 +
           ((C249 * C3923 + C19645 * C4061) * C200 +
            (C249 * C4018 + C19645 * C4146) * C19620) *
               C5842 +
           ((C249 * C3925 + C19645 * C4063) * C200 +
            (C249 * C4019 + C19645 * C4148) * C19620) *
               C5843) *
              C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C77 +
           (C460 * C625 + C461 * C19588) * C78 +
           (C462 * C625 + C463 * C19588) * C79) *
              C19645 * C19620 * C622 -
          (((C436 * C632 + C19656 * C935) * C19588 +
            (C436 * C626 + C19656 * C929) * C625) *
               C79 +
           ((C436 * C633 + C19656 * C936) * C19588 +
            (C436 * C627 + C19656 * C930) * C625) *
               C78 +
           ((C436 * C634 + C19656 * C937) * C19588 +
            (C436 * C628 + C19656 * C931) * C625) *
               C77) *
              C19645 * C19620 * C623 +
          (((C436 * C629 + C19656 * C932) * C625 +
            (C436 * C641 + C19656 * C938) * C19588) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C625 +
            (C436 * C642 + C19656 * C939) * C19588) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C625 +
            (C436 * C643 + C19656 * C940) * C19588) *
               C79) *
              C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C77 +
          (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
           C465 * C82) *
              C78 +
          (C462 * C90 + C463 * C80 - C464 * C91 - C465 * C81 +
           (C436 * C97 + C19656 * C441) * C92 +
           (C436 * C107 + C19656 * C446) * C82) *
              C79) *
         C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C19577 * C3098 +
          ((C436 * C628 + C19656 * C931) * C90 +
           (C436 * C634 + C19656 * C937) * C80 - C1890 * C91 - C1891 * C81 +
           C1892 * C92 + C1893 * C82) *
              C19577 * C3099 +
          ((C436 * C629 + C19656 * C932) * C90 +
           (C436 * C641 + C19656 * C938) * C80 -
           (C436 * C630 + C19656 * C933) * C91 -
           (C436 * C642 + C19656 * C939) * C81 +
           (C436 * C631 + C19656 * C934) * C92 +
           (C436 * C643 + C19656 * C940) * C82) *
              C19577 * C3100) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C19620 * C622 -
          ((C3776 + C3777) * C19577 * C3100 + (C3775 + C3774) * C19577 * C3099 +
           (C3773 + C3772) * C19577 * C3098) *
              C19620 * C623 +
          (C3779 * C3098 + (C3777 + C3776) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C625 +
            (C436 * C3452 + C19656 * C3752) * C19588) *
               C19577 * C3100) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
           C6074 * C1073 + C5843 * C1376) *
              C90 +
          (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
           C6074 * C1085 + C5843 * C1382) *
              C80 -
          (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
           C6072 * C94 + C5841 * C438) *
              C91 -
          (C6074 * C1086 + C5843 * C1383 + C6073 * C1077 + C5842 * C1380 +
           C6072 * C102 + C5841 * C443) *
              C81 +
          (C6072 * C95 + C5841 * C439 + C6073 * C1070 + C5842 * C1373 +
           C6074 * C1075 + C5843 * C1378) *
              C92 +
          (C6072 * C103 + C5841 * C444 + C6073 * C1076 + C5842 * C1379 +
           C6074 * C1087 + C5843 * C1384) *
              C82) *
         C19577 * C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C625 +
           (C6072 * C101 + C5841 * C442 + C6073 * C1078 + C5842 * C1381 +
            C6074 * C1085 + C5843 * C1382) *
               C19588) *
              C19577 * C19645 * C19620 * C622 -
          ((C6074 * C3929 + C5843 * C4191 + C6073 * C2617 + C5842 * C2950 +
            C6072 * C634 + C5841 * C937) *
               C19588 +
           (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
            C6072 * C628 + C5841 * C931) *
               C625) *
              C19577 * C19645 * C19620 * C623 +
          ((C6072 * C629 + C5841 * C932 + C6073 * C3923 + C5842 * C4187 +
            C6074 * C3925 + C5843 * C4189) *
               C625 +
           (C6072 * C641 + C5841 * C938 + C6073 * C3926 + C5842 * C4190 +
            C6074 * C3931 + C5843 * C4192) *
               C19588) *
              C19577 * C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 -
           (C436 * C628 + C19656 * C931) * C689 -
           (C436 * C693 + C19656 * C979) * C623 +
           (C436 * C629 + C19656 * C932) * C690 +
           (C436 * C694 + C19656 * C980) * C624) *
              C77 +
          (C460 * C688 + C518 * C622 - (C436 * C627 + C19656 * C930) * C689 -
           (C436 * C692 + C19656 * C981) * C623 +
           (C436 * C630 + C19656 * C933) * C690 +
           (C436 * C695 + C19656 * C982) * C624) *
              C78 +
          (C462 * C688 + C519 * C622 - (C436 * C626 + C19656 * C929) * C689 -
           (C436 * C691 + C19656 * C983) * C623 +
           (C436 * C631 + C19656 * C934) * C690 +
           (C436 * C696 + C19656 * C984) * C624) *
              C79) *
         C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C77 +
           (C509 + C521) * C78 + C524 * C79) *
              C19645 * C80 -
          ((C523 + C517) * C79 + (C522 + C512) * C78 + (C521 + C509) * C77) *
              C19645 * C81 +
          (C524 * C77 + (C517 + C523) * C78 +
           ((C436 * C97 + C19656 * C441) * C151 +
            (C436 * C156 + C19656 * C507) * C19609) *
               C79) *
              C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C151 +
            (C436 * C693 + C19656 * C979) * C19609) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C151 +
            (C436 * C694 + C19656 * C980) * C19609) *
               C19577 * C3100) *
              C80 -
          (((C436 * C695 + C19656 * C982) * C19609 +
            (C436 * C630 + C19656 * C933) * C151) *
               C19577 * C3100 +
           (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
           (C521 + C509) * C19577 * C3098) *
              C81 +
          (C524 * C19577 * C3098 +
           (C1892 * C151 + C1956 * C19609) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C151 +
            (C436 * C696 + C19656 * C984) * C19609) *
               C19577 * C3100) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
           C3768 * C690 + C3827 * C624) *
              C19577 * C3098 +
          (C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
           C3771 * C690 + C3828 * C624) *
              C19577 * C3099 +
          (C3768 * C688 + C3827 * C622 - C3771 * C689 - C3828 * C623 +
           (C436 * C3448 + C19656 * C3750) * C690 +
           (C436 * C3519 + C19656 * C3818) * C624) *
              C19577 * C3100) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C151 +
           (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
            C6074 * C1135 + C5843 * C1426) *
               C19609) *
              C19577 * C19645 * C80 -
          ((C6074 * C1136 + C5843 * C1427 + C6073 * C1133 + C5842 * C1424 +
            C6072 * C153 + C5841 * C504) *
               C19609 +
           (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
            C6072 * C94 + C5841 * C438) *
               C151) *
              C19577 * C19645 * C81 +
          ((C6072 * C95 + C5841 * C439 + C6073 * C1070 + C5842 * C1373 +
            C6074 * C1075 + C5843 * C1378) *
               C151 +
           (C6072 * C154 + C5841 * C505 + C6073 * C1132 + C5842 * C1423 +
            C6074 * C1137 + C5843 * C1428) *
               C19609) *
              C19577 * C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
           C6074 * C1073 + C5843 * C1376) *
              C688 +
          (C6072 * C152 + C5841 * C503 + C6073 * C1134 + C5842 * C1425 +
           C6074 * C1135 + C5843 * C1426) *
              C622 -
          (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
           C6072 * C628 + C5841 * C931) *
              C689 -
          (C6074 * C3974 + C5843 * C4232 + C6073 * C2673 + C5842 * C3003 +
           C6072 * C693 + C5841 * C979) *
              C623 +
          (C6072 * C629 + C5841 * C932 + C6073 * C3923 + C5842 * C4187 +
           C6074 * C3925 + C5843 * C4189) *
              C690 +
          (C6072 * C694 + C5841 * C980 + C6073 * C3973 + C5842 * C4231 +
           C6074 * C3975 + C5843 * C4233) *
              C624) *
         C19577 * C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C622 -
          (((C436 * C741 + C19656 * C1023) * C19620 +
            (C436 * C626 + C19656 * C929) * C200) *
               C79 +
           ((C436 * C742 + C19656 * C1024) * C19620 +
            (C436 * C627 + C19656 * C930) * C200) *
               C78 +
           ((C436 * C743 + C19656 * C1025) * C19620 +
            (C436 * C628 + C19656 * C931) * C200) *
               C77) *
              C19645 * C623 +
          (((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C200 +
            (C436 * C745 + C19656 * C1027) * C19620) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C79) *
              C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C19609 * C80 -
          ((C582 + C576) * C79 + (C581 + C571) * C78 + (C580 + C568) * C77) *
              C19645 * C19609 * C81 +
          (C583 * C77 + (C576 + C582) * C78 +
           ((C436 * C97 + C19656 * C441) * C200 +
            (C436 * C205 + C19656 * C566) * C19620) *
               C79) *
              C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C200 +
            (C436 * C743 + C19656 * C1025) * C19620) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C19577 * C3100) *
              C19609 * C80 -
          (((C436 * C745 + C19656 * C1027) * C19620 +
            (C436 * C630 + C19656 * C933) * C200) *
               C19577 * C3100 +
           (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
              C19609 * C81 +
          (C583 * C19577 * C3098 + (C2012 + C2018) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C19577 * C3100) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
              C622 -
          ((C3883 + C3877) * C19577 * C3100 + (C3882 + C3872) * C19577 * C3099 +
           (C3881 + C3869) * C19577 * C3098) *
              C623 +
          (C3885 * C3098 + (C3877 + C3883) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C200 +
            (C436 * C3570 + C19656 * C3867) * C19620) *
               C19577 * C3100) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C200 +
           (C6072 * C201 + C5841 * C562 + C6073 * C1187 + C5842 * C1467 +
            C6074 * C1188 + C5843 * C1468) *
               C19620) *
              C19577 * C19645 * C19609 * C80 -
          ((C6074 * C1189 + C5843 * C1470 + C6073 * C1186 + C5842 * C1469 +
            C6072 * C202 + C5841 * C563) *
               C19620 +
           (C6074 * C1074 + C5843 * C1377 + C6073 * C1071 + C5842 * C1374 +
            C6072 * C94 + C5841 * C438) *
               C200) *
              C19577 * C19645 * C19609 * C81 +
          ((C6072 * C95 + C5841 * C439 + C6073 * C1070 + C5842 * C1373 +
            C6074 * C1075 + C5843 * C1378) *
               C200 +
           (C6072 * C203 + C5841 * C564 + C6073 * C1185 + C5842 * C1471 +
            C6074 * C1190 + C5843 * C1472) *
               C19620) *
              C19577 * C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C6072 * C93 + C5841 * C437 + C6073 * C1072 + C5842 * C1375 +
            C6074 * C1073 + C5843 * C1376) *
               C200 +
           (C6072 * C201 + C5841 * C562 + C6073 * C1187 + C5842 * C1467 +
            C6074 * C1188 + C5843 * C1468) *
               C19620) *
              C19577 * C19645 * C622 -
          ((C6074 * C4017 + C5843 * C4272 + C6073 * C2729 + C5842 * C3056 +
            C6072 * C743 + C5841 * C1025) *
               C19620 +
           (C6074 * C3924 + C5843 * C4188 + C6073 * C2611 + C5842 * C2947 +
            C6072 * C628 + C5841 * C931) *
               C200) *
              C19577 * C19645 * C623 +
          ((C6072 * C629 + C5841 * C932 + C6073 * C3923 + C5842 * C4187 +
            C6074 * C3925 + C5843 * C4189) *
               C200 +
           (C6072 * C744 + C5841 * C1026 + C6073 * C4018 + C5842 * C4273 +
            C6074 * C4019 + C5843 * C4274) *
               C19620) *
              C19577 * C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1527 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C1523 -
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1528 -
            (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) *
                C1524) *
               C19645 * C11903 +
           ((C12876 + C12877) * C1527 + (C12878 + C12879) * C1523 -
            (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                C1528 -
            (C8538 * C1076 + C8534 * C1088 + C8537 * C1077 + C8533 * C1089) *
                C1524) *
               C19645 * C11904) *
              C19620 * C1525 +
          (((C10021 + C10020) * C1528 -
            ((C9063 + C9062) * C1523 + (C9061 + C9060) * C1527) +
            (C10023 + C10022) * C1524) *
               C19645 * C11903 +
           ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                C1528 -
            ((C11308 + C11309) * C1523 + (C11310 + C11311) * C1527) +
            (C8537 * C2618 + C8533 * C2621 + C8538 * C2619 + C8534 * C2622) *
                C1524) *
               C19645 * C11904) *
              C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eexy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1583 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C1525 -
            (C9061 + C9060) * C1584 - (C9126 + C9127) * C1526) *
               C19645 * C11903 +
           ((C12876 + C12877) * C1583 + (C12942 + C12943) * C1525 -
            (C11310 + C11311) * C1584 - (C11383 + C11382) * C1526) *
               C19645 * C11904) *
              C1523 +
          (((C10021 + C10020) * C1584 -
            ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                 C1525 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1583) +
            (C10094 + C10095) * C1526) *
               C19645 * C11903 +
           ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                C1584 -
            ((C8538 * C1132 + C8534 * C1138 + C8537 * C1133 + C8533 * C1139) *
                 C1525 +
             (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                 C1583) +
            (C8537 * C2674 + C8533 * C2677 + C8538 * C2675 + C8534 * C2678) *
                C1526) *
               C19645 * C11904) *
              C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
             (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                 C19620) *
                C19645 * C11903 +
            ((C12876 + C12877) * C200 + (C13005 + C13004) * C19620) * C19645 *
                C11904) *
               C1525 -
           (((C11454 + C11455) * C19620 + (C11310 + C11311) * C200) * C19645 *
                C11904 +
            ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C19645 *
                C11903) *
               C1526) *
              C1523 +
          ((((C10021 + C10020) * C200 + (C10166 + C10167) * C19620) * C19645 *
                C11903 +
            ((C8537 * C2612 + C8533 * C2615 + C8538 * C2613 + C8534 * C2616) *
                 C200 +
             (C8537 * C2730 + C8533 * C2733 + C8538 * C2731 + C8534 * C2734) *
                 C19620) *
                C19645 * C11904) *
               C1526 -
           (((C8538 * C1185 + C8534 * C1191 + C8537 * C1186 + C8533 * C1192) *
                 C19620 +
             (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                 C200) *
                C19645 * C11904 +
            ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                 C19620 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
                C19645 * C11903) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C1527 +
             (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
             C274 * C1524) *
                C11903 +
            (C7682 + C7683 - C7684 - C7685) * C11904) *
               C8533 +
           ((C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
                C11903 +
            (C2242 * C1527 + C2243 * C1523 - C2244 * C1528 - C2245 * C1524) *
                C11904) *
               C8534) *
              C19620 * C1525 +
          (((C1700 * C1528 -
             ((C249 * C634 + C19645 * C799) * C1523 +
              (C249 * C628 + C19645 * C793) * C1527) +
             C1701 * C1524) *
                C11903 +
            (C13580 * C1528 - (C8201 * C1523 + C8200 * C1527) +
             C13581 * C1524) *
                C11904) *
               C8533 +
           ((C1702 * C1528 - (C1701 * C1523 + C1700 * C1527) + C1703 * C1524) *
                C11903 +
            ((C249 * C2613 + C19645 * C2787) * C1528 -
             (C13581 * C1523 + C13580 * C1527) +
             (C249 * C2619 + C19645 * C2790) * C1524) *
                C11904) *
               C8534) *
              C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C249 * C93 + C19645 * C250) * C1583 +
                       (C249 * C152 + C19645 * C316) * C1525 -
                       (C249 * C628 + C19645 * C793) * C1584 -
                       (C249 * C693 + C19645 * C841) * C1526) *
                          C11903 +
                      (C8259 + C8260 - C8261 - C8271) * C11904) *
                         C8533 +
                     ((C1755 + C1756 - C1757 - C1767) * C11903 +
                      (C13648 + C13649 - C13650 - C13654) * C11904) *
                         C8534) *
                        C1523 +
                    (((C1757 - (C1756 + C1755) + C1767) * C11903 +
                      (C13650 - (C13649 + C13648) + C13654) * C11904) *
                         C8533 +
                     ((C1762 - (C1761 + C1760) + C1768) * C11903 +
                      ((C249 * C2613 + C19645 * C2787) * C1584 -
                       (C2304 * C1525 + C2244 * C1583) +
                       (C249 * C2675 + C19645 * C2843) * C1526) *
                          C11904) *
                         C8534) *
                        C1524) *
                   C19620) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C249 * C93 + C19645 * C250) * C200 +
              (C249 * C201 + C19645 * C376) * C19620) *
                 C11903 +
             (C6730 * C200 + C6845 * C19620) * C11904) *
                C8533 +
            ((C382 + C394) * C11903 + (C12156 + C12157) * C11904) * C8534) *
               C1525 -
           (((C13725 + C13723) * C11904 + (C1829 + C1825) * C11903) * C8534 +
            ((C8328 * C19620 + C8200 * C200) * C11904 +
             ((C249 * C743 + C19645 * C887) * C19620 +
              (C249 * C628 + C19645 * C793) * C200) *
                 C11903) *
                C8533) *
               C1526) *
              C1523 +
          ((((C1825 + C1829) * C11903 + (C13723 + C13725) * C11904) * C8533 +
            ((C1822 + C1828) * C11903 +
             ((C249 * C2613 + C19645 * C2787) * C200 +
              (C249 * C2731 + C19645 * C2896) * C19620) *
                 C11904) *
                C8534) *
               C1526 -
           (((C12158 + C12159) * C11904 + (C395 + C385) * C11903) * C8534 +
            ((C12157 + C12156) * C11904 + (C394 + C382) * C11903) * C8533) *
               C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1527 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C1523 -
            (C12228 + C12229) * C1528 - (C12230 + C12231) * C1524) *
               C8533 +
           ((C12229 + C12228) * C1527 + (C12231 + C12230) * C1523 -
            (C12233 + C12232) * C1528 - (C12235 + C12234) * C1524) *
               C8534) *
              C19645 * C19620 * C1525 +
          (((C13800 + C13801) * C1528 -
            ((C12210 * C2617 + C11904 * C2950 + C12209 * C634 + C11903 * C937) *
                 C1523 +
             (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                 C1527) +
            (C13802 + C13803) * C1524) *
               C8533 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C1528 -
            ((C13803 + C13802) * C1523 + (C13801 + C13800) * C1527) +
            (C12209 * C632 + C11903 * C935 + C12210 * C2619 + C11904 * C2952) *
                C1524) *
               C8534) *
              C19645 * C19620 * C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1583 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C1525 -
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C1584 -
            (C12210 * C2673 + C11904 * C3003 + C12209 * C693 + C11903 * C979) *
                C1526) *
               C8533 +
           ((C12229 + C12228) * C1583 + (C12294 + C12295) * C1525 -
            (C13801 + C13800) * C1584 - (C13874 + C13875) * C1526) *
               C8534) *
              C19645 * C1523 +
          (((C13800 + C13801) * C1584 -
            ((C12295 + C12294) * C1525 + (C12228 + C12229) * C1583) +
            (C13875 + C13874) * C1526) *
               C8533 +
           ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                C1584 -
            ((C12296 + C12297) * C1525 + (C12233 + C12232) * C1583) +
            (C12209 * C691 + C11903 * C983 + C12210 * C2675 + C11904 * C3005) *
                C1526) *
               C8534) *
              C19645 * C1524) *
         C19620) /
        (p * q * std::sqrt(p + q));
    d2eezz[15] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C200 +
             (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                 C19620) *
                C8533 +
            ((C12229 + C12228) * C200 + (C12356 + C12357) * C19620) * C8534) *
               C19645 * C1525 -
           (((C13946 + C13947) * C19620 + (C13801 + C13800) * C200) * C8534 +
            ((C12210 * C2729 + C11904 * C3056 + C12209 * C743 +
              C11903 * C1025) *
                 C19620 +
             (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                 C200) *
                C8533) *
               C19645 * C1526) *
              C1523 +
          ((((C13800 + C13801) * C200 + (C13947 + C13946) * C19620) * C8533 +
            ((C12209 * C626 + C11903 * C929 + C12210 * C2613 + C11904 * C2949) *
                 C200 +
             (C12209 * C741 + C11903 * C1023 + C12210 * C2731 +
              C11904 * C3058) *
                 C19620) *
                C8534) *
               C19645 * C1526 -
           (((C12358 + C12359) * C19620 + (C12233 + C12232) * C200) * C8534 +
            ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C8533) *
               C19645 * C1525) *
              C1524)) /
        (p * q * std::sqrt(p + q));
    d2eexx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
             (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                 C19588) *
                C19645 * C11903 +
            ((C12876 + C12877) * C625 + (C12878 + C12879) * C19588) * C19645 *
                C11904) *
               C2069 -
           (((C12880 + C12881) * C19588 + (C12882 + C12883) * C625) * C19645 *
                C11904 +
            ((C12879 + C12878) * C19588 + (C12877 + C12876) * C625) * C19645 *
                C11903) *
               C2070) *
              C1525 +
          ((((C11311 + C11310) * C625 + (C11309 + C11308) * C19588) * C19645 *
                C11903 +
            ((C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
                 C625 +
             (C8537 * C3929 + C8533 * C3933 + C8538 * C7021 + C8534 * C7022) *
                 C19588) *
                C19645 * C11904) *
               C2070 -
           (((C11308 + C11309) * C19588 + (C11310 + C11311) * C625) * C19645 *
                C11904 +
            ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C19645 *
                C11903) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eexy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1583 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C1525 -
            (C9061 + C9060) * C1584 - (C9126 + C9127) * C1526) *
               C19645 * C11903 +
           ((C12876 + C12877) * C1583 + (C12942 + C12943) * C1525 -
            (C11310 + C11311) * C1584 - (C11383 + C11382) * C1526) *
               C19645 * C11904) *
              C19588 * C2069 +
          (((C11311 + C11310) * C1584 -
            ((C12943 + C12942) * C1525 + (C12877 + C12876) * C1583) +
            (C11382 + C11383) * C1526) *
               C19645 * C11903 +
           ((C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
                C1584 -
            ((C12944 + C12945) * C1525 + (C12882 + C12883) * C1583) +
            (C8537 * C3974 + C8533 * C3977 + C8538 * C7073 + C8534 * C7074) *
                C1526) *
               C19645 * C11904) *
              C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C2177 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C2069 -
            (C12877 + C12876) * C2178 - (C13004 + C13005) * C2070) *
               C19645 * C11903 +
           ((C12876 + C12877) * C2177 + (C13005 + C13004) * C2069 -
            (C12882 + C12883) * C2178 - (C13007 + C13006) * C2070) *
               C19645 * C11904) *
              C1525 +
          (((C11311 + C11310) * C2178 -
            ((C9189 + C9188) * C2069 + (C9061 + C9060) * C2177) +
            (C11455 + C11454) * C2070) *
               C19645 * C11903 +
           ((C8537 * C3924 + C8533 * C3928 + C8538 * C7019 + C8534 * C7020) *
                C2178 -
            ((C11454 + C11455) * C2069 + (C11310 + C11311) * C2177) +
            (C8537 * C4017 + C8533 * C4020 + C8538 * C7125 + C8534 * C7126) *
                C2070) *
               C19645 * C11904) *
              C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C249 * C93 + C19645 * C250) * C625 +
              (C249 * C101 + C19645 * C255) * C19588) *
                 C11903 +
             (C6736 + C6737) * C11904) *
                C8533 +
            ((C273 * C625 + C274 * C19588) * C11903 +
             (C13058 + C13059) * C11904) *
                C8534) *
               C2069 -
           (((C13060 + C13061) * C11904 + (C13059 + C13058) * C11903) * C8534 +
            ((C6739 + C6738) * C11904 + (C6737 + C6736) * C11903) * C8533) *
               C2070) *
              C1525 +
          ((((C8204 + C8205) * C11903 + (C8206 + C8207) * C11904) * C8533 +
            ((C14864 + C14865) * C11903 +
             ((C249 * C7019 + C19645 * C7177) * C625 +
              (C249 * C7021 + C19645 * C7178) * C19588) *
                 C11904) *
                C8534) *
               C2070 -
           (((C14865 + C14864) * C11904 +
             (C1701 * C19588 + C1700 * C625) * C11903) *
                C8534 +
            ((C8205 + C8204) * C11904 +
             ((C249 * C634 + C19645 * C799) * C19588 +
              (C249 * C628 + C19645 * C793) * C625) *
                 C11903) *
                C8533) *
               C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                   (((((C249 * C93 + C19645 * C250) * C1583 +
                       (C249 * C152 + C19645 * C316) * C1525 -
                       (C249 * C628 + C19645 * C793) * C1584 -
                       (C249 * C693 + C19645 * C841) * C1526) *
                          C11903 +
                      (C8259 + C8260 - C8261 - C8271) * C11904) *
                         C8533 +
                     ((C1755 + C1756 - C1757 - C1767) * C11903 +
                      (C13648 + C13649 - C13650 - C13654) * C11904) *
                         C8534) *
                        C19588 * C2069 +
                    (((C8261 - (C8260 + C8259) + C8271) * C11903 +
                      (C8266 - (C8265 + C8264) + C8272) * C11904) *
                         C8533 +
                     ((C13650 - (C13649 + C13648) + C13654) * C11903 +
                      ((C249 * C7019 + C19645 * C7177) * C1584 -
                       (C7750 * C1525 + C7692 * C1583) +
                       (C249 * C7073 + C19645 * C7229) * C1526) *
                          C11904) *
                         C8534) *
                        C19588 * C2070)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C2177 +
             (C249 * C201 + C19645 * C376) * C2069 - C6730 * C2178 -
             C6845 * C2070) *
                C11903 +
            (C6730 * C2177 + C6845 * C2069 - C6732 * C2178 - C6846 * C2070) *
                C11904) *
               C8533 +
           ((C2358 + C2359 - C2360 - C2370) * C11903 +
            (C14374 + C14375 - C14376 - C14377) * C11904) *
               C8534) *
              C1525 +
          (((C8200 * C2178 -
             ((C249 * C743 + C19645 * C887) * C2069 +
              (C249 * C628 + C19645 * C793) * C2177) +
             C8328 * C2070) *
                C11903 +
            (C8202 * C2178 - (C8328 * C2069 + C8200 * C2177) + C8329 * C2070) *
                C11904) *
               C8533 +
           ((C13580 * C2178 - (C1827 * C2069 + C1700 * C2177) +
             C13724 * C2070) *
                C11903 +
            ((C249 * C7019 + C19645 * C7177) * C2178 -
             (C13724 * C2069 + C13580 * C2177) +
             (C249 * C7125 + C19645 * C7280) * C2070) *
                C11904) *
               C8534) *
              C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C625 +
             (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                 C19588) *
                C8533 +
            ((C12229 + C12228) * C625 + (C12231 + C12230) * C19588) * C8534) *
               C19645 * C2069 -
           (((C14455 + C14454) * C19588 + (C14453 + C14452) * C625) * C8534 +
            ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
              C11903 * C1381) *
                 C19588 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C625) *
                C8533) *
               C19645 * C2070) *
              C1525 +
          ((((C12209 * C2611 + C11903 * C2947 + C12210 * C3924 +
              C11904 * C4188) *
                 C625 +
             (C12209 * C2617 + C11903 * C2950 + C12210 * C3929 +
              C11904 * C4191) *
                 C19588) *
                C8533 +
            ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
              C11904 * C7331) *
                 C625 +
             (C12209 * C2618 + C11903 * C2951 + C12210 * C7021 +
              C11904 * C7332) *
                 C19588) *
                C8534) *
               C19645 * C2070 -
           (((C13803 + C13802) * C19588 + (C13801 + C13800) * C625) * C8534 +
            ((C12210 * C2617 + C11904 * C2950 + C12209 * C634 + C11903 * C937) *
                 C19588 +
             (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                 C625) *
                C8533) *
               C19645 * C2069) *
              C1526)) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1583 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C1525 -
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C1584 -
            (C12210 * C2673 + C11904 * C3003 + C12209 * C693 + C11903 * C979) *
                C1526) *
               C8533 +
           ((C12229 + C12228) * C1583 + (C12294 + C12295) * C1525 -
            (C13801 + C13800) * C1584 - (C13874 + C13875) * C1526) *
               C8534) *
              C19645 * C19588 * C2069 +
          (((C12209 * C2611 + C11903 * C2947 + C12210 * C3924 +
             C11904 * C4188) *
                C1584 -
            ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
              C11903 * C1425) *
                 C1525 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C1583) +
            (C12209 * C2673 + C11903 * C3003 + C12210 * C3974 +
             C11904 * C4232) *
                C1526) *
               C8533 +
           ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
             C11904 * C7331) *
                C1584 -
            ((C14527 + C14526) * C1525 + (C14453 + C14452) * C1583) +
            (C12209 * C2674 + C11903 * C3004 + C12210 * C7073 +
             C11904 * C7383) *
                C1526) *
               C8534) *
              C19645 * C19588 * C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C2177 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C2069 -
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C2178 -
            (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 +
             C11903 * C1467) *
                C2070) *
               C8533 +
           ((C12229 + C12228) * C2177 + (C12356 + C12357) * C2069 -
            (C14453 + C14452) * C2178 - (C14598 + C14599) * C2070) *
               C8534) *
              C19645 * C1525 +
          (((C12209 * C2611 + C11903 * C2947 + C12210 * C3924 +
             C11904 * C4188) *
                C2178 -
            ((C12210 * C2729 + C11904 * C3056 + C12209 * C743 +
              C11903 * C1025) *
                 C2069 +
             (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                 C2177) +
            (C12209 * C2729 + C11903 * C3056 + C12210 * C4017 +
             C11904 * C4272) *
                C2070) *
               C8533 +
           ((C12209 * C2612 + C11903 * C2948 + C12210 * C7019 +
             C11904 * C7331) *
                C2178 -
            ((C13946 + C13947) * C2069 + (C13801 + C13800) * C2177) +
            (C12209 * C2730 + C11903 * C3057 + C12210 * C7125 +
             C11904 * C7434) *
                C2070) *
               C8534) *
              C19645 * C1526) *
         C19588) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C625 +
            (C8537 * C1078 + C8533 * C1090 + C8538 * C1077 + C8534 * C1089) *
                C19588) *
               C19645 * C11904) *
              C19620 * C622 -
          (((C11308 + C11309) * C19588 + (C11310 + C11311) * C625) * C19645 *
               C11904 +
           ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C19645 *
               C11903) *
              C19620 * C623 +
          (((C9067 + C9066) * C625 + (C9065 + C9064) * C19588) * C19645 *
               C11903 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C625 +
            (C8537 * C3926 + C8533 * C3932 + C8538 * C4851 + C8534 * C4852) *
                C19588) *
               C19645 * C11904) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C90 +
           (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) * C80 -
           (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C91 -
           (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) * C81 +
           (C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C92 +
           (C8537 * C103 + C8533 * C110 + C8538 * C105 + C8534 * C111) * C82) *
              C19645 * C11903 +
          ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
               C90 +
           (C8537 * C1078 + C8533 * C1090 + C8538 * C1077 + C8534 * C1089) *
               C80 -
           (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
               C91 -
           (C8538 * C1076 + C8534 * C1088 + C8537 * C1077 + C8533 * C1089) *
               C81 +
           (C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
               C92 +
           (C8537 * C1076 + C8533 * C1088 + C8538 * C2073 + C8534 * C2074) *
               C82) *
              C19645 * C11904) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C19645 * C11903 +
           ((C12876 + C12877) * C625 + (C12878 + C12879) * C19588) * C19645 *
               C11904) *
              C1067 -
          (((C12880 + C12881) * C19588 + (C12882 + C12883) * C625) * C19645 *
               C11904 +
           ((C12879 + C12878) * C19588 + (C12877 + C12876) * C625) * C19645 *
               C11903) *
              C1068 +
          (((C12883 + C12882) * C625 + (C12881 + C12880) * C19588) * C19645 *
               C11903 +
           ((C8537 * C6531 + C8533 * C6534 + C8538 * C7485 + C8534 * C7486) *
                C625 +
            (C8537 * C6533 + C8533 * C6537 + C8538 * C7487 + C8534 * C7488) *
                C19588) *
               C19645 * C11904) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eexy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C688 +
           (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) * C622 -
           (C9061 + C9060) * C689 - (C9126 + C9127) * C623 +
           (C9067 + C9066) * C690 + (C9128 + C9129) * C624) *
              C19645 * C11903 +
          ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
               C688 +
           (C8537 * C1134 + C8533 * C1140 + C8538 * C1133 + C8534 * C1139) *
               C622 -
           (C11310 + C11311) * C689 - (C11383 + C11382) * C623 +
           (C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
               C690 +
           (C8537 * C3973 + C8533 * C3976 + C8538 * C4903 + C8534 * C4904) *
               C624) *
              C19645 * C11904) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C151 +
            (C8537 * C1134 + C8533 * C1140 + C8538 * C1133 + C8534 * C1139) *
                C19609) *
               C19645 * C11904) *
              C80 -
          (((C8538 * C1132 + C8534 * C1138 + C8537 * C1133 + C8533 * C1139) *
                C19609 +
            (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                C151) *
               C19645 * C11904 +
           ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                C19609 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
               C19645 * C11903) *
              C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C151 +
            (C8537 * C154 + C8533 * C159 + C8538 * C155 + C8534 * C160) *
                C19609) *
               C19645 * C11903 +
           ((C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
                C151 +
            (C8537 * C1132 + C8533 * C1138 + C8538 * C2125 + C8534 * C2126) *
                C19609) *
               C19645 * C11904) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C19645 * C11903 +
           ((C12876 + C12877) * C151 + (C12942 + C12943) * C19609) * C19645 *
               C11904) *
              C19588 * C1067 -
          (((C12944 + C12945) * C19609 + (C12882 + C12883) * C151) * C19645 *
               C11904 +
           ((C12943 + C12942) * C19609 + (C12877 + C12876) * C151) * C19645 *
               C11903) *
              C19588 * C1068 +
          (((C12883 + C12882) * C151 + (C12945 + C12944) * C19609) * C19645 *
               C11903 +
           ((C8537 * C6531 + C8533 * C6534 + C8538 * C7485 + C8534 * C7486) *
                C151 +
            (C8537 * C6603 + C8533 * C6605 + C8538 * C7559 + C8534 * C7560) *
                C19609) *
               C19645 * C11904) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eexz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C200 +
            (C8537 * C1187 + C8533 * C1193 + C8538 * C1186 + C8534 * C1192) *
                C19620) *
               C19645 * C11904) *
              C622 -
          (((C11454 + C11455) * C19620 + (C11310 + C11311) * C200) * C19645 *
               C11904 +
           ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C19645 *
               C11903) *
              C623 +
          (((C9067 + C9066) * C200 + (C9191 + C9190) * C19620) * C19645 *
               C11903 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C200 +
            (C8537 * C4018 + C8533 * C4021 + C8538 * C4955 + C8534 * C4956) *
                C19620) *
               C19645 * C11904) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C200 +
            (C8537 * C1187 + C8533 * C1193 + C8538 * C1186 + C8534 * C1192) *
                C19620) *
               C19645 * C11904) *
              C19609 * C80 -
          (((C8538 * C1185 + C8534 * C1191 + C8537 * C1186 + C8533 * C1192) *
                C19620 +
            (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                C200) *
               C19645 * C11904 +
           ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                C19620 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
               C19645 * C11903) *
              C19609 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C200 +
            (C8537 * C203 + C8533 * C208 + C8538 * C204 + C8534 * C209) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
                C200 +
            (C8537 * C1185 + C8533 * C1191 + C8538 * C2179 + C8534 * C2180) *
                C19620) *
               C19645 * C11904) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1182 +
           (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) * C1067 -
           (C12877 + C12876) * C1183 - (C13004 + C13005) * C1068 +
           (C12883 + C12882) * C1184 + (C13006 + C13007) * C1069) *
              C19645 * C11903 +
          ((C12876 + C12877) * C1182 + (C13005 + C13004) * C1067 -
           (C12882 + C12883) * C1183 - (C13007 + C13006) * C1068 +
           (C8537 * C6531 + C8533 * C6534 + C8538 * C7485 + C8534 * C7486) *
               C1184 +
           (C8537 * C6662 + C8533 * C6664 + C8538 * C7621 + C8534 * C7622) *
               C1069) *
              C19645 * C11904) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C625 +
             (C249 * C101 + C19645 * C255) * C19588) *
                C11903 +
            (C6736 + C6737) * C11904) *
               C8533 +
           ((C273 * C625 + C274 * C19588) * C11903 +
            (C2242 * C625 + C2243 * C19588) * C11904) *
               C8534) *
              C19620 * C622 -
          ((((C249 * C2618 + C19645 * C2789) * C19588 +
             (C249 * C2612 + C19645 * C2786) * C625) *
                C11904 +
            (C1701 * C19588 + C1700 * C625) * C11903) *
               C8534 +
           ((C8205 + C8204) * C11904 + ((C249 * C634 + C19645 * C799) * C19588 +
                                        (C249 * C628 + C19645 * C793) * C625) *
                                           C11903) *
               C8533) *
              C19620 * C623 +
          ((((C249 * C629 + C19645 * C794) * C625 +
             (C249 * C641 + C19645 * C800) * C19588) *
                C11903 +
            ((C249 * C3923 + C19645 * C4061) * C625 +
             (C249 * C3926 + C19645 * C4064) * C19588) *
                C11904) *
               C8533 +
           (((C249 * C630 + C19645 * C795) * C625 +
             (C249 * C642 + C19645 * C801) * C19588) *
                C11903 +
            ((C249 * C4849 + C19645 * C5007) * C625 +
             (C249 * C4851 + C19645 * C5008) * C19588) *
                C11904) *
               C8534) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C90 +
            (C249 * C101 + C19645 * C255) * C80 - C273 * C91 - C274 * C81 +
            C275 * C92 + C276 * C82) *
               C11903 +
           (C6730 * C90 + C6731 * C80 - C2242 * C91 - C2243 * C81 +
            C2244 * C92 + C2245 * C82) *
               C11904) *
              C8533 +
          ((C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 + C277 * C92 +
            C278 * C82) *
               C11903 +
           (C2242 * C90 + C2243 * C80 - C2244 * C91 - C2245 * C81 +
            (C249 * C2071 + C19645 * C2231) * C92 +
            (C249 * C2073 + C19645 * C2232) * C82) *
               C11904) *
              C8534) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C625 +
             (C249 * C101 + C19645 * C255) * C19588) *
                C11903 +
            (C6736 + C6737) * C11904) *
               C8533 +
           ((C273 * C625 + C274 * C19588) * C11903 +
            (C13058 + C13059) * C11904) *
               C8534) *
              C1067 -
          (((C13060 + C13061) * C11904 + (C13059 + C13058) * C11903) * C8534 +
           ((C6739 + C6738) * C11904 + (C6737 + C6736) * C11903) * C8533) *
              C1068 +
          ((C6742 * C11903 + (C6741 + C6740) * C11904) * C8533 +
           ((C13061 + C13060) * C11903 +
            ((C249 * C7485 + C19645 * C7679) * C625 +
             (C249 * C7487 + C19645 * C7680) * C19588) *
                C11904) *
               C8534) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C688 +
            (C249 * C152 + C19645 * C316) * C622 -
            (C249 * C628 + C19645 * C793) * C689 -
            (C249 * C693 + C19645 * C841) * C623 +
            (C249 * C629 + C19645 * C794) * C690 +
            (C249 * C694 + C19645 * C842) * C624) *
               C11903 +
           (C6730 * C688 + C6792 * C622 - C8200 * C689 - C8269 * C623 +
            (C249 * C3923 + C19645 * C4061) * C690 +
            (C249 * C3973 + C19645 * C4105) * C624) *
               C11904) *
              C8533 +
          ((C273 * C688 + C331 * C622 - C1700 * C689 - C1765 * C623 +
            (C249 * C630 + C19645 * C795) * C690 +
            (C249 * C695 + C19645 * C844) * C624) *
               C11903 +
           (C2242 * C688 + C2303 * C622 -
            (C249 * C2612 + C19645 * C2786) * C689 -
            (C249 * C2674 + C19645 * C2842) * C623 +
            (C249 * C4849 + C19645 * C5007) * C690 +
            (C249 * C4903 + C19645 * C5059) * C624) *
               C11904) *
              C8534) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C11903 +
            (C6783 + C6795) * C11904) *
               C8533 +
           ((C322 + C334) * C11903 + (C2297 + C2305) * C11904) * C8534) *
              C80 -
          (((C2306 + C2300) * C11904 + (C335 + C325) * C11903) * C8534 +
           ((C2305 + C2297) * C11904 + (C334 + C322) * C11903) * C8533) *
              C81 +
          ((C337 * C11903 + (C2300 + C2306) * C11904) * C8533 +
           ((C330 + C336) * C11903 +
            ((C249 * C2071 + C19645 * C2231) * C151 +
             (C249 * C2125 + C19645 * C2295) * C19609) *
                C11904) *
               C8534) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C11903 +
            (C6783 + C6795) * C11904) *
               C8533 +
           ((C322 + C334) * C11903 + (C2297 + C2305) * C11904) * C8534) *
              C19588 * C1067 -
          (((C7751 + C7749) * C11904 + (C2305 + C2297) * C11903) * C8534 +
           ((C6796 + C6786) * C11904 + (C6795 + C6783) * C11903) * C8533) *
              C19588 * C1068 +
          ((C6798 * C11903 + (C6791 + C6797) * C11904) * C8533 +
           ((C7749 + C7751) * C11903 +
            ((C249 * C7485 + C19645 * C7679) * C151 +
             (C249 * C7559 + C19645 * C7745) * C19609) *
                C11904) *
               C8534) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C11903 +
            (C6730 * C200 + C6845 * C19620) * C11904) *
               C8533 +
           ((C382 + C394) * C11903 + (C12156 + C12157) * C11904) * C8534) *
              C622 -
          ((((C249 * C2730 + C19645 * C2895) * C19620 +
             (C249 * C2612 + C19645 * C2786) * C200) *
                C11904 +
            (C1829 + C1825) * C11903) *
               C8534 +
           ((C8328 * C19620 + C8200 * C200) * C11904 +
            ((C249 * C743 + C19645 * C887) * C19620 +
             (C249 * C628 + C19645 * C793) * C200) *
                C11903) *
               C8533) *
              C623 +
          ((((C249 * C629 + C19645 * C794) * C200 +
             (C249 * C744 + C19645 * C888) * C19620) *
                C11903 +
            ((C249 * C3923 + C19645 * C4061) * C200 +
             (C249 * C4018 + C19645 * C4146) * C19620) *
                C11904) *
               C8533 +
           (((C249 * C630 + C19645 * C795) * C200 +
             (C249 * C745 + C19645 * C889) * C19620) *
                C11903 +
            ((C249 * C4849 + C19645 * C5007) * C200 +
             (C249 * C4955 + C19645 * C5110) * C19620) *
                C11904) *
               C8534) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C11903 +
            (C6730 * C200 + C6845 * C19620) * C11904) *
               C8533 +
           ((C382 + C394) * C11903 + (C12156 + C12157) * C11904) * C8534) *
              C19609 * C80 -
          (((C12158 + C12159) * C11904 + (C395 + C385) * C11903) * C8534 +
           ((C12157 + C12156) * C11904 + (C394 + C382) * C11903) * C8533) *
              C19609 * C81 +
          ((C397 * C11903 + (C12159 + C12158) * C11904) * C8533 +
           ((C390 + C396) * C11903 +
            ((C249 * C2071 + C19645 * C2231) * C200 +
             (C249 * C2179 + C19645 * C2356) * C19620) *
                C11904) *
               C8534) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1182 +
            (C249 * C201 + C19645 * C376) * C1067 - C6730 * C1183 -
            C6845 * C1068 + C6732 * C1184 + C6846 * C1069) *
               C11903 +
           (C6730 * C1182 + C6845 * C1067 - C6732 * C1183 - C6846 * C1068 +
            C6735 * C1184 + C6847 * C1069) *
               C11904) *
              C8533 +
          ((C273 * C1182 + C391 * C1067 - C2242 * C1183 - C2368 * C1068 +
            C7692 * C1184 + C7805 * C1069) *
               C11903 +
           (C2242 * C1182 + C2368 * C1067 - C7692 * C1183 - C7805 * C1068 +
            (C249 * C7485 + C19645 * C7679) * C1184 +
            (C249 * C7621 + C19645 * C7801) * C1069) *
               C11904) *
              C8534) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C8533 +
           ((C12229 + C12228) * C625 + (C12231 + C12230) * C19588) * C8534) *
              C19645 * C19620 * C622 -
          (((C12210 * C2618 + C11904 * C2951 + C12209 * C633 + C11903 * C936) *
                C19588 +
            (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
                C625) *
               C8534 +
           ((C12210 * C2617 + C11904 * C2950 + C12209 * C634 + C11903 * C937) *
                C19588 +
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C625) *
               C8533) *
              C19645 * C19620 * C623 +
          (((C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
                C625 +
            (C12209 * C641 + C11903 * C938 + C12210 * C3926 + C11904 * C4190) *
                C19588) *
               C8533 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C625 +
            (C12209 * C642 + C11903 * C939 + C12210 * C4851 + C11904 * C5162) *
                C19588) *
               C8534) *
              C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C90 +
           (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
               C80 -
           (C12228 + C12229) * C91 - (C12230 + C12231) * C81 +
           (C12232 + C12233) * C92 + (C12234 + C12235) * C82) *
              C8533 +
          ((C12229 + C12228) * C90 + (C12231 + C12230) * C80 -
           (C12233 + C12232) * C91 - (C12235 + C12234) * C81 +
           (C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
               C92 +
           (C12209 * C105 + C11903 * C445 + C12210 * C2073 + C11904 * C2422) *
               C82) *
              C8534) *
         C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C8533 +
           ((C12229 + C12228) * C625 + (C12231 + C12230) * C19588) * C8534) *
              C19645 * C1067 -
          (((C12210 * C1086 + C11904 * C1383 + C12209 * C1077 +
             C11903 * C1380) *
                C19588 +
            (C12210 * C1074 + C11904 * C1377 + C12209 * C1071 +
             C11903 * C1374) *
                C625) *
               C8534 +
           ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
             C11903 * C1381) *
                C19588 +
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C625) *
               C8533) *
              C19645 * C1068 +
          (((C12209 * C1073 + C11903 * C1376 + C12210 * C6531 +
             C11904 * C6885) *
                C625 +
            (C12209 * C1085 + C11903 * C1382 + C12210 * C6533 +
             C11904 * C6887) *
                C19588) *
               C8533 +
           ((C12209 * C1074 + C11903 * C1377 + C12210 * C7485 +
             C11904 * C7855) *
                C625 +
            (C12209 * C1086 + C11903 * C1383 + C12210 * C7487 +
             C11904 * C7856) *
                C19588) *
               C8534) *
              C19645 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C688 +
           (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
               C622 -
           (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
               C689 -
           (C12210 * C2673 + C11904 * C3003 + C12209 * C693 + C11903 * C979) *
               C623 +
           (C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
               C690 +
           (C12209 * C694 + C11903 * C980 + C12210 * C3973 + C11904 * C4231) *
               C624) *
              C8533 +
          ((C12229 + C12228) * C688 + (C12294 + C12295) * C622 -
           (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
               C689 -
           (C12210 * C2674 + C11904 * C3004 + C12209 * C692 + C11903 * C981) *
               C623 +
           (C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
               C690 +
           (C12209 * C695 + C11903 * C982 + C12210 * C4903 + C11904 * C5213) *
               C624) *
              C8534) *
         C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C8533 +
           ((C12229 + C12228) * C151 + (C12294 + C12295) * C19609) * C8534) *
              C19645 * C80 -
          (((C12296 + C12297) * C19609 + (C12233 + C12232) * C151) * C8534 +
           ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C8533) *
              C19645 * C81 +
          (((C12232 + C12233) * C151 + (C12297 + C12296) * C19609) * C8533 +
           ((C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
                C151 +
            (C12209 * C155 + C11903 * C506 + C12210 * C2125 + C11904 * C2485) *
                C19609) *
               C8534) *
              C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C8533 +
           ((C12229 + C12228) * C151 + (C12294 + C12295) * C19609) * C8534) *
              C19645 * C19588 * C1067 -
          (((C12210 * C1136 + C11904 * C1427 + C12209 * C1133 +
             C11903 * C1424) *
                C19609 +
            (C12210 * C1074 + C11904 * C1377 + C12209 * C1071 +
             C11903 * C1374) *
                C151) *
               C8534 +
           ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
             C11903 * C1425) *
                C19609 +
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C151) *
               C8533) *
              C19645 * C19588 * C1068 +
          (((C12209 * C1073 + C11903 * C1376 + C12210 * C6531 +
             C11904 * C6885) *
                C151 +
            (C12209 * C1135 + C11903 * C1426 + C12210 * C6603 +
             C11904 * C6927) *
                C19609) *
               C8533 +
           ((C12209 * C1074 + C11903 * C1377 + C12210 * C7485 +
             C11904 * C7855) *
                C151 +
            (C12209 * C1136 + C11903 * C1427 + C12210 * C7559 +
             C11904 * C7907) *
                C19609) *
               C8534) *
              C19645 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eezz[17] +=
        (-std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C8533 +
           ((C12229 + C12228) * C200 + (C12356 + C12357) * C19620) * C8534) *
              C19645 * C622 -
          (((C12210 * C2730 + C11904 * C3057 + C12209 * C742 + C11903 * C1024) *
                C19620 +
            (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
                C200) *
               C8534 +
           ((C12210 * C2729 + C11904 * C3056 + C12209 * C743 + C11903 * C1025) *
                C19620 +
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C200) *
               C8533) *
              C19645 * C623 +
          (((C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
                C200 +
            (C12209 * C744 + C11903 * C1026 + C12210 * C4018 + C11904 * C4273) *
                C19620) *
               C8533 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C200 +
            (C12209 * C745 + C11903 * C1027 + C12210 * C4955 + C11904 * C5264) *
                C19620) *
               C8534) *
              C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C8533 +
           ((C12229 + C12228) * C200 + (C12356 + C12357) * C19620) * C8534) *
              C19645 * C19609 * C80 -
          (((C12358 + C12359) * C19620 + (C12233 + C12232) * C200) * C8534 +
           ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C8533) *
              C19645 * C19609 * C81 +
          (((C12232 + C12233) * C200 + (C12359 + C12358) * C19620) * C8533 +
           ((C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
                C200 +
            (C12209 * C204 + C11903 * C565 + C12210 * C2179 + C11904 * C2546) *
                C19620) *
               C8534) *
              C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C1182 +
           (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
               C1067 -
           (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 + C11903 * C1375) *
               C1183 -
           (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 + C11903 * C1467) *
               C1068 +
           (C12209 * C1073 + C11903 * C1376 + C12210 * C6531 + C11904 * C6885) *
               C1184 +
           (C12209 * C1188 + C11903 * C1468 + C12210 * C6662 + C11904 * C6967) *
               C1069) *
              C8533 +
          ((C12229 + C12228) * C1182 + (C12356 + C12357) * C1067 -
           (C12210 * C1074 + C11904 * C1377 + C12209 * C1071 + C11903 * C1374) *
               C1183 -
           (C12210 * C1189 + C11904 * C1470 + C12209 * C1186 + C11903 * C1469) *
               C1068 +
           (C12209 * C1074 + C11903 * C1377 + C12210 * C7485 + C11904 * C7855) *
               C1184 +
           (C12209 * C1189 + C11903 * C1470 + C12210 * C7621 + C11904 * C7958) *
               C1069) *
              C8534) *
         C19645 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C1527 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C1523 -
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C1528 -
            (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) *
                C1524) *
               C19645 * C11903 +
           ((C12876 + C12877) * C1527 + (C12878 + C12879) * C1523 -
            (C14022 + C14023) * C1528 - (C14024 + C14025) * C1524) *
               C19645 * C11904) *
              C2069 +
          (((C14023 + C14022) * C1528 -
            ((C12879 + C12878) * C1523 + (C12877 + C12876) * C1527) +
            (C14025 + C14024) * C1524) *
               C19645 * C11903 +
           ((C8537 * C1074 + C8533 * C1083 + C8538 * C1075 + C8534 * C1084) *
                C1528 -
            ((C12880 + C12881) * C1523 + (C12882 + C12883) * C1527) +
            (C8537 * C1086 + C8533 * C1092 + C8538 * C1087 + C8534 * C1093) *
                C1524) *
               C19645 * C11904) *
              C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
             (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                 C19609) *
                C19645 * C11903 +
            ((C12876 + C12877) * C151 + (C12942 + C12943) * C19609) * C19645 *
                C11904) *
               C1523 -
           (((C14096 + C14097) * C19609 + (C14022 + C14023) * C151) * C19645 *
                C11904 +
            ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                 C19609 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
                C19645 * C11903) *
               C1524) *
              C2069 +
          ((((C14023 + C14022) * C151 + (C14097 + C14096) * C19609) * C19645 *
                C11903 +
            ((C8537 * C1074 + C8533 * C1083 + C8538 * C1075 + C8534 * C1084) *
                 C151 +
             (C8537 * C1136 + C8533 * C1142 + C8538 * C1137 + C8534 * C1143) *
                 C19609) *
                C19645 * C11904) *
               C1524 -
           (((C12944 + C12945) * C19609 + (C12882 + C12883) * C151) * C19645 *
                C11904 +
            ((C12943 + C12942) * C19609 + (C12877 + C12876) * C151) * C19645 *
                C11903) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C2177 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C2069 -
            (C12877 + C12876) * C2178 - (C13004 + C13005) * C2070) *
               C19645 * C11903 +
           ((C12876 + C12877) * C2177 + (C13005 + C13004) * C2069 -
            (C12882 + C12883) * C2178 - (C13007 + C13006) * C2070) *
               C19645 * C11904) *
              C19609 * C1523 +
          (((C14023 + C14022) * C2178 -
            ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                 C2069 +
             (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C2177) +
            (C14168 + C14169) * C2070) *
               C19645 * C11903 +
           ((C8537 * C1074 + C8533 * C1083 + C8538 * C1075 + C8534 * C1084) *
                C2178 -
            ((C14169 + C14168) * C2069 + (C14022 + C14023) * C2177) +
            (C8537 * C1189 + C8533 * C1195 + C8538 * C1190 + C8534 * C1196) *
                C2070) *
               C19645 * C11904) *
              C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C1527 +
             (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
             C274 * C1524) *
                C11903 +
            (C7682 + C7683 - C7684 - C7685) * C11904) *
               C8533 +
           ((C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
                C11903 +
            (C14236 + C14237 - C14238 - C14239) * C11904) *
               C8534) *
              C2069 +
          (((C7684 - (C7683 + C7682) + C7685) * C11903 +
            (C7694 - (C7687 + C7686) + C7695) * C11904) *
               C8533 +
           ((C14238 - (C14237 + C14236) + C14239) * C11903 +
            ((C249 * C1075 + C19645 * C1240) * C1528 -
             (C7693 * C1523 + C7692 * C1527) +
             (C249 * C1087 + C19645 * C1246) * C1524) *
                C11904) *
               C8534) *
              C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((((C249 * C93 + C19645 * C250) * C151 +
              (C249 * C152 + C19645 * C316) * C19609) *
                 C11903 +
             (C6783 + C6795) * C11904) *
                C8533 +
            ((C322 + C334) * C11903 + C14306 * C11904) * C8534) *
               C1523 -
           (((C2306 + C2300) * C11904 + (C335 + C325) * C11903) * C8534 +
            (C14307 * C11904 + (C334 + C322) * C11903) * C8533) *
               C1524) *
              C2069 +
          (((C14306 * C11903 + (C7749 + C7751) * C11904) * C8533 +
            ((C2300 + C2306) * C11903 +
             ((C249 * C1075 + C19645 * C1240) * C151 +
              (C249 * C1137 + C19645 * C1290) * C19609) *
                 C11904) *
                C8534) *
               C1524 -
           (((C7751 + C7749) * C11904 + C14307 * C11903) * C8534 +
            ((C6796 + C6786) * C11904 + (C6795 + C6783) * C11903) * C8533) *
               C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C2177 +
             (C249 * C201 + C19645 * C376) * C2069 - C6730 * C2178 -
             C6845 * C2070) *
                C11903 +
            (C6730 * C2177 + C6845 * C2069 - C6732 * C2178 - C6846 * C2070) *
                C11904) *
               C8533 +
           ((C2358 + C2359 - C2360 - C2370) * C11903 +
            (C14374 + C14375 - C14376 - C14377) * C11904) *
               C8534) *
              C19609 * C1523 +
          (((C2360 - (C2359 + C2358) + C2370) * C11903 +
            (C14376 - (C14375 + C14374) + C14377) * C11904) *
               C8533 +
           ((C2365 - (C2364 + C2363) + C2371) * C11903 +
            ((C249 * C1075 + C19645 * C1240) * C2178 -
             (C2369 * C2069 + C2244 * C2177) +
             (C249 * C1190 + C19645 * C1334) * C2070) *
                C11904) *
               C8534) *
              C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C1527 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C1523 -
            (C12228 + C12229) * C1528 - (C12230 + C12231) * C1524) *
               C8533 +
           ((C12229 + C12228) * C1527 + (C12231 + C12230) * C1523 -
            (C12233 + C12232) * C1528 - (C12235 + C12234) * C1524) *
               C8534) *
              C19645 * C2069 +
          (((C14452 + C14453) * C1528 -
            ((C12210 * C1085 + C11904 * C1382 + C12209 * C1078 +
              C11903 * C1381) *
                 C1523 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C1527) +
            (C14454 + C14455) * C1524) *
               C8533 +
           ((C12209 * C1070 + C11903 * C1373 + C12210 * C1075 +
             C11904 * C1378) *
                C1528 -
            ((C14455 + C14454) * C1523 + (C14453 + C14452) * C1527) +
            (C12209 * C1076 + C11903 * C1379 + C12210 * C1087 +
             C11904 * C1384) *
                C1524) *
               C8534) *
              C19645 * C2070) *
         C19609) /
        (p * q * std::sqrt(p + q));
    d2eezy[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                 C151 +
             (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                 C19609) *
                C8533 +
            ((C12229 + C12228) * C151 + (C12294 + C12295) * C19609) * C8534) *
               C19645 * C1523 -
           (((C12296 + C12297) * C19609 + (C12233 + C12232) * C151) * C8534 +
            ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C8533) *
               C19645 * C1524) *
              C2069 +
          ((((C14452 + C14453) * C151 + (C14526 + C14527) * C19609) * C8533 +
            ((C12209 * C1070 + C11903 * C1373 + C12210 * C1075 +
              C11904 * C1378) *
                 C151 +
             (C12209 * C1132 + C11903 * C1423 + C12210 * C1137 +
              C11904 * C1428) *
                 C19609) *
                C8534) *
               C19645 * C1524 -
           (((C14527 + C14526) * C19609 + (C14453 + C14452) * C151) * C8534 +
            ((C12210 * C1135 + C11904 * C1426 + C12209 * C1134 +
              C11903 * C1425) *
                 C19609 +
             (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
              C11903 * C1375) *
                 C151) *
                C8533) *
               C19645 * C1523) *
              C2070)) /
        (p * q * std::sqrt(p + q));
    d2eezz[18] +=
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C2177 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C2069 -
            (C12210 * C1073 + C11904 * C1376 + C12209 * C1072 +
             C11903 * C1375) *
                C2178 -
            (C12210 * C1188 + C11904 * C1468 + C12209 * C1187 +
             C11903 * C1467) *
                C2070) *
               C8533 +
           ((C12229 + C12228) * C2177 + (C12356 + C12357) * C2069 -
            (C14453 + C14452) * C2178 - (C14598 + C14599) * C2070) *
               C8534) *
              C19645 * C19609 * C1523 +
          (((C14452 + C14453) * C2178 -
            ((C12357 + C12356) * C2069 + (C12228 + C12229) * C2177) +
            (C14599 + C14598) * C2070) *
               C8533 +
           ((C12209 * C1070 + C11903 * C1373 + C12210 * C1075 +
             C11904 * C1378) *
                C2178 -
            ((C12358 + C12359) * C2069 + (C12233 + C12232) * C2177) +
            (C12209 * C1185 + C11903 * C1471 + C12210 * C1190 +
             C11904 * C1472) *
                C2070) *
               C8534) *
              C19645 * C19609 * C1524)) /
        (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C90 +
           (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) * C80 -
           (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C91 -
           (C8538 * C103 + C8534 * C110 + C8537 * C102 + C8533 * C109) * C81 +
           (C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C92 +
           (C8537 * C103 + C8533 * C110 + C8538 * C105 + C8534 * C111) * C82) *
              C19645 * C11903 +
          ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
               C90 +
           (C8537 * C1078 + C8533 * C1090 + C8538 * C1077 + C8534 * C1089) *
               C80 -
           (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
               C91 -
           (C8538 * C1076 + C8534 * C1088 + C8537 * C1077 + C8533 * C1089) *
               C81 +
           (C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
               C92 +
           (C8537 * C1076 + C8533 * C1088 + C8538 * C2073 + C8534 * C2074) *
               C82) *
              C19645 * C11904) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C625 +
            (C8537 * C101 + C8533 * C108 + C8538 * C102 + C8534 * C109) *
                C19588) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C625 +
            (C8537 * C1078 + C8533 * C1090 + C8538 * C1077 + C8534 * C1089) *
                C19588) *
               C19645 * C11904) *
              C19620 * C622 -
          (((C11308 + C11309) * C19588 + (C11310 + C11311) * C625) * C19645 *
               C11904 +
           ((C9063 + C9062) * C19588 + (C9061 + C9060) * C625) * C19645 *
               C11903) *
              C19620 * C623 +
          (((C9067 + C9066) * C625 + (C9065 + C9064) * C19588) * C19645 *
               C11903 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C625 +
            (C8537 * C3926 + C8533 * C3932 + C8538 * C4851 + C8534 * C4852) *
                C19588) *
               C19645 * C11904) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eexy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C151 +
            (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) *
                C19609) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C151 +
            (C8537 * C1134 + C8533 * C1140 + C8538 * C1133 + C8534 * C1139) *
                C19609) *
               C19645 * C11904) *
              C80 -
          (((C8538 * C1132 + C8534 * C1138 + C8537 * C1133 + C8533 * C1139) *
                C19609 +
            (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                C151) *
               C19645 * C11904 +
           ((C8538 * C154 + C8534 * C159 + C8537 * C153 + C8533 * C158) *
                C19609 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C151) *
               C19645 * C11903) *
              C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C151 +
            (C8537 * C154 + C8533 * C159 + C8538 * C155 + C8534 * C160) *
                C19609) *
               C19645 * C11903 +
           ((C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
                C151 +
            (C8537 * C1132 + C8533 * C1138 + C8538 * C2125 + C8534 * C2126) *
                C19609) *
               C19645 * C11904) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C688 +
           (C8537 * C152 + C8533 * C157 + C8538 * C153 + C8534 * C158) * C622 -
           (C9061 + C9060) * C689 - (C9126 + C9127) * C623 +
           (C9067 + C9066) * C690 + (C9128 + C9129) * C624) *
              C19645 * C11903 +
          ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
               C688 +
           (C8537 * C1134 + C8533 * C1140 + C8538 * C1133 + C8534 * C1139) *
               C622 -
           (C11310 + C11311) * C689 - (C11383 + C11382) * C623 +
           (C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
               C690 +
           (C8537 * C3973 + C8533 * C3976 + C8538 * C4903 + C8534 * C4904) *
               C624) *
              C19645 * C11904) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C200 +
            (C8537 * C1187 + C8533 * C1193 + C8538 * C1186 + C8534 * C1192) *
                C19620) *
               C19645 * C11904) *
              C19609 * C80 -
          (((C8538 * C1185 + C8534 * C1191 + C8537 * C1186 + C8533 * C1192) *
                C19620 +
            (C8538 * C1070 + C8534 * C1079 + C8537 * C1071 + C8533 * C1080) *
                C200) *
               C19645 * C11904 +
           ((C8538 * C203 + C8534 * C208 + C8537 * C202 + C8533 * C207) *
                C19620 +
            (C8538 * C95 + C8534 * C100 + C8537 * C94 + C8533 * C99) * C200) *
               C19645 * C11903) *
              C19609 * C81 +
          (((C8537 * C95 + C8533 * C100 + C8538 * C96 + C8534 * C104) * C200 +
            (C8537 * C203 + C8533 * C208 + C8538 * C204 + C8534 * C209) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1070 + C8533 * C1079 + C8538 * C2071 + C8534 * C2072) *
                C200 +
            (C8537 * C1185 + C8533 * C1191 + C8538 * C2179 + C8534 * C2180) *
                C19620) *
               C19645 * C11904) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C8537 * C93 + C8533 * C98 + C8538 * C94 + C8534 * C99) * C200 +
            (C8537 * C201 + C8533 * C206 + C8538 * C202 + C8534 * C207) *
                C19620) *
               C19645 * C11903 +
           ((C8537 * C1072 + C8533 * C1081 + C8538 * C1071 + C8534 * C1080) *
                C200 +
            (C8537 * C1187 + C8533 * C1193 + C8538 * C1186 + C8534 * C1192) *
                C19620) *
               C19645 * C11904) *
              C622 -
          (((C11454 + C11455) * C19620 + (C11310 + C11311) * C200) * C19645 *
               C11904 +
           ((C9189 + C9188) * C19620 + (C9061 + C9060) * C200) * C19645 *
               C11903) *
              C623 +
          (((C9067 + C9066) * C200 + (C9191 + C9190) * C19620) * C19645 *
               C11903 +
           ((C8537 * C3923 + C8533 * C3927 + C8538 * C4849 + C8534 * C4850) *
                C200 +
            (C8537 * C4018 + C8533 * C4021 + C8538 * C4955 + C8534 * C4956) *
                C19620) *
               C19645 * C11904) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C90 +
            (C249 * C101 + C19645 * C255) * C80 - C273 * C91 - C274 * C81 +
            C275 * C92 + C276 * C82) *
               C11903 +
           (C6730 * C90 + C6731 * C80 - C2242 * C91 - C2243 * C81 +
            C2244 * C92 + C2245 * C82) *
               C11904) *
              C8533 +
          ((C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 + C277 * C92 +
            C278 * C82) *
               C11903 +
           (C2242 * C90 + C2243 * C80 - C2244 * C91 - C2245 * C81 +
            (C249 * C2071 + C19645 * C2231) * C92 +
            (C249 * C2073 + C19645 * C2232) * C82) *
               C11904) *
              C8534) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C625 +
             (C249 * C101 + C19645 * C255) * C19588) *
                C11903 +
            (C6736 + C6737) * C11904) *
               C8533 +
           ((C273 * C625 + C274 * C19588) * C11903 +
            (C2242 * C625 + C2243 * C19588) * C11904) *
               C8534) *
              C19620 * C622 -
          ((((C249 * C2618 + C19645 * C2789) * C19588 +
             (C249 * C2612 + C19645 * C2786) * C625) *
                C11904 +
            (C1701 * C19588 + C1700 * C625) * C11903) *
               C8534 +
           ((C8205 + C8204) * C11904 + ((C249 * C634 + C19645 * C799) * C19588 +
                                        (C249 * C628 + C19645 * C793) * C625) *
                                           C11903) *
               C8533) *
              C19620 * C623 +
          ((((C249 * C629 + C19645 * C794) * C625 +
             (C249 * C641 + C19645 * C800) * C19588) *
                C11903 +
            ((C249 * C3923 + C19645 * C4061) * C625 +
             (C249 * C3926 + C19645 * C4064) * C19588) *
                C11904) *
               C8533 +
           (((C249 * C630 + C19645 * C795) * C625 +
             (C249 * C642 + C19645 * C801) * C19588) *
                C11903 +
            ((C249 * C4849 + C19645 * C5007) * C625 +
             (C249 * C4851 + C19645 * C5008) * C19588) *
                C11904) *
               C8534) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C11903 +
            (C6783 + C6795) * C11904) *
               C8533 +
           ((C322 + C334) * C11903 + (C2297 + C2305) * C11904) * C8534) *
              C80 -
          (((C2306 + C2300) * C11904 + (C335 + C325) * C11903) * C8534 +
           ((C2305 + C2297) * C11904 + (C334 + C322) * C11903) * C8533) *
              C81 +
          ((C337 * C11903 + (C2300 + C2306) * C11904) * C8533 +
           ((C330 + C336) * C11903 +
            ((C249 * C2071 + C19645 * C2231) * C151 +
             (C249 * C2125 + C19645 * C2295) * C19609) *
                C11904) *
               C8534) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C688 +
            (C249 * C152 + C19645 * C316) * C622 -
            (C249 * C628 + C19645 * C793) * C689 -
            (C249 * C693 + C19645 * C841) * C623 +
            (C249 * C629 + C19645 * C794) * C690 +
            (C249 * C694 + C19645 * C842) * C624) *
               C11903 +
           (C6730 * C688 + C6792 * C622 - C8200 * C689 - C8269 * C623 +
            (C249 * C3923 + C19645 * C4061) * C690 +
            (C249 * C3973 + C19645 * C4105) * C624) *
               C11904) *
              C8533 +
          ((C273 * C688 + C331 * C622 - C1700 * C689 - C1765 * C623 +
            (C249 * C630 + C19645 * C795) * C690 +
            (C249 * C695 + C19645 * C844) * C624) *
               C11903 +
           (C2242 * C688 + C2303 * C622 -
            (C249 * C2612 + C19645 * C2786) * C689 -
            (C249 * C2674 + C19645 * C2842) * C623 +
            (C249 * C4849 + C19645 * C5007) * C690 +
            (C249 * C4903 + C19645 * C5059) * C624) *
               C11904) *
              C8534) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C11903 +
            (C6730 * C200 + C6845 * C19620) * C11904) *
               C8533 +
           ((C382 + C394) * C11903 + (C12156 + C12157) * C11904) * C8534) *
              C19609 * C80 -
          (((C12158 + C12159) * C11904 + (C395 + C385) * C11903) * C8534 +
           ((C12157 + C12156) * C11904 + (C394 + C382) * C11903) * C8533) *
              C19609 * C81 +
          ((C397 * C11903 + (C12159 + C12158) * C11904) * C8533 +
           ((C390 + C396) * C11903 +
            ((C249 * C2071 + C19645 * C2231) * C200 +
             (C249 * C2179 + C19645 * C2356) * C19620) *
                C11904) *
               C8534) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C11903 +
            (C6730 * C200 + C6845 * C19620) * C11904) *
               C8533 +
           ((C382 + C394) * C11903 + (C12156 + C12157) * C11904) * C8534) *
              C622 -
          ((((C249 * C2730 + C19645 * C2895) * C19620 +
             (C249 * C2612 + C19645 * C2786) * C200) *
                C11904 +
            (C1829 + C1825) * C11903) *
               C8534 +
           ((C8328 * C19620 + C8200 * C200) * C11904 +
            ((C249 * C743 + C19645 * C887) * C19620 +
             (C249 * C628 + C19645 * C793) * C200) *
                C11903) *
               C8533) *
              C623 +
          ((((C249 * C629 + C19645 * C794) * C200 +
             (C249 * C744 + C19645 * C888) * C19620) *
                C11903 +
            ((C249 * C3923 + C19645 * C4061) * C200 +
             (C249 * C4018 + C19645 * C4146) * C19620) *
                C11904) *
               C8533 +
           (((C249 * C630 + C19645 * C795) * C200 +
             (C249 * C745 + C19645 * C889) * C19620) *
                C11903 +
            ((C249 * C4849 + C19645 * C5007) * C200 +
             (C249 * C4955 + C19645 * C5110) * C19620) *
                C11904) *
               C8534) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C90 +
           (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
               C80 -
           (C12228 + C12229) * C91 - (C12230 + C12231) * C81 +
           (C12232 + C12233) * C92 + (C12234 + C12235) * C82) *
              C8533 +
          ((C12229 + C12228) * C90 + (C12231 + C12230) * C80 -
           (C12233 + C12232) * C91 - (C12235 + C12234) * C81 +
           (C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
               C92 +
           (C12209 * C105 + C11903 * C445 + C12210 * C2073 + C11904 * C2422) *
               C82) *
              C8534) *
         C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C625 +
            (C12209 * C101 + C11903 * C442 + C12210 * C1078 + C11904 * C1381) *
                C19588) *
               C8533 +
           ((C12229 + C12228) * C625 + (C12231 + C12230) * C19588) * C8534) *
              C19645 * C19620 * C622 -
          (((C12210 * C2618 + C11904 * C2951 + C12209 * C633 + C11903 * C936) *
                C19588 +
            (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
                C625) *
               C8534 +
           ((C12210 * C2617 + C11904 * C2950 + C12209 * C634 + C11903 * C937) *
                C19588 +
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C625) *
               C8533) *
              C19645 * C19620 * C623 +
          (((C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
                C625 +
            (C12209 * C641 + C11903 * C938 + C12210 * C3926 + C11904 * C4190) *
                C19588) *
               C8533 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C625 +
            (C12209 * C642 + C11903 * C939 + C12210 * C4851 + C11904 * C5162) *
                C19588) *
               C8534) *
              C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eezy[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C151 +
            (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
                C19609) *
               C8533 +
           ((C12229 + C12228) * C151 + (C12294 + C12295) * C19609) * C8534) *
              C19645 * C80 -
          (((C12296 + C12297) * C19609 + (C12233 + C12232) * C151) * C8534 +
           ((C12295 + C12294) * C19609 + (C12228 + C12229) * C151) * C8533) *
              C19645 * C81 +
          (((C12232 + C12233) * C151 + (C12297 + C12296) * C19609) * C8533 +
           ((C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
                C151 +
            (C12209 * C155 + C11903 * C506 + C12210 * C2125 + C11904 * C2485) *
                C19609) *
               C8534) *
              C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
               C688 +
           (C12209 * C152 + C11903 * C503 + C12210 * C1134 + C11904 * C1425) *
               C622 -
           (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
               C689 -
           (C12210 * C2673 + C11904 * C3003 + C12209 * C693 + C11903 * C979) *
               C623 +
           (C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
               C690 +
           (C12209 * C694 + C11903 * C980 + C12210 * C3973 + C11904 * C4231) *
               C624) *
              C8533 +
          ((C12229 + C12228) * C688 + (C12294 + C12295) * C622 -
           (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
               C689 -
           (C12210 * C2674 + C11904 * C3004 + C12209 * C692 + C11903 * C981) *
               C623 +
           (C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
               C690 +
           (C12209 * C695 + C11903 * C982 + C12210 * C4903 + C11904 * C5213) *
               C624) *
              C8534) *
         C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[19] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C8533 +
           ((C12229 + C12228) * C200 + (C12356 + C12357) * C19620) * C8534) *
              C19645 * C19609 * C80 -
          (((C12358 + C12359) * C19620 + (C12233 + C12232) * C200) * C8534 +
           ((C12357 + C12356) * C19620 + (C12228 + C12229) * C200) * C8533) *
              C19645 * C19609 * C81 +
          (((C12232 + C12233) * C200 + (C12359 + C12358) * C19620) * C8533 +
           ((C12209 * C96 + C11903 * C440 + C12210 * C2071 + C11904 * C2421) *
                C200 +
            (C12209 * C204 + C11903 * C565 + C12210 * C2179 + C11904 * C2546) *
                C19620) *
               C8534) *
              C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C12209 * C93 + C11903 * C437 + C12210 * C1072 + C11904 * C1375) *
                C200 +
            (C12209 * C201 + C11903 * C562 + C12210 * C1187 + C11904 * C1467) *
                C19620) *
               C8533 +
           ((C12229 + C12228) * C200 + (C12356 + C12357) * C19620) * C8534) *
              C19645 * C622 -
          (((C12210 * C2730 + C11904 * C3057 + C12209 * C742 + C11903 * C1024) *
                C19620 +
            (C12210 * C2612 + C11904 * C2948 + C12209 * C627 + C11903 * C930) *
                C200) *
               C8534 +
           ((C12210 * C2729 + C11904 * C3056 + C12209 * C743 + C11903 * C1025) *
                C19620 +
            (C12210 * C2611 + C11904 * C2947 + C12209 * C628 + C11903 * C931) *
                C200) *
               C8533) *
              C19645 * C623 +
          (((C12209 * C629 + C11903 * C932 + C12210 * C3923 + C11904 * C4187) *
                C200 +
            (C12209 * C744 + C11903 * C1026 + C12210 * C4018 + C11904 * C4273) *
                C19620) *
               C8533 +
           ((C12209 * C630 + C11903 * C933 + C12210 * C4849 + C11904 * C5161) *
                C200 +
            (C12209 * C745 + C11903 * C1027 + C12210 * C4955 + C11904 * C5264) *
                C19620) *
               C8534) *
              C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C1527 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C1523 -
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C1528 -
                     (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                      C87 * C102 + C77 * C109) *
                         C1524) *
                        C19645 * C19656 * C19620 * C1525 +
                    ((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 +
                      C89 * C1529 + C79 * C1530) *
                         C1528 -
                     ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                       C87 * C634 + C77 * C646) *
                          C1523 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C1527) +
                     (C87 * C633 + C77 * C645 + C88 * C632 + C78 * C644 +
                      C89 * C1531 + C79 * C1532) *
                         C1524) *
                        C19645 * C19656 * C19620 * C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C3098 +
                     (C4330 + C4331 - C4346 - C4347) * C3099 +
                     (C4336 + C4337 - C4348 - C4349) * C3100) *
                        C19656 * C19620 * C1525 +
                    ((C4346 - (C4331 + C4330) + C4347) * C3098 +
                     (C4348 - (C4337 + C4336) + C4349) * C3099 +
                     ((C3101 * C4325 + C19577 * C4326) * C1528 -
                      (C3472 * C1523 + C3473 * C1527) +
                      (C3101 * C4327 + C19577 * C4328) * C1524) *
                         C3100) *
                        C19656 * C19620 * C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C1583 +
           (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
            C79 * C159) *
               C1525 -
           (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
            C77 * C637) *
               C1584 -
           (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 + C87 * C693 +
            C77 * C699) *
               C1526) *
              C19645 * C19656 * C1523 +
          ((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 + C89 * C1529 +
            C79 * C1530) *
               C1584 -
           ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 + C87 * C153 +
             C77 * C158) *
                C1525 +
            (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 + C87 * C94 +
             C77 * C99) *
                C1583) +
           (C87 * C692 + C77 * C698 + C88 * C691 + C78 * C697 + C89 * C1585 +
            C79 * C1586) *
               C1526) *
              C19645 * C19656 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C3098 +
           (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
               C3099 +
           (C3470 * C1583 + C3530 * C1525 - C3473 * C1584 - C3531 * C1526) *
               C3100) *
              C19656 * C1523 +
          ((C4342 * C1584 -
            ((C3101 * C153 + C19577 * C158) * C1525 +
             (C3101 * C94 + C19577 * C99) * C1583) +
            C4406 * C1526) *
               C3098 +
           (C4344 * C1584 - (C4406 * C1525 + C4342 * C1583) + C4407 * C1526) *
               C3099 +
           ((C3101 * C4325 + C19577 * C4326) * C1584 -
            (C4407 * C1525 + C4344 * C1583) +
            (C3101 * C4399 + C19577 * C4400) * C1526) *
               C3100) *
              C19656 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q));
    d2eexz[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C200 +
                      (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                       C89 * C203 + C79 * C208) *
                          C19620) *
                         C19645 * C19656 * C1525 -
                     ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                       C87 * C743 + C77 * C749) *
                          C19620 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C200) *
                         C19645 * C19656 * C1526) *
                        C1523 +
                    (((C87 * C627 + C77 * C636 + C88 * C626 + C78 * C635 +
                       C89 * C1529 + C79 * C1530) *
                          C200 +
                      (C87 * C742 + C77 * C748 + C88 * C741 + C78 * C747 +
                       C89 * C1637 + C79 * C1638) *
                          C19620) *
                         C19645 * C19656 * C1526 -
                     ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                       C87 * C202 + C77 * C207) *
                          C19620 +
                      (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                       C87 * C94 + C77 * C99) *
                          C200) *
                         C19645 * C19656 * C1525) *
                        C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C200 +
                       (C3101 * C201 + C19577 * C206) * C19620) *
                          C3098 +
                      (C3574 + C3586) * C3099 + C3589 * C3100) *
                         C19656 * C1525 -
                     ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
                      (C3586 + C3574) * C3098) *
                         C19656 * C1526) *
                        C1523 +
                    (((C4460 + C4468) * C3098 + (C4463 + C4469) * C3099 +
                      ((C3101 * C4325 + C19577 * C4326) * C200 +
                       (C3101 * C4457 + C19577 * C4458) * C19620) *
                          C3100) *
                         C19656 * C1526 -
                     ((C4469 + C4463) * C3100 + (C4468 + C4460) * C3099 +
                      ((C3101 * C202 + C19577 * C207) * C19620 +
                       (C3101 * C94 + C19577 * C99) * C200) *
                          C3098) *
                         C19656 * C1525) *
                        C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C19656 * C77 +
           (C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
               C19656 * C78 +
           (C275 * C1527 + C276 * C1523 - C277 * C1528 - C278 * C1524) *
               C19656 * C79) *
              C19620 * C1525 +
          ((C1700 * C1528 -
            ((C249 * C634 + C19645 * C799) * C1523 +
             (C249 * C628 + C19645 * C793) * C1527) +
            C1701 * C1524) *
               C19656 * C77 +
           (C1702 * C1528 - (C1701 * C1523 + C1700 * C1527) + C1703 * C1524) *
               C19656 * C78 +
           ((C249 * C1529 + C19645 * C1689) * C1528 -
            (C1703 * C1523 + C1702 * C1527) +
            (C249 * C1531 + C19645 * C1690) * C1524) *
               C19656 * C79) *
              C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C1527 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C1523 -
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C1528 -
           (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
            C3216 * C102 + C3098 * C256) *
               C1524) *
              C19656 * C19577 * C19620 * C1525 +
          ((C3216 * C627 + C3098 * C792 + C3217 * C630 + C3099 * C795 +
            C3218 * C4325 + C3100 * C4519) *
               C1528 -
           ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 + C3099 * C800 +
             C3216 * C634 + C3098 * C799) *
                C1523 +
            (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
             C3216 * C628 + C3098 * C793) *
                C1527) +
           (C3216 * C633 + C3098 * C798 + C3217 * C642 + C3099 * C801 +
            C3218 * C4327 + C3100 * C4520) *
               C1524) *
              C19656 * C19577 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C19656 * C77 +
                     (C1755 + C1756 - C1757 - C1767) * C19656 * C78 +
                     (C1760 + C1761 - C1762 - C1768) * C19656 * C79) *
                        C1523 +
                    ((C1757 - (C1756 + C1755) + C1767) * C19656 * C77 +
                     (C1762 - (C1761 + C1760) + C1768) * C19656 * C78 +
                     ((C249 * C1529 + C19645 * C1689) * C1584 -
                      (C333 * C1525 + C277 * C1583) +
                      (C249 * C1585 + C19645 * C1753) * C1526) *
                         C19656 * C79) *
                        C1524) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C1583 +
                     (C3216 * C152 + C3098 * C316 + C3217 * C693 +
                      C3099 * C841 + C3218 * C694 + C3100 * C842) *
                         C1525 -
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C1584 -
                     (C3218 * C3518 + C3100 * C3669 + C3217 * C694 +
                      C3099 * C842 + C3216 * C693 + C3098 * C841) *
                         C1526) *
                        C19656 * C19577 * C1523 +
                    ((C3216 * C627 + C3098 * C792 + C3217 * C630 +
                      C3099 * C795 + C3218 * C4325 + C3100 * C4519) *
                         C1584 -
                     ((C3218 * C695 + C3100 * C844 + C3217 * C692 +
                       C3099 * C843 + C3216 * C153 + C3098 * C317) *
                          C1525 +
                      (C3218 * C630 + C3100 * C795 + C3217 * C627 +
                       C3099 * C792 + C3216 * C94 + C3098 * C251) *
                          C1583) +
                     (C3216 * C692 + C3098 * C843 + C3217 * C695 +
                      C3099 * C844 + C3218 * C4399 + C3100 * C4571) *
                         C1526) *
                        C19656 * C19577 * C1524) *
                   C19620) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C200 +
             (C249 * C201 + C19645 * C376) * C19620) *
                C19656 * C77 +
            (C382 + C394) * C19656 * C78 + C398 * C79) *
               C1525 -
           ((C1828 + C1822) * C19656 * C79 + (C1829 + C1825) * C19656 * C78 +
            ((C249 * C743 + C19645 * C887) * C19620 +
             (C249 * C628 + C19645 * C793) * C200) *
                C19656 * C77) *
               C1526) *
              C1523 +
          (((C1825 + C1829) * C19656 * C77 + (C1822 + C1828) * C19656 * C78 +
            ((C249 * C1529 + C19645 * C1689) * C200 +
             (C249 * C1637 + C19645 * C1818) * C19620) *
                C19656 * C79) *
               C1526 -
           ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
            (C394 + C382) * C19656 * C77) *
               C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
             C3218 * C629 + C3100 * C794) *
                C200 +
            (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
             C3218 * C744 + C3100 * C888) *
                C19620) *
               C19656 * C19577 * C1525 -
           ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
             C3216 * C743 + C3098 * C887) *
                C19620 +
            (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
             C3216 * C628 + C3098 * C793) *
                C200) *
               C19656 * C19577 * C1526) *
              C1523 +
          (((C3216 * C627 + C3098 * C792 + C3217 * C630 + C3099 * C795 +
             C3218 * C4325 + C3100 * C4519) *
                C200 +
            (C3216 * C742 + C3098 * C886 + C3217 * C745 + C3099 * C889 +
             C3218 * C4457 + C3100 * C4622) *
                C19620) *
               C19656 * C19577 * C1526 -
           ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
             C3216 * C202 + C3098 * C377) *
                C19620 +
            (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
             C3216 * C94 + C3098 * C251) *
                C200) *
               C19656 * C19577 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q));
    d2eezx[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C77 +
           (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) * C78 +
           (C462 * C1527 + C463 * C1523 - C464 * C1528 - C465 * C1524) * C79) *
              C19645 * C19620 * C1525 +
          ((C1890 * C1528 -
            ((C436 * C634 + C19656 * C937) * C1523 +
             (C436 * C628 + C19656 * C931) * C1527) +
            C1891 * C1524) *
               C77 +
           (C1892 * C1528 - (C1891 * C1523 + C1890 * C1527) + C1893 * C1524) *
               C78 +
           ((C436 * C1529 + C19656 * C1879) * C1528 -
            (C1893 * C1523 + C1892 * C1527) +
            (C436 * C1531 + C19656 * C1880) * C1524) *
               C79) *
              C19645 * C19620 * C1526)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C19577 * C3098 +
           (C4676 + C4677 - C4678 - C4679) * C19577 * C3099 +
           (C4680 + C4681 - C4688 - C4689) * C19577 * C3100) *
              C19620 * C1525 +
          ((C4678 - (C4677 + C4676) + C4679) * C19577 * C3098 +
           (C4688 - (C4681 + C4680) + C4689) * C19577 * C3099 +
           ((C436 * C4325 + C19656 * C4673) * C1528 -
            (C3770 * C1523 + C3771 * C1527) +
            (C436 * C4327 + C19656 * C4674) * C1524) *
               C19577 * C3100) *
              C19620 * C1526)) /
            (p * q * std::sqrt(p + q));
    d2eezy[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 -
            (C436 * C628 + C19656 * C931) * C1584 -
            (C436 * C693 + C19656 * C979) * C1526) *
               C77 +
           (C1945 + C1946 - C1947 - C1957) * C78 +
           (C1950 + C1951 - C1952 - C1958) * C79) *
              C19645 * C1523 +
          ((C1947 - (C1946 + C1945) + C1957) * C77 +
           (C1952 - (C1951 + C1950) + C1958) * C78 +
           ((C436 * C1529 + C19656 * C1879) * C1584 -
            (C520 * C1525 + C464 * C1583) +
            (C436 * C1585 + C19656 * C1943) * C1526) *
               C79) *
              C19645 * C1524) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
            C3826 * C1526) *
               C19577 * C3098 +
           (C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
               C19577 * C3099 +
           (C3768 * C1583 + C3827 * C1525 - C3771 * C1584 - C3828 * C1526) *
               C19577 * C3100) *
              C1523 +
          ((C1947 - (C1946 + C1945) + C1957) * C19577 * C3098 +
           (C4686 * C1584 - (C1955 * C1525 + C1890 * C1583) + C4743 * C1526) *
               C19577 * C3099 +
           ((C436 * C4325 + C19656 * C4673) * C1584 -
            (C4743 * C1525 + C4686 * C1583) +
            (C436 * C4399 + C19656 * C4739) * C1526) *
               C19577 * C3100) *
              C1524) *
         C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[20] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C77 +
            (C568 + C580) * C78 + C583 * C79) *
               C19645 * C1525 -
           ((C2018 + C2012) * C79 + (C2019 + C2015) * C78 +
            ((C436 * C743 + C19656 * C1025) * C19620 +
             (C436 * C628 + C19656 * C931) * C200) *
                C77) *
               C19645 * C1526) *
              C1523 +
          (((C2015 + C2019) * C77 + (C2012 + C2018) * C78 +
            ((C436 * C1529 + C19656 * C1879) * C200 +
             (C436 * C1637 + C19656 * C2008) * C19620) *
                C79) *
               C19645 * C1526 -
           ((C582 + C576) * C79 + (C581 + C571) * C78 + (C580 + C568) * C77) *
               C19645 * C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C200 +
             (C436 * C201 + C19656 * C562) * C19620) *
                C19577 * C3098 +
            (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
               C1525 -
           ((C3883 + C3877) * C19577 * C3100 +
            (C3882 + C3872) * C19577 * C3099 +
            (C3881 + C3869) * C19577 * C3098) *
               C1526) *
              C1523 +
          (((C2015 + C2019) * C19577 * C3098 +
            (C4795 + C4799) * C19577 * C3099 +
            ((C436 * C4325 + C19656 * C4673) * C200 +
             (C436 * C4457 + C19656 * C4793) * C19620) *
                C19577 * C3100) *
               C1526 -
           ((C4799 + C4795) * C19577 * C3100 +
            (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
               C1525) *
              C1524)) /
            (p * q * std::sqrt(p + q));
    d2eexx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C625 +
                      (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                       C89 * C103 + C79 * C110) *
                          C19588) *
                         C19645 * C19656 * C2069 -
                     ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
                       C87 * C1078 + C77 * C1090) *
                          C19588 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C625) *
                         C19645 * C19656 * C2070) *
                        C1525 +
                    (((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
                       C89 * C2613 + C79 * C2616) *
                          C625 +
                      (C87 * C2617 + C77 * C2620 + C88 * C2618 + C78 * C2621 +
                       C89 * C2619 + C79 * C2622) *
                          C19588) *
                         C19645 * C19656 * C2070 -
                     ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                       C87 * C634 + C77 * C646) *
                          C19588 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C625) *
                         C19645 * C19656 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C625 +
                       (C3101 * C101 + C19577 * C108) * C19588) *
                          C3098 +
                      (C3474 + C3475) * C3099 + C3480 * C3100) *
                         C19656 * C2069 -
                     ((C5332 + C5333) * C3100 + (C5334 + C5335) * C3099 +
                      ((C3101 * C1078 + C19577 * C1090) * C19588 +
                       (C3101 * C1072 + C19577 * C1081) * C625) *
                          C3098) *
                         C19656 * C2070) *
                        C1525 +
                    (((C5335 + C5334) * C3098 + (C5333 + C5332) * C3099 +
                      ((C3101 * C5315 + C19577 * C5316) * C625 +
                       (C3101 * C5317 + C19577 * C5318) * C19588) *
                          C3100) *
                         C19656 * C2070 -
                     ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
                      (C3475 + C3474) * C3098) *
                         C19656 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
            C79 * C100) *
               C1583 +
           (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 + C89 * C154 +
            C79 * C159) *
               C1525 -
           (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 + C87 * C628 +
            C77 * C637) *
               C1584 -
           (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 + C87 * C693 +
            C77 * C699) *
               C1526) *
              C19645 * C19656 * C19588 * C2069 +
          ((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
            C89 * C2613 + C79 * C2616) *
               C1584 -
           ((C89 * C1132 + C79 * C1138 + C88 * C1133 + C78 * C1139 +
             C87 * C1134 + C77 * C1140) *
                C1525 +
            (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
             C87 * C1072 + C77 * C1081) *
                C1583) +
           (C87 * C2673 + C77 * C2676 + C88 * C2674 + C78 * C2677 +
            C89 * C2675 + C79 * C2678) *
               C1526) *
              C19645 * C19656 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3101 * C93 + C19577 * C98) * C1583 +
            (C3101 * C152 + C19577 * C157) * C1525 - C3468 * C1584 -
            C3529 * C1526) *
               C3098 +
           (C3468 * C1583 + C3529 * C1525 - C3470 * C1584 - C3530 * C1526) *
               C3099 +
           (C3470 * C1583 + C3530 * C1525 - C3473 * C1584 - C3531 * C1526) *
               C3100) *
              C19656 * C19588 * C2069 +
          ((C5331 * C1584 -
            ((C3101 * C1134 + C19577 * C1140) * C1525 +
             (C3101 * C1072 + C19577 * C1081) * C1583) +
            C5392 * C1526) *
               C3098 +
           (C5329 * C1584 - (C5392 * C1525 + C5331 * C1583) + C5393 * C1526) *
               C3099 +
           ((C3101 * C5315 + C19577 * C5316) * C1584 -
            (C5393 * C1525 + C5329 * C1583) +
            (C3101 * C5385 + C19577 * C5386) * C1526) *
               C3100) *
              C19656 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C2177 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C2069 -
                     (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                      C87 * C1072 + C77 * C1081) *
                         C2178 -
                     (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 +
                      C87 * C1187 + C77 * C1193) *
                         C2070) *
                        C19645 * C19656 * C1525 +
                    ((C87 * C2611 + C77 * C2614 + C88 * C2612 + C78 * C2615 +
                      C89 * C2613 + C79 * C2616) *
                         C2178 -
                     ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                       C87 * C743 + C77 * C749) *
                          C2069 +
                      (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                       C87 * C628 + C77 * C637) *
                          C2177) +
                     (C87 * C2729 + C77 * C2732 + C88 * C2730 + C78 * C2733 +
                      C89 * C2731 + C79 * C2734) *
                         C2070) *
                        C19645 * C19656 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C2177 +
                      (C3101 * C201 + C19577 * C206) * C2069 -
                      (C3101 * C1072 + C19577 * C1081) * C2178 -
                      (C3101 * C1187 + C19577 * C1193) * C2070) *
                         C3098 +
                     (C5446 + C5447 - C5448 - C5458) * C3099 +
                     (C5451 + C5452 - C5453 - C5459) * C3100) *
                        C19656 * C1525 +
                    ((C5448 - (C5447 + C5446) + C5458) * C3098 +
                     (C5453 - (C5452 + C5451) + C5459) * C3099 +
                     ((C3101 * C5315 + C19577 * C5316) * C2178 -
                      (C3585 * C2069 + C3473 * C2177) +
                      (C3101 * C5443 + C19577 * C5444) * C2070) *
                         C3100) *
                        C19656 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C249 * C93 + C19645 * C250) * C625 +
                       (C249 * C101 + C19645 * C255) * C19588) *
                          C19656 * C77 +
                      (C273 * C625 + C274 * C19588) * C19656 * C78 +
                      (C275 * C625 + C276 * C19588) * C19656 * C79) *
                         C2069 -
                     ((C2245 * C19588 + C2244 * C625) * C19656 * C79 +
                      (C2243 * C19588 + C2242 * C625) * C19656 * C78 +
                      ((C249 * C1078 + C19645 * C1243) * C19588 +
                       (C249 * C1072 + C19645 * C1237) * C625) *
                          C19656 * C77) *
                         C2070) *
                        C1525 +
                    ((((C249 * C2611 + C19645 * C2785) * C625 +
                       (C249 * C2617 + C19645 * C2788) * C19588) *
                          C19656 * C77 +
                      ((C249 * C2612 + C19645 * C2786) * C625 +
                       (C249 * C2618 + C19645 * C2789) * C19588) *
                          C19656 * C78 +
                      ((C249 * C2613 + C19645 * C2787) * C625 +
                       (C249 * C2619 + C19645 * C2790) * C19588) *
                          C19656 * C79) *
                         C2070 -
                     ((C1703 * C19588 + C1702 * C625) * C19656 * C79 +
                      (C1701 * C19588 + C1700 * C625) * C19656 * C78 +
                      ((C249 * C634 + C19645 * C799) * C19588 +
                       (C249 * C628 + C19645 * C793) * C625) *
                          C19656 * C77) *
                         C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3216 * C93 + C3098 * C250 + C3217 * C628 +
                       C3099 * C793 + C3218 * C629 + C3100 * C794) *
                          C625 +
                      (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                       C3099 * C799 + C3218 * C641 + C3100 * C800) *
                          C19588) *
                         C19656 * C19577 * C2069 -
                     ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 +
                       C3099 * C2788 + C3216 * C1078 + C3098 * C1243) *
                          C19588 +
                      (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                       C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                          C625) *
                         C19656 * C19577 * C2070) *
                        C1525 +
                    (((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 +
                       C3099 * C4061 + C3218 * C5315 + C3100 * C5509) *
                          C625 +
                      (C3216 * C2617 + C3098 * C2788 + C3217 * C3926 +
                       C3099 * C4064 + C3218 * C5317 + C3100 * C5510) *
                          C19588) *
                         C19656 * C19577 * C2070 -
                     ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 +
                       C3099 * C800 + C3216 * C634 + C3098 * C799) *
                          C19588 +
                      (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                       C3099 * C794 + C3216 * C628 + C3098 * C793) *
                          C625) *
                         C19656 * C19577 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C1583 +
                      (C249 * C152 + C19645 * C316) * C1525 -
                      (C249 * C628 + C19645 * C793) * C1584 -
                      (C249 * C693 + C19645 * C841) * C1526) *
                         C19656 * C77 +
                     (C1755 + C1756 - C1757 - C1767) * C19656 * C78 +
                     (C1760 + C1761 - C1762 - C1768) * C19656 * C79) *
                        C19588 * C2069 +
                    (((C249 * C2611 + C19645 * C2785) * C1584 -
                      ((C249 * C1134 + C19645 * C1287) * C1525 +
                       (C249 * C1072 + C19645 * C1237) * C1583) +
                      (C249 * C2673 + C19645 * C2841) * C1526) *
                         C19656 * C77 +
                     ((C249 * C2612 + C19645 * C2786) * C1584 -
                      (C2303 * C1525 + C2242 * C1583) +
                      (C249 * C2674 + C19645 * C2842) * C1526) *
                         C19656 * C78 +
                     ((C249 * C2613 + C19645 * C2787) * C1584 -
                      (C2304 * C1525 + C2244 * C1583) +
                      (C249 * C2675 + C19645 * C2843) * C1526) *
                         C19656 * C79) *
                        C19588 * C2070)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C1583 +
                     (C3216 * C152 + C3098 * C316 + C3217 * C693 +
                      C3099 * C841 + C3218 * C694 + C3100 * C842) *
                         C1525 -
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C1584 -
                     (C3218 * C3518 + C3100 * C3669 + C3217 * C694 +
                      C3099 * C842 + C3216 * C693 + C3098 * C841) *
                         C1526) *
                        C19656 * C19577 * C19588 * C2069 +
                    ((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 +
                      C3099 * C4061 + C3218 * C5315 + C3100 * C5509) *
                         C1584 -
                     ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 +
                       C3099 * C2841 + C3216 * C1134 + C3098 * C1287) *
                          C1525 +
                      (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                       C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                          C1583) +
                     (C3216 * C2673 + C3098 * C2841 + C3217 * C3973 +
                      C3099 * C4105 + C3218 * C5385 + C3100 * C5561) *
                         C1526) *
                        C19656 * C19577 * C19588 * C2070)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C2177 +
                      (C249 * C201 + C19645 * C376) * C2069 -
                      (C249 * C1072 + C19645 * C1237) * C2178 -
                      (C249 * C1187 + C19645 * C1329) * C2070) *
                         C19656 * C77 +
                     (C2358 + C2359 - C2360 - C2370) * C19656 * C78 +
                     (C2363 + C2364 - C2365 - C2371) * C19656 * C79) *
                        C1525 +
                    (((C249 * C2611 + C19645 * C2785) * C2178 -
                      ((C249 * C743 + C19645 * C887) * C2069 +
                       (C249 * C628 + C19645 * C793) * C2177) +
                      (C249 * C2729 + C19645 * C2894) * C2070) *
                         C19656 * C77 +
                     ((C249 * C2612 + C19645 * C2786) * C2178 -
                      (C1827 * C2069 + C1700 * C2177) +
                      (C249 * C2730 + C19645 * C2895) * C2070) *
                         C19656 * C78 +
                     ((C249 * C2613 + C19645 * C2787) * C2178 -
                      (C1826 * C2069 + C1702 * C2177) +
                      (C249 * C2731 + C19645 * C2896) * C2070) *
                         C19656 * C79) *
                        C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C2177 +
                     (C3216 * C201 + C3098 * C376 + C3217 * C743 +
                      C3099 * C887 + C3218 * C744 + C3100 * C888) *
                         C2069 -
                     (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                      C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                         C2178 -
                     (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 +
                      C3099 * C2894 + C3216 * C1187 + C3098 * C1329) *
                         C2070) *
                        C19656 * C19577 * C1525 +
                    ((C3216 * C2611 + C3098 * C2785 + C3217 * C3923 +
                      C3099 * C4061 + C3218 * C5315 + C3100 * C5509) *
                         C2178 -
                     ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 +
                       C3099 * C888 + C3216 * C743 + C3098 * C887) *
                          C2069 +
                      (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                       C3099 * C794 + C3216 * C628 + C3098 * C793) *
                          C2177) +
                     (C3216 * C2729 + C3098 * C2894 + C3217 * C4018 +
                      C3099 * C4146 + C3218 * C5443 + C3100 * C5612) *
                         C2070) *
                        C19656 * C19577 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eezx[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C436 * C93 + C19656 * C437) * C625 +
                       (C436 * C101 + C19656 * C442) * C19588) *
                          C77 +
                      (C460 * C625 + C461 * C19588) * C78 +
                      (C462 * C625 + C463 * C19588) * C79) *
                         C19645 * C2069 -
                     ((C2435 * C19588 + C2434 * C625) * C79 +
                      (C2433 * C19588 + C2432 * C625) * C78 +
                      ((C436 * C1078 + C19656 * C1381) * C19588 +
                       (C436 * C1072 + C19656 * C1375) * C625) *
                          C77) *
                         C19645 * C2070) *
                        C1525 +
                    ((((C436 * C2611 + C19656 * C2947) * C625 +
                       (C436 * C2617 + C19656 * C2950) * C19588) *
                          C77 +
                      ((C436 * C2612 + C19656 * C2948) * C625 +
                       (C436 * C2618 + C19656 * C2951) * C19588) *
                          C78 +
                      ((C436 * C2613 + C19656 * C2949) * C625 +
                       (C436 * C2619 + C19656 * C2952) * C19588) *
                          C79) *
                         C19645 * C2070 -
                     ((C1893 * C19588 + C1892 * C625) * C79 +
                      (C1891 * C19588 + C1890 * C625) * C78 +
                      ((C436 * C634 + C19656 * C937) * C19588 +
                       (C436 * C628 + C19656 * C931) * C625) *
                          C77) *
                         C19645 * C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C436 * C93 + C19656 * C437) * C625 +
                       (C436 * C101 + C19656 * C442) * C19588) *
                          C19577 * C3098 +
                      (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
                         C2069 -
                     ((C5678 + C5679) * C19577 * C3100 +
                      (C5680 + C5681) * C19577 * C3099 +
                      ((C436 * C1078 + C19656 * C1381) * C19588 +
                       (C436 * C1072 + C19656 * C1375) * C625) *
                          C19577 * C3098) *
                         C2070) *
                        C1525 +
                    (((C5681 + C5680) * C19577 * C3098 +
                      (C5679 + C5678) * C19577 * C3099 +
                      ((C436 * C5315 + C19656 * C5663) * C625 +
                       (C436 * C5317 + C19656 * C5664) * C19588) *
                          C19577 * C3100) *
                         C2070 -
                     ((C3776 + C3777) * C19577 * C3100 +
                      (C3775 + C3774) * C19577 * C3099 +
                      (C3773 + C3772) * C19577 * C3098) *
                         C2069) *
                        C1526)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 -
            (C436 * C628 + C19656 * C931) * C1584 -
            (C436 * C693 + C19656 * C979) * C1526) *
               C77 +
           (C1945 + C1946 - C1947 - C1957) * C78 +
           (C1950 + C1951 - C1952 - C1958) * C79) *
              C19645 * C19588 * C2069 +
          (((C436 * C2611 + C19656 * C2947) * C1584 -
            ((C436 * C1134 + C19656 * C1425) * C1525 +
             (C436 * C1072 + C19656 * C1375) * C1583) +
            (C436 * C2673 + C19656 * C3003) * C1526) *
               C77 +
           ((C436 * C2612 + C19656 * C2948) * C1584 -
            (C2493 * C1525 + C2432 * C1583) +
            (C436 * C2674 + C19656 * C3004) * C1526) *
               C78 +
           ((C436 * C2613 + C19656 * C2949) * C1584 -
            (C2494 * C1525 + C2434 * C1583) +
            (C436 * C2675 + C19656 * C3005) * C1526) *
               C79) *
              C19645 * C19588 * C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1583 +
            (C436 * C152 + C19656 * C503) * C1525 - C3766 * C1584 -
            C3826 * C1526) *
               C19577 * C3098 +
           (C3766 * C1583 + C3826 * C1525 - C3768 * C1584 - C3827 * C1526) *
               C19577 * C3099 +
           (C3768 * C1583 + C3827 * C1525 - C3771 * C1584 - C3828 * C1526) *
               C19577 * C3100) *
              C19588 * C2069 +
          ((C5677 * C1584 -
            ((C436 * C1134 + C19656 * C1425) * C1525 +
             (C436 * C1072 + C19656 * C1375) * C1583) +
            C5737 * C1526) *
               C19577 * C3098 +
           (C5675 * C1584 - (C5737 * C1525 + C5677 * C1583) + C5738 * C1526) *
               C19577 * C3099 +
           ((C436 * C5315 + C19656 * C5663) * C1584 -
            (C5738 * C1525 + C5675 * C1583) +
            (C436 * C5385 + C19656 * C5731) * C1526) *
               C19577 * C3100) *
              C19588 * C2070)) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C77 +
                     (C2548 + C2549 - C2550 - C2560) * C78 +
                     (C2553 + C2554 - C2555 - C2561) * C79) *
                        C19645 * C1525 +
                    (((C436 * C2611 + C19656 * C2947) * C2178 -
                      ((C436 * C743 + C19656 * C1025) * C2069 +
                       (C436 * C628 + C19656 * C931) * C2177) +
                      (C436 * C2729 + C19656 * C3056) * C2070) *
                         C77 +
                     ((C436 * C2612 + C19656 * C2948) * C2178 -
                      (C2017 * C2069 + C1890 * C2177) +
                      (C436 * C2730 + C19656 * C3057) * C2070) *
                         C78 +
                     ((C436 * C2613 + C19656 * C2949) * C2178 -
                      (C2016 * C2069 + C1892 * C2177) +
                      (C436 * C2731 + C19656 * C3058) * C2070) *
                         C79) *
                        C19645 * C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C19577 * C3098 +
                     (C5790 + C5791 - C5792 - C5802) * C19577 * C3099 +
                     (C5795 + C5796 - C5797 - C5803) * C19577 * C3100) *
                        C1525 +
                    ((C5792 - (C5791 + C5790) + C5802) * C19577 * C3098 +
                     (C5797 - (C5796 + C5795) + C5803) * C19577 * C3099 +
                     ((C436 * C5315 + C19656 * C5663) * C2178 -
                      (C3880 * C2069 + C3771 * C2177) +
                      (C436 * C5443 + C19656 * C5788) * C2070) *
                         C19577 * C3100) *
                        C1526) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eexx[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C625 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C19588) *
                        C19645 * C19656 * C19620 * C622 -
                    ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                      C87 * C634 + C77 * C646) *
                         C19588 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C625) *
                        C19645 * C19656 * C19620 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C625 +
                     (C87 * C641 + C77 * C647 + C88 * C642 + C78 * C648 +
                      C89 * C643 + C79 * C649) *
                         C19588) *
                        C19645 * C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C90 +
                    (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                     C89 * C103 + C79 * C110) *
                        C80 -
                    (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                     C87 * C94 + C77 * C99) *
                        C91 -
                    (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                     C87 * C102 + C77 * C109) *
                        C81 +
                    (C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                     C89 * C97 + C79 * C106) *
                        C92 +
                    (C87 * C103 + C77 * C110 + C88 * C105 + C78 * C111 +
                     C89 * C107 + C79 * C112) *
                        C82) *
                   C19645 * C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C625 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C19588) *
                        C19645 * C19656 * C1067 -
                    ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
                      C87 * C1078 + C77 * C1090) *
                         C19588 +
                     (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                      C87 * C1072 + C77 * C1081) *
                         C625) *
                        C19645 * C19656 * C1068 +
                    ((C87 * C1073 + C77 * C1082 + C88 * C1074 + C78 * C1083 +
                      C89 * C1075 + C79 * C1084) *
                         C625 +
                     (C87 * C1085 + C77 * C1091 + C88 * C1086 + C78 * C1092 +
                      C89 * C1087 + C79 * C1093) *
                         C19588) *
                        C19645 * C19656 * C1069) *
                   C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C90 +
                     (C3101 * C101 + C19577 * C108) * C80 -
                     (C3101 * C94 + C19577 * C99) * C91 -
                     (C3101 * C102 + C19577 * C109) * C81 +
                     (C3101 * C95 + C19577 * C100) * C92 +
                     (C3101 * C103 + C19577 * C110) * C82) *
                        C3098 +
                    ((C3101 * C628 + C19577 * C637) * C90 +
                     (C3101 * C634 + C19577 * C646) * C80 -
                     (C3101 * C627 + C19577 * C636) * C91 -
                     (C3101 * C633 + C19577 * C645) * C81 +
                     (C3101 * C626 + C19577 * C635) * C92 +
                     (C3101 * C632 + C19577 * C644) * C82) *
                        C3099 +
                    ((C3101 * C629 + C19577 * C638) * C90 +
                     (C3101 * C641 + C19577 * C647) * C80 -
                     (C3101 * C630 + C19577 * C639) * C91 -
                     (C3101 * C642 + C19577 * C648) * C81 +
                     (C3101 * C631 + C19577 * C640) * C92 +
                     (C3101 * C643 + C19577 * C649) * C82) *
                        C3100) *
                   C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C625 +
                      (C3101 * C101 + C19577 * C108) * C19588) *
                         C3098 +
                     (C3474 + C3475) * C3099 + C3480 * C3100) *
                        C19656 * C19620 * C622 -
                    ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
                     (C3475 + C3474) * C3098) *
                        C19656 * C19620 * C623 +
                    (C3480 * C3098 + (C3479 + C3478) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C625 +
                      (C3101 * C3452 + C19577 * C3454) * C19588) *
                         C3100) *
                        C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C625 +
                      (C3101 * C101 + C19577 * C108) * C19588) *
                         C3098 +
                     (C3474 + C3475) * C3099 + C3480 * C3100) *
                        C19656 * C1067 -
                    (((C3101 * C3926 + C19577 * C3932) * C19588 +
                      (C3101 * C3923 + C19577 * C3927) * C625) *
                         C3100 +
                     ((C3101 * C2617 + C19577 * C2620) * C19588 +
                      (C3101 * C2611 + C19577 * C2614) * C625) *
                         C3099 +
                     ((C3101 * C1078 + C19577 * C1090) * C19588 +
                      (C3101 * C1072 + C19577 * C1081) * C625) *
                         C3098) *
                        C19656 * C1068 +
                    (((C3101 * C1073 + C19577 * C1082) * C625 +
                      (C3101 * C1085 + C19577 * C1091) * C19588) *
                         C3098 +
                     ((C3101 * C3924 + C19577 * C3928) * C625 +
                      (C3101 * C3929 + C19577 * C3933) * C19588) *
                         C3099 +
                     ((C3101 * C3925 + C19577 * C3930) * C625 +
                      (C3101 * C3931 + C19577 * C3934) * C19588) *
                         C3100) *
                        C19656 * C1069) *
                   C19609) /
                      (p * q * std::sqrt(p + q));
    d2eexy[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C688 +
                    (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                     C89 * C154 + C79 * C159) *
                        C622 -
                    (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                     C87 * C628 + C77 * C637) *
                        C689 -
                    (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 +
                     C87 * C693 + C77 * C699) *
                        C623 +
                    (C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                     C89 * C631 + C79 * C640) *
                        C690 +
                    (C87 * C694 + C77 * C700 + C88 * C695 + C78 * C701 +
                     C89 * C696 + C79 * C702) *
                        C624) *
                   C19645 * C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C151 +
                     (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                      C89 * C154 + C79 * C159) *
                         C19609) *
                        C19645 * C19656 * C80 -
                    ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 +
                      C87 * C153 + C77 * C158) *
                         C19609 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C151) *
                        C19645 * C19656 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C151 +
                     (C87 * C154 + C77 * C159 + C88 * C155 + C78 * C160 +
                      C89 * C156 + C79 * C161) *
                         C19609) *
                        C19645 * C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C151 +
                     (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                      C89 * C154 + C79 * C159) *
                         C19609) *
                        C19645 * C19656 * C19588 * C1067 -
                    ((C89 * C1132 + C79 * C1138 + C88 * C1133 + C78 * C1139 +
                      C87 * C1134 + C77 * C1140) *
                         C19609 +
                     (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                      C87 * C1072 + C77 * C1081) *
                         C151) *
                        C19645 * C19656 * C19588 * C1068 +
                    ((C87 * C1073 + C77 * C1082 + C88 * C1074 + C78 * C1083 +
                      C89 * C1075 + C79 * C1084) *
                         C151 +
                     (C87 * C1135 + C77 * C1141 + C88 * C1136 + C78 * C1142 +
                      C89 * C1137 + C79 * C1143) *
                         C19609) *
                        C19645 * C19656 * C19588 * C1069)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C151 +
                      (C3101 * C152 + C19577 * C157) * C19609) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C151 +
                      (C3101 * C693 + C19577 * C699) * C19609) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C151 +
                      (C3101 * C694 + C19577 * C700) * C19609) *
                         C3100) *
                        C19656 * C80 -
                    (((C3101 * C695 + C19577 * C701) * C19609 +
                      (C3101 * C630 + C19577 * C639) * C151) *
                         C3100 +
                     ((C3101 * C692 + C19577 * C698) * C19609 +
                      (C3101 * C627 + C19577 * C636) * C151) *
                         C3099 +
                     ((C3101 * C153 + C19577 * C158) * C19609 +
                      (C3101 * C94 + C19577 * C99) * C151) *
                         C3098) *
                        C19656 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C151 +
                      (C3101 * C154 + C19577 * C159) * C19609) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C151 +
                      (C3101 * C691 + C19577 * C697) * C19609) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C151 +
                      (C3101 * C696 + C19577 * C702) * C19609) *
                         C3100) *
                        C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C688 +
                     (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
                     C3529 * C623 + C3470 * C690 + C3530 * C624) *
                        C3098 +
                    (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
                     C3473 * C690 + C3531 * C624) *
                        C3099 +
                    (C3470 * C688 + C3530 * C622 - C3473 * C689 - C3531 * C623 +
                     (C3101 * C3448 + C19577 * C3451) * C690 +
                     (C3101 * C3519 + C19577 * C3521) * C624) *
                        C3100) *
                   C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C151 +
                      (C3101 * C152 + C19577 * C157) * C19609) *
                         C3098 +
                     (C3468 * C151 + C3529 * C19609) * C3099 +
                     (C3470 * C151 + C3530 * C19609) * C3100) *
                        C19656 * C19588 * C1067 -
                    (((C3101 * C3973 + C19577 * C3976) * C19609 +
                      (C3101 * C3923 + C19577 * C3927) * C151) *
                         C3100 +
                     ((C3101 * C2673 + C19577 * C2676) * C19609 +
                      (C3101 * C2611 + C19577 * C2614) * C151) *
                         C3099 +
                     ((C3101 * C1134 + C19577 * C1140) * C19609 +
                      (C3101 * C1072 + C19577 * C1081) * C151) *
                         C3098) *
                        C19656 * C19588 * C1068 +
                    (((C3101 * C1073 + C19577 * C1082) * C151 +
                      (C3101 * C1135 + C19577 * C1141) * C19609) *
                         C3098 +
                     ((C3101 * C3924 + C19577 * C3928) * C151 +
                      (C3101 * C3974 + C19577 * C3977) * C19609) *
                         C3099 +
                     ((C3101 * C3925 + C19577 * C3930) * C151 +
                      (C3101 * C3975 + C19577 * C3978) * C19609) *
                         C3100) *
                        C19656 * C19588 * C1069)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C622 -
                    ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                      C87 * C743 + C77 * C749) *
                         C19620 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C200) *
                        C19645 * C19656 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C200 +
                     (C87 * C744 + C77 * C750 + C88 * C745 + C78 * C751 +
                      C89 * C746 + C79 * C752) *
                         C19620) *
                        C19645 * C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C19609 * C80 -
                    ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                      C87 * C202 + C77 * C207) *
                         C19620 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C200) *
                        C19645 * C19656 * C19609 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C200 +
                     (C87 * C203 + C77 * C208 + C88 * C204 + C78 * C209 +
                      C89 * C205 + C79 * C210) *
                         C19620) *
                        C19645 * C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C1182 +
                    (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                     C89 * C203 + C79 * C208) *
                        C1067 -
                    (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                     C87 * C1072 + C77 * C1081) *
                        C1183 -
                    (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 +
                     C87 * C1187 + C77 * C1193) *
                        C1068 +
                    (C87 * C1073 + C77 * C1082 + C88 * C1074 + C78 * C1083 +
                     C89 * C1075 + C79 * C1084) *
                        C1184 +
                    (C87 * C1188 + C77 * C1194 + C88 * C1189 + C78 * C1195 +
                     C89 * C1190 + C79 * C1196) *
                        C1069) *
                   C19645 * C19656 * C19609 * C19588) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C200 +
                      (C3101 * C743 + C19577 * C749) * C19620) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C200 +
                      (C3101 * C744 + C19577 * C750) * C19620) *
                         C3100) *
                        C19656 * C19609 * C80 -
                    (((C3101 * C745 + C19577 * C751) * C19620 +
                      (C3101 * C630 + C19577 * C639) * C200) *
                         C3100 +
                     ((C3101 * C742 + C19577 * C748) * C19620 +
                      (C3101 * C627 + C19577 * C636) * C200) *
                         C3099 +
                     ((C3101 * C202 + C19577 * C207) * C19620 +
                      (C3101 * C94 + C19577 * C99) * C200) *
                         C3098) *
                        C19656 * C19609 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C200 +
                      (C3101 * C203 + C19577 * C208) * C19620) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C200 +
                      (C3101 * C741 + C19577 * C747) * C19620) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C200 +
                      (C3101 * C746 + C19577 * C752) * C19620) *
                         C3100) *
                        C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     (C3574 + C3586) * C3099 + C3589 * C3100) *
                        C19656 * C622 -
                    ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
                     (C3586 + C3574) * C3098) *
                        C19656 * C623 +
                    (C3589 * C3098 + (C3582 + C3588) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C200 +
                      (C3101 * C3570 + C19577 * C3572) * C19620) *
                         C3100) *
                        C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C1182 +
                     (C3101 * C201 + C19577 * C206) * C1067 -
                     (C3101 * C1072 + C19577 * C1081) * C1183 -
                     (C3101 * C1187 + C19577 * C1193) * C1068 +
                     (C3101 * C1073 + C19577 * C1082) * C1184 +
                     (C3101 * C1188 + C19577 * C1194) * C1069) *
                        C3098 +
                    (C3468 * C1182 + C3583 * C1067 -
                     (C3101 * C2611 + C19577 * C2614) * C1183 -
                     (C3101 * C2729 + C19577 * C2732) * C1068 +
                     (C3101 * C3924 + C19577 * C3928) * C1184 +
                     (C3101 * C4017 + C19577 * C4020) * C1069) *
                        C3099 +
                    (C3470 * C1182 + C3584 * C1067 -
                     (C3101 * C3923 + C19577 * C3927) * C1183 -
                     (C3101 * C4018 + C19577 * C4021) * C1068 +
                     (C3101 * C3925 + C19577 * C3930) * C1184 +
                     (C3101 * C4019 + C19577 * C4022) * C1069) *
                        C3100) *
                   C19656 * C19609 * C19588) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[22] += (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C625 +
                      (C249 * C101 + C19645 * C255) * C19588) *
                         C19656 * C77 +
                     (C273 * C625 + C274 * C19588) * C19656 * C78 +
                     (C275 * C625 + C276 * C19588) * C19656 * C79) *
                        C19620 * C622 -
                    (((C249 * C632 + C19645 * C797) * C19588 +
                      (C249 * C626 + C19645 * C791) * C625) *
                         C19656 * C79 +
                     ((C249 * C633 + C19645 * C798) * C19588 +
                      (C249 * C627 + C19645 * C792) * C625) *
                         C19656 * C78 +
                     ((C249 * C634 + C19645 * C799) * C19588 +
                      (C249 * C628 + C19645 * C793) * C625) *
                         C19656 * C77) *
                        C19620 * C623 +
                    (((C249 * C629 + C19645 * C794) * C625 +
                      (C249 * C641 + C19645 * C800) * C19588) *
                         C19656 * C77 +
                     ((C249 * C630 + C19645 * C795) * C625 +
                      (C249 * C642 + C19645 * C801) * C19588) *
                         C19656 * C78 +
                     ((C249 * C631 + C19645 * C796) * C625 +
                      (C249 * C643 + C19645 * C802) * C19588) *
                         C19656 * C79) *
                        C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C249 * C93 + C19645 * C250) * C90 +
                     (C249 * C101 + C19645 * C255) * C80 - C273 * C91 -
                     C274 * C81 + C275 * C92 + C276 * C82) *
                        C19656 * C77 +
                    (C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 +
                     C277 * C92 + C278 * C82) *
                        C19656 * C78 +
                    (C275 * C90 + C276 * C80 - C277 * C91 - C278 * C81 +
                     (C249 * C97 + C19645 * C254) * C92 +
                     (C249 * C107 + C19645 * C259) * C82) *
                        C19656 * C79) *
                   C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C625 +
                      (C249 * C101 + C19645 * C255) * C19588) *
                         C19656 * C77 +
                     (C273 * C625 + C274 * C19588) * C19656 * C78 +
                     (C275 * C625 + C276 * C19588) * C19656 * C79) *
                        C1067 -
                    (((C249 * C1076 + C19645 * C1241) * C19588 +
                      (C249 * C1070 + C19645 * C1235) * C625) *
                         C19656 * C79 +
                     ((C249 * C1077 + C19645 * C1242) * C19588 +
                      (C249 * C1071 + C19645 * C1236) * C625) *
                         C19656 * C78 +
                     ((C249 * C1078 + C19645 * C1243) * C19588 +
                      (C249 * C1072 + C19645 * C1237) * C625) *
                         C19656 * C77) *
                        C1068 +
                    (((C249 * C1073 + C19645 * C1238) * C625 +
                      (C249 * C1085 + C19645 * C1244) * C19588) *
                         C19656 * C77 +
                     ((C249 * C1074 + C19645 * C1239) * C625 +
                      (C249 * C1086 + C19645 * C1245) * C19588) *
                         C19656 * C78 +
                     ((C249 * C1075 + C19645 * C1240) * C625 +
                      (C249 * C1087 + C19645 * C1246) * C19588) *
                         C19656 * C79) *
                        C1069) *
                   C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                     C3218 * C629 + C3100 * C794) *
                        C90 +
                    (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
                     C3218 * C641 + C3100 * C800) *
                        C80 -
                    (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
                     C3216 * C94 + C3098 * C251) *
                        C91 -
                    (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
                     C3216 * C102 + C3098 * C256) *
                        C81 +
                    (C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
                     C3218 * C631 + C3100 * C796) *
                        C92 +
                    (C3216 * C103 + C3098 * C257 + C3217 * C632 + C3099 * C797 +
                     C3218 * C643 + C3100 * C802) *
                        C82) *
                   C19656 * C19577 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C625 +
                     (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                      C3099 * C799 + C3218 * C641 + C3100 * C800) *
                         C19588) *
                        C19656 * C19577 * C19620 * C622 -
                    ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 +
                      C3099 * C800 + C3216 * C634 + C3098 * C799) *
                         C19588 +
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C625) *
                        C19656 * C19577 * C19620 * C623 +
                    ((C3216 * C629 + C3098 * C794 + C3217 * C3447 +
                      C3099 * C3627 + C3218 * C3448 + C3100 * C3628) *
                         C625 +
                     (C3216 * C641 + C3098 * C800 + C3217 * C3449 +
                      C3099 * C3629 + C3218 * C3452 + C3100 * C3630) *
                         C19588) *
                        C19656 * C19577 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C625 +
                     (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                      C3099 * C799 + C3218 * C641 + C3100 * C800) *
                         C19588) *
                        C19656 * C19577 * C1067 -
                    ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 +
                      C3099 * C2788 + C3216 * C1078 + C3098 * C1243) *
                         C19588 +
                     (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                      C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                         C625) *
                        C19656 * C19577 * C1068 +
                    ((C3216 * C1073 + C3098 * C1238 + C3217 * C3924 +
                      C3099 * C4062 + C3218 * C3925 + C3100 * C4063) *
                         C625 +
                     (C3216 * C1085 + C3098 * C1244 + C3217 * C3929 +
                      C3099 * C4065 + C3218 * C3931 + C3100 * C4066) *
                         C19588) *
                        C19656 * C19577 * C1069) *
                   C19609) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C688 +
           (C249 * C152 + C19645 * C316) * C622 -
           (C249 * C628 + C19645 * C793) * C689 -
           (C249 * C693 + C19645 * C841) * C623 +
           (C249 * C629 + C19645 * C794) * C690 +
           (C249 * C694 + C19645 * C842) * C624) *
              C19656 * C77 +
          (C273 * C688 + C331 * C622 - (C249 * C627 + C19645 * C792) * C689 -
           (C249 * C692 + C19645 * C843) * C623 +
           (C249 * C630 + C19645 * C795) * C690 +
           (C249 * C695 + C19645 * C844) * C624) *
              C19656 * C78 +
          (C275 * C688 + C332 * C622 - (C249 * C626 + C19645 * C791) * C689 -
           (C249 * C691 + C19645 * C845) * C623 +
           (C249 * C631 + C19645 * C796) * C690 +
           (C249 * C696 + C19645 * C846) * C624) *
              C19656 * C79) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C19656 * C77 +
           (C322 + C334) * C19656 * C78 + C338 * C79) *
              C80 -
          ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
           (C334 + C322) * C19656 * C77) *
              C81 +
          (C338 * C77 + (C330 + C336) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C151 +
            (C249 * C156 + C19645 * C320) * C19609) *
               C19656 * C79) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C19656 * C77 +
           (C322 + C334) * C19656 * C78 + C338 * C79) *
              C19588 * C1067 -
          (((C249 * C1132 + C19645 * C1285) * C19609 +
            (C249 * C1070 + C19645 * C1235) * C151) *
               C19656 * C79 +
           ((C249 * C1133 + C19645 * C1286) * C19609 +
            (C249 * C1071 + C19645 * C1236) * C151) *
               C19656 * C78 +
           ((C249 * C1134 + C19645 * C1287) * C19609 +
            (C249 * C1072 + C19645 * C1237) * C151) *
               C19656 * C77) *
              C19588 * C1068 +
          (((C249 * C1073 + C19645 * C1238) * C151 +
            (C249 * C1135 + C19645 * C1288) * C19609) *
               C19656 * C77 +
           ((C249 * C1074 + C19645 * C1239) * C151 +
            (C249 * C1136 + C19645 * C1289) * C19609) *
               C19656 * C78 +
           ((C249 * C1075 + C19645 * C1240) * C151 +
            (C249 * C1137 + C19645 * C1290) * C19609) *
               C19656 * C79) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C151 +
           (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
            C3218 * C694 + C3100 * C842) *
               C19609) *
              C19656 * C19577 * C80 -
          ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
            C3216 * C153 + C3098 * C317) *
               C19609 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C151) *
              C19656 * C19577 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C151 +
           (C3216 * C154 + C3098 * C318 + C3217 * C691 + C3099 * C845 +
            C3218 * C696 + C3100 * C846) *
               C19609) *
              C19656 * C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C688 +
          (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
           C3218 * C694 + C3100 * C842) *
              C622 -
          (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
           C3216 * C628 + C3098 * C793) *
              C689 -
          (C3218 * C3518 + C3100 * C3669 + C3217 * C694 + C3099 * C842 +
           C3216 * C693 + C3098 * C841) *
              C623 +
          (C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
           C3218 * C3448 + C3100 * C3628) *
              C690 +
          (C3216 * C694 + C3098 * C842 + C3217 * C3518 + C3099 * C3669 +
           C3218 * C3519 + C3100 * C3670) *
              C624) *
         C19656 * C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C151 +
           (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
            C3218 * C694 + C3100 * C842) *
               C19609) *
              C19656 * C19577 * C19588 * C1067 -
          ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 + C3099 * C2841 +
            C3216 * C1134 + C3098 * C1287) *
               C19609 +
           (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
            C3216 * C1072 + C3098 * C1237) *
               C151) *
              C19656 * C19577 * C19588 * C1068 +
          ((C3216 * C1073 + C3098 * C1238 + C3217 * C3924 + C3099 * C4062 +
            C3218 * C3925 + C3100 * C4063) *
               C151 +
           (C3216 * C1135 + C3098 * C1288 + C3217 * C3974 + C3099 * C4106 +
            C3218 * C3975 + C3100 * C4107) *
               C19609) *
              C19656 * C19577 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C622 -
          (((C249 * C741 + C19645 * C885) * C19620 +
            (C249 * C626 + C19645 * C791) * C200) *
               C19656 * C79 +
           ((C249 * C742 + C19645 * C886) * C19620 +
            (C249 * C627 + C19645 * C792) * C200) *
               C19656 * C78 +
           ((C249 * C743 + C19645 * C887) * C19620 +
            (C249 * C628 + C19645 * C793) * C200) *
               C19656 * C77) *
              C623 +
          (((C249 * C629 + C19645 * C794) * C200 +
            (C249 * C744 + C19645 * C888) * C19620) *
               C19656 * C77 +
           ((C249 * C630 + C19645 * C795) * C200 +
            (C249 * C745 + C19645 * C889) * C19620) *
               C19656 * C78 +
           ((C249 * C631 + C19645 * C796) * C200 +
            (C249 * C746 + C19645 * C890) * C19620) *
               C19656 * C79) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C19609 * C80 -
          ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
           (C394 + C382) * C19656 * C77) *
              C19609 * C81 +
          (C398 * C77 + (C390 + C396) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C200 +
            (C249 * C205 + C19645 * C380) * C19620) *
               C19656 * C79) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C1182 +
           (C249 * C201 + C19645 * C376) * C1067 -
           (C249 * C1072 + C19645 * C1237) * C1183 -
           (C249 * C1187 + C19645 * C1329) * C1068 +
           (C249 * C1073 + C19645 * C1238) * C1184 +
           (C249 * C1188 + C19645 * C1330) * C1069) *
              C19656 * C77 +
          (C273 * C1182 + C391 * C1067 -
           (C249 * C1071 + C19645 * C1236) * C1183 -
           (C249 * C1186 + C19645 * C1331) * C1068 +
           (C249 * C1074 + C19645 * C1239) * C1184 +
           (C249 * C1189 + C19645 * C1332) * C1069) *
              C19656 * C78 +
          (C275 * C1182 + C392 * C1067 -
           (C249 * C1070 + C19645 * C1235) * C1183 -
           (C249 * C1185 + C19645 * C1333) * C1068 +
           (C249 * C1075 + C19645 * C1240) * C1184 +
           (C249 * C1190 + C19645 * C1334) * C1069) *
              C19656 * C79) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C19609 * C80 -
          ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
            C3216 * C202 + C3098 * C377) *
               C19620 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C200) *
              C19656 * C19577 * C19609 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C200 +
           (C3216 * C203 + C3098 * C378 + C3217 * C741 + C3099 * C885 +
            C3218 * C746 + C3100 * C890) *
               C19620) *
              C19656 * C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C622 -
          ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
            C3216 * C743 + C3098 * C887) *
               C19620 +
           (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
            C3216 * C628 + C3098 * C793) *
               C200) *
              C19656 * C19577 * C623 +
          ((C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
            C3218 * C3448 + C3100 * C3628) *
               C200 +
           (C3216 * C744 + C3098 * C888 + C3217 * C3569 + C3099 * C3709 +
            C3218 * C3570 + C3100 * C3710) *
               C19620) *
              C19656 * C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C1182 +
          (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
           C3218 * C744 + C3100 * C888) *
              C1067 -
          (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
           C3216 * C1072 + C3098 * C1237) *
              C1183 -
          (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 + C3099 * C2894 +
           C3216 * C1187 + C3098 * C1329) *
              C1068 +
          (C3216 * C1073 + C3098 * C1238 + C3217 * C3924 + C3099 * C4062 +
           C3218 * C3925 + C3100 * C4063) *
              C1184 +
          (C3216 * C1188 + C3098 * C1330 + C3217 * C4017 + C3099 * C4147 +
           C3218 * C4019 + C3100 * C4148) *
              C1069) *
         C19656 * C19577 * C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C77 +
           (C460 * C625 + C461 * C19588) * C78 +
           (C462 * C625 + C463 * C19588) * C79) *
              C19645 * C19620 * C622 -
          (((C436 * C632 + C19656 * C935) * C19588 +
            (C436 * C626 + C19656 * C929) * C625) *
               C79 +
           ((C436 * C633 + C19656 * C936) * C19588 +
            (C436 * C627 + C19656 * C930) * C625) *
               C78 +
           ((C436 * C634 + C19656 * C937) * C19588 +
            (C436 * C628 + C19656 * C931) * C625) *
               C77) *
              C19645 * C19620 * C623 +
          (((C436 * C629 + C19656 * C932) * C625 +
            (C436 * C641 + C19656 * C938) * C19588) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C625 +
            (C436 * C642 + C19656 * C939) * C19588) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C625 +
            (C436 * C643 + C19656 * C940) * C19588) *
               C79) *
              C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C77 +
          (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
           C465 * C82) *
              C78 +
          (C462 * C90 + C463 * C80 - C464 * C91 - C465 * C81 +
           (C436 * C97 + C19656 * C441) * C92 +
           (C436 * C107 + C19656 * C446) * C82) *
              C79) *
         C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C77 +
           (C460 * C625 + C461 * C19588) * C78 +
           (C462 * C625 + C463 * C19588) * C79) *
              C19645 * C1067 -
          (((C436 * C1076 + C19656 * C1379) * C19588 +
            (C436 * C1070 + C19656 * C1373) * C625) *
               C79 +
           ((C436 * C1077 + C19656 * C1380) * C19588 +
            (C436 * C1071 + C19656 * C1374) * C625) *
               C78 +
           ((C436 * C1078 + C19656 * C1381) * C19588 +
            (C436 * C1072 + C19656 * C1375) * C625) *
               C77) *
              C19645 * C1068 +
          (((C436 * C1073 + C19656 * C1376) * C625 +
            (C436 * C1085 + C19656 * C1382) * C19588) *
               C77 +
           ((C436 * C1074 + C19656 * C1377) * C625 +
            (C436 * C1086 + C19656 * C1383) * C19588) *
               C78 +
           ((C436 * C1075 + C19656 * C1378) * C625 +
            (C436 * C1087 + C19656 * C1384) * C19588) *
               C79) *
              C19645 * C1069) *
         C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C19577 * C3098 +
          ((C436 * C628 + C19656 * C931) * C90 +
           (C436 * C634 + C19656 * C937) * C80 - C1890 * C91 - C1891 * C81 +
           C1892 * C92 + C1893 * C82) *
              C19577 * C3099 +
          ((C436 * C629 + C19656 * C932) * C90 +
           (C436 * C641 + C19656 * C938) * C80 -
           (C436 * C630 + C19656 * C933) * C91 -
           (C436 * C642 + C19656 * C939) * C81 +
           (C436 * C631 + C19656 * C934) * C92 +
           (C436 * C643 + C19656 * C940) * C82) *
              C19577 * C3100) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C19620 * C622 -
          ((C3776 + C3777) * C19577 * C3100 + (C3775 + C3774) * C19577 * C3099 +
           (C3773 + C3772) * C19577 * C3098) *
              C19620 * C623 +
          (C3779 * C3098 + (C3777 + C3776) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C625 +
            (C436 * C3452 + C19656 * C3752) * C19588) *
               C19577 * C3100) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C1067 -
          (((C436 * C3926 + C19656 * C4190) * C19588 +
            (C436 * C3923 + C19656 * C4187) * C625) *
               C19577 * C3100 +
           ((C436 * C2617 + C19656 * C2950) * C19588 +
            (C436 * C2611 + C19656 * C2947) * C625) *
               C19577 * C3099 +
           ((C436 * C1078 + C19656 * C1381) * C19588 +
            (C436 * C1072 + C19656 * C1375) * C625) *
               C19577 * C3098) *
              C1068 +
          (((C436 * C1073 + C19656 * C1376) * C625 +
            (C436 * C1085 + C19656 * C1382) * C19588) *
               C19577 * C3098 +
           ((C436 * C3924 + C19656 * C4188) * C625 +
            (C436 * C3929 + C19656 * C4191) * C19588) *
               C19577 * C3099 +
           ((C436 * C3925 + C19656 * C4189) * C625 +
            (C436 * C3931 + C19656 * C4192) * C19588) *
               C19577 * C3100) *
              C1069) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 -
           (C436 * C628 + C19656 * C931) * C689 -
           (C436 * C693 + C19656 * C979) * C623 +
           (C436 * C629 + C19656 * C932) * C690 +
           (C436 * C694 + C19656 * C980) * C624) *
              C77 +
          (C460 * C688 + C518 * C622 - (C436 * C627 + C19656 * C930) * C689 -
           (C436 * C692 + C19656 * C981) * C623 +
           (C436 * C630 + C19656 * C933) * C690 +
           (C436 * C695 + C19656 * C982) * C624) *
              C78 +
          (C462 * C688 + C519 * C622 - (C436 * C626 + C19656 * C929) * C689 -
           (C436 * C691 + C19656 * C983) * C623 +
           (C436 * C631 + C19656 * C934) * C690 +
           (C436 * C696 + C19656 * C984) * C624) *
              C79) *
         C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C77 +
           (C509 + C521) * C78 + C524 * C79) *
              C19645 * C80 -
          ((C523 + C517) * C79 + (C522 + C512) * C78 + (C521 + C509) * C77) *
              C19645 * C81 +
          (C524 * C77 + (C517 + C523) * C78 +
           ((C436 * C97 + C19656 * C441) * C151 +
            (C436 * C156 + C19656 * C507) * C19609) *
               C79) *
              C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C77 +
           (C509 + C521) * C78 + C524 * C79) *
              C19645 * C19588 * C1067 -
          (((C436 * C1132 + C19656 * C1423) * C19609 +
            (C436 * C1070 + C19656 * C1373) * C151) *
               C79 +
           ((C436 * C1133 + C19656 * C1424) * C19609 +
            (C436 * C1071 + C19656 * C1374) * C151) *
               C78 +
           ((C436 * C1134 + C19656 * C1425) * C19609 +
            (C436 * C1072 + C19656 * C1375) * C151) *
               C77) *
              C19645 * C19588 * C1068 +
          (((C436 * C1073 + C19656 * C1376) * C151 +
            (C436 * C1135 + C19656 * C1426) * C19609) *
               C77 +
           ((C436 * C1074 + C19656 * C1377) * C151 +
            (C436 * C1136 + C19656 * C1427) * C19609) *
               C78 +
           ((C436 * C1075 + C19656 * C1378) * C151 +
            (C436 * C1137 + C19656 * C1428) * C19609) *
               C79) *
              C19645 * C19588 * C1069)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C151 +
            (C436 * C693 + C19656 * C979) * C19609) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C151 +
            (C436 * C694 + C19656 * C980) * C19609) *
               C19577 * C3100) *
              C80 -
          (((C436 * C695 + C19656 * C982) * C19609 +
            (C436 * C630 + C19656 * C933) * C151) *
               C19577 * C3100 +
           (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
           (C521 + C509) * C19577 * C3098) *
              C81 +
          (C524 * C19577 * C3098 +
           (C1892 * C151 + C1956 * C19609) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C151 +
            (C436 * C696 + C19656 * C984) * C19609) *
               C19577 * C3100) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
           C3768 * C690 + C3827 * C624) *
              C19577 * C3098 +
          (C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
           C3771 * C690 + C3828 * C624) *
              C19577 * C3099 +
          (C3768 * C688 + C3827 * C622 - C3771 * C689 - C3828 * C623 +
           (C436 * C3448 + C19656 * C3750) * C690 +
           (C436 * C3519 + C19656 * C3818) * C624) *
              C19577 * C3100) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           (C3766 * C151 + C3826 * C19609) * C19577 * C3099 +
           (C3768 * C151 + C3827 * C19609) * C19577 * C3100) *
              C19588 * C1067 -
          (((C436 * C3973 + C19656 * C4231) * C19609 +
            (C436 * C3923 + C19656 * C4187) * C151) *
               C19577 * C3100 +
           ((C436 * C2673 + C19656 * C3003) * C19609 +
            (C436 * C2611 + C19656 * C2947) * C151) *
               C19577 * C3099 +
           ((C436 * C1134 + C19656 * C1425) * C19609 +
            (C436 * C1072 + C19656 * C1375) * C151) *
               C19577 * C3098) *
              C19588 * C1068 +
          (((C436 * C1073 + C19656 * C1376) * C151 +
            (C436 * C1135 + C19656 * C1426) * C19609) *
               C19577 * C3098 +
           ((C436 * C3924 + C19656 * C4188) * C151 +
            (C436 * C3974 + C19656 * C4232) * C19609) *
               C19577 * C3099 +
           ((C436 * C3925 + C19656 * C4189) * C151 +
            (C436 * C3975 + C19656 * C4233) * C19609) *
               C19577 * C3100) *
              C19588 * C1069)) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C622 -
          (((C436 * C741 + C19656 * C1023) * C19620 +
            (C436 * C626 + C19656 * C929) * C200) *
               C79 +
           ((C436 * C742 + C19656 * C1024) * C19620 +
            (C436 * C627 + C19656 * C930) * C200) *
               C78 +
           ((C436 * C743 + C19656 * C1025) * C19620 +
            (C436 * C628 + C19656 * C931) * C200) *
               C77) *
              C19645 * C623 +
          (((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C200 +
            (C436 * C745 + C19656 * C1027) * C19620) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C79) *
              C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C19609 * C80 -
          ((C582 + C576) * C79 + (C581 + C571) * C78 + (C580 + C568) * C77) *
              C19645 * C19609 * C81 +
          (C583 * C77 + (C576 + C582) * C78 +
           ((C436 * C97 + C19656 * C441) * C200 +
            (C436 * C205 + C19656 * C566) * C19620) *
               C79) *
              C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C1182 +
           (C436 * C201 + C19656 * C562) * C1067 -
           (C436 * C1072 + C19656 * C1375) * C1183 -
           (C436 * C1187 + C19656 * C1467) * C1068 +
           (C436 * C1073 + C19656 * C1376) * C1184 +
           (C436 * C1188 + C19656 * C1468) * C1069) *
              C77 +
          (C460 * C1182 + C577 * C1067 -
           (C436 * C1071 + C19656 * C1374) * C1183 -
           (C436 * C1186 + C19656 * C1469) * C1068 +
           (C436 * C1074 + C19656 * C1377) * C1184 +
           (C436 * C1189 + C19656 * C1470) * C1069) *
              C78 +
          (C462 * C1182 + C578 * C1067 -
           (C436 * C1070 + C19656 * C1373) * C1183 -
           (C436 * C1185 + C19656 * C1471) * C1068 +
           (C436 * C1075 + C19656 * C1378) * C1184 +
           (C436 * C1190 + C19656 * C1472) * C1069) *
              C79) *
         C19645 * C19609 * C19588) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C200 +
            (C436 * C743 + C19656 * C1025) * C19620) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C19577 * C3100) *
              C19609 * C80 -
          (((C436 * C745 + C19656 * C1027) * C19620 +
            (C436 * C630 + C19656 * C933) * C200) *
               C19577 * C3100 +
           (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
              C19609 * C81 +
          (C583 * C19577 * C3098 + (C2012 + C2018) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C19577 * C3100) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
              C622 -
          ((C3883 + C3877) * C19577 * C3100 + (C3882 + C3872) * C19577 * C3099 +
           (C3881 + C3869) * C19577 * C3098) *
              C623 +
          (C3885 * C3098 + (C3877 + C3883) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C200 +
            (C436 * C3570 + C19656 * C3867) * C19620) *
               C19577 * C3100) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C1182 +
           (C436 * C201 + C19656 * C562) * C1067 -
           (C436 * C1072 + C19656 * C1375) * C1183 -
           (C436 * C1187 + C19656 * C1467) * C1068 +
           (C436 * C1073 + C19656 * C1376) * C1184 +
           (C436 * C1188 + C19656 * C1468) * C1069) *
              C19577 * C3098 +
          (C3766 * C1182 + C3878 * C1067 -
           (C436 * C2611 + C19656 * C2947) * C1183 -
           (C436 * C2729 + C19656 * C3056) * C1068 +
           (C436 * C3924 + C19656 * C4188) * C1184 +
           (C436 * C4017 + C19656 * C4272) * C1069) *
              C19577 * C3099 +
          (C3768 * C1182 + C3879 * C1067 -
           (C436 * C3923 + C19656 * C4187) * C1183 -
           (C436 * C4018 + C19656 * C4273) * C1068 +
           (C436 * C3925 + C19656 * C4189) * C1184 +
           (C436 * C4019 + C19656 * C4274) * C1069) *
              C19577 * C3100) *
         C19609 * C19588) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C1527 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C1523 -
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C1528 -
                     (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                      C87 * C102 + C77 * C109) *
                         C1524) *
                        C19645 * C19656 * C2069 +
                    ((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
                      C89 * C2071 + C79 * C2072) *
                         C1528 -
                     ((C89 * C1076 + C79 * C1088 + C88 * C1077 + C78 * C1089 +
                       C87 * C1078 + C77 * C1090) *
                          C1523 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C1527) +
                     (C87 * C1077 + C77 * C1089 + C88 * C1076 + C78 * C1088 +
                      C89 * C2073 + C79 * C2074) *
                         C1524) *
                        C19645 * C19656 * C2070) *
                   C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C1527 +
                      (C3101 * C101 + C19577 * C108) * C1523 -
                      (C3101 * C94 + C19577 * C99) * C1528 -
                      (C3101 * C102 + C19577 * C109) * C1524) *
                         C3098 +
                     (C4330 + C4331 - C4346 - C4347) * C3099 +
                     (C4336 + C4337 - C4348 - C4349) * C3100) *
                        C19656 * C2069 +
                    (((C3101 * C1071 + C19577 * C1080) * C1528 -
                      ((C3101 * C1078 + C19577 * C1090) * C1523 +
                       (C3101 * C1072 + C19577 * C1081) * C1527) +
                      (C3101 * C1077 + C19577 * C1089) * C1524) *
                         C3098 +
                     ((C3101 * C2612 + C19577 * C2615) * C1528 -
                      ((C3101 * C2617 + C19577 * C2620) * C1523 +
                       (C3101 * C2611 + C19577 * C2614) * C1527) +
                      (C3101 * C2618 + C19577 * C2621) * C1524) *
                         C3099 +
                     ((C3101 * C4849 + C19577 * C4850) * C1528 -
                      ((C3101 * C3926 + C19577 * C3932) * C1523 +
                       (C3101 * C3923 + C19577 * C3927) * C1527) +
                      (C3101 * C4851 + C19577 * C4852) * C1524) *
                         C3100) *
                        C19656 * C2070) *
                   C19609) /
                      (p * q * std::sqrt(p + q));
    d2eexy[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                       C89 * C95 + C79 * C100) *
                          C151 +
                      (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                       C89 * C154 + C79 * C159) *
                          C19609) *
                         C19645 * C19656 * C1523 -
                     ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 +
                       C87 * C153 + C77 * C158) *
                          C19609 +
                      (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                       C87 * C94 + C77 * C99) *
                          C151) *
                         C19645 * C19656 * C1524) *
                        C2069 +
                    (((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
                       C89 * C2071 + C79 * C2072) *
                          C151 +
                      (C87 * C1133 + C77 * C1139 + C88 * C1132 + C78 * C1138 +
                       C89 * C2125 + C79 * C2126) *
                          C19609) *
                         C19645 * C19656 * C1524 -
                     ((C89 * C1132 + C79 * C1138 + C88 * C1133 + C78 * C1139 +
                       C87 * C1134 + C77 * C1140) *
                          C19609 +
                      (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                       C87 * C1072 + C77 * C1081) *
                          C151) *
                         C19645 * C19656 * C1523) *
                        C2070)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((((C3101 * C93 + C19577 * C98) * C151 +
                       (C3101 * C152 + C19577 * C157) * C19609) *
                          C3098 +
                      (C3468 * C151 + C3529 * C19609) * C3099 +
                      (C3470 * C151 + C3530 * C19609) * C3100) *
                         C19656 * C1523 -
                     ((C4407 * C19609 + C4344 * C151) * C3100 +
                      (C4406 * C19609 + C4342 * C151) * C3099 +
                      ((C3101 * C153 + C19577 * C158) * C19609 +
                       (C3101 * C94 + C19577 * C99) * C151) *
                          C3098) *
                         C19656 * C1524) *
                        C2069 +
                    ((((C3101 * C1071 + C19577 * C1080) * C151 +
                       (C3101 * C1133 + C19577 * C1139) * C19609) *
                          C3098 +
                      ((C3101 * C2612 + C19577 * C2615) * C151 +
                       (C3101 * C2674 + C19577 * C2677) * C19609) *
                          C3099 +
                      ((C3101 * C4849 + C19577 * C4850) * C151 +
                       (C3101 * C4903 + C19577 * C4904) * C19609) *
                          C3100) *
                         C19656 * C1524 -
                     (((C3101 * C3973 + C19577 * C3976) * C19609 +
                       (C3101 * C3923 + C19577 * C3927) * C151) *
                          C3100 +
                      ((C3101 * C2673 + C19577 * C2676) * C19609 +
                       (C3101 * C2611 + C19577 * C2614) * C151) *
                          C3099 +
                      ((C3101 * C1134 + C19577 * C1140) * C19609 +
                       (C3101 * C1072 + C19577 * C1081) * C151) *
                          C3098) *
                         C19656 * C1523) *
                        C2070)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C2177 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C2069 -
                     (C89 * C1070 + C79 * C1079 + C88 * C1071 + C78 * C1080 +
                      C87 * C1072 + C77 * C1081) *
                         C2178 -
                     (C89 * C1185 + C79 * C1191 + C88 * C1186 + C78 * C1192 +
                      C87 * C1187 + C77 * C1193) *
                         C2070) *
                        C19645 * C19656 * C19609 * C1523 +
                    ((C87 * C1071 + C77 * C1080 + C88 * C1070 + C78 * C1079 +
                      C89 * C2071 + C79 * C2072) *
                         C2178 -
                     ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                       C87 * C202 + C77 * C207) *
                          C2069 +
                      (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                       C87 * C94 + C77 * C99) *
                          C2177) +
                     (C87 * C1186 + C77 * C1192 + C88 * C1185 + C78 * C1191 +
                      C89 * C2179 + C79 * C2180) *
                         C2070) *
                        C19645 * C19656 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C2177 +
                      (C3101 * C201 + C19577 * C206) * C2069 -
                      (C3101 * C1072 + C19577 * C1081) * C2178 -
                      (C3101 * C1187 + C19577 * C1193) * C2070) *
                         C3098 +
                     (C3468 * C2177 + C3583 * C2069 -
                      (C3101 * C2611 + C19577 * C2614) * C2178 -
                      (C3101 * C2729 + C19577 * C2732) * C2070) *
                         C3099 +
                     (C3470 * C2177 + C3584 * C2069 -
                      (C3101 * C3923 + C19577 * C3927) * C2178 -
                      (C3101 * C4018 + C19577 * C4021) * C2070) *
                         C3100) *
                        C19656 * C19609 * C1523 +
                    (((C3101 * C1071 + C19577 * C1080) * C2178 -
                      ((C3101 * C202 + C19577 * C207) * C2069 +
                       (C3101 * C94 + C19577 * C99) * C2177) +
                      (C3101 * C1186 + C19577 * C1192) * C2070) *
                         C3098 +
                     ((C3101 * C2612 + C19577 * C2615) * C2178 -
                      (C4466 * C2069 + C4342 * C2177) +
                      (C3101 * C2730 + C19577 * C2733) * C2070) *
                         C3099 +
                     ((C3101 * C4849 + C19577 * C4850) * C2178 -
                      (C4467 * C2069 + C4344 * C2177) +
                      (C3101 * C4955 + C19577 * C4956) * C2070) *
                         C3100) *
                        C19656 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C1527 +
            (C249 * C101 + C19645 * C255) * C1523 - C273 * C1528 -
            C274 * C1524) *
               C19656 * C77 +
           (C273 * C1527 + C274 * C1523 - C275 * C1528 - C276 * C1524) *
               C19656 * C78 +
           (C275 * C1527 + C276 * C1523 - C277 * C1528 - C278 * C1524) *
               C19656 * C79) *
              C2069 +
          ((C2242 * C1528 -
            ((C249 * C1078 + C19645 * C1243) * C1523 +
             (C249 * C1072 + C19645 * C1237) * C1527) +
            C2243 * C1524) *
               C19656 * C77 +
           (C2244 * C1528 - (C2243 * C1523 + C2242 * C1527) + C2245 * C1524) *
               C19656 * C78 +
           ((C249 * C2071 + C19645 * C2231) * C1528 -
            (C2245 * C1523 + C2244 * C1527) +
            (C249 * C2073 + C19645 * C2232) * C1524) *
               C19656 * C79) *
              C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C1527 +
           (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
            C3218 * C641 + C3100 * C800) *
               C1523 -
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C1528 -
           (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
            C3216 * C102 + C3098 * C256) *
               C1524) *
              C19656 * C19577 * C2069 +
          ((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 + C3099 * C2786 +
            C3218 * C4849 + C3100 * C5007) *
               C1528 -
           ((C3218 * C3926 + C3100 * C4064 + C3217 * C2617 + C3099 * C2788 +
             C3216 * C1078 + C3098 * C1243) *
                C1523 +
            (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
             C3216 * C1072 + C3098 * C1237) *
                C1527) +
           (C3216 * C1077 + C3098 * C1242 + C3217 * C2618 + C3099 * C2789 +
            C3218 * C4851 + C3100 * C5008) *
               C1524) *
              C19656 * C19577 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C249 * C93 + C19645 * C250) * C151 +
             (C249 * C152 + C19645 * C316) * C19609) *
                C19656 * C77 +
            (C322 + C334) * C19656 * C78 + C338 * C79) *
               C1523 -
           ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
            (C334 + C322) * C19656 * C77) *
               C1524) *
              C2069 +
          (((C2297 + C2305) * C19656 * C77 + (C2300 + C2306) * C19656 * C78 +
            ((C249 * C2071 + C19645 * C2231) * C151 +
             (C249 * C2125 + C19645 * C2295) * C19609) *
                C19656 * C79) *
               C1524 -
           ((C2306 + C2300) * C19656 * C79 + (C2305 + C2297) * C19656 * C78 +
            ((C249 * C1134 + C19645 * C1287) * C19609 +
             (C249 * C1072 + C19645 * C1237) * C151) *
                C19656 * C77) *
               C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
             C3218 * C629 + C3100 * C794) *
                C151 +
            (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
             C3218 * C694 + C3100 * C842) *
                C19609) *
               C19656 * C19577 * C1523 -
           ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
             C3216 * C153 + C3098 * C317) *
                C19609 +
            (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
             C3216 * C94 + C3098 * C251) *
                C151) *
               C19656 * C19577 * C1524) *
              C2069 +
          (((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 + C3099 * C2786 +
             C3218 * C4849 + C3100 * C5007) *
                C151 +
            (C3216 * C1133 + C3098 * C1286 + C3217 * C2674 + C3099 * C2842 +
             C3218 * C4903 + C3100 * C5059) *
                C19609) *
               C19656 * C19577 * C1524 -
           ((C3218 * C3973 + C3100 * C4105 + C3217 * C2673 + C3099 * C2841 +
             C3216 * C1134 + C3098 * C1287) *
                C19609 +
            (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 + C3099 * C2785 +
             C3216 * C1072 + C3098 * C1237) *
                C151) *
               C19656 * C19577 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C2177 +
                      (C249 * C201 + C19645 * C376) * C2069 -
                      (C249 * C1072 + C19645 * C1237) * C2178 -
                      (C249 * C1187 + C19645 * C1329) * C2070) *
                         C19656 * C77 +
                     (C2358 + C2359 - C2360 - C2370) * C19656 * C78 +
                     (C2363 + C2364 - C2365 - C2371) * C19656 * C79) *
                        C19609 * C1523 +
                    ((C2360 - (C2359 + C2358) + C2370) * C19656 * C77 +
                     (C2365 - (C2364 + C2363) + C2371) * C19656 * C78 +
                     ((C249 * C2071 + C19645 * C2231) * C2178 -
                      (C393 * C2069 + C277 * C2177) +
                      (C249 * C2179 + C19645 * C2356) * C2070) *
                         C19656 * C79) *
                        C19609 * C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C2177 +
                     (C3216 * C201 + C3098 * C376 + C3217 * C743 +
                      C3099 * C887 + C3218 * C744 + C3100 * C888) *
                         C2069 -
                     (C3218 * C3923 + C3100 * C4061 + C3217 * C2611 +
                      C3099 * C2785 + C3216 * C1072 + C3098 * C1237) *
                         C2178 -
                     (C3218 * C4018 + C3100 * C4146 + C3217 * C2729 +
                      C3099 * C2894 + C3216 * C1187 + C3098 * C1329) *
                         C2070) *
                        C19656 * C19577 * C19609 * C1523 +
                    ((C3216 * C1071 + C3098 * C1236 + C3217 * C2612 +
                      C3099 * C2786 + C3218 * C4849 + C3100 * C5007) *
                         C2178 -
                     ((C3218 * C745 + C3100 * C889 + C3217 * C742 +
                       C3099 * C886 + C3216 * C202 + C3098 * C377) *
                          C2069 +
                      (C3218 * C630 + C3100 * C795 + C3217 * C627 +
                       C3099 * C792 + C3216 * C94 + C3098 * C251) *
                          C2177) +
                     (C3216 * C1186 + C3098 * C1331 + C3217 * C2730 +
                      C3099 * C2895 + C3218 * C4955 + C3100 * C5110) *
                         C2070) *
                        C19656 * C19577 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C77 +
           (C460 * C1527 + C461 * C1523 - C462 * C1528 - C463 * C1524) * C78 +
           (C462 * C1527 + C463 * C1523 - C464 * C1528 - C465 * C1524) * C79) *
              C19645 * C2069 +
          ((C2432 * C1528 -
            ((C436 * C1078 + C19656 * C1381) * C1523 +
             (C436 * C1072 + C19656 * C1375) * C1527) +
            C2433 * C1524) *
               C77 +
           (C2434 * C1528 - (C2433 * C1523 + C2432 * C1527) + C2435 * C1524) *
               C78 +
           ((C436 * C2071 + C19656 * C2421) * C1528 -
            (C2435 * C1523 + C2434 * C1527) +
            (C436 * C2073 + C19656 * C2422) * C1524) *
               C79) *
              C19645 * C2070) *
         C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C1527 +
            (C436 * C101 + C19656 * C442) * C1523 - C460 * C1528 -
            C461 * C1524) *
               C19577 * C3098 +
           (C4676 + C4677 - C4678 - C4679) * C19577 * C3099 +
           (C4680 + C4681 - C4688 - C4689) * C19577 * C3100) *
              C2069 +
          ((C2432 * C1528 -
            ((C436 * C1078 + C19656 * C1381) * C1523 +
             (C436 * C1072 + C19656 * C1375) * C1527) +
            C2433 * C1524) *
               C19577 * C3098 +
           ((C436 * C2612 + C19656 * C2948) * C1528 -
            ((C436 * C2617 + C19656 * C2950) * C1523 +
             (C436 * C2611 + C19656 * C2947) * C1527) +
            (C436 * C2618 + C19656 * C2951) * C1524) *
               C19577 * C3099 +
           ((C436 * C4849 + C19656 * C5161) * C1528 -
            ((C436 * C3926 + C19656 * C4190) * C1523 +
             (C436 * C3923 + C19656 * C4187) * C1527) +
            (C436 * C4851 + C19656 * C5162) * C1524) *
               C19577 * C3100) *
              C2070) *
         C19609) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C77 +
            (C509 + C521) * C78 + C524 * C79) *
               C19645 * C1523 -
           ((C523 + C517) * C79 + (C522 + C512) * C78 + (C521 + C509) * C77) *
               C19645 * C1524) *
              C2069 +
          (((C2487 + C2495) * C77 + (C2490 + C2496) * C78 +
            ((C436 * C2071 + C19656 * C2421) * C151 +
             (C436 * C2125 + C19656 * C2485) * C19609) *
                C79) *
               C19645 * C1524 -
           ((C2496 + C2490) * C79 + (C2495 + C2487) * C78 +
            ((C436 * C1134 + C19656 * C1425) * C19609 +
             (C436 * C1072 + C19656 * C1375) * C151) *
                C77) *
               C19645 * C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C436 * C93 + C19656 * C437) * C151 +
             (C436 * C152 + C19656 * C503) * C19609) *
                C19577 * C3098 +
            (C3766 * C151 + C3826 * C19609) * C19577 * C3099 +
            (C3768 * C151 + C3827 * C19609) * C19577 * C3100) *
               C1523 -
           ((C4743 * C19609 + C4686 * C151) * C19577 * C3100 +
            (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
            (C521 + C509) * C19577 * C3098) *
               C1524) *
              C2069 +
          (((C2487 + C2495) * C19577 * C3098 +
            ((C436 * C2612 + C19656 * C2948) * C151 +
             (C436 * C2674 + C19656 * C3004) * C19609) *
                C19577 * C3099 +
            ((C436 * C4849 + C19656 * C5161) * C151 +
             (C436 * C4903 + C19656 * C5213) * C19609) *
                C19577 * C3100) *
               C1524 -
           (((C436 * C3973 + C19656 * C4231) * C19609 +
             (C436 * C3923 + C19656 * C4187) * C151) *
                C19577 * C3100 +
            ((C436 * C2673 + C19656 * C3003) * C19609 +
             (C436 * C2611 + C19656 * C2947) * C151) *
                C19577 * C3099 +
            ((C436 * C1134 + C19656 * C1425) * C19609 +
             (C436 * C1072 + C19656 * C1375) * C151) *
                C19577 * C3098) *
               C1523) *
              C2070)) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] += (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C77 +
                     (C2548 + C2549 - C2550 - C2560) * C78 +
                     (C2553 + C2554 - C2555 - C2561) * C79) *
                        C19645 * C19609 * C1523 +
                    ((C2550 - (C2549 + C2548) + C2560) * C77 +
                     (C2555 - (C2554 + C2553) + C2561) * C78 +
                     ((C436 * C2071 + C19656 * C2421) * C2178 -
                      (C579 * C2069 + C464 * C2177) +
                      (C436 * C2179 + C19656 * C2546) * C2070) *
                         C79) *
                        C19645 * C19609 * C1524)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                   ((((C436 * C93 + C19656 * C437) * C2177 +
                      (C436 * C201 + C19656 * C562) * C2069 -
                      (C436 * C1072 + C19656 * C1375) * C2178 -
                      (C436 * C1187 + C19656 * C1467) * C2070) *
                         C19577 * C3098 +
                     (C3766 * C2177 + C3878 * C2069 -
                      (C436 * C2611 + C19656 * C2947) * C2178 -
                      (C436 * C2729 + C19656 * C3056) * C2070) *
                         C19577 * C3099 +
                     (C3768 * C2177 + C3879 * C2069 -
                      (C436 * C3923 + C19656 * C4187) * C2178 -
                      (C436 * C4018 + C19656 * C4273) * C2070) *
                         C19577 * C3100) *
                        C19609 * C1523 +
                    ((C2550 - (C2549 + C2548) + C2560) * C19577 * C3098 +
                     ((C436 * C2612 + C19656 * C2948) * C2178 -
                      (C2017 * C2069 + C1890 * C2177) +
                      (C436 * C2730 + C19656 * C3057) * C2070) *
                         C19577 * C3099 +
                     ((C436 * C4849 + C19656 * C5161) * C2178 -
                      (C4798 * C2069 + C4686 * C2177) +
                      (C436 * C4955 + C19656 * C5264) * C2070) *
                         C19577 * C3100) *
                        C19609 * C1524)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C90 +
                    (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                     C89 * C103 + C79 * C110) *
                        C80 -
                    (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                     C87 * C94 + C77 * C99) *
                        C91 -
                    (C89 * C105 + C79 * C111 + C88 * C103 + C78 * C110 +
                     C87 * C102 + C77 * C109) *
                        C81 +
                    (C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                     C89 * C97 + C79 * C106) *
                        C92 +
                    (C87 * C103 + C77 * C110 + C88 * C105 + C78 * C111 +
                     C89 * C107 + C79 * C112) *
                        C82) *
                   C19645 * C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C625 +
                     (C87 * C101 + C77 * C108 + C88 * C102 + C78 * C109 +
                      C89 * C103 + C79 * C110) *
                         C19588) *
                        C19645 * C19656 * C19620 * C622 -
                    ((C89 * C632 + C79 * C644 + C88 * C633 + C78 * C645 +
                      C87 * C634 + C77 * C646) *
                         C19588 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C625) *
                        C19645 * C19656 * C19620 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C625 +
                     (C87 * C641 + C77 * C647 + C88 * C642 + C78 * C648 +
                      C89 * C643 + C79 * C649) *
                         C19588) *
                        C19645 * C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C90 +
                     (C3101 * C101 + C19577 * C108) * C80 -
                     (C3101 * C94 + C19577 * C99) * C91 -
                     (C3101 * C102 + C19577 * C109) * C81 +
                     (C3101 * C95 + C19577 * C100) * C92 +
                     (C3101 * C103 + C19577 * C110) * C82) *
                        C3098 +
                    ((C3101 * C628 + C19577 * C637) * C90 +
                     (C3101 * C634 + C19577 * C646) * C80 -
                     (C3101 * C627 + C19577 * C636) * C91 -
                     (C3101 * C633 + C19577 * C645) * C81 +
                     (C3101 * C626 + C19577 * C635) * C92 +
                     (C3101 * C632 + C19577 * C644) * C82) *
                        C3099 +
                    ((C3101 * C629 + C19577 * C638) * C90 +
                     (C3101 * C641 + C19577 * C647) * C80 -
                     (C3101 * C630 + C19577 * C639) * C91 -
                     (C3101 * C642 + C19577 * C648) * C81 +
                     (C3101 * C631 + C19577 * C640) * C92 +
                     (C3101 * C643 + C19577 * C649) * C82) *
                        C3100) *
                   C19656 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C625 +
                      (C3101 * C101 + C19577 * C108) * C19588) *
                         C3098 +
                     (C3474 + C3475) * C3099 + C3480 * C3100) *
                        C19656 * C19620 * C622 -
                    ((C3478 + C3479) * C3100 + (C3477 + C3476) * C3099 +
                     (C3475 + C3474) * C3098) *
                        C19656 * C19620 * C623 +
                    (C3480 * C3098 + (C3479 + C3478) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C625 +
                      (C3101 * C3452 + C19577 * C3454) * C19588) *
                         C3100) *
                        C19656 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C151 +
                     (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                      C89 * C154 + C79 * C159) *
                         C19609) *
                        C19645 * C19656 * C80 -
                    ((C89 * C155 + C79 * C160 + C88 * C154 + C78 * C159 +
                      C87 * C153 + C77 * C158) *
                         C19609 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C151) *
                        C19645 * C19656 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C151 +
                     (C87 * C154 + C77 * C159 + C88 * C155 + C78 * C160 +
                      C89 * C156 + C79 * C161) *
                         C19609) *
                        C19645 * C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 + C89 * C95 +
                     C79 * C100) *
                        C688 +
                    (C87 * C152 + C77 * C157 + C88 * C153 + C78 * C158 +
                     C89 * C154 + C79 * C159) *
                        C622 -
                    (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                     C87 * C628 + C77 * C637) *
                        C689 -
                    (C89 * C691 + C79 * C697 + C88 * C692 + C78 * C698 +
                     C87 * C693 + C77 * C699) *
                        C623 +
                    (C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                     C89 * C631 + C79 * C640) *
                        C690 +
                    (C87 * C694 + C77 * C700 + C88 * C695 + C78 * C701 +
                     C89 * C696 + C79 * C702) *
                        C624) *
                   C19645 * C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C151 +
                      (C3101 * C152 + C19577 * C157) * C19609) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C151 +
                      (C3101 * C693 + C19577 * C699) * C19609) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C151 +
                      (C3101 * C694 + C19577 * C700) * C19609) *
                         C3100) *
                        C19656 * C80 -
                    (((C3101 * C695 + C19577 * C701) * C19609 +
                      (C3101 * C630 + C19577 * C639) * C151) *
                         C3100 +
                     ((C3101 * C692 + C19577 * C698) * C19609 +
                      (C3101 * C627 + C19577 * C636) * C151) *
                         C3099 +
                     ((C3101 * C153 + C19577 * C158) * C19609 +
                      (C3101 * C94 + C19577 * C99) * C151) *
                         C3098) *
                        C19656 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C151 +
                      (C3101 * C154 + C19577 * C159) * C19609) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C151 +
                      (C3101 * C691 + C19577 * C697) * C19609) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C151 +
                      (C3101 * C696 + C19577 * C702) * C19609) *
                         C3100) *
                        C19656 * C82) *
                   C19620) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3101 * C93 + C19577 * C98) * C688 +
                     (C3101 * C152 + C19577 * C157) * C622 - C3468 * C689 -
                     C3529 * C623 + C3470 * C690 + C3530 * C624) *
                        C3098 +
                    (C3468 * C688 + C3529 * C622 - C3470 * C689 - C3530 * C623 +
                     C3473 * C690 + C3531 * C624) *
                        C3099 +
                    (C3470 * C688 + C3530 * C622 - C3473 * C689 - C3531 * C623 +
                     (C3101 * C3448 + C19577 * C3451) * C690 +
                     (C3101 * C3519 + C19577 * C3521) * C624) *
                        C3100) *
                   C19656 * C19588 * C19620) /
                      (p * q * std::sqrt(p + q));
    d2eexz[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C19609 * C80 -
                    ((C89 * C204 + C79 * C209 + C88 * C203 + C78 * C208 +
                      C87 * C202 + C77 * C207) *
                         C19620 +
                     (C89 * C96 + C79 * C104 + C88 * C95 + C78 * C100 +
                      C87 * C94 + C77 * C99) *
                         C200) *
                        C19645 * C19656 * C19609 * C81 +
                    ((C87 * C95 + C77 * C100 + C88 * C96 + C78 * C104 +
                      C89 * C97 + C79 * C106) *
                         C200 +
                     (C87 * C203 + C77 * C208 + C88 * C204 + C78 * C209 +
                      C89 * C205 + C79 * C210) *
                         C19620) *
                        C19645 * C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C87 * C93 + C77 * C98 + C88 * C94 + C78 * C99 +
                      C89 * C95 + C79 * C100) *
                         C200 +
                     (C87 * C201 + C77 * C206 + C88 * C202 + C78 * C207 +
                      C89 * C203 + C79 * C208) *
                         C19620) *
                        C19645 * C19656 * C622 -
                    ((C89 * C741 + C79 * C747 + C88 * C742 + C78 * C748 +
                      C87 * C743 + C77 * C749) *
                         C19620 +
                     (C89 * C626 + C79 * C635 + C88 * C627 + C78 * C636 +
                      C87 * C628 + C77 * C637) *
                         C200) *
                        C19645 * C19656 * C623 +
                    ((C87 * C629 + C77 * C638 + C88 * C630 + C78 * C639 +
                      C89 * C631 + C79 * C640) *
                         C200 +
                     (C87 * C744 + C77 * C750 + C88 * C745 + C78 * C751 +
                      C89 * C746 + C79 * C752) *
                         C19620) *
                        C19645 * C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     ((C3101 * C628 + C19577 * C637) * C200 +
                      (C3101 * C743 + C19577 * C749) * C19620) *
                         C3099 +
                     ((C3101 * C629 + C19577 * C638) * C200 +
                      (C3101 * C744 + C19577 * C750) * C19620) *
                         C3100) *
                        C19656 * C19609 * C80 -
                    (((C3101 * C745 + C19577 * C751) * C19620 +
                      (C3101 * C630 + C19577 * C639) * C200) *
                         C3100 +
                     ((C3101 * C742 + C19577 * C748) * C19620 +
                      (C3101 * C627 + C19577 * C636) * C200) *
                         C3099 +
                     ((C3101 * C202 + C19577 * C207) * C19620 +
                      (C3101 * C94 + C19577 * C99) * C200) *
                         C3098) *
                        C19656 * C19609 * C81 +
                    (((C3101 * C95 + C19577 * C100) * C200 +
                      (C3101 * C203 + C19577 * C208) * C19620) *
                         C3098 +
                     ((C3101 * C626 + C19577 * C635) * C200 +
                      (C3101 * C741 + C19577 * C747) * C19620) *
                         C3099 +
                     ((C3101 * C631 + C19577 * C640) * C200 +
                      (C3101 * C746 + C19577 * C752) * C19620) *
                         C3100) *
                        C19656 * C19609 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C3101 * C93 + C19577 * C98) * C200 +
                      (C3101 * C201 + C19577 * C206) * C19620) *
                         C3098 +
                     (C3574 + C3586) * C3099 + C3589 * C3100) *
                        C19656 * C622 -
                    ((C3588 + C3582) * C3100 + (C3587 + C3577) * C3099 +
                     (C3586 + C3574) * C3098) *
                        C19656 * C623 +
                    (C3589 * C3098 + (C3582 + C3588) * C3099 +
                     ((C3101 * C3448 + C19577 * C3451) * C200 +
                      (C3101 * C3570 + C19577 * C3572) * C19620) *
                         C3100) *
                        C19656 * C624) *
                   C19588) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[24] += (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C249 * C93 + C19645 * C250) * C90 +
                     (C249 * C101 + C19645 * C255) * C80 - C273 * C91 -
                     C274 * C81 + C275 * C92 + C276 * C82) *
                        C19656 * C77 +
                    (C273 * C90 + C274 * C80 - C275 * C91 - C276 * C81 +
                     C277 * C92 + C278 * C82) *
                        C19656 * C78 +
                    (C275 * C90 + C276 * C80 - C277 * C91 - C278 * C81 +
                     (C249 * C97 + C19645 * C254) * C92 +
                     (C249 * C107 + C19645 * C259) * C82) *
                        C19656 * C79) *
                   C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((((C249 * C93 + C19645 * C250) * C625 +
                      (C249 * C101 + C19645 * C255) * C19588) *
                         C19656 * C77 +
                     (C273 * C625 + C274 * C19588) * C19656 * C78 +
                     (C275 * C625 + C276 * C19588) * C19656 * C79) *
                        C19620 * C622 -
                    (((C249 * C632 + C19645 * C797) * C19588 +
                      (C249 * C626 + C19645 * C791) * C625) *
                         C19656 * C79 +
                     ((C249 * C633 + C19645 * C798) * C19588 +
                      (C249 * C627 + C19645 * C792) * C625) *
                         C19656 * C78 +
                     ((C249 * C634 + C19645 * C799) * C19588 +
                      (C249 * C628 + C19645 * C793) * C625) *
                         C19656 * C77) *
                        C19620 * C623 +
                    (((C249 * C629 + C19645 * C794) * C625 +
                      (C249 * C641 + C19645 * C800) * C19588) *
                         C19656 * C77 +
                     ((C249 * C630 + C19645 * C795) * C625 +
                      (C249 * C642 + C19645 * C801) * C19588) *
                         C19656 * C78 +
                     ((C249 * C631 + C19645 * C796) * C625 +
                      (C249 * C643 + C19645 * C802) * C19588) *
                         C19656 * C79) *
                        C19620 * C624)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                     C3218 * C629 + C3100 * C794) *
                        C90 +
                    (C3216 * C101 + C3098 * C255 + C3217 * C634 + C3099 * C799 +
                     C3218 * C641 + C3100 * C800) *
                        C80 -
                    (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
                     C3216 * C94 + C3098 * C251) *
                        C91 -
                    (C3218 * C642 + C3100 * C801 + C3217 * C633 + C3099 * C798 +
                     C3216 * C102 + C3098 * C256) *
                        C81 +
                    (C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
                     C3218 * C631 + C3100 * C796) *
                        C92 +
                    (C3216 * C103 + C3098 * C257 + C3217 * C632 + C3099 * C797 +
                     C3218 * C643 + C3100 * C802) *
                        C82) *
                   C19656 * C19577 * C19620 * C19609) /
                      (p * q * std::sqrt(p + q)) +
                  (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                   (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
                      C3218 * C629 + C3100 * C794) *
                         C625 +
                     (C3216 * C101 + C3098 * C255 + C3217 * C634 +
                      C3099 * C799 + C3218 * C641 + C3100 * C800) *
                         C19588) *
                        C19656 * C19577 * C19620 * C622 -
                    ((C3218 * C3449 + C3100 * C3629 + C3217 * C641 +
                      C3099 * C800 + C3216 * C634 + C3098 * C799) *
                         C19588 +
                     (C3218 * C3447 + C3100 * C3627 + C3217 * C629 +
                      C3099 * C794 + C3216 * C628 + C3098 * C793) *
                         C625) *
                        C19656 * C19577 * C19620 * C623 +
                    ((C3216 * C629 + C3098 * C794 + C3217 * C3447 +
                      C3099 * C3627 + C3218 * C3448 + C3100 * C3628) *
                         C625 +
                     (C3216 * C641 + C3098 * C800 + C3217 * C3449 +
                      C3099 * C3629 + C3218 * C3452 + C3100 * C3630) *
                         C19588) *
                        C19656 * C19577 * C19620 * C624)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C151 +
            (C249 * C152 + C19645 * C316) * C19609) *
               C19656 * C77 +
           (C322 + C334) * C19656 * C78 + C338 * C79) *
              C80 -
          ((C336 + C330) * C19656 * C79 + (C335 + C325) * C19656 * C78 +
           (C334 + C322) * C19656 * C77) *
              C81 +
          (C338 * C77 + (C330 + C336) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C151 +
            (C249 * C156 + C19645 * C320) * C19609) *
               C19656 * C79) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C249 * C93 + C19645 * C250) * C688 +
           (C249 * C152 + C19645 * C316) * C622 -
           (C249 * C628 + C19645 * C793) * C689 -
           (C249 * C693 + C19645 * C841) * C623 +
           (C249 * C629 + C19645 * C794) * C690 +
           (C249 * C694 + C19645 * C842) * C624) *
              C19656 * C77 +
          (C273 * C688 + C331 * C622 - (C249 * C627 + C19645 * C792) * C689 -
           (C249 * C692 + C19645 * C843) * C623 +
           (C249 * C630 + C19645 * C795) * C690 +
           (C249 * C695 + C19645 * C844) * C624) *
              C19656 * C78 +
          (C275 * C688 + C332 * C622 - (C249 * C626 + C19645 * C791) * C689 -
           (C249 * C691 + C19645 * C845) * C623 +
           (C249 * C631 + C19645 * C796) * C690 +
           (C249 * C696 + C19645 * C846) * C624) *
              C19656 * C79) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C151 +
           (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
            C3218 * C694 + C3100 * C842) *
               C19609) *
              C19656 * C19577 * C80 -
          ((C3218 * C695 + C3100 * C844 + C3217 * C692 + C3099 * C843 +
            C3216 * C153 + C3098 * C317) *
               C19609 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C151) *
              C19656 * C19577 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C151 +
           (C3216 * C154 + C3098 * C318 + C3217 * C691 + C3099 * C845 +
            C3218 * C696 + C3100 * C846) *
               C19609) *
              C19656 * C19577 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
           C3218 * C629 + C3100 * C794) *
              C688 +
          (C3216 * C152 + C3098 * C316 + C3217 * C693 + C3099 * C841 +
           C3218 * C694 + C3100 * C842) *
              C622 -
          (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
           C3216 * C628 + C3098 * C793) *
              C689 -
          (C3218 * C3518 + C3100 * C3669 + C3217 * C694 + C3099 * C842 +
           C3216 * C693 + C3098 * C841) *
              C623 +
          (C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
           C3218 * C3448 + C3100 * C3628) *
              C690 +
          (C3216 * C694 + C3098 * C842 + C3217 * C3518 + C3099 * C3669 +
           C3218 * C3519 + C3100 * C3670) *
              C624) *
         C19656 * C19577 * C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C19609 * C80 -
          ((C396 + C390) * C19656 * C79 + (C395 + C385) * C19656 * C78 +
           (C394 + C382) * C19656 * C77) *
              C19609 * C81 +
          (C398 * C77 + (C390 + C396) * C19656 * C78 +
           ((C249 * C97 + C19645 * C254) * C200 +
            (C249 * C205 + C19645 * C380) * C19620) *
               C19656 * C79) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C249 * C93 + C19645 * C250) * C200 +
            (C249 * C201 + C19645 * C376) * C19620) *
               C19656 * C77 +
           (C382 + C394) * C19656 * C78 + C398 * C79) *
              C622 -
          (((C249 * C741 + C19645 * C885) * C19620 +
            (C249 * C626 + C19645 * C791) * C200) *
               C19656 * C79 +
           ((C249 * C742 + C19645 * C886) * C19620 +
            (C249 * C627 + C19645 * C792) * C200) *
               C19656 * C78 +
           ((C249 * C743 + C19645 * C887) * C19620 +
            (C249 * C628 + C19645 * C793) * C200) *
               C19656 * C77) *
              C623 +
          (((C249 * C629 + C19645 * C794) * C200 +
            (C249 * C744 + C19645 * C888) * C19620) *
               C19656 * C77 +
           ((C249 * C630 + C19645 * C795) * C200 +
            (C249 * C745 + C19645 * C889) * C19620) *
               C19656 * C78 +
           ((C249 * C631 + C19645 * C796) * C200 +
            (C249 * C746 + C19645 * C890) * C19620) *
               C19656 * C79) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C19609 * C80 -
          ((C3218 * C745 + C3100 * C889 + C3217 * C742 + C3099 * C886 +
            C3216 * C202 + C3098 * C377) *
               C19620 +
           (C3218 * C630 + C3100 * C795 + C3217 * C627 + C3099 * C792 +
            C3216 * C94 + C3098 * C251) *
               C200) *
              C19656 * C19577 * C19609 * C81 +
          ((C3216 * C95 + C3098 * C252 + C3217 * C626 + C3099 * C791 +
            C3218 * C631 + C3100 * C796) *
               C200 +
           (C3216 * C203 + C3098 * C378 + C3217 * C741 + C3099 * C885 +
            C3218 * C746 + C3100 * C890) *
               C19620) *
              C19656 * C19577 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3216 * C93 + C3098 * C250 + C3217 * C628 + C3099 * C793 +
            C3218 * C629 + C3100 * C794) *
               C200 +
           (C3216 * C201 + C3098 * C376 + C3217 * C743 + C3099 * C887 +
            C3218 * C744 + C3100 * C888) *
               C19620) *
              C19656 * C19577 * C622 -
          ((C3218 * C3569 + C3100 * C3709 + C3217 * C744 + C3099 * C888 +
            C3216 * C743 + C3098 * C887) *
               C19620 +
           (C3218 * C3447 + C3100 * C3627 + C3217 * C629 + C3099 * C794 +
            C3216 * C628 + C3098 * C793) *
               C200) *
              C19656 * C19577 * C623 +
          ((C3216 * C629 + C3098 * C794 + C3217 * C3447 + C3099 * C3627 +
            C3218 * C3448 + C3100 * C3628) *
               C200 +
           (C3216 * C744 + C3098 * C888 + C3217 * C3569 + C3099 * C3709 +
            C3218 * C3570 + C3100 * C3710) *
               C19620) *
              C19656 * C19577 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C77 +
          (C460 * C90 + C461 * C80 - C462 * C91 - C463 * C81 + C464 * C92 +
           C465 * C82) *
              C78 +
          (C462 * C90 + C463 * C80 - C464 * C91 - C465 * C81 +
           (C436 * C97 + C19656 * C441) * C92 +
           (C436 * C107 + C19656 * C446) * C82) *
              C79) *
         C19645 * C19620 * C19609) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C77 +
           (C460 * C625 + C461 * C19588) * C78 +
           (C462 * C625 + C463 * C19588) * C79) *
              C19645 * C19620 * C622 -
          (((C436 * C632 + C19656 * C935) * C19588 +
            (C436 * C626 + C19656 * C929) * C625) *
               C79 +
           ((C436 * C633 + C19656 * C936) * C19588 +
            (C436 * C627 + C19656 * C930) * C625) *
               C78 +
           ((C436 * C634 + C19656 * C937) * C19588 +
            (C436 * C628 + C19656 * C931) * C625) *
               C77) *
              C19645 * C19620 * C623 +
          (((C436 * C629 + C19656 * C932) * C625 +
            (C436 * C641 + C19656 * C938) * C19588) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C625 +
            (C436 * C642 + C19656 * C939) * C19588) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C625 +
            (C436 * C643 + C19656 * C940) * C19588) *
               C79) *
              C19645 * C19620 * C624)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C90 +
           (C436 * C101 + C19656 * C442) * C80 - C460 * C91 - C461 * C81 +
           C462 * C92 + C463 * C82) *
              C19577 * C3098 +
          ((C436 * C628 + C19656 * C931) * C90 +
           (C436 * C634 + C19656 * C937) * C80 - C1890 * C91 - C1891 * C81 +
           C1892 * C92 + C1893 * C82) *
              C19577 * C3099 +
          ((C436 * C629 + C19656 * C932) * C90 +
           (C436 * C641 + C19656 * C938) * C80 -
           (C436 * C630 + C19656 * C933) * C91 -
           (C436 * C642 + C19656 * C939) * C81 +
           (C436 * C631 + C19656 * C934) * C92 +
           (C436 * C643 + C19656 * C940) * C82) *
              C19577 * C3100) *
         C19620 * C19609) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C625 +
            (C436 * C101 + C19656 * C442) * C19588) *
               C19577 * C3098 +
           (C3772 + C3773) * C19577 * C3099 + C3779 * C3100) *
              C19620 * C622 -
          ((C3776 + C3777) * C19577 * C3100 + (C3775 + C3774) * C19577 * C3099 +
           (C3773 + C3772) * C19577 * C3098) *
              C19620 * C623 +
          (C3779 * C3098 + (C3777 + C3776) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C625 +
            (C436 * C3452 + C19656 * C3752) * C19588) *
               C19577 * C3100) *
              C19620 * C624)) /
            (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C77 +
           (C509 + C521) * C78 + C524 * C79) *
              C19645 * C80 -
          ((C523 + C517) * C79 + (C522 + C512) * C78 + (C521 + C509) * C77) *
              C19645 * C81 +
          (C524 * C77 + (C517 + C523) * C78 +
           ((C436 * C97 + C19656 * C441) * C151 +
            (C436 * C156 + C19656 * C507) * C19609) *
               C79) *
              C19645 * C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 -
           (C436 * C628 + C19656 * C931) * C689 -
           (C436 * C693 + C19656 * C979) * C623 +
           (C436 * C629 + C19656 * C932) * C690 +
           (C436 * C694 + C19656 * C980) * C624) *
              C77 +
          (C460 * C688 + C518 * C622 - (C436 * C627 + C19656 * C930) * C689 -
           (C436 * C692 + C19656 * C981) * C623 +
           (C436 * C630 + C19656 * C933) * C690 +
           (C436 * C695 + C19656 * C982) * C624) *
              C78 +
          (C462 * C688 + C519 * C622 - (C436 * C626 + C19656 * C929) * C689 -
           (C436 * C691 + C19656 * C983) * C623 +
           (C436 * C631 + C19656 * C934) * C690 +
           (C436 * C696 + C19656 * C984) * C624) *
              C79) *
         C19645 * C19588 * C19620) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C151 +
            (C436 * C152 + C19656 * C503) * C19609) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C151 +
            (C436 * C693 + C19656 * C979) * C19609) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C151 +
            (C436 * C694 + C19656 * C980) * C19609) *
               C19577 * C3100) *
              C80 -
          (((C436 * C695 + C19656 * C982) * C19609 +
            (C436 * C630 + C19656 * C933) * C151) *
               C19577 * C3100 +
           (C1955 * C19609 + C1890 * C151) * C19577 * C3099 +
           (C521 + C509) * C19577 * C3098) *
              C81 +
          (C524 * C19577 * C3098 +
           (C1892 * C151 + C1956 * C19609) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C151 +
            (C436 * C696 + C19656 * C984) * C19609) *
               C19577 * C3100) *
              C82) *
         C19620) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C436 * C93 + C19656 * C437) * C688 +
           (C436 * C152 + C19656 * C503) * C622 - C3766 * C689 - C3826 * C623 +
           C3768 * C690 + C3827 * C624) *
              C19577 * C3098 +
          (C3766 * C688 + C3826 * C622 - C3768 * C689 - C3827 * C623 +
           C3771 * C690 + C3828 * C624) *
              C19577 * C3099 +
          (C3768 * C688 + C3827 * C622 - C3771 * C689 - C3828 * C623 +
           (C436 * C3448 + C19656 * C3750) * C690 +
           (C436 * C3519 + C19656 * C3818) * C624) *
              C19577 * C3100) *
         C19588 * C19620) /
            (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C19609 * C80 -
          ((C582 + C576) * C79 + (C581 + C571) * C78 + (C580 + C568) * C77) *
              C19645 * C19609 * C81 +
          (C583 * C77 + (C576 + C582) * C78 +
           ((C436 * C97 + C19656 * C441) * C200 +
            (C436 * C205 + C19656 * C566) * C19620) *
               C79) *
              C19645 * C19609 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C77 +
           (C568 + C580) * C78 + C583 * C79) *
              C19645 * C622 -
          (((C436 * C741 + C19656 * C1023) * C19620 +
            (C436 * C626 + C19656 * C929) * C200) *
               C79 +
           ((C436 * C742 + C19656 * C1024) * C19620 +
            (C436 * C627 + C19656 * C930) * C200) *
               C78 +
           ((C436 * C743 + C19656 * C1025) * C19620 +
            (C436 * C628 + C19656 * C931) * C200) *
               C77) *
              C19645 * C623 +
          (((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C77 +
           ((C436 * C630 + C19656 * C933) * C200 +
            (C436 * C745 + C19656 * C1027) * C19620) *
               C78 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C79) *
              C19645 * C624) *
         C19588) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           ((C436 * C628 + C19656 * C931) * C200 +
            (C436 * C743 + C19656 * C1025) * C19620) *
               C19577 * C3099 +
           ((C436 * C629 + C19656 * C932) * C200 +
            (C436 * C744 + C19656 * C1026) * C19620) *
               C19577 * C3100) *
              C19609 * C80 -
          (((C436 * C745 + C19656 * C1027) * C19620 +
            (C436 * C630 + C19656 * C933) * C200) *
               C19577 * C3100 +
           (C2019 + C2015) * C19577 * C3099 + (C580 + C568) * C19577 * C3098) *
              C19609 * C81 +
          (C583 * C19577 * C3098 + (C2012 + C2018) * C19577 * C3099 +
           ((C436 * C631 + C19656 * C934) * C200 +
            (C436 * C746 + C19656 * C1028) * C19620) *
               C19577 * C3100) *
              C19609 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C436 * C93 + C19656 * C437) * C200 +
            (C436 * C201 + C19656 * C562) * C19620) *
               C19577 * C3098 +
           (C3869 + C3881) * C19577 * C3099 + C3885 * C3100) *
              C622 -
          ((C3883 + C3877) * C19577 * C3100 + (C3882 + C3872) * C19577 * C3099 +
           (C3881 + C3869) * C19577 * C3098) *
              C623 +
          (C3885 * C3098 + (C3877 + C3883) * C19577 * C3099 +
           ((C436 * C3448 + C19656 * C3750) * C200 +
            (C436 * C3570 + C19656 * C3867) * C19620) *
               C19577 * C3100) *
              C624) *
         C19588) /
            (p * q * std::sqrt(p + q));
}
