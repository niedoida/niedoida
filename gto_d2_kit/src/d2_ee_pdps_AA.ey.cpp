/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_pdps_AA.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
//
void second_derivative_ee_1210_11(const double ae,
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
    const double C27482 = 0 * be;
    const double C27508 = 0 * be;
    const double C27589 = 0 * ae;
    const double C27585 = 0 * be;
    const double C27660 = 0 * ae;
    const double C27656 = 0 * be;
    const double C27708 = p + q;
    const double C27707 = p * q;
    const double C27713 = xP - xQ;
    const double C27712 = bs[2];
    const double C27720 = std::pow(ae, 2);
    const double C27718 = bs[3];
    const double C27731 = bs[4];
    const double C27752 = bs[5];
    const double C27783 = yP - yQ;
    const double C27808 = zP - zQ;
    const double C91 = bs[0];
    const double C28533 = ce + de;
    const double C28532 = xC - xD;
    const double C28538 = yC - yD;
    const double C28545 = zC - zD;
    const double C28707 = ce * de;
    const double C27410 = 2 * C27403;
    const double C27407 = -2 * C27402;
    const double C27409 = C27403 * C27401;
    const double C27408 = C27401 * C27402;
    const double C28508 = C27401 * be;
    const double C28507 = C27401 * ae;
    const double C28506 = std::pow(C27401, 2);
    const double C27411 = C27404 / C27400;
    const double C27406 = 2 * C27400;
    const double C27405 = std::pow(C27400, 2);
    const double C27483 = C27403 * C27464;
    const double C28554 = std::pow(C27464, 2);
    const double C28603 = C27464 * be;
    const double C28602 = C27464 * ae;
    const double C27509 = C27403 * C27467;
    const double C28565 = std::pow(C27467, 2);
    const double C28629 = C27467 * be;
    const double C28628 = C27467 * ae;
    const double C27586 = C27464 * C27482;
    const double C27610 = -2 * C27482;
    const double C27657 = C27467 * C27508;
    const double C27681 = -2 * C27508;
    const double C27594 = C27589 / C27400;
    const double C27665 = C27660 / C27400;
    const double C27709 = 2 * C27707;
    const double C27721 = C27713 * ae;
    const double C27717 = std::pow(C27713, 2);
    const double C27786 = C27783 * ae;
    const double C27785 = C27713 * C27783;
    const double C27834 = C27783 * C27713;
    const double C27847 = std::pow(C27783, 2);
    const double C27811 = C27808 * ae;
    const double C27810 = C27713 * C27808;
    const double C27861 = C27783 * C27808;
    const double C27872 = C27808 * C27713;
    const double C27885 = C27808 * C27783;
    const double C27896 = std::pow(C27808, 2);
    const double C28710 = 2 * C28533;
    const double C28709 = std::pow(C28532, 2);
    const double C28708 = std::pow(C28538, 2);
    const double C28706 = std::pow(C28545, 2);
    const double C27413 = ae * C27407;
    const double C27414 = C27408 / C27400;
    const double C28509 = C28506 * C27403;
    const double C28516 = std::pow(C27406, -1);
    const double C28712 = std::pow(C27406, -2);
    const double C27415 = 2 * C27405;
    const double C27412 = C27405 * C27406;
    const double C28705 = 4 * C27405;
    const double C28555 = C28554 * C27403;
    const double C28566 = C28565 * C27403;
    const double C27591 = C27586 / C27400;
    const double C27613 = ae * C27610;
    const double C27662 = C27657 / C27400;
    const double C27684 = ae * C27681;
    const double C27711 = C27709 / C27708;
    const double C101 =
        ((std::pow(xP - xQ, 2) * bs[2] * std::pow(C27709 / C27708, 2) -
          (bs[1] * C27709) / C27708) *
         std::pow(ae, 2)) /
        C27405;
    const double C92 = -(C27713 * bs[1] * C27709) / C27708;
    const double C589 = -(C27783 * bs[1] * C27709) / C27708;
    const double C961 = -(C27808 * bs[1] * C27709) / C27708;
    const double C27723 = C27718 * C27721;
    const double C27734 = C27731 * C27721;
    const double C27757 = C27752 * C27721;
    const double C96 = (-(bs[1] * C27721 * C27709) / C27708) / C27400;
    const double C27733 = C27717 * C27731;
    const double C27756 = C27717 * C27752;
    const double C27788 = C27718 * C27786;
    const double C27792 = C27731 * C27786;
    const double C27799 = C27752 * C27786;
    const double C149 = (-(bs[1] * C27786 * C27709) / C27708) / C27400;
    const double C27787 = C27785 * C27720;
    const double C27835 = C27834 * C27720;
    const double C27849 = C27847 * C27731;
    const double C27854 = C27847 * C27752;
    const double C27813 = C27718 * C27811;
    const double C27817 = C27731 * C27811;
    const double C27824 = C27752 * C27811;
    const double C212 = (-(bs[1] * C27811 * C27709) / C27708) / C27400;
    const double C27812 = C27810 * C27720;
    const double C27862 = C27861 * C27720;
    const double C27873 = C27872 * C27720;
    const double C27886 = C27885 * C27720;
    const double C27898 = C27896 * C27731;
    const double C27903 = C27896 * C27752;
    const double C28730 = std::pow(C28710, -1);
    const double C28729 = C28709 * C28707;
    const double C28728 = C28708 * C28707;
    const double C28727 = C28706 * C28707;
    const double C27417 = 0 - C27414;
    const double C28510 = C28509 / C27400;
    const double C27421 = C27402 / C27415;
    const double C27418 = C27399 / C27415;
    const double C27588 = C27482 / C27415;
    const double C27592 = C27585 / C27415;
    const double C27659 = C27508 / C27415;
    const double C27663 = C27656 / C27415;
    const double C28556 = C28555 / C27400;
    const double C28567 = C28566 / C27400;
    const double C27595 = 0 - C27591;
    const double C27666 = 0 - C27662;
    const double C27714 = std::pow(C27711, 2);
    const double C27719 = -C27711;
    const double C27732 = std::pow(C27711, 4);
    const double C27791 = C27731 * C27787;
    const double C27798 = C27752 * C27787;
    const double C27837 = C27731 * C27835;
    const double C27840 = C27752 * C27835;
    const double C27816 = C27731 * C27812;
    const double C27823 = C27752 * C27812;
    const double C27864 = C27731 * C27862;
    const double C27867 = C27752 * C27862;
    const double C27875 = C27731 * C27873;
    const double C27878 = C27752 * C27873;
    const double C27888 = C27731 * C27886;
    const double C27891 = C27752 * C27886;
    const double C28741 = C28729 / C28533;
    const double C28740 = C28728 / C28533;
    const double C28739 = C28727 / C28533;
    const double C27423 = C27417 * ae;
    const double C28511 = -C28510;
    const double C28557 = -C28556;
    const double C28568 = -C28567;
    const double C27598 = C27595 * ae;
    const double C27669 = C27666 * ae;
    const double C27716 = C27712 * C27714;
    const double C102 = (2 * ae * C27714 * C27712 * C27713 * ae +
                         C27713 *
                             (C27712 * C27714 + std::pow(C27713, 2) * bs[3] *
                                                    std::pow(-C27711, 3)) *
                             std::pow(ae, 2)) /
                        C27405;
    const double C154 =
        (C27714 * C27712 * C27713 * (yP - yQ) * C27720) / C27405;
    const double C217 =
        (C27714 * C27712 * C27713 * (zP - zQ) * C27720) / C27405;
    const double C274 = (C27714 * C27712 * C27783 * C27713 * C27720) / C27405;
    const double C314 =
        ((std::pow(C27783, 2) * C27712 * C27714 - (bs[1] * C27709) / C27708) *
         C27720) /
        C27405;
    const double C373 = (C27714 * C27712 * C27783 * C27808 * C27720) / C27405;
    const double C427 = (C27714 * C27712 * C27808 * C27713 * C27720) / C27405;
    const double C466 = (C27714 * C27712 * C27808 * C27783 * C27720) / C27405;
    const double C521 =
        ((std::pow(C27808, 2) * C27712 * C27714 - (bs[1] * C27709) / C27708) *
         C27720) /
        C27405;
    const double C97 = (C27713 * C27714 * C27712 * C27721) / C27400 -
                       (ae * bs[1] * C27709) / (C27708 * C27400);
    const double C150 = (C27713 * C27714 * C27712 * C27786) / C27400;
    const double C213 = (C27713 * C27714 * C27712 * C27811) / C27400;
    const double C593 = (C27783 * C27714 * C27712 * C27721) / C27400;
    const double C639 = (C27783 * C27714 * C27712 * C27786) / C27400 -
                        (ae * bs[1] * C27709) / (C27708 * C27400);
    const double C681 = (C27783 * C27714 * C27712 * C27811) / C27400;
    const double C965 = (C27808 * C27714 * C27712 * C27721) / C27400;
    const double C1011 = (C27808 * C27714 * C27712 * C27786) / C27400;
    const double C1053 = (C27808 * C27714 * C27712 * C27811) / C27400 -
                         (ae * bs[1] * C27709) / (C27708 * C27400);
    const double C27722 = std::pow(C27719, 3);
    const double C27753 = std::pow(C27719, 5);
    const double C27738 = C27732 * C27734;
    const double C27737 = C27733 * C27732;
    const double C27751 = C27731 * C27732;
    const double C27794 = C27732 * C27792;
    const double C27819 = C27732 * C27817;
    const double C27850 = C27849 * C27732;
    const double C27899 = C27898 * C27732;
    const double C27793 = C27732 * C27791;
    const double C27838 = C27732 * C27837;
    const double C27818 = C27732 * C27816;
    const double C27865 = C27732 * C27864;
    const double C27876 = C27732 * C27875;
    const double C27889 = C27732 * C27888;
    const double C28748 = -C28741;
    const double C28747 = -C28740;
    const double C28746 = -C28739;
    const double C27427 = C27423 / C27400;
    const double C28512 = std::exp(C28511);
    const double C28558 = std::exp(C28557);
    const double C28569 = std::exp(C28568);
    const double C27599 = C27598 / C27400;
    const double C27670 = C27669 / C27400;
    const double C27724 = C27716 * ae;
    const double C93 = C27716 * C27717 - (bs[1] * C27709) / C27708;
    const double C588 = C27783 * C27713 * C27716;
    const double C960 = C27808 * C27713 * C27716;
    const double C1353 = C27716 * C27847 - (bs[1] * C27709) / C27708;
    const double C2532 = C27808 * C27783 * C27716;
    const double C3050 = C27716 * C27896 - (bs[1] * C27709) / C27708;
    const double C27725 = C27722 * C27723;
    const double C27730 = C27718 * C27722;
    const double C27789 = C27722 * C27788;
    const double C27814 = C27722 * C27813;
    const double C155 = (ae * C27714 * C27712 * C27783 * ae +
                         C27713 * C27722 * C27718 * C27713 * C27783 * C27720) /
                        C27405;
    const double C218 = (ae * C27714 * C27712 * C27808 * ae +
                         C27713 * C27722 * C27718 * C27713 * C27808 * C27720) /
                        C27405;
    const double C275 = (ae * C27714 * C27712 * C27786 +
                         C27713 * C27722 * C27718 * C27783 * C27713 * C27720) /
                        C27405;
    const double C315 =
        (C27713 * (C27716 + std::pow(C27783, 2) * C27718 * C27722) * C27720) /
        C27405;
    const double C374 =
        (C27713 * C27722 * C27718 * C27783 * C27808 * C27720) / C27405;
    const double C375 =
        (C27722 * C27718 * C27862 + C27732 * C27731 * C27862 * C27717) / C27405;
    const double C428 = (ae * C27714 * C27712 * C27811 +
                         C27713 * C27722 * C27718 * C27808 * C27713 * C27720) /
                        C27405;
    const double C467 =
        (C27713 * C27722 * C27718 * C27808 * C27783 * C27720) / C27405;
    const double C468 =
        (C27722 * C27718 * C27886 + C27732 * C27731 * C27886 * C27717) / C27405;
    const double C522 =
        (C27713 * (C27716 + std::pow(C27808, 2) * C27718 * C27722) * C27720) /
        C27405;
    const double C597 =
        (C27783 * (C27716 + C27717 * C27718 * C27722) * C27720) / C27405;
    const double C643 =
        (ae * C27714 * C27712 * C27721 + C27783 * C27722 * C27718 * C27787) /
        C27405;
    const double C685 = (C27783 * C27722 * C27718 * C27812) / C27405;
    const double C723 =
        (ae * C27714 * C27712 * C27721 + C27783 * C27722 * C27718 * C27835) /
        C27405;
    const double C761 =
        (2 * ae * C27714 * C27712 * C27786 +
         C27783 * (C27716 + C27847 * C27718 * C27722) * C27720) /
        C27405;
    const double C803 =
        (ae * C27714 * C27712 * C27811 + C27783 * C27722 * C27718 * C27862) /
        C27405;
    const double C841 = (C27783 * C27722 * C27718 * C27873) / C27405;
    const double C879 =
        (ae * C27714 * C27712 * C27811 + C27783 * C27722 * C27718 * C27886) /
        C27405;
    const double C917 =
        (C27783 * (C27716 + C27896 * C27718 * C27722) * C27720) / C27405;
    const double C969 =
        (C27808 * (C27716 + C27717 * C27718 * C27722) * C27720) / C27405;
    const double C1015 = (C27808 * C27722 * C27718 * C27787) / C27405;
    const double C1057 =
        (ae * C27714 * C27712 * C27721 + C27808 * C27722 * C27718 * C27812) /
        C27405;
    const double C1095 = (C27808 * C27722 * C27718 * C27835) / C27405;
    const double C1133 =
        (C27808 * (C27716 + C27847 * C27718 * C27722) * C27720) / C27405;
    const double C1175 =
        (ae * C27714 * C27712 * C27786 + C27808 * C27722 * C27718 * C27862) /
        C27405;
    const double C1213 =
        (ae * C27714 * C27712 * C27721 + C27808 * C27722 * C27718 * C27873) /
        C27405;
    const double C1251 =
        (ae * C27714 * C27712 * C27786 + C27808 * C27722 * C27718 * C27886) /
        C27405;
    const double C1289 =
        (2 * ae * C27714 * C27712 * C27811 +
         C27808 * (C27716 + C27896 * C27718 * C27722) * C27720) /
        C27405;
    const double C27762 = C27753 * C27757;
    const double C27761 = C27756 * C27753;
    const double C27801 = C27753 * C27799;
    const double C27800 = C27753 * C27798;
    const double C27826 = C27753 * C27824;
    const double C27825 = C27753 * C27823;
    const double C27841 = C27753 * C27840;
    const double C27855 = C27854 * C27753;
    const double C27868 = C27753 * C27867;
    const double C27879 = C27753 * C27878;
    const double C27892 = C27753 * C27891;
    const double C27904 = C27903 * C27753;
    const double C27741 = C27713 * C27738;
    const double C27750 = ae * C27738;
    const double C28159 = C27783 * C27738;
    const double C28326 = C27808 * C27738;
    const double C27760 = C27751 * C27717;
    const double C27759 = C27713 * C27751;
    const double C27758 = C27751 * ae;
    const double C28243 = C27751 * C27847;
    const double C28242 = C27783 * C27751;
    const double C28349 = C27751 * C27896;
    const double C28348 = C27808 * C27751;
    const double C27797 = ae * C27794;
    const double C27796 = C27713 * C27794;
    const double C28053 = C27783 * C27794;
    const double C28334 = C27808 * C27794;
    const double C27822 = ae * C27819;
    const double C27821 = C27713 * C27819;
    const double C28176 = C27783 * C27819;
    const double C28207 = C27808 * C27819;
    const double C3118 = (C27722 * C27718 * C27787 + C27793 * C27896) / C27405;
    const double C3260 = (C27722 * C27718 * C27835 + C27838 * C27896) / C27405;
    const double C1504 = (C27722 * C27718 * C27812 + C27818 * C27847) / C27405;
    const double C376 =
        (2 * C27713 * C27865 +
         C27713 * (C27865 + C27753 * C27752 * C27862 * C27717)) /
        C27405;
    const double C1767 = (C27722 * C27718 * C27873 + C27876 * C27847) / C27405;
    const double C469 =
        (2 * C27713 * C27889 +
         C27713 * (C27889 + C27753 * C27752 * C27886 * C27717)) /
        C27405;
    const double C28751 = std::exp(C28748);
    const double C28750 = std::exp(C28747);
    const double C28749 = std::exp(C28746);
    const double C27429 = C27427 - C27418;
    const double C11697 = C28512 * C593;
    const double C13500 = C28512 * C965;
    const double C27416 = C27409 * C28512;
    const double C28513 = C28512 * C28507;
    const double C28517 = C28516 * C28512;
    const double C28702 = C28512 * C28508;
    const double C28699 = C28512 / C27406;
    const double C9713 = C28712 * C28512;
    const double C161 = C28558 * C150;
    const double C4211 = C28558 * C1011;
    const double C27484 = C27483 * C28558;
    const double C148 = -(2 * C27403 * (yA - yB) * C28558) / C27400;
    const double C313 =
        -((C28558 - (C27464 * 2 * C27403 * C27464 * C28558) / C27400) *
          C27410) /
        C27400;
    const double C28604 = C28558 * C28602;
    const double C28607 = C28516 * C28558;
    const double C28716 = C28558 * C28603;
    const double C28711 = C28558 / C27406;
    const double C1348 = C28712 * C28558;
    const double C224 = C28569 * C213;
    const double C2089 = C28569 * C681;
    const double C27510 = C27509 * C28569;
    const double C211 = -(2 * C27403 * (zA - zB) * C28569) / C27400;
    const double C520 =
        -((C28569 - (C27467 * 2 * C27403 * C27467 * C28569) / C27400) *
          C27410) /
        C27400;
    const double C28630 = C28569 * C28628;
    const double C28633 = C28516 * C28569;
    const double C28720 = C28569 * C28629;
    const double C28713 = C28569 / C27406;
    const double C3049 = C28712 * C28569;
    const double C27600 = C27599 - C27592;
    const double C27671 = C27670 - C27663;
    const double C27726 = C27713 * C27725;
    const double C1430 = (C27722 * C27718 * C27787 + ae * C27783 * C27725 +
                          C27783 * (ae * C27725 + C27783 * C27793)) /
                         C27405;
    const double C1569 = (C27722 * C27718 * C27835 + ae * C27783 * C27725 +
                          C27783 * (ae * C27725 + C27783 * C27838)) /
                         C27405;
    const double C2604 = (C27808 * (ae * C27725 + C27783 * C27793)) / C27405;
    const double C2662 =
        (ae * C27783 * C27725 + C27808 * C27783 * C27818) / C27405;
    const double C2716 =
        (ae * C27808 * C27725 + C27783 * C27808 * C27838) / C27405;
    const double C2884 =
        (ae * C27783 * C27725 + C27808 * C27783 * C27876) / C27405;
    const double C3189 = (C27722 * C27718 * C27812 + ae * C27808 * C27725 +
                          C27808 * (ae * C27725 + C27808 * C27818)) /
                         C27405;
    const double C3441 = (C27722 * C27718 * C27873 + ae * C27808 * C27725 +
                          C27808 * (ae * C27725 + C27808 * C27876)) /
                         C27405;
    const double C1356 = (C27714 * C27712 * C27721 + C27725 * C27847) / C27400;
    const double C1954 =
        (2 * C27783 * C27725 + C27783 * (C27725 + C27738 * C27847)) / C27400;
    const double C2534 = (C27808 * (C27725 + C27738 * C27847)) / C27400;
    const double C2536 = (C27808 * C27783 * C27725) / C27400;
    const double C3053 = (C27714 * C27712 * C27721 + C27725 * C27896) / C27400;
    const double C4130 =
        (2 * C27808 * C27725 + C27808 * (C27725 + C27738 * C27896)) / C27400;
    const double C27736 = C27713 * C27730;
    const double C27735 = C27730 * ae;
    const double C27740 = C27730 + C27737;
    const double C27851 = C27730 + C27850;
    const double C27900 = C27730 + C27899;
    const double C28054 = C27783 * C27730;
    const double C28208 = C27808 * C27730;
    const double C316 =
        ((C27716 + C27847 * C27718 * C27722) * C27720 +
         (C27730 + C27847 * C27731 * C27732) * C27720 * C27717) /
        C27405;
    const double C523 =
        ((C27716 + C27896 * C27718 * C27722) * C27720 +
         (C27730 + C27896 * C27731 * C27732) * C27720 * C27717) /
        C27405;
    const double C94 =
        2 * C27713 * C27716 + C27713 * (C27716 + C27730 * C27717);
    const double C587 = C27783 * (C27716 + C27730 * C27717);
    const double C959 = C27808 * (C27716 + C27730 * C27717);
    const double C1952 =
        2 * C27783 * C27716 + C27783 * (C27716 + C27730 * C27847);
    const double C2530 = C27808 * (C27716 + C27730 * C27847);
    const double C4128 =
        2 * C27808 * C27716 + C27808 * (C27716 + C27730 * C27896);
    const double C28009 = C27783 * C27789;
    const double C156 =
        (C27722 * C27718 * C27787 + ae * C27713 * C27789 +
         C27713 * (ae * C27789 + C27713 * C27732 * C27731 * C27787)) /
        C27405;
    const double C157 =
        (2 * (ae * C27789 + C27713 * C27793) + ae * (C27789 + C27794 * C27717) +
         C27713 *
             (C27793 + ae * C27713 * C27794 +
              C27713 * (ae * C27794 + C27713 * C27753 * C27752 * C27787))) /
        C27405;
    const double C276 =
        (C27722 * C27718 * C27835 + ae * C27713 * C27789 +
         C27713 * (ae * C27789 + C27713 * C27732 * C27731 * C27835)) /
        C27405;
    const double C1014 = (C27808 * (ae * C27789 + C27713 * C27793)) / C27405;
    const double C1094 = (C27808 * (ae * C27789 + C27713 * C27838)) / C27405;
    const double C1174 =
        (ae * C27713 * C27789 + C27808 * C27713 * C27865) / C27405;
    const double C1250 =
        (ae * C27713 * C27789 + C27808 * C27713 * C27889) / C27405;
    const double C3379 = (C27722 * C27718 * C27862 + ae * C27808 * C27789 +
                          C27808 * (ae * C27789 + C27808 * C27865)) /
                         C27405;
    const double C3494 = (C27722 * C27718 * C27886 + ae * C27808 * C27789 +
                          C27808 * (ae * C27789 + C27808 * C27889)) /
                         C27405;
    const double C151 = (C27714 * C27712 * C27786 + C27789 * C27717) / C27400;
    const double C152 =
        (2 * C27713 * C27789 + C27713 * (C27789 + C27794 * C27717)) / C27400;
    const double C637 = (C27783 * (C27789 + C27794 * C27717) +
                         (C27716 + C27730 * C27717) * ae) /
                        C27400;
    const double C638 =
        (C27783 * C27713 * C27789 + C27713 * C27716 * ae) / C27400;
    const double C1009 = (C27808 * (C27789 + C27794 * C27717)) / C27400;
    const double C1010 = (C27808 * C27713 * C27789) / C27400;
    const double C3115 = (C27714 * C27712 * C27786 + C27789 * C27896) / C27400;
    const double C4206 =
        (2 * C27808 * C27789 + C27808 * (C27789 + C27794 * C27896)) / C27400;
    const double C28142 = C27808 * C27814;
    const double C219 =
        (C27722 * C27718 * C27812 + ae * C27713 * C27814 +
         C27713 * (ae * C27814 + C27713 * C27732 * C27731 * C27812)) /
        C27405;
    const double C220 =
        (2 * (ae * C27814 + C27713 * C27818) + ae * (C27814 + C27819 * C27717) +
         C27713 *
             (C27818 + ae * C27713 * C27819 +
              C27713 * (ae * C27819 + C27713 * C27753 * C27752 * C27812))) /
        C27405;
    const double C429 =
        (C27722 * C27718 * C27873 + ae * C27713 * C27814 +
         C27713 * (ae * C27814 + C27713 * C27732 * C27731 * C27873)) /
        C27405;
    const double C684 = (C27783 * (ae * C27814 + C27713 * C27818)) / C27405;
    const double C802 =
        (ae * C27713 * C27814 + C27783 * C27713 * C27865) / C27405;
    const double C840 = (C27783 * (ae * C27814 + C27713 * C27876)) / C27405;
    const double C878 =
        (ae * C27713 * C27814 + C27783 * C27713 * C27889) / C27405;
    const double C1702 = (C27722 * C27718 * C27862 + ae * C27783 * C27814 +
                          C27783 * (ae * C27814 + C27783 * C27865)) /
                         C27405;
    const double C1820 = (C27722 * C27718 * C27886 + ae * C27783 * C27814 +
                          C27783 * (ae * C27814 + C27783 * C27889)) /
                         C27405;
    const double C2830 = (ae * (C27808 * C27814 + C27724) +
                          C27783 * (ae * C27789 + C27808 * C27865)) /
                         C27405;
    const double C214 = (C27714 * C27712 * C27811 + C27814 * C27717) / C27400;
    const double C215 =
        (2 * C27713 * C27814 + C27713 * (C27814 + C27819 * C27717)) / C27400;
    const double C679 = (C27783 * (C27814 + C27819 * C27717)) / C27400;
    const double C680 = (C27783 * C27713 * C27814) / C27400;
    const double C1051 = (C27808 * (C27814 + C27819 * C27717) +
                          (C27716 + C27730 * C27717) * ae) /
                         C27400;
    const double C1052 =
        (C27808 * C27713 * C27814 + C27713 * C27716 * ae) / C27400;
    const double C1501 = (C27714 * C27712 * C27811 + C27814 * C27847) / C27400;
    const double C2084 =
        (2 * C27783 * C27814 + C27783 * (C27814 + C27819 * C27847)) / C27400;
    const double C2656 = (C27808 * (C27814 + C27819 * C27847) +
                          (C27716 + C27730 * C27847) * ae) /
                         C27400;
    const double C2658 =
        (C27808 * C27783 * C27814 + C27783 * C27716 * ae) / C27400;
    const double C163 = C28558 * C155;
    const double C226 = C28569 * C218;
    const double C323 = C28558 * C315;
    const double C381 = C28569 * C374;
    const double C384 = C28569 * C375;
    const double C474 = C28558 * C467;
    const double C477 = C28558 * C468;
    const double C530 = C28569 * C522;
    const double C11559 = C28512 * C597;
    const double C2091 = C28569 * C685;
    const double C11699 = C28512 * C723;
    const double C2295 = C28569 * C803;
    const double C11828 = C28512 * C841;
    const double C2469 = C28569 * C917;
    const double C13309 = C28512 * C969;
    const double C4213 = C28558 * C1015;
    const double C13502 = C28512 * C1095;
    const double C4413 = C28558 * C1133;
    const double C13695 = C28512 * C1213;
    const double C4597 = C28558 * C1251;
    const double C27766 = C27713 * C27762;
    const double C28230 = C27762 * C27847;
    const double C28304 = C27783 * C27762;
    const double C28328 = C27762 * C27896;
    const double C27765 = C27751 + C27761;
    const double C27803 = C27801 * C27717;
    const double C28042 = C27713 * C27801;
    const double C28241 = C27783 * C27801;
    const double C28335 = C27801 * C27896;
    const double C27802 = C27713 * C27800;
    const double C28229 = C27783 * C27800;
    const double C4208 =
        (2 * C27808 * C27793 + C27808 * (C27793 + C27800 * C27896)) / C27405;
    const double C22371 =
        (3 * (C27793 + C27800 * C27896) +
         C27808 * (2 * C27808 * C27800 +
                   C27808 * (C27800 +
                             std::pow(C27711, 6) * bs[6] * C27787 * C27896))) /
        C27405;
    const double C27828 = C27826 * C27717;
    const double C28064 = C27713 * C27826;
    const double C28260 = C27826 * C27847;
    const double C28313 = C27783 * C27826;
    const double C28347 = C27808 * C27826;
    const double C27827 = C27713 * C27825;
    const double C28303 = C27783 * C27825;
    const double C28327 = C27808 * C27825;
    const double C2086 =
        (2 * C27783 * C27818 + C27783 * (C27818 + C27825 * C27847)) / C27405;
    const double C2660 = (ae * (C27725 + C27738 * C27847) +
                          C27808 * (C27818 + C27825 * C27847)) /
                         C27405;
    const double C11647 =
        (3 * (C27818 + C27825 * C27847) +
         C27783 * (2 * C27783 * C27825 +
                   C27783 * (C27825 +
                             std::pow(C27711, 6) * bs[6] * C27812 * C27847))) /
        C27405;
    const double C27842 = C27713 * C27841;
    const double C28235 = C27783 * C27841;
    const double C28272 = C27808 * C27841;
    const double C2714 =
        (C27808 * C27838 + ae * C27808 * C27783 * C27738 +
         C27783 * (ae * C27808 * C27738 + C27783 * C27808 * C27841)) /
        C27405;
    const double C3806 = (ae * (C27725 + C27738 * C27896) +
                          C27783 * (C27838 + C27841 * C27896)) /
                         C27405;
    const double C4334 =
        (2 * C27808 * C27838 + C27808 * (C27838 + C27841 * C27896)) / C27405;
    const double C27856 = C27751 + C27855;
    const double C28063 = C27713 * C27868;
    const double C28259 = C27783 * C27868;
    const double C28280 = C27808 * C27868;
    const double C377 =
        (3 * (C27865 + C27868 * C27717) +
         C27713 * (2 * C27713 * C27868 +
                   C27713 * (C27868 +
                             std::pow(C27711, 6) * bs[6] * C27862 * C27717))) /
        C27405;
    const double C801 = (ae * (C27814 + C27819 * C27717) +
                         C27783 * (C27865 + C27868 * C27717)) /
                        C27405;
    const double C1173 = (ae * (C27789 + C27794 * C27717) +
                          C27808 * (C27865 + C27868 * C27717)) /
                         C27405;
    const double C27880 = C27713 * C27879;
    const double C28309 = C27783 * C27879;
    const double C28338 = C27808 * C27879;
    const double C2350 =
        (2 * C27783 * C27876 + C27783 * (C27876 + C27879 * C27847)) / C27405;
    const double C2882 = (ae * (C27725 + C27738 * C27847) +
                          C27808 * (C27876 + C27879 * C27847)) /
                         C27405;
    const double C11824 =
        (3 * (C27876 + C27879 * C27847) +
         C27783 * (2 * C27783 * C27879 +
                   C27783 * (C27879 +
                             std::pow(C27711, 6) * bs[6] * C27873 * C27847))) /
        C27405;
    const double C28069 = C27713 * C27892;
    const double C28265 = C27783 * C27892;
    const double C28341 = C27808 * C27892;
    const double C470 =
        (3 * (C27889 + C27892 * C27717) +
         C27713 * (2 * C27713 * C27892 +
                   C27713 * (C27892 +
                             std::pow(C27711, 6) * bs[6] * C27886 * C27717))) /
        C27405;
    const double C877 = (ae * (C27814 + C27819 * C27717) +
                         C27783 * (C27889 + C27892 * C27717)) /
                        C27405;
    const double C1249 = (ae * (C27789 + C27794 * C27717) +
                          C27808 * (C27889 + C27892 * C27717)) /
                         C27405;
    const double C27905 = C27751 + C27904;
    const double C27755 = 2 * C27750;
    const double C2032 =
        (2 * (ae * C27725 + C27783 * C27793) + ae * (C27725 + C27738 * C27847) +
         C27783 * (C27793 + ae * C27783 * C27738 +
                   C27783 * (C27750 + C27783 * C27800))) /
        C27405;
    const double C2158 =
        (2 * (ae * C27725 + C27783 * C27838) + ae * (C27725 + C27738 * C27847) +
         C27783 * (C27838 + ae * C27783 * C27738 +
                   C27783 * (C27750 + C27783 * C27841))) /
        C27405;
    const double C2603 = (C27808 * (C27793 + ae * C27783 * C27738 +
                                    C27783 * (C27750 + C27783 * C27800))) /
                         C27405;
    const double C3700 =
        (ae * C27725 + C27783 * C27793 + (C27750 + C27783 * C27800) * C27896) /
        C27405;
    const double C4282 =
        (2 * (ae * C27725 + C27808 * C27818) + ae * (C27725 + C27738 * C27896) +
         C27808 * (C27818 + ae * C27808 * C27738 +
                   C27808 * (C27750 + C27808 * C27825))) /
        C27405;
    const double C4530 =
        (2 * (ae * C27725 + C27808 * C27876) + ae * (C27725 + C27738 * C27896) +
         C27808 * (C27876 + ae * C27808 * C27738 +
                   C27808 * (C27750 + C27808 * C27879))) /
        C27405;
    const double C3754 = (C27783 * C27818 + ae * C27808 * C28159 +
                          C27808 * (ae * C28159 + C27808 * C27783 * C27825)) /
                         C27405;
    const double C3966 = (C27783 * C27876 + ae * C27808 * C28159 +
                          C27808 * (ae * C28159 + C27808 * C27783 * C27879)) /
                         C27405;
    const double C12943 =
        (C27838 + C27841 * C27896 + ae * (C28159 + C27783 * C27762 * C27896) +
         C27783 * (ae * (C27738 + C27762 * C27896) +
                   C27783 * (C27841 +
                             std::pow(C27711, 6) * bs[6] * C27835 * C27896))) /
        C27405;
    const double C3642 = (C27783 * C27725 + C28159 * C27896) / C27400;
    const double C27764 = C27730 + C27760;
    const double C27763 = C27759 * ae;
    const double C28043 = C27783 * C27759;
    const double C28198 = C27808 * C27759;
    const double C28247 = C27730 + C28243;
    const double C28246 = C28242 * ae;
    const double C28314 = C27808 * C28242;
    const double C28353 = C27730 + C28349;
    const double C28352 = C28348 * ae;
    const double C28238 = 2 * C27797;
    const double C4478 =
        (2 * (ae * C27789 + C27808 * C27865) + ae * (C27789 + C27794 * C27896) +
         C27808 * (C27865 + ae * C27808 * C27794 +
                   C27808 * (C27797 + C27808 * C27868))) /
        C27405;
    const double C4594 =
        (2 * (ae * C27789 + C27808 * C27889) + ae * (C27789 + C27794 * C27896) +
         C27808 * (C27889 + ae * C27808 * C27794 +
                   C27808 * (C27797 + C27808 * C27892))) /
        C27405;
    const double C28013 = C27783 * C27796;
    const double C277 =
        (2 * (ae * C27789 + C27713 * C27838) + ae * (C27789 + C27794 * C27717) +
         C27713 * (C27838 + ae * C27796 +
                   C27713 * (C27797 + C27713 * C27753 * C27752 * C27835))) /
        C27405;
    const double C3116 = (C27713 * C27789 + C27796 * C27896) / C27400;
    const double C28344 = 2 * C27822;
    const double C2292 =
        (2 * (ae * C27814 + C27783 * C27865) + ae * (C27814 + C27819 * C27847) +
         C27783 * (C27865 + ae * C27783 * C27819 +
                   C27783 * (C27822 + C27783 * C27868))) /
        C27405;
    const double C2414 =
        (2 * (ae * C27814 + C27783 * C27889) + ae * (C27814 + C27819 * C27847) +
         C27783 * (C27889 + ae * C27783 * C27819 +
                   C27783 * (C27822 + C27783 * C27892))) /
        C27405;
    const double C28146 = C27808 * C27821;
    const double C430 =
        (2 * (ae * C27814 + C27713 * C27876) + ae * (C27814 + C27819 * C27717) +
         C27713 * (C27876 + ae * C27821 +
                   C27713 * (C27822 + C27713 * C27753 * C27752 * C27873))) /
        C27405;
    const double C1703 = (C27713 * C27865 + ae * C27783 * C27821 +
                          C27783 * (ae * C27821 + C27783 * C27713 * C27868)) /
                         C27405;
    const double C1821 = (C27713 * C27889 + ae * C27783 * C27821 +
                          C27783 * (ae * C27821 + C27783 * C27713 * C27892)) /
                         C27405;
    const double C1502 = (C27713 * C27814 + C27821 * C27847) / C27400;
    const double C28177 = C27808 * C28176;
    const double C4219 = C28558 * C3118;
    const double C13508 = C28512 * C3260;
    const double C2097 = C28569 * C1504;
    const double C387 = C28569 * C376;
    const double C11831 = C28512 * C1767;
    const double C480 = C28558 * C469;
    const double C81 = -(C28751 * C28532 * de) / C28533;
    const double C82 = C28730 * C28751;
    const double C583 = -(C28750 * C28538 * de) / C28533;
    const double C584 = C28730 * C28750;
    const double C956 = -(C28749 * C28545 * de) / C28533;
    const double C957 = C28730 * C28749;
    const double C27422 = C27416 / C27405;
    const double C27420 = 2 * C27416;
    const double C27419 = -4 * C27416;
    const double C28703 = C28513 / C27415;
    const double C28701 = C28513 / C27400;
    const double C28700 = C28513 * C28508;
    const double C9712 = (2 * C28516 * C28513) / C27400;
    const double C28704 = C28517 * C28508;
    const double C76 = C28517 / C28705;
    const double C4711 = C28517 / C27406;
    const double C28725 = C28702 / C27400;
    const double C9711 = (C28512 * std::pow(C28507, 2)) / C27405 + C28699;
    const double C27492 = 2 * C27484;
    const double C27590 = C27484 / C27405;
    const double C27611 = -4 * C27484;
    const double C1426 =
        ((0 * ae) / C27400 - C27484 / C27405) / C27406 + (0 * ae) / C27400;
    const double C4783 = (0 * ae) / C27400 - C27484 / C27405;
    const double C164 = C148 * C93;
    const double C162 = C148 * C97;
    const double C160 = C148 * C92;
    const double C322 = C148 * C150;
    const double C320 = C148 * C149;
    const double C473 = C148 * C213;
    const double C766 = C148 * C639;
    const double C1138 = C148 * C1011;
    const double C3122 = C148 * C960;
    const double C4216 = C148 * C3050;
    const double C4212 = C148 * C965;
    const double C4210 = C148 * C961;
    const double C4596 = C148 * C1053;
    const double C324 = C313 * C93;
    const double C321 = C313 * C92;
    const double C3317 = C313 * C960;
    const double C4415 = C313 * C3050;
    const double C4412 = C313 * C961;
    const double C28718 = C28604 / C27415;
    const double C28717 = C28604 * C28603;
    const double C28714 = C28604 / C27400;
    const double C1347 = (2 * C28516 * C28604) / C27400;
    const double C1425 =
        (((C28558 - (C27464 * 2 * C27484) / C27400) * ae) / C27400 -
         C27482 / C27415) /
            C27406 +
        ((C27464 * ((0 * ae) / C27400 - C27484 / C27405) + C28607) * ae) /
            C27400;
    const double C28719 = C28607 * C28603;
    const double C11221 = C28607 / C28705;
    const double C13870 = C28607 / C27406;
    const double C28731 = C28716 / C27400;
    const double C1346 = (C28558 * std::pow(C28602, 2)) / C27405 + C28711;
    const double C27518 = 2 * C27510;
    const double C27661 = C27510 / C27405;
    const double C27682 = -4 * C27510;
    const double C3185 =
        ((0 * ae) / C27400 - C27510 / C27405) / C27406 + (0 * ae) / C27400;
    const double C6371 = (0 * ae) / C27400 - C27510 / C27405;
    const double C227 = C211 * C93;
    const double C225 = C211 * C97;
    const double C223 = C211 * C92;
    const double C380 = C211 * C150;
    const double C529 = C211 * C213;
    const double C527 = C211 * C212;
    const double C922 = C211 * C681;
    const double C1294 = C211 * C1053;
    const double C1508 = C211 * C588;
    const double C2094 = C211 * C1353;
    const double C2090 = C211 * C593;
    const double C2088 = C211 * C589;
    const double C2294 = C211 * C639;
    const double C531 = C520 * C93;
    const double C528 = C520 * C92;
    const double C1888 = C520 * C588;
    const double C2470 = C520 * C1353;
    const double C2468 = C520 * C589;
    const double C28722 = C28630 / C27415;
    const double C28721 = C28630 * C28629;
    const double C28715 = C28630 / C27400;
    const double C3048 = (2 * C28516 * C28630) / C27400;
    const double C3184 =
        (((C28569 - (C27467 * 2 * C27510) / C27400) * ae) / C27400 -
         C27508 / C27415) /
            C27406 +
        ((C27467 * ((0 * ae) / C27400 - C27510 / C27405) + C28633) * ae) /
            C27400;
    const double C28723 = C28633 * C28629;
    const double C21692 = C28633 / C28705;
    const double C24525 = C28633 / C27406;
    const double C28734 = C28720 / C27400;
    const double C3047 = (C28569 * std::pow(C28628, 2)) / C27405 + C28713;
    const double C27727 = C27726 + C27724;
    const double C11703 = C28512 * C1569;
    const double C9171 = C28607 * C2604;
    const double C13379 = C28607 * C2604;
    const double C8589 = C28633 * C2662;
    const double C20789 = C28633 * C2662;
    const double C12948 = C28512 * C2716;
    const double C13127 = C28512 * C2884;
    const double C13697 = C28512 * C3441;
    const double C2096 = C211 * C1356;
    const double C11701 = C28512 * C1356;
    const double C11655 = C211 * C1954;
    const double C11705 = C28512 * C1954;
    const double C17887 = C28512 * C2534;
    const double C12946 = C28512 * C2536;
    const double C4218 = C148 * C3053;
    const double C13506 = C28512 * C3053;
    const double C22379 = C148 * C4130;
    const double C22461 = C28512 * C4130;
    const double C27739 = C27736 * ae;
    const double C2657 =
        (C27808 * C27783 * C27821 + C27783 * C27736 * ae) / C27400;
    const double C1354 = C27713 * C27716 + C27736 * C27847;
    const double C1951 =
        2 * C27783 * C27736 + C27783 * (C27736 + C27759 * C27847);
    const double C2529 = C27808 * (C27736 + C27759 * C27847);
    const double C2531 = C27808 * C27783 * C27736;
    const double C3051 = C27713 * C27716 + C27736 * C27896;
    const double C4127 =
        2 * C27808 * C27736 + C27808 * (C27736 + C27759 * C27896);
    const double C27743 = C27741 + C27735;
    const double C28055 = C28053 + C27735;
    const double C28209 = C28207 + C27735;
    const double C3914 = (ae * (C27814 + C27808 * (C27808 * C27819 + C27735) +
                                C27808 * C27730 * ae) +
                          C27783 * (C27865 + ae * C27808 * C27794 +
                                    C27808 * (C27797 + C27808 * C27868))) /
                         C27405;
    const double C27742 = C27740 * C27720;
    const double C27852 = C27851 * C27720;
    const double C27901 = C27900 * C27720;
    const double C28056 = C28054 * ae;
    const double C3640 = C27783 * C27716 + C28054 * C27896;
    const double C13304 =
        2 * C27808 * C28054 + C27808 * (C28054 + C28242 * C27896);
    const double C28210 = C28208 * ae;
    const double C326 = C28558 * C316;
    const double C533 = C28569 * C523;
    const double C168 = C148 * C94;
    const double C231 = C211 * C94;
    const double C327 = C313 * C94;
    const double C534 = C520 * C94;
    const double C4859 = C211 * C587;
    const double C5221 = C520 * C587;
    const double C6315 = C148 * C959;
    const double C6497 = C313 * C959;
    const double C11653 = C211 * C1952;
    const double C11911 = C520 * C1952;
    const double C22377 = C148 * C4128;
    const double C22505 = C313 * C4128;
    const double C28010 = C28009 + C27724;
    const double C167 = C28558 * C156;
    const double C171 = C28558 * C157;
    const double C3125 = C28558 * C1014;
    const double C4343 = C28517 * C1094;
    const double C16873 = C28517 * C1094;
    const double C6555 = C28633 * C1174;
    const double C19011 = C28633 * C1174;
    const double C3502 = C28558 * C1250;
    const double C4599 = C28558 * C3494;
    const double C165 = C28558 * C151;
    const double C325 = C148 * C151;
    const double C383 = C211 * C151;
    const double C169 = C28558 * C152;
    const double C328 = C148 * C152;
    const double C386 = C211 * C152;
    const double C764 = C148 * C637;
    const double C4796 = C28607 * C637;
    const double C5052 = C211 * C637;
    const double C9798 = C28607 * C637;
    const double C765 = C148 * C638;
    const double C1709 = C211 * C638;
    const double C4788 = C28607 * C638;
    const double C9790 = C28607 * C638;
    const double C1136 = C148 * C1009;
    const double C6316 = C28558 * C1009;
    const double C1137 = C148 * C1010;
    const double C3123 = C28558 * C1010;
    const double C3319 = C148 * C3115;
    const double C4217 = C28558 * C3115;
    const double C4419 = C148 * C4206;
    const double C22378 = C28558 * C4206;
    const double C28143 = C28142 + C27724;
    const double C230 = C28569 * C219;
    const double C234 = C28569 * C220;
    const double C1511 = C28569 * C684;
    const double C1710 = C28569 * C802;
    const double C2355 = C28517 * C840;
    const double C14767 = C28517 * C840;
    const double C5159 = C28607 * C878;
    const double C10152 = C28607 * C878;
    const double C2297 = C28569 * C1702;
    const double C8811 = C28633 * C2830;
    const double C20962 = C28633 * C2830;
    const double C228 = C28569 * C214;
    const double C476 = C148 * C214;
    const double C532 = C211 * C214;
    const double C232 = C28569 * C215;
    const double C479 = C148 * C215;
    const double C535 = C211 * C215;
    const double C920 = C211 * C679;
    const double C4860 = C28569 * C679;
    const double C921 = C211 * C680;
    const double C1509 = C28569 * C680;
    const double C1292 = C211 * C1051;
    const double C6384 = C28633 * C1051;
    const double C6671 = C148 * C1051;
    const double C18845 = C28633 * C1051;
    const double C1293 = C211 * C1052;
    const double C3501 = C148 * C1052;
    const double C6376 = C28633 * C1052;
    const double C18837 = C28633 * C1052;
    const double C1886 = C211 * C1501;
    const double C2095 = C28569 * C1501;
    const double C2473 = C211 * C2084;
    const double C11654 = C28569 * C2084;
    const double C2996 = C211 * C2656;
    const double C17827 = C28633 * C2656;
    const double C20793 = C28633 * C2656;
    const double C2997 = C211 * C2658;
    const double C8585 = C28633 * C2658;
    const double C20785 = C28633 * C2658;
    const double C27769 = C27766 + C27758;
    const double C28232 = C27738 + C28230;
    const double C13305 =
        (2 * C27808 * C28159 + C27808 * (C28159 + C28304 * C27896)) / C27400;
    const double C28330 = C27738 + C28328;
    const double C27768 = C27765 * C27720;
    const double C27805 = C27794 + C27803;
    const double C28044 = C27783 * C28042;
    const double C4205 =
        (2 * C27808 * C27796 + C27808 * (C27796 + C28042 * C27896)) / C27400;
    const double C28245 = C28241 + C27758;
    const double C28336 = C27794 + C28335;
    const double C27804 = C27797 + C27802;
    const double C28231 = C27750 + C28229;
    const double C22380 = C28558 * C4208;
    const double C27830 = C27819 + C27828;
    const double C28171 = C27783 * C28064;
    const double C28197 = C27808 * C28064;
    const double C2083 =
        (2 * C27783 * C27821 + C27783 * (C27821 + C28064 * C27847)) / C27400;
    const double C2655 = (C27808 * (C27821 + C28064 * C27847) +
                          (C27736 + C27759 * C27847) * ae) /
                         C27400;
    const double C28262 = C27819 + C28260;
    const double C28315 = C27808 * C28313;
    const double C28351 = C28347 + C27758;
    const double C27829 = C27822 + C27827;
    const double C13446 =
        (2 * (ae * C28159 + C27808 * C28303) + ae * (C28159 + C28304 * C27896) +
         C27808 *
             (C28303 + ae * C27808 * C28304 +
              C27808 * (ae * C28304 + C27808 * C27783 * std::pow(C27711, 6) *
                                          bs[6] * C27812))) /
        C27405;
    const double C28329 = C27750 + C28327;
    const double C11656 = C28569 * C2086;
    const double C17831 = C28633 * C2660;
    const double C20797 = C28633 * C2660;
    const double C27843 = C27797 + C27842;
    const double C28236 = C27750 + C28235;
    const double C13497 =
        (ae * (2 * C27808 * C27738 + C27808 * (C27738 + C27762 * C27896)) +
         C27783 * (2 * C28272 + C27808 * (C27841 + std::pow(C27711, 6) * bs[6] *
                                                       C27835 * C27896))) /
        C27405;
    const double C22454 =
        (3 * (C27838 + C27841 * C27896) +
         C27808 * (2 * C28272 + C27808 * (C27841 + std::pow(C27711, 6) * bs[6] *
                                                       C27835 * C27896))) /
        C27405;
    const double C17889 = C28512 * C2714;
    const double C12952 = C28512 * C3806;
    const double C22463 = C28512 * C4334;
    const double C27857 = C27856 * C27720;
    const double C2291 =
        (2 * (ae * C27821 + C27783 * C28063) + ae * (C27821 + C28064 * C27847) +
         C27783 *
             (C28063 + ae * C27783 * C28064 +
              C27783 * (ae * C28064 + C27783 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27862))) /
        C27405;
    const double C3380 = (C27713 * C27865 + ae * C27808 * C27796 +
                          C27808 * (ae * C27796 + C27808 * C28063)) /
                         C27405;
    const double C4477 =
        (2 * (ae * C27796 + C27808 * C28063) + ae * (C27796 + C28042 * C27896) +
         C27808 *
             (C28063 + ae * C27808 * C28042 +
              C27808 * (ae * C28042 + C27808 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27862))) /
        C27405;
    const double C28261 = C27822 + C28259;
    const double C28281 = C27797 + C28280;
    const double C5053 = C28569 * C801;
    const double C6559 = C28633 * C1173;
    const double C19015 = C28633 * C1173;
    const double C27881 = C27822 + C27880;
    const double C13692 =
        (2 * (ae * C28159 + C27808 * C28309) + ae * (C28159 + C28304 * C27896) +
         C27808 *
             (C28309 + ae * C27808 * C28304 +
              C27808 * (ae * C28304 + C27808 * C27783 * std::pow(C27711, 6) *
                                          bs[6] * C27873))) /
        C27405;
    const double C28339 = C27750 + C28338;
    const double C11834 = C28512 * C2350;
    const double C18059 = C28512 * C2882;
    const double C2413 =
        (2 * (ae * C27821 + C27783 * C28069) + ae * (C27821 + C28064 * C27847) +
         C27783 *
             (C28069 + ae * C27783 * C28064 +
              C27783 * (ae * C28064 + C27783 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27886))) /
        C27405;
    const double C3495 = (C27713 * C27889 + ae * C27808 * C27796 +
                          C27808 * (ae * C27796 + C27808 * C28069)) /
                         C27405;
    const double C4593 =
        (2 * (ae * C27796 + C27808 * C28069) + ae * (C27796 + C28042 * C27896) +
         C27808 *
             (C28069 + ae * C27808 * C28042 +
              C27808 * (ae * C28042 + C27808 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27886))) /
        C27405;
    const double C28266 = C27822 + C28265;
    const double C28342 = C27797 + C28341;
    const double C5163 = C28607 * C877;
    const double C10156 = C28607 * C877;
    const double C6672 = C28558 * C1249;
    const double C27906 = C27905 * C27720;
    const double C11707 = C28512 * C2158;
    const double C21262 = C1348 * C2603;
    const double C13387 = C28607 * C3700;
    const double C27009 = C28607 * C3700;
    const double C22583 = C28512 * C4530;
    const double C12887 = C3049 * C3754;
    const double C13130 = C28512 * C3966;
    const double C12950 = C28512 * C3642;
    const double C27767 = C27764 * ae;
    const double C95 = 3 * (C27716 + C27730 * C27717) +
                       C27713 * (2 * C27736 + C27713 * C27764);
    const double C586 = C27783 * (2 * C27736 + C27713 * C27764);
    const double C958 = C27808 * (2 * C27736 + C27713 * C27764);
    const double C1355 = C27716 + C27730 * C27717 + C27764 * C27847;
    const double C3052 = C27716 + C27730 * C27717 + C27764 * C27896;
    const double C5783 = C27808 * C27783 * C27764;
    const double C3913 =
        (ae * (C27821 + C27808 * (C27808 * C28064 + C27763) +
               C27808 * C27759 * ae) +
         C27783 *
             (C28063 + ae * C27808 * C28042 +
              C27808 * (ae * C28042 + C27808 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27862))) /
        C27405;
    const double C28045 = C28043 * ae;
    const double C3639 = C27783 * C27736 + C28043 * C27896;
    const double C28200 = C28198 * ae;
    const double C28249 = C28247 * ae;
    const double C11554 = 3 * (C27716 + C27730 * C27847) +
                          C27783 * (2 * C28054 + C27783 * C28247);
    const double C11950 = C27808 * (2 * C28054 + C27783 * C28247);
    const double C12754 = C27716 + C27730 * C27847 + C28247 * C27896;
    const double C28316 = C28314 * ae;
    const double C28355 = C28353 * ae;
    const double C22327 = 3 * (C27716 + C27730 * C27896) +
                          C27808 * (2 * C28208 + C27808 * C28353);
    const double C22621 = C28558 * C4594;
    const double C3127 = C28558 * C3116;
    const double C3321 = C148 * C3116;
    const double C11789 = C28569 * C2292;
    const double C1713 = C28569 * C1703;
    const double C1829 = C1348 * C1821;
    const double C1513 = C28569 * C1502;
    const double C1891 = C211 * C1502;
    const double C27426 = C27411 - C27422;
    const double C27425 = C27401 * C27420;
    const double C1352 = (-C27420 / C27400) / C27406 - (0 * be) / C27400;
    const double C11223 = -C27420 / C27400;
    const double C27424 = C27419 / C27400;
    const double C14405 = C28701 * C597;
    const double C14597 = C28701 * C1569;
    const double C14593 = C28701 * C1356;
    const double C14589 = C28701 * C723;
    const double C14585 = C28701 * C593;
    const double C14769 = C28701 * C1767;
    const double C14765 = C28701 * C841;
    const double C16243 = C28701 * C2716;
    const double C16239 = C28701 * C2536;
    const double C16451 = C28701 * C2884;
    const double C16655 = C28701 * C969;
    const double C16871 = C28701 * C1095;
    const double C16867 = C28701 * C965;
    const double C17077 = C28701 * C1213;
    const double C25673 = C28701 * C3260;
    const double C25669 = C28701 * C3053;
    const double C25835 = C28701 * C3441;
    const double C28724 = C28700 / C27405;
    const double C10616 = C9712 * C840;
    const double C19897 = C9712 * C1094;
    const double C28726 = C28704 / C27400;
    const double C1344 = -C28725;
    const double C10266 = C9711 * C597;
    const double C10446 = C9711 * C723;
    const double C10440 = C9711 * C593;
    const double C10614 = C9711 * C841;
    const double C19715 = C9711 * C969;
    const double C19895 = C9711 * C1095;
    const double C19889 = C9711 * C965;
    const double C20060 = C9711 * C1213;
    const double C27493 = C27464 * C27492;
    const double C9785 = (-C27492 / C27400) / C27406 - (0 * be) / C27400;
    const double C27597 = C27594 - C27590;
    const double C27614 = C27611 / C27400;
    const double C1828 = C1426 * C1502;
    const double C21261 = C1426 * C2534;
    const double C21255 = C1426 * C2530;
    const double C21597 = C1426 * C2656;
    const double C4795 = C4783 * C587;
    const double C4787 = C4783 * C588;
    const double C4979 = C4783 * C637;
    const double C4973 = C4783 * C638;
    const double C4968 = C4783 * C639;
    const double C5162 = C4783 * C679;
    const double C5158 = C4783 * C680;
    const double C9170 = C4783 * C2536;
    const double C9166 = C4783 * C2532;
    const double C9588 = C4783 * C2658;
    const double C27008 = C4783 * C3642;
    const double C173 = C162 + C163;
    const double C172 = C160 + C161;
    const double C481 = C473 + C474;
    const double C4223 = C4212 + C4213;
    const double C4222 = C4210 + C4211;
    const double C4600 = C4596 + C4597;
    const double C331 = C321 + C322;
    const double C4420 = C4412 + C1138;
    const double C28732 = C28717 / C27405;
    const double C4798 = C28714 * C156;
    const double C4794 = C28714 * C151;
    const double C4790 = C28714 * C155;
    const double C4786 = C28714 * C150;
    const double C4977 = C28714 * C316;
    const double C4971 = C28714 * C315;
    const double C5161 = C28714 * C468;
    const double C5157 = C28714 * C467;
    const double C7861 = C28714 * C1014;
    const double C7857 = C28714 * C1010;
    const double C8293 = C28714 * C1250;
    const double C9169 = C28714 * C1015;
    const double C9165 = C28714 * C1011;
    const double C9375 = C28714 * C1133;
    const double C9587 = C28714 * C1251;
    const double C27007 = C28714 * C3118;
    const double C27003 = C28714 * C3115;
    const double C27335 = C28714 * C3494;
    const double C1424 =
        (((0 - (C27464 * C27482) / C27400) * ae) / C27400 - (0 * be) / C27415) /
            C27406 +
        ((C27464 * (((C28558 - (C27464 * 2 * C27484) / C27400) * ae) / C27400 -
                    C27482 / C27415) +
          C28714) *
         ae) /
            C27400 +
        (0 * ae) / C27400 - C27484 / C27405;
    const double C1437 = C1347 * C638;
    const double C1827 = C1347 * C878;
    const double C21260 = C1347 * C2604;
    const double C1436 = C1425 * C588;
    const double C1642 = C1425 * C637;
    const double C1636 = C1425 * C638;
    const double C1630 = C1425 * C639;
    const double C1826 = C1425 * C680;
    const double C21259 = C1425 * C2536;
    const double C21253 = C1425 * C2532;
    const double C21595 = C1425 * C2658;
    const double C28733 = C28719 / C27400;
    const double C14297 = C13870 * C1821;
    const double C18285 = C13870 * C2603;
    const double C9714 = -C28731;
    const double C1441 = C1346 * C155;
    const double C1435 = C1346 * C150;
    const double C1634 = C1346 * C315;
    const double C1825 = C1346 * C467;
    const double C21258 = C1346 * C1015;
    const double C21252 = C1346 * C1011;
    const double C21426 = C1346 * C1133;
    const double C21594 = C1346 * C1251;
    const double C27519 = C27467 * C27518;
    const double C18832 = (-C27518 / C27400) / C27406 - (0 * be) / C27400;
    const double C27668 = C27665 - C27661;
    const double C27685 = C27682 / C27400;
    const double C3387 = C3185 * C3116;
    const double C12886 = C3185 * C3642;
    const double C6383 = C6371 * C959;
    const double C6375 = C6371 * C960;
    const double C6558 = C6371 * C1009;
    const double C6554 = C6371 * C1010;
    const double C6739 = C6371 * C1051;
    const double C6733 = C6371 * C1052;
    const double C6728 = C6371 * C1053;
    const double C7210 = C6371 * C2658;
    const double C8588 = C6371 * C2536;
    const double C8584 = C6371 * C2532;
    const double C9024 = C6371 * C2656;
    const double C17830 = C6371 * C2534;
    const double C17826 = C6371 * C2530;
    const double C236 = C225 + C226;
    const double C235 = C223 + C224;
    const double C388 = C380 + C381;
    const double C2101 = C2090 + C2091;
    const double C2100 = C2088 + C2089;
    const double C2298 = C2294 + C2295;
    const double C538 = C528 + C529;
    const double C2474 = C2468 + C922;
    const double C28735 = C28721 / C27405;
    const double C6386 = C28715 * C219;
    const double C6382 = C28715 * C214;
    const double C6378 = C28715 * C218;
    const double C6374 = C28715 * C213;
    const double C6557 = C28715 * C375;
    const double C6553 = C28715 * C374;
    const double C6737 = C28715 * C523;
    const double C6731 = C28715 * C522;
    const double C7939 = C28715 * C684;
    const double C7935 = C28715 * C680;
    const double C8155 = C28715 * C802;
    const double C8587 = C28715 * C685;
    const double C8583 = C28715 * C681;
    const double C8809 = C28715 * C803;
    const double C9019 = C28715 * C917;
    const double C17829 = C28715 * C1504;
    const double C17825 = C28715 * C1501;
    const double C17996 = C28715 * C1702;
    const double C3183 =
        (((0 - (C27467 * C27508) / C27400) * ae) / C27400 - (0 * be) / C27415) /
            C27406 +
        ((C27467 * (((C28569 - (C27467 * 2 * C27510) / C27400) * ae) / C27400 -
                    C27508 / C27415) +
          C28715) *
         ae) /
            C27400 +
        (0 * ae) / C27400 - C27510 / C27405;
    const double C3196 = C3048 * C1052;
    const double C3386 = C3048 * C1174;
    const double C12885 = C3048 * C2662;
    const double C12879 = C3048 * C2658;
    const double C13066 = C3048 * C2830;
    const double C3195 = C3184 * C960;
    const double C3385 = C3184 * C1010;
    const double C3579 = C3184 * C1051;
    const double C3573 = C3184 * C1052;
    const double C3567 = C3184 * C1053;
    const double C4076 = C3184 * C2658;
    const double C12884 = C3184 * C2536;
    const double C12878 = C3184 * C2532;
    const double C13244 = C3184 * C2656;
    const double C28736 = C28723 / C27400;
    const double C26560 = C24525 * C3754;
    const double C18726 = -C28734;
    const double C3200 = C3047 * C218;
    const double C3194 = C3047 * C213;
    const double C3384 = C3047 * C374;
    const double C3571 = C3047 * C522;
    const double C12883 = C3047 * C685;
    const double C12877 = C3047 * C681;
    const double C13064 = C3047 * C803;
    const double C13238 = C3047 * C917;
    const double C27728 = ae * C27727;
    const double C98 =
        (C27714 * C27712 * C27721 + C27713 * C27727 + C27713 * C27716 * ae) /
        C27400;
    const double C592 = (C27783 * C27727) / C27400;
    const double C964 = (C27808 * C27727) / C27400;
    const double C2103 = C2096 + C2097;
    const double C4225 = C4218 + C4219;
    const double C28014 = C28013 + C27739;
    const double C28147 = C28146 + C27739;
    const double C2828 = (ae * (C27808 * C27821 + C27739) +
                          C27783 * (ae * C27796 + C27808 * C28063)) /
                         C27405;
    const double C2995 = C211 * C2657;
    const double C4073 = C3184 * C2657;
    const double C7208 = C6371 * C2657;
    const double C7937 = C28633 * C2657;
    const double C8294 = C4783 * C2657;
    const double C22863 = C28633 * C2657;
    const double C1438 = C1426 * C1354;
    const double C1512 = C211 * C1354;
    const double C1890 = C520 * C1354;
    const double C7858 = C4783 * C2531;
    const double C7936 = C6371 * C2531;
    const double C3126 = C148 * C3051;
    const double C3197 = C3185 * C3051;
    const double C3320 = C313 * C3051;
    const double C27745 = ae * C27743;
    const double C27744 = C27713 * C27743;
    const double C27754 = 2 * C27743;
    const double C27914 = C27783 * C27743;
    const double C27957 = C27808 * C27743;
    const double C1357 = (C27727 + C27743 * C27847) / C27400;
    const double C3054 = (C27727 + C27743 * C27896) / C27400;
    const double C28058 = ae * C28055;
    const double C28057 = C27783 * C28055;
    const double C28095 = C27808 * C28055;
    const double C28240 = 2 * C28055;
    const double C28212 = ae * C28209;
    const double C28211 = C27808 * C28209;
    const double C28346 = 2 * C28209;
    const double C13068 = C3049 * C3914;
    const double C26724 = C24525 * C3914;
    const double C596 =
        (2 * ae * C27783 * C27725 + C27713 * C27783 * C27742) / C27405;
    const double C968 =
        (2 * ae * C27808 * C27725 + C27713 * C27808 * C27742) / C27405;
    const double C1359 =
        ((C27716 + C27717 * C27718 * C27722) * C27720 + C27742 * C27847) /
        C27405;
    const double C2540 = (C27808 * C27783 * C27742) / C27405;
    const double C3056 =
        ((C27716 + C27717 * C27718 * C27722) * C27720 + C27742 * C27896) /
        C27405;
    const double C317 =
        (2 * C27713 * C27852 +
         C27713 *
             (C27852 + (C27751 + C27847 * C27752 * C27753) * C27720 * C27717)) /
        C27405;
    const double C760 =
        (2 * ae * C27713 * C27789 + C27783 * C27713 * C27852) / C27405;
    const double C1132 = (C27808 * C27713 * C27852) / C27405;
    const double C2770 =
        (2 * ae * C27808 * C27789 + C27783 * C27808 * C27852) / C27405;
    const double C3313 =
        ((C27716 + C27847 * C27718 * C27722) * C27720 + C27852 * C27896) /
        C27405;
    const double C524 =
        (2 * C27713 * C27901 +
         C27713 *
             (C27901 + (C27751 + C27896 * C27752 * C27753) * C27720 * C27717)) /
        C27405;
    const double C916 = (C27783 * C27713 * C27901) / C27405;
    const double C1288 =
        (2 * ae * C27713 * C27814 + C27808 * C27713 * C27901) / C27405;
    const double C1882 =
        ((C27716 + C27896 * C27718 * C27722) * C27720 + C27901 * C27847) /
        C27405;
    const double C2992 =
        (2 * ae * C27783 * C27814 + C27808 * C27783 * C27901) / C27405;
    const double C28178 = C28177 + C28056;
    const double C2829 = (ae * C27789 + C27808 * C27865 +
                          ae * (C27808 * C27783 * C27819 + C28056) +
                          C27783 * (ae * (C27808 * C27819 + C27735) +
                                    C27783 * (C27797 + C27808 * C27868))) /
                         C27405;
    const double C12880 = C3185 * C3640;
    const double C27004 = C4783 * C3640;
    const double C28011 = ae * C28010;
    const double C1427 =
        (C27714 * C27712 * C27786 + C27783 * C28010 + C27783 * C27716 * ae) /
        C27400;
    const double C2600 = (C27808 * C28010) / C27400;
    const double C3698 = (C28010 + C28055 * C27896) / C27400;
    const double C174 = C164 + C165;
    const double C332 = C324 + C325;
    const double C389 = C383 + C384;
    const double C176 = C168 + C169;
    const double C333 = C327 + C328;
    const double C390 = C386 + C387;
    const double C6499 = C6497 + C1136;
    const double C6319 = C6315 + C6316;
    const double C3324 = C3317 + C1137;
    const double C3130 = C3122 + C3123;
    const double C4421 = C4415 + C3319;
    const double C4224 = C4216 + C4217;
    const double C22508 = C22505 + C4419;
    const double C22381 = C22377 + C22378;
    const double C28144 = ae * C28143;
    const double C3186 =
        (C27714 * C27712 * C27811 + C27808 * C28143 + C27808 * C27716 * ae) /
        C27400;
    const double C1714 = C1709 + C1710;
    const double C237 = C227 + C228;
    const double C482 = C476 + C477;
    const double C539 = C531 + C532;
    const double C239 = C231 + C232;
    const double C483 = C479 + C480;
    const double C540 = C534 + C535;
    const double C5223 = C5221 + C920;
    const double C4863 = C4859 + C4860;
    const double C1894 = C1888 + C921;
    const double C1516 = C1508 + C1509;
    const double C3506 = C3501 + C3502;
    const double C2475 = C2470 + C1886;
    const double C2102 = C2094 + C2095;
    const double C11914 = C11911 + C2473;
    const double C11657 = C11653 + C11654;
    const double C27772 = ae * C27769;
    const double C27771 = C27713 * C27769;
    const double C27910 = C27783 * C27769;
    const double C27953 = C27808 * C27769;
    const double C27996 = C27769 * C27847;
    const double C28117 = C27769 * C27896;
    const double C12028 =
        (ae * (2 * C28159 + C27783 * C28232) +
         C27808 * (2 * C27783 * C27825 +
                   C27783 * (C27825 +
                             std::pow(C27711, 6) * bs[6] * C27812 * C27847))) /
        C27405;
    const double C12063 =
        (2 * (ae * C27808 * C27738 + C27783 * C28272) + ae * C27808 * C28232 +
         C27783 * (C28272 + ae * C27808 * C27783 * C27762 +
                   C27783 * (ae * C27808 * C27762 + C27783 * C27808 *
                                                        std::pow(C27711, 6) *
                                                        bs[6] * C27835))) /
        C27405;
    const double C12172 =
        (ae * (2 * C28159 + C27783 * C28232) +
         C27808 * (2 * C27783 * C27879 +
                   C27783 * (C27879 +
                             std::pow(C27711, 6) * bs[6] * C27873 * C27847))) /
        C27405;
    const double C12874 =
        (C27818 + C27825 * C27847 + ae * C27808 * C28232 +
         C27808 *
             (ae * C28232 + C27808 * (C27825 + std::pow(C27711, 6) * bs[6] *
                                                   C27812 * C27847))) /
        C27405;
    const double C13121 =
        (C27876 + C27879 * C27847 + ae * C27808 * C28232 +
         C27808 *
             (ae * C28232 + C27808 * (C27879 + std::pow(C27711, 6) * bs[6] *
                                                   C27873 * C27847))) /
        C27405;
    const double C11555 = (3 * (C27725 + C27738 * C27847) +
                           C27783 * (2 * C28159 + C27783 * C28232)) /
                          C27400;
    const double C11951 = (C27808 * (2 * C28159 + C27783 * C28232)) / C27400;
    const double C12755 = (C27725 + C27738 * C27847 + C28232 * C27896) / C27400;
    const double C22328 = (3 * (C27725 + C27738 * C27896) +
                           C27808 * (2 * C28326 + C27808 * C28330)) /
                          C27400;
    const double C27770 = C27713 * C27768;
    const double C27908 = C27783 * C27768;
    const double C27951 = C27808 * C27768;
    const double C1360 = (2 * ae * (C27725 + C27738 * C27847) +
                          C27713 * (C27742 + C27768 * C27847)) /
                         C27405;
    const double C1956 =
        (2 * C27783 * C27742 + C27783 * (C27742 + C27768 * C27847)) / C27405;
    const double C2537 = (2 * ae * C27808 * (C27738 + C27762 * C27847) +
                          C27713 * C27808 *
                              (C27768 + (C27752 * C27753 +
                                         C27717 * bs[6] * std::pow(C27711, 6)) *
                                            C27720 * C27847)) /
                         C27405;
    const double C2538 = (C27808 * (C27742 + C27768 * C27847)) / C27405;
    const double C3057 = (2 * ae * (C27725 + C27738 * C27896) +
                          C27713 * (C27742 + C27768 * C27896)) /
                         C27405;
    const double C4132 =
        (2 * C27808 * C27742 + C27808 * (C27742 + C27768 * C27896)) / C27405;
    const double C12756 =
        (C27742 + C27768 * C27847 +
         (C27768 + (C27752 * C27753 + C27717 * bs[6] * std::pow(C27711, 6)) *
                       C27720 * C27847) *
             C27896) /
        C27405;
    const double C28017 = C27783 * C27805;
    const double C1172 =
        (ae * (2 * C27796 + C27713 * C27805) +
         C27808 * (2 * C27713 * C27868 +
                   C27713 * (C27868 +
                             std::pow(C27711, 6) * bs[6] * C27862 * C27717))) /
        C27405;
    const double C1248 =
        (ae * (2 * C27796 + C27713 * C27805) +
         C27808 * (2 * C27713 * C27892 +
                   C27713 * (C27892 +
                             std::pow(C27711, 6) * bs[6] * C27886 * C27717))) /
        C27405;
    const double C3381 =
        (C27865 + C27868 * C27717 + ae * C27808 * C27805 +
         C27808 *
             (ae * C27805 + C27808 * (C27868 + std::pow(C27711, 6) * bs[6] *
                                                   C27862 * C27717))) /
        C27405;
    const double C3496 =
        (C27889 + C27892 * C27717 + ae * C27808 * C27805 +
         C27808 *
             (ae * C27805 + C27808 * (C27892 + std::pow(C27711, 6) * bs[6] *
                                                   C27886 * C27717))) /
        C27405;
    const double C153 = (3 * (C27789 + C27794 * C27717) +
                         C27713 * (2 * C27796 + C27713 * C27805)) /
                        C27400;
    const double C636 = (C27783 * (2 * C27796 + C27713 * C27805) +
                         (2 * C27736 + C27713 * C27764) * ae) /
                        C27400;
    const double C1008 = (C27808 * (2 * C27796 + C27713 * C27805)) / C27400;
    const double C3117 = (C27789 + C27794 * C27717 + C27805 * C27896) / C27400;
    const double C28046 = C28044 + C27763;
    const double C4418 = C148 * C4205;
    const double C28250 = ae * C28245;
    const double C28248 = C27783 * C28245;
    const double C28276 = C27808 * C28245;
    const double C28290 = C28245 * C27896;
    const double C22370 = (3 * (C27789 + C27794 * C27896) +
                           C27808 * (2 * C28334 + C27808 * C28336)) /
                          C27400;
    const double C158 =
        (3 * (C27793 + ae * C27796 + C27713 * C27804) +
         ae * (2 * C27796 + C27713 * C27805) +
         C27713 *
             (2 * C27804 + ae * C27805 +
              C27713 * (C27800 + ae * C27713 * C27801 +
                        C27713 * (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C1012 =
        (C27808 *
         (2 * C27804 + ae * C27805 +
          C27713 * (C27800 + ae * C27713 * C27801 +
                    C27713 * (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                bs[6] * C27787)))) /
        C27405;
    const double C1013 =
        (C27808 * (C27793 + ae * C27796 + C27713 * C27804)) / C27405;
    const double C3119 =
        (ae * C27789 + C27713 * C27793 + C27804 * C27896) / C27405;
    const double C3120 =
        (C27793 + ae * C27796 + C27713 * C27804 +
         (C27800 + ae * C28042 +
          C27713 *
              (ae * C27801 + C27713 * std::pow(C27711, 6) * bs[6] * C27787)) *
             C27896) /
        C27405;
    const double C4207 =
        (2 * C27808 * C27804 +
         C27808 * (C27804 + (ae * C27801 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27787) *
                                C27896)) /
        C27405;
    const double C11611 =
        (3 * (C27793 + ae * C28159 + C27783 * C28231) +
         ae * (2 * C28159 + C27783 * C28232) +
         C27783 *
             (2 * C28231 + ae * C28232 +
              C27783 * (C27800 + ae * C27783 * C27762 +
                        C27783 * (ae * C27762 + C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C11992 =
        (C27808 *
         (2 * C28231 + ae * C28232 +
          C27783 * (C27800 + ae * C27783 * C27762 +
                    C27783 * (ae * C27762 + C27783 * std::pow(C27711, 6) *
                                                bs[6] * C27787)))) /
        C27405;
    const double C12822 =
        (C27793 + ae * C28159 + C27783 * C28231 +
         (C27800 + ae * C27783 * C27762 +
          C27783 *
              (ae * C27762 + C27783 * std::pow(C27711, 6) * bs[6] * C27787)) *
             C27896) /
        C27405;
    const double C13370 =
        (2 * C27808 * C28231 +
         C27808 * (C28231 + (ae * C27762 +
                             C27783 * std::pow(C27711, 6) * bs[6] * C27787) *
                                C27896)) /
        C27405;
    const double C22382 = C22379 + C22380;
    const double C28150 = C27808 * C27830;
    const double C800 =
        (ae * (2 * C27821 + C27713 * C27830) +
         C27783 * (2 * C27713 * C27868 +
                   C27713 * (C27868 +
                             std::pow(C27711, 6) * bs[6] * C27862 * C27717))) /
        C27405;
    const double C876 =
        (ae * (2 * C27821 + C27713 * C27830) +
         C27783 * (2 * C27713 * C27892 +
                   C27713 * (C27892 +
                             std::pow(C27711, 6) * bs[6] * C27886 * C27717))) /
        C27405;
    const double C1704 =
        (C27865 + C27868 * C27717 + ae * C27783 * C27830 +
         C27783 *
             (ae * C27830 + C27783 * (C27868 + std::pow(C27711, 6) * bs[6] *
                                                   C27862 * C27717))) /
        C27405;
    const double C1822 =
        (C27889 + C27892 * C27717 + ae * C27783 * C27830 +
         C27783 *
             (ae * C27830 + C27783 * (C27892 + std::pow(C27711, 6) * bs[6] *
                                                   C27886 * C27717))) /
        C27405;
    const double C216 = (3 * (C27814 + C27819 * C27717) +
                         C27713 * (2 * C27821 + C27713 * C27830)) /
                        C27400;
    const double C678 = (C27783 * (2 * C27821 + C27713 * C27830)) / C27400;
    const double C1050 = (C27808 * (2 * C27821 + C27713 * C27830) +
                          (2 * C27736 + C27713 * C27764) * ae) /
                         C27400;
    const double C1503 = (C27814 + C27819 * C27717 + C27830 * C27847) / C27400;
    const double C5894 =
        (C27808 * C27783 * C27830 + C27783 * C27764 * ae) / C27400;
    const double C28172 = C27808 * C28171;
    const double C28199 = C28197 + C27763;
    const double C2472 = C211 * C2083;
    const double C2994 = C211 * C2655;
    const double C9022 = C6371 * C2655;
    const double C28297 = C27808 * C28262;
    const double C11646 = (3 * (C27814 + C27819 * C27847) +
                           C27783 * (2 * C28176 + C27783 * C28262)) /
                          C27400;
    const double C12027 = (C27808 * (2 * C28176 + C27783 * C28262) +
                           (2 * C28054 + C27783 * C28247) * ae) /
                          C27400;
    const double C28317 = C28315 + C28246;
    const double C28356 = ae * C28351;
    const double C28354 = C27808 * C28351;
    const double C221 =
        (3 * (C27818 + ae * C27821 + C27713 * C27829) +
         ae * (2 * C27821 + C27713 * C27830) +
         C27713 *
             (2 * C27829 + ae * C27830 +
              C27713 * (C27825 + ae * C27713 * C27826 +
                        C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27812)))) /
        C27405;
    const double C682 =
        (C27783 *
         (2 * C27829 + ae * C27830 +
          C27713 * (C27825 + ae * C27713 * C27826 +
                    C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                bs[6] * C27812)))) /
        C27405;
    const double C683 =
        (C27783 * (C27818 + ae * C27821 + C27713 * C27829)) / C27405;
    const double C1505 =
        (ae * C27814 + C27713 * C27818 + C27829 * C27847) / C27405;
    const double C1506 =
        (C27818 + ae * C27821 + C27713 * C27829 +
         (C27825 + ae * C27713 * C27826 +
          C27713 *
              (ae * C27826 + C27713 * std::pow(C27711, 6) * bs[6] * C27812)) *
             C27847) /
        C27405;
    const double C2085 =
        (2 * C27783 * C27829 +
         C27783 * (C27829 + (ae * C27826 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27812) *
                                C27847)) /
        C27405;
    const double C22419 =
        (3 * (C27818 + ae * C28326 + C27808 * C28329) +
         ae * (2 * C28326 + C27808 * C28330) +
         C27808 *
             (2 * C28329 + ae * C28330 +
              C27808 * (C27825 + ae * C27808 * C27762 +
                        C27808 * (ae * C27762 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27812)))) /
        C27405;
    const double C11658 = C11655 + C11656;
    const double C278 =
        (3 * (C27838 + ae * C27796 + C27713 * C27843) +
         ae * (2 * C27796 + C27713 * C27805) +
         C27713 *
             (2 * C27843 + ae * C27805 +
              C27713 * (C27841 + ae * C27713 * C27801 +
                        C27713 * (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27835)))) /
        C27405;
    const double C1092 =
        (C27808 *
         (2 * C27843 + ae * C27805 +
          C27713 * (C27841 + ae * C27713 * C27801 +
                    C27713 * (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                bs[6] * C27835)))) /
        C27405;
    const double C1093 =
        (C27808 * (C27838 + ae * C27796 + C27713 * C27843)) / C27405;
    const double C3261 =
        (ae * C27789 + C27713 * C27838 + C27843 * C27896) / C27405;
    const double C3262 =
        (C27838 + ae * C27796 + C27713 * C27843 +
         (C27841 + ae * C28042 +
          C27713 *
              (ae * C27801 + C27713 * std::pow(C27711, 6) * bs[6] * C27835)) *
             C27896) /
        C27405;
    const double C4333 =
        (2 * C27808 * C27843 +
         C27808 * (C27843 + (ae * C27801 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27835) *
                                C27896)) /
        C27405;
    const double C11694 =
        (3 * (C27838 + ae * C28159 + C27783 * C28236) +
         ae * (2 * C28159 + C27783 * C28232) +
         C27783 *
             (2 * C28236 + ae * C28232 +
              C27783 * (C27841 + ae * C27783 * C27762 +
                        C27783 * (ae * C27762 + C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27835)))) /
        C27405;
    const double C28041 = C27713 * C27857;
    const double C28239 = C27783 * C27857;
    const double C28274 = C27808 * C27857;
    const double C318 =
        (3 * (C27852 + C27857 * C27717) +
         C27713 * (2 * C27713 * C27857 +
                   C27713 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C758 =
        (2 * ae * (2 * C27796 + C27713 * C27805) +
         C27783 * (2 * C27713 * C27857 +
                   C27713 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C759 = (2 * ae * (C27789 + C27794 * C27717) +
                         C27783 * (C27852 + C27857 * C27717)) /
                        C27405;
    const double C1130 =
        (C27808 * (2 * C27713 * C27857 +
                   C27713 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C1131 = (C27808 * (C27852 + C27857 * C27717)) / C27405;
    const double C3315 =
        (C27852 + C27857 * C27717 +
         (C27857 + (C27752 * C27753 + C27847 * bs[6] * std::pow(C27711, 6)) *
                       C27720 * C27717) *
             C27896) /
        C27405;
    const double C3858 = (2 * ae * (C27789 + C27794 * C27896) +
                          C27783 * (C27852 + C27857 * C27896)) /
                         C27405;
    const double C4410 =
        (2 * C27808 * C27852 + C27808 * (C27852 + C27857 * C27896)) / C27405;
    const double C5997 = (2 * ae * C27808 * C27805 +
                          C27783 * C27808 *
                              (C27857 + (C27752 * C27753 +
                                         C27847 * bs[6] * std::pow(C27711, 6)) *
                                            C27720 * C27717)) /
                         C27405;
    const double C3388 = C3049 * C3380;
    const double C24805 = C24525 * C3380;
    const double C11786 =
        (3 * (C27865 + ae * C28176 + C27783 * C28261) +
         ae * (2 * C28176 + C27783 * C28262) +
         C27783 *
             (2 * C28261 + ae * C28262 +
              C27783 * (C27868 + ae * C27783 * C27826 +
                        C27783 * (ae * C27826 + C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27862)))) /
        C27405;
    const double C13061 =
        (C27865 + ae * C27808 * C27794 + C27808 * C28281 +
         ae * (C28176 + C27808 * (C27808 * C27783 * C27826 + C28246) +
               C27808 * C28242 * ae) +
         C27783 *
             (ae * (C27819 + C27808 * (C27808 * C27826 + C27758) +
                    C27808 * C27751 * ae) +
              C27783 * (C27868 + ae * C27808 * C27801 +
                        C27808 * (ae * C27801 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27862)))) /
        C27405;
    const double C13641 =
        (ae * (2 * C28209 +
               C27808 * (C27819 + C27808 * (C27808 * C27826 + C27758) +
                         C27808 * C27751 * ae) +
               (C27730 + C27751 * C27896) * ae) +
         C27783 *
             (2 * C28281 + ae * (C27794 + C27801 * C27896) +
              C27808 * (C27868 + ae * C27808 * C27801 +
                        C27808 * (ae * C27801 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27862)))) /
        C27405;
    const double C22545 =
        (3 * (C27865 + ae * C28334 + C27808 * C28281) +
         ae * (2 * C28334 + C27808 * C28336) +
         C27808 *
             (2 * C28281 + ae * C28336 +
              C27808 * (C27868 + ae * C27808 * C27801 +
                        C27808 * (ae * C27801 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27862)))) /
        C27405;
    const double C5054 = C5052 + C5053;
    const double C431 =
        (3 * (C27876 + ae * C27821 + C27713 * C27881) +
         ae * (2 * C27821 + C27713 * C27830) +
         C27713 *
             (2 * C27881 + ae * C27830 +
              C27713 * (C27879 + ae * C27713 * C27826 +
                        C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27873)))) /
        C27405;
    const double C838 =
        (C27783 *
         (2 * C27881 + ae * C27830 +
          C27713 * (C27879 + ae * C27713 * C27826 +
                    C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                bs[6] * C27873)))) /
        C27405;
    const double C839 =
        (C27783 * (C27876 + ae * C27821 + C27713 * C27881)) / C27405;
    const double C1768 =
        (ae * C27814 + C27713 * C27876 + C27881 * C27847) / C27405;
    const double C1769 =
        (C27876 + ae * C27821 + C27713 * C27881 +
         (C27879 + ae * C27713 * C27826 +
          C27713 *
              (ae * C27826 + C27713 * std::pow(C27711, 6) * bs[6] * C27873)) *
             C27847) /
        C27405;
    const double C2349 =
        (2 * C27783 * C27881 +
         C27783 * (C27881 + (ae * C27826 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27873) *
                                C27847)) /
        C27405;
    const double C22580 =
        (3 * (C27876 + ae * C28326 + C27808 * C28339) +
         ae * (2 * C28326 + C27808 * C28330) +
         C27808 *
             (2 * C28339 + ae * C28330 +
              C27808 * (C27879 + ae * C27808 * C27762 +
                        C27808 * (ae * C27762 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27873)))) /
        C27405;
    const double C3505 = C28558 * C3495;
    const double C11874 =
        (3 * (C27889 + ae * C28176 + C27783 * C28266) +
         ae * (2 * C28176 + C27783 * C28262) +
         C27783 *
             (2 * C28266 + ae * C28262 +
              C27783 * (C27892 + ae * C27783 * C27826 +
                        C27783 * (ae * C27826 + C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27886)))) /
        C27405;
    const double C22618 =
        (3 * (C27889 + ae * C28334 + C27808 * C28342) +
         ae * (2 * C28334 + C27808 * C28336) +
         C27808 *
             (2 * C28342 + ae * C28336 +
              C27808 * (C27892 + ae * C27808 * C27801 +
                        C27808 * (ae * C27801 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27886)))) /
        C27405;
    const double C6673 = C6671 + C6672;
    const double C28072 = C27713 * C27906;
    const double C28312 = C27783 * C27906;
    const double C28345 = C27808 * C27906;
    const double C525 =
        (3 * (C27901 + C27906 * C27717) +
         C27713 * (2 * C27713 * C27906 +
                   C27713 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C914 =
        (C27783 * (2 * C27713 * C27906 +
                   C27713 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C915 = (C27783 * (C27901 + C27906 * C27717)) / C27405;
    const double C1286 =
        (2 * ae * (2 * C27821 + C27713 * C27830) +
         C27808 * (2 * C27713 * C27906 +
                   C27713 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C1287 = (2 * ae * (C27814 + C27819 * C27717) +
                          C27808 * (C27901 + C27906 * C27717)) /
                         C27405;
    const double C1883 = (C27713 * C27901 + C27713 * C27906 * C27847) / C27405;
    const double C1884 =
        (C27901 + C27906 * C27717 +
         (C27906 + (C27752 * C27753 + C27896 * bs[6] * std::pow(C27711, 6)) *
                       C27720 * C27717) *
             C27847) /
        C27405;
    const double C2466 =
        (2 * C27783 * C27901 + C27783 * (C27901 + C27906 * C27847)) / C27405;
    const double C2991 = (2 * ae * (C27814 + C27819 * C27847) +
                          C27808 * (C27901 + C27906 * C27847)) /
                         C27405;
    const double C6207 = (2 * ae * C27783 * C27830 +
                          C27808 * C27783 *
                              (C27906 + (C27752 * C27753 +
                                         C27896 * bs[6] * std::pow(C27711, 6)) *
                                            C27720 * C27717)) /
                         C27405;
    const double C11909 =
        (3 * (C27901 + C27906 * C27847) +
         C27783 * (2 * C27783 * C27906 +
                   C27783 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C12242 =
        (2 * ae * (2 * C28176 + C27783 * C28262) +
         C27808 * (2 * C27783 * C27906 +
                   C27783 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C2827 =
        (ae * C27796 + C27808 * C28063 +
         ae * (C27808 * C27783 * C28064 + C28045) +
         C27783 *
             (ae * (C27808 * C28064 + C27763) +
              C27783 * (ae * C28042 + C27808 * C27713 * std::pow(C27711, 6) *
                                          bs[6] * C27862))) /
        C27405;
    const double C13877 = C27426 * C97;
    const double C14594 = C27426 * C1354;
    const double C14590 = C27426 * C638;
    const double C14586 = C27426 * C588;
    const double C14770 = C27426 * C1502;
    const double C14766 = C27426 * C680;
    const double C16240 = C27426 * C2531;
    const double C16452 = C27426 * C2657;
    const double C16872 = C27426 * C1010;
    const double C16868 = C27426 * C960;
    const double C17078 = C27426 * C1052;
    const double C25674 = C27426 * C3116;
    const double C25670 = C27426 * C3051;
    const double C90 =
        (C27426 / C27406 - (0 * be) / C27400) / C27406 + (0 * ae) / C27400;
    const double C4719 = C27426 / C27406 - (0 * be) / C27400;
    const double C9721 = C27426 / C27406 + (0 * ae) / C27400;
    const double C27428 = C27425 / C27400;
    const double C1364 = C1352 * C97;
    const double C2170 = C1352 * C1354;
    const double C2166 = C1352 * C638;
    const double C2162 = C1352 * C588;
    const double C2358 = C1352 * C1502;
    const double C2354 = C1352 * C680;
    const double C4350 = C1352 * C3116;
    const double C4346 = C1352 * C3051;
    const double C4342 = C1352 * C1010;
    const double C4338 = C1352 * C960;
    const double C4534 = C1352 * C1052;
    const double C8662 = C1352 * C2531;
    const double C8882 = C1352 * C2657;
    const double C11232 = C11223 * C97;
    const double C11228 = C11223 * C1954;
    const double C11227 = C11223 * C1356;
    const double C11226 = C11223 * C593;
    const double C11225 = C11223 * C96;
    const double C11704 = C11223 * C1952;
    const double C11700 = C11223 * C1353;
    const double C11698 = C11223 * C639;
    const double C11696 = C11223 * C589;
    const double C11833 = C11223 * C2084;
    const double C11830 = C11223 * C1501;
    const double C11827 = C11223 * C681;
    const double C11957 = C11223 * C965;
    const double C11956 = C11223 * C2536;
    const double C11955 = C11223 * C2534;
    const double C12296 = C11223 * C3642;
    const double C12295 = C11223 * C3053;
    const double C12949 = C11223 * C3640;
    const double C12945 = C11223 * C2532;
    const double C13126 = C11223 * C2658;
    const double C13313 = C11223 * C4130;
    const double C13312 = C11223 * C13305;
    const double C13507 = C11223 * C3115;
    const double C13505 = C11223 * C3050;
    const double C13501 = C11223 * C1011;
    const double C13499 = C11223 * C961;
    const double C13694 = C11223 * C1053;
    const double C17886 = C11223 * C2530;
    const double C18058 = C11223 * C2656;
    const double C22462 = C11223 * C4206;
    const double C22460 = C11223 * C4128;
    const double C28737 = C28699 - C28724;
    const double C28738 = C28703 - C28726;
    const double C1959 = C1344 * C597;
    const double C2173 = C1344 * C1569;
    const double C2169 = C1344 * C1356;
    const double C2165 = C1344 * C723;
    const double C2161 = C1344 * C593;
    const double C2357 = C1344 * C1767;
    const double C2353 = C1344 * C841;
    const double C4135 = C1344 * C969;
    const double C4349 = C1344 * C3260;
    const double C4345 = C1344 * C3053;
    const double C4341 = C1344 * C1095;
    const double C4337 = C1344 * C965;
    const double C4537 = C1344 * C3441;
    const double C4533 = C1344 * C1213;
    const double C8665 = C1344 * C2716;
    const double C8661 = C1344 * C2536;
    const double C8881 = C1344 * C2884;
    const double C27494 = C27493 / C27400;
    const double C9797 = C9785 * C587;
    const double C9789 = C9785 * C588;
    const double C9975 = C9785 * C637;
    const double C9969 = C9785 * C638;
    const double C9964 = C9785 * C639;
    const double C10155 = C9785 * C679;
    const double C10151 = C9785 * C680;
    const double C13386 = C9785 * C3642;
    const double C13382 = C9785 * C3640;
    const double C13378 = C9785 * C2536;
    const double C13374 = C9785 * C2532;
    const double C13753 = C9785 * C2658;
    const double C15476 = C9785 * C2531;
    const double C15894 = C9785 * C2657;
    const double C11269 =
        (C27597 / C27406 - (0 * be) / C27400) / C27406 + (0 * ae) / C27400;
    const double C13939 = C27597 / C27406 - (0 * be) / C27400;
    const double C1832 = C1828 + C1829;
    const double C21268 = C21261 + C21262;
    const double C4806 = C4795 + C4796;
    const double C4802 = C4787 + C4788;
    const double C5167 = C5162 + C5163;
    const double C5165 = C5158 + C5159;
    const double C9175 = C9170 + C9171;
    const double C27013 = C27008 + C27009;
    const double C472 = C172 * C211;
    const double C484 = C481 * C28569;
    const double C3499 = C481 * C3047;
    const double C6665 = C481 * C28715;
    const double C4227 = C4223 * C1344;
    const double C19783 = C4223 * C9711;
    const double C22374 = C4223 * C28512;
    const double C25561 = C4223 * C28701;
    const double C22373 = C4222 * C11223;
    const double C334 = C331 + C322;
    const double C4422 = C4420 + C1138;
    const double C28742 = C28711 - C28732;
    const double C1440 = C1424 * C97;
    const double C1434 = C1424 * C92;
    const double C1643 = C1424 * C151;
    const double C1633 = C1424 * C150;
    const double C1629 = C1424 * C149;
    const double C1824 = C1424 * C213;
    const double C2241 = C1424 * C639;
    const double C2238 = C1424 * C638;
    const double C2777 = C1424 * C1011;
    const double C2774 = C1424 * C1010;
    const double C21257 = C1424 * C965;
    const double C21251 = C1424 * C961;
    const double C21433 = C1424 * C3115;
    const double C21593 = C1424 * C1053;
    const double C1447 = C1436 + C1437;
    const double C1831 = C1826 + C1827;
    const double C21267 = C21259 + C21260;
    const double C28743 = C28718 - C28733;
    const double C9800 = C9714 * C156;
    const double C9796 = C9714 * C151;
    const double C9792 = C9714 * C155;
    const double C9788 = C9714 * C150;
    const double C9973 = C9714 * C316;
    const double C9967 = C9714 * C315;
    const double C10154 = C9714 * C468;
    const double C10150 = C9714 * C467;
    const double C13385 = C9714 * C3118;
    const double C13381 = C9714 * C3115;
    const double C13377 = C9714 * C1015;
    const double C13373 = C9714 * C1011;
    const double C13571 = C9714 * C1133;
    const double C13756 = C9714 * C3494;
    const double C13752 = C9714 * C1251;
    const double C15479 = C9714 * C1014;
    const double C15475 = C9714 * C1010;
    const double C15893 = C9714 * C1250;
    const double C27520 = C27519 / C27400;
    const double C18844 = C18832 * C959;
    const double C18836 = C18832 * C960;
    const double C19014 = C18832 * C1009;
    const double C19010 = C18832 * C1010;
    const double C19192 = C18832 * C1051;
    const double C19186 = C18832 * C1052;
    const double C19181 = C18832 * C1053;
    const double C19662 = C18832 * C2658;
    const double C19660 = C18832 * C2657;
    const double C20626 = C18832 * C2655;
    const double C20625 = C18832 * C2656;
    const double C20796 = C18832 * C2534;
    const double C20792 = C18832 * C2530;
    const double C20788 = C18832 * C2536;
    const double C20784 = C18832 * C2532;
    const double C22862 = C18832 * C2531;
    const double C21765 =
        (C27668 / C27406 - (0 * be) / C27400) / C27406 + (0 * ae) / C27400;
    const double C24630 = C27668 / C27406 - (0 * be) / C27400;
    const double C12893 = C12886 + C12887;
    const double C6394 = C6383 + C6384;
    const double C6390 = C6375 + C6376;
    const double C6563 = C6558 + C6559;
    const double C6561 = C6554 + C6555;
    const double C8593 = C8588 + C8589;
    const double C8591 = C8584 + C8585;
    const double C17835 = C17830 + C17831;
    const double C17833 = C17826 + C17827;
    const double C379 = C235 * C148;
    const double C1706 = C235 * C1424;
    const double C391 = C388 * C28558;
    const double C1707 = C388 * C1346;
    const double C5046 = C388 * C28714;
    const double C10042 = C388 * C9714;
    const double C2105 = C2101 * C1344;
    const double C10384 = C2101 * C9711;
    const double C11650 = C2101 * C28512;
    const double C14527 = C2101 * C28701;
    const double C11649 = C2100 * C11223;
    const double C541 = C538 + C529;
    const double C2476 = C2474 + C922;
    const double C28744 = C28713 - C28735;
    const double C3199 = C3183 * C97;
    const double C3193 = C3183 * C92;
    const double C3383 = C3183 * C150;
    const double C3498 = C172 * C3183;
    const double C3580 = C3183 * C214;
    const double C3570 = C3183 * C213;
    const double C3566 = C3183 * C212;
    const double C4077 = C3183 * C681;
    const double C4074 = C3183 * C680;
    const double C4659 = C3183 * C1053;
    const double C4656 = C3183 * C1052;
    const double C12882 = C3183 * C593;
    const double C12876 = C3183 * C589;
    const double C13063 = C3183 * C639;
    const double C13245 = C3183 * C1501;
    const double C13816 = C3183 * C2658;
    const double C3206 = C3195 + C3196;
    const double C3390 = C3385 + C3386;
    const double C12892 = C12884 + C12885;
    const double C12889 = C12878 + C12879;
    const double C28745 = C28722 - C28736;
    const double C18847 = C18726 * C219;
    const double C18843 = C18726 * C214;
    const double C18839 = C18726 * C218;
    const double C18835 = C18726 * C213;
    const double C19013 = C18726 * C375;
    const double C19009 = C18726 * C374;
    const double C19121 = C481 * C18726;
    const double C19190 = C18726 * C523;
    const double C19184 = C18726 * C522;
    const double C20795 = C18726 * C1504;
    const double C20791 = C18726 * C1501;
    const double C20787 = C18726 * C685;
    const double C20783 = C18726 * C681;
    const double C20964 = C18726 * C1702;
    const double C20960 = C18726 * C803;
    const double C21130 = C18726 * C917;
    const double C22865 = C18726 * C684;
    const double C22861 = C18726 * C680;
    const double C23071 = C18726 * C802;
    const double C103 =
        ((C27716 + C27717 * C27718 * C27722) * C27720 + C27728 + C27728 +
         C27713 *
             (2 * ae * C27725 +
              C27713 *
                  (C27718 * C27722 + C27717 * bs[4] * std::pow(C27711, 4)) *
                  C27720)) /
        C27405;
    const double C642 =
        (C27728 + C27783 * (ae * C27789 + C27713 * C27793)) / C27405;
    const double C722 =
        (C27728 + C27783 * (ae * C27789 + C27713 * C27838)) / C27405;
    const double C1056 =
        (C27728 + C27808 * (ae * C27814 + C27713 * C27818)) / C27405;
    const double C1212 =
        (C27728 + C27808 * (ae * C27814 + C27713 * C27876)) / C27405;
    const double C166 = C148 * C98;
    const double C229 = C211 * C98;
    const double C1373 = C1352 * C98;
    const double C13886 = C27426 * C98;
    const double C1366 = C1352 * C592;
    const double C1442 = C1425 * C592;
    const double C1510 = C211 * C592;
    const double C2163 = C28517 * C592;
    const double C4791 = C4783 * C592;
    const double C9793 = C9785 * C592;
    const double C10442 = C9712 * C592;
    const double C11231 = C11223 * C592;
    const double C13879 = C27426 * C592;
    const double C14587 = C28517 * C592;
    const double C2546 = C1352 * C964;
    const double C3124 = C148 * C964;
    const double C3201 = C3184 * C964;
    const double C4339 = C28517 * C964;
    const double C6379 = C6371 * C964;
    const double C12300 = C11223 * C964;
    const double C14930 = C27426 * C964;
    const double C16869 = C28517 * C964;
    const double C18840 = C18832 * C964;
    const double C19891 = C9712 * C964;
    const double C2107 = C2103 * C1344;
    const double C11652 = C2103 * C28512;
    const double C14531 = C2103 * C28701;
    const double C4229 = C4225 * C1344;
    const double C22376 = C4225 * C28512;
    const double C25565 = C4225 * C28701;
    const double C28015 = ae * C28014;
    const double C1428 =
        (C27713 * C27789 + C27783 * C28014 + C27783 * C27736 * ae) / C27400;
    const double C2598 = (C27808 * C28014) / C27400;
    const double C28148 = ae * C28147;
    const double C3187 =
        (C27713 * C27814 + C27808 * C28147 + C27808 * C27736 * ae) / C27400;
    const double C8157 = C28633 * C2828;
    const double C23073 = C28633 * C2828;
    const double C1518 = C1512 + C1513;
    const double C1895 = C1890 + C1891;
    const double C7943 = C7936 + C7937;
    const double C3132 = C3126 + C3127;
    const double C3325 = C3320 + C3321;
    const double C2602 = (C27808 * (C27745 + C27783 * C27804)) / C27405;
    const double C27746 = C27725 + C27744;
    const double C27915 = ae * C27914;
    const double C2535 = (C27808 * C27914) / C27400;
    const double C27958 = ae * C27957;
    const double C1368 = C1352 * C1357;
    const double C1444 = C1426 * C1357;
    const double C1514 = C211 * C1357;
    const double C2171 = C28517 * C1357;
    const double C11230 = C11223 * C1357;
    const double C13881 = C27426 * C1357;
    const double C14595 = C28517 * C1357;
    const double C3061 = C1352 * C3054;
    const double C3128 = C148 * C3054;
    const double C3203 = C3185 * C3054;
    const double C4347 = C28517 * C3054;
    const double C12299 = C11223 * C3054;
    const double C16660 = C27426 * C3054;
    const double C25671 = C28517 * C3054;
    const double C28059 = C27789 + C28057;
    const double C28096 = ae * C28095;
    const double C12137 =
        (2 * (C28212 + C27783 * C28281) + ae * (C27808 * C28262 + C28249) +
         C27783 *
             (C28281 + ae * (C27808 * C27783 * C27826 + C28246) +
              C27783 * (ae * (C27808 * C27826 + C27758) +
                        C27783 * (ae * C27801 + C27808 * std::pow(C27711, 6) *
                                                    bs[6] * C27862)))) /
        C27405;
    const double C28213 = C27814 + C28211;
    const double C1961 = C28517 * C596;
    const double C10268 = C9712 * C596;
    const double C14407 = C28517 * C596;
    const double C4137 = C28517 * C968;
    const double C16657 = C28517 * C968;
    const double C19717 = C9712 * C968;
    const double C1963 = C1344 * C1359;
    const double C11561 = C28512 * C1359;
    const double C14409 = C28701 * C1359;
    const double C8441 = C1344 * C2540;
    const double C12760 = C28512 * C2540;
    const double C16031 = C28701 * C2540;
    const double C4139 = C1344 * C3056;
    const double C13311 = C28512 * C3056;
    const double C25499 = C28701 * C3056;
    const double C329 = C28558 * C317;
    const double C1637 = C1347 * C760;
    const double C4974 = C28607 * C760;
    const double C9970 = C28607 * C760;
    const double C3318 = C28558 * C1132;
    const double C8079 = C28714 * C1132;
    const double C15685 = C9714 * C1132;
    const double C9377 = C28607 * C2770;
    const double C13573 = C28607 * C2770;
    const double C21428 = C1347 * C2770;
    const double C4416 = C28558 * C3313;
    const double C13575 = C9714 * C3313;
    const double C27173 = C28714 * C3313;
    const double C536 = C28569 * C524;
    const double C1889 = C28569 * C916;
    const double C8365 = C28715 * C916;
    const double C23275 = C18726 * C916;
    const double C3574 = C3048 * C1288;
    const double C6734 = C28633 * C1288;
    const double C19187 = C28633 * C1288;
    const double C2471 = C28569 * C1882;
    const double C18163 = C28715 * C1882;
    const double C21134 = C18726 * C1882;
    const double C9021 = C28633 * C2992;
    const double C13240 = C3048 * C2992;
    const double C21132 = C28633 * C2992;
    const double C28179 = ae * C28178;
    const double C3752 =
        (C27783 * C27814 + C27808 * C28178 + C27808 * C28054 * ae) / C27400;
    const double C17998 = C28633 * C2829;
    const double C20966 = C28633 * C2829;
    const double C1625 =
        ((C27716 + C27847 * C27718 * C27722) * C27720 + C28011 + C28011 +
         C27783 * (2 * ae * C27789 + C27783 * C27852)) /
        C27405;
    const double C2938 =
        (C28011 + C27808 * (ae * C27814 + C27783 * C27889)) / C27405;
    const double C1631 = C1426 * C1427;
    const double C2240 = C1425 * C1427;
    const double C2296 = C211 * C1427;
    const double C5523 = C4783 * C1427;
    const double C10511 = C9785 * C1427;
    const double C11702 = C11223 * C1427;
    const double C2776 = C1425 * C2600;
    const double C3863 = C148 * C2600;
    const double C6003 = C4783 * C2600;
    const double C8810 = C6371 * C2600;
    const double C9167 = C28607 * C2600;
    const double C10982 = C9785 * C2600;
    const double C12947 = C11223 * C2600;
    const double C13065 = C3184 * C2600;
    const double C13375 = C28607 * C2600;
    const double C20908 = C1424 * C2600;
    const double C20961 = C18832 * C2600;
    const double C21254 = C1347 * C2600;
    const double C3861 = C148 * C3698;
    const double C9380 = C4783 * C3698;
    const double C12502 = C9785 * C3698;
    const double C12951 = C11223 * C3698;
    const double C13067 = C3185 * C3698;
    const double C13383 = C28607 * C3698;
    const double C21432 = C1425 * C3698;
    const double C27005 = C28607 * C3698;
    const double C475 = C174 * C211;
    const double C335 = C332 + C325;
    const double C392 = C389 * C28558;
    const double C5050 = C389 * C28714;
    const double C10046 = C389 * C9714;
    const double C478 = C176 * C211;
    const double C336 = C333 + C328;
    const double C393 = C390 * C28558;
    const double C6500 = C6499 + C1136;
    const double C6670 = C6319 * C6371;
    const double C19126 = C6319 * C18832;
    const double C3326 = C3324 + C1137;
    const double C3500 = C3130 * C3184;
    const double C4214 = C3130 * C1352;
    const double C6666 = C3130 * C6371;
    const double C19122 = C3130 * C18832;
    const double C25562 = C3130 * C27426;
    const double C4423 = C4421 + C3319;
    const double C22375 = C4224 * C11223;
    const double C22509 = C22508 + C4419;
    const double C22383 = C22381 * C11223;
    const double C3562 =
        ((C27716 + C27896 * C27718 * C27722) * C27720 + C28144 + C28144 +
         C27808 * (2 * ae * C27814 + C27808 * C27901)) /
        C27405;
    const double C3568 = C3185 * C3186;
    const double C4598 = C148 * C3186;
    const double C4658 = C3184 * C3186;
    const double C7720 = C6371 * C3186;
    const double C13696 = C11223 * C3186;
    const double C20172 = C18832 * C3186;
    const double C1716 = C1714 * C1347;
    const double C5048 = C1714 * C28607;
    const double C10044 = C1714 * C28607;
    const double C382 = C237 * C148;
    const double C485 = C482 * C28569;
    const double C6669 = C482 * C28715;
    const double C19125 = C482 * C18726;
    const double C542 = C539 + C532;
    const double C385 = C239 * C148;
    const double C486 = C483 * C28569;
    const double C543 = C540 + C535;
    const double C5224 = C5223 + C920;
    const double C5051 = C4863 * C4783;
    const double C10047 = C4863 * C9785;
    const double C1896 = C1894 + C921;
    const double C1708 = C1516 * C1425;
    const double C2092 = C1516 * C1352;
    const double C5047 = C1516 * C4783;
    const double C10043 = C1516 * C9785;
    const double C14528 = C1516 * C27426;
    const double C3508 = C3506 * C3048;
    const double C6667 = C3506 * C28633;
    const double C19123 = C3506 * C28633;
    const double C2477 = C2475 + C1886;
    const double C11651 = C2102 * C11223;
    const double C11915 = C11914 + C2473;
    const double C11659 = C11657 * C11223;
    const double C3699 =
        (C27745 + C27783 * C27804 +
         (C27772 + C27783 * (ae * C27801 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27787)) *
             C27896) /
        C27405;
    const double C27774 = C27738 + C27771;
    const double C27912 = ae * C27910;
    const double C28217 = C27808 * C27910;
    const double C3641 = (C27914 + C27910 * C27896) / C27400;
    const double C27955 = ae * C27953;
    const double C27997 = C27743 + C27996;
    const double C28118 = C27743 + C28117;
    const double C11564 = C11223 * C11555;
    const double C11954 = C11223 * C11951;
    const double C12763 = C11223 * C12755;
    const double C22333 = C11223 * C22328;
    const double C27773 = C27755 + C27770;
    const double C1955 =
        (2 * ae * (2 * C27783 * C27738 + C27783 * (C27738 + C27762 * C27847)) +
         C27713 * (2 * C27908 +
                   C27783 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C2539 =
        (2 * ae * C27808 * C27783 * C27738 + C27713 * C27808 * C27908) / C27405;
    const double C3643 =
        (2 * ae * (C27783 * C27738 + C27783 * C27762 * C27896) +
         C27713 * (C27908 + C27783 *
                                (C27752 * C27753 +
                                 C27717 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27896)) /
        C27405;
    const double C3644 = (C27783 * C27742 + C27908 * C27896) / C27405;
    const double C11556 =
        (3 * (C27742 + C27768 * C27847) +
         C27783 * (2 * C27908 +
                   C27783 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C11952 =
        (C27808 * (2 * C27908 +
                   C27783 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C13306 =
        (2 * C27808 * C27908 +
         C27808 * (C27908 + C27783 *
                                (C27752 * C27753 +
                                 C27717 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27896)) /
        C27405;
    const double C4131 =
        (2 * ae * (2 * C27808 * C27738 + C27808 * (C27738 + C27762 * C27896)) +
         C27713 * (2 * C27951 +
                   C27808 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C22329 =
        (3 * (C27742 + C27768 * C27896) +
         C27808 * (2 * C27951 +
                   C27808 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C1965 = C28517 * C1360;
    const double C14411 = C28517 * C1360;
    const double C11563 = C28512 * C1956;
    const double C17719 = C28512 * C2538;
    const double C4141 = C28517 * C3057;
    const double C25501 = C28517 * C3057;
    const double C22332 = C28512 * C4132;
    const double C28018 = C28017 + C27767;
    const double C330 = C148 * C153;
    const double C763 = C148 * C636;
    const double C4981 = C4783 * C636;
    const double C9977 = C9785 * C636;
    const double C1135 = C148 * C1008;
    const double C3323 = C148 * C3117;
    const double C28048 = ae * C28046;
    const double C28047 = C27783 * C28046;
    const double C28091 = C27808 * C28046;
    const double C3697 = (C28014 + C28046 * C27896) / C27400;
    const double C28251 = C27794 + C28248;
    const double C28278 = ae * C28276;
    const double C28291 = C28055 + C28290;
    const double C22507 = C148 * C22370;
    const double C6318 = C28558 * C1013;
    const double C3129 = C28558 * C3119;
    const double C22384 = C22382 * C28512;
    const double C28151 = C28150 + C27767;
    const double C537 = C211 * C216;
    const double C919 = C211 * C678;
    const double C1291 = C211 * C1050;
    const double C6741 = C6371 * C1050;
    const double C19194 = C18832 * C1050;
    const double C1893 = C211 * C1503;
    const double C6209 = C211 * C5894;
    const double C7206 = C6371 * C5894;
    const double C19658 = C18832 * C5894;
    const double C28173 = C28172 + C28045;
    const double C28202 = ae * C28199;
    const double C28201 = C27808 * C28199;
    const double C28298 = C28297 + C28249;
    const double C11913 = C211 * C11646;
    const double C12244 = C211 * C12027;
    const double C18166 = C6371 * C12027;
    const double C21137 = C18832 * C12027;
    const double C28319 = ae * C28317;
    const double C28318 = C27808 * C28317;
    const double C28357 = C27819 + C28354;
    const double C4862 = C28569 * C683;
    const double C1515 = C28569 * C1505;
    const double C11660 = C11658 * C28512;
    const double C7447 = C4711 * C1093;
    const double C19899 = C9713 * C1093;
    const double C4351 = C28517 * C3261;
    const double C25675 = C28517 * C3261;
    const double C2768 =
        (2 * ae * C27808 * C27796 + C27783 * C27808 * C28041) / C27405;
    const double C3314 = (C27713 * C27852 + C28041 * C27896) / C27405;
    const double C3857 =
        (2 * ae * (C27796 + C28042 * C27896) +
         C27783 * (C28041 + C27713 *
                                (C27752 * C27753 +
                                 C27847 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27896)) /
        C27405;
    const double C4409 =
        (2 * C27808 * C28041 +
         C27808 * (C28041 + C27713 *
                                (C27752 * C27753 +
                                 C27847 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27896)) /
        C27405;
    const double C28244 = C28238 + C28239;
    const double C13568 =
        (2 * ae * (2 * C27808 * C27794 + C27808 * (C27794 + C27801 * C27896)) +
         C27783 * (2 * C28274 +
                   C27808 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C22501 =
        (3 * (C27852 + C27857 * C27896) +
         C27808 * (2 * C28274 +
                   C27808 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C4980 = C28607 * C759;
    const double C9976 = C28607 * C759;
    const double C6498 = C28558 * C1131;
    const double C13577 = C28607 * C3858;
    const double C27175 = C28607 * C3858;
    const double C22506 = C28558 * C4410;
    const double C3391 = C3387 + C3388;
    const double C5055 = C5054 * C28607;
    const double C10048 = C5054 * C28607;
    const double C5630 = C4711 * C839;
    const double C10618 = C9713 * C839;
    const double C2359 = C28517 * C1768;
    const double C14771 = C28517 * C1768;
    const double C6674 = C6673 * C28633;
    const double C19127 = C6673 * C28633;
    const double C2465 =
        (2 * C27783 * C28072 +
         C27783 * (C28072 + C27713 *
                                (C27752 * C27753 +
                                 C27896 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27847)) /
        C27405;
    const double C2989 =
        (2 * ae * (C27821 + C28064 * C27847) +
         C27808 * (C28072 + C27713 *
                                (C27752 * C27753 +
                                 C27896 * bs[6] * std::pow(C27711, 6)) *
                                C27720 * C27847)) /
        C27405;
    const double C2990 =
        (2 * ae * C27783 * C27821 + C27808 * C27783 * C28072) / C27405;
    const double C28350 = C28344 + C28345;
    const double C5222 = C28569 * C915;
    const double C6740 = C28633 * C1287;
    const double C19193 = C28633 * C1287;
    const double C1892 = C28569 * C1883;
    const double C11912 = C28569 * C2466;
    const double C18165 = C28633 * C2991;
    const double C21136 = C28633 * C2991;
    const double C14773 = C14766 + C14767;
    const double C16877 = C16872 + C16873;
    const double C4723 = C4719 * C98;
    const double C5399 = C4863 * C4719;
    const double C5461 = C4719 * C637;
    const double C5455 = C4719 * C587;
    const double C5629 = C4719 * C679;
    const double C7334 = C6319 * C4719;
    const double C7446 = C4719 * C1009;
    const double C7440 = C4719 * C959;
    const double C7611 = C4719 * C1051;
    const double C9725 = C9721 * C98;
    const double C10387 = C4863 * C9721;
    const double C10449 = C9721 * C637;
    const double C10443 = C9721 * C587;
    const double C10617 = C9721 * C679;
    const double C19786 = C6319 * C9721;
    const double C19898 = C9721 * C1009;
    const double C19892 = C9721 * C959;
    const double C20063 = C9721 * C1051;
    const double C27430 = C28512 - C27428;
    const double C2361 = C2354 + C2355;
    const double C4355 = C4342 + C4343;
    const double C11712 = C11704 + C11705;
    const double C11710 = C11700 + C11701;
    const double C11709 = C11698 + C11699;
    const double C11708 = C11696 + C11697;
    const double C11837 = C11833 + C11834;
    const double C11836 = C11830 + C11831;
    const double C11835 = C11827 + C11828;
    const double C12955 = C12949 + C12950;
    const double C12953 = C12945 + C12946;
    const double C13131 = C13126 + C13127;
    const double C13514 = C13507 + C13508;
    const double C13513 = C13505 + C13506;
    const double C13512 = C13501 + C13502;
    const double C13511 = C13499 + C13500;
    const double C13698 = C13694 + C13695;
    const double C17890 = C17886 + C17887;
    const double C18060 = C18058 + C18059;
    const double C22465 = C22462 + C22463;
    const double C22464 = C22460 + C22461;
    const double C5278 = C28737 * C597;
    const double C5396 = C2101 * C28737;
    const double C5458 = C28737 * C723;
    const double C5452 = C28737 * C593;
    const double C5626 = C28737 * C841;
    const double C7263 = C28737 * C969;
    const double C7331 = C4223 * C28737;
    const double C7443 = C28737 * C1095;
    const double C7437 = C28737 * C965;
    const double C7608 = C28737 * C1213;
    const double C73 = (C28737 * C28507) / C27400 + (C28701 - C28725) / C27406;
    const double C5280 = C28738 * C596;
    const double C5454 = C28738 * C592;
    const double C5628 = C28738 * C840;
    const double C7265 = C28738 * C968;
    const double C7445 = C28738 * C1094;
    const double C7439 = C28738 * C964;
    const double C74 =
        (C28738 * C28507) / C27400 + (2 * C28517 + C28737) / C27406;
    const double C75 = (C28507 * C28517) / C27415 + C28738 / C27406;
    const double C27495 = C28558 - C27494;
    const double C9808 = C9797 + C9798;
    const double C9804 = C9789 + C9790;
    const double C10160 = C10155 + C10156;
    const double C10158 = C10151 + C10152;
    const double C13395 = C13386 + C13387;
    const double C13391 = C13378 + C13379;
    const double C13951 = C13939 * C1357;
    const double C13945 = C13939 * C1354;
    const double C14114 = C13939 * C1427;
    const double C14296 = C13939 * C1502;
    const double C18284 = C13939 * C2534;
    const double C18278 = C13939 * C2530;
    const double C18620 = C13939 * C2656;
    const double C337 = C334 + C323;
    const double C4424 = C4422 + C4413;
    const double C13948 = C28742 * C155;
    const double C13942 = C28742 * C150;
    const double C14117 = C28742 * C315;
    const double C14187 = C388 * C28742;
    const double C14293 = C28742 * C467;
    const double C18281 = C28742 * C1015;
    const double C18275 = C28742 * C1011;
    const double C18449 = C28742 * C1133;
    const double C18617 = C28742 * C1251;
    const double C11218 =
        (C28742 * C28602) / C27400 + (C28714 - C28731) / C27406;
    const double C1449 = C1440 + C1441;
    const double C1446 = C1434 + C1435;
    const double C1830 = C1824 + C1825;
    const double C21266 = C21257 + C21258;
    const double C21263 = C21251 + C21252;
    const double C21599 = C21593 + C21594;
    const double C13944 = C28743 * C638;
    const double C14120 = C28743 * C760;
    const double C14189 = C1714 * C28743;
    const double C14295 = C28743 * C878;
    const double C18283 = C28743 * C2604;
    const double C18277 = C28743 * C2600;
    const double C18451 = C28743 * C2770;
    const double C11219 =
        (C28743 * C28602) / C27400 + (2 * C28607 + C28742) / C27406;
    const double C11220 = (C28602 * C28607) / C27415 + C28743 / C27406;
    const double C27521 = C28569 - C27520;
    const double C18855 = C18844 + C18845;
    const double C18851 = C18836 + C18837;
    const double C19019 = C19014 + C19015;
    const double C19017 = C19010 + C19011;
    const double C20805 = C20796 + C20797;
    const double C20803 = C20792 + C20793;
    const double C20801 = C20788 + C20789;
    const double C20799 = C20784 + C20785;
    const double C22869 = C22862 + C22863;
    const double C24642 = C24630 * C3054;
    const double C24636 = C24630 * C3051;
    const double C24804 = C24630 * C3116;
    const double C24970 = C24630 * C3186;
    const double C26559 = C24630 * C3642;
    const double C26553 = C24630 * C3640;
    const double C26723 = C24630 * C3698;
    const double C544 = C541 + C530;
    const double C2478 = C2476 + C2469;
    const double C24639 = C28744 * C218;
    const double C24633 = C28744 * C213;
    const double C24801 = C28744 * C374;
    const double C24910 = C481 * C28744;
    const double C24973 = C28744 * C522;
    const double C26556 = C28744 * C685;
    const double C26550 = C28744 * C681;
    const double C26720 = C28744 * C803;
    const double C26885 = C28744 * C917;
    const double C21689 =
        (C28744 * C28628) / C27400 + (C28715 - C28734) / C27406;
    const double C3208 = C3199 + C3200;
    const double C3205 = C3193 + C3194;
    const double C3389 = C3383 + C3384;
    const double C12891 = C12882 + C12883;
    const double C12888 = C12876 + C12877;
    const double C13069 = C13063 + C13064;
    const double C24635 = C28745 * C1052;
    const double C24803 = C28745 * C1174;
    const double C24912 = C3506 * C28745;
    const double C24976 = C28745 * C1288;
    const double C26558 = C28745 * C2662;
    const double C26552 = C28745 * C2658;
    const double C26722 = C28745 * C2830;
    const double C26887 = C28745 * C2992;
    const double C21690 =
        (C28745 * C28628) / C27400 + (2 * C28633 + C28744) / C27406;
    const double C21691 = (C28628 * C28633) / C27415 + C28745 / C27406;
    const double C1443 = C1347 * C642;
    const double C4792 = C28607 * C642;
    const double C9794 = C28607 * C642;
    const double C13950 = C28743 * C642;
    const double C2167 = C28517 * C722;
    const double C5460 = C28738 * C722;
    const double C10448 = C9712 * C722;
    const double C14591 = C28517 * C722;
    const double C3202 = C3048 * C1056;
    const double C6380 = C28633 * C1056;
    const double C18841 = C28633 * C1056;
    const double C24641 = C28745 * C1056;
    const double C4535 = C28517 * C1212;
    const double C7610 = C28738 * C1212;
    const double C17079 = C28517 * C1212;
    const double C20062 = C9712 * C1212;
    const double C175 = C166 + C167;
    const double C238 = C229 + C230;
    const double C1517 = C1510 + C1511;
    const double C2177 = C2162 + C2163;
    const double C14601 = C14586 + C14587;
    const double C3131 = C3124 + C3125;
    const double C4353 = C4338 + C4339;
    const double C16875 = C16868 + C16869;
    const double C1626 =
        (C27713 * C27852 + C28015 + C28015 +
         C27783 * (2 * ae * C27796 + C27783 * C27713 * C27857)) /
        C27405;
    const double C2936 =
        (C28015 + C27808 * (ae * C27821 + C27783 * C28069)) / C27405;
    const double C1439 = C1348 * C1428;
    const double C1639 = C1426 * C1428;
    const double C1712 = C211 * C1428;
    const double C2174 = C1352 * C1428;
    const double C2237 = C1425 * C1428;
    const double C5521 = C4783 * C1428;
    const double C10509 = C9785 * C1428;
    const double C13946 = C13870 * C1428;
    const double C14122 = C13939 * C1428;
    const double C14598 = C27426 * C1428;
    const double C2773 = C1425 * C2598;
    const double C3862 = C148 * C2598;
    const double C6001 = C4783 * C2598;
    const double C7859 = C28607 * C2598;
    const double C8156 = C6371 * C2598;
    const double C8666 = C1352 * C2598;
    const double C10980 = C9785 * C2598;
    const double C15477 = C28607 * C2598;
    const double C16244 = C27426 * C2598;
    const double C23072 = C18832 * C2598;
    const double C3563 = (C27713 * C27901 + C28148 + C28148 +
                          C27808 * (2 * ae * C27821 + C27808 * C28072)) /
                         C27405;
    const double C3198 = C3049 * C3187;
    const double C3504 = C148 * C3187;
    const double C3576 = C3185 * C3187;
    const double C4538 = C1352 * C3187;
    const double C4655 = C3184 * C3187;
    const double C7718 = C6371 * C3187;
    const double C20170 = C18832 * C3187;
    const double C24637 = C24525 * C3187;
    const double C24978 = C24630 * C3187;
    const double C25836 = C27426 * C3187;
    const double C1711 = C1518 * C1426;
    const double C2098 = C1518 * C1352;
    const double C14190 = C1518 * C13939;
    const double C14532 = C1518 * C27426;
    const double C1897 = C1895 + C1891;
    const double C3503 = C3132 * C3185;
    const double C4220 = C3132 * C1352;
    const double C24913 = C3132 * C24630;
    const double C25566 = C3132 * C27426;
    const double C3327 = C3325 + C3321;
    const double C7863 = C28607 * C2602;
    const double C15481 = C28607 * C2602;
    const double C27747 = C27746 + C27739;
    const double C595 =
        (C27783 * C27742 + C27915 + C27915 +
         C27713 * (2 * ae * C27783 * C27738 + C27713 * C27908)) /
        C27405;
    const double C1431 = (ae * C27789 + C27713 * C27793 + C27915 +
                          C27783 * (C27745 + C27783 * C27804)) /
                         C27405;
    const double C1570 = (ae * C27789 + C27713 * C27838 + C27915 +
                          C27783 * (C27745 + C27783 * C27843)) /
                         C27405;
    const double C2661 = (C27915 + C27808 * C27783 * C27829) / C27405;
    const double C2883 = (C27915 + C27808 * C27783 * C27881) / C27405;
    const double C2544 = C1352 * C2535;
    const double C7862 = C4783 * C2535;
    const double C7940 = C6371 * C2535;
    const double C8663 = C28517 * C2535;
    const double C12298 = C11223 * C2535;
    const double C14928 = C27426 * C2535;
    const double C15480 = C9785 * C2535;
    const double C16241 = C28517 * C2535;
    const double C22866 = C18832 * C2535;
    const double C967 =
        (C27808 * C27742 + C27958 + C27958 +
         C27713 * (2 * ae * C27808 * C27738 + C27713 * C27951)) /
        C27405;
    const double C2715 = (C27958 + C27783 * C27808 * C27843) / C27405;
    const double C3190 = (ae * C27814 + C27713 * C27818 + C27958 +
                          C27808 * (C27745 + C27808 * C27829)) /
                         C27405;
    const double C3442 = (ae * C27814 + C27713 * C27876 + C27958 +
                          C27808 * (C27745 + C27808 * C27881)) /
                         C27405;
    const double C2181 = C2170 + C2171;
    const double C14605 = C14594 + C14595;
    const double C4357 = C4346 + C4347;
    const double C25677 = C25670 + C25671;
    const double C28060 = C28059 + C28056;
    const double C2769 =
        (C27808 * C27852 + C28096 + C28096 +
         C27783 * (2 * ae * C27808 * C27794 + C27783 * C27808 * C27857)) /
        C27405;
    const double C4018 =
        (ae * C27814 + C27783 * C27889 + C28096 +
         C27808 * (C28058 + C27808 * (C27822 + C27783 * C27892))) /
        C27405;
    const double C28214 = C28213 + C28210;
    const double C4070 =
        (C27783 * C27901 + C28179 + C28179 +
         C27808 * (2 * ae * C28176 + C27808 * C27783 * C27906)) /
        C27405;
    const double C4075 = C3185 * C3752;
    const double C9660 = C6371 * C3752;
    const double C12881 = C3049 * C3752;
    const double C13129 = C11223 * C3752;
    const double C13757 = C9785 * C3752;
    const double C13815 = C3184 * C3752;
    const double C21654 = C18832 * C3752;
    const double C25445 = C24630 * C3752;
    const double C26554 = C24525 * C3752;
    const double C27336 = C4783 * C3752;
    const double C9589 = C28607 * C2938;
    const double C13754 = C28607 * C2938;
    const double C18619 = C28743 * C2938;
    const double C21596 = C1347 * C2938;
    const double C2299 = C2296 + C2297;
    const double C11711 = C11702 + C11703;
    const double C8813 = C8810 + C8811;
    const double C9173 = C9166 + C9167;
    const double C12954 = C12947 + C12948;
    const double C13070 = C13065 + C13066;
    const double C13389 = C13374 + C13375;
    const double C20968 = C20961 + C20962;
    const double C21264 = C21253 + C21254;
    const double C12956 = C12951 + C12952;
    const double C13071 = C13067 + C13068;
    const double C13393 = C13382 + C13383;
    const double C27011 = C27004 + C27005;
    const double C338 = C335 + C326;
    const double C339 = C336 + C329;
    const double C3328 = C3326 + C3318;
    const double C4425 = C4423 + C4416;
    const double C4601 = C4598 + C4599;
    const double C13699 = C13696 + C13697;
    const double C545 = C542 + C533;
    const double C546 = C543 + C536;
    const double C1898 = C1896 + C1889;
    const double C2479 = C2477 + C2471;
    const double C27775 = C27774 + C27763;
    const double C2601 =
        (C27808 * (C27804 + C27912 +
                   C27783 * (C27772 + C27783 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C3753 =
        (C27783 * C27829 + ae * C27808 * C27910 +
         C27808 * (C27912 + C27808 * C27783 *
                                (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27812))) /
        C27405;
    const double C3965 =
        (C27783 * C27881 + ae * C27808 * C27910 +
         C27808 * (C27912 + C27808 * C27783 *
                                (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27873))) /
        C27405;
    const double C28218 = ae * C28217;
    const double C3646 = C1352 * C3641;
    const double C12297 = C11223 * C3641;
    const double C16658 = C27426 * C3641;
    const double C2713 =
        (C27808 * C27843 + ae * C27808 * C27910 +
         C27783 * (C27955 + C27783 * C27808 *
                                (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27835))) /
        C27405;
    const double C27998 = ae * C27997;
    const double C1953 = (2 * C27914 + C27783 * C27997) / C27400;
    const double C2533 = (C27808 * C27997) / C27400;
    const double C28119 = ae * C28118;
    const double C4129 = (2 * C27957 + C27808 * C28118) / C27400;
    const double C8443 = C28517 * C2539;
    const double C16033 = C28517 * C2539;
    const double C12762 = C28512 * C3644;
    const double C28019 = ae * C28018;
    const double C1429 =
        (C27789 + C27794 * C27717 + C27783 * C28018 + C27783 * C27764 * ae) /
        C27400;
    const double C5842 = (C27808 * C28018) / C27400;
    const double C28049 = C27796 + C28047;
    const double C28092 = ae * C28091;
    const double C3860 = C148 * C3697;
    const double C9378 = C4783 * C3697;
    const double C12503 = C9785 * C3697;
    const double C28252 = C28251 + C28246;
    const double C28292 = ae * C28291;
    const double C13369 = (2 * C28095 + C27808 * C28291) / C27400;
    const double C3133 = C3128 + C3129;
    const double C28152 = ae * C28151;
    const double C3188 =
        (C27814 + C27819 * C27717 + C27808 * C28151 + C27808 * C27764 * ae) /
        C27400;
    const double C28174 = ae * C28173;
    const double C3751 =
        (C27783 * C27821 + C27808 * C28173 + C27808 * C28043 * ae) / C27400;
    const double C28203 = C27821 + C28201;
    const double C28299 = ae * C28298;
    const double C12873 =
        (C27814 + C27819 * C27847 + C27808 * C28298 + C27808 * C28247 * ae) /
        C27400;
    const double C28320 = C28176 + C28318;
    const double C28358 = C28357 + C28352;
    const double C1519 = C1514 + C1515;
    const double C4359 = C4350 + C4351;
    const double C25679 = C25674 + C25675;
    const double C8081 = C28607 * C2768;
    const double C15687 = C28607 * C2768;
    const double C3322 = C28558 * C3314;
    const double C6501 = C6500 + C6498;
    const double C22510 = C22509 + C22506;
    const double C2363 = C2358 + C2359;
    const double C14775 = C14770 + C14771;
    const double C8367 = C28633 * C2990;
    const double C23277 = C28633 * C2990;
    const double C5225 = C5224 + C5222;
    const double C11916 = C11915 + C11912;
    const double C5633 = C5629 + C5630;
    const double C7453 = C7446 + C7447;
    const double C10621 = C10617 + C10618;
    const double C19905 = C19898 + C19899;
    const double C27432 = C27430 * ae;
    const double C27431 = C27430 * C27410;
    const double C1350 = (-C27402 / C27400) / C27406 - (C27430 * be) / C27400;
    const double C11832 = C11712 * C211;
    const double C11829 = C11710 * C211;
    const double C11826 = C11708 * C211;
    const double C13123 = C11708 * C3183;
    const double C11840 = C11837 * C28569;
    const double C11839 = C11836 * C28569;
    const double C18056 = C11836 * C28715;
    const double C21026 = C11836 * C18726;
    const double C11838 = C11835 * C28569;
    const double C13124 = C11835 * C3047;
    const double C18052 = C11835 * C28715;
    const double C21022 = C11835 * C18726;
    const double C26779 = C11835 * C28744;
    const double C13128 = C12955 * C3185;
    const double C13509 = C12955 * C9785;
    const double C26782 = C12955 * C24630;
    const double C27120 = C12955 * C4783;
    const double C13125 = C12953 * C3184;
    const double C13503 = C12953 * C9785;
    const double C18053 = C12953 * C6371;
    const double C21023 = C12953 * C18832;
    const double C21371 = C12953 * C1425;
    const double C27116 = C12953 * C4783;
    const double C13133 = C13131 * C3048;
    const double C18054 = C13131 * C28633;
    const double C21024 = C13131 * C28633;
    const double C26781 = C13131 * C28745;
    const double C13518 = C13514 * C9714;
    const double C22459 = C13514 * C28558;
    const double C27119 = C13514 * C28714;
    const double C22458 = C13513 * C148;
    const double C13516 = C13512 * C9714;
    const double C18393 = C13512 * C28742;
    const double C21370 = C13512 * C1346;
    const double C22457 = C13512 * C28558;
    const double C27115 = C13512 * C28714;
    const double C21369 = C13511 * C1424;
    const double C22456 = C13511 * C148;
    const double C18057 = C17890 * C6371;
    const double C18396 = C17890 * C13939;
    const double C21027 = C17890 * C18832;
    const double C21373 = C17890 * C1426;
    const double C18061 = C18060 * C28633;
    const double C21028 = C18060 * C28633;
    const double C22467 = C22465 * C28558;
    const double C22466 = C22464 * C148;
    const double C27496 = C27495 * C27410;
    const double C27587 = C27495 * ae;
    const double C4782 = (C27495 * ae) / C27400 - C27482 / C27415;
    const double C9784 = (-C27482 / C27400) / C27406 - (C27495 * be) / C27400;
    const double C14300 = C14296 + C14297;
    const double C18291 = C18284 + C18285;
    const double C4426 = C4424 * C1344;
    const double C7504 = C4424 * C28737;
    const double C19956 = C4424 * C9711;
    const double C22503 = C4424 * C28512;
    const double C25730 = C4424 * C28701;
    const double C27522 = C27521 * C27410;
    const double C27658 = C27521 * ae;
    const double C6370 = (C27521 * ae) / C27400 - C27508 / C27415;
    const double C18831 = (-C27508 / C27400) / C27406 - (C27521 * be) / C27400;
    const double C24808 = C24804 + C24805;
    const double C26566 = C26559 + C26560;
    const double C26727 = C26723 + C26724;
    const double C547 = C544 * C28558;
    const double C1887 = C544 * C1346;
    const double C5218 = C544 * C28714;
    const double C10211 = C544 * C9714;
    const double C14351 = C544 * C28742;
    const double C1450 = C1442 + C1443;
    const double C4804 = C4791 + C4792;
    const double C9806 = C9793 + C9794;
    const double C2179 = C2166 + C2167;
    const double C14603 = C14590 + C14591;
    const double C3209 = C3201 + C3202;
    const double C6392 = C6379 + C6380;
    const double C18853 = C18840 + C18841;
    const double C4541 = C4534 + C4535;
    const double C17081 = C17078 + C17079;
    const double C2093 = C1517 * C28517;
    const double C5398 = C1517 * C28738;
    const double C10386 = C1517 * C9712;
    const double C14529 = C1517 * C28517;
    const double C4215 = C3131 * C28517;
    const double C7333 = C3131 * C28738;
    const double C19785 = C3131 * C9712;
    const double C25563 = C3131 * C28517;
    const double C1640 = C1348 * C1626;
    const double C14123 = C13870 * C1626;
    const double C8295 = C28607 * C2936;
    const double C15895 = C28607 * C2936;
    const double C1448 = C1438 + C1439;
    const double C1715 = C1712 + C1713;
    const double C13955 = C13945 + C13946;
    const double C7865 = C7858 + C7859;
    const double C8159 = C8156 + C8157;
    const double C15483 = C15476 + C15477;
    const double C23075 = C23072 + C23073;
    const double C3577 = C3049 * C3563;
    const double C24979 = C24525 * C3563;
    const double C3207 = C3197 + C3198;
    const double C3507 = C3504 + C3505;
    const double C24646 = C24636 + C24637;
    const double C1899 = C1897 + C1892;
    const double C27748 = ae * C27747;
    const double C99 =
        (2 * C27727 + C27713 * C27747 + (C27716 + C27730 * C27717) * ae) /
        C27400;
    const double C591 = (C27783 * C27747) / C27400;
    const double C963 = (C27808 * C27747) / C27400;
    const double C5282 = C4711 * C595;
    const double C10270 = C9713 * C595;
    const double C1445 = C1348 * C1431;
    const double C13952 = C13870 * C1431;
    const double C2175 = C28517 * C1570;
    const double C14599 = C28517 * C1570;
    const double C7941 = C28633 * C2661;
    const double C22867 = C28633 * C2661;
    const double C8883 = C28517 * C2883;
    const double C16453 = C28517 * C2883;
    const double C7867 = C7862 + C7863;
    const double C8669 = C8662 + C8663;
    const double C15485 = C15480 + C15481;
    const double C16247 = C16240 + C16241;
    const double C7267 = C4711 * C967;
    const double C19719 = C9713 * C967;
    const double C8667 = C28517 * C2715;
    const double C16245 = C28517 * C2715;
    const double C3204 = C3049 * C3190;
    const double C24643 = C24525 * C3190;
    const double C4539 = C28517 * C3442;
    const double C25837 = C28517 * C3442;
    const double C28061 = ae * C28060;
    const double C2030 =
        (2 * C28010 + C27783 * C28060 + (C27716 + C27730 * C27847) * ae) /
        C27400;
    const double C2599 = (C27808 * C28060) / C27400;
    const double C18453 = C13870 * C2769;
    const double C21430 = C1348 * C2769;
    const double C13758 = C28607 * C4018;
    const double C27337 = C28607 * C4018;
    const double C28215 = ae * C28214;
    const double C4280 =
        (2 * C28143 + C27808 * C28214 + (C27716 + C27730 * C27896) * ae) /
        C27400;
    const double C13242 = C3049 * C4070;
    const double C26889 = C24525 * C4070;
    const double C12890 = C12880 + C12881;
    const double C13132 = C13129 + C13130;
    const double C26563 = C26553 + C26554;
    const double C9591 = C9588 + C9589;
    const double C13760 = C13753 + C13754;
    const double C21600 = C21595 + C21596;
    const double C13504 = C12954 * C28607;
    const double C18395 = C12954 * C28743;
    const double C21372 = C12954 * C1347;
    const double C27117 = C12954 * C28607;
    const double C13510 = C12956 * C28607;
    const double C27121 = C12956 * C28607;
    const double C4414 = C3328 * C28517;
    const double C7505 = C3328 * C28738;
    const double C19957 = C3328 * C9712;
    const double C25731 = C3328 * C28517;
    const double C4427 = C4425 * C1344;
    const double C22504 = C4425 * C28512;
    const double C25732 = C4425 * C28701;
    const double C548 = C545 * C28558;
    const double C5220 = C545 * C28714;
    const double C10213 = C545 * C9714;
    const double C549 = C546 * C28558;
    const double C1900 = C1898 * C1347;
    const double C5219 = C1898 * C28607;
    const double C10212 = C1898 * C28607;
    const double C14352 = C1898 * C28743;
    const double C27777 = ae * C27775;
    const double C27776 = C27713 * C27775;
    const double C27909 = C27783 * C27775;
    const double C27952 = C27808 * C27775;
    const double C1358 = (C27747 + C27775 * C27847) / C27400;
    const double C3055 = (C27747 + C27775 * C27896) / C27400;
    const double C5785 =
        (C27808 * C27908 + C28218 + C28218 +
         C27713 *
             (2 * ae * C27808 * C27783 * C27762 +
              C27713 * C27808 * C27783 *
                  (C27752 * C27753 + C27717 * bs[6] * std::pow(C27711, 6)) *
                  C27720)) /
        C27405;
    const double C1361 =
        (C27742 + C27768 * C27847 + C27998 + C27998 +
         C27713 * (2 * ae * (C27738 + C27762 * C27847) +
                   C27713 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C2031 =
        (2 * (C27745 + C27783 * C27804) + C27998 +
         C27783 * (C27804 + C27912 +
                   C27783 * (C27772 + C27783 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C2157 =
        (2 * (C27745 + C27783 * C27843) + C27998 +
         C27783 * (C27843 + C27912 +
                   C27783 * (C27772 + C27783 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27835)))) /
        C27405;
    const double C2659 =
        (C27998 +
         C27808 * (C27829 + (ae * C27826 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27812) *
                                C27847)) /
        C27405;
    const double C2881 =
        (C27998 +
         C27808 * (C27881 + (ae * C27826 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27873) *
                                C27847)) /
        C27405;
    const double C1966 = C1352 * C1953;
    const double C11229 = C11223 * C1953;
    const double C14412 = C27426 * C1953;
    const double C2542 = C1352 * C2533;
    const double C14926 = C27426 * C2533;
    const double C17264 = C11223 * C2533;
    const double C3058 =
        (C27742 + C27768 * C27896 + C28119 + C28119 +
         C27713 * (2 * ae * (C27738 + C27762 * C27896) +
                   C27713 * (C27768 + (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C3805 =
        (C28119 +
         C27783 * (C27843 + (ae * C27801 +
                             C27713 * std::pow(C27711, 6) * bs[6] * C27835) *
                                C27896)) /
        C27405;
    const double C4281 =
        (2 * (C27745 + C27808 * C27829) + C28119 +
         C27808 * (C27829 + C27955 +
                   C27808 * (C27772 + C27808 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27812)))) /
        C27405;
    const double C4529 =
        (2 * (C27745 + C27808 * C27881) + C28119 +
         C27808 * (C27881 + C27955 +
                   C27808 * (C27772 + C27808 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27873)))) /
        C27405;
    const double C4142 = C1352 * C4129;
    const double C21694 = C11223 * C4129;
    const double C25502 = C27426 * C4129;
    const double C1627 =
        (C27852 + C27857 * C27717 + C28019 + C28019 +
         C27783 * (2 * ae * C27805 +
                   C27783 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C6156 =
        (C28019 + C27808 * (ae * C27830 +
                            C27783 * (C27892 + std::pow(C27711, 6) * bs[6] *
                                                   C27886 * C27717))) /
        C27405;
    const double C1641 = C1426 * C1429;
    const double C5519 = C4783 * C1429;
    const double C10507 = C9785 * C1429;
    const double C14124 = C13939 * C1429;
    const double C5999 = C4783 * C5842;
    const double C7005 = C148 * C5842;
    const double C10978 = C9785 * C5842;
    const double C28050 = C28049 + C28045;
    const double C2767 =
        (C27808 * C28041 + C28092 + C28092 +
         C27783 *
             (2 * ae * C27808 * C28042 +
              C27783 * C27808 * C27713 *
                  (C27752 * C27753 + C27847 * bs[6] * std::pow(C27711, 6)) *
                  C27720)) /
        C27405;
    const double C4017 =
        (ae * C27821 + C27783 * C28069 + C28092 +
         C27808 * (C28048 + C27808 * (ae * C28064 + C27783 * C27713 *
                                                        std::pow(C27711, 6) *
                                                        bs[6] * C27886))) /
        C27405;
    const double C28254 = ae * C28252;
    const double C28253 = C27783 * C28252;
    const double C28275 = C27808 * C28252;
    const double C12821 = (C28060 + C28252 * C27896) / C27400;
    const double C13006 =
        (C27852 + C27857 * C27896 + C28292 + C28292 +
         C27783 * (2 * ae * (C27794 + C27801 * C27896) +
                   C27783 * (C27857 + (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27896))) /
        C27405;
    const double C13749 =
        (2 * (C28058 + C27808 * C28266) + C28292 +
         C27808 * (C28266 + C28278 +
                   C27808 * (C28250 + C27808 * (ae * C27826 +
                                                C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27886)))) /
        C27405;
    const double C13578 = C9785 * C13369;
    const double C22153 = C148 * C13369;
    const double C27176 = C4783 * C13369;
    const double C4221 = C3133 * C28517;
    const double C25567 = C3133 * C28517;
    const double C3564 =
        (C27901 + C27906 * C27717 + C28152 + C28152 +
         C27808 * (2 * ae * C27830 +
                   C27808 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27717))) /
        C27405;
    const double C6054 =
        (C28152 + C27783 * (ae * C27805 +
                            C27808 * (C27868 + std::pow(C27711, 6) * bs[6] *
                                                   C27862 * C27717))) /
        C27405;
    const double C3578 = C3185 * C3188;
    const double C7716 = C6371 * C3188;
    const double C20168 = C18832 * C3188;
    const double C24980 = C24630 * C3188;
    const double C4069 =
        (C27783 * C28072 + C28174 + C28174 +
         C27808 *
             (2 * ae * C28171 +
              C27808 * C27783 * C27713 *
                  (C27752 * C27753 + C27896 * bs[6] * std::pow(C27711, 6)) *
                  C27720)) /
        C27405;
    const double C4072 = C3185 * C3751;
    const double C9658 = C6371 * C3751;
    const double C24472 = C18832 * C3751;
    const double C25442 = C24630 * C3751;
    const double C28204 = C28203 + C28200;
    const double C13235 =
        (C27901 + C27906 * C27847 + C28299 + C28299 +
         C27808 * (2 * ae * C28262 +
                   C27808 * (C27906 + (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                          C27720 * C27847))) /
        C27405;
    const double C13243 = C3185 * C12873;
    const double C18675 = C6371 * C12873;
    const double C21652 = C18832 * C12873;
    const double C26890 = C24630 * C12873;
    const double C28321 = C28320 + C28316;
    const double C28360 = ae * C28358;
    const double C28359 = C27808 * C28358;
    const double C2099 = C1519 * C28517;
    const double C14533 = C1519 * C28517;
    const double C3329 = C3327 + C3322;
    const double C7506 = C6501 * C4711;
    const double C19958 = C6501 * C9713;
    const double C22511 = C22510 * C28512;
    const double C5226 = C5225 * C28607;
    const double C10214 = C5225 * C28607;
    const double C27434 = C27432 / C27400;
    const double C27433 = C27401 * C27431;
    const double C89 = (-C27431 / C27400) / (4 * C27412);
    const double C1351 = (-C27431 / C27400) / C27406;
    const double C4718 = (-C27431 / C27400) / (4 * C27405);
    const double C9720 = (-C27431 / C27400) / (4 * C27405);
    const double C11222 = -C27431 / C27400;
    const double C13873 = (-C27431 / C27400) / C27406;
    const double C1374 = C1350 * C97;
    const double C1372 = C1350 * C592;
    const double C1370 = C1350 * C1357;
    const double C1367 = C1350 * C1356;
    const double C1365 = C1350 * C593;
    const double C1363 = C1350 * C96;
    const double C1967 = C1350 * C1954;
    const double C2106 = C2102 * C1350;
    const double C2104 = C2100 * C1350;
    const double C2172 = C1350 * C1427;
    const double C2168 = C1350 * C1353;
    const double C2164 = C1350 * C639;
    const double C2160 = C1350 * C589;
    const double C2356 = C1350 * C1501;
    const double C2352 = C1350 * C681;
    const double C2547 = C1350 * C965;
    const double C2545 = C1350 * C2536;
    const double C2543 = C1350 * C2534;
    const double C3065 = C1350 * C964;
    const double C3063 = C1350 * C3054;
    const double C3060 = C1350 * C3053;
    const double C3647 = C1350 * C3642;
    const double C4143 = C1350 * C4130;
    const double C4228 = C4224 * C1350;
    const double C4226 = C4222 * C1350;
    const double C4348 = C1350 * C3115;
    const double C4344 = C1350 * C3050;
    const double C4340 = C1350 * C1011;
    const double C4336 = C1350 * C961;
    const double C4536 = C1350 * C3186;
    const double C4532 = C1350 * C1053;
    const double C7789 = C1350 * C2535;
    const double C8664 = C1350 * C2600;
    const double C8660 = C1350 * C2532;
    const double C8880 = C1350 * C2658;
    const double C27499 = C27464 * C27496;
    const double C1622 =
        (ae * -2 * C27482) / C27412 +
        (((C27464 * ((-4 * C27484) / C27400 - (C27464 * C27496) / C27400) *
           ae) /
              C27400 +
          2 * ((C27495 * ae) / C27400 - C27482 / C27415)) *
         ae) /
            C27400 -
        C27496 / C27415;
    const double C1624 = (-C27496 / C27400) / (4 * C27405);
    const double C4965 = (-C27496 / C27400) / C27406;
    const double C9961 = (-C27496 / C27400) / C27406;
    const double C11375 = (-C27496 / C27400) / (4 * C27412);
    const double C14110 = (-C27496 / C27400) / (4 * C27405);
    const double C27593 = C27587 / C27400;
    const double C4797 = C4782 * C98;
    const double C4793 = C4782 * C93;
    const double C4789 = C4782 * C97;
    const double C4785 = C4782 * C92;
    const double C4982 = C4782 * C152;
    const double C4976 = C4782 * C151;
    const double C4970 = C4782 * C150;
    const double C4967 = C4782 * C149;
    const double C5049 = C237 * C4782;
    const double C5045 = C235 * C4782;
    const double C5160 = C4782 * C214;
    const double C5156 = C4782 * C213;
    const double C5524 = C4782 * C639;
    const double C5522 = C4782 * C638;
    const double C5520 = C4782 * C637;
    const double C6004 = C4782 * C1011;
    const double C6002 = C4782 * C1010;
    const double C6000 = C4782 * C1009;
    const double C7860 = C4782 * C964;
    const double C7856 = C4782 * C960;
    const double C8292 = C4782 * C1052;
    const double C8741 = C4782 * C2600;
    const double C8739 = C4782 * C2598;
    const double C9168 = C4782 * C965;
    const double C9164 = C4782 * C961;
    const double C9381 = C4782 * C3115;
    const double C9379 = C4782 * C3116;
    const double C9586 = C4782 * C1053;
    const double C26668 = C4782 * C3698;
    const double C27006 = C4782 * C3053;
    const double C27002 = C4782 * C3050;
    const double C27118 = C13513 * C4782;
    const double C27114 = C13511 * C4782;
    const double C27177 = C4782 * C4206;
    const double C27334 = C4782 * C3186;
    const double C9799 = C9784 * C98;
    const double C9795 = C9784 * C93;
    const double C9791 = C9784 * C97;
    const double C9787 = C9784 * C92;
    const double C9978 = C9784 * C152;
    const double C9972 = C9784 * C151;
    const double C9966 = C9784 * C150;
    const double C9963 = C9784 * C149;
    const double C10045 = C237 * C9784;
    const double C10041 = C235 * C9784;
    const double C10153 = C9784 * C214;
    const double C10149 = C9784 * C213;
    const double C10512 = C9784 * C639;
    const double C10510 = C9784 * C638;
    const double C10508 = C9784 * C637;
    const double C10983 = C9784 * C1011;
    const double C10981 = C9784 * C1010;
    const double C10979 = C9784 * C1009;
    const double C12504 = C9784 * C3116;
    const double C12501 = C9784 * C3115;
    const double C13011 = C9784 * C2600;
    const double C13009 = C9784 * C3698;
    const double C13384 = C9784 * C3053;
    const double C13380 = C9784 * C3050;
    const double C13376 = C9784 * C965;
    const double C13372 = C9784 * C961;
    const double C13517 = C13513 * C9784;
    const double C13515 = C13511 * C9784;
    const double C13579 = C9784 * C4206;
    const double C13755 = C9784 * C3186;
    const double C13751 = C9784 * C1053;
    const double C15478 = C9784 * C964;
    const double C15474 = C9784 * C960;
    const double C15892 = C9784 * C1052;
    const double C16317 = C9784 * C2598;
    const double C27525 = C27467 * C27522;
    const double C3559 =
        (ae * -2 * C27508) / C27412 +
        (((C27467 * ((-4 * C27510) / C27400 - (C27467 * C27522) / C27400) *
           ae) /
              C27400 +
          2 * ((C27521 * ae) / C27400 - C27508 / C27415)) *
         ae) /
            C27400 -
        C27522 / C27415;
    const double C3561 = (-C27522 / C27400) / (4 * C27405);
    const double C6725 = (-C27522 / C27400) / C27406;
    const double C19178 = (-C27522 / C27400) / C27406;
    const double C21973 = (-C27522 / C27400) / (4 * C27412);
    const double C24966 = (-C27522 / C27400) / (4 * C27405);
    const double C27664 = C27658 / C27400;
    const double C6385 = C6370 * C98;
    const double C6381 = C6370 * C93;
    const double C6377 = C6370 * C97;
    const double C6373 = C6370 * C92;
    const double C6556 = C6370 * C151;
    const double C6552 = C6370 * C150;
    const double C6668 = C174 * C6370;
    const double C6664 = C172 * C6370;
    const double C6742 = C6370 * C215;
    const double C6736 = C6370 * C214;
    const double C6730 = C6370 * C213;
    const double C6727 = C6370 * C212;
    const double C7211 = C6370 * C681;
    const double C7209 = C6370 * C680;
    const double C7207 = C6370 * C679;
    const double C7721 = C6370 * C1053;
    const double C7719 = C6370 * C1052;
    const double C7717 = C6370 * C1051;
    const double C7938 = C6370 * C592;
    const double C7934 = C6370 * C588;
    const double C8154 = C6370 * C638;
    const double C8586 = C6370 * C593;
    const double C8582 = C6370 * C589;
    const double C8808 = C6370 * C639;
    const double C9025 = C6370 * C1501;
    const double C9023 = C6370 * C1502;
    const double C9661 = C6370 * C2658;
    const double C9659 = C6370 * C2657;
    const double C17828 = C6370 * C1356;
    const double C17824 = C6370 * C1353;
    const double C17995 = C6370 * C1427;
    const double C18055 = C11710 * C6370;
    const double C18051 = C11708 * C6370;
    const double C18167 = C6370 * C2084;
    const double C18676 = C6370 * C2656;
    const double C18846 = C18831 * C98;
    const double C18842 = C18831 * C93;
    const double C18838 = C18831 * C97;
    const double C18834 = C18831 * C92;
    const double C19012 = C18831 * C151;
    const double C19008 = C18831 * C150;
    const double C19124 = C174 * C18831;
    const double C19120 = C172 * C18831;
    const double C19195 = C18831 * C215;
    const double C19189 = C18831 * C214;
    const double C19183 = C18831 * C213;
    const double C19180 = C18831 * C212;
    const double C19663 = C18831 * C681;
    const double C19661 = C18831 * C680;
    const double C19659 = C18831 * C679;
    const double C20173 = C18831 * C1053;
    const double C20171 = C18831 * C1052;
    const double C20169 = C18831 * C1051;
    const double C20627 = C18831 * C1502;
    const double C20624 = C18831 * C1501;
    const double C20794 = C18831 * C1356;
    const double C20790 = C18831 * C1353;
    const double C20786 = C18831 * C593;
    const double C20782 = C18831 * C589;
    const double C20963 = C18831 * C1427;
    const double C20959 = C18831 * C639;
    const double C21025 = C11710 * C18831;
    const double C21021 = C11708 * C18831;
    const double C21138 = C18831 * C2084;
    const double C21655 = C18831 * C2658;
    const double C21653 = C18831 * C2656;
    const double C22864 = C18831 * C592;
    const double C22860 = C18831 * C588;
    const double C23070 = C18831 * C638;
    const double C24473 = C18831 * C2657;
    const double C8297 = C8294 + C8295;
    const double C15897 = C15894 + C15895;
    const double C1717 = C1715 * C1348;
    const double C14191 = C1715 * C13870;
    const double C3509 = C3507 * C3049;
    const double C24914 = C3507 * C24525;
    const double C1901 = C1899 * C1348;
    const double C14353 = C1899 * C13870;
    const double C104 =
        (2 * (2 * ae * C27725 + C27713 * C27742) + C27748 + C27748 +
         C27713 * (C27742 + C27745 + C27745 +
                   C27713 * (2 * ae * C27738 +
                             C27713 *
                                 (C27731 * C27732 +
                                  C27717 * bs[5] * std::pow(C27719, 5)) *
                                 C27720))) /
        C27405;
    const double C641 =
        (C27748 + C27783 * (C27793 + ae * C27796 + C27713 * C27804)) / C27405;
    const double C721 =
        (C27748 + C27783 * (C27838 + ae * C27796 + C27713 * C27843)) / C27405;
    const double C1055 =
        (C27748 + C27808 * (C27818 + ae * C27821 + C27713 * C27829)) / C27405;
    const double C1211 =
        (C27748 + C27808 * (C27876 + ae * C27821 + C27713 * C27881)) / C27405;
    const double C110 = C90 * C99;
    const double C170 = C148 * C99;
    const double C233 = C211 * C99;
    const double C4730 = C4719 * C99;
    const double C9732 = C9721 * C99;
    const double C1371 = C1352 * C591;
    const double C4726 = C4719 * C591;
    const double C4799 = C4783 * C591;
    const double C4861 = C211 * C591;
    const double C5456 = C4711 * C591;
    const double C9728 = C9721 * C591;
    const double C9801 = C9785 * C591;
    const double C10444 = C9713 * C591;
    const double C13884 = C27426 * C591;
    const double C3064 = C1352 * C963;
    const double C5790 = C4719 * C963;
    const double C6317 = C148 * C963;
    const double C6387 = C6371 * C963;
    const double C7441 = C4711 * C963;
    const double C10775 = C9721 * C963;
    const double C15406 = C27426 * C963;
    const double C18848 = C18832 * C963;
    const double C19893 = C9713 * C963;
    const double C1451 = C1444 + C1445;
    const double C13958 = C13951 + C13952;
    const double C2183 = C2174 + C2175;
    const double C14607 = C14598 + C14599;
    const double C7945 = C7940 + C7941;
    const double C22871 = C22866 + C22867;
    const double C8885 = C8882 + C8883;
    const double C16455 = C16452 + C16453;
    const double C8671 = C8666 + C8667;
    const double C16249 = C16244 + C16245;
    const double C3210 = C3203 + C3204;
    const double C24649 = C24642 + C24643;
    const double C4543 = C4538 + C4539;
    const double C25839 = C25836 + C25837;
    const double C2234 =
        (2 * (2 * ae * C27789 + C27783 * C27852) + C28061 + C28061 +
         C27783 * (C27852 + C28058 + C28058 +
                   C27783 * (2 * C27797 + C27783 * C27857))) /
        C27405;
    const double C2937 =
        (C28061 + C27808 * (C27889 + ae * C27783 * C27819 +
                            C27783 * (C27822 + C27783 * C27892))) /
        C27405;
    const double C2239 = C1426 * C2030;
    const double C11380 = C11269 * C2030;
    const double C11706 = C11223 * C2030;
    const double C11788 = C211 * C2030;
    const double C14661 = C13939 * C2030;
    const double C2775 = C1426 * C2599;
    const double C8740 = C4783 * C2599;
    const double C13010 = C9785 * C2599;
    const double C15135 = C13939 * C2599;
    const double C17888 = C11223 * C2599;
    const double C17997 = C6371 * C2599;
    const double C18279 = C13870 * C2599;
    const double C20907 = C1425 * C2599;
    const double C20965 = C18832 * C2599;
    const double C21256 = C1348 * C2599;
    const double C13762 = C13757 + C13758;
    const double C27339 = C27336 + C27337;
    const double C4652 =
        (2 * (2 * ae * C27814 + C27808 * C27901) + C28215 + C28215 +
         C27808 * (C27901 + C28212 + C28212 +
                   C27808 * (2 * C27822 + C27808 * C27906))) /
        C27405;
    const double C4657 = C3185 * C4280;
    const double C21978 = C21765 * C4280;
    const double C22582 = C11223 * C4280;
    const double C22620 = C148 * C4280;
    const double C25943 = C24630 * C4280;
    const double C13134 = C13132 * C3049;
    const double C26783 = C13132 * C24525;
    const double C5843 =
        (C27808 * (C27777 + C27783 * (C27800 + ae * C28042 +
                                      C27713 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C27778 = C27754 + C27776;
    const double C27911 = ae * C27909;
    const double C5784 = (C27808 * C27909) / C27400;
    const double C27954 = ae * C27952;
    const double C1369 = C1352 * C1358;
    const double C5283 = C4719 * C1358;
    const double C10271 = C9721 * C1358;
    const double C13882 = C27426 * C1358;
    const double C3062 = C1352 * C3055;
    const double C7268 = C4719 * C3055;
    const double C19720 = C9721 * C3055;
    const double C24527 = C27426 * C3055;
    const double C28051 = ae * C28050;
    const double C2029 =
        (2 * C28014 + C27783 * C28050 + (C27736 + C27759 * C27847) * ae) /
        C27400;
    const double C2597 = (C27808 * C28050) / C27400;
    const double C28255 = C28240 + C28253;
    const double C28277 = ae * C28275;
    const double C13008 = C9785 * C12821;
    const double C18454 = C13939 * C12821;
    const double C21431 = C1426 * C12821;
    const double C26667 = C4783 * C12821;
    const double C28205 = ae * C28204;
    const double C4279 =
        (2 * C28147 + C27808 * C28204 + (C27736 + C27759 * C27896) * ae) /
        C27400;
    const double C28322 = ae * C28321;
    const double C13445 =
        (2 * C28178 + C27808 * C28321 + (C28054 + C28242 * C27896) * ae) /
        C27400;
    const double C28361 = C28346 + C28359;
    const double C4417 = C3329 * C28517;
    const double C25733 = C3329 * C28517;
    const double C27436 = C27434 - C27421;
    const double C27435 = C27433 / C27400;
    const double C1964 = C1351 * C1354;
    const double C1960 = C1351 * C588;
    const double C4140 = C1351 * C3051;
    const double C4136 = C1351 * C960;
    const double C8442 = C1351 * C2531;
    const double C5281 = C4718 * C587;
    const double C7266 = C4718 * C959;
    const double C10269 = C9720 * C587;
    const double C19718 = C9720 * C959;
    const double C11562 = C11222 * C1952;
    const double C11560 = C11222 * C1353;
    const double C11558 = C11222 * C589;
    const double C12761 = C11222 * C3640;
    const double C12759 = C11222 * C2532;
    const double C13310 = C11222 * C3050;
    const double C13308 = C11222 * C961;
    const double C17718 = C11222 * C2530;
    const double C22331 = C11222 * C4128;
    const double C14410 = C13873 * C1354;
    const double C14406 = C13873 * C588;
    const double C16032 = C13873 * C2531;
    const double C16656 = C13873 * C960;
    const double C25500 = C13873 * C3051;
    const double C2182 = C2172 + C2173;
    const double C2180 = C2168 + C2169;
    const double C2178 = C2164 + C2165;
    const double C2176 = C2160 + C2161;
    const double C2362 = C2356 + C2357;
    const double C2360 = C2352 + C2353;
    const double C4358 = C4348 + C4349;
    const double C4356 = C4344 + C4345;
    const double C4354 = C4340 + C4341;
    const double C4352 = C4336 + C4337;
    const double C4542 = C4536 + C4537;
    const double C4540 = C4532 + C4533;
    const double C8670 = C8664 + C8665;
    const double C8668 = C8660 + C8661;
    const double C8884 = C8880 + C8881;
    const double C27612 = C27499 / C27400;
    const double C1623 =
        (((-4 * C27484) / C27400 - C27499 / C27400) * ae) / C27415 +
        ((2 * ((0 * ae) / C27400 - C27484 / C27405) - C27499 / C27415) * ae) /
            C27400;
    const double C4964 =
        (((-4 * C27484) / C27400 - C27499 / C27400) * ae) / C27400;
    const double C9960 =
        -(((-4 * C27484) / C27400 - C27499 / C27400) * be) / C27400;
    const double C1632 = C1622 * C92;
    const double C21425 = C1622 * C961;
    const double C1638 = C1624 * C1354;
    const double C21429 = C1624 * C2530;
    const double C4978 = C4965 * C587;
    const double C4972 = C4965 * C588;
    const double C8080 = C4965 * C2531;
    const double C9376 = C4965 * C2532;
    const double C27174 = C4965 * C3640;
    const double C9974 = C9961 * C587;
    const double C9968 = C9961 * C588;
    const double C13576 = C9961 * C3640;
    const double C13572 = C9961 * C2532;
    const double C15686 = C9961 * C2531;
    const double C14121 = C14110 * C1354;
    const double C18452 = C14110 * C2530;
    const double C27596 = C27593 - C27588;
    const double C4807 = C4797 + C4798;
    const double C4805 = C4793 + C4794;
    const double C4803 = C4789 + C4790;
    const double C4801 = C4785 + C4786;
    const double C5166 = C5160 + C5161;
    const double C5164 = C5156 + C5157;
    const double C7866 = C7860 + C7861;
    const double C7864 = C7856 + C7857;
    const double C8296 = C8292 + C8293;
    const double C9174 = C9168 + C9169;
    const double C9172 = C9164 + C9165;
    const double C9590 = C9586 + C9587;
    const double C27012 = C27006 + C27007;
    const double C27010 = C27002 + C27003;
    const double C27338 = C27334 + C27335;
    const double C9809 = C9799 + C9800;
    const double C9807 = C9795 + C9796;
    const double C9805 = C9791 + C9792;
    const double C9803 = C9787 + C9788;
    const double C10159 = C10153 + C10154;
    const double C10157 = C10149 + C10150;
    const double C13394 = C13384 + C13385;
    const double C13392 = C13380 + C13381;
    const double C13390 = C13376 + C13377;
    const double C13388 = C13372 + C13373;
    const double C13761 = C13755 + C13756;
    const double C13759 = C13751 + C13752;
    const double C15484 = C15478 + C15479;
    const double C15482 = C15474 + C15475;
    const double C15896 = C15892 + C15893;
    const double C27683 = C27525 / C27400;
    const double C3560 =
        (((-4 * C27510) / C27400 - C27525 / C27400) * ae) / C27415 +
        ((2 * ((0 * ae) / C27400 - C27510 / C27405) - C27525 / C27415) * ae) /
            C27400;
    const double C6724 =
        (((-4 * C27510) / C27400 - C27525 / C27400) * ae) / C27400;
    const double C19177 =
        -(((-4 * C27510) / C27400 - C27525 / C27400) * be) / C27400;
    const double C3569 = C3559 * C92;
    const double C13237 = C3559 * C589;
    const double C3575 = C3561 * C3051;
    const double C13241 = C3561 * C3640;
    const double C6738 = C6725 * C959;
    const double C6732 = C6725 * C960;
    const double C8366 = C6725 * C2531;
    const double C9020 = C6725 * C2532;
    const double C18164 = C6725 * C2530;
    const double C19191 = C19178 * C959;
    const double C19185 = C19178 * C960;
    const double C21135 = C19178 * C2530;
    const double C21131 = C19178 * C2532;
    const double C23276 = C19178 * C2531;
    const double C24977 = C24966 * C3051;
    const double C26888 = C24966 * C3640;
    const double C27667 = C27664 - C27659;
    const double C6395 = C6385 + C6386;
    const double C6393 = C6381 + C6382;
    const double C6391 = C6377 + C6378;
    const double C6389 = C6373 + C6374;
    const double C6562 = C6556 + C6557;
    const double C6560 = C6552 + C6553;
    const double C7944 = C7938 + C7939;
    const double C7942 = C7934 + C7935;
    const double C8158 = C8154 + C8155;
    const double C8592 = C8586 + C8587;
    const double C8590 = C8582 + C8583;
    const double C8812 = C8808 + C8809;
    const double C17834 = C17828 + C17829;
    const double C17832 = C17824 + C17825;
    const double C17999 = C17995 + C17996;
    const double C18856 = C18846 + C18847;
    const double C18854 = C18842 + C18843;
    const double C18852 = C18838 + C18839;
    const double C18850 = C18834 + C18835;
    const double C19018 = C19012 + C19013;
    const double C19016 = C19008 + C19009;
    const double C20804 = C20794 + C20795;
    const double C20802 = C20790 + C20791;
    const double C20800 = C20786 + C20787;
    const double C20798 = C20782 + C20783;
    const double C20969 = C20963 + C20964;
    const double C20967 = C20959 + C20960;
    const double C22870 = C22864 + C22865;
    const double C22868 = C22860 + C22861;
    const double C23074 = C23070 + C23071;
    const double C4800 = C28607 * C641;
    const double C9802 = C28607 * C641;
    const double C5462 = C4711 * C721;
    const double C10450 = C9713 * C721;
    const double C6388 = C28633 * C1055;
    const double C18849 = C28633 * C1055;
    const double C7612 = C4711 * C1211;
    const double C20064 = C9713 * C1211;
    const double C177 = C170 + C171;
    const double C240 = C233 + C234;
    const double C4864 = C4861 + C4862;
    const double C5465 = C5455 + C5456;
    const double C10453 = C10443 + C10444;
    const double C6320 = C6317 + C6318;
    const double C7450 = C7440 + C7441;
    const double C19902 = C19892 + C19893;
    const double C18621 = C13870 * C2937;
    const double C21598 = C1348 * C2937;
    const double C11713 = C11706 + C11707;
    const double C11790 = C11788 + C11789;
    const double C17891 = C17888 + C17889;
    const double C18000 = C17997 + C17998;
    const double C18288 = C18278 + C18279;
    const double C20970 = C20965 + C20966;
    const double C21265 = C21255 + C21256;
    const double C22584 = C22582 + C22583;
    const double C22622 = C22620 + C22621;
    const double C27779 = C27778 + C27767;
    const double C594 =
        (2 * (2 * ae * C27783 * C27738 + C27713 * C27908) + C27911 + C27911 +
         C27713 * (C27908 + C27912 + C27912 +
                   C27713 * (2 * ae * C27783 * C27762 +
                             C27713 * C27783 *
                                 (C27752 * C27753 +
                                  C27717 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C1432 =
        (C27793 + ae * C27796 + C27713 * C27804 + C27911 +
         C27783 * (C27777 + C27783 * (C27800 + ae * C27713 * C27801 +
                                      C27713 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C1571 =
        (C27838 + ae * C27796 + C27713 * C27843 + C27911 +
         C27783 * (C27777 + C27783 * (C27841 + ae * C27713 * C27801 +
                                      C27713 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27835)))) /
        C27405;
    const double C5895 =
        (C27911 + C27808 * C27783 *
                      (C27825 + ae * C28064 +
                       C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27812))) /
        C27405;
    const double C6105 =
        (C27911 + C27808 * C27783 *
                      (C27879 + ae * C28064 +
                       C27713 * (ae * C27826 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27873))) /
        C27405;
    const double C5787 = C4719 * C5784;
    const double C7788 = C1352 * C5784;
    const double C10772 = C9721 * C5784;
    const double C15404 = C27426 * C5784;
    const double C966 =
        (2 * (2 * ae * C27808 * C27738 + C27713 * C27951) + C27954 + C27954 +
         C27713 * (C27951 + C27955 + C27955 +
                   C27713 * (2 * ae * C27808 * C27762 +
                             C27713 * C27808 *
                                 (C27752 * C27753 +
                                  C27717 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C3191 =
        (C27818 + ae * C27821 + C27713 * C27829 + C27954 +
         C27808 * (C27777 + C27808 * (C27825 + ae * C28064 +
                                      C27713 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27812)))) /
        C27405;
    const double C3443 =
        (C27876 + ae * C27821 + C27713 * C27881 + C27954 +
         C27808 * (C27777 + C27808 * (C27879 + ae * C28064 +
                                      C27713 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27873)))) /
        C27405;
    const double C5946 =
        (C27954 + C27783 * C27808 *
                      (C27841 + ae * C28042 +
                       C27713 * (ae * C27801 + C27713 * std::pow(C27711, 6) *
                                                   bs[6] * C27835))) /
        C27405;
    const double C2233 =
        (2 * (2 * ae * C27796 + C27783 * C28041) + C28051 + C28051 +
         C27783 * (C28041 + C28048 + C28048 +
                   C27783 * (2 * ae * C28042 +
                             C27783 * C27713 *
                                 (C27752 * C27753 +
                                  C27847 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C2935 =
        (C28051 + C27808 * (C28069 + ae * C27783 * C28064 +
                            C27783 * (ae * C28064 + C27783 * C27713 *
                                                        std::pow(C27711, 6) *
                                                        bs[6] * C27886))) /
        C27405;
    const double C2236 = C1426 * C2029;
    const double C11381 = C11269 * C2029;
    const double C14658 = C13939 * C2029;
    const double C2772 = C1426 * C2597;
    const double C8738 = C4783 * C2597;
    const double C15132 = C13939 * C2597;
    const double C16316 = C9785 * C2597;
    const double C28256 = C28255 + C28249;
    const double C12098 =
        (2 * (2 * ae * C27808 * C27794 + C27783 * C28274) + C28277 + C28277 +
         C27783 * (C28274 + C28278 + C28278 +
                   C27783 * (2 * ae * C27808 * C27801 +
                             C27783 * C27808 *
                                 (C27752 * C27753 +
                                  C27847 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C13184 =
        (C27889 + ae * C28176 + C27783 * C28266 + C28277 +
         C27808 * (C28254 + C27808 * (C27892 + ae * C27783 * C27826 +
                                      C27783 * (ae * C27826 +
                                                C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27886)))) /
        C27405;
    const double C4651 =
        (2 * (2 * ae * C27821 + C27808 * C28072) + C28205 + C28205 +
         C27808 * (C28072 + C28202 + C28202 +
                   C27808 * (2 * ae * C28064 +
                             C27808 * C27713 *
                                 (C27752 * C27753 +
                                  C27896 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C4654 = C3185 * C4279;
    const double C21979 = C21765 * C4279;
    const double C25940 = C24630 * C4279;
    const double C13812 =
        (2 * (2 * ae * C28176 + C27808 * C28312) + C28322 + C28322 +
         C27808 * (C28312 + C28319 + C28319 +
                   C27808 * (2 * ae * C28313 +
                             C27808 * C27783 *
                                 (C27752 * C27753 +
                                  C27896 * bs[6] * std::pow(C27711, 6)) *
                                 C27720))) /
        C27405;
    const double C13814 = C3185 * C13445;
    const double C22290 = C21765 * C13445;
    const double C27390 = C24630 * C13445;
    const double C28362 = C28361 + C28355;
    const double C13887 = C27436 * C97;
    const double C13885 = C27436 * C592;
    const double C13883 = C27436 * C1357;
    const double C13880 = C27436 * C1356;
    const double C13878 = C27436 * C593;
    const double C13876 = C27436 * C96;
    const double C14413 = C27436 * C1954;
    const double C14530 = C2102 * C27436;
    const double C14526 = C2100 * C27436;
    const double C14596 = C27436 * C1427;
    const double C14592 = C27436 * C1353;
    const double C14588 = C27436 * C639;
    const double C14584 = C27436 * C589;
    const double C14768 = C27436 * C1501;
    const double C14764 = C27436 * C681;
    const double C14931 = C27436 * C965;
    const double C14929 = C27436 * C2536;
    const double C14927 = C27436 * C2534;
    const double C15407 = C27436 * C964;
    const double C15405 = C27436 * C2535;
    const double C16242 = C27436 * C2600;
    const double C16238 = C27436 * C2532;
    const double C16450 = C27436 * C2658;
    const double C16661 = C27436 * C3053;
    const double C16659 = C27436 * C3642;
    const double C16870 = C27436 * C1011;
    const double C16866 = C27436 * C961;
    const double C17076 = C27436 * C1053;
    const double C24528 = C27436 * C3054;
    const double C25503 = C27436 * C4130;
    const double C25564 = C4224 * C27436;
    const double C25560 = C4222 * C27436;
    const double C25672 = C27436 * C3115;
    const double C25668 = C27436 * C3050;
    const double C25834 = C27436 * C3186;
    const double C84 =
        ((((0 - (C27401 * C27399) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27402 / C27400) /
             C27406 -
         ((C27401 * C27429 + 0) * be) / C27400) /
            C27406 +
        ((C27401 * (C27429 / C27406 -
                    ((C27401 * C27436 + C28701) * be) / C27400 + C27426) +
          C28737) *
         ae) /
            C27400 +
        C27436 / C27406 - ((C27401 * C27426 + C28517) * be) / C27400;
    const double C86 = (C27429 / C27406 -
                        ((C27401 * C27436 + C28701) * be) / C27400 + C27426) /
                           C27406 +
                       ((C27401 * (C27436 / C27406 -
                                   ((C27401 * C27426 + C28517) * be) / C27400) +
                         C28738) *
                        ae) /
                           C27400 +
                       2 * (C27426 / C27406 - (0 * be) / C27400);
    const double C88 =
        (C27436 / C27406 - ((C27401 * C27426 + C28517) * be) / C27400) /
            C27406 +
        ((C27401 * (C27426 / C27406 - (0 * be) / C27400) + C4711) * ae) /
            C27400;
    const double C4715 =
        C27429 / C27406 - ((C27401 * C27436 + C28701) * be) / C27400 + C27426;
    const double C4717 =
        C27436 / C27406 - ((C27401 * C27426 + C28517) * be) / C27400;
    const double C9717 =
        C27429 / C27406 + ((C27401 * C27436 + C28701) * ae) / C27400 + C27426;
    const double C9719 =
        C27436 / C27406 + ((C27401 * C27426 + C28517) * ae) / C27400;
    const double C27437 = C27424 - C27435;
    const double C1971 = C1964 + C1368;
    const double C1969 = C1960 + C1366;
    const double C4147 = C4140 + C3061;
    const double C4145 = C4136 + C2546;
    const double C8445 = C8442 + C2544;
    const double C5288 = C5281 + C4726;
    const double C7273 = C7266 + C5790;
    const double C10276 = C10269 + C9728;
    const double C19725 = C19718 + C10775;
    const double C11567 = C11562 + C11228;
    const double C11566 = C11560 + C11227;
    const double C11565 = C11558 + C11226;
    const double C12765 = C12761 + C12296;
    const double C12764 = C12759 + C11956;
    const double C13315 = C13310 + C12295;
    const double C13314 = C13308 + C11957;
    const double C17720 = C17718 + C11955;
    const double C22334 = C22331 + C13313;
    const double C14417 = C14410 + C13881;
    const double C14415 = C14406 + C13879;
    const double C16035 = C16032 + C14928;
    const double C16663 = C16656 + C14930;
    const double C25505 = C25500 + C16660;
    const double C27615 = C27614 - C27612;
    const double C1635 = C1623 * C588;
    const double C21427 = C1623 * C2532;
    const double C4975 = C4964 * C93;
    const double C4969 = C4964 * C92;
    const double C8078 = C4964 * C960;
    const double C9374 = C4964 * C961;
    const double C27172 = C4964 * C3050;
    const double C9971 = C9960 * C93;
    const double C9965 = C9960 * C92;
    const double C13574 = C9960 * C3050;
    const double C13570 = C9960 * C961;
    const double C15684 = C9960 * C960;
    const double C1644 = C1632 + C1633;
    const double C21434 = C21425 + C2777;
    const double C1646 = C1638 + C1639;
    const double C21436 = C21429 + C2775;
    const double C4986 = C4978 + C4979;
    const double C4984 = C4972 + C4973;
    const double C8083 = C8080 + C6001;
    const double C9383 = C9376 + C6003;
    const double C27179 = C27174 + C9380;
    const double C9982 = C9974 + C9975;
    const double C9980 = C9968 + C9969;
    const double C13583 = C13576 + C12502;
    const double C13581 = C13572 + C10982;
    const double C15689 = C15686 + C10980;
    const double C14129 = C14121 + C14122;
    const double C18459 = C18452 + C15135;
    const double C11266 =
        ((((0 - (C27464 * C27585) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27482 / C27400) /
             C27406 -
         ((C27464 * C27600 + 0) * be) / C27400) /
            C27406 +
        ((C27464 * (C27600 / C27406 -
                    ((C27464 * C27596 + C28714) * be) / C27400 + C27597) +
          C28742) *
         ae) /
            C27400 +
        C27596 / C27406 - ((C27464 * C27597 + C28607) * be) / C27400;
    const double C11267 =
        (C27600 / C27406 - ((C27464 * C27596 + C28714) * be) / C27400 +
         C27597) /
            C27406 +
        ((C27464 *
              (C27596 / C27406 - ((C27464 * C27597 + C28607) * be) / C27400) +
          C28743) *
         ae) /
            C27400 +
        2 * (C27597 / C27406 - (0 * be) / C27400);
    const double C11268 =
        (C27596 / C27406 - ((C27464 * C27597 + C28607) * be) / C27400) /
            C27406 +
        ((C27464 * (C27597 / C27406 - (0 * be) / C27400) + C13870) * ae) /
            C27400;
    const double C13937 =
        C27600 / C27406 - ((C27464 * C27596 + C28714) * be) / C27400 + C27597;
    const double C13938 =
        C27596 / C27406 - ((C27464 * C27597 + C28607) * be) / C27400;
    const double C27686 = C27685 - C27683;
    const double C3572 = C3560 * C960;
    const double C13239 = C3560 * C2532;
    const double C6735 = C6724 * C93;
    const double C6729 = C6724 * C92;
    const double C8364 = C6724 * C588;
    const double C9018 = C6724 * C589;
    const double C18162 = C6724 * C1353;
    const double C19188 = C19177 * C93;
    const double C19182 = C19177 * C92;
    const double C21133 = C19177 * C1353;
    const double C21129 = C19177 * C589;
    const double C23274 = C19177 * C588;
    const double C3581 = C3569 + C3570;
    const double C13246 = C13237 + C4077;
    const double C3583 = C3575 + C3576;
    const double C13248 = C13241 + C4075;
    const double C6746 = C6738 + C6739;
    const double C6744 = C6732 + C6733;
    const double C8369 = C8366 + C7208;
    const double C9027 = C9020 + C7210;
    const double C18169 = C18164 + C9024;
    const double C19199 = C19191 + C19192;
    const double C19197 = C19185 + C19186;
    const double C21142 = C21135 + C20625;
    const double C21140 = C21131 + C19662;
    const double C23279 = C23276 + C19660;
    const double C24985 = C24977 + C24978;
    const double C26895 = C26888 + C25445;
    const double C21762 =
        ((((0 - (C27467 * C27656) / C27400) * ae) / C27400 - (0 * be) / C27415 +
          C27508 / C27400) /
             C27406 -
         ((C27467 * C27671 + 0) * be) / C27400) /
            C27406 +
        ((C27467 * (C27671 / C27406 -
                    ((C27467 * C27667 + C28715) * be) / C27400 + C27668) +
          C28744) *
         ae) /
            C27400 +
        C27667 / C27406 - ((C27467 * C27668 + C28633) * be) / C27400;
    const double C21763 =
        (C27671 / C27406 - ((C27467 * C27667 + C28715) * be) / C27400 +
         C27668) /
            C27406 +
        ((C27467 *
              (C27667 / C27406 - ((C27467 * C27668 + C28633) * be) / C27400) +
          C28745) *
         ae) /
            C27400 +
        2 * (C27668 / C27406 - (0 * be) / C27400);
    const double C21764 =
        (C27667 / C27406 - ((C27467 * C27668 + C28633) * be) / C27400) /
            C27406 +
        ((C27467 * (C27668 / C27406 - (0 * be) / C27400) + C24525) * ae) /
            C27400;
    const double C24628 =
        C27671 / C27406 - ((C27467 * C27667 + C28715) * be) / C27400 + C27668;
    const double C24629 =
        C27667 / C27406 - ((C27467 * C27668 + C28633) * be) / C27400;
    const double C4808 = C4799 + C4800;
    const double C9810 = C9801 + C9802;
    const double C5468 = C5461 + C5462;
    const double C10456 = C10449 + C10450;
    const double C6396 = C6387 + C6388;
    const double C18857 = C18848 + C18849;
    const double C7615 = C7611 + C7612;
    const double C20067 = C20063 + C20064;
    const double C5400 = C4864 * C4711;
    const double C10388 = C4864 * C9713;
    const double C7335 = C6320 * C4711;
    const double C19787 = C6320 * C9713;
    const double C18624 = C18620 + C18621;
    const double C21601 = C21597 + C21598;
    const double C18397 = C17891 * C13870;
    const double C21374 = C17891 * C1348;
    const double C27780 = ae * C27779;
    const double C100 =
        (3 * C27747 + C27713 * C27779 + (2 * C27736 + C27713 * C27764) * ae) /
        C27400;
    const double C590 = (C27783 * C27779) / C27400;
    const double C962 = (C27808 * C27779) / C27400;
    const double C28257 = ae * C28256;
    const double C11610 =
        (3 * C28060 + C27783 * C28256 + (2 * C28054 + C27783 * C28247) * ae) /
        C27400;
    const double C11991 = (C27808 * C28256) / C27400;
    const double C28363 = ae * C28362;
    const double C22418 =
        (3 * C28214 + C27808 * C28362 + (2 * C28208 + C27808 * C28353) * ae) /
        C27400;
    const double C14606 = C14596 + C14597;
    const double C14604 = C14592 + C14593;
    const double C14602 = C14588 + C14589;
    const double C14600 = C14584 + C14585;
    const double C14774 = C14768 + C14769;
    const double C14772 = C14764 + C14765;
    const double C16248 = C16242 + C16243;
    const double C16246 = C16238 + C16239;
    const double C16454 = C16450 + C16451;
    const double C16876 = C16870 + C16871;
    const double C16874 = C16866 + C16867;
    const double C17080 = C17076 + C17077;
    const double C25678 = C25672 + C25673;
    const double C25676 = C25668 + C25669;
    const double C25838 = C25834 + C25835;
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
    const double C4732 = C4715 * C97;
    const double C4729 = C4715 * C592;
    const double C4724 = C4715 * C593;
    const double C4721 = C4715 * C96;
    const double C5285 = C4715 * C1356;
    const double C5395 = C2100 * C4715;
    const double C5457 = C4715 * C639;
    const double C5451 = C4715 * C589;
    const double C5625 = C4715 * C681;
    const double C5792 = C4715 * C965;
    const double C5789 = C4715 * C2536;
    const double C6264 = C4715 * C964;
    const double C7270 = C4715 * C3053;
    const double C7330 = C4222 * C4715;
    const double C7442 = C4715 * C1011;
    const double C7436 = C4715 * C961;
    const double C7607 = C4715 * C1053;
    const double C4731 = C4717 * C98;
    const double C4728 = C4717 * C591;
    const double C4725 = C4717 * C592;
    const double C4722 = C4717 * C97;
    const double C5284 = C4717 * C1357;
    const double C5397 = C1516 * C4717;
    const double C5459 = C4717 * C638;
    const double C5453 = C4717 * C588;
    const double C5627 = C4717 * C680;
    const double C5791 = C4717 * C964;
    const double C5788 = C4717 * C2535;
    const double C6263 = C4717 * C963;
    const double C7269 = C4717 * C3054;
    const double C7332 = C3130 * C4717;
    const double C7444 = C4717 * C1010;
    const double C7438 = C4717 * C960;
    const double C7609 = C4717 * C1052;
    const double C9734 = C9717 * C97;
    const double C9731 = C9717 * C592;
    const double C9726 = C9717 * C593;
    const double C9723 = C9717 * C96;
    const double C10273 = C9717 * C1356;
    const double C10383 = C2100 * C9717;
    const double C10445 = C9717 * C639;
    const double C10439 = C9717 * C589;
    const double C10613 = C9717 * C681;
    const double C10777 = C9717 * C965;
    const double C10774 = C9717 * C2536;
    const double C18731 = C9717 * C964;
    const double C19722 = C9717 * C3053;
    const double C19782 = C4222 * C9717;
    const double C19894 = C9717 * C1011;
    const double C19888 = C9717 * C961;
    const double C20059 = C9717 * C1053;
    const double C9733 = C9719 * C98;
    const double C9730 = C9719 * C591;
    const double C9727 = C9719 * C592;
    const double C9724 = C9719 * C97;
    const double C10272 = C9719 * C1357;
    const double C10385 = C1516 * C9719;
    const double C10447 = C9719 * C638;
    const double C10441 = C9719 * C588;
    const double C10615 = C9719 * C680;
    const double C10776 = C9719 * C964;
    const double C10773 = C9719 * C2535;
    const double C18730 = C9719 * C963;
    const double C19721 = C9719 * C3054;
    const double C19784 = C3130 * C9719;
    const double C19896 = C9719 * C1010;
    const double C19890 = C9719 * C960;
    const double C20061 = C9719 * C1052;
    const double C27438 = C27437 * ae;
    const double C1349 = -(C27437 * be) / C27400;
    const double C1975 = C1971 + C1368;
    const double C1973 = C1969 + C1366;
    const double C4151 = C4147 + C3061;
    const double C4149 = C4145 + C2546;
    const double C8447 = C8445 + C2544;
    const double C5291 = C5288 + C4726;
    const double C7276 = C7273 + C5790;
    const double C10279 = C10276 + C9728;
    const double C19728 = C19725 + C10775;
    const double C11570 = C11567 + C11228;
    const double C11569 = C11566 + C11227;
    const double C11568 = C11565 + C11226;
    const double C12767 = C12765 + C12296;
    const double C12766 = C12764 + C11956;
    const double C13317 = C13315 + C12295;
    const double C13316 = C13314 + C11957;
    const double C17721 = C17720 + C11955;
    const double C22335 = C22334 + C13313;
    const double C14421 = C14417 + C13881;
    const double C14419 = C14415 + C13879;
    const double C16037 = C16035 + C14928;
    const double C16665 = C16663 + C14930;
    const double C25507 = C25505 + C16660;
    const double C27616 = C27615 * ae;
    const double C1645 = C1635 + C1636;
    const double C21435 = C21427 + C2776;
    const double C4985 = C4975 + C4976;
    const double C4983 = C4969 + C4970;
    const double C8082 = C8078 + C6002;
    const double C9382 = C9374 + C6004;
    const double C27178 = C27172 + C9381;
    const double C9981 = C9971 + C9972;
    const double C9979 = C9965 + C9966;
    const double C13582 = C13574 + C12501;
    const double C13580 = C13570 + C10983;
    const double C15688 = C15684 + C10981;
    const double C1647 = C1644 + C1633;
    const double C21437 = C21434 + C2777;
    const double C1649 = C1646 + C1639;
    const double C21439 = C21436 + C2775;
    const double C4990 = C4986 + C4979;
    const double C4988 = C4984 + C4973;
    const double C8085 = C8083 + C6001;
    const double C9385 = C9383 + C6003;
    const double C27181 = C27179 + C9380;
    const double C9986 = C9982 + C9975;
    const double C9984 = C9980 + C9969;
    const double C13587 = C13583 + C12502;
    const double C13585 = C13581 + C10982;
    const double C15691 = C15689 + C10980;
    const double C14132 = C14129 + C14122;
    const double C18462 = C18459 + C15135;
    const double C11384 = C11266 * C150;
    const double C11377 = C11266 * C149;
    const double C11752 = C11266 * C639;
    const double C12103 = C11266 * C1011;
    const double C11383 = C11267 * C638;
    const double C11378 = C11267 * C639;
    const double C11751 = C11267 * C1427;
    const double C12102 = C11267 * C2600;
    const double C11382 = C11268 * C1428;
    const double C11379 = C11268 * C1427;
    const double C11750 = C11268 * C2030;
    const double C12101 = C11268 * C2599;
    const double C13947 = C13937 * C97;
    const double C13941 = C13937 * C92;
    const double C14126 = C13937 * C151;
    const double C14116 = C13937 * C150;
    const double C14112 = C13937 * C149;
    const double C14186 = C235 * C13937;
    const double C14292 = C13937 * C213;
    const double C14663 = C13937 * C639;
    const double C14660 = C13937 * C638;
    const double C15137 = C13937 * C1011;
    const double C15134 = C13937 * C1010;
    const double C17944 = C13937 * C2600;
    const double C18280 = C13937 * C965;
    const double C18274 = C13937 * C961;
    const double C18392 = C13511 * C13937;
    const double C18456 = C13937 * C3115;
    const double C18616 = C13937 * C1053;
    const double C13949 = C13938 * C592;
    const double C13943 = C13938 * C588;
    const double C14125 = C13938 * C637;
    const double C14119 = C13938 * C638;
    const double C14113 = C13938 * C639;
    const double C14188 = C1516 * C13938;
    const double C14294 = C13938 * C680;
    const double C14662 = C13938 * C1427;
    const double C14659 = C13938 * C1428;
    const double C15136 = C13938 * C2600;
    const double C15133 = C13938 * C2598;
    const double C17943 = C13938 * C2599;
    const double C18282 = C13938 * C2536;
    const double C18276 = C13938 * C2532;
    const double C18394 = C12953 * C13938;
    const double C18455 = C13938 * C3698;
    const double C18618 = C13938 * C2658;
    const double C27687 = C27686 * ae;
    const double C3582 = C3572 + C3573;
    const double C13247 = C13239 + C4076;
    const double C6745 = C6735 + C6736;
    const double C6743 = C6729 + C6730;
    const double C8368 = C8364 + C7209;
    const double C9026 = C9018 + C7211;
    const double C18168 = C18162 + C9025;
    const double C19198 = C19188 + C19189;
    const double C19196 = C19182 + C19183;
    const double C21141 = C21133 + C20624;
    const double C21139 = C21129 + C19663;
    const double C23278 = C23274 + C19661;
    const double C3584 = C3581 + C3570;
    const double C13249 = C13246 + C4077;
    const double C3586 = C3583 + C3576;
    const double C13251 = C13248 + C4075;
    const double C6750 = C6746 + C6739;
    const double C6748 = C6744 + C6733;
    const double C8371 = C8369 + C7208;
    const double C9029 = C9027 + C7210;
    const double C18171 = C18169 + C9024;
    const double C19203 = C19199 + C19192;
    const double C19201 = C19197 + C19186;
    const double C21146 = C21142 + C20625;
    const double C21144 = C21140 + C19662;
    const double C23281 = C23279 + C19660;
    const double C24988 = C24985 + C24978;
    const double C26898 = C26895 + C25445;
    const double C21982 = C21762 * C213;
    const double C21975 = C21762 * C212;
    const double C22293 = C21762 * C681;
    const double C22661 = C21762 * C1053;
    const double C21981 = C21763 * C1052;
    const double C21976 = C21763 * C1053;
    const double C22292 = C21763 * C2658;
    const double C22660 = C21763 * C3186;
    const double C21980 = C21764 * C3187;
    const double C21977 = C21764 * C3186;
    const double C22291 = C21764 * C3752;
    const double C22659 = C21764 * C4280;
    const double C24638 = C24628 * C97;
    const double C24632 = C24628 * C92;
    const double C24800 = C24628 * C150;
    const double C24909 = C172 * C24628;
    const double C24982 = C24628 * C214;
    const double C24972 = C24628 * C213;
    const double C24968 = C24628 * C212;
    const double C25447 = C24628 * C681;
    const double C25444 = C24628 * C680;
    const double C25945 = C24628 * C1053;
    const double C25942 = C24628 * C1052;
    const double C26555 = C24628 * C593;
    const double C26549 = C24628 * C589;
    const double C26719 = C24628 * C639;
    const double C26778 = C11708 * C24628;
    const double C26892 = C24628 * C1501;
    const double C27392 = C24628 * C2658;
    const double C24640 = C24629 * C964;
    const double C24634 = C24629 * C960;
    const double C24802 = C24629 * C1010;
    const double C24911 = C3130 * C24629;
    const double C24981 = C24629 * C1051;
    const double C24975 = C24629 * C1052;
    const double C24969 = C24629 * C1053;
    const double C25446 = C24629 * C2658;
    const double C25443 = C24629 * C2657;
    const double C25944 = C24629 * C3186;
    const double C25941 = C24629 * C3187;
    const double C26557 = C24629 * C2536;
    const double C26551 = C24629 * C2532;
    const double C26721 = C24629 * C2600;
    const double C26780 = C12953 * C24629;
    const double C26891 = C24629 * C2656;
    const double C27391 = C24629 * C3752;
    const double C105 =
        (3 * (C27742 + C27745 + C27745 + C27713 * C27773) + C27780 + C27780 +
         C27713 *
             (2 * C27773 + C27777 + C27777 +
              C27713 * (C27768 + C27772 + C27772 +
                        C27713 * (2 * ae * C27762 +
                                  C27713 *
                                      (C27752 * C27753 +
                                       C27717 * bs[6] * std::pow(C27711, 6)) *
                                      C27720)))) /
        C27405;
    const double C640 =
        (C27780 + C27783 * (2 * C27804 + ae * C27805 +
                            C27713 * (C27800 + ae * C27713 * C27801 +
                                      C27713 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27787)))) /
        C27405;
    const double C720 =
        (C27780 + C27783 * (2 * C27843 + ae * C27805 +
                            C27713 * (C27841 + ae * C27713 * C27801 +
                                      C27713 * (ae * C27801 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27835)))) /
        C27405;
    const double C1054 =
        (C27780 + C27808 * (2 * C27829 + ae * C27830 +
                            C27713 * (C27825 + ae * C27713 * C27826 +
                                      C27713 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27812)))) /
        C27405;
    const double C1210 =
        (C27780 + C27808 * (2 * C27881 + ae * C27830 +
                            C27713 * (C27879 + ae * C27713 * C27826 +
                                      C27713 * (ae * C27826 +
                                                C27713 * std::pow(C27711, 6) *
                                                    bs[6] * C27873)))) /
        C27405;
    const double C111 = C90 * C100;
    const double C599 = C90 * C590;
    const double C4727 = C4719 * C590;
    const double C9729 = C9721 * C590;
    const double C971 = C90 * C962;
    const double C6262 = C4719 * C962;
    const double C18729 = C9721 * C962;
    const double C11747 =
        (3 * (C27852 + C28058 + C28058 + C27783 * C28244) + C28257 + C28257 +
         C27783 *
             (2 * C28244 + C28254 + C28254 +
              C27783 * (C27857 + C28250 + C28250 +
                        C27783 * (2 * ae * C27801 +
                                  C27783 *
                                      (C27752 * C27753 +
                                       C27847 * bs[6] * std::pow(C27711, 6)) *
                                      C27720)))) /
        C27405;
    const double C12207 =
        (C28257 + C27808 * (2 * C28266 + ae * C28262 +
                            C27783 * (C27892 + ae * C27783 * C27826 +
                                      C27783 * (ae * C27826 +
                                                C27783 * std::pow(C27711, 6) *
                                                    bs[6] * C27886)))) /
        C27405;
    const double C11749 = C11269 * C11610;
    const double C12100 = C11269 * C11991;
    const double C17942 = C13939 * C11991;
    const double C20906 = C1426 * C11991;
    const double C22656 =
        (3 * (C27901 + C28212 + C28212 + C27808 * C28350) + C28363 + C28363 +
         C27808 *
             (2 * C28350 + C28360 + C28360 +
              C27808 * (C27906 + C28356 + C28356 +
                        C27808 * (2 * ae * C27826 +
                                  C27808 *
                                      (C27752 * C27753 +
                                       C27896 * bs[6] * std::pow(C27711, 6)) *
                                      C27720)))) /
        C27405;
    const double C22658 = C21765 * C22418;
    const double C5466 = C5457 + C5458;
    const double C5463 = C5451 + C5452;
    const double C5631 = C5625 + C5626;
    const double C7451 = C7442 + C7443;
    const double C7448 = C7436 + C7437;
    const double C7613 = C7607 + C7608;
    const double C5467 = C5459 + C5460;
    const double C5464 = C5453 + C5454;
    const double C5632 = C5627 + C5628;
    const double C7452 = C7444 + C7445;
    const double C7449 = C7438 + C7439;
    const double C7614 = C7609 + C7610;
    const double C10454 = C10445 + C10446;
    const double C10451 = C10439 + C10440;
    const double C10619 = C10613 + C10614;
    const double C19903 = C19894 + C19895;
    const double C19900 = C19888 + C19889;
    const double C20065 = C20059 + C20060;
    const double C10455 = C10447 + C10448;
    const double C10452 = C10441 + C10442;
    const double C10620 = C10615 + C10616;
    const double C19904 = C19896 + C19897;
    const double C19901 = C19890 + C19891;
    const double C20066 = C20061 + C20062;
    const double C83 =
        ((ae * -2 * C27399) / C27412 -
         (((C27401 * C27413) / C27405 + 2 * C27429) * be) / C27400) /
            C27406 +
        ((C27401 * (C27413 / C27412 -
                    (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
                    C27431 / C27415) +
          2 * (C27429 / C27406 - ((C27401 * C27436 + C28701) * be) / C27400 +
               C27426)) *
         ae) /
            C27400 +
        C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400;
    const double C85 =
        (C27413 / C27412 -
         (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
         C27431 / C27415) /
            C27406 +
        ((C27401 * (C27438 / C27415 -
                    ((2 * C27426 - C27433 / C27415) * be) / C27400) +
          2 * (C27436 / C27406 - ((C27401 * C27426 + C28517) * be) / C27400)) *
         ae) /
            C27400 +
        (-2 * C27431) / (C27400 * 4 * C27405);
    const double C87 =
        (C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400) /
            C27406 +
        ((2 * (C27426 / C27406 - (0 * be) / C27400) -
          C27433 / (C27400 * 4 * C27405)) *
         ae) /
            C27400;
    const double C4714 =
        C27413 / C27412 -
        (((C27401 * C27438) / C27400 + 2 * C27436) * be) / C27400 -
        C27431 / C27415;
    const double C4716 =
        C27438 / C27415 - ((2 * C27426 - C27433 / C27415) * be) / C27400;
    const double C9716 =
        C27413 / C27412 +
        (((C27401 * C27438) / C27400 + 2 * C27436) * ae) / C27400 -
        C27431 / C27415;
    const double C9718 =
        C27438 / C27415 + ((2 * C27426 - C27433 / C27415) * ae) / C27400;
    const double C13871 = C27438 / C27400;
    const double C1962 = C1349 * C1353;
    const double C1958 = C1349 * C589;
    const double C4138 = C1349 * C3050;
    const double C4134 = C1349 * C961;
    const double C8440 = C1349 * C2532;
    const double C1979 = C1975 + C1965;
    const double C1977 = C1973 + C1961;
    const double C4155 = C4151 + C4141;
    const double C4153 = C4149 + C4137;
    const double C8449 = C8447 + C8443;
    const double C5294 = C5291 + C5282;
    const double C7279 = C7276 + C7267;
    const double C10282 = C10279 + C10270;
    const double C19731 = C19728 + C19719;
    const double C11573 = C11570 + C11563;
    const double C11572 = C11569 + C11561;
    const double C11571 = C11568 + C11559;
    const double C12769 = C12767 + C12762;
    const double C12768 = C12766 + C12760;
    const double C13319 = C13317 + C13311;
    const double C13318 = C13316 + C13309;
    const double C17722 = C17721 + C17719;
    const double C22336 = C22335 + C22332;
    const double C14425 = C14421 + C14411;
    const double C14423 = C14419 + C14407;
    const double C16039 = C16037 + C16033;
    const double C16667 = C16665 + C16657;
    const double C25509 = C25507 + C25501;
    const double C11372 =
        ((ae * -2 * C27585) / C27412 -
         (((C27464 * C27613) / C27405 + 2 * C27600) * be) / C27400) /
            C27406 +
        ((C27464 * (C27613 / C27412 -
                    (((C27464 * C27616) / C27400 + 2 * C27596) * be) / C27400 -
                    C27496 / C27415) +
          2 * (C27600 / C27406 - ((C27464 * C27596 + C28714) * be) / C27400 +
               C27597)) *
         ae) /
            C27400 +
        C27616 / C27415 - ((2 * C27597 - C27499 / C27415) * be) / C27400;
    const double C11373 =
        (C27613 / C27412 -
         (((C27464 * C27616) / C27400 + 2 * C27596) * be) / C27400 -
         C27496 / C27415) /
            C27406 +
        ((C27464 * (C27616 / C27415 -
                    ((2 * C27597 - C27499 / C27415) * be) / C27400) +
          2 * (C27596 / C27406 - ((C27464 * C27597 + C28607) * be) / C27400)) *
         ae) /
            C27400 +
        (-2 * C27496) / (C27400 * 4 * C27405);
    const double C11374 =
        (C27616 / C27415 - ((2 * C27597 - C27499 / C27415) * be) / C27400) /
            C27406 +
        ((2 * (C27597 / C27406 - (0 * be) / C27400) -
          C27499 / (C27400 * 4 * C27405)) *
         ae) /
            C27400;
    const double C14108 =
        C27613 / C27412 -
        (((C27464 * C27616) / C27400 + 2 * C27596) * be) / C27400 -
        C27496 / C27415;
    const double C14109 =
        C27616 / C27415 - ((2 * C27597 - C27499 / C27415) * be) / C27400;
    const double C1648 = C1645 + C1636;
    const double C21438 = C21435 + C2776;
    const double C4989 = C4985 + C4976;
    const double C4987 = C4983 + C4970;
    const double C8084 = C8082 + C6002;
    const double C9384 = C9382 + C6004;
    const double C27180 = C27178 + C9381;
    const double C9985 = C9981 + C9972;
    const double C9983 = C9979 + C9966;
    const double C13586 = C13582 + C12501;
    const double C13584 = C13580 + C10983;
    const double C15690 = C15688 + C10981;
    const double C1650 = C1647 + C1634;
    const double C21440 = C21437 + C21426;
    const double C1652 = C1649 + C1640;
    const double C21442 = C21439 + C21430;
    const double C4994 = C4990 + C4980;
    const double C4992 = C4988 + C4974;
    const double C8087 = C8085 + C8081;
    const double C9387 = C9385 + C9377;
    const double C27183 = C27181 + C27175;
    const double C9990 = C9986 + C9976;
    const double C9988 = C9984 + C9970;
    const double C13591 = C13587 + C13577;
    const double C13589 = C13585 + C13573;
    const double C15693 = C15691 + C15687;
    const double C14135 = C14132 + C14123;
    const double C18465 = C18462 + C18453;
    const double C13956 = C13947 + C13948;
    const double C13953 = C13941 + C13942;
    const double C14298 = C14292 + C14293;
    const double C18289 = C18280 + C18281;
    const double C18286 = C18274 + C18275;
    const double C18622 = C18616 + C18617;
    const double C13957 = C13949 + C13950;
    const double C13954 = C13943 + C13944;
    const double C14299 = C14294 + C14295;
    const double C18290 = C18282 + C18283;
    const double C18287 = C18276 + C18277;
    const double C18623 = C18618 + C18619;
    const double C21970 =
        ((ae * -2 * C27656) / C27412 -
         (((C27467 * C27684) / C27405 + 2 * C27671) * be) / C27400) /
            C27406 +
        ((C27467 * (C27684 / C27412 -
                    (((C27467 * C27687) / C27400 + 2 * C27667) * be) / C27400 -
                    C27522 / C27415) +
          2 * (C27671 / C27406 - ((C27467 * C27667 + C28715) * be) / C27400 +
               C27668)) *
         ae) /
            C27400 +
        C27687 / C27415 - ((2 * C27668 - C27525 / C27415) * be) / C27400;
    const double C21971 =
        (C27684 / C27412 -
         (((C27467 * C27687) / C27400 + 2 * C27667) * be) / C27400 -
         C27522 / C27415) /
            C27406 +
        ((C27467 * (C27687 / C27415 -
                    ((2 * C27668 - C27525 / C27415) * be) / C27400) +
          2 * (C27667 / C27406 - ((C27467 * C27668 + C28633) * be) / C27400)) *
         ae) /
            C27400 +
        (-2 * C27522) / (C27400 * 4 * C27405);
    const double C21972 =
        (C27687 / C27415 - ((2 * C27668 - C27525 / C27415) * be) / C27400) /
            C27406 +
        ((2 * (C27668 / C27406 - (0 * be) / C27400) -
          C27525 / (C27400 * 4 * C27405)) *
         ae) /
            C27400;
    const double C24964 =
        C27684 / C27412 -
        (((C27467 * C27687) / C27400 + 2 * C27667) * be) / C27400 -
        C27522 / C27415;
    const double C24965 =
        C27687 / C27415 - ((2 * C27668 - C27525 / C27415) * be) / C27400;
    const double C3585 = C3582 + C3573;
    const double C13250 = C13247 + C4076;
    const double C6749 = C6745 + C6736;
    const double C6747 = C6743 + C6730;
    const double C8370 = C8368 + C7209;
    const double C9028 = C9026 + C7211;
    const double C18170 = C18168 + C9025;
    const double C19202 = C19198 + C19189;
    const double C19200 = C19196 + C19183;
    const double C21145 = C21141 + C20624;
    const double C21143 = C21139 + C19663;
    const double C23280 = C23278 + C19661;
    const double C3587 = C3584 + C3571;
    const double C13252 = C13249 + C13238;
    const double C3589 = C3586 + C3577;
    const double C13254 = C13251 + C13242;
    const double C6754 = C6750 + C6740;
    const double C6752 = C6748 + C6734;
    const double C8373 = C8371 + C8367;
    const double C9031 = C9029 + C9021;
    const double C18173 = C18171 + C18165;
    const double C19207 = C19203 + C19193;
    const double C19205 = C19201 + C19187;
    const double C21150 = C21146 + C21136;
    const double C21148 = C21144 + C21132;
    const double C23283 = C23281 + C23277;
    const double C24991 = C24988 + C24979;
    const double C26901 = C26898 + C26889;
    const double C24647 = C24638 + C24639;
    const double C24644 = C24632 + C24633;
    const double C24806 = C24800 + C24801;
    const double C26564 = C26555 + C26556;
    const double C26561 = C26549 + C26550;
    const double C26725 = C26719 + C26720;
    const double C24648 = C24640 + C24641;
    const double C24645 = C24634 + C24635;
    const double C24807 = C24802 + C24803;
    const double C26565 = C26557 + C26558;
    const double C26562 = C26551 + C26552;
    const double C26726 = C26721 + C26722;
    const double C5277 = C4714 * C589;
    const double C7262 = C4714 * C961;
    const double C5279 = C4716 * C588;
    const double C7264 = C4716 * C960;
    const double C10265 = C9716 * C589;
    const double C19714 = C9716 * C961;
    const double C10267 = C9718 * C588;
    const double C19716 = C9718 * C960;
    const double C14408 = C13871 * C1353;
    const double C14404 = C13871 * C589;
    const double C16030 = C13871 * C2532;
    const double C16654 = C13871 * C961;
    const double C25498 = C13871 * C3050;
    const double C1970 = C1962 + C1367;
    const double C1968 = C1958 + C1365;
    const double C4146 = C4138 + C3060;
    const double C4144 = C4134 + C2547;
    const double C8444 = C8440 + C2545;
    const double C11576 = C11573 * C28569;
    const double C11575 = C11572 * C28569;
    const double C17717 = C11572 * C28715;
    const double C20680 = C11572 * C18726;
    const double C11574 = C11571 * C28569;
    const double C12758 = C11571 * C3047;
    const double C17715 = C11571 * C28715;
    const double C20678 = C11571 * C18726;
    const double C26446 = C11571 * C28744;
    const double C12771 = C12769 * C3049;
    const double C26448 = C12769 * C24525;
    const double C12770 = C12768 * C3048;
    const double C17716 = C12768 * C28633;
    const double C20679 = C12768 * C28633;
    const double C26447 = C12768 * C28745;
    const double C17723 = C17722 * C28633;
    const double C20681 = C17722 * C28633;
    const double C14115 = C14108 * C92;
    const double C18448 = C14108 * C961;
    const double C14118 = C14109 * C588;
    const double C18450 = C14109 * C2532;
    const double C1651 = C1648 + C1637;
    const double C21441 = C21438 + C21428;
    const double C4993 = C4989 + C4977;
    const double C4991 = C4987 + C4971;
    const double C8086 = C8084 + C8079;
    const double C9386 = C9384 + C9375;
    const double C27182 = C27180 + C27173;
    const double C9989 = C9985 + C9973;
    const double C9987 = C9983 + C9967;
    const double C13590 = C13586 + C13575;
    const double C13588 = C13584 + C13571;
    const double C15692 = C15690 + C15685;
    const double C24971 = C24964 * C92;
    const double C26884 = C24964 * C589;
    const double C24974 = C24965 * C960;
    const double C26886 = C24965 * C2532;
    const double C3588 = C3585 + C3574;
    const double C13253 = C13250 + C13240;
    const double C6753 = C6749 + C6737;
    const double C6751 = C6747 + C6731;
    const double C8372 = C8370 + C8365;
    const double C9030 = C9028 + C9019;
    const double C18172 = C18170 + C18163;
    const double C19206 = C19202 + C19190;
    const double C19204 = C19200 + C19184;
    const double C21149 = C21145 + C21134;
    const double C21147 = C21143 + C21130;
    const double C23282 = C23280 + C23275;
    const double C5286 = C5277 + C4724;
    const double C7271 = C7262 + C5792;
    const double C5287 = C5279 + C4725;
    const double C7272 = C7264 + C5791;
    const double C10274 = C10265 + C9726;
    const double C19723 = C19714 + C10777;
    const double C10275 = C10267 + C9727;
    const double C19724 = C19716 + C10776;
    const double C14416 = C14408 + C13880;
    const double C14414 = C14404 + C13878;
    const double C16034 = C16030 + C14929;
    const double C16662 = C16654 + C14931;
    const double C25504 = C25498 + C16661;
    const double C1974 = C1970 + C1367;
    const double C1972 = C1968 + C1365;
    const double C4150 = C4146 + C3060;
    const double C4148 = C4144 + C2547;
    const double C8446 = C8444 + C2545;
    const double C14127 = C14115 + C14116;
    const double C18457 = C18448 + C15137;
    const double C14128 = C14118 + C14119;
    const double C18458 = C18450 + C15136;
    const double C24983 = C24971 + C24972;
    const double C26893 = C26884 + C25447;
    const double C24984 = C24974 + C24975;
    const double C26894 = C26886 + C25446;
    const double C5289 = C5286 + C4724;
    const double C7274 = C7271 + C5792;
    const double C5290 = C5287 + C4725;
    const double C7275 = C7272 + C5791;
    const double C10277 = C10274 + C9726;
    const double C19726 = C19723 + C10777;
    const double C10278 = C10275 + C9727;
    const double C19727 = C19724 + C10776;
    const double C14420 = C14416 + C13880;
    const double C14418 = C14414 + C13878;
    const double C16036 = C16034 + C14929;
    const double C16664 = C16662 + C14931;
    const double C25506 = C25504 + C16661;
    const double C1978 = C1974 + C1963;
    const double C1976 = C1972 + C1959;
    const double C4154 = C4150 + C4139;
    const double C4152 = C4148 + C4135;
    const double C8448 = C8446 + C8441;
    const double C14130 = C14127 + C14116;
    const double C18460 = C18457 + C15137;
    const double C14131 = C14128 + C14119;
    const double C18461 = C18458 + C15136;
    const double C24986 = C24983 + C24972;
    const double C26896 = C26893 + C25447;
    const double C24987 = C24984 + C24975;
    const double C26897 = C26894 + C25446;
    const double C5292 = C5289 + C5278;
    const double C7277 = C7274 + C7263;
    const double C5293 = C5290 + C5280;
    const double C7278 = C7275 + C7265;
    const double C10280 = C10277 + C10266;
    const double C19729 = C19726 + C19715;
    const double C10281 = C10278 + C10268;
    const double C19730 = C19727 + C19717;
    const double C14424 = C14420 + C14409;
    const double C14422 = C14418 + C14405;
    const double C16038 = C16036 + C16031;
    const double C16666 = C16664 + C16655;
    const double C25508 = C25506 + C25499;
    const double C14133 = C14130 + C14117;
    const double C18463 = C18460 + C18449;
    const double C14134 = C14131 + C14120;
    const double C18464 = C18461 + C18451;
    const double C24989 = C24986 + C24973;
    const double C26899 = C26896 + C26885;
    const double C24990 = C24987 + C24976;
    const double C26900 = C26897 + C26887;
    d2eexx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4714 * C91 + C4721 + C4721 + C28737 * C101 + C4716 * C92 +
                     C4722 + C4722 + C28738 * C102 + C4718 * C93 + C4723 +
                     C4723 + C4711 * C103) *
                        C28569 * C28714 +
                    (C4714 * C589 + C4724 + C4724 + C28737 * C597 +
                     C4716 * C588 + C4725 + C4725 + C28738 * C596 +
                     C4718 * C587 + C4726 + C4726 + C4711 * C595) *
                        C28569 * C28607) *
                       C28749 * C28750 * C81 -
                   ((C4718 * C586 + C4727 + C4727 + C4711 * C594 +
                     C4716 * C587 + C4728 + C4728 + C28738 * C595 +
                     C4714 * C588 + C4729 + C4729 + C28737 * C596) *
                        C28569 * C28607 +
                    (C4718 * C94 + C4730 + C4730 + C4711 * C104 + C4716 * C93 +
                     C4731 + C4731 + C28738 * C103 + C4714 * C92 + C4732 +
                     C4732 + C28737 * C102) *
                        C28569 * C28714) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C4715 +
           (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
               C28737 +
           (C4801 + C4802) * C4717 + (C4803 + C4804) * C28738 +
           (C4805 + C4806) * C4719 + (C4807 + C4808) * C4711) *
              C28569 * C28749 * C28750 * C81 -
          ((C4783 * C590 + C28607 * C640 + C4782 * C99 + C28714 * C157) *
               C4711 +
           (C4783 * C586 + C28607 * C636 + C4782 * C94 + C28714 * C152) *
               C4719 +
           (C4808 + C4807) * C28738 + (C4806 + C4805) * C4717 +
           (C4804 + C4803) * C28737 + (C4802 + C4801) * C4715) *
              C28569 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28569 * C212) * C4715 +
                     (C211 * C96 + C28569 * C217) * C28737 + C235 * C4717 +
                     C236 * C28738 + C237 * C4719 + C238 * C4711) *
                        C28714 +
                    (C2100 * C4715 + C2101 * C28737 + C1516 * C4717 +
                     C1517 * C28738 + C4863 * C4719 + C4864 * C4711) *
                        C28607) *
                       C28749 * C28750 * C81 -
                   (((C211 * C590 + C28569 * C682) * C4711 +
                     (C211 * C586 + C28569 * C678) * C4719 + C4864 * C28738 +
                     C4863 * C4717 + C1517 * C28737 + C1516 * C4715) *
                        C28607 +
                    (C240 * C4711 + C239 * C4719 + C238 * C28738 +
                     C237 * C4717 + C236 * C28737 + C235 * C4715) *
                        C28714) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
                     C4719 * C93 + C4711 * C98) *
                        C4782 +
                    (C4715 * C149 + C28737 * C274 + C4717 * C150 +
                     C28738 * C275 + C4719 * C151 + C4711 * C276) *
                        C28714 +
                    (C4715 * C589 + C28737 * C593 + C4717 * C588 +
                     C28738 * C592 + C4719 * C587 + C4711 * C591) *
                        C4783 +
                    (C4715 * C639 + C28737 * C723 + C4717 * C638 +
                     C28738 * C722 + C4719 * C637 + C4711 * C721) *
                        C28607) *
                       C28569 * C28749 * C28750 * C81 -
                   ((C4719 * C636 + C4711 * C720 + C4717 * C637 +
                     C28738 * C721 + C4715 * C638 + C28737 * C722) *
                        C28607 +
                    (C4719 * C586 + C4711 * C590 + C4717 * C587 +
                     C28738 * C591 + C4715 * C588 + C28737 * C592) *
                        C4783 +
                    (C4719 * C152 + C4711 * C277 + C4717 * C151 +
                     C28738 * C276 + C4715 * C150 + C28737 * C275) *
                        C28714 +
                    (C4719 * C94 + C4711 * C99 + C4717 * C93 + C28738 * C98 +
                     C4715 * C92 + C28737 * C97) *
                        C4782) *
                       C28569 * C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                     C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                        C28737 +
                    (C4991 + C4992) * C28738 + (C4993 + C4994) * C4711) *
                       C28569 * C28749 * C28750 * C81 -
                   ((C4965 * C586 + C4981 + C4981 + C28607 * C758 +
                     C4964 * C94 + C4982 + C4982 + C28714 * C317) *
                        C4711 +
                    (C4994 + C4993) * C28738 + (C4992 + C4991) * C28737) *
                       C28569 * C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28569 * C212) * C4782 +
                     (C211 * C149 + C28569 * C373) * C28714 + C2100 * C4783 +
                     C2298 * C28607) *
                        C28737 +
                    (C5045 + C5046 + C5047 + C5048) * C28738 +
                    (C5049 + C5050 + C5051 + C5055) * C4711) *
                       C28749 * C28750 * C81 -
                   (((C211 * C636 + C28569 * C800) * C28607 +
                     (C211 * C586 + C28569 * C678) * C4783 + C390 * C28714 +
                     C239 * C4782) *
                        C4711 +
                    (C5055 + C5051 + C5050 + C5049) * C28738 +
                    (C5048 + C5047 + C5046 + C5045) * C28737) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezx[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
                      C4719 * C93 + C4711 * C98) *
                         C211 +
                     (C4715 * C212 + C28737 * C427 + C4717 * C213 +
                      C28738 * C428 + C4719 * C214 + C4711 * C429) *
                         C28569) *
                        C28714 +
                    ((C4715 * C589 + C28737 * C593 + C4717 * C588 +
                      C28738 * C592 + C4719 * C587 + C4711 * C591) *
                         C211 +
                     (C4715 * C681 + C28737 * C841 + C4717 * C680 +
                      C28738 * C840 + C4719 * C679 + C4711 * C839) *
                         C28569) *
                        C28607) *
                       C28749 * C28750 * C81 -
                   (((C4719 * C678 + C4711 * C838 + C4717 * C679 +
                      C28738 * C839 + C4715 * C680 + C28737 * C840) *
                         C28569 +
                     (C4719 * C586 + C4711 * C590 + C4717 * C587 +
                      C28738 * C591 + C4715 * C588 + C28737 * C592) *
                         C211) *
                        C28607 +
                    ((C4719 * C215 + C4711 * C430 + C4717 * C214 +
                      C28738 * C429 + C4715 * C213 + C28737 * C428) *
                         C28569 +
                     (C4719 * C94 + C4711 * C99 + C4717 * C93 + C28738 * C98 +
                      C4715 * C92 + C28737 * C97) *
                         C211) *
                        C28714) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[0] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C211 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28569) *
               C28737 +
           ((C4801 + C4802) * C211 + (C5164 + C5165) * C28569) * C28738 +
           ((C4805 + C4806) * C211 + (C5166 + C5167) * C28569) * C4711) *
              C28749 * C28750 * C81 -
          (((C4783 * C678 + C28607 * C876 + C4782 * C215 + C28714 * C469) *
                C28569 +
            (C4783 * C586 + C28607 * C636 + C4782 * C94 + C28714 * C152) *
                C211) *
               C4711 +
           ((C5167 + C5166) * C28569 + (C4806 + C4805) * C211) * C28738 +
           ((C5165 + C5164) * C28569 + (C4802 + C4801) * C211) * C28737) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[0] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28714 +
                     C2478 * C28607) *
                        C28737 +
                    (C5218 + C5219) * C28738 + (C5220 + C5226) * C4711) *
                       C28749 * C28750 * C81 -
                   (((C520 * C586 + C919 + C919 + C28569 * C914) * C28607 +
                     C546 * C28714) *
                        C4711 +
                    (C5226 + C5220) * C28738 + (C5219 + C5218) * C28737) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4714 * C91 + C4721 + C4721 + C28737 * C101 + C4716 * C92 +
                     C4722 + C4722 + C28738 * C102 + C4718 * C93 + C4723 +
                     C4723 + C4711 * C103) *
                        C28569 * C28714 +
                    (C5292 + C5293 + C5294) * C28569 * C28607) *
                       C28749 * C583 -
                   ((C4718 * C1355 + C5283 + C5283 + C4711 * C1361 +
                     C4716 * C1354 + C5284 + C5284 + C28738 * C1360 +
                     C4714 * C1353 + C5285 + C5285 + C28737 * C1359) *
                        C28569 * C28607 +
                    (C5294 + C5293 + C5292) * C28569 * C28714) *
                       C28749 * C584) *
                  C28751) /
                 (p * q * std::sqrt(p + q));
    d2eexy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C4715 +
           (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
               C28737 +
           (C4801 + C4802) * C4717 + (C4803 + C4804) * C28738 +
           (C4805 + C4806) * C4719 + (C4807 + C4808) * C4711) *
              C28569 * C28749 * C583 -
          ((C4783 * C1358 + C28607 * C1432 + C4782 * C591 + C28714 * C641) *
               C4711 +
           (C4783 * C1355 + C28607 * C1429 + C4782 * C587 + C28714 * C637) *
               C4719 +
           (C4783 * C1357 + C28607 * C1431 + C4782 * C592 + C28714 * C642) *
               C28738 +
           (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
               C4717 +
           (C4783 * C1356 + C28607 * C1430 + C4782 * C593 + C28714 * C643) *
               C28737 +
           (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
               C4715) *
              C28569 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28569 * C212) * C4715 +
                     (C211 * C96 + C28569 * C217) * C28737 + C235 * C4717 +
                     C236 * C28738 + C237 * C4719 + C238 * C4711) *
                        C28714 +
                    (C5395 + C5396 + C5397 + C5398 + C5399 + C5400) * C28607) *
                       C28749 * C583 -
                   (((C211 * C1358 + C28569 * C1506) * C4711 +
                     (C211 * C1355 + C28569 * C1503) * C4719 + C1519 * C28738 +
                     C1518 * C4717 + C2103 * C28737 + C2102 * C4715) *
                        C28607 +
                    (C5400 + C5399 + C5398 + C5397 + C5396 + C5395) * C28714) *
                       C28749 * C584) *
                  C28751) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
            C4719 * C93 + C4711 * C98) *
               C4782 +
           (C4715 * C149 + C28737 * C274 + C4717 * C150 + C28738 * C275 +
            C4719 * C151 + C4711 * C276) *
               C28714 +
           (C5463 + C5464 + C5465) * C4783 + (C5466 + C5467 + C5468) * C28607) *
              C28569 * C28749 * C583 -
          ((C4719 * C1429 + C4711 * C1571 + C4717 * C1428 + C28738 * C1570 +
            C4715 * C1427 + C28737 * C1569) *
               C28607 +
           (C4719 * C1355 + C4711 * C1358 + C4717 * C1354 + C28738 * C1357 +
            C4715 * C1353 + C28737 * C1356) *
               C4783 +
           (C5468 + C5467 + C5466) * C28714 + (C5465 + C5464 + C5463) * C4782) *
              C28569 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                     C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                        C28737 +
                    (C4991 + C4992) * C28738 + (C4993 + C4994) * C4711) *
                       C28569 * C28749 * C583 -
                   ((C4965 * C1355 + C5519 + C5519 + C28607 * C1627 +
                     C4964 * C587 + C5520 + C5520 + C28714 * C759) *
                        C4711 +
                    (C4965 * C1354 + C5521 + C5521 + C28607 * C1626 +
                     C4964 * C588 + C5522 + C5522 + C28714 * C760) *
                        C28738 +
                    (C4965 * C1353 + C5523 + C5523 + C28607 * C1625 +
                     C4964 * C589 + C5524 + C5524 + C28714 * C761) *
                        C28737) *
                       C28569 * C28749 * C584) *
                  C28751) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C4782 +
            (C211 * C149 + C28569 * C373) * C28714 + C2100 * C4783 +
            C2298 * C28607) *
               C28737 +
           (C5045 + C5046 + C5047 + C5048) * C28738 +
           (C5049 + C5050 + C5051 + C5055) * C4711) *
              C28749 * C583 -
          (((C211 * C1429 + C28569 * C1704) * C28607 +
            (C211 * C1355 + C28569 * C1503) * C4783 + C5054 * C28714 +
            C4863 * C4782) *
               C4711 +
           (C1715 * C28607 + C1518 * C4783 + C1714 * C28714 + C1516 * C4782) *
               C28738 +
           (C2299 * C28607 + C2102 * C4783 + C2298 * C28714 + C2100 * C4782) *
               C28737) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
             C4719 * C93 + C4711 * C98) *
                C211 +
            (C4715 * C212 + C28737 * C427 + C4717 * C213 + C28738 * C428 +
             C4719 * C214 + C4711 * C429) *
                C28569) *
               C28714 +
           ((C5463 + C5464 + C5465) * C211 + (C5631 + C5632 + C5633) * C28569) *
               C28607) *
              C28749 * C583 -
          (((C4719 * C1503 + C4711 * C1769 + C4717 * C1502 + C28738 * C1768 +
             C4715 * C1501 + C28737 * C1767) *
                C28569 +
            (C4719 * C1355 + C4711 * C1358 + C4717 * C1354 + C28738 * C1357 +
             C4715 * C1353 + C28737 * C1356) *
                C211) *
               C28607 +
           ((C5633 + C5632 + C5631) * C28569 + (C5465 + C5464 + C5463) * C211) *
               C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[1] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C211 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28569) *
               C28737 +
           ((C4801 + C4802) * C211 + (C5164 + C5165) * C28569) * C28738 +
           ((C4805 + C4806) * C211 + (C5166 + C5167) * C28569) * C4711) *
              C28749 * C583 -
          (((C4783 * C1503 + C28607 * C1822 + C4782 * C679 + C28714 * C877) *
                C28569 +
            (C4783 * C1355 + C28607 * C1429 + C4782 * C587 + C28714 * C637) *
                C211) *
               C4711 +
           ((C4783 * C1502 + C28607 * C1821 + C4782 * C680 + C28714 * C878) *
                C28569 +
            (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
                C211) *
               C28738 +
           ((C4783 * C1501 + C28607 * C1820 + C4782 * C681 + C28714 * C879) *
                C28569 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C211) *
               C28737) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[1] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28714 +
                     C2478 * C28607) *
                        C28737 +
                    (C5218 + C5219) * C28738 + (C5220 + C5226) * C4711) *
                       C28749 * C583 -
                   (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C28607 +
                     C5225 * C28714) *
                        C4711 +
                    (C1899 * C28607 + C1898 * C28714) * C28738 +
                    (C2479 * C28607 + C2478 * C28714) * C28737) *
                       C28749 * C584) *
                  C28751) /
                 (p * q * std::sqrt(p + q));
    d2eexx[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4714 * C91 + C4721 + C4721 + C28737 * C101 + C4716 * C92 +
                     C4722 + C4722 + C28738 * C102 + C4718 * C93 + C4723 +
                     C4723 + C4711 * C103) *
                        C28569 * C28714 +
                    (C5292 + C5293 + C5294) * C28569 * C28607) *
                       C956 -
                   ((C4718 * C5783 + C5787 + C5787 + C4711 * C5785 +
                     C4716 * C2531 + C5788 + C5788 + C28738 * C2539 +
                     C4714 * C2532 + C5789 + C5789 + C28737 * C2540) *
                        C28569 * C28607 +
                    (C4718 * C959 + C5790 + C5790 + C4711 * C967 +
                     C4716 * C960 + C5791 + C5791 + C28738 * C968 +
                     C4714 * C961 + C5792 + C5792 + C28737 * C969) *
                        C28569 * C28714) *
                       C957) *
                  C28750 * C28751) /
                 (p * q * std::sqrt(p + q));
    d2eexy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C4715 +
           (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
               C28737 +
           (C4801 + C4802) * C4717 + (C4803 + C4804) * C28738 +
           (C4805 + C4806) * C4719 + (C4807 + C4808) * C4711) *
              C28569 * C956 -
          ((C4783 * C5784 + C28607 * C5843 + C4782 * C963 + C28714 * C1013) *
               C4711 +
           (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
               C4719 +
           (C4783 * C2535 + C28607 * C2602 + C4782 * C964 + C28714 * C1014) *
               C28738 +
           (C4783 * C2531 + C28607 * C2598 + C4782 * C960 + C28714 * C1010) *
               C4717 +
           (C4783 * C2536 + C28607 * C2604 + C4782 * C965 + C28714 * C1015) *
               C28737 +
           (C4783 * C2532 + C28607 * C2600 + C4782 * C961 + C28714 * C1011) *
               C4715) *
              C28569 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28569 * C212) * C4715 +
                     (C211 * C96 + C28569 * C217) * C28737 + C235 * C4717 +
                     C236 * C28738 + C237 * C4719 + C238 * C4711) *
                        C28714 +
                    (C5395 + C5396 + C5397 + C5398 + C5399 + C5400) * C28607) *
                       C956 -
                   (((C211 * C5784 + C28569 * C5895) * C4711 +
                     (C211 * C5783 + C28569 * C5894) * C4719 +
                     (C211 * C2535 + C28569 * C2661) * C28738 +
                     (C211 * C2531 + C28569 * C2657) * C4717 +
                     (C211 * C2536 + C28569 * C2662) * C28737 +
                     (C211 * C2532 + C28569 * C2658) * C4715) *
                        C28607 +
                    ((C211 * C963 + C28569 * C1055) * C4711 +
                     (C211 * C959 + C28569 * C1051) * C4719 +
                     (C211 * C964 + C28569 * C1056) * C28738 +
                     (C211 * C960 + C28569 * C1052) * C4717 +
                     (C211 * C965 + C28569 * C1057) * C28737 +
                     (C211 * C961 + C28569 * C1053) * C4715) *
                        C28714) *
                       C957) *
                  C28750 * C28751) /
                 (p * q * std::sqrt(p + q));
    d2eeyx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
            C4719 * C93 + C4711 * C98) *
               C4782 +
           (C4715 * C149 + C28737 * C274 + C4717 * C150 + C28738 * C275 +
            C4719 * C151 + C4711 * C276) *
               C28714 +
           (C5463 + C5464 + C5465) * C4783 + (C5466 + C5467 + C5468) * C28607) *
              C28569 * C956 -
          ((C4719 * C5842 + C4711 * C5946 + C4717 * C2598 + C28738 * C2715 +
            C4715 * C2600 + C28737 * C2716) *
               C28607 +
           (C4719 * C5783 + C4711 * C5784 + C4717 * C2531 + C28738 * C2535 +
            C4715 * C2532 + C28737 * C2536) *
               C4783 +
           (C4719 * C1009 + C4711 * C1093 + C4717 * C1010 + C28738 * C1094 +
            C4715 * C1011 + C28737 * C1095) *
               C28714 +
           (C4719 * C959 + C4711 * C963 + C4717 * C960 + C28738 * C964 +
            C4715 * C961 + C28737 * C965) *
               C4782) *
              C28569 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                     C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                        C28737 +
                    (C4991 + C4992) * C28738 + (C4993 + C4994) * C4711) *
                       C28569 * C956 -
                   ((C4965 * C5783 + C5999 + C5999 + C28607 * C5997 +
                     C4964 * C959 + C6000 + C6000 + C28714 * C1131) *
                        C4711 +
                    (C4965 * C2531 + C6001 + C6001 + C28607 * C2768 +
                     C4964 * C960 + C6002 + C6002 + C28714 * C1132) *
                        C28738 +
                    (C4965 * C2532 + C6003 + C6003 + C28607 * C2770 +
                     C4964 * C961 + C6004 + C6004 + C28714 * C1133) *
                        C28737) *
                       C28569 * C957) *
                  C28750 * C28751) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C211 * C91 + C28569 * C212) * C4782 +
                     (C211 * C149 + C28569 * C373) * C28714 + C2100 * C4783 +
                     C2298 * C28607) *
                        C28737 +
                    (C5045 + C5046 + C5047 + C5048) * C28738 +
                    (C5049 + C5050 + C5051 + C5055) * C4711) *
                       C956 -
                   (((C211 * C5842 + C28569 * C6054) * C28607 +
                     (C211 * C5783 + C28569 * C5894) * C4783 +
                     (C211 * C1009 + C28569 * C1173) * C28714 +
                     (C211 * C959 + C28569 * C1051) * C4782) *
                        C4711 +
                    ((C211 * C2598 + C28569 * C2828) * C28607 +
                     (C211 * C2531 + C28569 * C2657) * C4783 +
                     (C211 * C1010 + C28569 * C1174) * C28714 +
                     (C211 * C960 + C28569 * C1052) * C4782) *
                        C28738 +
                    ((C211 * C2600 + C28569 * C2830) * C28607 +
                     (C211 * C2532 + C28569 * C2658) * C4783 +
                     (C211 * C1011 + C28569 * C1175) * C28714 +
                     (C211 * C961 + C28569 * C1053) * C4782) *
                        C28737) *
                       C957) *
                  C28750 * C28751) /
                 (p * q * std::sqrt(p + q));
    d2eezx[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
             C4719 * C93 + C4711 * C98) *
                C211 +
            (C4715 * C212 + C28737 * C427 + C4717 * C213 + C28738 * C428 +
             C4719 * C214 + C4711 * C429) *
                C28569) *
               C28714 +
           ((C5463 + C5464 + C5465) * C211 + (C5631 + C5632 + C5633) * C28569) *
               C28607) *
              C956 -
          (((C4719 * C5894 + C4711 * C6105 + C4717 * C2657 + C28738 * C2883 +
             C4715 * C2658 + C28737 * C2884) *
                C28569 +
            (C4719 * C5783 + C4711 * C5784 + C4717 * C2531 + C28738 * C2535 +
             C4715 * C2532 + C28737 * C2536) *
                C211) *
               C28607 +
           ((C4719 * C1051 + C4711 * C1211 + C4717 * C1052 + C28738 * C1212 +
             C4715 * C1053 + C28737 * C1213) *
                C28569 +
            (C4719 * C959 + C4711 * C963 + C4717 * C960 + C28738 * C964 +
             C4715 * C961 + C28737 * C965) *
                C211) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[2] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C211 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28569) *
               C28737 +
           ((C4801 + C4802) * C211 + (C5164 + C5165) * C28569) * C28738 +
           ((C4805 + C4806) * C211 + (C5166 + C5167) * C28569) * C4711) *
              C956 -
          (((C4783 * C5894 + C28607 * C6156 + C4782 * C1051 + C28714 * C1249) *
                C28569 +
            (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
                C211) *
               C4711 +
           ((C4783 * C2657 + C28607 * C2936 + C4782 * C1052 + C28714 * C1250) *
                C28569 +
            (C4783 * C2531 + C28607 * C2598 + C4782 * C960 + C28714 * C1010) *
                C211) *
               C28738 +
           ((C4783 * C2658 + C28607 * C2938 + C4782 * C1053 + C28714 * C1251) *
                C28569 +
            (C4783 * C2532 + C28607 * C2600 + C4782 * C961 + C28714 * C1011) *
                C211) *
               C28737) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[2] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28714 +
                     C2478 * C28607) *
                        C28737 +
                    (C5218 + C5219) * C28738 + (C5220 + C5226) * C4711) *
                       C956 -
                   (((C520 * C5783 + C6209 + C6209 + C28569 * C6207) * C28607 +
                     (C520 * C959 + C1292 + C1292 + C28569 * C1287) * C28714) *
                        C4711 +
                    ((C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C28607 +
                     (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C28714) *
                        C28738 +
                    ((C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C28607 +
                     (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C28714) *
                        C28737) *
                       C957) *
                  C28750 * C28751) /
                 (p * q * std::sqrt(p + q));
    d2eexx[3] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                      C1364 + C1364 + C28517 * C102) *
                         C28715 +
                     (C4152 + C4153) * C28633) *
                        C28714 +
                    ((C1976 + C1977) * C28715 +
                     (C1349 * C2532 + C2545 + C2545 + C1344 * C2540 +
                      C1351 * C2531 + C2544 + C2544 + C28517 * C2539) *
                         C28633) *
                        C28607) *
                       C28749 * C28750 * C81 -
                   (((C1351 * C5783 + C7788 + C7788 + C28517 * C5785 +
                      C1349 * C2531 + C7789 + C7789 + C1344 * C2539) *
                         C28633 +
                     (C1351 * C587 + C1371 + C1371 + C28517 * C595 +
                      C1349 * C588 + C1372 + C1372 + C1344 * C596) *
                         C28715) *
                        C28607 +
                    ((C1351 * C959 + C3064 + C3064 + C28517 * C967 +
                      C1349 * C960 + C3065 + C3065 + C1344 * C968) *
                         C28633 +
                     (C1351 * C93 + C1373 + C1373 + C28517 * C103 +
                      C1349 * C92 + C1374 + C1374 + C1344 * C102) *
                         C28715) *
                        C28714) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C1350 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C1344 +
            (C4801 + C4802) * C1352 + (C4803 + C4804) * C28517) *
               C28715 +
           ((C4782 * C961 + C28714 * C1011 + C4783 * C2532 + C28607 * C2600) *
                C1350 +
            (C4782 * C965 + C28714 * C1015 + C4783 * C2536 + C28607 * C2604) *
                C1344 +
            (C7864 + C7865) * C1352 + (C7866 + C7867) * C28517) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C4783 * C5784 + C28607 * C5843 + C4782 * C963 + C28714 * C1013) *
                C28517 +
            (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
                C1352 +
            (C7867 + C7866) * C1344 + (C7865 + C7864) * C1350) *
               C28633 +
           ((C4808 + C4807) * C28517 + (C4806 + C4805) * C1352 +
            (C4804 + C4803) * C1344 + (C4802 + C4801) * C1350) *
               C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C1350 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C1344 +
            (C6389 + C6390) * C1352 + (C6391 + C6392) * C28517) *
               C28714 +
           ((C6370 * C589 + C28715 * C681 + C6371 * C2532 + C28633 * C2658) *
                C1350 +
            (C6370 * C593 + C28715 * C685 + C6371 * C2536 + C28633 * C2662) *
                C1344 +
            (C7942 + C7943) * C1352 + (C7944 + C7945) * C28517) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C6371 * C5784 + C28633 * C5895 + C6370 * C591 + C28715 * C683) *
                C28517 +
            (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
                C1352 +
            (C7945 + C7944) * C1344 + (C7943 + C7942) * C1350) *
               C28607 +
           ((C6396 + C6395) * C28517 + (C6394 + C6393) * C1352 +
            (C6392 + C6391) * C1344 + (C6390 + C6389) * C1350) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C4782 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28714 +
            (C2176 + C2177) * C4783 + (C2178 + C2179) * C28607) *
               C28715 +
           ((C4352 + C4353) * C4782 + (C4354 + C4355) * C28714 +
            (C1350 * C2532 + C1344 * C2536 + C1352 * C2531 + C28517 * C2535) *
                C4783 +
            (C1350 * C2600 + C1344 * C2716 + C1352 * C2598 + C28517 * C2715) *
                C28607) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C1352 * C5842 + C28517 * C5946 + C1350 * C2598 + C1344 * C2715) *
                C28607 +
            (C1352 * C5783 + C28517 * C5784 + C1350 * C2531 + C1344 * C2535) *
                C4783 +
            (C1352 * C1009 + C28517 * C1093 + C1350 * C1010 + C1344 * C1094) *
                C28714 +
            (C1352 * C959 + C28517 * C963 + C1350 * C960 + C1344 * C964) *
                C4782) *
               C28633 +
           ((C1352 * C637 + C28517 * C721 + C1350 * C638 + C1344 * C722) *
                C28607 +
            (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
                C4783 +
            (C1352 * C151 + C28517 * C276 + C1350 * C150 + C1344 * C275) *
                C28714 +
            (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C4782) *
               C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 + C4965 * C589 +
             C4968 + C4968 + C28607 * C761) *
                C1344 +
            (C4991 + C4992) * C28517) *
               C28715 +
           ((C4964 * C961 + C6004 + C6004 + C28714 * C1133 + C4965 * C2532 +
             C6003 + C6003 + C28607 * C2770) *
                C1344 +
            (C8086 + C8087) * C28517) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C4965 * C5783 + C5999 + C5999 + C28607 * C5997 + C4964 * C959 +
             C6000 + C6000 + C28714 * C1131) *
                C28517 +
            (C8087 + C8086) * C1344) *
               C28633 +
           ((C4994 + C4993) * C28517 + (C4992 + C4991) * C1344) * C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C4782 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28714 +
            (C6370 * C589 + C28715 * C681 + C6371 * C2532 + C28633 * C2658) *
                C4783 +
            (C6370 * C639 + C28715 * C803 + C6371 * C2600 + C28633 * C2830) *
                C28607) *
               C1344 +
           ((C6389 + C6390) * C4782 + (C6560 + C6561) * C28714 +
            (C7942 + C7943) * C4783 + (C8158 + C8159) * C28607) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C6371 * C5842 + C28633 * C6054 + C6370 * C637 + C28715 * C801) *
                C28607 +
            (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
                C4783 +
            (C6563 + C6562) * C28714 + (C6394 + C6393) * C4782) *
               C28517 +
           ((C8159 + C8158) * C28607 + (C7943 + C7942) * C4783 +
            (C6561 + C6560) * C28714 + (C6390 + C6389) * C4782) *
               C1344) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C6370 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28715 +
            (C4352 + C4353) * C6371 + (C4540 + C4541) * C28633) *
               C28714 +
           ((C2176 + C2177) * C6370 + (C2360 + C2361) * C28715 +
            (C1350 * C2532 + C1344 * C2536 + C1352 * C2531 + C28517 * C2535) *
                C6371 +
            (C1350 * C2658 + C1344 * C2884 + C1352 * C2657 + C28517 * C2883) *
                C28633) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C1352 * C5894 + C28517 * C6105 + C1350 * C2657 + C1344 * C2883) *
                C28633 +
            (C1352 * C5783 + C28517 * C5784 + C1350 * C2531 + C1344 * C2535) *
                C6371 +
            (C1352 * C679 + C28517 * C839 + C1350 * C680 + C1344 * C840) *
                C28715 +
            (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
                C6370) *
               C28607 +
           ((C1352 * C1051 + C28517 * C1211 + C1350 * C1052 + C1344 * C1212) *
                C28633 +
            (C1352 * C959 + C28517 * C963 + C1350 * C960 + C1344 * C964) *
                C6371 +
            (C1352 * C214 + C28517 * C429 + C1350 * C213 + C1344 * C428) *
                C28715 +
            (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C6370) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C6370 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28715 +
            (C4782 * C961 + C28714 * C1011 + C4783 * C2532 + C28607 * C2600) *
                C6371 +
            (C4782 * C1053 + C28714 * C1251 + C4783 * C2658 + C28607 * C2938) *
                C28633) *
               C1344 +
           ((C4801 + C4802) * C6370 + (C5164 + C5165) * C28715 +
            (C7864 + C7865) * C6371 + (C8296 + C8297) * C28633) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C4783 * C5894 + C28607 * C6156 + C4782 * C1051 + C28714 * C1249) *
                C28633 +
            (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
                C6371 +
            (C5167 + C5166) * C28715 + (C4806 + C4805) * C6370) *
               C28517 +
           ((C8297 + C8296) * C28633 + (C7865 + C7864) * C6371 +
            (C5165 + C5164) * C28715 + (C4802 + C4801) * C6370) *
               C1344) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[3] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C28714 +
            (C6724 * C589 + C7211 + C7211 + C28715 * C917 + C6725 * C2532 +
             C7210 + C7210 + C28633 * C2992) *
                C28607) *
               C1344 +
           ((C6751 + C6752) * C28714 + (C8372 + C8373) * C28607) * C28517) *
              C28749 * C28750 * C81 -
          (((C6725 * C5783 + C7206 + C7206 + C28633 * C6207 + C6724 * C587 +
             C7207 + C7207 + C28715 * C915) *
                C28607 +
            (C6754 + C6753) * C28714) *
               C28517 +
           ((C8373 + C8372) * C28607 + (C6752 + C6751) * C28714) * C1344) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 + C1364 +
             C1364 + C28517 * C102) *
                C28715 +
            (C4152 + C4153) * C28633) *
               C28714 +
           ((C1976 + C1977) * C28715 + (C8448 + C8449) * C28633) * C28607) *
              C28749 * C583 -
          (((C1351 * C2529 + C2542 + C2542 + C28517 * C2537 + C1349 * C2530 +
             C2543 + C2543 + C1344 * C2538) *
                C28633 +
            (C1979 + C1978) * C28715) *
               C28607 +
           ((C8449 + C8448) * C28633 + (C1977 + C1976) * C28715) * C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C1350 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C1344 +
            (C4801 + C4802) * C1352 + (C4803 + C4804) * C28517) *
               C28715 +
           ((C4782 * C961 + C28714 * C1011 + C4783 * C2532 + C28607 * C2600) *
                C1350 +
            (C4782 * C965 + C28714 * C1015 + C4783 * C2536 + C28607 * C2604) *
                C1344 +
            (C7864 + C7865) * C1352 + (C7866 + C7867) * C28517) *
               C28633) *
              C28749 * C583 -
          (((C4783 * C2533 + C28607 * C2601 + C4782 * C2535 + C28714 * C2602) *
                C28517 +
            (C4783 * C2529 + C28607 * C2597 + C4782 * C2531 + C28714 * C2598) *
                C1352 +
            (C4783 * C2534 + C28607 * C2603 + C4782 * C2536 + C28714 * C2604) *
                C1344 +
            (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
                C1350) *
               C28633 +
           ((C4783 * C1357 + C28607 * C1431 + C4782 * C592 + C28714 * C642) *
                C28517 +
            (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
                C1352 +
            (C4783 * C1356 + C28607 * C1430 + C4782 * C593 + C28714 * C643) *
                C1344 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C1350) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C1350 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C1344 +
            (C6389 + C6390) * C1352 + (C6391 + C6392) * C28517) *
               C28714 +
           ((C8590 + C8591) * C1350 + (C8592 + C8593) * C1344 +
            (C7942 + C7943) * C1352 + (C7944 + C7945) * C28517) *
               C28607) *
              C28749 * C583 -
          (((C6371 * C2533 + C28633 * C2659 + C6370 * C1357 + C28715 * C1505) *
                C28517 +
            (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
                C1352 +
            (C6371 * C2534 + C28633 * C2660 + C6370 * C1356 + C28715 * C1504) *
                C1344 +
            (C6371 * C2530 + C28633 * C2656 + C6370 * C1353 + C28715 * C1501) *
                C1350) *
               C28607 +
           ((C7945 + C7944) * C28517 + (C7943 + C7942) * C1352 +
            (C8593 + C8592) * C1344 + (C8591 + C8590) * C1350) *
               C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C4782 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28714 +
            (C2176 + C2177) * C4783 + (C2178 + C2179) * C28607) *
               C28715 +
           ((C4352 + C4353) * C4782 + (C4354 + C4355) * C28714 +
            (C8668 + C8669) * C4783 + (C8670 + C8671) * C28607) *
               C28633) *
              C28749 * C583 -
          (((C1352 * C2597 + C28517 * C2713 + C1350 * C2599 + C1344 * C2714) *
                C28607 +
            (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
                C4783 +
            (C8671 + C8670) * C28714 + (C8669 + C8668) * C4782) *
               C28633 +
           ((C2183 + C2182) * C28607 + (C2181 + C2180) * C4783 +
            (C2179 + C2178) * C28714 + (C2177 + C2176) * C4782) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[4] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                      C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                         C1344 +
                     (C4991 + C4992) * C28517) *
                        C28715 +
                    ((C4964 * C961 + C6004 + C6004 + C28714 * C1133 +
                      C4965 * C2532 + C6003 + C6003 + C28607 * C2770) *
                         C1344 +
                     (C8086 + C8087) * C28517) *
                        C28633) *
                       C28749 * C583 -
                   (((C4965 * C2529 + C8738 + C8738 + C28607 * C2767 +
                      C4964 * C2531 + C8739 + C8739 + C28714 * C2768) *
                         C28517 +
                     (C4965 * C2530 + C8740 + C8740 + C28607 * C2769 +
                      C4964 * C2532 + C8741 + C8741 + C28714 * C2770) *
                         C1344) *
                        C28633 +
                    ((C4965 * C1354 + C5521 + C5521 + C28607 * C1626 +
                      C4964 * C588 + C5522 + C5522 + C28714 * C760) *
                         C28517 +
                     (C4965 * C1353 + C5523 + C5523 + C28607 * C1625 +
                      C4964 * C589 + C5524 + C5524 + C28714 * C761) *
                         C1344) *
                        C28715) *
                       C28749 * C584) *
                  C28751) /
                 (p * q * std::sqrt(p + q));
    d2eeyz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C4782 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28714 +
            (C8590 + C8591) * C4783 + (C8812 + C8813) * C28607) *
               C1344 +
           ((C6389 + C6390) * C4782 + (C6560 + C6561) * C28714 +
            (C7942 + C7943) * C4783 + (C8158 + C8159) * C28607) *
               C28517) *
              C28749 * C583 -
          (((C6371 * C2597 + C28633 * C2827 + C6370 * C1428 + C28715 * C1703) *
                C28607 +
            (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
                C4783 +
            (C8159 + C8158) * C28714 + (C7943 + C7942) * C4782) *
               C28517 +
           ((C6371 * C2599 + C28633 * C2829 + C6370 * C1427 + C28715 * C1702) *
                C28607 +
            (C6371 * C2530 + C28633 * C2656 + C6370 * C1353 + C28715 * C1501) *
                C4783 +
            (C8813 + C8812) * C28714 + (C8591 + C8590) * C4782) *
               C1344) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C6370 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28715 +
            (C4352 + C4353) * C6371 + (C4540 + C4541) * C28633) *
               C28714 +
           ((C2176 + C2177) * C6370 + (C2360 + C2361) * C28715 +
            (C8668 + C8669) * C6371 + (C8884 + C8885) * C28633) *
               C28607) *
              C28749 * C583 -
          (((C1352 * C2655 + C28517 * C2881 + C1350 * C2656 + C1344 * C2882) *
                C28633 +
            (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
                C6371 +
            (C2363 + C2362) * C28715 + (C2181 + C2180) * C6370) *
               C28607 +
           ((C8885 + C8884) * C28633 + (C8669 + C8668) * C6371 +
            (C2361 + C2360) * C28715 + (C2177 + C2176) * C6370) *
               C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C6370 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28715 +
            (C4782 * C961 + C28714 * C1011 + C4783 * C2532 + C28607 * C2600) *
                C6371 +
            (C4782 * C1053 + C28714 * C1251 + C4783 * C2658 + C28607 * C2938) *
                C28633) *
               C1344 +
           ((C4801 + C4802) * C6370 + (C5164 + C5165) * C28715 +
            (C7864 + C7865) * C6371 + (C8296 + C8297) * C28633) *
               C28517) *
              C28749 * C583 -
          (((C4783 * C2655 + C28607 * C2935 + C4782 * C2657 + C28714 * C2936) *
                C28633 +
            (C4783 * C2529 + C28607 * C2597 + C4782 * C2531 + C28714 * C2598) *
                C6371 +
            (C4783 * C1502 + C28607 * C1821 + C4782 * C680 + C28714 * C878) *
                C28715 +
            (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
                C6370) *
               C28517 +
           ((C4783 * C2656 + C28607 * C2937 + C4782 * C2658 + C28714 * C2938) *
                C28633 +
            (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
                C6371 +
            (C4783 * C1501 + C28607 * C1820 + C4782 * C681 + C28714 * C879) *
                C28715 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C6370) *
               C1344) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[4] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C28714 +
            (C9030 + C9031) * C28607) *
               C1344 +
           ((C6751 + C6752) * C28714 + (C8372 + C8373) * C28607) * C28517) *
              C28749 * C583 -
          (((C6725 * C2529 + C9022 + C9022 + C28633 * C2989 + C6724 * C1354 +
             C9023 + C9023 + C28715 * C1883) *
                C28607 +
            (C8373 + C8372) * C28714) *
               C28517 +
           ((C6725 * C2530 + C9024 + C9024 + C28633 * C2991 + C6724 * C1353 +
             C9025 + C9025 + C28715 * C1882) *
                C28607 +
            (C9031 + C9030) * C28714) *
               C1344) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 + C1364 +
             C1364 + C28517 * C102) *
                C28715 +
            (C4152 + C4153) * C28633) *
               C28714 +
           ((C1976 + C1977) * C28715 + (C8448 + C8449) * C28633) * C28607) *
              C956 -
          (((C1351 * C3639 + C3646 + C3646 + C28517 * C3643 + C1349 * C3640 +
             C3647 + C3647 + C1344 * C3644) *
                C28633 +
            (C8449 + C8448) * C28715) *
               C28607 +
           ((C4155 + C4154) * C28633 + (C4153 + C4152) * C28715) * C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C1350 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C1344 +
            (C4801 + C4802) * C1352 + (C4803 + C4804) * C28517) *
               C28715 +
           ((C9172 + C9173) * C1350 + (C9174 + C9175) * C1344 +
            (C7864 + C7865) * C1352 + (C7866 + C7867) * C28517) *
               C28633) *
              C956 -
          (((C4783 * C3641 + C28607 * C3699 + C4782 * C3054 + C28714 * C3119) *
                C28517 +
            (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
                C1352 +
            (C4783 * C3642 + C28607 * C3700 + C4782 * C3053 + C28714 * C3118) *
                C1344 +
            (C4783 * C3640 + C28607 * C3698 + C4782 * C3050 + C28714 * C3115) *
                C1350) *
               C28633 +
           ((C7867 + C7866) * C28517 + (C7865 + C7864) * C1352 +
            (C9175 + C9174) * C1344 + (C9173 + C9172) * C1350) *
               C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C1350 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C1344 +
            (C6389 + C6390) * C1352 + (C6391 + C6392) * C28517) *
               C28714 +
           ((C8590 + C8591) * C1350 + (C8592 + C8593) * C1344 +
            (C7942 + C7943) * C1352 + (C7944 + C7945) * C28517) *
               C28607) *
              C956 -
          (((C6371 * C3641 + C28633 * C3753 + C6370 * C2535 + C28715 * C2661) *
                C28517 +
            (C6371 * C3639 + C28633 * C3751 + C6370 * C2531 + C28715 * C2657) *
                C1352 +
            (C6371 * C3642 + C28633 * C3754 + C6370 * C2536 + C28715 * C2662) *
                C1344 +
            (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
                C1350) *
               C28607 +
           ((C6371 * C3054 + C28633 * C3190 + C6370 * C964 + C28715 * C1056) *
                C28517 +
            (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
                C1352 +
            (C6371 * C3053 + C28633 * C3189 + C6370 * C965 + C28715 * C1057) *
                C1344 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C1350) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C4782 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28714 +
            (C2176 + C2177) * C4783 + (C2178 + C2179) * C28607) *
               C28715 +
           ((C4352 + C4353) * C4782 + (C4354 + C4355) * C28714 +
            (C8668 + C8669) * C4783 + (C8670 + C8671) * C28607) *
               C28633) *
              C956 -
          (((C1352 * C3697 + C28517 * C3805 + C1350 * C3698 + C1344 * C3806) *
                C28607 +
            (C1352 * C3639 + C28517 * C3641 + C1350 * C3640 + C1344 * C3642) *
                C4783 +
            (C4359 + C4358) * C28714 + (C4357 + C4356) * C4782) *
               C28633 +
           ((C8671 + C8670) * C28607 + (C8669 + C8668) * C4783 +
            (C4355 + C4354) * C28714 + (C4353 + C4352) * C4782) *
               C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 + C4965 * C589 +
             C4968 + C4968 + C28607 * C761) *
                C1344 +
            (C4991 + C4992) * C28517) *
               C28715 +
           ((C9386 + C9387) * C1344 + (C8086 + C8087) * C28517) * C28633) *
              C956 -
          (((C4965 * C3639 + C9378 + C9378 + C28607 * C3857 + C4964 * C3051 +
             C9379 + C9379 + C28714 * C3314) *
                C28517 +
            (C4965 * C3640 + C9380 + C9380 + C28607 * C3858 + C4964 * C3050 +
             C9381 + C9381 + C28714 * C3313) *
                C1344) *
               C28633 +
           ((C8087 + C8086) * C28517 + (C9387 + C9386) * C1344) * C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C4782 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28714 +
            (C8590 + C8591) * C4783 + (C8812 + C8813) * C28607) *
               C1344 +
           ((C6389 + C6390) * C4782 + (C6560 + C6561) * C28714 +
            (C7942 + C7943) * C4783 + (C8158 + C8159) * C28607) *
               C28517) *
              C956 -
          (((C6371 * C3697 + C28633 * C3913 + C6370 * C2598 + C28715 * C2828) *
                C28607 +
            (C6371 * C3639 + C28633 * C3751 + C6370 * C2531 + C28715 * C2657) *
                C4783 +
            (C6371 * C3116 + C28633 * C3380 + C6370 * C1010 + C28715 * C1174) *
                C28714 +
            (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
                C4782) *
               C28517 +
           ((C6371 * C3698 + C28633 * C3914 + C6370 * C2600 + C28715 * C2830) *
                C28607 +
            (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
                C4783 +
            (C6371 * C3115 + C28633 * C3379 + C6370 * C1011 + C28715 * C1175) *
                C28714 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C4782) *
               C1344) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C6370 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28715 +
            (C4352 + C4353) * C6371 + (C4540 + C4541) * C28633) *
               C28714 +
           ((C2176 + C2177) * C6370 + (C2360 + C2361) * C28715 +
            (C8668 + C8669) * C6371 + (C8884 + C8885) * C28633) *
               C28607) *
              C956 -
          (((C1352 * C3751 + C28517 * C3965 + C1350 * C3752 + C1344 * C3966) *
                C28633 +
            (C1352 * C3639 + C28517 * C3641 + C1350 * C3640 + C1344 * C3642) *
                C6371 +
            (C8885 + C8884) * C28715 + (C8669 + C8668) * C6370) *
               C28607 +
           ((C4543 + C4542) * C28633 + (C4357 + C4356) * C6371 +
            (C4541 + C4540) * C28715 + (C4353 + C4352) * C6370) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C6370 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C28715 +
            (C9172 + C9173) * C6371 + (C9590 + C9591) * C28633) *
               C1344 +
           ((C4801 + C4802) * C6370 + (C5164 + C5165) * C28715 +
            (C7864 + C7865) * C6371 + (C8296 + C8297) * C28633) *
               C28517) *
              C956 -
          (((C4783 * C3751 + C28607 * C4017 + C4782 * C3187 + C28714 * C3495) *
                C28633 +
            (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
                C6371 +
            (C8297 + C8296) * C28715 + (C7865 + C7864) * C6370) *
               C28517 +
           ((C4783 * C3752 + C28607 * C4018 + C4782 * C3186 + C28714 * C3494) *
                C28633 +
            (C4783 * C3640 + C28607 * C3698 + C4782 * C3050 + C28714 * C3115) *
                C6371 +
            (C9591 + C9590) * C28715 + (C9173 + C9172) * C6370) *
               C1344) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[5] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C28714 +
            (C9030 + C9031) * C28607) *
               C1344 +
           ((C6751 + C6752) * C28714 + (C8372 + C8373) * C28607) * C28517) *
              C956 -
          (((C6725 * C3639 + C9658 + C9658 + C28633 * C4069 + C6724 * C2531 +
             C9659 + C9659 + C28715 * C2990) *
                C28607 +
            (C6725 * C3051 + C7718 + C7718 + C28633 * C3563 + C6724 * C960 +
             C7719 + C7719 + C28715 * C1288) *
                C28714) *
               C28517 +
           ((C6725 * C3640 + C9660 + C9660 + C28633 * C4070 + C6724 * C2532 +
             C9661 + C9661 + C28715 * C2992) *
                C28607 +
            (C6725 * C3050 + C7720 + C7720 + C28633 * C3562 + C6724 * C961 +
             C7721 + C7721 + C28715 * C1289) *
                C28714) *
               C1344) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[6] += (-std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C28569 * C1346 +
                    (C1349 * C589 + C1365 + C1365 + C1344 * C597 +
                     C1351 * C588 + C1366 + C1366 + C28517 * C596) *
                        C28569 * C1347 +
                    (C1349 * C1353 + C1367 + C1367 + C1344 * C1359 +
                     C1351 * C1354 + C1368 + C1368 + C28517 * C1360) *
                        C28569 * C1348) *
                       C28749 * C28750 * C81 -
                   ((C1351 * C1355 + C1369 + C1369 + C28517 * C1361 +
                     C1349 * C1354 + C1370 + C1370 + C1344 * C1360) *
                        C28569 * C1348 +
                    (C1351 * C587 + C1371 + C1371 + C28517 * C595 +
                     C1349 * C588 + C1372 + C1372 + C1344 * C596) *
                        C28569 * C1347 +
                    (C1351 * C93 + C1373 + C1373 + C28517 * C103 + C1349 * C92 +
                     C1374 + C1374 + C1344 * C102) *
                        C28569 * C1346) *
                       C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                    C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                    C89 * C94 + C110 + C110 + C76 * C104) *
                       C28569 * C28558 * C28749 * C28750 * C81 -
                   (C89 * C95 + C111 + C111 + C76 * C105 + C87 * C94 + C112 +
                    C112 + C75 * C104 + C85 * C93 + C113 + C113 + C74 * C103 +
                    C83 * C92 + C114 + C114 + C73 * C102) *
                       C28569 * C28558 * C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C3047 +
                    (C1349 * C961 + C2547 + C2547 + C1344 * C969 +
                     C1351 * C960 + C2546 + C2546 + C28517 * C968) *
                        C3048 +
                    (C1349 * C3050 + C3060 + C3060 + C1344 * C3056 +
                     C1351 * C3051 + C3061 + C3061 + C28517 * C3057) *
                        C3049) *
                       C28558 * C28749 * C28750 * C81 -
                   ((C1351 * C3052 + C3062 + C3062 + C28517 * C3058 +
                     C1349 * C3051 + C3063 + C3063 + C1344 * C3057) *
                        C3049 +
                    (C1351 * C959 + C3064 + C3064 + C28517 * C967 +
                     C1349 * C960 + C3065 + C3065 + C1344 * C968) *
                        C3048 +
                    (C1351 * C93 + C1373 + C1373 + C28517 * C103 + C1349 * C92 +
                     C1374 + C1374 + C1344 * C102) *
                        C3047) *
                       C28558 * C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q));
    d2eexy[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C28749 * C28750 * C81 -
          ((C1426 * C1358 + C1348 * C1432 + C1425 * C591 + C1347 * C641 +
            C1424 * C98 + C1346 * C156) *
               C28517 +
           (C1426 * C1355 + C1348 * C1429 + C1425 * C587 + C1347 * C637 +
            C1424 * C93 + C1346 * C151) *
               C1352 +
           (C1451 + C1450 + C1449) * C1344 + (C1448 + C1447 + C1446) * C1350) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C28749 * C28750 * C81 -
          ((C148 * C100 + C28558 * C158) * C76 +
           (C148 * C95 + C28558 * C153) * C90 + C177 * C75 + C176 * C88 +
           C175 * C74 + C174 * C86 + C173 * C73 + C172 * C84) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C1350 +
            (C148 * C96 + C28558 * C154) * C1344 + C172 * C1352 +
            C173 * C28517) *
               C3047 +
           ((C148 * C961 + C28558 * C1011) * C1350 +
            (C148 * C965 + C28558 * C1015) * C1344 + C3130 * C1352 +
            C3131 * C28517) *
               C3048 +
           ((C148 * C3050 + C28558 * C3115) * C1350 +
            (C148 * C3053 + C28558 * C3118) * C1344 + C3132 * C1352 +
            C3133 * C28517) *
               C3049) *
              C28749 * C28750 * C81 -
          (((C148 * C3055 + C28558 * C3120) * C28517 +
            (C148 * C3052 + C28558 * C3117) * C1352 + C3133 * C1344 +
            C3132 * C1350) *
               C3049 +
           ((C148 * C963 + C28558 * C1013) * C28517 +
            (C148 * C959 + C28558 * C1009) * C1352 + C3131 * C1344 +
            C3130 * C1350) *
               C3048 +
           (C175 * C28517 + C174 * C1352 + C173 * C1344 + C172 * C1350) *
               C3047) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           ((C211 * C589 + C28569 * C681) * C1350 +
            (C211 * C593 + C28569 * C685) * C1344 + C1516 * C1352 +
            C1517 * C28517) *
               C1347 +
           ((C211 * C1353 + C28569 * C1501) * C1350 +
            (C211 * C1356 + C28569 * C1504) * C1344 + C1518 * C1352 +
            C1519 * C28517) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C211 * C1358 + C28569 * C1506) * C28517 +
            (C211 * C1355 + C28569 * C1503) * C1352 + C1519 * C1344 +
            C1518 * C1350) *
               C1348 +
           ((C211 * C591 + C28569 * C683) * C28517 +
            (C211 * C587 + C28569 * C679) * C1352 + C1517 * C1344 +
            C1516 * C1350) *
               C1347 +
           (C238 * C28517 + C237 * C1352 + C236 * C1344 + C235 * C1350) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C28749 * C28750 * C81 -
          ((C211 * C100 + C28569 * C221) * C76 +
           (C211 * C95 + C28569 * C216) * C90 + C240 * C75 + C239 * C88 +
           C238 * C74 + C237 * C86 + C236 * C73 + C235 * C84) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
            C3185 * C3050 + C3049 * C3186) *
               C1350 +
           (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
            C3185 * C3053 + C3049 * C3189) *
               C1344 +
           (C3205 + C3206 + C3207) * C1352 + (C3208 + C3209 + C3210) * C28517) *
              C28558 * C28749 * C28750 * C81 -
          ((C3185 * C3055 + C3049 * C3191 + C3184 * C963 + C3048 * C1055 +
            C3183 * C98 + C3047 * C219) *
               C28517 +
           (C3185 * C3052 + C3049 * C3188 + C3184 * C959 + C3048 * C1051 +
            C3183 * C93 + C3047 * C214) *
               C1352 +
           (C3210 + C3209 + C3208) * C1344 + (C3207 + C3206 + C3205) * C1350) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[6] +=
        (-std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C1350 * C589 + C1344 * C593 + C1352 * C588 + C28517 * C592) *
               C1425 +
           (C1350 * C639 + C1344 * C723 + C1352 * C638 + C28517 * C722) *
               C1347 +
           (C1350 * C1353 + C1344 * C1356 + C1352 * C1354 + C28517 * C1357) *
               C1426 +
           (C1350 * C1427 + C1344 * C1569 + C1352 * C1428 + C28517 * C1570) *
               C1348) *
              C28569 * C28749 * C28750 * C81 -
          ((C1352 * C1429 + C28517 * C1571 + C1350 * C1428 + C1344 * C1570) *
               C1348 +
           (C1352 * C1355 + C28517 * C1358 + C1350 * C1354 + C1344 * C1357) *
               C1426 +
           (C1352 * C637 + C28517 * C721 + C1350 * C638 + C1344 * C722) *
               C1347 +
           (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
               C1425 +
           (C1352 * C151 + C28517 * C276 + C1350 * C150 + C1344 * C275) *
               C1346 +
           (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C1424) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C28749 * C28750 * C81 -
          ((C90 * C153 + C76 * C278 + C88 * C152 + C75 * C277 + C86 * C151 +
            C74 * C276 + C84 * C150 + C73 * C275) *
               C28558 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C148) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28558) *
               C3047 +
           ((C1350 * C961 + C1344 * C965 + C1352 * C960 + C28517 * C964) *
                C148 +
            (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 + C28517 * C1094) *
                C28558) *
               C3048 +
           ((C1350 * C3050 + C1344 * C3053 + C1352 * C3051 + C28517 * C3054) *
                C148 +
            (C1350 * C3115 + C1344 * C3260 + C1352 * C3116 + C28517 * C3261) *
                C28558) *
               C3049) *
              C28749 * C28750 * C81 -
          (((C1352 * C3117 + C28517 * C3262 + C1350 * C3116 + C1344 * C3261) *
                C28558 +
            (C1352 * C3052 + C28517 * C3055 + C1350 * C3051 + C1344 * C3054) *
                C148) *
               C3049 +
           ((C1352 * C1009 + C28517 * C1093 + C1350 * C1010 + C1344 * C1094) *
                C28558 +
            (C1352 * C959 + C28517 * C963 + C1350 * C960 + C1344 * C964) *
                C148) *
               C3048 +
           ((C1352 * C151 + C28517 * C276 + C1350 * C150 + C1344 * C275) *
                C28558 +
            (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C148) *
               C3047) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[6] += (-std::pow(Pi, 2.5) *
                  (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 +
                     C1630 + C1630 + C1347 * C761 + C1624 * C1353 + C1631 +
                     C1631 + C1348 * C1625) *
                        C1344 +
                    (C1650 + C1651 + C1652) * C28517) *
                       C28569 * C28749 * C28750 * C81 -
                   ((C1624 * C1355 + C1641 + C1641 + C1348 * C1627 +
                     C1623 * C587 + C1642 + C1642 + C1347 * C759 + C1622 * C93 +
                     C1643 + C1643 + C1346 * C316) *
                        C28517 +
                    (C1652 + C1651 + C1650) * C1344) *
                       C28569 * C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                    C337 * C74 + C338 * C75 + C339 * C76) *
                       C28569 * C28749 * C28750 * C81 -
                   ((C313 * C95 + C330 + C330 + C28558 * C318) * C76 +
                    C339 * C75 + C338 * C74 + C337 * C73) *
                       C28569 * C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C313 * C91 + C320 + C320 + C28558 * C314) * C1344 +
                     C337 * C28517) *
                        C3047 +
                    ((C313 * C961 + C1138 + C1138 + C28558 * C1133) * C1344 +
                     C3328 * C28517) *
                        C3048 +
                    ((C313 * C3050 + C3319 + C3319 + C28558 * C3313) * C1344 +
                     C3329 * C28517) *
                        C3049) *
                       C28749 * C28750 * C81 -
                   (((C313 * C3052 + C3323 + C3323 + C28558 * C3315) * C28517 +
                     C3329 * C1344) *
                        C3049 +
                    ((C313 * C959 + C1136 + C1136 + C28558 * C1131) * C28517 +
                     C3328 * C1344) *
                        C3048 +
                    (C338 * C28517 + C337 * C1344) * C3047) *
                       C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 +
            (C211 * C589 + C28569 * C681) * C1425 +
            (C211 * C639 + C28569 * C803) * C1347 +
            (C211 * C1353 + C28569 * C1501) * C1426 +
            (C211 * C1427 + C28569 * C1702) * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C28749 * C28750 * C81 -
          (((C211 * C1429 + C28569 * C1704) * C1348 +
            (C211 * C1355 + C28569 * C1503) * C1426 +
            (C211 * C637 + C28569 * C801) * C1347 +
            (C211 * C587 + C28569 * C679) * C1425 + C389 * C1346 +
            C237 * C1424) *
               C28517 +
           (C1717 + C1711 + C1716 + C1708 + C1707 + C1706) * C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28749 * C28750 * C81 -
          (((C211 * C153 + C28569 * C377) * C28558 +
            (C211 * C95 + C28569 * C216) * C148) *
               C76 +
           (C393 + C385) * C75 + (C392 + C382) * C74 + (C391 + C379) * C73) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C148 +
            (C3183 * C149 + C3047 * C373 + C3184 * C1011 + C3048 * C1175 +
             C3185 * C3115 + C3049 * C3379) *
                C28558) *
               C1344 +
           ((C3205 + C3206 + C3207) * C148 + (C3389 + C3390 + C3391) * C28558) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C3185 * C3117 + C3049 * C3381 + C3184 * C1009 + C3048 * C1173 +
             C3183 * C151 + C3047 * C375) *
                C28558 +
            (C3185 * C3052 + C3049 * C3188 + C3184 * C959 + C3048 * C1051 +
             C3183 * C93 + C3047 * C214) *
                C148) *
               C28517 +
           ((C3391 + C3390 + C3389) * C28558 + (C3207 + C3206 + C3205) * C148) *
               C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C1350 * C589 + C1344 * C593 + C1352 * C588 + C28517 * C592) *
                C211 +
            (C1350 * C681 + C1344 * C841 + C1352 * C680 + C28517 * C840) *
                C28569) *
               C1347 +
           ((C1350 * C1353 + C1344 * C1356 + C1352 * C1354 + C28517 * C1357) *
                C211 +
            (C1350 * C1501 + C1344 * C1767 + C1352 * C1502 + C28517 * C1768) *
                C28569) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C1352 * C1503 + C28517 * C1769 + C1350 * C1502 + C1344 * C1768) *
                C28569 +
            (C1352 * C1355 + C28517 * C1358 + C1350 * C1354 + C1344 * C1357) *
                C211) *
               C1348 +
           ((C1352 * C679 + C28517 * C839 + C1350 * C680 + C1344 * C840) *
                C28569 +
            (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
                C211) *
               C1347 +
           ((C1352 * C214 + C28517 * C429 + C1350 * C213 + C1344 * C428) *
                C28569 +
            (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C211) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C28749 * C28750 * C81 -
          ((C90 * C216 + C76 * C431 + C88 * C215 + C75 * C430 + C86 * C214 +
            C74 * C429 + C84 * C213 + C73 * C428) *
               C28569 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C211) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C3183 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
               C3047 +
           (C1350 * C961 + C1344 * C965 + C1352 * C960 + C28517 * C964) *
               C3184 +
           (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 + C28517 * C1212) *
               C3048 +
           (C1350 * C3050 + C1344 * C3053 + C1352 * C3051 + C28517 * C3054) *
               C3185 +
           (C1350 * C3186 + C1344 * C3441 + C1352 * C3187 + C28517 * C3442) *
               C3049) *
              C28558 * C28749 * C28750 * C81 -
          ((C1352 * C3188 + C28517 * C3443 + C1350 * C3187 + C1344 * C3442) *
               C3049 +
           (C1352 * C3052 + C28517 * C3055 + C1350 * C3051 + C1344 * C3054) *
               C3185 +
           (C1352 * C1051 + C28517 * C1211 + C1350 * C1052 + C1344 * C1212) *
               C3048 +
           (C1352 * C959 + C28517 * C963 + C1350 * C960 + C1344 * C964) *
               C3184 +
           (C1352 * C214 + C28517 * C429 + C1350 * C213 + C1344 * C428) *
               C3047 +
           (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C3183) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[6] +=
        (-std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C1426 * C1503 + C1348 * C1822 + C1425 * C679 + C1347 * C877 +
             C1424 * C214 + C1346 * C468) *
                C28569 +
            (C1426 * C1355 + C1348 * C1429 + C1425 * C587 + C1347 * C637 +
             C1424 * C93 + C1346 * C151) *
                C211) *
               C28517 +
           ((C1832 + C1831 + C1830) * C28569 + (C1448 + C1447 + C1446) * C211) *
               C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28749 * C28750 * C81 -
          (((C148 * C216 + C28558 * C470) * C28569 +
            (C148 * C95 + C28558 * C153) * C211) *
               C76 +
           (C486 + C478) * C75 + (C485 + C475) * C74 + (C484 + C472) * C73) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C3183 +
            (C148 * C212 + C28558 * C466) * C3047 +
            (C148 * C961 + C28558 * C1011) * C3184 +
            (C148 * C1053 + C28558 * C1251) * C3048 +
            (C148 * C3050 + C28558 * C3115) * C3185 +
            (C148 * C3186 + C28558 * C3494) * C3049) *
               C1344 +
           (C3498 + C3499 + C3500 + C3508 + C3503 + C3509) * C28517) *
              C28749 * C28750 * C81 -
          (((C148 * C3188 + C28558 * C3496) * C3049 +
            (C148 * C3052 + C28558 * C3117) * C3185 +
            (C148 * C1051 + C28558 * C1249) * C3048 +
            (C148 * C959 + C28558 * C1009) * C3184 + C482 * C3047 +
            C174 * C3183) *
               C28517 +
           (C3509 + C3503 + C3508 + C3500 + C3499 + C3498) * C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[6] += (-std::pow(Pi, 2.5) *
                  ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 +
                     (C520 * C589 + C922 + C922 + C28569 * C917) * C1347 +
                     (C520 * C1353 + C1886 + C1886 + C28569 * C1882) * C1348) *
                        C1344 +
                    (C1887 + C1900 + C1901) * C28517) *
                       C28749 * C28750 * C81 -
                   (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C1348 +
                     (C520 * C587 + C920 + C920 + C28569 * C915) * C1347 +
                     C545 * C1346) *
                        C28517 +
                    (C1901 + C1900 + C1887) * C1344) *
                       C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
                    C547 * C74 + C548 * C75 + C549 * C76) *
                       C28749 * C28750 * C81 -
                   ((C520 * C95 + C537 + C537 + C28569 * C525) * C28558 * C76 +
                    C549 * C75 + C548 * C74 + C547 * C73) *
                       C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C3559 * C91 + C3566 + C3566 + C3047 * C521 + C3560 * C961 +
                     C3567 + C3567 + C3048 * C1289 + C3561 * C3050 + C3568 +
                     C3568 + C3049 * C3562) *
                        C28558 * C1344 +
                    (C3587 + C3588 + C3589) * C28558 * C28517) *
                       C28749 * C28750 * C81 -
                   ((C3561 * C3052 + C3578 + C3578 + C3049 * C3564 +
                     C3560 * C959 + C3579 + C3579 + C3048 * C1287 +
                     C3559 * C93 + C3580 + C3580 + C3047 * C523) *
                        C28558 * C28517 +
                    (C3589 + C3588 + C3587) * C28558 * C1344) *
                       C28749 * C28750 * C82)) /
                     (p * q * std::sqrt(p + q));
    d2eexx[7] += (-std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C28569 * C1346 +
                    (C1976 + C1977) * C28569 * C1347 +
                    (C1978 + C1979) * C28569 * C1348) *
                       C28749 * C583 -
                   ((C1351 * C1951 + C1966 + C1966 + C28517 * C1955 +
                     C1349 * C1952 + C1967 + C1967 + C1344 * C1956) *
                        C28569 * C1348 +
                    (C1979 + C1978) * C28569 * C1347 +
                    (C1977 + C1976) * C28569 * C1346) *
                       C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                    C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                    C89 * C94 + C110 + C110 + C76 * C104) *
                       C28569 * C28558 * C28749 * C583 -
                   (C89 * C586 + C599 + C599 + C76 * C594 + C87 * C587 + C600 +
                    C600 + C75 * C595 + C85 * C588 + C601 + C601 + C74 * C596 +
                    C83 * C589 + C602 + C602 + C73 * C597) *
                       C28569 * C28558 * C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C3047 +
                    (C1349 * C961 + C2547 + C2547 + C1344 * C969 +
                     C1351 * C960 + C2546 + C2546 + C28517 * C968) *
                        C3048 +
                    (C1349 * C3050 + C3060 + C3060 + C1344 * C3056 +
                     C1351 * C3051 + C3061 + C3061 + C28517 * C3057) *
                        C3049) *
                       C28558 * C28749 * C583 -
                   ((C1351 * C3639 + C3646 + C3646 + C28517 * C3643 +
                     C1349 * C3640 + C3647 + C3647 + C1344 * C3644) *
                        C3049 +
                    (C1351 * C2531 + C2544 + C2544 + C28517 * C2539 +
                     C1349 * C2532 + C2545 + C2545 + C1344 * C2540) *
                        C3048 +
                    (C1977 + C1976) * C3047) *
                       C28558 * C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q));
    d2eexy[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C28749 * C583 -
          ((C1426 * C1953 + C1348 * C2031 + C1425 * C1357 + C1347 * C1431 +
            C1424 * C592 + C1346 * C642) *
               C28517 +
           (C1426 * C1951 + C1348 * C2029 + C1425 * C1354 + C1347 * C1428 +
            C1424 * C588 + C1346 * C638) *
               C1352 +
           (C1426 * C1954 + C1348 * C2032 + C1425 * C1356 + C1347 * C1430 +
            C1424 * C593 + C1346 * C643) *
               C1344 +
           (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 + C1347 * C1427 +
            C1424 * C589 + C1346 * C639) *
               C1350) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C28749 * C583 -
          ((C148 * C590 + C28558 * C640) * C76 +
           (C148 * C586 + C28558 * C636) * C90 +
           (C148 * C591 + C28558 * C641) * C75 +
           (C148 * C587 + C28558 * C637) * C88 +
           (C148 * C592 + C28558 * C642) * C74 +
           (C148 * C588 + C28558 * C638) * C86 +
           (C148 * C593 + C28558 * C643) * C73 +
           (C148 * C589 + C28558 * C639) * C84) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C1350 +
            (C148 * C96 + C28558 * C154) * C1344 + C172 * C1352 +
            C173 * C28517) *
               C3047 +
           ((C148 * C961 + C28558 * C1011) * C1350 +
            (C148 * C965 + C28558 * C1015) * C1344 + C3130 * C1352 +
            C3131 * C28517) *
               C3048 +
           ((C148 * C3050 + C28558 * C3115) * C1350 +
            (C148 * C3053 + C28558 * C3118) * C1344 + C3132 * C1352 +
            C3133 * C28517) *
               C3049) *
              C28749 * C583 -
          (((C148 * C3641 + C28558 * C3699) * C28517 +
            (C148 * C3639 + C28558 * C3697) * C1352 +
            (C148 * C3642 + C28558 * C3700) * C1344 +
            (C148 * C3640 + C28558 * C3698) * C1350) *
               C3049 +
           ((C148 * C2535 + C28558 * C2602) * C28517 +
            (C148 * C2531 + C28558 * C2598) * C1352 +
            (C148 * C2536 + C28558 * C2604) * C1344 +
            (C148 * C2532 + C28558 * C2600) * C1350) *
               C3048 +
           ((C148 * C592 + C28558 * C642) * C28517 +
            (C148 * C588 + C28558 * C638) * C1352 +
            (C148 * C593 + C28558 * C643) * C1344 +
            (C148 * C589 + C28558 * C639) * C1350) *
               C3047) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           (C2104 + C2105 + C2092 + C2093) * C1347 +
           (C2106 + C2107 + C2098 + C2099) * C1348) *
              C28749 * C583 -
          (((C211 * C1953 + C28569 * C2085) * C28517 +
            (C211 * C1951 + C28569 * C2083) * C1352 +
            (C211 * C1954 + C28569 * C2086) * C1344 +
            (C211 * C1952 + C28569 * C2084) * C1350) *
               C1348 +
           (C2099 + C2098 + C2107 + C2106) * C1347 +
           (C2093 + C2092 + C2105 + C2104) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C28749 * C583 -
          ((C211 * C590 + C28569 * C682) * C76 +
           (C211 * C586 + C28569 * C678) * C90 +
           (C211 * C591 + C28569 * C683) * C75 +
           (C211 * C587 + C28569 * C679) * C88 +
           (C211 * C592 + C28569 * C684) * C74 +
           (C211 * C588 + C28569 * C680) * C86 +
           (C211 * C593 + C28569 * C685) * C73 +
           (C211 * C589 + C28569 * C681) * C84) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
            C3185 * C3050 + C3049 * C3186) *
               C1350 +
           (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
            C3185 * C3053 + C3049 * C3189) *
               C1344 +
           (C3205 + C3206 + C3207) * C1352 + (C3208 + C3209 + C3210) * C28517) *
              C28558 * C28749 * C583 -
          ((C3185 * C3641 + C3049 * C3753 + C3184 * C2535 + C3048 * C2661 +
            C3183 * C592 + C3047 * C684) *
               C28517 +
           (C3185 * C3639 + C3049 * C3751 + C3184 * C2531 + C3048 * C2657 +
            C3183 * C588 + C3047 * C680) *
               C1352 +
           (C3185 * C3642 + C3049 * C3754 + C3184 * C2536 + C3048 * C2662 +
            C3183 * C593 + C3047 * C685) *
               C1344 +
           (C3185 * C3640 + C3049 * C3752 + C3184 * C2532 + C3048 * C2658 +
            C3183 * C589 + C3047 * C681) *
               C1350) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[7] +=
        (-std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C2176 + C2177) * C1425 + (C2178 + C2179) * C1347 +
           (C2180 + C2181) * C1426 + (C2182 + C2183) * C1348) *
              C28569 * C28749 * C583 -
          ((C1352 * C2029 + C28517 * C2157 + C1350 * C2030 + C1344 * C2158) *
               C1348 +
           (C1352 * C1951 + C28517 * C1953 + C1350 * C1952 + C1344 * C1954) *
               C1426 +
           (C2183 + C2182) * C1347 + (C2181 + C2180) * C1425 +
           (C2179 + C2178) * C1346 + (C2177 + C2176) * C1424) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C28749 * C583 -
          ((C90 * C636 + C76 * C720 + C88 * C637 + C75 * C721 + C86 * C638 +
            C74 * C722 + C84 * C639 + C73 * C723) *
               C28558 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C148) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28558) *
               C3047 +
           ((C1350 * C961 + C1344 * C965 + C1352 * C960 + C28517 * C964) *
                C148 +
            (C1350 * C1011 + C1344 * C1095 + C1352 * C1010 + C28517 * C1094) *
                C28558) *
               C3048 +
           ((C1350 * C3050 + C1344 * C3053 + C1352 * C3051 + C28517 * C3054) *
                C148 +
            (C1350 * C3115 + C1344 * C3260 + C1352 * C3116 + C28517 * C3261) *
                C28558) *
               C3049) *
              C28749 * C583 -
          (((C1352 * C3697 + C28517 * C3805 + C1350 * C3698 + C1344 * C3806) *
                C28558 +
            (C1352 * C3639 + C28517 * C3641 + C1350 * C3640 + C1344 * C3642) *
                C148) *
               C3049 +
           ((C1352 * C2598 + C28517 * C2715 + C1350 * C2600 + C1344 * C2716) *
                C28558 +
            (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
                C148) *
               C3048 +
           ((C2179 + C2178) * C28558 + (C2177 + C2176) * C148) * C3047) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[7] += (-std::pow(Pi, 2.5) *
                  (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 +
                     C1630 + C1630 + C1347 * C761 + C1624 * C1353 + C1631 +
                     C1631 + C1348 * C1625) *
                        C1344 +
                    (C1650 + C1651 + C1652) * C28517) *
                       C28569 * C28749 * C583 -
                   ((C1624 * C1951 + C2236 + C2236 + C1348 * C2233 +
                     C1623 * C1354 + C2237 + C2237 + C1347 * C1626 +
                     C1622 * C588 + C2238 + C2238 + C1346 * C760) *
                        C28517 +
                    (C1624 * C1952 + C2239 + C2239 + C1348 * C2234 +
                     C1623 * C1353 + C2240 + C2240 + C1347 * C1625 +
                     C1622 * C589 + C2241 + C2241 + C1346 * C761) *
                        C1344) *
                       C28569 * C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                    C337 * C74 + C338 * C75 + C339 * C76) *
                       C28569 * C28749 * C583 -
                   ((C313 * C586 + C763 + C763 + C28558 * C758) * C76 +
                    (C313 * C587 + C764 + C764 + C28558 * C759) * C75 +
                    (C313 * C588 + C765 + C765 + C28558 * C760) * C74 +
                    (C313 * C589 + C766 + C766 + C28558 * C761) * C73) *
                       C28569 * C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C313 * C91 + C320 + C320 + C28558 * C314) * C1344 +
                     C337 * C28517) *
                        C3047 +
                    ((C313 * C961 + C1138 + C1138 + C28558 * C1133) * C1344 +
                     C3328 * C28517) *
                        C3048 +
                    ((C313 * C3050 + C3319 + C3319 + C28558 * C3313) * C1344 +
                     C3329 * C28517) *
                        C3049) *
                       C28749 * C583 -
                   (((C313 * C3639 + C3860 + C3860 + C28558 * C3857) * C28517 +
                     (C313 * C3640 + C3861 + C3861 + C28558 * C3858) * C1344) *
                        C3049 +
                    ((C313 * C2531 + C3862 + C3862 + C28558 * C2768) * C28517 +
                     (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C1344) *
                        C3048 +
                    ((C313 * C588 + C765 + C765 + C28558 * C760) * C28517 +
                     (C313 * C589 + C766 + C766 + C28558 * C761) * C1344) *
                        C3047) *
                       C28749 * C584) *
                  C28751) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 + C2100 * C1425 +
            C2298 * C1347 + C2102 * C1426 + C2299 * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C28749 * C583 -
          (((C211 * C2029 + C28569 * C2291) * C1348 +
            (C211 * C1951 + C28569 * C2083) * C1426 + C1715 * C1347 +
            C1518 * C1425 + C1714 * C1346 + C1516 * C1424) *
               C28517 +
           ((C211 * C2030 + C28569 * C2292) * C1348 +
            (C211 * C1952 + C28569 * C2084) * C1426 + C2299 * C1347 +
            C2102 * C1425 + C2298 * C1346 + C2100 * C1424) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28749 * C583 -
          (((C211 * C636 + C28569 * C800) * C28558 +
            (C211 * C586 + C28569 * C678) * C148) *
               C76 +
           ((C211 * C637 + C28569 * C801) * C28558 +
            (C211 * C587 + C28569 * C679) * C148) *
               C75 +
           ((C211 * C638 + C28569 * C802) * C28558 +
            (C211 * C588 + C28569 * C680) * C148) *
               C74 +
           ((C211 * C639 + C28569 * C803) * C28558 +
            (C211 * C589 + C28569 * C681) * C148) *
               C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C148 +
            (C3183 * C149 + C3047 * C373 + C3184 * C1011 + C3048 * C1175 +
             C3185 * C3115 + C3049 * C3379) *
                C28558) *
               C1344 +
           ((C3205 + C3206 + C3207) * C148 + (C3389 + C3390 + C3391) * C28558) *
               C28517) *
              C28749 * C583 -
          (((C3185 * C3697 + C3049 * C3913 + C3184 * C2598 + C3048 * C2828 +
             C3183 * C638 + C3047 * C802) *
                C28558 +
            (C3185 * C3639 + C3049 * C3751 + C3184 * C2531 + C3048 * C2657 +
             C3183 * C588 + C3047 * C680) *
                C148) *
               C28517 +
           ((C3185 * C3698 + C3049 * C3914 + C3184 * C2600 + C3048 * C2830 +
             C3183 * C639 + C3047 * C803) *
                C28558 +
            (C3185 * C3640 + C3049 * C3752 + C3184 * C2532 + C3048 * C2658 +
             C3183 * C589 + C3047 * C681) *
                C148) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C2176 + C2177) * C211 + (C2360 + C2361) * C28569) * C1347 +
           ((C2180 + C2181) * C211 + (C2362 + C2363) * C28569) * C1348) *
              C28749 * C583 -
          (((C1352 * C2083 + C28517 * C2349 + C1350 * C2084 + C1344 * C2350) *
                C28569 +
            (C1352 * C1951 + C28517 * C1953 + C1350 * C1952 + C1344 * C1954) *
                C211) *
               C1348 +
           ((C2363 + C2362) * C28569 + (C2181 + C2180) * C211) * C1347 +
           ((C2361 + C2360) * C28569 + (C2177 + C2176) * C211) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C28749 * C583 -
          ((C90 * C678 + C76 * C838 + C88 * C679 + C75 * C839 + C86 * C680 +
            C74 * C840 + C84 * C681 + C73 * C841) *
               C28569 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C211) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C3183 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
               C3047 +
           (C1350 * C961 + C1344 * C965 + C1352 * C960 + C28517 * C964) *
               C3184 +
           (C1350 * C1053 + C1344 * C1213 + C1352 * C1052 + C28517 * C1212) *
               C3048 +
           (C1350 * C3050 + C1344 * C3053 + C1352 * C3051 + C28517 * C3054) *
               C3185 +
           (C1350 * C3186 + C1344 * C3441 + C1352 * C3187 + C28517 * C3442) *
               C3049) *
              C28558 * C28749 * C583 -
          ((C1352 * C3751 + C28517 * C3965 + C1350 * C3752 + C1344 * C3966) *
               C3049 +
           (C1352 * C3639 + C28517 * C3641 + C1350 * C3640 + C1344 * C3642) *
               C3185 +
           (C1352 * C2657 + C28517 * C2883 + C1350 * C2658 + C1344 * C2884) *
               C3048 +
           (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
               C3184 +
           (C2361 + C2360) * C3047 + (C2177 + C2176) * C3183) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C28749 * C583 -
          (((C1426 * C2083 + C1348 * C2413 + C1425 * C1502 + C1347 * C1821 +
             C1424 * C680 + C1346 * C878) *
                C28569 +
            (C1426 * C1951 + C1348 * C2029 + C1425 * C1354 + C1347 * C1428 +
             C1424 * C588 + C1346 * C638) *
                C211) *
               C28517 +
           ((C1426 * C2084 + C1348 * C2414 + C1425 * C1501 + C1347 * C1820 +
             C1424 * C681 + C1346 * C879) *
                C28569 +
            (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 + C1347 * C1427 +
             C1424 * C589 + C1346 * C639) *
                C211) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28749 * C583 -
          (((C148 * C678 + C28558 * C876) * C28569 +
            (C148 * C586 + C28558 * C636) * C211) *
               C76 +
           ((C148 * C679 + C28558 * C877) * C28569 +
            (C148 * C587 + C28558 * C637) * C211) *
               C75 +
           ((C148 * C680 + C28558 * C878) * C28569 +
            (C148 * C588 + C28558 * C638) * C211) *
               C74 +
           ((C148 * C681 + C28558 * C879) * C28569 +
            (C148 * C589 + C28558 * C639) * C211) *
               C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C3183 +
            (C148 * C212 + C28558 * C466) * C3047 +
            (C148 * C961 + C28558 * C1011) * C3184 +
            (C148 * C1053 + C28558 * C1251) * C3048 +
            (C148 * C3050 + C28558 * C3115) * C3185 +
            (C148 * C3186 + C28558 * C3494) * C3049) *
               C1344 +
           (C3498 + C3499 + C3500 + C3508 + C3503 + C3509) * C28517) *
              C28749 * C583 -
          (((C148 * C3751 + C28558 * C4017) * C3049 +
            (C148 * C3639 + C28558 * C3697) * C3185 +
            (C148 * C2657 + C28558 * C2936) * C3048 +
            (C148 * C2531 + C28558 * C2598) * C3184 +
            (C148 * C680 + C28558 * C878) * C3047 +
            (C148 * C588 + C28558 * C638) * C3183) *
               C28517 +
           ((C148 * C3752 + C28558 * C4018) * C3049 +
            (C148 * C3640 + C28558 * C3698) * C3185 +
            (C148 * C2658 + C28558 * C2938) * C3048 +
            (C148 * C2532 + C28558 * C2600) * C3184 +
            (C148 * C681 + C28558 * C879) * C3047 +
            (C148 * C589 + C28558 * C639) * C3183) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[7] +=
        (-std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 + C2478 * C1347 +
            C2479 * C1348) *
               C1344 +
           (C1887 + C1900 + C1901) * C28517) *
              C28749 * C583 -
          (((C520 * C1951 + C2472 + C2472 + C28569 * C2465) * C1348 +
            C1899 * C1347 + C1898 * C1346) *
               C28517 +
           ((C520 * C1952 + C2473 + C2473 + C28569 * C2466) * C1348 +
            C2479 * C1347 + C2478 * C1346) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28749 * C583 -
          ((C520 * C586 + C919 + C919 + C28569 * C914) * C28558 * C76 +
           (C520 * C587 + C920 + C920 + C28569 * C915) * C28558 * C75 +
           (C520 * C588 + C921 + C921 + C28569 * C916) * C28558 * C74 +
           (C520 * C589 + C922 + C922 + C28569 * C917) * C28558 * C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3559 * C91 + C3566 + C3566 + C3047 * C521 + C3560 * C961 + C3567 +
            C3567 + C3048 * C1289 + C3561 * C3050 + C3568 + C3568 +
            C3049 * C3562) *
               C28558 * C1344 +
           (C3587 + C3588 + C3589) * C28558 * C28517) *
              C28749 * C583 -
          ((C3561 * C3639 + C4072 + C4072 + C3049 * C4069 + C3560 * C2531 +
            C4073 + C4073 + C3048 * C2990 + C3559 * C588 + C4074 + C4074 +
            C3047 * C916) *
               C28558 * C28517 +
           (C3561 * C3640 + C4075 + C4075 + C3049 * C4070 + C3560 * C2532 +
            C4076 + C4076 + C3048 * C2992 + C3559 * C589 + C4077 + C4077 +
            C3047 * C917) *
               C28558 * C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[8] += (-std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C28569 * C1346 +
                    (C1976 + C1977) * C28569 * C1347 +
                    (C1978 + C1979) * C28569 * C1348) *
                       C956 -
                   ((C1351 * C2529 + C2542 + C2542 + C28517 * C2537 +
                     C1349 * C2530 + C2543 + C2543 + C1344 * C2538) *
                        C28569 * C1348 +
                    (C1351 * C2531 + C2544 + C2544 + C28517 * C2539 +
                     C1349 * C2532 + C2545 + C2545 + C1344 * C2540) *
                        C28569 * C1347 +
                    (C1351 * C960 + C2546 + C2546 + C28517 * C968 +
                     C1349 * C961 + C2547 + C2547 + C1344 * C969) *
                        C28569 * C1346) *
                       C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                    C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                    C89 * C94 + C110 + C110 + C76 * C104) *
                       C28569 * C28558 * C956 -
                   (C89 * C958 + C971 + C971 + C76 * C966 + C87 * C959 + C972 +
                    C972 + C75 * C967 + C85 * C960 + C973 + C973 + C74 * C968 +
                    C83 * C961 + C974 + C974 + C73 * C969) *
                       C28569 * C28558 * C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                     C1364 + C1364 + C28517 * C102) *
                        C3047 +
                    (C4152 + C4153) * C3048 + (C4154 + C4155) * C3049) *
                       C28558 * C956 -
                   ((C1351 * C4127 + C4142 + C4142 + C28517 * C4131 +
                     C1349 * C4128 + C4143 + C4143 + C1344 * C4132) *
                        C3049 +
                    (C4155 + C4154) * C3048 + (C4153 + C4152) * C3047) *
                       C28558 * C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q));
    d2eexy[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C956 -
          ((C1426 * C2533 + C1348 * C2601 + C1425 * C2535 + C1347 * C2602 +
            C1424 * C964 + C1346 * C1014) *
               C28517 +
           (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 + C1347 * C2598 +
            C1424 * C960 + C1346 * C1010) *
               C1352 +
           (C1426 * C2534 + C1348 * C2603 + C1425 * C2536 + C1347 * C2604 +
            C1424 * C965 + C1346 * C1015) *
               C1344 +
           (C1426 * C2530 + C1348 * C2599 + C1425 * C2532 + C1347 * C2600 +
            C1424 * C961 + C1346 * C1011) *
               C1350) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C956 -
          ((C148 * C962 + C28558 * C1012) * C76 +
           (C148 * C958 + C28558 * C1008) * C90 +
           (C148 * C963 + C28558 * C1013) * C75 +
           (C148 * C959 + C28558 * C1009) * C88 +
           (C148 * C964 + C28558 * C1014) * C74 +
           (C148 * C960 + C28558 * C1010) * C86 +
           (C148 * C965 + C28558 * C1015) * C73 +
           (C148 * C961 + C28558 * C1011) * C84) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C1350 +
            (C148 * C96 + C28558 * C154) * C1344 + C172 * C1352 +
            C173 * C28517) *
               C3047 +
           (C4226 + C4227 + C4214 + C4215) * C3048 +
           (C4228 + C4229 + C4220 + C4221) * C3049) *
              C956 -
          (((C148 * C4129 + C28558 * C4207) * C28517 +
            (C148 * C4127 + C28558 * C4205) * C1352 +
            (C148 * C4130 + C28558 * C4208) * C1344 +
            (C148 * C4128 + C28558 * C4206) * C1350) *
               C3049 +
           (C4221 + C4220 + C4229 + C4228) * C3048 +
           (C4215 + C4214 + C4227 + C4226) * C3047) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           (C2104 + C2105 + C2092 + C2093) * C1347 +
           (C2106 + C2107 + C2098 + C2099) * C1348) *
              C956 -
          (((C211 * C2533 + C28569 * C2659) * C28517 +
            (C211 * C2529 + C28569 * C2655) * C1352 +
            (C211 * C2534 + C28569 * C2660) * C1344 +
            (C211 * C2530 + C28569 * C2656) * C1350) *
               C1348 +
           ((C211 * C2535 + C28569 * C2661) * C28517 +
            (C211 * C2531 + C28569 * C2657) * C1352 +
            (C211 * C2536 + C28569 * C2662) * C1344 +
            (C211 * C2532 + C28569 * C2658) * C1350) *
               C1347 +
           ((C211 * C964 + C28569 * C1056) * C28517 +
            (C211 * C960 + C28569 * C1052) * C1352 +
            (C211 * C965 + C28569 * C1057) * C1344 +
            (C211 * C961 + C28569 * C1053) * C1350) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C956 -
          ((C211 * C962 + C28569 * C1054) * C76 +
           (C211 * C958 + C28569 * C1050) * C90 +
           (C211 * C963 + C28569 * C1055) * C75 +
           (C211 * C959 + C28569 * C1051) * C88 +
           (C211 * C964 + C28569 * C1056) * C74 +
           (C211 * C960 + C28569 * C1052) * C86 +
           (C211 * C965 + C28569 * C1057) * C73 +
           (C211 * C961 + C28569 * C1053) * C84) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
            C3185 * C3050 + C3049 * C3186) *
               C1350 +
           (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
            C3185 * C3053 + C3049 * C3189) *
               C1344 +
           (C3205 + C3206 + C3207) * C1352 + (C3208 + C3209 + C3210) * C28517) *
              C28558 * C956 -
          ((C3185 * C4129 + C3049 * C4281 + C3184 * C3054 + C3048 * C3190 +
            C3183 * C964 + C3047 * C1056) *
               C28517 +
           (C3185 * C4127 + C3049 * C4279 + C3184 * C3051 + C3048 * C3187 +
            C3183 * C960 + C3047 * C1052) *
               C1352 +
           (C3185 * C4130 + C3049 * C4282 + C3184 * C3053 + C3048 * C3189 +
            C3183 * C965 + C3047 * C1057) *
               C1344 +
           (C3185 * C4128 + C3049 * C4280 + C3184 * C3050 + C3048 * C3186 +
            C3183 * C961 + C3047 * C1053) *
               C1350) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[8] +=
        (-std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C2176 + C2177) * C1425 + (C2178 + C2179) * C1347 +
           (C2180 + C2181) * C1426 + (C2182 + C2183) * C1348) *
              C28569 * C956 -
          ((C1352 * C2597 + C28517 * C2713 + C1350 * C2599 + C1344 * C2714) *
               C1348 +
           (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
               C1426 +
           (C1352 * C2598 + C28517 * C2715 + C1350 * C2600 + C1344 * C2716) *
               C1347 +
           (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
               C1425 +
           (C1352 * C1010 + C28517 * C1094 + C1350 * C1011 + C1344 * C1095) *
               C1346 +
           (C1352 * C960 + C28517 * C964 + C1350 * C961 + C1344 * C965) *
               C1424) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C956 -
          ((C90 * C1008 + C76 * C1092 + C88 * C1009 + C75 * C1093 +
            C86 * C1010 + C74 * C1094 + C84 * C1011 + C73 * C1095) *
               C28558 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C148) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C148 +
            (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
                C28558) *
               C3047 +
           ((C4352 + C4353) * C148 + (C4354 + C4355) * C28558) * C3048 +
           ((C4356 + C4357) * C148 + (C4358 + C4359) * C28558) * C3049) *
              C956 -
          (((C1352 * C4205 + C28517 * C4333 + C1350 * C4206 + C1344 * C4334) *
                C28558 +
            (C1352 * C4127 + C28517 * C4129 + C1350 * C4128 + C1344 * C4130) *
                C148) *
               C3049 +
           ((C4359 + C4358) * C28558 + (C4357 + C4356) * C148) * C3048 +
           ((C4355 + C4354) * C28558 + (C4353 + C4352) * C148) * C3047) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[8] += (-std::pow(Pi, 2.5) *
                  (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 +
                     C1630 + C1630 + C1347 * C761 + C1624 * C1353 + C1631 +
                     C1631 + C1348 * C1625) *
                        C1344 +
                    (C1650 + C1651 + C1652) * C28517) *
                       C28569 * C956 -
                   ((C1624 * C2529 + C2772 + C2772 + C1348 * C2767 +
                     C1623 * C2531 + C2773 + C2773 + C1347 * C2768 +
                     C1622 * C960 + C2774 + C2774 + C1346 * C1132) *
                        C28517 +
                    (C1624 * C2530 + C2775 + C2775 + C1348 * C2769 +
                     C1623 * C2532 + C2776 + C2776 + C1347 * C2770 +
                     C1622 * C961 + C2777 + C2777 + C1346 * C1133) *
                        C1344) *
                       C28569 * C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q)) -
                 (std::pow(Pi, 2.5) *
                  (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                    C337 * C74 + C338 * C75 + C339 * C76) *
                       C28569 * C956 -
                   ((C313 * C958 + C1135 + C1135 + C28558 * C1130) * C76 +
                    (C313 * C959 + C1136 + C1136 + C28558 * C1131) * C75 +
                    (C313 * C960 + C1137 + C1137 + C28558 * C1132) * C74 +
                    (C313 * C961 + C1138 + C1138 + C28558 * C1133) * C73) *
                       C28569 * C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q)) +
                 (2 * std::pow(Pi, 2.5) *
                  ((((C313 * C91 + C320 + C320 + C28558 * C314) * C1344 +
                     C337 * C28517) *
                        C3047 +
                    (C4426 + C4414) * C3048 + (C4427 + C4417) * C3049) *
                       C956 -
                   (((C313 * C4127 + C4418 + C4418 + C28558 * C4409) * C28517 +
                     (C313 * C4128 + C4419 + C4419 + C28558 * C4410) * C1344) *
                        C3049 +
                    (C4417 + C4427) * C3048 + (C4414 + C4426) * C3047) *
                       C957) *
                  C28750 * C28751) /
                     (p * q * std::sqrt(p + q));
    d2eeyz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 + C2100 * C1425 +
            C2298 * C1347 + C2102 * C1426 + C2299 * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C956 -
          (((C211 * C2597 + C28569 * C2827) * C1348 +
            (C211 * C2529 + C28569 * C2655) * C1426 +
            (C211 * C2598 + C28569 * C2828) * C1347 +
            (C211 * C2531 + C28569 * C2657) * C1425 +
            (C211 * C1010 + C28569 * C1174) * C1346 +
            (C211 * C960 + C28569 * C1052) * C1424) *
               C28517 +
           ((C211 * C2599 + C28569 * C2829) * C1348 +
            (C211 * C2530 + C28569 * C2656) * C1426 +
            (C211 * C2600 + C28569 * C2830) * C1347 +
            (C211 * C2532 + C28569 * C2658) * C1425 +
            (C211 * C1011 + C28569 * C1175) * C1346 +
            (C211 * C961 + C28569 * C1053) * C1424) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C956 -
          (((C211 * C1008 + C28569 * C1172) * C28558 +
            (C211 * C958 + C28569 * C1050) * C148) *
               C76 +
           ((C211 * C1009 + C28569 * C1173) * C28558 +
            (C211 * C959 + C28569 * C1051) * C148) *
               C75 +
           ((C211 * C1010 + C28569 * C1174) * C28558 +
            (C211 * C960 + C28569 * C1052) * C148) *
               C74 +
           ((C211 * C1011 + C28569 * C1175) * C28558 +
            (C211 * C961 + C28569 * C1053) * C148) *
               C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C148 +
            (C3183 * C149 + C3047 * C373 + C3184 * C1011 + C3048 * C1175 +
             C3185 * C3115 + C3049 * C3379) *
                C28558) *
               C1344 +
           ((C3205 + C3206 + C3207) * C148 + (C3389 + C3390 + C3391) * C28558) *
               C28517) *
              C956 -
          (((C3185 * C4205 + C3049 * C4477 + C3184 * C3116 + C3048 * C3380 +
             C3183 * C1010 + C3047 * C1174) *
                C28558 +
            (C3185 * C4127 + C3049 * C4279 + C3184 * C3051 + C3048 * C3187 +
             C3183 * C960 + C3047 * C1052) *
                C148) *
               C28517 +
           ((C3185 * C4206 + C3049 * C4478 + C3184 * C3115 + C3048 * C3379 +
             C3183 * C1011 + C3047 * C1175) *
                C28558 +
            (C3185 * C4128 + C3049 * C4280 + C3184 * C3050 + C3048 * C3186 +
             C3183 * C961 + C3047 * C1053) *
                C148) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C2176 + C2177) * C211 + (C2360 + C2361) * C28569) * C1347 +
           ((C2180 + C2181) * C211 + (C2362 + C2363) * C28569) * C1348) *
              C956 -
          (((C1352 * C2655 + C28517 * C2881 + C1350 * C2656 + C1344 * C2882) *
                C28569 +
            (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
                C211) *
               C1348 +
           ((C1352 * C2657 + C28517 * C2883 + C1350 * C2658 + C1344 * C2884) *
                C28569 +
            (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
                C211) *
               C1347 +
           ((C1352 * C1052 + C28517 * C1212 + C1350 * C1053 + C1344 * C1213) *
                C28569 +
            (C1352 * C960 + C28517 * C964 + C1350 * C961 + C1344 * C965) *
                C211) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C956 -
          ((C90 * C1050 + C76 * C1210 + C88 * C1051 + C75 * C1211 +
            C86 * C1052 + C74 * C1212 + C84 * C1053 + C73 * C1213) *
               C28569 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C211) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C3183 +
           (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
               C3047 +
           (C4352 + C4353) * C3184 + (C4540 + C4541) * C3048 +
           (C4356 + C4357) * C3185 + (C4542 + C4543) * C3049) *
              C28558 * C956 -
          ((C1352 * C4279 + C28517 * C4529 + C1350 * C4280 + C1344 * C4530) *
               C3049 +
           (C1352 * C4127 + C28517 * C4129 + C1350 * C4128 + C1344 * C4130) *
               C3185 +
           (C4543 + C4542) * C3048 + (C4357 + C4356) * C3184 +
           (C4541 + C4540) * C3047 + (C4353 + C4352) * C3183) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C956 -
          (((C1426 * C2655 + C1348 * C2935 + C1425 * C2657 + C1347 * C2936 +
             C1424 * C1052 + C1346 * C1250) *
                C28569 +
            (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 + C1347 * C2598 +
             C1424 * C960 + C1346 * C1010) *
                C211) *
               C28517 +
           ((C1426 * C2656 + C1348 * C2937 + C1425 * C2658 + C1347 * C2938 +
             C1424 * C1053 + C1346 * C1251) *
                C28569 +
            (C1426 * C2530 + C1348 * C2599 + C1425 * C2532 + C1347 * C2600 +
             C1424 * C961 + C1346 * C1011) *
                C211) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C956 -
          (((C148 * C1050 + C28558 * C1248) * C28569 +
            (C148 * C958 + C28558 * C1008) * C211) *
               C76 +
           ((C148 * C1051 + C28558 * C1249) * C28569 +
            (C148 * C959 + C28558 * C1009) * C211) *
               C75 +
           ((C148 * C1052 + C28558 * C1250) * C28569 +
            (C148 * C960 + C28558 * C1010) * C211) *
               C74 +
           ((C148 * C1053 + C28558 * C1251) * C28569 +
            (C148 * C961 + C28558 * C1011) * C211) *
               C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C3183 +
            (C148 * C212 + C28558 * C466) * C3047 + C4222 * C3184 +
            C4600 * C3048 + C4224 * C3185 + C4601 * C3049) *
               C1344 +
           (C3498 + C3499 + C3500 + C3508 + C3503 + C3509) * C28517) *
              C956 -
          (((C148 * C4279 + C28558 * C4593) * C3049 +
            (C148 * C4127 + C28558 * C4205) * C3185 + C3507 * C3048 +
            C3132 * C3184 + C3506 * C3047 + C3130 * C3183) *
               C28517 +
           ((C148 * C4280 + C28558 * C4594) * C3049 +
            (C148 * C4128 + C28558 * C4206) * C3185 + C4601 * C3048 +
            C4224 * C3184 + C4600 * C3047 + C4222 * C3183) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[8] +=
        (-std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 + C2478 * C1347 +
            C2479 * C1348) *
               C1344 +
           (C1887 + C1900 + C1901) * C28517) *
              C956 -
          (((C520 * C2529 + C2994 + C2994 + C28569 * C2989) * C1348 +
            (C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C1347 +
            (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C1346) *
               C28517 +
           ((C520 * C2530 + C2996 + C2996 + C28569 * C2991) * C1348 +
            (C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C1347 +
            (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C1346) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C956 -
          ((C520 * C958 + C1291 + C1291 + C28569 * C1286) * C28558 * C76 +
           (C520 * C959 + C1292 + C1292 + C28569 * C1287) * C28558 * C75 +
           (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C28558 * C74 +
           (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C28558 * C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3559 * C91 + C3566 + C3566 + C3047 * C521 + C3560 * C961 + C3567 +
            C3567 + C3048 * C1289 + C3561 * C3050 + C3568 + C3568 +
            C3049 * C3562) *
               C28558 * C1344 +
           (C3587 + C3588 + C3589) * C28558 * C28517) *
              C956 -
          ((C3561 * C4127 + C4654 + C4654 + C3049 * C4651 + C3560 * C3051 +
            C4655 + C4655 + C3048 * C3563 + C3559 * C960 + C4656 + C4656 +
            C3047 * C1288) *
               C28558 * C28517 +
           (C3561 * C4128 + C4657 + C4657 + C3049 * C4652 + C3560 * C3050 +
            C4658 + C4658 + C3048 * C3562 + C3559 * C961 + C4659 + C4659 +
            C3047 * C1289) *
               C28558 * C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4714 * C91 + C4721 + C4721 + C28737 * C101 + C4716 * C92 +
                     C4722 + C4722 + C28738 * C102 + C4718 * C93 + C4723 +
                     C4723 + C4711 * C103) *
                        C28715 +
                    (C4714 * C961 + C5792 + C5792 + C28737 * C969 +
                     C4716 * C960 + C5791 + C5791 + C28738 * C968 +
                     C4718 * C959 + C5790 + C5790 + C4711 * C967) *
                        C28633) *
                       C28558 * C28749 * C28750 * C81 -
                   ((C4718 * C958 + C6262 + C6262 + C4711 * C966 +
                     C4716 * C959 + C6263 + C6263 + C28738 * C967 +
                     C4714 * C960 + C6264 + C6264 + C28737 * C968) *
                        C28633 +
                    (C4718 * C94 + C4730 + C4730 + C4711 * C104 + C4716 * C93 +
                     C4731 + C4731 + C28738 * C103 + C4714 * C92 + C4732 +
                     C4732 + C28737 * C102) *
                        C28715) *
                       C28558 * C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C91 + C28558 * C149) * C4715 +
                     (C148 * C96 + C28558 * C154) * C28737 + C172 * C4717 +
                     C173 * C28738 + C174 * C4719 + C175 * C4711) *
                        C28715 +
                    (C4222 * C4715 + C4223 * C28737 + C3130 * C4717 +
                     C3131 * C28738 + C6319 * C4719 + C6320 * C4711) *
                        C28633) *
                       C28749 * C28750 * C81 -
                   (((C148 * C962 + C28558 * C1012) * C4711 +
                     (C148 * C958 + C28558 * C1008) * C4719 + C6320 * C28738 +
                     C6319 * C4717 + C3131 * C28737 + C3130 * C4715) *
                        C28633 +
                    (C177 * C4711 + C176 * C4719 + C175 * C28738 +
                     C174 * C4717 + C173 * C28737 + C172 * C4715) *
                        C28715) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C4715 +
           (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
               C28737 +
           (C6389 + C6390) * C4717 + (C6391 + C6392) * C28738 +
           (C6393 + C6394) * C4719 + (C6395 + C6396) * C4711) *
              C28558 * C28749 * C28750 * C81 -
          ((C6371 * C962 + C28633 * C1054 + C6370 * C99 + C28715 * C220) *
               C4711 +
           (C6371 * C958 + C28633 * C1050 + C6370 * C94 + C28715 * C215) *
               C4719 +
           (C6396 + C6395) * C28738 + (C6394 + C6393) * C4717 +
           (C6392 + C6391) * C28737 + (C6390 + C6389) * C4715) *
              C28558 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
                      C4719 * C93 + C4711 * C98) *
                         C148 +
                     (C4715 * C149 + C28737 * C274 + C4717 * C150 +
                      C28738 * C275 + C4719 * C151 + C4711 * C276) *
                         C28558) *
                        C28715 +
                    ((C4715 * C961 + C28737 * C965 + C4717 * C960 +
                      C28738 * C964 + C4719 * C959 + C4711 * C963) *
                         C148 +
                     (C4715 * C1011 + C28737 * C1095 + C4717 * C1010 +
                      C28738 * C1094 + C4719 * C1009 + C4711 * C1093) *
                         C28558) *
                        C28633) *
                       C28749 * C28750 * C81 -
                   (((C4719 * C1008 + C4711 * C1092 + C4717 * C1009 +
                      C28738 * C1093 + C4715 * C1010 + C28737 * C1094) *
                         C28558 +
                     (C4719 * C958 + C4711 * C962 + C4717 * C959 +
                      C28738 * C963 + C4715 * C960 + C28737 * C964) *
                         C148) *
                        C28633 +
                    ((C4719 * C152 + C4711 * C277 + C4717 * C151 +
                      C28738 * C276 + C4715 * C150 + C28737 * C275) *
                         C28558 +
                     (C4719 * C94 + C4711 * C99 + C4717 * C93 + C28738 * C98 +
                      C4715 * C92 + C28737 * C97) *
                         C148) *
                        C28715) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eeyy[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28737 +
            C337 * C28738 + C338 * C4711) *
               C28715 +
           (C4424 * C28737 + C3328 * C28738 + C6501 * C4711) * C28633) *
              C28749 * C28750 * C81 -
          (((C313 * C958 + C1135 + C1135 + C28558 * C1130) * C4711 +
            C6501 * C28738 + C3328 * C28737) *
               C28633 +
           (C339 * C4711 + C338 * C28738 + C337 * C28737) * C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[9] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C148 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28558) *
               C28737 +
           ((C6389 + C6390) * C148 + (C6560 + C6561) * C28558) * C28738 +
           ((C6393 + C6394) * C148 + (C6562 + C6563) * C28558) * C4711) *
              C28749 * C28750 * C81 -
          (((C6371 * C1008 + C28633 * C1172 + C6370 * C152 + C28715 * C376) *
                C28558 +
            (C6371 * C958 + C28633 * C1050 + C6370 * C94 + C28715 * C215) *
                C148) *
               C4711 +
           ((C6563 + C6562) * C28558 + (C6394 + C6393) * C148) * C28738 +
           ((C6561 + C6560) * C28558 + (C6390 + C6389) * C148) * C28737) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
                     C4719 * C93 + C4711 * C98) *
                        C6370 +
                    (C4715 * C212 + C28737 * C427 + C4717 * C213 +
                     C28738 * C428 + C4719 * C214 + C4711 * C429) *
                        C28715 +
                    (C4715 * C961 + C28737 * C965 + C4717 * C960 +
                     C28738 * C964 + C4719 * C959 + C4711 * C963) *
                        C6371 +
                    (C4715 * C1053 + C28737 * C1213 + C4717 * C1052 +
                     C28738 * C1212 + C4719 * C1051 + C4711 * C1211) *
                        C28633) *
                       C28558 * C28749 * C28750 * C81 -
                   ((C4719 * C1050 + C4711 * C1210 + C4717 * C1051 +
                     C28738 * C1211 + C4715 * C1052 + C28737 * C1212) *
                        C28633 +
                    (C4719 * C958 + C4711 * C962 + C4717 * C959 +
                     C28738 * C963 + C4715 * C960 + C28737 * C964) *
                        C6371 +
                    (C4719 * C215 + C4711 * C430 + C4717 * C214 +
                     C28738 * C429 + C4715 * C213 + C28737 * C428) *
                        C28715 +
                    (C4719 * C94 + C4711 * C99 + C4717 * C93 + C28738 * C98 +
                     C4715 * C92 + C28737 * C97) *
                        C6370) *
                       C28558 * C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezy[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  ((((C148 * C91 + C28558 * C149) * C6370 +
                     (C148 * C212 + C28558 * C466) * C28715 + C4222 * C6371 +
                     C4600 * C28633) *
                        C28737 +
                    (C6664 + C6665 + C6666 + C6667) * C28738 +
                    (C6668 + C6669 + C6670 + C6674) * C4711) *
                       C28749 * C28750 * C81 -
                   (((C148 * C1050 + C28558 * C1248) * C28633 +
                     (C148 * C958 + C28558 * C1008) * C6371 + C483 * C28715 +
                     C176 * C6370) *
                        C4711 +
                    (C6674 + C6670 + C6669 + C6668) * C28738 +
                    (C6667 + C6666 + C6665 + C6664) * C28737) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eezz[9] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                  (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                     C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                        C28558 * C28737 +
                    (C6751 + C6752) * C28558 * C28738 +
                    (C6753 + C6754) * C28558 * C4711) *
                       C28749 * C28750 * C81 -
                   ((C6725 * C958 + C6741 + C6741 + C28633 * C1286 +
                     C6724 * C94 + C6742 + C6742 + C28715 * C524) *
                        C28558 * C4711 +
                    (C6754 + C6753) * C28558 * C28738 +
                    (C6752 + C6751) * C28558 * C28737) *
                       C28749 * C28750 * C82)) /
                 (p * q * std::sqrt(p + q));
    d2eexx[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4714 * C91 + C4721 + C4721 + C28737 * C101 +
                      C4716 * C92 + C4722 + C4722 + C28738 * C102 +
                      C4718 * C93 + C4723 + C4723 + C4711 * C103) *
                         C28715 +
                     (C4714 * C961 + C5792 + C5792 + C28737 * C969 +
                      C4716 * C960 + C5791 + C5791 + C28738 * C968 +
                      C4718 * C959 + C5790 + C5790 + C4711 * C967) *
                         C28633) *
                        C28558 * C28749 * C583 -
                    ((C4718 * C5783 + C5787 + C5787 + C4711 * C5785 +
                      C4716 * C2531 + C5788 + C5788 + C28738 * C2539 +
                      C4714 * C2532 + C5789 + C5789 + C28737 * C2540) *
                         C28633 +
                     (C5294 + C5293 + C5292) * C28715) *
                        C28558 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C4715 +
                      (C148 * C96 + C28558 * C154) * C28737 + C172 * C4717 +
                      C173 * C28738 + C174 * C4719 + C175 * C4711) *
                         C28715 +
                     (C4222 * C4715 + C4223 * C28737 + C3130 * C4717 +
                      C3131 * C28738 + C6319 * C4719 + C6320 * C4711) *
                         C28633) *
                        C28749 * C583 -
                    (((C148 * C5784 + C28558 * C5843) * C4711 +
                      (C148 * C5783 + C28558 * C5842) * C4719 +
                      (C148 * C2535 + C28558 * C2602) * C28738 +
                      (C148 * C2531 + C28558 * C2598) * C4717 +
                      (C148 * C2536 + C28558 * C2604) * C28737 +
                      (C148 * C2532 + C28558 * C2600) * C4715) *
                         C28633 +
                     ((C148 * C591 + C28558 * C641) * C4711 +
                      (C148 * C587 + C28558 * C637) * C4719 +
                      (C148 * C592 + C28558 * C642) * C28738 +
                      (C148 * C588 + C28558 * C638) * C4717 +
                      (C148 * C593 + C28558 * C643) * C28737 +
                      (C148 * C589 + C28558 * C639) * C4715) *
                         C28715) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C4715 +
           (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
               C28737 +
           (C6389 + C6390) * C4717 + (C6391 + C6392) * C28738 +
           (C6393 + C6394) * C4719 + (C6395 + C6396) * C4711) *
              C28558 * C28749 * C583 -
          ((C6371 * C5784 + C28633 * C5895 + C6370 * C591 + C28715 * C683) *
               C4711 +
           (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
               C4719 +
           (C6371 * C2535 + C28633 * C2661 + C6370 * C592 + C28715 * C684) *
               C28738 +
           (C6371 * C2531 + C28633 * C2657 + C6370 * C588 + C28715 * C680) *
               C4717 +
           (C6371 * C2536 + C28633 * C2662 + C6370 * C593 + C28715 * C685) *
               C28737 +
           (C6371 * C2532 + C28633 * C2658 + C6370 * C589 + C28715 * C681) *
               C4715) *
              C28558 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
             C4719 * C93 + C4711 * C98) *
                C148 +
            (C4715 * C149 + C28737 * C274 + C4717 * C150 + C28738 * C275 +
             C4719 * C151 + C4711 * C276) *
                C28558) *
               C28715 +
           ((C4715 * C961 + C28737 * C965 + C4717 * C960 + C28738 * C964 +
             C4719 * C959 + C4711 * C963) *
                C148 +
            (C4715 * C1011 + C28737 * C1095 + C4717 * C1010 + C28738 * C1094 +
             C4719 * C1009 + C4711 * C1093) *
                C28558) *
               C28633) *
              C28749 * C583 -
          (((C4719 * C5842 + C4711 * C5946 + C4717 * C2598 + C28738 * C2715 +
             C4715 * C2600 + C28737 * C2716) *
                C28558 +
            (C4719 * C5783 + C4711 * C5784 + C4717 * C2531 + C28738 * C2535 +
             C4715 * C2532 + C28737 * C2536) *
                C148) *
               C28633 +
           ((C5468 + C5467 + C5466) * C28558 + (C5465 + C5464 + C5463) * C148) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28737 +
            C337 * C28738 + C338 * C4711) *
               C28715 +
           (C4424 * C28737 + C3328 * C28738 + C6501 * C4711) * C28633) *
              C28749 * C583 -
          (((C313 * C5783 + C7005 + C7005 + C28558 * C5997) * C4711 +
            (C313 * C2531 + C3862 + C3862 + C28558 * C2768) * C28738 +
            (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C28737) *
               C28633 +
           ((C313 * C587 + C764 + C764 + C28558 * C759) * C4711 +
            (C313 * C588 + C765 + C765 + C28558 * C760) * C28738 +
            (C313 * C589 + C766 + C766 + C28558 * C761) * C28737) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C148 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28558) *
               C28737 +
           ((C6389 + C6390) * C148 + (C6560 + C6561) * C28558) * C28738 +
           ((C6393 + C6394) * C148 + (C6562 + C6563) * C28558) * C4711) *
              C28749 * C583 -
          (((C6371 * C5842 + C28633 * C6054 + C6370 * C637 + C28715 * C801) *
                C28558 +
            (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
                C148) *
               C4711 +
           ((C6371 * C2598 + C28633 * C2828 + C6370 * C638 + C28715 * C802) *
                C28558 +
            (C6371 * C2531 + C28633 * C2657 + C6370 * C588 + C28715 * C680) *
                C148) *
               C28738 +
           ((C6371 * C2600 + C28633 * C2830 + C6370 * C639 + C28715 * C803) *
                C28558 +
            (C6371 * C2532 + C28633 * C2658 + C6370 * C589 + C28715 * C681) *
                C148) *
               C28737) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[10] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
            C4719 * C93 + C4711 * C98) *
               C6370 +
           (C4715 * C212 + C28737 * C427 + C4717 * C213 + C28738 * C428 +
            C4719 * C214 + C4711 * C429) *
               C28715 +
           (C4715 * C961 + C28737 * C965 + C4717 * C960 + C28738 * C964 +
            C4719 * C959 + C4711 * C963) *
               C6371 +
           (C4715 * C1053 + C28737 * C1213 + C4717 * C1052 + C28738 * C1212 +
            C4719 * C1051 + C4711 * C1211) *
               C28633) *
              C28558 * C28749 * C583 -
          ((C4719 * C5894 + C4711 * C6105 + C4717 * C2657 + C28738 * C2883 +
            C4715 * C2658 + C28737 * C2884) *
               C28633 +
           (C4719 * C5783 + C4711 * C5784 + C4717 * C2531 + C28738 * C2535 +
            C4715 * C2532 + C28737 * C2536) *
               C6371 +
           (C5633 + C5632 + C5631) * C28715 + (C5465 + C5464 + C5463) * C6370) *
              C28558 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C6370 +
                      (C148 * C212 + C28558 * C466) * C28715 + C4222 * C6371 +
                      C4600 * C28633) *
                         C28737 +
                     (C6664 + C6665 + C6666 + C6667) * C28738 +
                     (C6668 + C6669 + C6670 + C6674) * C4711) *
                        C28749 * C583 -
                    (((C148 * C5894 + C28558 * C6156) * C28633 +
                      (C148 * C5783 + C28558 * C5842) * C6371 +
                      (C148 * C679 + C28558 * C877) * C28715 +
                      (C148 * C587 + C28558 * C637) * C6370) *
                         C4711 +
                     ((C148 * C2657 + C28558 * C2936) * C28633 +
                      (C148 * C2531 + C28558 * C2598) * C6371 +
                      (C148 * C680 + C28558 * C878) * C28715 +
                      (C148 * C588 + C28558 * C638) * C6370) *
                         C28738 +
                     ((C148 * C2658 + C28558 * C2938) * C28633 +
                      (C148 * C2532 + C28558 * C2600) * C6371 +
                      (C148 * C681 + C28558 * C879) * C28715 +
                      (C148 * C589 + C28558 * C639) * C6370) *
                         C28737) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezz[10] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                      C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                         C28558 * C28737 +
                     (C6751 + C6752) * C28558 * C28738 +
                     (C6753 + C6754) * C28558 * C4711) *
                        C28749 * C583 -
                    ((C6725 * C5783 + C7206 + C7206 + C28633 * C6207 +
                      C6724 * C587 + C7207 + C7207 + C28715 * C915) *
                         C28558 * C4711 +
                     (C6725 * C2531 + C7208 + C7208 + C28633 * C2990 +
                      C6724 * C588 + C7209 + C7209 + C28715 * C916) *
                         C28558 * C28738 +
                     (C6725 * C2532 + C7210 + C7210 + C28633 * C2992 +
                      C6724 * C589 + C7211 + C7211 + C28715 * C917) *
                         C28558 * C28737) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4714 * C91 + C4721 + C4721 + C28737 * C101 +
                      C4716 * C92 + C4722 + C4722 + C28738 * C102 +
                      C4718 * C93 + C4723 + C4723 + C4711 * C103) *
                         C28715 +
                     (C7277 + C7278 + C7279) * C28633) *
                        C28558 * C956 -
                    ((C4718 * C3052 + C7268 + C7268 + C4711 * C3058 +
                      C4716 * C3051 + C7269 + C7269 + C28738 * C3057 +
                      C4714 * C3050 + C7270 + C7270 + C28737 * C3056) *
                         C28633 +
                     (C7279 + C7278 + C7277) * C28715) *
                        C28558 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C4715 +
                      (C148 * C96 + C28558 * C154) * C28737 + C172 * C4717 +
                      C173 * C28738 + C174 * C4719 + C175 * C4711) *
                         C28715 +
                     (C7330 + C7331 + C7332 + C7333 + C7334 + C7335) * C28633) *
                        C956 -
                    (((C148 * C3055 + C28558 * C3120) * C4711 +
                      (C148 * C3052 + C28558 * C3117) * C4719 + C3133 * C28738 +
                      C3132 * C4717 + C4225 * C28737 + C4224 * C4715) *
                         C28633 +
                     (C7335 + C7334 + C7333 + C7332 + C7331 + C7330) * C28715) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C4715 +
           (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
               C28737 +
           (C6389 + C6390) * C4717 + (C6391 + C6392) * C28738 +
           (C6393 + C6394) * C4719 + (C6395 + C6396) * C4711) *
              C28558 * C956 -
          ((C6371 * C3055 + C28633 * C3191 + C6370 * C963 + C28715 * C1055) *
               C4711 +
           (C6371 * C3052 + C28633 * C3188 + C6370 * C959 + C28715 * C1051) *
               C4719 +
           (C6371 * C3054 + C28633 * C3190 + C6370 * C964 + C28715 * C1056) *
               C28738 +
           (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
               C4717 +
           (C6371 * C3053 + C28633 * C3189 + C6370 * C965 + C28715 * C1057) *
               C28737 +
           (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
               C4715) *
              C28558 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
             C4719 * C93 + C4711 * C98) *
                C148 +
            (C4715 * C149 + C28737 * C274 + C4717 * C150 + C28738 * C275 +
             C4719 * C151 + C4711 * C276) *
                C28558) *
               C28715 +
           ((C7448 + C7449 + C7450) * C148 + (C7451 + C7452 + C7453) * C28558) *
               C28633) *
              C956 -
          (((C4719 * C3117 + C4711 * C3262 + C4717 * C3116 + C28738 * C3261 +
             C4715 * C3115 + C28737 * C3260) *
                C28558 +
            (C4719 * C3052 + C4711 * C3055 + C4717 * C3051 + C28738 * C3054 +
             C4715 * C3050 + C28737 * C3053) *
                C148) *
               C28633 +
           ((C7453 + C7452 + C7451) * C28558 + (C7450 + C7449 + C7448) * C148) *
               C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28737 +
                      C337 * C28738 + C338 * C4711) *
                         C28715 +
                     (C7504 + C7505 + C7506) * C28633) *
                        C956 -
                    (((C313 * C3052 + C3323 + C3323 + C28558 * C3315) * C4711 +
                      C3329 * C28738 + C4425 * C28737) *
                         C28633 +
                     (C7506 + C7505 + C7504) * C28715) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C148 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C28558) *
               C28737 +
           ((C6389 + C6390) * C148 + (C6560 + C6561) * C28558) * C28738 +
           ((C6393 + C6394) * C148 + (C6562 + C6563) * C28558) * C4711) *
              C956 -
          (((C6371 * C3117 + C28633 * C3381 + C6370 * C1009 + C28715 * C1173) *
                C28558 +
            (C6371 * C3052 + C28633 * C3188 + C6370 * C959 + C28715 * C1051) *
                C148) *
               C4711 +
           ((C6371 * C3116 + C28633 * C3380 + C6370 * C1010 + C28715 * C1174) *
                C28558 +
            (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
                C148) *
               C28738 +
           ((C6371 * C3115 + C28633 * C3379 + C6370 * C1011 + C28715 * C1175) *
                C28558 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C148) *
               C28737) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4715 * C91 + C28737 * C96 + C4717 * C92 + C28738 * C97 +
            C4719 * C93 + C4711 * C98) *
               C6370 +
           (C4715 * C212 + C28737 * C427 + C4717 * C213 + C28738 * C428 +
            C4719 * C214 + C4711 * C429) *
               C28715 +
           (C7448 + C7449 + C7450) * C6371 + (C7613 + C7614 + C7615) * C28633) *
              C28558 * C956 -
          ((C4719 * C3188 + C4711 * C3443 + C4717 * C3187 + C28738 * C3442 +
            C4715 * C3186 + C28737 * C3441) *
               C28633 +
           (C4719 * C3052 + C4711 * C3055 + C4717 * C3051 + C28738 * C3054 +
            C4715 * C3050 + C28737 * C3053) *
               C6371 +
           (C7615 + C7614 + C7613) * C28715 + (C7450 + C7449 + C7448) * C6370) *
              C28558 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[11] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C6370 +
            (C148 * C212 + C28558 * C466) * C28715 + C4222 * C6371 +
            C4600 * C28633) *
               C28737 +
           (C6664 + C6665 + C6666 + C6667) * C28738 +
           (C6668 + C6669 + C6670 + C6674) * C4711) *
              C956 -
          (((C148 * C3188 + C28558 * C3496) * C28633 +
            (C148 * C3052 + C28558 * C3117) * C6371 + C6673 * C28715 +
            C6319 * C6370) *
               C4711 +
           (C3507 * C28633 + C3132 * C6371 + C3506 * C28715 + C3130 * C6370) *
               C28738 +
           (C4601 * C28633 + C4224 * C6371 + C4600 * C28715 + C4222 * C6370) *
               C28737) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[11] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                      C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                         C28558 * C28737 +
                     (C6751 + C6752) * C28558 * C28738 +
                     (C6753 + C6754) * C28558 * C4711) *
                        C956 -
                    ((C6725 * C3052 + C7716 + C7716 + C28633 * C3564 +
                      C6724 * C959 + C7717 + C7717 + C28715 * C1287) *
                         C28558 * C4711 +
                     (C6725 * C3051 + C7718 + C7718 + C28633 * C3563 +
                      C6724 * C960 + C7719 + C7719 + C28715 * C1288) *
                         C28558 * C28738 +
                     (C6725 * C3050 + C7720 + C7720 + C28633 * C3562 +
                      C6724 * C961 + C7721 + C7721 + C28715 * C1289) *
                         C28558 * C28737) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28569 * C28558 * C28749 * C28750 * C81 -
                    (C89 * C95 + C111 + C111 + C76 * C105 + C87 * C94 + C112 +
                     C112 + C75 * C104 + C85 * C93 + C113 + C113 + C74 * C103 +
                     C83 * C92 + C114 + C114 + C73 * C102) *
                        C28569 * C28558 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                      C1364 + C1364 + C28517 * C102) *
                         C28569 * C1346 +
                     (C1349 * C589 + C1365 + C1365 + C1344 * C597 +
                      C1351 * C588 + C1366 + C1366 + C28517 * C596) *
                         C28569 * C1347 +
                     (C1349 * C1353 + C1367 + C1367 + C1344 * C1359 +
                      C1351 * C1354 + C1368 + C1368 + C28517 * C1360) *
                         C28569 * C1348) *
                        C28749 * C28750 * C81 -
                    ((C1351 * C1355 + C1369 + C1369 + C28517 * C1361 +
                      C1349 * C1354 + C1370 + C1370 + C1344 * C1360) *
                         C28569 * C1348 +
                     (C1351 * C587 + C1371 + C1371 + C28517 * C595 +
                      C1349 * C588 + C1372 + C1372 + C1344 * C596) *
                         C28569 * C1347 +
                     (C1351 * C93 + C1373 + C1373 + C28517 * C103 +
                      C1349 * C92 + C1374 + C1374 + C1344 * C102) *
                         C28569 * C1346) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C28749 * C28750 * C81 -
          ((C148 * C100 + C28558 * C158) * C76 +
           (C148 * C95 + C28558 * C153) * C90 + C177 * C75 + C176 * C88 +
           C175 * C74 + C174 * C86 + C173 * C73 + C172 * C84) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C28749 * C28750 * C81 -
          ((C1426 * C1358 + C1348 * C1432 + C1425 * C591 + C1347 * C641 +
            C1424 * C98 + C1346 * C156) *
               C28517 +
           (C1426 * C1355 + C1348 * C1429 + C1425 * C587 + C1347 * C637 +
            C1424 * C93 + C1346 * C151) *
               C1352 +
           (C1451 + C1450 + C1449) * C1344 + (C1448 + C1447 + C1446) * C1350) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C28749 * C28750 * C81 -
          ((C211 * C100 + C28569 * C221) * C76 +
           (C211 * C95 + C28569 * C216) * C90 + C240 * C75 + C239 * C88 +
           C238 * C74 + C237 * C86 + C236 * C73 + C235 * C84) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           ((C211 * C589 + C28569 * C681) * C1350 +
            (C211 * C593 + C28569 * C685) * C1344 + C1516 * C1352 +
            C1517 * C28517) *
               C1347 +
           ((C211 * C1353 + C28569 * C1501) * C1350 +
            (C211 * C1356 + C28569 * C1504) * C1344 + C1518 * C1352 +
            C1519 * C28517) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C211 * C1358 + C28569 * C1506) * C28517 +
            (C211 * C1355 + C28569 * C1503) * C1352 + C1519 * C1344 +
            C1518 * C1350) *
               C1348 +
           ((C211 * C591 + C28569 * C683) * C28517 +
            (C211 * C587 + C28569 * C679) * C1352 + C1517 * C1344 +
            C1516 * C1350) *
               C1347 +
           (C238 * C28517 + C237 * C1352 + C236 * C1344 + C235 * C1350) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C28749 * C28750 * C81 -
          ((C90 * C153 + C76 * C278 + C88 * C152 + C75 * C277 + C86 * C151 +
            C74 * C276 + C84 * C150 + C73 * C275) *
               C28558 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C148) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C1350 * C589 + C1344 * C593 + C1352 * C588 + C28517 * C592) *
               C1425 +
           (C1350 * C639 + C1344 * C723 + C1352 * C638 + C28517 * C722) *
               C1347 +
           (C1350 * C1353 + C1344 * C1356 + C1352 * C1354 + C28517 * C1357) *
               C1426 +
           (C1350 * C1427 + C1344 * C1569 + C1352 * C1428 + C28517 * C1570) *
               C1348) *
              C28569 * C28749 * C28750 * C81 -
          ((C1352 * C1429 + C28517 * C1571 + C1350 * C1428 + C1344 * C1570) *
               C1348 +
           (C1352 * C1355 + C28517 * C1358 + C1350 * C1354 + C1344 * C1357) *
               C1426 +
           (C1352 * C637 + C28517 * C721 + C1350 * C638 + C1344 * C722) *
               C1347 +
           (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
               C1425 +
           (C1352 * C151 + C28517 * C276 + C1350 * C150 + C1344 * C275) *
               C1346 +
           (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C1424) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C313 * C95 + C330 + C330 + C28558 * C318) * C76 +
                     C339 * C75 + C338 * C74 + C337 * C73) *
                        C28569 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C1344 +
                     (C1650 + C1651 + C1652) * C28517) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C1624 * C1355 + C1641 + C1641 + C1348 * C1627 +
                      C1623 * C587 + C1642 + C1642 + C1347 * C759 +
                      C1622 * C93 + C1643 + C1643 + C1346 * C316) *
                         C28517 +
                     (C1652 + C1651 + C1650) * C1344) *
                        C28569 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28749 * C28750 * C81 -
          (((C211 * C153 + C28569 * C377) * C28558 +
            (C211 * C95 + C28569 * C216) * C148) *
               C76 +
           (C393 + C385) * C75 + (C392 + C382) * C74 + (C391 + C379) * C73) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 +
            (C211 * C589 + C28569 * C681) * C1425 +
            (C211 * C639 + C28569 * C803) * C1347 +
            (C211 * C1353 + C28569 * C1501) * C1426 +
            (C211 * C1427 + C28569 * C1702) * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C28749 * C28750 * C81 -
          (((C211 * C1429 + C28569 * C1704) * C1348 +
            (C211 * C1355 + C28569 * C1503) * C1426 +
            (C211 * C637 + C28569 * C801) * C1347 +
            (C211 * C587 + C28569 * C679) * C1425 + C389 * C1346 +
            C237 * C1424) *
               C28517 +
           (C1717 + C1711 + C1716 + C1708 + C1707 + C1706) * C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C28749 * C28750 * C81 -
          ((C90 * C216 + C76 * C431 + C88 * C215 + C75 * C430 + C86 * C214 +
            C74 * C429 + C84 * C213 + C73 * C428) *
               C28569 +
           (C90 * C95 + C76 * C100 + C88 * C94 + C75 * C99 + C86 * C93 +
            C74 * C98 + C84 * C92 + C73 * C97) *
               C211) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C1350 * C589 + C1344 * C593 + C1352 * C588 + C28517 * C592) *
                C211 +
            (C1350 * C681 + C1344 * C841 + C1352 * C680 + C28517 * C840) *
                C28569) *
               C1347 +
           ((C1350 * C1353 + C1344 * C1356 + C1352 * C1354 + C28517 * C1357) *
                C211 +
            (C1350 * C1501 + C1344 * C1767 + C1352 * C1502 + C28517 * C1768) *
                C28569) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C1352 * C1503 + C28517 * C1769 + C1350 * C1502 + C1344 * C1768) *
                C28569 +
            (C1352 * C1355 + C28517 * C1358 + C1350 * C1354 + C1344 * C1357) *
                C211) *
               C1348 +
           ((C1352 * C679 + C28517 * C839 + C1350 * C680 + C1344 * C840) *
                C28569 +
            (C1352 * C587 + C28517 * C591 + C1350 * C588 + C1344 * C592) *
                C211) *
               C1347 +
           ((C1352 * C214 + C28517 * C429 + C1350 * C213 + C1344 * C428) *
                C28569 +
            (C1352 * C93 + C28517 * C98 + C1350 * C92 + C1344 * C97) * C211) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[12] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28749 * C28750 * C81 -
          (((C148 * C216 + C28558 * C470) * C28569 +
            (C148 * C95 + C28558 * C153) * C211) *
               C76 +
           (C486 + C478) * C75 + (C485 + C475) * C74 + (C484 + C472) * C73) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C1426 * C1503 + C1348 * C1822 + C1425 * C679 + C1347 * C877 +
             C1424 * C214 + C1346 * C468) *
                C28569 +
            (C1426 * C1355 + C1348 * C1429 + C1425 * C587 + C1347 * C637 +
             C1424 * C93 + C1346 * C151) *
                C211) *
               C28517 +
           ((C1832 + C1831 + C1830) * C28569 + (C1448 + C1447 + C1446) * C211) *
               C1344) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[12] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
                     C547 * C74 + C548 * C75 + C549 * C76) *
                        C28749 * C28750 * C81 -
                    ((C520 * C95 + C537 + C537 + C28569 * C525) * C28558 * C76 +
                     C549 * C75 + C548 * C74 + C547 * C73) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 +
                      (C520 * C589 + C922 + C922 + C28569 * C917) * C1347 +
                      (C520 * C1353 + C1886 + C1886 + C28569 * C1882) * C1348) *
                         C1344 +
                     (C1887 + C1900 + C1901) * C28517) *
                        C28749 * C28750 * C81 -
                    (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C1348 +
                      (C520 * C587 + C920 + C920 + C28569 * C915) * C1347 +
                      C545 * C1346) *
                         C28517 +
                     (C1901 + C1900 + C1887) * C1344) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28569 * C28558 * C28749 * C583 -
                    (C89 * C586 + C599 + C599 + C76 * C594 + C87 * C587 + C600 +
                     C600 + C75 * C595 + C85 * C588 + C601 + C601 + C74 * C596 +
                     C83 * C589 + C602 + C602 + C73 * C597) *
                        C28569 * C28558 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                      C1364 + C1364 + C28517 * C102) *
                         C28569 * C1346 +
                     (C1976 + C1977) * C28569 * C1347 +
                     (C1978 + C1979) * C28569 * C1348) *
                        C28749 * C583 -
                    ((C1351 * C1951 + C1966 + C1966 + C28517 * C1955 +
                      C1349 * C1952 + C1967 + C1967 + C1344 * C1956) *
                         C28569 * C1348 +
                     (C1979 + C1978) * C28569 * C1347 +
                     (C1977 + C1976) * C28569 * C1346) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eexy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C28749 * C583 -
          ((C148 * C590 + C28558 * C640) * C76 +
           (C148 * C586 + C28558 * C636) * C90 +
           (C148 * C591 + C28558 * C641) * C75 +
           (C148 * C587 + C28558 * C637) * C88 +
           (C148 * C592 + C28558 * C642) * C74 +
           (C148 * C588 + C28558 * C638) * C86 +
           (C148 * C593 + C28558 * C643) * C73 +
           (C148 * C589 + C28558 * C639) * C84) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C28749 * C583 -
          ((C1426 * C1953 + C1348 * C2031 + C1425 * C1357 + C1347 * C1431 +
            C1424 * C592 + C1346 * C642) *
               C28517 +
           (C1426 * C1951 + C1348 * C2029 + C1425 * C1354 + C1347 * C1428 +
            C1424 * C588 + C1346 * C638) *
               C1352 +
           (C1426 * C1954 + C1348 * C2032 + C1425 * C1356 + C1347 * C1430 +
            C1424 * C593 + C1346 * C643) *
               C1344 +
           (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 + C1347 * C1427 +
            C1424 * C589 + C1346 * C639) *
               C1350) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C28749 * C583 -
          ((C211 * C590 + C28569 * C682) * C76 +
           (C211 * C586 + C28569 * C678) * C90 +
           (C211 * C591 + C28569 * C683) * C75 +
           (C211 * C587 + C28569 * C679) * C88 +
           (C211 * C592 + C28569 * C684) * C74 +
           (C211 * C588 + C28569 * C680) * C86 +
           (C211 * C593 + C28569 * C685) * C73 +
           (C211 * C589 + C28569 * C681) * C84) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           (C2104 + C2105 + C2092 + C2093) * C1347 +
           (C2106 + C2107 + C2098 + C2099) * C1348) *
              C28749 * C583 -
          (((C211 * C1953 + C28569 * C2085) * C28517 +
            (C211 * C1951 + C28569 * C2083) * C1352 +
            (C211 * C1954 + C28569 * C2086) * C1344 +
            (C211 * C1952 + C28569 * C2084) * C1350) *
               C1348 +
           (C2099 + C2098 + C2107 + C2106) * C1347 +
           (C2093 + C2092 + C2105 + C2104) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C28749 * C583 -
          ((C90 * C636 + C76 * C720 + C88 * C637 + C75 * C721 + C86 * C638 +
            C74 * C722 + C84 * C639 + C73 * C723) *
               C28558 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C148) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C2176 + C2177) * C1425 + (C2178 + C2179) * C1347 +
           (C2180 + C2181) * C1426 + (C2182 + C2183) * C1348) *
              C28569 * C28749 * C583 -
          ((C1352 * C2029 + C28517 * C2157 + C1350 * C2030 + C1344 * C2158) *
               C1348 +
           (C1352 * C1951 + C28517 * C1953 + C1350 * C1952 + C1344 * C1954) *
               C1426 +
           (C2183 + C2182) * C1347 + (C2181 + C2180) * C1425 +
           (C2179 + C2178) * C1346 + (C2177 + C2176) * C1424) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[13] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28569 * C28749 * C583 -
                    ((C313 * C586 + C763 + C763 + C28558 * C758) * C76 +
                     (C313 * C587 + C764 + C764 + C28558 * C759) * C75 +
                     (C313 * C588 + C765 + C765 + C28558 * C760) * C74 +
                     (C313 * C589 + C766 + C766 + C28558 * C761) * C73) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C1344 +
                     (C1650 + C1651 + C1652) * C28517) *
                        C28569 * C28749 * C583 -
                    ((C1624 * C1951 + C2236 + C2236 + C1348 * C2233 +
                      C1623 * C1354 + C2237 + C2237 + C1347 * C1626 +
                      C1622 * C588 + C2238 + C2238 + C1346 * C760) *
                         C28517 +
                     (C1624 * C1952 + C2239 + C2239 + C1348 * C2234 +
                      C1623 * C1353 + C2240 + C2240 + C1347 * C1625 +
                      C1622 * C589 + C2241 + C2241 + C1346 * C761) *
                         C1344) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C28749 * C583 -
          (((C211 * C636 + C28569 * C800) * C28558 +
            (C211 * C586 + C28569 * C678) * C148) *
               C76 +
           ((C211 * C637 + C28569 * C801) * C28558 +
            (C211 * C587 + C28569 * C679) * C148) *
               C75 +
           ((C211 * C638 + C28569 * C802) * C28558 +
            (C211 * C588 + C28569 * C680) * C148) *
               C74 +
           ((C211 * C639 + C28569 * C803) * C28558 +
            (C211 * C589 + C28569 * C681) * C148) *
               C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 + C2100 * C1425 +
            C2298 * C1347 + C2102 * C1426 + C2299 * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C28749 * C583 -
          (((C211 * C2029 + C28569 * C2291) * C1348 +
            (C211 * C1951 + C28569 * C2083) * C1426 + C1715 * C1347 +
            C1518 * C1425 + C1714 * C1346 + C1516 * C1424) *
               C28517 +
           ((C211 * C2030 + C28569 * C2292) * C1348 +
            (C211 * C1952 + C28569 * C2084) * C1426 + C2299 * C1347 +
            C2102 * C1425 + C2298 * C1346 + C2100 * C1424) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C28749 * C583 -
          ((C90 * C678 + C76 * C838 + C88 * C679 + C75 * C839 + C86 * C680 +
            C74 * C840 + C84 * C681 + C73 * C841) *
               C28569 +
           (C90 * C586 + C76 * C590 + C88 * C587 + C75 * C591 + C86 * C588 +
            C74 * C592 + C84 * C589 + C73 * C593) *
               C211) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C2176 + C2177) * C211 + (C2360 + C2361) * C28569) * C1347 +
           ((C2180 + C2181) * C211 + (C2362 + C2363) * C28569) * C1348) *
              C28749 * C583 -
          (((C1352 * C2083 + C28517 * C2349 + C1350 * C2084 + C1344 * C2350) *
                C28569 +
            (C1352 * C1951 + C28517 * C1953 + C1350 * C1952 + C1344 * C1954) *
                C211) *
               C1348 +
           ((C2363 + C2362) * C28569 + (C2181 + C2180) * C211) * C1347 +
           ((C2361 + C2360) * C28569 + (C2177 + C2176) * C211) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C28749 * C583 -
          (((C148 * C678 + C28558 * C876) * C28569 +
            (C148 * C586 + C28558 * C636) * C211) *
               C76 +
           ((C148 * C679 + C28558 * C877) * C28569 +
            (C148 * C587 + C28558 * C637) * C211) *
               C75 +
           ((C148 * C680 + C28558 * C878) * C28569 +
            (C148 * C588 + C28558 * C638) * C211) *
               C74 +
           ((C148 * C681 + C28558 * C879) * C28569 +
            (C148 * C589 + C28558 * C639) * C211) *
               C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C28749 * C583 -
          (((C1426 * C2083 + C1348 * C2413 + C1425 * C1502 + C1347 * C1821 +
             C1424 * C680 + C1346 * C878) *
                C28569 +
            (C1426 * C1951 + C1348 * C2029 + C1425 * C1354 + C1347 * C1428 +
             C1424 * C588 + C1346 * C638) *
                C211) *
               C28517 +
           ((C1426 * C2084 + C1348 * C2414 + C1425 * C1501 + C1347 * C1820 +
             C1424 * C681 + C1346 * C879) *
                C28569 +
            (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 + C1347 * C1427 +
             C1424 * C589 + C1346 * C639) *
                C211) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[13] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C28749 * C583 -
          ((C520 * C586 + C919 + C919 + C28569 * C914) * C28558 * C76 +
           (C520 * C587 + C920 + C920 + C28569 * C915) * C28558 * C75 +
           (C520 * C588 + C921 + C921 + C28569 * C916) * C28558 * C74 +
           (C520 * C589 + C922 + C922 + C28569 * C917) * C28558 * C73) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 + C2478 * C1347 +
            C2479 * C1348) *
               C1344 +
           (C1887 + C1900 + C1901) * C28517) *
              C28749 * C583 -
          (((C520 * C1951 + C2472 + C2472 + C28569 * C2465) * C1348 +
            C1899 * C1347 + C1898 * C1346) *
               C28517 +
           ((C520 * C1952 + C2473 + C2473 + C28569 * C2466) * C1348 +
            C2479 * C1347 + C2478 * C1346) *
               C1344) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((C83 * C91 + C107 + C107 + C73 * C101 + C85 * C92 + C108 +
                     C108 + C74 * C102 + C87 * C93 + C109 + C109 + C75 * C103 +
                     C89 * C94 + C110 + C110 + C76 * C104) *
                        C28569 * C28558 * C956 -
                    (C89 * C958 + C971 + C971 + C76 * C966 + C87 * C959 + C972 +
                     C972 + C75 * C967 + C85 * C960 + C973 + C973 + C74 * C968 +
                     C83 * C961 + C974 + C974 + C73 * C969) *
                        C28569 * C28558 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1349 * C91 + C1363 + C1363 + C1344 * C101 + C1351 * C92 +
                      C1364 + C1364 + C28517 * C102) *
                         C28569 * C1346 +
                     (C1976 + C1977) * C28569 * C1347 +
                     (C1978 + C1979) * C28569 * C1348) *
                        C956 -
                    ((C1351 * C2529 + C2542 + C2542 + C28517 * C2537 +
                      C1349 * C2530 + C2543 + C2543 + C1344 * C2538) *
                         C28569 * C1348 +
                     (C1351 * C2531 + C2544 + C2544 + C28517 * C2539 +
                      C1349 * C2532 + C2545 + C2545 + C1344 * C2540) *
                         C28569 * C1347 +
                     (C1351 * C960 + C2546 + C2546 + C28517 * C968 +
                      C1349 * C961 + C2547 + C2547 + C1344 * C969) *
                         C28569 * C1346) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eexy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C84 +
           (C148 * C96 + C28558 * C154) * C73 + C172 * C86 + C173 * C74 +
           C174 * C88 + C175 * C75 + C176 * C90 + C177 * C76) *
              C28569 * C956 -
          ((C148 * C962 + C28558 * C1012) * C76 +
           (C148 * C958 + C28558 * C1008) * C90 +
           (C148 * C963 + C28558 * C1013) * C75 +
           (C148 * C959 + C28558 * C1009) * C88 +
           (C148 * C964 + C28558 * C1014) * C74 +
           (C148 * C960 + C28558 * C1010) * C86 +
           (C148 * C965 + C28558 * C1015) * C73 +
           (C148 * C961 + C28558 * C1011) * C84) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C1350 +
           (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
            C1426 * C1356 + C1348 * C1430) *
               C1344 +
           (C1446 + C1447 + C1448) * C1352 + (C1449 + C1450 + C1451) * C28517) *
              C28569 * C956 -
          ((C1426 * C2533 + C1348 * C2601 + C1425 * C2535 + C1347 * C2602 +
            C1424 * C964 + C1346 * C1014) *
               C28517 +
           (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 + C1347 * C2598 +
            C1424 * C960 + C1346 * C1010) *
               C1352 +
           (C1426 * C2534 + C1348 * C2603 + C1425 * C2536 + C1347 * C2604 +
            C1424 * C965 + C1346 * C1015) *
               C1344 +
           (C1426 * C2530 + C1348 * C2599 + C1425 * C2532 + C1347 * C2600 +
            C1424 * C961 + C1346 * C1011) *
               C1350) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C84 +
           (C211 * C96 + C28569 * C217) * C73 + C235 * C86 + C236 * C74 +
           C237 * C88 + C238 * C75 + C239 * C90 + C240 * C76) *
              C28558 * C956 -
          ((C211 * C962 + C28569 * C1054) * C76 +
           (C211 * C958 + C28569 * C1050) * C90 +
           (C211 * C963 + C28569 * C1055) * C75 +
           (C211 * C959 + C28569 * C1051) * C88 +
           (C211 * C964 + C28569 * C1056) * C74 +
           (C211 * C960 + C28569 * C1052) * C86 +
           (C211 * C965 + C28569 * C1057) * C73 +
           (C211 * C961 + C28569 * C1053) * C84) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1350 +
            (C211 * C96 + C28569 * C217) * C1344 + C235 * C1352 +
            C236 * C28517) *
               C1346 +
           (C2104 + C2105 + C2092 + C2093) * C1347 +
           (C2106 + C2107 + C2098 + C2099) * C1348) *
              C956 -
          (((C211 * C2533 + C28569 * C2659) * C28517 +
            (C211 * C2529 + C28569 * C2655) * C1352 +
            (C211 * C2534 + C28569 * C2660) * C1344 +
            (C211 * C2530 + C28569 * C2656) * C1350) *
               C1348 +
           ((C211 * C2535 + C28569 * C2661) * C28517 +
            (C211 * C2531 + C28569 * C2657) * C1352 +
            (C211 * C2536 + C28569 * C2662) * C1344 +
            (C211 * C2532 + C28569 * C2658) * C1350) *
               C1347 +
           ((C211 * C964 + C28569 * C1056) * C28517 +
            (C211 * C960 + C28569 * C1052) * C1352 +
            (C211 * C965 + C28569 * C1057) * C1344 +
            (C211 * C961 + C28569 * C1053) * C1350) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C148 +
           (C84 * C149 + C73 * C274 + C86 * C150 + C74 * C275 + C88 * C151 +
            C75 * C276 + C90 * C152 + C76 * C277) *
               C28558) *
              C28569 * C956 -
          ((C90 * C1008 + C76 * C1092 + C88 * C1009 + C75 * C1093 +
            C86 * C1010 + C74 * C1094 + C84 * C1011 + C73 * C1095) *
               C28558 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C148) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C1424 +
           (C1350 * C149 + C1344 * C274 + C1352 * C150 + C28517 * C275) *
               C1346 +
           (C2176 + C2177) * C1425 + (C2178 + C2179) * C1347 +
           (C2180 + C2181) * C1426 + (C2182 + C2183) * C1348) *
              C28569 * C956 -
          ((C1352 * C2597 + C28517 * C2713 + C1350 * C2599 + C1344 * C2714) *
               C1348 +
           (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
               C1426 +
           (C1352 * C2598 + C28517 * C2715 + C1350 * C2600 + C1344 * C2716) *
               C1347 +
           (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
               C1425 +
           (C1352 * C1010 + C28517 * C1094 + C1350 * C1011 + C1344 * C1095) *
               C1346 +
           (C1352 * C960 + C28517 * C964 + C1350 * C961 + C1344 * C965) *
               C1424) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[14] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C313 * C91 + C320 + C320 + C28558 * C314) * C73 +
                     C337 * C74 + C338 * C75 + C339 * C76) *
                        C28569 * C956 -
                    ((C313 * C958 + C1135 + C1135 + C28558 * C1130) * C76 +
                     (C313 * C959 + C1136 + C1136 + C28558 * C1131) * C75 +
                     (C313 * C960 + C1137 + C1137 + C28558 * C1132) * C74 +
                     (C313 * C961 + C1138 + C1138 + C28558 * C1133) * C73) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C1344 +
                     (C1650 + C1651 + C1652) * C28517) *
                        C28569 * C956 -
                    ((C1624 * C2529 + C2772 + C2772 + C1348 * C2767 +
                      C1623 * C2531 + C2773 + C2773 + C1347 * C2768 +
                      C1622 * C960 + C2774 + C2774 + C1346 * C1132) *
                         C28517 +
                     (C1624 * C2530 + C2775 + C2775 + C1348 * C2769 +
                      C1623 * C2532 + C2776 + C2776 + C1347 * C2770 +
                      C1622 * C961 + C2777 + C2777 + C1346 * C1133) *
                         C1344) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C148 +
            (C211 * C149 + C28569 * C373) * C28558) *
               C73 +
           (C379 + C391) * C74 + (C382 + C392) * C75 + (C385 + C393) * C76) *
              C956 -
          (((C211 * C1008 + C28569 * C1172) * C28558 +
            (C211 * C958 + C28569 * C1050) * C148) *
               C76 +
           ((C211 * C1009 + C28569 * C1173) * C28558 +
            (C211 * C959 + C28569 * C1051) * C148) *
               C75 +
           ((C211 * C1010 + C28569 * C1174) * C28558 +
            (C211 * C960 + C28569 * C1052) * C148) *
               C74 +
           ((C211 * C1011 + C28569 * C1175) * C28558 +
            (C211 * C961 + C28569 * C1053) * C148) *
               C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C1424 +
            (C211 * C149 + C28569 * C373) * C1346 + C2100 * C1425 +
            C2298 * C1347 + C2102 * C1426 + C2299 * C1348) *
               C1344 +
           (C1706 + C1707 + C1708 + C1716 + C1711 + C1717) * C28517) *
              C956 -
          (((C211 * C2597 + C28569 * C2827) * C1348 +
            (C211 * C2529 + C28569 * C2655) * C1426 +
            (C211 * C2598 + C28569 * C2828) * C1347 +
            (C211 * C2531 + C28569 * C2657) * C1425 +
            (C211 * C1010 + C28569 * C1174) * C1346 +
            (C211 * C960 + C28569 * C1052) * C1424) *
               C28517 +
           ((C211 * C2599 + C28569 * C2829) * C1348 +
            (C211 * C2530 + C28569 * C2656) * C1426 +
            (C211 * C2600 + C28569 * C2830) * C1347 +
            (C211 * C2532 + C28569 * C2658) * C1425 +
            (C211 * C1011 + C28569 * C1175) * C1346 +
            (C211 * C961 + C28569 * C1053) * C1424) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C84 * C91 + C73 * C96 + C86 * C92 + C74 * C97 + C88 * C93 +
            C75 * C98 + C90 * C94 + C76 * C99) *
               C211 +
           (C84 * C212 + C73 * C427 + C86 * C213 + C74 * C428 + C88 * C214 +
            C75 * C429 + C90 * C215 + C76 * C430) *
               C28569) *
              C28558 * C956 -
          ((C90 * C1050 + C76 * C1210 + C88 * C1051 + C75 * C1211 +
            C86 * C1052 + C74 * C1212 + C84 * C1053 + C73 * C1213) *
               C28569 +
           (C90 * C958 + C76 * C962 + C88 * C959 + C75 * C963 + C86 * C960 +
            C74 * C964 + C84 * C961 + C73 * C965) *
               C211) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1350 * C91 + C1344 * C96 + C1352 * C92 + C28517 * C97) * C211 +
            (C1350 * C212 + C1344 * C427 + C1352 * C213 + C28517 * C428) *
                C28569) *
               C1346 +
           ((C2176 + C2177) * C211 + (C2360 + C2361) * C28569) * C1347 +
           ((C2180 + C2181) * C211 + (C2362 + C2363) * C28569) * C1348) *
              C956 -
          (((C1352 * C2655 + C28517 * C2881 + C1350 * C2656 + C1344 * C2882) *
                C28569 +
            (C1352 * C2529 + C28517 * C2533 + C1350 * C2530 + C1344 * C2534) *
                C211) *
               C1348 +
           ((C1352 * C2657 + C28517 * C2883 + C1350 * C2658 + C1344 * C2884) *
                C28569 +
            (C1352 * C2531 + C28517 * C2535 + C1350 * C2532 + C1344 * C2536) *
                C211) *
               C1347 +
           ((C1352 * C1052 + C28517 * C1212 + C1350 * C1053 + C1344 * C1213) *
                C28569 +
            (C1352 * C960 + C28517 * C964 + C1350 * C961 + C1344 * C965) *
                C211) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C211 +
            (C148 * C212 + C28558 * C466) * C28569) *
               C73 +
           (C472 + C484) * C74 + (C475 + C485) * C75 + (C478 + C486) * C76) *
              C956 -
          (((C148 * C1050 + C28558 * C1248) * C28569 +
            (C148 * C958 + C28558 * C1008) * C211) *
               C76 +
           ((C148 * C1051 + C28558 * C1249) * C28569 +
            (C148 * C959 + C28558 * C1009) * C211) *
               C75 +
           ((C148 * C1052 + C28558 * C1250) * C28569 +
            (C148 * C960 + C28558 * C1010) * C211) *
               C74 +
           ((C148 * C1053 + C28558 * C1251) * C28569 +
            (C148 * C961 + C28558 * C1011) * C211) *
               C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C211 +
            (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
             C1426 * C1501 + C1348 * C1820) *
                C28569) *
               C1344 +
           ((C1446 + C1447 + C1448) * C211 + (C1830 + C1831 + C1832) * C28569) *
               C28517) *
              C956 -
          (((C1426 * C2655 + C1348 * C2935 + C1425 * C2657 + C1347 * C2936 +
             C1424 * C1052 + C1346 * C1250) *
                C28569 +
            (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 + C1347 * C2598 +
             C1424 * C960 + C1346 * C1010) *
                C211) *
               C28517 +
           ((C1426 * C2656 + C1348 * C2937 + C1425 * C2658 + C1347 * C2938 +
             C1424 * C1053 + C1346 * C1251) *
                C28569 +
            (C1426 * C2530 + C1348 * C2599 + C1425 * C2532 + C1347 * C2600 +
             C1424 * C961 + C1346 * C1011) *
                C211) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[14] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C28558 * C73 +
           C547 * C74 + C548 * C75 + C549 * C76) *
              C956 -
          ((C520 * C958 + C1291 + C1291 + C28569 * C1286) * C28558 * C76 +
           (C520 * C959 + C1292 + C1292 + C28569 * C1287) * C28558 * C75 +
           (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C28558 * C74 +
           (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C28558 * C73) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C1346 + C2478 * C1347 +
            C2479 * C1348) *
               C1344 +
           (C1887 + C1900 + C1901) * C28517) *
              C956 -
          (((C520 * C2529 + C2994 + C2994 + C28569 * C2989) * C1348 +
            (C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C1347 +
            (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C1346) *
               C28517 +
           ((C520 * C2530 + C2996 + C2996 + C28569 * C2991) * C1348 +
            (C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C1347 +
            (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C1346) *
               C1344) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28569 * C28742 +
                     (C13871 * C589 + C13878 + C13878 + C28701 * C597 +
                      C13873 * C588 + C13879 + C13879 + C28517 * C596) *
                         C28569 * C28743 +
                     (C13871 * C1353 + C13880 + C13880 + C28701 * C1359 +
                      C13873 * C1354 + C13881 + C13881 + C28517 * C1360) *
                         C28569 * C13870) *
                        C28749 * C28750 * C81 -
                    ((C13873 * C1355 + C13882 + C13882 + C28517 * C1361 +
                      C13871 * C1354 + C13883 + C13883 + C28701 * C1360) *
                         C28569 * C13870 +
                     (C13873 * C587 + C13884 + C13884 + C28517 * C595 +
                      C13871 * C588 + C13885 + C13885 + C28701 * C596) *
                         C28569 * C28743 +
                     (C13873 * C93 + C13886 + C13886 + C28517 * C103 +
                      C13871 * C92 + C13887 + C13887 + C28701 * C102) *
                         C28569 * C28742) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C27436 +
                     (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                      C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                         C28701 +
                     (C13953 + C13954 + C13955) * C27426 +
                     (C13956 + C13957 + C13958) * C28517) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C13939 * C1358 + C13870 * C1432 + C13938 * C591 +
                      C28743 * C641 + C13937 * C98 + C28742 * C156) *
                         C28517 +
                     (C13939 * C1355 + C13870 * C1429 + C13938 * C587 +
                      C28743 * C637 + C13937 * C93 + C28742 * C151) *
                         C27426 +
                     (C13958 + C13957 + C13956) * C28701 +
                     (C13955 + C13954 + C13953) * C27436) *
                        C28569 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C27436 +
            (C211 * C96 + C28569 * C217) * C28701 + C235 * C27426 +
            C236 * C28517) *
               C28742 +
           (C2100 * C27436 + C2101 * C28701 + C1516 * C27426 + C1517 * C28517) *
               C28743 +
           (C2102 * C27436 + C2103 * C28701 + C1518 * C27426 + C1519 * C28517) *
               C13870) *
              C28749 * C28750 * C81 -
          (((C211 * C1358 + C28569 * C1506) * C28517 +
            (C211 * C1355 + C28569 * C1503) * C27426 + C1519 * C28701 +
            C1518 * C27436) *
               C13870 +
           (C4864 * C28517 + C4863 * C27426 + C1517 * C28701 + C1516 * C27436) *
               C28743 +
           (C238 * C28517 + C237 * C27426 + C236 * C28701 + C235 * C27436) *
               C28742) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C13937 +
           (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
               C28742 +
           (C27436 * C589 + C28701 * C593 + C27426 * C588 + C28517 * C592) *
               C13938 +
           (C27436 * C639 + C28701 * C723 + C27426 * C638 + C28517 * C722) *
               C28743 +
           (C27436 * C1353 + C28701 * C1356 + C27426 * C1354 + C28517 * C1357) *
               C13939 +
           (C27436 * C1427 + C28701 * C1569 + C27426 * C1428 + C28517 * C1570) *
               C13870) *
              C28569 * C28749 * C28750 * C81 -
          ((C27426 * C1429 + C28517 * C1571 + C27436 * C1428 + C28701 * C1570) *
               C13870 +
           (C27426 * C1355 + C28517 * C1358 + C27436 * C1354 + C28701 * C1357) *
               C13939 +
           (C27426 * C637 + C28517 * C721 + C27436 * C638 + C28701 * C722) *
               C28743 +
           (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
               C13938 +
           (C27426 * C151 + C28517 * C276 + C27436 * C150 + C28701 * C275) *
               C28742 +
           (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
               C13937) *
              C28569 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28701 +
                     (C14133 + C14134 + C14135) * C28517) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C14110 * C1355 + C14124 + C14124 + C13870 * C1627 +
                      C14109 * C587 + C14125 + C14125 + C28743 * C759 +
                      C14108 * C93 + C14126 + C14126 + C28742 * C316) *
                         C28517 +
                     (C14135 + C14134 + C14133) * C28701) *
                        C28569 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C13937 +
            (C211 * C149 + C28569 * C373) * C28742 + C2100 * C13938 +
            C2298 * C28743 + C2102 * C13939 + C2299 * C13870) *
               C28701 +
           (C14186 + C14187 + C14188 + C14189 + C14190 + C14191) * C28517) *
              C28749 * C28750 * C81 -
          (((C211 * C1429 + C28569 * C1704) * C13870 +
            (C211 * C1355 + C28569 * C1503) * C13939 + C5054 * C28743 +
            C4863 * C13938 + C389 * C28742 + C237 * C13937) *
               C28517 +
           (C14191 + C14190 + C14189 + C14188 + C14187 + C14186) * C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[15] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C211 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28569) *
               C28742 +
           ((C27436 * C589 + C28701 * C593 + C27426 * C588 + C28517 * C592) *
                C211 +
            (C27436 * C681 + C28701 * C841 + C27426 * C680 + C28517 * C840) *
                C28569) *
               C28743 +
           ((C27436 * C1353 + C28701 * C1356 + C27426 * C1354 +
             C28517 * C1357) *
                C211 +
            (C27436 * C1501 + C28701 * C1767 + C27426 * C1502 +
             C28517 * C1768) *
                C28569) *
               C13870) *
              C28749 * C28750 * C81 -
          (((C27426 * C1503 + C28517 * C1769 + C27436 * C1502 +
             C28701 * C1768) *
                C28569 +
            (C27426 * C1355 + C28517 * C1358 + C27436 * C1354 +
             C28701 * C1357) *
                C211) *
               C13870 +
           ((C27426 * C679 + C28517 * C839 + C27436 * C680 + C28701 * C840) *
                C28569 +
            (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
                C211) *
               C28743 +
           ((C27426 * C214 + C28517 * C429 + C27436 * C213 + C28701 * C428) *
                C28569 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C211) *
               C28742) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C211 +
                      (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                       C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                          C28569) *
                         C28701 +
                     ((C13953 + C13954 + C13955) * C211 +
                      (C14298 + C14299 + C14300) * C28569) *
                         C28517) *
                        C28749 * C28750 * C81 -
                    (((C13939 * C1503 + C13870 * C1822 + C13938 * C679 +
                       C28743 * C877 + C13937 * C214 + C28742 * C468) *
                          C28569 +
                      (C13939 * C1355 + C13870 * C1429 + C13938 * C587 +
                       C28743 * C637 + C13937 * C93 + C28742 * C151) *
                          C211) *
                         C28517 +
                     ((C14300 + C14299 + C14298) * C28569 +
                      (C13955 + C13954 + C13953) * C211) *
                         C28701) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[15] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28742 +
                      C2478 * C28743 + C2479 * C13870) *
                         C28701 +
                     (C14351 + C14352 + C14353) * C28517) *
                        C28749 * C28750 * C81 -
                    (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C13870 +
                      C5225 * C28743 + C545 * C28742) *
                         C28517 +
                     (C14353 + C14352 + C14351) * C28701) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28569 * C28742 +
                     (C14422 + C14423) * C28569 * C28743 +
                     (C14424 + C14425) * C28569 * C13870) *
                        C28749 * C583 -
                    ((C13873 * C1951 + C14412 + C14412 + C28517 * C1955 +
                      C13871 * C1952 + C14413 + C14413 + C28701 * C1956) *
                         C28569 * C13870 +
                     (C14425 + C14424) * C28569 * C28743 +
                     (C14423 + C14422) * C28569 * C28742) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C27436 +
                     (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                      C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                         C28701 +
                     (C13953 + C13954 + C13955) * C27426 +
                     (C13956 + C13957 + C13958) * C28517) *
                        C28569 * C28749 * C583 -
                    ((C13939 * C1953 + C13870 * C2031 + C13938 * C1357 +
                      C28743 * C1431 + C13937 * C592 + C28742 * C642) *
                         C28517 +
                     (C13939 * C1951 + C13870 * C2029 + C13938 * C1354 +
                      C28743 * C1428 + C13937 * C588 + C28742 * C638) *
                         C27426 +
                     (C13939 * C1954 + C13870 * C2032 + C13938 * C1356 +
                      C28743 * C1430 + C13937 * C593 + C28742 * C643) *
                         C28701 +
                     (C13939 * C1952 + C13870 * C2030 + C13938 * C1353 +
                      C28743 * C1427 + C13937 * C589 + C28742 * C639) *
                         C27436) *
                        C28569 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C27436 +
                      (C211 * C96 + C28569 * C217) * C28701 + C235 * C27426 +
                      C236 * C28517) *
                         C28742 +
                     (C14526 + C14527 + C14528 + C14529) * C28743 +
                     (C14530 + C14531 + C14532 + C14533) * C13870) *
                        C28749 * C583 -
                    (((C211 * C1953 + C28569 * C2085) * C28517 +
                      (C211 * C1951 + C28569 * C2083) * C27426 +
                      C11658 * C28701 + C11657 * C27436) *
                         C13870 +
                     (C14533 + C14532 + C14531 + C14530) * C28743 +
                     (C14529 + C14528 + C14527 + C14526) * C28742) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C13937 +
           (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
               C28742 +
           (C14600 + C14601) * C13938 + (C14602 + C14603) * C28743 +
           (C14604 + C14605) * C13939 + (C14606 + C14607) * C13870) *
              C28569 * C28749 * C583 -
          ((C27426 * C2029 + C28517 * C2157 + C27436 * C2030 + C28701 * C2158) *
               C13870 +
           (C27426 * C1951 + C28517 * C1953 + C27436 * C1952 + C28701 * C1954) *
               C13939 +
           (C14607 + C14606) * C28743 + (C14605 + C14604) * C13938 +
           (C14603 + C14602) * C28742 + (C14601 + C14600) * C13937) *
              C28569 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28701 +
                     (C14133 + C14134 + C14135) * C28517) *
                        C28569 * C28749 * C583 -
                    ((C14110 * C1951 + C14658 + C14658 + C13870 * C2233 +
                      C14109 * C1354 + C14659 + C14659 + C28743 * C1626 +
                      C14108 * C588 + C14660 + C14660 + C28742 * C760) *
                         C28517 +
                     (C14110 * C1952 + C14661 + C14661 + C13870 * C2234 +
                      C14109 * C1353 + C14662 + C14662 + C28743 * C1625 +
                      C14108 * C589 + C14663 + C14663 + C28742 * C761) *
                         C28701) *
                        C28569 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C13937 +
            (C211 * C149 + C28569 * C373) * C28742 + C2100 * C13938 +
            C2298 * C28743 + C2102 * C13939 + C2299 * C13870) *
               C28701 +
           (C14186 + C14187 + C14188 + C14189 + C14190 + C14191) * C28517) *
              C28749 * C583 -
          (((C211 * C2029 + C28569 * C2291) * C13870 +
            (C211 * C1951 + C28569 * C2083) * C13939 + C1715 * C28743 +
            C1518 * C13938 + C1714 * C28742 + C1516 * C13937) *
               C28517 +
           (C11790 * C13870 + C11657 * C13939 + C2299 * C28743 +
            C2102 * C13938 + C2298 * C28742 + C2100 * C13937) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C211 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28569) *
               C28742 +
           ((C14600 + C14601) * C211 + (C14772 + C14773) * C28569) * C28743 +
           ((C14604 + C14605) * C211 + (C14774 + C14775) * C28569) * C13870) *
              C28749 * C583 -
          (((C27426 * C2083 + C28517 * C2349 + C27436 * C2084 +
             C28701 * C2350) *
                C28569 +
            (C27426 * C1951 + C28517 * C1953 + C27436 * C1952 +
             C28701 * C1954) *
                C211) *
               C13870 +
           ((C14775 + C14774) * C28569 + (C14605 + C14604) * C211) * C28743 +
           ((C14773 + C14772) * C28569 + (C14601 + C14600) * C211) * C28742) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[16] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C211 +
                      (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                       C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                          C28569) *
                         C28701 +
                     ((C13953 + C13954 + C13955) * C211 +
                      (C14298 + C14299 + C14300) * C28569) *
                         C28517) *
                        C28749 * C583 -
                    (((C13939 * C2083 + C13870 * C2413 + C13938 * C1502 +
                       C28743 * C1821 + C13937 * C680 + C28742 * C878) *
                          C28569 +
                      (C13939 * C1951 + C13870 * C2029 + C13938 * C1354 +
                       C28743 * C1428 + C13937 * C588 + C28742 * C638) *
                          C211) *
                         C28517 +
                     ((C13939 * C2084 + C13870 * C2414 + C13938 * C1501 +
                       C28743 * C1820 + C13937 * C681 + C28742 * C879) *
                          C28569 +
                      (C13939 * C1952 + C13870 * C2030 + C13938 * C1353 +
                       C28743 * C1427 + C13937 * C589 + C28742 * C639) *
                          C211) *
                         C28701) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezz[16] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28742 +
            C2478 * C28743 + C2479 * C13870) *
               C28701 +
           (C14351 + C14352 + C14353) * C28517) *
              C28749 * C583 -
          (((C520 * C1951 + C2472 + C2472 + C28569 * C2465) * C13870 +
            C1899 * C28743 + C1898 * C28742) *
               C28517 +
           (C11916 * C13870 + C2479 * C28743 + C2478 * C28742) * C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28569 * C28742 +
                     (C14422 + C14423) * C28569 * C28743 +
                     (C14424 + C14425) * C28569 * C13870) *
                        C956 -
                    ((C13873 * C2529 + C14926 + C14926 + C28517 * C2537 +
                      C13871 * C2530 + C14927 + C14927 + C28701 * C2538) *
                         C28569 * C13870 +
                     (C13873 * C2531 + C14928 + C14928 + C28517 * C2539 +
                      C13871 * C2532 + C14929 + C14929 + C28701 * C2540) *
                         C28569 * C28743 +
                     (C13873 * C960 + C14930 + C14930 + C28517 * C968 +
                      C13871 * C961 + C14931 + C14931 + C28701 * C969) *
                         C28569 * C28742) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C27436 +
                     (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                      C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                         C28701 +
                     (C13953 + C13954 + C13955) * C27426 +
                     (C13956 + C13957 + C13958) * C28517) *
                        C28569 * C956 -
                    ((C13939 * C2533 + C13870 * C2601 + C13938 * C2535 +
                      C28743 * C2602 + C13937 * C964 + C28742 * C1014) *
                         C28517 +
                     (C13939 * C2529 + C13870 * C2597 + C13938 * C2531 +
                      C28743 * C2598 + C13937 * C960 + C28742 * C1010) *
                         C27426 +
                     (C13939 * C2534 + C13870 * C2603 + C13938 * C2536 +
                      C28743 * C2604 + C13937 * C965 + C28742 * C1015) *
                         C28701 +
                     (C13939 * C2530 + C13870 * C2599 + C13938 * C2532 +
                      C28743 * C2600 + C13937 * C961 + C28742 * C1011) *
                         C27436) *
                        C28569 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C27436 +
                      (C211 * C96 + C28569 * C217) * C28701 + C235 * C27426 +
                      C236 * C28517) *
                         C28742 +
                     (C14526 + C14527 + C14528 + C14529) * C28743 +
                     (C14530 + C14531 + C14532 + C14533) * C13870) *
                        C956 -
                    (((C211 * C2533 + C28569 * C2659) * C28517 +
                      (C211 * C2529 + C28569 * C2655) * C27426 +
                      (C211 * C2534 + C28569 * C2660) * C28701 +
                      (C211 * C2530 + C28569 * C2656) * C27436) *
                         C13870 +
                     ((C211 * C2535 + C28569 * C2661) * C28517 +
                      (C211 * C2531 + C28569 * C2657) * C27426 +
                      (C211 * C2536 + C28569 * C2662) * C28701 +
                      (C211 * C2532 + C28569 * C2658) * C27436) *
                         C28743 +
                     ((C211 * C964 + C28569 * C1056) * C28517 +
                      (C211 * C960 + C28569 * C1052) * C27426 +
                      (C211 * C965 + C28569 * C1057) * C28701 +
                      (C211 * C961 + C28569 * C1053) * C27436) *
                         C28742) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C13937 +
           (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
               C28742 +
           (C14600 + C14601) * C13938 + (C14602 + C14603) * C28743 +
           (C14604 + C14605) * C13939 + (C14606 + C14607) * C13870) *
              C28569 * C956 -
          ((C27426 * C2597 + C28517 * C2713 + C27436 * C2599 + C28701 * C2714) *
               C13870 +
           (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 + C28701 * C2534) *
               C13939 +
           (C27426 * C2598 + C28517 * C2715 + C27436 * C2600 + C28701 * C2716) *
               C28743 +
           (C27426 * C2531 + C28517 * C2535 + C27436 * C2532 + C28701 * C2536) *
               C13938 +
           (C27426 * C1010 + C28517 * C1094 + C27436 * C1011 + C28701 * C1095) *
               C28742 +
           (C27426 * C960 + C28517 * C964 + C27436 * C961 + C28701 * C965) *
               C13937) *
              C28569 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28701 +
                     (C14133 + C14134 + C14135) * C28517) *
                        C28569 * C956 -
                    ((C14110 * C2529 + C15132 + C15132 + C13870 * C2767 +
                      C14109 * C2531 + C15133 + C15133 + C28743 * C2768 +
                      C14108 * C960 + C15134 + C15134 + C28742 * C1132) *
                         C28517 +
                     (C14110 * C2530 + C15135 + C15135 + C13870 * C2769 +
                      C14109 * C2532 + C15136 + C15136 + C28743 * C2770 +
                      C14108 * C961 + C15137 + C15137 + C28742 * C1133) *
                         C28701) *
                        C28569 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C13937 +
            (C211 * C149 + C28569 * C373) * C28742 + C2100 * C13938 +
            C2298 * C28743 + C2102 * C13939 + C2299 * C13870) *
               C28701 +
           (C14186 + C14187 + C14188 + C14189 + C14190 + C14191) * C28517) *
              C956 -
          (((C211 * C2597 + C28569 * C2827) * C13870 +
            (C211 * C2529 + C28569 * C2655) * C13939 +
            (C211 * C2598 + C28569 * C2828) * C28743 +
            (C211 * C2531 + C28569 * C2657) * C13938 +
            (C211 * C1010 + C28569 * C1174) * C28742 +
            (C211 * C960 + C28569 * C1052) * C13937) *
               C28517 +
           ((C211 * C2599 + C28569 * C2829) * C13870 +
            (C211 * C2530 + C28569 * C2656) * C13939 +
            (C211 * C2600 + C28569 * C2830) * C28743 +
            (C211 * C2532 + C28569 * C2658) * C13938 +
            (C211 * C1011 + C28569 * C1175) * C28742 +
            (C211 * C961 + C28569 * C1053) * C13937) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[17] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C211 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28569) *
               C28742 +
           ((C14600 + C14601) * C211 + (C14772 + C14773) * C28569) * C28743 +
           ((C14604 + C14605) * C211 + (C14774 + C14775) * C28569) * C13870) *
              C956 -
          (((C27426 * C2655 + C28517 * C2881 + C27436 * C2656 +
             C28701 * C2882) *
                C28569 +
            (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 +
             C28701 * C2534) *
                C211) *
               C13870 +
           ((C27426 * C2657 + C28517 * C2883 + C27436 * C2658 +
             C28701 * C2884) *
                C28569 +
            (C27426 * C2531 + C28517 * C2535 + C27436 * C2532 +
             C28701 * C2536) *
                C211) *
               C28743 +
           ((C27426 * C1052 + C28517 * C1212 + C27436 * C1053 +
             C28701 * C1213) *
                C28569 +
            (C27426 * C960 + C28517 * C964 + C27436 * C961 + C28701 * C965) *
                C211) *
               C28742) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C211 +
                      (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                       C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                          C28569) *
                         C28701 +
                     ((C13953 + C13954 + C13955) * C211 +
                      (C14298 + C14299 + C14300) * C28569) *
                         C28517) *
                        C956 -
                    (((C13939 * C2655 + C13870 * C2935 + C13938 * C2657 +
                       C28743 * C2936 + C13937 * C1052 + C28742 * C1250) *
                          C28569 +
                      (C13939 * C2529 + C13870 * C2597 + C13938 * C2531 +
                       C28743 * C2598 + C13937 * C960 + C28742 * C1010) *
                          C211) *
                         C28517 +
                     ((C13939 * C2656 + C13870 * C2937 + C13938 * C2658 +
                       C28743 * C2938 + C13937 * C1053 + C28742 * C1251) *
                          C28569 +
                      (C13939 * C2530 + C13870 * C2599 + C13938 * C2532 +
                       C28743 * C2600 + C13937 * C961 + C28742 * C1011) *
                          C211) *
                         C28701) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezz[17] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28569 * C521) * C28742 +
                      C2478 * C28743 + C2479 * C13870) *
                         C28701 +
                     (C14351 + C14352 + C14353) * C28517) *
                        C956 -
                    (((C520 * C2529 + C2994 + C2994 + C28569 * C2989) * C13870 +
                      (C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C28743 +
                      (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C28742) *
                         C28517 +
                     ((C520 * C2530 + C2996 + C2996 + C28569 * C2991) * C13870 +
                      (C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C28743 +
                      (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C28742) *
                         C28701) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28715 +
            C13318 * C28633) *
               C28742 +
           (C11571 * C28715 + C12768 * C28633) * C28743 +
           (C11572 * C28715 +
            (C11222 * C2530 + C11955 + C11955 + C28512 * C2538) * C28633) *
               C13870) *
              C28749 * C28750 * C81 -
          (((C11222 * C2529 + C17264 + C17264 + C28512 * C2537) * C28633 +
            (C11222 * C1354 + C11230 + C11230 + C28512 * C1360) * C28715) *
               C13870 +
           ((C11222 * C2531 + C12298 + C12298 + C28512 * C2539) * C28633 +
            (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C28715) *
               C28743 +
           ((C11222 * C960 + C12300 + C12300 + C28512 * C968) * C28633 +
            (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C28715) *
               C28742) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C11223 +
                      (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                       C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                          C28512) *
                         C28715 +
                     ((C13937 * C961 + C28742 * C1011 + C13938 * C2532 +
                       C28743 * C2600 + C13939 * C2530 + C13870 * C2599) *
                          C11223 +
                      (C13937 * C965 + C28742 * C1015 + C13938 * C2536 +
                       C28743 * C2604 + C13939 * C2534 + C13870 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C13939 * C2533 + C13870 * C2601 + C13938 * C2535 +
                       C28743 * C2602 + C13937 * C964 + C28742 * C1014) *
                          C28512 +
                      (C13939 * C2529 + C13870 * C2597 + C13938 * C2531 +
                       C28743 * C2598 + C13937 * C960 + C28742 * C1010) *
                          C11223) *
                         C28633 +
                     ((C13958 + C13957 + C13956) * C28512 +
                      (C13955 + C13954 + C13953) * C11223) *
                         C28715) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C11223 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28512) *
               C28742 +
           ((C8590 + C8591) * C11223 + (C8592 + C8593) * C28512) * C28743 +
           ((C6370 * C1353 + C28715 * C1501 + C6371 * C2530 + C28633 * C2656) *
                C11223 +
            (C6370 * C1356 + C28715 * C1504 + C6371 * C2534 + C28633 * C2660) *
                C28512) *
               C13870) *
              C28749 * C28750 * C81 -
          (((C6371 * C2533 + C28633 * C2659 + C6370 * C1357 + C28715 * C1505) *
                C28512 +
            (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
                C11223) *
               C13870 +
           ((C7945 + C7944) * C28512 + (C7943 + C7942) * C11223) * C28743 +
           ((C6392 + C6391) * C28512 + (C6390 + C6389) * C11223) * C28742) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C13937 +
            (C11223 * C149 + C28512 * C274) * C28742 + C11708 * C13938 +
            C11709 * C28743 + C11710 * C13939 + C11711 * C13870) *
               C28715 +
           (C13511 * C13937 + C13512 * C28742 + C12953 * C13938 +
            C12954 * C28743 + (C11223 * C2530 + C28512 * C2534) * C13939 +
            (C11223 * C2599 + C28512 * C2714) * C13870) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C11223 * C2597 + C28512 * C2713) * C13870 +
            (C11223 * C2529 + C28512 * C2533) * C13939 +
            (C11223 * C2598 + C28512 * C2715) * C28743 +
            (C11223 * C2531 + C28512 * C2535) * C13938 +
            (C11223 * C1010 + C28512 * C1094) * C28742 +
            (C11223 * C960 + C28512 * C964) * C13937) *
               C28633 +
           ((C11223 * C1428 + C28512 * C1570) * C13870 +
            (C11223 * C1354 + C28512 * C1357) * C13939 +
            (C11223 * C638 + C28512 * C722) * C28743 +
            (C11223 * C588 + C28512 * C592) * C13938 +
            (C11223 * C150 + C28512 * C275) * C28742 +
            (C11223 * C92 + C28512 * C97) * C13937) *
               C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28512 * C28715 +
                     (C14108 * C961 + C15137 + C15137 + C28742 * C1133 +
                      C14109 * C2532 + C15136 + C15136 + C28743 * C2770 +
                      C14110 * C2530 + C15135 + C15135 + C13870 * C2769) *
                         C28512 * C28633) *
                        C28749 * C28750 * C81 -
                    ((C14110 * C2529 + C15132 + C15132 + C13870 * C2767 +
                      C14109 * C2531 + C15133 + C15133 + C28743 * C2768 +
                      C14108 * C960 + C15134 + C15134 + C28742 * C1132) *
                         C28512 * C28633 +
                     (C14135 + C14134 + C14133) * C28512 * C28715) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[18] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C13937 +
           (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
               C28742 +
           (C8590 + C8591) * C13938 + (C8812 + C8813) * C28743 +
           (C6370 * C1353 + C28715 * C1501 + C6371 * C2530 + C28633 * C2656) *
               C13939 +
           (C6370 * C1427 + C28715 * C1702 + C6371 * C2599 + C28633 * C2829) *
               C13870) *
              C28512 * C28749 * C28750 * C81 -
          ((C6371 * C2597 + C28633 * C2827 + C6370 * C1428 + C28715 * C1703) *
               C13870 +
           (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
               C13939 +
           (C8159 + C8158) * C28743 + (C7943 + C7942) * C13938 +
           (C6561 + C6560) * C28742 + (C6390 + C6389) * C13937) *
              C28512 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C6370 +
                      (C11223 * C212 + C28512 * C427) * C28715 +
                      C13511 * C6371 + C13698 * C28633) *
                         C28742 +
                     (C11708 * C6370 + C11835 * C28715 + C12953 * C6371 +
                      C13131 * C28633) *
                         C28743 +
                     (C11710 * C6370 + C11836 * C28715 +
                      (C11223 * C2530 + C28512 * C2534) * C6371 +
                      (C11223 * C2656 + C28512 * C2882) * C28633) *
                         C13870) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C2655 + C28512 * C2881) * C28633 +
                      (C11223 * C2529 + C28512 * C2533) * C6371 +
                      (C11223 * C1502 + C28512 * C1768) * C28715 +
                      (C11223 * C1354 + C28512 * C1357) * C6370) *
                         C13870 +
                     ((C11223 * C2657 + C28512 * C2883) * C28633 +
                      (C11223 * C2531 + C28512 * C2535) * C6371 +
                      (C11223 * C680 + C28512 * C840) * C28715 +
                      (C11223 * C588 + C28512 * C592) * C6370) *
                         C28743 +
                     ((C11223 * C1052 + C28512 * C1212) * C28633 +
                      (C11223 * C960 + C28512 * C964) * C6371 +
                      (C11223 * C213 + C28512 * C428) * C28715 +
                      (C11223 * C92 + C28512 * C97) * C6370) *
                         C28742) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezy[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C6370 +
                     (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                      C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                         C28715 +
                     (C13937 * C961 + C28742 * C1011 + C13938 * C2532 +
                      C28743 * C2600 + C13939 * C2530 + C13870 * C2599) *
                         C6371 +
                     (C13937 * C1053 + C28742 * C1251 + C13938 * C2658 +
                      C28743 * C2938 + C13939 * C2656 + C13870 * C2937) *
                         C28633) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C13939 * C2655 + C13870 * C2935 + C13938 * C2657 +
                      C28743 * C2936 + C13937 * C1052 + C28742 * C1250) *
                         C28633 +
                     (C13939 * C2529 + C13870 * C2597 + C13938 * C2531 +
                      C28743 * C2598 + C13937 * C960 + C28742 * C1010) *
                         C6371 +
                     (C14300 + C14299 + C14298) * C28715 +
                     (C13955 + C13954 + C13953) * C6370) *
                        C28512 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezz[18] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                      C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                         C28742 +
                     (C9030 + C9031) * C28743 +
                     (C6724 * C1353 + C9025 + C9025 + C28715 * C1882 +
                      C6725 * C2530 + C9024 + C9024 + C28633 * C2991) *
                         C13870) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C6725 * C2529 + C9022 + C9022 + C28633 * C2989 +
                      C6724 * C1354 + C9023 + C9023 + C28715 * C1883) *
                         C13870 +
                     (C8373 + C8372) * C28743 + (C6752 + C6751) * C28742) *
                        C28512 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28715 +
            C13318 * C28633) *
               C28742 +
           (C17715 + C17716) * C28743 + (C17717 + C17723) * C13870) *
              C28749 * C583 -
          (((C11222 * C11950 + C11954 + C11954 + C28512 * C11952) * C28633 +
            C11573 * C28715) *
               C13870 +
           (C17723 + C17717) * C28743 + (C17716 + C17715) * C28742) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C11223 +
                      (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                       C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                          C28512) *
                         C28715 +
                     ((C13937 * C961 + C28742 * C1011 + C13938 * C2532 +
                       C28743 * C2600 + C13939 * C2530 + C13870 * C2599) *
                          C11223 +
                      (C13937 * C965 + C28742 * C1015 + C13938 * C2536 +
                       C28743 * C2604 + C13939 * C2534 + C13870 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C583 -
                    (((C13939 * C11951 + C13870 * C11992 + C13938 * C2534 +
                       C28743 * C2603 + C13937 * C2536 + C28742 * C2604) *
                          C28512 +
                      (C13939 * C11950 + C13870 * C11991 + C13938 * C2530 +
                       C28743 * C2599 + C13937 * C2532 + C28742 * C2600) *
                          C11223) *
                         C28633 +
                     ((C13939 * C1954 + C13870 * C2032 + C13938 * C1356 +
                       C28743 * C1430 + C13937 * C593 + C28742 * C643) *
                          C28512 +
                      (C13939 * C1952 + C13870 * C2030 + C13938 * C1353 +
                       C28743 * C1427 + C13937 * C589 + C28742 * C639) *
                          C11223) *
                         C28715) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C11223 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28512) *
               C28742 +
           ((C8590 + C8591) * C11223 + (C8592 + C8593) * C28512) * C28743 +
           ((C17832 + C17833) * C11223 + (C17834 + C17835) * C28512) * C13870) *
              C28749 * C583 -
          (((C6371 * C11951 + C28633 * C12028 + C6370 * C1954 +
             C28715 * C2086) *
                C28512 +
            (C6371 * C11950 + C28633 * C12027 + C6370 * C1952 +
             C28715 * C2084) *
                C11223) *
               C13870 +
           ((C17835 + C17834) * C28512 + (C17833 + C17832) * C11223) * C28743 +
           ((C8593 + C8592) * C28512 + (C8591 + C8590) * C11223) * C28742) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C13937 +
            (C11223 * C149 + C28512 * C274) * C28742 + C11708 * C13938 +
            C11709 * C28743 + C11710 * C13939 + C11711 * C13870) *
               C28715 +
           (C13511 * C13937 + C13512 * C28742 + C12953 * C13938 +
            C12954 * C28743 + C17890 * C13939 + C17891 * C13870) *
               C28633) *
              C28749 * C583 -
          (((C11223 * C11991 + C28512 * C12063) * C13870 +
            (C11223 * C11950 + C28512 * C11951) * C13939 + C17891 * C28743 +
            C17890 * C13938 + C12954 * C28742 + C12953 * C13937) *
               C28633 +
           (C11713 * C13870 + C11712 * C13939 + C11711 * C28743 +
            C11710 * C13938 + C11709 * C28742 + C11708 * C13937) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28512 * C28715 +
                     (C14108 * C961 + C15137 + C15137 + C28742 * C1133 +
                      C14109 * C2532 + C15136 + C15136 + C28743 * C2770 +
                      C14110 * C2530 + C15135 + C15135 + C13870 * C2769) *
                         C28512 * C28633) *
                        C28749 * C583 -
                    ((C14110 * C11950 + C17942 + C17942 + C13870 * C12098 +
                      C14109 * C2530 + C17943 + C17943 + C28743 * C2769 +
                      C14108 * C2532 + C17944 + C17944 + C28742 * C2770) *
                         C28512 * C28633 +
                     (C14110 * C1952 + C14661 + C14661 + C13870 * C2234 +
                      C14109 * C1353 + C14662 + C14662 + C28743 * C1625 +
                      C14108 * C589 + C14663 + C14663 + C28742 * C761) *
                         C28512 * C28715) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[19] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C13937 +
           (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
               C28742 +
           (C8590 + C8591) * C13938 + (C8812 + C8813) * C28743 +
           (C17832 + C17833) * C13939 + (C17999 + C18000) * C13870) *
              C28512 * C28749 * C583 -
          ((C6371 * C11991 + C28633 * C12137 + C6370 * C2030 + C28715 * C2292) *
               C13870 +
           (C6371 * C11950 + C28633 * C12027 + C6370 * C1952 + C28715 * C2084) *
               C13939 +
           (C18000 + C17999) * C28743 + (C17833 + C17832) * C13938 +
           (C8813 + C8812) * C28742 + (C8591 + C8590) * C13937) *
              C28512 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C6370 +
                      (C11223 * C212 + C28512 * C427) * C28715 +
                      C13511 * C6371 + C13698 * C28633) *
                         C28742 +
                     (C18051 + C18052 + C18053 + C18054) * C28743 +
                     (C18055 + C18056 + C18057 + C18061) * C13870) *
                        C28749 * C583 -
                    (((C11223 * C12027 + C28512 * C12172) * C28633 +
                      (C11223 * C11950 + C28512 * C11951) * C6371 +
                      C11837 * C28715 + C11712 * C6370) *
                         C13870 +
                     (C18061 + C18057 + C18056 + C18055) * C28743 +
                     (C18054 + C18053 + C18052 + C18051) * C28742) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezy[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C6370 +
                     (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                      C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                         C28715 +
                     (C13937 * C961 + C28742 * C1011 + C13938 * C2532 +
                      C28743 * C2600 + C13939 * C2530 + C13870 * C2599) *
                         C6371 +
                     (C13937 * C1053 + C28742 * C1251 + C13938 * C2658 +
                      C28743 * C2938 + C13939 * C2656 + C13870 * C2937) *
                         C28633) *
                        C28512 * C28749 * C583 -
                    ((C13939 * C12027 + C13870 * C12207 + C13938 * C2656 +
                      C28743 * C2937 + C13937 * C2658 + C28742 * C2938) *
                         C28633 +
                     (C13939 * C11950 + C13870 * C11991 + C13938 * C2530 +
                      C28743 * C2599 + C13937 * C2532 + C28742 * C2600) *
                         C6371 +
                     (C13939 * C2084 + C13870 * C2414 + C13938 * C1501 +
                      C28743 * C1820 + C13937 * C681 + C28742 * C879) *
                         C28715 +
                     (C13939 * C1952 + C13870 * C2030 + C13938 * C1353 +
                      C28743 * C1427 + C13937 * C589 + C28742 * C639) *
                         C6370) *
                        C28512 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezz[19] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                      C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                         C28742 +
                     (C9030 + C9031) * C28743 + (C18172 + C18173) * C13870) *
                        C28512 * C28749 * C583 -
                    ((C6725 * C11950 + C18166 + C18166 + C28633 * C12242 +
                      C6724 * C1952 + C18167 + C18167 + C28715 * C2466) *
                         C13870 +
                     (C18173 + C18172) * C28743 + (C9031 + C9030) * C28742) *
                        C28512 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28715 +
            C13318 * C28633) *
               C28742 +
           (C17715 + C17716) * C28743 + (C17717 + C17723) * C13870) *
              C956 -
          (((C11222 * C12754 + C12763 + C12763 + C28512 * C12756) * C28633 +
            C17722 * C28715) *
               C13870 +
           (C12769 * C28633 + C12768 * C28715) * C28743 +
           (C13319 * C28633 + C13318 * C28715) * C28742) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                       C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                          C11223 +
                      (C13937 * C96 + C28742 * C154 + C13938 * C593 +
                       C28743 * C643 + C13939 * C1356 + C13870 * C1430) *
                          C28512) *
                         C28715 +
                     ((C18286 + C18287 + C18288) * C11223 +
                      (C18289 + C18290 + C18291) * C28512) *
                         C28633) *
                        C956 -
                    (((C13939 * C12755 + C13870 * C12822 + C13938 * C3642 +
                       C28743 * C3700 + C13937 * C3053 + C28742 * C3118) *
                          C28512 +
                      (C13939 * C12754 + C13870 * C12821 + C13938 * C3640 +
                       C28743 * C3698 + C13937 * C3050 + C28742 * C3115) *
                          C11223) *
                         C28633 +
                     ((C18291 + C18290 + C18289) * C28512 +
                      (C18288 + C18287 + C18286) * C11223) *
                         C28715) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C11223 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28512) *
               C28742 +
           ((C8590 + C8591) * C11223 + (C8592 + C8593) * C28512) * C28743 +
           ((C17832 + C17833) * C11223 + (C17834 + C17835) * C28512) * C13870) *
              C956 -
          (((C6371 * C12755 + C28633 * C12874 + C6370 * C2534 +
             C28715 * C2660) *
                C28512 +
            (C6371 * C12754 + C28633 * C12873 + C6370 * C2530 +
             C28715 * C2656) *
                C11223) *
               C13870 +
           ((C6371 * C3642 + C28633 * C3754 + C6370 * C2536 + C28715 * C2662) *
                C28512 +
            (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
                C11223) *
               C28743 +
           ((C6371 * C3053 + C28633 * C3189 + C6370 * C965 + C28715 * C1057) *
                C28512 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C11223) *
               C28742) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C13937 +
            (C11223 * C149 + C28512 * C274) * C28742 + C11708 * C13938 +
            C11709 * C28743 + C11710 * C13939 + C11711 * C13870) *
               C28715 +
           (C18392 + C18393 + C18394 + C18395 + C18396 + C18397) * C28633) *
              C956 -
          (((C11223 * C12821 + C28512 * C12943) * C13870 +
            (C11223 * C12754 + C28512 * C12755) * C13939 + C12956 * C28743 +
            C12955 * C13938 + C13514 * C28742 + C13513 * C13937) *
               C28633 +
           (C18397 + C18396 + C18395 + C18394 + C18393 + C18392) * C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C14108 * C91 + C14112 + C14112 + C28742 * C314 +
                      C14109 * C589 + C14113 + C14113 + C28743 * C761 +
                      C14110 * C1353 + C14114 + C14114 + C13870 * C1625) *
                         C28512 * C28715 +
                     (C18463 + C18464 + C18465) * C28512 * C28633) *
                        C956 -
                    ((C14110 * C12754 + C18454 + C18454 + C13870 * C13006 +
                      C14109 * C3640 + C18455 + C18455 + C28743 * C3858 +
                      C14108 * C3050 + C18456 + C18456 + C28742 * C3313) *
                         C28512 * C28633 +
                     (C18465 + C18464 + C18463) * C28512 * C28715) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[20] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
               C13937 +
           (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
               C28742 +
           (C8590 + C8591) * C13938 + (C8812 + C8813) * C28743 +
           (C17832 + C17833) * C13939 + (C17999 + C18000) * C13870) *
              C28512 * C956 -
          ((C6371 * C12821 + C28633 * C13061 + C6370 * C2599 + C28715 * C2829) *
               C13870 +
           (C6371 * C12754 + C28633 * C12873 + C6370 * C2530 + C28715 * C2656) *
               C13939 +
           (C6371 * C3698 + C28633 * C3914 + C6370 * C2600 + C28715 * C2830) *
               C28743 +
           (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
               C13938 +
           (C6371 * C3115 + C28633 * C3379 + C6370 * C1011 + C28715 * C1175) *
               C28742 +
           (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
               C13937) *
              C28512 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C6370 +
                      (C11223 * C212 + C28512 * C427) * C28715 +
                      C13511 * C6371 + C13698 * C28633) *
                         C28742 +
                     (C18051 + C18052 + C18053 + C18054) * C28743 +
                     (C18055 + C18056 + C18057 + C18061) * C13870) *
                        C956 -
                    (((C11223 * C12873 + C28512 * C13121) * C28633 +
                      (C11223 * C12754 + C28512 * C12755) * C6371 +
                      C18060 * C28715 + C17890 * C6370) *
                         C13870 +
                     (C13132 * C28633 + C12955 * C6371 + C13131 * C28715 +
                      C12953 * C6370) *
                         C28743 +
                     (C13699 * C28633 + C13513 * C6371 + C13698 * C28715 +
                      C13511 * C6370) *
                         C28742) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezy[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13937 * C91 + C28742 * C149 + C13938 * C589 +
                      C28743 * C639 + C13939 * C1353 + C13870 * C1427) *
                         C6370 +
                     (C13937 * C212 + C28742 * C466 + C13938 * C681 +
                      C28743 * C879 + C13939 * C1501 + C13870 * C1820) *
                         C28715 +
                     (C18286 + C18287 + C18288) * C6371 +
                     (C18622 + C18623 + C18624) * C28633) *
                        C28512 * C956 -
                    ((C13939 * C12873 + C13870 * C13184 + C13938 * C3752 +
                      C28743 * C4018 + C13937 * C3186 + C28742 * C3494) *
                         C28633 +
                     (C13939 * C12754 + C13870 * C12821 + C13938 * C3640 +
                      C28743 * C3698 + C13937 * C3050 + C28742 * C3115) *
                         C6371 +
                     (C18624 + C18623 + C18622) * C28715 +
                     (C18288 + C18287 + C18286) * C6370) *
                        C28512 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezz[20] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C6724 * C91 + C6727 + C6727 + C28715 * C521 +
                      C6725 * C961 + C6728 + C6728 + C28633 * C1289) *
                         C28742 +
                     (C9030 + C9031) * C28743 + (C18172 + C18173) * C13870) *
                        C28512 * C956 -
                    ((C6725 * C12754 + C18675 + C18675 + C28633 * C13235 +
                      C6724 * C2530 + C18676 + C18676 + C28715 * C2991) *
                         C13870 +
                     (C6725 * C3640 + C9660 + C9660 + C28633 * C4070 +
                      C6724 * C2532 + C9661 + C9661 + C28715 * C2992) *
                         C28743 +
                     (C6725 * C3050 + C7720 + C7720 + C28633 * C3562 +
                      C6724 * C961 + C7721 + C7721 + C28715 * C1289) *
                         C28742) *
                        C28512 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[21] +=
        (-std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           (C11222 * C589 + C11226 + C11226 + C28512 * C597) * C28569 * C11219 +
           (C11222 * C1353 + C11227 + C11227 + C28512 * C1359) * C28569 *
               C11220 +
           (C11222 * C1952 + C11228 + C11228 + C28512 * C1956) * C28569 *
               C11221) *
              C28749 * C28750 * C81 -
          ((C11222 * C1951 + C11229 + C11229 + C28512 * C1955) * C28569 *
               C11221 +
           (C11222 * C1354 + C11230 + C11230 + C28512 * C1360) * C28569 *
               C11220 +
           (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C28569 * C11219 +
           (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C28569 * C11218) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C9716 * C589 + C9726 + C9726 + C9711 * C597 + C9718 * C588 + C9727 +
            C9727 + C9712 * C596 + C9720 * C587 + C9728 + C9728 +
            C9713 * C595) *
               C28569 * C28607) *
              C28749 * C28750 * C81 -
          ((C9720 * C586 + C9729 + C9729 + C9713 * C594 + C9718 * C587 + C9730 +
            C9730 + C9712 * C595 + C9716 * C588 + C9731 + C9731 +
            C9711 * C596) *
               C28569 * C28607 +
           (C9720 * C94 + C9732 + C9732 + C9713 * C104 + C9718 * C93 + C9733 +
            C9733 + C9712 * C103 + C9716 * C92 + C9734 + C9734 + C9711 * C102) *
               C28569 * C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C3047 +
            (C11222 * C961 + C11957 + C11957 + C28512 * C969) * C3048 +
            (C11222 * C3050 + C12295 + C12295 + C28512 * C3056) * C3049) *
               C9714 +
           (C11571 * C3047 +
            (C11222 * C2532 + C11956 + C11956 + C28512 * C2540) * C3048 +
            (C11222 * C3640 + C12296 + C12296 + C28512 * C3644) * C3049) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C11222 * C3639 + C12297 + C12297 + C28512 * C3643) * C3049 +
            (C11222 * C2531 + C12298 + C12298 + C28512 * C2539) * C3048 +
            (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C3047) *
               C28607 +
           ((C11222 * C3051 + C12299 + C12299 + C28512 * C3057) * C3049 +
            (C11222 * C960 + C12300 + C12300 + C28512 * C968) * C3048 +
            (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C3047) *
               C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C28749 * C28750 * C81 -
          ((C11269 * C1953 + C11221 * C2031 + C11268 * C1357 + C11220 * C1431 +
            C11267 * C592 + C11219 * C642 + C11266 * C97 + C11218 * C155) *
               C28512 +
           (C11269 * C1951 + C11221 * C2029 + C11268 * C1354 + C11220 * C1428 +
            C11267 * C588 + C11219 * C638 + C11266 * C92 + C11218 * C150) *
               C11223) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C28749 * C28750 * C81 -
          ((C9785 * C590 + C28607 * C640 + C9784 * C99 + C9714 * C157) * C9713 +
           (C9785 * C586 + C28607 * C636 + C9784 * C94 + C9714 * C152) * C9721 +
           (C9810 + C9809) * C9712 + (C9808 + C9807) * C9719 +
           (C9806 + C9805) * C9711 + (C9804 + C9803) * C9717) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C11223 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28512) *
               C3047 +
           ((C9784 * C961 + C9714 * C1011 + C9785 * C2532 + C28607 * C2600) *
                C11223 +
            (C9784 * C965 + C9714 * C1015 + C9785 * C2536 + C28607 * C2604) *
                C28512) *
               C3048 +
           ((C9784 * C3050 + C9714 * C3115 + C9785 * C3640 + C28607 * C3698) *
                C11223 +
            (C9784 * C3053 + C9714 * C3118 + C9785 * C3642 + C28607 * C3700) *
                C28512) *
               C3049) *
              C28749 * C28750 * C81 -
          (((C9785 * C3641 + C28607 * C3699 + C9784 * C3054 + C9714 * C3119) *
                C28512 +
            (C9785 * C3639 + C28607 * C3697 + C9784 * C3051 + C9714 * C3116) *
                C11223) *
               C3049 +
           ((C9785 * C2535 + C28607 * C2602 + C9784 * C964 + C9714 * C1014) *
                C28512 +
            (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
                C11223) *
               C3048 +
           ((C9806 + C9805) * C28512 + (C9804 + C9803) * C11223) * C3047) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[21] +=
        (-std::pow(Pi, 2.5) * ((((C211 * C91 + C28569 * C212) * C11223 +
                                 (C211 * C96 + C28569 * C217) * C28512) *
                                    C11218 +
                                (C2100 * C11223 + C2101 * C28512) * C11219 +
                                (C2102 * C11223 + C2103 * C28512) * C11220 +
                                ((C211 * C1952 + C28569 * C2084) * C11223 +
                                 (C211 * C1954 + C28569 * C2086) * C28512) *
                                    C11221) *
                                   C28749 * C28750 * C81 -
                               (((C211 * C1953 + C28569 * C2085) * C28512 +
                                 (C211 * C1951 + C28569 * C2083) * C11223) *
                                    C11221 +
                                (C1519 * C28512 + C1518 * C11223) * C11220 +
                                (C1517 * C28512 + C1516 * C11223) * C11219 +
                                (C236 * C28512 + C235 * C11223) * C11218) *
                                   C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9717 +
            (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 + C236 * C9712 +
            C237 * C9721 + C238 * C9713) *
               C9714 +
           (C2100 * C9717 + C2101 * C9711 + C1516 * C9719 + C1517 * C9712 +
            C4863 * C9721 + C4864 * C9713) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C211 * C590 + C28569 * C682) * C9713 +
            (C211 * C586 + C28569 * C678) * C9721 + C4864 * C9712 +
            C4863 * C9719 + C1517 * C9711 + C1516 * C9717) *
               C28607 +
           (C240 * C9713 + C239 * C9721 + C238 * C9712 + C237 * C9719 +
            C236 * C9711 + C235 * C9717) *
               C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C11223 +
            (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
             C3185 * C3053 + C3049 * C3189) *
                C28512) *
               C9714 +
           ((C3183 * C589 + C3047 * C681 + C3184 * C2532 + C3048 * C2658 +
             C3185 * C3640 + C3049 * C3752) *
                C11223 +
            (C3183 * C593 + C3047 * C685 + C3184 * C2536 + C3048 * C2662 +
             C3185 * C3642 + C3049 * C3754) *
                C28512) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C3185 * C3641 + C3049 * C3753 + C3184 * C2535 + C3048 * C2661 +
             C3183 * C592 + C3047 * C684) *
                C28512 +
            (C3185 * C3639 + C3049 * C3751 + C3184 * C2531 + C3048 * C2657 +
             C3183 * C588 + C3047 * C680) *
                C11223) *
               C28607 +
           ((C3210 + C3209 + C3208) * C28512 +
            (C3207 + C3206 + C3205) * C11223) *
               C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[21] +=
        (-std::pow(Pi, 2.5) * (((C11223 * C91 + C28512 * C96) * C11266 +
                                (C11223 * C149 + C28512 * C274) * C11218 +
                                (C11223 * C589 + C28512 * C593) * C11267 +
                                (C11223 * C639 + C28512 * C723) * C11219 +
                                (C11223 * C1353 + C28512 * C1356) * C11268 +
                                (C11223 * C1427 + C28512 * C1569) * C11220 +
                                (C11223 * C1952 + C28512 * C1954) * C11269 +
                                (C11223 * C2030 + C28512 * C2158) * C11221) *
                                   C28569 * C28749 * C28750 * C81 -
                               ((C11223 * C2029 + C28512 * C2157) * C11221 +
                                (C11223 * C1951 + C28512 * C1953) * C11269 +
                                (C11223 * C1428 + C28512 * C1570) * C11220 +
                                (C11223 * C1354 + C28512 * C1357) * C11268 +
                                (C11223 * C638 + C28512 * C722) * C11219 +
                                (C11223 * C588 + C28512 * C592) * C11267 +
                                (C11223 * C150 + C28512 * C275) * C11218 +
                                (C11223 * C92 + C28512 * C97) * C11266) *
                                   C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9717 * C91 + C9711 * C96 + C9719 * C92 +
                                C9712 * C97 + C9721 * C93 + C9713 * C98) *
                                   C9784 +
                               (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                                C9712 * C275 + C9721 * C151 + C9713 * C276) *
                                   C9714 +
                               (C9717 * C589 + C9711 * C593 + C9719 * C588 +
                                C9712 * C592 + C9721 * C587 + C9713 * C591) *
                                   C9785 +
                               (C9717 * C639 + C9711 * C723 + C9719 * C638 +
                                C9712 * C722 + C9721 * C637 + C9713 * C721) *
                                   C28607) *
                                  C28569 * C28749 * C28750 * C81 -
                              ((C9721 * C636 + C9713 * C720 + C9719 * C637 +
                                C9712 * C721 + C9717 * C638 + C9711 * C722) *
                                   C28607 +
                               (C9721 * C586 + C9713 * C590 + C9719 * C587 +
                                C9712 * C591 + C9717 * C588 + C9711 * C592) *
                                   C9785 +
                               (C9721 * C152 + C9713 * C277 + C9719 * C151 +
                                C9712 * C276 + C9717 * C150 + C9711 * C275) *
                                   C9714 +
                               (C9721 * C94 + C9713 * C99 + C9719 * C93 +
                                C9712 * C98 + C9717 * C92 + C9711 * C97) *
                                   C9784) *
                                  C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C9784 +
            (C11223 * C149 + C28512 * C274) * C9714 + C11708 * C9785 +
            C11709 * C28607) *
               C3047 +
           ((C11223 * C961 + C28512 * C965) * C9784 +
            (C11223 * C1011 + C28512 * C1095) * C9714 +
            (C11223 * C2532 + C28512 * C2536) * C9785 +
            (C11223 * C2600 + C28512 * C2716) * C28607) *
               C3048 +
           ((C11223 * C3050 + C28512 * C3053) * C9784 +
            (C11223 * C3115 + C28512 * C3260) * C9714 +
            (C11223 * C3640 + C28512 * C3642) * C9785 +
            (C11223 * C3698 + C28512 * C3806) * C28607) *
               C3049) *
              C28749 * C28750 * C81 -
          (((C11223 * C3697 + C28512 * C3805) * C28607 +
            (C11223 * C3639 + C28512 * C3641) * C9785 +
            (C11223 * C3116 + C28512 * C3261) * C9714 +
            (C11223 * C3051 + C28512 * C3054) * C9784) *
               C3049 +
           ((C11223 * C2598 + C28512 * C2715) * C28607 +
            (C11223 * C2531 + C28512 * C2535) * C9785 +
            (C11223 * C1010 + C28512 * C1094) * C9714 +
            (C11223 * C960 + C28512 * C964) * C9784) *
               C3048 +
           ((C11223 * C638 + C28512 * C722) * C28607 +
            (C11223 * C588 + C28512 * C592) * C9785 +
            (C11223 * C150 + C28512 * C275) * C9714 +
            (C11223 * C92 + C28512 * C97) * C9784) *
               C3047) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyy[21] +=
        (-std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C28749 * C28750 * C81 -
          (C11375 * C1951 + C11381 + C11381 + C11221 * C2233 + C11374 * C1354 +
           C11382 + C11382 + C11220 * C1626 + C11373 * C588 + C11383 + C11383 +
           C11219 * C760 + C11372 * C92 + C11384 + C11384 + C11218 * C315) *
              C28512 * C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C28749 * C28750 * C81 -
          ((C9961 * C586 + C9977 + C9977 + C28607 * C758 + C9960 * C94 + C9978 +
            C9978 + C9714 * C317) *
               C9713 +
           (C9990 + C9989) * C9712 + (C9988 + C9987) * C9711) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C28512 * C3047 +
           (C9960 * C961 + C10983 + C10983 + C9714 * C1133 + C9961 * C2532 +
            C10982 + C10982 + C28607 * C2770) *
               C28512 * C3048 +
           (C9960 * C3050 + C12501 + C12501 + C9714 * C3313 + C9961 * C3640 +
            C12502 + C12502 + C28607 * C3858) *
               C28512 * C3049) *
              C28749 * C28750 * C81 -
          ((C9961 * C3639 + C12503 + C12503 + C28607 * C3857 + C9960 * C3051 +
            C12504 + C12504 + C9714 * C3314) *
               C28512 * C3049 +
           (C9961 * C2531 + C10980 + C10980 + C28607 * C2768 + C9960 * C960 +
            C10981 + C10981 + C9714 * C1132) *
               C28512 * C3048 +
           (C9988 + C9987) * C28512 * C3047) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[21] +=
        (-std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C11266 +
           (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
           C2298 * C11219 + C2102 * C11268 + C2299 * C11220 +
           (C211 * C1952 + C28569 * C2084) * C11269 +
           (C211 * C2030 + C28569 * C2292) * C11221) *
              C28512 * C28749 * C28750 * C81 -
          ((C211 * C2029 + C28569 * C2291) * C11221 +
           (C211 * C1951 + C28569 * C2083) * C11269 + C1715 * C11220 +
           C1518 * C11268 + C1714 * C11219 + C1516 * C11267 + C388 * C11218 +
           C235 * C11266) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C211 * C91 + C28569 * C212) * C9784 +
                                (C211 * C149 + C28569 * C373) * C9714 +
                                C2100 * C9785 + C2298 * C28607) *
                                   C9711 +
                               (C10041 + C10042 + C10043 + C10044) * C9712 +
                               (C10045 + C10046 + C10047 + C10048) * C9713) *
                                  C28749 * C28750 * C81 -
                              (((C211 * C636 + C28569 * C800) * C28607 +
                                (C211 * C586 + C28569 * C678) * C9785 +
                                C390 * C9714 + C239 * C9784) *
                                   C9713 +
                               (C10048 + C10047 + C10046 + C10045) * C9712 +
                               (C10044 + C10043 + C10042 + C10041) * C9711) *
                                  C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
            C3185 * C3050 + C3049 * C3186) *
               C9784 +
           (C3183 * C149 + C3047 * C373 + C3184 * C1011 + C3048 * C1175 +
            C3185 * C3115 + C3049 * C3379) *
               C9714 +
           (C3183 * C589 + C3047 * C681 + C3184 * C2532 + C3048 * C2658 +
            C3185 * C3640 + C3049 * C3752) *
               C9785 +
           (C3183 * C639 + C3047 * C803 + C3184 * C2600 + C3048 * C2830 +
            C3185 * C3698 + C3049 * C3914) *
               C28607) *
              C28512 * C28749 * C28750 * C81 -
          ((C3185 * C3697 + C3049 * C3913 + C3184 * C2598 + C3048 * C2828 +
            C3183 * C638 + C3047 * C802) *
               C28607 +
           (C3185 * C3639 + C3049 * C3751 + C3184 * C2531 + C3048 * C2657 +
            C3183 * C588 + C3047 * C680) *
               C9785 +
           (C3391 + C3390 + C3389) * C9714 + (C3207 + C3206 + C3205) * C9784) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[21] +=
        (-std::pow(Pi, 2.5) * ((((C11223 * C91 + C28512 * C96) * C211 +
                                 (C11223 * C212 + C28512 * C427) * C28569) *
                                    C11218 +
                                ((C11223 * C589 + C28512 * C593) * C211 +
                                 (C11223 * C681 + C28512 * C841) * C28569) *
                                    C11219 +
                                ((C11223 * C1353 + C28512 * C1356) * C211 +
                                 (C11223 * C1501 + C28512 * C1767) * C28569) *
                                    C11220 +
                                ((C11223 * C1952 + C28512 * C1954) * C211 +
                                 (C11223 * C2084 + C28512 * C2350) * C28569) *
                                    C11221) *
                                   C28749 * C28750 * C81 -
                               (((C11223 * C2083 + C28512 * C2349) * C28569 +
                                 (C11223 * C1951 + C28512 * C1953) * C211) *
                                    C11221 +
                                ((C11223 * C1502 + C28512 * C1768) * C28569 +
                                 (C11223 * C1354 + C28512 * C1357) * C211) *
                                    C11220 +
                                ((C11223 * C680 + C28512 * C840) * C28569 +
                                 (C11223 * C588 + C28512 * C592) * C211) *
                                    C11219 +
                                ((C11223 * C213 + C28512 * C428) * C28569 +
                                 (C11223 * C92 + C28512 * C97) * C211) *
                                    C11218) *
                                   C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C9717 * C91 + C9711 * C96 + C9719 * C92 +
                                 C9712 * C97 + C9721 * C93 + C9713 * C98) *
                                    C211 +
                                (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                                 C9712 * C428 + C9721 * C214 + C9713 * C429) *
                                    C28569) *
                                   C9714 +
                               ((C9717 * C589 + C9711 * C593 + C9719 * C588 +
                                 C9712 * C592 + C9721 * C587 + C9713 * C591) *
                                    C211 +
                                (C9717 * C681 + C9711 * C841 + C9719 * C680 +
                                 C9712 * C840 + C9721 * C679 + C9713 * C839) *
                                    C28569) *
                                   C28607) *
                                  C28749 * C28750 * C81 -
                              (((C9721 * C678 + C9713 * C838 + C9719 * C679 +
                                 C9712 * C839 + C9717 * C680 + C9711 * C840) *
                                    C28569 +
                                (C9721 * C586 + C9713 * C590 + C9719 * C587 +
                                 C9712 * C591 + C9717 * C588 + C9711 * C592) *
                                    C211) *
                                   C28607 +
                               ((C9721 * C215 + C9713 * C430 + C9719 * C214 +
                                 C9712 * C429 + C9717 * C213 + C9711 * C428) *
                                    C28569 +
                                (C9721 * C94 + C9713 * C99 + C9719 * C93 +
                                 C9712 * C98 + C9717 * C92 + C9711 * C97) *
                                    C211) *
                                   C9714) *
                                  C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C3183 +
            (C11223 * C212 + C28512 * C427) * C3047 +
            (C11223 * C961 + C28512 * C965) * C3184 +
            (C11223 * C1053 + C28512 * C1213) * C3048 +
            (C11223 * C3050 + C28512 * C3053) * C3185 +
            (C11223 * C3186 + C28512 * C3441) * C3049) *
               C9714 +
           (C11708 * C3183 + C11835 * C3047 +
            (C11223 * C2532 + C28512 * C2536) * C3184 +
            (C11223 * C2658 + C28512 * C2884) * C3048 +
            (C11223 * C3640 + C28512 * C3642) * C3185 +
            (C11223 * C3752 + C28512 * C3966) * C3049) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C11223 * C3751 + C28512 * C3965) * C3049 +
            (C11223 * C3639 + C28512 * C3641) * C3185 +
            (C11223 * C2657 + C28512 * C2883) * C3048 +
            (C11223 * C2531 + C28512 * C2535) * C3184 +
            (C11223 * C680 + C28512 * C840) * C3047 +
            (C11223 * C588 + C28512 * C592) * C3183) *
               C28607 +
           ((C11223 * C3187 + C28512 * C3442) * C3049 +
            (C11223 * C3051 + C28512 * C3054) * C3185 +
            (C11223 * C1052 + C28512 * C1212) * C3048 +
            (C11223 * C960 + C28512 * C964) * C3184 +
            (C11223 * C213 + C28512 * C428) * C3047 +
            (C11223 * C92 + C28512 * C97) * C3183) *
               C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[21] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C28749 * C28750 * C81 -
          ((C11269 * C2083 + C11221 * C2413 + C11268 * C1502 + C11220 * C1821 +
            C11267 * C680 + C11219 * C878 + C11266 * C213 + C11218 * C467) *
               C28569 +
           (C11269 * C1951 + C11221 * C2029 + C11268 * C1354 + C11220 * C1428 +
            C11267 * C588 + C11219 * C638 + C11266 * C92 + C11218 * C150) *
               C211) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C28749 * C28750 * C81 -
          (((C9785 * C678 + C28607 * C876 + C9784 * C215 + C9714 * C469) *
                C28569 +
            (C9785 * C586 + C28607 * C636 + C9784 * C94 + C9714 * C152) *
                C211) *
               C9713 +
           ((C10160 + C10159) * C28569 + (C9808 + C9807) * C211) * C9712 +
           ((C10158 + C10157) * C28569 + (C9804 + C9803) * C211) * C9711) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C3183 +
           (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
               C3047 +
           (C9784 * C961 + C9714 * C1011 + C9785 * C2532 + C28607 * C2600) *
               C3184 +
           (C9784 * C1053 + C9714 * C1251 + C9785 * C2658 + C28607 * C2938) *
               C3048 +
           (C9784 * C3050 + C9714 * C3115 + C9785 * C3640 + C28607 * C3698) *
               C3185 +
           (C9784 * C3186 + C9714 * C3494 + C9785 * C3752 + C28607 * C4018) *
               C3049) *
              C28512 * C28749 * C28750 * C81 -
          ((C9785 * C3751 + C28607 * C4017 + C9784 * C3187 + C9714 * C3495) *
               C3049 +
           (C9785 * C3639 + C28607 * C3697 + C9784 * C3051 + C9714 * C3116) *
               C3185 +
           (C9785 * C2657 + C28607 * C2936 + C9784 * C1052 + C9714 * C1250) *
               C3048 +
           (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
               C3184 +
           (C10158 + C10157) * C3047 + (C9804 + C9803) * C3183) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[21] += (-std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
                     C2478 * C11219 + C2479 * C11220 +
                     (C520 * C1952 + C2473 + C2473 + C28569 * C2466) * C11221) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C520 * C1951 + C2472 + C2472 + C28569 * C2465) * C11221 +
                     C1899 * C11220 + C1898 * C11219 + C544 * C11218) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
                      C2478 * C28607) *
                         C9711 +
                     (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
                        C28749 * C28750 * C81 -
                    (((C520 * C586 + C919 + C919 + C28569 * C914) * C28607 +
                      C546 * C9714) *
                         C9713 +
                     (C10214 + C10213) * C9712 + (C10212 + C10211) * C9711) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C3559 * C91 + C3566 + C3566 + C3047 * C521 +
                      C3560 * C961 + C3567 + C3567 + C3048 * C1289 +
                      C3561 * C3050 + C3568 + C3568 + C3049 * C3562) *
                         C9714 +
                     (C3559 * C589 + C4077 + C4077 + C3047 * C917 +
                      C3560 * C2532 + C4076 + C4076 + C3048 * C2992 +
                      C3561 * C3640 + C4075 + C4075 + C3049 * C4070) *
                         C28607) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C3561 * C3639 + C4072 + C4072 + C3049 * C4069 +
                      C3560 * C2531 + C4073 + C4073 + C3048 * C2990 +
                      C3559 * C588 + C4074 + C4074 + C3047 * C916) *
                         C28607 +
                     (C3589 + C3588 + C3587) * C9714) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[22] +=
        (-std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           C11574 * C11219 + C11575 * C11220 + C11576 * C11221) *
              C28749 * C583 -
          ((C11222 * C11554 + C11564 + C11564 + C28512 * C11556) * C28569 *
               C11221 +
           C11576 * C11220 + C11575 * C11219 + C11574 * C11218) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C10280 + C10281 + C10282) * C28569 * C28607) *
              C28749 * C583 -
          ((C9720 * C1355 + C10271 + C10271 + C9713 * C1361 + C9718 * C1354 +
            C10272 + C10272 + C9712 * C1360 + C9716 * C1353 + C10273 + C10273 +
            C9711 * C1359) *
               C28569 * C28607 +
           (C10282 + C10281 + C10280) * C28569 * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C3047 +
            (C11222 * C961 + C11957 + C11957 + C28512 * C969) * C3048 +
            (C11222 * C3050 + C12295 + C12295 + C28512 * C3056) * C3049) *
               C9714 +
           (C12758 + C12770 + C12771) * C28607) *
              C28749 * C583 -
          (((C11222 * C12754 + C12763 + C12763 + C28512 * C12756) * C3049 +
            (C11222 * C2530 + C11955 + C11955 + C28512 * C2538) * C3048 +
            C11572 * C3047) *
               C28607 +
           (C12771 + C12770 + C12758) * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C28749 * C583 -
          ((C11269 * C11555 + C11221 * C11611 + C11268 * C1954 +
            C11220 * C2032 + C11267 * C1356 + C11219 * C1430 + C11266 * C593 +
            C11218 * C643) *
               C28512 +
           (C11269 * C11554 + C11221 * C11610 + C11268 * C1952 +
            C11220 * C2030 + C11267 * C1353 + C11219 * C1427 + C11266 * C589 +
            C11218 * C639) *
               C11223) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C28749 * C583 -
          ((C9785 * C1358 + C28607 * C1432 + C9784 * C591 + C9714 * C641) *
               C9713 +
           (C9785 * C1355 + C28607 * C1429 + C9784 * C587 + C9714 * C637) *
               C9721 +
           (C9785 * C1357 + C28607 * C1431 + C9784 * C592 + C9714 * C642) *
               C9712 +
           (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
               C9719 +
           (C9785 * C1356 + C28607 * C1430 + C9784 * C593 + C9714 * C643) *
               C9711 +
           (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
               C9717) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C11223 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28512) *
               C3047 +
           ((C9784 * C961 + C9714 * C1011 + C9785 * C2532 + C28607 * C2600) *
                C11223 +
            (C9784 * C965 + C9714 * C1015 + C9785 * C2536 + C28607 * C2604) *
                C28512) *
               C3048 +
           ((C9784 * C3050 + C9714 * C3115 + C9785 * C3640 + C28607 * C3698) *
                C11223 +
            (C9784 * C3053 + C9714 * C3118 + C9785 * C3642 + C28607 * C3700) *
                C28512) *
               C3049) *
              C28749 * C583 -
          (((C9785 * C12755 + C28607 * C12822 + C9784 * C3642 + C9714 * C3700) *
                C28512 +
            (C9785 * C12754 + C28607 * C12821 + C9784 * C3640 + C9714 * C3698) *
                C11223) *
               C3049 +
           ((C9785 * C2534 + C28607 * C2603 + C9784 * C2536 + C9714 * C2604) *
                C28512 +
            (C9785 * C2530 + C28607 * C2599 + C9784 * C2532 + C9714 * C2600) *
                C11223) *
               C3048 +
           ((C9785 * C1356 + C28607 * C1430 + C9784 * C593 + C9714 * C643) *
                C28512 +
            (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
                C11223) *
               C3047) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C11223 +
            (C211 * C96 + C28569 * C217) * C28512) *
               C11218 +
           (C11649 + C11650) * C11219 + (C11651 + C11652) * C11220 +
           (C11659 + C11660) * C11221) *
              C28749 * C583 -
          (((C211 * C11555 + C28569 * C11647) * C28512 +
            (C211 * C11554 + C28569 * C11646) * C11223) *
               C11221 +
           (C11660 + C11659) * C11220 + (C11652 + C11651) * C11219 +
           (C11650 + C11649) * C11218) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9717 +
            (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 + C236 * C9712 +
            C237 * C9721 + C238 * C9713) *
               C9714 +
           (C10383 + C10384 + C10385 + C10386 + C10387 + C10388) * C28607) *
              C28749 * C583 -
          (((C211 * C1358 + C28569 * C1506) * C9713 +
            (C211 * C1355 + C28569 * C1503) * C9721 + C1519 * C9712 +
            C1518 * C9719 + C2103 * C9711 + C2102 * C9717) *
               C28607 +
           (C10388 + C10387 + C10386 + C10385 + C10384 + C10383) * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C11223 +
            (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
             C3185 * C3053 + C3049 * C3189) *
                C28512) *
               C9714 +
           ((C12888 + C12889 + C12890) * C11223 +
            (C12891 + C12892 + C12893) * C28512) *
               C28607) *
              C28749 * C583 -
          (((C3185 * C12755 + C3049 * C12874 + C3184 * C2534 + C3048 * C2660 +
             C3183 * C1356 + C3047 * C1504) *
                C28512 +
            (C3185 * C12754 + C3049 * C12873 + C3184 * C2530 + C3048 * C2656 +
             C3183 * C1353 + C3047 * C1501) *
                C11223) *
               C28607 +
           ((C12893 + C12892 + C12891) * C28512 +
            (C12890 + C12889 + C12888) * C11223) *
               C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[22] += (-std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C11266 +
                     (C11223 * C149 + C28512 * C274) * C11218 +
                     C11708 * C11267 + C11709 * C11219 + C11710 * C11268 +
                     C11711 * C11220 + C11712 * C11269 + C11713 * C11221) *
                        C28569 * C28749 * C583 -
                    ((C11223 * C11610 + C28512 * C11694) * C11221 +
                     (C11223 * C11554 + C28512 * C11555) * C11269 +
                     C11713 * C11220 + C11712 * C11268 + C11711 * C11219 +
                     C11710 * C11267 + C11709 * C11218 + C11708 * C11266) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C9784 +
                     (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                      C9712 * C275 + C9721 * C151 + C9713 * C276) *
                         C9714 +
                     (C10451 + C10452 + C10453) * C9785 +
                     (C10454 + C10455 + C10456) * C28607) *
                        C28569 * C28749 * C583 -
                    ((C9721 * C1429 + C9713 * C1571 + C9719 * C1428 +
                      C9712 * C1570 + C9717 * C1427 + C9711 * C1569) *
                         C28607 +
                     (C9721 * C1355 + C9713 * C1358 + C9719 * C1354 +
                      C9712 * C1357 + C9717 * C1353 + C9711 * C1356) *
                         C9785 +
                     (C10456 + C10455 + C10454) * C9714 +
                     (C10453 + C10452 + C10451) * C9784) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C9784 +
                      (C11223 * C149 + C28512 * C274) * C9714 + C11708 * C9785 +
                      C11709 * C28607) *
                         C3047 +
                     ((C11223 * C961 + C28512 * C965) * C9784 +
                      (C11223 * C1011 + C28512 * C1095) * C9714 +
                      C12953 * C9785 + C12954 * C28607) *
                         C3048 +
                     ((C11223 * C3050 + C28512 * C3053) * C9784 +
                      (C11223 * C3115 + C28512 * C3260) * C9714 +
                      C12955 * C9785 + C12956 * C28607) *
                         C3049) *
                        C28749 * C583 -
                    (((C11223 * C12821 + C28512 * C12943) * C28607 +
                      (C11223 * C12754 + C28512 * C12755) * C9785 +
                      C12956 * C9714 + C12955 * C9784) *
                         C3049 +
                     ((C11223 * C2599 + C28512 * C2714) * C28607 +
                      (C11223 * C2530 + C28512 * C2534) * C9785 +
                      C12954 * C9714 + C12953 * C9784) *
                         C3048 +
                     (C11711 * C28607 + C11710 * C9785 + C11709 * C9714 +
                      C11708 * C9784) *
                         C3047) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[22] +=
        (-std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C28749 * C583 -
          (C11375 * C11554 + C11749 + C11749 + C11221 * C11747 +
           C11374 * C1952 + C11750 + C11750 + C11220 * C2234 + C11373 * C1353 +
           C11751 + C11751 + C11219 * C1625 + C11372 * C589 + C11752 + C11752 +
           C11218 * C761) *
              C28512 * C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C28749 * C583 -
          ((C9961 * C1355 + C10507 + C10507 + C28607 * C1627 + C9960 * C587 +
            C10508 + C10508 + C9714 * C759) *
               C9713 +
           (C9961 * C1354 + C10509 + C10509 + C28607 * C1626 + C9960 * C588 +
            C10510 + C10510 + C9714 * C760) *
               C9712 +
           (C9961 * C1353 + C10511 + C10511 + C28607 * C1625 + C9960 * C589 +
            C10512 + C10512 + C9714 * C761) *
               C9711) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C28512 * C3047 +
           (C9960 * C961 + C10983 + C10983 + C9714 * C1133 + C9961 * C2532 +
            C10982 + C10982 + C28607 * C2770) *
               C28512 * C3048 +
           (C9960 * C3050 + C12501 + C12501 + C9714 * C3313 + C9961 * C3640 +
            C12502 + C12502 + C28607 * C3858) *
               C28512 * C3049) *
              C28749 * C583 -
          ((C9961 * C12754 + C13008 + C13008 + C28607 * C13006 + C9960 * C3640 +
            C13009 + C13009 + C9714 * C3858) *
               C28512 * C3049 +
           (C9961 * C2530 + C13010 + C13010 + C28607 * C2769 + C9960 * C2532 +
            C13011 + C13011 + C9714 * C2770) *
               C28512 * C3048 +
           (C9961 * C1353 + C10511 + C10511 + C28607 * C1625 + C9960 * C589 +
            C10512 + C10512 + C9714 * C761) *
               C28512 * C3047) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C11266 +
           (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
           C2298 * C11219 + C2102 * C11268 + C2299 * C11220 + C11657 * C11269 +
           C11790 * C11221) *
              C28512 * C28749 * C583 -
          ((C211 * C11610 + C28569 * C11786) * C11221 +
           (C211 * C11554 + C28569 * C11646) * C11269 + C11790 * C11220 +
           C11657 * C11268 + C2299 * C11219 + C2102 * C11267 + C2298 * C11218 +
           C2100 * C11266) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9784 +
            (C211 * C149 + C28569 * C373) * C9714 + C2100 * C9785 +
            C2298 * C28607) *
               C9711 +
           (C10041 + C10042 + C10043 + C10044) * C9712 +
           (C10045 + C10046 + C10047 + C10048) * C9713) *
              C28749 * C583 -
          (((C211 * C1429 + C28569 * C1704) * C28607 +
            (C211 * C1355 + C28569 * C1503) * C9785 + C5054 * C9714 +
            C4863 * C9784) *
               C9713 +
           (C1715 * C28607 + C1518 * C9785 + C1714 * C9714 + C1516 * C9784) *
               C9712 +
           (C2299 * C28607 + C2102 * C9785 + C2298 * C9714 + C2100 * C9784) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
            C3185 * C3050 + C3049 * C3186) *
               C9784 +
           (C3183 * C149 + C3047 * C373 + C3184 * C1011 + C3048 * C1175 +
            C3185 * C3115 + C3049 * C3379) *
               C9714 +
           (C12888 + C12889 + C12890) * C9785 +
           (C13069 + C13070 + C13071) * C28607) *
              C28512 * C28749 * C583 -
          ((C3185 * C12821 + C3049 * C13061 + C3184 * C2599 + C3048 * C2829 +
            C3183 * C1427 + C3047 * C1702) *
               C28607 +
           (C3185 * C12754 + C3049 * C12873 + C3184 * C2530 + C3048 * C2656 +
            C3183 * C1353 + C3047 * C1501) *
               C9785 +
           (C13071 + C13070 + C13069) * C9714 +
           (C12890 + C12889 + C12888) * C9784) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[22] +=
        (-std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C211 +
            (C11223 * C212 + C28512 * C427) * C28569) *
               C11218 +
           (C11826 + C11838) * C11219 + (C11829 + C11839) * C11220 +
           (C11832 + C11840) * C11221) *
              C28749 * C583 -
          (((C11223 * C11646 + C28512 * C11824) * C28569 +
            (C11223 * C11554 + C28512 * C11555) * C211) *
               C11221 +
           (C11840 + C11832) * C11220 + (C11839 + C11829) * C11219 +
           (C11838 + C11826) * C11218) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C211 +
            (C9717 * C212 + C9711 * C427 + C9719 * C213 + C9712 * C428 +
             C9721 * C214 + C9713 * C429) *
                C28569) *
               C9714 +
           ((C10451 + C10452 + C10453) * C211 +
            (C10619 + C10620 + C10621) * C28569) *
               C28607) *
              C28749 * C583 -
          (((C9721 * C1503 + C9713 * C1769 + C9719 * C1502 + C9712 * C1768 +
             C9717 * C1501 + C9711 * C1767) *
                C28569 +
            (C9721 * C1355 + C9713 * C1358 + C9719 * C1354 + C9712 * C1357 +
             C9717 * C1353 + C9711 * C1356) *
                C211) *
               C28607 +
           ((C10621 + C10620 + C10619) * C28569 +
            (C10453 + C10452 + C10451) * C211) *
               C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C3183 +
            (C11223 * C212 + C28512 * C427) * C3047 +
            (C11223 * C961 + C28512 * C965) * C3184 +
            (C11223 * C1053 + C28512 * C1213) * C3048 +
            (C11223 * C3050 + C28512 * C3053) * C3185 +
            (C11223 * C3186 + C28512 * C3441) * C3049) *
               C9714 +
           (C13123 + C13124 + C13125 + C13133 + C13128 + C13134) * C28607) *
              C28749 * C583 -
          (((C11223 * C12873 + C28512 * C13121) * C3049 +
            (C11223 * C12754 + C28512 * C12755) * C3185 +
            (C11223 * C2656 + C28512 * C2882) * C3048 +
            (C11223 * C2530 + C28512 * C2534) * C3184 + C11836 * C3047 +
            C11710 * C3183) *
               C28607 +
           (C13134 + C13128 + C13133 + C13125 + C13124 + C13123) * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[22] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C28749 * C583 -
          ((C11269 * C11646 + C11221 * C11874 + C11268 * C2084 +
            C11220 * C2414 + C11267 * C1501 + C11219 * C1820 + C11266 * C681 +
            C11218 * C879) *
               C28569 +
           (C11269 * C11554 + C11221 * C11610 + C11268 * C1952 +
            C11220 * C2030 + C11267 * C1353 + C11219 * C1427 + C11266 * C589 +
            C11218 * C639) *
               C211) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C28749 * C583 -
          (((C9785 * C1503 + C28607 * C1822 + C9784 * C679 + C9714 * C877) *
                C28569 +
            (C9785 * C1355 + C28607 * C1429 + C9784 * C587 + C9714 * C637) *
                C211) *
               C9713 +
           ((C9785 * C1502 + C28607 * C1821 + C9784 * C680 + C9714 * C878) *
                C28569 +
            (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
                C211) *
               C9712 +
           ((C9785 * C1501 + C28607 * C1820 + C9784 * C681 + C9714 * C879) *
                C28569 +
            (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
                C211) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C3183 +
           (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
               C3047 +
           (C9784 * C961 + C9714 * C1011 + C9785 * C2532 + C28607 * C2600) *
               C3184 +
           (C9784 * C1053 + C9714 * C1251 + C9785 * C2658 + C28607 * C2938) *
               C3048 +
           (C9784 * C3050 + C9714 * C3115 + C9785 * C3640 + C28607 * C3698) *
               C3185 +
           (C9784 * C3186 + C9714 * C3494 + C9785 * C3752 + C28607 * C4018) *
               C3049) *
              C28512 * C28749 * C583 -
          ((C9785 * C12873 + C28607 * C13184 + C9784 * C3752 + C9714 * C4018) *
               C3049 +
           (C9785 * C12754 + C28607 * C12821 + C9784 * C3640 + C9714 * C3698) *
               C3185 +
           (C9785 * C2656 + C28607 * C2937 + C9784 * C2658 + C9714 * C2938) *
               C3048 +
           (C9785 * C2530 + C28607 * C2599 + C9784 * C2532 + C9714 * C2600) *
               C3184 +
           (C9785 * C1501 + C28607 * C1820 + C9784 * C681 + C9714 * C879) *
               C3047 +
           (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
               C3183) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[22] +=
        (-std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
           C2478 * C11219 + C2479 * C11220 + C11916 * C11221) *
              C28512 * C28749 * C583 -
          ((C520 * C11554 + C11913 + C11913 + C28569 * C11909) * C11221 +
           C11916 * C11220 + C2479 * C11219 + C2478 * C11218) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
            C2478 * C28607) *
               C9711 +
           (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
              C28749 * C583 -
          (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C28607 +
            C5225 * C9714) *
               C9713 +
           (C1899 * C28607 + C1898 * C9714) * C9712 +
           (C2479 * C28607 + C2478 * C9714) * C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3559 * C91 + C3566 + C3566 + C3047 * C521 + C3560 * C961 + C3567 +
            C3567 + C3048 * C1289 + C3561 * C3050 + C3568 + C3568 +
            C3049 * C3562) *
               C9714 +
           (C13252 + C13253 + C13254) * C28607) *
              C28512 * C28749 * C583 -
          ((C3561 * C12754 + C13243 + C13243 + C3049 * C13235 + C3560 * C2530 +
            C13244 + C13244 + C3048 * C2991 + C3559 * C1353 + C13245 + C13245 +
            C3047 * C1882) *
               C28607 +
           (C13254 + C13253 + C13252) * C9714) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[23] +=
        (-std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           C11574 * C11219 + C11575 * C11220 + C11576 * C11221) *
              C956 -
          ((C11222 * C11950 + C11954 + C11954 + C28512 * C11952) * C28569 *
               C11221 +
           (C11222 * C2530 + C11955 + C11955 + C28512 * C2538) * C28569 *
               C11220 +
           (C11222 * C2532 + C11956 + C11956 + C28512 * C2540) * C28569 *
               C11219 +
           (C11222 * C961 + C11957 + C11957 + C28512 * C969) * C28569 *
               C11218) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C10280 + C10281 + C10282) * C28569 * C28607) *
              C956 -
          ((C9720 * C5783 + C10772 + C10772 + C9713 * C5785 + C9718 * C2531 +
            C10773 + C10773 + C9712 * C2539 + C9716 * C2532 + C10774 + C10774 +
            C9711 * C2540) *
               C28569 * C28607 +
           (C9720 * C959 + C10775 + C10775 + C9713 * C967 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9716 * C961 + C10777 + C10777 +
            C9711 * C969) *
               C28569 * C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C3047 +
            C13318 * C3048 + C13319 * C3049) *
               C9714 +
           (C12758 + C12770 + C12771) * C28607) *
              C956 -
          (((C11222 * C13304 + C13312 + C13312 + C28512 * C13306) * C3049 +
            C12769 * C3048 + C12768 * C3047) *
               C28607 +
           ((C11222 * C4128 + C13313 + C13313 + C28512 * C4132) * C3049 +
            C13319 * C3048 + C13318 * C3047) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C956 -
          ((C11269 * C11951 + C11221 * C11992 + C11268 * C2534 +
            C11220 * C2603 + C11267 * C2536 + C11219 * C2604 + C11266 * C965 +
            C11218 * C1015) *
               C28512 +
           (C11269 * C11950 + C11221 * C11991 + C11268 * C2530 +
            C11220 * C2599 + C11267 * C2532 + C11219 * C2600 + C11266 * C961 +
            C11218 * C1011) *
               C11223) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C956 -
          ((C9785 * C5784 + C28607 * C5843 + C9784 * C963 + C9714 * C1013) *
               C9713 +
           (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
               C9721 +
           (C9785 * C2535 + C28607 * C2602 + C9784 * C964 + C9714 * C1014) *
               C9712 +
           (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
               C9719 +
           (C9785 * C2536 + C28607 * C2604 + C9784 * C965 + C9714 * C1015) *
               C9711 +
           (C9785 * C2532 + C28607 * C2600 + C9784 * C961 + C9714 * C1011) *
               C9717) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C11223 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28512) *
               C3047 +
           ((C13388 + C13389) * C11223 + (C13390 + C13391) * C28512) * C3048 +
           ((C13392 + C13393) * C11223 + (C13394 + C13395) * C28512) * C3049) *
              C956 -
          (((C9785 * C13305 + C28607 * C13370 + C9784 * C4130 + C9714 * C4208) *
                C28512 +
            (C9785 * C13304 + C28607 * C13369 + C9784 * C4128 + C9714 * C4206) *
                C11223) *
               C3049 +
           ((C13395 + C13394) * C28512 + (C13393 + C13392) * C11223) * C3048 +
           ((C13391 + C13390) * C28512 + (C13389 + C13388) * C11223) * C3047) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C11223 +
            (C211 * C96 + C28569 * C217) * C28512) *
               C11218 +
           (C11649 + C11650) * C11219 + (C11651 + C11652) * C11220 +
           (C11659 + C11660) * C11221) *
              C956 -
          (((C211 * C11951 + C28569 * C12028) * C28512 +
            (C211 * C11950 + C28569 * C12027) * C11223) *
               C11221 +
           ((C211 * C2534 + C28569 * C2660) * C28512 +
            (C211 * C2530 + C28569 * C2656) * C11223) *
               C11220 +
           ((C211 * C2536 + C28569 * C2662) * C28512 +
            (C211 * C2532 + C28569 * C2658) * C11223) *
               C11219 +
           ((C211 * C965 + C28569 * C1057) * C28512 +
            (C211 * C961 + C28569 * C1053) * C11223) *
               C11218) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9717 +
            (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 + C236 * C9712 +
            C237 * C9721 + C238 * C9713) *
               C9714 +
           (C10383 + C10384 + C10385 + C10386 + C10387 + C10388) * C28607) *
              C956 -
          (((C211 * C5784 + C28569 * C5895) * C9713 +
            (C211 * C5783 + C28569 * C5894) * C9721 +
            (C211 * C2535 + C28569 * C2661) * C9712 +
            (C211 * C2531 + C28569 * C2657) * C9719 +
            (C211 * C2536 + C28569 * C2662) * C9711 +
            (C211 * C2532 + C28569 * C2658) * C9717) *
               C28607 +
           ((C211 * C963 + C28569 * C1055) * C9713 +
            (C211 * C959 + C28569 * C1051) * C9721 +
            (C211 * C964 + C28569 * C1056) * C9712 +
            (C211 * C960 + C28569 * C1052) * C9719 +
            (C211 * C965 + C28569 * C1057) * C9711 +
            (C211 * C961 + C28569 * C1053) * C9717) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C3183 * C91 + C3047 * C212 + C3184 * C961 + C3048 * C1053 +
             C3185 * C3050 + C3049 * C3186) *
                C11223 +
            (C3183 * C96 + C3047 * C217 + C3184 * C965 + C3048 * C1057 +
             C3185 * C3053 + C3049 * C3189) *
                C28512) *
               C9714 +
           ((C12888 + C12889 + C12890) * C11223 +
            (C12891 + C12892 + C12893) * C28512) *
               C28607) *
              C956 -
          (((C3185 * C13305 + C3049 * C13446 + C3184 * C3642 + C3048 * C3754 +
             C3183 * C2536 + C3047 * C2662) *
                C28512 +
            (C3185 * C13304 + C3049 * C13445 + C3184 * C3640 + C3048 * C3752 +
             C3183 * C2532 + C3047 * C2658) *
                C11223) *
               C28607 +
           ((C3185 * C4130 + C3049 * C4282 + C3184 * C3053 + C3048 * C3189 +
             C3183 * C965 + C3047 * C1057) *
                C28512 +
            (C3185 * C4128 + C3049 * C4280 + C3184 * C3050 + C3048 * C3186 +
             C3183 * C961 + C3047 * C1053) *
                C11223) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[23] += (-std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C11266 +
                     (C11223 * C149 + C28512 * C274) * C11218 +
                     C11708 * C11267 + C11709 * C11219 + C11710 * C11268 +
                     C11711 * C11220 + C11712 * C11269 + C11713 * C11221) *
                        C28569 * C956 -
                    ((C11223 * C11991 + C28512 * C12063) * C11221 +
                     (C11223 * C11950 + C28512 * C11951) * C11269 +
                     (C11223 * C2599 + C28512 * C2714) * C11220 +
                     (C11223 * C2530 + C28512 * C2534) * C11268 +
                     (C11223 * C2600 + C28512 * C2716) * C11219 +
                     (C11223 * C2532 + C28512 * C2536) * C11267 +
                     (C11223 * C1011 + C28512 * C1095) * C11218 +
                     (C11223 * C961 + C28512 * C965) * C11266) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C9784 +
                     (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                      C9712 * C275 + C9721 * C151 + C9713 * C276) *
                         C9714 +
                     (C10451 + C10452 + C10453) * C9785 +
                     (C10454 + C10455 + C10456) * C28607) *
                        C28569 * C956 -
                    ((C9721 * C5842 + C9713 * C5946 + C9719 * C2598 +
                      C9712 * C2715 + C9717 * C2600 + C9711 * C2716) *
                         C28607 +
                     (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 +
                      C9712 * C2535 + C9717 * C2532 + C9711 * C2536) *
                         C9785 +
                     (C9721 * C1009 + C9713 * C1093 + C9719 * C1010 +
                      C9712 * C1094 + C9717 * C1011 + C9711 * C1095) *
                         C9714 +
                     (C9721 * C959 + C9713 * C963 + C9719 * C960 +
                      C9712 * C964 + C9717 * C961 + C9711 * C965) *
                         C9784) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C9784 +
                      (C11223 * C149 + C28512 * C274) * C9714 + C11708 * C9785 +
                      C11709 * C28607) *
                         C3047 +
                     (C13515 + C13516 + C13503 + C13504) * C3048 +
                     (C13517 + C13518 + C13509 + C13510) * C3049) *
                        C956 -
                    (((C11223 * C13369 + C28512 * C13497) * C28607 +
                      (C11223 * C13304 + C28512 * C13305) * C9785 +
                      (C11223 * C4206 + C28512 * C4334) * C9714 +
                      (C11223 * C4128 + C28512 * C4130) * C9784) *
                         C3049 +
                     (C13510 + C13509 + C13518 + C13517) * C3048 +
                     (C13504 + C13503 + C13516 + C13515) * C3047) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[23] +=
        (-std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C956 -
          (C11375 * C11950 + C12100 + C12100 + C11221 * C12098 +
           C11374 * C2530 + C12101 + C12101 + C11220 * C2769 + C11373 * C2532 +
           C12102 + C12102 + C11219 * C2770 + C11372 * C961 + C12103 + C12103 +
           C11218 * C1133) *
              C28512 * C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C956 -
          ((C9961 * C5783 + C10978 + C10978 + C28607 * C5997 + C9960 * C959 +
            C10979 + C10979 + C9714 * C1131) *
               C9713 +
           (C9961 * C2531 + C10980 + C10980 + C28607 * C2768 + C9960 * C960 +
            C10981 + C10981 + C9714 * C1132) *
               C9712 +
           (C9961 * C2532 + C10982 + C10982 + C28607 * C2770 + C9960 * C961 +
            C10983 + C10983 + C9714 * C1133) *
               C9711) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C28512 * C3047 +
           (C13588 + C13589) * C28512 * C3048 +
           (C13590 + C13591) * C28512 * C3049) *
              C956 -
          ((C9961 * C13304 + C13578 + C13578 + C28607 * C13568 + C9960 * C4128 +
            C13579 + C13579 + C9714 * C4410) *
               C28512 * C3049 +
           (C13591 + C13590) * C28512 * C3048 +
           (C13589 + C13588) * C28512 * C3047) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[23] += (-std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28569 * C212) * C11266 +
                     (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
                     C2298 * C11219 + C2102 * C11268 + C2299 * C11220 +
                     C11657 * C11269 + C11790 * C11221) *
                        C28512 * C956 -
                    ((C211 * C11991 + C28569 * C12137) * C11221 +
                     (C211 * C11950 + C28569 * C12027) * C11269 +
                     (C211 * C2599 + C28569 * C2829) * C11220 +
                     (C211 * C2530 + C28569 * C2656) * C11268 +
                     (C211 * C2600 + C28569 * C2830) * C11219 +
                     (C211 * C2532 + C28569 * C2658) * C11267 +
                     (C211 * C1011 + C28569 * C1175) * C11218 +
                     (C211 * C961 + C28569 * C1053) * C11266) *
                        C28512 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C9784 +
                      (C211 * C149 + C28569 * C373) * C9714 + C2100 * C9785 +
                      C2298 * C28607) *
                         C9711 +
                     (C10041 + C10042 + C10043 + C10044) * C9712 +
                     (C10045 + C10046 + C10047 + C10048) * C9713) *
                        C956 -
                    (((C211 * C5842 + C28569 * C6054) * C28607 +
                      (C211 * C5783 + C28569 * C5894) * C9785 +
                      (C211 * C1009 + C28569 * C1173) * C9714 +
                      (C211 * C959 + C28569 * C1051) * C9784) *
                         C9713 +
                     ((C211 * C2598 + C28569 * C2828) * C28607 +
                      (C211 * C2531 + C28569 * C2657) * C9785 +
                      (C211 * C1010 + C28569 * C1174) * C9714 +
                      (C211 * C960 + C28569 * C1052) * C9784) *
                         C9712 +
                     ((C211 * C2600 + C28569 * C2830) * C28607 +
                      (C211 * C2532 + C28569 * C2658) * C9785 +
                      (C211 * C1011 + C28569 * C1175) * C9714 +
                      (C211 * C961 + C28569 * C1053) * C9784) *
                         C9711) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C3183 * C91 + C3047 * C212 + C3184 * C961 +
                      C3048 * C1053 + C3185 * C3050 + C3049 * C3186) *
                         C9784 +
                     (C3183 * C149 + C3047 * C373 + C3184 * C1011 +
                      C3048 * C1175 + C3185 * C3115 + C3049 * C3379) *
                         C9714 +
                     (C12888 + C12889 + C12890) * C9785 +
                     (C13069 + C13070 + C13071) * C28607) *
                        C28512 * C956 -
                    ((C3185 * C13369 + C3049 * C13641 + C3184 * C3698 +
                      C3048 * C3914 + C3183 * C2600 + C3047 * C2830) *
                         C28607 +
                     (C3185 * C13304 + C3049 * C13445 + C3184 * C3640 +
                      C3048 * C3752 + C3183 * C2532 + C3047 * C2658) *
                         C9785 +
                     (C3185 * C4206 + C3049 * C4478 + C3184 * C3115 +
                      C3048 * C3379 + C3183 * C1011 + C3047 * C1175) *
                         C9714 +
                     (C3185 * C4128 + C3049 * C4280 + C3184 * C3050 +
                      C3048 * C3186 + C3183 * C961 + C3047 * C1053) *
                         C9784) *
                        C28512 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezx[23] +=
        (-std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C211 +
            (C11223 * C212 + C28512 * C427) * C28569) *
               C11218 +
           (C11826 + C11838) * C11219 + (C11829 + C11839) * C11220 +
           (C11832 + C11840) * C11221) *
              C956 -
          (((C11223 * C12027 + C28512 * C12172) * C28569 +
            (C11223 * C11950 + C28512 * C11951) * C211) *
               C11221 +
           ((C11223 * C2656 + C28512 * C2882) * C28569 +
            (C11223 * C2530 + C28512 * C2534) * C211) *
               C11220 +
           ((C11223 * C2658 + C28512 * C2884) * C28569 +
            (C11223 * C2532 + C28512 * C2536) * C211) *
               C11219 +
           ((C11223 * C1053 + C28512 * C1213) * C28569 +
            (C11223 * C961 + C28512 * C965) * C211) *
               C11218) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C211 +
            (C9717 * C212 + C9711 * C427 + C9719 * C213 + C9712 * C428 +
             C9721 * C214 + C9713 * C429) *
                C28569) *
               C9714 +
           ((C10451 + C10452 + C10453) * C211 +
            (C10619 + C10620 + C10621) * C28569) *
               C28607) *
              C956 -
          (((C9721 * C5894 + C9713 * C6105 + C9719 * C2657 + C9712 * C2883 +
             C9717 * C2658 + C9711 * C2884) *
                C28569 +
            (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 + C9712 * C2535 +
             C9717 * C2532 + C9711 * C2536) *
                C211) *
               C28607 +
           ((C9721 * C1051 + C9713 * C1211 + C9719 * C1052 + C9712 * C1212 +
             C9717 * C1053 + C9711 * C1213) *
                C28569 +
            (C9721 * C959 + C9713 * C963 + C9719 * C960 + C9712 * C964 +
             C9717 * C961 + C9711 * C965) *
                C211) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C3183 +
            (C11223 * C212 + C28512 * C427) * C3047 + C13511 * C3184 +
            C13698 * C3048 + C13513 * C3185 + C13699 * C3049) *
               C9714 +
           (C13123 + C13124 + C13125 + C13133 + C13128 + C13134) * C28607) *
              C956 -
          (((C11223 * C13445 + C28512 * C13692) * C3049 +
            (C11223 * C13304 + C28512 * C13305) * C3185 + C13132 * C3048 +
            C12955 * C3184 + C13131 * C3047 + C12953 * C3183) *
               C28607 +
           ((C11223 * C4280 + C28512 * C4530) * C3049 +
            (C11223 * C4128 + C28512 * C4130) * C3185 + C13699 * C3048 +
            C13513 * C3184 + C13698 * C3047 + C13511 * C3183) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[23] +=
        (-std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C956 -
          ((C11269 * C12027 + C11221 * C12207 + C11268 * C2656 +
            C11220 * C2937 + C11267 * C2658 + C11219 * C2938 + C11266 * C1053 +
            C11218 * C1251) *
               C28569 +
           (C11269 * C11950 + C11221 * C11991 + C11268 * C2530 +
            C11220 * C2599 + C11267 * C2532 + C11219 * C2600 + C11266 * C961 +
            C11218 * C1011) *
               C211) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C956 -
          (((C9785 * C5894 + C28607 * C6156 + C9784 * C1051 + C9714 * C1249) *
                C28569 +
            (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
                C211) *
               C9713 +
           ((C9785 * C2657 + C28607 * C2936 + C9784 * C1052 + C9714 * C1250) *
                C28569 +
            (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
                C211) *
               C9712 +
           ((C9785 * C2658 + C28607 * C2938 + C9784 * C1053 + C9714 * C1251) *
                C28569 +
            (C9785 * C2532 + C28607 * C2600 + C9784 * C961 + C9714 * C1011) *
                C211) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C3183 +
           (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
               C3047 +
           (C13388 + C13389) * C3184 + (C13759 + C13760) * C3048 +
           (C13392 + C13393) * C3185 + (C13761 + C13762) * C3049) *
              C28512 * C956 -
          ((C9785 * C13445 + C28607 * C13749 + C9784 * C4280 + C9714 * C4594) *
               C3049 +
           (C9785 * C13304 + C28607 * C13369 + C9784 * C4128 + C9714 * C4206) *
               C3185 +
           (C13762 + C13761) * C3048 + (C13393 + C13392) * C3184 +
           (C13760 + C13759) * C3047 + (C13389 + C13388) * C3183) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[23] +=
        (-std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
           C2478 * C11219 + C2479 * C11220 + C11916 * C11221) *
              C28512 * C956 -
          ((C520 * C11950 + C12244 + C12244 + C28569 * C12242) * C11221 +
           (C520 * C2530 + C2996 + C2996 + C28569 * C2991) * C11220 +
           (C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C11219 +
           (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C11218) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
            C2478 * C28607) *
               C9711 +
           (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
              C956 -
          (((C520 * C5783 + C6209 + C6209 + C28569 * C6207) * C28607 +
            (C520 * C959 + C1292 + C1292 + C28569 * C1287) * C9714) *
               C9713 +
           ((C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C28607 +
            (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C9714) *
               C9712 +
           ((C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C28607 +
            (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C9714) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C3559 * C91 + C3566 + C3566 + C3047 * C521 + C3560 * C961 + C3567 +
            C3567 + C3048 * C1289 + C3561 * C3050 + C3568 + C3568 +
            C3049 * C3562) *
               C9714 +
           (C13252 + C13253 + C13254) * C28607) *
              C28512 * C956 -
          ((C3561 * C13304 + C13814 + C13814 + C3049 * C13812 + C3560 * C3640 +
            C13815 + C13815 + C3048 * C4070 + C3559 * C2532 + C13816 + C13816 +
            C3047 * C2992) *
               C28607 +
           (C3561 * C4128 + C4657 + C4657 + C3049 * C4652 + C3560 * C3050 +
            C4658 + C4658 + C3048 * C3562 + C3559 * C961 + C4659 + C4659 +
            C3047 * C1289) *
               C9714) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[24] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                       C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                          C28715 +
                      (C13871 * C961 + C14931 + C14931 + C28701 * C969 +
                       C13873 * C960 + C14930 + C14930 + C28517 * C968) *
                          C28633) *
                         C9714 +
                     ((C14422 + C14423) * C28715 +
                      (C13871 * C2532 + C14929 + C14929 + C28701 * C2540 +
                       C13873 * C2531 + C14928 + C14928 + C28517 * C2539) *
                          C28633) *
                         C28607) *
                        C28749 * C28750 * C81 -
                    (((C13873 * C5783 + C15404 + C15404 + C28517 * C5785 +
                       C13871 * C2531 + C15405 + C15405 + C28701 * C2539) *
                          C28633 +
                      (C13873 * C587 + C13884 + C13884 + C28517 * C595 +
                       C13871 * C588 + C13885 + C13885 + C28701 * C596) *
                          C28715) *
                         C28607 +
                     ((C13873 * C959 + C15406 + C15406 + C28517 * C967 +
                       C13871 * C960 + C15407 + C15407 + C28701 * C968) *
                          C28633 +
                      (C13873 * C93 + C13886 + C13886 + C28517 * C103 +
                       C13871 * C92 + C13887 + C13887 + C28701 * C102) *
                          C28715) *
                         C9714) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C27436 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28701 +
            (C9803 + C9804) * C27426 + (C9805 + C9806) * C28517) *
               C28715 +
           ((C13388 + C13389) * C27436 + (C13390 + C13391) * C28701 +
            (C15482 + C15483) * C27426 + (C15484 + C15485) * C28517) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C9785 * C5784 + C28607 * C5843 + C9784 * C963 + C9714 * C1013) *
                C28517 +
            (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
                C27426 +
            (C15485 + C15484) * C28701 + (C15483 + C15482) * C27436) *
               C28633 +
           ((C9810 + C9809) * C28517 + (C9808 + C9807) * C27426 +
            (C9806 + C9805) * C28701 + (C9804 + C9803) * C27436) *
               C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C27436 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28701 +
            (C6389 + C6390) * C27426 + (C6391 + C6392) * C28517) *
               C9714 +
           ((C8590 + C8591) * C27436 + (C8592 + C8593) * C28701 +
            (C7942 + C7943) * C27426 + (C7944 + C7945) * C28517) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C6371 * C5784 + C28633 * C5895 + C6370 * C591 + C28715 * C683) *
                C28517 +
            (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
                C27426 +
            (C7945 + C7944) * C28701 + (C7943 + C7942) * C27436) *
               C28607 +
           ((C6396 + C6395) * C28517 + (C6394 + C6393) * C27426 +
            (C6392 + C6391) * C28701 + (C6390 + C6389) * C27436) *
               C9714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C9784 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C9714 +
            (C14600 + C14601) * C9785 + (C14602 + C14603) * C28607) *
               C28715 +
           ((C27436 * C961 + C28701 * C965 + C27426 * C960 + C28517 * C964) *
                C9784 +
            (C27436 * C1011 + C28701 * C1095 + C27426 * C1010 +
             C28517 * C1094) *
                C9714 +
            (C27436 * C2532 + C28701 * C2536 + C27426 * C2531 +
             C28517 * C2535) *
                C9785 +
            (C27436 * C2600 + C28701 * C2716 + C27426 * C2598 +
             C28517 * C2715) *
                C28607) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C27426 * C5842 + C28517 * C5946 + C27436 * C2598 +
             C28701 * C2715) *
                C28607 +
            (C27426 * C5783 + C28517 * C5784 + C27436 * C2531 +
             C28701 * C2535) *
                C9785 +
            (C27426 * C1009 + C28517 * C1093 + C27436 * C1010 +
             C28701 * C1094) *
                C9714 +
            (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
                C9784) *
               C28633 +
           ((C27426 * C637 + C28517 * C721 + C27436 * C638 + C28701 * C722) *
                C28607 +
            (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
                C9785 +
            (C27426 * C151 + C28517 * C276 + C27436 * C150 + C28701 * C275) *
                C9714 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C9784) *
               C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
             C9964 + C28607 * C761) *
                C28701 +
            (C9987 + C9988) * C28517) *
               C28715 +
           ((C13588 + C13589) * C28701 + (C15692 + C15693) * C28517) * C28633) *
              C28749 * C28750 * C81 -
          (((C9961 * C5783 + C10978 + C10978 + C28607 * C5997 + C9960 * C959 +
             C10979 + C10979 + C9714 * C1131) *
                C28517 +
            (C15693 + C15692) * C28701) *
               C28633 +
           ((C9990 + C9989) * C28517 + (C9988 + C9987) * C28701) * C28715) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C9784 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C9714 +
            (C8590 + C8591) * C9785 + (C8812 + C8813) * C28607) *
               C28701 +
           ((C6389 + C6390) * C9784 + (C6560 + C6561) * C9714 +
            (C7942 + C7943) * C9785 + (C8158 + C8159) * C28607) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C6371 * C5842 + C28633 * C6054 + C6370 * C637 + C28715 * C801) *
                C28607 +
            (C6371 * C5783 + C28633 * C5894 + C6370 * C587 + C28715 * C679) *
                C9785 +
            (C6563 + C6562) * C9714 + (C6394 + C6393) * C9784) *
               C28517 +
           ((C8159 + C8158) * C28607 + (C7943 + C7942) * C9785 +
            (C6561 + C6560) * C9714 + (C6390 + C6389) * C9784) *
               C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C6370 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28715 +
            (C27436 * C961 + C28701 * C965 + C27426 * C960 + C28517 * C964) *
                C6371 +
            (C27436 * C1053 + C28701 * C1213 + C27426 * C1052 +
             C28517 * C1212) *
                C28633) *
               C9714 +
           ((C14600 + C14601) * C6370 + (C14772 + C14773) * C28715 +
            (C27436 * C2532 + C28701 * C2536 + C27426 * C2531 +
             C28517 * C2535) *
                C6371 +
            (C27436 * C2658 + C28701 * C2884 + C27426 * C2657 +
             C28517 * C2883) *
                C28633) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C27426 * C5894 + C28517 * C6105 + C27436 * C2657 +
             C28701 * C2883) *
                C28633 +
            (C27426 * C5783 + C28517 * C5784 + C27436 * C2531 +
             C28701 * C2535) *
                C6371 +
            (C27426 * C679 + C28517 * C839 + C27436 * C680 + C28701 * C840) *
                C28715 +
            (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
                C6370) *
               C28607 +
           ((C27426 * C1051 + C28517 * C1211 + C27436 * C1052 +
             C28701 * C1212) *
                C28633 +
            (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
                C6371 +
            (C27426 * C214 + C28517 * C429 + C27436 * C213 + C28701 * C428) *
                C28715 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C6370) *
               C9714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C6370 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28715 +
            (C13388 + C13389) * C6371 + (C13759 + C13760) * C28633) *
               C28701 +
           ((C9803 + C9804) * C6370 + (C10157 + C10158) * C28715 +
            (C15482 + C15483) * C6371 + (C15896 + C15897) * C28633) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C9785 * C5894 + C28607 * C6156 + C9784 * C1051 + C9714 * C1249) *
                C28633 +
            (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
                C6371 +
            (C10160 + C10159) * C28715 + (C9808 + C9807) * C6370) *
               C28517 +
           ((C15897 + C15896) * C28633 + (C15483 + C15482) * C6371 +
            (C10158 + C10157) * C28715 + (C9804 + C9803) * C6370) *
               C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[24] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C9714 +
            (C9030 + C9031) * C28607) *
               C28701 +
           ((C6751 + C6752) * C9714 + (C8372 + C8373) * C28607) * C28517) *
              C28749 * C28750 * C81 -
          (((C6725 * C5783 + C7206 + C7206 + C28633 * C6207 + C6724 * C587 +
             C7207 + C7207 + C28715 * C915) *
                C28607 +
            (C6754 + C6753) * C9714) *
               C28517 +
           ((C8373 + C8372) * C28607 + (C6752 + C6751) * C9714) * C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 + C13873 * C92 +
             C13877 + C13877 + C28517 * C102) *
                C28715 +
            (C13871 * C961 + C14931 + C14931 + C28701 * C969 + C13873 * C960 +
             C14930 + C14930 + C28517 * C968) *
                C28633) *
               C9714 +
           ((C14422 + C14423) * C28715 + (C16038 + C16039) * C28633) * C28607) *
              C28749 * C583 -
          (((C13873 * C2529 + C14926 + C14926 + C28517 * C2537 +
             C13871 * C2530 + C14927 + C14927 + C28701 * C2538) *
                C28633 +
            (C14425 + C14424) * C28715) *
               C28607 +
           ((C16039 + C16038) * C28633 + (C14423 + C14422) * C28715) * C9714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C27436 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28701 +
            (C9803 + C9804) * C27426 + (C9805 + C9806) * C28517) *
               C28715 +
           ((C13388 + C13389) * C27436 + (C13390 + C13391) * C28701 +
            (C15482 + C15483) * C27426 + (C15484 + C15485) * C28517) *
               C28633) *
              C28749 * C583 -
          (((C9785 * C2533 + C28607 * C2601 + C9784 * C2535 + C9714 * C2602) *
                C28517 +
            (C9785 * C2529 + C28607 * C2597 + C9784 * C2531 + C9714 * C2598) *
                C27426 +
            (C9785 * C2534 + C28607 * C2603 + C9784 * C2536 + C9714 * C2604) *
                C28701 +
            (C9785 * C2530 + C28607 * C2599 + C9784 * C2532 + C9714 * C2600) *
                C27436) *
               C28633 +
           ((C9785 * C1357 + C28607 * C1431 + C9784 * C592 + C9714 * C642) *
                C28517 +
            (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
                C27426 +
            (C9785 * C1356 + C28607 * C1430 + C9784 * C593 + C9714 * C643) *
                C28701 +
            (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
                C27436) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C27436 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28701 +
            (C6389 + C6390) * C27426 + (C6391 + C6392) * C28517) *
               C9714 +
           ((C8590 + C8591) * C27436 + (C8592 + C8593) * C28701 +
            (C7942 + C7943) * C27426 + (C7944 + C7945) * C28517) *
               C28607) *
              C28749 * C583 -
          (((C6371 * C2533 + C28633 * C2659 + C6370 * C1357 + C28715 * C1505) *
                C28517 +
            (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
                C27426 +
            (C6371 * C2534 + C28633 * C2660 + C6370 * C1356 + C28715 * C1504) *
                C28701 +
            (C6371 * C2530 + C28633 * C2656 + C6370 * C1353 + C28715 * C1501) *
                C27436) *
               C28607 +
           ((C7945 + C7944) * C28517 + (C7943 + C7942) * C27426 +
            (C8593 + C8592) * C28701 + (C8591 + C8590) * C27436) *
               C9714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C9784 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C9714 +
            (C14600 + C14601) * C9785 + (C14602 + C14603) * C28607) *
               C28715 +
           ((C27436 * C961 + C28701 * C965 + C27426 * C960 + C28517 * C964) *
                C9784 +
            (C27436 * C1011 + C28701 * C1095 + C27426 * C1010 +
             C28517 * C1094) *
                C9714 +
            (C16246 + C16247) * C9785 + (C16248 + C16249) * C28607) *
               C28633) *
              C28749 * C583 -
          (((C27426 * C2597 + C28517 * C2713 + C27436 * C2599 +
             C28701 * C2714) *
                C28607 +
            (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 +
             C28701 * C2534) *
                C9785 +
            (C16249 + C16248) * C9714 + (C16247 + C16246) * C9784) *
               C28633 +
           ((C14607 + C14606) * C28607 + (C14605 + C14604) * C9785 +
            (C14603 + C14602) * C9714 + (C14601 + C14600) * C9784) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
             C9964 + C28607 * C761) *
                C28701 +
            (C9987 + C9988) * C28517) *
               C28715 +
           ((C13588 + C13589) * C28701 + (C15692 + C15693) * C28517) * C28633) *
              C28749 * C583 -
          (((C9961 * C2529 + C16316 + C16316 + C28607 * C2767 + C9960 * C2531 +
             C16317 + C16317 + C9714 * C2768) *
                C28517 +
            (C9961 * C2530 + C13010 + C13010 + C28607 * C2769 + C9960 * C2532 +
             C13011 + C13011 + C9714 * C2770) *
                C28701) *
               C28633 +
           ((C9961 * C1354 + C10509 + C10509 + C28607 * C1626 + C9960 * C588 +
             C10510 + C10510 + C9714 * C760) *
                C28517 +
            (C9961 * C1353 + C10511 + C10511 + C28607 * C1625 + C9960 * C589 +
             C10512 + C10512 + C9714 * C761) *
                C28701) *
               C28715) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C9784 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C9714 +
            (C8590 + C8591) * C9785 + (C8812 + C8813) * C28607) *
               C28701 +
           ((C6389 + C6390) * C9784 + (C6560 + C6561) * C9714 +
            (C7942 + C7943) * C9785 + (C8158 + C8159) * C28607) *
               C28517) *
              C28749 * C583 -
          (((C6371 * C2597 + C28633 * C2827 + C6370 * C1428 + C28715 * C1703) *
                C28607 +
            (C6371 * C2529 + C28633 * C2655 + C6370 * C1354 + C28715 * C1502) *
                C9785 +
            (C8159 + C8158) * C9714 + (C7943 + C7942) * C9784) *
               C28517 +
           ((C6371 * C2599 + C28633 * C2829 + C6370 * C1427 + C28715 * C1702) *
                C28607 +
            (C6371 * C2530 + C28633 * C2656 + C6370 * C1353 + C28715 * C1501) *
                C9785 +
            (C8813 + C8812) * C9714 + (C8591 + C8590) * C9784) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C6370 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28715 +
            (C27436 * C961 + C28701 * C965 + C27426 * C960 + C28517 * C964) *
                C6371 +
            (C27436 * C1053 + C28701 * C1213 + C27426 * C1052 +
             C28517 * C1212) *
                C28633) *
               C9714 +
           ((C14600 + C14601) * C6370 + (C14772 + C14773) * C28715 +
            (C16246 + C16247) * C6371 + (C16454 + C16455) * C28633) *
               C28607) *
              C28749 * C583 -
          (((C27426 * C2655 + C28517 * C2881 + C27436 * C2656 +
             C28701 * C2882) *
                C28633 +
            (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 +
             C28701 * C2534) *
                C6371 +
            (C14775 + C14774) * C28715 + (C14605 + C14604) * C6370) *
               C28607 +
           ((C16455 + C16454) * C28633 + (C16247 + C16246) * C6371 +
            (C14773 + C14772) * C28715 + (C14601 + C14600) * C6370) *
               C9714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C6370 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28715 +
            (C13388 + C13389) * C6371 + (C13759 + C13760) * C28633) *
               C28701 +
           ((C9803 + C9804) * C6370 + (C10157 + C10158) * C28715 +
            (C15482 + C15483) * C6371 + (C15896 + C15897) * C28633) *
               C28517) *
              C28749 * C583 -
          (((C9785 * C2655 + C28607 * C2935 + C9784 * C2657 + C9714 * C2936) *
                C28633 +
            (C9785 * C2529 + C28607 * C2597 + C9784 * C2531 + C9714 * C2598) *
                C6371 +
            (C9785 * C1502 + C28607 * C1821 + C9784 * C680 + C9714 * C878) *
                C28715 +
            (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
                C6370) *
               C28517 +
           ((C9785 * C2656 + C28607 * C2937 + C9784 * C2658 + C9714 * C2938) *
                C28633 +
            (C9785 * C2530 + C28607 * C2599 + C9784 * C2532 + C9714 * C2600) *
                C6371 +
            (C9785 * C1501 + C28607 * C1820 + C9784 * C681 + C9714 * C879) *
                C28715 +
            (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
                C6370) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[25] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C9714 +
            (C9030 + C9031) * C28607) *
               C28701 +
           ((C6751 + C6752) * C9714 + (C8372 + C8373) * C28607) * C28517) *
              C28749 * C583 -
          (((C6725 * C2529 + C9022 + C9022 + C28633 * C2989 + C6724 * C1354 +
             C9023 + C9023 + C28715 * C1883) *
                C28607 +
            (C8373 + C8372) * C9714) *
               C28517 +
           ((C6725 * C2530 + C9024 + C9024 + C28633 * C2991 + C6724 * C1353 +
             C9025 + C9025 + C28715 * C1882) *
                C28607 +
            (C9031 + C9030) * C9714) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 + C13873 * C92 +
             C13877 + C13877 + C28517 * C102) *
                C28715 +
            (C16666 + C16667) * C28633) *
               C9714 +
           ((C14422 + C14423) * C28715 + (C16038 + C16039) * C28633) * C28607) *
              C956 -
          (((C13873 * C3639 + C16658 + C16658 + C28517 * C3643 +
             C13871 * C3640 + C16659 + C16659 + C28701 * C3644) *
                C28633 +
            (C16039 + C16038) * C28715) *
               C28607 +
           ((C13873 * C3051 + C16660 + C16660 + C28517 * C3057 +
             C13871 * C3050 + C16661 + C16661 + C28701 * C3056) *
                C28633 +
            (C16667 + C16666) * C28715) *
               C9714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C27436 +
            (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) *
                C28701 +
            (C9803 + C9804) * C27426 + (C9805 + C9806) * C28517) *
               C28715 +
           ((C13388 + C13389) * C27436 + (C13390 + C13391) * C28701 +
            (C15482 + C15483) * C27426 + (C15484 + C15485) * C28517) *
               C28633) *
              C956 -
          (((C9785 * C3641 + C28607 * C3699 + C9784 * C3054 + C9714 * C3119) *
                C28517 +
            (C9785 * C3639 + C28607 * C3697 + C9784 * C3051 + C9714 * C3116) *
                C27426 +
            (C13395 + C13394) * C28701 + (C13393 + C13392) * C27436) *
               C28633 +
           ((C15485 + C15484) * C28517 + (C15483 + C15482) * C27426 +
            (C13391 + C13390) * C28701 + (C13389 + C13388) * C27436) *
               C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C27436 +
            (C6370 * C96 + C28715 * C217 + C6371 * C965 + C28633 * C1057) *
                C28701 +
            (C6389 + C6390) * C27426 + (C6391 + C6392) * C28517) *
               C9714 +
           ((C8590 + C8591) * C27436 + (C8592 + C8593) * C28701 +
            (C7942 + C7943) * C27426 + (C7944 + C7945) * C28517) *
               C28607) *
              C956 -
          (((C6371 * C3641 + C28633 * C3753 + C6370 * C2535 + C28715 * C2661) *
                C28517 +
            (C6371 * C3639 + C28633 * C3751 + C6370 * C2531 + C28715 * C2657) *
                C27426 +
            (C6371 * C3642 + C28633 * C3754 + C6370 * C2536 + C28715 * C2662) *
                C28701 +
            (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
                C27436) *
               C28607 +
           ((C6371 * C3054 + C28633 * C3190 + C6370 * C964 + C28715 * C1056) *
                C28517 +
            (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
                C27426 +
            (C6371 * C3053 + C28633 * C3189 + C6370 * C965 + C28715 * C1057) *
                C28701 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C27436) *
               C9714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C9784 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C9714 +
            (C14600 + C14601) * C9785 + (C14602 + C14603) * C28607) *
               C28715 +
           ((C16874 + C16875) * C9784 + (C16876 + C16877) * C9714 +
            (C16246 + C16247) * C9785 + (C16248 + C16249) * C28607) *
               C28633) *
              C956 -
          (((C27426 * C3697 + C28517 * C3805 + C27436 * C3698 +
             C28701 * C3806) *
                C28607 +
            (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 +
             C28701 * C3642) *
                C9785 +
            (C27426 * C3116 + C28517 * C3261 + C27436 * C3115 +
             C28701 * C3260) *
                C9714 +
            (C27426 * C3051 + C28517 * C3054 + C27436 * C3050 +
             C28701 * C3053) *
                C9784) *
               C28633 +
           ((C16249 + C16248) * C28607 + (C16247 + C16246) * C9785 +
            (C16877 + C16876) * C9714 + (C16875 + C16874) * C9784) *
               C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
             C9964 + C28607 * C761) *
                C28701 +
            (C9987 + C9988) * C28517) *
               C28715 +
           ((C13588 + C13589) * C28701 + (C15692 + C15693) * C28517) * C28633) *
              C956 -
          (((C9961 * C3639 + C12503 + C12503 + C28607 * C3857 + C9960 * C3051 +
             C12504 + C12504 + C9714 * C3314) *
                C28517 +
            (C13591 + C13590) * C28701) *
               C28633 +
           ((C15693 + C15692) * C28517 + (C13589 + C13588) * C28701) * C28715) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6370 * C91 + C28715 * C212 + C6371 * C961 + C28633 * C1053) *
                C9784 +
            (C6370 * C149 + C28715 * C373 + C6371 * C1011 + C28633 * C1175) *
                C9714 +
            (C8590 + C8591) * C9785 + (C8812 + C8813) * C28607) *
               C28701 +
           ((C6389 + C6390) * C9784 + (C6560 + C6561) * C9714 +
            (C7942 + C7943) * C9785 + (C8158 + C8159) * C28607) *
               C28517) *
              C956 -
          (((C6371 * C3697 + C28633 * C3913 + C6370 * C2598 + C28715 * C2828) *
                C28607 +
            (C6371 * C3639 + C28633 * C3751 + C6370 * C2531 + C28715 * C2657) *
                C9785 +
            (C6371 * C3116 + C28633 * C3380 + C6370 * C1010 + C28715 * C1174) *
                C9714 +
            (C6371 * C3051 + C28633 * C3187 + C6370 * C960 + C28715 * C1052) *
                C9784) *
               C28517 +
           ((C6371 * C3698 + C28633 * C3914 + C6370 * C2600 + C28715 * C2830) *
                C28607 +
            (C6371 * C3640 + C28633 * C3752 + C6370 * C2532 + C28715 * C2658) *
                C9785 +
            (C6371 * C3115 + C28633 * C3379 + C6370 * C1011 + C28715 * C1175) *
                C9714 +
            (C6371 * C3050 + C28633 * C3186 + C6370 * C961 + C28715 * C1053) *
                C9784) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C6370 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C28715 +
            (C16874 + C16875) * C6371 + (C17080 + C17081) * C28633) *
               C9714 +
           ((C14600 + C14601) * C6370 + (C14772 + C14773) * C28715 +
            (C16246 + C16247) * C6371 + (C16454 + C16455) * C28633) *
               C28607) *
              C956 -
          (((C27426 * C3751 + C28517 * C3965 + C27436 * C3752 +
             C28701 * C3966) *
                C28633 +
            (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 +
             C28701 * C3642) *
                C6371 +
            (C16455 + C16454) * C28715 + (C16247 + C16246) * C6370) *
               C28607 +
           ((C27426 * C3187 + C28517 * C3442 + C27436 * C3186 +
             C28701 * C3441) *
                C28633 +
            (C27426 * C3051 + C28517 * C3054 + C27436 * C3050 +
             C28701 * C3053) *
                C6371 +
            (C17081 + C17080) * C28715 + (C16875 + C16874) * C6370) *
               C9714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) *
                C6370 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28715 +
            (C13388 + C13389) * C6371 + (C13759 + C13760) * C28633) *
               C28701 +
           ((C9803 + C9804) * C6370 + (C10157 + C10158) * C28715 +
            (C15482 + C15483) * C6371 + (C15896 + C15897) * C28633) *
               C28517) *
              C956 -
          (((C9785 * C3751 + C28607 * C4017 + C9784 * C3187 + C9714 * C3495) *
                C28633 +
            (C9785 * C3639 + C28607 * C3697 + C9784 * C3051 + C9714 * C3116) *
                C6371 +
            (C15897 + C15896) * C28715 + (C15483 + C15482) * C6370) *
               C28517 +
           ((C13762 + C13761) * C28633 + (C13393 + C13392) * C6371 +
            (C13760 + C13759) * C28715 + (C13389 + C13388) * C6370) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[26] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C6724 * C91 + C6727 + C6727 + C28715 * C521 + C6725 * C961 +
             C6728 + C6728 + C28633 * C1289) *
                C9714 +
            (C9030 + C9031) * C28607) *
               C28701 +
           ((C6751 + C6752) * C9714 + (C8372 + C8373) * C28607) * C28517) *
              C956 -
          (((C6725 * C3639 + C9658 + C9658 + C28633 * C4069 + C6724 * C2531 +
             C9659 + C9659 + C28715 * C2990) *
                C28607 +
            (C6725 * C3051 + C7718 + C7718 + C28633 * C3563 + C6724 * C960 +
             C7719 + C7719 + C28715 * C1288) *
                C9714) *
               C28517 +
           ((C6725 * C3640 + C9660 + C9660 + C28633 * C4070 + C6724 * C2532 +
             C9661 + C9661 + C28715 * C2992) *
                C28607 +
            (C6725 * C3050 + C7720 + C7720 + C28633 * C3562 + C6724 * C961 +
             C7721 + C7721 + C28715 * C1289) *
                C9714) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C9716 * C589 + C9726 + C9726 + C9711 * C597 + C9718 * C588 + C9727 +
            C9727 + C9712 * C596 + C9720 * C587 + C9728 + C9728 +
            C9713 * C595) *
               C28569 * C28607) *
              C28749 * C28750 * C81 -
          ((C9720 * C586 + C9729 + C9729 + C9713 * C594 + C9718 * C587 + C9730 +
            C9730 + C9712 * C595 + C9716 * C588 + C9731 + C9731 +
            C9711 * C596) *
               C28569 * C28607 +
           (C9720 * C94 + C9732 + C9732 + C9713 * C104 + C9718 * C93 + C9733 +
            C9733 + C9712 * C103 + C9716 * C92 + C9734 + C9734 + C9711 * C102) *
               C28569 * C9714) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           (C11222 * C589 + C11226 + C11226 + C28512 * C597) * C28569 * C11219 +
           (C11222 * C1353 + C11227 + C11227 + C28512 * C1359) * C28569 *
               C11220 +
           (C11222 * C1952 + C11228 + C11228 + C28512 * C1956) * C28569 *
               C11221) *
              C28749 * C28750 * C81 -
          ((C11222 * C1951 + C11229 + C11229 + C28512 * C1955) * C28569 *
               C11221 +
           (C11222 * C1354 + C11230 + C11230 + C28512 * C1360) * C28569 *
               C11220 +
           (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C28569 * C11219 +
           (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C28569 * C11218) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C28749 * C28750 * C81 -
          ((C9785 * C590 + C28607 * C640 + C9784 * C99 + C9714 * C157) * C9713 +
           (C9785 * C586 + C28607 * C636 + C9784 * C94 + C9714 * C152) * C9721 +
           (C9810 + C9809) * C9712 + (C9808 + C9807) * C9719 +
           (C9806 + C9805) * C9711 + (C9804 + C9803) * C9717) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C28749 * C28750 * C81 -
          ((C11269 * C1953 + C11221 * C2031 + C11268 * C1357 + C11220 * C1431 +
            C11267 * C592 + C11219 * C642 + C11266 * C97 + C11218 * C155) *
               C28512 +
           (C11269 * C1951 + C11221 * C2029 + C11268 * C1354 + C11220 * C1428 +
            C11267 * C588 + C11219 * C638 + C11266 * C92 + C11218 * C150) *
               C11223) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexz[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C9717 +
                      (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 +
                      C236 * C9712 + C237 * C9721 + C238 * C9713) *
                         C9714 +
                     (C2100 * C9717 + C2101 * C9711 + C1516 * C9719 +
                      C1517 * C9712 + C4863 * C9721 + C4864 * C9713) *
                         C28607) *
                        C28749 * C28750 * C81 -
                    (((C211 * C590 + C28569 * C682) * C9713 +
                      (C211 * C586 + C28569 * C678) * C9721 + C4864 * C9712 +
                      C4863 * C9719 + C1517 * C9711 + C1516 * C9717) *
                         C28607 +
                     (C240 * C9713 + C239 * C9721 + C238 * C9712 +
                      C237 * C9719 + C236 * C9711 + C235 * C9717) *
                         C9714) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C11223 +
                      (C211 * C96 + C28569 * C217) * C28512) *
                         C11218 +
                     (C2100 * C11223 + C2101 * C28512) * C11219 +
                     (C2102 * C11223 + C2103 * C28512) * C11220 +
                     ((C211 * C1952 + C28569 * C2084) * C11223 +
                      (C211 * C1954 + C28569 * C2086) * C28512) *
                         C11221) *
                        C28749 * C28750 * C81 -
                    (((C211 * C1953 + C28569 * C2085) * C28512 +
                      (C211 * C1951 + C28569 * C2083) * C11223) *
                         C11221 +
                     (C1519 * C28512 + C1518 * C11223) * C11220 +
                     (C1517 * C28512 + C1516 * C11223) * C11219 +
                     (C236 * C28512 + C235 * C11223) * C11218) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyx[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C9784 +
                     (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                      C9712 * C275 + C9721 * C151 + C9713 * C276) *
                         C9714 +
                     (C9717 * C589 + C9711 * C593 + C9719 * C588 +
                      C9712 * C592 + C9721 * C587 + C9713 * C591) *
                         C9785 +
                     (C9717 * C639 + C9711 * C723 + C9719 * C638 +
                      C9712 * C722 + C9721 * C637 + C9713 * C721) *
                         C28607) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C9721 * C636 + C9713 * C720 + C9719 * C637 +
                      C9712 * C721 + C9717 * C638 + C9711 * C722) *
                         C28607 +
                     (C9721 * C586 + C9713 * C590 + C9719 * C587 +
                      C9712 * C591 + C9717 * C588 + C9711 * C592) *
                         C9785 +
                     (C9721 * C152 + C9713 * C277 + C9719 * C151 +
                      C9712 * C276 + C9717 * C150 + C9711 * C275) *
                         C9714 +
                     (C9721 * C94 + C9713 * C99 + C9719 * C93 + C9712 * C98 +
                      C9717 * C92 + C9711 * C97) *
                         C9784) *
                        C28569 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C11266 +
                     (C11223 * C149 + C28512 * C274) * C11218 +
                     (C11223 * C589 + C28512 * C593) * C11267 +
                     (C11223 * C639 + C28512 * C723) * C11219 +
                     (C11223 * C1353 + C28512 * C1356) * C11268 +
                     (C11223 * C1427 + C28512 * C1569) * C11220 +
                     (C11223 * C1952 + C28512 * C1954) * C11269 +
                     (C11223 * C2030 + C28512 * C2158) * C11221) *
                        C28569 * C28749 * C28750 * C81 -
                    ((C11223 * C2029 + C28512 * C2157) * C11221 +
                     (C11223 * C1951 + C28512 * C1953) * C11269 +
                     (C11223 * C1428 + C28512 * C1570) * C11220 +
                     (C11223 * C1354 + C28512 * C1357) * C11268 +
                     (C11223 * C638 + C28512 * C722) * C11219 +
                     (C11223 * C588 + C28512 * C592) * C11267 +
                     (C11223 * C150 + C28512 * C275) * C11218 +
                     (C11223 * C92 + C28512 * C97) * C11266) *
                        C28569 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C28749 * C28750 * C81 -
          ((C9961 * C586 + C9977 + C9977 + C28607 * C758 + C9960 * C94 + C9978 +
            C9978 + C9714 * C317) *
               C9713 +
           (C9990 + C9989) * C9712 + (C9988 + C9987) * C9711) *
              C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C28749 * C28750 * C81 -
          (C11375 * C1951 + C11381 + C11381 + C11221 * C2233 + C11374 * C1354 +
           C11382 + C11382 + C11220 * C1626 + C11373 * C588 + C11383 + C11383 +
           C11219 * C760 + C11372 * C92 + C11384 + C11384 + C11218 * C315) *
              C28512 * C28569 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C9784 +
                      (C211 * C149 + C28569 * C373) * C9714 + C2100 * C9785 +
                      C2298 * C28607) *
                         C9711 +
                     (C10041 + C10042 + C10043 + C10044) * C9712 +
                     (C10045 + C10046 + C10047 + C10048) * C9713) *
                        C28749 * C28750 * C81 -
                    (((C211 * C636 + C28569 * C800) * C28607 +
                      (C211 * C586 + C28569 * C678) * C9785 + C390 * C9714 +
                      C239 * C9784) *
                         C9713 +
                     (C10048 + C10047 + C10046 + C10045) * C9712 +
                     (C10044 + C10043 + C10042 + C10041) * C9711) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28569 * C212) * C11266 +
                     (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
                     C2298 * C11219 + C2102 * C11268 + C2299 * C11220 +
                     (C211 * C1952 + C28569 * C2084) * C11269 +
                     (C211 * C2030 + C28569 * C2292) * C11221) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C211 * C2029 + C28569 * C2291) * C11221 +
                     (C211 * C1951 + C28569 * C2083) * C11269 + C1715 * C11220 +
                     C1518 * C11268 + C1714 * C11219 + C1516 * C11267 +
                     C388 * C11218 + C235 * C11266) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezx[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                       C9721 * C93 + C9713 * C98) *
                          C211 +
                      (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                       C9712 * C428 + C9721 * C214 + C9713 * C429) *
                          C28569) *
                         C9714 +
                     ((C9717 * C589 + C9711 * C593 + C9719 * C588 +
                       C9712 * C592 + C9721 * C587 + C9713 * C591) *
                          C211 +
                      (C9717 * C681 + C9711 * C841 + C9719 * C680 +
                       C9712 * C840 + C9721 * C679 + C9713 * C839) *
                          C28569) *
                         C28607) *
                        C28749 * C28750 * C81 -
                    (((C9721 * C678 + C9713 * C838 + C9719 * C679 +
                       C9712 * C839 + C9717 * C680 + C9711 * C840) *
                          C28569 +
                      (C9721 * C586 + C9713 * C590 + C9719 * C587 +
                       C9712 * C591 + C9717 * C588 + C9711 * C592) *
                          C211) *
                         C28607 +
                     ((C9721 * C215 + C9713 * C430 + C9719 * C214 +
                       C9712 * C429 + C9717 * C213 + C9711 * C428) *
                          C28569 +
                      (C9721 * C94 + C9713 * C99 + C9719 * C93 + C9712 * C98 +
                       C9717 * C92 + C9711 * C97) *
                          C211) *
                         C9714) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C211 +
                      (C11223 * C212 + C28512 * C427) * C28569) *
                         C11218 +
                     ((C11223 * C589 + C28512 * C593) * C211 +
                      (C11223 * C681 + C28512 * C841) * C28569) *
                         C11219 +
                     ((C11223 * C1353 + C28512 * C1356) * C211 +
                      (C11223 * C1501 + C28512 * C1767) * C28569) *
                         C11220 +
                     ((C11223 * C1952 + C28512 * C1954) * C211 +
                      (C11223 * C2084 + C28512 * C2350) * C28569) *
                         C11221) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C2083 + C28512 * C2349) * C28569 +
                      (C11223 * C1951 + C28512 * C1953) * C211) *
                         C11221 +
                     ((C11223 * C1502 + C28512 * C1768) * C28569 +
                      (C11223 * C1354 + C28512 * C1357) * C211) *
                         C11220 +
                     ((C11223 * C680 + C28512 * C840) * C28569 +
                      (C11223 * C588 + C28512 * C592) * C211) *
                         C11219 +
                     ((C11223 * C213 + C28512 * C428) * C28569 +
                      (C11223 * C92 + C28512 * C97) * C211) *
                         C11218) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[27] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C28749 * C28750 * C81 -
          (((C9785 * C678 + C28607 * C876 + C9784 * C215 + C9714 * C469) *
                C28569 +
            (C9785 * C586 + C28607 * C636 + C9784 * C94 + C9714 * C152) *
                C211) *
               C9713 +
           ((C10160 + C10159) * C28569 + (C9808 + C9807) * C211) * C9712 +
           ((C10158 + C10157) * C28569 + (C9804 + C9803) * C211) * C9711) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C28749 * C28750 * C81 -
          ((C11269 * C2083 + C11221 * C2413 + C11268 * C1502 + C11220 * C1821 +
            C11267 * C680 + C11219 * C878 + C11266 * C213 + C11218 * C467) *
               C28569 +
           (C11269 * C1951 + C11221 * C2029 + C11268 * C1354 + C11220 * C1428 +
            C11267 * C588 + C11219 * C638 + C11266 * C92 + C11218 * C150) *
               C211) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[27] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
                      C2478 * C28607) *
                         C9711 +
                     (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
                        C28749 * C28750 * C81 -
                    (((C520 * C586 + C919 + C919 + C28569 * C914) * C28607 +
                      C546 * C9714) *
                         C9713 +
                     (C10214 + C10213) * C9712 + (C10212 + C10211) * C9711) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
                     C2478 * C11219 + C2479 * C11220 +
                     (C520 * C1952 + C2473 + C2473 + C28569 * C2466) * C11221) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C520 * C1951 + C2472 + C2472 + C28569 * C2465) * C11221 +
                     C1899 * C11220 + C1898 * C11219 + C544 * C11218) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C10280 + C10281 + C10282) * C28569 * C28607) *
              C28749 * C583 -
          ((C9720 * C1355 + C10271 + C10271 + C9713 * C1361 + C9718 * C1354 +
            C10272 + C10272 + C9712 * C1360 + C9716 * C1353 + C10273 + C10273 +
            C9711 * C1359) *
               C28569 * C28607 +
           (C10282 + C10281 + C10280) * C28569 * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           C11574 * C11219 + C11575 * C11220 + C11576 * C11221) *
              C28749 * C583 -
          ((C11222 * C11554 + C11564 + C11564 + C28512 * C11556) * C28569 *
               C11221 +
           C11576 * C11220 + C11575 * C11219 + C11574 * C11218) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C28749 * C583 -
          ((C9785 * C1358 + C28607 * C1432 + C9784 * C591 + C9714 * C641) *
               C9713 +
           (C9785 * C1355 + C28607 * C1429 + C9784 * C587 + C9714 * C637) *
               C9721 +
           (C9785 * C1357 + C28607 * C1431 + C9784 * C592 + C9714 * C642) *
               C9712 +
           (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
               C9719 +
           (C9785 * C1356 + C28607 * C1430 + C9784 * C593 + C9714 * C643) *
               C9711 +
           (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
               C9717) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C28749 * C583 -
          ((C11269 * C11555 + C11221 * C11611 + C11268 * C1954 +
            C11220 * C2032 + C11267 * C1356 + C11219 * C1430 + C11266 * C593 +
            C11218 * C643) *
               C28512 +
           (C11269 * C11554 + C11221 * C11610 + C11268 * C1952 +
            C11220 * C2030 + C11267 * C1353 + C11219 * C1427 + C11266 * C589 +
            C11218 * C639) *
               C11223) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9717 +
            (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 + C236 * C9712 +
            C237 * C9721 + C238 * C9713) *
               C9714 +
           (C10383 + C10384 + C10385 + C10386 + C10387 + C10388) * C28607) *
              C28749 * C583 -
          (((C211 * C1358 + C28569 * C1506) * C9713 +
            (C211 * C1355 + C28569 * C1503) * C9721 + C1519 * C9712 +
            C1518 * C9719 + C2103 * C9711 + C2102 * C9717) *
               C28607 +
           (C10388 + C10387 + C10386 + C10385 + C10384 + C10383) * C9714) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C11223 +
            (C211 * C96 + C28569 * C217) * C28512) *
               C11218 +
           (C11649 + C11650) * C11219 + (C11651 + C11652) * C11220 +
           (C11659 + C11660) * C11221) *
              C28749 * C583 -
          (((C211 * C11555 + C28569 * C11647) * C28512 +
            (C211 * C11554 + C28569 * C11646) * C11223) *
               C11221 +
           (C11660 + C11659) * C11220 + (C11652 + C11651) * C11219 +
           (C11650 + C11649) * C11218) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C9784 +
                     (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                      C9712 * C275 + C9721 * C151 + C9713 * C276) *
                         C9714 +
                     (C10451 + C10452 + C10453) * C9785 +
                     (C10454 + C10455 + C10456) * C28607) *
                        C28569 * C28749 * C583 -
                    ((C9721 * C1429 + C9713 * C1571 + C9719 * C1428 +
                      C9712 * C1570 + C9717 * C1427 + C9711 * C1569) *
                         C28607 +
                     (C9721 * C1355 + C9713 * C1358 + C9719 * C1354 +
                      C9712 * C1357 + C9717 * C1353 + C9711 * C1356) *
                         C9785 +
                     (C10456 + C10455 + C10454) * C9714 +
                     (C10453 + C10452 + C10451) * C9784) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C11266 +
                     (C11223 * C149 + C28512 * C274) * C11218 +
                     C11708 * C11267 + C11709 * C11219 + C11710 * C11268 +
                     C11711 * C11220 + C11712 * C11269 + C11713 * C11221) *
                        C28569 * C28749 * C583 -
                    ((C11223 * C11610 + C28512 * C11694) * C11221 +
                     (C11223 * C11554 + C28512 * C11555) * C11269 +
                     C11713 * C11220 + C11712 * C11268 + C11711 * C11219 +
                     C11710 * C11267 + C11709 * C11218 + C11708 * C11266) *
                        C28569 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C28749 * C583 -
          ((C9961 * C1355 + C10507 + C10507 + C28607 * C1627 + C9960 * C587 +
            C10508 + C10508 + C9714 * C759) *
               C9713 +
           (C9961 * C1354 + C10509 + C10509 + C28607 * C1626 + C9960 * C588 +
            C10510 + C10510 + C9714 * C760) *
               C9712 +
           (C9961 * C1353 + C10511 + C10511 + C28607 * C1625 + C9960 * C589 +
            C10512 + C10512 + C9714 * C761) *
               C9711) *
              C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C28749 * C583 -
          (C11375 * C11554 + C11749 + C11749 + C11221 * C11747 +
           C11374 * C1952 + C11750 + C11750 + C11220 * C2234 + C11373 * C1353 +
           C11751 + C11751 + C11219 * C1625 + C11372 * C589 + C11752 + C11752 +
           C11218 * C761) *
              C28512 * C28569 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9784 +
            (C211 * C149 + C28569 * C373) * C9714 + C2100 * C9785 +
            C2298 * C28607) *
               C9711 +
           (C10041 + C10042 + C10043 + C10044) * C9712 +
           (C10045 + C10046 + C10047 + C10048) * C9713) *
              C28749 * C583 -
          (((C211 * C1429 + C28569 * C1704) * C28607 +
            (C211 * C1355 + C28569 * C1503) * C9785 + C5054 * C9714 +
            C4863 * C9784) *
               C9713 +
           (C1715 * C28607 + C1518 * C9785 + C1714 * C9714 + C1516 * C9784) *
               C9712 +
           (C2299 * C28607 + C2102 * C9785 + C2298 * C9714 + C2100 * C9784) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C211 * C91 + C28569 * C212) * C11266 +
           (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
           C2298 * C11219 + C2102 * C11268 + C2299 * C11220 + C11657 * C11269 +
           C11790 * C11221) *
              C28512 * C28749 * C583 -
          ((C211 * C11610 + C28569 * C11786) * C11221 +
           (C211 * C11554 + C28569 * C11646) * C11269 + C11790 * C11220 +
           C11657 * C11268 + C2299 * C11219 + C2102 * C11267 + C2298 * C11218 +
           C2100 * C11266) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[28] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                       C9721 * C93 + C9713 * C98) *
                          C211 +
                      (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                       C9712 * C428 + C9721 * C214 + C9713 * C429) *
                          C28569) *
                         C9714 +
                     ((C10451 + C10452 + C10453) * C211 +
                      (C10619 + C10620 + C10621) * C28569) *
                         C28607) *
                        C28749 * C583 -
                    (((C9721 * C1503 + C9713 * C1769 + C9719 * C1502 +
                       C9712 * C1768 + C9717 * C1501 + C9711 * C1767) *
                          C28569 +
                      (C9721 * C1355 + C9713 * C1358 + C9719 * C1354 +
                       C9712 * C1357 + C9717 * C1353 + C9711 * C1356) *
                          C211) *
                         C28607 +
                     ((C10621 + C10620 + C10619) * C28569 +
                      (C10453 + C10452 + C10451) * C211) *
                         C9714) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C211 +
                      (C11223 * C212 + C28512 * C427) * C28569) *
                         C11218 +
                     (C11826 + C11838) * C11219 + (C11829 + C11839) * C11220 +
                     (C11832 + C11840) * C11221) *
                        C28749 * C583 -
                    (((C11223 * C11646 + C28512 * C11824) * C28569 +
                      (C11223 * C11554 + C28512 * C11555) * C211) *
                         C11221 +
                     (C11840 + C11832) * C11220 + (C11839 + C11829) * C11219 +
                     (C11838 + C11826) * C11218) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezy[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C28749 * C583 -
          (((C9785 * C1503 + C28607 * C1822 + C9784 * C679 + C9714 * C877) *
                C28569 +
            (C9785 * C1355 + C28607 * C1429 + C9784 * C587 + C9714 * C637) *
                C211) *
               C9713 +
           ((C9785 * C1502 + C28607 * C1821 + C9784 * C680 + C9714 * C878) *
                C28569 +
            (C9785 * C1354 + C28607 * C1428 + C9784 * C588 + C9714 * C638) *
                C211) *
               C9712 +
           ((C9785 * C1501 + C28607 * C1820 + C9784 * C681 + C9714 * C879) *
                C28569 +
            (C9785 * C1353 + C28607 * C1427 + C9784 * C589 + C9714 * C639) *
                C211) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C28749 * C583 -
          ((C11269 * C11646 + C11221 * C11874 + C11268 * C2084 +
            C11220 * C2414 + C11267 * C1501 + C11219 * C1820 + C11266 * C681 +
            C11218 * C879) *
               C28569 +
           (C11269 * C11554 + C11221 * C11610 + C11268 * C1952 +
            C11220 * C2030 + C11267 * C1353 + C11219 * C1427 + C11266 * C589 +
            C11218 * C639) *
               C211) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[28] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
            C2478 * C28607) *
               C9711 +
           (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
              C28749 * C583 -
          (((C520 * C1355 + C1893 + C1893 + C28569 * C1884) * C28607 +
            C5225 * C9714) *
               C9713 +
           (C1899 * C28607 + C1898 * C9714) * C9712 +
           (C2479 * C28607 + C2478 * C9714) * C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
           C2478 * C11219 + C2479 * C11220 + C11916 * C11221) *
              C28512 * C28749 * C583 -
          ((C520 * C11554 + C11913 + C11913 + C28569 * C11909) * C11221 +
           C11916 * C11220 + C2479 * C11219 + C2478 * C11218) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C28569 * C9714 +
           (C10280 + C10281 + C10282) * C28569 * C28607) *
              C956 -
          ((C9720 * C5783 + C10772 + C10772 + C9713 * C5785 + C9718 * C2531 +
            C10773 + C10773 + C9712 * C2539 + C9716 * C2532 + C10774 + C10774 +
            C9711 * C2540) *
               C28569 * C28607 +
           (C9720 * C959 + C10775 + C10775 + C9713 * C967 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9716 * C961 + C10777 + C10777 +
            C9711 * C969) *
               C28569 * C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28569 * C11218 +
           C11574 * C11219 + C11575 * C11220 + C11576 * C11221) *
              C956 -
          ((C11222 * C11950 + C11954 + C11954 + C28512 * C11952) * C28569 *
               C11221 +
           (C11222 * C2530 + C11955 + C11955 + C28512 * C2538) * C28569 *
               C11220 +
           (C11222 * C2532 + C11956 + C11956 + C28512 * C2540) * C28569 *
               C11219 +
           (C11222 * C961 + C11957 + C11957 + C28512 * C969) * C28569 *
               C11218) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C9717 +
           (C9784 * C96 + C9714 * C154 + C9785 * C593 + C28607 * C643) * C9711 +
           (C9803 + C9804) * C9719 + (C9805 + C9806) * C9712 +
           (C9807 + C9808) * C9721 + (C9809 + C9810) * C9713) *
              C28569 * C956 -
          ((C9785 * C5784 + C28607 * C5843 + C9784 * C963 + C9714 * C1013) *
               C9713 +
           (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
               C9721 +
           (C9785 * C2535 + C28607 * C2602 + C9784 * C964 + C9714 * C1014) *
               C9712 +
           (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
               C9719 +
           (C9785 * C2536 + C28607 * C2604 + C9784 * C965 + C9714 * C1015) *
               C9711 +
           (C9785 * C2532 + C28607 * C2600 + C9784 * C961 + C9714 * C1011) *
               C9717) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C11223 +
           (C11266 * C96 + C11218 * C154 + C11267 * C593 + C11219 * C643 +
            C11268 * C1356 + C11220 * C1430 + C11269 * C1954 + C11221 * C2032) *
               C28512) *
              C28569 * C956 -
          ((C11269 * C11951 + C11221 * C11992 + C11268 * C2534 +
            C11220 * C2603 + C11267 * C2536 + C11219 * C2604 + C11266 * C965 +
            C11218 * C1015) *
               C28512 +
           (C11269 * C11950 + C11221 * C11991 + C11268 * C2530 +
            C11220 * C2599 + C11267 * C2532 + C11219 * C2600 + C11266 * C961 +
            C11218 * C1011) *
               C11223) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C9717 +
            (C211 * C96 + C28569 * C217) * C9711 + C235 * C9719 + C236 * C9712 +
            C237 * C9721 + C238 * C9713) *
               C9714 +
           (C10383 + C10384 + C10385 + C10386 + C10387 + C10388) * C28607) *
              C956 -
          (((C211 * C5784 + C28569 * C5895) * C9713 +
            (C211 * C5783 + C28569 * C5894) * C9721 +
            (C211 * C2535 + C28569 * C2661) * C9712 +
            (C211 * C2531 + C28569 * C2657) * C9719 +
            (C211 * C2536 + C28569 * C2662) * C9711 +
            (C211 * C2532 + C28569 * C2658) * C9717) *
               C28607 +
           ((C211 * C963 + C28569 * C1055) * C9713 +
            (C211 * C959 + C28569 * C1051) * C9721 +
            (C211 * C964 + C28569 * C1056) * C9712 +
            (C211 * C960 + C28569 * C1052) * C9719 +
            (C211 * C965 + C28569 * C1057) * C9711 +
            (C211 * C961 + C28569 * C1053) * C9717) *
               C9714) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C211 * C91 + C28569 * C212) * C11223 +
            (C211 * C96 + C28569 * C217) * C28512) *
               C11218 +
           (C11649 + C11650) * C11219 + (C11651 + C11652) * C11220 +
           (C11659 + C11660) * C11221) *
              C956 -
          (((C211 * C11951 + C28569 * C12028) * C28512 +
            (C211 * C11950 + C28569 * C12027) * C11223) *
               C11221 +
           ((C211 * C2534 + C28569 * C2660) * C28512 +
            (C211 * C2530 + C28569 * C2656) * C11223) *
               C11220 +
           ((C211 * C2536 + C28569 * C2662) * C28512 +
            (C211 * C2532 + C28569 * C2658) * C11223) *
               C11219 +
           ((C211 * C965 + C28569 * C1057) * C28512 +
            (C211 * C961 + C28569 * C1053) * C11223) *
               C11218) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C9784 +
                     (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                      C9712 * C275 + C9721 * C151 + C9713 * C276) *
                         C9714 +
                     (C10451 + C10452 + C10453) * C9785 +
                     (C10454 + C10455 + C10456) * C28607) *
                        C28569 * C956 -
                    ((C9721 * C5842 + C9713 * C5946 + C9719 * C2598 +
                      C9712 * C2715 + C9717 * C2600 + C9711 * C2716) *
                         C28607 +
                     (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 +
                      C9712 * C2535 + C9717 * C2532 + C9711 * C2536) *
                         C9785 +
                     (C9721 * C1009 + C9713 * C1093 + C9719 * C1010 +
                      C9712 * C1094 + C9717 * C1011 + C9711 * C1095) *
                         C9714 +
                     (C9721 * C959 + C9713 * C963 + C9719 * C960 +
                      C9712 * C964 + C9717 * C961 + C9711 * C965) *
                         C9784) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C11266 +
                     (C11223 * C149 + C28512 * C274) * C11218 +
                     C11708 * C11267 + C11709 * C11219 + C11710 * C11268 +
                     C11711 * C11220 + C11712 * C11269 + C11713 * C11221) *
                        C28569 * C956 -
                    ((C11223 * C11991 + C28512 * C12063) * C11221 +
                     (C11223 * C11950 + C28512 * C11951) * C11269 +
                     (C11223 * C2599 + C28512 * C2714) * C11220 +
                     (C11223 * C2530 + C28512 * C2534) * C11268 +
                     (C11223 * C2600 + C28512 * C2716) * C11219 +
                     (C11223 * C2532 + C28512 * C2536) * C11267 +
                     (C11223 * C1011 + C28512 * C1095) * C11218 +
                     (C11223 * C961 + C28512 * C965) * C11266) *
                        C28569 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9960 * C91 + C9963 + C9963 + C9714 * C314 + C9961 * C589 + C9964 +
            C9964 + C28607 * C761) *
               C9711 +
           (C9987 + C9988) * C9712 + (C9989 + C9990) * C9713) *
              C28569 * C956 -
          ((C9961 * C5783 + C10978 + C10978 + C28607 * C5997 + C9960 * C959 +
            C10979 + C10979 + C9714 * C1131) *
               C9713 +
           (C9961 * C2531 + C10980 + C10980 + C28607 * C2768 + C9960 * C960 +
            C10981 + C10981 + C9714 * C1132) *
               C9712 +
           (C9961 * C2532 + C10982 + C10982 + C28607 * C2770 + C9960 * C961 +
            C10983 + C10983 + C9714 * C1133) *
               C9711) *
              C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11372 * C91 + C11377 + C11377 + C11218 * C314 + C11373 * C589 +
           C11378 + C11378 + C11219 * C761 + C11374 * C1353 + C11379 + C11379 +
           C11220 * C1625 + C11375 * C1952 + C11380 + C11380 + C11221 * C2234) *
              C28512 * C28569 * C956 -
          (C11375 * C11950 + C12100 + C12100 + C11221 * C12098 +
           C11374 * C2530 + C12101 + C12101 + C11220 * C2769 + C11373 * C2532 +
           C12102 + C12102 + C11219 * C2770 + C11372 * C961 + C12103 + C12103 +
           C11218 * C1133) *
              C28512 * C28569 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C211 * C91 + C28569 * C212) * C9784 +
                      (C211 * C149 + C28569 * C373) * C9714 + C2100 * C9785 +
                      C2298 * C28607) *
                         C9711 +
                     (C10041 + C10042 + C10043 + C10044) * C9712 +
                     (C10045 + C10046 + C10047 + C10048) * C9713) *
                        C956 -
                    (((C211 * C5842 + C28569 * C6054) * C28607 +
                      (C211 * C5783 + C28569 * C5894) * C9785 +
                      (C211 * C1009 + C28569 * C1173) * C9714 +
                      (C211 * C959 + C28569 * C1051) * C9784) *
                         C9713 +
                     ((C211 * C2598 + C28569 * C2828) * C28607 +
                      (C211 * C2531 + C28569 * C2657) * C9785 +
                      (C211 * C1010 + C28569 * C1174) * C9714 +
                      (C211 * C960 + C28569 * C1052) * C9784) *
                         C9712 +
                     ((C211 * C2600 + C28569 * C2830) * C28607 +
                      (C211 * C2532 + C28569 * C2658) * C9785 +
                      (C211 * C1011 + C28569 * C1175) * C9714 +
                      (C211 * C961 + C28569 * C1053) * C9784) *
                         C9711) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C211 * C91 + C28569 * C212) * C11266 +
                     (C211 * C149 + C28569 * C373) * C11218 + C2100 * C11267 +
                     C2298 * C11219 + C2102 * C11268 + C2299 * C11220 +
                     C11657 * C11269 + C11790 * C11221) *
                        C28512 * C956 -
                    ((C211 * C11991 + C28569 * C12137) * C11221 +
                     (C211 * C11950 + C28569 * C12027) * C11269 +
                     (C211 * C2599 + C28569 * C2829) * C11220 +
                     (C211 * C2530 + C28569 * C2656) * C11268 +
                     (C211 * C2600 + C28569 * C2830) * C11219 +
                     (C211 * C2532 + C28569 * C2658) * C11267 +
                     (C211 * C1011 + C28569 * C1175) * C11218 +
                     (C211 * C961 + C28569 * C1053) * C11266) *
                        C28512 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezx[29] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                       C9721 * C93 + C9713 * C98) *
                          C211 +
                      (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                       C9712 * C428 + C9721 * C214 + C9713 * C429) *
                          C28569) *
                         C9714 +
                     ((C10451 + C10452 + C10453) * C211 +
                      (C10619 + C10620 + C10621) * C28569) *
                         C28607) *
                        C956 -
                    (((C9721 * C5894 + C9713 * C6105 + C9719 * C2657 +
                       C9712 * C2883 + C9717 * C2658 + C9711 * C2884) *
                          C28569 +
                      (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 +
                       C9712 * C2535 + C9717 * C2532 + C9711 * C2536) *
                          C211) *
                         C28607 +
                     ((C9721 * C1051 + C9713 * C1211 + C9719 * C1052 +
                       C9712 * C1212 + C9717 * C1053 + C9711 * C1213) *
                          C28569 +
                      (C9721 * C959 + C9713 * C963 + C9719 * C960 +
                       C9712 * C964 + C9717 * C961 + C9711 * C965) *
                          C211) *
                         C9714) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C211 +
                      (C11223 * C212 + C28512 * C427) * C28569) *
                         C11218 +
                     (C11826 + C11838) * C11219 + (C11829 + C11839) * C11220 +
                     (C11832 + C11840) * C11221) *
                        C956 -
                    (((C11223 * C12027 + C28512 * C12172) * C28569 +
                      (C11223 * C11950 + C28512 * C11951) * C211) *
                         C11221 +
                     ((C11223 * C2656 + C28512 * C2882) * C28569 +
                      (C11223 * C2530 + C28512 * C2534) * C211) *
                         C11220 +
                     ((C11223 * C2658 + C28512 * C2884) * C28569 +
                      (C11223 * C2532 + C28512 * C2536) * C211) *
                         C11219 +
                     ((C11223 * C1053 + C28512 * C1213) * C28569 +
                      (C11223 * C961 + C28512 * C965) * C211) *
                         C11218) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezy[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9784 * C91 + C9714 * C149 + C9785 * C589 + C28607 * C639) * C211 +
            (C9784 * C212 + C9714 * C466 + C9785 * C681 + C28607 * C879) *
                C28569) *
               C9711 +
           ((C9803 + C9804) * C211 + (C10157 + C10158) * C28569) * C9712 +
           ((C9807 + C9808) * C211 + (C10159 + C10160) * C28569) * C9713) *
              C956 -
          (((C9785 * C5894 + C28607 * C6156 + C9784 * C1051 + C9714 * C1249) *
                C28569 +
            (C9785 * C5783 + C28607 * C5842 + C9784 * C959 + C9714 * C1009) *
                C211) *
               C9713 +
           ((C9785 * C2657 + C28607 * C2936 + C9784 * C1052 + C9714 * C1250) *
                C28569 +
            (C9785 * C2531 + C28607 * C2598 + C9784 * C960 + C9714 * C1010) *
                C211) *
               C9712 +
           ((C9785 * C2658 + C28607 * C2938 + C9784 * C1053 + C9714 * C1251) *
                C28569 +
            (C9785 * C2532 + C28607 * C2600 + C9784 * C961 + C9714 * C1011) *
                C211) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C11266 * C91 + C11218 * C149 + C11267 * C589 + C11219 * C639 +
            C11268 * C1353 + C11220 * C1427 + C11269 * C1952 + C11221 * C2030) *
               C211 +
           (C11266 * C212 + C11218 * C466 + C11267 * C681 + C11219 * C879 +
            C11268 * C1501 + C11220 * C1820 + C11269 * C2084 + C11221 * C2414) *
               C28569) *
              C28512 * C956 -
          ((C11269 * C12027 + C11221 * C12207 + C11268 * C2656 +
            C11220 * C2937 + C11267 * C2658 + C11219 * C2938 + C11266 * C1053 +
            C11218 * C1251) *
               C28569 +
           (C11269 * C11950 + C11221 * C11991 + C11268 * C2530 +
            C11220 * C2599 + C11267 * C2532 + C11219 * C2600 + C11266 * C961 +
            C11218 * C1011) *
               C211) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[29] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C520 * C91 + C527 + C527 + C28569 * C521) * C9714 +
            C2478 * C28607) *
               C9711 +
           (C10211 + C10212) * C9712 + (C10213 + C10214) * C9713) *
              C956 -
          (((C520 * C5783 + C6209 + C6209 + C28569 * C6207) * C28607 +
            (C520 * C959 + C1292 + C1292 + C28569 * C1287) * C9714) *
               C9713 +
           ((C520 * C2531 + C2995 + C2995 + C28569 * C2990) * C28607 +
            (C520 * C960 + C1293 + C1293 + C28569 * C1288) * C9714) *
               C9712 +
           ((C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C28607 +
            (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C9714) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C520 * C91 + C527 + C527 + C28569 * C521) * C11218 +
           C2478 * C11219 + C2479 * C11220 + C11916 * C11221) *
              C28512 * C956 -
          ((C520 * C11950 + C12244 + C12244 + C28569 * C12242) * C11221 +
           (C520 * C2530 + C2996 + C2996 + C28569 * C2991) * C11220 +
           (C520 * C2532 + C2997 + C2997 + C28569 * C2992) * C11219 +
           (C520 * C961 + C1294 + C1294 + C28569 * C1289) * C11218) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 + C13873 * C92 +
             C13877 + C13877 + C28517 * C102) *
                C18726 +
            (C16666 + C16667) * C28633) *
               C28714 +
           ((C14422 + C14423) * C18726 + (C16038 + C16039) * C28633) * C28607) *
              C28749 * C28750 * C81 -
          (((C13873 * C5783 + C15404 + C15404 + C28517 * C5785 +
             C13871 * C2531 + C15405 + C15405 + C28701 * C2539) *
                C28633 +
            (C13873 * C587 + C13884 + C13884 + C28517 * C595 + C13871 * C588 +
             C13885 + C13885 + C28701 * C596) *
                C18726) *
               C28607 +
           ((C13873 * C959 + C15406 + C15406 + C28517 * C967 + C13871 * C960 +
             C15407 + C15407 + C28701 * C968) *
                C28633 +
            (C13873 * C93 + C13886 + C13886 + C28517 * C103 + C13871 * C92 +
             C13887 + C13887 + C28701 * C102) *
                C18726) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C27436 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28701 +
            (C4801 + C4802) * C27426 + (C4803 + C4804) * C28517) *
               C18726 +
           ((C9172 + C9173) * C27436 + (C9174 + C9175) * C28701 +
            (C7864 + C7865) * C27426 + (C7866 + C7867) * C28517) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C4783 * C5784 + C28607 * C5843 + C4782 * C963 + C28714 * C1013) *
                C28517 +
            (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
                C27426 +
            (C7867 + C7866) * C28701 + (C7865 + C7864) * C27436) *
               C28633 +
           ((C4808 + C4807) * C28517 + (C4806 + C4805) * C27426 +
            (C4804 + C4803) * C28701 + (C4802 + C4801) * C27436) *
               C18726) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C27436 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28701 +
            (C18850 + C18851) * C27426 + (C18852 + C18853) * C28517) *
               C28714 +
           ((C20798 + C20799) * C27436 + (C20800 + C20801) * C28701 +
            (C22868 + C22869) * C27426 + (C22870 + C22871) * C28517) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C18832 * C5784 + C28633 * C5895 + C18831 * C591 + C18726 * C683) *
                C28517 +
            (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
                C27426 +
            (C22871 + C22870) * C28701 + (C22869 + C22868) * C27436) *
               C28607 +
           ((C18857 + C18856) * C28517 + (C18855 + C18854) * C27426 +
            (C18853 + C18852) * C28701 + (C18851 + C18850) * C27436) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C4782 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28714 +
            (C14600 + C14601) * C4783 + (C14602 + C14603) * C28607) *
               C18726 +
           ((C16874 + C16875) * C4782 + (C16876 + C16877) * C28714 +
            (C16246 + C16247) * C4783 + (C16248 + C16249) * C28607) *
               C28633) *
              C28749 * C28750 * C81 -
          (((C27426 * C5842 + C28517 * C5946 + C27436 * C2598 +
             C28701 * C2715) *
                C28607 +
            (C27426 * C5783 + C28517 * C5784 + C27436 * C2531 +
             C28701 * C2535) *
                C4783 +
            (C27426 * C1009 + C28517 * C1093 + C27436 * C1010 +
             C28701 * C1094) *
                C28714 +
            (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
                C4782) *
               C28633 +
           ((C27426 * C637 + C28517 * C721 + C27436 * C638 + C28701 * C722) *
                C28607 +
            (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
                C4783 +
            (C27426 * C151 + C28517 * C276 + C27436 * C150 + C28701 * C275) *
                C28714 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C4782) *
               C18726) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 + C4965 * C589 +
             C4968 + C4968 + C28607 * C761) *
                C28701 +
            (C4991 + C4992) * C28517) *
               C18726 +
           ((C9386 + C9387) * C28701 + (C8086 + C8087) * C28517) * C28633) *
              C28749 * C28750 * C81 -
          (((C4965 * C5783 + C5999 + C5999 + C28607 * C5997 + C4964 * C959 +
             C6000 + C6000 + C28714 * C1131) *
                C28517 +
            (C8087 + C8086) * C28701) *
               C28633 +
           ((C4994 + C4993) * C28517 + (C4992 + C4991) * C28701) * C18726) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C4782 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28714 +
            (C20798 + C20799) * C4783 + (C20967 + C20968) * C28607) *
               C28701 +
           ((C18850 + C18851) * C4782 + (C19016 + C19017) * C28714 +
            (C22868 + C22869) * C4783 + (C23074 + C23075) * C28607) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C18832 * C5842 + C28633 * C6054 + C18831 * C637 + C18726 * C801) *
                C28607 +
            (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
                C4783 +
            (C19019 + C19018) * C28714 + (C18855 + C18854) * C4782) *
               C28517 +
           ((C23075 + C23074) * C28607 + (C22869 + C22868) * C4783 +
            (C19017 + C19016) * C28714 + (C18851 + C18850) * C4782) *
               C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezx[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C18831 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C18726 +
            (C16874 + C16875) * C18832 + (C17080 + C17081) * C28633) *
               C28714 +
           ((C14600 + C14601) * C18831 + (C14772 + C14773) * C18726 +
            (C16246 + C16247) * C18832 + (C16454 + C16455) * C28633) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C27426 * C5894 + C28517 * C6105 + C27436 * C2657 +
             C28701 * C2883) *
                C28633 +
            (C27426 * C5783 + C28517 * C5784 + C27436 * C2531 +
             C28701 * C2535) *
                C18832 +
            (C27426 * C679 + C28517 * C839 + C27436 * C680 + C28701 * C840) *
                C18726 +
            (C27426 * C587 + C28517 * C591 + C27436 * C588 + C28701 * C592) *
                C18831) *
               C28607 +
           ((C27426 * C1051 + C28517 * C1211 + C27436 * C1052 +
             C28701 * C1212) *
                C28633 +
            (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
                C18832 +
            (C27426 * C214 + C28517 * C429 + C27436 * C213 + C28701 * C428) *
                C18726 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C18831) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C18831 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C18726 +
            (C9172 + C9173) * C18832 + (C9590 + C9591) * C28633) *
               C28701 +
           ((C4801 + C4802) * C18831 + (C5164 + C5165) * C18726 +
            (C7864 + C7865) * C18832 + (C8296 + C8297) * C28633) *
               C28517) *
              C28749 * C28750 * C81 -
          (((C4783 * C5894 + C28607 * C6156 + C4782 * C1051 + C28714 * C1249) *
                C28633 +
            (C4783 * C5783 + C28607 * C5842 + C4782 * C959 + C28714 * C1009) *
                C18832 +
            (C5167 + C5166) * C18726 + (C4806 + C4805) * C18831) *
               C28517 +
           ((C8297 + C8296) * C28633 + (C7865 + C7864) * C18832 +
            (C5165 + C5164) * C18726 + (C4802 + C4801) * C18831) *
               C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[30] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
             C19181 + C19181 + C28633 * C1289) *
                C28714 +
            (C21147 + C21148) * C28607) *
               C28701 +
           ((C19204 + C19205) * C28714 + (C23282 + C23283) * C28607) * C28517) *
              C28749 * C28750 * C81 -
          (((C19178 * C5783 + C19658 + C19658 + C28633 * C6207 + C19177 * C587 +
             C19659 + C19659 + C18726 * C915) *
                C28607 +
            (C19207 + C19206) * C28714) *
               C28517 +
           ((C23283 + C23282) * C28607 + (C19205 + C19204) * C28714) * C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 + C13873 * C92 +
             C13877 + C13877 + C28517 * C102) *
                C18726 +
            (C16666 + C16667) * C28633) *
               C28714 +
           ((C14422 + C14423) * C18726 + (C16038 + C16039) * C28633) * C28607) *
              C28749 * C583 -
          (((C13873 * C2529 + C14926 + C14926 + C28517 * C2537 +
             C13871 * C2530 + C14927 + C14927 + C28701 * C2538) *
                C28633 +
            (C14425 + C14424) * C18726) *
               C28607 +
           ((C16039 + C16038) * C28633 + (C14423 + C14422) * C18726) * C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C27436 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28701 +
            (C4801 + C4802) * C27426 + (C4803 + C4804) * C28517) *
               C18726 +
           ((C9172 + C9173) * C27436 + (C9174 + C9175) * C28701 +
            (C7864 + C7865) * C27426 + (C7866 + C7867) * C28517) *
               C28633) *
              C28749 * C583 -
          (((C4783 * C2533 + C28607 * C2601 + C4782 * C2535 + C28714 * C2602) *
                C28517 +
            (C4783 * C2529 + C28607 * C2597 + C4782 * C2531 + C28714 * C2598) *
                C27426 +
            (C4783 * C2534 + C28607 * C2603 + C4782 * C2536 + C28714 * C2604) *
                C28701 +
            (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
                C27436) *
               C28633 +
           ((C4783 * C1357 + C28607 * C1431 + C4782 * C592 + C28714 * C642) *
                C28517 +
            (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
                C27426 +
            (C4783 * C1356 + C28607 * C1430 + C4782 * C593 + C28714 * C643) *
                C28701 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C27436) *
               C18726) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C27436 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28701 +
            (C18850 + C18851) * C27426 + (C18852 + C18853) * C28517) *
               C28714 +
           ((C20798 + C20799) * C27436 + (C20800 + C20801) * C28701 +
            (C22868 + C22869) * C27426 + (C22870 + C22871) * C28517) *
               C28607) *
              C28749 * C583 -
          (((C18832 * C2533 + C28633 * C2659 + C18831 * C1357 +
             C18726 * C1505) *
                C28517 +
            (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 +
             C18726 * C1502) *
                C27426 +
            (C20805 + C20804) * C28701 + (C20803 + C20802) * C27436) *
               C28607 +
           ((C22871 + C22870) * C28517 + (C22869 + C22868) * C27426 +
            (C20801 + C20800) * C28701 + (C20799 + C20798) * C27436) *
               C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C4782 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28714 +
            (C14600 + C14601) * C4783 + (C14602 + C14603) * C28607) *
               C18726 +
           ((C16874 + C16875) * C4782 + (C16876 + C16877) * C28714 +
            (C16246 + C16247) * C4783 + (C16248 + C16249) * C28607) *
               C28633) *
              C28749 * C583 -
          (((C27426 * C2597 + C28517 * C2713 + C27436 * C2599 +
             C28701 * C2714) *
                C28607 +
            (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 +
             C28701 * C2534) *
                C4783 +
            (C16249 + C16248) * C28714 + (C16247 + C16246) * C4782) *
               C28633 +
           ((C14607 + C14606) * C28607 + (C14605 + C14604) * C4783 +
            (C14603 + C14602) * C28714 + (C14601 + C14600) * C4782) *
               C18726) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 + C4965 * C589 +
             C4968 + C4968 + C28607 * C761) *
                C28701 +
            (C4991 + C4992) * C28517) *
               C18726 +
           ((C9386 + C9387) * C28701 + (C8086 + C8087) * C28517) * C28633) *
              C28749 * C583 -
          (((C4965 * C2529 + C8738 + C8738 + C28607 * C2767 + C4964 * C2531 +
             C8739 + C8739 + C28714 * C2768) *
                C28517 +
            (C4965 * C2530 + C8740 + C8740 + C28607 * C2769 + C4964 * C2532 +
             C8741 + C8741 + C28714 * C2770) *
                C28701) *
               C28633 +
           ((C4965 * C1354 + C5521 + C5521 + C28607 * C1626 + C4964 * C588 +
             C5522 + C5522 + C28714 * C760) *
                C28517 +
            (C4965 * C1353 + C5523 + C5523 + C28607 * C1625 + C4964 * C589 +
             C5524 + C5524 + C28714 * C761) *
                C28701) *
               C18726) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C4782 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28714 +
            (C20798 + C20799) * C4783 + (C20967 + C20968) * C28607) *
               C28701 +
           ((C18850 + C18851) * C4782 + (C19016 + C19017) * C28714 +
            (C22868 + C22869) * C4783 + (C23074 + C23075) * C28607) *
               C28517) *
              C28749 * C583 -
          (((C18832 * C2597 + C28633 * C2827 + C18831 * C1428 +
             C18726 * C1703) *
                C28607 +
            (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 +
             C18726 * C1502) *
                C4783 +
            (C23075 + C23074) * C28714 + (C22869 + C22868) * C4782) *
               C28517 +
           ((C20970 + C20969) * C28607 + (C20803 + C20802) * C4783 +
            (C20968 + C20967) * C28714 + (C20799 + C20798) * C4782) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C18831 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C18726 +
            (C16874 + C16875) * C18832 + (C17080 + C17081) * C28633) *
               C28714 +
           ((C14600 + C14601) * C18831 + (C14772 + C14773) * C18726 +
            (C16246 + C16247) * C18832 + (C16454 + C16455) * C28633) *
               C28607) *
              C28749 * C583 -
          (((C27426 * C2655 + C28517 * C2881 + C27436 * C2656 +
             C28701 * C2882) *
                C28633 +
            (C27426 * C2529 + C28517 * C2533 + C27436 * C2530 +
             C28701 * C2534) *
                C18832 +
            (C14775 + C14774) * C18726 + (C14605 + C14604) * C18831) *
               C28607 +
           ((C16455 + C16454) * C28633 + (C16247 + C16246) * C18832 +
            (C14773 + C14772) * C18726 + (C14601 + C14600) * C18831) *
               C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C18831 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C18726 +
            (C9172 + C9173) * C18832 + (C9590 + C9591) * C28633) *
               C28701 +
           ((C4801 + C4802) * C18831 + (C5164 + C5165) * C18726 +
            (C7864 + C7865) * C18832 + (C8296 + C8297) * C28633) *
               C28517) *
              C28749 * C583 -
          (((C4783 * C2655 + C28607 * C2935 + C4782 * C2657 + C28714 * C2936) *
                C28633 +
            (C4783 * C2529 + C28607 * C2597 + C4782 * C2531 + C28714 * C2598) *
                C18832 +
            (C4783 * C1502 + C28607 * C1821 + C4782 * C680 + C28714 * C878) *
                C18726 +
            (C4783 * C1354 + C28607 * C1428 + C4782 * C588 + C28714 * C638) *
                C18831) *
               C28517 +
           ((C4783 * C2656 + C28607 * C2937 + C4782 * C2658 + C28714 * C2938) *
                C28633 +
            (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
                C18832 +
            (C4783 * C1501 + C28607 * C1820 + C4782 * C681 + C28714 * C879) *
                C18726 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C18831) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[31] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
             C19181 + C19181 + C28633 * C1289) *
                C28714 +
            (C21147 + C21148) * C28607) *
               C28701 +
           ((C19204 + C19205) * C28714 + (C23282 + C23283) * C28607) * C28517) *
              C28749 * C583 -
          (((C19178 * C2529 + C20626 + C20626 + C28633 * C2989 +
             C19177 * C1354 + C20627 + C20627 + C18726 * C1883) *
                C28607 +
            (C23283 + C23282) * C28714) *
               C28517 +
           ((C21150 + C21149) * C28607 + (C21148 + C21147) * C28714) * C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C13871 * C91 + C13876 + C13876 + C28701 * C101 + C13873 * C92 +
             C13877 + C13877 + C28517 * C102) *
                C18726 +
            (C16666 + C16667) * C28633) *
               C28714 +
           ((C14422 + C14423) * C18726 + (C16038 + C16039) * C28633) * C28607) *
              C956 -
          (((C13873 * C3639 + C16658 + C16658 + C28517 * C3643 +
             C13871 * C3640 + C16659 + C16659 + C28701 * C3644) *
                C28633 +
            (C16039 + C16038) * C18726) *
               C28607 +
           ((C13873 * C3051 + C16660 + C16660 + C28517 * C3057 +
             C13871 * C3050 + C16661 + C16661 + C28701 * C3056) *
                C28633 +
            (C16667 + C16666) * C18726) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C27436 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28701 +
            (C4801 + C4802) * C27426 + (C4803 + C4804) * C28517) *
               C18726 +
           ((C9172 + C9173) * C27436 + (C9174 + C9175) * C28701 +
            (C7864 + C7865) * C27426 + (C7866 + C7867) * C28517) *
               C28633) *
              C956 -
          (((C4783 * C3641 + C28607 * C3699 + C4782 * C3054 + C28714 * C3119) *
                C28517 +
            (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
                C27426 +
            (C4783 * C3642 + C28607 * C3700 + C4782 * C3053 + C28714 * C3118) *
                C28701 +
            (C4783 * C3640 + C28607 * C3698 + C4782 * C3050 + C28714 * C3115) *
                C27436) *
               C28633 +
           ((C7867 + C7866) * C28517 + (C7865 + C7864) * C27426 +
            (C9175 + C9174) * C28701 + (C9173 + C9172) * C27436) *
               C18726) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C27436 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28701 +
            (C18850 + C18851) * C27426 + (C18852 + C18853) * C28517) *
               C28714 +
           ((C20798 + C20799) * C27436 + (C20800 + C20801) * C28701 +
            (C22868 + C22869) * C27426 + (C22870 + C22871) * C28517) *
               C28607) *
              C956 -
          (((C18832 * C3641 + C28633 * C3753 + C18831 * C2535 +
             C18726 * C2661) *
                C28517 +
            (C18832 * C3639 + C28633 * C3751 + C18831 * C2531 +
             C18726 * C2657) *
                C27426 +
            (C18832 * C3642 + C28633 * C3754 + C18831 * C2536 +
             C18726 * C2662) *
                C28701 +
            (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 +
             C18726 * C2658) *
                C27436) *
               C28607 +
           ((C18832 * C3054 + C28633 * C3190 + C18831 * C964 + C18726 * C1056) *
                C28517 +
            (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
                C27426 +
            (C18832 * C3053 + C28633 * C3189 + C18831 * C965 + C18726 * C1057) *
                C28701 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C27436) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C4782 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28714 +
            (C14600 + C14601) * C4783 + (C14602 + C14603) * C28607) *
               C18726 +
           ((C16874 + C16875) * C4782 + (C16876 + C16877) * C28714 +
            (C16246 + C16247) * C4783 + (C16248 + C16249) * C28607) *
               C28633) *
              C956 -
          (((C27426 * C3697 + C28517 * C3805 + C27436 * C3698 +
             C28701 * C3806) *
                C28607 +
            (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 +
             C28701 * C3642) *
                C4783 +
            (C27426 * C3116 + C28517 * C3261 + C27436 * C3115 +
             C28701 * C3260) *
                C28714 +
            (C27426 * C3051 + C28517 * C3054 + C27436 * C3050 +
             C28701 * C3053) *
                C4782) *
               C28633 +
           ((C16249 + C16248) * C28607 + (C16247 + C16246) * C4783 +
            (C16877 + C16876) * C28714 + (C16875 + C16874) * C4782) *
               C18726) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4964 * C91 + C4967 + C4967 + C28714 * C314 + C4965 * C589 +
             C4968 + C4968 + C28607 * C761) *
                C28701 +
            (C4991 + C4992) * C28517) *
               C18726 +
           ((C9386 + C9387) * C28701 + (C8086 + C8087) * C28517) * C28633) *
              C956 -
          (((C4965 * C3639 + C9378 + C9378 + C28607 * C3857 + C4964 * C3051 +
             C9379 + C9379 + C28714 * C3314) *
                C28517 +
            (C4965 * C3640 + C9380 + C9380 + C28607 * C3858 + C4964 * C3050 +
             C9381 + C9381 + C28714 * C3313) *
                C28701) *
               C28633 +
           ((C8087 + C8086) * C28517 + (C9387 + C9386) * C28701) * C18726) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C4782 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28714 +
            (C20798 + C20799) * C4783 + (C20967 + C20968) * C28607) *
               C28701 +
           ((C18850 + C18851) * C4782 + (C19016 + C19017) * C28714 +
            (C22868 + C22869) * C4783 + (C23074 + C23075) * C28607) *
               C28517) *
              C956 -
          (((C18832 * C3697 + C28633 * C3913 + C18831 * C2598 +
             C18726 * C2828) *
                C28607 +
            (C18832 * C3639 + C28633 * C3751 + C18831 * C2531 +
             C18726 * C2657) *
                C4783 +
            (C18832 * C3116 + C28633 * C3380 + C18831 * C1010 +
             C18726 * C1174) *
                C28714 +
            (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
                C4782) *
               C28517 +
           ((C18832 * C3698 + C28633 * C3914 + C18831 * C2600 +
             C18726 * C2830) *
                C28607 +
            (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 +
             C18726 * C2658) *
                C4783 +
            (C18832 * C3115 + C28633 * C3379 + C18831 * C1011 +
             C18726 * C1175) *
                C28714 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C4782) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezx[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
                C18831 +
            (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
                C18726 +
            (C16874 + C16875) * C18832 + (C17080 + C17081) * C28633) *
               C28714 +
           ((C14600 + C14601) * C18831 + (C14772 + C14773) * C18726 +
            (C16246 + C16247) * C18832 + (C16454 + C16455) * C28633) *
               C28607) *
              C956 -
          (((C27426 * C3751 + C28517 * C3965 + C27436 * C3752 +
             C28701 * C3966) *
                C28633 +
            (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 +
             C28701 * C3642) *
                C18832 +
            (C16455 + C16454) * C18726 + (C16247 + C16246) * C18831) *
               C28607 +
           ((C27426 * C3187 + C28517 * C3442 + C27436 * C3186 +
             C28701 * C3441) *
                C28633 +
            (C27426 * C3051 + C28517 * C3054 + C27436 * C3050 +
             C28701 * C3053) *
                C18832 +
            (C17081 + C17080) * C18726 + (C16875 + C16874) * C18831) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C18831 +
            (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
                C18726 +
            (C9172 + C9173) * C18832 + (C9590 + C9591) * C28633) *
               C28701 +
           ((C4801 + C4802) * C18831 + (C5164 + C5165) * C18726 +
            (C7864 + C7865) * C18832 + (C8296 + C8297) * C28633) *
               C28517) *
              C956 -
          (((C4783 * C3751 + C28607 * C4017 + C4782 * C3187 + C28714 * C3495) *
                C28633 +
            (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
                C18832 +
            (C8297 + C8296) * C18726 + (C7865 + C7864) * C18831) *
               C28517 +
           ((C4783 * C3752 + C28607 * C4018 + C4782 * C3186 + C28714 * C3494) *
                C28633 +
            (C4783 * C3640 + C28607 * C3698 + C4782 * C3050 + C28714 * C3115) *
                C18832 +
            (C9591 + C9590) * C18726 + (C9173 + C9172) * C18831) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[32] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
             C19181 + C19181 + C28633 * C1289) *
                C28714 +
            (C21147 + C21148) * C28607) *
               C28701 +
           ((C19204 + C19205) * C28714 + (C23282 + C23283) * C28607) * C28517) *
              C956 -
          (((C19178 * C3639 + C24472 + C24472 + C28633 * C4069 +
             C19177 * C2531 + C24473 + C24473 + C18726 * C2990) *
                C28607 +
            (C19178 * C3051 + C20170 + C20170 + C28633 * C3563 + C19177 * C960 +
             C20171 + C20171 + C18726 * C1288) *
                C28714) *
               C28517 +
           ((C19178 * C3640 + C21654 + C21654 + C28633 * C4070 +
             C19177 * C2532 + C21655 + C21655 + C18726 * C2992) *
                C28607 +
            (C19178 * C3050 + C20172 + C20172 + C28633 * C3562 + C19177 * C961 +
             C20173 + C20173 + C18726 * C1289) *
                C28714) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28744 +
            C13318 * C28745 + C13319 * C24525) *
               C28714 +
           (C11571 * C28744 + C12768 * C28745 + C12769 * C24525) * C28607) *
              C28749 * C28750 * C81 -
          (((C11222 * C3639 + C12297 + C12297 + C28512 * C3643) * C24525 +
            (C11222 * C2531 + C12298 + C12298 + C28512 * C2539) * C28745 +
            (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C28744) *
               C28607 +
           ((C11222 * C3051 + C12299 + C12299 + C28512 * C3057) * C24525 +
            (C11222 * C960 + C12300 + C12300 + C28512 * C968) * C28745 +
            (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C28744) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C11223 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28512) *
               C28744 +
           ((C9172 + C9173) * C11223 + (C9174 + C9175) * C28512) * C28745 +
           ((C4782 * C3050 + C28714 * C3115 + C4783 * C3640 + C28607 * C3698) *
                C11223 +
            (C4782 * C3053 + C28714 * C3118 + C4783 * C3642 + C28607 * C3700) *
                C28512) *
               C24525) *
              C28749 * C28750 * C81 -
          (((C4783 * C3641 + C28607 * C3699 + C4782 * C3054 + C28714 * C3119) *
                C28512 +
            (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
                C11223) *
               C24525 +
           ((C7867 + C7866) * C28512 + (C7865 + C7864) * C11223) * C28745 +
           ((C4804 + C4803) * C28512 + (C4802 + C4801) * C11223) * C28744) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C11223 +
                      (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                       C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                          C28512) *
                         C28714 +
                     ((C24628 * C589 + C28744 * C681 + C24629 * C2532 +
                       C28745 * C2658 + C24630 * C3640 + C24525 * C3752) *
                          C11223 +
                      (C24628 * C593 + C28744 * C685 + C24629 * C2536 +
                       C28745 * C2662 + C24630 * C3642 + C24525 * C3754) *
                          C28512) *
                         C28607) *
                        C28749 * C28750 * C81 -
                    (((C24630 * C3641 + C24525 * C3753 + C24629 * C2535 +
                       C28745 * C2661 + C24628 * C592 + C28744 * C684) *
                          C28512 +
                      (C24630 * C3639 + C24525 * C3751 + C24629 * C2531 +
                       C28745 * C2657 + C24628 * C588 + C28744 * C680) *
                          C11223) *
                         C28607 +
                     ((C24649 + C24648 + C24647) * C28512 +
                      (C24646 + C24645 + C24644) * C11223) *
                         C28714) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C4782 +
                      (C11223 * C149 + C28512 * C274) * C28714 +
                      C11708 * C4783 + C11709 * C28607) *
                         C28744 +
                     (C13511 * C4782 + C13512 * C28714 + C12953 * C4783 +
                      C12954 * C28607) *
                         C28745 +
                     (C13513 * C4782 + C13514 * C28714 + C12955 * C4783 +
                      C12956 * C28607) *
                         C24525) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C3697 + C28512 * C3805) * C28607 +
                      (C11223 * C3639 + C28512 * C3641) * C4783 +
                      (C11223 * C3116 + C28512 * C3261) * C28714 +
                      (C11223 * C3051 + C28512 * C3054) * C4782) *
                         C24525 +
                     ((C11223 * C2598 + C28512 * C2715) * C28607 +
                      (C11223 * C2531 + C28512 * C2535) * C4783 +
                      (C11223 * C1010 + C28512 * C1094) * C28714 +
                      (C11223 * C960 + C28512 * C964) * C4782) *
                         C28745 +
                     ((C11223 * C638 + C28512 * C722) * C28607 +
                      (C11223 * C588 + C28512 * C592) * C4783 +
                      (C11223 * C150 + C28512 * C275) * C28714 +
                      (C11223 * C92 + C28512 * C97) * C4782) *
                         C28744) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                      C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                         C28512 * C28744 +
                     (C9386 + C9387) * C28512 * C28745 +
                     (C4964 * C3050 + C9381 + C9381 + C28714 * C3313 +
                      C4965 * C3640 + C9380 + C9380 + C28607 * C3858) *
                         C28512 * C24525) *
                        C28749 * C28750 * C81 -
                    ((C4965 * C3639 + C9378 + C9378 + C28607 * C3857 +
                      C4964 * C3051 + C9379 + C9379 + C28714 * C3314) *
                         C28512 * C24525 +
                     (C8087 + C8086) * C28512 * C28745 +
                     (C4992 + C4991) * C28512 * C28744) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C4782 +
                     (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                      C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                         C28714 +
                     (C24628 * C589 + C28744 * C681 + C24629 * C2532 +
                      C28745 * C2658 + C24630 * C3640 + C24525 * C3752) *
                         C4783 +
                     (C24628 * C639 + C28744 * C803 + C24629 * C2600 +
                      C28745 * C2830 + C24630 * C3698 + C24525 * C3914) *
                         C28607) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C24630 * C3697 + C24525 * C3913 + C24629 * C2598 +
                      C28745 * C2828 + C24628 * C638 + C28744 * C802) *
                         C28607 +
                     (C24630 * C3639 + C24525 * C3751 + C24629 * C2531 +
                      C28745 * C2657 + C24628 * C588 + C28744 * C680) *
                         C4783 +
                     (C24808 + C24807 + C24806) * C28714 +
                     (C24646 + C24645 + C24644) * C4782) *
                        C28512 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C24628 +
            (C11223 * C212 + C28512 * C427) * C28744 + C13511 * C24629 +
            C13698 * C28745 + C13513 * C24630 + C13699 * C24525) *
               C28714 +
           (C11708 * C24628 + C11835 * C28744 + C12953 * C24629 +
            C13131 * C28745 + C12955 * C24630 + C13132 * C24525) *
               C28607) *
              C28749 * C28750 * C81 -
          (((C11223 * C3751 + C28512 * C3965) * C24525 +
            (C11223 * C3639 + C28512 * C3641) * C24630 +
            (C11223 * C2657 + C28512 * C2883) * C28745 +
            (C11223 * C2531 + C28512 * C2535) * C24629 +
            (C11223 * C680 + C28512 * C840) * C28744 +
            (C11223 * C588 + C28512 * C592) * C24628) *
               C28607 +
           ((C11223 * C3187 + C28512 * C3442) * C24525 +
            (C11223 * C3051 + C28512 * C3054) * C24630 +
            (C11223 * C1052 + C28512 * C1212) * C28745 +
            (C11223 * C960 + C28512 * C964) * C24629 +
            (C11223 * C213 + C28512 * C428) * C28744 +
            (C11223 * C92 + C28512 * C97) * C24628) *
               C28714) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[33] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C24628 +
           (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
               C28744 +
           (C9172 + C9173) * C24629 + (C9590 + C9591) * C28745 +
           (C4782 * C3050 + C28714 * C3115 + C4783 * C3640 + C28607 * C3698) *
               C24630 +
           (C4782 * C3186 + C28714 * C3494 + C4783 * C3752 + C28607 * C4018) *
               C24525) *
              C28512 * C28749 * C28750 * C81 -
          ((C4783 * C3751 + C28607 * C4017 + C4782 * C3187 + C28714 * C3495) *
               C24525 +
           (C4783 * C3639 + C28607 * C3697 + C4782 * C3051 + C28714 * C3116) *
               C24630 +
           (C8297 + C8296) * C28745 + (C7865 + C7864) * C24629 +
           (C5165 + C5164) * C28744 + (C4802 + C4801) * C24628) *
              C28512 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[33] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28714 +
                     (C24964 * C589 + C25447 + C25447 + C28744 * C917 +
                      C24965 * C2532 + C25446 + C25446 + C28745 * C2992 +
                      C24966 * C3640 + C25445 + C25445 + C24525 * C4070) *
                         C28607) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C24966 * C3639 + C25442 + C25442 + C24525 * C4069 +
                      C24965 * C2531 + C25443 + C25443 + C28745 * C2990 +
                      C24964 * C588 + C25444 + C25444 + C28744 * C916) *
                         C28607 +
                     (C24991 + C24990 + C24989) * C28714) *
                        C28512 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28744 +
            C13318 * C28745 + C13319 * C24525) *
               C28714 +
           (C26446 + C26447 + C26448) * C28607) *
              C28749 * C583 -
          (((C11222 * C12754 + C12763 + C12763 + C28512 * C12756) * C24525 +
            C17722 * C28745 + C11572 * C28744) *
               C28607 +
           (C26448 + C26447 + C26446) * C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C11223 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28512) *
               C28744 +
           ((C9172 + C9173) * C11223 + (C9174 + C9175) * C28512) * C28745 +
           ((C4782 * C3050 + C28714 * C3115 + C4783 * C3640 + C28607 * C3698) *
                C11223 +
            (C4782 * C3053 + C28714 * C3118 + C4783 * C3642 + C28607 * C3700) *
                C28512) *
               C24525) *
              C28749 * C583 -
          (((C4783 * C12755 + C28607 * C12822 + C4782 * C3642 +
             C28714 * C3700) *
                C28512 +
            (C4783 * C12754 + C28607 * C12821 + C4782 * C3640 +
             C28714 * C3698) *
                C11223) *
               C24525 +
           ((C4783 * C2534 + C28607 * C2603 + C4782 * C2536 + C28714 * C2604) *
                C28512 +
            (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
                C11223) *
               C28745 +
           ((C4783 * C1356 + C28607 * C1430 + C4782 * C593 + C28714 * C643) *
                C28512 +
            (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
                C11223) *
               C28744) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C11223 +
                      (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                       C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                          C28512) *
                         C28714 +
                     ((C26561 + C26562 + C26563) * C11223 +
                      (C26564 + C26565 + C26566) * C28512) *
                         C28607) *
                        C28749 * C583 -
                    (((C24630 * C12755 + C24525 * C12874 + C24629 * C2534 +
                       C28745 * C2660 + C24628 * C1356 + C28744 * C1504) *
                          C28512 +
                      (C24630 * C12754 + C24525 * C12873 + C24629 * C2530 +
                       C28745 * C2656 + C24628 * C1353 + C28744 * C1501) *
                          C11223) *
                         C28607 +
                     ((C26566 + C26565 + C26564) * C28512 +
                      (C26563 + C26562 + C26561) * C11223) *
                         C28714) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C4782 +
                      (C11223 * C149 + C28512 * C274) * C28714 +
                      C11708 * C4783 + C11709 * C28607) *
                         C28744 +
                     (C13511 * C4782 + C13512 * C28714 + C12953 * C4783 +
                      C12954 * C28607) *
                         C28745 +
                     (C13513 * C4782 + C13514 * C28714 + C12955 * C4783 +
                      C12956 * C28607) *
                         C24525) *
                        C28749 * C583 -
                    (((C11223 * C12821 + C28512 * C12943) * C28607 +
                      (C11223 * C12754 + C28512 * C12755) * C4783 +
                      C12956 * C28714 + C12955 * C4782) *
                         C24525 +
                     (C17891 * C28607 + C17890 * C4783 + C12954 * C28714 +
                      C12953 * C4782) *
                         C28745 +
                     (C11711 * C28607 + C11710 * C4783 + C11709 * C28714 +
                      C11708 * C4782) *
                         C28744) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                      C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                         C28512 * C28744 +
                     (C9386 + C9387) * C28512 * C28745 +
                     (C4964 * C3050 + C9381 + C9381 + C28714 * C3313 +
                      C4965 * C3640 + C9380 + C9380 + C28607 * C3858) *
                         C28512 * C24525) *
                        C28749 * C583 -
                    ((C4965 * C12754 + C26667 + C26667 + C28607 * C13006 +
                      C4964 * C3640 + C26668 + C26668 + C28714 * C3858) *
                         C28512 * C24525 +
                     (C4965 * C2530 + C8740 + C8740 + C28607 * C2769 +
                      C4964 * C2532 + C8741 + C8741 + C28714 * C2770) *
                         C28512 * C28745 +
                     (C4965 * C1353 + C5523 + C5523 + C28607 * C1625 +
                      C4964 * C589 + C5524 + C5524 + C28714 * C761) *
                         C28512 * C28744) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C4782 +
                     (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                      C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                         C28714 +
                     (C26561 + C26562 + C26563) * C4783 +
                     (C26725 + C26726 + C26727) * C28607) *
                        C28512 * C28749 * C583 -
                    ((C24630 * C12821 + C24525 * C13061 + C24629 * C2599 +
                      C28745 * C2829 + C24628 * C1427 + C28744 * C1702) *
                         C28607 +
                     (C24630 * C12754 + C24525 * C12873 + C24629 * C2530 +
                      C28745 * C2656 + C24628 * C1353 + C28744 * C1501) *
                         C4783 +
                     (C26727 + C26726 + C26725) * C28714 +
                     (C26563 + C26562 + C26561) * C4782) *
                        C28512 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezx[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C24628 +
            (C11223 * C212 + C28512 * C427) * C28744 + C13511 * C24629 +
            C13698 * C28745 + C13513 * C24630 + C13699 * C24525) *
               C28714 +
           (C26778 + C26779 + C26780 + C26781 + C26782 + C26783) * C28607) *
              C28749 * C583 -
          (((C11223 * C12873 + C28512 * C13121) * C24525 +
            (C11223 * C12754 + C28512 * C12755) * C24630 + C18060 * C28745 +
            C17890 * C24629 + C11836 * C28744 + C11710 * C24628) *
               C28607 +
           (C26783 + C26782 + C26781 + C26780 + C26779 + C26778) * C28714) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[34] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C24628 +
           (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
               C28744 +
           (C9172 + C9173) * C24629 + (C9590 + C9591) * C28745 +
           (C4782 * C3050 + C28714 * C3115 + C4783 * C3640 + C28607 * C3698) *
               C24630 +
           (C4782 * C3186 + C28714 * C3494 + C4783 * C3752 + C28607 * C4018) *
               C24525) *
              C28512 * C28749 * C583 -
          ((C4783 * C12873 + C28607 * C13184 + C4782 * C3752 + C28714 * C4018) *
               C24525 +
           (C4783 * C12754 + C28607 * C12821 + C4782 * C3640 + C28714 * C3698) *
               C24630 +
           (C4783 * C2656 + C28607 * C2937 + C4782 * C2658 + C28714 * C2938) *
               C28745 +
           (C4783 * C2530 + C28607 * C2599 + C4782 * C2532 + C28714 * C2600) *
               C24629 +
           (C4783 * C1501 + C28607 * C1820 + C4782 * C681 + C28714 * C879) *
               C28744 +
           (C4783 * C1353 + C28607 * C1427 + C4782 * C589 + C28714 * C639) *
               C24628) *
              C28512 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[34] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28714 +
                     (C26899 + C26900 + C26901) * C28607) *
                        C28512 * C28749 * C583 -
                    ((C24966 * C12754 + C26890 + C26890 + C24525 * C13235 +
                      C24965 * C2530 + C26891 + C26891 + C28745 * C2991 +
                      C24964 * C1353 + C26892 + C26892 + C28744 * C1882) *
                         C28607 +
                     (C26901 + C26900 + C26899) * C28714) *
                        C28512 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C28744 +
            C13318 * C28745 + C13319 * C24525) *
               C28714 +
           (C26446 + C26447 + C26448) * C28607) *
              C956 -
          (((C11222 * C13304 + C13312 + C13312 + C28512 * C13306) * C24525 +
            C12769 * C28745 + C12768 * C28744) *
               C28607 +
           (C22336 * C24525 + C13319 * C28745 + C13318 * C28744) * C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
                C11223 +
            (C4782 * C96 + C28714 * C154 + C4783 * C593 + C28607 * C643) *
                C28512) *
               C28744 +
           ((C9172 + C9173) * C11223 + (C9174 + C9175) * C28512) * C28745 +
           ((C27010 + C27011) * C11223 + (C27012 + C27013) * C28512) * C24525) *
              C956 -
          (((C4783 * C13305 + C28607 * C13370 + C4782 * C4130 +
             C28714 * C4208) *
                C28512 +
            (C4783 * C13304 + C28607 * C13369 + C4782 * C4128 +
             C28714 * C4206) *
                C11223) *
               C24525 +
           ((C27013 + C27012) * C28512 + (C27011 + C27010) * C11223) * C28745 +
           ((C9175 + C9174) * C28512 + (C9173 + C9172) * C11223) * C28744) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C11223 +
                      (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                       C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                          C28512) *
                         C28714 +
                     ((C26561 + C26562 + C26563) * C11223 +
                      (C26564 + C26565 + C26566) * C28512) *
                         C28607) *
                        C956 -
                    (((C24630 * C13305 + C24525 * C13446 + C24629 * C3642 +
                       C28745 * C3754 + C24628 * C2536 + C28744 * C2662) *
                          C28512 +
                      (C24630 * C13304 + C24525 * C13445 + C24629 * C3640 +
                       C28745 * C3752 + C24628 * C2532 + C28744 * C2658) *
                          C11223) *
                         C28607 +
                     ((C24630 * C4130 + C24525 * C4282 + C24629 * C3053 +
                       C28745 * C3189 + C24628 * C965 + C28744 * C1057) *
                          C28512 +
                      (C24630 * C4128 + C24525 * C4280 + C24629 * C3050 +
                       C28745 * C3186 + C24628 * C961 + C28744 * C1053) *
                          C11223) *
                         C28714) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C4782 +
                      (C11223 * C149 + C28512 * C274) * C28714 +
                      C11708 * C4783 + C11709 * C28607) *
                         C28744 +
                     (C27114 + C27115 + C27116 + C27117) * C28745 +
                     (C27118 + C27119 + C27120 + C27121) * C24525) *
                        C956 -
                    (((C11223 * C13369 + C28512 * C13497) * C28607 +
                      (C11223 * C13304 + C28512 * C13305) * C4783 +
                      C22465 * C28714 + C22464 * C4782) *
                         C24525 +
                     (C27121 + C27120 + C27119 + C27118) * C28745 +
                     (C27117 + C27116 + C27115 + C27114) * C28744) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyy[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C4964 * C91 + C4967 + C4967 + C28714 * C314 +
                      C4965 * C589 + C4968 + C4968 + C28607 * C761) *
                         C28512 * C28744 +
                     (C9386 + C9387) * C28512 * C28745 +
                     (C27182 + C27183) * C28512 * C24525) *
                        C956 -
                    ((C4965 * C13304 + C27176 + C27176 + C28607 * C13568 +
                      C4964 * C4128 + C27177 + C27177 + C28714 * C4410) *
                         C28512 * C24525 +
                     (C27183 + C27182) * C28512 * C28745 +
                     (C9387 + C9386) * C28512 * C28744) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C4782 +
                     (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                      C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                         C28714 +
                     (C26561 + C26562 + C26563) * C4783 +
                     (C26725 + C26726 + C26727) * C28607) *
                        C28512 * C956 -
                    ((C24630 * C13369 + C24525 * C13641 + C24629 * C3698 +
                      C28745 * C3914 + C24628 * C2600 + C28744 * C2830) *
                         C28607 +
                     (C24630 * C13304 + C24525 * C13445 + C24629 * C3640 +
                      C28745 * C3752 + C24628 * C2532 + C28744 * C2658) *
                         C4783 +
                     (C24630 * C4206 + C24525 * C4478 + C24629 * C3115 +
                      C28745 * C3379 + C24628 * C1011 + C28744 * C1175) *
                         C28714 +
                     (C24630 * C4128 + C24525 * C4280 + C24629 * C3050 +
                      C28745 * C3186 + C24628 * C961 + C28744 * C1053) *
                         C4782) *
                        C28512 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezx[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C24628 +
            (C11223 * C212 + C28512 * C427) * C28744 + C13511 * C24629 +
            C13698 * C28745 + C13513 * C24630 + C13699 * C24525) *
               C28714 +
           (C26778 + C26779 + C26780 + C26781 + C26782 + C26783) * C28607) *
              C956 -
          (((C11223 * C13445 + C28512 * C13692) * C24525 +
            (C11223 * C13304 + C28512 * C13305) * C24630 + C13132 * C28745 +
            C12955 * C24629 + C13131 * C28744 + C12953 * C24628) *
               C28607 +
           (C22584 * C24525 + C22464 * C24630 + C13699 * C28745 +
            C13513 * C24629 + C13698 * C28744 + C13511 * C24628) *
               C28714) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[35] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C4782 * C91 + C28714 * C149 + C4783 * C589 + C28607 * C639) *
               C24628 +
           (C4782 * C212 + C28714 * C466 + C4783 * C681 + C28607 * C879) *
               C28744 +
           (C9172 + C9173) * C24629 + (C9590 + C9591) * C28745 +
           (C27010 + C27011) * C24630 + (C27338 + C27339) * C24525) *
              C28512 * C956 -
          ((C4783 * C13445 + C28607 * C13749 + C4782 * C4280 + C28714 * C4594) *
               C24525 +
           (C4783 * C13304 + C28607 * C13369 + C4782 * C4128 + C28714 * C4206) *
               C24630 +
           (C27339 + C27338) * C28745 + (C27011 + C27010) * C24629 +
           (C9591 + C9590) * C28744 + (C9173 + C9172) * C24628) *
              C28512 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[35] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28714 +
                     (C26899 + C26900 + C26901) * C28607) *
                        C28512 * C956 -
                    ((C24966 * C13304 + C27390 + C27390 + C24525 * C13812 +
                      C24965 * C3640 + C27391 + C27391 + C28745 * C4070 +
                      C24964 * C2532 + C27392 + C27392 + C28744 * C2992) *
                         C28607 +
                     (C24966 * C4128 + C25943 + C25943 + C24525 * C4652 +
                      C24965 * C3050 + C25944 + C25944 + C28745 * C3562 +
                      C24964 * C961 + C25945 + C25945 + C28744 * C1289) *
                         C28714) *
                        C28512 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C11571 * C18726 + C12768 * C28633) * C1347 +
           (C11572 * C18726 + C17722 * C28633) * C1348) *
              C28749 * C28750 * C81 -
          (((C11222 * C2529 + C17264 + C17264 + C28512 * C2537) * C28633 +
            (C11222 * C1354 + C11230 + C11230 + C28512 * C1360) * C18726) *
               C1348 +
           ((C11222 * C2531 + C12298 + C12298 + C28512 * C2539) * C28633 +
            (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C18726) *
               C1347 +
           ((C11222 * C960 + C12300 + C12300 + C28512 * C968) * C28633 +
            (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C18726) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C9716 * C961 + C10777 + C10777 + C9711 * C969 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9720 * C959 + C10775 + C10775 +
            C9713 * C967) *
               C28633) *
              C28558 * C28749 * C28750 * C81 -
          ((C9720 * C958 + C18729 + C18729 + C9713 * C966 + C9718 * C959 +
            C18730 + C18730 + C9712 * C967 + C9716 * C960 + C18731 + C18731 +
            C9711 * C968) *
               C28633 +
           (C9720 * C94 + C9732 + C9732 + C9713 * C104 + C9718 * C93 + C9733 +
            C9733 + C9712 * C103 + C9716 * C92 + C9734 + C9734 + C9711 * C102) *
               C18726) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C21689 +
           C13318 * C21690 + C13319 * C21691 +
           (C11222 * C4128 + C13313 + C13313 + C28512 * C4132) * C21692) *
              C28558 * C28749 * C28750 * C81 -
          ((C11222 * C4127 + C21694 + C21694 + C28512 * C4131) * C21692 +
           (C11222 * C3051 + C12299 + C12299 + C28512 * C3057) * C21691 +
           (C11222 * C960 + C12300 + C12300 + C28512 * C968) * C21690 +
           (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C21689) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[36] += (-std::pow(Pi, 2.5) *
                   ((((C1424 * C91 + C1346 * C149 + C1425 * C589 +
                       C1347 * C639 + C1426 * C1353 + C1348 * C1427) *
                          C11223 +
                      (C1424 * C96 + C1346 * C154 + C1425 * C593 +
                       C1347 * C643 + C1426 * C1356 + C1348 * C1430) *
                          C28512) *
                         C18726 +
                     ((C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                       C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                          C11223 +
                      (C1424 * C965 + C1346 * C1015 + C1425 * C2536 +
                       C1347 * C2604 + C1426 * C2534 + C1348 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C1426 * C2533 + C1348 * C2601 + C1425 * C2535 +
                       C1347 * C2602 + C1424 * C964 + C1346 * C1014) *
                          C28512 +
                      (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 +
                       C1347 * C2598 + C1424 * C960 + C1346 * C1010) *
                          C11223) *
                         C28633 +
                     ((C1451 + C1450 + C1449) * C28512 +
                      (C1448 + C1447 + C1446) * C11223) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C9717 +
                      (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 +
                      C173 * C9712 + C174 * C9721 + C175 * C9713) *
                         C18726 +
                     (C4222 * C9717 + C4223 * C9711 + C3130 * C9719 +
                      C3131 * C9712 + C6319 * C9721 + C6320 * C9713) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C148 * C962 + C28558 * C1012) * C9713 +
                      (C148 * C958 + C28558 * C1008) * C9721 + C6320 * C9712 +
                      C6319 * C9719 + C3131 * C9711 + C3130 * C9717) *
                         C28633 +
                     (C177 * C9713 + C176 * C9721 + C175 * C9712 +
                      C174 * C9719 + C173 * C9711 + C172 * C9717) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C11223 +
                      (C148 * C96 + C28558 * C154) * C28512) *
                         C21689 +
                     (C4222 * C11223 + C4223 * C28512) * C21690 +
                     (C4224 * C11223 + C4225 * C28512) * C21691 +
                     ((C148 * C4128 + C28558 * C4206) * C11223 +
                      (C148 * C4130 + C28558 * C4208) * C28512) *
                         C21692) *
                        C28749 * C28750 * C81 -
                    (((C148 * C4129 + C28558 * C4207) * C28512 +
                      (C148 * C4127 + C28558 * C4205) * C11223) *
                         C21692 +
                     (C3133 * C28512 + C3132 * C11223) * C21691 +
                     (C3131 * C28512 + C3130 * C11223) * C21690 +
                     (C173 * C28512 + C172 * C11223) * C21689) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[36] +=
        (-std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C18831 * C589 + C18726 * C681 + C18832 * C2532 + C28633 * C2658) *
                C11223 +
            (C18831 * C593 + C18726 * C685 + C18832 * C2536 + C28633 * C2662) *
                C28512) *
               C1347 +
           ((C18831 * C1353 + C18726 * C1501 + C18832 * C2530 +
             C28633 * C2656) *
                C11223 +
            (C18831 * C1356 + C18726 * C1504 + C18832 * C2534 +
             C28633 * C2660) *
                C28512) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C18832 * C2533 + C28633 * C2659 + C18831 * C1357 +
             C18726 * C1505) *
                C28512 +
            (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 +
             C18726 * C1502) *
                C11223) *
               C1348 +
           ((C18832 * C2535 + C28633 * C2661 + C18831 * C592 + C18726 * C684) *
                C28512 +
            (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
                C11223) *
               C1347 +
           ((C18853 + C18852) * C28512 + (C18851 + C18850) * C11223) * C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C28749 * C28750 * C81 -
          ((C18832 * C962 + C28633 * C1054 + C18831 * C99 + C18726 * C220) *
               C9713 +
           (C18832 * C958 + C28633 * C1050 + C18831 * C94 + C18726 * C215) *
               C9721 +
           (C18857 + C18856) * C9712 + (C18855 + C18854) * C9719 +
           (C18853 + C18852) * C9711 + (C18851 + C18850) * C9717) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C11223 +
           (C21762 * C96 + C21689 * C217 + C21763 * C965 + C21690 * C1057 +
            C21764 * C3053 + C21691 * C3189 + C21765 * C4130 + C21692 * C4282) *
               C28512) *
              C28558 * C28749 * C28750 * C81 -
          ((C21765 * C4129 + C21692 * C4281 + C21764 * C3054 + C21691 * C3190 +
            C21763 * C964 + C21690 * C1056 + C21762 * C97 + C21689 * C218) *
               C28512 +
           (C21765 * C4127 + C21692 * C4279 + C21764 * C3051 + C21691 * C3187 +
            C21763 * C960 + C21690 * C1052 + C21762 * C92 + C21689 * C213) *
               C11223) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[36] += (-std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C1424 +
                      (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
                      C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
                         C18726 +
                     (C13511 * C1424 + C13512 * C1346 + C12953 * C1425 +
                      C12954 * C1347 + C17890 * C1426 + C17891 * C1348) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C2597 + C28512 * C2713) * C1348 +
                      (C11223 * C2529 + C28512 * C2533) * C1426 +
                      (C11223 * C2598 + C28512 * C2715) * C1347 +
                      (C11223 * C2531 + C28512 * C2535) * C1425 +
                      (C11223 * C1010 + C28512 * C1094) * C1346 +
                      (C11223 * C960 + C28512 * C964) * C1424) *
                         C28633 +
                     ((C11223 * C1428 + C28512 * C1570) * C1348 +
                      (C11223 * C1354 + C28512 * C1357) * C1426 +
                      (C11223 * C638 + C28512 * C722) * C1347 +
                      (C11223 * C588 + C28512 * C592) * C1425 +
                      (C11223 * C150 + C28512 * C275) * C1346 +
                      (C11223 * C92 + C28512 * C97) * C1424) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                       C9721 * C93 + C9713 * C98) *
                          C148 +
                      (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                       C9712 * C275 + C9721 * C151 + C9713 * C276) *
                          C28558) *
                         C18726 +
                     ((C9717 * C961 + C9711 * C965 + C9719 * C960 +
                       C9712 * C964 + C9721 * C959 + C9713 * C963) *
                          C148 +
                      (C9717 * C1011 + C9711 * C1095 + C9719 * C1010 +
                       C9712 * C1094 + C9721 * C1009 + C9713 * C1093) *
                          C28558) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C9721 * C1008 + C9713 * C1092 + C9719 * C1009 +
                       C9712 * C1093 + C9717 * C1010 + C9711 * C1094) *
                          C28558 +
                      (C9721 * C958 + C9713 * C962 + C9719 * C959 +
                       C9712 * C963 + C9717 * C960 + C9711 * C964) *
                          C148) *
                         C28633 +
                     ((C9721 * C152 + C9713 * C277 + C9719 * C151 +
                       C9712 * C276 + C9717 * C150 + C9711 * C275) *
                          C28558 +
                      (C9721 * C94 + C9713 * C99 + C9719 * C93 + C9712 * C98 +
                       C9717 * C92 + C9711 * C97) *
                          C148) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C148 +
                      (C11223 * C149 + C28512 * C274) * C28558) *
                         C21689 +
                     (C13511 * C148 + C13512 * C28558) * C21690 +
                     (C13513 * C148 + C13514 * C28558) * C21691 +
                     ((C11223 * C4128 + C28512 * C4130) * C148 +
                      (C11223 * C4206 + C28512 * C4334) * C28558) *
                         C21692) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C4205 + C28512 * C4333) * C28558 +
                      (C11223 * C4127 + C28512 * C4129) * C148) *
                         C21692 +
                     ((C11223 * C3116 + C28512 * C3261) * C28558 +
                      (C11223 * C3051 + C28512 * C3054) * C148) *
                         C21691 +
                     ((C11223 * C1010 + C28512 * C1094) * C28558 +
                      (C11223 * C960 + C28512 * C964) * C148) *
                         C21690 +
                     ((C11223 * C150 + C28512 * C275) * C28558 +
                      (C11223 * C92 + C28512 * C97) * C148) *
                         C21689) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[36] +=
        (-std::pow(Pi, 2.5) *
         (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 + C1630 +
            C1630 + C1347 * C761 + C1624 * C1353 + C1631 + C1631 +
            C1348 * C1625) *
               C28512 * C18726 +
           (C1622 * C961 + C2777 + C2777 + C1346 * C1133 + C1623 * C2532 +
            C2776 + C2776 + C1347 * C2770 + C1624 * C2530 + C2775 + C2775 +
            C1348 * C2769) *
               C28512 * C28633) *
              C28749 * C28750 * C81 -
          ((C1624 * C2529 + C2772 + C2772 + C1348 * C2767 + C1623 * C2531 +
            C2773 + C2773 + C1347 * C2768 + C1622 * C960 + C2774 + C2774 +
            C1346 * C1132) *
               C28512 * C28633 +
           (C1652 + C1651 + C1650) * C28512 * C18726) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 + C337 * C9712 +
            C338 * C9713) *
               C18726 +
           (C4424 * C9711 + C3328 * C9712 + C6501 * C9713) * C28633) *
              C28749 * C28750 * C81 -
          (((C313 * C958 + C1135 + C1135 + C28558 * C1130) * C9713 +
            C6501 * C9712 + C3328 * C9711) *
               C28633 +
           (C339 * C9713 + C338 * C9712 + C337 * C9711) * C18726) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28558 * C314) * C28512 * C21689 +
           C4424 * C28512 * C21690 + C4425 * C28512 * C21691 +
           (C313 * C4128 + C4419 + C4419 + C28558 * C4410) * C28512 * C21692) *
              C28749 * C28750 * C81 -
          ((C313 * C4127 + C4418 + C4418 + C28558 * C4409) * C28512 * C21692 +
           C3329 * C28512 * C21691 + C3328 * C28512 * C21690 +
           C337 * C28512 * C21689) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyz[36] +=
        (-std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C18831 * C589 + C18726 * C681 + C18832 * C2532 + C28633 * C2658) *
               C1425 +
           (C18831 * C639 + C18726 * C803 + C18832 * C2600 + C28633 * C2830) *
               C1347 +
           (C18831 * C1353 + C18726 * C1501 + C18832 * C2530 + C28633 * C2656) *
               C1426 +
           (C18831 * C1427 + C18726 * C1702 + C18832 * C2599 + C28633 * C2829) *
               C1348) *
              C28512 * C28749 * C28750 * C81 -
          ((C18832 * C2597 + C28633 * C2827 + C18831 * C1428 + C18726 * C1703) *
               C1348 +
           (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 + C18726 * C1502) *
               C1426 +
           (C18832 * C2598 + C28633 * C2828 + C18831 * C638 + C18726 * C802) *
               C1347 +
           (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
               C1425 +
           (C19017 + C19016) * C1346 + (C18851 + C18850) * C1424) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C28749 * C28750 * C81 -
          (((C18832 * C1008 + C28633 * C1172 + C18831 * C152 + C18726 * C376) *
                C28558 +
            (C18832 * C958 + C28633 * C1050 + C18831 * C94 + C18726 * C215) *
                C148) *
               C9713 +
           ((C19019 + C19018) * C28558 + (C18855 + C18854) * C148) * C9712 +
           ((C19017 + C19016) * C28558 + (C18851 + C18850) * C148) * C9711) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C148 +
           (C21762 * C149 + C21689 * C373 + C21763 * C1011 + C21690 * C1175 +
            C21764 * C3115 + C21691 * C3379 + C21765 * C4206 + C21692 * C4478) *
               C28558) *
              C28512 * C28749 * C28750 * C81 -
          ((C21765 * C4205 + C21692 * C4477 + C21764 * C3116 + C21691 * C3380 +
            C21763 * C1010 + C21690 * C1174 + C21762 * C150 + C21689 * C374) *
               C28558 +
           (C21765 * C4127 + C21692 * C4279 + C21764 * C3051 + C21691 * C3187 +
            C21763 * C960 + C21690 * C1052 + C21762 * C92 + C21689 * C213) *
               C148) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[36] +=
        (-std::pow(Pi, 2.5) * ((((C11223 * C91 + C28512 * C96) * C18831 +
                                 (C11223 * C212 + C28512 * C427) * C18726 +
                                 C13511 * C18832 + C13698 * C28633) *
                                    C1346 +
                                (C11708 * C18831 + C11835 * C18726 +
                                 C12953 * C18832 + C13131 * C28633) *
                                    C1347 +
                                (C11710 * C18831 + C11836 * C18726 +
                                 C17890 * C18832 + C18060 * C28633) *
                                    C1348) *
                                   C28749 * C28750 * C81 -
                               (((C11223 * C2655 + C28512 * C2881) * C28633 +
                                 (C11223 * C2529 + C28512 * C2533) * C18832 +
                                 (C11223 * C1502 + C28512 * C1768) * C18726 +
                                 (C11223 * C1354 + C28512 * C1357) * C18831) *
                                    C1348 +
                                ((C11223 * C2657 + C28512 * C2883) * C28633 +
                                 (C11223 * C2531 + C28512 * C2535) * C18832 +
                                 (C11223 * C680 + C28512 * C840) * C18726 +
                                 (C11223 * C588 + C28512 * C592) * C18831) *
                                    C1347 +
                                ((C11223 * C1052 + C28512 * C1212) * C28633 +
                                 (C11223 * C960 + C28512 * C964) * C18832 +
                                 (C11223 * C213 + C28512 * C428) * C18726 +
                                 (C11223 * C92 + C28512 * C97) * C18831) *
                                    C1346) *
                                   C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * (((C9717 * C91 + C9711 * C96 + C9719 * C92 +
                                C9712 * C97 + C9721 * C93 + C9713 * C98) *
                                   C18831 +
                               (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                                C9712 * C428 + C9721 * C214 + C9713 * C429) *
                                   C18726 +
                               (C9717 * C961 + C9711 * C965 + C9719 * C960 +
                                C9712 * C964 + C9721 * C959 + C9713 * C963) *
                                   C18832 +
                               (C9717 * C1053 + C9711 * C1213 + C9719 * C1052 +
                                C9712 * C1212 + C9721 * C1051 + C9713 * C1211) *
                                   C28633) *
                                  C28558 * C28749 * C28750 * C81 -
                              ((C9721 * C1050 + C9713 * C1210 + C9719 * C1051 +
                                C9712 * C1211 + C9717 * C1052 + C9711 * C1212) *
                                   C28633 +
                               (C9721 * C958 + C9713 * C962 + C9719 * C959 +
                                C9712 * C963 + C9717 * C960 + C9711 * C964) *
                                   C18832 +
                               (C9721 * C215 + C9713 * C430 + C9719 * C214 +
                                C9712 * C429 + C9717 * C213 + C9711 * C428) *
                                   C18726 +
                               (C9721 * C94 + C9713 * C99 + C9719 * C93 +
                                C9712 * C98 + C9717 * C92 + C9711 * C97) *
                                   C18831) *
                                  C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11223 * C91 + C28512 * C96) * C21762 +
           (C11223 * C212 + C28512 * C427) * C21689 + C13511 * C21763 +
           C13698 * C21690 + C13513 * C21764 + C13699 * C21691 +
           (C11223 * C4128 + C28512 * C4130) * C21765 +
           (C11223 * C4280 + C28512 * C4530) * C21692) *
              C28558 * C28749 * C28750 * C81 -
          ((C11223 * C4279 + C28512 * C4529) * C21692 +
           (C11223 * C4127 + C28512 * C4129) * C21765 +
           (C11223 * C3187 + C28512 * C3442) * C21691 +
           (C11223 * C3051 + C28512 * C3054) * C21764 +
           (C11223 * C1052 + C28512 * C1212) * C21690 +
           (C11223 * C960 + C28512 * C964) * C21763 +
           (C11223 * C213 + C28512 * C428) * C21689 +
           (C11223 * C92 + C28512 * C97) * C21762) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezy[36] +=
        (-std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C18831 +
           (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
            C1426 * C1501 + C1348 * C1820) *
               C18726 +
           (C1424 * C961 + C1346 * C1011 + C1425 * C2532 + C1347 * C2600 +
            C1426 * C2530 + C1348 * C2599) *
               C18832 +
           (C1424 * C1053 + C1346 * C1251 + C1425 * C2658 + C1347 * C2938 +
            C1426 * C2656 + C1348 * C2937) *
               C28633) *
              C28512 * C28749 * C28750 * C81 -
          ((C1426 * C2655 + C1348 * C2935 + C1425 * C2657 + C1347 * C2936 +
            C1424 * C1052 + C1346 * C1250) *
               C28633 +
           (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 + C1347 * C2598 +
            C1424 * C960 + C1346 * C1010) *
               C18832 +
           (C1832 + C1831 + C1830) * C18726 +
           (C1448 + C1447 + C1446) * C18831) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) * ((((C148 * C91 + C28558 * C149) * C18831 +
                                (C148 * C212 + C28558 * C466) * C18726 +
                                C4222 * C18832 + C4600 * C28633) *
                                   C9711 +
                               (C19120 + C19121 + C19122 + C19123) * C9712 +
                               (C19124 + C19125 + C19126 + C19127) * C9713) *
                                  C28749 * C28750 * C81 -
                              (((C148 * C1050 + C28558 * C1248) * C28633 +
                                (C148 * C958 + C28558 * C1008) * C18832 +
                                C483 * C18726 + C176 * C18831) *
                                   C9713 +
                               (C19127 + C19126 + C19125 + C19124) * C9712 +
                               (C19123 + C19122 + C19121 + C19120) * C9711) *
                                  C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C21762 +
           (C148 * C212 + C28558 * C466) * C21689 + C4222 * C21763 +
           C4600 * C21690 + C4224 * C21764 + C4601 * C21691 +
           (C148 * C4128 + C28558 * C4206) * C21765 +
           (C148 * C4280 + C28558 * C4594) * C21692) *
              C28512 * C28749 * C28750 * C81 -
          ((C148 * C4279 + C28558 * C4593) * C21692 +
           (C148 * C4127 + C28558 * C4205) * C21765 + C3507 * C21691 +
           C3132 * C21764 + C3506 * C21690 + C3130 * C21763 + C481 * C21689 +
           C172 * C21762) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezz[36] +=
        (-std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C1346 +
           (C19177 * C589 + C19663 + C19663 + C18726 * C917 + C19178 * C2532 +
            C19662 + C19662 + C28633 * C2992) *
               C1347 +
           (C19177 * C1353 + C20624 + C20624 + C18726 * C1882 + C19178 * C2530 +
            C20625 + C20625 + C28633 * C2991) *
               C1348) *
              C28512 * C28749 * C28750 * C81 -
          ((C19178 * C2529 + C20626 + C20626 + C28633 * C2989 + C19177 * C1354 +
            C20627 + C20627 + C18726 * C1883) *
               C1348 +
           (C19178 * C2531 + C19660 + C19660 + C28633 * C2990 + C19177 * C588 +
            C19661 + C19661 + C18726 * C916) *
               C1347 +
           (C19205 + C19204) * C1346) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C28558 * C9711 +
           (C19204 + C19205) * C28558 * C9712 +
           (C19206 + C19207) * C28558 * C9713) *
              C28749 * C28750 * C81 -
          ((C19178 * C958 + C19194 + C19194 + C28633 * C1286 + C19177 * C94 +
            C19195 + C19195 + C18726 * C524) *
               C28558 * C9713 +
           (C19207 + C19206) * C28558 * C9712 +
           (C19205 + C19204) * C28558 * C9711) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21970 * C91 + C21975 + C21975 + C21689 * C521 + C21971 * C961 +
           C21976 + C21976 + C21690 * C1289 + C21972 * C3050 + C21977 + C21977 +
           C21691 * C3562 + C21973 * C4128 + C21978 + C21978 + C21692 * C4652) *
              C28558 * C28512 * C28749 * C28750 * C81 -
          (C21973 * C4127 + C21979 + C21979 + C21692 * C4651 + C21972 * C3051 +
           C21980 + C21980 + C21691 * C3563 + C21971 * C960 + C21981 + C21981 +
           C21690 * C1288 + C21970 * C92 + C21982 + C21982 + C21689 * C522) *
              C28558 * C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C20678 + C20679) * C1347 + (C20680 + C20681) * C1348) *
              C28749 * C583 -
          (((C11222 * C11950 + C11954 + C11954 + C28512 * C11952) * C28633 +
            C11573 * C18726) *
               C1348 +
           (C20681 + C20680) * C1347 + (C20679 + C20678) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C9716 * C961 + C10777 + C10777 + C9711 * C969 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9720 * C959 + C10775 + C10775 +
            C9713 * C967) *
               C28633) *
              C28558 * C28749 * C583 -
          ((C9720 * C5783 + C10772 + C10772 + C9713 * C5785 + C9718 * C2531 +
            C10773 + C10773 + C9712 * C2539 + C9716 * C2532 + C10774 + C10774 +
            C9711 * C2540) *
               C28633 +
           (C10282 + C10281 + C10280) * C18726) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C21689 +
           C13318 * C21690 + C13319 * C21691 +
           (C11222 * C4128 + C13313 + C13313 + C28512 * C4132) * C21692) *
              C28558 * C28749 * C583 -
          ((C11222 * C13304 + C13312 + C13312 + C28512 * C13306) * C21692 +
           C12769 * C21691 + C12768 * C21690 + C11571 * C21689) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[37] += (-std::pow(Pi, 2.5) *
                   ((((C1424 * C91 + C1346 * C149 + C1425 * C589 +
                       C1347 * C639 + C1426 * C1353 + C1348 * C1427) *
                          C11223 +
                      (C1424 * C96 + C1346 * C154 + C1425 * C593 +
                       C1347 * C643 + C1426 * C1356 + C1348 * C1430) *
                          C28512) *
                         C18726 +
                     ((C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                       C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                          C11223 +
                      (C1424 * C965 + C1346 * C1015 + C1425 * C2536 +
                       C1347 * C2604 + C1426 * C2534 + C1348 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C583 -
                    (((C1426 * C11951 + C1348 * C11992 + C1425 * C2534 +
                       C1347 * C2603 + C1424 * C2536 + C1346 * C2604) *
                          C28512 +
                      (C1426 * C11950 + C1348 * C11991 + C1425 * C2530 +
                       C1347 * C2599 + C1424 * C2532 + C1346 * C2600) *
                          C11223) *
                         C28633 +
                     ((C1426 * C1954 + C1348 * C2032 + C1425 * C1356 +
                       C1347 * C1430 + C1424 * C593 + C1346 * C643) *
                          C28512 +
                      (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 +
                       C1347 * C1427 + C1424 * C589 + C1346 * C639) *
                          C11223) *
                         C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C9717 +
                      (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 +
                      C173 * C9712 + C174 * C9721 + C175 * C9713) *
                         C18726 +
                     (C4222 * C9717 + C4223 * C9711 + C3130 * C9719 +
                      C3131 * C9712 + C6319 * C9721 + C6320 * C9713) *
                         C28633) *
                        C28749 * C583 -
                    (((C148 * C5784 + C28558 * C5843) * C9713 +
                      (C148 * C5783 + C28558 * C5842) * C9721 +
                      (C148 * C2535 + C28558 * C2602) * C9712 +
                      (C148 * C2531 + C28558 * C2598) * C9719 +
                      (C148 * C2536 + C28558 * C2604) * C9711 +
                      (C148 * C2532 + C28558 * C2600) * C9717) *
                         C28633 +
                     ((C148 * C591 + C28558 * C641) * C9713 +
                      (C148 * C587 + C28558 * C637) * C9721 +
                      (C148 * C592 + C28558 * C642) * C9712 +
                      (C148 * C588 + C28558 * C638) * C9719 +
                      (C148 * C593 + C28558 * C643) * C9711 +
                      (C148 * C589 + C28558 * C639) * C9717) *
                         C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C11223 +
                      (C148 * C96 + C28558 * C154) * C28512) *
                         C21689 +
                     (C4222 * C11223 + C4223 * C28512) * C21690 +
                     (C4224 * C11223 + C4225 * C28512) * C21691 +
                     ((C148 * C4128 + C28558 * C4206) * C11223 +
                      (C148 * C4130 + C28558 * C4208) * C28512) *
                         C21692) *
                        C28749 * C583 -
                    (((C148 * C13305 + C28558 * C13370) * C28512 +
                      (C148 * C13304 + C28558 * C13369) * C11223) *
                         C21692 +
                     ((C148 * C3642 + C28558 * C3700) * C28512 +
                      (C148 * C3640 + C28558 * C3698) * C11223) *
                         C21691 +
                     ((C148 * C2536 + C28558 * C2604) * C28512 +
                      (C148 * C2532 + C28558 * C2600) * C11223) *
                         C21690 +
                     ((C148 * C593 + C28558 * C643) * C28512 +
                      (C148 * C589 + C28558 * C639) * C11223) *
                         C21689) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eexz[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C20798 + C20799) * C11223 + (C20800 + C20801) * C28512) * C1347 +
           ((C20802 + C20803) * C11223 + (C20804 + C20805) * C28512) * C1348) *
              C28749 * C583 -
          (((C18832 * C11951 + C28633 * C12028 + C18831 * C1954 +
             C18726 * C2086) *
                C28512 +
            (C18832 * C11950 + C28633 * C12027 + C18831 * C1952 +
             C18726 * C2084) *
                C11223) *
               C1348 +
           ((C20805 + C20804) * C28512 + (C20803 + C20802) * C11223) * C1347 +
           ((C20801 + C20800) * C28512 + (C20799 + C20798) * C11223) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C28749 * C583 -
          ((C18832 * C5784 + C28633 * C5895 + C18831 * C591 + C18726 * C683) *
               C9713 +
           (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
               C9721 +
           (C18832 * C2535 + C28633 * C2661 + C18831 * C592 + C18726 * C684) *
               C9712 +
           (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
               C9719 +
           (C18832 * C2536 + C28633 * C2662 + C18831 * C593 + C18726 * C685) *
               C9711 +
           (C18832 * C2532 + C28633 * C2658 + C18831 * C589 + C18726 * C681) *
               C9717) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C11223 +
           (C21762 * C96 + C21689 * C217 + C21763 * C965 + C21690 * C1057 +
            C21764 * C3053 + C21691 * C3189 + C21765 * C4130 + C21692 * C4282) *
               C28512) *
              C28558 * C28749 * C583 -
          ((C21765 * C13305 + C21692 * C13446 + C21764 * C3642 +
            C21691 * C3754 + C21763 * C2536 + C21690 * C2662 + C21762 * C593 +
            C21689 * C685) *
               C28512 +
           (C21765 * C13304 + C21692 * C13445 + C21764 * C3640 +
            C21691 * C3752 + C21763 * C2532 + C21690 * C2658 + C21762 * C589 +
            C21689 * C681) *
               C11223) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C1424 +
            (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
            C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
               C18726 +
           (C13511 * C1424 + C13512 * C1346 + C12953 * C1425 + C12954 * C1347 +
            C17890 * C1426 + C17891 * C1348) *
               C28633) *
              C28749 * C583 -
          (((C11223 * C11991 + C28512 * C12063) * C1348 +
            (C11223 * C11950 + C28512 * C11951) * C1426 + C17891 * C1347 +
            C17890 * C1425 + C12954 * C1346 + C12953 * C1424) *
               C28633 +
           (C11713 * C1348 + C11712 * C1426 + C11711 * C1347 + C11710 * C1425 +
            C11709 * C1346 + C11708 * C1424) *
               C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C148 +
            (C9717 * C149 + C9711 * C274 + C9719 * C150 + C9712 * C275 +
             C9721 * C151 + C9713 * C276) *
                C28558) *
               C18726 +
           ((C9717 * C961 + C9711 * C965 + C9719 * C960 + C9712 * C964 +
             C9721 * C959 + C9713 * C963) *
                C148 +
            (C9717 * C1011 + C9711 * C1095 + C9719 * C1010 + C9712 * C1094 +
             C9721 * C1009 + C9713 * C1093) *
                C28558) *
               C28633) *
              C28749 * C583 -
          (((C9721 * C5842 + C9713 * C5946 + C9719 * C2598 + C9712 * C2715 +
             C9717 * C2600 + C9711 * C2716) *
                C28558 +
            (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 + C9712 * C2535 +
             C9717 * C2532 + C9711 * C2536) *
                C148) *
               C28633 +
           ((C10456 + C10455 + C10454) * C28558 +
            (C10453 + C10452 + C10451) * C148) *
               C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C148 +
            (C11223 * C149 + C28512 * C274) * C28558) *
               C21689 +
           (C13511 * C148 + C13512 * C28558) * C21690 +
           (C13513 * C148 + C13514 * C28558) * C21691 +
           ((C11223 * C4128 + C28512 * C4130) * C148 +
            (C11223 * C4206 + C28512 * C4334) * C28558) *
               C21692) *
              C28749 * C583 -
          (((C11223 * C13369 + C28512 * C13497) * C28558 +
            (C11223 * C13304 + C28512 * C13305) * C148) *
               C21692 +
           (C12956 * C28558 + C12955 * C148) * C21691 +
           (C12954 * C28558 + C12953 * C148) * C21690 +
           (C11709 * C28558 + C11708 * C148) * C21689) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[37] +=
        (-std::pow(Pi, 2.5) *
         (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 + C1630 +
            C1630 + C1347 * C761 + C1624 * C1353 + C1631 + C1631 +
            C1348 * C1625) *
               C28512 * C18726 +
           (C1622 * C961 + C2777 + C2777 + C1346 * C1133 + C1623 * C2532 +
            C2776 + C2776 + C1347 * C2770 + C1624 * C2530 + C2775 + C2775 +
            C1348 * C2769) *
               C28512 * C28633) *
              C28749 * C583 -
          ((C1624 * C11950 + C20906 + C20906 + C1348 * C12098 + C1623 * C2530 +
            C20907 + C20907 + C1347 * C2769 + C1622 * C2532 + C20908 + C20908 +
            C1346 * C2770) *
               C28512 * C28633 +
           (C1624 * C1952 + C2239 + C2239 + C1348 * C2234 + C1623 * C1353 +
            C2240 + C2240 + C1347 * C1625 + C1622 * C589 + C2241 + C2241 +
            C1346 * C761) *
               C28512 * C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 + C337 * C9712 +
            C338 * C9713) *
               C18726 +
           (C4424 * C9711 + C3328 * C9712 + C6501 * C9713) * C28633) *
              C28749 * C583 -
          (((C313 * C5783 + C7005 + C7005 + C28558 * C5997) * C9713 +
            (C313 * C2531 + C3862 + C3862 + C28558 * C2768) * C9712 +
            (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C9711) *
               C28633 +
           ((C313 * C587 + C764 + C764 + C28558 * C759) * C9713 +
            (C313 * C588 + C765 + C765 + C28558 * C760) * C9712 +
            (C313 * C589 + C766 + C766 + C28558 * C761) * C9711) *
               C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28558 * C314) * C28512 * C21689 +
           C4424 * C28512 * C21690 + C4425 * C28512 * C21691 +
           (C313 * C4128 + C4419 + C4419 + C28558 * C4410) * C28512 * C21692) *
              C28749 * C583 -
          ((C313 * C13304 + C22153 + C22153 + C28558 * C13568) * C28512 *
               C21692 +
           (C313 * C3640 + C3861 + C3861 + C28558 * C3858) * C28512 * C21691 +
           (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C28512 * C21690 +
           (C313 * C589 + C766 + C766 + C28558 * C761) * C28512 * C21689) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C20798 + C20799) * C1425 + (C20967 + C20968) * C1347 +
           (C20802 + C20803) * C1426 + (C20969 + C20970) * C1348) *
              C28512 * C28749 * C583 -
          ((C18832 * C11991 + C28633 * C12137 + C18831 * C2030 +
            C18726 * C2292) *
               C1348 +
           (C18832 * C11950 + C28633 * C12027 + C18831 * C1952 +
            C18726 * C2084) *
               C1426 +
           (C20970 + C20969) * C1347 + (C20803 + C20802) * C1425 +
           (C20968 + C20967) * C1346 + (C20799 + C20798) * C1424) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C28749 * C583 -
          (((C18832 * C5842 + C28633 * C6054 + C18831 * C637 + C18726 * C801) *
                C28558 +
            (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
                C148) *
               C9713 +
           ((C18832 * C2598 + C28633 * C2828 + C18831 * C638 + C18726 * C802) *
                C28558 +
            (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
                C148) *
               C9712 +
           ((C18832 * C2600 + C28633 * C2830 + C18831 * C639 + C18726 * C803) *
                C28558 +
            (C18832 * C2532 + C28633 * C2658 + C18831 * C589 + C18726 * C681) *
                C148) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C148 +
           (C21762 * C149 + C21689 * C373 + C21763 * C1011 + C21690 * C1175 +
            C21764 * C3115 + C21691 * C3379 + C21765 * C4206 + C21692 * C4478) *
               C28558) *
              C28512 * C28749 * C583 -
          ((C21765 * C13369 + C21692 * C13641 + C21764 * C3698 +
            C21691 * C3914 + C21763 * C2600 + C21690 * C2830 + C21762 * C639 +
            C21689 * C803) *
               C28558 +
           (C21765 * C13304 + C21692 * C13445 + C21764 * C3640 +
            C21691 * C3752 + C21763 * C2532 + C21690 * C2658 + C21762 * C589 +
            C21689 * C681) *
               C148) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[37] +=
        (-std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C18831 +
            (C11223 * C212 + C28512 * C427) * C18726 + C13511 * C18832 +
            C13698 * C28633) *
               C1346 +
           (C21021 + C21022 + C21023 + C21024) * C1347 +
           (C21025 + C21026 + C21027 + C21028) * C1348) *
              C28749 * C583 -
          (((C11223 * C12027 + C28512 * C12172) * C28633 +
            (C11223 * C11950 + C28512 * C11951) * C18832 + C11837 * C18726 +
            C11712 * C18831) *
               C1348 +
           (C21028 + C21027 + C21026 + C21025) * C1347 +
           (C21024 + C21023 + C21022 + C21021) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
            C9721 * C93 + C9713 * C98) *
               C18831 +
           (C9717 * C212 + C9711 * C427 + C9719 * C213 + C9712 * C428 +
            C9721 * C214 + C9713 * C429) *
               C18726 +
           (C9717 * C961 + C9711 * C965 + C9719 * C960 + C9712 * C964 +
            C9721 * C959 + C9713 * C963) *
               C18832 +
           (C9717 * C1053 + C9711 * C1213 + C9719 * C1052 + C9712 * C1212 +
            C9721 * C1051 + C9713 * C1211) *
               C28633) *
              C28558 * C28749 * C583 -
          ((C9721 * C5894 + C9713 * C6105 + C9719 * C2657 + C9712 * C2883 +
            C9717 * C2658 + C9711 * C2884) *
               C28633 +
           (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 + C9712 * C2535 +
            C9717 * C2532 + C9711 * C2536) *
               C18832 +
           (C10621 + C10620 + C10619) * C18726 +
           (C10453 + C10452 + C10451) * C18831) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11223 * C91 + C28512 * C96) * C21762 +
           (C11223 * C212 + C28512 * C427) * C21689 + C13511 * C21763 +
           C13698 * C21690 + C13513 * C21764 + C13699 * C21691 +
           (C11223 * C4128 + C28512 * C4130) * C21765 +
           (C11223 * C4280 + C28512 * C4530) * C21692) *
              C28558 * C28749 * C583 -
          ((C11223 * C13445 + C28512 * C13692) * C21692 +
           (C11223 * C13304 + C28512 * C13305) * C21765 + C13132 * C21691 +
           C12955 * C21764 + C13131 * C21690 + C12953 * C21763 +
           C11835 * C21689 + C11708 * C21762) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezy[37] += (-std::pow(Pi, 2.5) *
                   (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
                      C1426 * C1353 + C1348 * C1427) *
                         C18831 +
                     (C1424 * C212 + C1346 * C466 + C1425 * C681 +
                      C1347 * C879 + C1426 * C1501 + C1348 * C1820) *
                         C18726 +
                     (C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                      C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                         C18832 +
                     (C1424 * C1053 + C1346 * C1251 + C1425 * C2658 +
                      C1347 * C2938 + C1426 * C2656 + C1348 * C2937) *
                         C28633) *
                        C28512 * C28749 * C583 -
                    ((C1426 * C12027 + C1348 * C12207 + C1425 * C2656 +
                      C1347 * C2937 + C1424 * C2658 + C1346 * C2938) *
                         C28633 +
                     (C1426 * C11950 + C1348 * C11991 + C1425 * C2530 +
                      C1347 * C2599 + C1424 * C2532 + C1346 * C2600) *
                         C18832 +
                     (C1426 * C2084 + C1348 * C2414 + C1425 * C1501 +
                      C1347 * C1820 + C1424 * C681 + C1346 * C879) *
                         C18726 +
                     (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 +
                      C1347 * C1427 + C1424 * C589 + C1346 * C639) *
                         C18831) *
                        C28512 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C18831 +
                      (C148 * C212 + C28558 * C466) * C18726 + C4222 * C18832 +
                      C4600 * C28633) *
                         C9711 +
                     (C19120 + C19121 + C19122 + C19123) * C9712 +
                     (C19124 + C19125 + C19126 + C19127) * C9713) *
                        C28749 * C583 -
                    (((C148 * C5894 + C28558 * C6156) * C28633 +
                      (C148 * C5783 + C28558 * C5842) * C18832 +
                      (C148 * C679 + C28558 * C877) * C18726 +
                      (C148 * C587 + C28558 * C637) * C18831) *
                         C9713 +
                     ((C148 * C2657 + C28558 * C2936) * C28633 +
                      (C148 * C2531 + C28558 * C2598) * C18832 +
                      (C148 * C680 + C28558 * C878) * C18726 +
                      (C148 * C588 + C28558 * C638) * C18831) *
                         C9712 +
                     ((C148 * C2658 + C28558 * C2938) * C28633 +
                      (C148 * C2532 + C28558 * C2600) * C18832 +
                      (C148 * C681 + C28558 * C879) * C18726 +
                      (C148 * C589 + C28558 * C639) * C18831) *
                         C9711) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C148 * C91 + C28558 * C149) * C21762 +
                     (C148 * C212 + C28558 * C466) * C21689 + C4222 * C21763 +
                     C4600 * C21690 + C4224 * C21764 + C4601 * C21691 +
                     (C148 * C4128 + C28558 * C4206) * C21765 +
                     (C148 * C4280 + C28558 * C4594) * C21692) *
                        C28512 * C28749 * C583 -
                    ((C148 * C13445 + C28558 * C13749) * C21692 +
                     (C148 * C13304 + C28558 * C13369) * C21765 +
                     (C148 * C3752 + C28558 * C4018) * C21691 +
                     (C148 * C3640 + C28558 * C3698) * C21764 +
                     (C148 * C2658 + C28558 * C2938) * C21690 +
                     (C148 * C2532 + C28558 * C2600) * C21763 +
                     (C148 * C681 + C28558 * C879) * C21689 +
                     (C148 * C589 + C28558 * C639) * C21762) *
                        C28512 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezz[37] +=
        (-std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C1346 +
           (C21147 + C21148) * C1347 + (C21149 + C21150) * C1348) *
              C28512 * C28749 * C583 -
          ((C19178 * C11950 + C21137 + C21137 + C28633 * C12242 +
            C19177 * C1952 + C21138 + C21138 + C18726 * C2466) *
               C1348 +
           (C21150 + C21149) * C1347 + (C21148 + C21147) * C1346) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C28558 * C9711 +
           (C19204 + C19205) * C28558 * C9712 +
           (C19206 + C19207) * C28558 * C9713) *
              C28749 * C583 -
          ((C19178 * C5783 + C19658 + C19658 + C28633 * C6207 + C19177 * C587 +
            C19659 + C19659 + C18726 * C915) *
               C28558 * C9713 +
           (C19178 * C2531 + C19660 + C19660 + C28633 * C2990 + C19177 * C588 +
            C19661 + C19661 + C18726 * C916) *
               C28558 * C9712 +
           (C19178 * C2532 + C19662 + C19662 + C28633 * C2992 + C19177 * C589 +
            C19663 + C19663 + C18726 * C917) *
               C28558 * C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21970 * C91 + C21975 + C21975 + C21689 * C521 + C21971 * C961 +
           C21976 + C21976 + C21690 * C1289 + C21972 * C3050 + C21977 + C21977 +
           C21691 * C3562 + C21973 * C4128 + C21978 + C21978 + C21692 * C4652) *
              C28558 * C28512 * C28749 * C583 -
          (C21973 * C13304 + C22290 + C22290 + C21692 * C13812 +
           C21972 * C3640 + C22291 + C22291 + C21691 * C4070 + C21971 * C2532 +
           C22292 + C22292 + C21690 * C2992 + C21970 * C589 + C22293 + C22293 +
           C21689 * C917) *
              C28558 * C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C20678 + C20679) * C1347 + (C20680 + C20681) * C1348) *
              C956 -
          (((C11222 * C12754 + C12763 + C12763 + C28512 * C12756) * C28633 +
            C17722 * C18726) *
               C1348 +
           (C12769 * C28633 + C12768 * C18726) * C1347 +
           (C13319 * C28633 + C13318 * C18726) * C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C19729 + C19730 + C19731) * C28633) *
              C28558 * C956 -
          ((C9720 * C3052 + C19720 + C19720 + C9713 * C3058 + C9718 * C3051 +
            C19721 + C19721 + C9712 * C3057 + C9716 * C3050 + C19722 + C19722 +
            C9711 * C3056) *
               C28633 +
           (C19731 + C19730 + C19729) * C18726) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C21689 +
           C13318 * C21690 + C13319 * C21691 + C22336 * C21692) *
              C28558 * C956 -
          ((C11222 * C22327 + C22333 + C22333 + C28512 * C22329) * C21692 +
           C22336 * C21691 + C13319 * C21690 + C13318 * C21689) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C11223 +
            (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
             C1426 * C1356 + C1348 * C1430) *
                C28512) *
               C18726 +
           ((C21263 + C21264 + C21265) * C11223 +
            (C21266 + C21267 + C21268) * C28512) *
               C28633) *
              C956 -
          (((C1426 * C12755 + C1348 * C12822 + C1425 * C3642 + C1347 * C3700 +
             C1424 * C3053 + C1346 * C3118) *
                C28512 +
            (C1426 * C12754 + C1348 * C12821 + C1425 * C3640 + C1347 * C3698 +
             C1424 * C3050 + C1346 * C3115) *
                C11223) *
               C28633 +
           ((C21268 + C21267 + C21266) * C28512 +
            (C21265 + C21264 + C21263) * C11223) *
               C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C9717 +
            (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 + C173 * C9712 +
            C174 * C9721 + C175 * C9713) *
               C18726 +
           (C19782 + C19783 + C19784 + C19785 + C19786 + C19787) * C28633) *
              C956 -
          (((C148 * C3055 + C28558 * C3120) * C9713 +
            (C148 * C3052 + C28558 * C3117) * C9721 + C3133 * C9712 +
            C3132 * C9719 + C4225 * C9711 + C4224 * C9717) *
               C28633 +
           (C19787 + C19786 + C19785 + C19784 + C19783 + C19782) * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C11223 +
            (C148 * C96 + C28558 * C154) * C28512) *
               C21689 +
           (C22373 + C22374) * C21690 + (C22375 + C22376) * C21691 +
           (C22383 + C22384) * C21692) *
              C956 -
          (((C148 * C22328 + C28558 * C22371) * C28512 +
            (C148 * C22327 + C28558 * C22370) * C11223) *
               C21692 +
           (C22384 + C22383) * C21691 + (C22376 + C22375) * C21690 +
           (C22374 + C22373) * C21689) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C20798 + C20799) * C11223 + (C20800 + C20801) * C28512) * C1347 +
           ((C20802 + C20803) * C11223 + (C20804 + C20805) * C28512) * C1348) *
              C956 -
          (((C18832 * C12755 + C28633 * C12874 + C18831 * C2534 +
             C18726 * C2660) *
                C28512 +
            (C18832 * C12754 + C28633 * C12873 + C18831 * C2530 +
             C18726 * C2656) *
                C11223) *
               C1348 +
           ((C18832 * C3642 + C28633 * C3754 + C18831 * C2536 +
             C18726 * C2662) *
                C28512 +
            (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 +
             C18726 * C2658) *
                C11223) *
               C1347 +
           ((C18832 * C3053 + C28633 * C3189 + C18831 * C965 + C18726 * C1057) *
                C28512 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C11223) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C956 -
          ((C18832 * C3055 + C28633 * C3191 + C18831 * C963 + C18726 * C1055) *
               C9713 +
           (C18832 * C3052 + C28633 * C3188 + C18831 * C959 + C18726 * C1051) *
               C9721 +
           (C18832 * C3054 + C28633 * C3190 + C18831 * C964 + C18726 * C1056) *
               C9712 +
           (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
               C9719 +
           (C18832 * C3053 + C28633 * C3189 + C18831 * C965 + C18726 * C1057) *
               C9711 +
           (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
               C9717) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C11223 +
           (C21762 * C96 + C21689 * C217 + C21763 * C965 + C21690 * C1057 +
            C21764 * C3053 + C21691 * C3189 + C21765 * C4130 + C21692 * C4282) *
               C28512) *
              C28558 * C956 -
          ((C21765 * C22328 + C21692 * C22419 + C21764 * C4130 +
            C21691 * C4282 + C21763 * C3053 + C21690 * C3189 + C21762 * C965 +
            C21689 * C1057) *
               C28512 +
           (C21765 * C22327 + C21692 * C22418 + C21764 * C4128 +
            C21691 * C4280 + C21763 * C3050 + C21690 * C3186 + C21762 * C961 +
            C21689 * C1053) *
               C11223) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[38] +=
        (-std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C1424 +
            (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
            C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
               C18726 +
           (C21369 + C21370 + C21371 + C21372 + C21373 + C21374) * C28633) *
              C956 -
          (((C11223 * C12821 + C28512 * C12943) * C1348 +
            (C11223 * C12754 + C28512 * C12755) * C1426 + C12956 * C1347 +
            C12955 * C1425 + C13514 * C1346 + C13513 * C1424) *
               C28633 +
           (C21374 + C21373 + C21372 + C21371 + C21370 + C21369) * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C148 +
            (C9717 * C149 + C9711 * C274 + C9719 * C150 + C9712 * C275 +
             C9721 * C151 + C9713 * C276) *
                C28558) *
               C18726 +
           ((C19900 + C19901 + C19902) * C148 +
            (C19903 + C19904 + C19905) * C28558) *
               C28633) *
              C956 -
          (((C9721 * C3117 + C9713 * C3262 + C9719 * C3116 + C9712 * C3261 +
             C9717 * C3115 + C9711 * C3260) *
                C28558 +
            (C9721 * C3052 + C9713 * C3055 + C9719 * C3051 + C9712 * C3054 +
             C9717 * C3050 + C9711 * C3053) *
                C148) *
               C28633 +
           ((C19905 + C19904 + C19903) * C28558 +
            (C19902 + C19901 + C19900) * C148) *
               C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C148 +
            (C11223 * C149 + C28512 * C274) * C28558) *
               C21689 +
           (C22456 + C22457) * C21690 + (C22458 + C22459) * C21691 +
           (C22466 + C22467) * C21692) *
              C956 -
          (((C11223 * C22370 + C28512 * C22454) * C28558 +
            (C11223 * C22327 + C28512 * C22328) * C148) *
               C21692 +
           (C22467 + C22466) * C21691 + (C22459 + C22458) * C21690 +
           (C22457 + C22456) * C21689) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[38] +=
        (-std::pow(Pi, 2.5) *
         (((C1622 * C91 + C1629 + C1629 + C1346 * C314 + C1623 * C589 + C1630 +
            C1630 + C1347 * C761 + C1624 * C1353 + C1631 + C1631 +
            C1348 * C1625) *
               C28512 * C18726 +
           (C21440 + C21441 + C21442) * C28512 * C28633) *
              C956 -
          ((C1624 * C12754 + C21431 + C21431 + C1348 * C13006 + C1623 * C3640 +
            C21432 + C21432 + C1347 * C3858 + C1622 * C3050 + C21433 + C21433 +
            C1346 * C3313) *
               C28512 * C28633 +
           (C21442 + C21441 + C21440) * C28512 * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 + C337 * C9712 +
            C338 * C9713) *
               C18726 +
           (C19956 + C19957 + C19958) * C28633) *
              C956 -
          (((C313 * C3052 + C3323 + C3323 + C28558 * C3315) * C9713 +
            C3329 * C9712 + C4425 * C9711) *
               C28633 +
           (C19958 + C19957 + C19956) * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C313 * C91 + C320 + C320 + C28558 * C314) * C28512 * C21689 +
           C22503 * C21690 + C22504 * C21691 + C22511 * C21692) *
              C956 -
          ((C313 * C22327 + C22507 + C22507 + C28558 * C22501) * C28512 *
               C21692 +
           C22511 * C21691 + C22504 * C21690 + C22503 * C21689) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C20798 + C20799) * C1425 + (C20967 + C20968) * C1347 +
           (C20802 + C20803) * C1426 + (C20969 + C20970) * C1348) *
              C28512 * C956 -
          ((C18832 * C12821 + C28633 * C13061 + C18831 * C2599 +
            C18726 * C2829) *
               C1348 +
           (C18832 * C12754 + C28633 * C12873 + C18831 * C2530 +
            C18726 * C2656) *
               C1426 +
           (C18832 * C3698 + C28633 * C3914 + C18831 * C2600 + C18726 * C2830) *
               C1347 +
           (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 + C18726 * C2658) *
               C1425 +
           (C18832 * C3115 + C28633 * C3379 + C18831 * C1011 + C18726 * C1175) *
               C1346 +
           (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
               C1424) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C956 -
          (((C18832 * C3117 + C28633 * C3381 + C18831 * C1009 +
             C18726 * C1173) *
                C28558 +
            (C18832 * C3052 + C28633 * C3188 + C18831 * C959 + C18726 * C1051) *
                C148) *
               C9713 +
           ((C18832 * C3116 + C28633 * C3380 + C18831 * C1010 +
             C18726 * C1174) *
                C28558 +
            (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
                C148) *
               C9712 +
           ((C18832 * C3115 + C28633 * C3379 + C18831 * C1011 +
             C18726 * C1175) *
                C28558 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C148) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C21762 * C91 + C21689 * C212 + C21763 * C961 + C21690 * C1053 +
            C21764 * C3050 + C21691 * C3186 + C21765 * C4128 + C21692 * C4280) *
               C148 +
           (C21762 * C149 + C21689 * C373 + C21763 * C1011 + C21690 * C1175 +
            C21764 * C3115 + C21691 * C3379 + C21765 * C4206 + C21692 * C4478) *
               C28558) *
              C28512 * C956 -
          ((C21765 * C22370 + C21692 * C22545 + C21764 * C4206 +
            C21691 * C4478 + C21763 * C3115 + C21690 * C3379 + C21762 * C1011 +
            C21689 * C1175) *
               C28558 +
           (C21765 * C22327 + C21692 * C22418 + C21764 * C4128 +
            C21691 * C4280 + C21763 * C3050 + C21690 * C3186 + C21762 * C961 +
            C21689 * C1053) *
               C148) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[38] += (-std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C18831 +
                      (C11223 * C212 + C28512 * C427) * C18726 +
                      C13511 * C18832 + C13698 * C28633) *
                         C1346 +
                     (C21021 + C21022 + C21023 + C21024) * C1347 +
                     (C21025 + C21026 + C21027 + C21028) * C1348) *
                        C956 -
                    (((C11223 * C12873 + C28512 * C13121) * C28633 +
                      (C11223 * C12754 + C28512 * C12755) * C18832 +
                      C18060 * C18726 + C17890 * C18831) *
                         C1348 +
                     (C13132 * C28633 + C12955 * C18832 + C13131 * C18726 +
                      C12953 * C18831) *
                         C1347 +
                     (C13699 * C28633 + C13513 * C18832 + C13698 * C18726 +
                      C13511 * C18831) *
                         C1346) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C18831 +
                     (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                      C9712 * C428 + C9721 * C214 + C9713 * C429) *
                         C18726 +
                     (C19900 + C19901 + C19902) * C18832 +
                     (C20065 + C20066 + C20067) * C28633) *
                        C28558 * C956 -
                    ((C9721 * C3188 + C9713 * C3443 + C9719 * C3187 +
                      C9712 * C3442 + C9717 * C3186 + C9711 * C3441) *
                         C28633 +
                     (C9721 * C3052 + C9713 * C3055 + C9719 * C3051 +
                      C9712 * C3054 + C9717 * C3050 + C9711 * C3053) *
                         C18832 +
                     (C20067 + C20066 + C20065) * C18726 +
                     (C19902 + C19901 + C19900) * C18831) *
                        C28558 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) +
                  (2 * std::pow(Pi, 2.5) *
                   (((C11223 * C91 + C28512 * C96) * C21762 +
                     (C11223 * C212 + C28512 * C427) * C21689 +
                     C13511 * C21763 + C13698 * C21690 + C13513 * C21764 +
                     C13699 * C21691 + C22464 * C21765 + C22584 * C21692) *
                        C28558 * C956 -
                    ((C11223 * C22418 + C28512 * C22580) * C21692 +
                     (C11223 * C22327 + C28512 * C22328) * C21765 +
                     C22584 * C21691 + C22464 * C21764 + C13699 * C21690 +
                     C13513 * C21763 + C13698 * C21689 + C13511 * C21762) *
                        C28558 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezy[38] +=
        (-std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C18831 +
           (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
            C1426 * C1501 + C1348 * C1820) *
               C18726 +
           (C21263 + C21264 + C21265) * C18832 +
           (C21599 + C21600 + C21601) * C28633) *
              C28512 * C956 -
          ((C1426 * C12873 + C1348 * C13184 + C1425 * C3752 + C1347 * C4018 +
            C1424 * C3186 + C1346 * C3494) *
               C28633 +
           (C1426 * C12754 + C1348 * C12821 + C1425 * C3640 + C1347 * C3698 +
            C1424 * C3050 + C1346 * C3115) *
               C18832 +
           (C21601 + C21600 + C21599) * C18726 +
           (C21265 + C21264 + C21263) * C18831) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C18831 +
            (C148 * C212 + C28558 * C466) * C18726 + C4222 * C18832 +
            C4600 * C28633) *
               C9711 +
           (C19120 + C19121 + C19122 + C19123) * C9712 +
           (C19124 + C19125 + C19126 + C19127) * C9713) *
              C956 -
          (((C148 * C3188 + C28558 * C3496) * C28633 +
            (C148 * C3052 + C28558 * C3117) * C18832 + C6673 * C18726 +
            C6319 * C18831) *
               C9713 +
           (C3507 * C28633 + C3132 * C18832 + C3506 * C18726 + C3130 * C18831) *
               C9712 +
           (C4601 * C28633 + C4224 * C18832 + C4600 * C18726 + C4222 * C18831) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         (((C148 * C91 + C28558 * C149) * C21762 +
           (C148 * C212 + C28558 * C466) * C21689 + C4222 * C21763 +
           C4600 * C21690 + C4224 * C21764 + C4601 * C21691 + C22381 * C21765 +
           C22622 * C21692) *
              C28512 * C956 -
          ((C148 * C22418 + C28558 * C22618) * C21692 +
           (C148 * C22327 + C28558 * C22370) * C21765 + C22622 * C21691 +
           C22381 * C21764 + C4601 * C21690 + C4224 * C21763 + C4600 * C21689 +
           C4222 * C21762) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[38] +=
        (-std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C1346 +
           (C21147 + C21148) * C1347 + (C21149 + C21150) * C1348) *
              C28512 * C956 -
          ((C19178 * C12754 + C21652 + C21652 + C28633 * C13235 +
            C19177 * C2530 + C21653 + C21653 + C18726 * C2991) *
               C1348 +
           (C19178 * C3640 + C21654 + C21654 + C28633 * C4070 + C19177 * C2532 +
            C21655 + C21655 + C18726 * C2992) *
               C1347 +
           (C19178 * C3050 + C20172 + C20172 + C28633 * C3562 + C19177 * C961 +
            C20173 + C20173 + C18726 * C1289) *
               C1346) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C19177 * C91 + C19180 + C19180 + C18726 * C521 + C19178 * C961 +
            C19181 + C19181 + C28633 * C1289) *
               C28558 * C9711 +
           (C19204 + C19205) * C28558 * C9712 +
           (C19206 + C19207) * C28558 * C9713) *
              C956 -
          ((C19178 * C3052 + C20168 + C20168 + C28633 * C3564 + C19177 * C959 +
            C20169 + C20169 + C18726 * C1287) *
               C28558 * C9713 +
           (C19178 * C3051 + C20170 + C20170 + C28633 * C3563 + C19177 * C960 +
            C20171 + C20171 + C18726 * C1288) *
               C28558 * C9712 +
           (C19178 * C3050 + C20172 + C20172 + C28633 * C3562 + C19177 * C961 +
            C20173 + C20173 + C18726 * C1289) *
               C28558 * C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C21970 * C91 + C21975 + C21975 + C21689 * C521 + C21971 * C961 +
           C21976 + C21976 + C21690 * C1289 + C21972 * C3050 + C21977 + C21977 +
           C21691 * C3562 + C21973 * C4128 + C21978 + C21978 + C21692 * C4652) *
              C28558 * C28512 * C956 -
          (C21973 * C22327 + C22658 + C22658 + C21692 * C22656 +
           C21972 * C4128 + C22659 + C22659 + C21691 * C4652 + C21971 * C3050 +
           C22660 + C22660 + C21690 * C3562 + C21970 * C961 + C22661 + C22661 +
           C21689 * C1289) *
              C28558 * C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexx[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28744 +
                     (C16666 + C16667) * C28745 +
                     (C13871 * C3050 + C16661 + C16661 + C28701 * C3056 +
                      C13873 * C3051 + C16660 + C16660 + C28517 * C3057) *
                         C24525) *
                        C28558 * C28749 * C28750 * C81 -
                    ((C13873 * C3052 + C24527 + C24527 + C28517 * C3058 +
                      C13871 * C3051 + C24528 + C24528 + C28701 * C3057) *
                         C24525 +
                     (C13873 * C959 + C15406 + C15406 + C28517 * C967 +
                      C13871 * C960 + C15407 + C15407 + C28701 * C968) *
                         C28745 +
                     (C13873 * C93 + C13886 + C13886 + C28517 * C103 +
                      C13871 * C92 + C13887 + C13887 + C28701 * C102) *
                         C28744) *
                        C28558 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexy[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C27436 +
            (C148 * C96 + C28558 * C154) * C28701 + C172 * C27426 +
            C173 * C28517) *
               C28744 +
           (C4222 * C27436 + C4223 * C28701 + C3130 * C27426 + C3131 * C28517) *
               C28745 +
           (C4224 * C27436 + C4225 * C28701 + C3132 * C27426 + C3133 * C28517) *
               C24525) *
              C28749 * C28750 * C81 -
          (((C148 * C3055 + C28558 * C3120) * C28517 +
            (C148 * C3052 + C28558 * C3117) * C27426 + C3133 * C28701 +
            C3132 * C27436) *
               C24525 +
           (C6320 * C28517 + C6319 * C27426 + C3131 * C28701 + C3130 * C27436) *
               C28745 +
           (C175 * C28517 + C174 * C27426 + C173 * C28701 + C172 * C27436) *
               C28744) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eexz[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C27436 +
                     (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                      C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                         C28701 +
                     (C24644 + C24645 + C24646) * C27426 +
                     (C24647 + C24648 + C24649) * C28517) *
                        C28558 * C28749 * C28750 * C81 -
                    ((C24630 * C3055 + C24525 * C3191 + C24629 * C963 +
                      C28745 * C1055 + C24628 * C98 + C28744 * C219) *
                         C28517 +
                     (C24630 * C3052 + C24525 * C3188 + C24629 * C959 +
                      C28745 * C1051 + C24628 * C93 + C28744 * C214) *
                         C27426 +
                     (C24649 + C24648 + C24647) * C28701 +
                     (C24646 + C24645 + C24644) * C27436) *
                        C28558 * C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C148 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28558) *
               C28744 +
           ((C16874 + C16875) * C148 + (C16876 + C16877) * C28558) * C28745 +
           ((C27436 * C3050 + C28701 * C3053 + C27426 * C3051 +
             C28517 * C3054) *
                C148 +
            (C27436 * C3115 + C28701 * C3260 + C27426 * C3116 +
             C28517 * C3261) *
                C28558) *
               C24525) *
              C28749 * C28750 * C81 -
          (((C27426 * C3117 + C28517 * C3262 + C27436 * C3116 +
             C28701 * C3261) *
                C28558 +
            (C27426 * C3052 + C28517 * C3055 + C27436 * C3051 +
             C28701 * C3054) *
                C148) *
               C24525 +
           ((C27426 * C1009 + C28517 * C1093 + C27436 * C1010 +
             C28701 * C1094) *
                C28558 +
            (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
                C148) *
               C28745 +
           ((C27426 * C151 + C28517 * C276 + C27436 * C150 + C28701 * C275) *
                C28558 +
            (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
                C148) *
               C28744) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eeyy[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28701 +
                      C337 * C28517) *
                         C28744 +
                     (C4424 * C28701 + C3328 * C28517) * C28745 +
                     (C4425 * C28701 + C3329 * C28517) * C24525) *
                        C28749 * C28750 * C81 -
                    (((C313 * C3052 + C3323 + C3323 + C28558 * C3315) * C28517 +
                      C3329 * C28701) *
                         C24525 +
                     (C6501 * C28517 + C3328 * C28701) * C28745 +
                     (C338 * C28517 + C337 * C28701) * C28744) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C148 +
                      (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                       C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                          C28558) *
                         C28701 +
                     ((C24644 + C24645 + C24646) * C148 +
                      (C24806 + C24807 + C24808) * C28558) *
                         C28517) *
                        C28749 * C28750 * C81 -
                    (((C24630 * C3117 + C24525 * C3381 + C24629 * C1009 +
                       C28745 * C1173 + C24628 * C151 + C28744 * C375) *
                          C28558 +
                      (C24630 * C3052 + C24525 * C3188 + C24629 * C959 +
                       C28745 * C1051 + C24628 * C93 + C28744 * C214) *
                          C148) *
                         C28517 +
                     ((C24808 + C24807 + C24806) * C28558 +
                      (C24646 + C24645 + C24644) * C148) *
                         C28701) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eezx[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C24628 +
           (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
               C28744 +
           (C16874 + C16875) * C24629 + (C17080 + C17081) * C28745 +
           (C27436 * C3050 + C28701 * C3053 + C27426 * C3051 + C28517 * C3054) *
               C24630 +
           (C27436 * C3186 + C28701 * C3441 + C27426 * C3187 + C28517 * C3442) *
               C24525) *
              C28558 * C28749 * C28750 * C81 -
          ((C27426 * C3188 + C28517 * C3443 + C27436 * C3187 + C28701 * C3442) *
               C24525 +
           (C27426 * C3052 + C28517 * C3055 + C27436 * C3051 + C28701 * C3054) *
               C24630 +
           (C27426 * C1051 + C28517 * C1211 + C27436 * C1052 + C28701 * C1212) *
               C28745 +
           (C27426 * C959 + C28517 * C963 + C27436 * C960 + C28701 * C964) *
               C24629 +
           (C27426 * C214 + C28517 * C429 + C27436 * C213 + C28701 * C428) *
               C28744 +
           (C27426 * C93 + C28517 * C98 + C27436 * C92 + C28701 * C97) *
               C24628) *
              C28558 * C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezy[39] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C24628 +
            (C148 * C212 + C28558 * C466) * C28744 + C4222 * C24629 +
            C4600 * C28745 + C4224 * C24630 + C4601 * C24525) *
               C28701 +
           (C24909 + C24910 + C24911 + C24912 + C24913 + C24914) * C28517) *
              C28749 * C28750 * C81 -
          (((C148 * C3188 + C28558 * C3496) * C24525 +
            (C148 * C3052 + C28558 * C3117) * C24630 + C6673 * C28745 +
            C6319 * C24629 + C482 * C28744 + C174 * C24628) *
               C28517 +
           (C24914 + C24913 + C24912 + C24911 + C24910 + C24909) * C28701) *
              C28749 * C28750 * C82)) /
        (p * q * std::sqrt(p + q));
    d2eezz[39] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28558 * C28701 +
                     (C24989 + C24990 + C24991) * C28558 * C28517) *
                        C28749 * C28750 * C81 -
                    ((C24966 * C3052 + C24980 + C24980 + C24525 * C3564 +
                      C24965 * C959 + C24981 + C24981 + C28745 * C1287 +
                      C24964 * C93 + C24982 + C24982 + C28744 * C523) *
                         C28558 * C28517 +
                     (C24991 + C24990 + C24989) * C28558 * C28701) *
                        C28749 * C28750 * C82)) /
                  (p * q * std::sqrt(p + q));
    d2eexx[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28744 +
                     (C16666 + C16667) * C28745 +
                     (C13871 * C3050 + C16661 + C16661 + C28701 * C3056 +
                      C13873 * C3051 + C16660 + C16660 + C28517 * C3057) *
                         C24525) *
                        C28558 * C28749 * C583 -
                    ((C13873 * C3639 + C16658 + C16658 + C28517 * C3643 +
                      C13871 * C3640 + C16659 + C16659 + C28701 * C3644) *
                         C24525 +
                     (C16039 + C16038) * C28745 + (C14423 + C14422) * C28744) *
                        C28558 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C27436 +
            (C148 * C96 + C28558 * C154) * C28701 + C172 * C27426 +
            C173 * C28517) *
               C28744 +
           (C4222 * C27436 + C4223 * C28701 + C3130 * C27426 + C3131 * C28517) *
               C28745 +
           (C4224 * C27436 + C4225 * C28701 + C3132 * C27426 + C3133 * C28517) *
               C24525) *
              C28749 * C583 -
          (((C148 * C3641 + C28558 * C3699) * C28517 +
            (C148 * C3639 + C28558 * C3697) * C27426 +
            (C148 * C3642 + C28558 * C3700) * C28701 +
            (C148 * C3640 + C28558 * C3698) * C27436) *
               C24525 +
           ((C148 * C2535 + C28558 * C2602) * C28517 +
            (C148 * C2531 + C28558 * C2598) * C27426 +
            (C148 * C2536 + C28558 * C2604) * C28701 +
            (C148 * C2532 + C28558 * C2600) * C27436) *
               C28745 +
           ((C148 * C592 + C28558 * C642) * C28517 +
            (C148 * C588 + C28558 * C638) * C27426 +
            (C148 * C593 + C28558 * C643) * C28701 +
            (C148 * C589 + C28558 * C639) * C27436) *
               C28744) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eexz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C27436 +
                     (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                      C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                         C28701 +
                     (C24644 + C24645 + C24646) * C27426 +
                     (C24647 + C24648 + C24649) * C28517) *
                        C28558 * C28749 * C583 -
                    ((C24630 * C3641 + C24525 * C3753 + C24629 * C2535 +
                      C28745 * C2661 + C24628 * C592 + C28744 * C684) *
                         C28517 +
                     (C24630 * C3639 + C24525 * C3751 + C24629 * C2531 +
                      C28745 * C2657 + C24628 * C588 + C28744 * C680) *
                         C27426 +
                     (C24630 * C3642 + C24525 * C3754 + C24629 * C2536 +
                      C28745 * C2662 + C24628 * C593 + C28744 * C685) *
                         C28701 +
                     (C24630 * C3640 + C24525 * C3752 + C24629 * C2532 +
                      C28745 * C2658 + C24628 * C589 + C28744 * C681) *
                         C27436) *
                        C28558 * C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C148 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28558) *
               C28744 +
           ((C16874 + C16875) * C148 + (C16876 + C16877) * C28558) * C28745 +
           ((C27436 * C3050 + C28701 * C3053 + C27426 * C3051 +
             C28517 * C3054) *
                C148 +
            (C27436 * C3115 + C28701 * C3260 + C27426 * C3116 +
             C28517 * C3261) *
                C28558) *
               C24525) *
              C28749 * C583 -
          (((C27426 * C3697 + C28517 * C3805 + C27436 * C3698 +
             C28701 * C3806) *
                C28558 +
            (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 +
             C28701 * C3642) *
                C148) *
               C24525 +
           ((C16249 + C16248) * C28558 + (C16247 + C16246) * C148) * C28745 +
           ((C14603 + C14602) * C28558 + (C14601 + C14600) * C148) * C28744) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28701 +
            C337 * C28517) *
               C28744 +
           (C4424 * C28701 + C3328 * C28517) * C28745 +
           (C4425 * C28701 + C3329 * C28517) * C24525) *
              C28749 * C583 -
          (((C313 * C3639 + C3860 + C3860 + C28558 * C3857) * C28517 +
            (C313 * C3640 + C3861 + C3861 + C28558 * C3858) * C28701) *
               C24525 +
           ((C313 * C2531 + C3862 + C3862 + C28558 * C2768) * C28517 +
            (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C28701) *
               C28745 +
           ((C313 * C588 + C765 + C765 + C28558 * C760) * C28517 +
            (C313 * C589 + C766 + C766 + C28558 * C761) * C28701) *
               C28744) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C148 +
                      (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                       C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                          C28558) *
                         C28701 +
                     ((C24644 + C24645 + C24646) * C148 +
                      (C24806 + C24807 + C24808) * C28558) *
                         C28517) *
                        C28749 * C583 -
                    (((C24630 * C3697 + C24525 * C3913 + C24629 * C2598 +
                       C28745 * C2828 + C24628 * C638 + C28744 * C802) *
                          C28558 +
                      (C24630 * C3639 + C24525 * C3751 + C24629 * C2531 +
                       C28745 * C2657 + C24628 * C588 + C28744 * C680) *
                          C148) *
                         C28517 +
                     ((C24630 * C3698 + C24525 * C3914 + C24629 * C2600 +
                       C28745 * C2830 + C24628 * C639 + C28744 * C803) *
                          C28558 +
                      (C24630 * C3640 + C24525 * C3752 + C24629 * C2532 +
                       C28745 * C2658 + C24628 * C589 + C28744 * C681) *
                          C148) *
                         C28701) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezx[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C24628 +
           (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
               C28744 +
           (C16874 + C16875) * C24629 + (C17080 + C17081) * C28745 +
           (C27436 * C3050 + C28701 * C3053 + C27426 * C3051 + C28517 * C3054) *
               C24630 +
           (C27436 * C3186 + C28701 * C3441 + C27426 * C3187 + C28517 * C3442) *
               C24525) *
              C28558 * C28749 * C583 -
          ((C27426 * C3751 + C28517 * C3965 + C27436 * C3752 + C28701 * C3966) *
               C24525 +
           (C27426 * C3639 + C28517 * C3641 + C27436 * C3640 + C28701 * C3642) *
               C24630 +
           (C16455 + C16454) * C28745 + (C16247 + C16246) * C24629 +
           (C14773 + C14772) * C28744 + (C14601 + C14600) * C24628) *
              C28558 * C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[40] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C24628 +
            (C148 * C212 + C28558 * C466) * C28744 + C4222 * C24629 +
            C4600 * C28745 + C4224 * C24630 + C4601 * C24525) *
               C28701 +
           (C24909 + C24910 + C24911 + C24912 + C24913 + C24914) * C28517) *
              C28749 * C583 -
          (((C148 * C3751 + C28558 * C4017) * C24525 +
            (C148 * C3639 + C28558 * C3697) * C24630 +
            (C148 * C2657 + C28558 * C2936) * C28745 +
            (C148 * C2531 + C28558 * C2598) * C24629 +
            (C148 * C680 + C28558 * C878) * C28744 +
            (C148 * C588 + C28558 * C638) * C24628) *
               C28517 +
           ((C148 * C3752 + C28558 * C4018) * C24525 +
            (C148 * C3640 + C28558 * C3698) * C24630 +
            (C148 * C2658 + C28558 * C2938) * C28745 +
            (C148 * C2532 + C28558 * C2600) * C24629 +
            (C148 * C681 + C28558 * C879) * C28744 +
            (C148 * C589 + C28558 * C639) * C24628) *
               C28701) *
              C28749 * C584) *
         C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[40] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28558 * C28701 +
                     (C24989 + C24990 + C24991) * C28558 * C28517) *
                        C28749 * C583 -
                    ((C24966 * C3639 + C25442 + C25442 + C24525 * C4069 +
                      C24965 * C2531 + C25443 + C25443 + C28745 * C2990 +
                      C24964 * C588 + C25444 + C25444 + C28744 * C916) *
                         C28558 * C28517 +
                     (C24966 * C3640 + C25445 + C25445 + C24525 * C4070 +
                      C24965 * C2532 + C25446 + C25446 + C28745 * C2992 +
                      C24964 * C589 + C25447 + C25447 + C28744 * C917) *
                         C28558 * C28701) *
                        C28749 * C584) *
                   C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C13871 * C91 + C13876 + C13876 + C28701 * C101 +
                      C13873 * C92 + C13877 + C13877 + C28517 * C102) *
                         C28744 +
                     (C16666 + C16667) * C28745 + (C25508 + C25509) * C24525) *
                        C28558 * C956 -
                    ((C13873 * C4127 + C25502 + C25502 + C28517 * C4131 +
                      C13871 * C4128 + C25503 + C25503 + C28701 * C4132) *
                         C24525 +
                     (C25509 + C25508) * C28745 + (C16667 + C16666) * C28744) *
                        C28558 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C27436 +
                      (C148 * C96 + C28558 * C154) * C28701 + C172 * C27426 +
                      C173 * C28517) *
                         C28744 +
                     (C25560 + C25561 + C25562 + C25563) * C28745 +
                     (C25564 + C25565 + C25566 + C25567) * C24525) *
                        C956 -
                    (((C148 * C4129 + C28558 * C4207) * C28517 +
                      (C148 * C4127 + C28558 * C4205) * C27426 +
                      C22382 * C28701 + C22381 * C27436) *
                         C24525 +
                     (C25567 + C25566 + C25565 + C25564) * C28745 +
                     (C25563 + C25562 + C25561 + C25560) * C28744) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                      C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                         C27436 +
                     (C24628 * C96 + C28744 * C217 + C24629 * C965 +
                      C28745 * C1057 + C24630 * C3053 + C24525 * C3189) *
                         C28701 +
                     (C24644 + C24645 + C24646) * C27426 +
                     (C24647 + C24648 + C24649) * C28517) *
                        C28558 * C956 -
                    ((C24630 * C4129 + C24525 * C4281 + C24629 * C3054 +
                      C28745 * C3190 + C24628 * C964 + C28744 * C1056) *
                         C28517 +
                     (C24630 * C4127 + C24525 * C4279 + C24629 * C3051 +
                      C28745 * C3187 + C24628 * C960 + C28744 * C1052) *
                         C27426 +
                     (C24630 * C4130 + C24525 * C4282 + C24629 * C3053 +
                      C28745 * C3189 + C24628 * C965 + C28744 * C1057) *
                         C28701 +
                     (C24630 * C4128 + C24525 * C4280 + C24629 * C3050 +
                      C28745 * C3186 + C24628 * C961 + C28744 * C1053) *
                         C27436) *
                        C28558 * C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) * C148 +
            (C27436 * C149 + C28701 * C274 + C27426 * C150 + C28517 * C275) *
                C28558) *
               C28744 +
           ((C16874 + C16875) * C148 + (C16876 + C16877) * C28558) * C28745 +
           ((C25676 + C25677) * C148 + (C25678 + C25679) * C28558) * C24525) *
              C956 -
          (((C27426 * C4205 + C28517 * C4333 + C27436 * C4206 +
             C28701 * C4334) *
                C28558 +
            (C27426 * C4127 + C28517 * C4129 + C27436 * C4128 +
             C28701 * C4130) *
                C148) *
               C24525 +
           ((C25679 + C25678) * C28558 + (C25677 + C25676) * C148) * C28745 +
           ((C16877 + C16876) * C28558 + (C16875 + C16874) * C148) * C28744) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eeyy[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C28701 +
                      C337 * C28517) *
                         C28744 +
                     (C25730 + C25731) * C28745 + (C25732 + C25733) * C24525) *
                        C956 -
                    (((C313 * C4127 + C4418 + C4418 + C28558 * C4409) * C28517 +
                      C22510 * C28701) *
                         C24525 +
                     (C25733 + C25732) * C28745 + (C25731 + C25730) * C28744) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eeyz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   ((((C24628 * C91 + C28744 * C212 + C24629 * C961 +
                       C28745 * C1053 + C24630 * C3050 + C24525 * C3186) *
                          C148 +
                      (C24628 * C149 + C28744 * C373 + C24629 * C1011 +
                       C28745 * C1175 + C24630 * C3115 + C24525 * C3379) *
                          C28558) *
                         C28701 +
                     ((C24644 + C24645 + C24646) * C148 +
                      (C24806 + C24807 + C24808) * C28558) *
                         C28517) *
                        C956 -
                    (((C24630 * C4205 + C24525 * C4477 + C24629 * C3116 +
                       C28745 * C3380 + C24628 * C1010 + C28744 * C1174) *
                          C28558 +
                      (C24630 * C4127 + C24525 * C4279 + C24629 * C3051 +
                       C28745 * C3187 + C24628 * C960 + C28744 * C1052) *
                          C148) *
                         C28517 +
                     ((C24630 * C4206 + C24525 * C4478 + C24629 * C3115 +
                       C28745 * C3379 + C24628 * C1011 + C28744 * C1175) *
                          C28558 +
                      (C24630 * C4128 + C24525 * C4280 + C24629 * C3050 +
                       C28745 * C3186 + C24628 * C961 + C28744 * C1053) *
                          C148) *
                         C28701) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eezx[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C27436 * C91 + C28701 * C96 + C27426 * C92 + C28517 * C97) *
               C24628 +
           (C27436 * C212 + C28701 * C427 + C27426 * C213 + C28517 * C428) *
               C28744 +
           (C16874 + C16875) * C24629 + (C17080 + C17081) * C28745 +
           (C25676 + C25677) * C24630 + (C25838 + C25839) * C24525) *
              C28558 * C956 -
          ((C27426 * C4279 + C28517 * C4529 + C27436 * C4280 + C28701 * C4530) *
               C24525 +
           (C27426 * C4127 + C28517 * C4129 + C27436 * C4128 + C28701 * C4130) *
               C24630 +
           (C25839 + C25838) * C28745 + (C25677 + C25676) * C24629 +
           (C17081 + C17080) * C28744 + (C16875 + C16874) * C24628) *
              C28558 * C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezy[41] +=
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C24628 +
            (C148 * C212 + C28558 * C466) * C28744 + C4222 * C24629 +
            C4600 * C28745 + C4224 * C24630 + C4601 * C24525) *
               C28701 +
           (C24909 + C24910 + C24911 + C24912 + C24913 + C24914) * C28517) *
              C956 -
          (((C148 * C4279 + C28558 * C4593) * C24525 +
            (C148 * C4127 + C28558 * C4205) * C24630 + C3507 * C28745 +
            C3132 * C24629 + C3506 * C28744 + C3130 * C24628) *
               C28517 +
           (C22622 * C24525 + C22381 * C24630 + C4601 * C28745 +
            C4224 * C24629 + C4600 * C28744 + C4222 * C24628) *
               C28701) *
              C957) *
         C28750 * C28751) /
        (p * q * std::sqrt(p + q));
    d2eezz[41] += (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
                   (((C24964 * C91 + C24968 + C24968 + C28744 * C521 +
                      C24965 * C961 + C24969 + C24969 + C28745 * C1289 +
                      C24966 * C3050 + C24970 + C24970 + C24525 * C3562) *
                         C28558 * C28701 +
                     (C24989 + C24990 + C24991) * C28558 * C28517) *
                        C956 -
                    ((C24966 * C4127 + C25940 + C25940 + C24525 * C4651 +
                      C24965 * C3051 + C25941 + C25941 + C28745 * C3563 +
                      C24964 * C960 + C25942 + C25942 + C28744 * C1288) *
                         C28558 * C28517 +
                     (C24966 * C4128 + C25943 + C25943 + C24525 * C4652 +
                      C24965 * C3050 + C25944 + C25944 + C28745 * C3562 +
                      C24964 * C961 + C25945 + C25945 + C28744 * C1289) *
                         C28558 * C28701) *
                        C957) *
                   C28750 * C28751) /
                  (p * q * std::sqrt(p + q));
    d2eexx[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C9716 * C961 + C10777 + C10777 + C9711 * C969 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9720 * C959 + C10775 + C10775 +
            C9713 * C967) *
               C28633) *
              C28558 * C28749 * C28750 * C81 -
          ((C9720 * C958 + C18729 + C18729 + C9713 * C966 + C9718 * C959 +
            C18730 + C18730 + C9712 * C967 + C9716 * C960 + C18731 + C18731 +
            C9711 * C968) *
               C28633 +
           (C9720 * C94 + C9732 + C9732 + C9713 * C104 + C9718 * C93 + C9733 +
            C9733 + C9712 * C103 + C9716 * C92 + C9734 + C9734 + C9711 * C102) *
               C18726) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C11571 * C18726 + C12768 * C28633) * C1347 +
           (C11572 * C18726 + C17722 * C28633) * C1348) *
              C28749 * C28750 * C81 -
          (((C11222 * C2529 + C17264 + C17264 + C28512 * C2537) * C28633 +
            (C11222 * C1354 + C11230 + C11230 + C28512 * C1360) * C18726) *
               C1348 +
           ((C11222 * C2531 + C12298 + C12298 + C28512 * C2539) * C28633 +
            (C11222 * C588 + C11231 + C11231 + C28512 * C596) * C18726) *
               C1347 +
           ((C11222 * C960 + C12300 + C12300 + C28512 * C968) * C28633 +
            (C11222 * C92 + C11232 + C11232 + C28512 * C102) * C18726) *
               C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eexy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C9717 +
                      (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 +
                      C173 * C9712 + C174 * C9721 + C175 * C9713) *
                         C18726 +
                     (C4222 * C9717 + C4223 * C9711 + C3130 * C9719 +
                      C3131 * C9712 + C6319 * C9721 + C6320 * C9713) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C148 * C962 + C28558 * C1012) * C9713 +
                      (C148 * C958 + C28558 * C1008) * C9721 + C6320 * C9712 +
                      C6319 * C9719 + C3131 * C9711 + C3130 * C9717) *
                         C28633 +
                     (C177 * C9713 + C176 * C9721 + C175 * C9712 +
                      C174 * C9719 + C173 * C9711 + C172 * C9717) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1424 * C91 + C1346 * C149 + C1425 * C589 +
                       C1347 * C639 + C1426 * C1353 + C1348 * C1427) *
                          C11223 +
                      (C1424 * C96 + C1346 * C154 + C1425 * C593 +
                       C1347 * C643 + C1426 * C1356 + C1348 * C1430) *
                          C28512) *
                         C18726 +
                     ((C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                       C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                          C11223 +
                      (C1424 * C965 + C1346 * C1015 + C1425 * C2536 +
                       C1347 * C2604 + C1426 * C2534 + C1348 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C1426 * C2533 + C1348 * C2601 + C1425 * C2535 +
                       C1347 * C2602 + C1424 * C964 + C1346 * C1014) *
                          C28512 +
                      (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 +
                       C1347 * C2598 + C1424 * C960 + C1346 * C1010) *
                          C11223) *
                         C28633 +
                     ((C1451 + C1450 + C1449) * C28512 +
                      (C1448 + C1447 + C1446) * C11223) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C28749 * C28750 * C81 -
          ((C18832 * C962 + C28633 * C1054 + C18831 * C99 + C18726 * C220) *
               C9713 +
           (C18832 * C958 + C28633 * C1050 + C18831 * C94 + C18726 * C215) *
               C9721 +
           (C18857 + C18856) * C9712 + (C18855 + C18854) * C9719 +
           (C18853 + C18852) * C9711 + (C18851 + C18850) * C9717) *
              C28558 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C18831 * C589 + C18726 * C681 + C18832 * C2532 + C28633 * C2658) *
                C11223 +
            (C18831 * C593 + C18726 * C685 + C18832 * C2536 + C28633 * C2662) *
                C28512) *
               C1347 +
           ((C18831 * C1353 + C18726 * C1501 + C18832 * C2530 +
             C28633 * C2656) *
                C11223 +
            (C18831 * C1356 + C18726 * C1504 + C18832 * C2534 +
             C28633 * C2660) *
                C28512) *
               C1348) *
              C28749 * C28750 * C81 -
          (((C18832 * C2533 + C28633 * C2659 + C18831 * C1357 +
             C18726 * C1505) *
                C28512 +
            (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 +
             C18726 * C1502) *
                C11223) *
               C1348 +
           ((C18832 * C2535 + C28633 * C2661 + C18831 * C592 + C18726 * C684) *
                C28512 +
            (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
                C11223) *
               C1347 +
           ((C18853 + C18852) * C28512 + (C18851 + C18850) * C11223) * C1346) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eeyx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                       C9721 * C93 + C9713 * C98) *
                          C148 +
                      (C9717 * C149 + C9711 * C274 + C9719 * C150 +
                       C9712 * C275 + C9721 * C151 + C9713 * C276) *
                          C28558) *
                         C18726 +
                     ((C9717 * C961 + C9711 * C965 + C9719 * C960 +
                       C9712 * C964 + C9721 * C959 + C9713 * C963) *
                          C148 +
                      (C9717 * C1011 + C9711 * C1095 + C9719 * C1010 +
                       C9712 * C1094 + C9721 * C1009 + C9713 * C1093) *
                          C28558) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C9721 * C1008 + C9713 * C1092 + C9719 * C1009 +
                       C9712 * C1093 + C9717 * C1010 + C9711 * C1094) *
                          C28558 +
                      (C9721 * C958 + C9713 * C962 + C9719 * C959 +
                       C9712 * C963 + C9717 * C960 + C9711 * C964) *
                          C148) *
                         C28633 +
                     ((C9721 * C152 + C9713 * C277 + C9719 * C151 +
                       C9712 * C276 + C9717 * C150 + C9711 * C275) *
                          C28558 +
                      (C9721 * C94 + C9713 * C99 + C9719 * C93 + C9712 * C98 +
                       C9717 * C92 + C9711 * C97) *
                          C148) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C1424 +
                      (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
                      C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
                         C18726 +
                     (C13511 * C1424 + C13512 * C1346 + C12953 * C1425 +
                      C12954 * C1347 + C17890 * C1426 + C17891 * C1348) *
                         C28633) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C2597 + C28512 * C2713) * C1348 +
                      (C11223 * C2529 + C28512 * C2533) * C1426 +
                      (C11223 * C2598 + C28512 * C2715) * C1347 +
                      (C11223 * C2531 + C28512 * C2535) * C1425 +
                      (C11223 * C1010 + C28512 * C1094) * C1346 +
                      (C11223 * C960 + C28512 * C964) * C1424) *
                         C28633 +
                     ((C11223 * C1428 + C28512 * C1570) * C1348 +
                      (C11223 * C1354 + C28512 * C1357) * C1426 +
                      (C11223 * C638 + C28512 * C722) * C1347 +
                      (C11223 * C588 + C28512 * C592) * C1425 +
                      (C11223 * C150 + C28512 * C275) * C1346 +
                      (C11223 * C92 + C28512 * C97) * C1424) *
                         C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 +
                      C337 * C9712 + C338 * C9713) *
                         C18726 +
                     (C4424 * C9711 + C3328 * C9712 + C6501 * C9713) * C28633) *
                        C28749 * C28750 * C81 -
                    (((C313 * C958 + C1135 + C1135 + C28558 * C1130) * C9713 +
                      C6501 * C9712 + C3328 * C9711) *
                         C28633 +
                     (C339 * C9713 + C338 * C9712 + C337 * C9711) * C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C28512 * C18726 +
                     (C1622 * C961 + C2777 + C2777 + C1346 * C1133 +
                      C1623 * C2532 + C2776 + C2776 + C1347 * C2770 +
                      C1624 * C2530 + C2775 + C2775 + C1348 * C2769) *
                         C28512 * C28633) *
                        C28749 * C28750 * C81 -
                    ((C1624 * C2529 + C2772 + C2772 + C1348 * C2767 +
                      C1623 * C2531 + C2773 + C2773 + C1347 * C2768 +
                      C1622 * C960 + C2774 + C2774 + C1346 * C1132) *
                         C28512 * C28633 +
                     (C1652 + C1651 + C1650) * C28512 * C18726) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[42] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C28749 * C28750 * C81 -
          (((C18832 * C1008 + C28633 * C1172 + C18831 * C152 + C18726 * C376) *
                C28558 +
            (C18832 * C958 + C28633 * C1050 + C18831 * C94 + C18726 * C215) *
                C148) *
               C9713 +
           ((C19019 + C19018) * C28558 + (C18855 + C18854) * C148) * C9712 +
           ((C19017 + C19016) * C28558 + (C18851 + C18850) * C148) * C9711) *
              C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C18831 * C589 + C18726 * C681 + C18832 * C2532 + C28633 * C2658) *
               C1425 +
           (C18831 * C639 + C18726 * C803 + C18832 * C2600 + C28633 * C2830) *
               C1347 +
           (C18831 * C1353 + C18726 * C1501 + C18832 * C2530 + C28633 * C2656) *
               C1426 +
           (C18831 * C1427 + C18726 * C1702 + C18832 * C2599 + C28633 * C2829) *
               C1348) *
              C28512 * C28749 * C28750 * C81 -
          ((C18832 * C2597 + C28633 * C2827 + C18831 * C1428 + C18726 * C1703) *
               C1348 +
           (C18832 * C2529 + C28633 * C2655 + C18831 * C1354 + C18726 * C1502) *
               C1426 +
           (C18832 * C2598 + C28633 * C2828 + C18831 * C638 + C18726 * C802) *
               C1347 +
           (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
               C1425 +
           (C19017 + C19016) * C1346 + (C18851 + C18850) * C1424) *
              C28512 * C28749 * C28750 * C82)) /
            (p * q * std::sqrt(p + q));
    d2eezx[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C18831 +
                     (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                      C9712 * C428 + C9721 * C214 + C9713 * C429) *
                         C18726 +
                     (C9717 * C961 + C9711 * C965 + C9719 * C960 +
                      C9712 * C964 + C9721 * C959 + C9713 * C963) *
                         C18832 +
                     (C9717 * C1053 + C9711 * C1213 + C9719 * C1052 +
                      C9712 * C1212 + C9721 * C1051 + C9713 * C1211) *
                         C28633) *
                        C28558 * C28749 * C28750 * C81 -
                    ((C9721 * C1050 + C9713 * C1210 + C9719 * C1051 +
                      C9712 * C1211 + C9717 * C1052 + C9711 * C1212) *
                         C28633 +
                     (C9721 * C958 + C9713 * C962 + C9719 * C959 +
                      C9712 * C963 + C9717 * C960 + C9711 * C964) *
                         C18832 +
                     (C9721 * C215 + C9713 * C430 + C9719 * C214 +
                      C9712 * C429 + C9717 * C213 + C9711 * C428) *
                         C18726 +
                     (C9721 * C94 + C9713 * C99 + C9719 * C93 + C9712 * C98 +
                      C9717 * C92 + C9711 * C97) *
                         C18831) *
                        C28558 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C18831 +
                      (C11223 * C212 + C28512 * C427) * C18726 +
                      C13511 * C18832 + C13698 * C28633) *
                         C1346 +
                     (C11708 * C18831 + C11835 * C18726 + C12953 * C18832 +
                      C13131 * C28633) *
                         C1347 +
                     (C11710 * C18831 + C11836 * C18726 + C17890 * C18832 +
                      C18060 * C28633) *
                         C1348) *
                        C28749 * C28750 * C81 -
                    (((C11223 * C2655 + C28512 * C2881) * C28633 +
                      (C11223 * C2529 + C28512 * C2533) * C18832 +
                      (C11223 * C1502 + C28512 * C1768) * C18726 +
                      (C11223 * C1354 + C28512 * C1357) * C18831) *
                         C1348 +
                     ((C11223 * C2657 + C28512 * C2883) * C28633 +
                      (C11223 * C2531 + C28512 * C2535) * C18832 +
                      (C11223 * C680 + C28512 * C840) * C18726 +
                      (C11223 * C588 + C28512 * C592) * C18831) *
                         C1347 +
                     ((C11223 * C1052 + C28512 * C1212) * C28633 +
                      (C11223 * C960 + C28512 * C964) * C18832 +
                      (C11223 * C213 + C28512 * C428) * C18726 +
                      (C11223 * C92 + C28512 * C97) * C18831) *
                         C1346) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezy[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C18831 +
                      (C148 * C212 + C28558 * C466) * C18726 + C4222 * C18832 +
                      C4600 * C28633) *
                         C9711 +
                     (C19120 + C19121 + C19122 + C19123) * C9712 +
                     (C19124 + C19125 + C19126 + C19127) * C9713) *
                        C28749 * C28750 * C81 -
                    (((C148 * C1050 + C28558 * C1248) * C28633 +
                      (C148 * C958 + C28558 * C1008) * C18832 + C483 * C18726 +
                      C176 * C18831) *
                         C9713 +
                     (C19127 + C19126 + C19125 + C19124) * C9712 +
                     (C19123 + C19122 + C19121 + C19120) * C9711) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
                      C1426 * C1353 + C1348 * C1427) *
                         C18831 +
                     (C1424 * C212 + C1346 * C466 + C1425 * C681 +
                      C1347 * C879 + C1426 * C1501 + C1348 * C1820) *
                         C18726 +
                     (C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                      C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                         C18832 +
                     (C1424 * C1053 + C1346 * C1251 + C1425 * C2658 +
                      C1347 * C2938 + C1426 * C2656 + C1348 * C2937) *
                         C28633) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C1426 * C2655 + C1348 * C2935 + C1425 * C2657 +
                      C1347 * C2936 + C1424 * C1052 + C1346 * C1250) *
                         C28633 +
                     (C1426 * C2529 + C1348 * C2597 + C1425 * C2531 +
                      C1347 * C2598 + C1424 * C960 + C1346 * C1010) *
                         C18832 +
                     (C1832 + C1831 + C1830) * C18726 +
                     (C1448 + C1447 + C1446) * C18831) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eezz[42] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C28558 * C9711 +
                     (C19204 + C19205) * C28558 * C9712 +
                     (C19206 + C19207) * C28558 * C9713) *
                        C28749 * C28750 * C81 -
                    ((C19178 * C958 + C19194 + C19194 + C28633 * C1286 +
                      C19177 * C94 + C19195 + C19195 + C18726 * C524) *
                         C28558 * C9713 +
                     (C19207 + C19206) * C28558 * C9712 +
                     (C19205 + C19204) * C28558 * C9711) *
                        C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C1346 +
                     (C19177 * C589 + C19663 + C19663 + C18726 * C917 +
                      C19178 * C2532 + C19662 + C19662 + C28633 * C2992) *
                         C1347 +
                     (C19177 * C1353 + C20624 + C20624 + C18726 * C1882 +
                      C19178 * C2530 + C20625 + C20625 + C28633 * C2991) *
                         C1348) *
                        C28512 * C28749 * C28750 * C81 -
                    ((C19178 * C2529 + C20626 + C20626 + C28633 * C2989 +
                      C19177 * C1354 + C20627 + C20627 + C18726 * C1883) *
                         C1348 +
                     (C19178 * C2531 + C19660 + C19660 + C28633 * C2990 +
                      C19177 * C588 + C19661 + C19661 + C18726 * C916) *
                         C1347 +
                     (C19205 + C19204) * C1346) *
                        C28512 * C28749 * C28750 * C82)) /
                      (p * q * std::sqrt(p + q));
    d2eexx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C9716 * C961 + C10777 + C10777 + C9711 * C969 + C9718 * C960 +
            C10776 + C10776 + C9712 * C968 + C9720 * C959 + C10775 + C10775 +
            C9713 * C967) *
               C28633) *
              C28558 * C28749 * C583 -
          ((C9720 * C5783 + C10772 + C10772 + C9713 * C5785 + C9718 * C2531 +
            C10773 + C10773 + C9712 * C2539 + C9716 * C2532 + C10774 + C10774 +
            C9711 * C2540) *
               C28633 +
           (C10282 + C10281 + C10280) * C18726) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C20678 + C20679) * C1347 + (C20680 + C20681) * C1348) *
              C28749 * C583 -
          (((C11222 * C11950 + C11954 + C11954 + C28512 * C11952) * C28633 +
            C11573 * C18726) *
               C1348 +
           (C20681 + C20680) * C1347 + (C20679 + C20678) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C9717 +
                      (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 +
                      C173 * C9712 + C174 * C9721 + C175 * C9713) *
                         C18726 +
                     (C4222 * C9717 + C4223 * C9711 + C3130 * C9719 +
                      C3131 * C9712 + C6319 * C9721 + C6320 * C9713) *
                         C28633) *
                        C28749 * C583 -
                    (((C148 * C5784 + C28558 * C5843) * C9713 +
                      (C148 * C5783 + C28558 * C5842) * C9721 +
                      (C148 * C2535 + C28558 * C2602) * C9712 +
                      (C148 * C2531 + C28558 * C2598) * C9719 +
                      (C148 * C2536 + C28558 * C2604) * C9711 +
                      (C148 * C2532 + C28558 * C2600) * C9717) *
                         C28633 +
                     ((C148 * C591 + C28558 * C641) * C9713 +
                      (C148 * C587 + C28558 * C637) * C9721 +
                      (C148 * C592 + C28558 * C642) * C9712 +
                      (C148 * C588 + C28558 * C638) * C9719 +
                      (C148 * C593 + C28558 * C643) * C9711 +
                      (C148 * C589 + C28558 * C639) * C9717) *
                         C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C1424 * C91 + C1346 * C149 + C1425 * C589 +
                       C1347 * C639 + C1426 * C1353 + C1348 * C1427) *
                          C11223 +
                      (C1424 * C96 + C1346 * C154 + C1425 * C593 +
                       C1347 * C643 + C1426 * C1356 + C1348 * C1430) *
                          C28512) *
                         C18726 +
                     ((C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                       C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                          C11223 +
                      (C1424 * C965 + C1346 * C1015 + C1425 * C2536 +
                       C1347 * C2604 + C1426 * C2534 + C1348 * C2603) *
                          C28512) *
                         C28633) *
                        C28749 * C583 -
                    (((C1426 * C11951 + C1348 * C11992 + C1425 * C2534 +
                       C1347 * C2603 + C1424 * C2536 + C1346 * C2604) *
                          C28512 +
                      (C1426 * C11950 + C1348 * C11991 + C1425 * C2530 +
                       C1347 * C2599 + C1424 * C2532 + C1346 * C2600) *
                          C11223) *
                         C28633 +
                     ((C1426 * C1954 + C1348 * C2032 + C1425 * C1356 +
                       C1347 * C1430 + C1424 * C593 + C1346 * C643) *
                          C28512 +
                      (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 +
                       C1347 * C1427 + C1424 * C589 + C1346 * C639) *
                          C11223) *
                         C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eexz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C28749 * C583 -
          ((C18832 * C5784 + C28633 * C5895 + C18831 * C591 + C18726 * C683) *
               C9713 +
           (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
               C9721 +
           (C18832 * C2535 + C28633 * C2661 + C18831 * C592 + C18726 * C684) *
               C9712 +
           (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
               C9719 +
           (C18832 * C2536 + C28633 * C2662 + C18831 * C593 + C18726 * C685) *
               C9711 +
           (C18832 * C2532 + C28633 * C2658 + C18831 * C589 + C18726 * C681) *
               C9717) *
              C28558 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C20798 + C20799) * C11223 + (C20800 + C20801) * C28512) * C1347 +
           ((C20802 + C20803) * C11223 + (C20804 + C20805) * C28512) * C1348) *
              C28749 * C583 -
          (((C18832 * C11951 + C28633 * C12028 + C18831 * C1954 +
             C18726 * C2086) *
                C28512 +
            (C18832 * C11950 + C28633 * C12027 + C18831 * C1952 +
             C18726 * C2084) *
                C11223) *
               C1348 +
           ((C20805 + C20804) * C28512 + (C20803 + C20802) * C11223) * C1347 +
           ((C20801 + C20800) * C28512 + (C20799 + C20798) * C11223) * C1346) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C148 +
            (C9717 * C149 + C9711 * C274 + C9719 * C150 + C9712 * C275 +
             C9721 * C151 + C9713 * C276) *
                C28558) *
               C18726 +
           ((C9717 * C961 + C9711 * C965 + C9719 * C960 + C9712 * C964 +
             C9721 * C959 + C9713 * C963) *
                C148 +
            (C9717 * C1011 + C9711 * C1095 + C9719 * C1010 + C9712 * C1094 +
             C9721 * C1009 + C9713 * C1093) *
                C28558) *
               C28633) *
              C28749 * C583 -
          (((C9721 * C5842 + C9713 * C5946 + C9719 * C2598 + C9712 * C2715 +
             C9717 * C2600 + C9711 * C2716) *
                C28558 +
            (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 + C9712 * C2535 +
             C9717 * C2532 + C9711 * C2536) *
                C148) *
               C28633 +
           ((C10456 + C10455 + C10454) * C28558 +
            (C10453 + C10452 + C10451) * C148) *
               C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C1424 +
            (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
            C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
               C18726 +
           (C13511 * C1424 + C13512 * C1346 + C12953 * C1425 + C12954 * C1347 +
            C17890 * C1426 + C17891 * C1348) *
               C28633) *
              C28749 * C583 -
          (((C11223 * C11991 + C28512 * C12063) * C1348 +
            (C11223 * C11950 + C28512 * C11951) * C1426 + C17891 * C1347 +
            C17890 * C1425 + C12954 * C1346 + C12953 * C1424) *
               C28633 +
           (C11713 * C1348 + C11712 * C1426 + C11711 * C1347 + C11710 * C1425 +
            C11709 * C1346 + C11708 * C1424) *
               C18726) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 +
                      C337 * C9712 + C338 * C9713) *
                         C18726 +
                     (C4424 * C9711 + C3328 * C9712 + C6501 * C9713) * C28633) *
                        C28749 * C583 -
                    (((C313 * C5783 + C7005 + C7005 + C28558 * C5997) * C9713 +
                      (C313 * C2531 + C3862 + C3862 + C28558 * C2768) * C9712 +
                      (C313 * C2532 + C3863 + C3863 + C28558 * C2770) * C9711) *
                         C28633 +
                     ((C313 * C587 + C764 + C764 + C28558 * C759) * C9713 +
                      (C313 * C588 + C765 + C765 + C28558 * C760) * C9712 +
                      (C313 * C589 + C766 + C766 + C28558 * C761) * C9711) *
                         C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C28512 * C18726 +
                     (C1622 * C961 + C2777 + C2777 + C1346 * C1133 +
                      C1623 * C2532 + C2776 + C2776 + C1347 * C2770 +
                      C1624 * C2530 + C2775 + C2775 + C1348 * C2769) *
                         C28512 * C28633) *
                        C28749 * C583 -
                    ((C1624 * C11950 + C20906 + C20906 + C1348 * C12098 +
                      C1623 * C2530 + C20907 + C20907 + C1347 * C2769 +
                      C1622 * C2532 + C20908 + C20908 + C1346 * C2770) *
                         C28512 * C28633 +
                     (C1624 * C1952 + C2239 + C2239 + C1348 * C2234 +
                      C1623 * C1353 + C2240 + C2240 + C1347 * C1625 +
                      C1622 * C589 + C2241 + C2241 + C1346 * C761) *
                         C28512 * C18726) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[43] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C28749 * C583 -
          (((C18832 * C5842 + C28633 * C6054 + C18831 * C637 + C18726 * C801) *
                C28558 +
            (C18832 * C5783 + C28633 * C5894 + C18831 * C587 + C18726 * C679) *
                C148) *
               C9713 +
           ((C18832 * C2598 + C28633 * C2828 + C18831 * C638 + C18726 * C802) *
                C28558 +
            (C18832 * C2531 + C28633 * C2657 + C18831 * C588 + C18726 * C680) *
                C148) *
               C9712 +
           ((C18832 * C2600 + C28633 * C2830 + C18831 * C639 + C18726 * C803) *
                C28558 +
            (C18832 * C2532 + C28633 * C2658 + C18831 * C589 + C18726 * C681) *
                C148) *
               C9711) *
              C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C20798 + C20799) * C1425 + (C20967 + C20968) * C1347 +
           (C20802 + C20803) * C1426 + (C20969 + C20970) * C1348) *
              C28512 * C28749 * C583 -
          ((C18832 * C11991 + C28633 * C12137 + C18831 * C2030 +
            C18726 * C2292) *
               C1348 +
           (C18832 * C11950 + C28633 * C12027 + C18831 * C1952 +
            C18726 * C2084) *
               C1426 +
           (C20970 + C20969) * C1347 + (C20803 + C20802) * C1425 +
           (C20968 + C20967) * C1346 + (C20799 + C20798) * C1424) *
              C28512 * C28749 * C584) *
         C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C18831 +
                     (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                      C9712 * C428 + C9721 * C214 + C9713 * C429) *
                         C18726 +
                     (C9717 * C961 + C9711 * C965 + C9719 * C960 +
                      C9712 * C964 + C9721 * C959 + C9713 * C963) *
                         C18832 +
                     (C9717 * C1053 + C9711 * C1213 + C9719 * C1052 +
                      C9712 * C1212 + C9721 * C1051 + C9713 * C1211) *
                         C28633) *
                        C28558 * C28749 * C583 -
                    ((C9721 * C5894 + C9713 * C6105 + C9719 * C2657 +
                      C9712 * C2883 + C9717 * C2658 + C9711 * C2884) *
                         C28633 +
                     (C9721 * C5783 + C9713 * C5784 + C9719 * C2531 +
                      C9712 * C2535 + C9717 * C2532 + C9711 * C2536) *
                         C18832 +
                     (C10621 + C10620 + C10619) * C18726 +
                     (C10453 + C10452 + C10451) * C18831) *
                        C28558 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C18831 +
                      (C11223 * C212 + C28512 * C427) * C18726 +
                      C13511 * C18832 + C13698 * C28633) *
                         C1346 +
                     (C21021 + C21022 + C21023 + C21024) * C1347 +
                     (C21025 + C21026 + C21027 + C21028) * C1348) *
                        C28749 * C583 -
                    (((C11223 * C12027 + C28512 * C12172) * C28633 +
                      (C11223 * C11950 + C28512 * C11951) * C18832 +
                      C11837 * C18726 + C11712 * C18831) *
                         C1348 +
                     (C21028 + C21027 + C21026 + C21025) * C1347 +
                     (C21024 + C21023 + C21022 + C21021) * C1346) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezy[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C148 * C91 + C28558 * C149) * C18831 +
                      (C148 * C212 + C28558 * C466) * C18726 + C4222 * C18832 +
                      C4600 * C28633) *
                         C9711 +
                     (C19120 + C19121 + C19122 + C19123) * C9712 +
                     (C19124 + C19125 + C19126 + C19127) * C9713) *
                        C28749 * C583 -
                    (((C148 * C5894 + C28558 * C6156) * C28633 +
                      (C148 * C5783 + C28558 * C5842) * C18832 +
                      (C148 * C679 + C28558 * C877) * C18726 +
                      (C148 * C587 + C28558 * C637) * C18831) *
                         C9713 +
                     ((C148 * C2657 + C28558 * C2936) * C28633 +
                      (C148 * C2531 + C28558 * C2598) * C18832 +
                      (C148 * C680 + C28558 * C878) * C18726 +
                      (C148 * C588 + C28558 * C638) * C18831) *
                         C9712 +
                     ((C148 * C2658 + C28558 * C2938) * C28633 +
                      (C148 * C2532 + C28558 * C2600) * C18832 +
                      (C148 * C681 + C28558 * C879) * C18726 +
                      (C148 * C589 + C28558 * C639) * C18831) *
                         C9711) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
                      C1426 * C1353 + C1348 * C1427) *
                         C18831 +
                     (C1424 * C212 + C1346 * C466 + C1425 * C681 +
                      C1347 * C879 + C1426 * C1501 + C1348 * C1820) *
                         C18726 +
                     (C1424 * C961 + C1346 * C1011 + C1425 * C2532 +
                      C1347 * C2600 + C1426 * C2530 + C1348 * C2599) *
                         C18832 +
                     (C1424 * C1053 + C1346 * C1251 + C1425 * C2658 +
                      C1347 * C2938 + C1426 * C2656 + C1348 * C2937) *
                         C28633) *
                        C28512 * C28749 * C583 -
                    ((C1426 * C12027 + C1348 * C12207 + C1425 * C2656 +
                      C1347 * C2937 + C1424 * C2658 + C1346 * C2938) *
                         C28633 +
                     (C1426 * C11950 + C1348 * C11991 + C1425 * C2530 +
                      C1347 * C2599 + C1424 * C2532 + C1346 * C2600) *
                         C18832 +
                     (C1426 * C2084 + C1348 * C2414 + C1425 * C1501 +
                      C1347 * C1820 + C1424 * C681 + C1346 * C879) *
                         C18726 +
                     (C1426 * C1952 + C1348 * C2030 + C1425 * C1353 +
                      C1347 * C1427 + C1424 * C589 + C1346 * C639) *
                         C18831) *
                        C28512 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezz[43] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C28558 * C9711 +
                     (C19204 + C19205) * C28558 * C9712 +
                     (C19206 + C19207) * C28558 * C9713) *
                        C28749 * C583 -
                    ((C19178 * C5783 + C19658 + C19658 + C28633 * C6207 +
                      C19177 * C587 + C19659 + C19659 + C18726 * C915) *
                         C28558 * C9713 +
                     (C19178 * C2531 + C19660 + C19660 + C28633 * C2990 +
                      C19177 * C588 + C19661 + C19661 + C18726 * C916) *
                         C28558 * C9712 +
                     (C19178 * C2532 + C19662 + C19662 + C28633 * C2992 +
                      C19177 * C589 + C19663 + C19663 + C18726 * C917) *
                         C28558 * C9711) *
                        C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C1346 +
                     (C21147 + C21148) * C1347 + (C21149 + C21150) * C1348) *
                        C28512 * C28749 * C583 -
                    ((C19178 * C11950 + C21137 + C21137 + C28633 * C12242 +
                      C19177 * C1952 + C21138 + C21138 + C18726 * C2466) *
                         C1348 +
                     (C21150 + C21149) * C1347 + (C21148 + C21147) * C1346) *
                        C28512 * C28749 * C584) *
                   C28751) /
                      (p * q * std::sqrt(p + q));
    d2eexx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C9716 * C91 + C9723 + C9723 + C9711 * C101 + C9718 * C92 + C9724 +
            C9724 + C9712 * C102 + C9720 * C93 + C9725 + C9725 + C9713 * C103) *
               C18726 +
           (C19729 + C19730 + C19731) * C28633) *
              C28558 * C956 -
          ((C9720 * C3052 + C19720 + C19720 + C9713 * C3058 + C9718 * C3051 +
            C19721 + C19721 + C9712 * C3057 + C9716 * C3050 + C19722 + C19722 +
            C9711 * C3056) *
               C28633 +
           (C19731 + C19730 + C19729) * C18726) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11222 * C91 + C11225 + C11225 + C28512 * C101) * C18726 +
            C13318 * C28633) *
               C1346 +
           (C20678 + C20679) * C1347 + (C20680 + C20681) * C1348) *
              C956 -
          (((C11222 * C12754 + C12763 + C12763 + C28512 * C12756) * C28633 +
            C17722 * C18726) *
               C1348 +
           (C12769 * C28633 + C12768 * C18726) * C1347 +
           (C13319 * C28633 + C13318 * C18726) * C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C9717 +
            (C148 * C96 + C28558 * C154) * C9711 + C172 * C9719 + C173 * C9712 +
            C174 * C9721 + C175 * C9713) *
               C18726 +
           (C19782 + C19783 + C19784 + C19785 + C19786 + C19787) * C28633) *
              C956 -
          (((C148 * C3055 + C28558 * C3120) * C9713 +
            (C148 * C3052 + C28558 * C3117) * C9721 + C3133 * C9712 +
            C3132 * C9719 + C4225 * C9711 + C4224 * C9717) *
               C28633 +
           (C19787 + C19786 + C19785 + C19784 + C19783 + C19782) * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
             C1426 * C1353 + C1348 * C1427) *
                C11223 +
            (C1424 * C96 + C1346 * C154 + C1425 * C593 + C1347 * C643 +
             C1426 * C1356 + C1348 * C1430) *
                C28512) *
               C18726 +
           ((C21263 + C21264 + C21265) * C11223 +
            (C21266 + C21267 + C21268) * C28512) *
               C28633) *
              C956 -
          (((C1426 * C12755 + C1348 * C12822 + C1425 * C3642 + C1347 * C3700 +
             C1424 * C3053 + C1346 * C3118) *
                C28512 +
            (C1426 * C12754 + C1348 * C12821 + C1425 * C3640 + C1347 * C3698 +
             C1424 * C3050 + C1346 * C3115) *
                C11223) *
               C28633 +
           ((C21268 + C21267 + C21266) * C28512 +
            (C21265 + C21264 + C21263) * C11223) *
               C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eexz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C9717 +
           (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
               C9711 +
           (C18850 + C18851) * C9719 + (C18852 + C18853) * C9712 +
           (C18854 + C18855) * C9721 + (C18856 + C18857) * C9713) *
              C28558 * C956 -
          ((C18832 * C3055 + C28633 * C3191 + C18831 * C963 + C18726 * C1055) *
               C9713 +
           (C18832 * C3052 + C28633 * C3188 + C18831 * C959 + C18726 * C1051) *
               C9721 +
           (C18832 * C3054 + C28633 * C3190 + C18831 * C964 + C18726 * C1056) *
               C9712 +
           (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
               C9719 +
           (C18832 * C3053 + C28633 * C3189 + C18831 * C965 + C18726 * C1057) *
               C9711 +
           (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
               C9717) *
              C28558 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C11223 +
            (C18831 * C96 + C18726 * C217 + C18832 * C965 + C28633 * C1057) *
                C28512) *
               C1346 +
           ((C20798 + C20799) * C11223 + (C20800 + C20801) * C28512) * C1347 +
           ((C20802 + C20803) * C11223 + (C20804 + C20805) * C28512) * C1348) *
              C956 -
          (((C18832 * C12755 + C28633 * C12874 + C18831 * C2534 +
             C18726 * C2660) *
                C28512 +
            (C18832 * C12754 + C28633 * C12873 + C18831 * C2530 +
             C18726 * C2656) *
                C11223) *
               C1348 +
           ((C18832 * C3642 + C28633 * C3754 + C18831 * C2536 +
             C18726 * C2662) *
                C28512 +
            (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 +
             C18726 * C2658) *
                C11223) *
               C1347 +
           ((C18832 * C3053 + C28633 * C3189 + C18831 * C965 + C18726 * C1057) *
                C28512 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C11223) *
               C1346) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyx[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
             C9721 * C93 + C9713 * C98) *
                C148 +
            (C9717 * C149 + C9711 * C274 + C9719 * C150 + C9712 * C275 +
             C9721 * C151 + C9713 * C276) *
                C28558) *
               C18726 +
           ((C19900 + C19901 + C19902) * C148 +
            (C19903 + C19904 + C19905) * C28558) *
               C28633) *
              C956 -
          (((C9721 * C3117 + C9713 * C3262 + C9719 * C3116 + C9712 * C3261 +
             C9717 * C3115 + C9711 * C3260) *
                C28558 +
            (C9721 * C3052 + C9713 * C3055 + C9719 * C3051 + C9712 * C3054 +
             C9717 * C3050 + C9711 * C3053) *
                C148) *
               C28633 +
           ((C19905 + C19904 + C19903) * C28558 +
            (C19902 + C19901 + C19900) * C148) *
               C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C11223 * C91 + C28512 * C96) * C1424 +
            (C11223 * C149 + C28512 * C274) * C1346 + C11708 * C1425 +
            C11709 * C1347 + C11710 * C1426 + C11711 * C1348) *
               C18726 +
           (C21369 + C21370 + C21371 + C21372 + C21373 + C21374) * C28633) *
              C956 -
          (((C11223 * C12821 + C28512 * C12943) * C1348 +
            (C11223 * C12754 + C28512 * C12755) * C1426 + C12956 * C1347 +
            C12955 * C1425 + C13514 * C1346 + C13513 * C1424) *
               C28633 +
           (C21374 + C21373 + C21372 + C21371 + C21370 + C21369) * C18726) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eeyy[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C313 * C91 + C320 + C320 + C28558 * C314) * C9711 +
                      C337 * C9712 + C338 * C9713) *
                         C18726 +
                     (C19956 + C19957 + C19958) * C28633) *
                        C956 -
                    (((C313 * C3052 + C3323 + C3323 + C28558 * C3315) * C9713 +
                      C3329 * C9712 + C4425 * C9711) *
                         C28633 +
                     (C19958 + C19957 + C19956) * C18726) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C1622 * C91 + C1629 + C1629 + C1346 * C314 +
                      C1623 * C589 + C1630 + C1630 + C1347 * C761 +
                      C1624 * C1353 + C1631 + C1631 + C1348 * C1625) *
                         C28512 * C18726 +
                     (C21440 + C21441 + C21442) * C28512 * C28633) *
                        C956 -
                    ((C1624 * C12754 + C21431 + C21431 + C1348 * C13006 +
                      C1623 * C3640 + C21432 + C21432 + C1347 * C3858 +
                      C1622 * C3050 + C21433 + C21433 + C1346 * C3313) *
                         C28512 * C28633 +
                     (C21442 + C21441 + C21440) * C28512 * C18726) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eeyz[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
                C148 +
            (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
                C28558) *
               C9711 +
           ((C18850 + C18851) * C148 + (C19016 + C19017) * C28558) * C9712 +
           ((C18854 + C18855) * C148 + (C19018 + C19019) * C28558) * C9713) *
              C956 -
          (((C18832 * C3117 + C28633 * C3381 + C18831 * C1009 +
             C18726 * C1173) *
                C28558 +
            (C18832 * C3052 + C28633 * C3188 + C18831 * C959 + C18726 * C1051) *
                C148) *
               C9713 +
           ((C18832 * C3116 + C28633 * C3380 + C18831 * C1010 +
             C18726 * C1174) *
                C28558 +
            (C18832 * C3051 + C28633 * C3187 + C18831 * C960 + C18726 * C1052) *
                C148) *
               C9712 +
           ((C18832 * C3115 + C28633 * C3379 + C18831 * C1011 +
             C18726 * C1175) *
                C28558 +
            (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
                C148) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C18831 * C91 + C18726 * C212 + C18832 * C961 + C28633 * C1053) *
               C1424 +
           (C18831 * C149 + C18726 * C373 + C18832 * C1011 + C28633 * C1175) *
               C1346 +
           (C20798 + C20799) * C1425 + (C20967 + C20968) * C1347 +
           (C20802 + C20803) * C1426 + (C20969 + C20970) * C1348) *
              C28512 * C956 -
          ((C18832 * C12821 + C28633 * C13061 + C18831 * C2599 +
            C18726 * C2829) *
               C1348 +
           (C18832 * C12754 + C28633 * C12873 + C18831 * C2530 +
            C18726 * C2656) *
               C1426 +
           (C18832 * C3698 + C28633 * C3914 + C18831 * C2600 + C18726 * C2830) *
               C1347 +
           (C18832 * C3640 + C28633 * C3752 + C18831 * C2532 + C18726 * C2658) *
               C1425 +
           (C18832 * C3115 + C28633 * C3379 + C18831 * C1011 + C18726 * C1175) *
               C1346 +
           (C18832 * C3050 + C28633 * C3186 + C18831 * C961 + C18726 * C1053) *
               C1424) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezx[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C9717 * C91 + C9711 * C96 + C9719 * C92 + C9712 * C97 +
                      C9721 * C93 + C9713 * C98) *
                         C18831 +
                     (C9717 * C212 + C9711 * C427 + C9719 * C213 +
                      C9712 * C428 + C9721 * C214 + C9713 * C429) *
                         C18726 +
                     (C19900 + C19901 + C19902) * C18832 +
                     (C20065 + C20066 + C20067) * C28633) *
                        C28558 * C956 -
                    ((C9721 * C3188 + C9713 * C3443 + C9719 * C3187 +
                      C9712 * C3442 + C9717 * C3186 + C9711 * C3441) *
                         C28633 +
                     (C9721 * C3052 + C9713 * C3055 + C9719 * C3051 +
                      C9712 * C3054 + C9717 * C3050 + C9711 * C3053) *
                         C18832 +
                     (C20067 + C20066 + C20065) * C18726 +
                     (C19902 + C19901 + C19900) * C18831) *
                        C28558 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   ((((C11223 * C91 + C28512 * C96) * C18831 +
                      (C11223 * C212 + C28512 * C427) * C18726 +
                      C13511 * C18832 + C13698 * C28633) *
                         C1346 +
                     (C21021 + C21022 + C21023 + C21024) * C1347 +
                     (C21025 + C21026 + C21027 + C21028) * C1348) *
                        C956 -
                    (((C11223 * C12873 + C28512 * C13121) * C28633 +
                      (C11223 * C12754 + C28512 * C12755) * C18832 +
                      C18060 * C18726 + C17890 * C18831) *
                         C1348 +
                     (C13132 * C28633 + C12955 * C18832 + C13131 * C18726 +
                      C12953 * C18831) *
                         C1347 +
                     (C13699 * C28633 + C13513 * C18832 + C13698 * C18726 +
                      C13511 * C18831) *
                         C1346) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
    d2eezy[44] +=
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C148 * C91 + C28558 * C149) * C18831 +
            (C148 * C212 + C28558 * C466) * C18726 + C4222 * C18832 +
            C4600 * C28633) *
               C9711 +
           (C19120 + C19121 + C19122 + C19123) * C9712 +
           (C19124 + C19125 + C19126 + C19127) * C9713) *
              C956 -
          (((C148 * C3188 + C28558 * C3496) * C28633 +
            (C148 * C3052 + C28558 * C3117) * C18832 + C6673 * C18726 +
            C6319 * C18831) *
               C9713 +
           (C3507 * C28633 + C3132 * C18832 + C3506 * C18726 + C3130 * C18831) *
               C9712 +
           (C4601 * C28633 + C4224 * C18832 + C4600 * C18726 + C4222 * C18831) *
               C9711) *
              C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1424 * C91 + C1346 * C149 + C1425 * C589 + C1347 * C639 +
            C1426 * C1353 + C1348 * C1427) *
               C18831 +
           (C1424 * C212 + C1346 * C466 + C1425 * C681 + C1347 * C879 +
            C1426 * C1501 + C1348 * C1820) *
               C18726 +
           (C21263 + C21264 + C21265) * C18832 +
           (C21599 + C21600 + C21601) * C28633) *
              C28512 * C956 -
          ((C1426 * C12873 + C1348 * C13184 + C1425 * C3752 + C1347 * C4018 +
            C1424 * C3186 + C1346 * C3494) *
               C28633 +
           (C1426 * C12754 + C1348 * C12821 + C1425 * C3640 + C1347 * C3698 +
            C1424 * C3050 + C1346 * C3115) *
               C18832 +
           (C21601 + C21600 + C21599) * C18726 +
           (C21265 + C21264 + C21263) * C18831) *
              C28512 * C957) *
         C28750 * C28751) /
            (p * q * std::sqrt(p + q));
    d2eezz[44] += (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C28558 * C9711 +
                     (C19204 + C19205) * C28558 * C9712 +
                     (C19206 + C19207) * C28558 * C9713) *
                        C956 -
                    ((C19178 * C3052 + C20168 + C20168 + C28633 * C3564 +
                      C19177 * C959 + C20169 + C20169 + C18726 * C1287) *
                         C28558 * C9713 +
                     (C19178 * C3051 + C20170 + C20170 + C28633 * C3563 +
                      C19177 * C960 + C20171 + C20171 + C18726 * C1288) *
                         C28558 * C9712 +
                     (C19178 * C3050 + C20172 + C20172 + C28633 * C3562 +
                      C19177 * C961 + C20173 + C20173 + C18726 * C1289) *
                         C28558 * C9711) *
                        C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q)) -
                  (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
                   (((C19177 * C91 + C19180 + C19180 + C18726 * C521 +
                      C19178 * C961 + C19181 + C19181 + C28633 * C1289) *
                         C1346 +
                     (C21147 + C21148) * C1347 + (C21149 + C21150) * C1348) *
                        C28512 * C956 -
                    ((C19178 * C12754 + C21652 + C21652 + C28633 * C13235 +
                      C19177 * C2530 + C21653 + C21653 + C18726 * C2991) *
                         C1348 +
                     (C19178 * C3640 + C21654 + C21654 + C28633 * C4070 +
                      C19177 * C2532 + C21655 + C21655 + C18726 * C2992) *
                         C1347 +
                     (C19178 * C3050 + C20172 + C20172 + C28633 * C3562 +
                      C19177 * C961 + C20173 + C20173 + C18726 * C1289) *
                         C1346) *
                        C28512 * C957) *
                   C28750 * C28751) /
                      (p * q * std::sqrt(p + q));
}
