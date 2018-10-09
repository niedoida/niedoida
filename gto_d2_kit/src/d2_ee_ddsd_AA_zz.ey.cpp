/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "gto_d2_kit/d2_ee_ddsd_AA_zz.hpp"
#include <cmath>
/*

*/
#pragma GCC optimize("O0")
namespace {
    const double Pi = M_PI;
}
#pragma GCC optimize("O0")

void second_derivative_ee_2202_11_33(const double ae,
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
                                     double* const d2ee)
{
    const double p = ae + be;
    const double q = ce + de;
    const double xP = (ae * xA + be * xB) / p;
    const double yP = (ae * yA + be * yB) / p;
    const double zP = (ae * zA + be * zB) / p;
    const double xQ = (ce * xC + de * xD) / q;
    const double yQ = (ce * yC + de * yD) / q;
    const double zQ = (ce * zC + de * zD) / q;
    const double C31595 = ae + be;
    const double C31594 = ae * be;
    const double C31593 = zA - zB;
    const double C31601 = 0 * be;
    const double C31665 = 0 * ae;
    const double C31656 = 0 * be;
    const double C31654 = 0 * be;
    const double C31744 = 0 * be;
    const double C31819 = p + q;
    const double C31818 = p * q;
    const double C31827 = std::pow(ae, 2);
    const double C31825 = bs[3];
    const double C31824 = zP - zQ;
    const double C31833 = bs[4];
    const double C31831 = xP - xQ;
    const double C31841 = bs[5];
    const double C31850 = bs[6];
    const double C31861 = bs[7];
    const double C31893 = bs[2];
    const double C31965 = yP - yQ;
    const double C115 = bs[0];
    const double C32708 = xA - xB;
    const double C32743 = ce + de;
    const double C32742 = ce * de;
    const double C32741 = xC - xD;
    const double C32755 = yC - yD;
    const double C32769 = zC - zD;
    const double C32793 = yA - yB;
    const double C31602 = std::pow(C31595, 2);
    const double C31637 = 2 * C31595;
    const double C31604 = 2 * C31594;
    const double C31603 = C31594 * C31593;
    const double C32811 = std::pow(C31593, 2);
    const double C32894 = C31593 * be;
    const double C32892 = C31593 * ae;
    const double C31659 = C31593 * C31601;
    const double C31658 = -2 * C31601;
    const double C31657 = C31601 / C31595;
    const double C31676 = C31665 / C31595;
    const double C31669 = C31593 * C31656;
    const double C31668 = -2 * C31656;
    const double C31746 = C31744 / C31595;
    const double C31820 = 2 * C31818;
    const double C31828 = std::pow(C31824, 2);
    const double C31883 = C31824 * ae;
    const double C31843 = std::pow(C31831, 2);
    const double C31975 = std::pow(C31965, 2);
    const double C32711 = C32708 * be;
    const double C32710 = C32708 * ae;
    const double C32709 = std::pow(C32708, 2);
    const double C33018 = 2 * C32743;
    const double C33017 = std::pow(C32743, 2);
    const double C32744 = std::pow(C32741, 2);
    const double C33016 = C32741 * ce;
    const double C32756 = std::pow(C32755, 2);
    const double C33019 = C32755 * ce;
    const double C32770 = std::pow(C32769, 2);
    const double C33020 = C32769 * ce;
    const double C32794 = std::pow(C32793, 2);
    const double C32852 = C32793 * be;
    const double C32850 = C32793 * ae;
    const double C31606 = 2 * C31602;
    const double C31742 = 4 * C31602;
    const double C31655 = C31602 * C31637;
    const double C32723 = std::pow(C31637, -1);
    const double C33012 = std::pow(C31637, -2);
    const double C32812 = C32811 * C31594;
    const double C33023 = std::pow(C32892, 2);
    const double C31672 = C31659 / C31595;
    const double C31671 = ae * C31658;
    const double C31678 = C31669 / C31595;
    const double C31677 = ae * C31668;
    const double C31822 = C31820 / C31819;
    const double C129 =
        ((std::pow(zP - zQ, 2) * bs[2] * std::pow(C31820 / C31819, 2) -
          (bs[1] * C31820) / C31819) *
         std::pow(ae, 2)) /
        C31602;
    const double C116 = -(C31831 * bs[1] * C31820) / C31819;
    const double C243 = -(C31965 * bs[1] * C31820) / C31819;
    const double C348 = -(C31824 * bs[1] * C31820) / C31819;
    const double C31835 = C31828 * C31833;
    const double C31844 = C31828 * C31841;
    const double C31852 = C31828 * C31850;
    const double C31864 = C31828 * C31861;
    const double C31884 = C31841 * C31883;
    const double C31887 = C31833 * C31883;
    const double C31896 = C31825 * C31883;
    const double C31920 = C31850 * C31883;
    const double C31940 = C31861 * C31883;
    const double C122 = (-(bs[1] * C31883 * C31820) / C31819) / C31595;
    const double C33005 = std::pow(C32710, 2);
    const double C32712 = C32709 * C31594;
    const double C33052 = std::pow(C33018, -2);
    const double C33050 = std::pow(C33018, -1);
    const double C32745 = C32744 * C32742;
    const double C32757 = C32756 * C32742;
    const double C32771 = C32770 * C32742;
    const double C32795 = C32794 * C31594;
    const double C33021 = std::pow(C32850, 2);
    const double C31663 = C31601 / C31606;
    const double C31673 = C31656 / C31606;
    const double C31670 = C31654 / C31606;
    const double C31745 = C31595 * C31742;
    const double C33015 = 4 * C31655;
    const double C32813 = C32812 / C31595;
    const double C31680 = 0 - C31672;
    const double C31681 = C31671 / C31655;
    const double C31679 = C31593 * C31671;
    const double C31685 = 0 - C31678;
    const double C31686 = C31677 / C31655;
    const double C31826 = -C31822;
    const double C31834 = std::pow(C31822, 4);
    const double C31851 = std::pow(C31822, 6);
    const double C31892 = std::pow(C31822, 2);
    const double C130 = ((xP - xQ) *
                         (bs[2] * std::pow(C31822, 2) +
                          std::pow(zP - zQ, 2) * bs[3] * std::pow(-C31822, 3)) *
                         std::pow(ae, 2)) /
                        C31602;
    const double C32713 = C32712 / C31595;
    const double C32746 = C32745 / C32743;
    const double C32758 = C32757 / C32743;
    const double C32772 = C32771 / C32743;
    const double C32796 = C32795 / C31595;
    const double C32814 = -C32813;
    const double C31688 = C31680 * ae;
    const double C31687 = C31679 / C31602;
    const double C31695 = C31685 * ae;
    const double C31829 = std::pow(C31826, 3);
    const double C31842 = std::pow(C31826, 5);
    const double C31862 = std::pow(C31826, 7);
    const double C31836 = C31835 * C31834;
    const double C31840 = C31833 * C31834;
    const double C31888 = C31834 * C31887;
    const double C31853 = C31852 * C31851;
    const double C31860 = C31850 * C31851;
    const double C31924 = C31851 * C31920;
    const double C31895 = C31893 * C31892;
    const double C123 = (C31831 * C31892 * C31893 * C31883) / C31595;
    const double C253 = (C31965 * C31892 * C31893 * C31883) / C31595;
    const double C358 = (C31824 * C31892 * C31893 * C31883) / C31595 -
                        (ae * bs[1] * C31820) / (C31819 * C31595);
    const double C32714 = -C32713;
    const double C32747 = -C32746;
    const double C32759 = -C32758;
    const double C32773 = -C32772;
    const double C32797 = -C32796;
    const double C32815 = std::exp(C32814);
    const double C31696 = C31688 / C31595;
    const double C31702 = C31695 / C31595;
    const double C31832 = C31825 * C31829;
    const double C31897 = C31829 * C31896;
    const double C131 =
        ((bs[2] * std::pow(C31822, 2) + C31828 * C31825 * C31829) * C31827 +
         (C31825 * C31829 + C31828 * bs[4] * std::pow(C31822, 4)) * C31827 *
             std::pow(xP - xQ, 2)) /
        C31602;
    const double C263 =
        ((yP - yQ) * (bs[2] * std::pow(C31822, 2) + C31828 * C31825 * C31829) *
         C31827) /
        C31602;
    const double C368 =
        (2 * ae * C31892 * C31893 * C31883 +
         C31824 * (C31893 * C31892 + C31828 * C31825 * C31829) * C31827) /
        C31602;
    const double C31845 = C31844 * C31842;
    const double C31849 = C31841 * C31842;
    const double C31885 = C31842 * C31884;
    const double C31865 = C31864 * C31862;
    const double C31945 = C31862 * C31940;
    const double C31911 = C31840 * C31843;
    const double C31921 = C31831 * C31840;
    const double C31990 = C31840 * C31975;
    const double C32074 = C31840 * C31828;
    const double C32073 = C31824 * C31840;
    const double C32072 = C31840 * ae;
    const double C32157 = C31965 * C31840;
    const double C31903 = C31831 * C31888;
    const double C31982 = C31965 * C31888;
    const double C32057 = C31824 * C31888;
    const double C32068 = ae * C31888;
    const double C31943 = C31860 * C31843;
    const double C32228 = C31860 * C31975;
    const double C32312 = C31831 * C31860;
    const double C32394 = C31860 * C31828;
    const double C32393 = C31824 * C31860;
    const double C32392 = C31860 * ae;
    const double C32502 = C31965 * C31860;
    const double C31927 = C31924 * C31843;
    const double C31939 = C31831 * C31924;
    const double C32209 = C31924 * C31975;
    const double C32224 = C31965 * C31924;
    const double C32353 = C31824 * C31924;
    const double C32386 = ae * C31924;
    const double C31898 = C31895 * ae;
    const double C117 = C31895 * C31843 - (bs[1] * C31820) / C31819;
    const double C242 = C31965 * C31831 * C31895;
    const double C244 = C31895 * C31975 - (bs[1] * C31820) / C31819;
    const double C347 = C31824 * C31831 * C31895;
    const double C349 = C31895 * C31828 - (bs[1] * C31820) / C31819;
    const double C692 = C31824 * C31965 * C31895;
    const double C32715 = std::exp(C32714);
    const double C32748 = std::exp(C32747);
    const double C32760 = std::exp(C32759);
    const double C32774 = std::exp(C32773);
    const double C32798 = std::exp(C32797);
    const double C140 = C32815 * C130;
    const double C31605 = C31603 * C32815;
    const double C113 =
        -((C32815 - (C31593 * 2 * C31594 * C31593 * C32815) / C31595) * 2 *
          C31594) /
        C31595;
    const double C114 = -(2 * C31594 * C31593 * C32815) / C31595;
    const double C32893 = C32815 / C31637;
    const double C32895 = C32815 * C32892;
    const double C32902 = C32723 * C32815;
    const double C33035 = C32815 * C32894;
    const double C33060 = C33012 * C32815;
    const double C33058 = C32815 * C33023;
    const double C31703 = C31696 - C31673;
    const double C31708 = C31702 - C31670;
    const double C31837 = C31832 + C31836;
    const double C31904 = C31831 * C31832;
    const double C31983 = C31965 * C31832;
    const double C32059 = C31824 * C31832;
    const double C32058 = C31832 * ae;
    const double C118 =
        2 * C31831 * C31895 + C31831 * (C31895 + C31832 * C31843);
    const double C241 = C31965 * (C31895 + C31832 * C31843);
    const double C346 = C31824 * (C31895 + C31832 * C31843);
    const double C966 =
        2 * C31965 * C31895 + C31965 * (C31895 + C31832 * C31975);
    const double C1125 = C31824 * (C31895 + C31832 * C31975);
    const double C2081 =
        2 * C31824 * C31895 + C31824 * (C31895 + C31832 * C31828);
    const double C31899 = C31824 * C31897;
    const double C124 = (C31892 * C31893 * C31883 + C31897 * C31843) / C31595;
    const double C125 =
        (2 * C31831 * C31897 + C31831 * (C31897 + C31888 * C31843)) / C31595;
    const double C251 = (C31965 * (C31897 + C31888 * C31843)) / C31595;
    const double C252 = (C31965 * C31831 * C31897) / C31595;
    const double C254 = (C31892 * C31893 * C31883 + C31897 * C31975) / C31595;
    const double C356 = (C31824 * (C31897 + C31888 * C31843) +
                         (C31895 + C31832 * C31843) * ae) /
                        C31595;
    const double C357 =
        (C31824 * C31831 * C31897 + C31831 * C31895 * ae) / C31595;
    const double C697 =
        (C31824 * C31965 * C31897 + C31965 * C31895 * ae) / C31595;
    const double C972 =
        (2 * C31965 * C31897 + C31965 * (C31897 + C31888 * C31975)) / C31595;
    const double C1134 = (C31824 * (C31897 + C31888 * C31975) +
                          (C31895 + C31832 * C31975) * ae) /
                         C31595;
    const double C143 = C32815 * C131;
    const double C984 = C32815 * C263;
    const double C31846 = C31840 + C31845;
    const double C31854 = C31849 + C31853;
    const double C31922 = C31849 * C31843;
    const double C31942 = C31831 * C31849;
    const double C32211 = C31849 * C31975;
    const double C32227 = C31965 * C31849;
    const double C32356 = C31849 * C31828;
    const double C32355 = C31824 * C31849;
    const double C32354 = C31849 * ae;
    const double C31910 = C31885 * C31843;
    const double C31919 = C31831 * C31885;
    const double C31989 = C31885 * C31975;
    const double C32071 = C31824 * C31885;
    const double C32156 = C31965 * C31885;
    const double C32349 = ae * C31885;
    const double C31866 = C31860 + C31865;
    const double C31948 = C31945 * C31843;
    const double C32225 = C31945 * C31975;
    const double C32310 = C31831 * C31945;
    const double C32391 = C31824 * C31945;
    const double C32501 = C31965 * C31945;
    const double C31913 = C31832 + C31911;
    const double C31925 = 2 * C31921;
    const double C31999 = C31965 * C31921;
    const double C32048 = C31824 * C31921;
    const double C32047 = C31921 * ae;
    const double C31992 = C31832 + C31990;
    const double C32078 = C31832 + C32074;
    const double C32077 = C32073 * ae;
    const double C32357 = 2 * C32073;
    const double C32160 = C31824 * C32157;
    const double C32159 = C32157 * ae;
    const double C32210 = 2 * C32157;
    const double C31905 = C31824 * C31903;
    const double C255 = (C31831 * C31897 + C31903 * C31975) / C31595;
    const double C31984 = C31824 * C31982;
    const double C32075 = 2 * C32068;
    const double C31947 = C31849 + C31943;
    const double C32232 = C31849 + C32228;
    const double C32314 = C32312 * C31975;
    const double C32438 = C31965 * C32312;
    const double C32468 = C32312 * C31828;
    const double C32467 = C31824 * C32312;
    const double C32466 = C32312 * ae;
    const double C32402 = C31849 + C32394;
    const double C32401 = C32393 * ae;
    const double C32510 = C32502 * C31828;
    const double C32509 = C31824 * C32502;
    const double C32508 = C32502 * ae;
    const double C31929 = C31885 + C31927;
    const double C31944 = 2 * C31939;
    const double C32005 = C31939 * C31975;
    const double C32094 = C31824 * C31939;
    const double C32170 = C31965 * C31939;
    const double C32461 = ae * C31939;
    const double C32212 = C31885 + C32209;
    const double C32229 = 2 * C32224;
    const double C32266 = C31824 * C32224;
    const double C32497 = ae * C32224;
    const double C32399 = 2 * C32386;
    const double C32717 = C32715 * C32710;
    const double C32716 = C32715 / C31637;
    const double C32725 = C32723 * C32715;
    const double C33008 = C32715 * C32711;
    const double C33048 = C33012 * C32715;
    const double C33042 = C32715 * C33005;
    const double C33051 = C32748 * C33016;
    const double C110 =
        (C32748 * std::pow(C33016, 2)) / C33017 + C32748 / C33018;
    const double C112 = C33052 * C32748;
    const double C469 = C33050 * C32748;
    const double C33053 = C32760 * C33019;
    const double C235 =
        (C32760 * std::pow(C33019, 2)) / C33017 + C32760 / C33018;
    const double C237 = C33052 * C32760;
    const double C467 = C33050 * C32760;
    const double C33054 = C32774 * C33020;
    const double C341 =
        (C32774 * std::pow(C33020, 2)) / C33017 + C32774 / C33018;
    const double C343 = C33052 * C32774;
    const double C581 = C33050 * C32774;
    const double C32851 = C32798 / C31637;
    const double C32853 = C32798 * C32850;
    const double C32860 = C32723 * C32798;
    const double C33028 = C32798 * C32852;
    const double C33057 = C33012 * C32798;
    const double C33055 = C32798 * C33021;
    const double C31607 = 2 * C31605;
    const double C31666 = C31605 / C31602;
    const double C31660 = -4 * C31605;
    const double C1777 = ((0 * ae) / C31595 - C31605 / C31602) / (2 * C31595) +
                         (0 * ae) / C31595;
    const double C3464 = (0 * ae) / C31595 - C31605 / C31602;
    const double C141 = C113 * C117;
    const double C138 = C113 * C116;
    const double C480 = C113 * C242;
    const double C592 = C113 * C347;
    const double C985 = C113 * C244;
    const double C983 = C113 * C243;
    const double C1649 = C113 * C692;
    const double C139 = C114 * C123;
    const double C137 = C114 * C122;
    const double C274 = C114 * C253;
    const double C379 = C114 * C358;
    const double C10128 = (C32815 * std::pow(C32894, 2)) / C31602 + C32893;
    const double C32896 = C32895 * C32894;
    const double C32901 = C32895 / C31606;
    const double C33027 = C32895 / C31595;
    const double C33024 = C32723 * C32895;
    const double C32903 = C32902 * C32894;
    const double C33041 = C32902 / C31742;
    const double C33039 = C32892 * C32902;
    const double C33038 = 2 * C32902;
    const double C11919 = C32902 / C33015;
    const double C24295 = C32902 / C31637;
    const double C33067 = C33035 / C31595;
    const double C10129 = (-2 * C32723 * C33035) / C31595;
    const double C33078 = C33058 / C31602;
    const double C31712 = C31703 / C31637;
    const double C31710 = C31593 * C31703;
    const double C31709 = 2 * C31703;
    const double C31716 = C31708 + C31657;
    const double C31838 = C31837 * C31827;
    const double C31906 = C31904 * ae;
    const double C698 =
        (C31824 * C31965 * C31903 + C31965 * C31904 * ae) / C31595;
    const double C245 = C31831 * C31895 + C31904 * C31975;
    const double C350 = C31831 * C31895 + C31904 * C31828;
    const double C693 = C31824 * C31965 * C31904;
    const double C965 =
        2 * C31965 * C31904 + C31965 * (C31904 + C31921 * C31975);
    const double C1124 = C31824 * (C31904 + C31921 * C31975);
    const double C2080 =
        2 * C31824 * C31904 + C31824 * (C31904 + C31921 * C31828);
    const double C31985 = C31983 * ae;
    const double C1126 = C31965 * C31895 + C31983 * C31828;
    const double C2625 =
        2 * C31824 * C31983 + C31824 * (C31983 + C32157 * C31828);
    const double C32061 = C32059 * ae;
    const double C32060 = C32057 + C32058;
    const double C144 = C113 * C118;
    const double C478 = C113 * C241;
    const double C590 = C113 * C346;
    const double C993 = C113 * C966;
    const double C1647 = C113 * C1125;
    const double C31900 = C31899 + C31898;
    const double C142 = C114 * C124;
    const double C145 = C114 * C125;
    const double C272 = C114 * C251;
    const double C273 = C114 * C252;
    const double C275 = C114 * C254;
    const double C377 = C114 * C356;
    const double C378 = C114 * C357;
    const double C708 = C114 * C697;
    const double C994 = C114 * C972;
    const double C1153 = C114 * C1134;
    const double C31847 = C31846 * C31827;
    const double C31855 = C31854 * C31827;
    const double C31926 = C31840 + C31922;
    const double C31946 = 2 * C31942;
    const double C32006 = C31942 * C31975;
    const double C32097 = C31942 * C31828;
    const double C32096 = C31824 * C31942;
    const double C32095 = C31942 * ae;
    const double C32171 = C31965 * C31942;
    const double C32213 = C31840 + C32211;
    const double C32231 = 2 * C32227;
    const double C32269 = C32227 * C31828;
    const double C32268 = C31824 * C32227;
    const double C32267 = C32227 * ae;
    const double C32362 = C31840 + C32356;
    const double C32361 = C32355 * ae;
    const double C32395 = 2 * C32355;
    const double C32360 = C32353 + C32354;
    const double C31912 = C31888 + C31910;
    const double C31923 = 2 * C31919;
    const double C31998 = C31965 * C31919;
    const double C32046 = C31824 * C31919;
    const double C32091 = ae * C31919;
    const double C971 =
        (2 * C31965 * C31903 + C31965 * (C31903 + C31919 * C31975)) / C31595;
    const double C1133 = (C31824 * (C31903 + C31919 * C31975) +
                          (C31904 + C31921 * C31975) * ae) /
                         C31595;
    const double C31991 = C31888 + C31989;
    const double C32076 = C32071 + C32072;
    const double C32158 = C31824 * C32156;
    const double C32208 = 2 * C32156;
    const double C32263 = ae * C32156;
    const double C32359 = 2 * C32349;
    const double C31867 = C31866 * C31827;
    const double C31950 = C31924 + C31948;
    const double C32230 = C31924 + C32225;
    const double C32313 = C32310 * C31975;
    const double C32437 = C31965 * C32310;
    const double C32465 = C31824 * C32310;
    const double C32400 = C32391 + C32392;
    const double C32507 = C31824 * C32501;
    const double C31915 = C31913 * ae;
    const double C119 = 3 * (C31895 + C31832 * C31843) +
                        C31831 * (2 * C31904 + C31831 * C31913);
    const double C240 = C31965 * (2 * C31904 + C31831 * C31913);
    const double C246 = C31895 + C31832 * C31843 + C31913 * C31975;
    const double C345 = C31824 * (2 * C31904 + C31831 * C31913);
    const double C351 = C31895 + C31832 * C31843 + C31913 * C31828;
    const double C694 = C31824 * C31965 * C31913;
    const double C32001 = C31999 * ae;
    const double C1128 = C31965 * C31904 + C31999 * C31828;
    const double C32050 = C32048 * ae;
    const double C31994 = C31992 * ae;
    const double C967 = 3 * (C31895 + C31832 * C31975) +
                        C31965 * (2 * C31983 + C31965 * C31992);
    const double C1127 = C31895 + C31832 * C31975 + C31992 * C31828;
    const double C1637 = C31824 * (2 * C31983 + C31965 * C31992);
    const double C32081 = C32078 * ae;
    const double C2082 = 3 * (C31895 + C31832 * C31828) +
                         C31824 * (2 * C32059 + C31824 * C32078);
    const double C32162 = C32160 * ae;
    const double C276 = C114 * C255;
    const double C31949 = C31831 * C31947;
    const double C32022 = C31947 * C31975;
    const double C32120 = C31947 * C31828;
    const double C32119 = C31824 * C31947;
    const double C32118 = C31947 * ae;
    const double C32185 = C31965 * C31947;
    const double C32234 = C31965 * C32232;
    const double C32292 = C32232 * C31828;
    const double C32291 = C31824 * C32232;
    const double C32290 = C32232 * ae;
    const double C32316 = C31942 + C32314;
    const double C32444 = C32438 * C31828;
    const double C32443 = C31824 * C32438;
    const double C32442 = C32438 * ae;
    const double C32474 = C31942 + C32468;
    const double C32473 = C32467 * ae;
    const double C32407 = C31824 * C32402;
    const double C32406 = C32402 * ae;
    const double C32514 = C32227 + C32510;
    const double C32513 = C32509 * ae;
    const double C31931 = C31831 * C31929;
    const double C31938 = 3 * C31929;
    const double C32014 = C31965 * C31929;
    const double C32035 = C31824 * C31929;
    const double C32114 = ae * C31929;
    const double C32007 = C31919 + C32005;
    const double C32172 = C31824 * C32170;
    const double C32309 = 2 * C32170;
    const double C32434 = ae * C32170;
    const double C32471 = 2 * C32461;
    const double C32214 = C31965 * C32212;
    const double C32223 = 3 * C32212;
    const double C32252 = C31824 * C32212;
    const double C32286 = ae * C32212;
    const double C32505 = 2 * C32497;
    const double C32718 = C32717 * C32711;
    const double C32724 = C32717 / C31606;
    const double C33009 = C32723 * C32717;
    const double C33007 = C32717 / C31595;
    const double C825 = (C32715 * std::pow(C32711, 2)) / C31602 + C32716;
    const double C32726 = C32725 * C32711;
    const double C33026 = C32725 / C31742;
    const double C33013 = C32710 * C32725;
    const double C33011 = 2 * C32725;
    const double C107 = C32725 / C33015;
    const double C17578 = C32725 / C31637;
    const double C33044 = C33008 / C31595;
    const double C826 = (-2 * C32723 * C33008) / C31595;
    const double C33071 = C33042 / C31602;
    const double C111 = (2 * C33050 * C33051) / C32743;
    const double C468 = C33051 / C32743;
    const double C236 = (2 * C33050 * C33053) / C32743;
    const double C466 = C33053 / C32743;
    const double C342 = (2 * C33050 * C33054) / C32743;
    const double C580 = C33054 / C32743;
    const double C5436 = (C32798 * std::pow(C32852, 2)) / C31602 + C32851;
    const double C32854 = C32853 * C32852;
    const double C32859 = C32853 / C31606;
    const double C33025 = C32853 / C31595;
    const double C33022 = C32723 * C32853;
    const double C32861 = C32860 * C32852;
    const double C33034 = C32860 / C31742;
    const double C33032 = C32850 * C32860;
    const double C33031 = 2 * C32860;
    const double C6189 = C32860 / C33015;
    const double C17575 = C32860 / C31637;
    const double C33062 = C33028 / C31595;
    const double C5437 = (-2 * C32723 * C33028) / C31595;
    const double C33076 = C33055 / C31602;
    const double C31608 = C31593 * C31607;
    const double C10136 =
        ((-C31607 / C31595) / C31637 - (0 * be) / C31595) / C31637 -
        (0 * be) / C31595;
    const double C20406 = (-C31607 / C31595) / C31637 - (0 * be) / C31595;
    const double C31684 = C31676 - C31666;
    const double C31674 = C31660 / C31595;
    const double C3478 = C3464 * C356;
    const double C3472 = C3464 * C357;
    const double C3467 = C3464 * C358;
    const double C3629 = C3464 * C1134;
    const double C3626 = C3464 * C697;
    const double C154 = C138 + C139;
    const double C999 = C983 + C274;
    const double C10152 = C10128 * C131;
    const double C10143 = C10128 * C130;
    const double C11191 = C10128 * C263;
    const double C32897 = C32896 / C31602;
    const double C3476 = C33027 * C131;
    const double C3470 = C33027 * C130;
    const double C4509 = C33027 * C263;
    const double C33059 = 2 * C33024;
    const double C32904 = C32903 / C31595;
    const double C33070 = C33039 / C31606;
    const double C33083 = C33027 - C33067;
    const double C20401 = -C33067;
    const double C33090 = C33078 + C32893;
    const double C31718 = C31710 + 0;
    const double C31717 = C31687 + C31709;
    const double C31724 = C31716 / C31637;
    const double C132 =
        (2 * C31831 * C31838 +
         C31831 * (C31838 +
                   (C31833 * C31834 + C31828 * bs[5] * std::pow(C31826, 5)) *
                       C31827 * std::pow(C31831, 2))) /
        C31602;
    const double C262 = ((yP - yQ) * C31831 * C31838) / C31602;
    const double C264 =
        ((bs[2] * std::pow(C31822, 2) + C31828 * C31825 * C31829) * C31827 +
         C31838 * std::pow(yP - yQ, 2)) /
        C31602;
    const double C367 = (2 * ae * C31831 * C31829 * C31825 * C31883 +
                         C31824 * C31831 * C31838) /
                        C31602;
    const double C702 =
        (2 * ae * C31965 * C31897 + C31824 * C31965 * C31838) / C31602;
    const double C31907 = C31905 + C31906;
    const double C709 = C114 * C698;
    const double C3624 = C3464 * C698;
    const double C831 = C113 * C245;
    const double C1472 = C113 * C693;
    const double C990 = C113 * C965;
    const double C1470 = C113 * C1124;
    const double C31986 = C31984 + C31985;
    const double C32063 = ae * C32060;
    const double C32062 = C31824 * C32060;
    const double C32070 = 2 * C32060;
    const double C31901 = ae * C31900;
    const double C359 =
        (C31892 * C31893 * C31883 + C31824 * C31900 + C31824 * C31895 * ae) /
        C31595;
    const double C155 = C141 + C142;
    const double C156 = C144 + C145;
    const double C485 = C478 + C272;
    const double C486 = C480 + C273;
    const double C1000 = C985 + C275;
    const double C597 = C590 + C377;
    const double C598 = C592 + C378;
    const double C1655 = C1649 + C708;
    const double C1003 = C993 + C994;
    const double C1654 = C1647 + C1153;
    const double C31972 = C31831 * C31847;
    const double C32069 = C31824 * C31847;
    const double C32155 = C31965 * C31847;
    const double C133 =
        (3 * (C31838 + C31847 * C31843) +
         C31831 * (2 * C31831 * C31847 +
                   C31831 * (C31847 + (C31841 * C31842 +
                                       C31828 * bs[6] * std::pow(C31822, 6)) *
                                          C31827 * C31843))) /
        C31602;
    const double C261 = ((yP - yQ) * (C31838 + C31847 * C31843)) / C31602;
    const double C265 =
        (C31831 * C31838 + C31831 * C31847 * std::pow(yP - yQ, 2)) / C31602;
    const double C366 = (2 * ae * (C31829 * C31825 * C31883 + C31888 * C31843) +
                         C31824 * (C31838 + C31847 * C31843)) /
                        C31602;
    const double C703 =
        (2 * ae * C31965 * C31903 + C31824 * C31965 * C31831 * C31847) / C31602;
    const double C978 = (2 * C31965 * C31838 +
                         C31965 * (C31838 + C31847 * std::pow(C31965, 2))) /
                        C31602;
    const double C1143 = (2 * ae * (C31897 + C31888 * C31975) +
                          C31824 * (C31838 + C31847 * C31975)) /
                         C31602;
    const double C31856 = C31855 * C31843;
    const double C31859 = C31831 * C31855;
    const double C32197 = C31855 * C31975;
    const double C32200 = C31965 * C31855;
    const double C32350 = C31824 * C31855;
    const double C979 =
        (3 * (C31838 + C31847 * C31975) +
         C31965 * (2 * C31965 * C31847 + C31965 * (C31847 + C31855 * C31975))) /
        C31602;
    const double C31928 = C31831 * C31926;
    const double C31941 = 3 * C31926;
    const double C32015 = C31965 * C31926;
    const double C32037 = C31824 * C31926;
    const double C32036 = C31926 * ae;
    const double C964 =
        2 * C31965 * C31913 + C31965 * (C31913 + C31926 * C31975);
    const double C1123 = C31824 * (C31913 + C31926 * C31975);
    const double C2079 =
        2 * C31824 * C31913 + C31824 * (C31913 + C31926 * C31828);
    const double C32008 = C31921 + C32006;
    const double C32101 = C31921 + C32097;
    const double C32100 = C32096 * ae;
    const double C32469 = 2 * C32096;
    const double C32099 = C32094 + C32095;
    const double C32174 = C31824 * C32171;
    const double C32173 = C32171 * ae;
    const double C32311 = 2 * C32171;
    const double C2626 =
        2 * C31824 * C31999 + C31824 * (C31999 + C32171 * C31828);
    const double C32215 = C31965 * C32213;
    const double C32226 = 3 * C32213;
    const double C32254 = C31824 * C32213;
    const double C32253 = C32213 * ae;
    const double C7001 =
        2 * C31824 * C31992 + C31824 * (C31992 + C32213 * C31828);
    const double C32273 = C32157 + C32269;
    const double C32272 = C32268 * ae;
    const double C32503 = 2 * C32268;
    const double C32271 = C32266 + C32267;
    const double C32366 = C31824 * C32362;
    const double C32365 = C32362 * ae;
    const double C32396 = 3 * C32362;
    const double C32367 = ae * C32360;
    const double C32364 = C31824 * C32360;
    const double C32390 = 2 * C32360;
    const double C31914 = C31824 * C31912;
    const double C126 = (3 * (C31897 + C31888 * C31843) +
                         C31831 * (2 * C31903 + C31831 * C31912)) /
                        C31595;
    const double C250 = (C31965 * (2 * C31903 + C31831 * C31912)) / C31595;
    const double C256 = (C31897 + C31888 * C31843 + C31912 * C31975) / C31595;
    const double C355 = (C31824 * (2 * C31903 + C31831 * C31912) +
                         (2 * C31904 + C31831 * C31913) * ae) /
                        C31595;
    const double C699 =
        (C31824 * C31965 * C31912 + C31965 * C31913 * ae) / C31595;
    const double C970 =
        (2 * C31965 * C31912 + C31965 * (C31912 + C31929 * C31975)) / C31595;
    const double C1132 = (C31824 * (C31912 + C31929 * C31975) +
                          (C31913 + C31926 * C31975) * ae) /
                         C31595;
    const double C32000 = C31824 * C31998;
    const double C32049 = C32046 + C32047;
    const double C32098 = 2 * C32091;
    const double C991 = C114 * C971;
    const double C1152 = C114 * C1133;
    const double C3631 = C3464 * C1133;
    const double C31993 = C31824 * C31991;
    const double C1643 =
        (2 * ae * (2 * C31982 + C31965 * C31991) +
         C31824 * (2 * C31965 * C31847 + C31965 * (C31847 + C31855 * C31975))) /
        C31602;
    const double C973 = (3 * (C31897 + C31888 * C31975) +
                         C31965 * (2 * C31982 + C31965 * C31991)) /
                        C31595;
    const double C1640 = (C31824 * (2 * C31982 + C31965 * C31991) +
                          (2 * C31983 + C31965 * C31992) * ae) /
                         C31595;
    const double C32082 = ae * C32076;
    const double C32080 = C31824 * C32076;
    const double C32352 = 2 * C32076;
    const double C32161 = C32158 + C32159;
    const double C32270 = 2 * C32263;
    const double C31868 = C31867 * C31843;
    const double C32201 = C31867 * C31975;
    const double C32246 = C31831 * C31867;
    const double C32387 = C31824 * C31867;
    const double C32498 = C31965 * C31867;
    const double C31952 = C31831 * C31950;
    const double C32021 = C31950 * C31975;
    const double C32117 = C31824 * C31950;
    const double C32184 = C31965 * C31950;
    const double C32233 = C31965 * C32230;
    const double C32289 = C31824 * C32230;
    const double C32315 = C31939 + C32313;
    const double C32441 = C31824 * C32437;
    const double C32472 = C32465 + C32466;
    const double C32408 = ae * C32400;
    const double C32405 = C31824 * C32400;
    const double C32512 = C32507 + C32508;
    const double C147 = C113 * C119;
    const double C476 = C113 * C240;
    const double C835 = C113 * C246;
    const double C588 = C113 * C345;
    const double C1467 = C113 * C694;
    const double C6260 = C113 * C967;
    const double C6610 = C113 * C1637;
    const double C31951 = C31946 + C31949;
    const double C32024 = C31926 + C32022;
    const double C32124 = C31926 + C32120;
    const double C32123 = C32119 * ae;
    const double C32188 = C31824 * C32185;
    const double C32187 = C32185 * ae;
    const double C32236 = C32231 + C32234;
    const double C32296 = C32213 + C32292;
    const double C32295 = C32291 * ae;
    const double C32318 = C31965 * C32316;
    const double C32328 = C31824 * C32316;
    const double C32327 = C32316 * ae;
    const double C32448 = C32171 + C32444;
    const double C32447 = C32443 * ae;
    const double C32478 = C31824 * C32474;
    const double C32477 = C32474 * ae;
    const double C32411 = C32395 + C32407;
    const double C32518 = C31824 * C32514;
    const double C32517 = C32514 * ae;
    const double C31933 = C31923 + C31931;
    const double C32016 = C31824 * C32014;
    const double C32121 = 2 * C32114;
    const double C32009 = C31824 * C32007;
    const double C974 = (3 * (C31903 + C31919 * C31975) +
                         C31965 * (2 * C31998 + C31965 * C32007)) /
                        C31595;
    const double C32439 = 2 * C32434;
    const double C32216 = C32208 + C32214;
    const double C32293 = 2 * C32286;
    const double C32719 = C32718 / C31602;
    const double C33045 = 2 * C33009;
    const double C32727 = C32726 / C31595;
    const double C33049 = C33013 / C31606;
    const double C33072 = C33007 - C33044;
    const double C15817 = -C33044;
    const double C33086 = C33071 + C32716;
    const double C32855 = C32854 / C31602;
    const double C33056 = 2 * C33022;
    const double C32862 = C32861 / C31595;
    const double C33065 = C33032 / C31606;
    const double C33080 = C33025 - C33062;
    const double C15101 = -C33062;
    const double C33089 = C33076 + C32851;
    const double C31609 = C31608 / C31595;
    const double C20420 = C20406 * C356;
    const double C20414 = C20406 * C357;
    const double C20409 = C20406 * C358;
    const double C20573 = C20406 * C1133;
    const double C20571 = C20406 * C1134;
    const double C20568 = C20406 * C697;
    const double C20566 = C20406 * C698;
    const double C31694 = C31593 * C31684;
    const double C31692 = 2 * C31684;
    const double C31743 = C31684 / C31637;
    const double C159 = C154 + C139;
    const double C1004 = C999 + C274;
    const double C32898 = C32893 - C32897;
    const double C33079 = C33059 / C31595;
    const double C32905 = C32901 - C32904;
    const double C33093 = C33083 / C31637;
    const double C20418 = C20401 * C131;
    const double C20412 = C20401 * C130;
    const double C21467 = C20401 * C263;
    const double C1793 = C33090 * C131;
    const double C1784 = C33090 * C130;
    const double C6840 = C33090 * C263;
    const double C31725 = C31718 * be;
    const double C31723 = C31717 * be;
    const double C146 = C32815 * C132;
    const double C1808 = C33090 * C132;
    const double C3482 = C33027 * C132;
    const double C10167 = C10128 * C132;
    const double C20424 = C20401 * C132;
    const double C481 = C32815 * C262;
    const double C2276 = C33090 * C262;
    const double C3891 = C33027 * C262;
    const double C10614 = C10128 * C262;
    const double C20833 = C20401 * C262;
    const double C986 = C32815 * C264;
    const double C4523 = C33027 * C264;
    const double C6846 = C33090 * C264;
    const double C11197 = C10128 * C264;
    const double C21471 = C20401 * C264;
    const double C593 = C32815 * C367;
    const double C2458 = C33090 * C367;
    const double C3473 = C32902 * C367;
    const double C4053 = C33027 * C367;
    const double C10146 = C10129 * C367;
    const double C10793 = C10128 * C367;
    const double C20415 = C32902 * C367;
    const double C20995 = C20401 * C367;
    const double C1650 = C32815 * C702;
    const double C4511 = C32902 * C702;
    const double C5314 = C33027 * C702;
    const double C7499 = C33090 * C702;
    const double C11193 = C10129 * C702;
    const double C11832 = C10128 * C702;
    const double C21469 = C32902 * C702;
    const double C22290 = C20401 * C702;
    const double C31908 = ae * C31907;
    const double C360 =
        (C31831 * C31897 + C31824 * C31907 + C31824 * C31904 * ae) / C31595;
    const double C841 = C831 + C276;
    const double C1479 = C1472 + C709;
    const double C31987 = ae * C31986;
    const double C1135 =
        (C31965 * C31897 + C31824 * C31986 + C31824 * C31983 * ae) / C31595;
    const double C32064 = C31897 + C32062;
    const double C369 =
        ((C31895 + C31828 * C31825 * C31829) * C31827 + C31901 + C31901 +
         C31824 * (2 * ae * C31897 + C31824 * C31838)) /
        C31602;
    const double C380 = C114 * C359;
    const double C1781 = C1777 * C359;
    const double C3740 = C3464 * C359;
    const double C10140 = C10136 * C359;
    const double C20682 = C20406 * C359;
    const double C160 = C155 + C142;
    const double C161 = C156 + C145;
    const double C489 = C485 + C272;
    const double C490 = C486 + C273;
    const double C1005 = C1000 + C275;
    const double C601 = C597 + C377;
    const double C602 = C598 + C378;
    const double C1657 = C1655 + C708;
    const double C1008 = C1003 + C994;
    const double C1656 = C1654 + C1153;
    const double C32079 = C32075 + C32069;
    const double C149 = C32815 * C133;
    const double C3491 = C33027 * C133;
    const double C20433 = C20401 * C133;
    const double C479 = C32815 * C261;
    const double C2270 = C33090 * C261;
    const double C3887 = C33027 * C261;
    const double C10608 = C10128 * C261;
    const double C20829 = C20401 * C261;
    const double C832 = C32815 * C265;
    const double C4519 = C33027 * C265;
    const double C7170 = C33090 * C265;
    const double C11509 = C10128 * C265;
    const double C21301 = C20401 * C265;
    const double C591 = C32815 * C366;
    const double C2452 = C33090 * C366;
    const double C3479 = C32902 * C366;
    const double C4049 = C33027 * C366;
    const double C10155 = C10129 * C366;
    const double C10787 = C10128 * C366;
    const double C20421 = C32902 * C366;
    const double C20991 = C20401 * C366;
    const double C1473 = C32815 * C703;
    const double C3889 = C32902 * C703;
    const double C5104 = C33027 * C703;
    const double C10612 = C10129 * C703;
    const double C13204 = C10128 * C703;
    const double C17260 = C33090 * C703;
    const double C20831 = C32902 * C703;
    const double C22074 = C20401 * C703;
    const double C995 = C32815 * C978;
    const double C6859 = C33090 * C978;
    const double C8534 = C33027 * C978;
    const double C11210 = C10128 * C978;
    const double C21486 = C20401 * C978;
    const double C1648 = C32815 * C1143;
    const double C4521 = C32902 * C1143;
    const double C7493 = C33090 * C1143;
    const double C9297 = C33027 * C1143;
    const double C11199 = C10129 * C1143;
    const double C11826 = C10128 * C1143;
    const double C21473 = C32902 * C1143;
    const double C22286 = C20401 * C1143;
    const double C31857 = C31847 + C31856;
    const double C31863 = 2 * C31859;
    const double C32092 = C31824 * C31859;
    const double C32169 = C31965 * C31859;
    const double C977 = (2 * C31965 * C31972 +
                         C31965 * (C31972 + C31859 * std::pow(C31965, 2))) /
                        C31602;
    const double C980 =
        (3 * (C31972 + C31859 * C31975) +
         C31965 * (2 * C31965 * C31859 +
                   C31965 * (C31859 + C31831 * C31867 * C31975))) /
        C31602;
    const double C1142 = (2 * ae * (C31903 + C31919 * C31975) +
                          C31824 * (C31972 + C31859 * C31975)) /
                         C31602;
    const double C1644 =
        (2 * ae * (2 * C31998 + C31965 * C32007) +
         C31824 * (2 * C31965 * C31859 +
                   C31965 * (C31859 + C31831 * C31867 * C31975))) /
        C31602;
    const double C32198 = C31847 + C32197;
    const double C32202 = 2 * C32200;
    const double C32264 = C31824 * C32200;
    const double C32363 = C32359 + C32350;
    const double C6261 = C32815 * C979;
    const double C9508 = C33027 * C979;
    const double C27475 = C20401 * C979;
    const double C31930 = C31925 + C31928;
    const double C32017 = C32015 * ae;
    const double C1130 = C31965 * C31913 + C32015 * C31828;
    const double C2627 =
        2 * C31824 * C32015 + C31824 * (C32015 + C32185 * C31828);
    const double C32039 = C32037 * ae;
    const double C32038 = C32035 + C32036;
    const double C987 = C113 * C964;
    const double C1465 = C113 * C1123;
    const double C32010 = C32008 * ae;
    const double C1641 = (C31824 * (2 * C31998 + C31965 * C32007) +
                          (2 * C31999 + C31965 * C32008) * ae) /
                         C31595;
    const double C968 = 3 * (C31904 + C31921 * C31975) +
                        C31965 * (2 * C31999 + C31965 * C32008);
    const double C1129 = C31904 + C31921 * C31975 + C32008 * C31828;
    const double C1638 = C31824 * (2 * C31999 + C31965 * C32008);
    const double C7332 =
        2 * C31824 * C32008 + C31824 * (C32008 + C32316 * C31828);
    const double C32104 = C32101 * ae;
    const double C2083 = 3 * (C31904 + C31921 * C31828) +
                         C31824 * (2 * C32048 + C31824 * C32101);
    const double C32105 = ae * C32099;
    const double C32103 = C31824 * C32099;
    const double C32464 = 2 * C32099;
    const double C32176 = C32174 * ae;
    const double C32175 = C32172 + C32173;
    const double C32217 = C32210 + C32215;
    const double C32256 = C32254 * ae;
    const double C32255 = C32252 + C32253;
    const double C32276 = C32273 * ae;
    const double C7002 = 3 * (C31983 + C32157 * C31828) +
                         C31824 * (2 * C32160 + C31824 * C32273);
    const double C32277 = ae * C32271;
    const double C32275 = C31824 * C32271;
    const double C32500 = 2 * C32271;
    const double C32370 = C32357 + C32366;
    const double C32385 = C31855 + C32367;
    const double C32369 = C31885 + C32364;
    const double C31916 = C31914 + C31915;
    const double C148 = C114 * C126;
    const double C271 = C114 * C250;
    const double C277 = C114 * C256;
    const double C376 = C114 * C355;
    const double C3484 = C3464 * C355;
    const double C20426 = C20406 * C355;
    const double C710 = C114 * C699;
    const double C3622 = C3464 * C699;
    const double C20564 = C20406 * C699;
    const double C988 = C114 * C970;
    const double C1151 = C114 * C1132;
    const double C3633 = C3464 * C1132;
    const double C20575 = C20406 * C1132;
    const double C32002 = C32000 + C32001;
    const double C32052 = ae * C32049;
    const double C32051 = C31824 * C32049;
    const double C32093 = 2 * C32049;
    const double C1002 = C990 + C991;
    const double C1478 = C1470 + C1152;
    const double C31995 = C31993 + C31994;
    const double C6611 = C32815 * C1643;
    const double C8532 = C32902 * C1643;
    const double C10010 = C33027 * C1643;
    const double C11207 = C10129 * C1643;
    const double C21483 = C32902 * C1643;
    const double C27977 = C20401 * C1643;
    const double C996 = C114 * C973;
    const double C1651 = C114 * C1640;
    const double C4525 = C3464 * C1640;
    const double C21482 = C20406 * C1640;
    const double C32348 = C31847 + C32082;
    const double C32083 = C31888 + C32080;
    const double C32164 = ae * C32161;
    const double C32163 = C31824 * C32161;
    const double C32265 = 2 * C32161;
    const double C31869 = C31855 + C31868;
    const double C32203 = C31855 + C32201;
    const double C32247 = C32246 * C31975;
    const double C32435 = C31965 * C32246;
    const double C32462 = C31824 * C32246;
    const double C32404 = C32399 + C32387;
    const double C32506 = C31824 * C32498;
    const double C31954 = C31944 + C31952;
    const double C32023 = C31929 + C32021;
    const double C32122 = C32117 + C32118;
    const double C32186 = C31824 * C32184;
    const double C32235 = C32229 + C32233;
    const double C32294 = C32289 + C32290;
    const double C32317 = C31965 * C32315;
    const double C32326 = C31824 * C32315;
    const double C32446 = C32441 + C32442;
    const double C32479 = ae * C32472;
    const double C32476 = C31824 * C32472;
    const double C32410 = C31924 + C32405;
    const double C32519 = ae * C32512;
    const double C32516 = C31824 * C32512;
    const double C31953 = C31831 * C31951;
    const double C32138 = C31965 * C31951;
    const double C32146 = C31824 * C31951;
    const double C32145 = C31951 * ae;
    const double C32026 = C32024 * ae;
    const double C969 = 3 * (C31913 + C31926 * C31975) +
                        C31965 * (2 * C32015 + C31965 * C32024);
    const double C1131 = C31913 + C31926 * C31975 + C32024 * C31828;
    const double C1639 = C31824 * (2 * C32015 + C31965 * C32024);
    const double C32127 = C32124 * ae;
    const double C2084 = 3 * (C31913 + C31926 * C31828) +
                         C31824 * (2 * C32037 + C31824 * C32124);
    const double C32190 = C32188 * ae;
    const double C32238 = C31965 * C32236;
    const double C32339 = C31824 * C32236;
    const double C32338 = C32236 * ae;
    const double C32299 = C32296 * ae;
    const double C7003 = 3 * (C31992 + C32213 * C31828) +
                         C31824 * (2 * C32254 + C31824 * C32296);
    const double C32320 = C32311 + C32318;
    const double C32330 = C32328 * ae;
    const double C32450 = C32448 * ae;
    const double C12177 = 3 * (C31999 + C32171 * C31828) +
                          C31824 * (2 * C32174 + C31824 * C32448);
    const double C32482 = C32469 + C32478;
    const double C32415 = C31824 * C32411;
    const double C32414 = C32411 * ae;
    const double C32522 = C32503 + C32518;
    const double C31934 = C31824 * C31933;
    const double C127 = (4 * (2 * C31903 + C31831 * C31912) +
                         C31831 * (3 * C31912 + C31831 * C31933)) /
                        C31595;
    const double C249 = (C31965 * (3 * C31912 + C31831 * C31933)) / C31595;
    const double C257 =
        (2 * C31903 + C31831 * C31912 + C31933 * C31975) / C31595;
    const double C997 = C114 * C974;
    const double C32218 = C31824 * C32216;
    const double C6255 = (4 * (2 * C31982 + C31965 * C31991) +
                          C31965 * (3 * C31991 + C31965 * C32216)) /
                         C31595;
    const double C32720 = C32716 - C32719;
    const double C33073 = C33045 / C31595;
    const double C32728 = C32724 - C32727;
    const double C33087 = C33072 / C31637;
    const double C32856 = C32851 - C32855;
    const double C33077 = C33056 / C31595;
    const double C32863 = C32859 - C32862;
    const double C33091 = C33080 / C31637;
    const double C31610 = C32815 - C31609;
    const double C31701 = C31694 + C32902;
    const double C31747 = C31743 - C31746;
    const double C164 = C159 + C140;
    const double C1009 = C1004 + C984;
    const double C24332 = C32898 * C132;
    const double C24317 = C32898 * C131;
    const double C24308 = C32898 * C130;
    const double C24779 = C32898 * C262;
    const double C24773 = C32898 * C261;
    const double C24958 = C32898 * C367;
    const double C24952 = C32898 * C366;
    const double C25444 = C32898 * C264;
    const double C25438 = C32898 * C265;
    const double C25428 = C32898 * C263;
    const double C26027 = C32898 * C703;
    const double C26236 = C32898 * C702;
    const double C31008 = C32898 * C978;
    const double C31578 = C32898 * C1143;
    const double C33036 = C32898 * C32892;
    const double C33069 = C33038 + C32898;
    const double C1796 = C33079 * C366;
    const double C1787 = C33079 * C367;
    const double C2274 = C33079 * C703;
    const double C6856 = C33079 * C1643;
    const double C6848 = C33079 * C1143;
    const double C6842 = C33079 * C702;
    const double C24320 = C32905 * C366;
    const double C24311 = C32905 * C367;
    const double C24777 = C32905 * C703;
    const double C25442 = C32905 * C1143;
    const double C25430 = C32905 * C702;
    const double C31006 = C32905 * C1643;
    const double C33040 = C32905 / C31637;
    const double C33037 = C32905 * C32892;
    const double C13505 = C33093 - (C32898 * C32894) / C31595;
    const double C31729 = C31725 / C31595;
    const double C31728 = C31723 / C31595;
    const double C370 =
        (C31831 * C31838 + C31908 + C31908 +
         C31824 * (2 * ae * C31903 + C31824 * C31831 * C31847)) /
        C31602;
    const double C381 = C114 * C360;
    const double C1789 = C1777 * C360;
    const double C3738 = C3464 * C360;
    const double C10148 = C10136 * C360;
    const double C20680 = C20406 * C360;
    const double C845 = C841 + C276;
    const double C1483 = C1479 + C709;
    const double C1144 =
        (C31965 * C31838 + C31987 + C31987 +
         C31824 * (2 * ae * C31982 + C31824 * C31965 * C31847)) /
        C31602;
    const double C1154 = C114 * C1135;
    const double C1958 = C1777 * C1135;
    const double C4205 = C3464 * C1135;
    const double C10317 = C10136 * C1135;
    const double C21147 = C20406 * C1135;
    const double C32065 = C32064 + C32061;
    const double C165 = C160 + C143;
    const double C166 = C161 + C146;
    const double C494 = C490 + C481;
    const double C1010 = C1005 + C986;
    const double C606 = C602 + C593;
    const double C1659 = C1657 + C1650;
    const double C493 = C489 + C479;
    const double C605 = C601 + C591;
    const double C1013 = C1008 + C995;
    const double C1658 = C1656 + C1648;
    const double C134 =
        (4 * (2 * C31831 * C31847 + C31831 * C31857) +
         C31831 * (3 * C31857 +
                   C31831 * (2 * C31831 * C31855 +
                             C31831 * (C31855 +
                                       (C31850 * C31851 +
                                        C31828 * bs[7] * std::pow(C31826, 7)) *
                                           C31827 * C31843)))) /
        C31602;
    const double C260 =
        ((yP - yQ) * (2 * C31831 * C31847 + C31831 * C31857)) / C31602;
    const double C266 =
        (C31838 + C31847 * C31843 + C31857 * std::pow(yP - yQ, 2)) / C31602;
    const double C365 =
        (2 * ae * (2 * C31831 * C31888 + C31831 * (C31888 + C31885 * C31843)) +
         C31824 * (2 * C31831 * C31847 + C31831 * C31857)) /
        C31602;
    const double C704 =
        (2 * ae * C31965 * C31912 + C31824 * C31965 * C31857) / C31602;
    const double C32102 = C32098 + C32092;
    const double C992 = C32815 * C977;
    const double C8530 = C33027 * C977;
    const double C21480 = C20401 * C977;
    const double C6432 = C32815 * C980;
    const double C1471 = C32815 * C1142;
    const double C4517 = C32902 * C1142;
    const double C7172 = C33079 * C1142;
    const double C9093 = C33027 * C1142;
    const double C11511 = C10129 * C1142;
    const double C21303 = C32902 * C1142;
    const double C22070 = C20401 * C1142;
    const double C25436 = C32905 * C1142;
    const double C8095 = C32815 * C1644;
    const double C8528 = C32902 * C1644;
    const double C21477 = C32902 * C1644;
    const double C6257 =
        (4 * (2 * C32155 + C31965 * C32198) +
         C31965 *
             (3 * C32198 + C31965 * (2 * C31965 * C31855 +
                                     C31965 * (C31855 + C31867 * C31975)))) /
        C31602;
    const double C32274 = C32270 + C32264;
    const double C32368 = C31824 * C32363;
    const double C32384 = 2 * C32363;
    const double C31932 = C31930 * ae;
    const double C354 = (C31824 * (3 * C31912 + C31831 * C31933) +
                         (3 * C31913 + C31831 * C31930) * ae) /
                        C31595;
    const double C700 =
        (C31824 * C31965 * C31933 + C31965 * C31930 * ae) / C31595;
    const double C120 = 4 * (2 * C31904 + C31831 * C31913) +
                        C31831 * (3 * C31913 + C31831 * C31930);
    const double C239 = C31965 * (3 * C31913 + C31831 * C31930);
    const double C247 = 2 * C31904 + C31831 * C31913 + C31930 * C31975;
    const double C344 = C31824 * (3 * C31913 + C31831 * C31930);
    const double C352 = 2 * C31904 + C31831 * C31913 + C31930 * C31828;
    const double C695 = C31824 * C31965 * C31930;
    const double C1305 =
        2 * C31965 * C31930 + C31965 * (C31930 + C31951 * C31975);
    const double C1461 = C31824 * (C31930 + C31951 * C31975);
    const double C2443 =
        2 * C31824 * C31930 + C31824 * (C31930 + C31951 * C31828);
    const double C32018 = C32016 + C32017;
    const double C32041 = ae * C32038;
    const double C32040 = C31824 * C32038;
    const double C32116 = 2 * C32038;
    const double C32011 = C32009 + C32010;
    const double C1652 = C114 * C1641;
    const double C4527 = C3464 * C1641;
    const double C21476 = C20406 * C1641;
    const double C6431 = C113 * C968;
    const double C8094 = C113 * C1638;
    const double C32460 = C31859 + C32105;
    const double C32106 = C31919 + C32103;
    const double C32178 = ae * C32175;
    const double C32177 = C31824 * C32175;
    const double C32436 = 2 * C32175;
    const double C32219 = C32217 * ae;
    const double C6336 = (C31824 * (3 * C31991 + C31965 * C32216) +
                          (3 * C31992 + C31965 * C32217) * ae) /
                         C31595;
    const double C6253 = 4 * (2 * C31983 + C31965 * C31992) +
                         C31965 * (3 * C31992 + C31965 * C32217);
    const double C6333 = C31824 * (3 * C31992 + C31965 * C32217);
    const double C6334 = 2 * C31983 + C31965 * C31992 + C32217 * C31828;
    const double C7484 =
        2 * C31824 * C32217 + C31824 * (C32217 + C32236 * C31828);
    const double C32258 = ae * C32255;
    const double C32257 = C31824 * C32255;
    const double C32288 = 2 * C32255;
    const double C32496 = C32200 + C32277;
    const double C32278 = C32156 + C32275;
    const double C32373 = C32370 * ae;
    const double C12079 = 4 * (2 * C32059 + C31824 * C32078) +
                          C31824 * (3 * C32078 + C31824 * C32370);
    const double C32398 = C32385 + C32367;
    const double C32372 = C32369 + C32361;
    const double C31917 = ae * C31916;
    const double C361 =
        (C31897 + C31888 * C31843 + C31824 * C31916 + C31824 * C31913 * ae) /
        C31595;
    const double C157 = C147 + C148;
    const double C484 = C476 + C271;
    const double C843 = C835 + C277;
    const double C596 = C588 + C376;
    const double C1477 = C1467 + C710;
    const double C1001 = C987 + C988;
    const double C1476 = C1465 + C1151;
    const double C32003 = ae * C32002;
    const double C1137 =
        (C31965 * C31903 + C31824 * C32002 + C31824 * C31999 * ae) / C31595;
    const double C32053 = C31903 + C32051;
    const double C1007 = C1002 + C991;
    const double C1482 = C1478 + C1152;
    const double C31996 = ae * C31995;
    const double C1136 =
        (C31897 + C31888 * C31975 + C31824 * C31995 + C31824 * C31992 * ae) /
        C31595;
    const double C6266 = C6260 + C996;
    const double C6614 = C6610 + C1651;
    const double C32358 = C32348 + C32082;
    const double C32084 = C32083 + C32077;
    const double C32165 = C31982 + C32163;
    const double C31870 = C31831 * C31869;
    const double C32115 = C31824 * C31869;
    const double C32183 = C31965 * C31869;
    const double C976 = (2 * C31965 * C31857 +
                         C31965 * (C31857 + C31869 * std::pow(C31965, 2))) /
                        C31602;
    const double C981 =
        (3 * (C31857 + C31869 * C31975) +
         C31965 * (2 * C31965 * C31869 +
                   C31965 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C31975))) /
        C31602;
    const double C1141 = (2 * ae * (C31912 + C31929 * C31975) +
                          C31824 * (C31857 + C31869 * C31975)) /
                         C31602;
    const double C32204 = C31965 * C32203;
    const double C32287 = C31824 * C32203;
    const double C32248 = C31859 + C32247;
    const double C32440 = C31824 * C32435;
    const double C32475 = C32471 + C32462;
    const double C32409 = C31824 * C32404;
    const double C32511 = C32505 + C32506;
    const double C31956 = C31831 * C31954;
    const double C32137 = C31965 * C31954;
    const double C32144 = C31824 * C31954;
    const double C1306 =
        (2 * C31965 * C31933 + C31965 * (C31933 + C31954 * C31975)) / C31595;
    const double C1462 = (C31824 * (C31933 + C31954 * C31975) +
                          (C31930 + C31951 * C31975) * ae) /
                         C31595;
    const double C32025 = C31824 * C32023;
    const double C1645 =
        (2 * ae * (2 * C32014 + C31965 * C32023) +
         C31824 * (2 * C31965 * C31869 +
                   C31965 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C31975))) /
        C31602;
    const double C975 = (3 * (C31912 + C31929 * C31975) +
                         C31965 * (2 * C32014 + C31965 * C32023)) /
                        C31595;
    const double C1642 = (C31824 * (2 * C32014 + C31965 * C32023) +
                          (2 * C32015 + C31965 * C32024) * ae) /
                         C31595;
    const double C32128 = ae * C32122;
    const double C32126 = C31824 * C32122;
    const double C32189 = C32186 + C32187;
    const double C32237 = C31965 * C32235;
    const double C32337 = C31824 * C32235;
    const double C32300 = ae * C32294;
    const double C32298 = C31824 * C32294;
    const double C32319 = C32309 + C32317;
    const double C32329 = C32326 + C32327;
    const double C32451 = ae * C32446;
    const double C32449 = C31824 * C32446;
    const double C32481 = C31939 + C32476;
    const double C32413 = C32410 + C32401;
    const double C32521 = C32224 + C32516;
    const double C31955 = C31941 + C31953;
    const double C32140 = C32138 * ae;
    const double C2261 = C31965 * C31930 + C32138 * C31828;
    const double C32148 = C32146 * ae;
    const double C32240 = C32226 + C32238;
    const double C32341 = C32339 * ae;
    const double C32322 = C32320 * ae;
    const double C6427 = 4 * (2 * C31999 + C31965 * C32008) +
                         C31965 * (3 * C32008 + C31965 * C32320);
    const double C6518 = C31824 * (3 * C32008 + C31965 * C32320);
    const double C7165 = 2 * C31999 + C31965 * C32008 + C32320 * C31828;
    const double C32485 = C32482 * ae;
    const double C12267 = 4 * (2 * C32048 + C31824 * C32101) +
                          C31824 * (3 * C32101 + C31824 * C32482);
    const double C32418 = C32396 + C32415;
    const double C32524 = C32522 * ae;
    const double C12357 = 4 * (2 * C32160 + C31824 * C32273) +
                          C31824 * (3 * C32273 + C31824 * C32522);
    const double C151 = C114 * C127;
    const double C270 = C114 * C249;
    const double C278 = C114 * C257;
    const double C6263 = C114 * C6255;
    const double C33006 = C32720 * C32710;
    const double C33047 = C33011 + C32720;
    const double C33014 = C32728 / C31637;
    const double C33010 = C32728 * C32710;
    const double C2743 = C33087 - (C32720 * C32711) / C31595;
    const double C33029 = C32856 * C32850;
    const double C33064 = C33031 + C32856;
    const double C33033 = C32863 / C31637;
    const double C33030 = C32863 * C32850;
    const double C7618 = C33091 - (C32856 * C32852) / C31595;
    const double C31611 = C31610 * C31604;
    const double C31662 = C31610 * ae;
    const double C1773 =
        (((0 - (C31593 * C31601) / C31595) * ae) / C31595 - (0 * be) / C31606) /
            (2 * C31595) +
        ((C31593 * ((C31610 * ae) / C31595 - C31601 / C31606) + C33027) * ae) /
            C31595 +
        (0 * ae) / C31595 - C31605 / C31602;
    const double C1775 =
        ((C31610 * ae) / C31595 - C31601 / C31606) / (2 * C31595) +
        ((C31593 * ((0 * ae) / C31595 - C31605 / C31602) + C32902) * ae) /
            C31595;
    const double C3462 = (C31610 * ae) / C31595 - C31601 / C31606;
    const double C10132 =
        ((-(0 * be) / C31595) / C31637 -
         ((0 - (C31593 * C31601) / C31595) * be) / C31595) /
            C31637 -
        ((C31593 * ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) +
          C20401) *
         be) /
            C31595 +
        (-C31607 / C31595) / C31637 - (0 * be) / C31595;
    const double C10134 =
        ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) / C31637 -
        ((C31593 * ((-C31607 / C31595) / C31637 - (0 * be) / C31595) + C32902) *
         be) /
            C31595;
    const double C20404 = (-C31657) / C31637 - (C31610 * be) / C31595;
    const double C31707 = C31701 * be;
    const double C24313 = C31747 * C360;
    const double C24305 = C31747 * C359;
    const double C24482 = C31747 * C1135;
    const double C31748 = 2 * C31747;
    const double C11929 =
        (C31747 / C31637 + (0 * ae) / C31595) / C31637 - (0 * be) / C31595;
    const double C13516 = C31747 / C31637 - (0 * be) / C31595;
    const double C22415 = C31747 / C31637 + (0 * ae) / C31595;
    const double C169 = C164 * C32798;
    const double C829 = C164 * C33089;
    const double C2748 = C164 * C33025;
    const double C5443 = C164 * C5436;
    const double C15108 = C164 * C15101;
    const double C17580 = C164 * C32856;
    const double C33066 = C33036 / C31595;
    const double C33084 = C33069 / C31637;
    const double C33085 = C33070 + C33040;
    const double C13507 = C33040 - C32903 / C31606;
    const double C33068 = C33037 / C31595;
    const double C13545 = C13505 * C131;
    const double C13524 = C13505 * C130;
    const double C13939 = C13505 * C262;
    const double C14093 = C13505 * C367;
    const double C14459 = C13505 * C264;
    const double C14445 = C13505 * C263;
    const double C14987 = C13505 * C702;
    const double C31732 = C31724 - C31729;
    const double C31731 = C31686 - C31728;
    const double C1790 = C33060 * C370;
    const double C2456 = C33079 * C370;
    const double C4051 = C32902 * C370;
    const double C10149 = C33060 * C370;
    const double C10791 = C10129 * C370;
    const double C20993 = C32902 * C370;
    const double C24314 = C24295 * C370;
    const double C24956 = C32905 * C370;
    const double C848 = C845 + C832;
    const double C1487 = C1483 + C1473;
    const double C5312 = C32902 * C1144;
    const double C6844 = C33060 * C1144;
    const double C7497 = C33079 * C1144;
    const double C11195 = C33060 * C1144;
    const double C11830 = C10129 * C1144;
    const double C22288 = C32902 * C1144;
    const double C25432 = C24295 * C1144;
    const double C26234 = C32905 * C1144;
    const double C32066 = ae * C32065;
    const double C2087 =
        (2 * C31900 + C31824 * C32065 + (C31895 + C31832 * C31828) * ae) /
        C31595;
    const double C170 = C165 * C32798;
    const double C833 = C165 * C33089;
    const double C2750 = C165 * C33025;
    const double C5446 = C165 * C5436;
    const double C15110 = C165 * C15101;
    const double C17583 = C165 * C32856;
    const double C171 = C166 * C32798;
    const double C840 = C166 * C33089;
    const double C2752 = C166 * C33025;
    const double C5451 = C166 * C5436;
    const double C15112 = C166 * C15101;
    const double C17588 = C166 * C32856;
    const double C498 = C494 * C32798;
    const double C830 = C494 * C33077;
    const double C1314 = C494 * C33089;
    const double C2749 = C494 * C32860;
    const double C3090 = C494 * C33025;
    const double C5444 = C494 * C5437;
    const double C5825 = C494 * C5436;
    const double C15109 = C494 * C32860;
    const double C15449 = C494 * C15101;
    const double C17581 = C494 * C32863;
    const double C17962 = C494 * C32856;
    const double C610 = C606 * C32798;
    const double C1474 = C606 * C33089;
    const double C3227 = C606 * C33025;
    const double C5977 = C606 * C5436;
    const double C15585 = C606 * C15101;
    const double C18114 = C606 * C32856;
    const double C497 = C493 * C32798;
    const double C834 = C493 * C33077;
    const double C1311 = C493 * C33089;
    const double C2751 = C493 * C32860;
    const double C3088 = C493 * C33025;
    const double C5447 = C493 * C5437;
    const double C5822 = C493 * C5436;
    const double C15111 = C493 * C32860;
    const double C15447 = C493 * C15101;
    const double C17584 = C493 * C32863;
    const double C17959 = C493 * C32856;
    const double C609 = C605 * C32798;
    const double C1469 = C605 * C33089;
    const double C3225 = C605 * C33025;
    const double C5974 = C605 * C5436;
    const double C15583 = C605 * C15101;
    const double C18111 = C605 * C32856;
    const double C152 = C32815 * C134;
    const double C477 = C32815 * C260;
    const double C3883 = C33027 * C260;
    const double C20825 = C20401 * C260;
    const double C836 = C32815 * C266;
    const double C4515 = C33027 * C266;
    const double C21307 = C20401 * C266;
    const double C589 = C32815 * C365;
    const double C1805 = C33079 * C365;
    const double C3485 = C32902 * C365;
    const double C4045 = C33027 * C365;
    const double C10164 = C10129 * C365;
    const double C20427 = C32902 * C365;
    const double C20987 = C20401 * C365;
    const double C24329 = C32905 * C365;
    const double C1468 = C32815 * C704;
    const double C2268 = C33079 * C704;
    const double C3885 = C32902 * C704;
    const double C5100 = C33027 * C704;
    const double C10606 = C10129 * C704;
    const double C20827 = C32902 * C704;
    const double C23983 = C20401 * C704;
    const double C24771 = C32905 * C704;
    const double C6264 = C32815 * C6257;
    const double C31935 = C31934 + C31932;
    const double C375 = C114 * C354;
    const double C3487 = C3464 * C354;
    const double C20429 = C20406 * C354;
    const double C711 = C114 * C700;
    const double C3620 = C3464 * C700;
    const double C20562 = C20406 * C700;
    const double C150 = C113 * C120;
    const double C474 = C113 * C239;
    const double C837 = C113 * C247;
    const double C586 = C113 * C344;
    const double C3221 = C113 * C695;
    const double C32019 = ae * C32018;
    const double C1139 =
        (C31965 * C31912 + C31824 * C32018 + C31824 * C32015 * ae) / C31595;
    const double C32042 = C31912 + C32040;
    const double C32012 = ae * C32011;
    const double C1138 =
        (C31903 + C31919 * C31975 + C31824 * C32011 + C31824 * C32008 * ae) /
        C31595;
    const double C6434 = C6431 + C997;
    const double C8099 = C8094 + C1652;
    const double C32470 = C32460 + C32105;
    const double C32107 = C32106 + C32100;
    const double C32179 = C31998 + C32177;
    const double C32220 = C32218 + C32219;
    const double C6343 = C114 * C6336;
    const double C8536 = C3464 * C6336;
    const double C21488 = C20406 * C6336;
    const double C6262 = C113 * C6253;
    const double C6608 = C113 * C6333;
    const double C32259 = C31991 + C32257;
    const double C32504 = C32496 + C32277;
    const double C32279 = C32278 + C32272;
    const double C32375 = ae * C32372;
    const double C32374 = C31824 * C32372;
    const double C32389 = 3 * C32372;
    const double C371 = (C31838 + C31847 * C31843 + C31917 + C31917 +
                         C31824 * (2 * ae * C31912 + C31824 * C31857)) /
                        C31602;
    const double C382 = C114 * C361;
    const double C1798 = C1777 * C361;
    const double C3736 = C3464 * C361;
    const double C10157 = C10136 * C361;
    const double C20678 = C20406 * C361;
    const double C24322 = C31747 * C361;
    const double C162 = C157 + C148;
    const double C488 = C484 + C271;
    const double C846 = C843 + C277;
    const double C600 = C596 + C376;
    const double C1481 = C1477 + C710;
    const double C1006 = C1001 + C988;
    const double C1480 = C1476 + C1151;
    const double C1146 =
        (C31965 * C31972 + C32003 + C32003 +
         C31824 * (2 * ae * C31998 + C31824 * C31965 * C31859)) /
        C31602;
    const double C1156 = C114 * C1137;
    const double C1955 = C1777 * C1137;
    const double C4207 = C3464 * C1137;
    const double C10314 = C10136 * C1137;
    const double C21149 = C20406 * C1137;
    const double C24479 = C31747 * C1137;
    const double C32054 = C32053 + C32050;
    const double C1012 = C1007 + C992;
    const double C1486 = C1482 + C1471;
    const double C1145 =
        (C31838 + C31847 * C31975 + C31996 + C31996 +
         C31824 * (2 * ae * C31991 + C31824 * (C31847 + C31855 * C31975))) /
        C31602;
    const double C1155 = C114 * C1136;
    const double C1963 = C1777 * C1136;
    const double C5316 = C3464 * C1136;
    const double C10322 = C10136 * C1136;
    const double C21664 = C20406 * C1136;
    const double C24487 = C31747 * C1136;
    const double C6268 = C6266 + C996;
    const double C6616 = C6614 + C1651;
    const double C32371 = C32358 + C32368;
    const double C32086 = ae * C32084;
    const double C32085 = C31824 * C32084;
    const double C32351 = 3 * C32084;
    const double C32166 = C32165 + C32162;
    const double C31871 = C31863 + C31870;
    const double C32125 = C32121 + C32115;
    const double C989 = C32815 * C976;
    const double C1466 = C32815 * C1141;
    const double C4513 = C32902 * C1141;
    const double C21305 = C32902 * C1141;
    const double C32205 = C32202 + C32204;
    const double C32297 = C32293 + C32287;
    const double C6429 =
        (4 * (2 * C32169 + C31965 * C32248) +
         C31965 * (3 * C32248 +
                   C31965 * (2 * C31965 * C32246 +
                             C31965 * (C32246 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C31975)))) /
        C31602;
    const double C6520 =
        (2 * ae *
             (3 * C32007 +
              C31965 *
                  (2 * C32170 + C31965 * (C31939 + C31831 * C31945 * C31975))) +
         C31824 * (3 * C32248 +
                   C31965 * (2 * C31965 * C32246 +
                             C31965 * (C32246 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C31975)))) /
        C31602;
    const double C32445 = C32439 + C32440;
    const double C32480 = C31824 * C32475;
    const double C32412 = C32398 + C32409;
    const double C32515 = C31824 * C32511;
    const double C31958 = C31938 + C31956;
    const double C32139 = C31824 * C32137;
    const double C32147 = C32144 + C32145;
    const double C1315 = C114 * C1306;
    const double C1475 = C114 * C1462;
    const double C3635 = C3464 * C1462;
    const double C20577 = C20406 * C1462;
    const double C32027 = C32025 + C32026;
    const double C998 = C114 * C975;
    const double C1653 = C114 * C1642;
    const double C4529 = C3464 * C1642;
    const double C21872 = C20406 * C1642;
    const double C32129 = C31929 + C32126;
    const double C32192 = ae * C32189;
    const double C32191 = C31824 * C32189;
    const double C32239 = C32223 + C32237;
    const double C32340 = C32337 + C32338;
    const double C32301 = C32212 + C32298;
    const double C32321 = C31824 * C32319;
    const double C6428 = (4 * (2 * C31998 + C31965 * C32007) +
                          C31965 * (3 * C32007 + C31965 * C32319)) /
                         C31595;
    const double C6519 = (C31824 * (3 * C32007 + C31965 * C32319) +
                          (3 * C32008 + C31965 * C32320) * ae) /
                         C31595;
    const double C32332 = ae * C32329;
    const double C32331 = C31824 * C32329;
    const double C32452 = C32170 + C32449;
    const double C32484 = C32481 + C32473;
    const double C32419 = ae * C32413;
    const double C32417 = C31824 * C32413;
    const double C32523 = C32521 + C32513;
    const double C31957 = C31955 * ae;
    const double C121 = 5 * (3 * C31913 + C31831 * C31930) +
                        C31831 * (4 * C31930 + C31831 * C31955);
    const double C248 = 3 * C31913 + C31831 * C31930 + C31955 * C31975;
    const double C353 = 3 * C31913 + C31831 * C31930 + C31955 * C31828;
    const double C470 = C31965 * (4 * C31930 + C31831 * C31955);
    const double C582 = C31824 * (4 * C31930 + C31831 * C31955);
    const double C696 = C31824 * C31965 * C31955;
    const double C32242 = C32240 * ae;
    const double C6254 = 5 * (3 * C31992 + C31965 * C32217) +
                         C31965 * (4 * C32217 + C31965 * C32240);
    const double C6335 = 3 * C31992 + C31965 * C32217 + C32240 * C31828;
    const double C6604 = C31824 * (4 * C32217 + C31965 * C32240);
    const double C32422 = C32418 * ae;
    const double C12080 = 5 * (3 * C32078 + C31824 * C32370) +
                          C31824 * (4 * C32370 + C31824 * C32418);
    const double C33043 = C33006 / C31595;
    const double C33074 = C33047 / C31637;
    const double C33075 = C33049 + C33014;
    const double C2745 = C33014 - C32726 / C31606;
    const double C33046 = C33010 / C31595;
    const double C33061 = C33029 / C31595;
    const double C33081 = C33064 / C31637;
    const double C33082 = C33065 + C33033;
    const double C7620 = C33033 - C32861 / C31606;
    const double C33063 = C33030 / C31595;
    const double C7632 = C165 * C7618;
    const double C7625 = C164 * C7618;
    const double C7963 = C494 * C7618;
    const double C8098 = C606 * C7618;
    const double C31619 = C31593 * C31611;
    const double C31664 = C31611 / C31606;
    const double C1772 =
        (ae * -2 * C31601) / (C31602 * 2 * C31595) +
        (((C31593 * ((-4 * C31605) / C31595 - (C31593 * C31611) / C31595) *
           ae) /
              C31595 +
          2 * ((C31610 * ae) / C31595 - C31601 / C31606)) *
         ae) /
            C31595 -
        C31611 / C31606;
    const double C1776 = (-C31611 / C31595) / (4 * C31602);
    const double C3463 = (-C31611 / C31595) / (2 * C31595);
    const double C10135 = (-C31611 / C31595) / (4 * C31602);
    const double C11928 =
        (-C31611 / C31595) / (4 * C31602 * std::pow(C31637, 2));
    const double C13515 = (-C31611 / C31595) / (4 * C31655);
    const double C20405 = (-C31611 / C31595) / C31637;
    const double C22414 = (-C31611 / C31595) / (4 * C31655);
    const double C24300 = (-C31611 / C31595) / C31742;
    const double C31675 = C31662 / C31595;
    const double C1809 = C1773 * C126;
    const double C1807 = C1773 * C125;
    const double C1792 = C1773 * C124;
    const double C1783 = C1773 * C123;
    const double C1779 = C1773 * C122;
    const double C1967 = C1773 * C256;
    const double C1964 = C1773 * C255;
    const double C1961 = C1773 * C254;
    const double C1960 = C1773 * C253;
    const double C1957 = C1773 * C252;
    const double C1954 = C1773 * C251;
    const double C2113 = C1773 * C361;
    const double C2110 = C1773 * C360;
    const double C2107 = C1773 * C359;
    const double C2106 = C1773 * C358;
    const double C2103 = C1773 * C357;
    const double C2100 = C1773 * C356;
    const double C2277 = C1773 * C250;
    const double C2459 = C1773 * C355;
    const double C2641 = C1773 * C699;
    const double C2638 = C1773 * C698;
    const double C2635 = C1773 * C697;
    const double C6860 = C1773 * C973;
    const double C6858 = C1773 * C972;
    const double C7017 = C1773 * C1136;
    const double C7014 = C1773 * C1135;
    const double C7013 = C1773 * C1134;
    const double C7175 = C1773 * C971;
    const double C7336 = C1773 * C1133;
    const double C7500 = C1773 * C1640;
    const double C16860 = C1773 * C1137;
    const double C1810 = C1775 * C354;
    const double C1804 = C1775 * C355;
    const double C1795 = C1775 * C356;
    const double C1786 = C1775 * C357;
    const double C1780 = C1775 * C358;
    const double C1968 = C1775 * C1132;
    const double C1965 = C1775 * C1133;
    const double C1962 = C1775 * C1134;
    const double C1959 = C1775 * C697;
    const double C1956 = C1775 * C698;
    const double C1953 = C1775 * C699;
    const double C2105 = C1775 * C359;
    const double C2102 = C1775 * C360;
    const double C2099 = C1775 * C361;
    const double C2278 = C1775 * C700;
    const double C2639 = C1775 * C1137;
    const double C2636 = C1775 * C1135;
    const double C6861 = C1775 * C6336;
    const double C6855 = C1775 * C1640;
    const double C7012 = C1775 * C1136;
    const double C7176 = C1775 * C1641;
    const double C3492 = C3462 * C127;
    const double C3490 = C3462 * C126;
    const double C3481 = C3462 * C125;
    const double C3475 = C3462 * C124;
    const double C3469 = C3462 * C123;
    const double C3466 = C3462 * C122;
    const double C3634 = C3462 * C257;
    const double C3632 = C3462 * C256;
    const double C3630 = C3462 * C255;
    const double C3628 = C3462 * C254;
    const double C3627 = C3462 * C253;
    const double C3625 = C3462 * C252;
    const double C3623 = C3462 * C251;
    const double C3621 = C3462 * C250;
    const double C3746 = C3462 * C361;
    const double C3744 = C3462 * C360;
    const double C3742 = C3462 * C359;
    const double C3741 = C3462 * C358;
    const double C3739 = C3462 * C357;
    const double C3737 = C3462 * C356;
    const double C3735 = C3462 * C355;
    const double C3892 = C3462 * C249;
    const double C4054 = C3462 * C354;
    const double C4210 = C3462 * C700;
    const double C4208 = C3462 * C699;
    const double C4206 = C3462 * C698;
    const double C4204 = C3462 * C697;
    const double C4528 = C3462 * C970;
    const double C4526 = C3462 * C971;
    const double C4524 = C3462 * C972;
    const double C4702 = C3462 * C1137;
    const double C4700 = C3462 * C1135;
    const double C5319 = C3462 * C1132;
    const double C5317 = C3462 * C1133;
    const double C5315 = C3462 * C1134;
    const double C8537 = C3462 * C974;
    const double C8535 = C3462 * C973;
    const double C8697 = C3462 * C1136;
    const double C9300 = C3462 * C1641;
    const double C9298 = C3462 * C1640;
    const double C9509 = C3462 * C6255;
    const double C10011 = C3462 * C6336;
    const double C10168 = C10132 * C126;
    const double C10166 = C10132 * C125;
    const double C10151 = C10132 * C124;
    const double C10142 = C10132 * C123;
    const double C10138 = C10132 * C122;
    const double C10326 = C10132 * C256;
    const double C10323 = C10132 * C255;
    const double C10320 = C10132 * C254;
    const double C10319 = C10132 * C253;
    const double C10316 = C10132 * C252;
    const double C10313 = C10132 * C251;
    const double C10454 = C10132 * C361;
    const double C10451 = C10132 * C360;
    const double C10448 = C10132 * C359;
    const double C10447 = C10132 * C358;
    const double C10444 = C10132 * C357;
    const double C10441 = C10132 * C356;
    const double C10615 = C10132 * C250;
    const double C10794 = C10132 * C355;
    const double C10967 = C10132 * C699;
    const double C10964 = C10132 * C698;
    const double C10961 = C10132 * C697;
    const double C11211 = C10132 * C973;
    const double C11209 = C10132 * C972;
    const double C11359 = C10132 * C1136;
    const double C11356 = C10132 * C1135;
    const double C11355 = C10132 * C1134;
    const double C11514 = C10132 * C971;
    const double C11672 = C10132 * C1133;
    const double C11833 = C10132 * C1640;
    const double C12804 = C10132 * C1137;
    const double C10169 = C10134 * C354;
    const double C10163 = C10134 * C355;
    const double C10154 = C10134 * C356;
    const double C10145 = C10134 * C357;
    const double C10139 = C10134 * C358;
    const double C10327 = C10134 * C1132;
    const double C10324 = C10134 * C1133;
    const double C10321 = C10134 * C1134;
    const double C10318 = C10134 * C697;
    const double C10315 = C10134 * C698;
    const double C10312 = C10134 * C699;
    const double C10446 = C10134 * C359;
    const double C10443 = C10134 * C360;
    const double C10440 = C10134 * C361;
    const double C10616 = C10134 * C700;
    const double C10965 = C10134 * C1137;
    const double C10962 = C10134 * C1135;
    const double C11212 = C10134 * C6336;
    const double C11206 = C10134 * C1640;
    const double C11354 = C10134 * C1136;
    const double C11515 = C10134 * C1641;
    const double C20434 = C20404 * C127;
    const double C20432 = C20404 * C126;
    const double C20423 = C20404 * C125;
    const double C20417 = C20404 * C124;
    const double C20411 = C20404 * C123;
    const double C20408 = C20404 * C122;
    const double C20576 = C20404 * C257;
    const double C20574 = C20404 * C256;
    const double C20572 = C20404 * C255;
    const double C20570 = C20404 * C254;
    const double C20569 = C20404 * C253;
    const double C20567 = C20404 * C252;
    const double C20565 = C20404 * C251;
    const double C20563 = C20404 * C250;
    const double C20688 = C20404 * C361;
    const double C20686 = C20404 * C360;
    const double C20684 = C20404 * C359;
    const double C20683 = C20404 * C358;
    const double C20681 = C20404 * C357;
    const double C20679 = C20404 * C356;
    const double C20677 = C20404 * C355;
    const double C20834 = C20404 * C249;
    const double C20996 = C20404 * C354;
    const double C21152 = C20404 * C700;
    const double C21150 = C20404 * C699;
    const double C21148 = C20404 * C698;
    const double C21146 = C20404 * C697;
    const double C21489 = C20404 * C974;
    const double C21487 = C20404 * C973;
    const double C21485 = C20404 * C972;
    const double C21479 = C20404 * C971;
    const double C21670 = C20404 * C1137;
    const double C21668 = C20404 * C1136;
    const double C21666 = C20404 * C1135;
    const double C21665 = C20404 * C1134;
    const double C21663 = C20404 * C1133;
    const double C21871 = C20404 * C970;
    const double C22075 = C20404 * C1132;
    const double C22293 = C20404 * C1641;
    const double C22291 = C20404 * C1640;
    const double C27476 = C20404 * C6255;
    const double C27978 = C20404 * C6336;
    const double C31715 = C31707 / C31595;
    const double C33097 = C33066 + C33093;
    const double C13506 = C33084 - (C32905 * C32894) / C31595;
    const double C22429 = C33085 * C370;
    const double C28187 = C33085 * C1144;
    const double C11918 = C33085 / C31637 - C32903 / C31745;
    const double C13530 = C13507 * C370;
    const double C14449 = C13507 * C1144;
    const double C33094 = C33068 + C33084;
    const double C851 = C848 * C33057;
    const double C1313 = C848 * C33077;
    const double C3089 = C848 * C32860;
    const double C5445 = C848 * C33057;
    const double C5824 = C848 * C5437;
    const double C15448 = C848 * C32860;
    const double C17582 = C848 * C17575;
    const double C17961 = C848 * C32863;
    const double C1491 = C1487 * C33077;
    const double C3226 = C1487 * C32860;
    const double C5976 = C1487 * C5437;
    const double C15584 = C1487 * C32860;
    const double C18113 = C1487 * C32863;
    const double C2093 =
        (2 * (2 * ae * C31897 + C31824 * C31838) + C32066 + C32066 +
         C31824 * (C31838 + C32063 + C32063 +
                   C31824 * (2 * ae * C31888 + C31824 * C31847))) /
        C31602;
    const double C2108 = C1775 * C2087;
    const double C2104 = C1777 * C2087;
    const double C3743 = C3464 * C2087;
    const double C10449 = C10134 * C2087;
    const double C10445 = C10136 * C2087;
    const double C13521 = C13516 * C2087;
    const double C20685 = C20406 * C2087;
    const double C22420 = C22415 * C2087;
    const double C24610 = C31747 * C2087;
    const double C842 = C833 + C834;
    const double C2756 = C2750 + C2751;
    const double C5452 = C5446 + C5447;
    const double C15116 = C15110 + C15111;
    const double C17589 = C17583 + C17584;
    const double C31936 = ae * C31935;
    const double C362 = (2 * C31903 + C31831 * C31912 + C31824 * C31935 +
                         C31824 * C31930 * ae) /
                        C31595;
    const double C158 = C150 + C151;
    const double C483 = C474 + C270;
    const double C844 = C837 + C278;
    const double C595 = C586 + C375;
    const double C3228 = C3221 + C711;
    const double C1148 =
        (C31965 * C31857 + C32019 + C32019 +
         C31824 * (2 * ae * C32014 + C31824 * C31965 * C31869)) /
        C31602;
    const double C1158 = C114 * C1139;
    const double C1952 = C1777 * C1139;
    const double C2642 = C1775 * C1139;
    const double C4209 = C3464 * C1139;
    const double C4704 = C3462 * C1139;
    const double C10311 = C10136 * C1139;
    const double C10968 = C10134 * C1139;
    const double C21151 = C20406 * C1139;
    const double C23589 = C20404 * C1139;
    const double C24476 = C31747 * C1139;
    const double C32043 = C32042 + C32039;
    const double C1147 =
        (C31972 + C31859 * C31975 + C32012 + C32012 +
         C31824 *
             (2 * ae * C32007 + C31824 * (C31859 + C31831 * C31867 * C31975))) /
        C31602;
    const double C1157 = C114 * C1138;
    const double C1966 = C1777 * C1138;
    const double C5318 = C3464 * C1138;
    const double C7337 = C1775 * C1138;
    const double C8699 = C3462 * C1138;
    const double C10325 = C10136 * C1138;
    const double C11673 = C10134 * C1138;
    const double C21672 = C20404 * C1138;
    const double C21662 = C20406 * C1138;
    const double C24490 = C31747 * C1138;
    const double C6435 = C6434 + C997;
    const double C8100 = C8099 + C1652;
    const double C32109 = ae * C32107;
    const double C32108 = C31824 * C32107;
    const double C32463 = 3 * C32107;
    const double C32180 = C32179 + C32176;
    const double C32221 = ae * C32220;
    const double C6337 = (2 * C31982 + C31965 * C31991 + C31824 * C32220 +
                          C31824 * C32217 * ae) /
                         C31595;
    const double C6267 = C6262 + C6263;
    const double C6613 = C6608 + C6343;
    const double C32260 = C32259 + C32256;
    const double C32281 = ae * C32279;
    const double C32280 = C31824 * C32279;
    const double C32499 = 3 * C32279;
    const double C32397 = C32384 + C32375;
    const double C32376 = C32352 + C32374;
    const double C1799 = C33060 * C371;
    const double C2450 = C33079 * C371;
    const double C4047 = C32902 * C371;
    const double C10158 = C33060 * C371;
    const double C10785 = C10129 * C371;
    const double C13539 = C13507 * C371;
    const double C20989 = C32902 * C371;
    const double C22438 = C33085 * C371;
    const double C24323 = C24295 * C371;
    const double C24950 = C32905 * C371;
    const double C167 = C162 + C149;
    const double C492 = C488 + C477;
    const double C849 = C846 + C836;
    const double C604 = C600 + C589;
    const double C1485 = C1481 + C1468;
    const double C2272 = C33060 * C1146;
    const double C5102 = C32902 * C1146;
    const double C10610 = C33060 * C1146;
    const double C13202 = C10129 * C1146;
    const double C13935 = C13507 * C1146;
    const double C17258 = C33079 * C1146;
    const double C22072 = C32902 * C1146;
    const double C22834 = C33085 * C1146;
    const double C24775 = C24295 * C1146;
    const double C26025 = C32905 * C1146;
    const double C32055 = ae * C32054;
    const double C2086 =
        (2 * C31907 + C31824 * C32054 + (C31904 + C31921 * C31828) * ae) /
        C31595;
    const double C1312 = C1012 * C33057;
    const double C5823 = C1012 * C33057;
    const double C7628 = C1012 * C33034;
    const double C15823 = C1012 * C33034;
    const double C17960 = C1012 * C17575;
    const double C1490 = C1486 * C33057;
    const double C5975 = C1486 * C33057;
    const double C18112 = C1486 * C17575;
    const double C6850 = C33060 * C1145;
    const double C7491 = C33079 * C1145;
    const double C9295 = C32902 * C1145;
    const double C11201 = C33060 * C1145;
    const double C11824 = C10129 * C1145;
    const double C14455 = C13507 * C1145;
    const double C22284 = C32902 * C1145;
    const double C25440 = C24295 * C1145;
    const double C28193 = C33085 * C1145;
    const double C31576 = C32905 * C1145;
    const double C6270 = C6268 + C6261;
    const double C6618 = C6616 + C6611;
    const double C32087 = C32070 + C32085;
    const double C32167 = ae * C32166;
    const double C2628 =
        (2 * C31986 + C31824 * C32166 + (C31983 + C32157 * C31828) * ae) /
        C31595;
    const double C135 =
        (5 * (3 * C31857 + C31831 * C31871) +
         C31831 *
             (4 * C31871 +
              C31831 * (3 * C31869 +
                        C31831 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C259 = ((yP - yQ) * (3 * C31857 + C31831 * C31871)) / C31602;
    const double C267 = (2 * C31831 * C31847 + C31831 * C31857 +
                         C31871 * std::pow(yP - yQ, 2)) /
                        C31602;
    const double C268 =
        (3 * C31857 + C31831 * C31871 +
         (3 * C31869 +
          C31831 * (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843))) *
             std::pow(yP - yQ, 2)) /
        C31602;
    const double C364 =
        (2 * ae *
             (3 * (C31834 * C31833 * C31883 + C31885 * C31843) +
              C31831 *
                  (2 * C31831 * C31885 +
                   C31831 * (C31885 + C31851 * C31850 * C31883 * C31843))) +
         C31824 * (3 * C31857 + C31831 * C31871)) /
        C31602;
    const double C472 =
        ((yP - yQ) *
         (4 * C31871 +
          C31831 * (3 * C31869 +
                    C31831 * (2 * C31831 * C31867 +
                              C31831 * (C31867 +
                                        (C31861 * C31862 +
                                         C31828 * bs[8] * std::pow(C31822, 8)) *
                                            C31827 * C31843))))) /
        C31602;
    const double C705 =
        (2 * ae * C31965 * C31933 + C31824 * C31965 * C31871) / C31602;
    const double C1307 =
        (2 * C31965 * C31871 +
         C31965 * (C31871 +
                   (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843)) *
                       C31975)) /
        C31602;
    const double C1463 =
        (2 * ae * (C31933 + C31954 * C31975) +
         C31824 * (C31871 +
                   (2 * C31831 * C31867 +
                    C31831 * (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843)) *
                       C31975)) /
        C31602;
    const double C1011 = C1006 + C989;
    const double C1484 = C1480 + C1466;
    const double C6258 =
        (5 * (3 * C32198 + C31965 * C32205) +
         C31965 *
             (4 * C32205 +
              C31965 * (3 * C32203 +
                        C31965 * (2 * C31965 * C31867 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31975))))) /
        C31602;
    const double C6339 =
        (2 * ae *
             (3 * C31991 +
              C31965 * (2 * C32156 + C31965 * (C31885 + C31924 * C31975))) +
         C31824 * (3 * C32198 + C31965 * C32205)) /
        C31602;
    const double C32483 = C32470 + C32480;
    const double C32416 = C31824 * C32412;
    const double C32520 = C32504 + C32515;
    const double C31959 = C31824 * C31958;
    const double C584 =
        (2 * ae * (4 * C31933 + C31831 * C31958) +
         C31824 *
             (4 * C31871 +
              C31831 * (3 * C31869 +
                        C31831 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C706 =
        (2 * ae * C31965 * C31958 +
         C31824 * C31965 *
             (3 * C31869 +
              C31831 *
                  (2 * C31831 * C31867 +
                   C31831 * (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C128 = (5 * (3 * C31912 + C31831 * C31933) +
                         C31831 * (4 * C31933 + C31831 * C31958)) /
                        C31595;
    const double C258 =
        (3 * C31912 + C31831 * C31933 + C31958 * C31975) / C31595;
    const double C471 = (C31965 * (4 * C31933 + C31831 * C31958)) / C31595;
    const double C583 = (C31824 * (4 * C31933 + C31831 * C31958) +
                         (4 * C31930 + C31831 * C31955) * ae) /
                        C31595;
    const double C701 =
        (C31824 * C31965 * C31958 + C31965 * C31955 * ae) / C31595;
    const double C32141 = C32139 + C32140;
    const double C32150 = ae * C32147;
    const double C32149 = C31824 * C32147;
    const double C32028 = ae * C32027;
    const double C1140 =
        (C31912 + C31929 * C31975 + C31824 * C32027 + C31824 * C32024 * ae) /
        C31595;
    const double C32130 = C32129 + C32123;
    const double C32193 = C32014 + C32191;
    const double C32241 = C31824 * C32239;
    const double C6606 =
        (2 * ae * (4 * C32216 + C31965 * C32239) +
         C31824 *
             (4 * C32205 +
              C31965 * (3 * C32203 +
                        C31965 * (2 * C31965 * C31867 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31975))))) /
        C31602;
    const double C6256 = (5 * (3 * C31991 + C31965 * C32216) +
                          C31965 * (4 * C32216 + C31965 * C32239)) /
                         C31595;
    const double C6605 = (C31824 * (4 * C32216 + C31965 * C32239) +
                          (4 * C32217 + C31965 * C32240) * ae) /
                         C31595;
    const double C32343 = ae * C32340;
    const double C32342 = C31824 * C32340;
    const double C32302 = C32301 + C32295;
    const double C32323 = C32321 + C32322;
    const double C6433 = C114 * C6428;
    const double C6522 = C114 * C6519;
    const double C8538 = C3464 * C6519;
    const double C21490 = C20406 * C6519;
    const double C32333 = C32007 + C32331;
    const double C32453 = C32452 + C32447;
    const double C32487 = ae * C32484;
    const double C32486 = C31824 * C32484;
    const double C32421 = C32390 + C32417;
    const double C32526 = ae * C32523;
    const double C32525 = C31824 * C32523;
    const double C33095 = C33043 + C33087;
    const double C2744 = C33074 - (C32728 * C32711) / C31595;
    const double C106 = C33075 / C31637 - C32726 / C31745;
    const double C33088 = C33046 + C33074;
    const double C33096 = C33061 + C33091;
    const double C7619 = C33081 - (C32863 * C32852) / C31595;
    const double C15822 = C848 * C33082;
    const double C16155 = C1012 * C33082;
    const double C16289 = C1486 * C33082;
    const double C6188 = C33082 / C31637 - C32861 / C31745;
    const double C7627 = C848 * C7620;
    const double C7961 = C1012 * C7620;
    const double C8096 = C1486 * C7620;
    const double C33092 = C33063 + C33081;
    const double C31667 = C31619 / C31606;
    const double C31661 = C31619 / C31595;
    const double C1774 =
        (((-4 * C31605) / C31595 - C31619 / C31595) * ae) / C31606 +
        ((2 * ((0 * ae) / C31595 - C31605 / C31602) - C31619 / C31606) * ae) /
            C31595;
    const double C3461 =
        (((-4 * C31605) / C31595 - C31619 / C31595) * ae) / C31595;
    const double C10131 =
        (-(be * -2 * C31601) / C31602) / C31637 -
        ((2 * ((-C31601 / C31595) / C31637 - (C31610 * be) / C31595) -
          (C31593 * ((-4 * C31605) / C31595 - C31619 / C31595) * be) / C31595) *
         be) /
            C31595 -
        C31611 / C31606;
    const double C10133 =
        (-(((-4 * C31605) / C31595 - C31619 / C31595) * be) / C31595) / C31637 -
        ((2 * ((-C31607 / C31595) / C31637 - (0 * be) / C31595) -
          C31619 / C31606) *
         be) /
            C31595;
    const double C1806 = C1772 * C118;
    const double C1791 = C1772 * C117;
    const double C1782 = C1772 * C116;
    const double C2275 = C1772 * C242;
    const double C2269 = C1772 * C241;
    const double C2457 = C1772 * C347;
    const double C2451 = C1772 * C346;
    const double C6857 = C1772 * C966;
    const double C6845 = C1772 * C244;
    const double C6839 = C1772 * C243;
    const double C7169 = C1772 * C245;
    const double C7498 = C1772 * C692;
    const double C7492 = C1772 * C1125;
    const double C17259 = C1772 * C693;
    const double C1800 = C1776 * C352;
    const double C1797 = C1776 * C351;
    const double C1788 = C1776 * C350;
    const double C2271 = C1776 * C1128;
    const double C2265 = C1776 * C1130;
    const double C2453 = C1776 * C2080;
    const double C2447 = C1776 * C2079;
    const double C6851 = C1776 * C6334;
    const double C6849 = C1776 * C1127;
    const double C6843 = C1776 * C1126;
    const double C7173 = C1776 * C1129;
    const double C7494 = C1776 * C2625;
    const double C7488 = C1776 * C7001;
    const double C17255 = C1776 * C2626;
    const double C3486 = C3463 * C344;
    const double C3483 = C3463 * C345;
    const double C3477 = C3463 * C346;
    const double C3471 = C3463 * C347;
    const double C3888 = C3463 * C693;
    const double C3884 = C3463 * C694;
    const double C3880 = C3463 * C695;
    const double C4050 = C3463 * C350;
    const double C4046 = C3463 * C351;
    const double C4042 = C3463 * C352;
    const double C4520 = C3463 * C1125;
    const double C4516 = C3463 * C1124;
    const double C4512 = C3463 * C1123;
    const double C4510 = C3463 * C692;
    const double C5101 = C3463 * C1128;
    const double C5097 = C3463 * C1130;
    const double C5311 = C3463 * C1126;
    const double C8531 = C3463 * C1637;
    const double C8527 = C3463 * C1638;
    const double C9090 = C3463 * C1129;
    const double C9294 = C3463 * C1127;
    const double C9505 = C3463 * C6333;
    const double C10007 = C3463 * C6334;
    const double C10159 = C10135 * C352;
    const double C10156 = C10135 * C351;
    const double C10147 = C10135 * C350;
    const double C10609 = C10135 * C1128;
    const double C10603 = C10135 * C1130;
    const double C10788 = C10135 * C2080;
    const double C10782 = C10135 * C2079;
    const double C11202 = C10135 * C6334;
    const double C11200 = C10135 * C1127;
    const double C11194 = C10135 * C1126;
    const double C11512 = C10135 * C1129;
    const double C11827 = C10135 * C2625;
    const double C11821 = C10135 * C7001;
    const double C13199 = C10135 * C2626;
    const double C13534 = C13515 * C2079;
    const double C13531 = C13515 * C2080;
    const double C13932 = C13515 * C2626;
    const double C14086 = C13515 * C2083;
    const double C14452 = C13515 * C7001;
    const double C14450 = C13515 * C2625;
    const double C14980 = C13515 * C7002;
    const double C20428 = C20405 * C344;
    const double C20425 = C20405 * C345;
    const double C20419 = C20405 * C346;
    const double C20413 = C20405 * C347;
    const double C20830 = C20405 * C693;
    const double C20826 = C20405 * C694;
    const double C20822 = C20405 * C695;
    const double C20992 = C20405 * C350;
    const double C20988 = C20405 * C351;
    const double C20984 = C20405 * C352;
    const double C21304 = C20405 * C1123;
    const double C21302 = C20405 * C1124;
    const double C21481 = C20405 * C1637;
    const double C21475 = C20405 * C1638;
    const double C21472 = C20405 * C1125;
    const double C21468 = C20405 * C692;
    const double C22071 = C20405 * C1128;
    const double C22067 = C20405 * C1129;
    const double C22287 = C20405 * C1126;
    const double C22283 = C20405 * C1127;
    const double C23980 = C20405 * C1130;
    const double C27472 = C20405 * C6333;
    const double C27974 = C20405 * C6334;
    const double C22433 = C22414 * C2079;
    const double C22430 = C22414 * C2080;
    const double C22831 = C22414 * C2626;
    const double C22985 = C22414 * C2083;
    const double C28190 = C22414 * C7001;
    const double C28188 = C22414 * C2625;
    const double C28718 = C22414 * C7002;
    const double C24324 = C24300 * C352;
    const double C24321 = C24300 * C351;
    const double C24312 = C24300 * C350;
    const double C24774 = C24300 * C1128;
    const double C24768 = C24300 * C1130;
    const double C24953 = C24300 * C2080;
    const double C24947 = C24300 * C2079;
    const double C25439 = C24300 * C1127;
    const double C25433 = C24300 * C1129;
    const double C25431 = C24300 * C1126;
    const double C26022 = C24300 * C2626;
    const double C26231 = C24300 * C2625;
    const double C31003 = C24300 * C6334;
    const double C31573 = C24300 * C7001;
    const double C31683 = C31675 - C31663;
    const double C22444 = C33097 * C131;
    const double C22423 = C33097 * C130;
    const double C22838 = C33097 * C262;
    const double C22992 = C33097 * C367;
    const double C28197 = C33097 * C264;
    const double C28183 = C33097 * C263;
    const double C28725 = C33097 * C702;
    const double C11915 =
        (C33090 + 2 * C32898) / C31637 - (C33097 * C32894) / C31595;
    const double C13542 = C13506 * C366;
    const double C13527 = C13506 * C367;
    const double C13937 = C13506 * C703;
    const double C14091 = C13506 * C370;
    const double C14457 = C13506 * C1143;
    const double C14447 = C13506 * C702;
    const double C14985 = C13506 * C1144;
    const double C22441 = C33094 * C366;
    const double C22426 = C33094 * C367;
    const double C22836 = C33094 * C703;
    const double C22990 = C33094 * C370;
    const double C28195 = C33094 * C1143;
    const double C28185 = C33094 * C702;
    const double C28723 = C33094 * C1144;
    const double C11916 =
        (C33079 + 2 * C32905 + C33097) / C31637 - (C33094 * C32894) / C31595;
    const double C11917 = (C33060 + C32902 / C31595 + C33094) / C31637 -
                          (C33085 * C32894) / C31595;
    const double C372 =
        (2 * C31831 * C31847 + C31831 * C31857 + C31936 + C31936 +
         C31824 * (2 * ae * C31933 + C31824 * C31871)) /
        C31602;
    const double C383 = C114 * C362;
    const double C1801 = C1777 * C362;
    const double C2460 = C1775 * C362;
    const double C3748 = C3462 * C362;
    const double C3734 = C3464 * C362;
    const double C10160 = C10136 * C362;
    const double C10795 = C10134 * C362;
    const double C20690 = C20404 * C362;
    const double C20676 = C20406 * C362;
    const double C24325 = C31747 * C362;
    const double C163 = C158 + C151;
    const double C487 = C483 + C270;
    const double C847 = C844 + C278;
    const double C599 = C595 + C375;
    const double C3229 = C3228 + C711;
    const double C2266 = C33060 * C1148;
    const double C5098 = C32902 * C1148;
    const double C10604 = C33060 * C1148;
    const double C23981 = C32902 * C1148;
    const double C24769 = C24295 * C1148;
    const double C32044 = ae * C32043;
    const double C2085 =
        (2 * C31916 + C31824 * C32043 + (C31913 + C31926 * C31828) * ae) /
        C31595;
    const double C7174 = C33060 * C1147;
    const double C9091 = C32902 * C1147;
    const double C11513 = C33060 * C1147;
    const double C22068 = C32902 * C1147;
    const double C25434 = C24295 * C1147;
    const double C6436 = C6435 + C6432;
    const double C8101 = C8100 + C8095;
    const double C32110 = C32093 + C32108;
    const double C32181 = ae * C32180;
    const double C2629 =
        (2 * C32002 + C31824 * C32180 + (C31999 + C32171 * C31828) * ae) /
        C31595;
    const double C6340 = (2 * C32155 + C31965 * C32198 + C32221 + C32221 +
                          C31824 * (2 * ae * C32216 + C31824 * C32205)) /
                         C31602;
    const double C6344 = C114 * C6337;
    const double C6852 = C1777 * C6337;
    const double C7501 = C1775 * C6337;
    const double C9299 = C3464 * C6337;
    const double C9615 = C3462 * C6337;
    const double C11203 = C10136 * C6337;
    const double C11834 = C10134 * C6337;
    const double C22292 = C20406 * C6337;
    const double C25447 = C31747 * C6337;
    const double C27582 = C20404 * C6337;
    const double C6269 = C6267 + C6263;
    const double C6615 = C6613 + C6343;
    const double C32261 = ae * C32260;
    const double C7004 =
        (2 * C31995 + C31824 * C32260 + (C31992 + C32213 * C31828) * ae) /
        C31595;
    const double C32282 = C32265 + C32280;
    const double C32403 = C32397 + C32375;
    const double C32377 = C32376 + C32365;
    const double C172 = C167 * C32798;
    const double C2755 = C167 * C33025;
    const double C15115 = C167 * C15101;
    const double C496 = C492 * C32798;
    const double C839 = C492 * C33077;
    const double C2753 = C492 * C32860;
    const double C3086 = C492 * C33025;
    const double C5450 = C492 * C5437;
    const double C15113 = C492 * C32860;
    const double C15445 = C492 * C15101;
    const double C17587 = C492 * C32863;
    const double C852 = C849 * C33057;
    const double C1310 = C849 * C33077;
    const double C3087 = C849 * C32860;
    const double C5448 = C849 * C33057;
    const double C5821 = C849 * C5437;
    const double C7630 = C849 * C7620;
    const double C15446 = C849 * C32860;
    const double C15825 = C849 * C33082;
    const double C17585 = C849 * C17575;
    const double C17958 = C849 * C32863;
    const double C608 = C604 * C32798;
    const double C3223 = C604 * C33025;
    const double C15581 = C604 * C15101;
    const double C1489 = C1485 * C33077;
    const double C3224 = C1485 * C32860;
    const double C5973 = C1485 * C5437;
    const double C15582 = C1485 * C32860;
    const double C18110 = C1485 * C32863;
    const double C2092 =
        (2 * (2 * ae * C31903 + C31824 * C31972) + C32055 + C32055 +
         C31824 * (C31972 + C32052 + C32052 +
                   C31824 * (2 * ae * C31919 + C31824 * C31859))) /
        C31602;
    const double C2111 = C1775 * C2086;
    const double C2101 = C1777 * C2086;
    const double C3745 = C3464 * C2086;
    const double C10452 = C10134 * C2086;
    const double C10442 = C10136 * C2086;
    const double C13532 = C13516 * C2086;
    const double C20687 = C20406 * C2086;
    const double C22431 = C22415 * C2086;
    const double C24607 = C31747 * C2086;
    const double C32088 = C32087 + C32081;
    const double C2631 =
        (2 * (2 * ae * C31982 + C31824 * C32155) + C32167 + C32167 +
         C31824 * (C32155 + C32164 + C32164 +
                   C31824 * (2 * ae * C32156 + C31824 * C31965 * C31855))) /
        C31602;
    const double C2637 = C1777 * C2628;
    const double C4701 = C3464 * C2628;
    const double C7015 = C1775 * C2628;
    const double C10963 = C10136 * C2628;
    const double C11357 = C10134 * C2628;
    const double C13676 = C13516 * C2628;
    const double C21667 = C20406 * C2628;
    const double C22575 = C22415 * C2628;
    const double C25128 = C31747 * C2628;
    const double C475 = C32815 * C259;
    const double C838 = C32815 * C267;
    const double C587 = C32815 * C364;
    const double C3488 = C32902 * C364;
    const double C20430 = C32902 * C364;
    const double C3222 = C32815 * C705;
    const double C3881 = C32902 * C705;
    const double C20823 = C32902 * C705;
    const double C1309 = C1011 * C33057;
    const double C5820 = C1011 * C33057;
    const double C7629 = C1011 * C33034;
    const double C15824 = C1011 * C33034;
    const double C17957 = C1011 * C17575;
    const double C1488 = C1484 * C33057;
    const double C5972 = C1484 * C33057;
    const double C18109 = C1484 * C17575;
    const double C6609 = C32815 * C6339;
    const double C9506 = C32902 * C6339;
    const double C27473 = C32902 * C6339;
    const double C31960 = C31959 + C31957;
    const double C153 = C114 * C128;
    const double C279 = C114 * C258;
    const double C482 = C114 * C471;
    const double C594 = C114 * C583;
    const double C3493 = C3464 * C583;
    const double C20435 = C20406 * C583;
    const double C712 = C114 * C701;
    const double C3893 = C3464 * C701;
    const double C20835 = C20406 * C701;
    const double C32142 = ae * C32141;
    const double C2262 =
        (C31965 * C31933 + C31824 * C32141 + C31824 * C32138 * ae) / C31595;
    const double C32151 = C31933 + C32149;
    const double C1149 =
        (C31857 + C31869 * C31975 + C32028 + C32028 +
         C31824 * (2 * ae * C32023 +
                   C31824 * (C31869 +
                             (C31867 + (C31861 * C31862 +
                                        C31828 * bs[8] * std::pow(C31822, 8)) *
                                           C31827 * C31843) *
                                 C31975))) /
        C31602;
    const double C1159 = C114 * C1140;
    const double C1969 = C1777 * C1140;
    const double C5320 = C3464 * C1140;
    const double C10328 = C10136 * C1140;
    const double C22076 = C20406 * C1140;
    const double C24493 = C31747 * C1140;
    const double C32132 = ae * C32130;
    const double C32131 = C31824 * C32130;
    const double C32194 = C32193 + C32190;
    const double C32243 = C32241 + C32242;
    const double C6265 = C114 * C6256;
    const double C6612 = C114 * C6605;
    const double C9510 = C3464 * C6605;
    const double C27477 = C20406 * C6605;
    const double C32344 = C32216 + C32342;
    const double C32304 = ae * C32302;
    const double C32303 = C31824 * C32302;
    const double C32324 = ae * C32323;
    const double C7166 = (2 * C31998 + C31965 * C32007 + C31824 * C32323 +
                          C31824 * C32320 * ae) /
                         C31595;
    const double C32334 = C32333 + C32330;
    const double C32455 = ae * C32453;
    const double C32454 = C31824 * C32453;
    const double C32488 = C32464 + C32486;
    const double C32423 = C32421 + C32406;
    const double C32527 = C32500 + C32525;
    const double C103 =
        (C33086 + 2 * C32720) / C31637 - (C33095 * C32711) / C31595;
    const double C104 =
        (C33073 + 2 * C32728 + C33095) / C31637 - (C33088 * C32711) / C31595;
    const double C105 = (C33048 + C32725 / C31595 + C33088) / C31637 -
                        (C33075 * C32711) / C31595;
    const double C15827 = C165 * C33096;
    const double C15820 = C164 * C33096;
    const double C16157 = C494 * C33096;
    const double C16291 = C606 * C33096;
    const double C6185 =
        (C33089 + 2 * C32856) / C31637 - (C33096 * C32852) / C31595;
    const double C7631 = C493 * C7619;
    const double C7626 = C494 * C7619;
    const double C7962 = C848 * C7619;
    const double C8097 = C1487 * C7619;
    const double C15826 = C493 * C33092;
    const double C15821 = C494 * C33092;
    const double C16156 = C848 * C33092;
    const double C16290 = C1487 * C33092;
    const double C6186 =
        (C33077 + 2 * C32863 + C33096) / C31637 - (C33092 * C32852) / C31595;
    const double C6187 = (C33057 + C32860 / C31595 + C33092) / C31637 -
                         (C33082 * C32852) / C31595;
    const double C31700 = C31692 - C31667;
    const double C31682 = C31674 - C31661;
    const double C1803 = C1774 * C345;
    const double C1794 = C1774 * C346;
    const double C1785 = C1774 * C347;
    const double C2273 = C1774 * C693;
    const double C2267 = C1774 * C694;
    const double C2455 = C1774 * C350;
    const double C2449 = C1774 * C351;
    const double C6854 = C1774 * C1637;
    const double C6847 = C1774 * C1125;
    const double C6841 = C1774 * C692;
    const double C7171 = C1774 * C1124;
    const double C7496 = C1774 * C1126;
    const double C7490 = C1774 * C1127;
    const double C17257 = C1774 * C1128;
    const double C3489 = C3461 * C119;
    const double C3480 = C3461 * C118;
    const double C3474 = C3461 * C117;
    const double C3468 = C3461 * C116;
    const double C3890 = C3461 * C242;
    const double C3886 = C3461 * C241;
    const double C3882 = C3461 * C240;
    const double C4052 = C3461 * C347;
    const double C4048 = C3461 * C346;
    const double C4044 = C3461 * C345;
    const double C4522 = C3461 * C244;
    const double C4518 = C3461 * C245;
    const double C4514 = C3461 * C246;
    const double C4508 = C3461 * C243;
    const double C5103 = C3461 * C693;
    const double C5099 = C3461 * C694;
    const double C5313 = C3461 * C692;
    const double C8533 = C3461 * C966;
    const double C8529 = C3461 * C965;
    const double C9092 = C3461 * C1124;
    const double C9296 = C3461 * C1125;
    const double C9507 = C3461 * C967;
    const double C10009 = C3461 * C1637;
    const double C10165 = C10131 * C118;
    const double C10150 = C10131 * C117;
    const double C10141 = C10131 * C116;
    const double C10613 = C10131 * C242;
    const double C10607 = C10131 * C241;
    const double C10792 = C10131 * C347;
    const double C10786 = C10131 * C346;
    const double C11208 = C10131 * C966;
    const double C11196 = C10131 * C244;
    const double C11190 = C10131 * C243;
    const double C11508 = C10131 * C245;
    const double C11831 = C10131 * C692;
    const double C11825 = C10131 * C1125;
    const double C13203 = C10131 * C693;
    const double C10162 = C10133 * C345;
    const double C10153 = C10133 * C346;
    const double C10144 = C10133 * C347;
    const double C10611 = C10133 * C693;
    const double C10605 = C10133 * C694;
    const double C10790 = C10133 * C350;
    const double C10784 = C10133 * C351;
    const double C11205 = C10133 * C1637;
    const double C11198 = C10133 * C1125;
    const double C11192 = C10133 * C692;
    const double C11510 = C10133 * C1124;
    const double C11829 = C10133 * C1126;
    const double C11823 = C10133 * C1127;
    const double C13201 = C10133 * C1128;
    const double C1820 = C1806 + C1807;
    const double C1815 = C1791 + C1792;
    const double C1812 = C1782 + C1783;
    const double C2285 = C2275 + C1957;
    const double C2282 = C2269 + C1954;
    const double C2467 = C2457 + C2103;
    const double C2464 = C2451 + C2100;
    const double C6871 = C6857 + C6858;
    const double C6866 = C6845 + C1961;
    const double C6863 = C6839 + C1960;
    const double C7178 = C7169 + C1964;
    const double C7508 = C7498 + C2635;
    const double C7505 = C7492 + C7013;
    const double C17263 = C17259 + C2638;
    const double C1817 = C1797 + C1798;
    const double C1814 = C1788 + C1789;
    const double C2283 = C2271 + C1955;
    const double C2280 = C2265 + C1952;
    const double C6868 = C6849 + C1963;
    const double C6865 = C6843 + C1958;
    const double C7180 = C7173 + C1966;
    const double C3500 = C3486 + C3487;
    const double C3499 = C3483 + C3484;
    const double C3497 = C3477 + C3478;
    const double C3495 = C3471 + C3472;
    const double C3898 = C3888 + C3624;
    const double C3896 = C3884 + C3622;
    const double C3894 = C3880 + C3620;
    const double C4060 = C4050 + C3738;
    const double C4058 = C4046 + C3736;
    const double C4536 = C4520 + C3629;
    const double C4534 = C4516 + C3631;
    const double C4532 = C4512 + C3633;
    const double C4531 = C4510 + C3626;
    const double C5107 = C5101 + C4207;
    const double C5105 = C5097 + C4209;
    const double C5321 = C5311 + C4205;
    const double C8541 = C8531 + C4525;
    const double C8539 = C8527 + C4527;
    const double C9094 = C9090 + C5318;
    const double C9302 = C9294 + C5316;
    const double C9511 = C9505 + C8536;
    const double C10176 = C10156 + C10157;
    const double C10173 = C10147 + C10148;
    const double C10621 = C10609 + C10314;
    const double C10618 = C10603 + C10311;
    const double C11219 = C11200 + C10322;
    const double C11216 = C11194 + C10317;
    const double C11519 = C11512 + C10325;
    const double C20442 = C20428 + C20429;
    const double C20441 = C20425 + C20426;
    const double C20439 = C20419 + C20420;
    const double C20437 = C20413 + C20414;
    const double C20840 = C20830 + C20566;
    const double C20838 = C20826 + C20564;
    const double C20836 = C20822 + C20562;
    const double C21002 = C20992 + C20680;
    const double C21000 = C20988 + C20678;
    const double C21310 = C21304 + C20575;
    const double C21309 = C21302 + C20573;
    const double C21497 = C21481 + C21482;
    const double C21495 = C21475 + C21476;
    const double C21494 = C21472 + C20571;
    const double C21492 = C21468 + C20568;
    const double C22079 = C22071 + C21149;
    const double C22077 = C22067 + C21662;
    const double C22297 = C22287 + C21147;
    const double C22295 = C22283 + C21664;
    const double C23984 = C23980 + C21151;
    const double C27478 = C27472 + C21488;
    const double C24341 = C24321 + C24322;
    const double C24338 = C24312 + C24313;
    const double C24786 = C24774 + C24479;
    const double C24783 = C24768 + C24476;
    const double C25457 = C25439 + C24487;
    const double C25454 = C25433 + C24490;
    const double C25453 = C25431 + C24482;
    const double C31693 = C31683 / C31637;
    const double C31691 = C31593 * C31683;
    const double C31690 = 2 * C31683;
    const double C1802 = C33060 * C372;
    const double C4043 = C32902 * C372;
    const double C10161 = C33060 * C372;
    const double C20985 = C32902 * C372;
    const double C24326 = C24295 * C372;
    const double C1818 = C1800 + C1801;
    const double C4056 = C4042 + C3734;
    const double C10177 = C10159 + C10160;
    const double C20998 = C20984 + C20676;
    const double C24342 = C24324 + C24325;
    const double C168 = C163 + C152;
    const double C2091 =
        (2 * (2 * ae * C31912 + C31824 * C31857) + C32044 + C32044 +
         C31824 * (C31857 + C32041 + C32041 +
                   C31824 * (2 * ae * C31929 + C31824 * C31869))) /
        C31602;
    const double C2114 = C1775 * C2085;
    const double C2098 = C1777 * C2085;
    const double C3747 = C3464 * C2085;
    const double C10455 = C10134 * C2085;
    const double C10439 = C10136 * C2085;
    const double C13535 = C13516 * C2085;
    const double C20689 = C20406 * C2085;
    const double C22434 = C22415 * C2085;
    const double C24604 = C31747 * C2085;
    const double C7960 = C6436 * C33034;
    const double C16154 = C6436 * C33034;
    const double C8102 = C8101 * C33034;
    const double C16288 = C8101 * C33034;
    const double C32111 = C32110 + C32104;
    const double C2632 =
        (2 * (2 * ae * C31998 + C31824 * C32169) + C32181 + C32181 +
         C31824 *
             (C32169 + C32178 + C32178 +
              C31824 * (2 * ae * C32170 + C31824 * C31965 * C31831 * C31867))) /
        C31602;
    const double C2640 = C1777 * C2629;
    const double C4703 = C3464 * C2629;
    const double C10966 = C10136 * C2629;
    const double C12805 = C10134 * C2629;
    const double C13672 = C13516 * C2629;
    const double C16861 = C1775 * C2629;
    const double C21671 = C20406 * C2629;
    const double C22571 = C22415 * C2629;
    const double C25131 = C31747 * C2629;
    const double C6853 = C33060 * C6340;
    const double C10008 = C32902 * C6340;
    const double C11204 = C33060 * C6340;
    const double C27975 = C32902 * C6340;
    const double C31004 = C24295 * C6340;
    const double C6869 = C6851 + C6852;
    const double C10013 = C10007 + C9299;
    const double C11220 = C11202 + C11203;
    const double C27980 = C27974 + C22292;
    const double C31013 = C31003 + C25447;
    const double C6271 = C6269 + C6264;
    const double C7007 =
        (2 * (2 * ae * C31991 + C31824 * C32198) + C32261 + C32261 +
         C31824 * (C32198 + C32258 + C32258 +
                   C31824 * (2 * ae * C32212 + C31824 * C32203))) /
        C31602;
    const double C7018 = C1775 * C7004;
    const double C7011 = C1777 * C7004;
    const double C8698 = C3464 * C7004;
    const double C11360 = C10134 * C7004;
    const double C11353 = C10136 * C7004;
    const double C13683 = C13516 * C7004;
    const double C21669 = C20406 * C7004;
    const double C22582 = C22415 * C7004;
    const double C26239 = C31747 * C7004;
    const double C32283 = C32282 + C32276;
    const double C32420 = C32403 + C32416;
    const double C32379 = ae * C32377;
    const double C32378 = C31824 * C32377;
    const double C32388 = 4 * C32377;
    const double C2757 = C2752 + C2753;
    const double C15117 = C15112 + C15113;
    const double C854 = C842 + C852;
    const double C5453 = C5452 + C5448;
    const double C17590 = C17589 + C17585;
    const double C2454 = C33060 * C2092;
    const double C10789 = C33060 * C2092;
    const double C13533 = C33041 * C2092;
    const double C14089 = C13507 * C2092;
    const double C22432 = C33041 * C2092;
    const double C22988 = C33085 * C2092;
    const double C24954 = C24295 * C2092;
    const double C2465 = C2453 + C2101;
    const double C10800 = C10788 + C10442;
    const double C13553 = C13531 + C13532;
    const double C22452 = C22430 + C22431;
    const double C24965 = C24953 + C24607;
    const double C32089 = ae * C32088;
    const double C2088 =
        (3 * C32065 + C31824 * C32088 + (2 * C32059 + C31824 * C32078) * ae) /
        C31595;
    const double C7495 = C33060 * C2631;
    const double C11828 = C33060 * C2631;
    const double C14451 = C33041 * C2631;
    const double C14983 = C13507 * C2631;
    const double C26232 = C24295 * C2631;
    const double C28189 = C33041 * C2631;
    const double C28721 = C33085 * C2631;
    const double C7506 = C7494 + C2637;
    const double C11839 = C11827 + C10963;
    const double C14467 = C14450 + C13676;
    const double C28205 = C28188 + C22575;
    const double C26243 = C26231 + C25128;
    const double C491 = C487 + C475;
    const double C850 = C847 + C838;
    const double C603 = C599 + C587;
    const double C3230 = C3229 + C3222;
    const double C6617 = C6615 + C6609;
    const double C31961 = ae * C31960;
    const double C363 = (3 * C31912 + C31831 * C31933 + C31824 * C31960 +
                         C31824 * C31955 * ae) /
                        C31595;
    const double C2263 =
        (C31965 * C31871 + C32142 + C32142 +
         C31824 *
             (2 * ae * C32137 +
              C31824 * C31965 *
                  (2 * C31831 * C31867 +
                   C31831 * (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C2279 = C1777 * C2262;
    const double C2954 = C114 * C2262;
    const double C4211 = C3464 * C2262;
    const double C10617 = C10136 * C2262;
    const double C21153 = C20406 * C2262;
    const double C24782 = C31747 * C2262;
    const double C32152 = C32151 + C32148;
    const double C32133 = C32116 + C32131;
    const double C32195 = ae * C32194;
    const double C2630 =
        (2 * C32018 + C31824 * C32194 + (C32015 + C32185 * C31828) * ae) /
        C31595;
    const double C32244 = ae * C32243;
    const double C6338 = (3 * C31991 + C31965 * C32216 + C31824 * C32243 +
                          C31824 * C32240 * ae) /
                         C31595;
    const double C32345 = C32344 + C32341;
    const double C32305 = C32288 + C32303;
    const double C7167 =
        (2 * C32169 + C31965 * C32248 + C32324 + C32324 +
         C31824 * (2 * ae * C32319 +
                   C31824 * (2 * C31965 * C32246 +
                             C31965 * (C32246 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C31975)))) /
        C31602;
    const double C7177 = C1777 * C7166;
    const double C7829 = C114 * C7166;
    const double C9301 = C3464 * C7166;
    const double C11516 = C10136 * C7166;
    const double C22294 = C20406 * C7166;
    const double C25450 = C31747 * C7166;
    const double C32335 = ae * C32334;
    const double C7333 =
        (2 * C32011 + C31824 * C32334 + (C32008 + C32316 * C31828) * ae) /
        C31595;
    const double C32456 = C32436 + C32454;
    const double C32489 = C32488 + C32477;
    const double C32425 = ae * C32423;
    const double C32424 = C31824 * C32423;
    const double C32528 = C32527 + C32517;
    const double C31706 = C31700 * be;
    const double C31689 = C31682 * ae;
    const double C20403 = -(C31682 * be) / C31595;
    const double C1819 = C1803 + C1804;
    const double C1816 = C1794 + C1795;
    const double C1813 = C1785 + C1786;
    const double C2284 = C2273 + C1956;
    const double C2281 = C2267 + C1953;
    const double C2466 = C2455 + C2102;
    const double C2463 = C2449 + C2099;
    const double C6870 = C6854 + C6855;
    const double C6867 = C6847 + C1962;
    const double C6864 = C6841 + C1959;
    const double C7179 = C7171 + C1965;
    const double C7507 = C7496 + C2636;
    const double C7504 = C7490 + C7012;
    const double C17262 = C17257 + C2639;
    const double C3501 = C3489 + C3490;
    const double C3498 = C3480 + C3481;
    const double C3496 = C3474 + C3475;
    const double C3494 = C3468 + C3469;
    const double C3899 = C3890 + C3625;
    const double C3897 = C3886 + C3623;
    const double C3895 = C3882 + C3621;
    const double C4061 = C4052 + C3739;
    const double C4059 = C4048 + C3737;
    const double C4057 = C4044 + C3735;
    const double C4537 = C4522 + C3628;
    const double C4535 = C4518 + C3630;
    const double C4533 = C4514 + C3632;
    const double C4530 = C4508 + C3627;
    const double C5108 = C5103 + C4206;
    const double C5106 = C5099 + C4208;
    const double C5322 = C5313 + C4204;
    const double C8542 = C8533 + C4524;
    const double C8540 = C8529 + C4526;
    const double C9095 = C9092 + C5317;
    const double C9303 = C9296 + C5315;
    const double C9512 = C9507 + C8535;
    const double C10014 = C10009 + C9298;
    const double C10179 = C10165 + C10166;
    const double C10174 = C10150 + C10151;
    const double C10171 = C10141 + C10142;
    const double C10623 = C10613 + C10316;
    const double C10620 = C10607 + C10313;
    const double C10802 = C10792 + C10444;
    const double C10799 = C10786 + C10441;
    const double C11222 = C11208 + C11209;
    const double C11217 = C11196 + C10320;
    const double C11214 = C11190 + C10319;
    const double C11517 = C11508 + C10323;
    const double C11841 = C11831 + C10961;
    const double C11838 = C11825 + C11355;
    const double C13207 = C13203 + C10964;
    const double C10178 = C10162 + C10163;
    const double C10175 = C10153 + C10154;
    const double C10172 = C10144 + C10145;
    const double C10622 = C10611 + C10315;
    const double C10619 = C10605 + C10312;
    const double C10801 = C10790 + C10443;
    const double C10798 = C10784 + C10440;
    const double C11221 = C11205 + C11206;
    const double C11218 = C11198 + C10321;
    const double C11215 = C11192 + C10318;
    const double C11518 = C11510 + C10324;
    const double C11840 = C11829 + C10962;
    const double C11837 = C11823 + C11354;
    const double C13206 = C13201 + C10965;
    const double C1829 = C1820 + C1807;
    const double C1824 = C1815 + C1792;
    const double C1821 = C1812 + C1783;
    const double C2291 = C2285 + C1957;
    const double C2288 = C2282 + C1954;
    const double C2473 = C2467 + C2103;
    const double C2470 = C2464 + C2100;
    const double C6880 = C6871 + C6858;
    const double C6875 = C6866 + C1961;
    const double C6872 = C6863 + C1960;
    const double C7181 = C7178 + C1964;
    const double C7514 = C7508 + C2635;
    const double C7511 = C7505 + C7013;
    const double C17266 = C17263 + C2638;
    const double C1826 = C1817 + C1798;
    const double C1823 = C1814 + C1789;
    const double C2289 = C2283 + C1955;
    const double C2286 = C2280 + C1952;
    const double C6877 = C6868 + C1963;
    const double C6874 = C6865 + C1958;
    const double C7183 = C7180 + C1966;
    const double C3508 = C3500 + C3487;
    const double C3507 = C3499 + C3484;
    const double C3505 = C3497 + C3478;
    const double C3503 = C3495 + C3472;
    const double C3904 = C3898 + C3624;
    const double C3902 = C3896 + C3622;
    const double C3900 = C3894 + C3620;
    const double C4066 = C4060 + C3738;
    const double C4064 = C4058 + C3736;
    const double C4544 = C4536 + C3629;
    const double C4542 = C4534 + C3631;
    const double C4540 = C4532 + C3633;
    const double C4539 = C4531 + C3626;
    const double C5111 = C5107 + C4207;
    const double C5109 = C5105 + C4209;
    const double C5323 = C5321 + C4205;
    const double C8545 = C8541 + C4525;
    const double C8543 = C8539 + C4527;
    const double C9096 = C9094 + C5318;
    const double C9304 = C9302 + C5316;
    const double C9513 = C9511 + C8536;
    const double C10185 = C10176 + C10157;
    const double C10182 = C10173 + C10148;
    const double C10627 = C10621 + C10314;
    const double C10624 = C10618 + C10311;
    const double C11228 = C11219 + C10322;
    const double C11225 = C11216 + C10317;
    const double C11522 = C11519 + C10325;
    const double C20450 = C20442 + C20429;
    const double C20449 = C20441 + C20426;
    const double C20447 = C20439 + C20420;
    const double C20445 = C20437 + C20414;
    const double C20846 = C20840 + C20566;
    const double C20844 = C20838 + C20564;
    const double C20842 = C20836 + C20562;
    const double C21008 = C21002 + C20680;
    const double C21006 = C21000 + C20678;
    const double C21314 = C21310 + C20575;
    const double C21313 = C21309 + C20573;
    const double C21505 = C21497 + C21482;
    const double C21503 = C21495 + C21476;
    const double C21502 = C21494 + C20571;
    const double C21500 = C21492 + C20568;
    const double C22083 = C22079 + C21149;
    const double C22081 = C22077 + C21662;
    const double C22301 = C22297 + C21147;
    const double C22299 = C22295 + C21664;
    const double C23986 = C23984 + C21151;
    const double C27480 = C27478 + C21488;
    const double C24350 = C24341 + C24322;
    const double C24347 = C24338 + C24313;
    const double C24792 = C24786 + C24479;
    const double C24789 = C24783 + C24476;
    const double C25466 = C25457 + C24487;
    const double C25463 = C25454 + C24490;
    const double C25462 = C25453 + C24482;
    const double C31722 = C31693 - C31715;
    const double C31698 = C31691 + C33027;
    const double C1827 = C1818 + C1801;
    const double C4062 = C4056 + C3734;
    const double C10186 = C10177 + C10160;
    const double C21004 = C20998 + C20676;
    const double C24351 = C24342 + C24325;
    const double C173 = C168 * C32798;
    const double C2448 = C33060 * C2091;
    const double C10783 = C33060 * C2091;
    const double C13536 = C33041 * C2091;
    const double C22435 = C33041 * C2091;
    const double C24948 = C24295 * C2091;
    const double C2462 = C2447 + C2098;
    const double C10797 = C10782 + C10439;
    const double C13554 = C13534 + C13535;
    const double C22453 = C22433 + C22434;
    const double C24962 = C24947 + C24604;
    const double C32112 = ae * C32111;
    const double C2089 =
        (3 * C32054 + C31824 * C32111 + (2 * C32048 + C31824 * C32101) * ae) /
        C31595;
    const double C13200 = C33060 * C2632;
    const double C13933 = C33041 * C2632;
    const double C17256 = C33060 * C2632;
    const double C22832 = C33041 * C2632;
    const double C26023 = C24295 * C2632;
    const double C17261 = C17255 + C2640;
    const double C13205 = C13199 + C10966;
    const double C13944 = C13932 + C13672;
    const double C22843 = C22831 + C22571;
    const double C26028 = C26022 + C25131;
    const double C6878 = C6869 + C6852;
    const double C10015 = C10013 + C9299;
    const double C11229 = C11220 + C11203;
    const double C27982 = C27980 + C22292;
    const double C31016 = C31013 + C25447;
    const double C7489 = C33060 * C7007;
    const double C11822 = C33060 * C7007;
    const double C14453 = C33041 * C7007;
    const double C28191 = C33041 * C7007;
    const double C31574 = C24295 * C7007;
    const double C7503 = C7488 + C7011;
    const double C11836 = C11821 + C11353;
    const double C14468 = C14452 + C13683;
    const double C28206 = C28190 + C22582;
    const double C31582 = C31573 + C26239;
    const double C32284 = ae * C32283;
    const double C7005 =
        (3 * C32166 + C31824 * C32283 + (2 * C32160 + C31824 * C32273) * ae) /
        C31595;
    const double C32380 = C32351 + C32378;
    const double C2471 = C2465 + C2101;
    const double C10806 = C10800 + C10442;
    const double C13561 = C13553 + C13532;
    const double C22460 = C22452 + C22431;
    const double C24971 = C24965 + C24607;
    const double C2094 =
        (3 * (C31838 + C32063 + C32063 + C31824 * C32079) + C32089 + C32089 +
         C31824 * (2 * C32079 + C32086 + C32086 +
                   C31824 * (C31847 + C32082 + C32082 +
                             C31824 * (2 * ae * C31885 + C31824 * C31855)))) /
        C31602;
    const double C2109 = C1777 * C2088;
    const double C10450 = C10136 * C2088;
    const double C11935 = C11929 * C2088;
    const double C13790 = C13516 * C2088;
    const double C22689 = C22415 * C2088;
    const double C24615 = C31747 * C2088;
    const double C7512 = C7506 + C2637;
    const double C11845 = C11839 + C10963;
    const double C14475 = C14467 + C13676;
    const double C28213 = C28205 + C22575;
    const double C26246 = C26243 + C25128;
    const double C495 = C491 * C32798;
    const double C2754 = C491 * C32860;
    const double C15114 = C491 * C32860;
    const double C853 = C850 * C33057;
    const double C3085 = C850 * C32860;
    const double C5449 = C850 * C33057;
    const double C15444 = C850 * C32860;
    const double C17586 = C850 * C17575;
    const double C607 = C603 * C32798;
    const double C3231 = C3230 * C32860;
    const double C15580 = C3230 * C32860;
    const double C373 =
        (3 * C31857 + C31831 * C31871 + C31961 + C31961 +
         C31824 *
             (2 * ae * C31958 +
              C31824 * (3 * C31869 +
                        C31831 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C384 = C114 * C363;
    const double C1811 = C1777 * C363;
    const double C4055 = C3464 * C363;
    const double C10170 = C10136 * C363;
    const double C20997 = C20406 * C363;
    const double C24335 = C31747 * C363;
    const double C32153 = ae * C32152;
    const double C2444 =
        (2 * C31935 + C31824 * C32152 + (C31930 + C31951 * C31828) * ae) /
        C31595;
    const double C32134 = C32133 + C32127;
    const double C2633 =
        (2 * (2 * ae * C32014 + C31824 * C32183) + C32195 + C32195 +
         C31824 *
             (C32183 + C32192 + C32192 +
              C31824 * (2 * ae * C32184 +
                        C31824 * C31965 *
                            (C31867 + (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                          C31827 * C31843)))) /
        C31602;
    const double C2643 = C1777 * C2630;
    const double C4705 = C3464 * C2630;
    const double C10969 = C10136 * C2630;
    const double C13943 = C13516 * C2630;
    const double C22842 = C22415 * C2630;
    const double C23590 = C20406 * C2630;
    const double C25134 = C31747 * C2630;
    const double C6341 =
        (3 * C32198 + C31965 * C32205 + C32244 + C32244 +
         C31824 *
             (2 * ae * C32239 +
              C31824 * (3 * C32203 +
                        C31965 * (2 * C31965 * C31867 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31975))))) /
        C31602;
    const double C6345 = C114 * C6338;
    const double C6862 = C1777 * C6338;
    const double C10012 = C3464 * C6338;
    const double C11213 = C10136 * C6338;
    const double C27979 = C20406 * C6338;
    const double C31011 = C31747 * C6338;
    const double C32346 = ae * C32345;
    const double C7485 =
        (2 * C32220 + C31824 * C32345 + (C32217 + C32236 * C31828) * ae) /
        C31595;
    const double C32306 = C32305 + C32299;
    const double C7334 =
        (2 * (2 * ae * C32007 + C31824 * C32248) + C32335 + C32335 +
         C31824 * (C32248 + C32332 + C32332 +
                   C31824 * (2 * ae * C32315 +
                             C31824 * (C32246 + C31831 *
                                                    (C31861 * C31862 +
                                                     C31828 * bs[8] *
                                                         std::pow(C31822, 8)) *
                                                    C31827 * C31975)))) /
        C31602;
    const double C7338 = C1777 * C7333;
    const double C8700 = C3464 * C7333;
    const double C11674 = C10136 * C7333;
    const double C13687 = C13516 * C7333;
    const double C21673 = C20406 * C7333;
    const double C22586 = C22415 * C7333;
    const double C26242 = C31747 * C7333;
    const double C32457 = C32456 + C32450;
    const double C32491 = ae * C32489;
    const double C32490 = C31824 * C32489;
    const double C32426 = C32389 + C32424;
    const double C32530 = ae * C32528;
    const double C32529 = C31824 * C32528;
    const double C31714 = C31706 / C31595;
    const double C31699 = C31689 / C31606;
    const double C31697 = C31593 * C31689;
    const double C20431 = C20403 * C119;
    const double C20422 = C20403 * C118;
    const double C20416 = C20403 * C117;
    const double C20410 = C20403 * C116;
    const double C20832 = C20403 * C242;
    const double C20828 = C20403 * C241;
    const double C20824 = C20403 * C240;
    const double C20994 = C20403 * C347;
    const double C20990 = C20403 * C346;
    const double C20986 = C20403 * C345;
    const double C21306 = C20403 * C246;
    const double C21300 = C20403 * C245;
    const double C21484 = C20403 * C966;
    const double C21478 = C20403 * C965;
    const double C21470 = C20403 * C244;
    const double C21466 = C20403 * C243;
    const double C22073 = C20403 * C693;
    const double C22069 = C20403 * C1124;
    const double C22289 = C20403 * C692;
    const double C22285 = C20403 * C1125;
    const double C23982 = C20403 * C694;
    const double C27474 = C20403 * C967;
    const double C27976 = C20403 * C1637;
    const double C1828 = C1819 + C1804;
    const double C1825 = C1816 + C1795;
    const double C1822 = C1813 + C1786;
    const double C2290 = C2284 + C1956;
    const double C2287 = C2281 + C1953;
    const double C2472 = C2466 + C2102;
    const double C2469 = C2463 + C2099;
    const double C6879 = C6870 + C6855;
    const double C6876 = C6867 + C1962;
    const double C6873 = C6864 + C1959;
    const double C7182 = C7179 + C1965;
    const double C7513 = C7507 + C2636;
    const double C7510 = C7504 + C7012;
    const double C17265 = C17262 + C2639;
    const double C3509 = C3501 + C3490;
    const double C3506 = C3498 + C3481;
    const double C3504 = C3496 + C3475;
    const double C3502 = C3494 + C3469;
    const double C3905 = C3899 + C3625;
    const double C3903 = C3897 + C3623;
    const double C3901 = C3895 + C3621;
    const double C4067 = C4061 + C3739;
    const double C4065 = C4059 + C3737;
    const double C4063 = C4057 + C3735;
    const double C4545 = C4537 + C3628;
    const double C4543 = C4535 + C3630;
    const double C4541 = C4533 + C3632;
    const double C4538 = C4530 + C3627;
    const double C5112 = C5108 + C4206;
    const double C5110 = C5106 + C4208;
    const double C5324 = C5322 + C4204;
    const double C8546 = C8542 + C4524;
    const double C8544 = C8540 + C4526;
    const double C9097 = C9095 + C5317;
    const double C9305 = C9303 + C5315;
    const double C9514 = C9512 + C8535;
    const double C10016 = C10014 + C9298;
    const double C10188 = C10179 + C10166;
    const double C10183 = C10174 + C10151;
    const double C10180 = C10171 + C10142;
    const double C10629 = C10623 + C10316;
    const double C10626 = C10620 + C10313;
    const double C10808 = C10802 + C10444;
    const double C10805 = C10799 + C10441;
    const double C11231 = C11222 + C11209;
    const double C11226 = C11217 + C10320;
    const double C11223 = C11214 + C10319;
    const double C11520 = C11517 + C10323;
    const double C11847 = C11841 + C10961;
    const double C11844 = C11838 + C11355;
    const double C13210 = C13207 + C10964;
    const double C10187 = C10178 + C10163;
    const double C10184 = C10175 + C10154;
    const double C10181 = C10172 + C10145;
    const double C10628 = C10622 + C10315;
    const double C10625 = C10619 + C10312;
    const double C10807 = C10801 + C10443;
    const double C10804 = C10798 + C10440;
    const double C11230 = C11221 + C11206;
    const double C11227 = C11218 + C10321;
    const double C11224 = C11215 + C10318;
    const double C11521 = C11518 + C10324;
    const double C11846 = C11840 + C10962;
    const double C11843 = C11837 + C11354;
    const double C13209 = C13206 + C10965;
    const double C1838 = C1829 + C1808;
    const double C1833 = C1824 + C1793;
    const double C1830 = C1821 + C1784;
    const double C2297 = C2291 + C2276;
    const double C2294 = C2288 + C2270;
    const double C2479 = C2473 + C2458;
    const double C2476 = C2470 + C2452;
    const double C6889 = C6880 + C6859;
    const double C6884 = C6875 + C6846;
    const double C6881 = C6872 + C6840;
    const double C7184 = C7181 + C7170;
    const double C7520 = C7514 + C7499;
    const double C7517 = C7511 + C7493;
    const double C17269 = C17266 + C17260;
    const double C1835 = C1826 + C1799;
    const double C1832 = C1823 + C1790;
    const double C2295 = C2289 + C2272;
    const double C2292 = C2286 + C2266;
    const double C6886 = C6877 + C6850;
    const double C6883 = C6874 + C6844;
    const double C7186 = C7183 + C7174;
    const double C3516 = C3508 + C3488;
    const double C3515 = C3507 + C3485;
    const double C3513 = C3505 + C3479;
    const double C3511 = C3503 + C3473;
    const double C3910 = C3904 + C3889;
    const double C3908 = C3902 + C3885;
    const double C3906 = C3900 + C3881;
    const double C4072 = C4066 + C4051;
    const double C4070 = C4064 + C4047;
    const double C4552 = C4544 + C4521;
    const double C4550 = C4542 + C4517;
    const double C4548 = C4540 + C4513;
    const double C4547 = C4539 + C4511;
    const double C5115 = C5111 + C5102;
    const double C5113 = C5109 + C5098;
    const double C5325 = C5323 + C5312;
    const double C8549 = C8545 + C8532;
    const double C8547 = C8543 + C8528;
    const double C9098 = C9096 + C9091;
    const double C9306 = C9304 + C9295;
    const double C9515 = C9513 + C9506;
    const double C10194 = C10185 + C10158;
    const double C10191 = C10182 + C10149;
    const double C10633 = C10627 + C10610;
    const double C10630 = C10624 + C10604;
    const double C11237 = C11228 + C11201;
    const double C11234 = C11225 + C11195;
    const double C11525 = C11522 + C11513;
    const double C20458 = C20450 + C20430;
    const double C20457 = C20449 + C20427;
    const double C20455 = C20447 + C20421;
    const double C20453 = C20445 + C20415;
    const double C20852 = C20846 + C20831;
    const double C20850 = C20844 + C20827;
    const double C20848 = C20842 + C20823;
    const double C21014 = C21008 + C20993;
    const double C21012 = C21006 + C20989;
    const double C21318 = C21314 + C21305;
    const double C21317 = C21313 + C21303;
    const double C21513 = C21505 + C21483;
    const double C21511 = C21503 + C21477;
    const double C21510 = C21502 + C21473;
    const double C21508 = C21500 + C21469;
    const double C22087 = C22083 + C22072;
    const double C22085 = C22081 + C22068;
    const double C22305 = C22301 + C22288;
    const double C22303 = C22299 + C22284;
    const double C23988 = C23986 + C23981;
    const double C27482 = C27480 + C27473;
    const double C24359 = C24350 + C24323;
    const double C24356 = C24347 + C24314;
    const double C24798 = C24792 + C24775;
    const double C24795 = C24789 + C24769;
    const double C25475 = C25466 + C25440;
    const double C25472 = C25463 + C25434;
    const double C25471 = C25462 + C25432;
    const double C24334 = C31722 * C354;
    const double C24328 = C31722 * C355;
    const double C24319 = C31722 * C356;
    const double C24310 = C31722 * C357;
    const double C24304 = C31722 * C358;
    const double C24492 = C31722 * C1132;
    const double C24489 = C31722 * C1133;
    const double C24486 = C31722 * C1134;
    const double C24483 = C31722 * C697;
    const double C24480 = C31722 * C698;
    const double C24477 = C31722 * C699;
    const double C24620 = C31722 * C2085;
    const double C24617 = C31722 * C2086;
    const double C24614 = C31722 * C2087;
    const double C24611 = C31722 * C359;
    const double C24608 = C31722 * C360;
    const double C24605 = C31722 * C361;
    const double C24781 = C31722 * C700;
    const double C24960 = C31722 * C362;
    const double C25133 = C31722 * C1139;
    const double C25130 = C31722 * C1137;
    const double C25127 = C31722 * C1135;
    const double C25449 = C31722 * C1641;
    const double C25446 = C31722 * C1640;
    const double C25628 = C31722 * C2629;
    const double C25625 = C31722 * C2628;
    const double C26241 = C31722 * C1138;
    const double C26238 = C31722 * C1136;
    const double C31010 = C31722 * C6336;
    const double C31133 = C31722 * C7004;
    const double C31580 = C31722 * C6337;
    const double C11927 =
        (C31722 / C31637 + ((C31593 * C31747 + C24295) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31747 / C31637 + (0 * ae) / C31595) + C33041) * be) /
            C31595;
    const double C13514 =
        C31722 / C31637 - ((C31593 * C31747 + C24295) * be) / C31595;
    const double C22413 =
        C31722 / C31637 + ((C31593 * C31747 + C24295) * ae) / C31595;
    const double C31705 = C31698 * be;
    const double C1836 = C1827 + C1802;
    const double C4068 = C4062 + C4043;
    const double C10195 = C10186 + C10161;
    const double C21010 = C21004 + C20985;
    const double C24360 = C24351 + C24326;
    const double C2468 = C2462 + C2098;
    const double C10803 = C10797 + C10439;
    const double C13562 = C13554 + C13535;
    const double C22461 = C22453 + C22434;
    const double C24968 = C24962 + C24604;
    const double C2095 =
        (3 * (C31972 + C32052 + C32052 + C31824 * C32102) + C32112 + C32112 +
         C31824 * (2 * C32102 + C32109 + C32109 +
                   C31824 * (C31859 + C32105 + C32105 +
                             C31824 * (2 * ae * C31939 +
                                       C31824 * C31831 * C31867)))) /
        C31602;
    const double C2112 = C1777 * C2089;
    const double C10453 = C10136 * C2089;
    const double C11936 = C11929 * C2089;
    const double C13786 = C13516 * C2089;
    const double C22685 = C22415 * C2089;
    const double C24618 = C31747 * C2089;
    const double C17264 = C17261 + C2640;
    const double C13208 = C13205 + C10966;
    const double C13948 = C13944 + C13672;
    const double C22847 = C22843 + C22571;
    const double C26031 = C26028 + C25131;
    const double C6887 = C6878 + C6853;
    const double C10017 = C10015 + C10008;
    const double C11238 = C11229 + C11204;
    const double C27984 = C27982 + C27975;
    const double C31019 = C31016 + C31004;
    const double C7509 = C7503 + C7011;
    const double C11842 = C11836 + C11353;
    const double C14476 = C14468 + C13683;
    const double C28214 = C28206 + C22582;
    const double C31585 = C31582 + C26239;
    const double C7008 =
        (3 * (C32155 + C32164 + C32164 + C31824 * C32274) + C32284 + C32284 +
         C31824 * (2 * C32274 + C32281 + C32281 +
                   C31824 * (C32200 + C32277 + C32277 +
                             C31824 * (2 * ae * C32224 +
                                       C31824 * C31965 * C31867)))) /
        C31602;
    const double C7016 = C1777 * C7005;
    const double C11358 = C10136 * C7005;
    const double C12008 = C11929 * C7005;
    const double C14243 = C13516 * C7005;
    const double C23142 = C22415 * C7005;
    const double C25626 = C31747 * C7005;
    const double C32381 = C32380 + C32373;
    const double C2477 = C2471 + C2454;
    const double C10812 = C10806 + C10789;
    const double C13569 = C13561 + C13533;
    const double C22468 = C22460 + C22432;
    const double C24977 = C24971 + C24954;
    const double C7518 = C7512 + C7495;
    const double C11851 = C11845 + C11828;
    const double C14483 = C14475 + C14451;
    const double C28221 = C28213 + C28189;
    const double C26249 = C26246 + C26232;
    const double C2445 =
        (2 * (2 * ae * C31933 + C31824 * C31871) + C32153 + C32153 +
         C31824 *
             (C31871 + C32150 + C32150 +
              C31824 * (2 * ae * C31954 +
                        C31824 * (2 * C31831 * C31867 +
                                  C31831 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C2461 = C1777 * C2444;
    const double C3749 = C3464 * C2444;
    const double C10796 = C10136 * C2444;
    const double C13549 = C13516 * C2444;
    const double C20691 = C20406 * C2444;
    const double C22448 = C22415 * C2444;
    const double C24961 = C31747 * C2444;
    const double C32135 = ae * C32134;
    const double C2090 =
        (3 * C32043 + C31824 * C32134 + (2 * C32037 + C31824 * C32124) * ae) /
        C31595;
    const double C7486 =
        (2 * (2 * ae * C32216 + C31824 * C32205) + C32346 + C32346 +
         C31824 *
             (C32205 + C32343 + C32343 +
              C31824 * (2 * ae * C32235 +
                        C31824 * (2 * C31965 * C31867 +
                                  C31965 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31975))))) /
        C31602;
    const double C7502 = C1777 * C7485;
    const double C9616 = C3464 * C7485;
    const double C11835 = C10136 * C7485;
    const double C14463 = C13516 * C7485;
    const double C27583 = C20406 * C7485;
    const double C28201 = C22415 * C7485;
    const double C31581 = C31747 * C7485;
    const double C32307 = ae * C32306;
    const double C7006 =
        (3 * C32260 + C31824 * C32306 + (2 * C32254 + C31824 * C32296) * ae) /
        C31595;
    const double C32458 = ae * C32457;
    const double C12178 =
        (3 * C32180 + C31824 * C32457 + (2 * C32174 + C31824 * C32448) * ae) /
        C31595;
    const double C32492 = C32463 + C32490;
    const double C32427 = C32426 + C32414;
    const double C32531 = C32499 + C32529;
    const double C31721 = C31699 - C31714;
    const double C31704 = C31697 / C31595;
    const double C20443 = C20431 + C20432;
    const double C20440 = C20422 + C20423;
    const double C20438 = C20416 + C20417;
    const double C20436 = C20410 + C20411;
    const double C20841 = C20832 + C20567;
    const double C20839 = C20828 + C20565;
    const double C20837 = C20824 + C20563;
    const double C21003 = C20994 + C20681;
    const double C21001 = C20990 + C20679;
    const double C20999 = C20986 + C20677;
    const double C21311 = C21306 + C20574;
    const double C21308 = C21300 + C20572;
    const double C21498 = C21484 + C21485;
    const double C21496 = C21478 + C21479;
    const double C21493 = C21470 + C20570;
    const double C21491 = C21466 + C20569;
    const double C22080 = C22073 + C21148;
    const double C22078 = C22069 + C21663;
    const double C22298 = C22289 + C21146;
    const double C22296 = C22285 + C21665;
    const double C23985 = C23982 + C21150;
    const double C27479 = C27474 + C21487;
    const double C27981 = C27976 + C22291;
    const double C1837 = C1828 + C1805;
    const double C1834 = C1825 + C1796;
    const double C1831 = C1822 + C1787;
    const double C2296 = C2290 + C2274;
    const double C2293 = C2287 + C2268;
    const double C2478 = C2472 + C2456;
    const double C2475 = C2469 + C2450;
    const double C6888 = C6879 + C6856;
    const double C6885 = C6876 + C6848;
    const double C6882 = C6873 + C6842;
    const double C7185 = C7182 + C7172;
    const double C7519 = C7513 + C7497;
    const double C7516 = C7510 + C7491;
    const double C17268 = C17265 + C17258;
    const double C3517 = C3509 + C3491;
    const double C3514 = C3506 + C3482;
    const double C3512 = C3504 + C3476;
    const double C3510 = C3502 + C3470;
    const double C3911 = C3905 + C3891;
    const double C3909 = C3903 + C3887;
    const double C3907 = C3901 + C3883;
    const double C4073 = C4067 + C4053;
    const double C4071 = C4065 + C4049;
    const double C4069 = C4063 + C4045;
    const double C4553 = C4545 + C4523;
    const double C4551 = C4543 + C4519;
    const double C4549 = C4541 + C4515;
    const double C4546 = C4538 + C4509;
    const double C5116 = C5112 + C5104;
    const double C5114 = C5110 + C5100;
    const double C5326 = C5324 + C5314;
    const double C8550 = C8546 + C8534;
    const double C8548 = C8544 + C8530;
    const double C9099 = C9097 + C9093;
    const double C9307 = C9305 + C9297;
    const double C9516 = C9514 + C9508;
    const double C10018 = C10016 + C10010;
    const double C10197 = C10188 + C10167;
    const double C10192 = C10183 + C10152;
    const double C10189 = C10180 + C10143;
    const double C10635 = C10629 + C10614;
    const double C10632 = C10626 + C10608;
    const double C10814 = C10808 + C10793;
    const double C10811 = C10805 + C10787;
    const double C11240 = C11231 + C11210;
    const double C11235 = C11226 + C11197;
    const double C11232 = C11223 + C11191;
    const double C11523 = C11520 + C11509;
    const double C11853 = C11847 + C11832;
    const double C11850 = C11844 + C11826;
    const double C13213 = C13210 + C13204;
    const double C10196 = C10187 + C10164;
    const double C10193 = C10184 + C10155;
    const double C10190 = C10181 + C10146;
    const double C10634 = C10628 + C10612;
    const double C10631 = C10625 + C10606;
    const double C10813 = C10807 + C10791;
    const double C10810 = C10804 + C10785;
    const double C11239 = C11230 + C11207;
    const double C11236 = C11227 + C11199;
    const double C11233 = C11224 + C11193;
    const double C11524 = C11521 + C11511;
    const double C11852 = C11846 + C11830;
    const double C11849 = C11843 + C11824;
    const double C13212 = C13209 + C13202;
    const double C11944 = C11927 * C2085;
    const double C11937 = C11927 * C2086;
    const double C11934 = C11927 * C2087;
    const double C12016 = C11927 * C7004;
    const double C12009 = C11927 * C2628;
    const double C12087 = C11927 * C2088;
    const double C12184 = C11927 * C2629;
    const double C12274 = C11927 * C2089;
    const double C12364 = C11927 * C7005;
    const double C13548 = C13514 * C362;
    const double C13538 = C13514 * C361;
    const double C13529 = C13514 * C360;
    const double C13520 = C13514 * C359;
    const double C13686 = C13514 * C1138;
    const double C13682 = C13514 * C1136;
    const double C13677 = C13514 * C1135;
    const double C13673 = C13514 * C1137;
    const double C13800 = C13514 * C2089;
    const double C13796 = C13514 * C2088;
    const double C13791 = C13514 * C2087;
    const double C13787 = C13514 * C2086;
    const double C13942 = C13514 * C1139;
    const double C14096 = C13514 * C2085;
    const double C14246 = C13514 * C2629;
    const double C14242 = C13514 * C2628;
    const double C14462 = C13514 * C6337;
    const double C14588 = C13514 * C7005;
    const double C14990 = C13514 * C7004;
    const double C22447 = C22413 * C362;
    const double C22437 = C22413 * C361;
    const double C22428 = C22413 * C360;
    const double C22419 = C22413 * C359;
    const double C22585 = C22413 * C1138;
    const double C22581 = C22413 * C1136;
    const double C22576 = C22413 * C1135;
    const double C22572 = C22413 * C1137;
    const double C22699 = C22413 * C2089;
    const double C22695 = C22413 * C2088;
    const double C22690 = C22413 * C2087;
    const double C22686 = C22413 * C2086;
    const double C22841 = C22413 * C1139;
    const double C22995 = C22413 * C2085;
    const double C23145 = C22413 * C2629;
    const double C23141 = C22413 * C2628;
    const double C28200 = C22413 * C6337;
    const double C28326 = C22413 * C7005;
    const double C28728 = C22413 * C7004;
    const double C31713 = C31705 / C31595;
    const double C2474 = C2468 + C2448;
    const double C10809 = C10803 + C10783;
    const double C13570 = C13562 + C13536;
    const double C22469 = C22461 + C22435;
    const double C24974 = C24968 + C24948;
    const double C14087 = C33041 * C2095;
    const double C22986 = C33041 * C2095;
    const double C14098 = C14086 + C13786;
    const double C22997 = C22985 + C22685;
    const double C17267 = C17264 + C17256;
    const double C13211 = C13208 + C13200;
    const double C13952 = C13948 + C13933;
    const double C22851 = C22847 + C22832;
    const double C26034 = C26031 + C26023;
    const double C7515 = C7509 + C7489;
    const double C11848 = C11842 + C11822;
    const double C14484 = C14476 + C14453;
    const double C28222 = C28214 + C28191;
    const double C31588 = C31585 + C31574;
    const double C14981 = C33041 * C7008;
    const double C28719 = C33041 * C7008;
    const double C14992 = C14980 + C14243;
    const double C28730 = C28718 + C23142;
    const double C32382 = ae * C32381;
    const double C12081 =
        (4 * C32088 + C31824 * C32381 + (3 * C32078 + C31824 * C32370) * ae) /
        C31595;
    const double C2096 =
        (3 * (C31857 + C32041 + C32041 + C31824 * C32125) + C32135 + C32135 +
         C31824 *
             (2 * C32125 + C32132 + C32132 +
              C31824 * (C31869 + C32128 + C32128 +
                        C31824 * (2 * ae * C31950 +
                                  C31824 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31843))))) /
        C31602;
    const double C2115 = C1777 * C2090;
    const double C10456 = C10136 * C2090;
    const double C11945 = C11929 * C2090;
    const double C14097 = C13516 * C2090;
    const double C22996 = C22415 * C2090;
    const double C24621 = C31747 * C2090;
    const double C7009 =
        (3 * (C32198 + C32258 + C32258 + C31824 * C32297) + C32307 + C32307 +
         C31824 *
             (2 * C32297 + C32304 + C32304 +
              C31824 * (C32203 + C32300 + C32300 +
                        C31824 * (2 * ae * C32230 +
                                  C31824 * (C31867 + (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                         C31827 * C31975))))) /
        C31602;
    const double C7019 = C1777 * C7006;
    const double C11361 = C10136 * C7006;
    const double C12017 = C11929 * C7006;
    const double C14991 = C13516 * C7006;
    const double C28729 = C22415 * C7006;
    const double C31134 = C31747 * C7006;
    const double C12179 =
        (3 * (C32169 + C32178 + C32178 + C31824 * C32445) + C32458 + C32458 +
         C31824 *
             (2 * C32445 + C32455 + C32455 +
              C31824 * (C32435 + C32451 + C32451 +
                        C31824 * (2 * ae * C32437 +
                                  C31824 * C31965 * C31831 *
                                      (C31861 * C31862 +
                                       C31828 * bs[8] * std::pow(C31822, 8)) *
                                      C31827)))) /
        C31602;
    const double C12185 = C11929 * C12178;
    const double C12806 = C10136 * C12178;
    const double C14247 = C13516 * C12178;
    const double C16862 = C1777 * C12178;
    const double C23146 = C22415 * C12178;
    const double C25629 = C31747 * C12178;
    const double C32493 = C32492 + C32485;
    const double C32429 = ae * C32427;
    const double C32428 = C31824 * C32427;
    const double C32532 = C32531 + C32524;
    const double C24327 = C31721 * C345;
    const double C24318 = C31721 * C346;
    const double C24309 = C31721 * C347;
    const double C24776 = C31721 * C693;
    const double C24770 = C31721 * C694;
    const double C24955 = C31721 * C350;
    const double C24949 = C31721 * C351;
    const double C25441 = C31721 * C1125;
    const double C25435 = C31721 * C1124;
    const double C25429 = C31721 * C692;
    const double C26024 = C31721 * C1128;
    const double C26233 = C31721 * C1126;
    const double C31005 = C31721 * C1637;
    const double C31575 = C31721 * C1127;
    const double C11926 =
        (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595) /
            C31637 -
        ((2 * (C31747 / C31637 + (0 * ae) / C31595) -
          C31619 / (C31595 * 4 * C31655)) *
         be) /
            C31595;
    const double C13513 =
        C31721 / C31637 - ((C31748 - C31619 / C31745) * be) / C31595;
    const double C22412 =
        C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595;
    const double C31711 = C31704 + C31690;
    const double C20451 = C20443 + C20432;
    const double C20448 = C20440 + C20423;
    const double C20446 = C20438 + C20417;
    const double C20444 = C20436 + C20411;
    const double C20847 = C20841 + C20567;
    const double C20845 = C20839 + C20565;
    const double C20843 = C20837 + C20563;
    const double C21009 = C21003 + C20681;
    const double C21007 = C21001 + C20679;
    const double C21005 = C20999 + C20677;
    const double C21315 = C21311 + C20574;
    const double C21312 = C21308 + C20572;
    const double C21506 = C21498 + C21485;
    const double C21504 = C21496 + C21479;
    const double C21501 = C21493 + C20570;
    const double C21499 = C21491 + C20569;
    const double C22084 = C22080 + C21148;
    const double C22082 = C22078 + C21663;
    const double C22302 = C22298 + C21146;
    const double C22300 = C22296 + C21665;
    const double C23987 = C23985 + C21150;
    const double C27481 = C27479 + C21487;
    const double C27983 = C27981 + C22291;
    const double C1839 = C1833 + C1834;
    const double C17058 = C2296 + C2297;
    const double C17057 = C2297 + C2296;
    const double C6890 = C6884 + C6885;
    const double C3519 = C3514 + C3515;
    const double C3518 = C3512 + C3513;
    const double C4902 = C3910 + C3911;
    const double C4900 = C3911 + C3910;
    const double C4359 = C3909 + C3908;
    const double C4901 = C3908 + C3909;
    const double C8525 = C4553 + C4552;
    const double C8526 = C4551 + C4550;
    const double C8895 = C4550 + C4551;
    const double C9504 = C8550 + C8549;
    const double C10198 = C10192 + C10193;
    const double C13002 = C10634 + C10635;
    const double C13001 = C10635 + C10634;
    const double C11241 = C11235 + C11236;
    const double C31720 = C31712 - C31713;
    const double C14102 = C14098 + C13786;
    const double C23001 = C22997 + C22685;
    const double C14996 = C14992 + C14243;
    const double C28734 = C28730 + C23142;
    const double C12083 =
        (4 * (2 * C32079 + C32086 + C32086 + C31824 * C32371) + C32382 +
         C32382 +
         C31824 * (3 * C32371 + C32379 + C32379 +
                   C31824 * (2 * C32363 + C32375 + C32375 +
                             C31824 * (C31855 + C32367 + C32367 +
                                       C31824 * (2 * ae * C31924 +
                                                 C31824 * C31867))))) /
        C31602;
    const double C12094 = C11927 * C12081;
    const double C12086 = C11929 * C12081;
    const double C13797 = C13516 * C12081;
    const double C22696 = C22415 * C12081;
    const double C32494 = ae * C32493;
    const double C12268 =
        (4 * C32111 + C31824 * C32493 + (3 * C32101 + C31824 * C32482) * ae) /
        C31595;
    const double C32430 = C32388 + C32428;
    const double C32533 = ae * C32532;
    const double C12358 =
        (4 * C32283 + C31824 * C32532 + (3 * C32273 + C31824 * C32522) * ae) /
        C31595;
    const double C24343 = C24327 + C24328;
    const double C24340 = C24318 + C24319;
    const double C24337 = C24309 + C24310;
    const double C24787 = C24776 + C24480;
    const double C24784 = C24770 + C24477;
    const double C24966 = C24955 + C24608;
    const double C24963 = C24949 + C24605;
    const double C25458 = C25441 + C24486;
    const double C25455 = C25435 + C24489;
    const double C25452 = C25429 + C24483;
    const double C26029 = C26024 + C25130;
    const double C26244 = C26233 + C25127;
    const double C31014 = C31005 + C25446;
    const double C31583 = C31575 + C26238;
    const double C13537 = C13513 * C351;
    const double C13528 = C13513 * C350;
    const double C13934 = C13513 * C1128;
    const double C14088 = C13513 * C2080;
    const double C14454 = C13513 * C1127;
    const double C14448 = C13513 * C1126;
    const double C14982 = C13513 * C2625;
    const double C22436 = C22412 * C351;
    const double C22427 = C22412 * C350;
    const double C22833 = C22412 * C1128;
    const double C22987 = C22412 * C2080;
    const double C28192 = C22412 * C1127;
    const double C28186 = C22412 * C1126;
    const double C28720 = C22412 * C2625;
    const double C31719 = C31711 * be;
    const double C20459 = C20451 + C20433;
    const double C20456 = C20448 + C20424;
    const double C20454 = C20446 + C20418;
    const double C20452 = C20444 + C20412;
    const double C20853 = C20847 + C20833;
    const double C20851 = C20845 + C20829;
    const double C20849 = C20843 + C20825;
    const double C21015 = C21009 + C20995;
    const double C21013 = C21007 + C20991;
    const double C21011 = C21005 + C20987;
    const double C21319 = C21315 + C21307;
    const double C21316 = C21312 + C21301;
    const double C21514 = C21506 + C21486;
    const double C21512 = C21504 + C21480;
    const double C21509 = C21501 + C21471;
    const double C21507 = C21499 + C21467;
    const double C22088 = C22084 + C22074;
    const double C22086 = C22082 + C22070;
    const double C22306 = C22302 + C22290;
    const double C22304 = C22300 + C22286;
    const double C23989 = C23987 + C23983;
    const double C27483 = C27481 + C27475;
    const double C27985 = C27983 + C27977;
    const double C1840 = C1839 + C1835;
    const double C17060 = C2295 + C17058;
    const double C17059 = C17057 + C2295;
    const double C6891 = C6890 + C6886;
    const double C3521 = C3519 * C32798;
    const double C3520 = C3518 * C32798;
    const double C4358 = C3518 * C33025;
    const double C18407 = C3518 * C15101;
    const double C4360 = C4359 * C32860;
    const double C18408 = C4359 * C32860;
    const double C10199 = C10198 + C10194;
    const double C13004 = C10633 + C13002;
    const double C13003 = C13001 + C10633;
    const double C11242 = C11241 + C11237;
    const double C31727 = C31720 + C31684;
    const double C14106 = C14102 + C14087;
    const double C23005 = C23001 + C22986;
    const double C15000 = C14996 + C14981;
    const double C28738 = C28734 + C28719;
    const double C12269 =
        (4 * (2 * C32102 + C32109 + C32109 + C31824 * C32483) + C32494 +
         C32494 +
         C31824 * (3 * C32483 + C32491 + C32491 +
                   C31824 * (2 * C32475 + C32487 + C32487 +
                             C31824 * (C32246 + C32479 + C32479 +
                                       C31824 * (2 * ae * C32310 +
                                                 C31824 * C31831 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827))))) /
        C31602;
    const double C12275 = C11929 * C12268;
    const double C13801 = C13516 * C12268;
    const double C22700 = C22415 * C12268;
    const double C32431 = C32430 + C32422;
    const double C12359 =
        (4 * (2 * C32274 + C32281 + C32281 + C31824 * C32520) + C32533 +
         C32533 +
         C31824 * (3 * C32520 + C32530 + C32530 +
                   C31824 * (2 * C32511 + C32526 + C32526 +
                             C31824 * (C32498 + C32519 + C32519 +
                                       C31824 * (2 * ae * C32501 +
                                                 C31824 * C31965 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827))))) /
        C31602;
    const double C12365 = C11929 * C12358;
    const double C14589 = C13516 * C12358;
    const double C28327 = C22415 * C12358;
    const double C24352 = C24343 + C24328;
    const double C24349 = C24340 + C24319;
    const double C24346 = C24337 + C24310;
    const double C24793 = C24787 + C24480;
    const double C24790 = C24784 + C24477;
    const double C24972 = C24966 + C24608;
    const double C24969 = C24963 + C24605;
    const double C25467 = C25458 + C24486;
    const double C25464 = C25455 + C24489;
    const double C25461 = C25452 + C24483;
    const double C26032 = C26029 + C25130;
    const double C26247 = C26244 + C25127;
    const double C31017 = C31014 + C25446;
    const double C31586 = C31583 + C26238;
    const double C13555 = C13537 + C13538;
    const double C13552 = C13528 + C13529;
    const double C13945 = C13934 + C13673;
    const double C14099 = C14088 + C13787;
    const double C14469 = C14454 + C13682;
    const double C14466 = C14448 + C13677;
    const double C14993 = C14982 + C14242;
    const double C22454 = C22436 + C22437;
    const double C22451 = C22427 + C22428;
    const double C22844 = C22833 + C22572;
    const double C22998 = C22987 + C22686;
    const double C28207 = C28192 + C22581;
    const double C28204 = C28186 + C22576;
    const double C28731 = C28720 + C23141;
    const double C31726 = C31719 / C31595;
    const double C20461 = C20456 + C20457;
    const double C20460 = C20454 + C20455;
    const double C21870 = C20852 + C20853;
    const double C21868 = C20853 + C20852;
    const double C23294 = C20851 + C20850;
    const double C23785 = C20850 + C20851;
    const double C21474 = C21316 + C21317;
    const double C21869 = C21317 + C21316;
    const double C27471 = C21514 + C21513;
    const double C21515 = C21509 + C21510;
    const double C1841 = C1840 * C32798;
    const double C4361 = C4358 + C4360;
    const double C18409 = C18407 + C18408;
    const double C10200 = C10199 * C32798;
    const double C24333 = C31727 * C126;
    const double C24331 = C31727 * C125;
    const double C24316 = C31727 * C124;
    const double C24307 = C31727 * C123;
    const double C24303 = C31727 * C122;
    const double C24491 = C31727 * C256;
    const double C24488 = C31727 * C255;
    const double C24485 = C31727 * C254;
    const double C24484 = C31727 * C253;
    const double C24481 = C31727 * C252;
    const double C24478 = C31727 * C251;
    const double C24619 = C31727 * C361;
    const double C24616 = C31727 * C360;
    const double C24613 = C31727 * C359;
    const double C24612 = C31727 * C358;
    const double C24609 = C31727 * C357;
    const double C24606 = C31727 * C356;
    const double C24780 = C31727 * C250;
    const double C24959 = C31727 * C355;
    const double C25132 = C31727 * C699;
    const double C25129 = C31727 * C698;
    const double C25126 = C31727 * C697;
    const double C25448 = C31727 * C971;
    const double C25445 = C31727 * C972;
    const double C25627 = C31727 * C1137;
    const double C25624 = C31727 * C1135;
    const double C26240 = C31727 * C1133;
    const double C26237 = C31727 * C1134;
    const double C31009 = C31727 * C973;
    const double C31132 = C31727 * C1136;
    const double C31579 = C31727 * C1640;
    const double C11921 =
        (((((0 - (C31593 * C31654) / C31595) * ae) / C31595 -
           (0 * be) / C31606 + (2 * C31656) / C31595) /
              C31637 -
          ((C31593 * C31716 + 0) * be) / C31595 + C31673 - C31696) /
             C31637 +
         ((C31593 * C31732 + 0) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31732 / C31637 +
                    ((C31593 * C31727 + C32898) * ae) / C31595 + C31722) +
          C33097) *
         be) /
            C31595 +
        C31727 / C31637 + ((C31593 * C31722 + C32905) * ae) / C31595 +
        2 * (C31684 / C31637 - (0 * be) / C31595);
    const double C11923 =
        (C31732 / C31637 + ((C31593 * C31727 + C32898) * ae) / C31595 +
         C31722) /
            C31637 -
        ((C31593 * (C31727 / C31637 +
                    ((C31593 * C31722 + C32905) * ae) / C31595 + C31748) +
          C33094) *
         be) /
            C31595 +
        2 * (C31722 / C31637 + ((C31593 * C31747 + C24295) * ae) / C31595);
    const double C11925 =
        (C31727 / C31637 + ((C31593 * C31722 + C32905) * ae) / C31595 +
         C31748) /
            C31637 -
        ((C31593 *
              (C31722 / C31637 + ((C31593 * C31747 + C24295) * ae) / C31595) +
          C33085) *
         be) /
            C31595 +
        3 * (C31747 / C31637 + (0 * ae) / C31595);
    const double C13510 =
        C31732 / C31637 - ((C31593 * C31727 + C32898) * be) / C31595 + C31722;
    const double C13512 =
        C31727 / C31637 - ((C31593 * C31722 + C32905) * be) / C31595 + C31748;
    const double C22409 =
        C31732 / C31637 + ((C31593 * C31727 + C32898) * ae) / C31595 + C31722;
    const double C22411 =
        C31727 / C31637 + ((C31593 * C31722 + C32905) * ae) / C31595 + C31748;
    const double C32432 = ae * C32431;
    const double C12082 =
        (5 * C32381 + C31824 * C32431 + (4 * C32370 + C31824 * C32418) * ae) /
        C31595;
    const double C24361 = C24352 + C24329;
    const double C24358 = C24349 + C24320;
    const double C24355 = C24346 + C24311;
    const double C24799 = C24793 + C24777;
    const double C24796 = C24790 + C24771;
    const double C24978 = C24972 + C24956;
    const double C24975 = C24969 + C24950;
    const double C25476 = C25467 + C25442;
    const double C25473 = C25464 + C25436;
    const double C25470 = C25461 + C25430;
    const double C26035 = C26032 + C26025;
    const double C26250 = C26247 + C26234;
    const double C31020 = C31017 + C31006;
    const double C31589 = C31586 + C31576;
    const double C13563 = C13555 + C13538;
    const double C13560 = C13552 + C13529;
    const double C13949 = C13945 + C13673;
    const double C14103 = C14099 + C13787;
    const double C14477 = C14469 + C13682;
    const double C14474 = C14466 + C13677;
    const double C14997 = C14993 + C14242;
    const double C22462 = C22454 + C22437;
    const double C22459 = C22451 + C22428;
    const double C22848 = C22844 + C22572;
    const double C23002 = C22998 + C22686;
    const double C28215 = C28207 + C22581;
    const double C28212 = C28204 + C22576;
    const double C28735 = C28731 + C23141;
    const double C31730 = C31681 - C31726;
    const double C20463 = C20461 * C32798;
    const double C20462 = C20460 * C32798;
    const double C23293 = C20460 * C33025;
    const double C26398 = C20460 * C15101;
    const double C23295 = C23294 * C32860;
    const double C26399 = C23294 * C32860;
    const double C11941 = C11921 * C124;
    const double C11940 = C11921 * C123;
    const double C11931 = C11921 * C122;
    const double C12013 = C11921 * C254;
    const double C12012 = C11921 * C253;
    const double C12091 = C11921 * C359;
    const double C12090 = C11921 * C358;
    const double C12181 = C11921 * C252;
    const double C12271 = C11921 * C357;
    const double C12361 = C11921 * C697;
    const double C11942 = C11923 * C356;
    const double C11939 = C11923 * C357;
    const double C11932 = C11923 * C358;
    const double C12014 = C11923 * C1134;
    const double C12011 = C11923 * C697;
    const double C12092 = C11923 * C2087;
    const double C12089 = C11923 * C359;
    const double C12182 = C11923 * C698;
    const double C12272 = C11923 * C360;
    const double C12362 = C11923 * C1135;
    const double C11943 = C11925 * C361;
    const double C11938 = C11925 * C360;
    const double C11933 = C11925 * C359;
    const double C12015 = C11925 * C1136;
    const double C12010 = C11925 * C1135;
    const double C12093 = C11925 * C2088;
    const double C12088 = C11925 * C2087;
    const double C12183 = C11925 * C1137;
    const double C12273 = C11925 * C2086;
    const double C12363 = C11925 * C2628;
    const double C13546 = C13510 * C125;
    const double C13544 = C13510 * C124;
    const double C13523 = C13510 * C123;
    const double C13518 = C13510 * C122;
    const double C13684 = C13510 * C255;
    const double C13680 = C13510 * C254;
    const double C13679 = C13510 * C253;
    const double C13675 = C13510 * C252;
    const double C13798 = C13510 * C360;
    const double C13794 = C13510 * C359;
    const double C13793 = C13510 * C358;
    const double C13789 = C13510 * C357;
    const double C13940 = C13510 * C251;
    const double C14094 = C13510 * C356;
    const double C14244 = C13510 * C698;
    const double C14240 = C13510 * C697;
    const double C14460 = C13510 * C972;
    const double C14586 = C13510 * C1135;
    const double C14988 = C13510 * C1134;
    const double C13547 = C13512 * C355;
    const double C13541 = C13512 * C356;
    const double C13526 = C13512 * C357;
    const double C13519 = C13512 * C358;
    const double C13685 = C13512 * C1133;
    const double C13681 = C13512 * C1134;
    const double C13678 = C13512 * C697;
    const double C13674 = C13512 * C698;
    const double C13799 = C13512 * C2086;
    const double C13795 = C13512 * C2087;
    const double C13792 = C13512 * C359;
    const double C13788 = C13512 * C360;
    const double C13941 = C13512 * C699;
    const double C14095 = C13512 * C361;
    const double C14245 = C13512 * C1137;
    const double C14241 = C13512 * C1135;
    const double C14461 = C13512 * C1640;
    const double C14587 = C13512 * C2628;
    const double C14989 = C13512 * C1136;
    const double C22445 = C22409 * C125;
    const double C22443 = C22409 * C124;
    const double C22422 = C22409 * C123;
    const double C22417 = C22409 * C122;
    const double C22583 = C22409 * C255;
    const double C22579 = C22409 * C254;
    const double C22578 = C22409 * C253;
    const double C22574 = C22409 * C252;
    const double C22697 = C22409 * C360;
    const double C22693 = C22409 * C359;
    const double C22692 = C22409 * C358;
    const double C22688 = C22409 * C357;
    const double C22839 = C22409 * C251;
    const double C22993 = C22409 * C356;
    const double C23143 = C22409 * C698;
    const double C23139 = C22409 * C697;
    const double C28198 = C22409 * C972;
    const double C28324 = C22409 * C1135;
    const double C28726 = C22409 * C1134;
    const double C22446 = C22411 * C355;
    const double C22440 = C22411 * C356;
    const double C22425 = C22411 * C357;
    const double C22418 = C22411 * C358;
    const double C22584 = C22411 * C1133;
    const double C22580 = C22411 * C1134;
    const double C22577 = C22411 * C697;
    const double C22573 = C22411 * C698;
    const double C22698 = C22411 * C2086;
    const double C22694 = C22411 * C2087;
    const double C22691 = C22411 * C359;
    const double C22687 = C22411 * C360;
    const double C22840 = C22411 * C699;
    const double C22994 = C22411 * C361;
    const double C23144 = C22411 * C1137;
    const double C23140 = C22411 * C1135;
    const double C28199 = C22411 * C1640;
    const double C28325 = C22411 * C2628;
    const double C28727 = C22411 * C1136;
    const double C12084 =
        (5 * (3 * C32371 + C32379 + C32379 + C31824 * C32420) + C32432 +
         C32432 +
         C31824 *
             (4 * C32420 + C32429 + C32429 +
              C31824 *
                  (3 * C32412 + C32425 + C32425 +
                   C31824 * (2 * C32404 + C32419 + C32419 +
                             C31824 * (C31867 + C32408 + C32408 +
                                       C31824 * (2 * ae * C31945 +
                                                 C31824 *
                                                     (C31861 * C31862 +
                                                      C31828 * bs[8] *
                                                          std::pow(C31822, 8)) *
                                                     C31827)))))) /
        C31602;
    const double C12095 = C11929 * C12082;
    const double C13571 = C13563 + C13539;
    const double C13568 = C13560 + C13530;
    const double C13953 = C13949 + C13935;
    const double C14107 = C14103 + C14089;
    const double C14485 = C14477 + C14455;
    const double C14482 = C14474 + C14449;
    const double C15001 = C14997 + C14983;
    const double C22470 = C22462 + C22438;
    const double C22467 = C22459 + C22429;
    const double C22852 = C22848 + C22834;
    const double C23006 = C23002 + C22988;
    const double C28223 = C28215 + C28193;
    const double C28220 = C28212 + C28187;
    const double C28739 = C28735 + C28721;
    const double C31733 = C31730 - C31664;
    const double C23296 = C23293 + C23295;
    const double C26400 = C26398 + C26399;
    const double C24330 = C31733 * C118;
    const double C24315 = C31733 * C117;
    const double C24306 = C31733 * C116;
    const double C24778 = C31733 * C242;
    const double C24772 = C31733 * C241;
    const double C24957 = C31733 * C347;
    const double C24951 = C31733 * C346;
    const double C25443 = C31733 * C244;
    const double C25437 = C31733 * C245;
    const double C25427 = C31733 * C243;
    const double C26026 = C31733 * C693;
    const double C26235 = C31733 * C692;
    const double C31007 = C31733 * C966;
    const double C31577 = C31733 * C1125;
    const double C11920 =
        (((ae * -2 * C31654) / C31655 -
          (((C31593 * C31677) / C31602 + 2 * C31716) * be) / C31595 -
          C31671 / C31602) /
             C31637 +
         ((C31593 * C31731 + 2 * C31732) * ae) / C31595) /
            C31637 -
        ((C31593 * (C31731 / C31637 +
                    ((C31593 * C31733 + 2 * C31727) * ae) / C31595 + C31721) +
          2 * (C31732 / C31637 + ((C31593 * C31727 + C32898) * ae) / C31595 +
               C31722)) *
         be) /
            C31595 +
        C31733 / C31637 + ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
        (-2 * C31611) / (C31595 * 4 * C31602);
    const double C11922 =
        (C31731 / C31637 + ((C31593 * C31733 + 2 * C31727) * ae) / C31595 +
         C31721) /
            C31637 -
        ((C31593 * (C31733 / C31637 +
                    ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
                    (-2 * C31611) / C31745) +
          2 * (C31727 / C31637 + ((C31593 * C31722 + C32905) * ae) / C31595 +
               C31748)) *
         be) /
            C31595 +
        2 * (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595);
    const double C11924 =
        (C31733 / C31637 + ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
         (-2 * C31611) / C31745) /
            C31637 -
        ((C31593 *
              (C31721 / C31637 + ((C31748 - C31619 / C31745) * ae) / C31595) +
          2 * (C31722 / C31637 + ((C31593 * C31747 + C24295) * ae) / C31595)) *
         be) /
            C31595 +
        (-3 * C31611) / (C31595 * 4 * C31655);
    const double C13509 = C31731 / C31637 -
                          ((C31593 * C31733 + 2 * C31727) * be) / C31595 +
                          C31721;
    const double C13511 = C31733 / C31637 -
                          ((C31593 * C31721 + 2 * C31722) * be) / C31595 +
                          (-2 * C31611) / C31745;
    const double C22408 = C31731 / C31637 +
                          ((C31593 * C31733 + 2 * C31727) * ae) / C31595 +
                          C31721;
    const double C22410 = C31733 / C31637 +
                          ((C31593 * C31721 + 2 * C31722) * ae) / C31595 +
                          (-2 * C31611) / C31745;
    const double C24344 = C24330 + C24331;
    const double C24339 = C24315 + C24316;
    const double C24336 = C24306 + C24307;
    const double C24788 = C24778 + C24481;
    const double C24785 = C24772 + C24478;
    const double C24967 = C24957 + C24609;
    const double C24964 = C24951 + C24606;
    const double C25459 = C25443 + C24485;
    const double C25456 = C25437 + C24488;
    const double C25451 = C25427 + C24484;
    const double C26030 = C26026 + C25129;
    const double C26245 = C26235 + C25126;
    const double C31015 = C31007 + C25445;
    const double C31584 = C31577 + C26237;
    const double C13543 = C13509 * C117;
    const double C13522 = C13509 * C116;
    const double C13938 = C13509 * C242;
    const double C14092 = C13509 * C347;
    const double C14458 = C13509 * C244;
    const double C14444 = C13509 * C243;
    const double C14986 = C13509 * C692;
    const double C13540 = C13511 * C346;
    const double C13525 = C13511 * C347;
    const double C13936 = C13511 * C693;
    const double C14090 = C13511 * C350;
    const double C14456 = C13511 * C1125;
    const double C14446 = C13511 * C692;
    const double C14984 = C13511 * C1126;
    const double C22442 = C22408 * C117;
    const double C22421 = C22408 * C116;
    const double C22837 = C22408 * C242;
    const double C22991 = C22408 * C347;
    const double C28196 = C22408 * C244;
    const double C28182 = C22408 * C243;
    const double C28724 = C22408 * C692;
    const double C22439 = C22410 * C346;
    const double C22424 = C22410 * C347;
    const double C22835 = C22410 * C693;
    const double C22989 = C22410 * C350;
    const double C28194 = C22410 * C1125;
    const double C28184 = C22410 * C692;
    const double C28722 = C22410 * C1126;
    const double C24353 = C24344 + C24331;
    const double C24348 = C24339 + C24316;
    const double C24345 = C24336 + C24307;
    const double C24794 = C24788 + C24481;
    const double C24791 = C24785 + C24478;
    const double C24973 = C24967 + C24609;
    const double C24970 = C24964 + C24606;
    const double C25468 = C25459 + C24485;
    const double C25465 = C25456 + C24488;
    const double C25460 = C25451 + C24484;
    const double C26033 = C26030 + C25129;
    const double C26248 = C26245 + C25126;
    const double C31018 = C31015 + C25445;
    const double C31587 = C31584 + C26237;
    const double C13557 = C13543 + C13544;
    const double C13550 = C13522 + C13523;
    const double C13947 = C13938 + C13675;
    const double C14101 = C14092 + C13789;
    const double C14471 = C14458 + C13680;
    const double C14464 = C14444 + C13679;
    const double C14995 = C14986 + C14240;
    const double C13556 = C13540 + C13541;
    const double C13551 = C13525 + C13526;
    const double C13946 = C13936 + C13674;
    const double C14100 = C14090 + C13788;
    const double C14470 = C14456 + C13681;
    const double C14465 = C14446 + C13678;
    const double C14994 = C14984 + C14241;
    const double C22456 = C22442 + C22443;
    const double C22449 = C22421 + C22422;
    const double C22846 = C22837 + C22574;
    const double C23000 = C22991 + C22688;
    const double C28209 = C28196 + C22579;
    const double C28202 = C28182 + C22578;
    const double C28733 = C28724 + C23139;
    const double C22455 = C22439 + C22440;
    const double C22450 = C22424 + C22425;
    const double C22845 = C22835 + C22573;
    const double C22999 = C22989 + C22687;
    const double C28208 = C28194 + C22580;
    const double C28203 = C28184 + C22577;
    const double C28732 = C28722 + C23140;
    const double C24362 = C24353 + C24332;
    const double C24357 = C24348 + C24317;
    const double C24354 = C24345 + C24308;
    const double C24800 = C24794 + C24779;
    const double C24797 = C24791 + C24773;
    const double C24979 = C24973 + C24958;
    const double C24976 = C24970 + C24952;
    const double C25477 = C25468 + C25444;
    const double C25474 = C25465 + C25438;
    const double C25469 = C25460 + C25428;
    const double C26036 = C26033 + C26027;
    const double C26251 = C26248 + C26236;
    const double C31021 = C31018 + C31008;
    const double C31590 = C31587 + C31578;
    const double C13565 = C13557 + C13544;
    const double C13558 = C13550 + C13523;
    const double C13951 = C13947 + C13675;
    const double C14105 = C14101 + C13789;
    const double C14479 = C14471 + C13680;
    const double C14472 = C14464 + C13679;
    const double C14999 = C14995 + C14240;
    const double C13564 = C13556 + C13541;
    const double C13559 = C13551 + C13526;
    const double C13950 = C13946 + C13674;
    const double C14104 = C14100 + C13788;
    const double C14478 = C14470 + C13681;
    const double C14473 = C14465 + C13678;
    const double C14998 = C14994 + C14241;
    const double C22464 = C22456 + C22443;
    const double C22457 = C22449 + C22422;
    const double C22850 = C22846 + C22574;
    const double C23004 = C23000 + C22688;
    const double C28217 = C28209 + C22579;
    const double C28210 = C28202 + C22578;
    const double C28737 = C28733 + C23139;
    const double C22463 = C22455 + C22440;
    const double C22458 = C22450 + C22425;
    const double C22849 = C22845 + C22573;
    const double C23003 = C22999 + C22687;
    const double C28216 = C28208 + C22580;
    const double C28211 = C28203 + C22577;
    const double C28736 = C28732 + C23140;
    const double C24363 = C24357 + C24358;
    const double C25825 = C24799 + C24800;
    const double C25824 = C24800 + C24799;
    const double C31002 = C25477 + C25476;
    const double C13573 = C13565 + C13545;
    const double C13566 = C13558 + C13524;
    const double C13955 = C13951 + C13939;
    const double C14109 = C14105 + C14093;
    const double C14487 = C14479 + C14459;
    const double C14480 = C14472 + C14445;
    const double C15003 = C14999 + C14987;
    const double C13572 = C13564 + C13542;
    const double C13567 = C13559 + C13527;
    const double C13954 = C13950 + C13937;
    const double C14108 = C14104 + C14091;
    const double C14486 = C14478 + C14457;
    const double C14481 = C14473 + C14447;
    const double C15002 = C14998 + C14985;
    const double C22472 = C22464 + C22444;
    const double C22465 = C22457 + C22423;
    const double C22854 = C22850 + C22838;
    const double C23008 = C23004 + C22992;
    const double C28225 = C28217 + C28197;
    const double C28218 = C28210 + C28183;
    const double C28741 = C28737 + C28725;
    const double C22471 = C22463 + C22441;
    const double C22466 = C22458 + C22426;
    const double C22853 = C22849 + C22836;
    const double C23007 = C23003 + C22990;
    const double C28224 = C28216 + C28195;
    const double C28219 = C28211 + C28185;
    const double C28740 = C28736 + C28723;
    const double C24364 = C24363 + C24359;
    const double C25827 = C24798 + C25825;
    const double C25826 = C25824 + C24798;
    const double C31012 = C31002 + C25475;
    const double C24365 = C24364 * C32798;
    d2ee[0] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
             C1009 * C32863 + C1010 * C17575) *
                C32720 +
            (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
               C32774 * C466 -
           ((C17957 + C17958 + C17959) * C17578 +
            (C17960 + C17961 + C17962) * C32728 +
            (C1013 * C17575 + C1010 * C32863 + C1009 * C32856) * C32720) *
               C32774 * C467) *
              C468 +
          (((C17962 + C17961 + C17960) * C32720 +
            (C17959 + C17958 + C17957) * C32728 +
            (C492 * C32856 + C850 * C32863 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C17575) *
                C17578) *
               C32774 * C467 -
           ((C17586 + C17587 + C17588) * C17578 +
            (C17585 + C17584 + C17583) * C32728 +
            (C17582 + C17581 + C17580) * C32720) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[1] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
             C1009 * C32863 + C1010 * C17575) *
                C32720 +
            (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
               C580 -
           ((C18109 + C18110 + C18111) * C17578 +
            (C18112 + C18113 + C18114) * C32728 +
            (C1658 * C17575 + C1659 * C32863 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C32856) *
                C32720) *
               C581) *
              C466 +
          (((C1659 * C32856 + C1658 * C32863 + C6618 * C17575) * C32720 +
            (C1487 * C32856 + C1486 * C32863 + C8101 * C17575) * C32728 +
            (C1485 * C32856 + C1484 * C32863 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C17575) *
                C17578) *
               C581 -
           ((C17957 + C17958 + C17959) * C17578 +
            (C17960 + C17961 + C17962) * C32728 +
            (C1013 * C17575 + C1010 * C32863 + C1009 * C32856) * C32720) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[2] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                   C1009 * C32863 + C1010 * C17575) *
                      C32720 +
                  (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                     C32774 * C235 -
                 ((C1011 * C17575 + C849 * C32863 + C493 * C32856) * C17578 +
                  (C1012 * C17575 + C848 * C32863 + C494 * C32856) * C32728 +
                  (C1013 * C17575 + C1010 * C32863 + C1009 * C32856) * C32720) *
                     C32774 * C236 +
                 ((C1010 * C32856 + C1013 * C32863 + C6270 * C17575) * C32720 +
                  (C848 * C32856 + C1012 * C32863 + C6436 * C17575) * C32728 +
                  (C849 * C32856 + C1011 * C32863 +
                   (C113 * C969 + C998 + C998 + C32815 * C981) * C17575) *
                      C17578) *
                     C32774 * C237) *
                C32748) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                   C1009 * C32863 + C1010 * C17575) *
                      C32720 +
                  (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                     C32774 * C32760 * C110 -
                 ((C17586 + C17587 + C17588) * C17578 +
                  (C17585 + C17584 + C17583) * C32728 +
                  (C17582 + C17581 + C17580) * C32720) *
                     C32774 * C32760 * C111 +
                 (C17590 * C32720 + (C17588 + C17587 + C17586) * C32728 +
                  (C167 * C32856 + C491 * C32863 +
                   (C113 * C248 + C279 + C279 + C32815 * C268) * C17575) *
                      C17578) *
                     C32774 * C32760 * C112)) /
                   (p * q * std::sqrt(p + q)) +
               (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                   C1009 * C32863 + C1010 * C17575) *
                      C32720 +
                  (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                     C341 -
                 ((C1484 * C17575 + C1485 * C32863 + C605 * C32856) * C17578 +
                  (C1486 * C17575 + C1487 * C32863 + C606 * C32856) * C32728 +
                  (C1658 * C17575 + C1659 * C32863 +
                   (C113 * C348 + C379 + C379 + C32815 * C368) * C32856) *
                      C32720) *
                     C342 +
                 (((C113 * C349 + C380 + C380 + C32815 * C369) * C32856 +
                   (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C32863 +
                   (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C17575) *
                      C32720 +
                  ((C113 * C350 + C381 + C381 + C32815 * C370) * C32856 +
                   (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C32863 +
                   (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C17575) *
                      C32728 +
                  ((C113 * C351 + C382 + C382 + C32815 * C371) * C32856 +
                   (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C32863 +
                   (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C17575) *
                      C17578) *
                     C343) *
                C32760 * C32748) /
                   (p * q * std::sqrt(p + q));
    d2ee[3] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                (((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                    C1009 * C32863 + C1010 * C17575) *
                       C32720 +
                   (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                      C580 -
                  ((C18109 + C18110 + C18111) * C17578 +
                   (C18112 + C18113 + C18114) * C32728 +
                   (C1658 * C17575 + C1659 * C32863 +
                    (C113 * C348 + C379 + C379 + C32815 * C368) * C32856) *
                       C32720) *
                      C581) *
                     C32760 * C468 +
                 (((C18114 + C18113 + C18112) * C32720 +
                   (C18111 + C18110 + C18109) * C32728 +
                   (C604 * C32856 + C3230 * C32863 +
                    (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C17575) *
                       C17578) *
                      C581 -
                  ((C17586 + C17587 + C17588) * C17578 +
                   (C17585 + C17584 + C17583) * C32728 +
                   (C17582 + C17581 + C17580) * C32720) *
                      C580) *
                     C32760 * C469)) /
               (p * q * std::sqrt(p + q));
    d2ee[4] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                   C1009 * C32863 + C1010 * C17575) *
                      C32720 +
                  (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                     C32774 * C32760 * C110 -
                 ((C17586 + C17587 + C17588) * C17578 +
                  (C17585 + C17584 + C17583) * C32728 +
                  (C17582 + C17581 + C17580) * C32720) *
                     C32774 * C32760 * C111 +
                 (C17590 * C32720 + (C17588 + C17587 + C17586) * C32728 +
                  (C167 * C32856 + C491 * C32863 +
                   (C113 * C248 + C279 + C279 + C32815 * C268) * C17575) *
                      C17578) *
                     C32774 * C32760 * C112)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32856 +
                   C1009 * C32863 + C1010 * C17575) *
                      C32720 +
                  (C17580 + C17581 + C17582) * C32728 + C17590 * C17578) *
                     C32774 * C235 -
                 ((C1011 * C17575 + C849 * C32863 + C493 * C32856) * C17578 +
                  (C1012 * C17575 + C848 * C32863 + C494 * C32856) * C32728 +
                  (C1013 * C17575 + C1010 * C32863 + C1009 * C32856) * C32720) *
                     C32774 * C236 +
                 ((C1010 * C32856 + C1013 * C32863 + C6270 * C17575) * C32720 +
                  (C848 * C32856 + C1012 * C32863 + C6436 * C17575) * C32728 +
                  (C849 * C32856 + C1011 * C32863 +
                   (C113 * C969 + C998 + C998 + C32815 * C981) * C17575) *
                      C17578) *
                     C32774 * C237) *
                C32748) /
                   (p * q * std::sqrt(p + q));
    d2ee[5] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C32856 +
             (C4546 + C4547) * C32863 + C8525 * C17575) *
                C15817 +
            ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                C32725) *
               C32774 * C466 -
           (((C8547 + C8548) * C17575 + C8895 * C32863 + C4902 * C32856) *
                C32725 +
            ((C8549 + C8550) * C17575 + (C4552 + C4553) * C32863 +
             (C4547 + C4546) * C32856) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C4900 * C32856 + C8526 * C32863 + (C8548 + C8547) * C17575) *
                C15817 +
            (C4359 * C32856 + (C4549 + C4548) * C32863 +
             (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
              C4529 + C4529 + C32902 * C1645) *
                 C17575) *
                C32725) *
               C32774 * C467 -
           (((C4548 + C4549) * C17575 + C4901 * C32863 +
             (C3513 + C3512) * C32856) *
                C32725 +
            (C8895 * C17575 + C4902 * C32863 + (C3511 + C3510) * C32856) *
                C15817) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[6] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C32856 +
             (C4546 + C4547) * C32863 + C8525 * C17575) *
                C15817 +
            ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C17575 + (C5115 + C5116) * C32863 +
             (C4072 + C4073) * C32856) *
                C32725 +
            ((C9306 + C9307) * C17575 + (C5325 + C5326) * C32863 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C32856) *
                C15817) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C32856 + (C9307 + C9306) * C32863 +
             (C10018 + C10017) * C17575) *
                C15817 +
            ((C5116 + C5115) * C32856 + (C9099 + C9098) * C32863 +
             (C3461 * C1638 + C9300 + C9300 + C33027 * C1644 + C3463 * C7165 +
              C9301 + C9301 + C32902 * C7167) *
                 C17575) *
                C32725) *
               C581 -
           (((C8547 + C8548) * C17575 + C8895 * C32863 + C4902 * C32856) *
                C32725 +
            ((C8549 + C8550) * C17575 + (C4552 + C4553) * C32863 +
             (C4547 + C4546) * C32856) *
                C15817) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[7] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 +
                    C3463 * C348 + C3467 + C3467 + C32902 * C368) *
                       C32856 +
                   (C4546 + C4547) * C32863 + C8525 * C17575) *
                      C15817 +
                  ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                      C32725) *
                     C32774 * C235 -
                 (((C8547 + C8548) * C17575 + C8895 * C32863 + C4902 * C32856) *
                      C32725 +
                  ((C8549 + C8550) * C17575 + (C4552 + C4553) * C32863 +
                   (C4547 + C4546) * C32856) *
                      C15817) *
                     C32774 * C236 +
                 ((C8525 * C32856 + C9504 * C32863 + (C9516 + C9515) * C17575) *
                      C15817 +
                  (C8526 * C32856 + (C8548 + C8547) * C32863 +
                   (C3461 * C968 + C8537 + C8537 + C33027 * C980 +
                    C3463 * C6518 + C8538 + C8538 + C32902 * C6520) *
                       C17575) *
                      C32725) *
                     C32774 * C237) *
                C32748) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 +
                    C3463 * C348 + C3467 + C3467 + C32902 * C368) *
                       C32856 +
                   (C4546 + C4547) * C32863 + C8525 * C17575) *
                      C15817 +
                  ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                      C32725) *
                     C32774 * C32760 * C110 -
                 (((C4548 + C4549) * C17575 + C4901 * C32863 +
                   (C3513 + C3512) * C32856) *
                      C32725 +
                  (C8895 * C17575 + C4902 * C32863 + (C3511 + C3510) * C32856) *
                      C15817) *
                     C32774 * C32760 * C111 +
                 ((C3518 * C32856 + C4359 * C32863 + (C4549 + C4548) * C17575) *
                      C15817 +
                  (C3519 * C32856 + (C3907 + C3906) * C32863 +
                   (C3461 * C247 + C3634 + C3634 + C33027 * C267 +
                    C3463 * C1461 + C3635 + C3635 + C32902 * C1463) *
                       C17575) *
                      C32725) *
                     C32774 * C32760 * C112)) /
                   (p * q * std::sqrt(p + q)) +
               (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 +
                    C3463 * C348 + C3467 + C3467 + C32902 * C368) *
                       C32856 +
                   (C4546 + C4547) * C32863 + C8525 * C17575) *
                      C15817 +
                  ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                      C32725) *
                     C341 -
                 (((C9098 + C9099) * C17575 + (C5115 + C5116) * C32863 +
                   (C4072 + C4073) * C32856) *
                      C32725 +
                  ((C9306 + C9307) * C17575 + (C5325 + C5326) * C32863 +
                   (C3463 * C349 + C3740 + C3740 + C32902 * C369 +
                    C3461 * C348 + C3741 + C3741 + C33027 * C368) *
                       C32856) *
                      C15817) *
                     C342 +
                 (((C3461 * C349 + C3742 + C3742 + C33027 * C369 +
                    C3463 * C2081 + C3743 + C3743 + C32902 * C2093) *
                       C32856 +
                   (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 +
                    C3463 * C2625 + C4701 + C4701 + C32902 * C2631) *
                       C32863 +
                   (C3461 * C1127 + C8697 + C8697 + C33027 * C1145 +
                    C3463 * C7001 + C8698 + C8698 + C32902 * C7007) *
                       C17575) *
                      C15817 +
                  ((C3461 * C350 + C3744 + C3744 + C33027 * C370 +
                    C3463 * C2080 + C3745 + C3745 + C32902 * C2092) *
                       C32856 +
                   (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 +
                    C3463 * C2626 + C4703 + C4703 + C32902 * C2632) *
                       C32863 +
                   (C3461 * C1129 + C8699 + C8699 + C33027 * C1147 +
                    C3463 * C7332 + C8700 + C8700 + C32902 * C7334) *
                       C17575) *
                      C32725) *
                     C343) *
                C32760 * C32748) /
                   (p * q * std::sqrt(p + q));
    d2ee[8] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C32856 +
             (C4546 + C4547) * C32863 + C8525 * C17575) *
                C15817 +
            ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C17575 + (C5115 + C5116) * C32863 +
             (C4072 + C4073) * C32856) *
                C32725 +
            ((C9306 + C9307) * C17575 + (C5325 + C5326) * C32863 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C32856) *
                C15817) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C32856 + (C5116 + C5115) * C32863 +
             (C9099 + C9098) * C17575) *
                C15817 +
            ((C4071 + C4070) * C32856 + (C5114 + C5113) * C32863 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C17575) *
                C32725) *
               C581 -
           (((C4548 + C4549) * C17575 + C4901 * C32863 +
             (C3513 + C3512) * C32856) *
                C32725 +
            (C8895 * C17575 + C4902 * C32863 + (C3511 + C3510) * C32856) *
                C15817) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[9] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 +
                    C3463 * C348 + C3467 + C3467 + C32902 * C368) *
                       C32856 +
                   (C4546 + C4547) * C32863 + C8525 * C17575) *
                      C15817 +
                  ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                      C32725) *
                     C32774 * C32760 * C110 -
                 (((C4548 + C4549) * C17575 + C4901 * C32863 +
                   (C3513 + C3512) * C32856) *
                      C32725 +
                  (C8895 * C17575 + C4902 * C32863 + (C3511 + C3510) * C32856) *
                      C15817) *
                     C32774 * C32760 * C111 +
                 ((C3518 * C32856 + C4359 * C32863 + (C4549 + C4548) * C17575) *
                      C15817 +
                  (C3519 * C32856 + (C3907 + C3906) * C32863 +
                   (C3461 * C247 + C3634 + C3634 + C33027 * C267 +
                    C3463 * C1461 + C3635 + C3635 + C32902 * C1463) *
                       C17575) *
                      C32725) *
                     C32774 * C32760 * C112)) /
                   (p * q * std::sqrt(p + q)) -
               (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 +
                    C3463 * C348 + C3467 + C3467 + C32902 * C368) *
                       C32856 +
                   (C4546 + C4547) * C32863 + C8525 * C17575) *
                      C15817 +
                  ((C3510 + C3511) * C32856 + C4900 * C32863 + C8526 * C17575) *
                      C32725) *
                     C32774 * C235 -
                 (((C8547 + C8548) * C17575 + C8895 * C32863 + C4902 * C32856) *
                      C32725 +
                  ((C8549 + C8550) * C17575 + (C4552 + C4553) * C32863 +
                   (C4547 + C4546) * C32856) *
                      C15817) *
                     C32774 * C236 +
                 ((C8525 * C32856 + C9504 * C32863 + (C9516 + C9515) * C17575) *
                      C15817 +
                  (C8526 * C32856 + (C8548 + C8547) * C32863 +
                   (C3461 * C968 + C8537 + C8537 + C33027 * C980 +
                    C3463 * C6518 + C8538 + C8538 + C32902 * C6520) *
                       C17575) *
                      C32725) *
                     C32774 * C237) *
                C32748) /
                   (p * q * std::sqrt(p + q));
    d2ee[10] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C32774 * C466 -
           ((C16154 + C16155 + C16156 + C16157) * C32725 +
            (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 +
             C1009 * C33096) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C16157 + C16156 + C16155 + C16154) * C15817 +
            (C493 * C33096 + C849 * C33092 + C1011 * C33082 +
             (C113 * C969 + C998 + C998 + C32815 * C981) * C33034) *
                C32725) *
               C32774 * C467 -
           ((C15824 + C15825 + C15826 + C15827) * C32725 +
            (C15823 + C15822 + C15821 + C15820) * C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C32774 * C466 -
           ((C15444 + C15445) * C33026 + (C15446 + C15447) * C33075 +
            (C15448 + C15449) * C33088 +
            (C1010 * C32860 + C1009 * C15101) * C33095) *
               C32774 * C467) *
              C468 +
          (((C15449 + C15448) * C33095 + (C15447 + C15446) * C33088 +
            (C15445 + C15444) * C33075 +
            (C491 * C15101 +
             (C113 * C248 + C279 + C279 + C32815 * C268) * C32860) *
                C33026) *
               C32774 * C467 -
           ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
            (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
              C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
              C33060 * C369) *
                 C15101 +
             (C6881 + C6882 + C6883) * C32860) *
                C15817 +
            ((C1830 + C1831 + C1832) * C15101 + C17059 * C32860) * C32725) *
               C32774 * C466 -
           (((C7186 + C7185 + C7184) * C32860 + C17060 * C15101) * C32725 +
            ((C6886 + C6885 + C6884) * C32860 +
             (C6883 + C6882 + C6881) * C15101) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C17059 * C15101 + (C7184 + C7185 + C7186) * C32860) * C15817 +
            ((C2294 + C2293 + C2292) * C15101 +
             (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
              C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
              C33060 * C1149) *
                 C32860) *
                C32725) *
               C32774 * C467 -
           (((C2292 + C2293 + C2294) * C32860 +
             (C1835 + C1834 + C1833) * C15101) *
                C32725 +
            (C17060 * C32860 + (C1832 + C1831 + C1830) * C15101) * C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[11] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C580 -
           ((C16288 + C16289 + C16290 + C16291) * C32725 +
            (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
                C15817) *
               C581) *
              C466 +
          (((C1659 * C33096 + C1658 * C33092 + C6618 * C33082 +
             C6617 * C33034) *
                C15817 +
            (C1487 * C33096 + C1486 * C33092 + C8101 * C33082 +
             (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C33034) *
                C32725) *
               C581 -
           ((C16154 + C16155 + C16156 + C16157) * C32725 +
            (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 +
             C1009 * C33096) *
                C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C580 -
           ((C15580 + C15581) * C33026 + (C15582 + C15583) * C33075 +
            (C15584 + C15585) * C33088 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
                C33095) *
               C581) *
              C466 +
          (((C1659 * C15101 + C1658 * C32860) * C33095 +
            (C1487 * C15101 + C1486 * C32860) * C33088 +
            (C1485 * C15101 + C1484 * C32860) * C33075 +
            (C3230 * C15101 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C32860) *
                C33026) *
               C581 -
           ((C15444 + C15445) * C33026 + (C15446 + C15447) * C33075 +
            (C15448 + C15449) * C33088 +
            (C1010 * C32860 + C1009 * C15101) * C33095) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
              C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
              C33060 * C369) *
                 C15101 +
             (C6881 + C6882 + C6883) * C32860) *
                C15817 +
            ((C1830 + C1831 + C1832) * C15101 + C17059 * C32860) * C32725) *
               C580 -
           (((C17267 + C17268 + C17269) * C32860 +
             (C2477 + C2478 + C2479) * C15101) *
                C32725 +
            ((C7518 + C7519 + C7520) * C32860 +
             (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
              C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
              C33090 * C368) *
                 C15101) *
                C15817) *
               C581) *
              C466 +
          ((((C7520 + C7519 + C7518) * C15101 +
             (C7517 + C7516 + C7515) * C32860) *
                C15817 +
            ((C17269 + C17268 + C17267) * C15101 +
             (C1772 * C1124 + C7336 + C7336 + C33090 * C1142 + C1774 * C1129 +
              C7337 + C7337 + C33079 * C1147 + C1776 * C7332 + C7338 + C7338 +
              C33060 * C7334) *
                 C32860) *
                C32725) *
               C581 -
           (((C7186 + C7185 + C7184) * C32860 + C17060 * C15101) * C32725 +
            ((C6886 + C6885 + C6884) * C32860 +
             (C6883 + C6882 + C6881) * C15101) *
                C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[12] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
                C1009 * C32860) *
                   C33095 +
               (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
                  C32774 * C32760 * C110 -
              ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
               (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
                  C32774 * C32760 * C111 +
              (C15116 * C33095 + C15117 * C33088 + (C15115 + C15114) * C33075 +
               (C168 * C15101 +
                (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
                   C33026) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
                C1009 * C32860) *
                   C33095 +
               (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
                  C32774 * C235 -
              ((C850 * C32860 + C492 * C15101) * C33026 +
               (C849 * C32860 + C493 * C15101) * C33075 +
               (C848 * C32860 + C494 * C15101) * C33088 +
               (C1010 * C32860 + C1009 * C15101) * C33095) *
                  C32774 * C236 +
              ((C1010 * C15101 + C1013 * C32860) * C33095 +
               (C848 * C15101 + C1012 * C32860) * C33088 +
               (C849 * C15101 + C1011 * C32860) * C33075 +
               (C850 * C15101 +
                (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
                   C33026) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C341 -
          ((C3230 * C32860 + C604 * C15101) * C33026 +
           (C1485 * C32860 + C605 * C15101) * C33075 +
           (C1487 * C32860 + C606 * C15101) * C33088 +
           (C1659 * C32860 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
               C33095) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C15101 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C32860) *
               C33095 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C15101 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C32860) *
               C33088 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C15101 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C32860) *
               C33075 +
           ((C113 * C352 + C383 + C383 + C32815 * C372) * C15101 +
            (C113 * C2261 + C2954 + C2954 + C32815 * C2263) * C32860) *
               C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C32760 * C110 -
          ((C15824 + C15825 + C15826 + C15827) * C32725 +
           (C15823 + C15822 + C15821 + C15820) * C15817) *
              C32774 * C32760 * C111 +
          ((C15827 + C15826 + C15825 + C15824) * C15817 +
           (C166 * C33096 + C492 * C33092 + C850 * C33082 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C33082 + C848 * C33092 + C494 * C33096) *
               C32725 +
           (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 + C1009 * C33096) *
               C15817) *
              C32774 * C236 +
          ((C1010 * C33096 + C1013 * C33092 + C6270 * C33082 + C6271 * C33034) *
               C15817 +
           (C848 * C33096 + C1012 * C33092 + C6436 * C33082 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C341 -
          ((C8101 * C33034 + C1486 * C33082 + C1487 * C33092 + C606 * C33096) *
               C32725 +
           (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
               C15817) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33096 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33092 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33082 +
            (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C33034) *
               C15817 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33096 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33092 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33082 +
            (C113 * C7165 + C7829 + C7829 + C32815 * C7167) * C33034) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C15101 +
            (C6881 + C6882 + C6883) * C32860) *
               C15817 +
           ((C1830 + C1831 + C1832) * C15101 +
            (C2297 + C2296 + C2295) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C2292 + C2293 + C2294) * C32860 +
            (C1835 + C1834 + C1833) * C15101) *
               C32725 +
           ((C2295 + C2296 + C2297) * C32860 +
            (C1832 + C1831 + C1830) * C15101) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C1840 * C15101 + (C2294 + C2293 + C2292) * C32860) * C15817 +
           ((C1838 + C1837 + C1836) * C15101 +
            (C1772 * C240 + C2277 + C2277 + C33090 * C260 + C1774 * C695 +
             C2278 + C2278 + C33079 * C705 + C1776 * C2261 + C2279 + C2279 +
             C33060 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C15101 +
            (C6881 + C6882 + C6883) * C32860) *
               C15817 +
           ((C1830 + C1831 + C1832) * C15101 +
            (C2297 + C2296 + C2295) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C7186 + C7185 + C7184) * C32860 +
            (C2295 + C2296 + C2297) * C15101) *
               C32725 +
           ((C6886 + C6885 + C6884) * C32860 +
            (C6883 + C6882 + C6881) * C15101) *
               C15817) *
              C32774 * C236 +
          ((C6891 * C15101 + (C6889 + C6888 + C6887) * C32860) * C15817 +
           ((C7184 + C7185 + C7186) * C15101 +
            (C1772 * C965 + C7175 + C7175 + C33090 * C977 + C1774 * C1638 +
             C7176 + C7176 + C33079 * C1644 + C1776 * C7165 + C7177 + C7177 +
             C33060 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C15101 +
            (C6881 + C6882 + C6883) * C32860) *
               C15817 +
           ((C1830 + C1831 + C1832) * C15101 +
            (C2297 + C2296 + C2295) * C32860) *
               C32725) *
              C341 -
          (((C1776 * C2626 + C2640 + C2640 + C33060 * C2632 + C1774 * C1128 +
             C2639 + C2639 + C33079 * C1146 + C1772 * C693 + C2638 + C2638 +
             C33090 * C703) *
                C32860 +
            (C2477 + C2478 + C2479) * C15101) *
               C32725 +
           ((C7518 + C7519 + C7520) * C32860 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C15101) *
               C15817) *
              C342 +
          (((C1772 * C349 + C2107 + C2107 + C33090 * C369 + C1774 * C2081 +
             C2108 + C2108 + C33079 * C2093 + C1776 * C2082 + C2109 + C2109 +
             C33060 * C2094) *
                C15101 +
            (C1772 * C1126 + C7014 + C7014 + C33090 * C1144 + C1774 * C2625 +
             C7015 + C7015 + C33079 * C2631 + C1776 * C7002 + C7016 + C7016 +
             C33060 * C7008) *
                C32860) *
               C15817 +
           ((C1772 * C350 + C2110 + C2110 + C33090 * C370 + C1774 * C2080 +
             C2111 + C2111 + C33079 * C2092 + C1776 * C2083 + C2112 + C2112 +
             C33060 * C2095) *
                C15101 +
            (C1772 * C1128 + C16860 + C16860 + C33090 * C1146 + C1774 * C2626 +
             C16861 + C16861 + C33079 * C2632 + C1776 * C12177 + C16862 +
             C16862 + C33060 * C12179) *
                C32860) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[13] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C580 -
           ((C16288 + C16289 + C16290 + C16291) * C32725 +
            (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
                C15817) *
               C581) *
              C32760 * C468 +
          (((C16291 + C16290 + C16289 + C16288) * C15817 +
            (C605 * C33096 + C1485 * C33092 + C1484 * C33082 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33034) *
                C32725) *
               C581 -
           ((C15824 + C15825 + C15826 + C15827) * C32725 +
            (C15823 + C15822 + C15821 + C15820) * C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C580 -
           ((C15580 + C15581) * C33026 + (C15582 + C15583) * C33075 +
            (C15584 + C15585) * C33088 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
                C33095) *
               C581) *
              C32760 * C468 +
          (((C15585 + C15584) * C33095 + (C15583 + C15582) * C33088 +
            (C15581 + C15580) * C33075 +
            (C603 * C15101 +
             (C113 * C696 + C712 + C712 + C32815 * C706) * C32860) *
                C33026) *
               C581 -
           ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
            (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
              C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
              C33060 * C369) *
                 C15101 +
             (C6881 + C6882 + C6883) * C32860) *
                C15817 +
            ((C1830 + C1831 + C1832) * C15101 + C17059 * C32860) * C32725) *
               C580 -
           (((C17267 + C17268 + C17269) * C32860 +
             (C2477 + C2478 + C2479) * C15101) *
                C32725 +
            ((C7518 + C7519 + C7520) * C32860 +
             (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
              C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
              C33090 * C368) *
                 C15101) *
                C15817) *
               C581) *
              C32760 * C468 +
          ((((C2479 + C2478 + C2477) * C15101 +
             (C17269 + C17268 + C17267) * C32860) *
                C15817 +
            ((C2476 + C2475 + C2474) * C15101 +
             (C1772 * C694 + C2641 + C2641 + C33090 * C704 + C1774 * C1130 +
              C2642 + C2642 + C33079 * C1148 + C1776 * C2627 + C2643 + C2643 +
              C33060 * C2633) *
                 C32860) *
                C32725) *
               C581 -
           (((C2292 + C2293 + C2294) * C32860 +
             (C1835 + C1834 + C1833) * C15101) *
                C32725 +
            (C17060 * C32860 + (C1832 + C1831 + C1830) * C15101) * C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[14] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C15101) * C33026 +
           (C849 * C32860 + C493 * C15101) * C33075 +
           (C848 * C32860 + C494 * C15101) * C33088 +
           (C1010 * C32860 + C1009 * C15101) * C33095) *
              C32774 * C236 +
          ((C1010 * C15101 + C1013 * C32860) * C33095 +
           (C848 * C15101 + C1012 * C32860) * C33088 +
           (C849 * C15101 + C1011 * C32860) * C33075 +
           (C850 * C15101 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C32760 * C110 -
          ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
           (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
              C32774 * C32760 * C111 +
          (C15116 * C33095 + C15117 * C33088 + (C15115 + C15114) * C33075 +
           (C168 * C15101 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C32760 * C110 -
          ((C15824 + C15825 + C15826 + C15827) * C32725 +
           (C15823 + C15822 + C15821 + C15820) * C15817) *
              C32774 * C32760 * C111 +
          ((C15827 + C15826 + C15825 + C15824) * C15817 +
           (C166 * C33096 + C492 * C33092 + C850 * C33082 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C33082 + C848 * C33092 + C494 * C33096) *
               C32725 +
           (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 + C1009 * C33096) *
               C15817) *
              C32774 * C236 +
          ((C1010 * C33096 + C1013 * C33092 + C6270 * C33082 + C6271 * C33034) *
               C15817 +
           (C848 * C33096 + C1012 * C33092 + C6436 * C33082 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C15101 +
            (C6881 + C6882 + C6883) * C32860) *
               C15817 +
           ((C1830 + C1831 + C1832) * C15101 +
            (C2297 + C2296 + C2295) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C2292 + C2293 + C2294) * C32860 +
            (C1835 + C1834 + C1833) * C15101) *
               C32725 +
           ((C2295 + C2296 + C2297) * C32860 +
            (C1832 + C1831 + C1830) * C15101) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C1840 * C15101 + (C2294 + C2293 + C2292) * C32860) * C15817 +
           ((C1838 + C1837 + C1836) * C15101 +
            (C1772 * C240 + C2277 + C2277 + C33090 * C260 + C1774 * C695 +
             C2278 + C2278 + C33079 * C705 + C1776 * C2261 + C2279 + C2279 +
             C33060 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C15101 +
            (C6881 + C6882 + C6883) * C32860) *
               C15817 +
           ((C1830 + C1831 + C1832) * C15101 +
            (C2297 + C2296 + C2295) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C7186 + C7185 + C7184) * C32860 +
            (C2295 + C2296 + C2297) * C15101) *
               C32725 +
           ((C6886 + C6885 + C6884) * C32860 +
            (C6883 + C6882 + C6881) * C15101) *
               C15817) *
              C32774 * C236 +
          ((C6891 * C15101 + (C6889 + C6888 + C6887) * C32860) * C15817 +
           ((C7184 + C7185 + C7186) * C15101 +
            (C1772 * C965 + C7175 + C7175 + C33090 * C977 + C1774 * C1638 +
             C7176 + C7176 + C33079 * C1644 + C1776 * C7165 + C7177 + C7177 +
             C33060 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[15] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C15101 +
             (C4546 + C4547) * C32860) *
                C32720 +
            ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
            C18409 * C17578) *
               C32774 * C466 -
           (((C4548 + C4549) * C32860 + C4901 * C15101) * C17578 +
            (C8895 * C32860 + C4902 * C15101) * C32728 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C15101) * C32720) *
               C32774 * C467) *
              C468 +
          (((C4900 * C15101 + C8526 * C32860) * C32720 +
            (C4359 * C15101 + (C4549 + C4548) * C32860) * C32728 +
            ((C3907 + C3906) * C15101 +
             (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
              C3635 + C3635 + C32902 * C1463) *
                 C32860) *
                C17578) *
               C32774 * C467 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C15101) * C17578 +
            (C4901 * C32860 + (C3513 + C3512) * C15101) * C32728 +
            (C4902 * C32860 + (C3511 + C3510) * C15101) * C32720) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[16] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C15101 +
             (C4546 + C4547) * C32860) *
                C32720 +
            ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
            C18409 * C17578) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C15101) * C17578 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C15101) * C32728 +
            ((C5325 + C5326) * C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C15101) *
                C32720) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C15101 + (C9307 + C9306) * C32860) * C32720 +
            ((C5116 + C5115) * C15101 + (C9099 + C9098) * C32860) * C32728 +
            ((C5114 + C5113) * C15101 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C32860) *
                C17578) *
               C581 -
           (((C4548 + C4549) * C32860 + C4901 * C15101) * C17578 +
            (C8895 * C32860 + C4902 * C15101) * C32728 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C15101) * C32720) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[17] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C15101 +
            (C4546 + C4547) * C32860) *
               C32720 +
           ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
           C18409 * C17578) *
              C32774 * C235 -
          (((C4548 + C4549) * C32860 + C4901 * C15101) * C17578 +
           (C8895 * C32860 + C4902 * C15101) * C32728 +
           ((C4552 + C4553) * C32860 + (C4547 + C4546) * C15101) * C32720) *
              C32774 * C236 +
          ((C8525 * C15101 + C9504 * C32860) * C32720 +
           (C8526 * C15101 + (C8548 + C8547) * C32860) * C32728 +
           ((C4549 + C4548) * C15101 +
            (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
             C4529 + C4529 + C32902 * C1645) *
                C32860) *
               C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C15101 +
            (C4546 + C4547) * C32860) *
               C32720 +
           ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
           C18409 * C17578) *
              C32774 * C32760 * C110 -
          (((C3906 + C3907) * C32860 + (C3515 + C3514) * C15101) * C17578 +
           (C4901 * C32860 + (C3513 + C3512) * C15101) * C32728 +
           (C4902 * C32860 + (C3511 + C3510) * C15101) * C32720) *
              C32774 * C32760 * C111 +
          (C18409 * C32720 +
           (C3519 * C15101 + (C3907 + C3906) * C32860) * C32728 +
           ((C3517 + C3516) * C15101 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32860) *
               C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C15101 +
            (C4546 + C4547) * C32860) *
               C32720 +
           ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
           C18409 * C17578) *
              C341 -
          (((C5113 + C5114) * C32860 + (C4070 + C4071) * C15101) * C17578 +
           ((C5115 + C5116) * C32860 + (C4072 + C4073) * C15101) * C32728 +
           ((C5325 + C5326) * C32860 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C15101) *
               C32720) *
              C342 +
          (((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
             C3743 + C3743 + C32902 * C2093) *
                C15101 +
            (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
             C4701 + C4701 + C32902 * C2631) *
                C32860) *
               C32720 +
           ((C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
             C3745 + C3745 + C32902 * C2092) *
                C15101 +
            (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 + C3463 * C2626 +
             C4703 + C4703 + C32902 * C2632) *
                C32860) *
               C32728 +
           ((C3461 * C351 + C3746 + C3746 + C33027 * C371 + C3463 * C2079 +
             C3747 + C3747 + C32902 * C2091) *
                C15101 +
            (C3461 * C1130 + C4704 + C4704 + C33027 * C1148 + C3463 * C2627 +
             C4705 + C4705 + C32902 * C2633) *
                C32860) *
               C17578) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[18] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C15101 +
             (C4546 + C4547) * C32860) *
                C32720 +
            ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
            C18409 * C17578) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C15101) * C17578 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C15101) * C32728 +
            ((C5325 + C5326) * C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C15101) *
                C32720) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C15101 + (C5116 + C5115) * C32860) * C32720 +
            ((C4071 + C4070) * C15101 + (C5114 + C5113) * C32860) * C32728 +
            ((C4069 + C4068) * C15101 +
             (C3461 * C695 + C4210 + C4210 + C33027 * C705 + C3463 * C2261 +
              C4211 + C4211 + C32902 * C2263) *
                 C32860) *
                C17578) *
               C581 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C15101) * C17578 +
            (C4901 * C32860 + (C3513 + C3512) * C15101) * C32728 +
            (C4902 * C32860 + (C3511 + C3510) * C15101) * C32720) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[19] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C15101 +
            (C4546 + C4547) * C32860) *
               C32720 +
           ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
           C18409 * C17578) *
              C32774 * C32760 * C110 -
          (((C3906 + C3907) * C32860 + (C3515 + C3514) * C15101) * C17578 +
           (C4901 * C32860 + (C3513 + C3512) * C15101) * C32728 +
           (C4902 * C32860 + (C3511 + C3510) * C15101) * C32720) *
              C32774 * C32760 * C111 +
          (C18409 * C32720 +
           (C3519 * C15101 + (C3907 + C3906) * C32860) * C32728 +
           ((C3517 + C3516) * C15101 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32860) *
               C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C15101 +
            (C4546 + C4547) * C32860) *
               C32720 +
           ((C3510 + C3511) * C15101 + C4900 * C32860) * C32728 +
           C18409 * C17578) *
              C32774 * C235 -
          (((C4548 + C4549) * C32860 + C4901 * C15101) * C17578 +
           (C8895 * C32860 + C4902 * C15101) * C32728 +
           ((C4552 + C4553) * C32860 + (C4547 + C4546) * C15101) * C32720) *
              C32774 * C236 +
          ((C8525 * C15101 + C9504 * C32860) * C32720 +
           (C8526 * C15101 + (C8548 + C8547) * C32860) * C32728 +
           ((C4549 + C4548) * C15101 +
            (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
             C4529 + C4529 + C32902 * C1645) *
                C32860) *
               C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[20] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C32774 * C466 -
           ((C15444 + C15445) * C33026 + (C15446 + C15447) * C33075 +
            (C15448 + C15449) * C33088 +
            (C1010 * C32860 + C1009 * C15101) * C33095) *
               C32774 * C467) *
              C468 +
          (((C15449 + C15448) * C33095 + (C15447 + C15446) * C33088 +
            (C15445 + C15444) * C33075 +
            (C491 * C15101 +
             (C113 * C248 + C279 + C279 + C32815 * C268) * C32860) *
                C33026) *
               C32774 * C467 -
           ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
            (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C32774 * C466 -
           ((C16154 + C16155 + C16156 + C16157) * C32725 +
            (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 +
             C1009 * C33096) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C16157 + C16156 + C16155 + C16154) * C15817 +
            (C493 * C33096 + C849 * C33092 + C1011 * C33082 +
             (C113 * C969 + C998 + C998 + C32815 * C981) * C33034) *
                C32725) *
               C32774 * C467 -
           ((C15824 + C15825 + C15826 + C15827) * C32725 +
            (C15823 + C15822 + C15821 + C15820) * C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[21] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C580 -
           ((C15580 + C15581) * C33026 + (C15582 + C15583) * C33075 +
            (C15584 + C15585) * C33088 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
                C33095) *
               C581) *
              C466 +
          (((C1659 * C15101 + C1658 * C32860) * C33095 +
            (C1487 * C15101 + C1486 * C32860) * C33088 +
            (C1485 * C15101 + C1484 * C32860) * C33075 +
            (C3230 * C15101 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C32860) *
                C33026) *
               C581 -
           ((C15444 + C15445) * C33026 + (C15446 + C15447) * C33075 +
            (C15448 + C15449) * C33088 +
            (C1010 * C32860 + C1009 * C15101) * C33095) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C580 -
           ((C16288 + C16289 + C16290 + C16291) * C32725 +
            (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
                C15817) *
               C581) *
              C466 +
          (((C1659 * C33096 + C1658 * C33092 + C6618 * C33082 +
             C6617 * C33034) *
                C15817 +
            (C1487 * C33096 + C1486 * C33092 + C8101 * C33082 +
             (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C33034) *
                C32725) *
               C581 -
           ((C16154 + C16155 + C16156 + C16157) * C32725 +
            (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 +
             C1009 * C33096) *
                C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[22] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C15101) * C33026 +
           (C849 * C32860 + C493 * C15101) * C33075 +
           (C848 * C32860 + C494 * C15101) * C33088 +
           (C1010 * C32860 + C1009 * C15101) * C33095) *
              C32774 * C236 +
          ((C1010 * C15101 + C1013 * C32860) * C33095 +
           (C848 * C15101 + C1012 * C32860) * C33088 +
           (C849 * C15101 + C1011 * C32860) * C33075 +
           (C850 * C15101 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C32760 * C110 -
          ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
           (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
              C32774 * C32760 * C111 +
          (C15116 * C33095 + C15117 * C33088 + (C15115 + C15114) * C33075 +
           (C168 * C15101 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C341 -
          ((C3230 * C32860 + C604 * C15101) * C33026 +
           (C1485 * C32860 + C605 * C15101) * C33075 +
           (C1487 * C32860 + C606 * C15101) * C33088 +
           (C1659 * C32860 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
               C33095) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C15101 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C32860) *
               C33095 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C15101 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C32860) *
               C33088 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C15101 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C32860) *
               C33075 +
           ((C113 * C352 + C383 + C383 + C32815 * C372) * C15101 +
            (C113 * C2261 + C2954 + C2954 + C32815 * C2263) * C32860) *
               C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C32760 * C110 -
          ((C15824 + C15825 + C15826 + C15827) * C32725 +
           (C15823 + C15822 + C15821 + C15820) * C15817) *
              C32774 * C32760 * C111 +
          ((C15827 + C15826 + C15825 + C15824) * C15817 +
           (C166 * C33096 + C492 * C33092 + C850 * C33082 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C33082 + C848 * C33092 + C494 * C33096) *
               C32725 +
           (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 + C1009 * C33096) *
               C15817) *
              C32774 * C236 +
          ((C1010 * C33096 + C1013 * C33092 + C6270 * C33082 + C6271 * C33034) *
               C15817 +
           (C848 * C33096 + C1012 * C33092 + C6436 * C33082 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C341 -
          ((C8101 * C33034 + C1486 * C33082 + C1487 * C33092 + C606 * C33096) *
               C32725 +
           (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
               C15817) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33096 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33092 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33082 +
            (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C33034) *
               C15817 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33096 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33092 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33082 +
            (C113 * C7165 + C7829 + C7829 + C32815 * C7167) * C33034) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[23] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
             C1009 * C32860) *
                C33095 +
            (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
               C580 -
           ((C15580 + C15581) * C33026 + (C15582 + C15583) * C33075 +
            (C15584 + C15585) * C33088 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C15101) *
                C33095) *
               C581) *
              C32760 * C468 +
          (((C15585 + C15584) * C33095 + (C15583 + C15582) * C33088 +
            (C15581 + C15580) * C33075 +
            (C603 * C15101 +
             (C113 * C696 + C712 + C712 + C32815 * C706) * C32860) *
                C33026) *
               C581 -
           ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
            (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
             C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
                C15817 +
            (C15820 + C15821 + C15822 + C15823) * C32725) *
               C580 -
           ((C16288 + C16289 + C16290 + C16291) * C32725 +
            (C6618 * C33034 + C1658 * C33082 + C1659 * C33092 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33096) *
                C15817) *
               C581) *
              C32760 * C468 +
          (((C16291 + C16290 + C16289 + C16288) * C15817 +
            (C605 * C33096 + C1485 * C33092 + C1484 * C33082 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33034) *
                C32725) *
               C581 -
           ((C15824 + C15825 + C15826 + C15827) * C32725 +
            (C15823 + C15822 + C15821 + C15820) * C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[24] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C32760 * C110 -
          ((C15114 + C15115) * C33026 + (C15113 + C15112) * C33075 +
           (C15111 + C15110) * C33088 + (C15109 + C15108) * C33095) *
              C32774 * C32760 * C111 +
          (C15116 * C33095 + C15117 * C33088 + (C15115 + C15114) * C33075 +
           (C168 * C15101 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C15101 +
            C1009 * C32860) *
               C33095 +
           (C15108 + C15109) * C33088 + C15116 * C33075 + C15117 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C15101) * C33026 +
           (C849 * C32860 + C493 * C15101) * C33075 +
           (C848 * C32860 + C494 * C15101) * C33088 +
           (C1010 * C32860 + C1009 * C15101) * C33095) *
              C32774 * C236 +
          ((C1010 * C15101 + C1013 * C32860) * C33095 +
           (C848 * C15101 + C1012 * C32860) * C33088 +
           (C849 * C15101 + C1011 * C32860) * C33075 +
           (C850 * C15101 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C32760 * C110 -
          ((C15824 + C15825 + C15826 + C15827) * C32725 +
           (C15823 + C15822 + C15821 + C15820) * C15817) *
              C32774 * C32760 * C111 +
          ((C15827 + C15826 + C15825 + C15824) * C15817 +
           (C166 * C33096 + C492 * C33092 + C850 * C33082 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33096 +
            C1009 * C33092 + C1010 * C33082 + C1013 * C33034) *
               C15817 +
           (C15820 + C15821 + C15822 + C15823) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C33082 + C848 * C33092 + C494 * C33096) *
               C32725 +
           (C6270 * C33034 + C1013 * C33082 + C1010 * C33092 + C1009 * C33096) *
               C15817) *
              C32774 * C236 +
          ((C1010 * C33096 + C1013 * C33092 + C6270 * C33082 + C6271 * C33034) *
               C15817 +
           (C848 * C33096 + C1012 * C33092 + C6436 * C33082 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[25] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C32856 +
             (C21507 + C21508) * C32863 + C21515 * C17575) *
                C33007 +
            ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
                C32725) *
               C32774 * C466 -
           (((C21511 + C21512) * C17575 + C21869 * C32863 + C21870 * C32856) *
                C32725 +
            ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32863 +
             (C21508 + C21507) * C32856) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C21868 * C32856 + C21474 * C32863 + (C21512 + C21511) * C17575) *
                C33007 +
            (C23294 * C32856 + (C21319 + C21318) * C32863 +
             (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
              C21872 + C21872 + C32902 * C1645) *
                 C17575) *
                C32725) *
               C32774 * C467 -
           (((C21318 + C21319) * C17575 + C23785 * C32863 +
             (C20455 + C20454) * C32856) *
                C32725 +
            (C21869 * C17575 + C21870 * C32863 + (C20453 + C20452) * C32856) *
                C33007) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[26] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C32856 +
             (C21507 + C21508) * C32863 + C21515 * C17575) *
                C33007 +
            ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C17575 + (C22087 + C22088) * C32863 +
             (C21014 + C21015) * C32856) *
                C32725 +
            ((C22303 + C22304) * C17575 + (C22305 + C22306) * C32863 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C32856) *
                C33007) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C32856 + (C22304 + C22303) * C32863 +
             (C27985 + C27984) * C17575) *
                C33007 +
            ((C22088 + C22087) * C32856 + (C22086 + C22085) * C32863 +
             (C20403 * C1638 + C22293 + C22293 + C20401 * C1644 +
              C20405 * C7165 + C22294 + C22294 + C32902 * C7167) *
                 C17575) *
                C32725) *
               C581 -
           (((C21511 + C21512) * C17575 + C21869 * C32863 + C21870 * C32856) *
                C32725 +
            ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32863 +
             (C21508 + C21507) * C32856) *
                C33007) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[27] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32856 +
            (C21507 + C21508) * C32863 + C21515 * C17575) *
               C33007 +
           ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
               C32725) *
              C32774 * C235 -
          (((C21511 + C21512) * C17575 + C21869 * C32863 + C21870 * C32856) *
               C32725 +
           ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32863 +
            (C21508 + C21507) * C32856) *
               C33007) *
              C32774 * C236 +
          ((C21515 * C32856 + C27471 * C32863 + (C27483 + C27482) * C17575) *
               C33007 +
           (C21474 * C32856 + (C21512 + C21511) * C32863 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C17575) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32856 +
            (C21507 + C21508) * C32863 + C21515 * C17575) *
               C33007 +
           ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C21318 + C21319) * C17575 + C23785 * C32863 +
            (C20455 + C20454) * C32856) *
               C32725 +
           (C21869 * C17575 + C21870 * C32863 + (C20453 + C20452) * C32856) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C20460 * C32856 + C23294 * C32863 + (C21319 + C21318) * C17575) *
               C33007 +
           (C20461 * C32856 + (C20849 + C20848) * C32863 +
            (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
             C20577 + C20577 + C32902 * C1463) *
                C17575) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32856 +
            (C21507 + C21508) * C32863 + C21515 * C17575) *
               C33007 +
           ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
               C32725) *
              C341 -
          (((C22085 + C22086) * C17575 + (C22087 + C22088) * C32863 +
            (C21014 + C21015) * C32856) *
               C32725 +
           ((C22303 + C22304) * C17575 + (C22305 + C22306) * C32863 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C32856) *
               C33007) *
              C342 +
          (((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
             C20685 + C20685 + C32902 * C2093) *
                C32856 +
            (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
             C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                C32863 +
            (C20403 * C1127 + C21668 + C21668 + C20401 * C1145 +
             C20405 * C7001 + C21669 + C21669 + C32902 * C7007) *
                C17575) *
               C33007 +
           ((C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
             C20687 + C20687 + C32902 * C2092) *
                C32856 +
            (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
             C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                C32863 +
            (C20403 * C1129 + C21672 + C21672 + C20401 * C1147 +
             C20405 * C7332 + C21673 + C21673 + C32902 * C7334) *
                C17575) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[28] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C32856 +
             (C21507 + C21508) * C32863 + C21515 * C17575) *
                C33007 +
            ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C17575 + (C22087 + C22088) * C32863 +
             (C21014 + C21015) * C32856) *
                C32725 +
            ((C22303 + C22304) * C17575 + (C22305 + C22306) * C32863 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C32856) *
                C33007) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C32856 + (C22088 + C22087) * C32863 +
             (C22086 + C22085) * C17575) *
                C33007 +
            ((C21013 + C21012) * C32856 + (C23989 + C23988) * C32863 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C17575) *
                C32725) *
               C581 -
           (((C21318 + C21319) * C17575 + C23785 * C32863 +
             (C20455 + C20454) * C32856) *
                C32725 +
            (C21869 * C17575 + C21870 * C32863 + (C20453 + C20452) * C32856) *
                C33007) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[29] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32856 +
            (C21507 + C21508) * C32863 + C21515 * C17575) *
               C33007 +
           ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C21318 + C21319) * C17575 + C23785 * C32863 +
            (C20455 + C20454) * C32856) *
               C32725 +
           (C21869 * C17575 + C21870 * C32863 + (C20453 + C20452) * C32856) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C20460 * C32856 + C23294 * C32863 + (C21319 + C21318) * C17575) *
               C33007 +
           (C20461 * C32856 + (C20849 + C20848) * C32863 +
            (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
             C20577 + C20577 + C32902 * C1463) *
                C17575) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32856 +
            (C21507 + C21508) * C32863 + C21515 * C17575) *
               C33007 +
           ((C20452 + C20453) * C32856 + C21868 * C32863 + C21474 * C17575) *
               C32725) *
              C32774 * C235 -
          (((C21511 + C21512) * C17575 + C21869 * C32863 + C21870 * C32856) *
               C32725 +
           ((C21513 + C21514) * C17575 + (C21510 + C21509) * C32863 +
            (C21508 + C21507) * C32856) *
               C33007) *
              C32774 * C236 +
          ((C21515 * C32856 + C27471 * C32863 + (C27483 + C27482) * C17575) *
               C33007 +
           (C21474 * C32856 + (C21512 + C21511) * C32863 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C17575) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[30] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                     C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                     C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                        C32856 +
                    (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                       C32715 * C32774 * C466 -
                   ((C31019 + C31020 + C31021) * C17575 +
                    (C25475 + C25476 + C25477) * C32863 +
                    (C25471 + C25470 + C25469) * C32856) *
                       C32715 * C32774 * C467) *
                      C468 +
                  ((C25826 * C32856 + (C25474 + C25473 + C25472) * C32863 +
                    (C31733 * C965 + C25448 + C25448 + C32898 * C977 +
                     C31721 * C1638 + C25449 + C25449 + C32905 * C1644 +
                     C24300 * C7165 + C25450 + C25450 + C24295 * C7167) *
                        C17575) *
                       C32715 * C32774 * C467 -
                   ((C25472 + C25473 + C25474) * C17575 + C25827 * C32863 +
                    (C24356 + C24355 + C24354) * C32856) *
                       C32715 * C32774 * C466) *
                      C469)) /
                (p * q * std::sqrt(p + q));
    d2ee[31] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                     C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                     C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                        C32856 +
                    (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                       C32715 * C580 -
                   ((C31588 + C31589 + C31590) * C17575 +
                    (C26249 + C26250 + C26251) * C32863 +
                    (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
                     C31721 * C349 + C24611 + C24611 + C32905 * C369 +
                     C31733 * C348 + C24612 + C24612 + C32898 * C368) *
                        C32856) *
                       C32715 * C581) *
                      C466 +
                  (((C26251 + C26250 + C26249) * C32856 +
                    (C31590 + C31589 + C31588) * C32863 +
                    (C31733 * C1637 + C31579 + C31579 + C32898 * C1643 +
                     C31721 * C6334 + C31580 + C31580 + C32905 * C6340 +
                     C24300 * C7484 + C31581 + C31581 + C24295 * C7486) *
                        C17575) *
                       C32715 * C581 -
                   ((C31019 + C31020 + C31021) * C17575 +
                    (C25475 + C25476 + C25477) * C32863 +
                    (C25471 + C25470 + C25469) * C32856) *
                       C32715 * C580) *
                      C467) *
                 C32748) /
                (p * q * std::sqrt(p + q));
    d2ee[32] += (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                    C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                    C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                       C32856 +
                   (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                      C32715 * C32774 * C235 -
                  ((C31019 + C31020 + C31021) * C17575 +
                   (C25475 + C25476 + C25477) * C32863 +
                   (C25471 + C25470 + C25469) * C32856) *
                      C32715 * C32774 * C236 +
                  (C31012 * C32856 + (C31021 + C31020 + C31019) * C32863 +
                   (C31733 * C967 + C31009 + C31009 + C32898 * C979 +
                    C31721 * C6333 + C31010 + C31010 + C32905 * C6339 +
                    C24300 * C6335 + C31011 + C31011 + C24295 * C6341) *
                       C17575) *
                      C32715 * C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                    C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                    C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                       C32856 +
                   (C25469 + C25470 + C25471) * C32863 +
                   (C25477 + C25476 + C25475) * C17575) *
                      C32715 * C32774 * C32760 * C110 -
                  ((C25472 + C25473 + C25474) * C17575 + C25827 * C32863 +
                   (C24356 + C24355 + C24354) * C32856) *
                      C32715 * C32774 * C32760 * C111 +
                  (C24364 * C32856 + (C24797 + C24796 + C24795) * C32863 +
                   (C31733 * C246 + C24491 + C24491 + C32898 * C266 +
                    C31721 * C1123 + C24492 + C24492 + C32905 * C1141 +
                    C24300 * C1131 + C24493 + C24493 + C24295 * C1149) *
                       C17575) *
                      C32715 * C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                    C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                    C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                       C32856 +
                   (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                      C32715 * C341 -
                  ((C24300 * C7001 + C26239 + C26239 + C24295 * C7007 +
                    C31721 * C1127 + C26238 + C26238 + C32905 * C1145 +
                    C31733 * C1125 + C26237 + C26237 + C32898 * C1143) *
                       C17575 +
                   (C26249 + C26250 + C26251) * C32863 +
                   (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
                    C31721 * C349 + C24611 + C24611 + C32905 * C369 +
                    C31733 * C348 + C24612 + C24612 + C32898 * C368) *
                       C32856) *
                      C32715 * C342 +
                  ((C31733 * C349 + C24613 + C24613 + C32898 * C369 +
                    C31721 * C2081 + C24614 + C24614 + C32905 * C2093 +
                    C24300 * C2082 + C24615 + C24615 + C24295 * C2094) *
                       C32856 +
                   (C31733 * C1126 + C25624 + C25624 + C32898 * C1144 +
                    C31721 * C2625 + C25625 + C25625 + C32905 * C2631 +
                    C24300 * C7002 + C25626 + C25626 + C24295 * C7008) *
                       C32863 +
                   (C31733 * C1127 + C31132 + C31132 + C32898 * C1145 +
                    C31721 * C7001 + C31133 + C31133 + C32905 * C7007 +
                    C24300 * C7003 + C31134 + C31134 + C24295 * C7009) *
                       C17575) *
                      C32715 * C343) *
                 C32760 * C32748) /
                    (p * q * std::sqrt(p + q));
    d2ee[33] += (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
                 ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                     C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                     C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                        C32856 +
                    (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                       C32715 * C580 -
                   ((C24300 * C7001 + C26239 + C26239 + C24295 * C7007 +
                     C31721 * C1127 + C26238 + C26238 + C32905 * C1145 +
                     C31733 * C1125 + C26237 + C26237 + C32898 * C1143) *
                        C17575 +
                    (C26249 + C26250 + C26251) * C32863 +
                    (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
                     C31721 * C349 + C24611 + C24611 + C32905 * C369 +
                     C31733 * C348 + C24612 + C24612 + C32898 * C368) *
                        C32856) *
                       C32715 * C581) *
                      C32760 * C468 +
                  (((C24979 + C24978 + C24977) * C32856 +
                    (C26036 + C26035 + C26034) * C32863 +
                    (C31733 * C1124 + C26240 + C26240 + C32898 * C1142 +
                     C31721 * C1129 + C26241 + C26241 + C32905 * C1147 +
                     C24300 * C7332 + C26242 + C26242 + C24295 * C7334) *
                        C17575) *
                       C32715 * C581 -
                   ((C25472 + C25473 + C25474) * C17575 + C25827 * C32863 +
                    (C24356 + C24355 + C24354) * C32856) *
                       C32715 * C580) *
                      C32760 * C469)) /
                (p * q * std::sqrt(p + q));
    d2ee[34] += (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                    C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                    C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                       C32856 +
                   (C25469 + C25470 + C25471) * C32863 +
                   (C25477 + C25476 + C25475) * C17575) *
                      C32715 * C32774 * C32760 * C110 -
                  ((C25472 + C25473 + C25474) * C17575 + C25827 * C32863 +
                   (C24356 + C24355 + C24354) * C32856) *
                      C32715 * C32774 * C32760 * C111 +
                  (C24364 * C32856 + (C24797 + C24796 + C24795) * C32863 +
                   (C31733 * C246 + C24491 + C24491 + C32898 * C266 +
                    C31721 * C1123 + C24492 + C24492 + C32905 * C1141 +
                    C24300 * C1131 + C24493 + C24493 + C24295 * C1149) *
                       C17575) *
                      C32715 * C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
                 (((C31733 * C115 + C24303 + C24303 + C32898 * C129 +
                    C31721 * C348 + C24304 + C24304 + C32905 * C368 +
                    C24300 * C349 + C24305 + C24305 + C24295 * C369) *
                       C32856 +
                   (C25469 + C25470 + C25471) * C32863 + C31012 * C17575) *
                      C32715 * C32774 * C235 -
                  ((C31019 + C31020 + C31021) * C17575 +
                   (C25475 + C25476 + C25477) * C32863 +
                   (C25471 + C25470 + C25469) * C32856) *
                      C32715 * C32774 * C236 +
                  (C31012 * C32856 + (C31021 + C31020 + C31019) * C32863 +
                   (C31733 * C967 + C31009 + C31009 + C32898 * C979 +
                    C31721 * C6333 + C31010 + C31010 + C32905 * C6339 +
                    C24300 * C6335 + C31011 + C31011 + C24295 * C6341) *
                       C17575) *
                      C32715 * C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q));
    d2ee[35] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C32774 * C466 -
           ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
            (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
               C32715 * C32774 * C467) *
              C468 +
          ((C21868 * C33096 + C21474 * C33092 + (C21512 + C21511) * C33082 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C33034) *
               C32715 * C32774 * C467 -
           ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
            (C20453 + C20452) * C33096) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C32774 * C466 -
           (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
            (C21869 * C32860 + C21870 * C15101) * C33073 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) *
                C33086) *
               C32774 * C467) *
              C468 +
          (((C21868 * C15101 + C21474 * C32860) * C33086 +
            (C23294 * C15101 + (C21319 + C21318) * C32860) * C33073 +
            ((C20849 + C20848) * C15101 +
             (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
              C20577 + C20577 + C32902 * C1463) *
                 C32860) *
                C33048) *
               C32774 * C467 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
            (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
            (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C15101 +
            (C28218 + C28219 + C28220 + C28221) * C32860) *
               C32715 * C32774 * C466 -
           ((C28222 + C28223 + C28224 + C28225) * C32860 +
            (C28221 + C28220 + C28219 + C28218) * C15101) *
               C32715 * C32774 * C467) *
              C468 +
          (((C22854 + C22853 + C22852 + C22851) * C15101 +
            (C22408 * C245 + C22583 + C22583 + C33097 * C265 + C22410 * C1124 +
             C22584 + C22584 + C33094 * C1142 + C22412 * C1129 + C22585 +
             C22585 + C33085 * C1147 + C22414 * C7332 + C22586 + C22586 +
             C33041 * C7334) *
                C32860) *
               C32715 * C32774 * C467 -
           ((C22851 + C22852 + C22853 + C22854) * C32860 +
            (C22468 + C22467 + C22466 + C22465) * C15101) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[36] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C580 -
           ((C27984 + C27985) * C33034 + (C22303 + C22304) * C33082 +
            (C22305 + C22306) * C33092 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33096) *
               C32715 * C581) *
              C466 +
          (((C22306 + C22305) * C33096 + (C22304 + C22303) * C33092 +
            (C27985 + C27984) * C33082 +
            (C20403 * C6333 + C27978 + C27978 + C20401 * C6339 +
             C20405 * C6335 + C27979 + C27979 + C32902 * C6341) *
                C33034) *
               C32715 * C581 -
           ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
            (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C15101) *
                C33086) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C15101 + (C22304 + C22303) * C32860) * C33086 +
            ((C22088 + C22087) * C15101 + (C22086 + C22085) * C32860) * C33073 +
            ((C23989 + C23988) * C15101 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C32860) *
                C33048) *
               C581 -
           (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
            (C21869 * C32860 + C21870 * C15101) * C33073 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) *
                C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C15101 +
            (C28218 + C28219 + C28220 + C28221) * C32860) *
               C32715 * C580 -
           ((C28738 + C28739 + C28740 + C28741) * C32860 +
            (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 +
             C22412 * C2081 + C22690 + C22690 + C33085 * C2093 + C22410 * C349 +
             C22691 + C22691 + C33094 * C369 + C22408 * C348 + C22692 + C22692 +
             C33097 * C368) *
                C15101) *
               C32715 * C581) *
              C466 +
          (((C28741 + C28740 + C28739 + C28738) * C15101 +
            (C22408 * C1125 + C28726 + C28726 + C33097 * C1143 +
             C22410 * C1127 + C28727 + C28727 + C33094 * C1145 +
             C22412 * C7001 + C28728 + C28728 + C33085 * C7007 +
             C22414 * C7003 + C28729 + C28729 + C33041 * C7009) *
                C32860) *
               C32715 * C581 -
           ((C28222 + C28223 + C28224 + C28225) * C32860 +
            (C28221 + C28220 + C28219 + C28218) * C15101) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[37] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                 C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                    C15101 +
                (C21507 + C21508) * C32860) *
                   C33086 +
               ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
               C26400 * C33048) *
                  C32774 * C32760 * C110 -
              (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) *
                   C33048 +
               (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
               (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
                  C32774 * C32760 * C111 +
              (C26400 * C33086 +
               (C20461 * C15101 + (C20849 + C20848) * C32860) * C33073 +
               ((C20459 + C20458) * C15101 +
                (C20403 * C239 + C20834 + C20834 + C20401 * C259 +
                 C20405 * C696 + C20835 + C20835 + C32902 * C706) *
                    C32860) *
                   C33048) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                 C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                    C15101 +
                (C21507 + C21508) * C32860) *
                   C33086 +
               ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
               C26400 * C33048) *
                  C32774 * C235 -
              (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
               (C21869 * C32860 + C21870 * C15101) * C33073 +
               ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) *
                   C33086) *
                  C32774 * C236 +
              ((C21515 * C15101 + (C21514 + C21513) * C32860) * C33086 +
               (C21474 * C15101 + (C21512 + C21511) * C32860) * C33073 +
               ((C21319 + C21318) * C15101 +
                (C20403 * C964 + C21871 + C21871 + C20401 * C976 +
                 C20405 * C1639 + C21872 + C21872 + C32902 * C1645) *
                    C32860) *
                   C33048) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C341 -
          (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
           ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
           ((C22305 + C22306) * C32860 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C15101) *
               C33086) *
              C342 +
          (((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
             C20685 + C20685 + C32902 * C2093) *
                C15101 +
            (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
             C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                C32860) *
               C33086 +
           ((C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
             C20687 + C20687 + C32902 * C2092) *
                C15101 +
            (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
             C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                C32860) *
               C33073 +
           ((C20403 * C351 + C20688 + C20688 + C20401 * C371 + C20405 * C2079 +
             C20689 + C20689 + C32902 * C2091) *
                C15101 +
            (C20403 * C1130 + C23589 + C23589 + C20401 * C1148 +
             C20405 * C2627 + C23590 + C23590 + C32902 * C2633) *
                C32860) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 +
           (C21514 + C21513) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
           (C20453 + C20452) * C33096) *
              C32715 * C32774 * C32760 * C111 +
          (C20460 * C33096 + C23294 * C33092 + (C21319 + C21318) * C33082 +
           (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
            C21872 + C21872 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C32774 * C235 -
          ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
           (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
              C32715 * C32774 * C236 +
          (C21515 * C33096 + C27471 * C33092 + (C27483 + C27482) * C33082 +
           (C20403 * C6253 + C27476 + C27476 + C20401 * C6257 + C20405 * C6604 +
            C27477 + C27477 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C341 -
          ((C20405 * C6334 + C22292 + C22292 + C32902 * C6340 + C20403 * C1637 +
            C22291 + C22291 + C20401 * C1643) *
               C33034 +
           (C22303 + C22304) * C33082 + (C22305 + C22306) * C33092 +
           (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
            C20683 + C20683 + C20401 * C368) *
               C33096) *
              C32715 * C342 +
          ((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
            C20685 + C20685 + C32902 * C2093) *
               C33096 +
           (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 + C20405 * C2625 +
            C21667 + C21667 + C32902 * C2631) *
               C33092 +
           (C20403 * C1127 + C21668 + C21668 + C20401 * C1145 + C20405 * C7001 +
            C21669 + C21669 + C32902 * C7007) *
               C33082 +
           (C20403 * C6334 + C27582 + C27582 + C20401 * C6340 + C20405 * C7484 +
            C27583 + C27583 + C32902 * C7486) *
               C33034) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C15101 +
           (C22408 * C243 + C22578 + C22578 + C33097 * C263 + C22410 * C692 +
            C22577 + C22577 + C33094 * C702 + C22412 * C1126 + C22576 + C22576 +
            C33085 * C1144 + C22414 * C2625 + C22575 + C22575 +
            C33041 * C2631) *
               C32860) *
              C32715 * C32774 * C32760 * C110 -
          ((C22851 + C22852 + C22853 + C22854) * C32860 +
           (C22468 + C22467 + C22466 + C22465) * C15101) *
              C32715 * C32774 * C32760 * C111 +
          ((C22472 + C22471 + C22470 + C22469) * C15101 +
           (C22408 * C241 + C22839 + C22839 + C33097 * C261 + C22410 * C694 +
            C22840 + C22840 + C33094 * C704 + C22412 * C1130 + C22841 + C22841 +
            C33085 * C1148 + C22414 * C2627 + C22842 + C22842 +
            C33041 * C2633) *
               C32860) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C15101 +
           (C28218 + C28219 + C28220 + C28221) * C32860) *
              C32715 * C32774 * C235 -
          ((C28222 + C28223 + C28224 + C28225) * C32860 +
           (C28221 + C28220 + C28219 + C28218) * C15101) *
              C32715 * C32774 * C236 +
          ((C28225 + C28224 + C28223 + C28222) * C15101 +
           (C22408 * C966 + C28198 + C28198 + C33097 * C978 + C22410 * C1637 +
            C28199 + C28199 + C33094 * C1643 + C22412 * C6334 + C28200 +
            C28200 + C33085 * C6340 + C22414 * C7484 + C28201 + C28201 +
            C33041 * C7486) *
               C32860) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C15101 +
           (C28218 + C28219 + C28220 + C28221) * C32860) *
              C32715 * C341 -
          ((C22414 * C7002 + C23142 + C23142 + C33041 * C7008 + C22412 * C2625 +
            C23141 + C23141 + C33085 * C2631 + C22410 * C1126 + C23140 +
            C23140 + C33094 * C1144 + C22408 * C692 + C23139 + C23139 +
            C33097 * C702) *
               C32860 +
           (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 + C22412 * C2081 +
            C22690 + C22690 + C33085 * C2093 + C22410 * C349 + C22691 + C22691 +
            C33094 * C369 + C22408 * C348 + C22692 + C22692 + C33097 * C368) *
               C15101) *
              C32715 * C342 +
          ((C22408 * C349 + C22693 + C22693 + C33097 * C369 + C22410 * C2081 +
            C22694 + C22694 + C33094 * C2093 + C22412 * C2082 + C22695 +
            C22695 + C33085 * C2094 + C22414 * C12079 + C22696 + C22696 +
            C33041 * C12083) *
               C15101 +
           (C22408 * C1126 + C28324 + C28324 + C33097 * C1144 + C22410 * C2625 +
            C28325 + C28325 + C33094 * C2631 + C22412 * C7002 + C28326 +
            C28326 + C33085 * C7008 + C22414 * C12357 + C28327 + C28327 +
            C33041 * C12359) *
               C32860) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[38] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C580 -
           ((C20405 * C6334 + C22292 + C22292 + C32902 * C6340 +
             C20403 * C1637 + C22291 + C22291 + C20401 * C1643) *
                C33034 +
            (C22303 + C22304) * C33082 + (C22305 + C22306) * C33092 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33096) *
               C32715 * C581) *
              C32760 * C468 +
          (((C21015 + C21014) * C33096 + (C22088 + C22087) * C33092 +
            (C22086 + C22085) * C33082 +
            (C20403 * C1638 + C22293 + C22293 + C20401 * C1644 +
             C20405 * C7165 + C22294 + C22294 + C32902 * C7167) *
                C33034) *
               C32715 * C581 -
           ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
            (C20453 + C20452) * C33096) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C15101) *
                C33086) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C15101 + (C22088 + C22087) * C32860) * C33086 +
            ((C21013 + C21012) * C15101 + (C23989 + C23988) * C32860) * C33073 +
            ((C21011 + C21010) * C15101 +
             (C20403 * C695 + C21152 + C21152 + C20401 * C705 + C20405 * C2261 +
              C21153 + C21153 + C32902 * C2263) *
                 C32860) *
                C33048) *
               C581 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
            (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
            (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C15101 +
            (C28218 + C28219 + C28220 + C28221) * C32860) *
               C32715 * C580 -
           ((C22414 * C7002 + C23142 + C23142 + C33041 * C7008 +
             C22412 * C2625 + C23141 + C23141 + C33085 * C2631 +
             C22410 * C1126 + C23140 + C23140 + C33094 * C1144 + C22408 * C692 +
             C23139 + C23139 + C33097 * C702) *
                C32860 +
            (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 +
             C22412 * C2081 + C22690 + C22690 + C33085 * C2093 + C22410 * C349 +
             C22691 + C22691 + C33094 * C369 + C22408 * C348 + C22692 + C22692 +
             C33097 * C368) *
                C15101) *
               C32715 * C581) *
              C32760 * C468 +
          (((C23008 + C23007 + C23006 + C23005) * C15101 +
            (C22408 * C693 + C23143 + C23143 + C33097 * C703 + C22410 * C1128 +
             C23144 + C23144 + C33094 * C1146 + C22412 * C2626 + C23145 +
             C23145 + C33085 * C2632 + C22414 * C12177 + C23146 + C23146 +
             C33041 * C12179) *
                C32860) *
               C32715 * C581 -
           ((C22851 + C22852 + C22853 + C22854) * C32860 +
            (C22468 + C22467 + C22466 + C22465) * C15101) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[39] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C235 -
          (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
           (C21869 * C32860 + C21870 * C15101) * C33073 +
           ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) * C33086) *
              C32774 * C236 +
          ((C21515 * C15101 + (C21514 + C21513) * C32860) * C33086 +
           (C21474 * C15101 + (C21512 + C21511) * C32860) * C33073 +
           ((C21319 + C21318) * C15101 +
            (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
             C21872 + C21872 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C32760 * C110 -
          (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
           (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
           (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
              C32774 * C32760 * C111 +
          (C26400 * C33086 +
           (C20461 * C15101 + (C20849 + C20848) * C32860) * C33073 +
           ((C20459 + C20458) * C15101 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 +
           (C21514 + C21513) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
           (C20453 + C20452) * C33096) *
              C32715 * C32774 * C32760 * C111 +
          (C20460 * C33096 + C23294 * C33092 + (C21319 + C21318) * C33082 +
           (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
            C21872 + C21872 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C32774 * C235 -
          ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
           (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
              C32715 * C32774 * C236 +
          (C21515 * C33096 + C27471 * C33092 + (C27483 + C27482) * C33082 +
           (C20403 * C6253 + C27476 + C27476 + C20401 * C6257 + C20405 * C6604 +
            C27477 + C27477 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C15101 +
           (C22408 * C243 + C22578 + C22578 + C33097 * C263 + C22410 * C692 +
            C22577 + C22577 + C33094 * C702 + C22412 * C1126 + C22576 + C22576 +
            C33085 * C1144 + C22414 * C2625 + C22575 + C22575 +
            C33041 * C2631) *
               C32860) *
              C32715 * C32774 * C32760 * C110 -
          ((C22851 + C22852 + C22853 + C22854) * C32860 +
           (C22468 + C22467 + C22466 + C22465) * C15101) *
              C32715 * C32774 * C32760 * C111 +
          ((C22472 + C22471 + C22470 + C22469) * C15101 +
           (C22408 * C241 + C22839 + C22839 + C33097 * C261 + C22410 * C694 +
            C22840 + C22840 + C33094 * C704 + C22412 * C1130 + C22841 + C22841 +
            C33085 * C1148 + C22414 * C2627 + C22842 + C22842 +
            C33041 * C2633) *
               C32860) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C15101 +
           (C28218 + C28219 + C28220 + C28221) * C32860) *
              C32715 * C32774 * C235 -
          ((C28222 + C28223 + C28224 + C28225) * C32860 +
           (C28221 + C28220 + C28219 + C28218) * C15101) *
              C32715 * C32774 * C236 +
          ((C28225 + C28224 + C28223 + C28222) * C15101 +
           (C22408 * C966 + C28198 + C28198 + C33097 * C978 + C22410 * C1637 +
            C28199 + C28199 + C33094 * C1643 + C22412 * C6334 + C28200 +
            C28200 + C33085 * C6340 + C22414 * C7484 + C28201 + C28201 +
            C33041 * C7486) *
               C32860) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[40] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C15101 +
             (C25469 + C25470 + C25471) * C32860) *
                C33007 +
            ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
               C32774 * C466 -
           (((C25472 + C25473 + C25474) * C32860 + C25827 * C15101) * C32725 +
            ((C25475 + C25476 + C25477) * C32860 +
             (C25471 + C25470 + C25469) * C15101) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C25826 * C15101 + (C25474 + C25473 + C25472) * C32860) * C33007 +
            ((C24797 + C24796 + C24795) * C15101 +
             (C31733 * C246 + C24491 + C24491 + C32898 * C266 + C31721 * C1123 +
              C24492 + C24492 + C32905 * C1141 + C24300 * C1131 + C24493 +
              C24493 + C24295 * C1149) *
                 C32860) *
                C32725) *
               C32774 * C467 -
           (((C24795 + C24796 + C24797) * C32860 +
             (C24359 + C24358 + C24357) * C15101) *
                C32725 +
            (C25827 * C32860 + (C24356 + C24355 + C24354) * C15101) * C33007) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[41] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C15101 +
             (C25469 + C25470 + C25471) * C32860) *
                C33007 +
            ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
               C580 -
           (((C26034 + C26035 + C26036) * C32860 +
             (C24977 + C24978 + C24979) * C15101) *
                C32725 +
            ((C26249 + C26250 + C26251) * C32860 +
             (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
              C31721 * C349 + C24611 + C24611 + C32905 * C369 + C31733 * C348 +
              C24612 + C24612 + C32898 * C368) *
                 C15101) *
                C33007) *
               C581) *
              C466 +
          ((((C26251 + C26250 + C26249) * C15101 +
             (C31733 * C1125 + C26237 + C26237 + C32898 * C1143 +
              C31721 * C1127 + C26238 + C26238 + C32905 * C1145 +
              C24300 * C7001 + C26239 + C26239 + C24295 * C7007) *
                 C32860) *
                C33007 +
            ((C26036 + C26035 + C26034) * C15101 +
             (C31733 * C1124 + C26240 + C26240 + C32898 * C1142 +
              C31721 * C1129 + C26241 + C26241 + C32905 * C1147 +
              C24300 * C7332 + C26242 + C26242 + C24295 * C7334) *
                 C32860) *
                C32725) *
               C581 -
           (((C25472 + C25473 + C25474) * C32860 + C25827 * C15101) * C32725 +
            ((C25475 + C25476 + C25477) * C32860 +
             (C25471 + C25470 + C25469) * C15101) *
                C33007) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[42] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C15101 +
            (C25469 + C25470 + C25471) * C32860) *
               C33007 +
           ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
              C32774 * C235 -
          (((C25472 + C25473 + C25474) * C32860 + C25827 * C15101) * C32725 +
           ((C25475 + C25476 + C25477) * C32860 +
            (C25471 + C25470 + C25469) * C15101) *
               C33007) *
              C32774 * C236 +
          (((C25477 + C25476 + C25475) * C15101 +
            (C31733 * C966 + C25445 + C25445 + C32898 * C978 + C31721 * C1637 +
             C25446 + C25446 + C32905 * C1643 + C24300 * C6334 + C25447 +
             C25447 + C24295 * C6340) *
                C32860) *
               C33007 +
           ((C25474 + C25473 + C25472) * C15101 +
            (C31733 * C965 + C25448 + C25448 + C32898 * C977 + C31721 * C1638 +
             C25449 + C25449 + C32905 * C1644 + C24300 * C7165 + C25450 +
             C25450 + C24295 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C15101 +
            (C25469 + C25470 + C25471) * C32860) *
               C33007 +
           ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
              C32774 * C32760 * C110 -
          (((C24795 + C24796 + C24797) * C32860 +
            (C24359 + C24358 + C24357) * C15101) *
               C32725 +
           (C25827 * C32860 + (C24356 + C24355 + C24354) * C15101) * C33007) *
              C32774 * C32760 * C111 +
          ((C24364 * C15101 + (C24797 + C24796 + C24795) * C32860) * C33007 +
           ((C24362 + C24361 + C24360) * C15101 +
            (C31733 * C240 + C24780 + C24780 + C32898 * C260 + C31721 * C695 +
             C24781 + C24781 + C32905 * C705 + C24300 * C2261 + C24782 +
             C24782 + C24295 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C15101 +
            (C25469 + C25470 + C25471) * C32860) *
               C33007 +
           ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
              C341 -
          (((C26034 + C26035 + C26036) * C32860 +
            (C24977 + C24978 + C24979) * C15101) *
               C32725 +
           ((C26249 + C26250 + C26251) * C32860 +
            (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 + C31721 * C349 +
             C24611 + C24611 + C32905 * C369 + C31733 * C348 + C24612 + C24612 +
             C32898 * C368) *
                C15101) *
               C33007) *
              C342 +
          (((C31733 * C349 + C24613 + C24613 + C32898 * C369 + C31721 * C2081 +
             C24614 + C24614 + C32905 * C2093 + C24300 * C2082 + C24615 +
             C24615 + C24295 * C2094) *
                C15101 +
            (C31733 * C1126 + C25624 + C25624 + C32898 * C1144 +
             C31721 * C2625 + C25625 + C25625 + C32905 * C2631 +
             C24300 * C7002 + C25626 + C25626 + C24295 * C7008) *
                C32860) *
               C33007 +
           ((C31733 * C350 + C24616 + C24616 + C32898 * C370 + C31721 * C2080 +
             C24617 + C24617 + C32905 * C2092 + C24300 * C2083 + C24618 +
             C24618 + C24295 * C2095) *
                C15101 +
            (C31733 * C1128 + C25627 + C25627 + C32898 * C1146 +
             C31721 * C2626 + C25628 + C25628 + C32905 * C2632 +
             C24300 * C12177 + C25629 + C25629 + C24295 * C12179) *
                C32860) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[43] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C15101 +
             (C25469 + C25470 + C25471) * C32860) *
                C33007 +
            ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
               C580 -
           (((C26034 + C26035 + C26036) * C32860 +
             (C24977 + C24978 + C24979) * C15101) *
                C32725 +
            ((C26249 + C26250 + C26251) * C32860 +
             (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
              C31721 * C349 + C24611 + C24611 + C32905 * C369 + C31733 * C348 +
              C24612 + C24612 + C32898 * C368) *
                 C15101) *
                C33007) *
               C581) *
              C32760 * C468 +
          ((((C24979 + C24978 + C24977) * C15101 +
             (C26036 + C26035 + C26034) * C32860) *
                C33007 +
            ((C24976 + C24975 + C24974) * C15101 +
             (C31733 * C694 + C25132 + C25132 + C32898 * C704 + C31721 * C1130 +
              C25133 + C25133 + C32905 * C1148 + C24300 * C2627 + C25134 +
              C25134 + C24295 * C2633) *
                 C32860) *
                C32725) *
               C581 -
           (((C24795 + C24796 + C24797) * C32860 +
             (C24359 + C24358 + C24357) * C15101) *
                C32725 +
            (C25827 * C32860 + (C24356 + C24355 + C24354) * C15101) * C33007) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[44] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C15101 +
            (C25469 + C25470 + C25471) * C32860) *
               C33007 +
           ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
              C32774 * C32760 * C110 -
          (((C24795 + C24796 + C24797) * C32860 +
            (C24359 + C24358 + C24357) * C15101) *
               C32725 +
           (C25827 * C32860 + (C24356 + C24355 + C24354) * C15101) * C33007) *
              C32774 * C32760 * C111 +
          ((C24364 * C15101 + (C24797 + C24796 + C24795) * C32860) * C33007 +
           ((C24362 + C24361 + C24360) * C15101 +
            (C31733 * C240 + C24780 + C24780 + C32898 * C260 + C31721 * C695 +
             C24781 + C24781 + C32905 * C705 + C24300 * C2261 + C24782 +
             C24782 + C24295 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C15101 +
            (C25469 + C25470 + C25471) * C32860) *
               C33007 +
           ((C24354 + C24355 + C24356) * C15101 + C25826 * C32860) * C32725) *
              C32774 * C235 -
          (((C25472 + C25473 + C25474) * C32860 + C25827 * C15101) * C32725 +
           ((C25475 + C25476 + C25477) * C32860 +
            (C25471 + C25470 + C25469) * C15101) *
               C33007) *
              C32774 * C236 +
          (((C25477 + C25476 + C25475) * C15101 +
            (C31733 * C966 + C25445 + C25445 + C32898 * C978 + C31721 * C1637 +
             C25446 + C25446 + C32905 * C1643 + C24300 * C6334 + C25447 +
             C25447 + C24295 * C6340) *
                C32860) *
               C33007 +
           ((C25474 + C25473 + C25472) * C15101 +
            (C31733 * C965 + C25448 + C25448 + C32898 * C977 + C31721 * C1638 +
             C25449 + C25449 + C32905 * C1644 + C24300 * C7165 + C25450 +
             C25450 + C24295 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[45] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C32774 * C466 -
           (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
            (C21869 * C32860 + C21870 * C15101) * C33073 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) *
                C33086) *
               C32774 * C467) *
              C468 +
          (((C21868 * C15101 + C21474 * C32860) * C33086 +
            (C23294 * C15101 + (C21319 + C21318) * C32860) * C33073 +
            ((C20849 + C20848) * C15101 +
             (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
              C20577 + C20577 + C32902 * C1463) *
                 C32860) *
                C33048) *
               C32774 * C467 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
            (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
            (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C32774 * C466 -
           ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
            (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
               C32715 * C32774 * C467) *
              C468 +
          ((C21868 * C33096 + C21474 * C33092 + (C21512 + C21511) * C33082 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C33034) *
               C32715 * C32774 * C467 -
           ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
            (C20453 + C20452) * C33096) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[46] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C15101) *
                C33086) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C15101 + (C22304 + C22303) * C32860) * C33086 +
            ((C22088 + C22087) * C15101 + (C22086 + C22085) * C32860) * C33073 +
            ((C23989 + C23988) * C15101 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C32860) *
                C33048) *
               C581 -
           (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
            (C21869 * C32860 + C21870 * C15101) * C33073 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) *
                C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C580 -
           ((C27984 + C27985) * C33034 + (C22303 + C22304) * C33082 +
            (C22305 + C22306) * C33092 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33096) *
               C32715 * C581) *
              C466 +
          (((C22306 + C22305) * C33096 + (C22304 + C22303) * C33092 +
            (C27985 + C27984) * C33082 +
            (C20403 * C6333 + C27978 + C27978 + C20401 * C6339 +
             C20405 * C6335 + C27979 + C27979 + C32902 * C6341) *
                C33034) *
               C32715 * C581 -
           ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
            (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[47] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C235 -
          (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
           (C21869 * C32860 + C21870 * C15101) * C33073 +
           ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) * C33086) *
              C32774 * C236 +
          ((C21515 * C15101 + (C21514 + C21513) * C32860) * C33086 +
           (C21474 * C15101 + (C21512 + C21511) * C32860) * C33073 +
           ((C21319 + C21318) * C15101 +
            (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
             C21872 + C21872 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C32760 * C110 -
          (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
           (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
           (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
              C32774 * C32760 * C111 +
          (C26400 * C33086 +
           (C20461 * C15101 + (C20849 + C20848) * C32860) * C33073 +
           ((C20459 + C20458) * C15101 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C341 -
          (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
           ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
           ((C22305 + C22306) * C32860 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C15101) *
               C33086) *
              C342 +
          (((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
             C20685 + C20685 + C32902 * C2093) *
                C15101 +
            (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
             C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                C32860) *
               C33086 +
           ((C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
             C20687 + C20687 + C32902 * C2092) *
                C15101 +
            (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
             C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                C32860) *
               C33073 +
           ((C20403 * C351 + C20688 + C20688 + C20401 * C371 + C20405 * C2079 +
             C20689 + C20689 + C32902 * C2091) *
                C15101 +
            (C20403 * C1130 + C23589 + C23589 + C20401 * C1148 +
             C20405 * C2627 + C23590 + C23590 + C32902 * C2633) *
                C32860) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 +
           (C21514 + C21513) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
           (C20453 + C20452) * C33096) *
              C32715 * C32774 * C32760 * C111 +
          (C20460 * C33096 + C23294 * C33092 + (C21319 + C21318) * C33082 +
           (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
            C21872 + C21872 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C32774 * C235 -
          ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
           (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
              C32715 * C32774 * C236 +
          (C21515 * C33096 + C27471 * C33092 + (C27483 + C27482) * C33082 +
           (C20403 * C6253 + C27476 + C27476 + C20401 * C6257 + C20405 * C6604 +
            C27477 + C27477 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C341 -
          ((C20405 * C6334 + C22292 + C22292 + C32902 * C6340 + C20403 * C1637 +
            C22291 + C22291 + C20401 * C1643) *
               C33034 +
           (C22303 + C22304) * C33082 + (C22305 + C22306) * C33092 +
           (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
            C20683 + C20683 + C20401 * C368) *
               C33096) *
              C32715 * C342 +
          ((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
            C20685 + C20685 + C32902 * C2093) *
               C33096 +
           (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 + C20405 * C2625 +
            C21667 + C21667 + C32902 * C2631) *
               C33092 +
           (C20403 * C1127 + C21668 + C21668 + C20401 * C1145 + C20405 * C7001 +
            C21669 + C21669 + C32902 * C7007) *
               C33082 +
           (C20403 * C6334 + C27582 + C27582 + C20401 * C6340 + C20405 * C7484 +
            C27583 + C27583 + C32902 * C7486) *
               C33034) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[48] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C15101 +
             (C21507 + C21508) * C32860) *
                C33086 +
            ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
            C26400 * C33048) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C15101) * C33048 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C15101) * C33073 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C15101) *
                C33086) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C15101 + (C22088 + C22087) * C32860) * C33086 +
            ((C21013 + C21012) * C15101 + (C23989 + C23988) * C32860) * C33073 +
            ((C21011 + C21010) * C15101 +
             (C20403 * C695 + C21152 + C21152 + C20401 * C705 + C20405 * C2261 +
              C21153 + C21153 + C32902 * C2263) *
                 C32860) *
                C33048) *
               C581 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
            (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
            (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33096 +
            (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
               C32715 * C580 -
           ((C20405 * C6334 + C22292 + C22292 + C32902 * C6340 +
             C20403 * C1637 + C22291 + C22291 + C20401 * C1643) *
                C33034 +
            (C22303 + C22304) * C33082 + (C22305 + C22306) * C33092 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33096) *
               C32715 * C581) *
              C32760 * C468 +
          (((C21015 + C21014) * C33096 + (C22088 + C22087) * C33092 +
            (C22086 + C22085) * C33082 +
            (C20403 * C1638 + C22293 + C22293 + C20401 * C1644 +
             C20405 * C7165 + C22294 + C22294 + C32902 * C7167) *
                C33034) *
               C32715 * C581 -
           ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
            (C20453 + C20452) * C33096) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[49] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C32760 * C110 -
          (((C20848 + C20849) * C32860 + (C20457 + C20456) * C15101) * C33048 +
           (C23785 * C32860 + (C20455 + C20454) * C15101) * C33073 +
           (C21870 * C32860 + (C20453 + C20452) * C15101) * C33086) *
              C32774 * C32760 * C111 +
          (C26400 * C33086 +
           (C20461 * C15101 + (C20849 + C20848) * C32860) * C33073 +
           ((C20459 + C20458) * C15101 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C15101 +
            (C21507 + C21508) * C32860) *
               C33086 +
           ((C20452 + C20453) * C15101 + C21868 * C32860) * C33073 +
           C26400 * C33048) *
              C32774 * C235 -
          (((C21318 + C21319) * C32860 + C23785 * C15101) * C33048 +
           (C21869 * C32860 + C21870 * C15101) * C33073 +
           ((C21510 + C21509) * C32860 + (C21508 + C21507) * C15101) * C33086) *
              C32774 * C236 +
          ((C21515 * C15101 + (C21514 + C21513) * C32860) * C33086 +
           (C21474 * C15101 + (C21512 + C21511) * C32860) * C33073 +
           ((C21319 + C21318) * C15101 +
            (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
             C21872 + C21872 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 +
           (C21514 + C21513) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C21511 + C21512) * C33034 + C21869 * C33082 + C21870 * C33092 +
           (C20453 + C20452) * C33096) *
              C32715 * C32774 * C32760 * C111 +
          (C20460 * C33096 + C23294 * C33092 + (C21319 + C21318) * C33082 +
           (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
            C21872 + C21872 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C33096 +
           (C21507 + C21508) * C33092 + C21515 * C33082 + C27471 * C33034) *
              C32715 * C32774 * C235 -
          ((C27482 + C27483) * C33034 + (C21513 + C21514) * C33082 +
           (C21510 + C21509) * C33092 + (C21508 + C21507) * C33096) *
              C32715 * C32774 * C236 +
          (C21515 * C33096 + C27471 * C33092 + (C27483 + C27482) * C33082 +
           (C20403 * C6253 + C27476 + C27476 + C20401 * C6257 + C20405 * C6604 +
            C27477 + C27477 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[50] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C32774 * C466 -
           ((C7960 + C7961 + C7962 + C7963) * C32725 +
            (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C7963 + C7962 + C7961 + C7960) * C33007 +
            (C493 * C7618 + C849 * C7619 + C1011 * C7620 +
             (C113 * C969 + C998 + C998 + C32815 * C981) * C33034) *
                C32725) *
               C32774 * C467 -
           ((C7629 + C7630 + C7631 + C7632) * C32725 +
            (C7628 + C7627 + C7626 + C7625) * C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C32774 * C466 -
           ((C3085 + C3086) * C33026 + (C3087 + C3088) * C2745 +
            (C3089 + C3090) * C2744 +
            (C1010 * C32860 + C1009 * C33025) * C2743) *
               C32774 * C467) *
              C468 +
          (((C3090 + C3089) * C2743 + (C3088 + C3087) * C2744 +
            (C3086 + C3085) * C2745 +
            (C491 * C33025 +
             (C113 * C248 + C279 + C279 + C32815 * C268) * C32860) *
                C33026) *
               C32774 * C467 -
           ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
            (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
              C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 +
              C10140 + C33060 * C369) *
                 C33025 +
             (C11232 + C11233 + C11234) * C32860) *
                C33007 +
            ((C10189 + C10190 + C10191) * C33025 + C13003 * C32860) * C32725) *
               C32774 * C466 -
           (((C11525 + C11524 + C11523) * C32860 + C13004 * C33025) * C32725 +
            ((C11237 + C11236 + C11235) * C32860 +
             (C11234 + C11233 + C11232) * C33025) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C13003 * C33025 + (C11523 + C11524 + C11525) * C32860) * C33007 +
            ((C10632 + C10631 + C10630) * C33025 +
             (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
              C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
              C10328 + C33060 * C1149) *
                 C32860) *
                C32725) *
               C32774 * C467 -
           (((C10630 + C10631 + C10632) * C32860 +
             (C10194 + C10193 + C10192) * C33025) *
                C32725 +
            (C13004 * C32860 + (C10191 + C10190 + C10189) * C33025) * C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[51] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C580 -
           ((C8102 + C8096 + C8097 + C8098) * C32725 +
            (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
                C33007) *
               C581) *
              C466 +
          (((C1659 * C7618 + C1658 * C7619 + C6618 * C7620 + C6617 * C33034) *
                C33007 +
            (C1487 * C7618 + C1486 * C7619 + C8101 * C7620 +
             (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C33034) *
                C32725) *
               C581 -
           ((C7960 + C7961 + C7962 + C7963) * C32725 +
            (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
                C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C580 -
           ((C3231 + C3223) * C33026 + (C3224 + C3225) * C2745 +
            (C3226 + C3227) * C2744 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
                C2743) *
               C581) *
              C466 +
          (((C1659 * C33025 + C1658 * C32860) * C2743 +
            (C1487 * C33025 + C1486 * C32860) * C2744 +
            (C1485 * C33025 + C1484 * C32860) * C2745 +
            (C3230 * C33025 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C32860) *
                C33026) *
               C581 -
           ((C3085 + C3086) * C33026 + (C3087 + C3088) * C2745 +
            (C3089 + C3090) * C2744 +
            (C1010 * C32860 + C1009 * C33025) * C2743) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
              C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 +
              C10140 + C33060 * C369) *
                 C33025 +
             (C11232 + C11233 + C11234) * C32860) *
                C33007 +
            ((C10189 + C10190 + C10191) * C33025 + C13003 * C32860) * C32725) *
               C580 -
           (((C13211 + C13212 + C13213) * C32860 +
             (C10812 + C10813 + C10814) * C33025) *
                C32725 +
            ((C11851 + C11852 + C11853) * C32860 +
             (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 +
              C10133 * C349 + C10446 + C10446 + C10129 * C369 + C10131 * C348 +
              C10447 + C10447 + C10128 * C368) *
                 C33025) *
                C33007) *
               C581) *
              C466 +
          ((((C11853 + C11852 + C11851) * C33025 +
             (C11850 + C11849 + C11848) * C32860) *
                C33007 +
            ((C13213 + C13212 + C13211) * C33025 +
             (C10131 * C1124 + C11672 + C11672 + C10128 * C1142 +
              C10133 * C1129 + C11673 + C11673 + C10129 * C1147 +
              C10135 * C7332 + C11674 + C11674 + C33060 * C7334) *
                 C32860) *
                C32725) *
               C581 -
           (((C11525 + C11524 + C11523) * C32860 + C13004 * C33025) * C32725 +
            ((C11237 + C11236 + C11235) * C32860 +
             (C11234 + C11233 + C11232) * C33025) *
                C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[52] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
                C1009 * C32860) *
                   C2743 +
               (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
                  C32774 * C32760 * C110 -
              ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
               (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
                  C32774 * C32760 * C111 +
              (C2756 * C2743 + C2757 * C2744 + (C2755 + C2754) * C2745 +
               (C168 * C33025 +
                (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
                   C33026) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
                C1009 * C32860) *
                   C2743 +
               (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
                  C32774 * C235 -
              ((C850 * C32860 + C492 * C33025) * C33026 +
               (C849 * C32860 + C493 * C33025) * C2745 +
               (C848 * C32860 + C494 * C33025) * C2744 +
               (C1010 * C32860 + C1009 * C33025) * C2743) *
                  C32774 * C236 +
              ((C1010 * C33025 + C1013 * C32860) * C2743 +
               (C848 * C33025 + C1012 * C32860) * C2744 +
               (C849 * C33025 + C1011 * C32860) * C2745 +
               (C850 * C33025 +
                (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
                   C33026) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C341 -
          (((C113 * C695 + C711 + C711 + C32815 * C705) * C32860 +
            C604 * C33025) *
               C33026 +
           (C1485 * C32860 + C605 * C33025) * C2745 +
           (C1487 * C32860 + C606 * C33025) * C2744 +
           (C1659 * C32860 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
               C2743) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33025 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C32860) *
               C2743 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33025 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C32860) *
               C2744 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C33025 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C32860) *
               C2745 +
           ((C113 * C352 + C383 + C383 + C32815 * C372) * C33025 +
            (C113 * C2261 + C2954 + C2954 + C32815 * C2263) * C32860) *
               C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C32760 * C110 -
          ((C7629 + C7630 + C7631 + C7632) * C32725 +
           (C7628 + C7627 + C7626 + C7625) * C33007) *
              C32774 * C32760 * C111 +
          ((C7632 + C7631 + C7630 + C7629) * C33007 +
           (C166 * C7618 + C492 * C7619 + C850 * C7620 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C7620 + C848 * C7619 + C494 * C7618) *
               C32725 +
           (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
               C33007) *
              C32774 * C236 +
          ((C1010 * C7618 + C1013 * C7619 + C6270 * C7620 + C6271 * C33034) *
               C33007 +
           (C848 * C7618 + C1012 * C7619 + C6436 * C7620 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C341 -
          (((C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33034 +
            C1486 * C7620 + C1487 * C7619 + C606 * C7618) *
               C32725 +
           (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
               C33007) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C7618 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C7619 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C7620 +
            (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C33034) *
               C33007 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C7618 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C7619 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C7620 +
            (C113 * C7165 + C7829 + C7829 + C32815 * C7167) * C33034) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33025 +
            (C11232 + C11233 + C11234) * C32860) *
               C33007 +
           ((C10189 + C10190 + C10191) * C33025 +
            (C10635 + C10634 + C10633) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C10630 + C10631 + C10632) * C32860 +
            (C10194 + C10193 + C10192) * C33025) *
               C32725 +
           ((C10633 + C10634 + C10635) * C32860 +
            (C10191 + C10190 + C10189) * C33025) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C10199 * C33025 + (C10632 + C10631 + C10630) * C32860) * C33007 +
           ((C10197 + C10196 + C10195) * C33025 +
            (C10131 * C240 + C10615 + C10615 + C10128 * C260 + C10133 * C695 +
             C10616 + C10616 + C10129 * C705 + C10135 * C2261 + C10617 +
             C10617 + C33060 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33025 +
            (C11232 + C11233 + C11234) * C32860) *
               C33007 +
           ((C10189 + C10190 + C10191) * C33025 +
            (C10635 + C10634 + C10633) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C11525 + C11524 + C11523) * C32860 +
            (C10633 + C10634 + C10635) * C33025) *
               C32725 +
           ((C11237 + C11236 + C11235) * C32860 +
            (C11234 + C11233 + C11232) * C33025) *
               C33007) *
              C32774 * C236 +
          ((C11242 * C33025 + (C11240 + C11239 + C11238) * C32860) * C33007 +
           ((C11523 + C11524 + C11525) * C33025 +
            (C10131 * C965 + C11514 + C11514 + C10128 * C977 + C10133 * C1638 +
             C11515 + C11515 + C10129 * C1644 + C10135 * C7165 + C11516 +
             C11516 + C33060 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33025 +
            (C11232 + C11233 + C11234) * C32860) *
               C33007 +
           ((C10189 + C10190 + C10191) * C33025 +
            (C10635 + C10634 + C10633) * C32860) *
               C32725) *
              C341 -
          (((C10135 * C2626 + C10966 + C10966 + C33060 * C2632 +
             C10133 * C1128 + C10965 + C10965 + C10129 * C1146 + C10131 * C693 +
             C10964 + C10964 + C10128 * C703) *
                C32860 +
            (C10812 + C10813 + C10814) * C33025) *
               C32725 +
           ((C11851 + C11852 + C11853) * C32860 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C33025) *
               C33007) *
              C342 +
          (((C10131 * C349 + C10448 + C10448 + C10128 * C369 + C10133 * C2081 +
             C10449 + C10449 + C10129 * C2093 + C10135 * C2082 + C10450 +
             C10450 + C33060 * C2094) *
                C33025 +
            (C10131 * C1126 + C11356 + C11356 + C10128 * C1144 +
             C10133 * C2625 + C11357 + C11357 + C10129 * C2631 +
             C10135 * C7002 + C11358 + C11358 + C33060 * C7008) *
                C32860) *
               C33007 +
           ((C10131 * C350 + C10451 + C10451 + C10128 * C370 + C10133 * C2080 +
             C10452 + C10452 + C10129 * C2092 + C10135 * C2083 + C10453 +
             C10453 + C33060 * C2095) *
                C33025 +
            (C10131 * C1128 + C12804 + C12804 + C10128 * C1146 +
             C10133 * C2626 + C12805 + C12805 + C10129 * C2632 +
             C10135 * C12177 + C12806 + C12806 + C33060 * C12179) *
                C32860) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[53] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C580 -
           ((C8102 + C8096 + C8097 + C8098) * C32725 +
            (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
                C33007) *
               C581) *
              C32760 * C468 +
          (((C8098 + C8097 + C8096 + C8102) * C33007 +
            (C605 * C7618 + C1485 * C7619 + C1484 * C7620 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33034) *
                C32725) *
               C581 -
           ((C7629 + C7630 + C7631 + C7632) * C32725 +
            (C7628 + C7627 + C7626 + C7625) * C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C580 -
           ((C3231 + C3223) * C33026 + (C3224 + C3225) * C2745 +
            (C3226 + C3227) * C2744 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
                C2743) *
               C581) *
              C32760 * C468 +
          (((C3227 + C3226) * C2743 + (C3225 + C3224) * C2744 +
            (C3223 + C3231) * C2745 +
            (C603 * C33025 +
             (C113 * C696 + C712 + C712 + C32815 * C706) * C32860) *
                C33026) *
               C581 -
           ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
            (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
              C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 +
              C10140 + C33060 * C369) *
                 C33025 +
             (C11232 + C11233 + C11234) * C32860) *
                C33007 +
            ((C10189 + C10190 + C10191) * C33025 + C13003 * C32860) * C32725) *
               C580 -
           (((C13211 + C13212 + C13213) * C32860 +
             (C10812 + C10813 + C10814) * C33025) *
                C32725 +
            ((C11851 + C11852 + C11853) * C32860 +
             (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 +
              C10133 * C349 + C10446 + C10446 + C10129 * C369 + C10131 * C348 +
              C10447 + C10447 + C10128 * C368) *
                 C33025) *
                C33007) *
               C581) *
              C32760 * C468 +
          ((((C10814 + C10813 + C10812) * C33025 +
             (C13213 + C13212 + C13211) * C32860) *
                C33007 +
            ((C10811 + C10810 + C10809) * C33025 +
             (C10131 * C694 + C10967 + C10967 + C10128 * C704 + C10133 * C1130 +
              C10968 + C10968 + C10129 * C1148 + C10135 * C2627 + C10969 +
              C10969 + C33060 * C2633) *
                 C32860) *
                C32725) *
               C581 -
           (((C10630 + C10631 + C10632) * C32860 +
             (C10194 + C10193 + C10192) * C33025) *
                C32725 +
            (C13004 * C32860 + (C10191 + C10190 + C10189) * C33025) * C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[54] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C33025) * C33026 +
           (C849 * C32860 + C493 * C33025) * C2745 +
           (C848 * C32860 + C494 * C33025) * C2744 +
           (C1010 * C32860 + C1009 * C33025) * C2743) *
              C32774 * C236 +
          ((C1010 * C33025 + C1013 * C32860) * C2743 +
           (C848 * C33025 + C1012 * C32860) * C2744 +
           (C849 * C33025 + C1011 * C32860) * C2745 +
           (C850 * C33025 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C32760 * C110 -
          ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
           (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
              C32774 * C32760 * C111 +
          (C2756 * C2743 + C2757 * C2744 + (C2755 + C2754) * C2745 +
           (C168 * C33025 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C32760 * C110 -
          ((C7629 + C7630 + C7631 + C7632) * C32725 +
           (C7628 + C7627 + C7626 + C7625) * C33007) *
              C32774 * C32760 * C111 +
          ((C7632 + C7631 + C7630 + C7629) * C33007 +
           (C166 * C7618 + C492 * C7619 + C850 * C7620 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C7620 + C848 * C7619 + C494 * C7618) *
               C32725 +
           (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
               C33007) *
              C32774 * C236 +
          ((C1010 * C7618 + C1013 * C7619 + C6270 * C7620 + C6271 * C33034) *
               C33007 +
           (C848 * C7618 + C1012 * C7619 + C6436 * C7620 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33025 +
            (C11232 + C11233 + C11234) * C32860) *
               C33007 +
           ((C10189 + C10190 + C10191) * C33025 +
            (C10635 + C10634 + C10633) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C10630 + C10631 + C10632) * C32860 +
            (C10194 + C10193 + C10192) * C33025) *
               C32725 +
           ((C10633 + C10634 + C10635) * C32860 +
            (C10191 + C10190 + C10189) * C33025) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C10199 * C33025 + (C10632 + C10631 + C10630) * C32860) * C33007 +
           ((C10197 + C10196 + C10195) * C33025 +
            (C10131 * C240 + C10615 + C10615 + C10128 * C260 + C10133 * C695 +
             C10616 + C10616 + C10129 * C705 + C10135 * C2261 + C10617 +
             C10617 + C33060 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33025 +
            (C11232 + C11233 + C11234) * C32860) *
               C33007 +
           ((C10189 + C10190 + C10191) * C33025 +
            (C10635 + C10634 + C10633) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C11525 + C11524 + C11523) * C32860 +
            (C10633 + C10634 + C10635) * C33025) *
               C32725 +
           ((C11237 + C11236 + C11235) * C32860 +
            (C11234 + C11233 + C11232) * C33025) *
               C33007) *
              C32774 * C236 +
          ((C11242 * C33025 + (C11240 + C11239 + C11238) * C32860) * C33007 +
           ((C11523 + C11524 + C11525) * C33025 +
            (C10131 * C965 + C11514 + C11514 + C10128 * C977 + C10133 * C1638 +
             C11515 + C11515 + C10129 * C1644 + C10135 * C7165 + C11516 +
             C11516 + C33060 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[55] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C32774 * C466 -
           ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
            (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
               C32715 * C32774 * C467) *
              C468 +
          ((C4900 * C7618 + C8526 * C7619 + (C8548 + C8547) * C7620 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33034) *
               C32715 * C32774 * C467 -
           ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
            (C3511 + C3510) * C7618) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C32774 * C466 -
           (((C4548 + C4549) * C32860 + C4901 * C33025) * C33048 +
            ((C4550 + C4551) * C32860 + C4902 * C33025) * C826 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
               C32774 * C467) *
              C468 +
          (((C4900 * C33025 + (C4551 + C4550) * C32860) * C825 +
            (C4359 * C33025 + (C4549 + C4548) * C32860) * C826 +
            ((C3907 + C3906) * C33025 +
             (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
              C3635 + C3635 + C32902 * C1463) *
                 C32860) *
                C33048) *
               C32774 * C467 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
            (C4901 * C32860 + (C3513 + C3512) * C33025) * C826 +
            (C4902 * C32860 + (C3511 + C3510) * C33025) * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C33025 +
            (C14480 + C14481 + C14482 + C14483) * C32860) *
               C32715 * C32774 * C466 -
           ((C14484 + C14485 + C14486 + C14487) * C32860 +
            (C14483 + C14482 + C14481 + C14480) * C33025) *
               C32715 * C32774 * C467) *
              C468 +
          (((C13955 + C13954 + C13953 + C13952) * C33025 +
            (C13509 * C245 + C13684 + C13684 + C13505 * C265 + C13511 * C1124 +
             C13685 + C13685 + C13506 * C1142 + C13513 * C1129 + C13686 +
             C13686 + C13507 * C1147 + C13515 * C7332 + C13687 + C13687 +
             C33041 * C7334) *
                C32860) *
               C32715 * C32774 * C467 -
           ((C13952 + C13953 + C13954 + C13955) * C32860 +
            (C13569 + C13568 + C13567 + C13566) * C33025) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[56] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C580 -
           ((C10017 + C10018) * C33034 + (C9306 + C9307) * C7620 +
            (C5325 + C5326) * C7619 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C7618) *
               C32715 * C581) *
              C466 +
          (((C5326 + C5325) * C7618 + (C9307 + C9306) * C7619 +
            (C10018 + C10017) * C7620 +
            (C3461 * C6333 + C10011 + C10011 + C33027 * C6339 + C3463 * C6335 +
             C10012 + C10012 + C32902 * C6341) *
                C33034) *
               C32715 * C581 -
           ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
            (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C33025) * C33048 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C33025) * C826 +
            ((C5325 + C5326) * C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C33025) *
                C825) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C33025 +
             (C3461 * C1125 + C5315 + C5315 + C33027 * C1143 + C3463 * C1127 +
              C5316 + C5316 + C32902 * C1145) *
                 C32860) *
                C825 +
            ((C5116 + C5115) * C33025 +
             (C3461 * C1124 + C5317 + C5317 + C33027 * C1142 + C3463 * C1129 +
              C5318 + C5318 + C32902 * C1147) *
                 C32860) *
                C826 +
            ((C5114 + C5113) * C33025 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C32860) *
                C33048) *
               C581 -
           (((C4548 + C4549) * C32860 + C4901 * C33025) * C33048 +
            ((C4550 + C4551) * C32860 + C4902 * C33025) * C826 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C33025 +
            (C14480 + C14481 + C14482 + C14483) * C32860) *
               C32715 * C580 -
           ((C15000 + C15001 + C15002 + C15003) * C32860 +
            (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 +
             C13513 * C2081 + C13791 + C13791 + C13507 * C2093 + C13511 * C349 +
             C13792 + C13792 + C13506 * C369 + C13509 * C348 + C13793 + C13793 +
             C13505 * C368) *
                C33025) *
               C32715 * C581) *
              C466 +
          (((C15003 + C15002 + C15001 + C15000) * C33025 +
            (C13509 * C1125 + C14988 + C14988 + C13505 * C1143 +
             C13511 * C1127 + C14989 + C14989 + C13506 * C1145 +
             C13513 * C7001 + C14990 + C14990 + C13507 * C7007 +
             C13515 * C7003 + C14991 + C14991 + C33041 * C7009) *
                C32860) *
               C32715 * C581 -
           ((C14484 + C14485 + C14486 + C14487) * C32860 +
            (C14483 + C14482 + C14481 + C14480) * C33025) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[57] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
                 C3467 + C3467 + C32902 * C368) *
                    C33025 +
                (C3461 * C243 + C3627 + C3627 + C33027 * C263 + C3463 * C692 +
                 C3626 + C3626 + C32902 * C702) *
                    C32860) *
                   C825 +
               ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
               C4361 * C33048) *
                  C32774 * C32760 * C110 -
              (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
               ((C3908 + C3909) * C32860 + (C3513 + C3512) * C33025) * C826 +
               ((C3910 + C3911) * C32860 + (C3511 + C3510) * C33025) * C825) *
                  C32774 * C32760 * C111 +
              (C4361 * C825 +
               (C3519 * C33025 + (C3907 + C3906) * C32860) * C826 +
               ((C3517 + C3516) * C33025 +
                (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
                 C3893 + C3893 + C32902 * C706) *
                    C32860) *
                   C33048) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
                 C3467 + C3467 + C32902 * C368) *
                    C33025 +
                (C4546 + C4547) * C32860) *
                   C825 +
               ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
               C4361 * C33048) *
                  C32774 * C235 -
              (((C4548 + C4549) * C32860 + (C3908 + C3909) * C33025) * C33048 +
               ((C4550 + C4551) * C32860 + (C3910 + C3911) * C33025) * C826 +
               ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
                  C32774 * C236 +
              (((C4553 + C4552) * C33025 +
                (C3461 * C966 + C4524 + C4524 + C33027 * C978 + C3463 * C1637 +
                 C4525 + C4525 + C32902 * C1643) *
                    C32860) *
                   C825 +
               ((C4551 + C4550) * C33025 +
                (C3461 * C965 + C4526 + C4526 + C33027 * C977 + C3463 * C1638 +
                 C4527 + C4527 + C32902 * C1644) *
                    C32860) *
                   C826 +
               ((C4549 + C4548) * C33025 +
                (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
                 C4529 + C4529 + C32902 * C1645) *
                    C32860) *
                   C33048) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C4546 + C4547) * C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C341 -
          (((C3463 * C1130 + C4209 + C4209 + C32902 * C1148 + C3461 * C694 +
             C4208 + C4208 + C33027 * C704) *
                C32860 +
            (C4070 + C4071) * C33025) *
               C33048 +
           ((C3463 * C1128 + C4207 + C4207 + C32902 * C1146 + C3461 * C693 +
             C4206 + C4206 + C33027 * C703) *
                C32860 +
            (C4072 + C4073) * C33025) *
               C826 +
           ((C3463 * C1126 + C4205 + C4205 + C32902 * C1144 + C3461 * C692 +
             C4204 + C4204 + C33027 * C702) *
                C32860 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C33025) *
               C825) *
              C342 +
          (((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
             C3743 + C3743 + C32902 * C2093) *
                C33025 +
            (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
             C4701 + C4701 + C32902 * C2631) *
                C32860) *
               C825 +
           ((C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
             C3745 + C3745 + C32902 * C2092) *
                C33025 +
            (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 + C3463 * C2626 +
             C4703 + C4703 + C32902 * C2632) *
                C32860) *
               C826 +
           ((C3461 * C351 + C3746 + C3746 + C33027 * C371 + C3463 * C2079 +
             C3747 + C3747 + C32902 * C2091) *
                C33025 +
            (C3461 * C1130 + C4704 + C4704 + C33027 * C1148 + C3463 * C2627 +
             C4705 + C4705 + C32902 * C2633) *
                C32860) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + (C8550 + C8549) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
           (C3511 + C3510) * C7618) *
              C32715 * C32774 * C32760 * C111 +
          (C3518 * C7618 + C4359 * C7619 + (C4549 + C4548) * C7620 +
           (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
            C4529 + C4529 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C32774 * C235 -
          ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
           (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
              C32715 * C32774 * C236 +
          (C8525 * C7618 + C9504 * C7619 + (C9516 + C9515) * C7620 +
           (C3461 * C6253 + C9509 + C9509 + C33027 * C6257 + C3463 * C6604 +
            C9510 + C9510 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C341 -
          ((C3463 * C6334 + C9299 + C9299 + C32902 * C6340 + C3461 * C1637 +
            C9298 + C9298 + C33027 * C1643) *
               C33034 +
           (C9306 + C9307) * C7620 + (C5325 + C5326) * C7619 +
           (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
            C3741 + C3741 + C33027 * C368) *
               C7618) *
              C32715 * C342 +
          ((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
            C3743 + C3743 + C32902 * C2093) *
               C7618 +
           (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
            C4701 + C4701 + C32902 * C2631) *
               C7619 +
           (C3461 * C1127 + C8697 + C8697 + C33027 * C1145 + C3463 * C7001 +
            C8698 + C8698 + C32902 * C7007) *
               C7620 +
           (C3461 * C6334 + C9615 + C9615 + C33027 * C6340 + C3463 * C7484 +
            C9616 + C9616 + C32902 * C7486) *
               C33034) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C33025 +
           (C13509 * C243 + C13679 + C13679 + C13505 * C263 + C13511 * C692 +
            C13678 + C13678 + C13506 * C702 + C13513 * C1126 + C13677 + C13677 +
            C13507 * C1144 + C13515 * C2625 + C13676 + C13676 +
            C33041 * C2631) *
               C32860) *
              C32715 * C32774 * C32760 * C110 -
          ((C13952 + C13953 + C13954 + C13955) * C32860 +
           (C13569 + C13568 + C13567 + C13566) * C33025) *
              C32715 * C32774 * C32760 * C111 +
          ((C13573 + C13572 + C13571 + C13570) * C33025 +
           (C13509 * C241 + C13940 + C13940 + C13505 * C261 + C13511 * C694 +
            C13941 + C13941 + C13506 * C704 + C13513 * C1130 + C13942 + C13942 +
            C13507 * C1148 + C13515 * C2627 + C13943 + C13943 +
            C33041 * C2633) *
               C32860) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C33025 +
           (C14480 + C14481 + C14482 + C14483) * C32860) *
              C32715 * C32774 * C235 -
          ((C14484 + C14485 + C14486 + C14487) * C32860 +
           (C14483 + C14482 + C14481 + C14480) * C33025) *
              C32715 * C32774 * C236 +
          ((C14487 + C14486 + C14485 + C14484) * C33025 +
           (C13509 * C966 + C14460 + C14460 + C13505 * C978 + C13511 * C1637 +
            C14461 + C14461 + C13506 * C1643 + C13513 * C6334 + C14462 +
            C14462 + C13507 * C6340 + C13515 * C7484 + C14463 + C14463 +
            C33041 * C7486) *
               C32860) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C33025 +
           (C14480 + C14481 + C14482 + C14483) * C32860) *
              C32715 * C341 -
          ((C13515 * C7002 + C14243 + C14243 + C33041 * C7008 + C13513 * C2625 +
            C14242 + C14242 + C13507 * C2631 + C13511 * C1126 + C14241 +
            C14241 + C13506 * C1144 + C13509 * C692 + C14240 + C14240 +
            C13505 * C702) *
               C32860 +
           (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 + C13513 * C2081 +
            C13791 + C13791 + C13507 * C2093 + C13511 * C349 + C13792 + C13792 +
            C13506 * C369 + C13509 * C348 + C13793 + C13793 + C13505 * C368) *
               C33025) *
              C32715 * C342 +
          ((C13509 * C349 + C13794 + C13794 + C13505 * C369 + C13511 * C2081 +
            C13795 + C13795 + C13506 * C2093 + C13513 * C2082 + C13796 +
            C13796 + C13507 * C2094 + C13515 * C12079 + C13797 + C13797 +
            C33041 * C12083) *
               C33025 +
           (C13509 * C1126 + C14586 + C14586 + C13505 * C1144 + C13511 * C2625 +
            C14587 + C14587 + C13506 * C2631 + C13513 * C7002 + C14588 +
            C14588 + C13507 * C7008 + C13515 * C12357 + C14589 + C14589 +
            C33041 * C12359) *
               C32860) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[58] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C580 -
           ((C3463 * C6334 + C9299 + C9299 + C32902 * C6340 + C3461 * C1637 +
             C9298 + C9298 + C33027 * C1643) *
                C33034 +
            (C9306 + C9307) * C7620 + (C5325 + C5326) * C7619 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C7618) *
               C32715 * C581) *
              C32760 * C468 +
          (((C4073 + C4072) * C7618 + (C5116 + C5115) * C7619 +
            (C9099 + C9098) * C7620 +
            (C3461 * C1638 + C9300 + C9300 + C33027 * C1644 + C3463 * C7165 +
             C9301 + C9301 + C32902 * C7167) *
                C33034) *
               C32715 * C581 -
           ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
            (C3511 + C3510) * C7618) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C33025) * C33048 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C33025) * C826 +
            ((C3463 * C1126 + C4205 + C4205 + C32902 * C1144 + C3461 * C692 +
              C4204 + C4204 + C33027 * C702) *
                 C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C33025) *
                C825) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C33025 + (C5116 + C5115) * C32860) * C825 +
            ((C4071 + C4070) * C33025 + (C5114 + C5113) * C32860) * C826 +
            ((C4069 + C4068) * C33025 +
             (C3461 * C695 + C4210 + C4210 + C33027 * C705 + C3463 * C2261 +
              C4211 + C4211 + C32902 * C2263) *
                 C32860) *
                C33048) *
               C581 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
            (C4901 * C32860 + (C3513 + C3512) * C33025) * C826 +
            (C4902 * C32860 + (C3511 + C3510) * C33025) * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C33025 +
            (C14480 + C14481 + C14482 + C14483) * C32860) *
               C32715 * C580 -
           ((C13515 * C7002 + C14243 + C14243 + C33041 * C7008 +
             C13513 * C2625 + C14242 + C14242 + C13507 * C2631 +
             C13511 * C1126 + C14241 + C14241 + C13506 * C1144 + C13509 * C692 +
             C14240 + C14240 + C13505 * C702) *
                C32860 +
            (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 +
             C13513 * C2081 + C13791 + C13791 + C13507 * C2093 + C13511 * C349 +
             C13792 + C13792 + C13506 * C369 + C13509 * C348 + C13793 + C13793 +
             C13505 * C368) *
                C33025) *
               C32715 * C581) *
              C32760 * C468 +
          (((C14109 + C14108 + C14107 + C14106) * C33025 +
            (C13509 * C693 + C14244 + C14244 + C13505 * C703 + C13511 * C1128 +
             C14245 + C14245 + C13506 * C1146 + C13513 * C2626 + C14246 +
             C14246 + C13507 * C2632 + C13515 * C12177 + C14247 + C14247 +
             C33041 * C12179) *
                C32860) *
               C32715 * C581 -
           ((C13952 + C13953 + C13954 + C13955) * C32860 +
            (C13569 + C13568 + C13567 + C13566) * C33025) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[59] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C4546 + C4547) * C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C235 -
          (((C4548 + C4549) * C32860 + (C3908 + C3909) * C33025) * C33048 +
           ((C4550 + C4551) * C32860 + (C3910 + C3911) * C33025) * C826 +
           ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
              C32774 * C236 +
          (((C4553 + C4552) * C33025 +
            (C3461 * C966 + C4524 + C4524 + C33027 * C978 + C3463 * C1637 +
             C4525 + C4525 + C32902 * C1643) *
                C32860) *
               C825 +
           ((C4551 + C4550) * C33025 +
            (C3461 * C965 + C4526 + C4526 + C33027 * C977 + C3463 * C1638 +
             C4527 + C4527 + C32902 * C1644) *
                C32860) *
               C826 +
           ((C4549 + C4548) * C33025 +
            (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
             C4529 + C4529 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C3461 * C243 + C3627 + C3627 + C33027 * C263 + C3463 * C692 +
             C3626 + C3626 + C32902 * C702) *
                C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C32760 * C110 -
          (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
           ((C3908 + C3909) * C32860 + (C3513 + C3512) * C33025) * C826 +
           ((C3910 + C3911) * C32860 + (C3511 + C3510) * C33025) * C825) *
              C32774 * C32760 * C111 +
          (C4361 * C825 + (C3519 * C33025 + (C3907 + C3906) * C32860) * C826 +
           ((C3517 + C3516) * C33025 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + (C8550 + C8549) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
           (C3511 + C3510) * C7618) *
              C32715 * C32774 * C32760 * C111 +
          (C3518 * C7618 + C4359 * C7619 + (C4549 + C4548) * C7620 +
           (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
            C4529 + C4529 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C32774 * C235 -
          ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
           (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
              C32715 * C32774 * C236 +
          (C8525 * C7618 + C9504 * C7619 + (C9516 + C9515) * C7620 +
           (C3461 * C6253 + C9509 + C9509 + C33027 * C6257 + C3463 * C6604 +
            C9510 + C9510 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C33025 +
           (C13509 * C243 + C13679 + C13679 + C13505 * C263 + C13511 * C692 +
            C13678 + C13678 + C13506 * C702 + C13513 * C1126 + C13677 + C13677 +
            C13507 * C1144 + C13515 * C2625 + C13676 + C13676 +
            C33041 * C2631) *
               C32860) *
              C32715 * C32774 * C32760 * C110 -
          ((C13952 + C13953 + C13954 + C13955) * C32860 +
           (C13569 + C13568 + C13567 + C13566) * C33025) *
              C32715 * C32774 * C32760 * C111 +
          ((C13573 + C13572 + C13571 + C13570) * C33025 +
           (C13509 * C241 + C13940 + C13940 + C13505 * C261 + C13511 * C694 +
            C13941 + C13941 + C13506 * C704 + C13513 * C1130 + C13942 + C13942 +
            C13507 * C1148 + C13515 * C2627 + C13943 + C13943 +
            C33041 * C2633) *
               C32860) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C33025 +
           (C14480 + C14481 + C14482 + C14483) * C32860) *
              C32715 * C32774 * C235 -
          ((C14484 + C14485 + C14486 + C14487) * C32860 +
           (C14483 + C14482 + C14481 + C14480) * C33025) *
              C32715 * C32774 * C236 +
          ((C14487 + C14486 + C14485 + C14484) * C33025 +
           (C13509 * C966 + C14460 + C14460 + C13505 * C978 + C13511 * C1637 +
            C14461 + C14461 + C13506 * C1643 + C13513 * C6334 + C14462 +
            C14462 + C13507 * C6340 + C13515 * C7484 + C14463 + C14463 +
            C33041 * C7486) *
               C32860) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[60] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C32774 * C466 -
               (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
                (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
                   C32774 * C467) *
                  C468 +
              ((C498 * C103 + C497 * C104 + C496 * C105 + C495 * C106 +
                (C113 * C470 + C482 + C482 + C32815 * C472) * C32798 * C107) *
                   C32774 * C467 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C32774 * C466) *
                  C469) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                 C1009 * C33077 + C1010 * C33057) *
                    C825 +
                (C829 + C830 + C851) * C826 + C854 * C33048) *
                   C32774 * C466 -
               ((C1309 + C1310 + C1311) * C33048 +
                (C1312 + C1313 + C1314) * C826 +
                (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
                   C32774 * C467) *
                  C468 +
              (((C1314 + C1313 + C1312) * C825 +
                (C1311 + C1310 + C1309) * C826 +
                (C492 * C33089 + C850 * C33077 +
                 (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                    C33048) *
                   C32774 * C467 -
               ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
                (C851 + C830 + C829) * C825) *
                   C32774 * C466) *
                  C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C32774 * C466 -
           ((C2292 + C2293 + C2294) * C32798 * C33048 +
            (C2295 + C2296 + C2297) * C32798 * C826 +
            (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
             C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
             C33090 * C263) *
                C32798 * C825) *
               C32774 * C467) *
              C468 +
          (((C2297 + C2296 + C2295) * C32798 * C825 +
            (C2294 + C2293 + C2292) * C32798 * C826 +
            (C1772 * C240 + C2277 + C2277 + C33090 * C260 + C1774 * C695 +
             C2278 + C2278 + C33079 * C705 + C1776 * C2261 + C2279 + C2279 +
             C33060 * C2263) *
                C32798 * C33048) *
               C32774 * C467 -
           ((C1836 + C1837 + C1838) * C32798 * C33048 +
            (C1835 + C1834 + C1833) * C32798 * C826 +
            (C1832 + C1831 + C1830) * C32798 * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C32774 * C466 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C32774 * C467) *
              C468 +
          (((C5825 + C5824 + C5823) * C33086 +
            (C5822 + C5821 + C5820) * C33073 +
            (C492 * C5436 + C850 * C5437 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C32774 * C466 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C32774 * C467) *
              C468 +
          ((C494 * C6185 + C848 * C6186 + C1012 * C6187 + C6436 * C6188 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C6189) *
               C32715 * C32774 * C467 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C32774 * C466 -
           ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
            (C6883 + C6882 + C6881) * C5436) *
               C32715 * C32774 * C467) *
              C468 +
          (((C2297 + C2296 + C2295) * C5436 + (C7184 + C7185 + C7186) * C5437 +
            (C1772 * C965 + C7175 + C7175 + C33090 * C977 + C1774 * C1638 +
             C7176 + C7176 + C33079 * C1644 + C1776 * C7165 + C7177 + C7177 +
             C33060 * C7167) *
                C33057) *
               C32715 * C32774 * C467 -
           ((C7186 + C7185 + C7184) * C33057 + (C2295 + C2296 + C2297) * C5437 +
            (C1832 + C1831 + C1830) * C5436) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C32774 * C466 -
           ((C10630 + C10631 + C10632) * C32798 * C33048 +
            (C10633 + C10634 + C10635) * C32798 * C33073 +
            (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
             C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
             C10128 * C263) *
                C32798 * C33086) *
               C32774 * C467) *
              C468 +
          (((C10635 + C10634 + C10633) * C32798 * C33086 +
            (C10632 + C10631 + C10630) * C32798 * C33073 +
            (C10131 * C240 + C10615 + C10615 + C10128 * C260 + C10133 * C695 +
             C10616 + C10616 + C10129 * C705 + C10135 * C2261 + C10617 +
             C10617 + C33060 * C2263) *
                C32798 * C33048) *
               C32774 * C467 -
           ((C10195 + C10196 + C10197) * C32798 * C33048 +
            (C10194 + C10193 + C10192) * C32798 * C33073 +
            (C10191 + C10190 + C10189) * C32798 * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C32774 * C466 -
           ((C11238 + C11239 + C11240) * C33057 +
            (C11237 + C11236 + C11235) * C33077 +
            (C11234 + C11233 + C11232) * C33089) *
               C32715 * C32774 * C467) *
              C468 +
          (((C10635 + C10634 + C10633) * C33089 +
            (C11523 + C11524 + C11525) * C33077 +
            (C10131 * C965 + C11514 + C11514 + C10128 * C977 + C10133 * C1638 +
             C11515 + C11515 + C10129 * C1644 + C10135 * C7165 + C11516 +
             C11516 + C33060 * C7167) *
                C33057) *
               C32715 * C32774 * C467 -
           ((C11525 + C11524 + C11523) * C33057 +
            (C10633 + C10634 + C10635) * C33077 +
            (C10191 + C10190 + C10189) * C33089) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
            C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
            C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
            C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
               C32798 * C32715 * C32774 * C466 -
           (C11928 * C7002 + C12008 + C12008 + C11919 * C7008 + C11926 * C2625 +
            C12009 + C12009 + C11918 * C2631 + C11924 * C1126 + C12010 +
            C12010 + C11917 * C1144 + C11922 * C692 + C12011 + C12011 +
            C11916 * C702 + C11920 * C243 + C12012 + C12012 + C11915 * C263) *
               C32798 * C32715 * C32774 * C467) *
              C468 +
          ((C11920 * C242 + C12181 + C12181 + C11915 * C262 + C11922 * C693 +
            C12182 + C12182 + C11916 * C703 + C11924 * C1128 + C12183 + C12183 +
            C11917 * C1146 + C11926 * C2626 + C12184 + C12184 + C11918 * C2632 +
            C11928 * C12177 + C12185 + C12185 + C11919 * C12179) *
               C32798 * C32715 * C32774 * C467 -
           (C11928 * C2083 + C11936 + C11936 + C11919 * C2095 + C11926 * C2080 +
            C11937 + C11937 + C11918 * C2092 + C11924 * C350 + C11938 + C11938 +
            C11917 * C370 + C11922 * C347 + C11939 + C11939 + C11916 * C367 +
            C11920 * C116 + C11940 + C11940 + C11915 * C130) *
               C32798 * C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[61] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C580 -
               (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
                (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
                   C581) *
                  C466 +
              (((C113 * C692 + C708 + C708 + C32815 * C702) * C32798 * C103 +
                (C113 * C693 + C709 + C709 + C32815 * C703) * C32798 * C104 +
                (C113 * C694 + C710 + C710 + C32815 * C704) * C32798 * C105 +
                (C113 * C695 + C711 + C711 + C32815 * C705) * C32798 * C106 +
                (C113 * C696 + C712 + C712 + C32815 * C706) * C32798 * C107) *
                   C581 -
               (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
                (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
                   C580) *
                  C467) *
             C32748 +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                 C1009 * C33077 + C1010 * C33057) *
                    C825 +
                (C829 + C830 + C851) * C826 + C854 * C33048) *
                   C580 -
               ((C1488 + C1489 + C1469) * C33048 +
                (C1490 + C1491 + C1474) * C826 +
                (C1658 * C33057 + C1659 * C33077 +
                 (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                    C825) *
                   C581) *
                  C466 +
              (((C1659 * C33089 + C1658 * C33077 +
                 (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                    C825 +
                (C1487 * C33089 + C1486 * C33077 +
                 (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                    C826 +
                (C1485 * C33089 + C1484 * C33077 +
                 (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                    C33048) *
                   C581 -
               ((C1309 + C1310 + C1311) * C33048 +
                (C1312 + C1313 + C1314) * C826 +
                (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
                   C580) *
                  C467) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C580 -
           ((C2474 + C2475 + C2476) * C32798 * C33048 +
            (C2477 + C2478 + C2479) * C32798 * C826 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C32798 * C825) *
               C581) *
              C466 +
          (((C1772 * C692 + C2635 + C2635 + C33090 * C702 + C1774 * C1126 +
             C2636 + C2636 + C33079 * C1144 + C1776 * C2625 + C2637 + C2637 +
             C33060 * C2631) *
                C32798 * C825 +
            (C1772 * C693 + C2638 + C2638 + C33090 * C703 + C1774 * C1128 +
             C2639 + C2639 + C33079 * C1146 + C1776 * C2626 + C2640 + C2640 +
             C33060 * C2632) *
                C32798 * C826 +
            (C1772 * C694 + C2641 + C2641 + C33090 * C704 + C1774 * C1130 +
             C2642 + C2642 + C33079 * C1148 + C1776 * C2627 + C2643 + C2643 +
             C33060 * C2633) *
                C32798 * C33048) *
               C581 -
           ((C2292 + C2293 + C2294) * C32798 * C33048 +
            (C2295 + C2296 + C2297) * C32798 * C826 +
            (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
             C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
             C33090 * C263) *
                C32798 * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C466 +
          (((C1659 * C5436 + C1658 * C5437 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C33086 +
            (C1487 * C5436 + C1486 * C5437 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C33073 +
            (C1485 * C5436 + C1484 * C5437 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           (C6617 * C6189 + C6618 * C6188 + C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C466 +
          ((C1659 * C6185 + C1658 * C6186 + C6618 * C6187 + C6617 * C6188 +
            (C113 * C6604 + C6612 + C6612 + C32815 * C6606) * C6189) *
               C32715 * C581 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C580 -
           ((C7515 + C7516 + C7517) * C33057 + (C7518 + C7519 + C7520) * C5437 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C5436) *
               C32715 * C581) *
              C466 +
          (((C7520 + C7519 + C7518) * C5436 + (C7517 + C7516 + C7515) * C5437 +
            (C1772 * C1637 + C7500 + C7500 + C33090 * C1643 + C1774 * C6334 +
             C7501 + C7501 + C33079 * C6340 + C1776 * C7484 + C7502 + C7502 +
             C33060 * C7486) *
                C33057) *
               C32715 * C581 -
           ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
            (C6883 + C6882 + C6881) * C5436) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C580 -
           ((C10809 + C10810 + C10811) * C32798 * C33048 +
            (C10812 + C10813 + C10814) * C32798 * C33073 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C32798 * C33086) *
               C581) *
              C466 +
          (((C10131 * C692 + C10961 + C10961 + C10128 * C702 + C10133 * C1126 +
             C10962 + C10962 + C10129 * C1144 + C10135 * C2625 + C10963 +
             C10963 + C33060 * C2631) *
                C32798 * C33086 +
            (C10131 * C693 + C10964 + C10964 + C10128 * C703 + C10133 * C1128 +
             C10965 + C10965 + C10129 * C1146 + C10135 * C2626 + C10966 +
             C10966 + C33060 * C2632) *
                C32798 * C33073 +
            (C10131 * C694 + C10967 + C10967 + C10128 * C704 + C10133 * C1130 +
             C10968 + C10968 + C10129 * C1148 + C10135 * C2627 + C10969 +
             C10969 + C33060 * C2633) *
                C32798 * C33048) *
               C581 -
           ((C10630 + C10631 + C10632) * C32798 * C33048 +
            (C10633 + C10634 + C10635) * C32798 * C33073 +
            (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
             C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
             C10128 * C263) *
                C32798 * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C580 -
           ((C11848 + C11849 + C11850) * C33057 +
            (C11851 + C11852 + C11853) * C33077 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C33089) *
               C32715 * C581) *
              C466 +
          (((C11853 + C11852 + C11851) * C33089 +
            (C11850 + C11849 + C11848) * C33077 +
            (C10131 * C1637 + C11833 + C11833 + C10128 * C1643 +
             C10133 * C6334 + C11834 + C11834 + C10129 * C6340 +
             C10135 * C7484 + C11835 + C11835 + C33060 * C7486) *
                C33057) *
               C32715 * C581 -
           ((C11238 + C11239 + C11240) * C33057 +
            (C11237 + C11236 + C11235) * C33077 +
            (C11234 + C11233 + C11232) * C33089) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
            C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
            C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
            C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
               C32798 * C32715 * C580 -
           (C11928 * C12079 + C12086 + C12086 + C11919 * C12083 +
            C11926 * C2082 + C12087 + C12087 + C11918 * C2094 + C11924 * C2081 +
            C12088 + C12088 + C11917 * C2093 + C11922 * C349 + C12089 + C12089 +
            C11916 * C369 + C11920 * C348 + C12090 + C12090 + C11915 * C368) *
               C32798 * C32715 * C581) *
              C466 +
          ((C11920 * C692 + C12361 + C12361 + C11915 * C702 + C11922 * C1126 +
            C12362 + C12362 + C11916 * C1144 + C11924 * C2625 + C12363 +
            C12363 + C11917 * C2631 + C11926 * C7002 + C12364 + C12364 +
            C11918 * C7008 + C11928 * C12357 + C12365 + C12365 +
            C11919 * C12359) *
               C32798 * C32715 * C581 -
           (C11928 * C7002 + C12008 + C12008 + C11919 * C7008 + C11926 * C2625 +
            C12009 + C12009 + C11918 * C2631 + C11924 * C1126 + C12010 +
            C12010 + C11917 * C1144 + C11922 * C692 + C12011 + C12011 +
            C11916 * C702 + C11920 * C243 + C12012 + C12012 + C11915 * C263) *
               C32798 * C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[62] +=
        (-0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C32760 * C110 -
              (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
               C169 * C103) *
                  C32774 * C32760 * C111 +
              (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
               (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
                  C32774 * C32760 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C235 -
              ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
               (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
               (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
               (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
               (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
                  C32774 * C236 +
              ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
               (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
               (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
               (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
               (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
                  C32774 * C237) *
             C32748 +
         0.5 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C341 -
              ((C113 * C344 + C375 + C375 + C32815 * C364) * C32798 * C107 +
               (C113 * C345 + C376 + C376 + C32815 * C365) * C32798 * C106 +
               (C113 * C346 + C377 + C377 + C32815 * C366) * C32798 * C105 +
               (C113 * C347 + C378 + C378 + C32815 * C367) * C32798 * C104 +
               (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
                  C342 +
              ((C113 * C349 + C380 + C380 + C32815 * C369) * C32798 * C103 +
               (C113 * C350 + C381 + C381 + C32815 * C370) * C32798 * C104 +
               (C113 * C351 + C382 + C382 + C32815 * C371) * C32798 * C105 +
               (C113 * C352 + C383 + C383 + C32815 * C372) * C32798 * C106 +
               (C113 * C353 + C384 + C384 + C32815 * C373) * C32798 * C107) *
                  C343) *
             C32760 * C32748 -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
                (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
                   C825 +
               (C829 + C830 + C851) * C826 + C854 * C33048) *
                  C32774 * C32760 * C110 -
              ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
               (C851 + C830 + C829) * C825) *
                  C32774 * C32760 * C111 +
              (C854 * C825 + (C840 + C839 + C853) * C826 +
               (C167 * C33089 + C491 * C33077 +
                (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
                   C33048) *
                  C32774 * C32760 * C112) -
         0.25 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                C1009 * C33077 + C1010 * C33057) *
                   C825 +
               (C829 + C830 + C851) * C826 + C854 * C33048) *
                  C32774 * C235 -
              ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
               (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
               (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
                  C32774 * C236 +
              ((C1010 * C33089 + C1013 * C33077 +
                (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
                   C825 +
               (C848 * C33089 + C1012 * C33077 +
                (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
                   C826 +
               (C849 * C33089 + C1011 * C33077 +
                (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
                   C33048) *
                  C32774 * C237) *
             C32748 +
         0.5 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                C1009 * C33077 + C1010 * C33057) *
                   C825 +
               (C829 + C830 + C851) * C826 + C854 * C33048) *
                  C341 -
              (((C113 * C1123 + C1151 + C1151 + C32815 * C1141) * C33057 +
                (C113 * C694 + C710 + C710 + C32815 * C704) * C33077 +
                C605 * C33089) *
                   C33048 +
               ((C113 * C1124 + C1152 + C1152 + C32815 * C1142) * C33057 +
                (C113 * C693 + C709 + C709 + C32815 * C703) * C33077 +
                C606 * C33089) *
                   C826 +
               ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
                (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
                (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                   C825) *
                  C342 +
              (((C113 * C349 + C380 + C380 + C32815 * C369) * C33089 +
                (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33077 +
                (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
                   C825 +
               ((C113 * C350 + C381 + C381 + C32815 * C370) * C33089 +
                (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33077 +
                (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
                   C826 +
               ((C113 * C351 + C382 + C382 + C32815 * C371) * C33089 +
                (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C33077 +
                (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
                   C33048) *
                  C343) *
             C32760 * C32748 +
         0.5 * std::pow(Pi, 2.5) *
             (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
                C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
                C33060 * C369) *
                   C32798 * C825 +
               (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
                  C32774 * C32760 * C110 -
              ((C1836 + C1837 + C1838) * C32798 * C33048 +
               (C1835 + C1834 + C1833) * C32798 * C826 +
               (C1832 + C1831 + C1830) * C32798 * C825) *
                  C32774 * C32760 * C111 +
              (C1841 * C825 + (C1838 + C1837 + C1836) * C32798 * C826 +
               (C1772 * C119 + C1809 + C1809 + C33090 * C133 + C1774 * C344 +
                C1810 + C1810 + C33079 * C364 + C1776 * C353 + C1811 + C1811 +
                C33060 * C373) *
                   C32798 * C33048) *
                  C32774 * C32760 * C112) +
         0.5 * std::pow(Pi, 2.5) *
             (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
                C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
                C33060 * C369) *
                   C32798 * C825 +
               (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
                  C32774 * C235 -
              ((C1776 * C1130 + C1952 + C1952 + C33060 * C1148 + C1774 * C694 +
                C1953 + C1953 + C33079 * C704 + C1772 * C241 + C1954 + C1954 +
                C33090 * C261) *
                   C32798 * C33048 +
               (C1776 * C1128 + C1955 + C1955 + C33060 * C1146 + C1774 * C693 +
                C1956 + C1956 + C33079 * C703 + C1772 * C242 + C1957 + C1957 +
                C33090 * C262) *
                   C32798 * C826 +
               (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
                C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
                C33090 * C263) *
                   C32798 * C825) *
                  C32774 * C236 +
              ((C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
                C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
                C33060 * C1145) *
                   C32798 * C825 +
               (C1772 * C245 + C1964 + C1964 + C33090 * C265 + C1774 * C1124 +
                C1965 + C1965 + C33079 * C1142 + C1776 * C1129 + C1966 + C1966 +
                C33060 * C1147) *
                   C32798 * C826 +
               (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
                C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
                C33060 * C1149) *
                   C32798 * C33048) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C341 -
          ((C1776 * C2079 + C2098 + C2098 + C33060 * C2091 + C1774 * C351 +
            C2099 + C2099 + C33079 * C371 + C1772 * C346 + C2100 + C2100 +
            C33090 * C366) *
               C32798 * C33048 +
           (C1776 * C2080 + C2101 + C2101 + C33060 * C2092 + C1774 * C350 +
            C2102 + C2102 + C33079 * C370 + C1772 * C347 + C2103 + C2103 +
            C33090 * C367) *
               C32798 * C826 +
           (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
            C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
            C33090 * C368) *
               C32798 * C825) *
              C342 +
          ((C1772 * C349 + C2107 + C2107 + C33090 * C369 + C1774 * C2081 +
            C2108 + C2108 + C33079 * C2093 + C1776 * C2082 + C2109 + C2109 +
            C33060 * C2094) *
               C32798 * C825 +
           (C1772 * C350 + C2110 + C2110 + C33090 * C370 + C1774 * C2080 +
            C2111 + C2111 + C33079 * C2092 + C1776 * C2083 + C2112 + C2112 +
            C33060 * C2095) *
               C32798 * C826 +
           (C1772 * C351 + C2113 + C2113 + C33090 * C371 + C1774 * C2079 +
            C2114 + C2114 + C33079 * C2091 + C1776 * C2084 + C2115 + C2115 +
            C33060 * C2096) *
               C32798 * C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C341 -
          ((C1484 * C33057 + C1485 * C5437 + C605 * C5436) * C33048 +
           (C1486 * C33057 + C1487 * C5437 + C606 * C5436) * C33073 +
           (C1658 * C33057 + C1659 * C5437 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
               C33086) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C5436 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C5437 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C33086 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C5436 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C5437 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C33073 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C5436 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C5437 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (-0.25 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C341 -
          ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
           (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
           C1658 * C6187 + C1659 * C6186 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
              C32715 * C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C6185 +
           (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C6186 +
           (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C6187 +
           (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C6188 +
           (C113 * C6335 + C6345 + C6345 + C32815 * C6341) * C6189) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C1772 * C243 + C1960 + C1960 + C33090 * C263 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1776 * C1126 + C1958 + C1958 +
            C33060 * C1144) *
               C5437 +
           (C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C1776 * C1129 + C1966 + C1966 + C33060 * C1147 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1772 * C245 + C1964 + C1964 +
            C33090 * C265) *
               C33057 +
           (C2295 + C2296 + C2297) * C5437 + (C1832 + C1831 + C1830) * C5436) *
              C32715 * C32774 * C32760 * C111 +
          (C1840 * C5436 + (C2294 + C2293 + C2292) * C5437 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C32774 * C235 -
          ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
           (C6883 + C6882 + C6881) * C5436) *
              C32715 * C32774 * C236 +
          (C6891 * C5436 + (C6889 + C6888 + C6887) * C5437 +
           (C1772 * C967 + C6860 + C6860 + C33090 * C979 + C1774 * C6333 +
            C6861 + C6861 + C33079 * C6339 + C1776 * C6335 + C6862 + C6862 +
            C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C341 -
          ((C1776 * C7001 + C7011 + C7011 + C33060 * C7007 + C1774 * C1127 +
            C7012 + C7012 + C33079 * C1145 + C1772 * C1125 + C7013 + C7013 +
            C33090 * C1143) *
               C33057 +
           (C1776 * C2625 + C2637 + C2637 + C33060 * C2631 + C1774 * C1126 +
            C2636 + C2636 + C33079 * C1144 + C1772 * C692 + C2635 + C2635 +
            C33090 * C702) *
               C5437 +
           (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
            C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
            C33090 * C368) *
               C5436) *
              C32715 * C342 +
          ((C1772 * C349 + C2107 + C2107 + C33090 * C369 + C1774 * C2081 +
            C2108 + C2108 + C33079 * C2093 + C1776 * C2082 + C2109 + C2109 +
            C33060 * C2094) *
               C5436 +
           (C1772 * C1126 + C7014 + C7014 + C33090 * C1144 + C1774 * C2625 +
            C7015 + C7015 + C33079 * C2631 + C1776 * C7002 + C7016 + C7016 +
            C33060 * C7008) *
               C5437 +
           (C1772 * C1127 + C7017 + C7017 + C33090 * C1145 + C1774 * C7001 +
            C7018 + C7018 + C33079 * C7007 + C1776 * C7003 + C7019 + C7019 +
            C33060 * C7009) *
               C33057) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C32760 * C110 -
          ((C10195 + C10196 + C10197) * C32798 * C33048 +
           (C10194 + C10193 + C10192) * C32798 * C33073 +
           (C10191 + C10190 + C10189) * C32798 * C33086) *
              C32774 * C32760 * C111 +
          (C10200 * C33086 + (C10197 + C10196 + C10195) * C32798 * C33073 +
           (C10131 * C119 + C10168 + C10168 + C10128 * C133 + C10133 * C344 +
            C10169 + C10169 + C10129 * C364 + C10135 * C353 + C10170 + C10170 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C235 -
          ((C10135 * C1130 + C10311 + C10311 + C33060 * C1148 + C10133 * C694 +
            C10312 + C10312 + C10129 * C704 + C10131 * C241 + C10313 + C10313 +
            C10128 * C261) *
               C32798 * C33048 +
           (C10135 * C1128 + C10314 + C10314 + C33060 * C1146 + C10133 * C693 +
            C10315 + C10315 + C10129 * C703 + C10131 * C242 + C10316 + C10316 +
            C10128 * C262) *
               C32798 * C33073 +
           (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
            C10128 * C263) *
               C32798 * C33086) *
              C32774 * C236 +
          ((C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C32798 * C33086 +
           (C10131 * C245 + C10323 + C10323 + C10128 * C265 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10135 * C1129 + C10325 +
            C10325 + C33060 * C1147) *
               C32798 * C33073 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C341 -
          ((C10135 * C2079 + C10439 + C10439 + C33060 * C2091 + C10133 * C351 +
            C10440 + C10440 + C10129 * C371 + C10131 * C346 + C10441 + C10441 +
            C10128 * C366) *
               C32798 * C33048 +
           (C10135 * C2080 + C10442 + C10442 + C33060 * C2092 + C10133 * C350 +
            C10443 + C10443 + C10129 * C370 + C10131 * C347 + C10444 + C10444 +
            C10128 * C367) *
               C32798 * C33073 +
           (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
            C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
            C10128 * C368) *
               C32798 * C33086) *
              C342 +
          ((C10131 * C349 + C10448 + C10448 + C10128 * C369 + C10133 * C2081 +
            C10449 + C10449 + C10129 * C2093 + C10135 * C2082 + C10450 +
            C10450 + C33060 * C2094) *
               C32798 * C33086 +
           (C10131 * C350 + C10451 + C10451 + C10128 * C370 + C10133 * C2080 +
            C10452 + C10452 + C10129 * C2092 + C10135 * C2083 + C10453 +
            C10453 + C33060 * C2095) *
               C32798 * C33073 +
           (C10131 * C351 + C10454 + C10454 + C10128 * C371 + C10133 * C2079 +
            C10455 + C10455 + C10129 * C2091 + C10135 * C2084 + C10456 +
            C10456 + C33060 * C2096) *
               C32798 * C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C10131 * C243 + C10319 + C10319 + C10128 * C263 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10135 * C1126 + C10317 + C10317 +
            C33060 * C1144) *
               C33077 +
           (C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C10135 * C1129 + C10325 + C10325 + C33060 * C1147 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10131 * C245 + C10323 + C10323 +
            C10128 * C265) *
               C33057 +
           (C10633 + C10634 + C10635) * C33077 +
           (C10191 + C10190 + C10189) * C33089) *
              C32715 * C32774 * C32760 * C111 +
          (C10199 * C33089 + (C10632 + C10631 + C10630) * C33077 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (0.5 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C32774 * C235 -
          ((C11238 + C11239 + C11240) * C33057 +
           (C11237 + C11236 + C11235) * C33077 +
           (C11234 + C11233 + C11232) * C33089) *
              C32715 * C32774 * C236 +
          (C11242 * C33089 + (C11240 + C11239 + C11238) * C33077 +
           (C10131 * C967 + C11211 + C11211 + C10128 * C979 + C10133 * C6333 +
            C11212 + C11212 + C10129 * C6339 + C10135 * C6335 + C11213 +
            C11213 + C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C341 -
          ((C10135 * C7001 + C11353 + C11353 + C33060 * C7007 + C10133 * C1127 +
            C11354 + C11354 + C10129 * C1145 + C10131 * C1125 + C11355 +
            C11355 + C10128 * C1143) *
               C33057 +
           (C10135 * C2625 + C10963 + C10963 + C33060 * C2631 + C10133 * C1126 +
            C10962 + C10962 + C10129 * C1144 + C10131 * C692 + C10961 + C10961 +
            C10128 * C702) *
               C33077 +
           (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
            C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
            C10128 * C368) *
               C33089) *
              C32715 * C342 +
          ((C10131 * C349 + C10448 + C10448 + C10128 * C369 + C10133 * C2081 +
            C10449 + C10449 + C10129 * C2093 + C10135 * C2082 + C10450 +
            C10450 + C33060 * C2094) *
               C33089 +
           (C10131 * C1126 + C11356 + C11356 + C10128 * C1144 + C10133 * C2625 +
            C11357 + C11357 + C10129 * C2631 + C10135 * C7002 + C11358 +
            C11358 + C33060 * C7008) *
               C33077 +
           (C10131 * C1127 + C11359 + C11359 + C10128 * C1145 + C10133 * C7001 +
            C11360 + C11360 + C10129 * C7007 + C10135 * C7003 + C11361 +
            C11361 + C33060 * C7009) *
               C33057) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
           C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
           C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
           C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
              C32798 * C32715 * C32774 * C32760 * C110 -
          (C11928 * C2083 + C11936 + C11936 + C11919 * C2095 + C11926 * C2080 +
           C11937 + C11937 + C11918 * C2092 + C11924 * C350 + C11938 + C11938 +
           C11917 * C370 + C11922 * C347 + C11939 + C11939 + C11916 * C367 +
           C11920 * C116 + C11940 + C11940 + C11915 * C130) *
              C32798 * C32715 * C32774 * C32760 * C111 +
          (C11920 * C117 + C11941 + C11941 + C11915 * C131 + C11922 * C346 +
           C11942 + C11942 + C11916 * C366 + C11924 * C351 + C11943 + C11943 +
           C11917 * C371 + C11926 * C2079 + C11944 + C11944 + C11918 * C2091 +
           C11928 * C2084 + C11945 + C11945 + C11919 * C2096) *
              C32798 * C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::pow(Pi, 2.5) *
         ((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
           C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
           C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
           C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
              C32798 * C32715 * C32774 * C235 -
          (C11928 * C7002 + C12008 + C12008 + C11919 * C7008 + C11926 * C2625 +
           C12009 + C12009 + C11918 * C2631 + C11924 * C1126 + C12010 + C12010 +
           C11917 * C1144 + C11922 * C692 + C12011 + C12011 + C11916 * C702 +
           C11920 * C243 + C12012 + C12012 + C11915 * C263) *
              C32798 * C32715 * C32774 * C236 +
          (C11920 * C244 + C12013 + C12013 + C11915 * C264 + C11922 * C1125 +
           C12014 + C12014 + C11916 * C1143 + C11924 * C1127 + C12015 + C12015 +
           C11917 * C1145 + C11926 * C7001 + C12016 + C12016 + C11918 * C7007 +
           C11928 * C7003 + C12017 + C12017 + C11919 * C7009) *
              C32798 * C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (2 * std::pow(Pi, 2.5) *
         ((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
           C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
           C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
           C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
              C32798 * C32715 * C341 -
          (C11928 * C12079 + C12086 + C12086 + C11919 * C12083 +
           C11926 * C2082 + C12087 + C12087 + C11918 * C2094 + C11924 * C2081 +
           C12088 + C12088 + C11917 * C2093 + C11922 * C349 + C12089 + C12089 +
           C11916 * C369 + C11920 * C348 + C12090 + C12090 + C11915 * C368) *
              C32798 * C32715 * C342 +
          (C11920 * C349 + C12091 + C12091 + C11915 * C369 + C11922 * C2081 +
           C12092 + C12092 + C11916 * C2093 + C11924 * C2082 + C12093 + C12093 +
           C11917 * C2094 + C11926 * C12079 + C12094 + C12094 +
           C11918 * C12083 + C11928 * C12080 + C12095 + C12095 +
           C11919 * C12084) *
              C32798 * C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[63] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
                C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                   C580 -
               (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
                (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
                   C581) *
                  C32760 * C468 +
              ((C610 * C103 + C609 * C104 + C608 * C105 + C607 * C106 +
                (C113 * C582 + C594 + C594 + C32815 * C584) * C32798 * C107) *
                   C581 -
               (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
                C169 * C103) *
                   C580) *
                  C32760 * C469) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
                 C1009 * C33077 + C1010 * C33057) *
                    C825 +
                (C829 + C830 + C851) * C826 + C854 * C33048) *
                   C580 -
               ((C1488 + C1489 + C1469) * C33048 +
                (C1490 + C1491 + C1474) * C826 +
                ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
                 (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
                 (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                    C825) *
                   C581) *
                  C32760 * C468 +
              (((C1474 + C1491 + C1490) * C825 +
                (C1469 + C1489 + C1488) * C826 +
                (C604 * C33089 +
                 (C113 * C695 + C711 + C711 + C32815 * C705) * C33077 +
                 (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                    C33048) *
                   C581 -
               ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
                (C851 + C830 + C829) * C825) *
                   C580) *
                  C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C580 -
           ((C2474 + C2475 + C2476) * C32798 * C33048 +
            (C2477 + C2478 + C2479) * C32798 * C826 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C32798 * C825) *
               C581) *
              C32760 * C468 +
          (((C2479 + C2478 + C2477) * C32798 * C825 +
            (C2476 + C2475 + C2474) * C32798 * C826 +
            (C1772 * C345 + C2459 + C2459 + C33090 * C365 + C1774 * C352 +
             C2460 + C2460 + C33079 * C372 + C1776 * C2443 + C2461 + C2461 +
             C33060 * C2445) *
                C32798 * C33048) *
               C581 -
           ((C1836 + C1837 + C1838) * C32798 * C33048 +
            (C1835 + C1834 + C1833) * C32798 * C826 +
            (C1832 + C1831 + C1830) * C32798 * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C32760 * C468 +
          (((C5977 + C5976 + C5975) * C33086 +
            (C5974 + C5973 + C5972) * C33073 +
            (C604 * C5436 + C3230 * C5437 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
            (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
            C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C32760 * C468 +
          ((C606 * C6185 + C1487 * C6186 + C1486 * C6187 +
            (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C6188 +
            (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C6189) *
               C32715 * C581 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C580 -
           ((C1776 * C7001 + C7011 + C7011 + C33060 * C7007 + C1774 * C1127 +
             C7012 + C7012 + C33079 * C1145 + C1772 * C1125 + C7013 + C7013 +
             C33090 * C1143) *
                C33057 +
            (C1776 * C2625 + C2637 + C2637 + C33060 * C2631 + C1774 * C1126 +
             C2636 + C2636 + C33079 * C1144 + C1772 * C692 + C2635 + C2635 +
             C33090 * C702) *
                C5437 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C5436) *
               C32715 * C581) *
              C32760 * C468 +
          (((C2479 + C2478 + C2477) * C5436 +
            (C1772 * C693 + C2638 + C2638 + C33090 * C703 + C1774 * C1128 +
             C2639 + C2639 + C33079 * C1146 + C1776 * C2626 + C2640 + C2640 +
             C33060 * C2632) *
                C5437 +
            (C1772 * C1124 + C7336 + C7336 + C33090 * C1142 + C1774 * C1129 +
             C7337 + C7337 + C33079 * C1147 + C1776 * C7332 + C7338 + C7338 +
             C33060 * C7334) *
                C33057) *
               C32715 * C581 -
           ((C7186 + C7185 + C7184) * C33057 + (C2295 + C2296 + C2297) * C5437 +
            (C1832 + C1831 + C1830) * C5436) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C580 -
           ((C10809 + C10810 + C10811) * C32798 * C33048 +
            (C10812 + C10813 + C10814) * C32798 * C33073 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C32798 * C33086) *
               C581) *
              C32760 * C468 +
          (((C10814 + C10813 + C10812) * C32798 * C33086 +
            (C10811 + C10810 + C10809) * C32798 * C33073 +
            (C10131 * C345 + C10794 + C10794 + C10128 * C365 + C10133 * C352 +
             C10795 + C10795 + C10129 * C372 + C10135 * C2443 + C10796 +
             C10796 + C33060 * C2445) *
                C32798 * C33048) *
               C581 -
           ((C10195 + C10196 + C10197) * C32798 * C33048 +
            (C10194 + C10193 + C10192) * C32798 * C33073 +
            (C10191 + C10190 + C10189) * C32798 * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C580 -
           ((C10135 * C7001 + C11353 + C11353 + C33060 * C7007 +
             C10133 * C1127 + C11354 + C11354 + C10129 * C1145 +
             C10131 * C1125 + C11355 + C11355 + C10128 * C1143) *
                C33057 +
            (C10135 * C2625 + C10963 + C10963 + C33060 * C2631 +
             C10133 * C1126 + C10962 + C10962 + C10129 * C1144 + C10131 * C692 +
             C10961 + C10961 + C10128 * C702) *
                C33077 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C33089) *
               C32715 * C581) *
              C32760 * C468 +
          (((C10814 + C10813 + C10812) * C33089 +
            (C10131 * C693 + C10964 + C10964 + C10128 * C703 + C10133 * C1128 +
             C10965 + C10965 + C10129 * C1146 + C10135 * C2626 + C10966 +
             C10966 + C33060 * C2632) *
                C33077 +
            (C10131 * C1124 + C11672 + C11672 + C10128 * C1142 +
             C10133 * C1129 + C11673 + C11673 + C10129 * C1147 +
             C10135 * C7332 + C11674 + C11674 + C33060 * C7334) *
                C33057) *
               C32715 * C581 -
           ((C11525 + C11524 + C11523) * C33057 +
            (C10633 + C10634 + C10635) * C33077 +
            (C10191 + C10190 + C10189) * C33089) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
            C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
            C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
            C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
               C32798 * C32715 * C580 -
           (C11928 * C12079 + C12086 + C12086 + C11919 * C12083 +
            C11926 * C2082 + C12087 + C12087 + C11918 * C2094 + C11924 * C2081 +
            C12088 + C12088 + C11917 * C2093 + C11922 * C349 + C12089 + C12089 +
            C11916 * C369 + C11920 * C348 + C12090 + C12090 + C11915 * C368) *
               C32798 * C32715 * C581) *
              C32760 * C468 +
          ((C11920 * C347 + C12271 + C12271 + C11915 * C367 + C11922 * C350 +
            C12272 + C12272 + C11916 * C370 + C11924 * C2080 + C12273 + C12273 +
            C11917 * C2092 + C11926 * C2083 + C12274 + C12274 + C11918 * C2095 +
            C11928 * C12267 + C12275 + C12275 + C11919 * C12269) *
               C32798 * C32715 * C581 -
           (C11928 * C2083 + C11936 + C11936 + C11919 * C2095 + C11926 * C2080 +
            C11937 + C11937 + C11918 * C2092 + C11924 * C350 + C11938 + C11938 +
            C11917 * C370 + C11922 * C347 + C11939 + C11939 + C11916 * C367 +
            C11920 * C116 + C11940 + C11940 + C11915 * C130) *
               C32798 * C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[64] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C32760 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C32774 * C32760 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C235 -
          ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
           (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
           (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
           (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
           (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
              C32774 * C236 +
          ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
           (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
           (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
           (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
           (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C32760 * C110 -
          ((C1836 + C1837 + C1838) * C32798 * C33048 +
           (C1835 + C1834 + C1833) * C32798 * C826 +
           (C1832 + C1831 + C1830) * C32798 * C825) *
              C32774 * C32760 * C111 +
          (C1841 * C825 + (C1838 + C1837 + C1836) * C32798 * C826 +
           (C1772 * C119 + C1809 + C1809 + C33090 * C133 + C1774 * C344 +
            C1810 + C1810 + C33079 * C364 + C1776 * C353 + C1811 + C1811 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C235 -
          ((C1776 * C1130 + C1952 + C1952 + C33060 * C1148 + C1774 * C694 +
            C1953 + C1953 + C33079 * C704 + C1772 * C241 + C1954 + C1954 +
            C33090 * C261) *
               C32798 * C33048 +
           (C1776 * C1128 + C1955 + C1955 + C33060 * C1146 + C1774 * C693 +
            C1956 + C1956 + C33079 * C703 + C1772 * C242 + C1957 + C1957 +
            C33090 * C262) *
               C32798 * C826 +
           (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
            C33090 * C263) *
               C32798 * C825) *
              C32774 * C236 +
          ((C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C32798 * C825 +
           (C1772 * C245 + C1964 + C1964 + C33090 * C265 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1776 * C1129 + C1966 + C1966 +
            C33060 * C1147) *
               C32798 * C826 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C1772 * C243 + C1960 + C1960 + C33090 * C263 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1776 * C1126 + C1958 + C1958 +
            C33060 * C1144) *
               C5437 +
           (C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C1776 * C1129 + C1966 + C1966 + C33060 * C1147 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1772 * C245 + C1964 + C1964 +
            C33090 * C265) *
               C33057 +
           (C2295 + C2296 + C2297) * C5437 + (C1832 + C1831 + C1830) * C5436) *
              C32715 * C32774 * C32760 * C111 +
          (C1840 * C5436 + (C2294 + C2293 + C2292) * C5437 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C32774 * C235 -
          ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
           (C6883 + C6882 + C6881) * C5436) *
              C32715 * C32774 * C236 +
          (C6891 * C5436 + (C6889 + C6888 + C6887) * C5437 +
           (C1772 * C967 + C6860 + C6860 + C33090 * C979 + C1774 * C6333 +
            C6861 + C6861 + C33079 * C6339 + C1776 * C6335 + C6862 + C6862 +
            C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C32760 * C110 -
          ((C10195 + C10196 + C10197) * C32798 * C33048 +
           (C10194 + C10193 + C10192) * C32798 * C33073 +
           (C10191 + C10190 + C10189) * C32798 * C33086) *
              C32774 * C32760 * C111 +
          (C10200 * C33086 + (C10197 + C10196 + C10195) * C32798 * C33073 +
           (C10131 * C119 + C10168 + C10168 + C10128 * C133 + C10133 * C344 +
            C10169 + C10169 + C10129 * C364 + C10135 * C353 + C10170 + C10170 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C235 -
          ((C10135 * C1130 + C10311 + C10311 + C33060 * C1148 + C10133 * C694 +
            C10312 + C10312 + C10129 * C704 + C10131 * C241 + C10313 + C10313 +
            C10128 * C261) *
               C32798 * C33048 +
           (C10135 * C1128 + C10314 + C10314 + C33060 * C1146 + C10133 * C693 +
            C10315 + C10315 + C10129 * C703 + C10131 * C242 + C10316 + C10316 +
            C10128 * C262) *
               C32798 * C33073 +
           (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
            C10128 * C263) *
               C32798 * C33086) *
              C32774 * C236 +
          ((C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C32798 * C33086 +
           (C10131 * C245 + C10323 + C10323 + C10128 * C265 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10135 * C1129 + C10325 +
            C10325 + C33060 * C1147) *
               C32798 * C33073 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C10131 * C243 + C10319 + C10319 + C10128 * C263 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10135 * C1126 + C10317 + C10317 +
            C33060 * C1144) *
               C33077 +
           (C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C10135 * C1129 + C10325 + C10325 + C33060 * C1147 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10131 * C245 + C10323 + C10323 +
            C10128 * C265) *
               C33057 +
           (C10633 + C10634 + C10635) * C33077 +
           (C10191 + C10190 + C10189) * C33089) *
              C32715 * C32774 * C32760 * C111 +
          (C10199 * C33089 + (C10632 + C10631 + C10630) * C33077 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C32774 * C235 -
          ((C11238 + C11239 + C11240) * C33057 +
           (C11237 + C11236 + C11235) * C33077 +
           (C11234 + C11233 + C11232) * C33089) *
              C32715 * C32774 * C236 +
          (C11242 * C33089 + (C11240 + C11239 + C11238) * C33077 +
           (C10131 * C967 + C11211 + C11211 + C10128 * C979 + C10133 * C6333 +
            C11212 + C11212 + C10129 * C6339 + C10135 * C6335 + C11213 +
            C11213 + C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
           C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
           C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
           C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
              C32798 * C32715 * C32774 * C32760 * C110 -
          (C11928 * C2083 + C11936 + C11936 + C11919 * C2095 + C11926 * C2080 +
           C11937 + C11937 + C11918 * C2092 + C11924 * C350 + C11938 + C11938 +
           C11917 * C370 + C11922 * C347 + C11939 + C11939 + C11916 * C367 +
           C11920 * C116 + C11940 + C11940 + C11915 * C130) *
              C32798 * C32715 * C32774 * C32760 * C111 +
          (C11920 * C117 + C11941 + C11941 + C11915 * C131 + C11922 * C346 +
           C11942 + C11942 + C11916 * C366 + C11924 * C351 + C11943 + C11943 +
           C11917 * C371 + C11926 * C2079 + C11944 + C11944 + C11918 * C2091 +
           C11928 * C2084 + C11945 + C11945 + C11919 * C2096) *
              C32798 * C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((C11920 * C115 + C11931 + C11931 + C11915 * C129 + C11922 * C348 +
           C11932 + C11932 + C11916 * C368 + C11924 * C349 + C11933 + C11933 +
           C11917 * C369 + C11926 * C2081 + C11934 + C11934 + C11918 * C2093 +
           C11928 * C2082 + C11935 + C11935 + C11919 * C2094) *
              C32798 * C32715 * C32774 * C235 -
          (C11928 * C7002 + C12008 + C12008 + C11919 * C7008 + C11926 * C2625 +
           C12009 + C12009 + C11918 * C2631 + C11924 * C1126 + C12010 + C12010 +
           C11917 * C1144 + C11922 * C692 + C12011 + C12011 + C11916 * C702 +
           C11920 * C243 + C12012 + C12012 + C11915 * C263) *
              C32798 * C32715 * C32774 * C236 +
          (C11920 * C244 + C12013 + C12013 + C11915 * C264 + C11922 * C1125 +
           C12014 + C12014 + C11916 * C1143 + C11924 * C1127 + C12015 + C12015 +
           C11917 * C1145 + C11926 * C7001 + C12016 + C12016 + C11918 * C7007 +
           C11928 * C7003 + C12017 + C12017 + C11919 * C7009) *
              C32798 * C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[65] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C32774 * C466 -
           (((C8547 + C8548) * C33057 + C8895 * C5437 + C4902 * C5436) *
                C32725 +
            ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
             (C4547 + C4546) * C5436) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C4900 * C5436 + C8526 * C5437 + (C8548 + C8547) * C33057) *
                C33007 +
            (C4359 * C5436 + (C4549 + C4548) * C5437 +
             (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
              C4529 + C4529 + C32902 * C1645) *
                 C33057) *
                C32725) *
               C32774 * C467 -
           (((C4548 + C4549) * C33057 + C4901 * C5437 +
             (C3513 + C3512) * C5436) *
                C32725 +
            (C8895 * C33057 + C4902 * C5437 + (C3511 + C3510) * C5436) *
                C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C32774 * C466 -
           ((C3906 + C3907) * C32798 * C33026 +
            (C3908 + C3909) * C32798 * C2745 +
            (C3910 + C3911) * C32798 * C2744 +
            (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
             C3627 + C3627 + C33027 * C263) *
                C32798 * C2743) *
               C32774 * C467) *
              C468 +
          (((C3911 + C3910) * C32798 * C2743 +
            (C3909 + C3908) * C32798 * C2744 +
            (C3907 + C3906) * C32798 * C2745 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32798 * C33026) *
               C32774 * C467 -
           ((C3516 + C3517) * C32798 * C33026 +
            (C3515 + C3514) * C32798 * C2745 +
            (C3513 + C3512) * C32798 * C2744 +
            (C3511 + C3510) * C32798 * C2743) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C32798 * C33007 +
            (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
               C32774 * C466 -
           ((C13952 + C13953 + C13954 + C13955) * C32798 * C32725 +
            (C13515 * C2625 + C13676 + C13676 + C33041 * C2631 +
             C13513 * C1126 + C13677 + C13677 + C13507 * C1144 + C13511 * C692 +
             C13678 + C13678 + C13506 * C702 + C13509 * C243 + C13679 + C13679 +
             C13505 * C263) *
                C32798 * C33007) *
               C32774 * C467) *
              C468 +
          (((C13955 + C13954 + C13953 + C13952) * C32798 * C33007 +
            (C13509 * C241 + C13940 + C13940 + C13505 * C261 + C13511 * C694 +
             C13941 + C13941 + C13506 * C704 + C13513 * C1130 + C13942 +
             C13942 + C13507 * C1148 + C13515 * C2627 + C13943 + C13943 +
             C33041 * C2633) *
                C32798 * C32725) *
               C32774 * C467 -
           ((C13570 + C13571 + C13572 + C13573) * C32798 * C32725 +
            (C13569 + C13568 + C13567 + C13566) * C32798 * C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[66] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C33057 + (C5115 + C5116) * C5437 +
             (C4072 + C4073) * C5436) *
                C32725 +
            ((C9306 + C9307) * C33057 + (C5325 + C5326) * C5437 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C5436) *
                C33007) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C5436 + (C9307 + C9306) * C5437 +
             (C3461 * C1637 + C9298 + C9298 + C33027 * C1643 + C3463 * C6334 +
              C9299 + C9299 + C32902 * C6340) *
                 C33057) *
                C33007 +
            ((C5116 + C5115) * C5436 + (C9099 + C9098) * C5437 +
             (C3461 * C1638 + C9300 + C9300 + C33027 * C1644 + C3463 * C7165 +
              C9301 + C9301 + C32902 * C7167) *
                 C33057) *
                C32725) *
               C581 -
           (((C8547 + C8548) * C33057 + C8895 * C5437 + C4902 * C5436) *
                C32725 +
            ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
             (C4547 + C4546) * C5436) *
                C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C580 -
           ((C4068 + C4069) * C32798 * C33026 +
            (C4070 + C4071) * C32798 * C2745 +
            (C4072 + C4073) * C32798 * C2744 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C32798 * C2743) *
               C581) *
              C466 +
          (((C3461 * C692 + C4204 + C4204 + C33027 * C702 + C3463 * C1126 +
             C4205 + C4205 + C32902 * C1144) *
                C32798 * C2743 +
            (C3461 * C693 + C4206 + C4206 + C33027 * C703 + C3463 * C1128 +
             C4207 + C4207 + C32902 * C1146) *
                C32798 * C2744 +
            (C3461 * C694 + C4208 + C4208 + C33027 * C704 + C3463 * C1130 +
             C4209 + C4209 + C32902 * C1148) *
                C32798 * C2745 +
            (C3461 * C695 + C4210 + C4210 + C33027 * C705 + C3463 * C2261 +
             C4211 + C4211 + C32902 * C2263) *
                C32798 * C33026) *
               C581 -
           ((C3906 + C3907) * C32798 * C33026 +
            (C3908 + C3909) * C32798 * C2745 +
            (C3910 + C3911) * C32798 * C2744 +
            (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
             C3627 + C3627 + C33027 * C263) *
                C32798 * C2743) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C32798 * C33007 +
            (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
               C580 -
           ((C14106 + C14107 + C14108 + C14109) * C32798 * C32725 +
            (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 +
             C13513 * C2081 + C13791 + C13791 + C13507 * C2093 + C13511 * C349 +
             C13792 + C13792 + C13506 * C369 + C13509 * C348 + C13793 + C13793 +
             C13505 * C368) *
                C32798 * C33007) *
               C581) *
              C466 +
          (((C13509 * C692 + C14240 + C14240 + C13505 * C702 + C13511 * C1126 +
             C14241 + C14241 + C13506 * C1144 + C13513 * C2625 + C14242 +
             C14242 + C13507 * C2631 + C13515 * C7002 + C14243 + C14243 +
             C33041 * C7008) *
                C32798 * C33007 +
            (C13509 * C693 + C14244 + C14244 + C13505 * C703 + C13511 * C1128 +
             C14245 + C14245 + C13506 * C1146 + C13513 * C2626 + C14246 +
             C14246 + C13507 * C2632 + C13515 * C12177 + C14247 + C14247 +
             C33041 * C12179) *
                C32798 * C32725) *
               C581 -
           ((C13952 + C13953 + C13954 + C13955) * C32798 * C32725 +
            (C13515 * C2625 + C13676 + C13676 + C33041 * C2631 +
             C13513 * C1126 + C13677 + C13677 + C13507 * C1144 + C13511 * C692 +
             C13678 + C13678 + C13506 * C702 + C13509 * C243 + C13679 + C13679 +
             C13505 * C263) *
                C32798 * C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[67] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
                C3467 + C3467 + C32902 * C368) *
                   C32798 * C2743 +
               (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 +
               C3521 * C33026) *
                  C32774 * C32760 * C110 -
              ((C3516 + C3517) * C32798 * C33026 +
               (C3515 + C3514) * C32798 * C2745 +
               (C3513 + C3512) * C32798 * C2744 +
               (C3511 + C3510) * C32798 * C2743) *
                  C32774 * C32760 * C111 +
              (C3520 * C2743 + C3521 * C2744 +
               (C3517 + C3516) * C32798 * C2745 +
               (C3461 * C120 + C3492 + C3492 + C33027 * C134 + C3463 * C582 +
                C3493 + C3493 + C32902 * C584) *
                   C32798 * C33026) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
                C3467 + C3467 + C32902 * C368) *
                   C32798 * C2743 +
               (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 +
               C3521 * C33026) *
                  C32774 * C235 -
              ((C3463 * C695 + C3620 + C3620 + C32902 * C705 + C3461 * C240 +
                C3621 + C3621 + C33027 * C260) *
                   C32798 * C33026 +
               (C3463 * C694 + C3622 + C3622 + C32902 * C704 + C3461 * C241 +
                C3623 + C3623 + C33027 * C261) *
                   C32798 * C2745 +
               (C3463 * C693 + C3624 + C3624 + C32902 * C703 + C3461 * C242 +
                C3625 + C3625 + C33027 * C262) *
                   C32798 * C2744 +
               (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
                C3627 + C3627 + C33027 * C263) *
                   C32798 * C2743) *
                  C32774 * C236 +
              ((C3461 * C244 + C3628 + C3628 + C33027 * C264 + C3463 * C1125 +
                C3629 + C3629 + C32902 * C1143) *
                   C32798 * C2743 +
               (C3461 * C245 + C3630 + C3630 + C33027 * C265 + C3463 * C1124 +
                C3631 + C3631 + C32902 * C1142) *
                   C32798 * C2744 +
               (C3461 * C246 + C3632 + C3632 + C33027 * C266 + C3463 * C1123 +
                C3633 + C3633 + C32902 * C1141) *
                   C32798 * C2745 +
               (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
                C3635 + C3635 + C32902 * C1463) *
                   C32798 * C33026) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C341 -
          ((C3463 * C352 + C3734 + C3734 + C32902 * C372 + C3461 * C345 +
            C3735 + C3735 + C33027 * C365) *
               C32798 * C33026 +
           (C3463 * C351 + C3736 + C3736 + C32902 * C371 + C3461 * C346 +
            C3737 + C3737 + C33027 * C366) *
               C32798 * C2745 +
           (C3463 * C350 + C3738 + C3738 + C32902 * C370 + C3461 * C347 +
            C3739 + C3739 + C33027 * C367) *
               C32798 * C2744 +
           (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
            C3741 + C3741 + C33027 * C368) *
               C32798 * C2743) *
              C342 +
          ((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
            C3743 + C3743 + C32902 * C2093) *
               C32798 * C2743 +
           (C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
            C3745 + C3745 + C32902 * C2092) *
               C32798 * C2744 +
           (C3461 * C351 + C3746 + C3746 + C33027 * C371 + C3463 * C2079 +
            C3747 + C3747 + C32902 * C2091) *
               C32798 * C2745 +
           (C3461 * C352 + C3748 + C3748 + C33027 * C372 + C3463 * C2443 +
            C3749 + C3749 + C32902 * C2445) *
               C32798 * C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + (C4553 + C4552) * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 +
            (C4551 + C4550) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C4548 + C4549) * C33057 + C4901 * C5437 +
            (C3513 + C3512) * C5436) *
               C32725 +
           ((C4550 + C4551) * C33057 + C4902 * C5437 +
            (C3511 + C3510) * C5436) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C3518 * C5436 + C4359 * C5437 + (C4549 + C4548) * C33057) * C33007 +
           (C3519 * C5436 + (C3907 + C3906) * C5437 +
            (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
             C3635 + C3635 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C8547 + C8548) * C33057 + (C4550 + C4551) * C5437 +
            C4902 * C5436) *
               C32725 +
           ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
            (C4547 + C4546) * C5436) *
               C33007) *
              C32774 * C236 +
          ((C8525 * C5436 + (C8550 + C8549) * C5437 +
            (C3461 * C967 + C8535 + C8535 + C33027 * C979 + C3463 * C6333 +
             C8536 + C8536 + C32902 * C6339) *
                C33057) *
               C33007 +
           (C8526 * C5436 + (C8548 + C8547) * C5437 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C341 -
          (((C3463 * C1129 + C5318 + C5318 + C32902 * C1147 + C3461 * C1124 +
             C5317 + C5317 + C33027 * C1142) *
                C33057 +
            (C5115 + C5116) * C5437 + (C4072 + C4073) * C5436) *
               C32725 +
           ((C3463 * C1127 + C5316 + C5316 + C32902 * C1145 + C3461 * C1125 +
             C5315 + C5315 + C33027 * C1143) *
                C33057 +
            (C5325 + C5326) * C5437 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C5436) *
               C33007) *
              C342 +
          (((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
             C3743 + C3743 + C32902 * C2093) *
                C5436 +
            (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
             C4701 + C4701 + C32902 * C2631) *
                C5437 +
            (C3461 * C1127 + C8697 + C8697 + C33027 * C1145 + C3463 * C7001 +
             C8698 + C8698 + C32902 * C7007) *
                C33057) *
               C33007 +
           ((C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
             C3745 + C3745 + C32902 * C2092) *
                C5436 +
            (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 + C3463 * C2626 +
             C4703 + C4703 + C32902 * C2632) *
                C5437 +
            (C3461 * C1129 + C8699 + C8699 + C33027 * C1147 + C3463 * C7332 +
             C8700 + C8700 + C32902 * C7334) *
                C33057) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C32798 * C33007 +
           (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
              C32774 * C32760 * C110 -
          ((C13570 + C13571 + C13572 + C13573) * C32798 * C32725 +
           (C13569 + C13568 + C13567 + C13566) * C32798 * C33007) *
              C32774 * C32760 * C111 +
          ((C13573 + C13572 + C13571 + C13570) * C32798 * C33007 +
           (C13509 * C118 + C13546 + C13546 + C13505 * C132 + C13511 * C345 +
            C13547 + C13547 + C13506 * C365 + C13513 * C352 + C13548 + C13548 +
            C13507 * C372 + C13515 * C2443 + C13549 + C13549 + C33041 * C2445) *
               C32798 * C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C32798 * C33007 +
           (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
              C32774 * C235 -
          ((C13515 * C2626 + C13672 + C13672 + C33041 * C2632 + C13513 * C1128 +
            C13673 + C13673 + C13507 * C1146 + C13511 * C693 + C13674 + C13674 +
            C13506 * C703 + C13509 * C242 + C13675 + C13675 + C13505 * C262) *
               C32798 * C32725 +
           (C13515 * C2625 + C13676 + C13676 + C33041 * C2631 + C13513 * C1126 +
            C13677 + C13677 + C13507 * C1144 + C13511 * C692 + C13678 + C13678 +
            C13506 * C702 + C13509 * C243 + C13679 + C13679 + C13505 * C263) *
               C32798 * C33007) *
              C32774 * C236 +
          ((C13509 * C244 + C13680 + C13680 + C13505 * C264 + C13511 * C1125 +
            C13681 + C13681 + C13506 * C1143 + C13513 * C1127 + C13682 +
            C13682 + C13507 * C1145 + C13515 * C7001 + C13683 + C13683 +
            C33041 * C7007) *
               C32798 * C33007 +
           (C13509 * C245 + C13684 + C13684 + C13505 * C265 + C13511 * C1124 +
            C13685 + C13685 + C13506 * C1142 + C13513 * C1129 + C13686 +
            C13686 + C13507 * C1147 + C13515 * C7332 + C13687 + C13687 +
            C33041 * C7334) *
               C32798 * C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C32798 * C33007 +
           (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
              C341 -
          ((C13515 * C2083 + C13786 + C13786 + C33041 * C2095 + C13513 * C2080 +
            C13787 + C13787 + C13507 * C2092 + C13511 * C350 + C13788 + C13788 +
            C13506 * C370 + C13509 * C347 + C13789 + C13789 + C13505 * C367) *
               C32798 * C32725 +
           (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 + C13513 * C2081 +
            C13791 + C13791 + C13507 * C2093 + C13511 * C349 + C13792 + C13792 +
            C13506 * C369 + C13509 * C348 + C13793 + C13793 + C13505 * C368) *
               C32798 * C33007) *
              C342 +
          ((C13509 * C349 + C13794 + C13794 + C13505 * C369 + C13511 * C2081 +
            C13795 + C13795 + C13506 * C2093 + C13513 * C2082 + C13796 +
            C13796 + C13507 * C2094 + C13515 * C12079 + C13797 + C13797 +
            C33041 * C12083) *
               C32798 * C33007 +
           (C13509 * C350 + C13798 + C13798 + C13505 * C370 + C13511 * C2080 +
            C13799 + C13799 + C13506 * C2092 + C13513 * C2083 + C13800 +
            C13800 + C13507 * C2095 + C13515 * C12267 + C13801 + C13801 +
            C33041 * C12269) *
               C32798 * C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[68] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C33057 + (C5115 + C5116) * C5437 +
             (C4072 + C4073) * C5436) *
                C32725 +
            ((C3463 * C1127 + C5316 + C5316 + C32902 * C1145 + C3461 * C1125 +
              C5315 + C5315 + C33027 * C1143) *
                 C33057 +
             (C5325 + C5326) * C5437 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C5436) *
                C33007) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C5436 + (C5116 + C5115) * C5437 +
             (C9099 + C9098) * C33057) *
                C33007 +
            ((C4071 + C4070) * C5436 + (C5114 + C5113) * C5437 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C33057) *
                C32725) *
               C581 -
           (((C4548 + C4549) * C33057 + C4901 * C5437 +
             (C3513 + C3512) * C5436) *
                C32725 +
            (C8895 * C33057 + C4902 * C5437 + (C3511 + C3510) * C5436) *
                C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C580 -
           ((C4068 + C4069) * C32798 * C33026 +
            (C4070 + C4071) * C32798 * C2745 +
            (C4072 + C4073) * C32798 * C2744 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C32798 * C2743) *
               C581) *
              C32760 * C468 +
          (((C4073 + C4072) * C32798 * C2743 +
            (C4071 + C4070) * C32798 * C2744 +
            (C4069 + C4068) * C32798 * C2745 +
            (C3461 * C344 + C4054 + C4054 + C33027 * C364 + C3463 * C353 +
             C4055 + C4055 + C32902 * C373) *
                C32798 * C33026) *
               C581 -
           ((C3516 + C3517) * C32798 * C33026 +
            (C3515 + C3514) * C32798 * C2745 +
            (C3513 + C3512) * C32798 * C2744 +
            (C3511 + C3510) * C32798 * C2743) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
             C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
             C13507 * C369 + C13515 * C2081 + C13521 + C13521 +
             C33041 * C2093) *
                C32798 * C33007 +
            (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
               C580 -
           ((C14106 + C14107 + C14108 + C14109) * C32798 * C32725 +
            (C13515 * C2082 + C13790 + C13790 + C33041 * C2094 +
             C13513 * C2081 + C13791 + C13791 + C13507 * C2093 + C13511 * C349 +
             C13792 + C13792 + C13506 * C369 + C13509 * C348 + C13793 + C13793 +
             C13505 * C368) *
                C32798 * C33007) *
               C581) *
              C32760 * C468 +
          (((C14109 + C14108 + C14107 + C14106) * C32798 * C33007 +
            (C13509 * C346 + C14094 + C14094 + C13505 * C366 + C13511 * C351 +
             C14095 + C14095 + C13506 * C371 + C13513 * C2079 + C14096 +
             C14096 + C13507 * C2091 + C13515 * C2084 + C14097 + C14097 +
             C33041 * C2096) *
                C32798 * C32725) *
               C581 -
           ((C13570 + C13571 + C13572 + C13573) * C32798 * C32725 +
            (C13569 + C13568 + C13567 + C13566) * C32798 * C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[69] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C235 -
          ((C3463 * C695 + C3620 + C3620 + C32902 * C705 + C3461 * C240 +
            C3621 + C3621 + C33027 * C260) *
               C32798 * C33026 +
           (C3463 * C694 + C3622 + C3622 + C32902 * C704 + C3461 * C241 +
            C3623 + C3623 + C33027 * C261) *
               C32798 * C2745 +
           (C3463 * C693 + C3624 + C3624 + C32902 * C703 + C3461 * C242 +
            C3625 + C3625 + C33027 * C262) *
               C32798 * C2744 +
           (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
            C3627 + C3627 + C33027 * C263) *
               C32798 * C2743) *
              C32774 * C236 +
          ((C3461 * C244 + C3628 + C3628 + C33027 * C264 + C3463 * C1125 +
            C3629 + C3629 + C32902 * C1143) *
               C32798 * C2743 +
           (C3461 * C245 + C3630 + C3630 + C33027 * C265 + C3463 * C1124 +
            C3631 + C3631 + C32902 * C1142) *
               C32798 * C2744 +
           (C3461 * C246 + C3632 + C3632 + C33027 * C266 + C3463 * C1123 +
            C3633 + C3633 + C32902 * C1141) *
               C32798 * C2745 +
           (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
            C3635 + C3635 + C32902 * C1463) *
               C32798 * C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C32760 * C110 -
          ((C3516 + C3517) * C32798 * C33026 +
           (C3515 + C3514) * C32798 * C2745 + (C3513 + C3512) * C32798 * C2744 +
           (C3511 + C3510) * C32798 * C2743) *
              C32774 * C32760 * C111 +
          (C3520 * C2743 + C3521 * C2744 + (C3517 + C3516) * C32798 * C2745 +
           (C3461 * C120 + C3492 + C3492 + C33027 * C134 + C3463 * C582 +
            C3493 + C3493 + C32902 * C584) *
               C32798 * C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + (C4553 + C4552) * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 +
            (C4551 + C4550) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C4548 + C4549) * C33057 + C4901 * C5437 +
            (C3513 + C3512) * C5436) *
               C32725 +
           ((C4550 + C4551) * C33057 + C4902 * C5437 +
            (C3511 + C3510) * C5436) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C3518 * C5436 + C4359 * C5437 + (C4549 + C4548) * C33057) * C33007 +
           (C3519 * C5436 + (C3907 + C3906) * C5437 +
            (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
             C3635 + C3635 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C8547 + C8548) * C33057 + (C4550 + C4551) * C5437 +
            C4902 * C5436) *
               C32725 +
           ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
            (C4547 + C4546) * C5436) *
               C33007) *
              C32774 * C236 +
          ((C8525 * C5436 + (C8550 + C8549) * C5437 +
            (C3461 * C967 + C8535 + C8535 + C33027 * C979 + C3463 * C6333 +
             C8536 + C8536 + C32902 * C6339) *
                C33057) *
               C33007 +
           (C8526 * C5436 + (C8548 + C8547) * C5437 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C32798 * C33007 +
           (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
              C32774 * C32760 * C110 -
          ((C13570 + C13571 + C13572 + C13573) * C32798 * C32725 +
           (C13569 + C13568 + C13567 + C13566) * C32798 * C33007) *
              C32774 * C32760 * C111 +
          ((C13573 + C13572 + C13571 + C13570) * C32798 * C33007 +
           (C13509 * C118 + C13546 + C13546 + C13505 * C132 + C13511 * C345 +
            C13547 + C13547 + C13506 * C365 + C13513 * C352 + C13548 + C13548 +
            C13507 * C372 + C13515 * C2443 + C13549 + C13549 + C33041 * C2445) *
               C32798 * C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C13509 * C115 + C13518 + C13518 + C13505 * C129 + C13511 * C348 +
            C13519 + C13519 + C13506 * C368 + C13513 * C349 + C13520 + C13520 +
            C13507 * C369 + C13515 * C2081 + C13521 + C13521 + C33041 * C2093) *
               C32798 * C33007 +
           (C13566 + C13567 + C13568 + C13569) * C32798 * C32725) *
              C32774 * C235 -
          ((C13515 * C2626 + C13672 + C13672 + C33041 * C2632 + C13513 * C1128 +
            C13673 + C13673 + C13507 * C1146 + C13511 * C693 + C13674 + C13674 +
            C13506 * C703 + C13509 * C242 + C13675 + C13675 + C13505 * C262) *
               C32798 * C32725 +
           (C13515 * C2625 + C13676 + C13676 + C33041 * C2631 + C13513 * C1126 +
            C13677 + C13677 + C13507 * C1144 + C13511 * C692 + C13678 + C13678 +
            C13506 * C702 + C13509 * C243 + C13679 + C13679 + C13505 * C263) *
               C32798 * C33007) *
              C32774 * C236 +
          ((C13509 * C244 + C13680 + C13680 + C13505 * C264 + C13511 * C1125 +
            C13681 + C13681 + C13506 * C1143 + C13513 * C1127 + C13682 +
            C13682 + C13507 * C1145 + C13515 * C7001 + C13683 + C13683 +
            C33041 * C7007) *
               C32798 * C33007 +
           (C13509 * C245 + C13684 + C13684 + C13505 * C265 + C13511 * C1124 +
            C13685 + C13685 + C13506 * C1142 + C13513 * C1129 + C13686 +
            C13686 + C13507 * C1147 + C13515 * C7332 + C13687 + C13687 +
            C33041 * C7334) *
               C32798 * C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[70] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C32774 * C466 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C32774 * C467) *
              C468 +
          (((C1314 + C1313 + C1312) * C825 + (C1311 + C1310 + C1309) * C826 +
            (C492 * C33089 + C850 * C33077 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C32774 * C466 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C32774 * C467) *
              C468 +
          ((C498 * C103 + C497 * C104 + C496 * C105 + C495 * C106 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32798 * C107) *
               C32774 * C467 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C32774 * C466 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C32774 * C467) *
              C468 +
          (((C5825 + C5824 + C5823) * C33086 +
            (C5822 + C5821 + C5820) * C33073 +
            (C492 * C5436 + C850 * C5437 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C32774 * C466 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C32774 * C467) *
              C468 +
          ((C494 * C6185 + C848 * C6186 + C1012 * C6187 + C6436 * C6188 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C6189) *
               C32715 * C32774 * C467 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C32774 * C466 -
           ((C10630 + C10631 + C10632) * C32798 * C33048 +
            (C10633 + C10634 + C10635) * C32798 * C33073 +
            (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
             C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
             C10128 * C263) *
                C32798 * C33086) *
               C32774 * C467) *
              C468 +
          (((C10635 + C10634 + C10633) * C32798 * C33086 +
            (C10632 + C10631 + C10630) * C32798 * C33073 +
            (C10131 * C240 + C10615 + C10615 + C10128 * C260 + C10133 * C695 +
             C10616 + C10616 + C10129 * C705 + C10135 * C2261 + C10617 +
             C10617 + C33060 * C2263) *
                C32798 * C33048) *
               C32774 * C467 -
           ((C10195 + C10196 + C10197) * C32798 * C33048 +
            (C10194 + C10193 + C10192) * C32798 * C33073 +
            (C10191 + C10190 + C10189) * C32798 * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C32774 * C466 -
           ((C11238 + C11239 + C11240) * C33057 +
            (C11237 + C11236 + C11235) * C33077 +
            (C11234 + C11233 + C11232) * C33089) *
               C32715 * C32774 * C467) *
              C468 +
          (((C10635 + C10634 + C10633) * C33089 +
            (C11523 + C11524 + C11525) * C33077 +
            (C10131 * C965 + C11514 + C11514 + C10128 * C977 + C10133 * C1638 +
             C11515 + C11515 + C10129 * C1644 + C10135 * C7165 + C11516 +
             C11516 + C33060 * C7167) *
                C33057) *
               C32715 * C32774 * C467 -
           ((C11525 + C11524 + C11523) * C33057 +
            (C10633 + C10634 + C10635) * C33077 +
            (C10191 + C10190 + C10189) * C33089) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[71] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            (C1658 * C33057 + C1659 * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C466 +
          (((C1659 * C33089 + C1658 * C33077 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C825 +
            (C1487 * C33089 + C1486 * C33077 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C826 +
            (C1485 * C33089 + C1484 * C33077 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C466 +
          (((C113 * C692 + C708 + C708 + C32815 * C702) * C32798 * C103 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C32798 * C104 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C32798 * C105 +
            (C113 * C695 + C711 + C711 + C32815 * C705) * C32798 * C106 +
            (C113 * C696 + C712 + C712 + C32815 * C706) * C32798 * C107) *
               C581 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C466 +
          (((C1659 * C5436 + C1658 * C5437 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C33086 +
            (C1487 * C5436 + C1486 * C5437 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C33073 +
            (C1485 * C5436 + C1484 * C5437 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           (C6617 * C6189 + C6618 * C6188 + C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C466 +
          ((C1659 * C6185 + C1658 * C6186 + C6618 * C6187 + C6617 * C6188 +
            (C113 * C6604 + C6612 + C6612 + C32815 * C6606) * C6189) *
               C32715 * C581 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C580 -
           ((C10809 + C10810 + C10811) * C32798 * C33048 +
            (C10812 + C10813 + C10814) * C32798 * C33073 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C32798 * C33086) *
               C581) *
              C466 +
          (((C10131 * C692 + C10961 + C10961 + C10128 * C702 + C10133 * C1126 +
             C10962 + C10962 + C10129 * C1144 + C10135 * C2625 + C10963 +
             C10963 + C33060 * C2631) *
                C32798 * C33086 +
            (C10131 * C693 + C10964 + C10964 + C10128 * C703 + C10133 * C1128 +
             C10965 + C10965 + C10129 * C1146 + C10135 * C2626 + C10966 +
             C10966 + C33060 * C2632) *
                C32798 * C33073 +
            (C10131 * C694 + C10967 + C10967 + C10128 * C704 + C10133 * C1130 +
             C10968 + C10968 + C10129 * C1148 + C10135 * C2627 + C10969 +
             C10969 + C33060 * C2633) *
                C32798 * C33048) *
               C581 -
           ((C10630 + C10631 + C10632) * C32798 * C33048 +
            (C10633 + C10634 + C10635) * C32798 * C33073 +
            (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
             C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
             C10128 * C263) *
                C32798 * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C580 -
           ((C11848 + C11849 + C11850) * C33057 +
            (C11851 + C11852 + C11853) * C33077 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C33089) *
               C32715 * C581) *
              C466 +
          (((C11853 + C11852 + C11851) * C33089 +
            (C11850 + C11849 + C11848) * C33077 +
            (C10131 * C1637 + C11833 + C11833 + C10128 * C1643 +
             C10133 * C6334 + C11834 + C11834 + C10129 * C6340 +
             C10135 * C7484 + C11835 + C11835 + C33060 * C7486) *
                C33057) *
               C32715 * C581 -
           ((C11238 + C11239 + C11240) * C33057 +
            (C11237 + C11236 + C11235) * C33077 +
            (C11234 + C11233 + C11232) * C33089) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[72] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C32760 * C110 -
              (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
               C169 * C103) *
                  C32774 * C32760 * C111 +
              (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
               (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C235 -
              ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
               (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
               (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
               (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
               (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
                  C32774 * C236 +
              ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
               (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
               (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
               (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
               (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C341 -
          ((C113 * C344 + C375 + C375 + C32815 * C364) * C32798 * C107 +
           (C113 * C345 + C376 + C376 + C32815 * C365) * C32798 * C106 +
           (C113 * C346 + C377 + C377 + C32815 * C366) * C32798 * C105 +
           (C113 * C347 + C378 + C378 + C32815 * C367) * C32798 * C104 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
              C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C32798 * C103 +
           (C113 * C350 + C381 + C381 + C32815 * C370) * C32798 * C104 +
           (C113 * C351 + C382 + C382 + C32815 * C371) * C32798 * C105 +
           (C113 * C352 + C383 + C383 + C32815 * C372) * C32798 * C106 +
           (C113 * C353 + C384 + C384 + C32815 * C373) * C32798 * C107) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C341 -
          (((C113 * C1123 + C1151 + C1151 + C32815 * C1141) * C33057 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C33077 +
            C605 * C33089) *
               C33048 +
           ((C113 * C1124 + C1152 + C1152 + C32815 * C1142) * C33057 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C33077 +
            C606 * C33089) *
               C826 +
           ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
            (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
               C825) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33089 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33077 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C825 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33089 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33077 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C826 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C33089 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C33077 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C341 -
          ((C1484 * C33057 + C1485 * C5437 + C605 * C5436) * C33048 +
           (C1486 * C33057 + C1487 * C5437 + C606 * C5436) * C33073 +
           (C1658 * C33057 + C1659 * C5437 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
               C33086) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C5436 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C5437 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C33086 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C5436 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C5437 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C33073 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C5436 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C5437 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C341 -
          ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
           (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
           C1658 * C6187 + C1659 * C6186 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
              C32715 * C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C6185 +
           (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C6186 +
           (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C6187 +
           (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C6188 +
           (C113 * C6335 + C6345 + C6345 + C32815 * C6341) * C6189) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C32760 * C110 -
          ((C10195 + C10196 + C10197) * C32798 * C33048 +
           (C10194 + C10193 + C10192) * C32798 * C33073 +
           (C10191 + C10190 + C10189) * C32798 * C33086) *
              C32774 * C32760 * C111 +
          (C10200 * C33086 + (C10197 + C10196 + C10195) * C32798 * C33073 +
           (C10131 * C119 + C10168 + C10168 + C10128 * C133 + C10133 * C344 +
            C10169 + C10169 + C10129 * C364 + C10135 * C353 + C10170 + C10170 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C235 -
          ((C10135 * C1130 + C10311 + C10311 + C33060 * C1148 + C10133 * C694 +
            C10312 + C10312 + C10129 * C704 + C10131 * C241 + C10313 + C10313 +
            C10128 * C261) *
               C32798 * C33048 +
           (C10135 * C1128 + C10314 + C10314 + C33060 * C1146 + C10133 * C693 +
            C10315 + C10315 + C10129 * C703 + C10131 * C242 + C10316 + C10316 +
            C10128 * C262) *
               C32798 * C33073 +
           (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
            C10128 * C263) *
               C32798 * C33086) *
              C32774 * C236 +
          ((C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C32798 * C33086 +
           (C10131 * C245 + C10323 + C10323 + C10128 * C265 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10135 * C1129 + C10325 +
            C10325 + C33060 * C1147) *
               C32798 * C33073 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C341 -
          ((C10135 * C2079 + C10439 + C10439 + C33060 * C2091 + C10133 * C351 +
            C10440 + C10440 + C10129 * C371 + C10131 * C346 + C10441 + C10441 +
            C10128 * C366) *
               C32798 * C33048 +
           (C10135 * C2080 + C10442 + C10442 + C33060 * C2092 + C10133 * C350 +
            C10443 + C10443 + C10129 * C370 + C10131 * C347 + C10444 + C10444 +
            C10128 * C367) *
               C32798 * C33073 +
           (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
            C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
            C10128 * C368) *
               C32798 * C33086) *
              C342 +
          ((C10131 * C349 + C10448 + C10448 + C10128 * C369 + C10133 * C2081 +
            C10449 + C10449 + C10129 * C2093 + C10135 * C2082 + C10450 +
            C10450 + C33060 * C2094) *
               C32798 * C33086 +
           (C10131 * C350 + C10451 + C10451 + C10128 * C370 + C10133 * C2080 +
            C10452 + C10452 + C10129 * C2092 + C10135 * C2083 + C10453 +
            C10453 + C33060 * C2095) *
               C32798 * C33073 +
           (C10131 * C351 + C10454 + C10454 + C10128 * C371 + C10133 * C2079 +
            C10455 + C10455 + C10129 * C2091 + C10135 * C2084 + C10456 +
            C10456 + C33060 * C2096) *
               C32798 * C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C10131 * C243 + C10319 + C10319 + C10128 * C263 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10135 * C1126 + C10317 + C10317 +
            C33060 * C1144) *
               C33077 +
           (C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C10135 * C1129 + C10325 + C10325 + C33060 * C1147 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10131 * C245 + C10323 + C10323 +
            C10128 * C265) *
               C33057 +
           (C10633 + C10634 + C10635) * C33077 +
           (C10191 + C10190 + C10189) * C33089) *
              C32715 * C32774 * C32760 * C111 +
          (C10199 * C33089 + (C10632 + C10631 + C10630) * C33077 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C32774 * C235 -
          ((C11238 + C11239 + C11240) * C33057 +
           (C11237 + C11236 + C11235) * C33077 +
           (C11234 + C11233 + C11232) * C33089) *
              C32715 * C32774 * C236 +
          (C11242 * C33089 + (C11240 + C11239 + C11238) * C33077 +
           (C10131 * C967 + C11211 + C11211 + C10128 * C979 + C10133 * C6333 +
            C11212 + C11212 + C10129 * C6339 + C10135 * C6335 + C11213 +
            C11213 + C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C341 -
          ((C10135 * C7001 + C11353 + C11353 + C33060 * C7007 + C10133 * C1127 +
            C11354 + C11354 + C10129 * C1145 + C10131 * C1125 + C11355 +
            C11355 + C10128 * C1143) *
               C33057 +
           (C10135 * C2625 + C10963 + C10963 + C33060 * C2631 + C10133 * C1126 +
            C10962 + C10962 + C10129 * C1144 + C10131 * C692 + C10961 + C10961 +
            C10128 * C702) *
               C33077 +
           (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
            C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
            C10128 * C368) *
               C33089) *
              C32715 * C342 +
          ((C10131 * C349 + C10448 + C10448 + C10128 * C369 + C10133 * C2081 +
            C10449 + C10449 + C10129 * C2093 + C10135 * C2082 + C10450 +
            C10450 + C33060 * C2094) *
               C33089 +
           (C10131 * C1126 + C11356 + C11356 + C10128 * C1144 + C10133 * C2625 +
            C11357 + C11357 + C10129 * C2631 + C10135 * C7002 + C11358 +
            C11358 + C33060 * C7008) *
               C33077 +
           (C10131 * C1127 + C11359 + C11359 + C10128 * C1145 + C10133 * C7001 +
            C11360 + C11360 + C10129 * C7007 + C10135 * C7003 + C11361 +
            C11361 + C33060 * C7009) *
               C33057) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[73] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
             (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C32760 * C468 +
          (((C1474 + C1491 + C1490) * C825 + (C1469 + C1489 + C1488) * C826 +
            (C604 * C33089 +
             (C113 * C695 + C711 + C711 + C32815 * C705) * C33077 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C32760 * C468 +
          ((C610 * C103 + C609 * C104 + C608 * C105 + C607 * C106 +
            (C113 * C582 + C594 + C594 + C32815 * C584) * C32798 * C107) *
               C581 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C32760 * C468 +
          (((C5977 + C5976 + C5975) * C33086 +
            (C5974 + C5973 + C5972) * C33073 +
            (C604 * C5436 + C3230 * C5437 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
            (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
            C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C32760 * C468 +
          ((C606 * C6185 + C1487 * C6186 + C1486 * C6187 +
            (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C6188 +
            (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C6189) *
               C32715 * C581 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C32798 * C33086 +
            (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
               C580 -
           ((C10809 + C10810 + C10811) * C32798 * C33048 +
            (C10812 + C10813 + C10814) * C32798 * C33073 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C32798 * C33086) *
               C581) *
              C32760 * C468 +
          (((C10814 + C10813 + C10812) * C32798 * C33086 +
            (C10811 + C10810 + C10809) * C32798 * C33073 +
            (C10131 * C345 + C10794 + C10794 + C10128 * C365 + C10133 * C352 +
             C10795 + C10795 + C10129 * C372 + C10135 * C2443 + C10796 +
             C10796 + C33060 * C2445) *
                C32798 * C33048) *
               C581 -
           ((C10195 + C10196 + C10197) * C32798 * C33048 +
            (C10194 + C10193 + C10192) * C32798 * C33073 +
            (C10191 + C10190 + C10189) * C32798 * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
             C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
             C33060 * C369) *
                C33089 +
            (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
               C32715 * C580 -
           ((C10135 * C7001 + C11353 + C11353 + C33060 * C7007 +
             C10133 * C1127 + C11354 + C11354 + C10129 * C1145 +
             C10131 * C1125 + C11355 + C11355 + C10128 * C1143) *
                C33057 +
            (C10135 * C2625 + C10963 + C10963 + C33060 * C2631 +
             C10133 * C1126 + C10962 + C10962 + C10129 * C1144 + C10131 * C692 +
             C10961 + C10961 + C10128 * C702) *
                C33077 +
            (C10135 * C2081 + C10445 + C10445 + C33060 * C2093 + C10133 * C349 +
             C10446 + C10446 + C10129 * C369 + C10131 * C348 + C10447 + C10447 +
             C10128 * C368) *
                C33089) *
               C32715 * C581) *
              C32760 * C468 +
          (((C10814 + C10813 + C10812) * C33089 +
            (C10131 * C693 + C10964 + C10964 + C10128 * C703 + C10133 * C1128 +
             C10965 + C10965 + C10129 * C1146 + C10135 * C2626 + C10966 +
             C10966 + C33060 * C2632) *
                C33077 +
            (C10131 * C1124 + C11672 + C11672 + C10128 * C1142 +
             C10133 * C1129 + C11673 + C11673 + C10129 * C1147 +
             C10135 * C7332 + C11674 + C11674 + C33060 * C7334) *
                C33057) *
               C32715 * C581 -
           ((C11525 + C11524 + C11523) * C33057 +
            (C10633 + C10634 + C10635) * C33077 +
            (C10191 + C10190 + C10189) * C33089) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[74] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C235 -
          ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
           (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
           (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
           (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
           (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
              C32774 * C236 +
          ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
           (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
           (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
           (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
           (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C32760 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C32774 * C32760 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C32760 * C110 -
          ((C10195 + C10196 + C10197) * C32798 * C33048 +
           (C10194 + C10193 + C10192) * C32798 * C33073 +
           (C10191 + C10190 + C10189) * C32798 * C33086) *
              C32774 * C32760 * C111 +
          (C10200 * C33086 + (C10197 + C10196 + C10195) * C32798 * C33073 +
           (C10131 * C119 + C10168 + C10168 + C10128 * C133 + C10133 * C344 +
            C10169 + C10169 + C10129 * C364 + C10135 * C353 + C10170 + C10170 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C32798 * C33086 +
           (C10189 + C10190 + C10191) * C32798 * C33073 + C10200 * C33048) *
              C32774 * C235 -
          ((C10135 * C1130 + C10311 + C10311 + C33060 * C1148 + C10133 * C694 +
            C10312 + C10312 + C10129 * C704 + C10131 * C241 + C10313 + C10313 +
            C10128 * C261) *
               C32798 * C33048 +
           (C10135 * C1128 + C10314 + C10314 + C33060 * C1146 + C10133 * C693 +
            C10315 + C10315 + C10129 * C703 + C10131 * C242 + C10316 + C10316 +
            C10128 * C262) *
               C32798 * C33073 +
           (C10135 * C1126 + C10317 + C10317 + C33060 * C1144 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10131 * C243 + C10319 + C10319 +
            C10128 * C263) *
               C32798 * C33086) *
              C32774 * C236 +
          ((C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C32798 * C33086 +
           (C10131 * C245 + C10323 + C10323 + C10128 * C265 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10135 * C1129 + C10325 +
            C10325 + C33060 * C1147) *
               C32798 * C33073 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C10131 * C243 + C10319 + C10319 + C10128 * C263 + C10133 * C692 +
            C10318 + C10318 + C10129 * C702 + C10135 * C1126 + C10317 + C10317 +
            C33060 * C1144) *
               C33077 +
           (C10131 * C244 + C10320 + C10320 + C10128 * C264 + C10133 * C1125 +
            C10321 + C10321 + C10129 * C1143 + C10135 * C1127 + C10322 +
            C10322 + C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C10135 * C1129 + C10325 + C10325 + C33060 * C1147 + C10133 * C1124 +
            C10324 + C10324 + C10129 * C1142 + C10131 * C245 + C10323 + C10323 +
            C10128 * C265) *
               C33057 +
           (C10633 + C10634 + C10635) * C33077 +
           (C10191 + C10190 + C10189) * C33089) *
              C32715 * C32774 * C32760 * C111 +
          (C10199 * C33089 + (C10632 + C10631 + C10630) * C33077 +
           (C10131 * C246 + C10326 + C10326 + C10128 * C266 + C10133 * C1123 +
            C10327 + C10327 + C10129 * C1141 + C10135 * C1131 + C10328 +
            C10328 + C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C10131 * C115 + C10138 + C10138 + C10128 * C129 + C10133 * C348 +
            C10139 + C10139 + C10129 * C368 + C10135 * C349 + C10140 + C10140 +
            C33060 * C369) *
               C33089 +
           (C11232 + C11233 + C11234) * C33077 + C11242 * C33057) *
              C32715 * C32774 * C235 -
          ((C11238 + C11239 + C11240) * C33057 +
           (C11237 + C11236 + C11235) * C33077 +
           (C11234 + C11233 + C11232) * C33089) *
              C32715 * C32774 * C236 +
          (C11242 * C33089 + (C11240 + C11239 + C11238) * C33077 +
           (C10131 * C967 + C11211 + C11211 + C10128 * C979 + C10133 * C6333 +
            C11212 + C11212 + C10129 * C6339 + C10135 * C6335 + C11213 +
            C11213 + C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[75] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33025 +
             (C21507 + C21508) * C32860) *
                C32720 +
            ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
            C23296 * C17578) *
               C32774 * C466 -
           (((C21318 + C21319) * C32860 + C23785 * C33025) * C17578 +
            (C21869 * C32860 + C21870 * C33025) * C32728 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C33025) *
                C32720) *
               C32774 * C467) *
              C468 +
          (((C21868 * C33025 + C21474 * C32860) * C32720 +
            (C23294 * C33025 + (C21319 + C21318) * C32860) * C32728 +
            ((C20849 + C20848) * C33025 +
             (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
              C20577 + C20577 + C32902 * C1463) *
                 C32860) *
                C17578) *
               C32774 * C467 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C33025) * C17578 +
            (C23785 * C32860 + (C20455 + C20454) * C33025) * C32728 +
            (C21870 * C32860 + (C20453 + C20452) * C33025) * C32720) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[76] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33025 +
             (C21507 + C21508) * C32860) *
                C32720 +
            ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
            C23296 * C17578) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C33025) * C17578 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C33025) * C32728 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33025) *
                C32720) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C33025 + (C22304 + C22303) * C32860) * C32720 +
            ((C22088 + C22087) * C33025 + (C22086 + C22085) * C32860) * C32728 +
            ((C23989 + C23988) * C33025 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C32860) *
                C17578) *
               C581 -
           (((C21318 + C21319) * C32860 + C23785 * C33025) * C17578 +
            (C21869 * C32860 + C21870 * C33025) * C32728 +
            ((C21510 + C21509) * C32860 + (C21508 + C21507) * C33025) *
                C32720) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[77] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33025 +
            (C21507 + C21508) * C32860) *
               C32720 +
           ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
           C23296 * C17578) *
              C32774 * C235 -
          (((C21318 + C21319) * C32860 + (C20850 + C20851) * C33025) * C17578 +
           (C21869 * C32860 + C21870 * C33025) * C32728 +
           ((C21510 + C21509) * C32860 + (C21508 + C21507) * C33025) * C32720) *
              C32774 * C236 +
          ((C21515 * C33025 + (C21514 + C21513) * C32860) * C32720 +
           (C21474 * C33025 + (C21512 + C21511) * C32860) * C32728 +
           ((C21319 + C21318) * C33025 +
            (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
             C21872 + C21872 + C32902 * C1645) *
                C32860) *
               C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33025 +
            (C21507 + C21508) * C32860) *
               C32720 +
           ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
           C23296 * C17578) *
              C32774 * C32760 * C110 -
          (((C20848 + C20849) * C32860 + (C20457 + C20456) * C33025) * C17578 +
           ((C20850 + C20851) * C32860 + (C20455 + C20454) * C33025) * C32728 +
           (C21870 * C32860 + (C20453 + C20452) * C33025) * C32720) *
              C32774 * C32760 * C111 +
          (C23296 * C32720 +
           (C20461 * C33025 + (C20849 + C20848) * C32860) * C32728 +
           ((C20459 + C20458) * C33025 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32860) *
               C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33025 +
            (C21507 + C21508) * C32860) *
               C32720 +
           ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
           C23296 * C17578) *
              C341 -
          (((C20405 * C1130 + C21151 + C21151 + C32902 * C1148 + C20403 * C694 +
             C21150 + C21150 + C20401 * C704) *
                C32860 +
            (C21012 + C21013) * C33025) *
               C17578 +
           ((C22087 + C22088) * C32860 + (C21014 + C21015) * C33025) * C32728 +
           ((C22305 + C22306) * C32860 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33025) *
               C32720) *
              C342 +
          (((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
             C20685 + C20685 + C32902 * C2093) *
                C33025 +
            (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
             C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                C32860) *
               C32720 +
           ((C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
             C20687 + C20687 + C32902 * C2092) *
                C33025 +
            (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
             C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                C32860) *
               C32728 +
           ((C20403 * C351 + C20688 + C20688 + C20401 * C371 + C20405 * C2079 +
             C20689 + C20689 + C32902 * C2091) *
                C33025 +
            (C20403 * C1130 + C23589 + C23589 + C20401 * C1148 +
             C20405 * C2627 + C23590 + C23590 + C32902 * C2633) *
                C32860) *
               C17578) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[78] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33025 +
             (C21507 + C21508) * C32860) *
                C32720 +
            ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
            C23296 * C17578) *
               C580 -
           (((C23988 + C23989) * C32860 + (C21012 + C21013) * C33025) * C17578 +
            ((C22087 + C22088) * C32860 + (C21014 + C21015) * C33025) * C32728 +
            ((C22305 + C22306) * C32860 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33025) *
                C32720) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C33025 + (C22088 + C22087) * C32860) * C32720 +
            ((C21013 + C21012) * C33025 + (C23989 + C23988) * C32860) * C32728 +
            ((C21011 + C21010) * C33025 +
             (C20403 * C695 + C21152 + C21152 + C20401 * C705 + C20405 * C2261 +
              C21153 + C21153 + C32902 * C2263) *
                 C32860) *
                C17578) *
               C581 -
           (((C20848 + C20849) * C32860 + (C20457 + C20456) * C33025) * C17578 +
            (C23785 * C32860 + (C20455 + C20454) * C33025) * C32728 +
            (C21870 * C32860 + (C20453 + C20452) * C33025) * C32720) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[79] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33025 +
            (C21507 + C21508) * C32860) *
               C32720 +
           ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
           C23296 * C17578) *
              C32774 * C32760 * C110 -
          (((C20848 + C20849) * C32860 + (C20457 + C20456) * C33025) * C17578 +
           ((C20850 + C20851) * C32860 + (C20455 + C20454) * C33025) * C32728 +
           (C21870 * C32860 + (C20453 + C20452) * C33025) * C32720) *
              C32774 * C32760 * C111 +
          (C23296 * C32720 +
           (C20461 * C33025 + (C20849 + C20848) * C32860) * C32728 +
           ((C20459 + C20458) * C33025 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32860) *
               C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33025 +
            (C21507 + C21508) * C32860) *
               C32720 +
           ((C20452 + C20453) * C33025 + C21868 * C32860) * C32728 +
           C23296 * C17578) *
              C32774 * C235 -
          (((C21318 + C21319) * C32860 + (C20850 + C20851) * C33025) * C17578 +
           (C21869 * C32860 + C21870 * C33025) * C32728 +
           ((C21510 + C21509) * C32860 + (C21508 + C21507) * C33025) * C32720) *
              C32774 * C236 +
          ((C21515 * C33025 + (C21514 + C21513) * C32860) * C32720 +
           (C21474 * C33025 + (C21512 + C21511) * C32860) * C32728 +
           ((C21319 + C21318) * C33025 +
            (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
             C21872 + C21872 + C32902 * C1645) *
                C32860) *
               C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[80] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C33025 +
             (C25469 + C25470 + C25471) * C32860) *
                C15817 +
            ((C24354 + C24355 + C24356) * C33025 + C25826 * C32860) * C32725) *
               C32774 * C466 -
           (((C25472 + C25473 + C25474) * C32860 + C25827 * C33025) * C32725 +
            ((C25475 + C25476 + C25477) * C32860 +
             (C25471 + C25470 + C25469) * C33025) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C25826 * C33025 + (C25474 + C25473 + C25472) * C32860) * C15817 +
            ((C24797 + C24796 + C24795) * C33025 +
             (C31733 * C246 + C24491 + C24491 + C32898 * C266 + C31721 * C1123 +
              C24492 + C24492 + C32905 * C1141 + C24300 * C1131 + C24493 +
              C24493 + C24295 * C1149) *
                 C32860) *
                C32725) *
               C32774 * C467 -
           (((C24795 + C24796 + C24797) * C32860 +
             (C24359 + C24358 + C24357) * C33025) *
                C32725 +
            (C25827 * C32860 + (C24356 + C24355 + C24354) * C33025) * C15817) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[81] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C33025 +
             (C25469 + C25470 + C25471) * C32860) *
                C15817 +
            ((C24354 + C24355 + C24356) * C33025 + C25826 * C32860) * C32725) *
               C580 -
           (((C26034 + C26035 + C26036) * C32860 +
             (C24977 + C24978 + C24979) * C33025) *
                C32725 +
            ((C26249 + C26250 + C26251) * C32860 +
             (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
              C31721 * C349 + C24611 + C24611 + C32905 * C369 + C31733 * C348 +
              C24612 + C24612 + C32898 * C368) *
                 C33025) *
                C15817) *
               C581) *
              C466 +
          ((((C26251 + C26250 + C26249) * C33025 +
             (C31733 * C1125 + C26237 + C26237 + C32898 * C1143 +
              C31721 * C1127 + C26238 + C26238 + C32905 * C1145 +
              C24300 * C7001 + C26239 + C26239 + C24295 * C7007) *
                 C32860) *
                C15817 +
            ((C26036 + C26035 + C26034) * C33025 +
             (C31733 * C1124 + C26240 + C26240 + C32898 * C1142 +
              C31721 * C1129 + C26241 + C26241 + C32905 * C1147 +
              C24300 * C7332 + C26242 + C26242 + C24295 * C7334) *
                 C32860) *
                C32725) *
               C581 -
           (((C25472 + C25473 + C25474) * C32860 + C25827 * C33025) * C32725 +
            ((C25475 + C25476 + C25477) * C32860 +
             (C25471 + C25470 + C25469) * C33025) *
                C15817) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[82] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C33025 +
            (C25469 + C25470 + C25471) * C32860) *
               C15817 +
           ((C24354 + C24355 + C24356) * C33025 +
            (C24800 + C24799 + C24798) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C25472 + C25473 + C25474) * C32860 +
            (C24798 + C24799 + C24800) * C33025) *
               C32725 +
           ((C25475 + C25476 + C25477) * C32860 +
            (C25471 + C25470 + C25469) * C33025) *
               C15817) *
              C32774 * C236 +
          (((C25477 + C25476 + C25475) * C33025 +
            (C31733 * C966 + C25445 + C25445 + C32898 * C978 + C31721 * C1637 +
             C25446 + C25446 + C32905 * C1643 + C24300 * C6334 + C25447 +
             C25447 + C24295 * C6340) *
                C32860) *
               C15817 +
           ((C25474 + C25473 + C25472) * C33025 +
            (C31733 * C965 + C25448 + C25448 + C32898 * C977 + C31721 * C1638 +
             C25449 + C25449 + C32905 * C1644 + C24300 * C7165 + C25450 +
             C25450 + C24295 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C33025 +
            (C31733 * C243 + C24484 + C24484 + C32898 * C263 + C31721 * C692 +
             C24483 + C24483 + C32905 * C702 + C24300 * C1126 + C24482 +
             C24482 + C24295 * C1144) *
                C32860) *
               C15817 +
           ((C24354 + C24355 + C24356) * C33025 +
            (C24800 + C24799 + C24798) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C24795 + C24796 + C24797) * C32860 +
            (C24359 + C24358 + C24357) * C33025) *
               C32725 +
           ((C24798 + C24799 + C24800) * C32860 +
            (C24356 + C24355 + C24354) * C33025) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C24364 * C33025 + (C24797 + C24796 + C24795) * C32860) * C15817 +
           ((C24362 + C24361 + C24360) * C33025 +
            (C31733 * C240 + C24780 + C24780 + C32898 * C260 + C31721 * C695 +
             C24781 + C24781 + C32905 * C705 + C24300 * C2261 + C24782 +
             C24782 + C24295 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C33025 +
            (C25469 + C25470 + C25471) * C32860) *
               C15817 +
           ((C24354 + C24355 + C24356) * C33025 +
            (C24800 + C24799 + C24798) * C32860) *
               C32725) *
              C341 -
          (((C24300 * C2626 + C25131 + C25131 + C24295 * C2632 +
             C31721 * C1128 + C25130 + C25130 + C32905 * C1146 + C31733 * C693 +
             C25129 + C25129 + C32898 * C703) *
                C32860 +
            (C24977 + C24978 + C24979) * C33025) *
               C32725 +
           ((C24300 * C2625 + C25128 + C25128 + C24295 * C2631 +
             C31721 * C1126 + C25127 + C25127 + C32905 * C1144 + C31733 * C692 +
             C25126 + C25126 + C32898 * C702) *
                C32860 +
            (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 + C31721 * C349 +
             C24611 + C24611 + C32905 * C369 + C31733 * C348 + C24612 + C24612 +
             C32898 * C368) *
                C33025) *
               C15817) *
              C342 +
          (((C31733 * C349 + C24613 + C24613 + C32898 * C369 + C31721 * C2081 +
             C24614 + C24614 + C32905 * C2093 + C24300 * C2082 + C24615 +
             C24615 + C24295 * C2094) *
                C33025 +
            (C31733 * C1126 + C25624 + C25624 + C32898 * C1144 +
             C31721 * C2625 + C25625 + C25625 + C32905 * C2631 +
             C24300 * C7002 + C25626 + C25626 + C24295 * C7008) *
                C32860) *
               C15817 +
           ((C31733 * C350 + C24616 + C24616 + C32898 * C370 + C31721 * C2080 +
             C24617 + C24617 + C32905 * C2092 + C24300 * C2083 + C24618 +
             C24618 + C24295 * C2095) *
                C33025 +
            (C31733 * C1128 + C25627 + C25627 + C32898 * C1146 +
             C31721 * C2626 + C25628 + C25628 + C32905 * C2632 +
             C24300 * C12177 + C25629 + C25629 + C24295 * C12179) *
                C32860) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[83] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         (((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
              C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 +
              C24305 + C24295 * C369) *
                 C33025 +
             (C25469 + C25470 + C25471) * C32860) *
                C15817 +
            ((C24354 + C24355 + C24356) * C33025 + C25826 * C32860) * C32725) *
               C580 -
           (((C26034 + C26035 + C26036) * C32860 +
             (C24977 + C24978 + C24979) * C33025) *
                C32725 +
            ((C24300 * C2625 + C25128 + C25128 + C24295 * C2631 +
              C31721 * C1126 + C25127 + C25127 + C32905 * C1144 +
              C31733 * C692 + C25126 + C25126 + C32898 * C702) *
                 C32860 +
             (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 +
              C31721 * C349 + C24611 + C24611 + C32905 * C369 + C31733 * C348 +
              C24612 + C24612 + C32898 * C368) *
                 C33025) *
                C15817) *
               C581) *
              C32760 * C468 +
          ((((C24979 + C24978 + C24977) * C33025 +
             (C26036 + C26035 + C26034) * C32860) *
                C15817 +
            ((C24976 + C24975 + C24974) * C33025 +
             (C31733 * C694 + C25132 + C25132 + C32898 * C704 + C31721 * C1130 +
              C25133 + C25133 + C32905 * C1148 + C24300 * C2627 + C25134 +
              C25134 + C24295 * C2633) *
                 C32860) *
                C32725) *
               C581 -
           (((C24795 + C24796 + C24797) * C32860 +
             (C24359 + C24358 + C24357) * C33025) *
                C32725 +
            (C25827 * C32860 + (C24356 + C24355 + C24354) * C33025) * C15817) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[84] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C33025 +
            (C31733 * C243 + C24484 + C24484 + C32898 * C263 + C31721 * C692 +
             C24483 + C24483 + C32905 * C702 + C24300 * C1126 + C24482 +
             C24482 + C24295 * C1144) *
                C32860) *
               C15817 +
           ((C24354 + C24355 + C24356) * C33025 +
            (C24800 + C24799 + C24798) * C32860) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C24795 + C24796 + C24797) * C32860 +
            (C24359 + C24358 + C24357) * C33025) *
               C32725 +
           ((C24798 + C24799 + C24800) * C32860 +
            (C24356 + C24355 + C24354) * C33025) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C24364 * C33025 + (C24797 + C24796 + C24795) * C32860) * C15817 +
           ((C24362 + C24361 + C24360) * C33025 +
            (C31733 * C240 + C24780 + C24780 + C32898 * C260 + C31721 * C695 +
             C24781 + C24781 + C32905 * C705 + C24300 * C2261 + C24782 +
             C24782 + C24295 * C2263) *
                C32860) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C33025 +
            (C25469 + C25470 + C25471) * C32860) *
               C15817 +
           ((C24354 + C24355 + C24356) * C33025 +
            (C24800 + C24799 + C24798) * C32860) *
               C32725) *
              C32774 * C235 -
          (((C25472 + C25473 + C25474) * C32860 +
            (C24798 + C24799 + C24800) * C33025) *
               C32725 +
           ((C25475 + C25476 + C25477) * C32860 +
            (C25471 + C25470 + C25469) * C33025) *
               C15817) *
              C32774 * C236 +
          (((C25477 + C25476 + C25475) * C33025 +
            (C31733 * C966 + C25445 + C25445 + C32898 * C978 + C31721 * C1637 +
             C25446 + C25446 + C32905 * C1643 + C24300 * C6334 + C25447 +
             C25447 + C24295 * C6340) *
                C32860) *
               C15817 +
           ((C25474 + C25473 + C25472) * C33025 +
            (C31733 * C965 + C25448 + C25448 + C32898 * C977 + C31721 * C1638 +
             C25449 + C25449 + C32905 * C1644 + C24300 * C7165 + C25450 +
             C25450 + C24295 * C7167) *
                C32860) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[85] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C32774 * C466 -
           (((C21511 + C21512) * C33057 + C21869 * C33077 + C21870 * C33089) *
                C32725 +
            ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
             (C21508 + C21507) * C33089) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C21868 * C33089 + C21474 * C33077 + (C21512 + C21511) * C33057) *
                C15817 +
            ((C20851 + C20850) * C33089 + (C21319 + C21318) * C33077 +
             (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
              C21872 + C21872 + C32902 * C1645) *
                 C33057) *
                C32725) *
               C32774 * C467 -
           (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
             (C20455 + C20454) * C33089) *
                C32725 +
            (C21869 * C33057 + C21870 * C33077 + (C20453 + C20452) * C33089) *
                C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C32774 * C466 -
           ((C20848 + C20849) * C32798 * C33026 +
            (C20850 + C20851) * C32798 * C33075 +
            (C20852 + C20853) * C32798 * C33088 +
            (C20405 * C692 + C20568 + C20568 + C32902 * C702 + C20403 * C243 +
             C20569 + C20569 + C20401 * C263) *
                C32798 * C33095) *
               C32774 * C467) *
              C468 +
          (((C20853 + C20852) * C32798 * C33095 +
            (C20851 + C20850) * C32798 * C33088 +
            (C20849 + C20848) * C32798 * C33075 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32798 * C33026) *
               C32774 * C467 -
           ((C20458 + C20459) * C32798 * C33026 +
            (C20457 + C20456) * C32798 * C33075 +
            (C20455 + C20454) * C32798 * C33088 +
            (C20453 + C20452) * C32798 * C33095) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C32798 * C15817 +
            (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
               C32774 * C466 -
           ((C22851 + C22852 + C22853 + C22854) * C32798 * C32725 +
            (C22414 * C2625 + C22575 + C22575 + C33041 * C2631 +
             C22412 * C1126 + C22576 + C22576 + C33085 * C1144 + C22410 * C692 +
             C22577 + C22577 + C33094 * C702 + C22408 * C243 + C22578 + C22578 +
             C33097 * C263) *
                C32798 * C15817) *
               C32774 * C467) *
              C468 +
          (((C22854 + C22853 + C22852 + C22851) * C32798 * C15817 +
            (C22408 * C241 + C22839 + C22839 + C33097 * C261 + C22410 * C694 +
             C22840 + C22840 + C33094 * C704 + C22412 * C1130 + C22841 +
             C22841 + C33085 * C1148 + C22414 * C2627 + C22842 + C22842 +
             C33041 * C2633) *
                C32798 * C32725) *
               C32774 * C467 -
           ((C22469 + C22470 + C22471 + C22472) * C32798 * C32725 +
            (C22468 + C22467 + C22466 + C22465) * C32798 * C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[86] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C33057 + (C22087 + C22088) * C33077 +
             (C21014 + C21015) * C33089) *
                C32725 +
            ((C22303 + C22304) * C33057 + (C22305 + C22306) * C33077 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33089) *
                C15817) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C33089 + (C22304 + C22303) * C33077 +
             (C20403 * C1637 + C22291 + C22291 + C20401 * C1643 +
              C20405 * C6334 + C22292 + C22292 + C32902 * C6340) *
                 C33057) *
                C15817 +
            ((C22088 + C22087) * C33089 + (C22086 + C22085) * C33077 +
             (C20403 * C1638 + C22293 + C22293 + C20401 * C1644 +
              C20405 * C7165 + C22294 + C22294 + C32902 * C7167) *
                 C33057) *
                C32725) *
               C581 -
           (((C21511 + C21512) * C33057 + C21869 * C33077 + C21870 * C33089) *
                C32725 +
            ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
             (C21508 + C21507) * C33089) *
                C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C580 -
           ((C21010 + C21011) * C32798 * C33026 +
            (C21012 + C21013) * C32798 * C33075 +
            (C21014 + C21015) * C32798 * C33088 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C32798 * C33095) *
               C581) *
              C466 +
          (((C20403 * C692 + C21146 + C21146 + C20401 * C702 + C20405 * C1126 +
             C21147 + C21147 + C32902 * C1144) *
                C32798 * C33095 +
            (C20403 * C693 + C21148 + C21148 + C20401 * C703 + C20405 * C1128 +
             C21149 + C21149 + C32902 * C1146) *
                C32798 * C33088 +
            (C20403 * C694 + C21150 + C21150 + C20401 * C704 + C20405 * C1130 +
             C21151 + C21151 + C32902 * C1148) *
                C32798 * C33075 +
            (C20403 * C695 + C21152 + C21152 + C20401 * C705 + C20405 * C2261 +
             C21153 + C21153 + C32902 * C2263) *
                C32798 * C33026) *
               C581 -
           ((C20848 + C20849) * C32798 * C33026 +
            (C20850 + C20851) * C32798 * C33075 +
            (C20852 + C20853) * C32798 * C33088 +
            (C20405 * C692 + C20568 + C20568 + C32902 * C702 + C20403 * C243 +
             C20569 + C20569 + C20401 * C263) *
                C32798 * C33095) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C32798 * C15817 +
            (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
               C580 -
           ((C23005 + C23006 + C23007 + C23008) * C32798 * C32725 +
            (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 +
             C22412 * C2081 + C22690 + C22690 + C33085 * C2093 + C22410 * C349 +
             C22691 + C22691 + C33094 * C369 + C22408 * C348 + C22692 + C22692 +
             C33097 * C368) *
                C32798 * C15817) *
               C581) *
              C466 +
          (((C22408 * C692 + C23139 + C23139 + C33097 * C702 + C22410 * C1126 +
             C23140 + C23140 + C33094 * C1144 + C22412 * C2625 + C23141 +
             C23141 + C33085 * C2631 + C22414 * C7002 + C23142 + C23142 +
             C33041 * C7008) *
                C32798 * C15817 +
            (C22408 * C693 + C23143 + C23143 + C33097 * C703 + C22410 * C1128 +
             C23144 + C23144 + C33094 * C1146 + C22412 * C2626 + C23145 +
             C23145 + C33085 * C2632 + C22414 * C12177 + C23146 + C23146 +
             C33041 * C12179) *
                C32798 * C32725) *
               C581 -
           ((C22851 + C22852 + C22853 + C22854) * C32798 * C32725 +
            (C22414 * C2625 + C22575 + C22575 + C33041 * C2631 +
             C22412 * C1126 + C22576 + C22576 + C33085 * C1144 + C22410 * C692 +
             C22577 + C22577 + C33094 * C702 + C22408 * C243 + C22578 + C22578 +
             C33097 * C263) *
                C32798 * C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[87] +=
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                   C32798 * C33095 +
               (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
               C20463 * C33026) *
                  C32774 * C32760 * C110 -
              ((C20458 + C20459) * C32798 * C33026 +
               (C20457 + C20456) * C32798 * C33075 +
               (C20455 + C20454) * C32798 * C33088 +
               (C20453 + C20452) * C32798 * C33095) *
                  C32774 * C32760 * C111 +
              (C20462 * C33095 + C20463 * C33088 +
               (C20459 + C20458) * C32798 * C33075 +
               (C20403 * C120 + C20434 + C20434 + C20401 * C134 +
                C20405 * C582 + C20435 + C20435 + C32902 * C584) *
                   C32798 * C33026) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
             (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                   C32798 * C33095 +
               (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
               C20463 * C33026) *
                  C32774 * C235 -
              ((C20405 * C695 + C20562 + C20562 + C32902 * C705 +
                C20403 * C240 + C20563 + C20563 + C20401 * C260) *
                   C32798 * C33026 +
               (C20405 * C694 + C20564 + C20564 + C32902 * C704 +
                C20403 * C241 + C20565 + C20565 + C20401 * C261) *
                   C32798 * C33075 +
               (C20405 * C693 + C20566 + C20566 + C32902 * C703 +
                C20403 * C242 + C20567 + C20567 + C20401 * C262) *
                   C32798 * C33088 +
               (C20405 * C692 + C20568 + C20568 + C32902 * C702 +
                C20403 * C243 + C20569 + C20569 + C20401 * C263) *
                   C32798 * C33095) *
                  C32774 * C236 +
              ((C20403 * C244 + C20570 + C20570 + C20401 * C264 +
                C20405 * C1125 + C20571 + C20571 + C32902 * C1143) *
                   C32798 * C33095 +
               (C20403 * C245 + C20572 + C20572 + C20401 * C265 +
                C20405 * C1124 + C20573 + C20573 + C32902 * C1142) *
                   C32798 * C33088 +
               (C20403 * C246 + C20574 + C20574 + C20401 * C266 +
                C20405 * C1123 + C20575 + C20575 + C32902 * C1141) *
                   C32798 * C33075 +
               (C20403 * C247 + C20576 + C20576 + C20401 * C267 +
                C20405 * C1461 + C20577 + C20577 + C32902 * C1463) *
                   C32798 * C33026) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C32798 * C33095 +
           (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
           C20463 * C33026) *
              C341 -
          ((C20405 * C352 + C20676 + C20676 + C32902 * C372 + C20403 * C345 +
            C20677 + C20677 + C20401 * C365) *
               C32798 * C33026 +
           (C20405 * C351 + C20678 + C20678 + C32902 * C371 + C20403 * C346 +
            C20679 + C20679 + C20401 * C366) *
               C32798 * C33075 +
           (C20405 * C350 + C20680 + C20680 + C32902 * C370 + C20403 * C347 +
            C20681 + C20681 + C20401 * C367) *
               C32798 * C33088 +
           (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
            C20683 + C20683 + C20401 * C368) *
               C32798 * C33095) *
              C342 +
          ((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
            C20685 + C20685 + C32902 * C2093) *
               C32798 * C33095 +
           (C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
            C20687 + C20687 + C32902 * C2092) *
               C32798 * C33088 +
           (C20403 * C351 + C20688 + C20688 + C20401 * C371 + C20405 * C2079 +
            C20689 + C20689 + C32902 * C2091) *
               C32798 * C33075 +
           (C20403 * C352 + C20690 + C20690 + C20401 * C372 + C20405 * C2443 +
            C20691 + C20691 + C32902 * C2445) *
               C32798 * C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33089 +
            (C20403 * C243 + C20569 + C20569 + C20401 * C263 + C20405 * C692 +
             C20568 + C20568 + C32902 * C702) *
                C33077 +
            (C20403 * C244 + C20570 + C20570 + C20401 * C264 + C20405 * C1125 +
             C20571 + C20571 + C32902 * C1143) *
                C33057) *
               C15817 +
           ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
            (C21316 + C21317) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
            (C20455 + C20454) * C33089) *
               C32725 +
           ((C21317 + C21316) * C33057 + (C20852 + C20853) * C33077 +
            (C20453 + C20452) * C33089) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C20460 * C33089 + (C20851 + C20850) * C33077 +
            (C21319 + C21318) * C33057) *
               C15817 +
           (C20461 * C33089 + (C20849 + C20848) * C33077 +
            (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
             C20577 + C20577 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33089 +
            (C21507 + C21508) * C33077 + C21515 * C33057) *
               C15817 +
           ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
            C21474 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C21511 + C21512) * C33057 + (C21317 + C21316) * C33077 +
            (C20852 + C20853) * C33089) *
               C32725 +
           ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
            (C21508 + C21507) * C33089) *
               C15817) *
              C32774 * C236 +
          ((C21515 * C33089 + (C21514 + C21513) * C33077 +
            (C20403 * C967 + C21487 + C21487 + C20401 * C979 + C20405 * C6333 +
             C21488 + C21488 + C32902 * C6339) *
                C33057) *
               C15817 +
           (C21474 * C33089 + (C21512 + C21511) * C33077 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33089 +
            (C21507 + C21508) * C33077 + C21515 * C33057) *
               C15817 +
           ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
            C21474 * C33057) *
               C32725) *
              C341 -
          (((C20405 * C1129 + C21662 + C21662 + C32902 * C1147 +
             C20403 * C1124 + C21663 + C21663 + C20401 * C1142) *
                C33057 +
            (C20405 * C1128 + C21149 + C21149 + C32902 * C1146 + C20403 * C693 +
             C21148 + C21148 + C20401 * C703) *
                C33077 +
            (C21014 + C21015) * C33089) *
               C32725 +
           ((C20405 * C1127 + C21664 + C21664 + C32902 * C1145 +
             C20403 * C1125 + C21665 + C21665 + C20401 * C1143) *
                C33057 +
            (C20405 * C1126 + C21147 + C21147 + C32902 * C1144 + C20403 * C692 +
             C21146 + C21146 + C20401 * C702) *
                C33077 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C33089) *
               C15817) *
              C342 +
          (((C20403 * C349 + C20684 + C20684 + C20401 * C369 + C20405 * C2081 +
             C20685 + C20685 + C32902 * C2093) *
                C33089 +
            (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
             C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                C33077 +
            (C20403 * C1127 + C21668 + C21668 + C20401 * C1145 +
             C20405 * C7001 + C21669 + C21669 + C32902 * C7007) *
                C33057) *
               C15817 +
           ((C20403 * C350 + C20686 + C20686 + C20401 * C370 + C20405 * C2080 +
             C20687 + C20687 + C32902 * C2092) *
                C33089 +
            (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
             C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                C33077 +
            (C20403 * C1129 + C21672 + C21672 + C20401 * C1147 +
             C20405 * C7332 + C21673 + C21673 + C32902 * C7334) *
                C33057) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C32798 * C15817 +
           (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
              C32774 * C32760 * C110 -
          ((C22469 + C22470 + C22471 + C22472) * C32798 * C32725 +
           (C22468 + C22467 + C22466 + C22465) * C32798 * C15817) *
              C32774 * C32760 * C111 +
          ((C22472 + C22471 + C22470 + C22469) * C32798 * C15817 +
           (C22408 * C118 + C22445 + C22445 + C33097 * C132 + C22410 * C345 +
            C22446 + C22446 + C33094 * C365 + C22412 * C352 + C22447 + C22447 +
            C33085 * C372 + C22414 * C2443 + C22448 + C22448 + C33041 * C2445) *
               C32798 * C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C32798 * C15817 +
           (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
              C32774 * C235 -
          ((C22414 * C2626 + C22571 + C22571 + C33041 * C2632 + C22412 * C1128 +
            C22572 + C22572 + C33085 * C1146 + C22410 * C693 + C22573 + C22573 +
            C33094 * C703 + C22408 * C242 + C22574 + C22574 + C33097 * C262) *
               C32798 * C32725 +
           (C22414 * C2625 + C22575 + C22575 + C33041 * C2631 + C22412 * C1126 +
            C22576 + C22576 + C33085 * C1144 + C22410 * C692 + C22577 + C22577 +
            C33094 * C702 + C22408 * C243 + C22578 + C22578 + C33097 * C263) *
               C32798 * C15817) *
              C32774 * C236 +
          ((C22408 * C244 + C22579 + C22579 + C33097 * C264 + C22410 * C1125 +
            C22580 + C22580 + C33094 * C1143 + C22412 * C1127 + C22581 +
            C22581 + C33085 * C1145 + C22414 * C7001 + C22582 + C22582 +
            C33041 * C7007) *
               C32798 * C15817 +
           (C22408 * C245 + C22583 + C22583 + C33097 * C265 + C22410 * C1124 +
            C22584 + C22584 + C33094 * C1142 + C22412 * C1129 + C22585 +
            C22585 + C33085 * C1147 + C22414 * C7332 + C22586 + C22586 +
            C33041 * C7334) *
               C32798 * C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(3.0) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C32798 * C15817 +
           (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
              C341 -
          ((C22414 * C2083 + C22685 + C22685 + C33041 * C2095 + C22412 * C2080 +
            C22686 + C22686 + C33085 * C2092 + C22410 * C350 + C22687 + C22687 +
            C33094 * C370 + C22408 * C347 + C22688 + C22688 + C33097 * C367) *
               C32798 * C32725 +
           (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 + C22412 * C2081 +
            C22690 + C22690 + C33085 * C2093 + C22410 * C349 + C22691 + C22691 +
            C33094 * C369 + C22408 * C348 + C22692 + C22692 + C33097 * C368) *
               C32798 * C15817) *
              C342 +
          ((C22408 * C349 + C22693 + C22693 + C33097 * C369 + C22410 * C2081 +
            C22694 + C22694 + C33094 * C2093 + C22412 * C2082 + C22695 +
            C22695 + C33085 * C2094 + C22414 * C12079 + C22696 + C22696 +
            C33041 * C12083) *
               C32798 * C15817 +
           (C22408 * C350 + C22697 + C22697 + C33097 * C370 + C22410 * C2080 +
            C22698 + C22698 + C33094 * C2092 + C22412 * C2083 + C22699 +
            C22699 + C33085 * C2095 + C22414 * C12267 + C22700 + C22700 +
            C33041 * C12269) *
               C32798 * C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[88] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C33057 + (C22087 + C22088) * C33077 +
             (C21014 + C21015) * C33089) *
                C32725 +
            ((C20405 * C1127 + C21664 + C21664 + C32902 * C1145 +
              C20403 * C1125 + C21665 + C21665 + C20401 * C1143) *
                 C33057 +
             (C20405 * C1126 + C21147 + C21147 + C32902 * C1144 +
              C20403 * C692 + C21146 + C21146 + C20401 * C702) *
                 C33077 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33089) *
                C15817) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C33089 + (C22088 + C22087) * C33077 +
             (C22086 + C22085) * C33057) *
                C15817 +
            ((C21013 + C21012) * C33089 +
             (C20403 * C694 + C21150 + C21150 + C20401 * C704 + C20405 * C1130 +
              C21151 + C21151 + C32902 * C1148) *
                 C33077 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C33057) *
                C32725) *
               C581 -
           (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
             (C20455 + C20454) * C33089) *
                C32725 +
            (C21869 * C33057 + C21870 * C33077 + (C20453 + C20452) * C33089) *
                C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C580 -
           ((C21010 + C21011) * C32798 * C33026 +
            (C21012 + C21013) * C32798 * C33075 +
            (C21014 + C21015) * C32798 * C33088 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C32798 * C33095) *
               C581) *
              C32760 * C468 +
          (((C21015 + C21014) * C32798 * C33095 +
            (C21013 + C21012) * C32798 * C33088 +
            (C21011 + C21010) * C32798 * C33075 +
            (C20403 * C344 + C20996 + C20996 + C20401 * C364 + C20405 * C353 +
             C20997 + C20997 + C32902 * C373) *
                C32798 * C33026) *
               C581 -
           ((C20458 + C20459) * C32798 * C33026 +
            (C20457 + C20456) * C32798 * C33075 +
            (C20455 + C20454) * C32798 * C33088 +
            (C20453 + C20452) * C32798 * C33095) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         ((((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
             C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
             C33085 * C369 + C22414 * C2081 + C22420 + C22420 +
             C33041 * C2093) *
                C32798 * C15817 +
            (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
               C580 -
           ((C23005 + C23006 + C23007 + C23008) * C32798 * C32725 +
            (C22414 * C2082 + C22689 + C22689 + C33041 * C2094 +
             C22412 * C2081 + C22690 + C22690 + C33085 * C2093 + C22410 * C349 +
             C22691 + C22691 + C33094 * C369 + C22408 * C348 + C22692 + C22692 +
             C33097 * C368) *
                C32798 * C15817) *
               C581) *
              C32760 * C468 +
          (((C23008 + C23007 + C23006 + C23005) * C32798 * C15817 +
            (C22408 * C346 + C22993 + C22993 + C33097 * C366 + C22410 * C351 +
             C22994 + C22994 + C33094 * C371 + C22412 * C2079 + C22995 +
             C22995 + C33085 * C2091 + C22414 * C2084 + C22996 + C22996 +
             C33041 * C2096) *
                C32798 * C32725) *
               C581 -
           ((C22469 + C22470 + C22471 + C22472) * C32798 * C32725 +
            (C22468 + C22467 + C22466 + C22465) * C32798 * C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[89] +=
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C32798 * C33095 +
           (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
           C20463 * C33026) *
              C32774 * C235 -
          ((C20405 * C695 + C20562 + C20562 + C32902 * C705 + C20403 * C240 +
            C20563 + C20563 + C20401 * C260) *
               C32798 * C33026 +
           (C20405 * C694 + C20564 + C20564 + C32902 * C704 + C20403 * C241 +
            C20565 + C20565 + C20401 * C261) *
               C32798 * C33075 +
           (C20405 * C693 + C20566 + C20566 + C32902 * C703 + C20403 * C242 +
            C20567 + C20567 + C20401 * C262) *
               C32798 * C33088 +
           (C20405 * C692 + C20568 + C20568 + C32902 * C702 + C20403 * C243 +
            C20569 + C20569 + C20401 * C263) *
               C32798 * C33095) *
              C32774 * C236 +
          ((C20403 * C244 + C20570 + C20570 + C20401 * C264 + C20405 * C1125 +
            C20571 + C20571 + C32902 * C1143) *
               C32798 * C33095 +
           (C20403 * C245 + C20572 + C20572 + C20401 * C265 + C20405 * C1124 +
            C20573 + C20573 + C32902 * C1142) *
               C32798 * C33088 +
           (C20403 * C246 + C20574 + C20574 + C20401 * C266 + C20405 * C1123 +
            C20575 + C20575 + C32902 * C1141) *
               C32798 * C33075 +
           (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
            C20577 + C20577 + C32902 * C1463) *
               C32798 * C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
            C20409 + C20409 + C32902 * C368) *
               C32798 * C33095 +
           (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
           C20463 * C33026) *
              C32774 * C32760 * C110 -
          ((C20458 + C20459) * C32798 * C33026 +
           (C20457 + C20456) * C32798 * C33075 +
           (C20455 + C20454) * C32798 * C33088 +
           (C20453 + C20452) * C32798 * C33095) *
              C32774 * C32760 * C111 +
          (C20462 * C33095 + C20463 * C33088 +
           (C20459 + C20458) * C32798 * C33075 +
           (C20403 * C120 + C20434 + C20434 + C20401 * C134 + C20405 * C582 +
            C20435 + C20435 + C32902 * C584) *
               C32798 * C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33089 +
            (C20403 * C243 + C20569 + C20569 + C20401 * C263 + C20405 * C692 +
             C20568 + C20568 + C32902 * C702) *
                C33077 +
            (C20403 * C244 + C20570 + C20570 + C20401 * C264 + C20405 * C1125 +
             C20571 + C20571 + C32902 * C1143) *
                C33057) *
               C15817 +
           ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
            (C21316 + C21317) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
            (C20455 + C20454) * C33089) *
               C32725 +
           ((C21317 + C21316) * C33057 + (C20852 + C20853) * C33077 +
            (C20453 + C20452) * C33089) *
               C15817) *
              C32774 * C32760 * C111 +
          ((C20460 * C33089 + (C20851 + C20850) * C33077 +
            (C21319 + C21318) * C33057) *
               C15817 +
           (C20461 * C33089 + (C20849 + C20848) * C33077 +
            (C20403 * C247 + C20576 + C20576 + C20401 * C267 + C20405 * C1461 +
             C20577 + C20577 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C33089 +
            (C21507 + C21508) * C33077 + C21515 * C33057) *
               C15817 +
           ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
            C21474 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C21511 + C21512) * C33057 + (C21317 + C21316) * C33077 +
            (C20852 + C20853) * C33089) *
               C32725 +
           ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
            (C21508 + C21507) * C33089) *
               C15817) *
              C32774 * C236 +
          ((C21515 * C33089 + (C21514 + C21513) * C33077 +
            (C20403 * C967 + C21487 + C21487 + C20401 * C979 + C20405 * C6333 +
             C21488 + C21488 + C32902 * C6339) *
                C33057) *
               C15817 +
           (C21474 * C33089 + (C21512 + C21511) * C33077 +
            (C20403 * C968 + C21489 + C21489 + C20401 * C980 + C20405 * C6518 +
             C21490 + C21490 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C32798 * C15817 +
           (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
              C32774 * C32760 * C110 -
          ((C22469 + C22470 + C22471 + C22472) * C32798 * C32725 +
           (C22468 + C22467 + C22466 + C22465) * C32798 * C15817) *
              C32774 * C32760 * C111 +
          ((C22472 + C22471 + C22470 + C22469) * C32798 * C15817 +
           (C22408 * C118 + C22445 + C22445 + C33097 * C132 + C22410 * C345 +
            C22446 + C22446 + C33094 * C365 + C22412 * C352 + C22447 + C22447 +
            C33085 * C372 + C22414 * C2443 + C22448 + C22448 + C33041 * C2445) *
               C32798 * C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C22408 * C115 + C22417 + C22417 + C33097 * C129 + C22410 * C348 +
            C22418 + C22418 + C33094 * C368 + C22412 * C349 + C22419 + C22419 +
            C33085 * C369 + C22414 * C2081 + C22420 + C22420 + C33041 * C2093) *
               C32798 * C15817 +
           (C22465 + C22466 + C22467 + C22468) * C32798 * C32725) *
              C32774 * C235 -
          ((C22414 * C2626 + C22571 + C22571 + C33041 * C2632 + C22412 * C1128 +
            C22572 + C22572 + C33085 * C1146 + C22410 * C693 + C22573 + C22573 +
            C33094 * C703 + C22408 * C242 + C22574 + C22574 + C33097 * C262) *
               C32798 * C32725 +
           (C22414 * C2625 + C22575 + C22575 + C33041 * C2631 + C22412 * C1126 +
            C22576 + C22576 + C33085 * C1144 + C22410 * C692 + C22577 + C22577 +
            C33094 * C702 + C22408 * C243 + C22578 + C22578 + C33097 * C263) *
               C32798 * C15817) *
              C32774 * C236 +
          ((C22408 * C244 + C22579 + C22579 + C33097 * C264 + C22410 * C1125 +
            C22580 + C22580 + C33094 * C1143 + C22412 * C1127 + C22581 +
            C22581 + C33085 * C1145 + C22414 * C7001 + C22582 + C22582 +
            C33041 * C7007) *
               C32798 * C15817 +
           (C22408 * C245 + C22583 + C22583 + C33097 * C265 + C22410 * C1124 +
            C22584 + C22584 + C33094 * C1142 + C22412 * C1129 + C22585 +
            C22585 + C33085 * C1147 + C22414 * C7332 + C22586 + C22586 +
            C33041 * C7334) *
               C32798 * C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[90] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C32798 * C32720 +
            (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
               C32774 * C466 -
           ((C24795 + C24796 + C24797) * C32798 * C17578 +
            (C24798 + C24799 + C24800) * C32798 * C32728 +
            (C24300 * C1126 + C24482 + C24482 + C24295 * C1144 + C31721 * C692 +
             C24483 + C24483 + C32905 * C702 + C31733 * C243 + C24484 + C24484 +
             C32898 * C263) *
                C32798 * C32720) *
               C32774 * C467) *
              C468 +
          (((C24800 + C24799 + C24798) * C32798 * C32720 +
            (C24797 + C24796 + C24795) * C32798 * C32728 +
            (C31733 * C240 + C24780 + C24780 + C32898 * C260 + C31721 * C695 +
             C24781 + C24781 + C32905 * C705 + C24300 * C2261 + C24782 +
             C24782 + C24295 * C2263) *
                C32798 * C17578) *
               C32774 * C467 -
           ((C24360 + C24361 + C24362) * C32798 * C17578 +
            (C24359 + C24358 + C24357) * C32798 * C32728 +
            (C24356 + C24355 + C24354) * C32798 * C32720) *
               C32774 * C466) *
              C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[91] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C32798 * C32720 +
            (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
               C580 -
           ((C24974 + C24975 + C24976) * C32798 * C17578 +
            (C24977 + C24978 + C24979) * C32798 * C32728 +
            (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 + C31721 * C349 +
             C24611 + C24611 + C32905 * C369 + C31733 * C348 + C24612 + C24612 +
             C32898 * C368) *
                C32798 * C32720) *
               C581) *
              C466 +
          (((C31733 * C692 + C25126 + C25126 + C32898 * C702 + C31721 * C1126 +
             C25127 + C25127 + C32905 * C1144 + C24300 * C2625 + C25128 +
             C25128 + C24295 * C2631) *
                C32798 * C32720 +
            (C31733 * C693 + C25129 + C25129 + C32898 * C703 + C31721 * C1128 +
             C25130 + C25130 + C32905 * C1146 + C24300 * C2626 + C25131 +
             C25131 + C24295 * C2632) *
                C32798 * C32728 +
            (C31733 * C694 + C25132 + C25132 + C32898 * C704 + C31721 * C1130 +
             C25133 + C25133 + C32905 * C1148 + C24300 * C2627 + C25134 +
             C25134 + C24295 * C2633) *
                C32798 * C17578) *
               C581 -
           ((C24795 + C24796 + C24797) * C32798 * C17578 +
            (C24798 + C24799 + C24800) * C32798 * C32728 +
            (C24300 * C1126 + C24482 + C24482 + C24295 * C1144 + C31721 * C692 +
             C24483 + C24483 + C32905 * C702 + C31733 * C243 + C24484 + C24484 +
             C32898 * C263) *
                C32798 * C32720) *
               C580) *
              C467) *
         C32748) /
        (p * q * std::sqrt(p + q));
    d2ee[92] +=
        (-std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
            C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
            C24295 * C369) *
               C32798 * C32720 +
           (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
              C32774 * C235 -
          ((C24300 * C1130 + C24476 + C24476 + C24295 * C1148 + C31721 * C694 +
            C24477 + C24477 + C32905 * C704 + C31733 * C241 + C24478 + C24478 +
            C32898 * C261) *
               C32798 * C17578 +
           (C24300 * C1128 + C24479 + C24479 + C24295 * C1146 + C31721 * C693 +
            C24480 + C24480 + C32905 * C703 + C31733 * C242 + C24481 + C24481 +
            C32898 * C262) *
               C32798 * C32728 +
           (C24300 * C1126 + C24482 + C24482 + C24295 * C1144 + C31721 * C692 +
            C24483 + C24483 + C32905 * C702 + C31733 * C243 + C24484 + C24484 +
            C32898 * C263) *
               C32798 * C32720) *
              C32774 * C236 +
          ((C31733 * C244 + C24485 + C24485 + C32898 * C264 + C31721 * C1125 +
            C24486 + C24486 + C32905 * C1143 + C24300 * C1127 + C24487 +
            C24487 + C24295 * C1145) *
               C32798 * C32720 +
           (C31733 * C245 + C24488 + C24488 + C32898 * C265 + C31721 * C1124 +
            C24489 + C24489 + C32905 * C1142 + C24300 * C1129 + C24490 +
            C24490 + C24295 * C1147) *
               C32798 * C32728 +
           (C31733 * C246 + C24491 + C24491 + C32898 * C266 + C31721 * C1123 +
            C24492 + C24492 + C32905 * C1141 + C24300 * C1131 + C24493 +
            C24493 + C24295 * C1149) *
               C32798 * C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
            C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
            C24295 * C369) *
               C32798 * C32720 +
           (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
              C32774 * C32760 * C110 -
          ((C24360 + C24361 + C24362) * C32798 * C17578 +
           (C24359 + C24358 + C24357) * C32798 * C32728 +
           (C24356 + C24355 + C24354) * C32798 * C32720) *
              C32774 * C32760 * C111 +
          (C24365 * C32720 + (C24362 + C24361 + C24360) * C32798 * C32728 +
           (C31733 * C119 + C24333 + C24333 + C32898 * C133 + C31721 * C344 +
            C24334 + C24334 + C32905 * C364 + C24300 * C353 + C24335 + C24335 +
            C24295 * C373) *
               C32798 * C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(9.) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
            C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
            C24295 * C369) *
               C32798 * C32720 +
           (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
              C341 -
          ((C24300 * C2079 + C24604 + C24604 + C24295 * C2091 + C31721 * C351 +
            C24605 + C24605 + C32905 * C371 + C31733 * C346 + C24606 + C24606 +
            C32898 * C366) *
               C32798 * C17578 +
           (C24300 * C2080 + C24607 + C24607 + C24295 * C2092 + C31721 * C350 +
            C24608 + C24608 + C32905 * C370 + C31733 * C347 + C24609 + C24609 +
            C32898 * C367) *
               C32798 * C32728 +
           (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 + C31721 * C349 +
            C24611 + C24611 + C32905 * C369 + C31733 * C348 + C24612 + C24612 +
            C32898 * C368) *
               C32798 * C32720) *
              C342 +
          ((C31733 * C349 + C24613 + C24613 + C32898 * C369 + C31721 * C2081 +
            C24614 + C24614 + C32905 * C2093 + C24300 * C2082 + C24615 +
            C24615 + C24295 * C2094) *
               C32798 * C32720 +
           (C31733 * C350 + C24616 + C24616 + C32898 * C370 + C31721 * C2080 +
            C24617 + C24617 + C32905 * C2092 + C24300 * C2083 + C24618 +
            C24618 + C24295 * C2095) *
               C32798 * C32728 +
           (C31733 * C351 + C24619 + C24619 + C32898 * C371 + C31721 * C2079 +
            C24620 + C24620 + C32905 * C2091 + C24300 * C2084 + C24621 +
            C24621 + C24295 * C2096) *
               C32798 * C17578) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[93] +=
        (std::sqrt(27.) * 2 * std::pow(Pi, 2.5) *
         ((((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
             C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
             C24295 * C369) *
                C32798 * C32720 +
            (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
               C580 -
           ((C24974 + C24975 + C24976) * C32798 * C17578 +
            (C24977 + C24978 + C24979) * C32798 * C32728 +
            (C24300 * C2081 + C24610 + C24610 + C24295 * C2093 + C31721 * C349 +
             C24611 + C24611 + C32905 * C369 + C31733 * C348 + C24612 + C24612 +
             C32898 * C368) *
                C32798 * C32720) *
               C581) *
              C32760 * C468 +
          (((C24979 + C24978 + C24977) * C32798 * C32720 +
            (C24976 + C24975 + C24974) * C32798 * C32728 +
            (C31733 * C345 + C24959 + C24959 + C32898 * C365 + C31721 * C352 +
             C24960 + C24960 + C32905 * C372 + C24300 * C2443 + C24961 +
             C24961 + C24295 * C2445) *
                C32798 * C17578) *
               C581 -
           ((C24360 + C24361 + C24362) * C32798 * C17578 +
            (C24359 + C24358 + C24357) * C32798 * C32728 +
            (C24356 + C24355 + C24354) * C32798 * C32720) *
               C580) *
              C32760 * C469)) /
        (p * q * std::sqrt(p + q));
    d2ee[94] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
            C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
            C24295 * C369) *
               C32798 * C32720 +
           (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
              C32774 * C32760 * C110 -
          ((C24360 + C24361 + C24362) * C32798 * C17578 +
           (C24359 + C24358 + C24357) * C32798 * C32728 +
           (C24356 + C24355 + C24354) * C32798 * C32720) *
              C32774 * C32760 * C111 +
          (C24365 * C32720 + (C24362 + C24361 + C24360) * C32798 * C32728 +
           (C31733 * C119 + C24333 + C24333 + C32898 * C133 + C31721 * C344 +
            C24334 + C24334 + C32905 * C364 + C24300 * C353 + C24335 + C24335 +
            C24295 * C373) *
               C32798 * C17578) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((C31733 * C115 + C24303 + C24303 + C32898 * C129 + C31721 * C348 +
            C24304 + C24304 + C32905 * C368 + C24300 * C349 + C24305 + C24305 +
            C24295 * C369) *
               C32798 * C32720 +
           (C24354 + C24355 + C24356) * C32798 * C32728 + C24365 * C17578) *
              C32774 * C235 -
          ((C24300 * C1130 + C24476 + C24476 + C24295 * C1148 + C31721 * C694 +
            C24477 + C24477 + C32905 * C704 + C31733 * C241 + C24478 + C24478 +
            C32898 * C261) *
               C32798 * C17578 +
           (C24300 * C1128 + C24479 + C24479 + C24295 * C1146 + C31721 * C693 +
            C24480 + C24480 + C32905 * C703 + C31733 * C242 + C24481 + C24481 +
            C32898 * C262) *
               C32798 * C32728 +
           (C24300 * C1126 + C24482 + C24482 + C24295 * C1144 + C31721 * C692 +
            C24483 + C24483 + C32905 * C702 + C31733 * C243 + C24484 + C24484 +
            C32898 * C263) *
               C32798 * C32720) *
              C32774 * C236 +
          ((C31733 * C244 + C24485 + C24485 + C32898 * C264 + C31721 * C1125 +
            C24486 + C24486 + C32905 * C1143 + C24300 * C1127 + C24487 +
            C24487 + C24295 * C1145) *
               C32798 * C32720 +
           (C31733 * C245 + C24488 + C24488 + C32898 * C265 + C31721 * C1124 +
            C24489 + C24489 + C32905 * C1142 + C24300 * C1129 + C24490 +
            C24490 + C24295 * C1147) *
               C32798 * C32728 +
           (C31733 * C246 + C24491 + C24491 + C32898 * C266 + C31721 * C1123 +
            C24492 + C24492 + C32905 * C1141 + C24300 * C1131 + C24493 +
            C24493 + C24295 * C1149) *
               C32798 * C17578) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[95] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C32774 * C466 -
           ((C20848 + C20849) * C32798 * C33026 +
            (C20850 + C20851) * C32798 * C33075 +
            (C20852 + C20853) * C32798 * C33088 +
            (C20405 * C692 + C20568 + C20568 + C32902 * C702 + C20403 * C243 +
             C20569 + C20569 + C20401 * C263) *
                C32798 * C33095) *
               C32774 * C467) *
              C468 +
          (((C20853 + C20852) * C32798 * C33095 +
            (C20851 + C20850) * C32798 * C33088 +
            (C20849 + C20848) * C32798 * C33075 +
            (C20403 * C239 + C20834 + C20834 + C20401 * C259 + C20405 * C696 +
             C20835 + C20835 + C32902 * C706) *
                C32798 * C33026) *
               C32774 * C467 -
           ((C20458 + C20459) * C32798 * C33026 +
            (C20457 + C20456) * C32798 * C33075 +
            (C20455 + C20454) * C32798 * C33088 +
            (C20453 + C20452) * C32798 * C33095) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C32774 * C466 -
           (((C21511 + C21512) * C33057 + C21869 * C33077 + C21870 * C33089) *
                C32725 +
            ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
             (C21508 + C21507) * C33089) *
                C15817) *
               C32774 * C467) *
              C468 +
          (((C21868 * C33089 + C21474 * C33077 + (C21512 + C21511) * C33057) *
                C15817 +
            ((C20851 + C20850) * C33089 + (C21319 + C21318) * C33077 +
             (C20403 * C964 + C21871 + C21871 + C20401 * C976 + C20405 * C1639 +
              C21872 + C21872 + C32902 * C1645) *
                 C33057) *
                C32725) *
               C32774 * C467 -
           (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
             (C20455 + C20454) * C33089) *
                C32725 +
            (C21869 * C33057 + C21870 * C33077 + (C20453 + C20452) * C33089) *
                C15817) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[96] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C580 -
           ((C21010 + C21011) * C32798 * C33026 +
            (C21012 + C21013) * C32798 * C33075 +
            (C21014 + C21015) * C32798 * C33088 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C32798 * C33095) *
               C581) *
              C466 +
          (((C20403 * C692 + C21146 + C21146 + C20401 * C702 + C20405 * C1126 +
             C21147 + C21147 + C32902 * C1144) *
                C32798 * C33095 +
            (C20403 * C693 + C21148 + C21148 + C20401 * C703 + C20405 * C1128 +
             C21149 + C21149 + C32902 * C1146) *
                C32798 * C33088 +
            (C20403 * C694 + C21150 + C21150 + C20401 * C704 + C20405 * C1130 +
             C21151 + C21151 + C32902 * C1148) *
                C32798 * C33075 +
            (C20403 * C695 + C21152 + C21152 + C20401 * C705 + C20405 * C2261 +
             C21153 + C21153 + C32902 * C2263) *
                C32798 * C33026) *
               C581 -
           ((C20848 + C20849) * C32798 * C33026 +
            (C20850 + C20851) * C32798 * C33075 +
            (C20852 + C20853) * C32798 * C33088 +
            (C20405 * C692 + C20568 + C20568 + C32902 * C702 + C20403 * C243 +
             C20569 + C20569 + C20401 * C263) *
                C32798 * C33095) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C33057 + (C22087 + C22088) * C33077 +
             (C21014 + C21015) * C33089) *
                C32725 +
            ((C22303 + C22304) * C33057 + (C22305 + C22306) * C33077 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33089) *
                C15817) *
               C581) *
              C466 +
          ((((C22306 + C22305) * C33089 + (C22304 + C22303) * C33077 +
             (C20403 * C1637 + C22291 + C22291 + C20401 * C1643 +
              C20405 * C6334 + C22292 + C22292 + C32902 * C6340) *
                 C33057) *
                C15817 +
            ((C22088 + C22087) * C33089 + (C22086 + C22085) * C33077 +
             (C20403 * C1638 + C22293 + C22293 + C20401 * C1644 +
              C20405 * C7165 + C22294 + C22294 + C32902 * C7167) *
                 C33057) *
                C32725) *
               C581 -
           (((C21511 + C21512) * C33057 + C21869 * C33077 + C21870 * C33089) *
                C32725 +
            ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
             (C21508 + C21507) * C33089) *
                C15817) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[97] += (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                    C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                       C32798 * C33095 +
                   (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
                   C20463 * C33026) *
                      C32774 * C235 -
                  ((C20405 * C695 + C20562 + C20562 + C32902 * C705 +
                    C20403 * C240 + C20563 + C20563 + C20401 * C260) *
                       C32798 * C33026 +
                   (C20405 * C694 + C20564 + C20564 + C32902 * C704 +
                    C20403 * C241 + C20565 + C20565 + C20401 * C261) *
                       C32798 * C33075 +
                   (C20405 * C693 + C20566 + C20566 + C32902 * C703 +
                    C20403 * C242 + C20567 + C20567 + C20401 * C262) *
                       C32798 * C33088 +
                   (C20405 * C692 + C20568 + C20568 + C32902 * C702 +
                    C20403 * C243 + C20569 + C20569 + C20401 * C263) *
                       C32798 * C33095) *
                      C32774 * C236 +
                  ((C20403 * C244 + C20570 + C20570 + C20401 * C264 +
                    C20405 * C1125 + C20571 + C20571 + C32902 * C1143) *
                       C32798 * C33095 +
                   (C20403 * C245 + C20572 + C20572 + C20401 * C265 +
                    C20405 * C1124 + C20573 + C20573 + C32902 * C1142) *
                       C32798 * C33088 +
                   (C20403 * C246 + C20574 + C20574 + C20401 * C266 +
                    C20405 * C1123 + C20575 + C20575 + C32902 * C1141) *
                       C32798 * C33075 +
                   (C20403 * C247 + C20576 + C20576 + C20401 * C267 +
                    C20405 * C1461 + C20577 + C20577 + C32902 * C1463) *
                       C32798 * C33026) *
                      C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                    C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                       C32798 * C33095 +
                   (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
                   C20463 * C33026) *
                      C32774 * C32760 * C110 -
                  ((C20458 + C20459) * C32798 * C33026 +
                   (C20457 + C20456) * C32798 * C33075 +
                   (C20455 + C20454) * C32798 * C33088 +
                   (C20453 + C20452) * C32798 * C33095) *
                      C32774 * C32760 * C111 +
                  (C20462 * C33095 + C20463 * C33088 +
                   (C20459 + C20458) * C32798 * C33075 +
                   (C20403 * C120 + C20434 + C20434 + C20401 * C134 +
                    C20405 * C582 + C20435 + C20435 + C32902 * C584) *
                       C32798 * C33026) *
                      C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                    C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                       C32798 * C33095 +
                   (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
                   C20463 * C33026) *
                      C341 -
                  ((C20405 * C352 + C20676 + C20676 + C32902 * C372 +
                    C20403 * C345 + C20677 + C20677 + C20401 * C365) *
                       C32798 * C33026 +
                   (C20405 * C351 + C20678 + C20678 + C32902 * C371 +
                    C20403 * C346 + C20679 + C20679 + C20401 * C366) *
                       C32798 * C33075 +
                   (C20405 * C350 + C20680 + C20680 + C32902 * C370 +
                    C20403 * C347 + C20681 + C20681 + C20401 * C367) *
                       C32798 * C33088 +
                   (C20405 * C349 + C20682 + C20682 + C32902 * C369 +
                    C20403 * C348 + C20683 + C20683 + C20401 * C368) *
                       C32798 * C33095) *
                      C342 +
                  ((C20403 * C349 + C20684 + C20684 + C20401 * C369 +
                    C20405 * C2081 + C20685 + C20685 + C32902 * C2093) *
                       C32798 * C33095 +
                   (C20403 * C350 + C20686 + C20686 + C20401 * C370 +
                    C20405 * C2080 + C20687 + C20687 + C32902 * C2092) *
                       C32798 * C33088 +
                   (C20403 * C351 + C20688 + C20688 + C20401 * C371 +
                    C20405 * C2079 + C20689 + C20689 + C32902 * C2091) *
                       C32798 * C33075 +
                   (C20403 * C352 + C20690 + C20690 + C20401 * C372 +
                    C20405 * C2443 + C20691 + C20691 + C32902 * C2445) *
                       C32798 * C33026) *
                      C343) *
                 C32760 * C32748) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                     C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                        C33089 +
                    (C20403 * C243 + C20569 + C20569 + C20401 * C263 +
                     C20405 * C692 + C20568 + C20568 + C32902 * C702) *
                        C33077 +
                    (C20403 * C244 + C20570 + C20570 + C20401 * C264 +
                     C20405 * C1125 + C20571 + C20571 + C32902 * C1143) *
                        C33057) *
                       C15817 +
                   ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
                    (C21316 + C21317) * C33057) *
                       C32725) *
                      C32774 * C32760 * C110 -
                  (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
                    (C20455 + C20454) * C33089) *
                       C32725 +
                   ((C21317 + C21316) * C33057 + (C20852 + C20853) * C33077 +
                    (C20453 + C20452) * C33089) *
                       C15817) *
                      C32774 * C32760 * C111 +
                  ((C20460 * C33089 + (C20851 + C20850) * C33077 +
                    (C21319 + C21318) * C33057) *
                       C15817 +
                   (C20461 * C33089 + (C20849 + C20848) * C33077 +
                    (C20403 * C247 + C20576 + C20576 + C20401 * C267 +
                     C20405 * C1461 + C20577 + C20577 + C32902 * C1463) *
                        C33057) *
                       C32725) *
                      C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
                 ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                     C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                        C33089 +
                    (C21507 + C21508) * C33077 + C21515 * C33057) *
                       C15817 +
                   ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
                    C21474 * C33057) *
                       C32725) *
                      C32774 * C235 -
                  (((C21511 + C21512) * C33057 + (C21317 + C21316) * C33077 +
                    (C20852 + C20853) * C33089) *
                       C32725 +
                   ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
                    (C21508 + C21507) * C33089) *
                       C15817) *
                      C32774 * C236 +
                  ((C21515 * C33089 + (C21514 + C21513) * C33077 +
                    (C20403 * C967 + C21487 + C21487 + C20401 * C979 +
                     C20405 * C6333 + C21488 + C21488 + C32902 * C6339) *
                        C33057) *
                       C15817 +
                   (C21474 * C33089 + (C21512 + C21511) * C33077 +
                    (C20403 * C968 + C21489 + C21489 + C20401 * C980 +
                     C20405 * C6518 + C21490 + C21490 + C32902 * C6520) *
                        C33057) *
                       C32725) *
                      C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
                 ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                     C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                        C33089 +
                    (C21507 + C21508) * C33077 + C21515 * C33057) *
                       C15817 +
                   ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
                    C21474 * C33057) *
                       C32725) *
                      C341 -
                  (((C20405 * C1129 + C21662 + C21662 + C32902 * C1147 +
                     C20403 * C1124 + C21663 + C21663 + C20401 * C1142) *
                        C33057 +
                    (C20405 * C1128 + C21149 + C21149 + C32902 * C1146 +
                     C20403 * C693 + C21148 + C21148 + C20401 * C703) *
                        C33077 +
                    (C21014 + C21015) * C33089) *
                       C32725 +
                   ((C20405 * C1127 + C21664 + C21664 + C32902 * C1145 +
                     C20403 * C1125 + C21665 + C21665 + C20401 * C1143) *
                        C33057 +
                    (C20405 * C1126 + C21147 + C21147 + C32902 * C1144 +
                     C20403 * C692 + C21146 + C21146 + C20401 * C702) *
                        C33077 +
                    (C20405 * C349 + C20682 + C20682 + C32902 * C369 +
                     C20403 * C348 + C20683 + C20683 + C20401 * C368) *
                        C33089) *
                       C15817) *
                      C342 +
                  (((C20403 * C349 + C20684 + C20684 + C20401 * C369 +
                     C20405 * C2081 + C20685 + C20685 + C32902 * C2093) *
                        C33089 +
                    (C20403 * C1126 + C21666 + C21666 + C20401 * C1144 +
                     C20405 * C2625 + C21667 + C21667 + C32902 * C2631) *
                        C33077 +
                    (C20403 * C1127 + C21668 + C21668 + C20401 * C1145 +
                     C20405 * C7001 + C21669 + C21669 + C32902 * C7007) *
                        C33057) *
                       C15817 +
                   ((C20403 * C350 + C20686 + C20686 + C20401 * C370 +
                     C20405 * C2080 + C20687 + C20687 + C32902 * C2092) *
                        C33089 +
                    (C20403 * C1128 + C21670 + C21670 + C20401 * C1146 +
                     C20405 * C2626 + C21671 + C21671 + C32902 * C2632) *
                        C33077 +
                    (C20403 * C1129 + C21672 + C21672 + C20401 * C1147 +
                     C20405 * C7332 + C21673 + C21673 + C32902 * C7334) *
                        C33057) *
                       C32725) *
                      C343) *
                 C32760 * C32748) /
                    (p * q * std::sqrt(p + q));
    d2ee[98] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
             C20409 + C20409 + C32902 * C368) *
                C32798 * C33095 +
            (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
            C20463 * C33026) *
               C580 -
           ((C21010 + C21011) * C32798 * C33026 +
            (C21012 + C21013) * C32798 * C33075 +
            (C21014 + C21015) * C32798 * C33088 +
            (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
             C20683 + C20683 + C20401 * C368) *
                C32798 * C33095) *
               C581) *
              C32760 * C468 +
          (((C21015 + C21014) * C32798 * C33095 +
            (C21013 + C21012) * C32798 * C33088 +
            (C21011 + C21010) * C32798 * C33075 +
            (C20403 * C344 + C20996 + C20996 + C20401 * C364 + C20405 * C353 +
             C20997 + C20997 + C32902 * C373) *
                C32798 * C33026) *
               C581 -
           ((C20458 + C20459) * C32798 * C33026 +
            (C20457 + C20456) * C32798 * C33075 +
            (C20455 + C20454) * C32798 * C33088 +
            (C20453 + C20452) * C32798 * C33095) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C20403 * C115 + C20408 + C20408 + C20401 * C129 + C20405 * C348 +
              C20409 + C20409 + C32902 * C368) *
                 C33089 +
             (C21507 + C21508) * C33077 + C21515 * C33057) *
                C15817 +
            ((C20452 + C20453) * C33089 + C21868 * C33077 + C21474 * C33057) *
                C32725) *
               C580 -
           (((C22085 + C22086) * C33057 + (C22087 + C22088) * C33077 +
             (C21014 + C21015) * C33089) *
                C32725 +
            ((C20405 * C1127 + C21664 + C21664 + C32902 * C1145 +
              C20403 * C1125 + C21665 + C21665 + C20401 * C1143) *
                 C33057 +
             (C20405 * C1126 + C21147 + C21147 + C32902 * C1144 +
              C20403 * C692 + C21146 + C21146 + C20401 * C702) *
                 C33077 +
             (C20405 * C349 + C20682 + C20682 + C32902 * C369 + C20403 * C348 +
              C20683 + C20683 + C20401 * C368) *
                 C33089) *
                C15817) *
               C581) *
              C32760 * C468 +
          ((((C21015 + C21014) * C33089 + (C22088 + C22087) * C33077 +
             (C22086 + C22085) * C33057) *
                C15817 +
            ((C21013 + C21012) * C33089 +
             (C20403 * C694 + C21150 + C21150 + C20401 * C704 + C20405 * C1130 +
              C21151 + C21151 + C32902 * C1148) *
                 C33077 +
             (C20403 * C1123 + C22075 + C22075 + C20401 * C1141 +
              C20405 * C1131 + C22076 + C22076 + C32902 * C1149) *
                 C33057) *
                C32725) *
               C581 -
           (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
             (C20455 + C20454) * C33089) *
                C32725 +
            (C21869 * C33057 + C21870 * C33077 + (C20453 + C20452) * C33089) *
                C15817) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[99] += (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                    C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                       C32798 * C33095 +
                   (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
                   C20463 * C33026) *
                      C32774 * C32760 * C110 -
                  ((C20458 + C20459) * C32798 * C33026 +
                   (C20457 + C20456) * C32798 * C33075 +
                   (C20455 + C20454) * C32798 * C33088 +
                   (C20453 + C20452) * C32798 * C33095) *
                      C32774 * C32760 * C111 +
                  (C20462 * C33095 + C20463 * C33088 +
                   (C20459 + C20458) * C32798 * C33075 +
                   (C20403 * C120 + C20434 + C20434 + C20401 * C134 +
                    C20405 * C582 + C20435 + C20435 + C32902 * C584) *
                       C32798 * C33026) *
                      C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 (((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                    C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                       C32798 * C33095 +
                   (C20452 + C20453) * C32798 * C33088 + C20462 * C33075 +
                   C20463 * C33026) *
                      C32774 * C235 -
                  ((C20405 * C695 + C20562 + C20562 + C32902 * C705 +
                    C20403 * C240 + C20563 + C20563 + C20401 * C260) *
                       C32798 * C33026 +
                   (C20405 * C694 + C20564 + C20564 + C32902 * C704 +
                    C20403 * C241 + C20565 + C20565 + C20401 * C261) *
                       C32798 * C33075 +
                   (C20405 * C693 + C20566 + C20566 + C32902 * C703 +
                    C20403 * C242 + C20567 + C20567 + C20401 * C262) *
                       C32798 * C33088 +
                   (C20405 * C692 + C20568 + C20568 + C32902 * C702 +
                    C20403 * C243 + C20569 + C20569 + C20401 * C263) *
                       C32798 * C33095) *
                      C32774 * C236 +
                  ((C20403 * C244 + C20570 + C20570 + C20401 * C264 +
                    C20405 * C1125 + C20571 + C20571 + C32902 * C1143) *
                       C32798 * C33095 +
                   (C20403 * C245 + C20572 + C20572 + C20401 * C265 +
                    C20405 * C1124 + C20573 + C20573 + C32902 * C1142) *
                       C32798 * C33088 +
                   (C20403 * C246 + C20574 + C20574 + C20401 * C266 +
                    C20405 * C1123 + C20575 + C20575 + C32902 * C1141) *
                       C32798 * C33075 +
                   (C20403 * C247 + C20576 + C20576 + C20401 * C267 +
                    C20405 * C1461 + C20577 + C20577 + C32902 * C1463) *
                       C32798 * C33026) *
                      C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q)) -
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                     C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                        C33089 +
                    (C20403 * C243 + C20569 + C20569 + C20401 * C263 +
                     C20405 * C692 + C20568 + C20568 + C32902 * C702) *
                        C33077 +
                    (C20403 * C244 + C20570 + C20570 + C20401 * C264 +
                     C20405 * C1125 + C20571 + C20571 + C32902 * C1143) *
                        C33057) *
                       C15817 +
                   ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
                    (C21316 + C21317) * C33057) *
                       C32725) *
                      C32774 * C32760 * C110 -
                  (((C21318 + C21319) * C33057 + (C20850 + C20851) * C33077 +
                    (C20455 + C20454) * C33089) *
                       C32725 +
                   ((C21317 + C21316) * C33057 + (C20852 + C20853) * C33077 +
                    (C20453 + C20452) * C33089) *
                       C15817) *
                      C32774 * C32760 * C111 +
                  ((C20460 * C33089 + (C20851 + C20850) * C33077 +
                    (C21319 + C21318) * C33057) *
                       C15817 +
                   (C20461 * C33089 + (C20849 + C20848) * C33077 +
                    (C20403 * C247 + C20576 + C20576 + C20401 * C267 +
                     C20405 * C1461 + C20577 + C20577 + C32902 * C1463) *
                        C33057) *
                       C32725) *
                      C32774 * C32760 * C112)) /
                    (p * q * std::sqrt(p + q)) +
                (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
                 ((((C20403 * C115 + C20408 + C20408 + C20401 * C129 +
                     C20405 * C348 + C20409 + C20409 + C32902 * C368) *
                        C33089 +
                    (C21507 + C21508) * C33077 + C21515 * C33057) *
                       C15817 +
                   ((C20452 + C20453) * C33089 + (C20853 + C20852) * C33077 +
                    C21474 * C33057) *
                       C32725) *
                      C32774 * C235 -
                  (((C21511 + C21512) * C33057 + (C21317 + C21316) * C33077 +
                    (C20852 + C20853) * C33089) *
                       C32725 +
                   ((C21513 + C21514) * C33057 + (C21510 + C21509) * C33077 +
                    (C21508 + C21507) * C33089) *
                       C15817) *
                      C32774 * C236 +
                  ((C21515 * C33089 + (C21514 + C21513) * C33077 +
                    (C20403 * C967 + C21487 + C21487 + C20401 * C979 +
                     C20405 * C6333 + C21488 + C21488 + C32902 * C6339) *
                        C33057) *
                       C15817 +
                   (C21474 * C33089 + (C21512 + C21511) * C33077 +
                    (C20403 * C968 + C21489 + C21489 + C20401 * C980 +
                     C20405 * C6518 + C21490 + C21490 + C32902 * C6520) *
                        C33057) *
                       C32725) *
                      C32774 * C237) *
                 C32748) /
                    (p * q * std::sqrt(p + q));
    d2ee[100] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C32774 * C466 -
           ((C3085 + C3086) * C33026 + (C3087 + C3088) * C2745 +
            (C3089 + C3090) * C2744 +
            (C1010 * C32860 + C1009 * C33025) * C2743) *
               C32774 * C467) *
              C468 +
          (((C3090 + C3089) * C2743 + (C3088 + C3087) * C2744 +
            (C3086 + C3085) * C2745 +
            (C491 * C33025 +
             (C113 * C248 + C279 + C279 + C32815 * C268) * C32860) *
                C33026) *
               C32774 * C467 -
           ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
            (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C32774 * C466 -
           ((C7960 + C7961 + C7962 + C7963) * C32725 +
            (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C7963 + C7962 + C7961 + C7960) * C33007 +
            (C493 * C7618 + C849 * C7619 + C1011 * C7620 +
             (C113 * C969 + C998 + C998 + C32815 * C981) * C33034) *
                C32725) *
               C32774 * C467 -
           ((C7629 + C7630 + C7631 + C7632) * C32725 +
            (C7628 + C7627 + C7626 + C7625) * C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[101] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C580 -
           ((C3231 + C3223) * C33026 + (C3224 + C3225) * C2745 +
            (C3226 + C3227) * C2744 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
                C2743) *
               C581) *
              C466 +
          (((C1659 * C33025 + C1658 * C32860) * C2743 +
            (C1487 * C33025 + C1486 * C32860) * C2744 +
            (C1485 * C33025 + C1484 * C32860) * C2745 +
            (C3230 * C33025 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C32860) *
                C33026) *
               C581 -
           ((C3085 + C3086) * C33026 + (C3087 + C3088) * C2745 +
            (C3089 + C3090) * C2744 +
            (C1010 * C32860 + C1009 * C33025) * C2743) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C580 -
           ((C8102 + C8096 + C8097 + C8098) * C32725 +
            (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
                C33007) *
               C581) *
              C466 +
          (((C1659 * C7618 + C1658 * C7619 + C6618 * C7620 + C6617 * C33034) *
                C33007 +
            (C1487 * C7618 + C1486 * C7619 + C8101 * C7620 +
             (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C33034) *
                C32725) *
               C581 -
           ((C7960 + C7961 + C7962 + C7963) * C32725 +
            (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
                C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[102] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C33025) * C33026 +
           (C849 * C32860 + C493 * C33025) * C2745 +
           (C848 * C32860 + C494 * C33025) * C2744 +
           (C1010 * C32860 + C1009 * C33025) * C2743) *
              C32774 * C236 +
          ((C1010 * C33025 + C1013 * C32860) * C2743 +
           (C848 * C33025 + C1012 * C32860) * C2744 +
           (C849 * C33025 + C1011 * C32860) * C2745 +
           (C850 * C33025 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C32760 * C110 -
          ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
           (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
              C32774 * C32760 * C111 +
          (C2756 * C2743 + C2757 * C2744 + (C2755 + C2754) * C2745 +
           (C168 * C33025 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C341 -
          (((C113 * C695 + C711 + C711 + C32815 * C705) * C32860 +
            C604 * C33025) *
               C33026 +
           (C1485 * C32860 + C605 * C33025) * C2745 +
           (C1487 * C32860 + C606 * C33025) * C2744 +
           (C1659 * C32860 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
               C2743) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33025 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C32860) *
               C2743 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33025 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C32860) *
               C2744 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C33025 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C32860) *
               C2745 +
           ((C113 * C352 + C383 + C383 + C32815 * C372) * C33025 +
            (C113 * C2261 + C2954 + C2954 + C32815 * C2263) * C32860) *
               C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C32760 * C110 -
          ((C7629 + C7630 + C7631 + C7632) * C32725 +
           (C7628 + C7627 + C7626 + C7625) * C33007) *
              C32774 * C32760 * C111 +
          ((C7632 + C7631 + C7630 + C7629) * C33007 +
           (C166 * C7618 + C492 * C7619 + C850 * C7620 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C7620 + C848 * C7619 + C494 * C7618) *
               C32725 +
           (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
               C33007) *
              C32774 * C236 +
          ((C1010 * C7618 + C1013 * C7619 + C6270 * C7620 + C6271 * C33034) *
               C33007 +
           (C848 * C7618 + C1012 * C7619 + C6436 * C7620 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C341 -
          (((C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33034 +
            C1486 * C7620 + C1487 * C7619 + C606 * C7618) *
               C32725 +
           (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
               C33007) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C7618 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C7619 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C7620 +
            (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C33034) *
               C33007 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C7618 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C7619 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C7620 +
            (C113 * C7165 + C7829 + C7829 + C32815 * C7167) * C33034) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[103] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
             C1009 * C32860) *
                C2743 +
            (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
               C580 -
           ((C3231 + C3223) * C33026 + (C3224 + C3225) * C2745 +
            (C3226 + C3227) * C2744 +
            (C1659 * C32860 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33025) *
                C2743) *
               C581) *
              C32760 * C468 +
          (((C3227 + C3226) * C2743 + (C3225 + C3224) * C2744 +
            (C3223 + C3231) * C2745 +
            (C603 * C33025 +
             (C113 * C696 + C712 + C712 + C32815 * C706) * C32860) *
                C33026) *
               C581 -
           ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
            (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
             C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
                C33007 +
            (C7625 + C7626 + C7627 + C7628) * C32725) *
               C580 -
           ((C8102 + C8096 + C8097 + C8098) * C32725 +
            (C6618 * C33034 + C1658 * C7620 + C1659 * C7619 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C7618) *
                C33007) *
               C581) *
              C32760 * C468 +
          (((C8098 + C8097 + C8096 + C8102) * C33007 +
            (C605 * C7618 + C1485 * C7619 + C1484 * C7620 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33034) *
                C32725) *
               C581 -
           ((C7629 + C7630 + C7631 + C7632) * C32725 +
            (C7628 + C7627 + C7626 + C7625) * C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[104] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C32760 * C110 -
          ((C2754 + C2755) * C33026 + (C2753 + C2752) * C2745 +
           (C2751 + C2750) * C2744 + (C2749 + C2748) * C2743) *
              C32774 * C32760 * C111 +
          (C2756 * C2743 + C2757 * C2744 + (C2755 + C2754) * C2745 +
           (C168 * C33025 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32860) *
               C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33025 +
            C1009 * C32860) *
               C2743 +
           (C2748 + C2749) * C2744 + C2756 * C2745 + C2757 * C33026) *
              C32774 * C235 -
          ((C850 * C32860 + C492 * C33025) * C33026 +
           (C849 * C32860 + C493 * C33025) * C2745 +
           (C848 * C32860 + C494 * C33025) * C2744 +
           (C1010 * C32860 + C1009 * C33025) * C2743) *
              C32774 * C236 +
          ((C1010 * C33025 + C1013 * C32860) * C2743 +
           (C848 * C33025 + C1012 * C32860) * C2744 +
           (C849 * C33025 + C1011 * C32860) * C2745 +
           (C850 * C33025 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C32860) *
               C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C32760 * C110 -
          ((C7629 + C7630 + C7631 + C7632) * C32725 +
           (C7628 + C7627 + C7626 + C7625) * C33007) *
              C32774 * C32760 * C111 +
          ((C7632 + C7631 + C7630 + C7629) * C33007 +
           (C166 * C7618 + C492 * C7619 + C850 * C7620 +
            (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33034) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C7618 +
            C1009 * C7619 + C1010 * C7620 + C1013 * C33034) *
               C33007 +
           (C7625 + C7626 + C7627 + C7628) * C32725) *
              C32774 * C235 -
          ((C6436 * C33034 + C1012 * C7620 + C848 * C7619 + C494 * C7618) *
               C32725 +
           (C6270 * C33034 + C1013 * C7620 + C1010 * C7619 + C1009 * C7618) *
               C33007) *
              C32774 * C236 +
          ((C1010 * C7618 + C1013 * C7619 + C6270 * C7620 + C6271 * C33034) *
               C33007 +
           (C848 * C7618 + C1012 * C7619 + C6436 * C7620 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C33034) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[105] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C32774 * C466 -
           (((C4548 + C4549) * C32860 + C4901 * C33025) * C33048 +
            ((C4550 + C4551) * C32860 + C4902 * C33025) * C826 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
               C32774 * C467) *
              C468 +
          (((C4900 * C33025 + (C4551 + C4550) * C32860) * C825 +
            (C4359 * C33025 + (C4549 + C4548) * C32860) * C826 +
            ((C3907 + C3906) * C33025 +
             (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
              C3635 + C3635 + C32902 * C1463) *
                 C32860) *
                C33048) *
               C32774 * C467 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
            (C4901 * C32860 + (C3513 + C3512) * C33025) * C826 +
            (C4902 * C32860 + (C3511 + C3510) * C33025) * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C32774 * C466 -
           ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
            (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
               C32715 * C32774 * C467) *
              C468 +
          ((C4900 * C7618 + C8526 * C7619 + (C8548 + C8547) * C7620 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33034) *
               C32715 * C32774 * C467 -
           ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
            (C3511 + C3510) * C7618) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[106] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C33025) * C33048 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C33025) * C826 +
            ((C5325 + C5326) * C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C33025) *
                C825) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C33025 +
             (C3461 * C1125 + C5315 + C5315 + C33027 * C1143 + C3463 * C1127 +
              C5316 + C5316 + C32902 * C1145) *
                 C32860) *
                C825 +
            ((C5116 + C5115) * C33025 +
             (C3461 * C1124 + C5317 + C5317 + C33027 * C1142 + C3463 * C1129 +
              C5318 + C5318 + C32902 * C1147) *
                 C32860) *
                C826 +
            ((C5114 + C5113) * C33025 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C32860) *
                C33048) *
               C581 -
           (((C4548 + C4549) * C32860 + C4901 * C33025) * C33048 +
            ((C4550 + C4551) * C32860 + C4902 * C33025) * C826 +
            ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C580 -
           ((C10017 + C10018) * C33034 + (C9306 + C9307) * C7620 +
            (C5325 + C5326) * C7619 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C7618) *
               C32715 * C581) *
              C466 +
          (((C5326 + C5325) * C7618 + (C9307 + C9306) * C7619 +
            (C10018 + C10017) * C7620 +
            (C3461 * C6333 + C10011 + C10011 + C33027 * C6339 + C3463 * C6335 +
             C10012 + C10012 + C32902 * C6341) *
                C33034) *
               C32715 * C581 -
           ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
            (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[107] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C4546 + C4547) * C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C235 -
          (((C4548 + C4549) * C32860 + (C3908 + C3909) * C33025) * C33048 +
           ((C4550 + C4551) * C32860 + (C3910 + C3911) * C33025) * C826 +
           ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
              C32774 * C236 +
          (((C4553 + C4552) * C33025 +
            (C3461 * C966 + C4524 + C4524 + C33027 * C978 + C3463 * C1637 +
             C4525 + C4525 + C32902 * C1643) *
                C32860) *
               C825 +
           ((C4551 + C4550) * C33025 +
            (C3461 * C965 + C4526 + C4526 + C33027 * C977 + C3463 * C1638 +
             C4527 + C4527 + C32902 * C1644) *
                C32860) *
               C826 +
           ((C4549 + C4548) * C33025 +
            (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
             C4529 + C4529 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C3461 * C243 + C3627 + C3627 + C33027 * C263 + C3463 * C692 +
             C3626 + C3626 + C32902 * C702) *
                C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C32760 * C110 -
          (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
           ((C3908 + C3909) * C32860 + (C3513 + C3512) * C33025) * C826 +
           ((C3910 + C3911) * C32860 + (C3511 + C3510) * C33025) * C825) *
              C32774 * C32760 * C111 +
          (C4361 * C825 + (C3519 * C33025 + (C3907 + C3906) * C32860) * C826 +
           ((C3517 + C3516) * C33025 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C4546 + C4547) * C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C341 -
          (((C3463 * C1130 + C4209 + C4209 + C32902 * C1148 + C3461 * C694 +
             C4208 + C4208 + C33027 * C704) *
                C32860 +
            (C4070 + C4071) * C33025) *
               C33048 +
           ((C3463 * C1128 + C4207 + C4207 + C32902 * C1146 + C3461 * C693 +
             C4206 + C4206 + C33027 * C703) *
                C32860 +
            (C4072 + C4073) * C33025) *
               C826 +
           ((C3463 * C1126 + C4205 + C4205 + C32902 * C1144 + C3461 * C692 +
             C4204 + C4204 + C33027 * C702) *
                C32860 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C33025) *
               C825) *
              C342 +
          (((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
             C3743 + C3743 + C32902 * C2093) *
                C33025 +
            (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
             C4701 + C4701 + C32902 * C2631) *
                C32860) *
               C825 +
           ((C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
             C3745 + C3745 + C32902 * C2092) *
                C33025 +
            (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 + C3463 * C2626 +
             C4703 + C4703 + C32902 * C2632) *
                C32860) *
               C826 +
           ((C3461 * C351 + C3746 + C3746 + C33027 * C371 + C3463 * C2079 +
             C3747 + C3747 + C32902 * C2091) *
                C33025 +
            (C3461 * C1130 + C4704 + C4704 + C33027 * C1148 + C3463 * C2627 +
             C4705 + C4705 + C32902 * C2633) *
                C32860) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + (C8550 + C8549) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
           (C3511 + C3510) * C7618) *
              C32715 * C32774 * C32760 * C111 +
          (C3518 * C7618 + C4359 * C7619 + (C4549 + C4548) * C7620 +
           (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
            C4529 + C4529 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C32774 * C235 -
          ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
           (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
              C32715 * C32774 * C236 +
          (C8525 * C7618 + C9504 * C7619 + (C9516 + C9515) * C7620 +
           (C3461 * C6253 + C9509 + C9509 + C33027 * C6257 + C3463 * C6604 +
            C9510 + C9510 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C341 -
          ((C3463 * C6334 + C9299 + C9299 + C32902 * C6340 + C3461 * C1637 +
            C9298 + C9298 + C33027 * C1643) *
               C33034 +
           (C9306 + C9307) * C7620 + (C5325 + C5326) * C7619 +
           (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
            C3741 + C3741 + C33027 * C368) *
               C7618) *
              C32715 * C342 +
          ((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
            C3743 + C3743 + C32902 * C2093) *
               C7618 +
           (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
            C4701 + C4701 + C32902 * C2631) *
               C7619 +
           (C3461 * C1127 + C8697 + C8697 + C33027 * C1145 + C3463 * C7001 +
            C8698 + C8698 + C32902 * C7007) *
               C7620 +
           (C3461 * C6334 + C9615 + C9615 + C33027 * C6340 + C3463 * C7484 +
            C9616 + C9616 + C32902 * C7486) *
               C33034) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[108] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C33025 +
             (C4546 + C4547) * C32860) *
                C825 +
            ((C3510 + C3511) * C33025 + C4900 * C32860) * C826 +
            C4361 * C33048) *
               C580 -
           (((C5113 + C5114) * C32860 + (C4070 + C4071) * C33025) * C33048 +
            ((C5115 + C5116) * C32860 + (C4072 + C4073) * C33025) * C826 +
            ((C3463 * C1126 + C4205 + C4205 + C32902 * C1144 + C3461 * C692 +
              C4204 + C4204 + C33027 * C702) *
                 C32860 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C33025) *
                C825) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C33025 + (C5116 + C5115) * C32860) * C825 +
            ((C4071 + C4070) * C33025 + (C5114 + C5113) * C32860) * C826 +
            ((C4069 + C4068) * C33025 +
             (C3461 * C695 + C4210 + C4210 + C33027 * C705 + C3463 * C2261 +
              C4211 + C4211 + C32902 * C2263) *
                 C32860) *
                C33048) *
               C581 -
           (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
            (C4901 * C32860 + (C3513 + C3512) * C33025) * C826 +
            (C4902 * C32860 + (C3511 + C3510) * C33025) * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C7618 +
            (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
               C32715 * C580 -
           ((C3463 * C6334 + C9299 + C9299 + C32902 * C6340 + C3461 * C1637 +
             C9298 + C9298 + C33027 * C1643) *
                C33034 +
            (C9306 + C9307) * C7620 + (C5325 + C5326) * C7619 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C7618) *
               C32715 * C581) *
              C32760 * C468 +
          (((C4073 + C4072) * C7618 + (C5116 + C5115) * C7619 +
            (C9099 + C9098) * C7620 +
            (C3461 * C1638 + C9300 + C9300 + C33027 * C1644 + C3463 * C7165 +
             C9301 + C9301 + C32902 * C7167) *
                C33034) *
               C32715 * C581 -
           ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
            (C3511 + C3510) * C7618) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[109] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C3461 * C243 + C3627 + C3627 + C33027 * C263 + C3463 * C692 +
             C3626 + C3626 + C32902 * C702) *
                C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C32760 * C110 -
          (((C3906 + C3907) * C32860 + (C3515 + C3514) * C33025) * C33048 +
           ((C3908 + C3909) * C32860 + (C3513 + C3512) * C33025) * C826 +
           ((C3910 + C3911) * C32860 + (C3511 + C3510) * C33025) * C825) *
              C32774 * C32760 * C111 +
          (C4361 * C825 + (C3519 * C33025 + (C3907 + C3906) * C32860) * C826 +
           ((C3517 + C3516) * C33025 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32860) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C33025 +
            (C4546 + C4547) * C32860) *
               C825 +
           ((C3510 + C3511) * C33025 + (C3911 + C3910) * C32860) * C826 +
           C4361 * C33048) *
              C32774 * C235 -
          (((C4548 + C4549) * C32860 + (C3908 + C3909) * C33025) * C33048 +
           ((C4550 + C4551) * C32860 + (C3910 + C3911) * C33025) * C826 +
           ((C4552 + C4553) * C32860 + (C4547 + C4546) * C33025) * C825) *
              C32774 * C236 +
          (((C4553 + C4552) * C33025 +
            (C3461 * C966 + C4524 + C4524 + C33027 * C978 + C3463 * C1637 +
             C4525 + C4525 + C32902 * C1643) *
                C32860) *
               C825 +
           ((C4551 + C4550) * C33025 +
            (C3461 * C965 + C4526 + C4526 + C33027 * C977 + C3463 * C1638 +
             C4527 + C4527 + C32902 * C1644) *
                C32860) *
               C826 +
           ((C4549 + C4548) * C33025 +
            (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
             C4529 + C4529 + C32902 * C1645) *
                C32860) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + (C8550 + C8549) * C33034) *
              C32715 * C32774 * C32760 * C110 -
          ((C8547 + C8548) * C33034 + C8895 * C7620 + C4902 * C7619 +
           (C3511 + C3510) * C7618) *
              C32715 * C32774 * C32760 * C111 +
          (C3518 * C7618 + C4359 * C7619 + (C4549 + C4548) * C7620 +
           (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
            C4529 + C4529 + C32902 * C1645) *
               C33034) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C7618 +
           (C4546 + C4547) * C7619 + C8525 * C7620 + C9504 * C33034) *
              C32715 * C32774 * C235 -
          ((C9515 + C9516) * C33034 + (C8549 + C8550) * C7620 +
           (C4552 + C4553) * C7619 + (C4547 + C4546) * C7618) *
              C32715 * C32774 * C236 +
          (C8525 * C7618 + C9504 * C7619 + (C9516 + C9515) * C7620 +
           (C3461 * C6253 + C9509 + C9509 + C33027 * C6257 + C3463 * C6604 +
            C9510 + C9510 + C32902 * C6606) *
               C33034) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[110] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C32774 * C466 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C32774 * C467) *
              C468 +
          (((C1314 + C1313 + C1312) * C825 + (C1311 + C1310 + C1309) * C826 +
            (C492 * C33089 + C850 * C33077 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C32774 * C466 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C32774 * C467) *
              C468 +
          ((C498 * C103 + C497 * C104 + C496 * C105 + C495 * C106 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32798 * C107) *
               C32774 * C467 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C32774 * C466 -
           ((C2292 + C2293 + C2294) * C32798 * C33048 +
            (C2295 + C2296 + C2297) * C32798 * C826 +
            (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
             C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
             C33090 * C263) *
                C32798 * C825) *
               C32774 * C467) *
              C468 +
          (((C2297 + C2296 + C2295) * C32798 * C825 +
            (C2294 + C2293 + C2292) * C32798 * C826 +
            (C1772 * C240 + C2277 + C2277 + C33090 * C260 + C1774 * C695 +
             C2278 + C2278 + C33079 * C705 + C1776 * C2261 + C2279 + C2279 +
             C33060 * C2263) *
                C32798 * C33048) *
               C32774 * C467 -
           ((C1836 + C1837 + C1838) * C32798 * C33048 +
            (C1835 + C1834 + C1833) * C32798 * C826 +
            (C1832 + C1831 + C1830) * C32798 * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C32774 * C466 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C32774 * C467) *
              C468 +
          (((C5825 + C5824 + C5823) * C33086 +
            (C5822 + C5821 + C5820) * C33073 +
            (C492 * C5436 + C850 * C5437 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C32774 * C466 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C32774 * C467) *
              C468 +
          ((C494 * C6185 + C848 * C6186 + C1012 * C6187 + C6436 * C6188 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C6189) *
               C32715 * C32774 * C467 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C32774 * C466 -
           ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
            (C6883 + C6882 + C6881) * C5436) *
               C32715 * C32774 * C467) *
              C468 +
          (((C2297 + C2296 + C2295) * C5436 + (C7184 + C7185 + C7186) * C5437 +
            (C1772 * C965 + C7175 + C7175 + C33090 * C977 + C1774 * C1638 +
             C7176 + C7176 + C33079 * C1644 + C1776 * C7165 + C7177 + C7177 +
             C33060 * C7167) *
                C33057) *
               C32715 * C32774 * C467 -
           ((C7186 + C7185 + C7184) * C33057 + (C2295 + C2296 + C2297) * C5437 +
            (C1832 + C1831 + C1830) * C5436) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[111] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            (C1658 * C33057 + C1659 * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C466 +
          (((C1659 * C33089 + C1658 * C33077 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C825 +
            (C1487 * C33089 + C1486 * C33077 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C826 +
            (C1485 * C33089 + C1484 * C33077 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C466 +
          (((C113 * C692 + C708 + C708 + C32815 * C702) * C32798 * C103 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C32798 * C104 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C32798 * C105 +
            (C113 * C695 + C711 + C711 + C32815 * C705) * C32798 * C106 +
            (C113 * C696 + C712 + C712 + C32815 * C706) * C32798 * C107) *
               C581 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C580 -
           ((C2474 + C2475 + C2476) * C32798 * C33048 +
            (C2477 + C2478 + C2479) * C32798 * C826 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C32798 * C825) *
               C581) *
              C466 +
          (((C1772 * C692 + C2635 + C2635 + C33090 * C702 + C1774 * C1126 +
             C2636 + C2636 + C33079 * C1144 + C1776 * C2625 + C2637 + C2637 +
             C33060 * C2631) *
                C32798 * C825 +
            (C1772 * C693 + C2638 + C2638 + C33090 * C703 + C1774 * C1128 +
             C2639 + C2639 + C33079 * C1146 + C1776 * C2626 + C2640 + C2640 +
             C33060 * C2632) *
                C32798 * C826 +
            (C1772 * C694 + C2641 + C2641 + C33090 * C704 + C1774 * C1130 +
             C2642 + C2642 + C33079 * C1148 + C1776 * C2627 + C2643 + C2643 +
             C33060 * C2633) *
                C32798 * C33048) *
               C581 -
           ((C2292 + C2293 + C2294) * C32798 * C33048 +
            (C2295 + C2296 + C2297) * C32798 * C826 +
            (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
             C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
             C33090 * C263) *
                C32798 * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C466 +
          (((C1659 * C5436 + C1658 * C5437 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C33086 +
            (C1487 * C5436 + C1486 * C5437 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C33073 +
            (C1485 * C5436 + C1484 * C5437 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           (C6617 * C6189 + C6618 * C6188 + C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C466 +
          ((C1659 * C6185 + C1658 * C6186 + C6618 * C6187 + C6617 * C6188 +
            (C113 * C6604 + C6612 + C6612 + C32815 * C6606) * C6189) *
               C32715 * C581 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C580 -
           ((C7515 + C7516 + C7517) * C33057 + (C7518 + C7519 + C7520) * C5437 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C5436) *
               C32715 * C581) *
              C466 +
          (((C7520 + C7519 + C7518) * C5436 + (C7517 + C7516 + C7515) * C5437 +
            (C1772 * C1637 + C7500 + C7500 + C33090 * C1643 + C1774 * C6334 +
             C7501 + C7501 + C33079 * C6340 + C1776 * C7484 + C7502 + C7502 +
             C33060 * C7486) *
                C33057) *
               C32715 * C581 -
           ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
            (C6883 + C6882 + C6881) * C5436) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[112] +=
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C32760 * C110 -
              (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
               C169 * C103) *
                  C32774 * C32760 * C111 +
              (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
               (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
                  C32774 * C32760 * C112) +
         std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
             (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
               C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
                  C32774 * C235 -
              ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
               (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
               (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
               (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
               (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
                  C32774 * C236 +
              ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
               (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
               (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
               (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
               (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
                  C32774 * C237) *
             C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C341 -
          ((C113 * C344 + C375 + C375 + C32815 * C364) * C32798 * C107 +
           (C113 * C345 + C376 + C376 + C32815 * C365) * C32798 * C106 +
           (C113 * C346 + C377 + C377 + C32815 * C366) * C32798 * C105 +
           (C113 * C347 + C378 + C378 + C32815 * C367) * C32798 * C104 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
              C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C32798 * C103 +
           (C113 * C350 + C381 + C381 + C32815 * C370) * C32798 * C104 +
           (C113 * C351 + C382 + C382 + C32815 * C371) * C32798 * C105 +
           (C113 * C352 + C383 + C383 + C32815 * C372) * C32798 * C106 +
           (C113 * C353 + C384 + C384 + C32815 * C373) * C32798 * C107) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C341 -
          (((C113 * C1123 + C1151 + C1151 + C32815 * C1141) * C33057 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C33077 +
            C605 * C33089) *
               C33048 +
           ((C113 * C1124 + C1152 + C1152 + C32815 * C1142) * C33057 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C33077 +
            C606 * C33089) *
               C826 +
           ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
            (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
               C825) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33089 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33077 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C825 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33089 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33077 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C826 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C33089 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C33077 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C32760 * C110 -
          ((C1836 + C1837 + C1838) * C32798 * C33048 +
           (C1835 + C1834 + C1833) * C32798 * C826 +
           (C1832 + C1831 + C1830) * C32798 * C825) *
              C32774 * C32760 * C111 +
          (C1841 * C825 + (C1838 + C1837 + C1836) * C32798 * C826 +
           (C1772 * C119 + C1809 + C1809 + C33090 * C133 + C1774 * C344 +
            C1810 + C1810 + C33079 * C364 + C1776 * C353 + C1811 + C1811 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C235 -
          ((C1776 * C1130 + C1952 + C1952 + C33060 * C1148 + C1774 * C694 +
            C1953 + C1953 + C33079 * C704 + C1772 * C241 + C1954 + C1954 +
            C33090 * C261) *
               C32798 * C33048 +
           (C1776 * C1128 + C1955 + C1955 + C33060 * C1146 + C1774 * C693 +
            C1956 + C1956 + C33079 * C703 + C1772 * C242 + C1957 + C1957 +
            C33090 * C262) *
               C32798 * C826 +
           (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
            C33090 * C263) *
               C32798 * C825) *
              C32774 * C236 +
          ((C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C32798 * C825 +
           (C1772 * C245 + C1964 + C1964 + C33090 * C265 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1776 * C1129 + C1966 + C1966 +
            C33060 * C1147) *
               C32798 * C826 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C341 -
          ((C1776 * C2079 + C2098 + C2098 + C33060 * C2091 + C1774 * C351 +
            C2099 + C2099 + C33079 * C371 + C1772 * C346 + C2100 + C2100 +
            C33090 * C366) *
               C32798 * C33048 +
           (C1776 * C2080 + C2101 + C2101 + C33060 * C2092 + C1774 * C350 +
            C2102 + C2102 + C33079 * C370 + C1772 * C347 + C2103 + C2103 +
            C33090 * C367) *
               C32798 * C826 +
           (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
            C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
            C33090 * C368) *
               C32798 * C825) *
              C342 +
          ((C1772 * C349 + C2107 + C2107 + C33090 * C369 + C1774 * C2081 +
            C2108 + C2108 + C33079 * C2093 + C1776 * C2082 + C2109 + C2109 +
            C33060 * C2094) *
               C32798 * C825 +
           (C1772 * C350 + C2110 + C2110 + C33090 * C370 + C1774 * C2080 +
            C2111 + C2111 + C33079 * C2092 + C1776 * C2083 + C2112 + C2112 +
            C33060 * C2095) *
               C32798 * C826 +
           (C1772 * C351 + C2113 + C2113 + C33090 * C371 + C1774 * C2079 +
            C2114 + C2114 + C33079 * C2091 + C1776 * C2084 + C2115 + C2115 +
            C33060 * C2096) *
               C32798 * C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C341 -
          ((C1484 * C33057 + C1485 * C5437 + C605 * C5436) * C33048 +
           (C1486 * C33057 + C1487 * C5437 + C606 * C5436) * C33073 +
           (C1658 * C33057 + C1659 * C5437 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
               C33086) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C5436 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C5437 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C33086 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C5436 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C5437 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C33073 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C5436 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C5437 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.046875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C341 -
          ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
           (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
           C1658 * C6187 + C1659 * C6186 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
              C32715 * C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C6185 +
           (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C6186 +
           (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C6187 +
           (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C6188 +
           (C113 * C6335 + C6345 + C6345 + C32815 * C6341) * C6189) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C1772 * C243 + C1960 + C1960 + C33090 * C263 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1776 * C1126 + C1958 + C1958 +
            C33060 * C1144) *
               C5437 +
           (C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C1776 * C1129 + C1966 + C1966 + C33060 * C1147 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1772 * C245 + C1964 + C1964 +
            C33090 * C265) *
               C33057 +
           (C2295 + C2296 + C2297) * C5437 + (C1832 + C1831 + C1830) * C5436) *
              C32715 * C32774 * C32760 * C111 +
          (C1840 * C5436 + (C2294 + C2293 + C2292) * C5437 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.1875) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C32774 * C235 -
          ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
           (C6883 + C6882 + C6881) * C5436) *
              C32715 * C32774 * C236 +
          (C6891 * C5436 + (C6889 + C6888 + C6887) * C5437 +
           (C1772 * C967 + C6860 + C6860 + C33090 * C979 + C1774 * C6333 +
            C6861 + C6861 + C33079 * C6339 + C1776 * C6335 + C6862 + C6862 +
            C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.75) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C341 -
          ((C1776 * C7001 + C7011 + C7011 + C33060 * C7007 + C1774 * C1127 +
            C7012 + C7012 + C33079 * C1145 + C1772 * C1125 + C7013 + C7013 +
            C33090 * C1143) *
               C33057 +
           (C1776 * C2625 + C2637 + C2637 + C33060 * C2631 + C1774 * C1126 +
            C2636 + C2636 + C33079 * C1144 + C1772 * C692 + C2635 + C2635 +
            C33090 * C702) *
               C5437 +
           (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
            C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
            C33090 * C368) *
               C5436) *
              C32715 * C342 +
          ((C1772 * C349 + C2107 + C2107 + C33090 * C369 + C1774 * C2081 +
            C2108 + C2108 + C33079 * C2093 + C1776 * C2082 + C2109 + C2109 +
            C33060 * C2094) *
               C5436 +
           (C1772 * C1126 + C7014 + C7014 + C33090 * C1144 + C1774 * C2625 +
            C7015 + C7015 + C33079 * C2631 + C1776 * C7002 + C7016 + C7016 +
            C33060 * C7008) *
               C5437 +
           (C1772 * C1127 + C7017 + C7017 + C33090 * C1145 + C1774 * C7001 +
            C7018 + C7018 + C33079 * C7007 + C1776 * C7003 + C7019 + C7019 +
            C33060 * C7009) *
               C33057) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[113] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
             (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C32760 * C468 +
          (((C1474 + C1491 + C1490) * C825 + (C1469 + C1489 + C1488) * C826 +
            (C604 * C33089 +
             (C113 * C695 + C711 + C711 + C32815 * C705) * C33077 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C32760 * C468 +
          ((C610 * C103 + C609 * C104 + C608 * C105 + C607 * C106 +
            (C113 * C582 + C594 + C594 + C32815 * C584) * C32798 * C107) *
               C581 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C32798 * C825 +
            (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
               C580 -
           ((C2474 + C2475 + C2476) * C32798 * C33048 +
            (C2477 + C2478 + C2479) * C32798 * C826 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C32798 * C825) *
               C581) *
              C32760 * C468 +
          (((C2479 + C2478 + C2477) * C32798 * C825 +
            (C2476 + C2475 + C2474) * C32798 * C826 +
            (C1772 * C345 + C2459 + C2459 + C33090 * C365 + C1774 * C352 +
             C2460 + C2460 + C33079 * C372 + C1776 * C2443 + C2461 + C2461 +
             C33060 * C2445) *
                C32798 * C33048) *
               C581 -
           ((C1836 + C1837 + C1838) * C32798 * C33048 +
            (C1835 + C1834 + C1833) * C32798 * C826 +
            (C1832 + C1831 + C1830) * C32798 * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C32760 * C468 +
          (((C5977 + C5976 + C5975) * C33086 +
            (C5974 + C5973 + C5972) * C33073 +
            (C604 * C5436 + C3230 * C5437 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
            (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
            C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C32760 * C468 +
          ((C606 * C6185 + C1487 * C6186 + C1486 * C6187 +
            (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C6188 +
            (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C6189) *
               C32715 * C581 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
             C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
             C33060 * C369) *
                C5436 +
            (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
               C32715 * C580 -
           ((C1776 * C7001 + C7011 + C7011 + C33060 * C7007 + C1774 * C1127 +
             C7012 + C7012 + C33079 * C1145 + C1772 * C1125 + C7013 + C7013 +
             C33090 * C1143) *
                C33057 +
            (C1776 * C2625 + C2637 + C2637 + C33060 * C2631 + C1774 * C1126 +
             C2636 + C2636 + C33079 * C1144 + C1772 * C692 + C2635 + C2635 +
             C33090 * C702) *
                C5437 +
            (C1776 * C2081 + C2104 + C2104 + C33060 * C2093 + C1774 * C349 +
             C2105 + C2105 + C33079 * C369 + C1772 * C348 + C2106 + C2106 +
             C33090 * C368) *
                C5436) *
               C32715 * C581) *
              C32760 * C468 +
          (((C2479 + C2478 + C2477) * C5436 +
            (C1772 * C693 + C2638 + C2638 + C33090 * C703 + C1774 * C1128 +
             C2639 + C2639 + C33079 * C1146 + C1776 * C2626 + C2640 + C2640 +
             C33060 * C2632) *
                C5437 +
            (C1772 * C1124 + C7336 + C7336 + C33090 * C1142 + C1774 * C1129 +
             C7337 + C7337 + C33079 * C1147 + C1776 * C7332 + C7338 + C7338 +
             C33060 * C7334) *
                C33057) *
               C32715 * C581 -
           ((C7186 + C7185 + C7184) * C33057 + (C2295 + C2296 + C2297) * C5437 +
            (C1832 + C1831 + C1830) * C5436) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[114] +=
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C235 -
          ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
           (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
           (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
           (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
           (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
              C32774 * C236 +
          ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
           (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
           (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
           (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
           (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C32760 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C32774 * C32760 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C32760 * C110 -
          ((C1836 + C1837 + C1838) * C32798 * C33048 +
           (C1835 + C1834 + C1833) * C32798 * C826 +
           (C1832 + C1831 + C1830) * C32798 * C825) *
              C32774 * C32760 * C111 +
          (C1841 * C825 + (C1838 + C1837 + C1836) * C32798 * C826 +
           (C1772 * C119 + C1809 + C1809 + C33090 * C133 + C1774 * C344 +
            C1810 + C1810 + C33079 * C364 + C1776 * C353 + C1811 + C1811 +
            C33060 * C373) *
               C32798 * C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C32798 * C825 +
           (C1830 + C1831 + C1832) * C32798 * C826 + C1841 * C33048) *
              C32774 * C235 -
          ((C1776 * C1130 + C1952 + C1952 + C33060 * C1148 + C1774 * C694 +
            C1953 + C1953 + C33079 * C704 + C1772 * C241 + C1954 + C1954 +
            C33090 * C261) *
               C32798 * C33048 +
           (C1776 * C1128 + C1955 + C1955 + C33060 * C1146 + C1774 * C693 +
            C1956 + C1956 + C33079 * C703 + C1772 * C242 + C1957 + C1957 +
            C33090 * C262) *
               C32798 * C826 +
           (C1776 * C1126 + C1958 + C1958 + C33060 * C1144 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1772 * C243 + C1960 + C1960 +
            C33090 * C263) *
               C32798 * C825) *
              C32774 * C236 +
          ((C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C32798 * C825 +
           (C1772 * C245 + C1964 + C1964 + C33090 * C265 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1776 * C1129 + C1966 + C1966 +
            C33060 * C1147) *
               C32798 * C826 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C32798 * C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C1772 * C243 + C1960 + C1960 + C33090 * C263 + C1774 * C692 +
            C1959 + C1959 + C33079 * C702 + C1776 * C1126 + C1958 + C1958 +
            C33060 * C1144) *
               C5437 +
           (C1772 * C244 + C1961 + C1961 + C33090 * C264 + C1774 * C1125 +
            C1962 + C1962 + C33079 * C1143 + C1776 * C1127 + C1963 + C1963 +
            C33060 * C1145) *
               C33057) *
              C32715 * C32774 * C32760 * C110 -
          ((C1776 * C1129 + C1966 + C1966 + C33060 * C1147 + C1774 * C1124 +
            C1965 + C1965 + C33079 * C1142 + C1772 * C245 + C1964 + C1964 +
            C33090 * C265) *
               C33057 +
           (C2295 + C2296 + C2297) * C5437 + (C1832 + C1831 + C1830) * C5436) *
              C32715 * C32774 * C32760 * C111 +
          (C1840 * C5436 + (C2294 + C2293 + C2292) * C5437 +
           (C1772 * C246 + C1967 + C1967 + C33090 * C266 + C1774 * C1123 +
            C1968 + C1968 + C33079 * C1141 + C1776 * C1131 + C1969 + C1969 +
            C33060 * C1149) *
               C33057) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C1772 * C115 + C1779 + C1779 + C33090 * C129 + C1774 * C348 +
            C1780 + C1780 + C33079 * C368 + C1776 * C349 + C1781 + C1781 +
            C33060 * C369) *
               C5436 +
           (C6881 + C6882 + C6883) * C5437 + C6891 * C33057) *
              C32715 * C32774 * C235 -
          ((C6887 + C6888 + C6889) * C33057 + (C6886 + C6885 + C6884) * C5437 +
           (C6883 + C6882 + C6881) * C5436) *
              C32715 * C32774 * C236 +
          (C6891 * C5436 + (C6889 + C6888 + C6887) * C5437 +
           (C1772 * C967 + C6860 + C6860 + C33090 * C979 + C1774 * C6333 +
            C6861 + C6861 + C33079 * C6339 + C1776 * C6335 + C6862 + C6862 +
            C33060 * C6341) *
               C33057) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[115] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C32774 * C466 -
           ((C3906 + C3907) * C32798 * C33026 +
            (C3908 + C3909) * C32798 * C2745 +
            (C3910 + C3911) * C32798 * C2744 +
            (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
             C3627 + C3627 + C33027 * C263) *
                C32798 * C2743) *
               C32774 * C467) *
              C468 +
          (((C3911 + C3910) * C32798 * C2743 +
            (C3909 + C3908) * C32798 * C2744 +
            (C3907 + C3906) * C32798 * C2745 +
            (C3461 * C239 + C3892 + C3892 + C33027 * C259 + C3463 * C696 +
             C3893 + C3893 + C32902 * C706) *
                C32798 * C33026) *
               C32774 * C467 -
           ((C3516 + C3517) * C32798 * C33026 +
            (C3515 + C3514) * C32798 * C2745 +
            (C3513 + C3512) * C32798 * C2744 +
            (C3511 + C3510) * C32798 * C2743) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C32774 * C466 -
           (((C8547 + C8548) * C33057 + C8895 * C5437 + C4902 * C5436) *
                C32725 +
            ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
             (C4547 + C4546) * C5436) *
                C33007) *
               C32774 * C467) *
              C468 +
          (((C4900 * C5436 + C8526 * C5437 + (C8548 + C8547) * C33057) *
                C33007 +
            (C4359 * C5436 + (C4549 + C4548) * C5437 +
             (C3461 * C964 + C4528 + C4528 + C33027 * C976 + C3463 * C1639 +
              C4529 + C4529 + C32902 * C1645) *
                 C33057) *
                C32725) *
               C32774 * C467 -
           (((C4548 + C4549) * C33057 + C4901 * C5437 +
             (C3513 + C3512) * C5436) *
                C32725 +
            (C8895 * C33057 + C4902 * C5437 + (C3511 + C3510) * C5436) *
                C33007) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[116] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C580 -
           ((C4068 + C4069) * C32798 * C33026 +
            (C4070 + C4071) * C32798 * C2745 +
            (C4072 + C4073) * C32798 * C2744 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C32798 * C2743) *
               C581) *
              C466 +
          (((C3461 * C692 + C4204 + C4204 + C33027 * C702 + C3463 * C1126 +
             C4205 + C4205 + C32902 * C1144) *
                C32798 * C2743 +
            (C3461 * C693 + C4206 + C4206 + C33027 * C703 + C3463 * C1128 +
             C4207 + C4207 + C32902 * C1146) *
                C32798 * C2744 +
            (C3461 * C694 + C4208 + C4208 + C33027 * C704 + C3463 * C1130 +
             C4209 + C4209 + C32902 * C1148) *
                C32798 * C2745 +
            (C3461 * C695 + C4210 + C4210 + C33027 * C705 + C3463 * C2261 +
             C4211 + C4211 + C32902 * C2263) *
                C32798 * C33026) *
               C581 -
           ((C3906 + C3907) * C32798 * C33026 +
            (C3908 + C3909) * C32798 * C2745 +
            (C3910 + C3911) * C32798 * C2744 +
            (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
             C3627 + C3627 + C33027 * C263) *
                C32798 * C2743) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C33057 + (C5115 + C5116) * C5437 +
             (C4072 + C4073) * C5436) *
                C32725 +
            ((C9306 + C9307) * C33057 + (C5325 + C5326) * C5437 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C5436) *
                C33007) *
               C581) *
              C466 +
          ((((C5326 + C5325) * C5436 + (C9307 + C9306) * C5437 +
             (C3461 * C1637 + C9298 + C9298 + C33027 * C1643 + C3463 * C6334 +
              C9299 + C9299 + C32902 * C6340) *
                 C33057) *
                C33007 +
            ((C5116 + C5115) * C5436 + (C9099 + C9098) * C5437 +
             (C3461 * C1638 + C9300 + C9300 + C33027 * C1644 + C3463 * C7165 +
              C9301 + C9301 + C32902 * C7167) *
                 C33057) *
                C32725) *
               C581 -
           (((C8547 + C8548) * C33057 + C8895 * C5437 + C4902 * C5436) *
                C32725 +
            ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
             (C4547 + C4546) * C5436) *
                C33007) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[117] +=
        (-std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C235 -
          ((C3463 * C695 + C3620 + C3620 + C32902 * C705 + C3461 * C240 +
            C3621 + C3621 + C33027 * C260) *
               C32798 * C33026 +
           (C3463 * C694 + C3622 + C3622 + C32902 * C704 + C3461 * C241 +
            C3623 + C3623 + C33027 * C261) *
               C32798 * C2745 +
           (C3463 * C693 + C3624 + C3624 + C32902 * C703 + C3461 * C242 +
            C3625 + C3625 + C33027 * C262) *
               C32798 * C2744 +
           (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
            C3627 + C3627 + C33027 * C263) *
               C32798 * C2743) *
              C32774 * C236 +
          ((C3461 * C244 + C3628 + C3628 + C33027 * C264 + C3463 * C1125 +
            C3629 + C3629 + C32902 * C1143) *
               C32798 * C2743 +
           (C3461 * C245 + C3630 + C3630 + C33027 * C265 + C3463 * C1124 +
            C3631 + C3631 + C32902 * C1142) *
               C32798 * C2744 +
           (C3461 * C246 + C3632 + C3632 + C33027 * C266 + C3463 * C1123 +
            C3633 + C3633 + C32902 * C1141) *
               C32798 * C2745 +
           (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
            C3635 + C3635 + C32902 * C1463) *
               C32798 * C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C32760 * C110 -
          ((C3516 + C3517) * C32798 * C33026 +
           (C3515 + C3514) * C32798 * C2745 + (C3513 + C3512) * C32798 * C2744 +
           (C3511 + C3510) * C32798 * C2743) *
              C32774 * C32760 * C111 +
          (C3520 * C2743 + C3521 * C2744 + (C3517 + C3516) * C32798 * C2745 +
           (C3461 * C120 + C3492 + C3492 + C33027 * C134 + C3463 * C582 +
            C3493 + C3493 + C32902 * C584) *
               C32798 * C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C341 -
          ((C3463 * C352 + C3734 + C3734 + C32902 * C372 + C3461 * C345 +
            C3735 + C3735 + C33027 * C365) *
               C32798 * C33026 +
           (C3463 * C351 + C3736 + C3736 + C32902 * C371 + C3461 * C346 +
            C3737 + C3737 + C33027 * C366) *
               C32798 * C2745 +
           (C3463 * C350 + C3738 + C3738 + C32902 * C370 + C3461 * C347 +
            C3739 + C3739 + C33027 * C367) *
               C32798 * C2744 +
           (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
            C3741 + C3741 + C33027 * C368) *
               C32798 * C2743) *
              C342 +
          ((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
            C3743 + C3743 + C32902 * C2093) *
               C32798 * C2743 +
           (C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
            C3745 + C3745 + C32902 * C2092) *
               C32798 * C2744 +
           (C3461 * C351 + C3746 + C3746 + C33027 * C371 + C3463 * C2079 +
            C3747 + C3747 + C32902 * C2091) *
               C32798 * C2745 +
           (C3461 * C352 + C3748 + C3748 + C33027 * C372 + C3463 * C2443 +
            C3749 + C3749 + C32902 * C2445) *
               C32798 * C33026) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + (C4553 + C4552) * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 +
            (C4551 + C4550) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C4548 + C4549) * C33057 + C4901 * C5437 +
            (C3513 + C3512) * C5436) *
               C32725 +
           ((C4550 + C4551) * C33057 + C4902 * C5437 +
            (C3511 + C3510) * C5436) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C3518 * C5436 + C4359 * C5437 + (C4549 + C4548) * C33057) * C33007 +
           (C3519 * C5436 + (C3907 + C3906) * C5437 +
            (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
             C3635 + C3635 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C8547 + C8548) * C33057 + (C4550 + C4551) * C5437 +
            C4902 * C5436) *
               C32725 +
           ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
            (C4547 + C4546) * C5436) *
               C33007) *
              C32774 * C236 +
          ((C8525 * C5436 + (C8550 + C8549) * C5437 +
            (C3461 * C967 + C8535 + C8535 + C33027 * C979 + C3463 * C6333 +
             C8536 + C8536 + C32902 * C6339) *
                C33057) *
               C33007 +
           (C8526 * C5436 + (C8548 + C8547) * C5437 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(2.25) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C341 -
          (((C3463 * C1129 + C5318 + C5318 + C32902 * C1147 + C3461 * C1124 +
             C5317 + C5317 + C33027 * C1142) *
                C33057 +
            (C5115 + C5116) * C5437 + (C4072 + C4073) * C5436) *
               C32725 +
           ((C3463 * C1127 + C5316 + C5316 + C32902 * C1145 + C3461 * C1125 +
             C5315 + C5315 + C33027 * C1143) *
                C33057 +
            (C5325 + C5326) * C5437 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C5436) *
               C33007) *
              C342 +
          (((C3461 * C349 + C3742 + C3742 + C33027 * C369 + C3463 * C2081 +
             C3743 + C3743 + C32902 * C2093) *
                C5436 +
            (C3461 * C1126 + C4700 + C4700 + C33027 * C1144 + C3463 * C2625 +
             C4701 + C4701 + C32902 * C2631) *
                C5437 +
            (C3461 * C1127 + C8697 + C8697 + C33027 * C1145 + C3463 * C7001 +
             C8698 + C8698 + C32902 * C7007) *
                C33057) *
               C33007 +
           ((C3461 * C350 + C3744 + C3744 + C33027 * C370 + C3463 * C2080 +
             C3745 + C3745 + C32902 * C2092) *
                C5436 +
            (C3461 * C1128 + C4702 + C4702 + C33027 * C1146 + C3463 * C2626 +
             C4703 + C4703 + C32902 * C2632) *
                C5437 +
            (C3461 * C1129 + C8699 + C8699 + C33027 * C1147 + C3463 * C7332 +
             C8700 + C8700 + C32902 * C7334) *
                C33057) *
               C32725) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[118] +=
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C32798 * C2743 +
            (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
               C580 -
           ((C4068 + C4069) * C32798 * C33026 +
            (C4070 + C4071) * C32798 * C2745 +
            (C4072 + C4073) * C32798 * C2744 +
            (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
             C3741 + C3741 + C33027 * C368) *
                C32798 * C2743) *
               C581) *
              C32760 * C468 +
          (((C4073 + C4072) * C32798 * C2743 +
            (C4071 + C4070) * C32798 * C2744 +
            (C4069 + C4068) * C32798 * C2745 +
            (C3461 * C344 + C4054 + C4054 + C33027 * C364 + C3463 * C353 +
             C4055 + C4055 + C32902 * C373) *
                C32798 * C33026) *
               C581 -
           ((C3516 + C3517) * C32798 * C33026 +
            (C3515 + C3514) * C32798 * C2745 +
            (C3513 + C3512) * C32798 * C2744 +
            (C3511 + C3510) * C32798 * C2743) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(6.75) * 2 * std::pow(Pi, 2.5) *
         (((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
              C3467 + C3467 + C32902 * C368) *
                 C5436 +
             (C4546 + C4547) * C5437 + C8525 * C33057) *
                C33007 +
            ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
                C32725) *
               C580 -
           (((C9098 + C9099) * C33057 + (C5115 + C5116) * C5437 +
             (C4072 + C4073) * C5436) *
                C32725 +
            ((C3463 * C1127 + C5316 + C5316 + C32902 * C1145 + C3461 * C1125 +
              C5315 + C5315 + C33027 * C1143) *
                 C33057 +
             (C5325 + C5326) * C5437 +
             (C3463 * C349 + C3740 + C3740 + C32902 * C369 + C3461 * C348 +
              C3741 + C3741 + C33027 * C368) *
                 C5436) *
                C33007) *
               C581) *
              C32760 * C468 +
          ((((C4073 + C4072) * C5436 + (C5116 + C5115) * C5437 +
             (C9099 + C9098) * C33057) *
                C33007 +
            ((C4071 + C4070) * C5436 + (C5114 + C5113) * C5437 +
             (C3461 * C1123 + C5319 + C5319 + C33027 * C1141 + C3463 * C1131 +
              C5320 + C5320 + C32902 * C1149) *
                 C33057) *
                C32725) *
               C581 -
           (((C4548 + C4549) * C33057 + C4901 * C5437 +
             (C3513 + C3512) * C5436) *
                C32725 +
            (C8895 * C33057 + C4902 * C5437 + (C3511 + C3510) * C5436) *
                C33007) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[119] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C32760 * C110 -
          ((C3516 + C3517) * C32798 * C33026 +
           (C3515 + C3514) * C32798 * C2745 + (C3513 + C3512) * C32798 * C2744 +
           (C3511 + C3510) * C32798 * C2743) *
              C32774 * C32760 * C111 +
          (C3520 * C2743 + C3521 * C2744 + (C3517 + C3516) * C32798 * C2745 +
           (C3461 * C120 + C3492 + C3492 + C33027 * C134 + C3463 * C582 +
            C3493 + C3493 + C32902 * C584) *
               C32798 * C33026) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
            C3467 + C3467 + C32902 * C368) *
               C32798 * C2743 +
           (C3510 + C3511) * C32798 * C2744 + C3520 * C2745 + C3521 * C33026) *
              C32774 * C235 -
          ((C3463 * C695 + C3620 + C3620 + C32902 * C705 + C3461 * C240 +
            C3621 + C3621 + C33027 * C260) *
               C32798 * C33026 +
           (C3463 * C694 + C3622 + C3622 + C32902 * C704 + C3461 * C241 +
            C3623 + C3623 + C33027 * C261) *
               C32798 * C2745 +
           (C3463 * C693 + C3624 + C3624 + C32902 * C703 + C3461 * C242 +
            C3625 + C3625 + C33027 * C262) *
               C32798 * C2744 +
           (C3463 * C692 + C3626 + C3626 + C32902 * C702 + C3461 * C243 +
            C3627 + C3627 + C33027 * C263) *
               C32798 * C2743) *
              C32774 * C236 +
          ((C3461 * C244 + C3628 + C3628 + C33027 * C264 + C3463 * C1125 +
            C3629 + C3629 + C32902 * C1143) *
               C32798 * C2743 +
           (C3461 * C245 + C3630 + C3630 + C33027 * C265 + C3463 * C1124 +
            C3631 + C3631 + C32902 * C1142) *
               C32798 * C2744 +
           (C3461 * C246 + C3632 + C3632 + C33027 * C266 + C3463 * C1123 +
            C3633 + C3633 + C32902 * C1141) *
               C32798 * C2745 +
           (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
            C3635 + C3635 + C32902 * C1463) *
               C32798 * C33026) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + (C4553 + C4552) * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 +
            (C4551 + C4550) * C33057) *
               C32725) *
              C32774 * C32760 * C110 -
          (((C4548 + C4549) * C33057 + C4901 * C5437 +
            (C3513 + C3512) * C5436) *
               C32725 +
           ((C4550 + C4551) * C33057 + C4902 * C5437 +
            (C3511 + C3510) * C5436) *
               C33007) *
              C32774 * C32760 * C111 +
          ((C3518 * C5436 + C4359 * C5437 + (C4549 + C4548) * C33057) * C33007 +
           (C3519 * C5436 + (C3907 + C3906) * C5437 +
            (C3461 * C247 + C3634 + C3634 + C33027 * C267 + C3463 * C1461 +
             C3635 + C3635 + C32902 * C1463) *
                C33057) *
               C32725) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C3461 * C115 + C3466 + C3466 + C33027 * C129 + C3463 * C348 +
             C3467 + C3467 + C32902 * C368) *
                C5436 +
            (C4546 + C4547) * C5437 + C8525 * C33057) *
               C33007 +
           ((C3510 + C3511) * C5436 + C4900 * C5437 + C8526 * C33057) *
               C32725) *
              C32774 * C235 -
          (((C8547 + C8548) * C33057 + (C4550 + C4551) * C5437 +
            C4902 * C5436) *
               C32725 +
           ((C8549 + C8550) * C33057 + (C4552 + C4553) * C5437 +
            (C4547 + C4546) * C5436) *
               C33007) *
              C32774 * C236 +
          ((C8525 * C5436 + (C8550 + C8549) * C5437 +
            (C3461 * C967 + C8535 + C8535 + C33027 * C979 + C3463 * C6333 +
             C8536 + C8536 + C32902 * C6339) *
                C33057) *
               C33007 +
           (C8526 * C5436 + (C8548 + C8547) * C5437 +
            (C3461 * C968 + C8537 + C8537 + C33027 * C980 + C3463 * C6518 +
             C8538 + C8538 + C32902 * C6520) *
                C33057) *
               C32725) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[120] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C32774 * C466 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C32774 * C467) *
              C468 +
          ((C498 * C103 + C497 * C104 + C496 * C105 + C495 * C106 +
            (C113 * C470 + C482 + C482 + C32815 * C472) * C32798 * C107) *
               C32774 * C467 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C32774 * C466 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C32774 * C467) *
              C468 +
          (((C1314 + C1313 + C1312) * C825 + (C1311 + C1310 + C1309) * C826 +
            (C492 * C33089 + C850 * C33077 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C32774 * C466 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C32774 * C467) *
              C468 +
          (((C5825 + C5824 + C5823) * C33086 +
            (C5822 + C5821 + C5820) * C33073 +
            (C492 * C5436 + C850 * C5437 +
             (C113 * C1305 + C1315 + C1315 + C32815 * C1307) * C33057) *
                C33048) *
               C32774 * C467 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C32774 * C466 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C32774 * C467) *
              C468 +
          ((C494 * C6185 + C848 * C6186 + C1012 * C6187 + C6436 * C6188 +
            (C113 * C6427 + C6433 + C6433 + C32815 * C6429) * C6189) *
               C32715 * C32774 * C467 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C32774 * C466) *
              C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[121] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C466 +
          (((C113 * C692 + C708 + C708 + C32815 * C702) * C32798 * C103 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C32798 * C104 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C32798 * C105 +
            (C113 * C695 + C711 + C711 + C32815 * C705) * C32798 * C106 +
            (C113 * C696 + C712 + C712 + C32815 * C706) * C32798 * C107) *
               C581 -
           (C495 * C107 + C496 * C106 + C497 * C105 + C498 * C104 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            (C1658 * C33057 + C1659 * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C466 +
          (((C1659 * C33089 + C1658 * C33077 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C825 +
            (C1487 * C33089 + C1486 * C33077 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C826 +
            (C1485 * C33089 + C1484 * C33077 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C1309 + C1310 + C1311) * C33048 + (C1312 + C1313 + C1314) * C826 +
            (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C466 +
          (((C1659 * C5436 + C1658 * C5437 +
             (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C33057) *
                C33086 +
            (C1487 * C5436 + C1486 * C5437 +
             (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C33057) *
                C33073 +
            (C1485 * C5436 + C1484 * C5437 +
             (C113 * C1639 + C1653 + C1653 + C32815 * C1645) * C33057) *
                C33048) *
               C581 -
           ((C5820 + C5821 + C5822) * C33048 +
            (C5823 + C5824 + C5825) * C33073 +
            (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
               C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           (C6617 * C6189 + C6618 * C6188 + C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C466 +
          ((C1659 * C6185 + C1658 * C6186 + C6618 * C6187 + C6617 * C6188 +
            (C113 * C6604 + C6612 + C6612 + C32815 * C6606) * C6189) *
               C32715 * C581 -
           (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
            C1009 * C6185) *
               C32715 * C580) *
              C467) *
         C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[122] +=
        (-std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C235 -
          ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
           (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
           (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
           (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
           (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
              C32774 * C236 +
          ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
           (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
           (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
           (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
           (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C32760 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C32774 * C32760 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C341 -
          ((C113 * C344 + C375 + C375 + C32815 * C364) * C32798 * C107 +
           (C113 * C345 + C376 + C376 + C32815 * C365) * C32798 * C106 +
           (C113 * C346 + C377 + C377 + C32815 * C366) * C32798 * C105 +
           (C113 * C347 + C378 + C378 + C32815 * C367) * C32798 * C104 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
              C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C32798 * C103 +
           (C113 * C350 + C381 + C381 + C32815 * C370) * C32798 * C104 +
           (C113 * C351 + C382 + C382 + C32815 * C371) * C32798 * C105 +
           (C113 * C352 + C383 + C383 + C32815 * C372) * C32798 * C106 +
           (C113 * C353 + C384 + C384 + C32815 * C373) * C32798 * C107) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C341 -
          (((C113 * C1123 + C1151 + C1151 + C32815 * C1141) * C33057 +
            (C113 * C694 + C710 + C710 + C32815 * C704) * C33077 +
            C605 * C33089) *
               C33048 +
           ((C113 * C1124 + C1152 + C1152 + C32815 * C1142) * C33057 +
            (C113 * C693 + C709 + C709 + C32815 * C703) * C33077 +
            C606 * C33089) *
               C826 +
           ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
            (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
               C825) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C33089 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C33077 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C825 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C33089 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C33077 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C826 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C33089 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C33077 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C341 -
          ((C1484 * C33057 + C1485 * C5437 + C605 * C5436) * C33048 +
           (C1486 * C33057 + C1487 * C5437 + C606 * C5436) * C33073 +
           (C1658 * C33057 + C1659 * C5437 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
               C33086) *
              C342 +
          (((C113 * C349 + C380 + C380 + C32815 * C369) * C5436 +
            (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C5437 +
            (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C33057) *
               C33086 +
           ((C113 * C350 + C381 + C381 + C32815 * C370) * C5436 +
            (C113 * C1128 + C1156 + C1156 + C32815 * C1146) * C5437 +
            (C113 * C1129 + C1157 + C1157 + C32815 * C1147) * C33057) *
               C33073 +
           ((C113 * C351 + C382 + C382 + C32815 * C371) * C5436 +
            (C113 * C1130 + C1158 + C1158 + C32815 * C1148) * C5437 +
            (C113 * C1131 + C1159 + C1159 + C32815 * C1149) * C33057) *
               C33048) *
              C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.140625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.5625) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C341 -
          ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
           (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
           C1658 * C6187 + C1659 * C6186 +
           (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
              C32715 * C342 +
          ((C113 * C349 + C380 + C380 + C32815 * C369) * C6185 +
           (C113 * C1126 + C1154 + C1154 + C32815 * C1144) * C6186 +
           (C113 * C1127 + C1155 + C1155 + C32815 * C1145) * C6187 +
           (C113 * C6334 + C6344 + C6344 + C32815 * C6340) * C6188 +
           (C113 * C6335 + C6345 + C6345 + C32815 * C6341) * C6189) *
              C32715 * C343) *
         C32760 * C32748) /
            (p * q * std::sqrt(p + q));
    d2ee[123] +=
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
            C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
               C580 -
           (C607 * C107 + C608 * C106 + C609 * C105 + C610 * C104 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C32798 * C103) *
               C581) *
              C32760 * C468 +
          ((C610 * C103 + C609 * C104 + C608 * C105 + C607 * C106 +
            (C113 * C582 + C594 + C594 + C32815 * C584) * C32798 * C107) *
               C581 -
           (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
            C169 * C103) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
             C1009 * C33077 + C1010 * C33057) *
                C825 +
            (C829 + C830 + C851) * C826 + C854 * C33048) *
               C580 -
           ((C1488 + C1489 + C1469) * C33048 + (C1490 + C1491 + C1474) * C826 +
            ((C113 * C1125 + C1153 + C1153 + C32815 * C1143) * C33057 +
             (C113 * C692 + C708 + C708 + C32815 * C702) * C33077 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C33089) *
                C825) *
               C581) *
              C32760 * C468 +
          (((C1474 + C1491 + C1490) * C825 + (C1469 + C1489 + C1488) * C826 +
            (C604 * C33089 +
             (C113 * C695 + C711 + C711 + C32815 * C705) * C33077 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
            (C851 + C830 + C829) * C825) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         (((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
             C1009 * C5437 + C1010 * C33057) *
                C33086 +
            (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
               C580 -
           ((C5972 + C5973 + C5974) * C33048 +
            (C5975 + C5976 + C5977) * C33073 +
            (C1658 * C33057 + C1659 * C5437 +
             (C113 * C348 + C379 + C379 + C32815 * C368) * C5436) *
                C33086) *
               C581) *
              C32760 * C468 +
          (((C5977 + C5976 + C5975) * C33086 +
            (C5974 + C5973 + C5972) * C33073 +
            (C604 * C5436 + C3230 * C5437 +
             (C113 * C1461 + C1475 + C1475 + C32815 * C1463) * C33057) *
                C33048) *
               C581 -
           ((C5449 + C5450 + C5451) * C33048 +
            (C5448 + C5447 + C5446) * C33073 +
            (C5445 + C5444 + C5443) * C33086) *
               C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(1.6875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 +
            C1009 * C6186 + C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
               C32715 * C580 -
           ((C113 * C6333 + C6343 + C6343 + C32815 * C6339) * C6189 +
            (C113 * C1637 + C1651 + C1651 + C32815 * C1643) * C6188 +
            C1658 * C6187 + C1659 * C6186 +
            (C113 * C348 + C379 + C379 + C32815 * C368) * C6185) *
               C32715 * C581) *
              C32760 * C468 +
          ((C606 * C6185 + C1487 * C6186 + C1486 * C6187 +
            (C113 * C1638 + C1652 + C1652 + C32815 * C1644) * C6188 +
            (C113 * C6518 + C6522 + C6522 + C32815 * C6520) * C6189) *
               C32715 * C581 -
           (C6436 * C6189 + C1012 * C6188 + C848 * C6187 + C494 * C6186 +
            C164 * C6185) *
               C32715 * C580) *
              C32760 * C469)) /
            (p * q * std::sqrt(p + q));
    d2ee[124] +=
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C32760 * C110 -
          (C173 * C107 + C172 * C106 + C171 * C105 + C170 * C104 +
           C169 * C103) *
              C32774 * C32760 * C111 +
          (C170 * C103 + C171 * C104 + C172 * C105 + C173 * C106 +
           (C113 * C121 + C153 + C153 + C32815 * C135) * C32798 * C107) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C32798 * C103 +
           C169 * C104 + C170 * C105 + C171 * C106 + C172 * C107) *
              C32774 * C235 -
          ((C113 * C239 + C270 + C270 + C32815 * C259) * C32798 * C107 +
           (C113 * C240 + C271 + C271 + C32815 * C260) * C32798 * C106 +
           (C113 * C241 + C272 + C272 + C32815 * C261) * C32798 * C105 +
           (C113 * C242 + C273 + C273 + C32815 * C262) * C32798 * C104 +
           (C113 * C243 + C274 + C274 + C32815 * C263) * C32798 * C103) *
              C32774 * C236 +
          ((C113 * C244 + C275 + C275 + C32815 * C264) * C32798 * C103 +
           (C113 * C245 + C276 + C276 + C32815 * C265) * C32798 * C104 +
           (C113 * C246 + C277 + C277 + C32815 * C266) * C32798 * C105 +
           (C113 * C247 + C278 + C278 + C32815 * C267) * C32798 * C106 +
           (C113 * C248 + C279 + C279 + C32815 * C268) * C32798 * C107) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            (C113 * C243 + C274 + C274 + C32815 * C263) * C33077 +
            (C113 * C244 + C275 + C275 + C32815 * C264) * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C32760 * C110 -
          ((C853 + C839 + C840) * C33048 + (C852 + C834 + C833) * C826 +
           (C851 + C830 + C829) * C825) *
              C32774 * C32760 * C111 +
          (C854 * C825 + (C840 + C839 + C853) * C826 +
           (C167 * C33089 + C491 * C33077 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C33089 +
            C1009 * C33077 + C1010 * C33057) *
               C825 +
           (C829 + C830 + C851) * C826 + C854 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C33077 + C493 * C33089) * C33048 +
           (C1012 * C33057 + C848 * C33077 + C494 * C33089) * C826 +
           (C1013 * C33057 + C1010 * C33077 + C1009 * C33089) * C825) *
              C32774 * C236 +
          ((C1010 * C33089 + C1013 * C33077 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C825 +
           (C848 * C33089 + C1012 * C33077 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C826 +
           (C849 * C33089 + C1011 * C33077 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C32760 * C110 -
          ((C5449 + C5450 + C5451) * C33048 + (C5448 + C5447 + C5446) * C33073 +
           (C5445 + C5444 + C5443) * C33086) *
              C32774 * C32760 * C111 +
          (C5453 * C33086 + (C5451 + C5450 + C5449) * C33073 +
           (C167 * C5436 + C491 * C5437 +
            (C113 * C248 + C279 + C279 + C32815 * C268) * C33057) *
               C33048) *
              C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         ((((C113 * C115 + C137 + C137 + C32815 * C129) * C5436 +
            C1009 * C5437 + C1010 * C33057) *
               C33086 +
           (C5443 + C5444 + C5445) * C33073 + C5453 * C33048) *
              C32774 * C235 -
          ((C1011 * C33057 + C849 * C5437 + C493 * C5436) * C33048 +
           (C1012 * C33057 + C848 * C5437 + C494 * C5436) * C33073 +
           (C1013 * C33057 + C1010 * C5437 + C1009 * C5436) * C33086) *
              C32774 * C236 +
          ((C1010 * C5436 + C1013 * C5437 +
            (C113 * C967 + C996 + C996 + C32815 * C979) * C33057) *
               C33086 +
           (C848 * C5436 + C1012 * C5437 +
            (C113 * C968 + C997 + C997 + C32815 * C980) * C33057) *
               C33073 +
           (C849 * C5436 + C1011 * C5437 +
            (C113 * C969 + C998 + C998 + C32815 * C981) * C33057) *
               C33048) *
              C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q)) +
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 +
           (C113 * C967 + C996 + C996 + C32815 * C979) * C6189) *
              C32715 * C32774 * C32760 * C110 -
          ((C113 * C968 + C997 + C997 + C32815 * C980) * C6189 + C1012 * C6188 +
           C848 * C6187 + C494 * C6186 + C164 * C6185) *
              C32715 * C32774 * C32760 * C111 +
          (C165 * C6185 + C493 * C6186 + C849 * C6187 + C1011 * C6188 +
           (C113 * C969 + C998 + C998 + C32815 * C981) * C6189) *
              C32715 * C32774 * C32760 * C112)) /
            (p * q * std::sqrt(p + q)) -
        (std::sqrt(0.421875) * 2 * std::pow(Pi, 2.5) *
         (((C113 * C115 + C137 + C137 + C32815 * C129) * C6185 + C1009 * C6186 +
           C1010 * C6187 + C1013 * C6188 + C6270 * C6189) *
              C32715 * C32774 * C235 -
          (C6271 * C6189 + C6270 * C6188 + C1013 * C6187 + C1010 * C6186 +
           C1009 * C6185) *
              C32715 * C32774 * C236 +
          (C1010 * C6185 + C1013 * C6186 + C6270 * C6187 + C6271 * C6188 +
           (C113 * C6254 + C6265 + C6265 + C32815 * C6258) * C6189) *
              C32715 * C32774 * C237) *
         C32748) /
            (p * q * std::sqrt(p + q));
}
